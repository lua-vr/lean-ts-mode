import Lean.Server.Requests
import Lean.Elab.BuiltinCommand
import Lean.Elab.Declaration

open Lean Server RequestM Lsp Elab

open Elab in
partial def handleDocumentSymbol (_ : DocumentSymbolParams)
    : RequestM (RequestTask DocumentSymbolResult) := do
  let doc ← readDoc
  -- bad: we have to wait on elaboration of the entire file before we can report document symbols
  let t := doc.cmdSnaps.waitAll
  mapTaskCostly t fun (snaps, _) => do
    let syms := snaps.map (·.infoTree) |> toDocumentSymbols doc.meta.text #[]
    return { syms }
where
  mkLevel text syms its up range
      (id : Option (TSyntax `ident)) :=
    let name := id.map (·.getId.componentsRev) |>.getD [`«»] 
    let name := name.foldr (fun x y => y ++ x) Name.anonymous
    let up stop its children :=
      let range := {range with stop}
      let sym := DocumentSymbol.mk {
        name := if name == `«» then "<section>" else name.toString
        kind := .namespace
        range := range.toLspRange text
        selectionRange := id.bind (·.raw.getRange?) |>.getD range |>.toLspRange text
        children? := .some children
      }
      toDocumentSymbols text (syms.push sym) its up
    toDocumentSymbols text #[] its up

  toDocumentSymbols (text : FileMap) (syms : Array DocumentSymbol) (its : List InfoTree)
      (up : String.Pos.Raw → List InfoTree → Array DocumentSymbol → Array DocumentSymbol := λ _ _ a ↦ a) :
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
              | `($_:declModifiers $_:attrKind instance $[$np:namedPrio]? $[$id$[.{$ls,*}]?]? $sig:declSig $_) =>
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
    | [] => up text.source.rawEndPos [] syms

deriving instance FromJson for DocumentSymbol
deriving instance FromJson for DocumentSymbolResult

builtin_initialize
  chainLspRequestHandler
    "textDocument/documentSymbol"
    DocumentSymbolParams
    DocumentSymbolResult
    (fun a _ => handleDocumentSymbol a)
