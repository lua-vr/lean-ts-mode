// Lean compiler output
// Module: ServerPlugin
// Imports: public import Init public meta import Init public import Lean.Server.Requests public import Lean.Elab.BuiltinCommand public import Lean.Elab.Declaration
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_Range_toLspRange(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_reprint(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_instInhabitedRange_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
lean_object* l_Lean_AsyncList_waitAll___redArg(lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientInfo_fromJson_spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSymbolInformation_fromJson_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_initializing();
lean_object* l_Lean_Server_lookupLspRequestHandler(lean_object*);
extern lean_object* l_Lean_Server_requestHandlers;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Server_RequestError_internalError(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonDocumentSymbolAux_toJson___at___00Lean_Lsp_instToJsonDocumentSymbol_go_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDocumentSymbolParams_fromJson(lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_RequestHandling_1370296685____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_panic___at___00handleDocumentSymbol_toDocumentSymbols_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<unknown>"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instance "};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3_value;
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_plugin_handleDocumentSymbol_mkLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_plugin_handleDocumentSymbol_mkLevel___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___closed__0_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_mkLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_plugin_handleDocumentSymbol_mkLevel___closed__1 = (const lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___closed__1_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_mkLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 153, 234, 173, 6, 41, 196, 33)}};
static const lean_object* lp_plugin_handleDocumentSymbol_mkLevel___closed__2 = (const lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___closed__2_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_mkLevel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_plugin_handleDocumentSymbol_mkLevel___closed__3 = (const lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___closed__3_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__1 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__1_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabNamespace"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__3 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__3_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabSection"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__4 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__4_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "elabEnd"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__5 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__5_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elabDeclaration"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__6 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__6_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__8 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__8_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__8_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__11 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__11_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__11_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__13 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__13_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__13_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__16 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__16_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__15 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__15_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__15_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__16_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedPrio"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__18 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__18_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__18_value),LEAN_SCALAR_PTR_LITERAL(171, 32, 2, 102, 118, 75, 64, 185)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__22 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__22_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__21 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__21_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__20 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__20_value;
static lean_once_cell_t lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "section"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__24 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__24_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__24_value),LEAN_SCALAR_PTR_LITERAL(143, 182, 236, 178, 254, 168, 97, 17)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "sectionHeader"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__26 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__26_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__26_value),LEAN_SCALAR_PTR_LITERAL(25, 102, 158, 226, 107, 190, 25, 135)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__28 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__28_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value_aux_0),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value_aux_1),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value_aux_2),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__28_value),LEAN_SCALAR_PTR_LITERAL(84, 17, 124, 142, 243, 161, 231, 243)}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29_value;
static const lean_ctor_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__30 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__30_value;
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<section>"};
static const lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_List_mapTR_loop___at___00handleDocumentSymbol_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_plugin_handleDocumentSymbol___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_plugin_handleDocumentSymbol___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_plugin_handleDocumentSymbol___redArg___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_plugin_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_plugin_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&lp_plugin_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__0 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__0_value;
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__0_value)}};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__1 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__1_value;
static const lean_string_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__2 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__2_value;
static const lean_string_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__3 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__3_value;
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__3_value)}};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__4 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__4_value;
static const lean_string_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__5 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__5_value;
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(230, 3, 132, 38, 134, 149, 222, 229)}};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__6 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__6_value;
static const lean_array_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__6_value)}};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7_value;
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7_value)}};
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8_value;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__0 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__0_value;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10_value;
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__7 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__7_value;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__5 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__5_value;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "DocumentSymbolAux"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__2 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__2_value;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__1 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__1_value;
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3_value_aux_0),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3_value_aux_1),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(17, 73, 109, 67, 220, 205, 242, 94)}};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3_value;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "detail"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__12 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__12_value;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "detail\?"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__13 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__13_value;
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(7, 112, 4, 55, 150, 46, 128, 7)}};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__14 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__14_value;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__18 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__18_value;
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(90, 186, 66, 236, 16, 221, 215, 158)}};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__19 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__19_value;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__23 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__23_value;
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__23_value),LEAN_SCALAR_PTR_LITERAL(113, 10, 234, 83, 106, 95, 218, 176)}};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__24 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__24_value;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "selectionRange"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__28 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__28_value;
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(226, 224, 244, 73, 211, 252, 75, 134)}};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__29 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__29_value;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "children"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__33 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__33_value;
static const lean_string_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "children\?"};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__34 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__34_value;
static const lean_ctor_object lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__34_value),LEAN_SCALAR_PTR_LITERAL(76, 155, 132, 184, 179, 136, 72, 16)}};
static const lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__35 = (const lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__35_value;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37;
static lean_once_cell_t lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38;
LEAN_EXPORT lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson(lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
static const lean_string_object lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0_value;
LEAN_EXPORT const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0_value;
LEAN_EXPORT lean_object* lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "syms"};
static const lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__0 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__0_value;
static const lean_string_object lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "DocumentSymbolResult"};
static const lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__1 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__1_value;
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2_value_aux_0),((lean_object*)&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2_value_aux_1),((lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(146, 167, 111, 216, 224, 112, 254, 150)}};
static const lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2_value;
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3;
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4;
static const lean_ctor_object lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 59, 159, 202, 129, 172, 67, 41)}};
static const lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__5 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__5_value;
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6;
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7;
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8;
LEAN_EXPORT lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson(lean_object*);
static const lean_closure_object lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin___closed__0 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin___closed__0_value;
LEAN_EXPORT const lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin___closed__0_value;
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Failed to parse original LSP response for `"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__0 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__0_value;
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` when chaining: "};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1_value;
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Failed to parse original LSP response JSON for `"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__2 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__2_value;
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Array_toJson___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Cannot parse request params: "};
static const lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Failed to chain LSP request handler for '"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "': only possible during initialization"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1_value;
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "': no initial handler registered"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2_value;
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_plugin___private_ServerPlugin_0__initFn___closed__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_plugin___private_ServerPlugin_0__initFn___closed__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_ = (const lean_object*)&lp_plugin___private_ServerPlugin_0__initFn___closed__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__value;
static const lean_string_object lp_plugin___private_ServerPlugin_0__initFn___closed__1_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "textDocument/documentSymbol"};
static const lean_object* lp_plugin___private_ServerPlugin_0__initFn___closed__1_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_ = (const lean_object*)&lp_plugin___private_ServerPlugin_0__initFn___closed__1_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_panic___at___00handleDocumentSymbol_toDocumentSymbols_spec__2(lean_object* v_msg_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = l_Lean_Syntax_instInhabitedRange_default;
v___x_3_ = lean_panic_fn_borrowed(v___x_2_, v_msg_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(lean_object* v___x_4_, uint8_t v___x_5_, lean_object* v_x_6_, lean_object* v_ls_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = l_Lean_Syntax_getId(v___x_4_);
v___x_9_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_8_, v___x_5_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_4_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0___boxed(lean_object* v___x_11_, lean_object* v___x_12_, lean_object* v_x_13_, lean_object* v_ls_14_){
_start:
{
uint8_t v___x_15651__boxed_15_; lean_object* v_res_16_; 
v___x_15651__boxed_15_ = lean_unbox(v___x_12_);
v_res_16_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_11_, v___x_15651__boxed_15_, v_x_13_, v_ls_14_);
lean_dec(v_ls_14_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(lean_object* v_as_17_, size_t v_i_18_, size_t v_stop_19_, lean_object* v_b_20_){
_start:
{
uint8_t v___x_21_; 
v___x_21_ = lean_usize_dec_eq(v_i_18_, v_stop_19_);
if (v___x_21_ == 0)
{
size_t v___x_22_; size_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_22_ = ((size_t)1ULL);
v___x_23_ = lean_usize_sub(v_i_18_, v___x_22_);
v___x_24_ = lean_array_uget_borrowed(v_as_17_, v___x_23_);
lean_inc(v___x_24_);
v___x_25_ = l_Lean_Name_append(v_b_20_, v___x_24_);
v_i_18_ = v___x_23_;
v_b_20_ = v___x_25_;
goto _start;
}
else
{
return v_b_20_;
}
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0___boxed(lean_object* v_as_27_, lean_object* v_i_28_, lean_object* v_stop_29_, lean_object* v_b_30_){
_start:
{
size_t v_i_boxed_31_; size_t v_stop_boxed_32_; lean_object* v_res_33_; 
v_i_boxed_31_ = lean_unbox_usize(v_i_28_);
lean_dec(v_i_28_);
v_stop_boxed_32_ = lean_unbox_usize(v_stop_29_);
lean_dec(v_stop_29_);
v_res_33_ = lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(v_as_27_, v_i_boxed_31_, v_stop_boxed_32_, v_b_30_);
lean_dec_ref(v_as_27_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* lp_plugin_List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0(lean_object* v_init_34_, lean_object* v_l_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; uint8_t v___x_39_; 
v___x_36_ = lean_array_mk(v_l_35_);
v___x_37_ = lean_array_get_size(v___x_36_);
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_nat_dec_lt(v___x_38_, v___x_37_);
if (v___x_39_ == 0)
{
lean_dec_ref(v___x_36_);
return v_init_34_;
}
else
{
size_t v___x_40_; size_t v___x_41_; lean_object* v___x_42_; 
v___x_40_ = lean_usize_of_nat(v___x_37_);
v___x_41_ = ((size_t)0ULL);
v___x_42_ = lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(v___x_36_, v___x_40_, v___x_41_, v_init_34_);
lean_dec_ref(v___x_36_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(uint8_t v___x_47_, lean_object* v___x_48_, lean_object* v___x_49_, lean_object* v___x_50_, lean_object* v___x_51_, lean_object* v___x_52_, lean_object* v___x_53_, lean_object* v_x_54_, lean_object* v_np_55_){
_start:
{
lean_object* v___y_57_; lean_object* v___x_61_; lean_object* v_id_63_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_61_ = lean_unsigned_to_nat(3u);
v___x_100_ = l_Lean_Syntax_getArg(v___x_48_, v___x_61_);
v___x_101_ = l_Lean_Syntax_isNone(v___x_100_);
if (v___x_101_ == 0)
{
uint8_t v___x_102_; 
lean_inc(v___x_100_);
v___x_102_ = l_Lean_Syntax_matchesNull(v___x_100_, v___x_52_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
lean_dec(v___x_100_);
v___x_103_ = l_Lean_Syntax_getArg(v___x_48_, v___x_52_);
v___x_104_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1));
v___x_105_ = l_Lean_Name_mkStr4(v___x_49_, v___x_50_, v___x_51_, v___x_104_);
lean_inc(v___x_103_);
v___x_106_ = l_Lean_Syntax_isOfKind(v___x_103_, v___x_105_);
lean_dec(v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v_stx10_107_; lean_object* v___x_108_; 
lean_dec(v___x_103_);
v_stx10_107_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_107_);
v___x_108_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v_stx10_107_);
return v___x_110_;
}
else
{
lean_object* v_val_111_; lean_object* v___x_112_; 
v_val_111_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_111_);
lean_dec_ref_known(v___x_108_, 1);
v___x_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_112_, 0, v_val_111_);
lean_ctor_set(v___x_112_, 1, v_stx10_107_);
return v___x_112_;
}
}
else
{
lean_object* v___x_113_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_113_ = l_Lean_Syntax_getArg(v___x_103_, v___x_53_);
v___x_118_ = l_Lean_Syntax_getArg(v___x_103_, v___x_52_);
lean_dec(v___x_103_);
v___x_119_ = l_Lean_Syntax_isNone(v___x_118_);
if (v___x_119_ == 0)
{
uint8_t v___x_120_; 
v___x_120_ = l_Lean_Syntax_matchesNull(v___x_118_, v___x_61_);
if (v___x_120_ == 0)
{
lean_object* v_stx10_121_; lean_object* v___x_122_; 
lean_dec(v___x_113_);
v_stx10_121_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_121_);
v___x_122_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_121_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v_stx10_121_);
return v___x_124_;
}
else
{
lean_object* v_val_125_; lean_object* v___x_126_; 
v_val_125_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_val_125_);
lean_dec_ref_known(v___x_122_, 1);
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v_val_125_);
lean_ctor_set(v___x_126_, 1, v_stx10_121_);
return v___x_126_;
}
}
else
{
goto v___jp_114_;
}
}
else
{
lean_dec(v___x_118_);
goto v___jp_114_;
}
v___jp_114_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = l_Lean_Syntax_getId(v___x_113_);
v___x_116_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_115_, v___x_47_);
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_113_);
return v___x_117_;
}
}
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_127_ = l_Lean_Syntax_getArg(v___x_100_, v___x_53_);
lean_dec(v___x_100_);
v___x_128_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1));
lean_inc_ref(v___x_51_);
lean_inc_ref(v___x_50_);
lean_inc_ref(v___x_49_);
v___x_129_ = l_Lean_Name_mkStr4(v___x_49_, v___x_50_, v___x_51_, v___x_128_);
lean_inc(v___x_127_);
v___x_130_ = l_Lean_Syntax_isOfKind(v___x_127_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; uint8_t v___x_132_; 
lean_dec(v___x_127_);
lean_dec_ref(v___x_51_);
lean_dec_ref(v___x_50_);
lean_dec_ref(v___x_49_);
v___x_131_ = l_Lean_Syntax_getArg(v___x_48_, v___x_52_);
lean_inc(v___x_131_);
v___x_132_ = l_Lean_Syntax_isOfKind(v___x_131_, v___x_129_);
lean_dec(v___x_129_);
if (v___x_132_ == 0)
{
lean_object* v_stx10_133_; lean_object* v___x_134_; 
lean_dec(v___x_131_);
v_stx10_133_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_133_);
v___x_134_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_133_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v_stx10_133_);
return v___x_136_;
}
else
{
lean_object* v_val_137_; lean_object* v___x_138_; 
v_val_137_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_val_137_);
lean_dec_ref_known(v___x_134_, 1);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v_val_137_);
lean_ctor_set(v___x_138_, 1, v_stx10_133_);
return v___x_138_;
}
}
else
{
lean_object* v___x_139_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_139_ = l_Lean_Syntax_getArg(v___x_131_, v___x_53_);
v___x_144_ = l_Lean_Syntax_getArg(v___x_131_, v___x_52_);
lean_dec(v___x_131_);
v___x_145_ = l_Lean_Syntax_isNone(v___x_144_);
if (v___x_145_ == 0)
{
uint8_t v___x_146_; 
v___x_146_ = l_Lean_Syntax_matchesNull(v___x_144_, v___x_61_);
if (v___x_146_ == 0)
{
lean_object* v_stx10_147_; lean_object* v___x_148_; 
lean_dec(v___x_139_);
v_stx10_147_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_147_);
v___x_148_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_147_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v_stx10_147_);
return v___x_150_;
}
else
{
lean_object* v_val_151_; lean_object* v___x_152_; 
v_val_151_ = lean_ctor_get(v___x_148_, 0);
lean_inc(v_val_151_);
lean_dec_ref_known(v___x_148_, 1);
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v_val_151_);
lean_ctor_set(v___x_152_, 1, v_stx10_147_);
return v___x_152_;
}
}
else
{
goto v___jp_140_;
}
}
else
{
lean_dec(v___x_144_);
goto v___jp_140_;
}
v___jp_140_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_141_ = l_Lean_Syntax_getId(v___x_139_);
v___x_142_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_141_, v___x_47_);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v___x_139_);
return v___x_143_;
}
}
}
else
{
lean_object* v_id_153_; lean_object* v___x_156_; uint8_t v___x_157_; 
v_id_153_ = l_Lean_Syntax_getArg(v___x_127_, v___x_53_);
v___x_156_ = l_Lean_Syntax_getArg(v___x_127_, v___x_52_);
lean_dec(v___x_127_);
v___x_157_ = l_Lean_Syntax_isNone(v___x_156_);
if (v___x_157_ == 0)
{
uint8_t v___x_158_; 
v___x_158_ = l_Lean_Syntax_matchesNull(v___x_156_, v___x_61_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; uint8_t v___x_160_; 
lean_dec(v_id_153_);
lean_dec_ref(v___x_51_);
lean_dec_ref(v___x_50_);
lean_dec_ref(v___x_49_);
v___x_159_ = l_Lean_Syntax_getArg(v___x_48_, v___x_52_);
lean_inc(v___x_159_);
v___x_160_ = l_Lean_Syntax_isOfKind(v___x_159_, v___x_129_);
lean_dec(v___x_129_);
if (v___x_160_ == 0)
{
lean_object* v_stx10_161_; lean_object* v___x_162_; 
lean_dec(v___x_159_);
v_stx10_161_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_161_);
v___x_162_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_161_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v_stx10_161_);
return v___x_164_;
}
else
{
lean_object* v_val_165_; lean_object* v___x_166_; 
v_val_165_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_val_165_);
lean_dec_ref_known(v___x_162_, 1);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v_val_165_);
lean_ctor_set(v___x_166_, 1, v_stx10_161_);
return v___x_166_;
}
}
else
{
lean_object* v___x_167_; lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_167_ = l_Lean_Syntax_getArg(v___x_159_, v___x_53_);
v___x_172_ = l_Lean_Syntax_getArg(v___x_159_, v___x_52_);
lean_dec(v___x_159_);
v___x_173_ = l_Lean_Syntax_isNone(v___x_172_);
if (v___x_173_ == 0)
{
uint8_t v___x_174_; 
v___x_174_ = l_Lean_Syntax_matchesNull(v___x_172_, v___x_61_);
if (v___x_174_ == 0)
{
lean_object* v_stx10_175_; lean_object* v___x_176_; 
lean_dec(v___x_167_);
v_stx10_175_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_175_);
v___x_176_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_175_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v_stx10_175_);
return v___x_178_;
}
else
{
lean_object* v_val_179_; lean_object* v___x_180_; 
v_val_179_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_val_179_);
lean_dec_ref_known(v___x_176_, 1);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v_val_179_);
lean_ctor_set(v___x_180_, 1, v_stx10_175_);
return v___x_180_;
}
}
else
{
goto v___jp_168_;
}
}
else
{
lean_dec(v___x_172_);
goto v___jp_168_;
}
v___jp_168_:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_169_ = l_Lean_Syntax_getId(v___x_167_);
v___x_170_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_169_, v___x_47_);
v___x_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_167_);
return v___x_171_;
}
}
}
else
{
lean_dec(v___x_129_);
goto v___jp_154_;
}
}
else
{
lean_dec(v___x_156_);
lean_dec(v___x_129_);
goto v___jp_154_;
}
v___jp_154_:
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v_id_153_);
v_id_63_ = v___x_155_;
goto v___jp_62_;
}
}
}
}
else
{
lean_object* v___x_181_; 
lean_dec(v___x_100_);
v___x_181_ = lean_box(0);
v_id_63_ = v___x_181_;
goto v___jp_62_;
}
v___jp_56_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = l_Lean_Syntax_getId(v___y_57_);
v___x_59_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_58_, v___x_47_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___y_57_);
return v___x_60_;
}
v___jp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_64_ = lean_unsigned_to_nat(4u);
v___x_65_ = l_Lean_Syntax_getArg(v___x_48_, v___x_64_);
v___x_66_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0));
lean_inc_ref(v___x_51_);
lean_inc_ref(v___x_50_);
lean_inc_ref(v___x_49_);
v___x_67_ = l_Lean_Name_mkStr4(v___x_49_, v___x_50_, v___x_51_, v___x_66_);
lean_inc(v___x_65_);
v___x_68_ = l_Lean_Syntax_isOfKind(v___x_65_, v___x_67_);
lean_dec(v___x_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
lean_dec(v___x_65_);
lean_dec(v_id_63_);
v___x_69_ = l_Lean_Syntax_getArg(v___x_48_, v___x_52_);
v___x_70_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1));
v___x_71_ = l_Lean_Name_mkStr4(v___x_49_, v___x_50_, v___x_51_, v___x_70_);
lean_inc(v___x_69_);
v___x_72_ = l_Lean_Syntax_isOfKind(v___x_69_, v___x_71_);
lean_dec(v___x_71_);
if (v___x_72_ == 0)
{
lean_object* v_stx10_73_; lean_object* v___x_74_; 
lean_dec(v___x_69_);
v_stx10_73_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_73_);
v___x_74_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_73_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v_stx10_73_);
return v___x_76_;
}
else
{
lean_object* v_val_77_; lean_object* v___x_78_; 
v_val_77_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_val_77_);
lean_dec_ref_known(v___x_74_, 1);
v___x_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_78_, 0, v_val_77_);
lean_ctor_set(v___x_78_, 1, v_stx10_73_);
return v___x_78_;
}
}
else
{
lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_79_ = l_Lean_Syntax_getArg(v___x_69_, v___x_53_);
v___x_80_ = l_Lean_Syntax_getArg(v___x_69_, v___x_52_);
lean_dec(v___x_69_);
v___x_81_ = l_Lean_Syntax_isNone(v___x_80_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; 
v___x_82_ = l_Lean_Syntax_matchesNull(v___x_80_, v___x_61_);
if (v___x_82_ == 0)
{
lean_object* v_stx10_83_; lean_object* v___x_84_; 
lean_dec(v___x_79_);
v_stx10_83_ = l_Lean_Syntax_getArg(v___x_48_, v___x_53_);
lean_inc(v_stx10_83_);
v___x_84_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_83_);
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v_stx10_83_);
return v___x_86_;
}
else
{
lean_object* v_val_87_; lean_object* v___x_88_; 
v_val_87_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_val_87_);
lean_dec_ref_known(v___x_84_, 1);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v_val_87_);
lean_ctor_set(v___x_88_, 1, v_stx10_83_);
return v___x_88_;
}
}
else
{
v___y_57_ = v___x_79_;
goto v___jp_56_;
}
}
else
{
lean_dec(v___x_80_);
v___y_57_ = v___x_79_;
goto v___jp_56_;
}
}
}
else
{
lean_dec_ref(v___x_51_);
lean_dec_ref(v___x_50_);
lean_dec_ref(v___x_49_);
if (lean_obj_tag(v_id_63_) == 0)
{
lean_object* v___x_89_; 
lean_inc(v___x_65_);
v___x_89_ = l_Lean_Syntax_reprint(v___x_65_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3));
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_65_);
return v___x_91_;
}
else
{
lean_object* v_val_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_val_92_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_val_92_);
lean_dec_ref_known(v___x_89_, 1);
v___x_93_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3));
v___x_94_ = lean_string_append(v___x_93_, v_val_92_);
lean_dec(v_val_92_);
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___x_65_);
return v___x_95_;
}
}
else
{
lean_object* v_val_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
lean_dec(v___x_65_);
v_val_96_ = lean_ctor_get(v_id_63_, 0);
lean_inc(v_val_96_);
lean_dec_ref_known(v_id_63_, 1);
v___x_97_ = l_Lean_Syntax_getId(v_val_96_);
v___x_98_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_97_, v___x_47_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v_val_96_);
return v___x_99_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___boxed(lean_object* v___x_182_, lean_object* v___x_183_, lean_object* v___x_184_, lean_object* v___x_185_, lean_object* v___x_186_, lean_object* v___x_187_, lean_object* v___x_188_, lean_object* v_x_189_, lean_object* v_np_190_){
_start:
{
uint8_t v___x_15709__boxed_191_; lean_object* v_res_192_; 
v___x_15709__boxed_191_ = lean_unbox(v___x_182_);
v_res_192_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(v___x_15709__boxed_191_, v___x_183_, v___x_184_, v___x_185_, v___x_186_, v___x_187_, v___x_188_, v_x_189_, v_np_190_);
lean_dec(v_np_190_);
lean_dec(v___x_188_);
lean_dec(v___x_187_);
lean_dec(v___x_183_);
return v_res_192_;
}
}
static lean_object* _init_lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_248_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__22));
v___x_249_ = lean_unsigned_to_nat(14u);
v___x_250_ = lean_unsigned_to_nat(22u);
v___x_251_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__21));
v___x_252_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__20));
v___x_253_ = l_mkPanicMessageWithDecl(v___x_252_, v___x_251_, v___x_250_, v___x_249_, v___x_248_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols(lean_object* v_text_274_, lean_object* v_syms_275_, lean_object* v_its_276_, lean_object* v_up_277_){
_start:
{
if (lean_obj_tag(v_its_276_) == 0)
{
lean_object* v_source_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_source_278_ = lean_ctor_get(v_text_274_, 0);
lean_inc_ref(v_source_278_);
lean_dec_ref(v_text_274_);
v___x_279_ = lean_string_utf8_byte_size(v_source_278_);
lean_dec_ref(v_source_278_);
v___x_280_ = lean_apply_3(v_up_277_, v___x_279_, v_its_276_, v_syms_275_);
return v___x_280_;
}
else
{
lean_object* v_head_281_; lean_object* v_tail_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_586_; 
v_head_281_ = lean_ctor_get(v_its_276_, 0);
v_tail_282_ = lean_ctor_get(v_its_276_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v_its_276_);
if (v_isSharedCheck_586_ == 0)
{
v___x_284_ = v_its_276_;
v_isShared_285_ = v_isSharedCheck_586_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_tail_282_);
lean_inc(v_head_281_);
lean_dec(v_its_276_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_586_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___y_287_; 
switch(lean_obj_tag(v_head_281_))
{
case 0:
{
lean_object* v_t_290_; lean_object* v___x_292_; 
v_t_290_ = lean_ctor_get(v_head_281_, 1);
lean_inc_ref(v_t_290_);
lean_dec_ref_known(v_head_281_, 2);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 0, v_t_290_);
v___x_292_ = v___x_284_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_t_290_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_tail_282_);
v___x_292_ = v_reuseFailAlloc_294_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
v_its_276_ = v___x_292_;
goto _start;
}
}
case 1:
{
lean_object* v_i_295_; lean_object* v_children_296_; 
lean_del_object(v___x_284_);
v_i_295_ = lean_ctor_get(v_head_281_, 0);
lean_inc_ref(v_i_295_);
v_children_296_ = lean_ctor_get(v_head_281_, 1);
lean_inc_ref(v_children_296_);
lean_dec_ref_known(v_head_281_, 2);
if (lean_obj_tag(v_i_295_) == 3)
{
lean_object* v_i_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_581_; 
v_i_301_ = lean_ctor_get(v_i_295_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v_i_295_);
if (v_isSharedCheck_581_ == 0)
{
v___x_303_ = v_i_295_;
v_isShared_304_ = v_isSharedCheck_581_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_i_301_);
lean_dec(v_i_295_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_581_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v_elaborator_305_; lean_object* v_stx_306_; uint8_t v___x_307_; lean_object* v___y_309_; lean_object* v_fst_310_; lean_object* v_snd_311_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___x_333_; lean_object* v___y_335_; 
v_elaborator_305_ = lean_ctor_get(v_i_301_, 0);
lean_inc(v_elaborator_305_);
v_stx_306_ = lean_ctor_get(v_i_301_, 1);
lean_inc(v_stx_306_);
lean_dec_ref(v_i_301_);
v___x_307_ = 0;
v___x_333_ = l_Lean_Syntax_getRange_x3f(v_stx_306_, v___x_307_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v___x_579_; 
v___x_579_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__30));
v___y_335_ = v___x_579_;
goto v___jp_334_;
}
else
{
lean_object* v_val_580_; 
v_val_580_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_val_580_);
v___y_335_ = v_val_580_;
goto v___jp_334_;
}
v___jp_308_:
{
lean_object* v___x_312_; 
v___x_312_ = l_Lean_Syntax_getRange_x3f(v_snd_311_, v___x_307_);
lean_dec(v_snd_311_);
if (lean_obj_tag(v___x_312_) == 1)
{
lean_object* v_val_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_327_; 
lean_dec_ref(v_children_296_);
v_val_313_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_327_ == 0)
{
v___x_315_ = v___x_312_;
v_isShared_316_ = v_isSharedCheck_327_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_val_313_);
lean_dec(v___x_312_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_327_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v_sym_323_; 
v___x_317_ = lean_box(0);
v___x_318_ = 5;
lean_inc_ref_n(v_text_274_, 2);
v___x_319_ = l_Lean_Syntax_Range_toLspRange(v_text_274_, v___y_309_);
v___x_320_ = l_Lean_Syntax_Range_toLspRange(v_text_274_, v_val_313_);
v___x_321_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_321_, 0, v_fst_310_);
lean_ctor_set(v___x_321_, 1, v___x_317_);
lean_ctor_set(v___x_321_, 2, v___x_319_);
lean_ctor_set(v___x_321_, 3, v___x_320_);
lean_ctor_set(v___x_321_, 4, v___x_317_);
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*5, v___x_318_);
if (v_isShared_316_ == 0)
{
lean_ctor_set_tag(v___x_315_, 0);
lean_ctor_set(v___x_315_, 0, v___x_321_);
v_sym_323_ = v___x_315_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_321_);
v_sym_323_ = v_reuseFailAlloc_326_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; 
v___x_324_ = lean_array_push(v_syms_275_, v_sym_323_);
v_syms_275_ = v___x_324_;
v_its_276_ = v_tail_282_;
goto _start;
}
}
}
else
{
lean_dec(v___x_312_);
lean_dec_ref(v_fst_310_);
lean_dec_ref(v___y_309_);
goto v___jp_297_;
}
}
v___jp_328_:
{
lean_object* v_fst_331_; lean_object* v_snd_332_; 
v_fst_331_ = lean_ctor_get(v___y_330_, 0);
lean_inc(v_fst_331_);
v_snd_332_ = lean_ctor_get(v___y_330_, 1);
lean_inc(v_snd_332_);
lean_dec_ref(v___y_330_);
v___y_309_ = v___y_329_;
v_fst_310_ = v_fst_331_;
v_snd_311_ = v_snd_332_;
goto v___jp_308_;
}
v___jp_334_:
{
if (lean_obj_tag(v_elaborator_305_) == 1)
{
lean_object* v_pre_336_; 
v_pre_336_ = lean_ctor_get(v_elaborator_305_, 0);
lean_inc(v_pre_336_);
if (lean_obj_tag(v_pre_336_) == 1)
{
lean_object* v_pre_337_; 
v_pre_337_ = lean_ctor_get(v_pre_336_, 0);
lean_inc(v_pre_337_);
if (lean_obj_tag(v_pre_337_) == 1)
{
lean_object* v_pre_338_; 
v_pre_338_ = lean_ctor_get(v_pre_337_, 0);
lean_inc(v_pre_338_);
if (lean_obj_tag(v_pre_338_) == 1)
{
lean_object* v_pre_339_; 
v_pre_339_ = lean_ctor_get(v_pre_338_, 0);
if (lean_obj_tag(v_pre_339_) == 0)
{
lean_object* v_str_340_; lean_object* v_str_341_; lean_object* v_str_342_; lean_object* v_str_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v_str_340_ = lean_ctor_get(v_elaborator_305_, 1);
lean_inc_ref(v_str_340_);
lean_dec_ref_known(v_elaborator_305_, 2);
v_str_341_ = lean_ctor_get(v_pre_336_, 1);
lean_inc_ref(v_str_341_);
lean_dec_ref_known(v_pre_336_, 2);
v_str_342_ = lean_ctor_get(v_pre_337_, 1);
lean_inc_ref(v_str_342_);
lean_dec_ref_known(v_pre_337_, 2);
v_str_343_ = lean_ctor_get(v_pre_338_, 1);
lean_inc_ref(v_str_343_);
lean_dec_ref_known(v_pre_338_, 2);
v___x_344_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0));
v___x_345_ = lean_string_dec_eq(v_str_343_, v___x_344_);
lean_dec_ref(v_str_343_);
if (v___x_345_ == 0)
{
lean_dec_ref(v_str_342_);
lean_dec_ref(v_str_341_);
lean_dec_ref(v_str_340_);
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
else
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__1));
v___x_347_ = lean_string_dec_eq(v_str_342_, v___x_346_);
lean_dec_ref(v_str_342_);
if (v___x_347_ == 0)
{
lean_dec_ref(v_str_341_);
lean_dec_ref(v_str_340_);
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
else
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2));
v___x_349_ = lean_string_dec_eq(v_str_341_, v___x_348_);
lean_dec_ref(v_str_341_);
if (v___x_349_ == 0)
{
lean_dec_ref(v_str_340_);
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
else
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__3));
v___x_351_ = lean_string_dec_eq(v_str_340_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; uint8_t v___x_353_; 
lean_del_object(v___x_303_);
v___x_352_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__4));
v___x_353_ = lean_string_dec_eq(v_str_340_, v___x_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; uint8_t v___x_355_; 
lean_dec_ref(v___y_335_);
v___x_354_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__5));
v___x_355_ = lean_string_dec_eq(v_str_340_, v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_356_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__6));
v___x_357_ = lean_string_dec_eq(v_str_340_, v___x_356_);
lean_dec_ref(v_str_340_);
if (v___x_357_ == 0)
{
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
goto v___jp_297_;
}
else
{
if (lean_obj_tag(v___x_333_) == 1)
{
lean_object* v_val_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_547_; 
v_val_358_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_547_ == 0)
{
v___x_360_ = v___x_333_;
v_isShared_361_ = v_isSharedCheck_547_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_val_358_);
lean_dec(v___x_333_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_547_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7));
v___x_363_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9));
lean_inc(v_stx_306_);
v___x_364_ = l_Lean_Syntax_isOfKind(v_stx_306_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = l_Lean_Syntax_getArg(v_stx_306_, v___x_365_);
lean_dec(v_stx_306_);
v___x_367_ = l_Lean_Syntax_getArg(v___x_366_, v___x_365_);
v___x_368_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(v___x_367_);
v___x_369_ = l_Lean_Syntax_isOfKind(v___x_367_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v_stx10_371_; lean_object* v___x_372_; 
lean_dec(v___x_367_);
lean_del_object(v___x_360_);
v___x_370_ = lean_unsigned_to_nat(0u);
v_stx10_371_ = l_Lean_Syntax_getArg(v___x_366_, v___x_370_);
lean_dec(v___x_366_);
lean_inc(v_stx10_371_);
v___x_372_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_371_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v___x_373_; 
v___x_373_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_373_;
v_snd_311_ = v_stx10_371_;
goto v___jp_308_;
}
else
{
lean_object* v_val_374_; 
v_val_374_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_val_374_);
lean_dec_ref_known(v___x_372_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_374_;
v_snd_311_ = v_stx10_371_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = l_Lean_Syntax_getArg(v___x_367_, v___x_375_);
v___x_377_ = l_Lean_Syntax_getArg(v___x_367_, v___x_365_);
lean_dec(v___x_367_);
v___x_378_ = l_Lean_Syntax_isNone(v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_379_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_377_);
v___x_380_ = l_Lean_Syntax_matchesNull(v___x_377_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v_stx10_381_; lean_object* v___x_382_; 
lean_dec(v___x_377_);
lean_dec(v___x_376_);
lean_del_object(v___x_360_);
v_stx10_381_ = l_Lean_Syntax_getArg(v___x_366_, v___x_375_);
lean_dec(v___x_366_);
lean_inc(v_stx10_381_);
v___x_382_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_381_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v___x_383_; 
v___x_383_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_383_;
v_snd_311_ = v_stx10_381_;
goto v___jp_308_;
}
else
{
lean_object* v_val_384_; 
v_val_384_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_val_384_);
lean_dec_ref_known(v___x_382_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_384_;
v_snd_311_ = v_stx10_381_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_385_; lean_object* v_ls_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
lean_dec(v___x_366_);
v___x_385_ = l_Lean_Syntax_getArg(v___x_377_, v___x_365_);
lean_dec(v___x_377_);
v_ls_386_ = l_Lean_Syntax_getArgs(v___x_385_);
lean_dec(v___x_385_);
v___x_387_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_ls_386_);
v___x_389_ = v___x_360_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_ls_386_);
v___x_389_ = v_reuseFailAlloc_391_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; 
v___x_390_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_376_, v___x_357_, v___x_387_, v___x_389_);
lean_dec_ref(v___x_389_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_390_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec(v___x_377_);
lean_dec(v___x_366_);
lean_del_object(v___x_360_);
v___x_392_ = lean_box(0);
v___x_393_ = lean_box(0);
v___x_394_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_376_, v___x_357_, v___x_392_, v___x_393_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_394_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_395_ = lean_unsigned_to_nat(0u);
v___x_396_ = l_Lean_Syntax_getArg(v_stx_306_, v___x_395_);
v___x_397_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12));
v___x_398_ = l_Lean_Syntax_isOfKind(v___x_396_, v___x_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_399_ = lean_unsigned_to_nat(1u);
v___x_400_ = l_Lean_Syntax_getArg(v_stx_306_, v___x_399_);
lean_dec(v_stx_306_);
v___x_401_ = l_Lean_Syntax_getArg(v___x_400_, v___x_399_);
v___x_402_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(v___x_401_);
v___x_403_ = l_Lean_Syntax_isOfKind(v___x_401_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v_stx10_404_; lean_object* v___x_405_; 
lean_dec(v___x_401_);
lean_del_object(v___x_360_);
v_stx10_404_ = l_Lean_Syntax_getArg(v___x_400_, v___x_395_);
lean_dec(v___x_400_);
lean_inc(v_stx10_404_);
v___x_405_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; 
v___x_406_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_406_;
v_snd_311_ = v_stx10_404_;
goto v___jp_308_;
}
else
{
lean_object* v_val_407_; 
v_val_407_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_val_407_);
lean_dec_ref_known(v___x_405_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_407_;
v_snd_311_ = v_stx10_404_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_408_ = l_Lean_Syntax_getArg(v___x_401_, v___x_395_);
v___x_409_ = l_Lean_Syntax_getArg(v___x_401_, v___x_399_);
lean_dec(v___x_401_);
v___x_410_ = l_Lean_Syntax_isNone(v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_409_);
v___x_412_ = l_Lean_Syntax_matchesNull(v___x_409_, v___x_411_);
if (v___x_412_ == 0)
{
lean_object* v_stx10_413_; lean_object* v___x_414_; 
lean_dec(v___x_409_);
lean_dec(v___x_408_);
lean_del_object(v___x_360_);
v_stx10_413_ = l_Lean_Syntax_getArg(v___x_400_, v___x_395_);
lean_dec(v___x_400_);
lean_inc(v_stx10_413_);
v___x_414_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_413_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v___x_415_; 
v___x_415_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_415_;
v_snd_311_ = v_stx10_413_;
goto v___jp_308_;
}
else
{
lean_object* v_val_416_; 
v_val_416_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_val_416_);
lean_dec_ref_known(v___x_414_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_416_;
v_snd_311_ = v_stx10_413_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_417_; lean_object* v_ls_418_; lean_object* v___x_419_; lean_object* v___x_421_; 
lean_dec(v___x_400_);
v___x_417_ = l_Lean_Syntax_getArg(v___x_409_, v___x_399_);
lean_dec(v___x_409_);
v_ls_418_ = l_Lean_Syntax_getArgs(v___x_417_);
lean_dec(v___x_417_);
v___x_419_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_ls_418_);
v___x_421_ = v___x_360_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_ls_418_);
v___x_421_ = v_reuseFailAlloc_423_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_422_; 
v___x_422_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_408_, v___x_357_, v___x_419_, v___x_421_);
lean_dec_ref(v___x_421_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_422_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
lean_dec(v___x_409_);
lean_dec(v___x_400_);
lean_del_object(v___x_360_);
v___x_424_ = lean_box(0);
v___x_425_ = lean_box(0);
v___x_426_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_408_, v___x_357_, v___x_424_, v___x_425_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_426_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; uint8_t v___x_430_; 
v___x_427_ = lean_unsigned_to_nat(1u);
v___x_428_ = l_Lean_Syntax_getArg(v_stx_306_, v___x_427_);
lean_dec(v_stx_306_);
v___x_429_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14));
lean_inc(v___x_428_);
v___x_430_ = l_Lean_Syntax_isOfKind(v___x_428_, v___x_429_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_431_ = l_Lean_Syntax_getArg(v___x_428_, v___x_427_);
v___x_432_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(v___x_431_);
v___x_433_ = l_Lean_Syntax_isOfKind(v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v_stx10_434_; lean_object* v___x_435_; 
lean_dec(v___x_431_);
lean_del_object(v___x_360_);
v_stx10_434_ = l_Lean_Syntax_getArg(v___x_428_, v___x_395_);
lean_dec(v___x_428_);
lean_inc(v_stx10_434_);
v___x_435_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_434_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v___x_436_; 
v___x_436_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_436_;
v_snd_311_ = v_stx10_434_;
goto v___jp_308_;
}
else
{
lean_object* v_val_437_; 
v_val_437_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v___x_435_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_437_;
v_snd_311_ = v_stx10_434_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_438_; lean_object* v___x_439_; uint8_t v___x_440_; 
v___x_438_ = l_Lean_Syntax_getArg(v___x_431_, v___x_395_);
v___x_439_ = l_Lean_Syntax_getArg(v___x_431_, v___x_427_);
lean_dec(v___x_431_);
v___x_440_ = l_Lean_Syntax_isNone(v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_441_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_439_);
v___x_442_ = l_Lean_Syntax_matchesNull(v___x_439_, v___x_441_);
if (v___x_442_ == 0)
{
lean_object* v_stx10_443_; lean_object* v___x_444_; 
lean_dec(v___x_439_);
lean_dec(v___x_438_);
lean_del_object(v___x_360_);
v_stx10_443_ = l_Lean_Syntax_getArg(v___x_428_, v___x_395_);
lean_dec(v___x_428_);
lean_inc(v_stx10_443_);
v___x_444_ = l_Lean_Syntax_isIdOrAtom_x3f(v_stx10_443_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v___x_445_; 
v___x_445_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_445_;
v_snd_311_ = v_stx10_443_;
goto v___jp_308_;
}
else
{
lean_object* v_val_446_; 
v_val_446_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_val_446_);
lean_dec_ref_known(v___x_444_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_446_;
v_snd_311_ = v_stx10_443_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_447_; lean_object* v_ls_448_; lean_object* v___x_449_; lean_object* v___x_451_; 
lean_dec(v___x_428_);
v___x_447_ = l_Lean_Syntax_getArg(v___x_439_, v___x_427_);
lean_dec(v___x_439_);
v_ls_448_ = l_Lean_Syntax_getArgs(v___x_447_);
lean_dec(v___x_447_);
v___x_449_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_ls_448_);
v___x_451_ = v___x_360_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_ls_448_);
v___x_451_ = v_reuseFailAlloc_453_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; 
v___x_452_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_438_, v___x_357_, v___x_449_, v___x_451_);
lean_dec_ref(v___x_451_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_452_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec(v___x_439_);
lean_dec(v___x_428_);
lean_del_object(v___x_360_);
v___x_454_ = lean_box(0);
v___x_455_ = lean_box(0);
v___x_456_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_438_, v___x_357_, v___x_454_, v___x_455_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_456_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_457_ = l_Lean_Syntax_getArg(v___x_428_, v___x_395_);
v___x_458_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17));
lean_inc(v___x_457_);
v___x_459_ = l_Lean_Syntax_isOfKind(v___x_457_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_460_ = l_Lean_Syntax_getArg(v___x_428_, v___x_427_);
lean_dec(v___x_428_);
v___x_461_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(v___x_460_);
v___x_462_ = l_Lean_Syntax_isOfKind(v___x_460_, v___x_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; 
lean_dec(v___x_460_);
lean_del_object(v___x_360_);
lean_inc(v___x_457_);
v___x_463_ = l_Lean_Syntax_isIdOrAtom_x3f(v___x_457_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v___x_464_; 
v___x_464_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_464_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
else
{
lean_object* v_val_465_; 
v_val_465_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_val_465_);
lean_dec_ref_known(v___x_463_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_465_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_466_ = l_Lean_Syntax_getArg(v___x_460_, v___x_395_);
v___x_467_ = l_Lean_Syntax_getArg(v___x_460_, v___x_427_);
lean_dec(v___x_460_);
v___x_468_ = l_Lean_Syntax_isNone(v___x_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_467_);
v___x_470_ = l_Lean_Syntax_matchesNull(v___x_467_, v___x_469_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; 
lean_dec(v___x_467_);
lean_dec(v___x_466_);
lean_del_object(v___x_360_);
lean_inc(v___x_457_);
v___x_471_ = l_Lean_Syntax_isIdOrAtom_x3f(v___x_457_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; 
v___x_472_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_472_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
else
{
lean_object* v_val_473_; 
v_val_473_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_val_473_);
lean_dec_ref_known(v___x_471_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_473_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_474_; lean_object* v_ls_475_; lean_object* v___x_476_; lean_object* v___x_478_; 
lean_dec(v___x_457_);
v___x_474_ = l_Lean_Syntax_getArg(v___x_467_, v___x_427_);
lean_dec(v___x_467_);
v_ls_475_ = l_Lean_Syntax_getArgs(v___x_474_);
lean_dec(v___x_474_);
v___x_476_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_ls_475_);
v___x_478_ = v___x_360_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_ls_475_);
v___x_478_ = v_reuseFailAlloc_480_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; 
v___x_479_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_466_, v___x_357_, v___x_476_, v___x_478_);
lean_dec_ref(v___x_478_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_479_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec(v___x_467_);
lean_dec(v___x_457_);
lean_del_object(v___x_360_);
v___x_481_ = lean_box(0);
v___x_482_ = lean_box(0);
v___x_483_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_466_, v___x_357_, v___x_481_, v___x_482_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_483_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_484_ = lean_unsigned_to_nat(2u);
v___x_485_ = l_Lean_Syntax_getArg(v___x_428_, v___x_484_);
v___x_486_ = l_Lean_Syntax_isNone(v___x_485_);
if (v___x_486_ == 0)
{
uint8_t v___x_487_; 
lean_inc(v___x_485_);
v___x_487_ = l_Lean_Syntax_matchesNull(v___x_485_, v___x_427_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
lean_dec(v___x_485_);
v___x_488_ = l_Lean_Syntax_getArg(v___x_428_, v___x_427_);
lean_dec(v___x_428_);
v___x_489_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(v___x_488_);
v___x_490_ = l_Lean_Syntax_isOfKind(v___x_488_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; 
lean_dec(v___x_488_);
lean_del_object(v___x_360_);
lean_inc(v___x_457_);
v___x_491_ = l_Lean_Syntax_isIdOrAtom_x3f(v___x_457_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v___x_492_; 
v___x_492_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_492_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
else
{
lean_object* v_val_493_; 
v_val_493_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_val_493_);
lean_dec_ref_known(v___x_491_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_493_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_494_ = l_Lean_Syntax_getArg(v___x_488_, v___x_395_);
v___x_495_ = l_Lean_Syntax_getArg(v___x_488_, v___x_427_);
lean_dec(v___x_488_);
v___x_496_ = l_Lean_Syntax_isNone(v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_497_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_495_);
v___x_498_ = l_Lean_Syntax_matchesNull(v___x_495_, v___x_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_dec(v___x_495_);
lean_dec(v___x_494_);
lean_del_object(v___x_360_);
lean_inc(v___x_457_);
v___x_499_ = l_Lean_Syntax_isIdOrAtom_x3f(v___x_457_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v___x_500_; 
v___x_500_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_500_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
else
{
lean_object* v_val_501_; 
v_val_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_val_501_);
lean_dec_ref_known(v___x_499_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_501_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_502_; lean_object* v_ls_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
lean_dec(v___x_457_);
v___x_502_ = l_Lean_Syntax_getArg(v___x_495_, v___x_427_);
lean_dec(v___x_495_);
v_ls_503_ = l_Lean_Syntax_getArgs(v___x_502_);
lean_dec(v___x_502_);
v___x_504_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_ls_503_);
v___x_506_ = v___x_360_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_ls_503_);
v___x_506_ = v_reuseFailAlloc_508_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_507_; 
v___x_507_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_494_, v___x_357_, v___x_504_, v___x_506_);
lean_dec_ref(v___x_506_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_507_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec(v___x_495_);
lean_dec(v___x_457_);
lean_del_object(v___x_360_);
v___x_509_ = lean_box(0);
v___x_510_ = lean_box(0);
v___x_511_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_494_, v___x_357_, v___x_509_, v___x_510_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_511_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v_np_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_np_512_ = l_Lean_Syntax_getArg(v___x_485_, v___x_395_);
lean_dec(v___x_485_);
v___x_513_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19));
lean_inc(v_np_512_);
v___x_514_ = l_Lean_Syntax_isOfKind(v_np_512_, v___x_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
lean_dec(v_np_512_);
v___x_515_ = l_Lean_Syntax_getArg(v___x_428_, v___x_427_);
lean_dec(v___x_428_);
v___x_516_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(v___x_515_);
v___x_517_ = l_Lean_Syntax_isOfKind(v___x_515_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
lean_dec(v___x_515_);
lean_del_object(v___x_360_);
lean_inc(v___x_457_);
v___x_518_ = l_Lean_Syntax_isIdOrAtom_x3f(v___x_457_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v___x_519_; 
v___x_519_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_519_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
else
{
lean_object* v_val_520_; 
v_val_520_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_val_520_);
lean_dec_ref_known(v___x_518_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_520_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_521_ = l_Lean_Syntax_getArg(v___x_515_, v___x_395_);
v___x_522_ = l_Lean_Syntax_getArg(v___x_515_, v___x_427_);
lean_dec(v___x_515_);
v___x_523_ = l_Lean_Syntax_isNone(v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_522_);
v___x_525_ = l_Lean_Syntax_matchesNull(v___x_522_, v___x_524_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; 
lean_dec(v___x_522_);
lean_dec(v___x_521_);
lean_del_object(v___x_360_);
lean_inc(v___x_457_);
v___x_526_ = l_Lean_Syntax_isIdOrAtom_x3f(v___x_457_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_527_; 
v___x_527_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
v___y_309_ = v_val_358_;
v_fst_310_ = v___x_527_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
else
{
lean_object* v_val_528_; 
v_val_528_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_val_528_);
lean_dec_ref_known(v___x_526_, 1);
v___y_309_ = v_val_358_;
v_fst_310_ = v_val_528_;
v_snd_311_ = v___x_457_;
goto v___jp_308_;
}
}
else
{
lean_object* v___x_529_; lean_object* v_ls_530_; lean_object* v___x_531_; lean_object* v___x_533_; 
lean_dec(v___x_457_);
v___x_529_ = l_Lean_Syntax_getArg(v___x_522_, v___x_427_);
lean_dec(v___x_522_);
v_ls_530_ = l_Lean_Syntax_getArgs(v___x_529_);
lean_dec(v___x_529_);
v___x_531_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_ls_530_);
v___x_533_ = v___x_360_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_ls_530_);
v___x_533_ = v_reuseFailAlloc_535_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
lean_object* v___x_534_; 
v___x_534_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_521_, v___x_357_, v___x_531_, v___x_533_);
lean_dec_ref(v___x_533_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_534_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
lean_dec(v___x_522_);
lean_dec(v___x_457_);
lean_del_object(v___x_360_);
v___x_536_ = lean_box(0);
v___x_537_ = lean_box(0);
v___x_538_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(v___x_521_, v___x_357_, v___x_536_, v___x_537_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_538_;
goto v___jp_328_;
}
}
}
else
{
lean_object* v___x_539_; lean_object* v___x_541_; 
lean_dec(v___x_457_);
v___x_539_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v_np_512_);
v___x_541_ = v___x_360_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_np_512_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; 
v___x_542_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(v___x_357_, v___x_428_, v___x_344_, v___x_362_, v___x_348_, v___x_427_, v___x_395_, v___x_539_, v___x_541_);
lean_dec_ref(v___x_541_);
lean_dec(v___x_428_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_542_;
goto v___jp_328_;
}
}
}
}
else
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
lean_dec(v___x_485_);
lean_dec(v___x_457_);
lean_del_object(v___x_360_);
v___x_544_ = lean_box(0);
v___x_545_ = lean_box(0);
v___x_546_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(v___x_357_, v___x_428_, v___x_344_, v___x_362_, v___x_348_, v___x_427_, v___x_395_, v___x_544_, v___x_545_);
lean_dec(v___x_428_);
v___y_329_ = v_val_358_;
v___y_330_ = v___x_546_;
goto v___jp_328_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
goto v___jp_297_;
}
}
}
else
{
lean_dec_ref(v_str_340_);
lean_dec(v_stx_306_);
lean_dec_ref(v_children_296_);
lean_dec_ref(v_text_274_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_obj_once(&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23, &lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23_once, _init_lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23);
v___x_549_ = lp_plugin_panic___at___00handleDocumentSymbol_toDocumentSymbols_spec__2(v___x_548_);
v___y_287_ = v___x_549_;
goto v___jp_286_;
}
else
{
lean_object* v_val_550_; 
v_val_550_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_val_550_);
lean_dec_ref_known(v___x_333_, 1);
v___y_287_ = v_val_550_;
goto v___jp_286_;
}
}
}
else
{
lean_object* v___x_551_; uint8_t v___x_552_; 
lean_dec_ref(v_str_340_);
lean_dec(v___x_333_);
v___x_551_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25));
lean_inc(v_stx_306_);
v___x_552_ = l_Lean_Syntax_isOfKind(v_stx_306_, v___x_551_);
if (v___x_552_ == 0)
{
lean_dec_ref(v___y_335_);
lean_dec(v_stx_306_);
goto v___jp_297_;
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_553_ = lean_unsigned_to_nat(0u);
v___x_554_ = l_Lean_Syntax_getArg(v_stx_306_, v___x_553_);
v___x_555_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27));
v___x_556_ = l_Lean_Syntax_isOfKind(v___x_554_, v___x_555_);
if (v___x_556_ == 0)
{
lean_dec_ref(v___y_335_);
lean_dec(v_stx_306_);
goto v___jp_297_;
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
lean_dec_ref(v_children_296_);
v___x_557_ = lean_unsigned_to_nat(2u);
v___x_558_ = l_Lean_Syntax_getArg(v_stx_306_, v___x_557_);
lean_dec(v_stx_306_);
v___x_559_ = l_Lean_Syntax_getOptional_x3f(v___x_558_);
lean_dec(v___x_558_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_box(0);
v___x_561_ = lp_plugin_handleDocumentSymbol_mkLevel(v_text_274_, v_syms_275_, v_tail_282_, v_up_277_, v___y_335_, v___x_560_);
return v___x_561_;
}
else
{
lean_object* v_val_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_570_; 
v_val_562_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_570_ == 0)
{
v___x_564_ = v___x_559_;
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_val_562_);
lean_dec(v___x_559_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_val_562_);
v___x_567_ = v_reuseFailAlloc_569_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; 
v___x_568_ = lp_plugin_handleDocumentSymbol_mkLevel(v_text_274_, v_syms_275_, v_tail_282_, v_up_277_, v___y_335_, v___x_567_);
return v___x_568_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_571_; uint8_t v___x_572_; 
lean_dec_ref(v_str_340_);
lean_dec(v___x_333_);
v___x_571_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29));
lean_inc(v_stx_306_);
v___x_572_ = l_Lean_Syntax_isOfKind(v_stx_306_, v___x_571_);
if (v___x_572_ == 0)
{
lean_dec_ref(v___y_335_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
else
{
lean_object* v___x_573_; lean_object* v_id_574_; lean_object* v___x_576_; 
lean_dec_ref(v_children_296_);
v___x_573_ = lean_unsigned_to_nat(1u);
v_id_574_ = l_Lean_Syntax_getArg(v_stx_306_, v___x_573_);
lean_dec(v_stx_306_);
if (v_isShared_304_ == 0)
{
lean_ctor_set_tag(v___x_303_, 1);
lean_ctor_set(v___x_303_, 0, v_id_574_);
v___x_576_ = v___x_303_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_id_574_);
v___x_576_ = v_reuseFailAlloc_578_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_577_; 
v___x_577_ = lp_plugin_handleDocumentSymbol_mkLevel(v_text_274_, v_syms_275_, v_tail_282_, v_up_277_, v___y_335_, v___x_576_);
return v___x_577_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_338_, 2);
lean_dec_ref_known(v_pre_337_, 2);
lean_dec_ref_known(v_pre_336_, 2);
lean_dec_ref_known(v_elaborator_305_, 2);
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
}
else
{
lean_dec(v_pre_338_);
lean_dec_ref_known(v_pre_337_, 2);
lean_dec_ref_known(v_pre_336_, 2);
lean_dec_ref_known(v_elaborator_305_, 2);
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
}
else
{
lean_dec_ref_known(v_pre_336_, 2);
lean_dec(v_pre_337_);
lean_dec_ref_known(v_elaborator_305_, 2);
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
}
else
{
lean_dec_ref_known(v_elaborator_305_, 2);
lean_dec(v_pre_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
}
else
{
lean_dec_ref(v___y_335_);
lean_dec(v___x_333_);
lean_dec(v_stx_306_);
lean_dec(v_elaborator_305_);
lean_del_object(v___x_303_);
goto v___jp_297_;
}
}
}
}
else
{
lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec_ref(v_i_295_);
v___x_582_ = l_Lean_PersistentArray_toList___redArg(v_children_296_);
lean_dec_ref(v_children_296_);
v___x_583_ = l_List_appendTR___redArg(v___x_582_, v_tail_282_);
v_its_276_ = v___x_583_;
goto _start;
}
v___jp_297_:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = l_Lean_PersistentArray_toList___redArg(v_children_296_);
lean_dec_ref(v_children_296_);
v___x_299_ = l_List_appendTR___redArg(v___x_298_, v_tail_282_);
v_its_276_ = v___x_299_;
goto _start;
}
}
default: 
{
lean_dec_ref_known(v_head_281_, 1);
lean_del_object(v___x_284_);
v_its_276_ = v_tail_282_;
goto _start;
}
}
v___jp_286_:
{
lean_object* v_stop_288_; lean_object* v___x_289_; 
v_stop_288_ = lean_ctor_get(v___y_287_, 1);
lean_inc(v_stop_288_);
lean_dec_ref(v___y_287_);
v___x_289_ = lean_apply_3(v_up_277_, v_stop_288_, v_tail_282_, v_syms_275_);
return v___x_289_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0(lean_object* v_range_588_, lean_object* v_text_589_, lean_object* v_syms_590_, lean_object* v_up_591_, lean_object* v_id_592_, lean_object* v_name_593_, lean_object* v_stop_594_, lean_object* v_its_595_, lean_object* v_children_596_){
_start:
{
uint8_t v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v_start_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_630_; 
v_start_609_ = lean_ctor_get(v_range_588_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v_range_588_);
if (v_isSharedCheck_630_ == 0)
{
lean_object* v_unused_631_; 
v_unused_631_ = lean_ctor_get(v_range_588_, 1);
lean_dec(v_unused_631_);
v___x_611_ = v_range_588_;
v_isShared_612_ = v_isSharedCheck_630_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_start_609_);
lean_dec(v_range_588_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_630_;
goto v_resetjp_610_;
}
v___jp_597_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v_sym_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
lean_inc_ref(v_text_589_);
v___x_603_ = l_Lean_Syntax_Range_toLspRange(v_text_589_, v___y_602_);
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v_children_596_);
lean_inc(v___y_600_);
v___x_605_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_605_, 0, v___y_601_);
lean_ctor_set(v___x_605_, 1, v___y_600_);
lean_ctor_set(v___x_605_, 2, v___y_599_);
lean_ctor_set(v___x_605_, 3, v___x_603_);
lean_ctor_set(v___x_605_, 4, v___x_604_);
lean_ctor_set_uint8(v___x_605_, sizeof(void*)*5, v___y_598_);
v_sym_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_sym_606_, 0, v___x_605_);
v___x_607_ = lean_array_push(v_syms_590_, v_sym_606_);
v___x_608_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols(v_text_589_, v___x_607_, v_its_595_, v_up_591_);
return v___x_608_;
}
v_resetjp_610_:
{
lean_object* v_range_614_; 
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 1, v_stop_594_);
v_range_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_start_609_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v_stop_594_);
v_range_614_ = v_reuseFailAlloc_629_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___y_616_; lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___closed__2));
v___x_625_ = lean_name_eq(v_name_593_, v___x_624_);
if (v___x_625_ == 0)
{
uint8_t v___x_626_; lean_object* v___x_627_; 
v___x_626_ = 1;
v___x_627_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_593_, v___x_626_);
v___y_616_ = v___x_627_;
goto v___jp_615_;
}
else
{
lean_object* v___x_628_; 
lean_dec(v_name_593_);
v___x_628_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0));
v___y_616_ = v___x_628_;
goto v___jp_615_;
}
v___jp_615_:
{
lean_object* v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; 
v___x_617_ = lean_box(0);
v___x_618_ = 2;
lean_inc_ref(v_range_614_);
lean_inc_ref(v_text_589_);
v___x_619_ = l_Lean_Syntax_Range_toLspRange(v_text_589_, v_range_614_);
if (lean_obj_tag(v_id_592_) == 0)
{
v___y_598_ = v___x_618_;
v___y_599_ = v___x_619_;
v___y_600_ = v___x_617_;
v___y_601_ = v___y_616_;
v___y_602_ = v_range_614_;
goto v___jp_597_;
}
else
{
lean_object* v_val_620_; uint8_t v___x_621_; lean_object* v___x_622_; 
v_val_620_ = lean_ctor_get(v_id_592_, 0);
v___x_621_ = 0;
v___x_622_ = l_Lean_Syntax_getRange_x3f(v_val_620_, v___x_621_);
if (lean_obj_tag(v___x_622_) == 0)
{
v___y_598_ = v___x_618_;
v___y_599_ = v___x_619_;
v___y_600_ = v___x_617_;
v___y_601_ = v___y_616_;
v___y_602_ = v_range_614_;
goto v___jp_597_;
}
else
{
lean_object* v_val_623_; 
lean_dec_ref(v_range_614_);
v_val_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_val_623_);
lean_dec_ref_known(v___x_622_, 1);
v___y_598_ = v___x_618_;
v___y_599_ = v___x_619_;
v___y_600_ = v___x_617_;
v___y_601_ = v___y_616_;
v___y_602_ = v_val_623_;
goto v___jp_597_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0___boxed(lean_object* v_range_632_, lean_object* v_text_633_, lean_object* v_syms_634_, lean_object* v_up_635_, lean_object* v_id_636_, lean_object* v_name_637_, lean_object* v_stop_638_, lean_object* v_its_639_, lean_object* v_children_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = lp_plugin_handleDocumentSymbol_mkLevel___lam__0(v_range_632_, v_text_633_, v_syms_634_, v_up_635_, v_id_636_, v_name_637_, v_stop_638_, v_its_639_, v_children_640_);
lean_dec(v_id_636_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel(lean_object* v_text_642_, lean_object* v_syms_643_, lean_object* v_its_644_, lean_object* v_up_645_, lean_object* v_range_646_, lean_object* v_id_647_){
_start:
{
lean_object* v___y_649_; 
if (lean_obj_tag(v_id_647_) == 0)
{
lean_object* v___x_655_; 
v___x_655_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___closed__3));
v___y_649_ = v___x_655_;
goto v___jp_648_;
}
else
{
lean_object* v_val_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_val_656_ = lean_ctor_get(v_id_647_, 0);
v___x_657_ = l_Lean_Syntax_getId(v_val_656_);
v___x_658_ = l_Lean_Name_componentsRev(v___x_657_);
v___y_649_ = v___x_658_;
goto v___jp_648_;
}
v___jp_648_:
{
lean_object* v___x_650_; lean_object* v_name_651_; lean_object* v_up_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_650_ = lean_box(0);
v_name_651_ = lp_plugin_List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0(v___x_650_, v___y_649_);
lean_inc_ref(v_text_642_);
v_up_652_ = lean_alloc_closure((void*)(lp_plugin_handleDocumentSymbol_mkLevel___lam__0___boxed), 9, 6);
lean_closure_set(v_up_652_, 0, v_range_646_);
lean_closure_set(v_up_652_, 1, v_text_642_);
lean_closure_set(v_up_652_, 2, v_syms_643_);
lean_closure_set(v_up_652_, 3, v_up_645_);
lean_closure_set(v_up_652_, 4, v_id_647_);
lean_closure_set(v_up_652_, 5, v_name_651_);
v___x_653_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___closed__0));
v___x_654_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols(v_text_642_, v___x_653_, v_its_644_, v_up_652_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0(lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_a_661_){
_start:
{
lean_inc_ref(v_a_661_);
return v_a_661_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0___boxed(lean_object* v_x_662_, lean_object* v_x_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = lp_plugin_handleDocumentSymbol___redArg___lam__0(v_x_662_, v_x_663_, v_a_664_);
lean_dec_ref(v_a_664_);
lean_dec(v_x_663_);
lean_dec(v_x_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* lp_plugin_List_mapTR_loop___at___00handleDocumentSymbol_spec__0(lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
if (lean_obj_tag(v_a_666_) == 0)
{
lean_object* v___x_668_; 
v___x_668_ = l_List_reverse___redArg(v_a_667_);
return v___x_668_;
}
else
{
lean_object* v_head_669_; lean_object* v_tail_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_679_; 
v_head_669_ = lean_ctor_get(v_a_666_, 0);
v_tail_670_ = lean_ctor_get(v_a_666_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v_a_666_);
if (v_isSharedCheck_679_ == 0)
{
v___x_672_ = v_a_666_;
v_isShared_673_ = v_isSharedCheck_679_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_tail_670_);
lean_inc(v_head_669_);
lean_dec(v_a_666_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_679_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_674_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v_head_669_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 1, v_a_667_);
lean_ctor_set(v___x_672_, 0, v___x_674_);
v___x_676_ = v___x_672_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_a_667_);
v___x_676_ = v_reuseFailAlloc_678_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v_a_666_ = v_tail_670_;
v_a_667_ = v___x_676_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1(lean_object* v_meta_680_, lean_object* v___f_681_, lean_object* v_x_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_fst_685_; lean_object* v_text_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v_fst_685_ = lean_ctor_get(v_x_682_, 0);
lean_inc(v_fst_685_);
lean_dec_ref(v_x_682_);
v_text_686_ = lean_ctor_get(v_meta_680_, 3);
lean_inc_ref(v_text_686_);
lean_dec_ref(v_meta_680_);
v___x_687_ = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___closed__0));
v___x_688_ = lean_box(0);
v___x_689_ = lp_plugin_List_mapTR_loop___at___00handleDocumentSymbol_spec__0(v_fst_685_, v___x_688_);
v___x_690_ = lp_plugin_handleDocumentSymbol_toDocumentSymbols(v_text_686_, v___x_687_, v___x_689_, v___f_681_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1___boxed(lean_object* v_meta_692_, lean_object* v___f_693_, lean_object* v_x_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = lp_plugin_handleDocumentSymbol___redArg___lam__1(v_meta_692_, v___f_693_, v_x_694_, v___y_695_);
lean_dec_ref(v___y_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg(lean_object* v_a_699_){
_start:
{
lean_object* v___x_701_; lean_object* v_a_702_; lean_object* v_toEditableDocumentCore_703_; lean_object* v_meta_704_; lean_object* v_cmdSnaps_705_; lean_object* v___f_706_; lean_object* v___f_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_701_ = l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(v_a_699_);
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref(v___x_701_);
v_toEditableDocumentCore_703_ = lean_ctor_get(v_a_702_, 0);
lean_inc_ref(v_toEditableDocumentCore_703_);
lean_dec(v_a_702_);
v_meta_704_ = lean_ctor_get(v_toEditableDocumentCore_703_, 0);
lean_inc_ref(v_meta_704_);
v_cmdSnaps_705_ = lean_ctor_get(v_toEditableDocumentCore_703_, 2);
lean_inc(v_cmdSnaps_705_);
lean_dec_ref(v_toEditableDocumentCore_703_);
v___f_706_ = ((lean_object*)(lp_plugin_handleDocumentSymbol___redArg___closed__0));
v___f_707_ = lean_alloc_closure((void*)(lp_plugin_handleDocumentSymbol___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_707_, 0, v_meta_704_);
lean_closure_set(v___f_707_, 1, v___f_706_);
v___x_708_ = l_Lean_AsyncList_waitAll___redArg(v_cmdSnaps_705_);
v___x_709_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_708_, v___f_707_, v_a_699_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___boxed(lean_object* v_a_710_, lean_object* v_a_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = lp_plugin_handleDocumentSymbol___redArg(v_a_710_);
lean_dec_ref(v_a_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol(lean_object* v_x_713_, lean_object* v_a_714_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = lp_plugin_handleDocumentSymbol___redArg(v_a_714_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___boxed(lean_object* v_x_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = lp_plugin_handleDocumentSymbol(v_x_717_, v_a_718_);
lean_dec_ref(v_a_718_);
lean_dec_ref(v_x_717_);
return v_res_720_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8(void){
_start:
{
uint8_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_743_ = 1;
v___x_744_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__7));
v___x_745_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_744_, v___x_743_);
return v___x_745_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4(void){
_start:
{
uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = 1;
v___x_754_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3));
v___x_755_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_754_, v___x_753_);
return v___x_755_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6(void){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_756_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__5));
v___x_757_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4);
v___x_758_ = lean_string_append(v___x_757_, v___x_756_);
return v___x_758_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9(void){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_759_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8);
v___x_760_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
v___x_761_ = lean_string_append(v___x_760_, v___x_759_);
return v___x_761_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11(void){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_762_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
v___x_763_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9);
v___x_764_ = lean_string_append(v___x_763_, v___x_762_);
return v___x_764_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15(void){
_start:
{
uint8_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_769_ = 1;
v___x_770_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__14));
v___x_771_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_770_, v___x_769_);
return v___x_771_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_772_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15);
v___x_773_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
v___x_774_ = lean_string_append(v___x_773_, v___x_772_);
return v___x_774_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
v___x_776_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16);
v___x_777_ = lean_string_append(v___x_776_, v___x_775_);
return v___x_777_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20(void){
_start:
{
uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_781_ = 1;
v___x_782_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__19));
v___x_783_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_782_, v___x_781_);
return v___x_783_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_784_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20);
v___x_785_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
v___x_786_ = lean_string_append(v___x_785_, v___x_784_);
return v___x_786_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_787_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
v___x_788_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21);
v___x_789_ = lean_string_append(v___x_788_, v___x_787_);
return v___x_789_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25(void){
_start:
{
uint8_t v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_793_ = 1;
v___x_794_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__24));
v___x_795_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_794_, v___x_793_);
return v___x_795_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_796_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25);
v___x_797_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
v___x_798_ = lean_string_append(v___x_797_, v___x_796_);
return v___x_798_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
v___x_800_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26);
v___x_801_ = lean_string_append(v___x_800_, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30(void){
_start:
{
uint8_t v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_805_ = 1;
v___x_806_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__29));
v___x_807_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_806_, v___x_805_);
return v___x_807_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30);
v___x_809_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
v___x_810_ = lean_string_append(v___x_809_, v___x_808_);
return v___x_810_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
v___x_812_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31);
v___x_813_ = lean_string_append(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36(void){
_start:
{
uint8_t v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = 1;
v___x_819_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__35));
v___x_820_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_819_, v___x_818_);
return v___x_820_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_821_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36);
v___x_822_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
v___x_823_ = lean_string_append(v___x_822_, v___x_821_);
return v___x_823_;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_824_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
v___x_825_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37);
v___x_826_ = lean_string_append(v___x_825_, v___x_824_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0(lean_object* v_json_827_){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__0));
lean_inc(v_json_827_);
v___x_829_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(v_json_827_, v___x_828_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_839_; 
lean_dec(v_json_827_);
v_a_830_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_839_ == 0)
{
v___x_832_ = v___x_829_;
v_isShared_833_ = v_isSharedCheck_839_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_829_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_839_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_837_; 
v___x_834_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11);
v___x_835_ = lean_string_append(v___x_834_, v_a_830_);
lean_dec(v_a_830_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v___x_835_);
v___x_837_ = v___x_832_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
else
{
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec(v_json_827_);
v_a_840_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_829_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_829_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
lean_ctor_set_tag(v___x_842_, 0);
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_a_848_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_829_, 1);
v___x_849_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__12));
lean_inc(v_json_827_);
v___x_850_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientInfo_fromJson_spec__1(v_json_827_, v___x_849_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_860_; 
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_860_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_860_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_860_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_858_; 
v___x_855_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17);
v___x_856_ = lean_string_append(v___x_855_, v_a_851_);
lean_dec(v_a_851_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_856_);
v___x_858_ = v___x_853_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_856_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
else
{
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_861_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_850_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_850_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set_tag(v___x_863_, 0);
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_a_869_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_850_, 1);
v___x_870_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__18));
lean_inc(v_json_827_);
v___x_871_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSymbolInformation_fromJson_spec__0(v_json_827_, v___x_870_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_881_; 
lean_dec(v_a_869_);
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_872_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_881_ == 0)
{
v___x_874_ = v___x_871_;
v_isShared_875_ = v_isSharedCheck_881_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_871_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_881_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_879_; 
v___x_876_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22);
v___x_877_ = lean_string_append(v___x_876_, v_a_872_);
lean_dec(v_a_872_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_877_);
v___x_879_ = v___x_874_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_877_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
else
{
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec(v_a_869_);
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_882_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_871_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_871_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set_tag(v___x_884_, 0);
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v_a_890_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_871_, 1);
v___x_891_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__23));
lean_inc(v_json_827_);
v___x_892_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_json_827_, v___x_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_902_; 
lean_dec(v_a_890_);
lean_dec(v_a_869_);
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_893_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_902_ == 0)
{
v___x_895_ = v___x_892_;
v_isShared_896_ = v_isSharedCheck_902_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v___x_892_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_902_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
v___x_897_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27);
v___x_898_ = lean_string_append(v___x_897_, v_a_893_);
lean_dec(v_a_893_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 0, v___x_898_);
v___x_900_ = v___x_895_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_898_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
else
{
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v_a_890_);
lean_dec(v_a_869_);
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_903_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_892_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_892_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
lean_ctor_set_tag(v___x_905_, 0);
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_911_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_892_, 1);
v___x_912_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__28));
lean_inc(v_json_827_);
v___x_913_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_json_827_, v___x_912_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_923_; 
lean_dec(v_a_911_);
lean_dec(v_a_890_);
lean_dec(v_a_869_);
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_923_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_923_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_923_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_918_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32);
v___x_919_ = lean_string_append(v___x_918_, v_a_914_);
lean_dec(v_a_914_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v___x_919_);
v___x_921_ = v___x_916_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
else
{
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_a_911_);
lean_dec(v_a_890_);
lean_dec(v_a_869_);
lean_dec(v_a_848_);
lean_dec(v_json_827_);
v_a_924_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_913_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_913_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
lean_ctor_set_tag(v___x_926_, 0);
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v_a_932_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_932_);
lean_dec_ref_known(v___x_913_, 1);
v___x_933_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__33));
v___x_934_ = lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(v_json_827_, v___x_933_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_944_; 
lean_dec(v_a_932_);
lean_dec(v_a_911_);
lean_dec(v_a_890_);
lean_dec(v_a_869_);
lean_dec(v_a_848_);
v_a_935_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_944_ == 0)
{
v___x_937_ = v___x_934_;
v_isShared_938_ = v_isSharedCheck_944_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_934_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_944_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_939_ = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38);
v___x_940_ = lean_string_append(v___x_939_, v_a_935_);
lean_dec(v_a_935_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_940_);
v___x_942_ = v___x_937_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
else
{
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v_a_932_);
lean_dec(v_a_911_);
lean_dec(v_a_890_);
lean_dec(v_a_869_);
lean_dec(v_a_848_);
v_a_945_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_934_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_934_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
lean_ctor_set_tag(v___x_947_, 0);
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_962_; 
v_a_953_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_962_ == 0)
{
v___x_955_ = v___x_934_;
v_isShared_956_ = v_isSharedCheck_962_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_934_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_962_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_957_; uint8_t v___x_958_; lean_object* v___x_960_; 
v___x_957_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_957_, 0, v_a_848_);
lean_ctor_set(v___x_957_, 1, v_a_869_);
lean_ctor_set(v___x_957_, 2, v_a_911_);
lean_ctor_set(v___x_957_, 3, v_a_932_);
lean_ctor_set(v___x_957_, 4, v_a_953_);
v___x_958_ = lean_unbox(v_a_890_);
lean_dec(v_a_890_);
lean_ctor_set_uint8(v___x_957_, sizeof(void*)*5, v___x_958_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 0, v___x_957_);
v___x_960_ = v___x_955_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_957_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson(lean_object* v_json_963_){
_start:
{
lean_object* v___x_964_; 
lean_inc(v_json_963_);
v___x_964_ = l_Lean_Json_getTag_x3f(v_json_963_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v___x_965_; 
lean_dec(v_json_963_);
v___x_965_ = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__1));
return v___x_965_;
}
else
{
lean_object* v_val_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_1008_; 
v_val_966_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_968_ = v___x_964_;
v_isShared_969_ = v_isSharedCheck_1008_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_val_966_);
lean_dec(v___x_964_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_1008_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__2));
v___x_971_ = lean_string_dec_eq(v_val_966_, v___x_970_);
lean_dec(v_val_966_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; 
lean_del_object(v___x_968_);
lean_dec(v_json_963_);
v___x_972_ = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__4));
return v___x_972_;
}
else
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_973_ = lean_unsigned_to_nat(1u);
v___x_974_ = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8));
v___x_975_ = l_Lean_Json_parseCtorFields(v_json_963_, v___x_970_, v___x_973_, v___x_974_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_del_object(v___x_968_);
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_975_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
else
{
lean_object* v_a_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v_a_984_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_984_);
lean_dec_ref_known(v___x_975_, 1);
v___x_985_ = lean_box(0);
v___x_986_ = lean_unsigned_to_nat(0u);
v___x_987_ = lean_array_get(v___x_985_, v_a_984_, v___x_986_);
lean_dec(v_a_984_);
v___x_988_ = lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0(v___x_987_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_del_object(v___x_968_);
v_a_989_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_988_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_988_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1007_; 
v_a_997_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_999_ = v___x_988_;
v_isShared_1000_ = v_isSharedCheck_1007_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_988_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1007_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 0);
lean_ctor_set(v___x_968_, 0, v_a_997_);
v___x_1002_ = v___x_968_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1004_; 
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v___x_1002_);
v___x_1004_ = v___x_999_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(size_t v_sz_1009_, size_t v_i_1010_, lean_object* v_bs_1011_){
_start:
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_usize_dec_lt(v_i_1010_, v_sz_1009_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; 
v___x_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1013_, 0, v_bs_1011_);
return v___x_1013_;
}
else
{
lean_object* v_v_1014_; lean_object* v___x_1015_; 
v_v_1014_ = lean_array_uget_borrowed(v_bs_1011_, v_i_1010_);
lean_inc(v_v_1014_);
v___x_1015_ = lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson(v_v_1014_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec_ref(v_bs_1011_);
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1015_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1015_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1025_; lean_object* v_bs_x27_1026_; size_t v___x_1027_; size_t v___x_1028_; lean_object* v___x_1029_; 
v_a_1024_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1015_, 1);
v___x_1025_ = lean_unsigned_to_nat(0u);
v_bs_x27_1026_ = lean_array_uset(v_bs_1011_, v_i_1010_, v___x_1025_);
v___x_1027_ = ((size_t)1ULL);
v___x_1028_ = lean_usize_add(v_i_1010_, v___x_1027_);
v___x_1029_ = lean_array_uset(v_bs_x27_1026_, v_i_1010_, v_a_1024_);
v_i_1010_ = v___x_1028_;
v_bs_1011_ = v___x_1029_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1033_){
_start:
{
if (lean_obj_tag(v_x_1033_) == 4)
{
lean_object* v_elems_1034_; size_t v_sz_1035_; size_t v___x_1036_; lean_object* v___x_1037_; 
v_elems_1034_ = lean_ctor_get(v_x_1033_, 0);
lean_inc_ref(v_elems_1034_);
lean_dec_ref_known(v_x_1033_, 1);
v_sz_1035_ = lean_array_size(v_elems_1034_);
v___x_1036_ = ((size_t)0ULL);
v___x_1037_ = lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(v_sz_1035_, v___x_1036_, v_elems_1034_);
return v___x_1037_;
}
else
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1038_ = ((lean_object*)(lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0));
v___x_1039_ = lean_unsigned_to_nat(80u);
v___x_1040_ = l_Lean_Json_pretty(v_x_1033_, v___x_1039_);
v___x_1041_ = lean_string_append(v___x_1038_, v___x_1040_);
lean_dec_ref(v___x_1040_);
v___x_1042_ = ((lean_object*)(lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_1043_ = lean_string_append(v___x_1041_, v___x_1042_);
v___x_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_1045_){
_start:
{
if (lean_obj_tag(v_x_1045_) == 0)
{
lean_object* v___x_1046_; 
v___x_1046_ = ((lean_object*)(lp_plugin_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0));
return v___x_1046_;
}
else
{
lean_object* v___x_1047_; 
v___x_1047_ = lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2(v_x_1045_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1064_; 
v_a_1056_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1058_ = v___x_1047_;
v_isShared_1059_ = v_isSharedCheck_1064_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1047_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1064_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1060_, 0, v_a_1056_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 0, v___x_1060_);
v___x_1062_ = v___x_1058_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(lean_object* v_j_1065_, lean_object* v_k_1066_){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = l_Lean_Json_getObjValD(v_j_1065_, v_k_1066_);
v___x_1068_ = lp_plugin_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1(v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0___boxed(lean_object* v_j_1069_, lean_object* v_k_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(v_j_1069_, v_k_1070_);
lean_dec_ref(v_k_1070_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_1072_, lean_object* v_i_1073_, lean_object* v_bs_1074_){
_start:
{
size_t v_sz_boxed_1075_; size_t v_i_boxed_1076_; lean_object* v_res_1077_; 
v_sz_boxed_1075_ = lean_unbox_usize(v_sz_1072_);
lean_dec(v_sz_1072_);
v_i_boxed_1076_ = lean_unbox_usize(v_i_1073_);
lean_dec(v_i_1073_);
v_res_1077_ = lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_1075_, v_i_boxed_1076_, v_bs_1074_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0_spec__0(lean_object* v_x_1080_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 4)
{
lean_object* v_elems_1081_; size_t v_sz_1082_; size_t v___x_1083_; lean_object* v___x_1084_; 
v_elems_1081_ = lean_ctor_get(v_x_1080_, 0);
lean_inc_ref(v_elems_1081_);
lean_dec_ref_known(v_x_1080_, 1);
v_sz_1082_ = lean_array_size(v_elems_1081_);
v___x_1083_ = ((size_t)0ULL);
v___x_1084_ = lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(v_sz_1082_, v___x_1083_, v_elems_1081_);
return v___x_1084_;
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1085_ = ((lean_object*)(lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0));
v___x_1086_ = lean_unsigned_to_nat(80u);
v___x_1087_ = l_Lean_Json_pretty(v_x_1080_, v___x_1086_);
v___x_1088_ = lean_string_append(v___x_1085_, v___x_1087_);
lean_dec_ref(v___x_1087_);
v___x_1089_ = ((lean_object*)(lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_1090_ = lean_string_append(v___x_1088_, v___x_1089_);
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
return v___x_1091_;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0(lean_object* v_j_1092_, lean_object* v_k_1093_){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = l_Lean_Json_getObjValD(v_j_1092_, v_k_1093_);
v___x_1095_ = lp_plugin_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0_spec__0(v___x_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0___boxed(lean_object* v_j_1096_, lean_object* v_k_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0(v_j_1096_, v_k_1097_);
lean_dec_ref(v_k_1097_);
return v_res_1098_;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3(void){
_start:
{
uint8_t v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1105_ = 1;
v___x_1106_ = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2));
v___x_1107_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1106_, v___x_1105_);
return v___x_1107_;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1108_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__5));
v___x_1109_ = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3);
v___x_1110_ = lean_string_append(v___x_1109_, v___x_1108_);
return v___x_1110_;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6(void){
_start:
{
uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1113_ = 1;
v___x_1114_ = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__5));
v___x_1115_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1114_, v___x_1113_);
return v___x_1115_;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6);
v___x_1117_ = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4);
v___x_1118_ = lean_string_append(v___x_1117_, v___x_1116_);
return v___x_1118_;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
v___x_1120_ = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7);
v___x_1121_ = lean_string_append(v___x_1120_, v___x_1119_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson(lean_object* v_json_1122_){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__0));
v___x_1124_ = lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0(v_json_1122_, v___x_1123_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1134_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1132_; 
v___x_1129_ = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8);
v___x_1130_ = lean_string_append(v___x_1129_, v_a_1125_);
lean_dec(v_a_1125_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v___x_1130_);
v___x_1132_ = v___x_1127_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
else
{
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
v_a_1135_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1124_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1124_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
lean_ctor_set_tag(v___x_1137_, 0);
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1124_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1124_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_(lean_object* v_a_1153_, lean_object* v_x_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = lp_plugin_handleDocumentSymbol___redArg(v___y_1155_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2____boxed(lean_object* v_a_1158_, lean_object* v_x_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_(v_a_1158_, v_x_1159_, v___y_1160_);
lean_dec_ref(v___y_1160_);
lean_dec_ref(v_x_1159_);
lean_dec_ref(v_a_1158_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0(lean_object* v_method_1166_, lean_object* v_x_1167_){
_start:
{
lean_object* v_response_1169_; 
if (lean_obj_tag(v_x_1167_) == 0)
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
v_a_1193_ = lean_ctor_get(v_x_1167_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_x_1167_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v_x_1167_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v_x_1167_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
else
{
lean_object* v_a_1201_; lean_object* v_response_x3f_1202_; 
v_a_1201_ = lean_ctor_get(v_x_1167_, 0);
lean_inc(v_a_1201_);
lean_dec_ref_known(v_x_1167_, 1);
v_response_x3f_1202_ = lean_ctor_get(v_a_1201_, 0);
if (lean_obj_tag(v_response_x3f_1202_) == 0)
{
lean_object* v_serialized_1203_; lean_object* v___x_1204_; 
v_serialized_1203_ = lean_ctor_get(v_a_1201_, 1);
lean_inc_ref(v_serialized_1203_);
lean_dec(v_a_1201_);
v___x_1204_ = l_Lean_Json_parse(v_serialized_1203_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1218_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1218_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1218_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; 
v___x_1209_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__2));
v___x_1210_ = lean_string_append(v___x_1209_, v_method_1166_);
v___x_1211_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1));
v___x_1212_ = lean_string_append(v___x_1210_, v___x_1211_);
v___x_1213_ = lean_string_append(v___x_1212_, v_a_1205_);
lean_dec(v_a_1205_);
v___x_1214_ = l_Lean_Server_RequestError_internalError(v___x_1213_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1214_);
v___x_1216_ = v___x_1207_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1214_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
else
{
lean_object* v_a_1219_; 
v_a_1219_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1219_);
lean_dec_ref_known(v___x_1204_, 1);
v_response_1169_ = v_a_1219_;
goto v___jp_1168_;
}
}
else
{
lean_object* v_val_1220_; 
lean_inc_ref(v_response_x3f_1202_);
lean_dec(v_a_1201_);
v_val_1220_ = lean_ctor_get(v_response_x3f_1202_, 0);
lean_inc(v_val_1220_);
lean_dec_ref_known(v_response_x3f_1202_, 1);
v_response_1169_ = v_val_1220_;
goto v___jp_1168_;
}
}
v___jp_1168_:
{
lean_object* v___x_1170_; 
v___x_1170_ = lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson(v_response_1169_);
if (lean_obj_tag(v___x_1170_) == 0)
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1184_; 
v_a_1171_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1173_ = v___x_1170_;
v_isShared_1174_ = v_isSharedCheck_1184_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1170_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1184_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1182_; 
v___x_1175_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__0));
v___x_1176_ = lean_string_append(v___x_1175_, v_method_1166_);
v___x_1177_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1));
v___x_1178_ = lean_string_append(v___x_1176_, v___x_1177_);
v___x_1179_ = lean_string_append(v___x_1178_, v_a_1171_);
lean_dec(v_a_1171_);
v___x_1180_ = l_Lean_Server_RequestError_internalError(v___x_1179_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v___x_1180_);
v___x_1182_ = v___x_1173_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
v_a_1185_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1170_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1170_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed(lean_object* v_method_1221_, lean_object* v_x_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0(v_method_1221_, v_x_1222_);
lean_dec_ref(v_method_1221_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Array_toJson___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_a_1224_){
_start:
{
size_t v_sz_1225_; size_t v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v_sz_1225_ = lean_array_size(v_a_1224_);
v___x_1226_ = ((size_t)0ULL);
v___x_1227_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonDocumentSymbolAux_toJson___at___00Lean_Lsp_instToJsonDocumentSymbol_go_spec__0_spec__0_spec__1_spec__2(v_sz_1225_, v___x_1226_, v_a_1224_);
v___x_1228_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1(uint8_t v_val_1229_, lean_object* v___y_1230_){
_start:
{
if (lean_obj_tag(v___y_1230_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1238_; 
v_a_1231_ = lean_ctor_get(v___y_1230_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___y_1230_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1233_ = v___y_1230_;
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___y_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
if (v_isShared_1234_ == 0)
{
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_a_1231_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1250_; 
v_a_1239_ = lean_ctor_get(v___y_1230_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___y_1230_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1241_ = v___y_1230_;
v_isShared_1242_ = v_isSharedCheck_1250_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___y_1230_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1250_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1243_ = lp_plugin_Lean_Array_toJson___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__1(v_a_1239_);
lean_inc(v___x_1243_);
v___x_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
v___x_1245_ = l_Lean_Json_compress(v___x_1243_);
v___x_1246_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
lean_ctor_set_uint8(v___x_1246_, sizeof(void*)*2, v_val_1229_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1246_);
v___x_1248_ = v___x_1241_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object* v_val_1251_, lean_object* v___y_1252_){
_start:
{
uint8_t v_val_500__boxed_1253_; lean_object* v_res_1254_; 
v_val_500__boxed_1253_ = lean_unbox(v_val_1251_);
v_res_1254_ = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1(v_val_500__boxed_1253_, v___y_1252_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_params_1257_){
_start:
{
lean_object* v___x_1258_; 
lean_inc(v_params_1257_);
v___x_1258_ = l_Lean_Lsp_instFromJsonDocumentSymbolParams_fromJson(v_params_1257_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1274_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1261_ = v___x_1258_;
v_isShared_1262_ = v_isSharedCheck_1274_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1258_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1274_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
uint8_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1263_ = 3;
v___x_1264_ = ((lean_object*)(lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0));
v___x_1265_ = l_Lean_Json_compress(v_params_1257_);
v___x_1266_ = lean_string_append(v___x_1264_, v___x_1265_);
lean_dec_ref(v___x_1265_);
v___x_1267_ = ((lean_object*)(lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1));
v___x_1268_ = lean_string_append(v___x_1266_, v___x_1267_);
v___x_1269_ = lean_string_append(v___x_1268_, v_a_1259_);
lean_dec(v_a_1259_);
v___x_1270_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
lean_ctor_set_uint8(v___x_1270_, sizeof(void*)*1, v___x_1263_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1270_);
v___x_1272_ = v___x_1261_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec(v_params_1257_);
v_a_1275_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1258_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1258_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_params_1283_){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_params_1283_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
lean_ctor_set_tag(v___x_1288_, 1);
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
v_a_1294_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1285_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1285_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
lean_ctor_set_tag(v___x_1296_, 0);
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_params_1302_, lean_object* v_a_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(v_params_1302_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2(lean_object* v_handle_1305_, lean_object* v___f_1306_, lean_object* v_handler_1307_, lean_object* v___f_1308_, lean_object* v_j_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___x_1312_; 
lean_inc_ref(v___y_1310_);
lean_inc(v_j_1309_);
v___x_1312_ = lean_apply_3(v_handle_1305_, v_j_1309_, v___y_1310_, lean_box(0));
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1314_; 
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1313_);
lean_dec_ref_known(v___x_1312_, 1);
v___x_1314_ = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(v_j_1309_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_a_1315_);
lean_dec_ref_known(v___x_1314_, 1);
v___x_1316_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_1306_, v_a_1313_);
lean_inc_ref(v___y_1310_);
v___x_1317_ = lean_apply_4(v_handler_1307_, v_a_1315_, v___x_1316_, v___y_1310_, lean_box(0));
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1326_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1326_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1326_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1324_; 
v___x_1322_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_1308_, v_a_1318_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1322_);
v___x_1324_ = v___x_1320_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec_ref(v___f_1308_);
v_a_1327_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1317_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1317_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec(v_a_1313_);
lean_dec_ref(v___f_1308_);
lean_dec_ref(v_handler_1307_);
lean_dec_ref(v___f_1306_);
v_a_1335_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1314_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1314_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
else
{
lean_dec(v_j_1309_);
lean_dec_ref(v___f_1308_);
lean_dec_ref(v_handler_1307_);
lean_dec_ref(v___f_1306_);
return v___x_1312_;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object* v_handle_1343_, lean_object* v___f_1344_, lean_object* v_handler_1345_, lean_object* v___f_1346_, lean_object* v_j_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2(v_handle_1343_, v___f_1344_, v_handler_1345_, v___f_1346_, v_j_1347_, v___y_1348_);
lean_dec_ref(v___y_1348_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0(lean_object* v_method_1354_, lean_object* v_handler_1355_){
_start:
{
uint8_t v___x_1357_; 
v___x_1357_ = l_Lean_initializing();
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_dec_ref(v_handler_1355_);
v___x_1358_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0));
v___x_1359_ = lean_string_append(v___x_1358_, v_method_1354_);
lean_dec_ref(v_method_1354_);
v___x_1360_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1));
v___x_1361_ = lean_string_append(v___x_1359_, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
v___x_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
else
{
lean_object* v___x_1364_; lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1398_; 
v___x_1364_ = l_Lean_Server_lookupLspRequestHandler(v_method_1354_);
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1367_ = v___x_1364_;
v_isShared_1368_ = v_isSharedCheck_1398_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1364_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1398_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
if (lean_obj_tag(v_a_1365_) == 1)
{
lean_object* v_val_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v_fileSource_1372_; lean_object* v_handle_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1389_; 
v_val_1369_ = lean_ctor_get(v_a_1365_, 0);
lean_inc(v_val_1369_);
lean_dec_ref_known(v_a_1365_, 1);
v___x_1370_ = l_Lean_Server_requestHandlers;
v___x_1371_ = lean_st_ref_take(v___x_1370_);
v_fileSource_1372_ = lean_ctor_get(v_val_1369_, 0);
v_handle_1373_ = lean_ctor_get(v_val_1369_, 1);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_val_1369_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1375_ = v_val_1369_;
v_isShared_1376_ = v_isSharedCheck_1389_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_handle_1373_);
lean_inc(v_fileSource_1372_);
lean_dec(v_val_1369_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1389_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___f_1377_; lean_object* v___x_1378_; lean_object* v___f_1379_; lean_object* v___f_1380_; lean_object* v___x_1382_; 
lean_inc_ref(v_method_1354_);
v___f_1377_ = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1377_, 0, v_method_1354_);
v___x_1378_ = lean_box(v___x_1357_);
v___f_1379_ = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1379_, 0, v___x_1378_);
v___f_1380_ = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed), 7, 4);
lean_closure_set(v___f_1380_, 0, v_handle_1373_);
lean_closure_set(v___f_1380_, 1, v___f_1377_);
lean_closure_set(v___f_1380_, 2, v_handler_1355_);
lean_closure_set(v___f_1380_, 3, v___f_1379_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___f_1380_);
v___x_1382_ = v___x_1375_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_fileSource_1372_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v___f_1380_);
v___x_1382_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1383_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_RequestHandling_1370296685____hygCtx___hyg_2__spec__0_spec__3___redArg(v___x_1371_, v_method_1354_, v___x_1382_);
v___x_1384_ = lean_st_ref_set(v___x_1370_, v___x_1383_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 0, v___x_1384_);
v___x_1386_ = v___x_1367_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1396_; 
lean_dec(v_a_1365_);
lean_dec_ref(v_handler_1355_);
v___x_1390_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0));
v___x_1391_ = lean_string_append(v___x_1390_, v_method_1354_);
lean_dec_ref(v_method_1354_);
v___x_1392_ = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2));
v___x_1393_ = lean_string_append(v___x_1391_, v___x_1392_);
v___x_1394_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set_tag(v___x_1367_, 1);
lean_ctor_set(v___x_1367_, 0, v___x_1394_);
v___x_1396_ = v___x_1367_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_1399_, lean_object* v_handler_1400_, lean_object* v_a_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0(v_method_1399_, v_handler_1400_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___f_1406_ = ((lean_object*)(lp_plugin___private_ServerPlugin_0__initFn___closed__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_));
v___x_1407_ = ((lean_object*)(lp_plugin___private_ServerPlugin_0__initFn___closed__1_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_));
v___x_1408_ = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0(v___x_1407_, v___f_1406_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2____boxed(lean_object* v_a_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_();
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_params_1411_, lean_object* v_a_1412_){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(v_params_1411_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_params_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0(v_params_1415_, v_a_1416_);
lean_dec_ref(v_a_1416_);
return v_res_1418_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_Server_Requests(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinCommand(uint8_t builtin);
lean_object* initialize_Lean_Elab_Declaration(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_plugin_ServerPlugin(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
