;;; lean-ts-infoview.el --- External infoview -*- lexical-binding: t; -*-

;; Copyright (c) 2025 Lua Reis. All rights reserved.

;; Author: Lua <me@lua.blog.br>
;; Keywords: languages 

;; This program is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with this program.  If not, see <https://www.gnu.org/licenses/>.

;;; Commentary:

;; 

;;; Code:

(require 'simple-httpd)
(require 'websocket)
(require 'eglot)
(require 'lean-ts-data)
(require 'lean-ts-server)

(defgroup lean-ts-infoview nil
  "Lean 4 infoview."
  :prefix "lean-ts-infoview-"
  :group 'lean-ts)

(defvar lean-ts-infoview-config
  '(:allErrorsOnLine t
    :autoOpenShowsGoal t
    :debounceTime 50
    :expectedTypeVisibility "Expanded by default"
    :showGoalNames t
    :emphasizeFirstGoal :json-false
    :reverseTacticState :json-false
    :hideTypeAssumptions :json-false
    :hideInstanceAssumptions :json-false
    :hideInaccessibleAssumptions :json-false
    :hideLetValues :json-false
    :showTooltipOnHover t))

(defvar lean-ts-infoview-port 6174
  "Port for the websocket server.")

(defvar lean-ts-infoview-host 'local
  "Host for the websocket server.")

(defvar lean-ts-infoview-events-buffer-config '(:size 20000 :format short)
  "Logging configuration for the infoview RPC connection.")

(defvar lean-ts-infoview--server nil
  "The global infoview websocket server.")

(defvar lean-ts-infoview--connections nil
  "Global list of infoview connections to server.")

(defun lean-ts-infoview--start-server ()
  "Start or restart the infoview server."
  (when lean-ts-infoview--server
    (websocket-server-close lean-ts-infoview--server))
  (setq lean-ts-infoview--server
        (websocket-server
         lean-ts-infoview-port
         :host lean-ts-infoview-host
         :on-open #'lean-ts-infoview--conn-open
         :on-close #'lean-ts-infoview--conn-close
         :on-message #'lean-ts-infoview--conn-message)))

;;;; Websocket RPC connection

(defclass lean-ts-infoview--connection (jsonrpc-connection)
  ((socket :initarg :socket)
   (client-watchers :initform nil)
   (server-watchers :initform nil)
   (rpc-sessions :initform nil))
  :documentation "Represents a connection to an infoview window.")

;; hack: async responses
(cl-defmethod jsonrpc-connection-send :around
  ((connection lean-ts-infoview--connection) &rest args &key id method result &allow-other-keys)
  "Implement async responses."
  (if (functionp result)
      (funcall result
               (lambda (r) (jsonrpc--reply connection id method :result r))
               (lambda (e) (jsonrpc--reply connection id method :error e)))
    (apply #'cl-call-next-method connection args)))

;; HACK, FIXME: `json-serialize' hardcodes a limit of 50 depth levels,
;; which is not enough for some Lean responses. If emacs-devel does
;; not change this, we need to make eglot--request use `json-encode'
;; instead.
(defvar lean-ts-infoview--use-encode nil
  "Dynamically non-nil to use `lean-ts-infoview--json-encode'.")

(cl-defmethod jsonrpc-connection-send ((connection lean-ts-infoview--connection)
                                       &rest args
                                       &key
                                       id
                                       method
                                       _params
                                       (_result nil result-supplied-p)
                                       error)
  "Send message ARGS to CONNECTION."
  (when method
    (setq args
          (plist-put args :method
                     (cond ((keywordp method) (substring (symbol-name method) 1))
                           ((symbolp method) (symbol-name method))
                           ((stringp method) method)
                           (t (error "[jsonrpc] invalid method %s" method))))))
  (let* ((kind (cond ((or result-supplied-p error) 'reply)
                     (id 'request)
                     (method 'notification)))
         (converted (jsonrpc-convert-to-endpoint connection args kind))
         (json (let ((lean-ts-infoview--use-encode t))
                 (jsonrpc--json-encode converted))))
    (websocket-send-text (oref connection socket) json)
    (jsonrpc--event
     connection
     'client
     :json json
     :kind kind
     :message args
     :foreign-message converted)))

(defun lean-ts-infoview--location ()
  "Return a Location with the active mark or the point position."
  (cl-destructuring-bind (start . end)
      (if mark-active
          (cons (region-beginning) (region-end))
        (cons (point) (point)))
    (ignore-errors
      (apply #'list 
            :range (list :start
                         (eglot--pos-to-lsp-position start)
                         :end
                         (eglot--pos-to-lsp-position end))
            (eglot--TextDocumentIdentifier)))))

(defun lean-ts-infoview--conn-open (socket)
  "Open a connection for infoview using the given SOCKET."
  (let ((conn (lean-ts-infoview--connection
               :socket socket
               :name "Lean Infoview"
               :events-buffer-config lean-ts-infoview-events-buffer-config
               :request-dispatcher #'lean-ts-infoview--dispatcher
               :notification-dispatcher #'lean-ts-infoview--dispatcher)))
    (setf (websocket-client-data socket) conn)
    (push conn lean-ts-infoview--connections)

    ;; Initialize, either with the current buffer, or some other Lean server
    (lean-ts-infoview--send-location)
    (let* ((current (eglot-current-server))
           (server (or (and (cl-typep current 'lean-ts-eglot-server) current)
                       (cl-loop for servers hash-values of eglot--servers-by-project do
                                (dolist (server servers)
                                  (when (cl-typep server 'lean-ts-eglot-server)
                                    (cl-return server)))))))
      (lean-ts-infoview--send-initialize server))))

(defun lean-ts-infoview--conn-close (socket)
  "Remove the connection of SOCKET from `lean-ts-infoview--connections'."
  (dolist (s (oref (websocket-client-data socket) rpc-sessions))
    (cancel-timer (cdr s)))
  (setq lean-ts-infoview--connections
        (cl-delete socket lean-ts-infoview--connections
                   :key (lambda (i) (oref i socket)))))

(advice-add 'jsonrpc--json-encode :around
            (defun lean-ts-infoview--json-encode (f obj)
              (if lean-ts-infoview--use-encode
                   (let ((json-false :json-false)
                         (json-null nil))
                     (json-encode obj))
                (funcall f obj))))

(defun lean-ts-infoview--conn-message (socket frame)
  "Receive RPC message FRAME from websocket SOCKET."
  (let* ((conn (websocket-client-data socket))
         (json (websocket-frame-text frame))
         (msg (json-parse-string json
                                 :object-type 'plist
                                 :null-object nil
                                 :false-object :json-false)))
    (jsonrpc-connection-receive conn (plist-put msg :jsonrpc-json json))))

;;;; Editor API implementation

(cl-defgeneric lean-ts-infoview--dispatcher (conn method params))

(cl-defmethod lean-ts-infoview--dispatcher
  (_ (_ (eql saveConfig)) params)
  (cl-destructuring-bind (&key config) params
    (message "NOT IMPLEMENTED: save-config")))

(cl-defmethod lean-ts-infoview--dispatcher
  (conn (_ (eql sendClientRequest)) params)
  (lambda (resolve reject)
    (cl-destructuring-bind (&key uri method params) params
      (with-current-buffer (find-file-noselect (eglot-uri-to-path uri))
        (eglot--async-request
         (eglot-current-server)
         method
         params
         :success-fn resolve
         :error-fn reject
         :hint
         (when (string= method "$/lean/rpc/call")
           (intern (concat "lean-ts--" (plist-get params :method)))))))))

(cl-defmethod lean-ts-infoview--dispatcher
  (_ (_ (eql sendClientNotification)) params)
  (cl-destructuring-bind (&key uri method params) params
    (with-current-buffer (find-file-noselect (eglot-uri-to-path uri))
      (jsonrpc-notify (eglot--current-server-or-lose) method params))))

(cl-defmethod lean-ts-infoview--dispatcher
  (conn (_ (eql subscribeServerNotifications)) params)
  (cl-destructuring-bind (&key method) params
    (push (intern method) (oref conn server-watchers))))

(cl-defmethod lean-ts-infoview--dispatcher
  (conn (_ (eql unsubscribeServerNotifications)) params)
  (cl-destructuring-bind (&key method) params
    (oset conn server-watchers
          (cl-delete (intern method) (oref conn server-watchers)
                     :count 1))))

(cl-defmethod lean-ts-infoview--dispatcher
  (conn (_ (eql subscribeClientNotifications)) params)
  (cl-destructuring-bind (&key method) params
    (push (intern method) (oref conn client-watchers))))

(cl-defmethod lean-ts-infoview--dispatcher
  (conn (_ (eql unsubscribeClientNotifications)) params)
  (cl-destructuring-bind (&key method) params
    (oset conn client-watchers
          (cl-delete (intern method) (oref conn client-watchers)
                     :count 1))))

(cl-defmethod lean-ts-infoview--dispatcher
  (_ (_ (eql copyToClipboard)) params)
  (cl-destructuring-bind (&key text) params
    (with-temp-buffer
      (insert text)
      (clipboard-kill-ring-save (point-min) (point-max)))))

(cl-defmethod lean-ts-infoview--dispatcher
  (_ (_ (eql insertText)) params)
  (cl-destructuring-bind (&key text kind pos) params
    (save-excursion
      (when pos
        (cl-destructuring-bind (&key textDocument position) pos
          (cl-destructuring-bind (&key uri) textDocument
            (with-current-buffer (find-file-noselect (eglot-uri-to-path uri))
              (goto-char (eglot--lsp-position-to-point position))))))
      (when (equal kind "above")
        (forward-line -1))
      (insert text))))

(cl-defmethod lean-ts-infoview--dispatcher
  (_ (_ (eql applyEdit)) params)
  (cl-destructuring-bind (&key te) params
    (eglot--apply-workspace-edit te 'lean-ts-infoview)))

(cl-defmethod lean-ts-infoview--dispatcher
  (_ (_ (eql showDocument)) params)
  (cl-destructuring-bind (&key show) params
    (apply 'eglot-handle-request nil 'window/showDocument show)))

(cl-defmethod lean-ts-infoview--dispatcher
  (_ (_ (eql restartFile)) params)
  (cl-destructuring-bind (&key uri) params
    (with-current-buffer (find-file-noselect (eglot-uri-to-path uri))
      (eglot-reconnect (eglot-current-server)))))

(defvar lean-ts-infoview--teardown-alist nil)

(cl-defmethod lean-ts-infoview--dispatcher
  (conn (_ (eql createRpcSession)) params)
  (cl-destructuring-bind (&key uri) params
    (with-current-buffer (find-file-noselect (eglot-uri-to-path uri))
      (let* ((server (eglot-current-server))
             ;; todo: could this be async?
             (session-id (plist-get (jsonrpc-request server
                                                     :$/lean/rpc/connect
                                                     (list :uri uri))
                                    :sessionId))
             (teardown (lambda ()
                         (lean-ts-infoview--dispatcher
                          conn 'closeRpcSession
                          (list :sessionId session-id))))
             (keepalive (run-with-timer
                         10 10
                         (lambda ()
                           (condition-case _err
                               (jsonrpc-notify server
                                               :$/lean/rpc/keepAlive
                                               (list :uri uri
                                                     :sessionId session-id))
                             (jsonrpc-error (funcall teardown)))))))
        (push (cons session-id keepalive) (oref conn rpc-sessions))
        (push teardown (alist-get server lean-ts-infoview--teardown-alist))
        session-id))))

(cl-defmethod jsonrpc-shutdown ((server lean-ts-eglot-server) &optional cleanup)
  (when-let* ((actions (alist-get server lean-ts-infoview--teardown-alist)))
    (mapc #'funcall actions))
  (cl-call-next-method server cleanup))

(cl-defmethod lean-ts-infoview--dispatcher
  (conn (_ (eql closeRpcSession)) params)
  (cl-destructuring-bind (&key sessionId) params
    (oset conn rpc-sessions
          (delq nil (map-apply
                     (lambda (id timer)
                       (if (string= id sessionId)
                           (cancel-timer timer)
                         (cons id timer)))
                     (oref conn rpc-sessions))))))

;;; Infoview API calls

(defun lean-ts-infoview--send-location (&rest _)
  "Send current location to all connections."
  (when (cl-typep (eglot-current-server) 'lean-ts-eglot-server)
    (dolist (conn lean-ts-infoview--connections)
      (jsonrpc-notify conn :changedCursorLocation
                      (list :loc (lean-ts-infoview--location))))))

(defun lean-ts-infoview--send-initialize (server)
  "Send initialization info of SERVER to all connections."
  (when (cl-typep server 'lean-ts-eglot-server)
    (with-slots (capabilities server-info) server
      (dolist (conn lean-ts-infoview--connections)
        (jsonrpc-notify conn :serverRestarted
                        (list :result
                              (list :capabilities capabilities
                                    :serverInfo server-info)))))))

(add-hook 'eglot-connect-hook #'lean-ts-infoview--send-initialize)

;;; Hooks for intercepting RPC calls

(cl-defmethod eglot-handle-notification :after
  ((_ lean-ts-eglot-server) method &rest params)
  "Send server notifications to the subscribed infoviews."
  (dolist (conn lean-ts-infoview--connections)
    (when (memq method (oref conn server-watchers))
      (jsonrpc-notify conn :serverNotification
                      (list :method (symbol-name method)
                            :params params)))))

(cl-defmethod jsonrpc-connection-send :after
  ((_ lean-ts-eglot-server) &key _id method params _result _error)
  "Send client notifications to the subscribed infoviews."
  (dolist (conn lean-ts-infoview--connections)
    (when (memq method (oref conn client-watchers))
      (jsonrpc-notify conn :clientNotification
                      (list :method (symbol-name method)
                            :params params)))))

;;;; HTTP server
(defvar infoview-httpd-server nil)

(defun lean-ts-infoview-serve ()
  (interactive)
  (httpd-serve-directory
   (expand-file-name "infoview" lean-ts-data-directory)))

;;; Minor mode

(define-minor-mode lean-ts-infoview-mode
  "Infoview server for Lean 4."
  :global t :group 'lean-ts-infoview
  (cond
   (lean-ts-infoview-mode
    (lean-ts-infoview-serve)
    (lean-ts-infoview--start-server))
   (t
    (when lean-ts-infoview--server
      (websocket-server-close lean-ts-infoview--server)
      (setq lean-ts-infoview--server nil)))))

;; (remove-hook 'lean-ts-mode-hook #'lean-ts-infoview-mode)

(provide 'lean-ts-infoview)
;;; lean-ts-infoview.el ends here
