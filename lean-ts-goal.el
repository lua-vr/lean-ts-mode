;;; lean-ts-goal.el ---                              -*- lexical-binding: t; -*-

;; Copyright (C) 2025  Lua Viana Reis

;; Author: Lua Viana Reis <me@lua.blog.br>
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

(defcustom lean-ts-goal-display-buffer-action
  '(display-buffer-in-side-window
    (side . right)
    (window-width . 0.3))
  "The action to use when displaying the Lean goal buffer."
  :type display-buffer--action-custom-type
  :group 'lean-ts-goal)

(defun lean-ts-open-goal-view ()
  "Open Lean goal view."
  (interactive)
  (let ((buf (get-buffer-create "*Lean Goal*")))
    (with-current-buffer buf
      (erase-buffer)
      (setq-local truncate-lines nil
                  word-wrap nil
                  truncate-partial-width-windows nil)
      (insert "Goal view placeholder"))
    (display-buffer buf lean-ts-goal-display-buffer-action)))

(provide 'lean-ts-goal)
;;; lean-ts-goal.el ends here
