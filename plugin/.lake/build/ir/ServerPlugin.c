// Lean compiler output
// Module: ServerPlugin
// Imports: public import Init public import Lean.Server.Requests public import Lean.Elab.BuiltinCommand public import Lean.Elab.Declaration
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
extern lean_object* l_Lean_Syntax_instInhabitedRange_default;
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_panic___at___00handleDocumentSymbol_toDocumentSymbols_spec__2(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<unknown>"};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2_value;
static const lean_string_object lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instance "};
static const lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3 = (const lean_object*)&lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3_value;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_reprint(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t lp_plugin_handleDocumentSymbol_mkLevel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_handleDocumentSymbol_mkLevel___closed__0;
static const lean_string_object lp_plugin_handleDocumentSymbol_mkLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_plugin_handleDocumentSymbol_mkLevel___closed__1 = (const lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___closed__1_value;
lean_object* l_Lean_Name_mkStr1(lean_object*);
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* lean_string_utf8_byte_size(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_Range_toLspRange(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<section>"};
static const lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0_value;
uint8_t lean_name_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_List_mapTR_loop___at___00handleDocumentSymbol_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_plugin_handleDocumentSymbol___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_plugin_handleDocumentSymbol___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_plugin_handleDocumentSymbol___redArg___closed__0 = (const lean_object*)&lp_plugin_handleDocumentSymbol___redArg___closed__0_value;
lean_object* l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(lean_object*);
lean_object* l_IO_AsyncList_waitAll___redArg(lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_plugin_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_plugin_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&lp_plugin_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0_value;
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
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7;
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8;
static lean_once_cell_t lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9;
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientInfo_fromJson_spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSymbolInformation_fromJson_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0(lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
static const lean_string_object lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1_value;
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0 = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0_value;
LEAN_EXPORT const lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin = (const lean_object*)&lp_plugin_instFromJsonDocumentSymbol__serverPlugin___closed__0_value;
LEAN_EXPORT lean_object* lp_plugin_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0_spec__0(lean_object*);
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
lean_object* l_Lean_Server_RequestError_internalError(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonDocumentSymbolAux_toJson___at___00Lean_Lsp_instToJsonDocumentSymbol_go_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Array_toJson___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__1(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Cannot parse request params: "};
static const lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1_value;
lean_object* l_Lean_Lsp_instFromJsonDocumentSymbolParams_fromJson(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Failed to chain LSP request handler for '"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "': only possible during initialization"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1_value;
static const lean_string_object lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "': no initial handler registered"};
static const lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2 = (const lean_object*)&lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2_value;
lean_object* l_Lean_initializing();
lean_object* l_Lean_Server_lookupLspRequestHandler(lean_object*);
extern lean_object* l_Lean_Server_requestHandlers;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_RequestHandling_1370296685____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_plugin_panic___at___00handleDocumentSymbol_toDocumentSymbols_spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Syntax_instInhabitedRange_default;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Syntax_getId(x_1);
x_6 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_5, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget_borrowed(x_1, x_7);
lean_inc(x_8);
x_9 = l_Lean_Name_append(x_4, x_8);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(x_1, x_5, x_6, x_4);
lean_dec_ref(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_plugin_List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec_ref(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_usize_of_nat(x_4);
x_8 = 0;
x_9 = lp_plugin___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0_spec__0(x_3, x_7, x_8, x_1);
lean_dec_ref(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_15; lean_object* x_16; lean_object* x_54; uint8_t x_55; 
x_15 = lean_unsigned_to_nat(3u);
x_54 = l_Lean_Syntax_getArg(x_2, x_15);
x_55 = l_Lean_Syntax_isNone(x_54);
if (x_55 == 0)
{
uint8_t x_56; 
lean_inc(x_54);
x_56 = l_Lean_Syntax_matchesNull(x_54, x_6);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_54);
x_57 = l_Lean_Syntax_getArg(x_2, x_6);
x_58 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1));
x_59 = l_Lean_Name_mkStr4(x_3, x_4, x_5, x_58);
lean_inc(x_57);
x_60 = l_Lean_Syntax_isOfKind(x_57, x_59);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_57);
x_61 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_61);
x_62 = l_Lean_Syntax_isIdOrAtom_x3f(x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_61);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_62, 0);
lean_inc(x_65);
lean_dec_ref(x_62);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_61);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_72; uint8_t x_73; 
x_67 = l_Lean_Syntax_getArg(x_57, x_7);
x_72 = l_Lean_Syntax_getArg(x_57, x_6);
lean_dec(x_57);
x_73 = l_Lean_Syntax_isNone(x_72);
if (x_73 == 0)
{
uint8_t x_74; 
x_74 = l_Lean_Syntax_matchesNull(x_72, x_15);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_67);
x_75 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_75);
x_76 = l_Lean_Syntax_isIdOrAtom_x3f(x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec_ref(x_76);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_75);
return x_80;
}
}
else
{
goto block_71;
}
}
else
{
lean_dec(x_72);
goto block_71;
}
block_71:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = l_Lean_Syntax_getId(x_67);
x_69 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_68, x_1);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_67);
return x_70;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = l_Lean_Syntax_getArg(x_54, x_7);
lean_dec(x_54);
x_82 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1));
lean_inc_ref(x_5);
lean_inc_ref(x_4);
lean_inc_ref(x_3);
x_83 = l_Lean_Name_mkStr4(x_3, x_4, x_5, x_82);
lean_inc(x_81);
x_84 = l_Lean_Syntax_isOfKind(x_81, x_83);
if (x_84 == 0)
{
lean_object* x_85; uint8_t x_86; 
lean_dec(x_81);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_85 = l_Lean_Syntax_getArg(x_2, x_6);
lean_inc(x_85);
x_86 = l_Lean_Syntax_isOfKind(x_85, x_83);
lean_dec(x_83);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_85);
x_87 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_87);
x_88 = l_Lean_Syntax_isIdOrAtom_x3f(x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; 
x_89 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_88, 0);
lean_inc(x_91);
lean_dec_ref(x_88);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_87);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_98; uint8_t x_99; 
x_93 = l_Lean_Syntax_getArg(x_85, x_7);
x_98 = l_Lean_Syntax_getArg(x_85, x_6);
lean_dec(x_85);
x_99 = l_Lean_Syntax_isNone(x_98);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = l_Lean_Syntax_matchesNull(x_98, x_15);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_93);
x_101 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_101);
x_102 = l_Lean_Syntax_isIdOrAtom_x3f(x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_101);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_ctor_get(x_102, 0);
lean_inc(x_105);
lean_dec_ref(x_102);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_101);
return x_106;
}
}
else
{
goto block_97;
}
}
else
{
lean_dec(x_98);
goto block_97;
}
block_97:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = l_Lean_Syntax_getId(x_93);
x_95 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_94, x_1);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_93);
return x_96;
}
}
}
else
{
lean_object* x_107; lean_object* x_110; uint8_t x_111; 
x_107 = l_Lean_Syntax_getArg(x_81, x_7);
x_110 = l_Lean_Syntax_getArg(x_81, x_6);
lean_dec(x_81);
x_111 = l_Lean_Syntax_isNone(x_110);
if (x_111 == 0)
{
uint8_t x_112; 
x_112 = l_Lean_Syntax_matchesNull(x_110, x_15);
if (x_112 == 0)
{
lean_object* x_113; uint8_t x_114; 
lean_dec(x_107);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_113 = l_Lean_Syntax_getArg(x_2, x_6);
lean_inc(x_113);
x_114 = l_Lean_Syntax_isOfKind(x_113, x_83);
lean_dec(x_83);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
lean_dec(x_113);
x_115 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_115);
x_116 = l_Lean_Syntax_isIdOrAtom_x3f(x_115);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_115);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_116, 0);
lean_inc(x_119);
lean_dec_ref(x_116);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_115);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_126; uint8_t x_127; 
x_121 = l_Lean_Syntax_getArg(x_113, x_7);
x_126 = l_Lean_Syntax_getArg(x_113, x_6);
lean_dec(x_113);
x_127 = l_Lean_Syntax_isNone(x_126);
if (x_127 == 0)
{
uint8_t x_128; 
x_128 = l_Lean_Syntax_matchesNull(x_126, x_15);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_121);
x_129 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_129);
x_130 = l_Lean_Syntax_isIdOrAtom_x3f(x_129);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; 
x_131 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_129);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_130, 0);
lean_inc(x_133);
lean_dec_ref(x_130);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_129);
return x_134;
}
}
else
{
goto block_125;
}
}
else
{
lean_dec(x_126);
goto block_125;
}
block_125:
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = l_Lean_Syntax_getId(x_121);
x_123 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_122, x_1);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_121);
return x_124;
}
}
}
else
{
lean_dec(x_83);
goto block_109;
}
}
else
{
lean_dec(x_110);
lean_dec(x_83);
goto block_109;
}
block_109:
{
lean_object* x_108; 
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_107);
x_16 = x_108;
goto block_53;
}
}
}
}
else
{
lean_object* x_135; 
lean_dec(x_54);
x_135 = lean_box(0);
x_16 = x_135;
goto block_53;
}
block_14:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Syntax_getId(x_10);
x_12 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_11, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
block_53:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Lean_Syntax_getArg(x_2, x_17);
x_19 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__0));
lean_inc_ref(x_5);
lean_inc_ref(x_4);
lean_inc_ref(x_3);
x_20 = l_Lean_Name_mkStr4(x_3, x_4, x_5, x_19);
lean_inc(x_18);
x_21 = l_Lean_Syntax_isOfKind(x_18, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_16);
x_22 = l_Lean_Syntax_getArg(x_2, x_6);
x_23 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__1));
x_24 = l_Lean_Name_mkStr4(x_3, x_4, x_5, x_23);
lean_inc(x_22);
x_25 = l_Lean_Syntax_isOfKind(x_22, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_22);
x_26 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_26);
x_27 = l_Lean_Syntax_isIdOrAtom_x3f(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
lean_dec_ref(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = l_Lean_Syntax_getArg(x_22, x_7);
x_33 = l_Lean_Syntax_getArg(x_22, x_6);
lean_dec(x_22);
x_34 = l_Lean_Syntax_isNone(x_33);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = l_Lean_Syntax_matchesNull(x_33, x_15);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_32);
x_36 = l_Lean_Syntax_getArg(x_2, x_7);
lean_inc(x_36);
x_37 = l_Lean_Syntax_isIdOrAtom_x3f(x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec_ref(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_36);
return x_41;
}
}
else
{
x_10 = x_32;
goto block_14;
}
}
else
{
lean_dec(x_33);
x_10 = x_32;
goto block_14;
}
}
}
else
{
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_42; 
lean_inc(x_18);
x_42 = l_Lean_Syntax_reprint(x_18);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3));
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_18);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_42, 0);
lean_inc(x_45);
lean_dec_ref(x_42);
x_46 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__3));
x_47 = lean_string_append(x_46, x_45);
lean_dec(x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_18);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_18);
x_49 = lean_ctor_get(x_16, 0);
lean_inc(x_49);
lean_dec_ref(x_16);
x_50 = l_Lean_Syntax_getId(x_49);
x_51 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_50, x_1);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
x_11 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_lp_plugin_handleDocumentSymbol_mkLevel___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__22));
x_2 = lean_unsigned_to_nat(14u);
x_3 = lean_unsigned_to_nat(22u);
x_4 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__21));
x_5 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__20));
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_toDocumentSymbols(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_5);
lean_dec_ref(x_1);
x_6 = lean_string_utf8_byte_size(x_5);
lean_dec_ref(x_5);
x_7 = lean_apply_3(x_4, x_6, x_3, x_2);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_9, 1);
lean_inc_ref(x_15);
lean_dec_ref(x_9);
lean_ctor_set(x_3, 0, x_15);
goto _start;
}
case 1:
{
lean_object* x_17; lean_object* x_18; 
lean_free_object(x_3);
x_17 = lean_ctor_get(x_9, 0);
lean_inc_ref(x_17);
x_18 = lean_ctor_get(x_9, 1);
lean_inc_ref(x_18);
lean_dec_ref(x_9);
if (lean_obj_tag(x_17) == 3)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_51; lean_object* x_52; lean_object* x_56; lean_object* x_57; 
x_23 = lean_ctor_get(x_17, 0);
lean_inc_ref(x_23);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_24 = x_17;
} else {
 lean_dec_ref(x_17);
 x_24 = lean_box(0);
}
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec_ref(x_23);
x_27 = 0;
x_56 = l_Lean_Syntax_getRange_x3f(x_26, x_27);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_444; 
x_444 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__30));
x_57 = x_444;
goto block_443;
}
else
{
lean_object* x_445; 
x_445 = lean_ctor_get(x_56, 0);
lean_inc(x_445);
x_57 = x_445;
goto block_443;
}
block_50:
{
lean_object* x_31; 
x_31 = l_Lean_Syntax_getRange_x3f(x_30, x_27);
lean_dec(x_30);
if (lean_obj_tag(x_31) == 1)
{
uint8_t x_32; 
lean_dec_ref(x_18);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_box(0);
x_35 = 5;
lean_inc_ref(x_1);
x_36 = l_Lean_Syntax_Range_toLspRange(x_1, x_28);
lean_inc_ref(x_1);
x_37 = l_Lean_Syntax_Range_toLspRange(x_1, x_33);
x_38 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_34);
lean_ctor_set(x_38, 2, x_36);
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 4, x_34);
lean_ctor_set_uint8(x_38, sizeof(void*)*5, x_35);
lean_ctor_set_tag(x_31, 0);
lean_ctor_set(x_31, 0, x_38);
x_39 = lean_array_push(x_2, x_31);
x_2 = x_39;
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_31, 0);
lean_inc(x_41);
lean_dec(x_31);
x_42 = lean_box(0);
x_43 = 5;
lean_inc_ref(x_1);
x_44 = l_Lean_Syntax_Range_toLspRange(x_1, x_28);
lean_inc_ref(x_1);
x_45 = l_Lean_Syntax_Range_toLspRange(x_1, x_41);
x_46 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_46, 0, x_29);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_44);
lean_ctor_set(x_46, 3, x_45);
lean_ctor_set(x_46, 4, x_42);
lean_ctor_set_uint8(x_46, sizeof(void*)*5, x_43);
x_47 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_array_push(x_2, x_47);
x_2 = x_48;
x_3 = x_10;
goto _start;
}
}
else
{
lean_dec(x_31);
lean_dec_ref(x_29);
lean_dec_ref(x_28);
goto block_22;
}
}
block_55:
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec_ref(x_52);
x_28 = x_51;
x_29 = x_53;
x_30 = x_54;
goto block_50;
}
block_443:
{
if (lean_obj_tag(x_25) == 1)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_25, 0);
lean_inc(x_58);
if (lean_obj_tag(x_58) == 1)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
if (lean_obj_tag(x_59) == 1)
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
if (lean_obj_tag(x_60) == 1)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 0);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_62 = lean_ctor_get(x_25, 1);
lean_inc_ref(x_62);
lean_dec_ref(x_25);
x_63 = lean_ctor_get(x_58, 1);
lean_inc_ref(x_63);
lean_dec_ref(x_58);
x_64 = lean_ctor_get(x_59, 1);
lean_inc_ref(x_64);
lean_dec_ref(x_59);
x_65 = lean_ctor_get(x_60, 1);
lean_inc_ref(x_65);
lean_dec_ref(x_60);
x_66 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0));
x_67 = lean_string_dec_eq(x_65, x_66);
lean_dec_ref(x_65);
if (x_67 == 0)
{
lean_dec_ref(x_64);
lean_dec_ref(x_63);
lean_dec_ref(x_62);
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
else
{
lean_object* x_68; uint8_t x_69; 
x_68 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__1));
x_69 = lean_string_dec_eq(x_64, x_68);
lean_dec_ref(x_64);
if (x_69 == 0)
{
lean_dec_ref(x_63);
lean_dec_ref(x_62);
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
else
{
lean_object* x_70; uint8_t x_71; 
x_70 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2));
x_71 = lean_string_dec_eq(x_63, x_70);
lean_dec_ref(x_63);
if (x_71 == 0)
{
lean_dec_ref(x_62);
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
else
{
lean_object* x_72; uint8_t x_73; 
x_72 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__3));
x_73 = lean_string_dec_eq(x_62, x_72);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
lean_dec(x_24);
x_74 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__4));
x_75 = lean_string_dec_eq(x_62, x_74);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; 
lean_dec_ref(x_57);
x_76 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__5));
x_77 = lean_string_dec_eq(x_62, x_76);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; 
x_78 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__6));
x_79 = lean_string_dec_eq(x_62, x_78);
lean_dec_ref(x_62);
if (x_79 == 0)
{
lean_dec(x_56);
lean_dec(x_26);
goto block_22;
}
else
{
if (lean_obj_tag(x_56) == 1)
{
uint8_t x_80; 
x_80 = !lean_is_exclusive(x_56);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_56, 0);
x_82 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7));
x_83 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9));
lean_inc(x_26);
x_84 = l_Lean_Syntax_isOfKind(x_26, x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_85 = lean_unsigned_to_nat(1u);
x_86 = l_Lean_Syntax_getArg(x_26, x_85);
lean_dec(x_26);
x_87 = l_Lean_Syntax_getArg(x_86, x_85);
x_88 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_87);
x_89 = l_Lean_Syntax_isOfKind(x_87, x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_87);
lean_free_object(x_56);
x_90 = lean_unsigned_to_nat(0u);
x_91 = l_Lean_Syntax_getArg(x_86, x_90);
lean_dec(x_86);
lean_inc(x_91);
x_92 = l_Lean_Syntax_isIdOrAtom_x3f(x_91);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; 
x_93 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_93;
x_30 = x_91;
goto block_50;
}
else
{
lean_object* x_94; 
x_94 = lean_ctor_get(x_92, 0);
lean_inc(x_94);
lean_dec_ref(x_92);
x_28 = x_81;
x_29 = x_94;
x_30 = x_91;
goto block_50;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_95 = lean_unsigned_to_nat(0u);
x_96 = l_Lean_Syntax_getArg(x_87, x_95);
x_97 = l_Lean_Syntax_getArg(x_87, x_85);
lean_dec(x_87);
x_98 = l_Lean_Syntax_isNone(x_97);
if (x_98 == 0)
{
lean_object* x_99; uint8_t x_100; 
x_99 = lean_unsigned_to_nat(3u);
lean_inc(x_97);
x_100 = l_Lean_Syntax_matchesNull(x_97, x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_97);
lean_dec(x_96);
lean_free_object(x_56);
x_101 = l_Lean_Syntax_getArg(x_86, x_95);
lean_dec(x_86);
lean_inc(x_101);
x_102 = l_Lean_Syntax_isIdOrAtom_x3f(x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
x_103 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_103;
x_30 = x_101;
goto block_50;
}
else
{
lean_object* x_104; 
x_104 = lean_ctor_get(x_102, 0);
lean_inc(x_104);
lean_dec_ref(x_102);
x_28 = x_81;
x_29 = x_104;
x_30 = x_101;
goto block_50;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_86);
x_105 = l_Lean_Syntax_getArg(x_97, x_85);
lean_dec(x_97);
x_106 = l_Lean_Syntax_getArgs(x_105);
lean_dec(x_105);
x_107 = lean_box(0);
lean_ctor_set(x_56, 0, x_106);
x_108 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_96, x_79, x_107, x_56);
lean_dec_ref(x_56);
x_51 = x_81;
x_52 = x_108;
goto block_55;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_97);
lean_dec(x_86);
lean_free_object(x_56);
x_109 = lean_box(0);
x_110 = lean_box(0);
x_111 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_96, x_79, x_109, x_110);
x_51 = x_81;
x_52 = x_111;
goto block_55;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_unsigned_to_nat(0u);
x_113 = l_Lean_Syntax_getArg(x_26, x_112);
x_114 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12));
x_115 = l_Lean_Syntax_isOfKind(x_113, x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_116 = lean_unsigned_to_nat(1u);
x_117 = l_Lean_Syntax_getArg(x_26, x_116);
lean_dec(x_26);
x_118 = l_Lean_Syntax_getArg(x_117, x_116);
x_119 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_118);
x_120 = l_Lean_Syntax_isOfKind(x_118, x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_118);
lean_free_object(x_56);
x_121 = l_Lean_Syntax_getArg(x_117, x_112);
lean_dec(x_117);
lean_inc(x_121);
x_122 = l_Lean_Syntax_isIdOrAtom_x3f(x_121);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; 
x_123 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_123;
x_30 = x_121;
goto block_50;
}
else
{
lean_object* x_124; 
x_124 = lean_ctor_get(x_122, 0);
lean_inc(x_124);
lean_dec_ref(x_122);
x_28 = x_81;
x_29 = x_124;
x_30 = x_121;
goto block_50;
}
}
else
{
lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_125 = l_Lean_Syntax_getArg(x_118, x_112);
x_126 = l_Lean_Syntax_getArg(x_118, x_116);
lean_dec(x_118);
x_127 = l_Lean_Syntax_isNone(x_126);
if (x_127 == 0)
{
lean_object* x_128; uint8_t x_129; 
x_128 = lean_unsigned_to_nat(3u);
lean_inc(x_126);
x_129 = l_Lean_Syntax_matchesNull(x_126, x_128);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
lean_dec(x_126);
lean_dec(x_125);
lean_free_object(x_56);
x_130 = l_Lean_Syntax_getArg(x_117, x_112);
lean_dec(x_117);
lean_inc(x_130);
x_131 = l_Lean_Syntax_isIdOrAtom_x3f(x_130);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; 
x_132 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_132;
x_30 = x_130;
goto block_50;
}
else
{
lean_object* x_133; 
x_133 = lean_ctor_get(x_131, 0);
lean_inc(x_133);
lean_dec_ref(x_131);
x_28 = x_81;
x_29 = x_133;
x_30 = x_130;
goto block_50;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_117);
x_134 = l_Lean_Syntax_getArg(x_126, x_116);
lean_dec(x_126);
x_135 = l_Lean_Syntax_getArgs(x_134);
lean_dec(x_134);
x_136 = lean_box(0);
lean_ctor_set(x_56, 0, x_135);
x_137 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_125, x_79, x_136, x_56);
lean_dec_ref(x_56);
x_51 = x_81;
x_52 = x_137;
goto block_55;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_126);
lean_dec(x_117);
lean_free_object(x_56);
x_138 = lean_box(0);
x_139 = lean_box(0);
x_140 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_125, x_79, x_138, x_139);
x_51 = x_81;
x_52 = x_140;
goto block_55;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_141 = lean_unsigned_to_nat(1u);
x_142 = l_Lean_Syntax_getArg(x_26, x_141);
lean_dec(x_26);
x_143 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14));
lean_inc(x_142);
x_144 = l_Lean_Syntax_isOfKind(x_142, x_143);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_145 = l_Lean_Syntax_getArg(x_142, x_141);
x_146 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_145);
x_147 = l_Lean_Syntax_isOfKind(x_145, x_146);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_145);
lean_free_object(x_56);
x_148 = l_Lean_Syntax_getArg(x_142, x_112);
lean_dec(x_142);
lean_inc(x_148);
x_149 = l_Lean_Syntax_isIdOrAtom_x3f(x_148);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; 
x_150 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_150;
x_30 = x_148;
goto block_50;
}
else
{
lean_object* x_151; 
x_151 = lean_ctor_get(x_149, 0);
lean_inc(x_151);
lean_dec_ref(x_149);
x_28 = x_81;
x_29 = x_151;
x_30 = x_148;
goto block_50;
}
}
else
{
lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_152 = l_Lean_Syntax_getArg(x_145, x_112);
x_153 = l_Lean_Syntax_getArg(x_145, x_141);
lean_dec(x_145);
x_154 = l_Lean_Syntax_isNone(x_153);
if (x_154 == 0)
{
lean_object* x_155; uint8_t x_156; 
x_155 = lean_unsigned_to_nat(3u);
lean_inc(x_153);
x_156 = l_Lean_Syntax_matchesNull(x_153, x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; 
lean_dec(x_153);
lean_dec(x_152);
lean_free_object(x_56);
x_157 = l_Lean_Syntax_getArg(x_142, x_112);
lean_dec(x_142);
lean_inc(x_157);
x_158 = l_Lean_Syntax_isIdOrAtom_x3f(x_157);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; 
x_159 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_159;
x_30 = x_157;
goto block_50;
}
else
{
lean_object* x_160; 
x_160 = lean_ctor_get(x_158, 0);
lean_inc(x_160);
lean_dec_ref(x_158);
x_28 = x_81;
x_29 = x_160;
x_30 = x_157;
goto block_50;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_142);
x_161 = l_Lean_Syntax_getArg(x_153, x_141);
lean_dec(x_153);
x_162 = l_Lean_Syntax_getArgs(x_161);
lean_dec(x_161);
x_163 = lean_box(0);
lean_ctor_set(x_56, 0, x_162);
x_164 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_152, x_79, x_163, x_56);
lean_dec_ref(x_56);
x_51 = x_81;
x_52 = x_164;
goto block_55;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_153);
lean_dec(x_142);
lean_free_object(x_56);
x_165 = lean_box(0);
x_166 = lean_box(0);
x_167 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_152, x_79, x_165, x_166);
x_51 = x_81;
x_52 = x_167;
goto block_55;
}
}
}
else
{
lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_168 = l_Lean_Syntax_getArg(x_142, x_112);
x_169 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17));
lean_inc(x_168);
x_170 = l_Lean_Syntax_isOfKind(x_168, x_169);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_171 = l_Lean_Syntax_getArg(x_142, x_141);
lean_dec(x_142);
x_172 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_171);
x_173 = l_Lean_Syntax_isOfKind(x_171, x_172);
if (x_173 == 0)
{
lean_object* x_174; 
lean_dec(x_171);
lean_free_object(x_56);
lean_inc(x_168);
x_174 = l_Lean_Syntax_isIdOrAtom_x3f(x_168);
if (lean_obj_tag(x_174) == 0)
{
lean_object* x_175; 
x_175 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_175;
x_30 = x_168;
goto block_50;
}
else
{
lean_object* x_176; 
x_176 = lean_ctor_get(x_174, 0);
lean_inc(x_176);
lean_dec_ref(x_174);
x_28 = x_81;
x_29 = x_176;
x_30 = x_168;
goto block_50;
}
}
else
{
lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_177 = l_Lean_Syntax_getArg(x_171, x_112);
x_178 = l_Lean_Syntax_getArg(x_171, x_141);
lean_dec(x_171);
x_179 = l_Lean_Syntax_isNone(x_178);
if (x_179 == 0)
{
lean_object* x_180; uint8_t x_181; 
x_180 = lean_unsigned_to_nat(3u);
lean_inc(x_178);
x_181 = l_Lean_Syntax_matchesNull(x_178, x_180);
if (x_181 == 0)
{
lean_object* x_182; 
lean_dec(x_178);
lean_dec(x_177);
lean_free_object(x_56);
lean_inc(x_168);
x_182 = l_Lean_Syntax_isIdOrAtom_x3f(x_168);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; 
x_183 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_183;
x_30 = x_168;
goto block_50;
}
else
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_182, 0);
lean_inc(x_184);
lean_dec_ref(x_182);
x_28 = x_81;
x_29 = x_184;
x_30 = x_168;
goto block_50;
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_168);
x_185 = l_Lean_Syntax_getArg(x_178, x_141);
lean_dec(x_178);
x_186 = l_Lean_Syntax_getArgs(x_185);
lean_dec(x_185);
x_187 = lean_box(0);
lean_ctor_set(x_56, 0, x_186);
x_188 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_177, x_79, x_187, x_56);
lean_dec_ref(x_56);
x_51 = x_81;
x_52 = x_188;
goto block_55;
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_178);
lean_dec(x_168);
lean_free_object(x_56);
x_189 = lean_box(0);
x_190 = lean_box(0);
x_191 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_177, x_79, x_189, x_190);
x_51 = x_81;
x_52 = x_191;
goto block_55;
}
}
}
else
{
lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_192 = lean_unsigned_to_nat(2u);
x_193 = l_Lean_Syntax_getArg(x_142, x_192);
x_194 = l_Lean_Syntax_isNone(x_193);
if (x_194 == 0)
{
uint8_t x_195; 
lean_inc(x_193);
x_195 = l_Lean_Syntax_matchesNull(x_193, x_141);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; uint8_t x_198; 
lean_dec(x_193);
x_196 = l_Lean_Syntax_getArg(x_142, x_141);
lean_dec(x_142);
x_197 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_196);
x_198 = l_Lean_Syntax_isOfKind(x_196, x_197);
if (x_198 == 0)
{
lean_object* x_199; 
lean_dec(x_196);
lean_free_object(x_56);
lean_inc(x_168);
x_199 = l_Lean_Syntax_isIdOrAtom_x3f(x_168);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; 
x_200 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_200;
x_30 = x_168;
goto block_50;
}
else
{
lean_object* x_201; 
x_201 = lean_ctor_get(x_199, 0);
lean_inc(x_201);
lean_dec_ref(x_199);
x_28 = x_81;
x_29 = x_201;
x_30 = x_168;
goto block_50;
}
}
else
{
lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_202 = l_Lean_Syntax_getArg(x_196, x_112);
x_203 = l_Lean_Syntax_getArg(x_196, x_141);
lean_dec(x_196);
x_204 = l_Lean_Syntax_isNone(x_203);
if (x_204 == 0)
{
lean_object* x_205; uint8_t x_206; 
x_205 = lean_unsigned_to_nat(3u);
lean_inc(x_203);
x_206 = l_Lean_Syntax_matchesNull(x_203, x_205);
if (x_206 == 0)
{
lean_object* x_207; 
lean_dec(x_203);
lean_dec(x_202);
lean_free_object(x_56);
lean_inc(x_168);
x_207 = l_Lean_Syntax_isIdOrAtom_x3f(x_168);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_208;
x_30 = x_168;
goto block_50;
}
else
{
lean_object* x_209; 
x_209 = lean_ctor_get(x_207, 0);
lean_inc(x_209);
lean_dec_ref(x_207);
x_28 = x_81;
x_29 = x_209;
x_30 = x_168;
goto block_50;
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_168);
x_210 = l_Lean_Syntax_getArg(x_203, x_141);
lean_dec(x_203);
x_211 = l_Lean_Syntax_getArgs(x_210);
lean_dec(x_210);
x_212 = lean_box(0);
lean_ctor_set(x_56, 0, x_211);
x_213 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_202, x_79, x_212, x_56);
lean_dec_ref(x_56);
x_51 = x_81;
x_52 = x_213;
goto block_55;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_203);
lean_dec(x_168);
lean_free_object(x_56);
x_214 = lean_box(0);
x_215 = lean_box(0);
x_216 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_202, x_79, x_214, x_215);
x_51 = x_81;
x_52 = x_216;
goto block_55;
}
}
}
else
{
lean_object* x_217; lean_object* x_218; uint8_t x_219; 
x_217 = l_Lean_Syntax_getArg(x_193, x_112);
lean_dec(x_193);
x_218 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19));
lean_inc(x_217);
x_219 = l_Lean_Syntax_isOfKind(x_217, x_218);
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; uint8_t x_222; 
lean_dec(x_217);
x_220 = l_Lean_Syntax_getArg(x_142, x_141);
lean_dec(x_142);
x_221 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_220);
x_222 = l_Lean_Syntax_isOfKind(x_220, x_221);
if (x_222 == 0)
{
lean_object* x_223; 
lean_dec(x_220);
lean_free_object(x_56);
lean_inc(x_168);
x_223 = l_Lean_Syntax_isIdOrAtom_x3f(x_168);
if (lean_obj_tag(x_223) == 0)
{
lean_object* x_224; 
x_224 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_224;
x_30 = x_168;
goto block_50;
}
else
{
lean_object* x_225; 
x_225 = lean_ctor_get(x_223, 0);
lean_inc(x_225);
lean_dec_ref(x_223);
x_28 = x_81;
x_29 = x_225;
x_30 = x_168;
goto block_50;
}
}
else
{
lean_object* x_226; lean_object* x_227; uint8_t x_228; 
x_226 = l_Lean_Syntax_getArg(x_220, x_112);
x_227 = l_Lean_Syntax_getArg(x_220, x_141);
lean_dec(x_220);
x_228 = l_Lean_Syntax_isNone(x_227);
if (x_228 == 0)
{
lean_object* x_229; uint8_t x_230; 
x_229 = lean_unsigned_to_nat(3u);
lean_inc(x_227);
x_230 = l_Lean_Syntax_matchesNull(x_227, x_229);
if (x_230 == 0)
{
lean_object* x_231; 
lean_dec(x_227);
lean_dec(x_226);
lean_free_object(x_56);
lean_inc(x_168);
x_231 = l_Lean_Syntax_isIdOrAtom_x3f(x_168);
if (lean_obj_tag(x_231) == 0)
{
lean_object* x_232; 
x_232 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_81;
x_29 = x_232;
x_30 = x_168;
goto block_50;
}
else
{
lean_object* x_233; 
x_233 = lean_ctor_get(x_231, 0);
lean_inc(x_233);
lean_dec_ref(x_231);
x_28 = x_81;
x_29 = x_233;
x_30 = x_168;
goto block_50;
}
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
lean_dec(x_168);
x_234 = l_Lean_Syntax_getArg(x_227, x_141);
lean_dec(x_227);
x_235 = l_Lean_Syntax_getArgs(x_234);
lean_dec(x_234);
x_236 = lean_box(0);
lean_ctor_set(x_56, 0, x_235);
x_237 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_226, x_79, x_236, x_56);
lean_dec_ref(x_56);
x_51 = x_81;
x_52 = x_237;
goto block_55;
}
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec(x_227);
lean_dec(x_168);
lean_free_object(x_56);
x_238 = lean_box(0);
x_239 = lean_box(0);
x_240 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_226, x_79, x_238, x_239);
x_51 = x_81;
x_52 = x_240;
goto block_55;
}
}
}
else
{
lean_object* x_241; lean_object* x_242; 
lean_dec(x_168);
x_241 = lean_box(0);
lean_ctor_set(x_56, 0, x_217);
x_242 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(x_79, x_142, x_66, x_82, x_70, x_141, x_112, x_241, x_56);
lean_dec_ref(x_56);
lean_dec(x_142);
x_51 = x_81;
x_52 = x_242;
goto block_55;
}
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_193);
lean_dec(x_168);
lean_free_object(x_56);
x_243 = lean_box(0);
x_244 = lean_box(0);
x_245 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(x_79, x_142, x_66, x_82, x_70, x_141, x_112, x_243, x_244);
lean_dec(x_142);
x_51 = x_81;
x_52 = x_245;
goto block_55;
}
}
}
}
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_246 = lean_ctor_get(x_56, 0);
lean_inc(x_246);
lean_dec(x_56);
x_247 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7));
x_248 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9));
lean_inc(x_26);
x_249 = l_Lean_Syntax_isOfKind(x_26, x_248);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; uint8_t x_254; 
x_250 = lean_unsigned_to_nat(1u);
x_251 = l_Lean_Syntax_getArg(x_26, x_250);
lean_dec(x_26);
x_252 = l_Lean_Syntax_getArg(x_251, x_250);
x_253 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_252);
x_254 = l_Lean_Syntax_isOfKind(x_252, x_253);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_252);
x_255 = lean_unsigned_to_nat(0u);
x_256 = l_Lean_Syntax_getArg(x_251, x_255);
lean_dec(x_251);
lean_inc(x_256);
x_257 = l_Lean_Syntax_isIdOrAtom_x3f(x_256);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; 
x_258 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_258;
x_30 = x_256;
goto block_50;
}
else
{
lean_object* x_259; 
x_259 = lean_ctor_get(x_257, 0);
lean_inc(x_259);
lean_dec_ref(x_257);
x_28 = x_246;
x_29 = x_259;
x_30 = x_256;
goto block_50;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; uint8_t x_263; 
x_260 = lean_unsigned_to_nat(0u);
x_261 = l_Lean_Syntax_getArg(x_252, x_260);
x_262 = l_Lean_Syntax_getArg(x_252, x_250);
lean_dec(x_252);
x_263 = l_Lean_Syntax_isNone(x_262);
if (x_263 == 0)
{
lean_object* x_264; uint8_t x_265; 
x_264 = lean_unsigned_to_nat(3u);
lean_inc(x_262);
x_265 = l_Lean_Syntax_matchesNull(x_262, x_264);
if (x_265 == 0)
{
lean_object* x_266; lean_object* x_267; 
lean_dec(x_262);
lean_dec(x_261);
x_266 = l_Lean_Syntax_getArg(x_251, x_260);
lean_dec(x_251);
lean_inc(x_266);
x_267 = l_Lean_Syntax_isIdOrAtom_x3f(x_266);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; 
x_268 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_268;
x_30 = x_266;
goto block_50;
}
else
{
lean_object* x_269; 
x_269 = lean_ctor_get(x_267, 0);
lean_inc(x_269);
lean_dec_ref(x_267);
x_28 = x_246;
x_29 = x_269;
x_30 = x_266;
goto block_50;
}
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_251);
x_270 = l_Lean_Syntax_getArg(x_262, x_250);
lean_dec(x_262);
x_271 = l_Lean_Syntax_getArgs(x_270);
lean_dec(x_270);
x_272 = lean_box(0);
x_273 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_273, 0, x_271);
x_274 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_261, x_79, x_272, x_273);
lean_dec_ref(x_273);
x_51 = x_246;
x_52 = x_274;
goto block_55;
}
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; 
lean_dec(x_262);
lean_dec(x_251);
x_275 = lean_box(0);
x_276 = lean_box(0);
x_277 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_261, x_79, x_275, x_276);
x_51 = x_246;
x_52 = x_277;
goto block_55;
}
}
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; uint8_t x_281; 
x_278 = lean_unsigned_to_nat(0u);
x_279 = l_Lean_Syntax_getArg(x_26, x_278);
x_280 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12));
x_281 = l_Lean_Syntax_isOfKind(x_279, x_280);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; uint8_t x_286; 
x_282 = lean_unsigned_to_nat(1u);
x_283 = l_Lean_Syntax_getArg(x_26, x_282);
lean_dec(x_26);
x_284 = l_Lean_Syntax_getArg(x_283, x_282);
x_285 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_284);
x_286 = l_Lean_Syntax_isOfKind(x_284, x_285);
if (x_286 == 0)
{
lean_object* x_287; lean_object* x_288; 
lean_dec(x_284);
x_287 = l_Lean_Syntax_getArg(x_283, x_278);
lean_dec(x_283);
lean_inc(x_287);
x_288 = l_Lean_Syntax_isIdOrAtom_x3f(x_287);
if (lean_obj_tag(x_288) == 0)
{
lean_object* x_289; 
x_289 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_289;
x_30 = x_287;
goto block_50;
}
else
{
lean_object* x_290; 
x_290 = lean_ctor_get(x_288, 0);
lean_inc(x_290);
lean_dec_ref(x_288);
x_28 = x_246;
x_29 = x_290;
x_30 = x_287;
goto block_50;
}
}
else
{
lean_object* x_291; lean_object* x_292; uint8_t x_293; 
x_291 = l_Lean_Syntax_getArg(x_284, x_278);
x_292 = l_Lean_Syntax_getArg(x_284, x_282);
lean_dec(x_284);
x_293 = l_Lean_Syntax_isNone(x_292);
if (x_293 == 0)
{
lean_object* x_294; uint8_t x_295; 
x_294 = lean_unsigned_to_nat(3u);
lean_inc(x_292);
x_295 = l_Lean_Syntax_matchesNull(x_292, x_294);
if (x_295 == 0)
{
lean_object* x_296; lean_object* x_297; 
lean_dec(x_292);
lean_dec(x_291);
x_296 = l_Lean_Syntax_getArg(x_283, x_278);
lean_dec(x_283);
lean_inc(x_296);
x_297 = l_Lean_Syntax_isIdOrAtom_x3f(x_296);
if (lean_obj_tag(x_297) == 0)
{
lean_object* x_298; 
x_298 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_298;
x_30 = x_296;
goto block_50;
}
else
{
lean_object* x_299; 
x_299 = lean_ctor_get(x_297, 0);
lean_inc(x_299);
lean_dec_ref(x_297);
x_28 = x_246;
x_29 = x_299;
x_30 = x_296;
goto block_50;
}
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
lean_dec(x_283);
x_300 = l_Lean_Syntax_getArg(x_292, x_282);
lean_dec(x_292);
x_301 = l_Lean_Syntax_getArgs(x_300);
lean_dec(x_300);
x_302 = lean_box(0);
x_303 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_303, 0, x_301);
x_304 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_291, x_79, x_302, x_303);
lean_dec_ref(x_303);
x_51 = x_246;
x_52 = x_304;
goto block_55;
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; 
lean_dec(x_292);
lean_dec(x_283);
x_305 = lean_box(0);
x_306 = lean_box(0);
x_307 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_291, x_79, x_305, x_306);
x_51 = x_246;
x_52 = x_307;
goto block_55;
}
}
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; uint8_t x_311; 
x_308 = lean_unsigned_to_nat(1u);
x_309 = l_Lean_Syntax_getArg(x_26, x_308);
lean_dec(x_26);
x_310 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14));
lean_inc(x_309);
x_311 = l_Lean_Syntax_isOfKind(x_309, x_310);
if (x_311 == 0)
{
lean_object* x_312; lean_object* x_313; uint8_t x_314; 
x_312 = l_Lean_Syntax_getArg(x_309, x_308);
x_313 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_312);
x_314 = l_Lean_Syntax_isOfKind(x_312, x_313);
if (x_314 == 0)
{
lean_object* x_315; lean_object* x_316; 
lean_dec(x_312);
x_315 = l_Lean_Syntax_getArg(x_309, x_278);
lean_dec(x_309);
lean_inc(x_315);
x_316 = l_Lean_Syntax_isIdOrAtom_x3f(x_315);
if (lean_obj_tag(x_316) == 0)
{
lean_object* x_317; 
x_317 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_317;
x_30 = x_315;
goto block_50;
}
else
{
lean_object* x_318; 
x_318 = lean_ctor_get(x_316, 0);
lean_inc(x_318);
lean_dec_ref(x_316);
x_28 = x_246;
x_29 = x_318;
x_30 = x_315;
goto block_50;
}
}
else
{
lean_object* x_319; lean_object* x_320; uint8_t x_321; 
x_319 = l_Lean_Syntax_getArg(x_312, x_278);
x_320 = l_Lean_Syntax_getArg(x_312, x_308);
lean_dec(x_312);
x_321 = l_Lean_Syntax_isNone(x_320);
if (x_321 == 0)
{
lean_object* x_322; uint8_t x_323; 
x_322 = lean_unsigned_to_nat(3u);
lean_inc(x_320);
x_323 = l_Lean_Syntax_matchesNull(x_320, x_322);
if (x_323 == 0)
{
lean_object* x_324; lean_object* x_325; 
lean_dec(x_320);
lean_dec(x_319);
x_324 = l_Lean_Syntax_getArg(x_309, x_278);
lean_dec(x_309);
lean_inc(x_324);
x_325 = l_Lean_Syntax_isIdOrAtom_x3f(x_324);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; 
x_326 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_326;
x_30 = x_324;
goto block_50;
}
else
{
lean_object* x_327; 
x_327 = lean_ctor_get(x_325, 0);
lean_inc(x_327);
lean_dec_ref(x_325);
x_28 = x_246;
x_29 = x_327;
x_30 = x_324;
goto block_50;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
lean_dec(x_309);
x_328 = l_Lean_Syntax_getArg(x_320, x_308);
lean_dec(x_320);
x_329 = l_Lean_Syntax_getArgs(x_328);
lean_dec(x_328);
x_330 = lean_box(0);
x_331 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_331, 0, x_329);
x_332 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_319, x_79, x_330, x_331);
lean_dec_ref(x_331);
x_51 = x_246;
x_52 = x_332;
goto block_55;
}
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
lean_dec(x_320);
lean_dec(x_309);
x_333 = lean_box(0);
x_334 = lean_box(0);
x_335 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_319, x_79, x_333, x_334);
x_51 = x_246;
x_52 = x_335;
goto block_55;
}
}
}
else
{
lean_object* x_336; lean_object* x_337; uint8_t x_338; 
x_336 = l_Lean_Syntax_getArg(x_309, x_278);
x_337 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17));
lean_inc(x_336);
x_338 = l_Lean_Syntax_isOfKind(x_336, x_337);
if (x_338 == 0)
{
lean_object* x_339; lean_object* x_340; uint8_t x_341; 
x_339 = l_Lean_Syntax_getArg(x_309, x_308);
lean_dec(x_309);
x_340 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_339);
x_341 = l_Lean_Syntax_isOfKind(x_339, x_340);
if (x_341 == 0)
{
lean_object* x_342; 
lean_dec(x_339);
lean_inc(x_336);
x_342 = l_Lean_Syntax_isIdOrAtom_x3f(x_336);
if (lean_obj_tag(x_342) == 0)
{
lean_object* x_343; 
x_343 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_343;
x_30 = x_336;
goto block_50;
}
else
{
lean_object* x_344; 
x_344 = lean_ctor_get(x_342, 0);
lean_inc(x_344);
lean_dec_ref(x_342);
x_28 = x_246;
x_29 = x_344;
x_30 = x_336;
goto block_50;
}
}
else
{
lean_object* x_345; lean_object* x_346; uint8_t x_347; 
x_345 = l_Lean_Syntax_getArg(x_339, x_278);
x_346 = l_Lean_Syntax_getArg(x_339, x_308);
lean_dec(x_339);
x_347 = l_Lean_Syntax_isNone(x_346);
if (x_347 == 0)
{
lean_object* x_348; uint8_t x_349; 
x_348 = lean_unsigned_to_nat(3u);
lean_inc(x_346);
x_349 = l_Lean_Syntax_matchesNull(x_346, x_348);
if (x_349 == 0)
{
lean_object* x_350; 
lean_dec(x_346);
lean_dec(x_345);
lean_inc(x_336);
x_350 = l_Lean_Syntax_isIdOrAtom_x3f(x_336);
if (lean_obj_tag(x_350) == 0)
{
lean_object* x_351; 
x_351 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_351;
x_30 = x_336;
goto block_50;
}
else
{
lean_object* x_352; 
x_352 = lean_ctor_get(x_350, 0);
lean_inc(x_352);
lean_dec_ref(x_350);
x_28 = x_246;
x_29 = x_352;
x_30 = x_336;
goto block_50;
}
}
else
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; 
lean_dec(x_336);
x_353 = l_Lean_Syntax_getArg(x_346, x_308);
lean_dec(x_346);
x_354 = l_Lean_Syntax_getArgs(x_353);
lean_dec(x_353);
x_355 = lean_box(0);
x_356 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_356, 0, x_354);
x_357 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_345, x_79, x_355, x_356);
lean_dec_ref(x_356);
x_51 = x_246;
x_52 = x_357;
goto block_55;
}
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; 
lean_dec(x_346);
lean_dec(x_336);
x_358 = lean_box(0);
x_359 = lean_box(0);
x_360 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_345, x_79, x_358, x_359);
x_51 = x_246;
x_52 = x_360;
goto block_55;
}
}
}
else
{
lean_object* x_361; lean_object* x_362; uint8_t x_363; 
x_361 = lean_unsigned_to_nat(2u);
x_362 = l_Lean_Syntax_getArg(x_309, x_361);
x_363 = l_Lean_Syntax_isNone(x_362);
if (x_363 == 0)
{
uint8_t x_364; 
lean_inc(x_362);
x_364 = l_Lean_Syntax_matchesNull(x_362, x_308);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; uint8_t x_367; 
lean_dec(x_362);
x_365 = l_Lean_Syntax_getArg(x_309, x_308);
lean_dec(x_309);
x_366 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_365);
x_367 = l_Lean_Syntax_isOfKind(x_365, x_366);
if (x_367 == 0)
{
lean_object* x_368; 
lean_dec(x_365);
lean_inc(x_336);
x_368 = l_Lean_Syntax_isIdOrAtom_x3f(x_336);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; 
x_369 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_369;
x_30 = x_336;
goto block_50;
}
else
{
lean_object* x_370; 
x_370 = lean_ctor_get(x_368, 0);
lean_inc(x_370);
lean_dec_ref(x_368);
x_28 = x_246;
x_29 = x_370;
x_30 = x_336;
goto block_50;
}
}
else
{
lean_object* x_371; lean_object* x_372; uint8_t x_373; 
x_371 = l_Lean_Syntax_getArg(x_365, x_278);
x_372 = l_Lean_Syntax_getArg(x_365, x_308);
lean_dec(x_365);
x_373 = l_Lean_Syntax_isNone(x_372);
if (x_373 == 0)
{
lean_object* x_374; uint8_t x_375; 
x_374 = lean_unsigned_to_nat(3u);
lean_inc(x_372);
x_375 = l_Lean_Syntax_matchesNull(x_372, x_374);
if (x_375 == 0)
{
lean_object* x_376; 
lean_dec(x_372);
lean_dec(x_371);
lean_inc(x_336);
x_376 = l_Lean_Syntax_isIdOrAtom_x3f(x_336);
if (lean_obj_tag(x_376) == 0)
{
lean_object* x_377; 
x_377 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_377;
x_30 = x_336;
goto block_50;
}
else
{
lean_object* x_378; 
x_378 = lean_ctor_get(x_376, 0);
lean_inc(x_378);
lean_dec_ref(x_376);
x_28 = x_246;
x_29 = x_378;
x_30 = x_336;
goto block_50;
}
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
lean_dec(x_336);
x_379 = l_Lean_Syntax_getArg(x_372, x_308);
lean_dec(x_372);
x_380 = l_Lean_Syntax_getArgs(x_379);
lean_dec(x_379);
x_381 = lean_box(0);
x_382 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_382, 0, x_380);
x_383 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_371, x_79, x_381, x_382);
lean_dec_ref(x_382);
x_51 = x_246;
x_52 = x_383;
goto block_55;
}
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; 
lean_dec(x_372);
lean_dec(x_336);
x_384 = lean_box(0);
x_385 = lean_box(0);
x_386 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_371, x_79, x_384, x_385);
x_51 = x_246;
x_52 = x_386;
goto block_55;
}
}
}
else
{
lean_object* x_387; lean_object* x_388; uint8_t x_389; 
x_387 = l_Lean_Syntax_getArg(x_362, x_278);
lean_dec(x_362);
x_388 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19));
lean_inc(x_387);
x_389 = l_Lean_Syntax_isOfKind(x_387, x_388);
if (x_389 == 0)
{
lean_object* x_390; lean_object* x_391; uint8_t x_392; 
lean_dec(x_387);
x_390 = l_Lean_Syntax_getArg(x_309, x_308);
lean_dec(x_309);
x_391 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_390);
x_392 = l_Lean_Syntax_isOfKind(x_390, x_391);
if (x_392 == 0)
{
lean_object* x_393; 
lean_dec(x_390);
lean_inc(x_336);
x_393 = l_Lean_Syntax_isIdOrAtom_x3f(x_336);
if (lean_obj_tag(x_393) == 0)
{
lean_object* x_394; 
x_394 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_394;
x_30 = x_336;
goto block_50;
}
else
{
lean_object* x_395; 
x_395 = lean_ctor_get(x_393, 0);
lean_inc(x_395);
lean_dec_ref(x_393);
x_28 = x_246;
x_29 = x_395;
x_30 = x_336;
goto block_50;
}
}
else
{
lean_object* x_396; lean_object* x_397; uint8_t x_398; 
x_396 = l_Lean_Syntax_getArg(x_390, x_278);
x_397 = l_Lean_Syntax_getArg(x_390, x_308);
lean_dec(x_390);
x_398 = l_Lean_Syntax_isNone(x_397);
if (x_398 == 0)
{
lean_object* x_399; uint8_t x_400; 
x_399 = lean_unsigned_to_nat(3u);
lean_inc(x_397);
x_400 = l_Lean_Syntax_matchesNull(x_397, x_399);
if (x_400 == 0)
{
lean_object* x_401; 
lean_dec(x_397);
lean_dec(x_396);
lean_inc(x_336);
x_401 = l_Lean_Syntax_isIdOrAtom_x3f(x_336);
if (lean_obj_tag(x_401) == 0)
{
lean_object* x_402; 
x_402 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_28 = x_246;
x_29 = x_402;
x_30 = x_336;
goto block_50;
}
else
{
lean_object* x_403; 
x_403 = lean_ctor_get(x_401, 0);
lean_inc(x_403);
lean_dec_ref(x_401);
x_28 = x_246;
x_29 = x_403;
x_30 = x_336;
goto block_50;
}
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
lean_dec(x_336);
x_404 = l_Lean_Syntax_getArg(x_397, x_308);
lean_dec(x_397);
x_405 = l_Lean_Syntax_getArgs(x_404);
lean_dec(x_404);
x_406 = lean_box(0);
x_407 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_407, 0, x_405);
x_408 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_396, x_79, x_406, x_407);
lean_dec_ref(x_407);
x_51 = x_246;
x_52 = x_408;
goto block_55;
}
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; 
lean_dec(x_397);
lean_dec(x_336);
x_409 = lean_box(0);
x_410 = lean_box(0);
x_411 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_396, x_79, x_409, x_410);
x_51 = x_246;
x_52 = x_411;
goto block_55;
}
}
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; 
lean_dec(x_336);
x_412 = lean_box(0);
x_413 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_413, 0, x_387);
x_414 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(x_79, x_309, x_66, x_247, x_70, x_308, x_278, x_412, x_413);
lean_dec_ref(x_413);
lean_dec(x_309);
x_51 = x_246;
x_52 = x_414;
goto block_55;
}
}
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; 
lean_dec(x_362);
lean_dec(x_336);
x_415 = lean_box(0);
x_416 = lean_box(0);
x_417 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(x_79, x_309, x_66, x_247, x_70, x_308, x_278, x_415, x_416);
lean_dec(x_309);
x_51 = x_246;
x_52 = x_417;
goto block_55;
}
}
}
}
}
}
}
else
{
lean_dec(x_56);
lean_dec(x_26);
goto block_22;
}
}
}
else
{
lean_dec_ref(x_62);
lean_dec(x_26);
lean_dec_ref(x_18);
lean_dec_ref(x_1);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_418; lean_object* x_419; 
x_418 = lean_obj_once(&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23, &lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23_once, _init_lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23);
x_419 = lp_plugin_panic___at___00handleDocumentSymbol_toDocumentSymbols_spec__2(x_418);
x_11 = x_419;
goto block_14;
}
else
{
lean_object* x_420; 
x_420 = lean_ctor_get(x_56, 0);
lean_inc(x_420);
lean_dec_ref(x_56);
x_11 = x_420;
goto block_14;
}
}
}
else
{
lean_object* x_421; uint8_t x_422; 
lean_dec_ref(x_62);
lean_dec(x_56);
x_421 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25));
lean_inc(x_26);
x_422 = l_Lean_Syntax_isOfKind(x_26, x_421);
if (x_422 == 0)
{
lean_dec_ref(x_57);
lean_dec(x_26);
goto block_22;
}
else
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; uint8_t x_426; 
x_423 = lean_unsigned_to_nat(0u);
x_424 = l_Lean_Syntax_getArg(x_26, x_423);
x_425 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27));
x_426 = l_Lean_Syntax_isOfKind(x_424, x_425);
if (x_426 == 0)
{
lean_dec_ref(x_57);
lean_dec(x_26);
goto block_22;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
lean_dec_ref(x_18);
x_427 = lean_unsigned_to_nat(2u);
x_428 = l_Lean_Syntax_getArg(x_26, x_427);
lean_dec(x_26);
x_429 = l_Lean_Syntax_getOptional_x3f(x_428);
lean_dec(x_428);
if (lean_obj_tag(x_429) == 0)
{
lean_object* x_430; lean_object* x_431; 
x_430 = lean_box(0);
x_431 = lp_plugin_handleDocumentSymbol_mkLevel(x_1, x_2, x_10, x_4, x_57, x_430);
return x_431;
}
else
{
uint8_t x_432; 
x_432 = !lean_is_exclusive(x_429);
if (x_432 == 0)
{
lean_object* x_433; 
x_433 = lp_plugin_handleDocumentSymbol_mkLevel(x_1, x_2, x_10, x_4, x_57, x_429);
return x_433;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; 
x_434 = lean_ctor_get(x_429, 0);
lean_inc(x_434);
lean_dec(x_429);
x_435 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_435, 0, x_434);
x_436 = lp_plugin_handleDocumentSymbol_mkLevel(x_1, x_2, x_10, x_4, x_57, x_435);
return x_436;
}
}
}
}
}
}
else
{
lean_object* x_437; uint8_t x_438; 
lean_dec_ref(x_62);
lean_dec(x_56);
x_437 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29));
lean_inc(x_26);
x_438 = l_Lean_Syntax_isOfKind(x_26, x_437);
if (x_438 == 0)
{
lean_dec_ref(x_57);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; 
lean_dec_ref(x_18);
x_439 = lean_unsigned_to_nat(1u);
x_440 = l_Lean_Syntax_getArg(x_26, x_439);
lean_dec(x_26);
if (lean_is_scalar(x_24)) {
 x_441 = lean_alloc_ctor(1, 1, 0);
} else {
 x_441 = x_24;
 lean_ctor_set_tag(x_441, 1);
}
lean_ctor_set(x_441, 0, x_440);
x_442 = lp_plugin_handleDocumentSymbol_mkLevel(x_1, x_2, x_10, x_4, x_57, x_441);
return x_442;
}
}
}
}
}
}
else
{
lean_dec_ref(x_60);
lean_dec_ref(x_59);
lean_dec_ref(x_58);
lean_dec_ref(x_25);
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
}
else
{
lean_dec_ref(x_59);
lean_dec(x_60);
lean_dec_ref(x_58);
lean_dec_ref(x_25);
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
}
else
{
lean_dec_ref(x_58);
lean_dec(x_59);
lean_dec_ref(x_25);
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
}
else
{
lean_dec(x_58);
lean_dec_ref(x_25);
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_24);
goto block_22;
}
}
else
{
lean_dec_ref(x_57);
lean_dec(x_56);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
goto block_22;
}
}
}
else
{
lean_object* x_446; lean_object* x_447; 
lean_dec_ref(x_17);
x_446 = l_Lean_PersistentArray_toList___redArg(x_18);
lean_dec_ref(x_18);
x_447 = l_List_appendTR___redArg(x_446, x_10);
x_3 = x_447;
goto _start;
}
block_22:
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_PersistentArray_toList___redArg(x_18);
lean_dec_ref(x_18);
x_20 = l_List_appendTR___redArg(x_19, x_10);
x_3 = x_20;
goto _start;
}
}
default: 
{
lean_dec_ref(x_9);
lean_free_object(x_3);
x_3 = x_10;
goto _start;
}
}
block_14:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec_ref(x_11);
x_13 = lean_apply_3(x_4, x_12, x_10, x_2);
return x_13;
}
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; 
x_450 = lean_ctor_get(x_3, 0);
x_451 = lean_ctor_get(x_3, 1);
lean_inc(x_451);
lean_inc(x_450);
lean_dec(x_3);
switch (lean_obj_tag(x_450)) {
case 0:
{
lean_object* x_456; lean_object* x_457; 
x_456 = lean_ctor_get(x_450, 1);
lean_inc_ref(x_456);
lean_dec_ref(x_450);
x_457 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_457, 0, x_456);
lean_ctor_set(x_457, 1, x_451);
x_3 = x_457;
goto _start;
}
case 1:
{
lean_object* x_459; lean_object* x_460; 
x_459 = lean_ctor_get(x_450, 0);
lean_inc_ref(x_459);
x_460 = lean_ctor_get(x_450, 1);
lean_inc_ref(x_460);
lean_dec_ref(x_450);
if (lean_obj_tag(x_459) == 3)
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_485; lean_object* x_486; lean_object* x_490; lean_object* x_491; 
x_465 = lean_ctor_get(x_459, 0);
lean_inc_ref(x_465);
if (lean_is_exclusive(x_459)) {
 lean_ctor_release(x_459, 0);
 x_466 = x_459;
} else {
 lean_dec_ref(x_459);
 x_466 = lean_box(0);
}
x_467 = lean_ctor_get(x_465, 0);
lean_inc(x_467);
x_468 = lean_ctor_get(x_465, 1);
lean_inc(x_468);
lean_dec_ref(x_465);
x_469 = 0;
x_490 = l_Lean_Syntax_getRange_x3f(x_468, x_469);
if (lean_obj_tag(x_490) == 0)
{
lean_object* x_712; 
x_712 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__30));
x_491 = x_712;
goto block_711;
}
else
{
lean_object* x_713; 
x_713 = lean_ctor_get(x_490, 0);
lean_inc(x_713);
x_491 = x_713;
goto block_711;
}
block_484:
{
lean_object* x_473; 
x_473 = l_Lean_Syntax_getRange_x3f(x_472, x_469);
lean_dec(x_472);
if (lean_obj_tag(x_473) == 1)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; uint8_t x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; 
lean_dec_ref(x_460);
x_474 = lean_ctor_get(x_473, 0);
lean_inc(x_474);
if (lean_is_exclusive(x_473)) {
 lean_ctor_release(x_473, 0);
 x_475 = x_473;
} else {
 lean_dec_ref(x_473);
 x_475 = lean_box(0);
}
x_476 = lean_box(0);
x_477 = 5;
lean_inc_ref(x_1);
x_478 = l_Lean_Syntax_Range_toLspRange(x_1, x_470);
lean_inc_ref(x_1);
x_479 = l_Lean_Syntax_Range_toLspRange(x_1, x_474);
x_480 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_480, 0, x_471);
lean_ctor_set(x_480, 1, x_476);
lean_ctor_set(x_480, 2, x_478);
lean_ctor_set(x_480, 3, x_479);
lean_ctor_set(x_480, 4, x_476);
lean_ctor_set_uint8(x_480, sizeof(void*)*5, x_477);
if (lean_is_scalar(x_475)) {
 x_481 = lean_alloc_ctor(0, 1, 0);
} else {
 x_481 = x_475;
 lean_ctor_set_tag(x_481, 0);
}
lean_ctor_set(x_481, 0, x_480);
x_482 = lean_array_push(x_2, x_481);
x_2 = x_482;
x_3 = x_451;
goto _start;
}
else
{
lean_dec(x_473);
lean_dec_ref(x_471);
lean_dec_ref(x_470);
goto block_464;
}
}
block_489:
{
lean_object* x_487; lean_object* x_488; 
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 1);
lean_inc(x_488);
lean_dec_ref(x_486);
x_470 = x_485;
x_471 = x_487;
x_472 = x_488;
goto block_484;
}
block_711:
{
if (lean_obj_tag(x_467) == 1)
{
lean_object* x_492; 
x_492 = lean_ctor_get(x_467, 0);
lean_inc(x_492);
if (lean_obj_tag(x_492) == 1)
{
lean_object* x_493; 
x_493 = lean_ctor_get(x_492, 0);
lean_inc(x_493);
if (lean_obj_tag(x_493) == 1)
{
lean_object* x_494; 
x_494 = lean_ctor_get(x_493, 0);
lean_inc(x_494);
if (lean_obj_tag(x_494) == 1)
{
lean_object* x_495; 
x_495 = lean_ctor_get(x_494, 0);
if (lean_obj_tag(x_495) == 0)
{
lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; uint8_t x_501; 
x_496 = lean_ctor_get(x_467, 1);
lean_inc_ref(x_496);
lean_dec_ref(x_467);
x_497 = lean_ctor_get(x_492, 1);
lean_inc_ref(x_497);
lean_dec_ref(x_492);
x_498 = lean_ctor_get(x_493, 1);
lean_inc_ref(x_498);
lean_dec_ref(x_493);
x_499 = lean_ctor_get(x_494, 1);
lean_inc_ref(x_499);
lean_dec_ref(x_494);
x_500 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__0));
x_501 = lean_string_dec_eq(x_499, x_500);
lean_dec_ref(x_499);
if (x_501 == 0)
{
lean_dec_ref(x_498);
lean_dec_ref(x_497);
lean_dec_ref(x_496);
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
else
{
lean_object* x_502; uint8_t x_503; 
x_502 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__1));
x_503 = lean_string_dec_eq(x_498, x_502);
lean_dec_ref(x_498);
if (x_503 == 0)
{
lean_dec_ref(x_497);
lean_dec_ref(x_496);
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
else
{
lean_object* x_504; uint8_t x_505; 
x_504 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__2));
x_505 = lean_string_dec_eq(x_497, x_504);
lean_dec_ref(x_497);
if (x_505 == 0)
{
lean_dec_ref(x_496);
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
else
{
lean_object* x_506; uint8_t x_507; 
x_506 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__3));
x_507 = lean_string_dec_eq(x_496, x_506);
if (x_507 == 0)
{
lean_object* x_508; uint8_t x_509; 
lean_dec(x_466);
x_508 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__4));
x_509 = lean_string_dec_eq(x_496, x_508);
if (x_509 == 0)
{
lean_object* x_510; uint8_t x_511; 
lean_dec_ref(x_491);
x_510 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__5));
x_511 = lean_string_dec_eq(x_496, x_510);
if (x_511 == 0)
{
lean_object* x_512; uint8_t x_513; 
x_512 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__6));
x_513 = lean_string_dec_eq(x_496, x_512);
lean_dec_ref(x_496);
if (x_513 == 0)
{
lean_dec(x_490);
lean_dec(x_468);
goto block_464;
}
else
{
if (lean_obj_tag(x_490) == 1)
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; uint8_t x_518; 
x_514 = lean_ctor_get(x_490, 0);
lean_inc(x_514);
if (lean_is_exclusive(x_490)) {
 lean_ctor_release(x_490, 0);
 x_515 = x_490;
} else {
 lean_dec_ref(x_490);
 x_515 = lean_box(0);
}
x_516 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__7));
x_517 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__9));
lean_inc(x_468);
x_518 = l_Lean_Syntax_isOfKind(x_468, x_517);
if (x_518 == 0)
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; uint8_t x_523; 
x_519 = lean_unsigned_to_nat(1u);
x_520 = l_Lean_Syntax_getArg(x_468, x_519);
lean_dec(x_468);
x_521 = l_Lean_Syntax_getArg(x_520, x_519);
x_522 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_521);
x_523 = l_Lean_Syntax_isOfKind(x_521, x_522);
if (x_523 == 0)
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; 
lean_dec(x_521);
lean_dec(x_515);
x_524 = lean_unsigned_to_nat(0u);
x_525 = l_Lean_Syntax_getArg(x_520, x_524);
lean_dec(x_520);
lean_inc(x_525);
x_526 = l_Lean_Syntax_isIdOrAtom_x3f(x_525);
if (lean_obj_tag(x_526) == 0)
{
lean_object* x_527; 
x_527 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_527;
x_472 = x_525;
goto block_484;
}
else
{
lean_object* x_528; 
x_528 = lean_ctor_get(x_526, 0);
lean_inc(x_528);
lean_dec_ref(x_526);
x_470 = x_514;
x_471 = x_528;
x_472 = x_525;
goto block_484;
}
}
else
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; uint8_t x_532; 
x_529 = lean_unsigned_to_nat(0u);
x_530 = l_Lean_Syntax_getArg(x_521, x_529);
x_531 = l_Lean_Syntax_getArg(x_521, x_519);
lean_dec(x_521);
x_532 = l_Lean_Syntax_isNone(x_531);
if (x_532 == 0)
{
lean_object* x_533; uint8_t x_534; 
x_533 = lean_unsigned_to_nat(3u);
lean_inc(x_531);
x_534 = l_Lean_Syntax_matchesNull(x_531, x_533);
if (x_534 == 0)
{
lean_object* x_535; lean_object* x_536; 
lean_dec(x_531);
lean_dec(x_530);
lean_dec(x_515);
x_535 = l_Lean_Syntax_getArg(x_520, x_529);
lean_dec(x_520);
lean_inc(x_535);
x_536 = l_Lean_Syntax_isIdOrAtom_x3f(x_535);
if (lean_obj_tag(x_536) == 0)
{
lean_object* x_537; 
x_537 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_537;
x_472 = x_535;
goto block_484;
}
else
{
lean_object* x_538; 
x_538 = lean_ctor_get(x_536, 0);
lean_inc(x_538);
lean_dec_ref(x_536);
x_470 = x_514;
x_471 = x_538;
x_472 = x_535;
goto block_484;
}
}
else
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; 
lean_dec(x_520);
x_539 = l_Lean_Syntax_getArg(x_531, x_519);
lean_dec(x_531);
x_540 = l_Lean_Syntax_getArgs(x_539);
lean_dec(x_539);
x_541 = lean_box(0);
if (lean_is_scalar(x_515)) {
 x_542 = lean_alloc_ctor(1, 1, 0);
} else {
 x_542 = x_515;
}
lean_ctor_set(x_542, 0, x_540);
x_543 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_530, x_513, x_541, x_542);
lean_dec_ref(x_542);
x_485 = x_514;
x_486 = x_543;
goto block_489;
}
}
else
{
lean_object* x_544; lean_object* x_545; lean_object* x_546; 
lean_dec(x_531);
lean_dec(x_520);
lean_dec(x_515);
x_544 = lean_box(0);
x_545 = lean_box(0);
x_546 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_530, x_513, x_544, x_545);
x_485 = x_514;
x_486 = x_546;
goto block_489;
}
}
}
else
{
lean_object* x_547; lean_object* x_548; lean_object* x_549; uint8_t x_550; 
x_547 = lean_unsigned_to_nat(0u);
x_548 = l_Lean_Syntax_getArg(x_468, x_547);
x_549 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__12));
x_550 = l_Lean_Syntax_isOfKind(x_548, x_549);
if (x_550 == 0)
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; uint8_t x_555; 
x_551 = lean_unsigned_to_nat(1u);
x_552 = l_Lean_Syntax_getArg(x_468, x_551);
lean_dec(x_468);
x_553 = l_Lean_Syntax_getArg(x_552, x_551);
x_554 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_553);
x_555 = l_Lean_Syntax_isOfKind(x_553, x_554);
if (x_555 == 0)
{
lean_object* x_556; lean_object* x_557; 
lean_dec(x_553);
lean_dec(x_515);
x_556 = l_Lean_Syntax_getArg(x_552, x_547);
lean_dec(x_552);
lean_inc(x_556);
x_557 = l_Lean_Syntax_isIdOrAtom_x3f(x_556);
if (lean_obj_tag(x_557) == 0)
{
lean_object* x_558; 
x_558 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_558;
x_472 = x_556;
goto block_484;
}
else
{
lean_object* x_559; 
x_559 = lean_ctor_get(x_557, 0);
lean_inc(x_559);
lean_dec_ref(x_557);
x_470 = x_514;
x_471 = x_559;
x_472 = x_556;
goto block_484;
}
}
else
{
lean_object* x_560; lean_object* x_561; uint8_t x_562; 
x_560 = l_Lean_Syntax_getArg(x_553, x_547);
x_561 = l_Lean_Syntax_getArg(x_553, x_551);
lean_dec(x_553);
x_562 = l_Lean_Syntax_isNone(x_561);
if (x_562 == 0)
{
lean_object* x_563; uint8_t x_564; 
x_563 = lean_unsigned_to_nat(3u);
lean_inc(x_561);
x_564 = l_Lean_Syntax_matchesNull(x_561, x_563);
if (x_564 == 0)
{
lean_object* x_565; lean_object* x_566; 
lean_dec(x_561);
lean_dec(x_560);
lean_dec(x_515);
x_565 = l_Lean_Syntax_getArg(x_552, x_547);
lean_dec(x_552);
lean_inc(x_565);
x_566 = l_Lean_Syntax_isIdOrAtom_x3f(x_565);
if (lean_obj_tag(x_566) == 0)
{
lean_object* x_567; 
x_567 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_567;
x_472 = x_565;
goto block_484;
}
else
{
lean_object* x_568; 
x_568 = lean_ctor_get(x_566, 0);
lean_inc(x_568);
lean_dec_ref(x_566);
x_470 = x_514;
x_471 = x_568;
x_472 = x_565;
goto block_484;
}
}
else
{
lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; 
lean_dec(x_552);
x_569 = l_Lean_Syntax_getArg(x_561, x_551);
lean_dec(x_561);
x_570 = l_Lean_Syntax_getArgs(x_569);
lean_dec(x_569);
x_571 = lean_box(0);
if (lean_is_scalar(x_515)) {
 x_572 = lean_alloc_ctor(1, 1, 0);
} else {
 x_572 = x_515;
}
lean_ctor_set(x_572, 0, x_570);
x_573 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_560, x_513, x_571, x_572);
lean_dec_ref(x_572);
x_485 = x_514;
x_486 = x_573;
goto block_489;
}
}
else
{
lean_object* x_574; lean_object* x_575; lean_object* x_576; 
lean_dec(x_561);
lean_dec(x_552);
lean_dec(x_515);
x_574 = lean_box(0);
x_575 = lean_box(0);
x_576 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_560, x_513, x_574, x_575);
x_485 = x_514;
x_486 = x_576;
goto block_489;
}
}
}
else
{
lean_object* x_577; lean_object* x_578; lean_object* x_579; uint8_t x_580; 
x_577 = lean_unsigned_to_nat(1u);
x_578 = l_Lean_Syntax_getArg(x_468, x_577);
lean_dec(x_468);
x_579 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__14));
lean_inc(x_578);
x_580 = l_Lean_Syntax_isOfKind(x_578, x_579);
if (x_580 == 0)
{
lean_object* x_581; lean_object* x_582; uint8_t x_583; 
x_581 = l_Lean_Syntax_getArg(x_578, x_577);
x_582 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_581);
x_583 = l_Lean_Syntax_isOfKind(x_581, x_582);
if (x_583 == 0)
{
lean_object* x_584; lean_object* x_585; 
lean_dec(x_581);
lean_dec(x_515);
x_584 = l_Lean_Syntax_getArg(x_578, x_547);
lean_dec(x_578);
lean_inc(x_584);
x_585 = l_Lean_Syntax_isIdOrAtom_x3f(x_584);
if (lean_obj_tag(x_585) == 0)
{
lean_object* x_586; 
x_586 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_586;
x_472 = x_584;
goto block_484;
}
else
{
lean_object* x_587; 
x_587 = lean_ctor_get(x_585, 0);
lean_inc(x_587);
lean_dec_ref(x_585);
x_470 = x_514;
x_471 = x_587;
x_472 = x_584;
goto block_484;
}
}
else
{
lean_object* x_588; lean_object* x_589; uint8_t x_590; 
x_588 = l_Lean_Syntax_getArg(x_581, x_547);
x_589 = l_Lean_Syntax_getArg(x_581, x_577);
lean_dec(x_581);
x_590 = l_Lean_Syntax_isNone(x_589);
if (x_590 == 0)
{
lean_object* x_591; uint8_t x_592; 
x_591 = lean_unsigned_to_nat(3u);
lean_inc(x_589);
x_592 = l_Lean_Syntax_matchesNull(x_589, x_591);
if (x_592 == 0)
{
lean_object* x_593; lean_object* x_594; 
lean_dec(x_589);
lean_dec(x_588);
lean_dec(x_515);
x_593 = l_Lean_Syntax_getArg(x_578, x_547);
lean_dec(x_578);
lean_inc(x_593);
x_594 = l_Lean_Syntax_isIdOrAtom_x3f(x_593);
if (lean_obj_tag(x_594) == 0)
{
lean_object* x_595; 
x_595 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_595;
x_472 = x_593;
goto block_484;
}
else
{
lean_object* x_596; 
x_596 = lean_ctor_get(x_594, 0);
lean_inc(x_596);
lean_dec_ref(x_594);
x_470 = x_514;
x_471 = x_596;
x_472 = x_593;
goto block_484;
}
}
else
{
lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; 
lean_dec(x_578);
x_597 = l_Lean_Syntax_getArg(x_589, x_577);
lean_dec(x_589);
x_598 = l_Lean_Syntax_getArgs(x_597);
lean_dec(x_597);
x_599 = lean_box(0);
if (lean_is_scalar(x_515)) {
 x_600 = lean_alloc_ctor(1, 1, 0);
} else {
 x_600 = x_515;
}
lean_ctor_set(x_600, 0, x_598);
x_601 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_588, x_513, x_599, x_600);
lean_dec_ref(x_600);
x_485 = x_514;
x_486 = x_601;
goto block_489;
}
}
else
{
lean_object* x_602; lean_object* x_603; lean_object* x_604; 
lean_dec(x_589);
lean_dec(x_578);
lean_dec(x_515);
x_602 = lean_box(0);
x_603 = lean_box(0);
x_604 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_588, x_513, x_602, x_603);
x_485 = x_514;
x_486 = x_604;
goto block_489;
}
}
}
else
{
lean_object* x_605; lean_object* x_606; uint8_t x_607; 
x_605 = l_Lean_Syntax_getArg(x_578, x_547);
x_606 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__17));
lean_inc(x_605);
x_607 = l_Lean_Syntax_isOfKind(x_605, x_606);
if (x_607 == 0)
{
lean_object* x_608; lean_object* x_609; uint8_t x_610; 
x_608 = l_Lean_Syntax_getArg(x_578, x_577);
lean_dec(x_578);
x_609 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_608);
x_610 = l_Lean_Syntax_isOfKind(x_608, x_609);
if (x_610 == 0)
{
lean_object* x_611; 
lean_dec(x_608);
lean_dec(x_515);
lean_inc(x_605);
x_611 = l_Lean_Syntax_isIdOrAtom_x3f(x_605);
if (lean_obj_tag(x_611) == 0)
{
lean_object* x_612; 
x_612 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_612;
x_472 = x_605;
goto block_484;
}
else
{
lean_object* x_613; 
x_613 = lean_ctor_get(x_611, 0);
lean_inc(x_613);
lean_dec_ref(x_611);
x_470 = x_514;
x_471 = x_613;
x_472 = x_605;
goto block_484;
}
}
else
{
lean_object* x_614; lean_object* x_615; uint8_t x_616; 
x_614 = l_Lean_Syntax_getArg(x_608, x_547);
x_615 = l_Lean_Syntax_getArg(x_608, x_577);
lean_dec(x_608);
x_616 = l_Lean_Syntax_isNone(x_615);
if (x_616 == 0)
{
lean_object* x_617; uint8_t x_618; 
x_617 = lean_unsigned_to_nat(3u);
lean_inc(x_615);
x_618 = l_Lean_Syntax_matchesNull(x_615, x_617);
if (x_618 == 0)
{
lean_object* x_619; 
lean_dec(x_615);
lean_dec(x_614);
lean_dec(x_515);
lean_inc(x_605);
x_619 = l_Lean_Syntax_isIdOrAtom_x3f(x_605);
if (lean_obj_tag(x_619) == 0)
{
lean_object* x_620; 
x_620 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_620;
x_472 = x_605;
goto block_484;
}
else
{
lean_object* x_621; 
x_621 = lean_ctor_get(x_619, 0);
lean_inc(x_621);
lean_dec_ref(x_619);
x_470 = x_514;
x_471 = x_621;
x_472 = x_605;
goto block_484;
}
}
else
{
lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; 
lean_dec(x_605);
x_622 = l_Lean_Syntax_getArg(x_615, x_577);
lean_dec(x_615);
x_623 = l_Lean_Syntax_getArgs(x_622);
lean_dec(x_622);
x_624 = lean_box(0);
if (lean_is_scalar(x_515)) {
 x_625 = lean_alloc_ctor(1, 1, 0);
} else {
 x_625 = x_515;
}
lean_ctor_set(x_625, 0, x_623);
x_626 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_614, x_513, x_624, x_625);
lean_dec_ref(x_625);
x_485 = x_514;
x_486 = x_626;
goto block_489;
}
}
else
{
lean_object* x_627; lean_object* x_628; lean_object* x_629; 
lean_dec(x_615);
lean_dec(x_605);
lean_dec(x_515);
x_627 = lean_box(0);
x_628 = lean_box(0);
x_629 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_614, x_513, x_627, x_628);
x_485 = x_514;
x_486 = x_629;
goto block_489;
}
}
}
else
{
lean_object* x_630; lean_object* x_631; uint8_t x_632; 
x_630 = lean_unsigned_to_nat(2u);
x_631 = l_Lean_Syntax_getArg(x_578, x_630);
x_632 = l_Lean_Syntax_isNone(x_631);
if (x_632 == 0)
{
uint8_t x_633; 
lean_inc(x_631);
x_633 = l_Lean_Syntax_matchesNull(x_631, x_577);
if (x_633 == 0)
{
lean_object* x_634; lean_object* x_635; uint8_t x_636; 
lean_dec(x_631);
x_634 = l_Lean_Syntax_getArg(x_578, x_577);
lean_dec(x_578);
x_635 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_634);
x_636 = l_Lean_Syntax_isOfKind(x_634, x_635);
if (x_636 == 0)
{
lean_object* x_637; 
lean_dec(x_634);
lean_dec(x_515);
lean_inc(x_605);
x_637 = l_Lean_Syntax_isIdOrAtom_x3f(x_605);
if (lean_obj_tag(x_637) == 0)
{
lean_object* x_638; 
x_638 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_638;
x_472 = x_605;
goto block_484;
}
else
{
lean_object* x_639; 
x_639 = lean_ctor_get(x_637, 0);
lean_inc(x_639);
lean_dec_ref(x_637);
x_470 = x_514;
x_471 = x_639;
x_472 = x_605;
goto block_484;
}
}
else
{
lean_object* x_640; lean_object* x_641; uint8_t x_642; 
x_640 = l_Lean_Syntax_getArg(x_634, x_547);
x_641 = l_Lean_Syntax_getArg(x_634, x_577);
lean_dec(x_634);
x_642 = l_Lean_Syntax_isNone(x_641);
if (x_642 == 0)
{
lean_object* x_643; uint8_t x_644; 
x_643 = lean_unsigned_to_nat(3u);
lean_inc(x_641);
x_644 = l_Lean_Syntax_matchesNull(x_641, x_643);
if (x_644 == 0)
{
lean_object* x_645; 
lean_dec(x_641);
lean_dec(x_640);
lean_dec(x_515);
lean_inc(x_605);
x_645 = l_Lean_Syntax_isIdOrAtom_x3f(x_605);
if (lean_obj_tag(x_645) == 0)
{
lean_object* x_646; 
x_646 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_646;
x_472 = x_605;
goto block_484;
}
else
{
lean_object* x_647; 
x_647 = lean_ctor_get(x_645, 0);
lean_inc(x_647);
lean_dec_ref(x_645);
x_470 = x_514;
x_471 = x_647;
x_472 = x_605;
goto block_484;
}
}
else
{
lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; 
lean_dec(x_605);
x_648 = l_Lean_Syntax_getArg(x_641, x_577);
lean_dec(x_641);
x_649 = l_Lean_Syntax_getArgs(x_648);
lean_dec(x_648);
x_650 = lean_box(0);
if (lean_is_scalar(x_515)) {
 x_651 = lean_alloc_ctor(1, 1, 0);
} else {
 x_651 = x_515;
}
lean_ctor_set(x_651, 0, x_649);
x_652 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_640, x_513, x_650, x_651);
lean_dec_ref(x_651);
x_485 = x_514;
x_486 = x_652;
goto block_489;
}
}
else
{
lean_object* x_653; lean_object* x_654; lean_object* x_655; 
lean_dec(x_641);
lean_dec(x_605);
lean_dec(x_515);
x_653 = lean_box(0);
x_654 = lean_box(0);
x_655 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_640, x_513, x_653, x_654);
x_485 = x_514;
x_486 = x_655;
goto block_489;
}
}
}
else
{
lean_object* x_656; lean_object* x_657; uint8_t x_658; 
x_656 = l_Lean_Syntax_getArg(x_631, x_547);
lean_dec(x_631);
x_657 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__19));
lean_inc(x_656);
x_658 = l_Lean_Syntax_isOfKind(x_656, x_657);
if (x_658 == 0)
{
lean_object* x_659; lean_object* x_660; uint8_t x_661; 
lean_dec(x_656);
x_659 = l_Lean_Syntax_getArg(x_578, x_577);
lean_dec(x_578);
x_660 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__10));
lean_inc(x_659);
x_661 = l_Lean_Syntax_isOfKind(x_659, x_660);
if (x_661 == 0)
{
lean_object* x_662; 
lean_dec(x_659);
lean_dec(x_515);
lean_inc(x_605);
x_662 = l_Lean_Syntax_isIdOrAtom_x3f(x_605);
if (lean_obj_tag(x_662) == 0)
{
lean_object* x_663; 
x_663 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_663;
x_472 = x_605;
goto block_484;
}
else
{
lean_object* x_664; 
x_664 = lean_ctor_get(x_662, 0);
lean_inc(x_664);
lean_dec_ref(x_662);
x_470 = x_514;
x_471 = x_664;
x_472 = x_605;
goto block_484;
}
}
else
{
lean_object* x_665; lean_object* x_666; uint8_t x_667; 
x_665 = l_Lean_Syntax_getArg(x_659, x_547);
x_666 = l_Lean_Syntax_getArg(x_659, x_577);
lean_dec(x_659);
x_667 = l_Lean_Syntax_isNone(x_666);
if (x_667 == 0)
{
lean_object* x_668; uint8_t x_669; 
x_668 = lean_unsigned_to_nat(3u);
lean_inc(x_666);
x_669 = l_Lean_Syntax_matchesNull(x_666, x_668);
if (x_669 == 0)
{
lean_object* x_670; 
lean_dec(x_666);
lean_dec(x_665);
lean_dec(x_515);
lean_inc(x_605);
x_670 = l_Lean_Syntax_isIdOrAtom_x3f(x_605);
if (lean_obj_tag(x_670) == 0)
{
lean_object* x_671; 
x_671 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4___closed__2));
x_470 = x_514;
x_471 = x_671;
x_472 = x_605;
goto block_484;
}
else
{
lean_object* x_672; 
x_672 = lean_ctor_get(x_670, 0);
lean_inc(x_672);
lean_dec_ref(x_670);
x_470 = x_514;
x_471 = x_672;
x_472 = x_605;
goto block_484;
}
}
else
{
lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; 
lean_dec(x_605);
x_673 = l_Lean_Syntax_getArg(x_666, x_577);
lean_dec(x_666);
x_674 = l_Lean_Syntax_getArgs(x_673);
lean_dec(x_673);
x_675 = lean_box(0);
if (lean_is_scalar(x_515)) {
 x_676 = lean_alloc_ctor(1, 1, 0);
} else {
 x_676 = x_515;
}
lean_ctor_set(x_676, 0, x_674);
x_677 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_665, x_513, x_675, x_676);
lean_dec_ref(x_676);
x_485 = x_514;
x_486 = x_677;
goto block_489;
}
}
else
{
lean_object* x_678; lean_object* x_679; lean_object* x_680; 
lean_dec(x_666);
lean_dec(x_605);
lean_dec(x_515);
x_678 = lean_box(0);
x_679 = lean_box(0);
x_680 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__0(x_665, x_513, x_678, x_679);
x_485 = x_514;
x_486 = x_680;
goto block_489;
}
}
}
else
{
lean_object* x_681; lean_object* x_682; lean_object* x_683; 
lean_dec(x_605);
x_681 = lean_box(0);
if (lean_is_scalar(x_515)) {
 x_682 = lean_alloc_ctor(1, 1, 0);
} else {
 x_682 = x_515;
}
lean_ctor_set(x_682, 0, x_656);
x_683 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(x_513, x_578, x_500, x_516, x_504, x_577, x_547, x_681, x_682);
lean_dec_ref(x_682);
lean_dec(x_578);
x_485 = x_514;
x_486 = x_683;
goto block_489;
}
}
}
else
{
lean_object* x_684; lean_object* x_685; lean_object* x_686; 
lean_dec(x_631);
lean_dec(x_605);
lean_dec(x_515);
x_684 = lean_box(0);
x_685 = lean_box(0);
x_686 = lp_plugin_handleDocumentSymbol_toDocumentSymbols___lam__4(x_513, x_578, x_500, x_516, x_504, x_577, x_547, x_684, x_685);
lean_dec(x_578);
x_485 = x_514;
x_486 = x_686;
goto block_489;
}
}
}
}
}
}
else
{
lean_dec(x_490);
lean_dec(x_468);
goto block_464;
}
}
}
else
{
lean_dec_ref(x_496);
lean_dec(x_468);
lean_dec_ref(x_460);
lean_dec_ref(x_1);
if (lean_obj_tag(x_490) == 0)
{
lean_object* x_687; lean_object* x_688; 
x_687 = lean_obj_once(&lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23, &lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23_once, _init_lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__23);
x_688 = lp_plugin_panic___at___00handleDocumentSymbol_toDocumentSymbols_spec__2(x_687);
x_452 = x_688;
goto block_455;
}
else
{
lean_object* x_689; 
x_689 = lean_ctor_get(x_490, 0);
lean_inc(x_689);
lean_dec_ref(x_490);
x_452 = x_689;
goto block_455;
}
}
}
else
{
lean_object* x_690; uint8_t x_691; 
lean_dec_ref(x_496);
lean_dec(x_490);
x_690 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__25));
lean_inc(x_468);
x_691 = l_Lean_Syntax_isOfKind(x_468, x_690);
if (x_691 == 0)
{
lean_dec_ref(x_491);
lean_dec(x_468);
goto block_464;
}
else
{
lean_object* x_692; lean_object* x_693; lean_object* x_694; uint8_t x_695; 
x_692 = lean_unsigned_to_nat(0u);
x_693 = l_Lean_Syntax_getArg(x_468, x_692);
x_694 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__27));
x_695 = l_Lean_Syntax_isOfKind(x_693, x_694);
if (x_695 == 0)
{
lean_dec_ref(x_491);
lean_dec(x_468);
goto block_464;
}
else
{
lean_object* x_696; lean_object* x_697; lean_object* x_698; 
lean_dec_ref(x_460);
x_696 = lean_unsigned_to_nat(2u);
x_697 = l_Lean_Syntax_getArg(x_468, x_696);
lean_dec(x_468);
x_698 = l_Lean_Syntax_getOptional_x3f(x_697);
lean_dec(x_697);
if (lean_obj_tag(x_698) == 0)
{
lean_object* x_699; lean_object* x_700; 
x_699 = lean_box(0);
x_700 = lp_plugin_handleDocumentSymbol_mkLevel(x_1, x_2, x_451, x_4, x_491, x_699);
return x_700;
}
else
{
lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; 
x_701 = lean_ctor_get(x_698, 0);
lean_inc(x_701);
if (lean_is_exclusive(x_698)) {
 lean_ctor_release(x_698, 0);
 x_702 = x_698;
} else {
 lean_dec_ref(x_698);
 x_702 = lean_box(0);
}
if (lean_is_scalar(x_702)) {
 x_703 = lean_alloc_ctor(1, 1, 0);
} else {
 x_703 = x_702;
}
lean_ctor_set(x_703, 0, x_701);
x_704 = lp_plugin_handleDocumentSymbol_mkLevel(x_1, x_2, x_451, x_4, x_491, x_703);
return x_704;
}
}
}
}
}
else
{
lean_object* x_705; uint8_t x_706; 
lean_dec_ref(x_496);
lean_dec(x_490);
x_705 = ((lean_object*)(lp_plugin_handleDocumentSymbol_toDocumentSymbols___closed__29));
lean_inc(x_468);
x_706 = l_Lean_Syntax_isOfKind(x_468, x_705);
if (x_706 == 0)
{
lean_dec_ref(x_491);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
else
{
lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; 
lean_dec_ref(x_460);
x_707 = lean_unsigned_to_nat(1u);
x_708 = l_Lean_Syntax_getArg(x_468, x_707);
lean_dec(x_468);
if (lean_is_scalar(x_466)) {
 x_709 = lean_alloc_ctor(1, 1, 0);
} else {
 x_709 = x_466;
 lean_ctor_set_tag(x_709, 1);
}
lean_ctor_set(x_709, 0, x_708);
x_710 = lp_plugin_handleDocumentSymbol_mkLevel(x_1, x_2, x_451, x_4, x_491, x_709);
return x_710;
}
}
}
}
}
}
else
{
lean_dec_ref(x_494);
lean_dec_ref(x_493);
lean_dec_ref(x_492);
lean_dec_ref(x_467);
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
}
else
{
lean_dec_ref(x_493);
lean_dec(x_494);
lean_dec_ref(x_492);
lean_dec_ref(x_467);
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
}
else
{
lean_dec_ref(x_492);
lean_dec(x_493);
lean_dec_ref(x_467);
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
}
else
{
lean_dec(x_492);
lean_dec_ref(x_467);
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_466);
goto block_464;
}
}
else
{
lean_dec_ref(x_491);
lean_dec(x_490);
lean_dec(x_468);
lean_dec(x_467);
lean_dec(x_466);
goto block_464;
}
}
}
else
{
lean_object* x_714; lean_object* x_715; 
lean_dec_ref(x_459);
x_714 = l_Lean_PersistentArray_toList___redArg(x_460);
lean_dec_ref(x_460);
x_715 = l_List_appendTR___redArg(x_714, x_451);
x_3 = x_715;
goto _start;
}
block_464:
{
lean_object* x_461; lean_object* x_462; 
x_461 = l_Lean_PersistentArray_toList___redArg(x_460);
lean_dec_ref(x_460);
x_462 = l_List_appendTR___redArg(x_461, x_451);
x_3 = x_462;
goto _start;
}
}
default: 
{
lean_dec_ref(x_450);
x_3 = x_451;
goto _start;
}
}
block_455:
{
lean_object* x_453; lean_object* x_454; 
x_453 = lean_ctor_get(x_452, 1);
lean_inc(x_453);
lean_dec_ref(x_452);
x_454 = lean_apply_3(x_4, x_453, x_451, x_2);
return x_454;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_33; uint8_t x_34; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
lean_ctor_set(x_1, 1, x_7);
x_33 = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___closed__2));
x_34 = lean_name_eq(x_6, x_33);
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; 
x_35 = 1;
x_36 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_6, x_35);
x_24 = x_36;
goto block_32;
}
else
{
lean_object* x_37; 
lean_dec(x_6);
x_37 = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0));
x_24 = x_37;
goto block_32;
}
block_32:
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_box(0);
x_26 = 2;
lean_inc_ref(x_1);
lean_inc_ref(x_2);
x_27 = l_Lean_Syntax_Range_toLspRange(x_2, x_1);
if (lean_obj_tag(x_5) == 0)
{
x_10 = x_25;
x_11 = x_26;
x_12 = x_24;
x_13 = x_27;
x_14 = x_1;
goto block_21;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_5, 0);
x_29 = 0;
x_30 = l_Lean_Syntax_getRange_x3f(x_28, x_29);
if (lean_obj_tag(x_30) == 0)
{
x_10 = x_25;
x_11 = x_26;
x_12 = x_24;
x_13 = x_27;
x_14 = x_1;
goto block_21;
}
else
{
lean_object* x_31; 
lean_dec_ref(x_1);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec_ref(x_30);
x_10 = x_25;
x_11 = x_26;
x_12 = x_24;
x_13 = x_27;
x_14 = x_31;
goto block_21;
}
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_49; uint8_t x_50; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_7);
x_49 = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___closed__2));
x_50 = lean_name_eq(x_6, x_49);
if (x_50 == 0)
{
uint8_t x_51; lean_object* x_52; 
x_51 = 1;
x_52 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_6, x_51);
x_40 = x_52;
goto block_48;
}
else
{
lean_object* x_53; 
lean_dec(x_6);
x_53 = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___lam__0___closed__0));
x_40 = x_53;
goto block_48;
}
block_48:
{
lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_41 = lean_box(0);
x_42 = 2;
lean_inc_ref(x_39);
lean_inc_ref(x_2);
x_43 = l_Lean_Syntax_Range_toLspRange(x_2, x_39);
if (lean_obj_tag(x_5) == 0)
{
x_10 = x_41;
x_11 = x_42;
x_12 = x_40;
x_13 = x_43;
x_14 = x_39;
goto block_21;
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_5, 0);
x_45 = 0;
x_46 = l_Lean_Syntax_getRange_x3f(x_44, x_45);
if (lean_obj_tag(x_46) == 0)
{
x_10 = x_41;
x_11 = x_42;
x_12 = x_40;
x_13 = x_43;
x_14 = x_39;
goto block_21;
}
else
{
lean_object* x_47; 
lean_dec_ref(x_39);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
lean_dec_ref(x_46);
x_10 = x_41;
x_11 = x_42;
x_12 = x_40;
x_13 = x_43;
x_14 = x_47;
goto block_21;
}
}
}
}
block_21:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc_ref(x_2);
x_15 = l_Lean_Syntax_Range_toLspRange(x_2, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_9);
x_17 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_10);
lean_ctor_set(x_17, 2, x_13);
lean_ctor_set(x_17, 3, x_15);
lean_ctor_set(x_17, 4, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*5, x_11);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_array_push(x_3, x_18);
x_20 = lp_plugin_handleDocumentSymbol_toDocumentSymbols(x_2, x_19, x_8, x_4);
return x_20;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lp_plugin_handleDocumentSymbol_mkLevel___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol_mkLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_14; 
x_14 = ((lean_object*)(lp_plugin_handleDocumentSymbol_mkLevel___closed__3));
x_7 = x_14;
goto block_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = l_Lean_Syntax_getId(x_15);
x_17 = l_Lean_Name_componentsRev(x_16);
x_7 = x_17;
goto block_13;
}
block_13:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_box(0);
x_9 = lp_plugin_List_foldrTR___at___00handleDocumentSymbol_mkLevel_spec__0(x_8, x_7);
lean_inc_ref(x_1);
x_10 = lean_alloc_closure((void*)(lp_plugin_handleDocumentSymbol_mkLevel___lam__0___boxed), 9, 6);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_6);
lean_closure_set(x_10, 5, x_9);
x_11 = lean_obj_once(&lp_plugin_handleDocumentSymbol_mkLevel___closed__0, &lp_plugin_handleDocumentSymbol_mkLevel___closed__0_once, _init_lp_plugin_handleDocumentSymbol_mkLevel___closed__0);
x_12 = lp_plugin_handleDocumentSymbol_toDocumentSymbols(x_1, x_11, x_3, x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc_ref(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_plugin_handleDocumentSymbol___redArg___lam__0(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin_List_mapTR_loop___at___00handleDocumentSymbol_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Server_Snapshots_Snapshot_infoTree(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Server_Snapshots_Snapshot_infoTree(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec_ref(x_3);
x_7 = lean_ctor_get(x_1, 3);
lean_inc_ref(x_7);
lean_dec_ref(x_1);
x_8 = lean_obj_once(&lp_plugin_handleDocumentSymbol_mkLevel___closed__0, &lp_plugin_handleDocumentSymbol_mkLevel___closed__0_once, _init_lp_plugin_handleDocumentSymbol_mkLevel___closed__0);
x_9 = lean_box(0);
x_10 = lp_plugin_List_mapTR_loop___at___00handleDocumentSymbol_spec__0(x_6, x_9);
x_11 = lp_plugin_handleDocumentSymbol_toDocumentSymbols(x_7, x_8, x_10, x_2);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_plugin_handleDocumentSymbol___redArg___lam__1(x_1, x_2, x_3, x_4);
lean_dec_ref(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg(lean_object* x_1) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = l_Lean_Server_RequestM_readDoc___at___00__private_Lean_Meta_Tactic_TryThis_0__Lean_Meta_Tactic_TryThis_tryThisProvider_spec__0(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec_ref(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_5, 2);
lean_inc(x_7);
lean_dec_ref(x_5);
x_8 = ((lean_object*)(lp_plugin_handleDocumentSymbol___redArg___closed__0));
x_9 = lean_alloc_closure((void*)(lp_plugin_handleDocumentSymbol___redArg___lam__1___boxed), 5, 2);
lean_closure_set(x_9, 0, x_6);
lean_closure_set(x_9, 1, x_8);
x_10 = l_IO_AsyncList_waitAll___redArg(x_7);
x_11 = l_Lean_Server_RequestM_mapTaskCostly___redArg(x_10, x_9, x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_plugin_handleDocumentSymbol___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_4; 
x_4 = lp_plugin_handleDocumentSymbol___redArg(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin_handleDocumentSymbol___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_plugin_handleDocumentSymbol(x_1, x_2);
lean_dec_ref(x_1);
return x_4;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__6));
x_2 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7, &lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7_once, _init_lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__7);
x_3 = lean_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8, &lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8_once, _init_lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__8);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__7));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__3));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__5));
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__4);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__8);
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__9);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__14));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__15);
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__16);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__19));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__20);
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__21);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__24));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__25);
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__26);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__29));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__30);
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__31);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__35));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__36);
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__6);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
x_2 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__37);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__0));
lean_inc(x_1);
x_3 = l_Lean_Json_getObjValAs_x3f___at___00Lean_Widget_instFromJsonWidgetSource_fromJson_spec__0(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11);
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__11);
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_12; 
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_ctor_set_tag(x_3, 0);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
lean_dec_ref(x_3);
x_16 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__12));
lean_inc(x_1);
x_17 = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonClientInfo_fromJson_spec__1(x_1, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_15);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17);
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_21);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__17);
x_24 = lean_string_append(x_23, x_22);
lean_dec(x_22);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
else
{
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_26; 
lean_dec(x_15);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_17);
if (x_26 == 0)
{
lean_ctor_set_tag(x_17, 0);
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_17, 0);
lean_inc(x_27);
lean_dec(x_17);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
lean_dec_ref(x_17);
x_30 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__18));
lean_inc(x_1);
x_31 = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonSymbolInformation_fromJson_spec__0(x_1, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22);
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_35);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_31, 0);
lean_inc(x_36);
lean_dec(x_31);
x_37 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__22);
x_38 = lean_string_append(x_37, x_36);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
else
{
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_40; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_31);
if (x_40 == 0)
{
lean_ctor_set_tag(x_31, 0);
return x_31;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_31, 0);
lean_inc(x_41);
lean_dec(x_31);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_31, 0);
lean_inc(x_43);
lean_dec_ref(x_31);
x_44 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__23));
lean_inc(x_1);
x_45 = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(x_1, x_44);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
lean_dec(x_43);
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27);
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
lean_ctor_set(x_45, 0, x_49);
return x_45;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_45, 0);
lean_inc(x_50);
lean_dec(x_45);
x_51 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__27);
x_52 = lean_string_append(x_51, x_50);
lean_dec(x_50);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_52);
return x_53;
}
}
else
{
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_54; 
lean_dec(x_43);
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_45);
if (x_54 == 0)
{
lean_ctor_set_tag(x_45, 0);
return x_45;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_45, 0);
lean_inc(x_55);
lean_dec(x_45);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_45, 0);
lean_inc(x_57);
lean_dec_ref(x_45);
x_58 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__28));
lean_inc(x_1);
x_59 = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(x_1, x_58);
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_60; 
lean_dec(x_57);
lean_dec(x_43);
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32);
x_63 = lean_string_append(x_62, x_61);
lean_dec(x_61);
lean_ctor_set(x_59, 0, x_63);
return x_59;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_64 = lean_ctor_get(x_59, 0);
lean_inc(x_64);
lean_dec(x_59);
x_65 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__32);
x_66 = lean_string_append(x_65, x_64);
lean_dec(x_64);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
}
else
{
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_68; 
lean_dec(x_57);
lean_dec(x_43);
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_59);
if (x_68 == 0)
{
lean_ctor_set_tag(x_59, 0);
return x_59;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_59, 0);
lean_inc(x_69);
lean_dec(x_59);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_59, 0);
lean_inc(x_71);
lean_dec_ref(x_59);
x_72 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__33));
x_73 = lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(x_1, x_72);
if (lean_obj_tag(x_73) == 0)
{
uint8_t x_74; 
lean_dec(x_71);
lean_dec(x_57);
lean_dec(x_43);
lean_dec(x_29);
lean_dec(x_15);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_73, 0);
x_76 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38);
x_77 = lean_string_append(x_76, x_75);
lean_dec(x_75);
lean_ctor_set(x_73, 0, x_77);
return x_73;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_73, 0);
lean_inc(x_78);
lean_dec(x_73);
x_79 = lean_obj_once(&lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38, &lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38_once, _init_lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__38);
x_80 = lean_string_append(x_79, x_78);
lean_dec(x_78);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
else
{
if (lean_obj_tag(x_73) == 0)
{
uint8_t x_82; 
lean_dec(x_71);
lean_dec(x_57);
lean_dec(x_43);
lean_dec(x_29);
lean_dec(x_15);
x_82 = !lean_is_exclusive(x_73);
if (x_82 == 0)
{
lean_ctor_set_tag(x_73, 0);
return x_73;
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_73, 0);
lean_inc(x_83);
lean_dec(x_73);
x_84 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_84, 0, x_83);
return x_84;
}
}
else
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_73);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = lean_ctor_get(x_73, 0);
x_87 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_87, 0, x_15);
lean_ctor_set(x_87, 1, x_29);
lean_ctor_set(x_87, 2, x_57);
lean_ctor_set(x_87, 3, x_71);
lean_ctor_set(x_87, 4, x_86);
x_88 = lean_unbox(x_43);
lean_dec(x_43);
lean_ctor_set_uint8(x_87, sizeof(void*)*5, x_88);
lean_ctor_set(x_73, 0, x_87);
return x_73;
}
else
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_73, 0);
lean_inc(x_89);
lean_dec(x_73);
x_90 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_90, 0, x_15);
lean_ctor_set(x_90, 1, x_29);
lean_ctor_set(x_90, 2, x_57);
lean_ctor_set(x_90, 3, x_71);
lean_ctor_set(x_90, 4, x_89);
x_91 = lean_unbox(x_43);
lean_dec(x_43);
lean_ctor_set_uint8(x_90, sizeof(void*)*5, x_91);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_90);
return x_92;
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
LEAN_EXPORT lean_object* lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc(x_1);
x_2 = l_Lean_Json_getTag_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__1));
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__2));
x_7 = lean_string_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; 
lean_free_object(x_2);
lean_dec(x_1);
x_8 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__4));
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9, &lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9_once, _init_lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9);
x_11 = l_Lean_Json_parseCtorFields(x_1, x_6, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_free_object(x_2);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec_ref(x_11);
x_16 = lean_box(0);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_get(x_16, x_15, x_17);
lean_dec(x_15);
x_19 = lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0(x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_free_object(x_2);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_19);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_19, 0);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 0, x_24);
lean_ctor_set(x_19, 0, x_2);
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
lean_dec(x_19);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 0, x_25);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_2);
return x_26;
}
}
}
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__2));
x_29 = lean_string_dec_eq(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_1);
x_30 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__4));
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9, &lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9_once, _init_lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson___closed__9);
x_33 = l_Lean_Json_parseCtorFields(x_1, x_28, x_31, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(0, 1, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_34);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_33, 0);
lean_inc(x_37);
lean_dec_ref(x_33);
x_38 = lean_box(0);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_array_get(x_38, x_37, x_39);
lean_dec(x_37);
x_41 = lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0(x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 x_43 = x_41;
} else {
 lean_dec_ref(x_41);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 1, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_42);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_41, 0);
lean_inc(x_45);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 x_46 = x_41;
} else {
 lean_dec_ref(x_41);
 x_46 = lean_box(0);
}
x_47 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_47, 0, x_45);
if (lean_is_scalar(x_46)) {
 x_48 = lean_alloc_ctor(1, 1, 0);
} else {
 x_48 = x_46;
}
lean_ctor_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_array_uget_borrowed(x_3, x_2);
lean_inc(x_6);
x_7 = lp_plugin_instFromJsonDocumentSymbol__serverPlugin_fromJson(x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec_ref(x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec_ref(x_7);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_3, x_2, x_12);
x_14 = 1;
x_15 = lean_usize_add(x_2, x_14);
x_16 = lean_array_uset(x_13, x_2, x_11);
x_2 = x_15;
x_3 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_2; size_t x_3; size_t x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
lean_dec_ref(x_1);
x_3 = lean_array_size(x_2);
x_4 = 0;
x_5 = lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(x_3, x_4, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = ((lean_object*)(lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0));
x_7 = lean_unsigned_to_nat(80u);
x_8 = l_Lean_Json_pretty(x_1, x_7);
x_9 = lean_string_append(x_6, x_8);
lean_dec_ref(x_8);
x_10 = ((lean_object*)(lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1));
x_11 = lean_string_append(x_9, x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = ((lean_object*)(lp_plugin_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1___closed__0));
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = lp_plugin_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_plugin_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_plugin_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0_spec__0(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_2; size_t x_3; size_t x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
lean_dec_ref(x_1);
x_3 = lean_array_size(x_2);
x_4 = 0;
x_5 = lp_plugin___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2_spec__3(x_3, x_4, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = ((lean_object*)(lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__0));
x_7 = lean_unsigned_to_nat(80u);
x_8 = l_Lean_Json_pretty(x_1, x_7);
x_9 = lean_string_append(x_6, x_8);
lean_dec_ref(x_8);
x_10 = ((lean_object*)(lp_plugin_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0_spec__0_spec__1_spec__2___closed__1));
x_11 = lean_string_append(x_9, x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = lp_plugin_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0_spec__0(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__2));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__5));
x_2 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__3);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__5));
x_3 = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__6);
x_2 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__4);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_plugin_Lean_Lsp_instFromJsonDocumentSymbolAux_fromJson___at___00instFromJsonDocumentSymbol__serverPlugin_fromJson_spec__0___closed__10));
x_2 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__7);
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = ((lean_object*)(lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__0));
x_3 = lp_plugin_Lean_Json_getObjValAs_x3f___at___00instFromJsonDocumentSymbolResult__serverPlugin_fromJson_spec__0(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8);
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_obj_once(&lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8, &lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8_once, _init_lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson___closed__8);
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_ctor_set_tag(x_3, 0);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
return x_3;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_5; 
x_5 = lp_plugin_handleDocumentSymbol___redArg(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_plugin___private_ServerPlugin_0__initFn___lam__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_(x_1, x_2, x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_2);
if (x_25 == 0)
{
return x_2;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec_ref(x_2);
x_29 = lean_ctor_get(x_28, 0);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 1);
lean_inc_ref(x_30);
lean_dec(x_28);
x_31 = l_Lean_Json_parse(x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__2));
x_35 = lean_string_append(x_34, x_1);
x_36 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1));
x_37 = lean_string_append(x_35, x_36);
x_38 = lean_string_append(x_37, x_33);
lean_dec(x_33);
x_39 = l_Lean_Server_RequestError_internalError(x_38);
lean_ctor_set(x_31, 0, x_39);
return x_31;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_ctor_get(x_31, 0);
lean_inc(x_40);
lean_dec(x_31);
x_41 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__2));
x_42 = lean_string_append(x_41, x_1);
x_43 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1));
x_44 = lean_string_append(x_42, x_43);
x_45 = lean_string_append(x_44, x_40);
lean_dec(x_40);
x_46 = l_Lean_Server_RequestError_internalError(x_45);
x_47 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
else
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_31, 0);
lean_inc(x_48);
lean_dec_ref(x_31);
x_3 = x_48;
goto block_24;
}
}
else
{
lean_object* x_49; 
lean_inc_ref(x_29);
lean_dec(x_28);
x_49 = lean_ctor_get(x_29, 0);
lean_inc(x_49);
lean_dec_ref(x_29);
x_3 = x_49;
goto block_24;
}
}
block_24:
{
lean_object* x_4; 
x_4 = lp_plugin_instFromJsonDocumentSymbolResult__serverPlugin_fromJson(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__0));
x_8 = lean_string_append(x_7, x_1);
x_9 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1));
x_10 = lean_string_append(x_8, x_9);
x_11 = lean_string_append(x_10, x_6);
lean_dec(x_6);
x_12 = l_Lean_Server_RequestError_internalError(x_11);
lean_ctor_set(x_4, 0, x_12);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__0));
x_15 = lean_string_append(x_14, x_1);
x_16 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___closed__1));
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_13);
lean_dec(x_13);
x_19 = l_Lean_Server_RequestError_internalError(x_18);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_4);
if (x_21 == 0)
{
return x_4;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_4, 0);
lean_inc(x_22);
lean_dec(x_4);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin_Array_toJson___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__1(lean_object* x_1) {
_start:
{
size_t x_2; size_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_array_size(x_1);
x_3 = 0;
x_4 = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonDocumentSymbolAux_toJson___at___00Lean_Lsp_instToJsonDocumentSymbol_go_spec__0_spec__0_spec__1_spec__2(x_2, x_3, x_1);
x_5 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lp_plugin_Array_toJson___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__1(x_7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_Lean_Json_compress(x_8);
x_11 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_1);
lean_ctor_set(x_2, 0, x_11);
return x_2;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lp_plugin_Array_toJson___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__1(x_12);
lean_inc(x_13);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_Json_compress(x_13);
x_16 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*2, x_1);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
x_4 = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc(x_1);
x_2 = l_Lean_Lsp_instFromJsonDocumentSymbolParams_fromJson(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = 3;
x_6 = ((lean_object*)(lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0));
x_7 = l_Lean_Json_compress(x_1);
x_8 = lean_string_append(x_6, x_7);
lean_dec_ref(x_7);
x_9 = ((lean_object*)(lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1));
x_10 = lean_string_append(x_8, x_9);
x_11 = lean_string_append(x_10, x_4);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_5);
lean_ctor_set(x_2, 0, x_12);
return x_2;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = 3;
x_15 = ((lean_object*)(lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__0));
x_16 = l_Lean_Json_compress(x_1);
x_17 = lean_string_append(x_15, x_16);
lean_dec_ref(x_16);
x_18 = ((lean_object*)(lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1___closed__1));
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_string_append(x_19, x_13);
lean_dec(x_13);
x_21 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_14);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_2);
if (x_23 == 0)
{
return x_2;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* x_1) {
_start:
{
lean_object* x_3; 
x_3 = lp_plugin_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0_spec__1(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_ctor_set_tag(x_3, 1);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_ctor_set_tag(x_3, 0);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_8; 
lean_inc_ref(x_6);
lean_inc(x_5);
x_8 = lean_apply_3(x_1, x_5, x_6, lean_box(0));
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec_ref(x_8);
x_10 = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec_ref(x_10);
x_12 = l_Lean_Server_ServerTask_mapCheap___redArg(x_2, x_9);
x_13 = lean_apply_4(x_3, x_11, x_12, x_6, lean_box(0));
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_Server_ServerTask_mapCheap___redArg(x_4, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = l_Lean_Server_ServerTask_mapCheap___redArg(x_4, x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec_ref(x_4);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_10, 0);
lean_inc(x_24);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
}
else
{
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2(x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_initializing();
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_unbox(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec_ref(x_2);
x_8 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0));
x_9 = lean_string_append(x_8, x_1);
lean_dec_ref(x_1);
x_10 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1));
x_11 = lean_string_append(x_9, x_10);
x_12 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_12);
return x_4;
}
else
{
lean_object* x_13; uint8_t x_14; 
lean_free_object(x_4);
x_13 = l_Lean_Server_lookupLspRequestHandler(x_1);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec_ref(x_15);
x_17 = l_Lean_Server_requestHandlers;
x_18 = lean_st_ref_take(x_17);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc_ref(x_1);
x_21 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed), 2, 1);
lean_closure_set(x_21, 0, x_1);
x_22 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed), 2, 1);
lean_closure_set(x_22, 0, x_6);
x_23 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed), 7, 4);
lean_closure_set(x_23, 0, x_20);
lean_closure_set(x_23, 1, x_21);
lean_closure_set(x_23, 2, x_2);
lean_closure_set(x_23, 3, x_22);
lean_ctor_set(x_16, 1, x_23);
x_24 = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_RequestHandling_1370296685____hygCtx___hyg_2__spec__0_spec__3___redArg(x_18, x_1, x_16);
x_25 = lean_st_ref_set(x_17, x_24);
lean_ctor_set(x_13, 0, x_25);
return x_13;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
lean_inc_ref(x_1);
x_28 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed), 2, 1);
lean_closure_set(x_28, 0, x_1);
x_29 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed), 2, 1);
lean_closure_set(x_29, 0, x_6);
x_30 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed), 7, 4);
lean_closure_set(x_30, 0, x_27);
lean_closure_set(x_30, 1, x_28);
lean_closure_set(x_30, 2, x_2);
lean_closure_set(x_30, 3, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_RequestHandling_1370296685____hygCtx___hyg_2__spec__0_spec__3___redArg(x_18, x_1, x_31);
x_33 = lean_st_ref_set(x_17, x_32);
lean_ctor_set(x_13, 0, x_33);
return x_13;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec_ref(x_2);
x_34 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0));
x_35 = lean_string_append(x_34, x_1);
lean_dec_ref(x_1);
x_36 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2));
x_37 = lean_string_append(x_35, x_36);
x_38 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_38);
return x_13;
}
}
else
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_13, 0);
lean_inc(x_39);
lean_dec(x_13);
if (lean_obj_tag(x_39) == 1)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec_ref(x_39);
x_41 = l_Lean_Server_requestHandlers;
x_42 = lean_st_ref_take(x_41);
x_43 = lean_ctor_get(x_40, 0);
lean_inc_ref(x_43);
x_44 = lean_ctor_get(x_40, 1);
lean_inc_ref(x_44);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_45 = x_40;
} else {
 lean_dec_ref(x_40);
 x_45 = lean_box(0);
}
lean_inc_ref(x_1);
x_46 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed), 2, 1);
lean_closure_set(x_46, 0, x_1);
x_47 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed), 2, 1);
lean_closure_set(x_47, 0, x_6);
x_48 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed), 7, 4);
lean_closure_set(x_48, 0, x_44);
lean_closure_set(x_48, 1, x_46);
lean_closure_set(x_48, 2, x_2);
lean_closure_set(x_48, 3, x_47);
if (lean_is_scalar(x_45)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_45;
}
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_RequestHandling_1370296685____hygCtx___hyg_2__spec__0_spec__3___redArg(x_42, x_1, x_49);
x_51 = lean_st_ref_set(x_41, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_6);
lean_dec_ref(x_2);
x_53 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0));
x_54 = lean_string_append(x_53, x_1);
lean_dec_ref(x_1);
x_55 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2));
x_56 = lean_string_append(x_54, x_55);
x_57 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
}
}
}
else
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_4, 0);
lean_inc(x_59);
lean_dec(x_4);
x_60 = lean_unbox(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_59);
lean_dec_ref(x_2);
x_61 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0));
x_62 = lean_string_append(x_61, x_1);
lean_dec_ref(x_1);
x_63 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__1));
x_64 = lean_string_append(x_62, x_63);
x_65 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_65);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = l_Lean_Server_lookupLspRequestHandler(x_1);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_obj_tag(x_68) == 1)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
lean_dec_ref(x_68);
x_71 = l_Lean_Server_requestHandlers;
x_72 = lean_st_ref_take(x_71);
x_73 = lean_ctor_get(x_70, 0);
lean_inc_ref(x_73);
x_74 = lean_ctor_get(x_70, 1);
lean_inc_ref(x_74);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_75 = x_70;
} else {
 lean_dec_ref(x_70);
 x_75 = lean_box(0);
}
lean_inc_ref(x_1);
x_76 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__0___boxed), 2, 1);
lean_closure_set(x_76, 0, x_1);
x_77 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__1___boxed), 2, 1);
lean_closure_set(x_77, 0, x_59);
x_78 = lean_alloc_closure((void*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___lam__2___boxed), 7, 4);
lean_closure_set(x_78, 0, x_74);
lean_closure_set(x_78, 1, x_76);
lean_closure_set(x_78, 2, x_2);
lean_closure_set(x_78, 3, x_77);
if (lean_is_scalar(x_75)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_75;
}
lean_ctor_set(x_79, 0, x_73);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_RequestHandling_1370296685____hygCtx___hyg_2__spec__0_spec__3___redArg(x_72, x_1, x_79);
x_81 = lean_st_ref_set(x_71, x_80);
if (lean_is_scalar(x_69)) {
 x_82 = lean_alloc_ctor(0, 1, 0);
} else {
 x_82 = x_69;
}
lean_ctor_set(x_82, 0, x_81);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_68);
lean_dec(x_59);
lean_dec_ref(x_2);
x_83 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__0));
x_84 = lean_string_append(x_83, x_1);
lean_dec_ref(x_1);
x_85 = ((lean_object*)(lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___closed__2));
x_86 = lean_string_append(x_84, x_85);
x_87 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_87, 0, x_86);
if (lean_is_scalar(x_69)) {
 x_88 = lean_alloc_ctor(1, 1, 0);
} else {
 x_88 = x_69;
 lean_ctor_set_tag(x_88, 1);
}
lean_ctor_set(x_88, 0, x_87);
return x_88;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_() {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = ((lean_object*)(lp_plugin___private_ServerPlugin_0__initFn___closed__0_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_));
x_3 = ((lean_object*)(lp_plugin___private_ServerPlugin_0__initFn___closed__1_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_));
x_4 = lp_plugin_Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_();
return x_2;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_4; 
x_4 = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___redArg(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_plugin_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_chainLspRequestHandler___at___00__private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2__spec__0_spec__0(x_1, x_2);
lean_dec_ref(x_2);
return x_4;
}
}
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
res = initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
if (builtin) {res = lp_plugin___private_ServerPlugin_0__initFn_00___x40_ServerPlugin_3779723506____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
