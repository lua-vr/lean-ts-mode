;;; lean-ts-server.el --- Eglot server class definition for lean-ts-mode  -*- lexical-binding: t; -*-

;; Copyright (c) 2025 Lua Viana Reis. All rights reserved.

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

(require 'eglot)
(require 'lean-ts-data)

(defvar lean-ts-server-plugin-path
  (expand-file-name "libServerPlugin.so"
                    lean-ts-data-directory)
  "Path for the server plugin.")

;; Eglot subclass definition
(defclass lean-ts-eglot-server (eglot-lsp-server) ()
  :documentation "Lean server class for Eglot.")

(cl-defmethod eglot-client-capabilities ((server lean-ts-eglot-server))
  (plist-put (cl-call-next-method server)
             :lean '(:silentDiagnosticSupport t)))

;; 2. Define an overlay category that places text in the left margin
(put 'my-margin-category 'before-string
     (propertize "!!" 'display '((margin left-margin) face error)))

;; 3. Apply properties directly to your custom diagnostic symbol
(put 'lean-accomplished 'flymake-margin-string "✓")
(put 'lean-accomplished 'flymake-severity 0)

(defvar-local lean-ts--accomplished-diags nil
  "Buffer-local storage for Lean goal diagnostics.")

(cl-defmethod eglot-handle-notification
  ((server lean-ts-eglot-server)
   (method (eql textDocument/publishDiagnostics))
   &key uri diagnostics version &allow-other-keys)
  (let (standard-diags lean-diags)
    (cl-loop for diag across diagnostics do
             (if-let* ((tags (plist-get diag :leanTags))
                       ((seq-contains-p tags 2 #'eq)))
                 (push diag lean-diags)
               (push diag standard-diags)))
    
    (when-let* ((path (eglot-uri-to-path uri))
                (buf (find-buffer-visiting path)))
      (with-current-buffer buf
        (setq lean-ts--accomplished-diags lean-diags)))
    
    (cl-call-next-method server method
                         :uri uri
                         :version version
                         :diagnostics (vconcat standard-diags))))

(defun my-lean-flymake-backend (report-fn &rest _args)
  "Flymake backend for Lean accomplished goals."
  (let ((diags nil))
    ;; Iterate over the saved buffer-local JSON diagnostics
    (dolist (diag-json lean-ts--accomplished-diags)
      (let* ((range (plist-get diag-json :range))
             ;; Eglot provides a helper to convert LSP ranges to buffer positions
             (bounds (eglot-range-region range)) 
             (message (plist-get diag-json :message)))
        (push (flymake-make-diagnostic
               (current-buffer)
               (car bounds) (cdr bounds)
               'lean-accomplished ;; Your custom type with the checkmark
               message)
              diags)))
    ;; Report them to Flymake
    (funcall report-fn diags)))

;; Setup Eglot
(add-hook 'lean-ts-mode-hook #'eglot-ensure)
(add-to-list 'eglot-server-programs
             `(lean-ts-mode lean-ts-eglot-server "lake" "serve"
                            ,@(when lean-ts-server-plugin-path
                                (list "--" "--plugin" lean-ts-server-plugin-path))))

(add-to-list 'eglot-semantic-token-types "leanSorryLike")

(defface eglot-semantic-leanSorryLike-face
  '((t (:inherit font-lock-warning-face)))
  "Face for painting a `leanSorryLike' LSP semantic token."
  :group 'eglot-semantic-fontification)

(cl-defmethod eglot-handle-request
  ((server lean-ts-eglot-server) (_method (eql workspace/semanticTokens/refresh)))
  "Handle a semanticTokens/refresh request from SERVER."
  (dolist (buffer (eglot--managed-buffers server))
    (eglot--when-live-buffer buffer
      (setf (plist-get eglot--semtok-state :docver) nil)
      (eglot--widening (font-lock-flush)))))

;; Commands (requests)
(defun lean-ts-restart-file ()
  "Refresh the file dependencies.

This function restarts the server subprocess for the current
file, recompiling, and reloading all imports."
  (interactive)
  (when eglot--managed-mode
    (eglot--signal-textDocument/didClose)
    (eglot--signal-textDocument/didOpen)))


(provide 'lean-ts-server)
;;; lean-ts-server.el ends here
