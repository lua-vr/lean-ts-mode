import Lean.Server.Requests
import Lean.Elab.BuiltinCommand
import Lean.Elab.Declaration

open Lean Server RequestM Lsp Elab

partial def handleDocumentSymbol (_ : DocumentSymbolParams) (p : RequestTask DocumentSymbolResult)
    : RequestM (RequestTask DocumentSymbolResult) := do
  p.cancel
  let doc ← readDoc
  -- bad: we have to wait on elaboration of the entire file before we can report document symbols
  let t := doc.cmdSnaps.waitAll
  mapTaskCostly t fun (snaps, _) => do
    let syms := snaps.map (·.infoTree) |> toDocumentSymbols doc.meta.text #[]
    return { syms := syms }
where
  mkLevel text syms its up range (id : Option (TSyntax `ident)) :=
    let up stop its children :=
      let sym := DocumentSymbol.mk {
        name := id.elim "<section>" (·.getId.toString)
        kind := .namespace
        range := {range with stop}.toLspRange text
        selectionRange := id.elim range (·.raw.getRange?.get!) |>.toLspRange text
        children? := .some children
      }
      toDocumentSymbols text (syms.push sym) its up
    toDocumentSymbols text #[] its up

  toDocumentSymbols (text : FileMap) (syms : Array DocumentSymbol) (its : List InfoTree)
      (up : String.Pos → List InfoTree → Array DocumentSymbol → Array DocumentSymbol := λ _ _ a ↦ a) :
      Array DocumentSymbol :=
    match its with
    | it :: its =>
      match it with
      | .context _ it => toDocumentSymbols text syms (it :: its) up
      | .node (.ofCommandInfo {elaborator, stx}) children => Id.run do
        let range := stx.getRange?.getD ⟨0,0⟩
        match elaborator with
        | ``Command.elabNamespace =>
          if let `(namespace $id) := stx then 
            return mkLevel text syms its up range id
        | ``Command.elabSection =>
          if let `($_:sectionHeader section $(id)?) := stx then
            return mkLevel text syms its up range id
        | ``Command.elabEnd =>
          return up stx.getRange?.get!.stop its syms
        | ``Command.elabDeclaration =>
          if let some stxRange := stx.getRange? then
            let (name, selection) := match stx with
              | `($_:declModifiers $_:attrKind instance $[$np:namedPrio]? $[$id$[.{$ls,*}]?]?
                    $sig:declSig $_) =>
                ((·.getId.toString) <$> id |>.getD s!"instance {sig.raw.reprint.getD ""}", id.map (·.raw) |>.getD sig)
              | _ =>
                match stx.getArg 1 |>.getArg 1 with
                | `(declId|$id$[.{$ls,*}]?) => (id.raw.getId.toString, id)
                | _ =>
                  let stx10 := stx[1][0]
                  (stx10.isIdOrAtom?.getD "<unknown>", stx10)
            if let some selRange := selection.getRange? then
              let sym := DocumentSymbol.mk {
                name := name
                kind := SymbolKind.method
                range := stxRange.toLspRange text
                selectionRange := selRange.toLspRange text
              }
              return toDocumentSymbols text (syms.push sym) its up
        | (_ : Name) => pure ()
        toDocumentSymbols text syms (children.toList ++ its) up
      | .node _ children => toDocumentSymbols text syms (children.toList ++ its) up
      | .hole _ => toDocumentSymbols text syms its up
    | [] => up text.source.endPos [] syms

deriving instance FromJson for DocumentSymbol
deriving instance FromJson for DocumentSymbolResult

builtin_initialize
  chainLspRequestHandler
    "textDocument/documentSymbol"
    DocumentSymbolParams
    DocumentSymbolResult
    handleDocumentSymbol
