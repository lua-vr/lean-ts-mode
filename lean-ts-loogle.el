;;; lean-ts-loogle.el --- Loogle API queries -*- lexical-binding: t; -*-

;; Copyright (C) 2025  Lua Viana Reis

;; Author: Lua Viana Reis <me@lua.blog.br>

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

(require 'url)
(require 'xref)
(require 'eglot)
(require 'lean-ts-input)

(defvar url-http-end-of-headers)

(defun loogle-query ()
  "Query Loogle for Lean code search results."
  (interactive)
  (let* ((query (let ((minibuffer-setup-hook
                       (cons (lambda () (set-input-method "Lean"))
                             minibuffer-setup-hook)))
                  (read-string "Loogle: " nil nil nil t)))
         (buf (current-buffer))
         (callback
          (lambda (_)
            (goto-char url-http-end-of-headers)
            (let* ((response (json-parse-buffer :object-type 'plist
                                                :array-type 'list))
                   (metadata '((annotation-function . (lambda (cand)
                                                        (get-text-property 0 'type cand)))
                               (category . loogle-result)))
                   (results (cl-loop for obj in (plist-get response :hits)
                                     collect (propertize (plist-get obj :name)
                                                         'type (plist-get obj :type))))
                   (table (completion-table-with-metadata results metadata)))
              (message (plist-get response :header))
              (when (buffer-live-p buf)
                (with-current-buffer buf
                  (xref-find-apropos (completing-read "Loogle results" table))))))))
    (url-retrieve
     (format "https://loogle.lean-lang.org/json?q=%s" (url-encode-url query))
     callback nil t t)))

(provide 'lean-ts-loogle)
;;; lean-ts-loogle.el ends here
