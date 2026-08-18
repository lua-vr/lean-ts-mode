;;; lean-ts-mode.el --- A major mode for the Lean language -*- lexical-binding: t -*-

;; Copyright (c) 2025 Lua Viana Reis. All rights reserved.

;; Author: Lua <me@lua.blog.br>
;; Maintainer: Lua <me@lua.blog.br>
;; Created: 2025
;; Version: 1.0
;; Package-Requires: ((emacs "27.1") (eglot "1.18") (simple-httpd "1.5.1") (websocket "1.15"))
;; URL: https://github.com/estradilua/lean-ts-mode
;; Keywords: languages

;; This program is free software: you can redistribute it and/or modify
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

;; Provides a major mode for the Lean 4 programming language based on tree-sitter and eglot.

;;; Code:

(require 'lean-ts-syntax)
(require 'lean-ts-server)
(require 'lean-ts-infoview)
(require 'lean-ts-lake)
(require 'lean-ts-mathlib)
(require 'lean-ts-loogle)
(require 'treesit)

(defgroup lean-ts nil
  "Lean 4 programming language and theorem prover."
  :prefix "lean-ts-"
  :group 'languages)

(defvar-keymap lean-ts-mode-map
  :doc "Keymap used in Lean mode."
  "C-c x" #'lean-ts-restart-file)

(defvar lean-ts-inhibit-eglot-logs t
  "Disable Eglot logging in Lean buffers.

Since the Lean server is extremely chatty, you should leave it at t for a
big performance improvement unless you are debugging the server.")

(defvar lean-ts--definition-keywords-regexp
  (rx bos (or "def" "theorem" "lemma" "abbrev" "instance" "structure"
              "class" "inductive" "coinductive" "axiom" "example" "opaque")
      eos)
  "Regexp matching keywords whose following identifier names a definition.")

(defvar lean-ts-font-lock-feature-list
  '((comment definition)
    (keyword string)
    (attribute constant error number type)
    (delimiter variable))
  "The tree-sitter font lock feature list for `lean-ts-mode'.")

(defvar lean-ts-font-lock
  (treesit-font-lock-rules
   :default-language 'lean

   :feature 'comment
   '((line_comment) @font-lock-comment-face
     (block_comment) @font-lock-comment-face
     (doc_comment) @font-lock-doc-face
     (mod_doc_comment) @font-lock-doc-face)

   :feature 'definition
   `(((keyword) @_definition-keyword
      :anchor
      (identifier) @font-lock-function-name-face
      (:match? @_definition-keyword ,lean-ts--definition-keywords-regexp)))

   :feature 'keyword
   '((keyword) @font-lock-keyword-face
     (modifier) @font-lock-keyword-face
     (trace_macro) @font-lock-keyword-face)

   :feature 'string
   '((string) @font-lock-string-face)

   :feature 'attribute
   '((attribute) @font-lock-preprocessor-face)

   :feature 'constant
   '((char) @font-lock-constant-face)

   :feature 'error
   '((invalid) @font-lock-warning-face)

   :feature 'number
   '((number) @font-lock-number-face)

   :feature 'type
   '((storage_type) @font-lock-type-face)

   :feature 'delimiter
   '((punctuation) @font-lock-delimiter-face)

   :feature 'variable
   '((identifier) @font-lock-variable-use-face))
  "The tree-sitter font lock settings for lean.")

(defun lean-ts--eglot-project (initial)
  "Find the Lean 4 project for path INITIAL.

Starting from INITIAL, repeatedly look up the
directory hierarchy for a directory containing a file
\"lean-toolchain\", and use the last such directory found, if any.
This allows us to edit files in child packages using the settings
of the parent project."
  (let (root)
    (when-let* ((_ eglot-lsp-context))
      (if (string-match "\\`\\(.*/toolchains/[^/]*/src/lean\\)/.*\\'" initial)
          (setq root (match-string 1 initial))
        (setq root (locate-dominating-file initial "lean-toolchain"))
        (while-let ((_   root)
                    (_   (string-match ".lake/packages/[^/]+\\'" root))
                    (dir (directory-file-name root))
                    (new (locate-dominating-file dir "lean-toolchain")))
          ;; We found a toolchain file, but it belongs to a package.
          (setq root new))))
    (when root (cons 'lean4 root))))

(defun lean-ts--toolchain-project (initial)
  "Find the Lean 4 root for a path INITIAL inside a toolchain directory."
  (when (string-match "\\`\\(.*/toolchains/[^/]*/src/lean\\)/.*\\'" initial)
    (cons 'lean4-toolchain (match-string 1 initial))))

(cl-defmethod project-root ((project (head lean4)))
  (cdr project))

(cl-defmethod project-root ((project (head lean4-toolchain)))
  (cdr project))

;;;###autoload
(define-derived-mode lean-ts-mode prog-mode "lean-ts"
  "Major mode for Lean.
\\{lean-ts-mode-map}
Invokes `lean-ts-mode-hook'."
  :syntax-table lean-ts-mode-syntax-table
  :group 'lean


  ;; Misc
  (setq-local tab-width 2
              standard-indent 2
              comment-start "/- "
              comment-start-skip "[-/]-[ \t]*"
              comment-end " -/"
              comment-end-skip "[ \t]*\\(-/\\|\\s>\\)"
              comment-padding 1
              comment-use-syntax t
              comment-style 'multi-line
              indent-tabs-mode nil)
  (visual-line-mode)

  (when lean-ts-inhibit-eglot-logs
    (setq-local eglot-events-buffer-config '(:size 0)))
  
  (add-to-list (make-local-variable 'project-find-functions) #'lean-ts--eglot-project)
  (add-to-list (make-local-variable 'project-find-functions) #'lean-ts--toolchain-project 'append)

  (require 'lean-ts-input)
  (set-input-method "Lean")
  (add-hook 'eldoc-documentation-functions #'lean-ts-infoview--send-location 'append t)
  (add-hook 'flymake-diagnostic-functions #'my-lean-flymake-backend nil t)

  (setq treesit-primary-parser (treesit-parser-create 'lean))
  (setq-local treesit-font-lock-settings lean-ts-font-lock)
  (setq-local treesit-font-lock-feature-list lean-ts-font-lock-feature-list)
  (treesit-major-mode-setup))

;;;###autoload
(add-to-list 'auto-mode-alist '("\\.lean\\'" . lean-ts-mode))

(defvar markdown-code-lang-modes)

;;;###autoload
(with-eval-after-load 'markdown-mode
  (add-to-list 'markdown-code-lang-modes '("lean" . lean-ts-mode)))

;;;###autoload
(modify-coding-system-alist 'file "\\.lean\\'" 'utf-8)

(provide 'lean-ts-mode)

;;; lean-ts-mode.el ends here
