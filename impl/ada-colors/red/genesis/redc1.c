#include "paleo.h"
#include <math.h>
typedef rstr *P237;
typedef struct R239 R239;
typedef struct R239 *P238;
struct R239 {  rt_int kind; rt_int line; rt_int ival; P237 s;  };
typedef struct A241 A241;
struct A241 { rt_int lo, hi; P238 *p; };
typedef A241 *P240;
typedef struct R243 R243;
typedef struct R243 *P242;
struct R243 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P237 name; P237 tag; P242 a; P242 b; P242 c; P242 d; P242 next;  };
typedef struct R245 R245;
typedef struct R245 *P244;
struct R245 {  P237 lo; P237 hi; P237 slen; rt_int mlo; rt_int mhi; int hasm;  };
typedef struct R247 R247;
typedef struct R247 *P246;
typedef struct R249 R249;
typedef struct R249 *P248;
struct R249 {  P237 name; P246 t; P242 st; P248 next;  };
struct R247 {  rt_int kind; P237 name; P242 lits; P246 elem; P246 idx; P244 elemcons; P242 elemst; P248 fields; P246 target; P242 decl; P237 cname; int forward; int defined; int helpers; P246 next;  };
typedef struct R251 R251;
typedef struct R251 *P250;
struct R251 {  P237 name; rt_int mode; P246 t; P244 c; P250 next;  };
typedef struct R253 R253;
typedef struct R253 *P252;
struct R253 {  rt_int kind; P237 name; P246 t; P244 c; P237 access; P237 cname; int ro_flag; rt_int mvalue; int hasmv; P242 st; P242 decl; P250 params; P246 result; rt_int depth; P252 chain; P252 stack;  };
typedef struct R255 R255;
typedef struct R255 *P254;
struct R255 {  P237 s; P254 next;  };
typedef struct R257 R257;
typedef struct R257 *P256;
struct R257 {  P254 head; P254 tail;  };
typedef struct A259 A259;
struct A259 { rt_int lo, hi; P252 *p; };
typedef A259 *P258;
typedef struct R261 R261;
typedef struct R261 *P260;
struct R261 {  P237 match; P237 label; rt_int depth; P260 next;  };
static void as_R261(R261 *d, R261 s);
static R261 cp_R261(R261 s);
static int eq_R261(R261 a, R261 b);
static void as_A259(A259 *d, A259 s);
static A259 cp_A259(A259 s);
static int eq_A259(A259 a, A259 b);
static void as_R257(R257 *d, R257 s);
static R257 cp_R257(R257 s);
static int eq_R257(R257 a, R257 b);
static void as_R255(R255 *d, R255 s);
static R255 cp_R255(R255 s);
static int eq_R255(R255 a, R255 b);
static void as_R253(R253 *d, R253 s);
static R253 cp_R253(R253 s);
static int eq_R253(R253 a, R253 b);
static void as_R251(R251 *d, R251 s);
static R251 cp_R251(R251 s);
static int eq_R251(R251 a, R251 b);
static void as_R249(R249 *d, R249 s);
static R249 cp_R249(R249 s);
static int eq_R249(R249 a, R249 b);
static void as_R247(R247 *d, R247 s);
static R247 cp_R247(R247 s);
static int eq_R247(R247 a, R247 b);
static void as_R245(R245 *d, R245 s);
static R245 cp_R245(R245 s);
static int eq_R245(R245 a, R245 b);
static void as_R243(R243 *d, R243 s);
static R243 cp_R243(R243 s);
static int eq_R243(R243 a, R243 b);
static void as_A241(A241 *d, A241 s);
static A241 cp_A241(A241 s);
static int eq_A241(A241 a, A241 b);
static void as_R239(R239 *d, R239 s);
static R239 cp_R239(R239 s);
static int eq_R239(R239 a, R239 b);
static P237 f_mk_2(rstr *s_294);
static rstr f_chs_3(int c_298);
static rstr f_itos_4(rt_int n_300);
static int f_is_letter_5(int c_301);
static int f_is_digit_6(int c_302);
static int f_upper_7(int c_303);
static rstr f_lower_s_8(rstr *s_305);
static rstr f_q_9(void);
static rstr f_new_name_10(rstr *base_312);
static void f_fail_11(rt_int line_313, rstr *msg_314);
static P256 f_new_buffer_12(void);
static void f_put_13(P256 b_317, rstr *s_318);
static void f_emit_14(rstr *s_321);
static void f_print_buffer_15(P256 b_322);
static void f_splice_16(P256 a_324, P256 b_325);
static int f_is_reserved_17(rstr *w_326);
static int f_is_word_op_18(rstr *w_328);
static void f_add_token_19(rt_int kind_329, rstr *s_330, rt_int ival_331);
static void f_lex_line_20(rstr *line_334);
static void f_read_source_21(void);
static P242 f_nn_22(rt_int kind_351, rt_int line_352);
static void f_append_23(P242 *head_355, P242 *tail_356, P242 x_357);
static rt_int f_list_len_24(P242 l_358);
static rt_int f_cur_line_25(void);
static int f_at_kw_26(rstr *w_361);
static int f_at_op_27(rstr *w_362);
static int f_at_kind_28(rt_int k_363);
static rt_int f_kind_at_29(rt_int k_364);
static P237 f_text_at_30(rt_int k_365);
static void f_perror_31(rstr *msg_366);
static int f_accept_kw_32(rstr *w_367);
static int f_accept_op_33(rstr *w_368);
static void f_expect_kw_34(rstr *w_369);
static void f_expect_op_35(rstr *w_370);
static P237 f_expect_id_36(void);
static P242 f_name_node_37(void);
static P242 f_id_list_38(void);
static P242 f_p_subtype_39(void);
static P242 f_actual_params_40(void);
static int f_is_type_word_41(rstr *w_391);
static P242 f_actual_tt_42(void);
static P242 f_binop_43(P237 op_395, P242 l_396, P242 r_397, rt_int line_398);
static P242 f_expr_44(void);
static P242 f_expr_and_45(void);
static P242 f_expr_not_46(void);
static int f_is_rel_47(rstr *s_406);
static P242 f_expr_rel_48(void);
static P242 f_expr_add_49(void);
static P242 f_expr_mul_50(void);
static P242 f_expr_pow_51(void);
static P242 f_expr_prefix_52(void);
static P242 f_postfix_53(void);
static P242 f_primary_54(void);
static P242 f_constructor_item_55(void);
static int f_at_body_end_56(void);
static P242 f_body_57(void);
static P242 f_body_element_58(void);
static P242 f_declaration_59(void);
static P242 f_object_decl_60(void);
static P242 f_abbrev_decl_61(void);
static P242 f_type_decl_62(void);
static rt_int f_mode_of_63(rstr *w_470);
static P242 f_formal_params_64(void);
static int f_imports_list_65(P242 owner_479);
static int f_is_definable_66(rstr *w_485);
static P237 f_definable_name_67(void);
static P242 f_subprogram_decl_68(void);
static P242 f_capsule_decl_69(void);
static int f_is_compound_kw_70(rstr *w_497);
static P242 f_statement_71(void);
static P242 f_unlabeled_statement_72(void);
static P242 f_arm_73(P242 cond_505, P242 b_506, rt_int line_507);
static P242 f_if_stmt_74(void);
static P242 f_case_stmt_75(void);
static P242 f_repeat_stmt_76(void);
static P242 f_guard_stmt_77(void);
static P242 f_program_78(void);
static rt_int f_hash_79(rstr *s_527);
static P252 f_lookup_80(rstr *name_533);
static void f_define_81(P252 y_535, rt_int line_536);
static void f_open_scope_82(void);
static void f_close_scope_83(void);
static P252 f_new_sym_84(rt_int kind_539, P237 name_540);
static P246 f_new_typ_85(rt_int kind_543);
static P244 f_new_cons_86(void);
static int f_same_lits_87(P242 a_548, P242 b_549);
static int f_same_88(P246 a_552, P246 b_553);
static rstr f_kind_name_89(P246 t_556);
static void f_check_type_90(P246 got_558, P246 want_559, rt_int line_560);
static rstr f_ctype_91(P246 t_561);
static rstr f_field_decls_92(P246 t_563);
static void f_declare_ctype_93(P246 t_566);
static void f_init_ascii_94(void);
static rt_int f_lit_index_95(P242 lits_578, rstr *name_579);
static P246 f_resolve_subtype_96(P242 st_582, P244 *c_583);
static void f_init_storage_97(rstr *lval_598, P246 t_599, P244 c_600);
static rt_int f_manifest_98(P242 e_605, int *ok_606);
static rstr f_assign_code_99(rstr *lval_611, P246 t_612, rstr *v_613, P244 c_614);
static rstr f_copy_code_100(P246 t_615, rstr *v_616);
static rstr f_eq_code_101(P246 t_617, rstr *a_618, rstr *b_619);
static rstr f_elem_assign_102(rstr *lval_620, P246 t_621, rstr *v_622);
static int f_seen_name_103(P254 l_623, rstr *s_624);
static void f_emit_helpers_104(void);
static void f_helper_bodies_105(P246 t_632);
static void f_declare_body_106(P242 elems_640);
static void f_finish_ptr_107(P246 t_647);
static void f_declare_subprogram_108(P242 d_653);
static void f_element_109(P242 e_660);
static rstr f_storage_110(rstr *name_664, P246 t_665);
static void f_var_decl_111(P242 d_668);
static void f_const_decl_112(P242 d_675);
static void f_subprogram_113(P242 d_683);
static void f_body_elements_114(P242 elems_698);
static void f_gen_body_115(P242 elems_700);
static void f_pop_frames_116(rt_int upto_701);
static void f_gen_statement_117(P242 s_703);
static void f_st_assign_118(P242 s_708);
static void f_st_call_119(P242 s_715);
static void f_st_if_120(P242 s_719);
static void f_st_case_121(P242 s_724);
static void f_st_repeat_122(P242 s_736);
static void f_st_exit_123(P242 s_745);
static void f_st_return_124(P242 s_747);
static rstr f_exc_id_125(rstr *name_750, rt_int line_751);
static void f_st_guard_126(P242 s_753);
static void f_st_alloc_127(P242 s_762);
static rstr f_deref_128(rstr *base_779, P246 t_780);
static int f_is_lvalue_129(P242 e_781);
static void f_lvalue_130(P242 e_783, P237 *code_784, P246 *t_785, P244 *c_786, int *ro_787);
static void f_select_on_131(rstr *base_792, P246 bt_793, P242 e_794, int *ro_795, P237 *code_796, P246 *t_797, P244 *c_798);
static void f_index_on_132(rstr *base_801, P246 bt_802, P242 e_803, int *ro_804, int lv_805, P237 *code_806, P246 *t_807, P244 *c_808);
static rstr f_gexpr_133(P242 e_815, P246 want_816, P246 *t_817);
static P242 f_wrap_apply_134(P242 e_831);
static rstr f_c_string_135(rstr *s_833);
static P246 f_enum_type_of_136(rstr *lit_845, rt_int line_846);
static rstr f_attribute_137(P242 e_849, P246 *t_850);
static rstr f_gbinop_138(P242 e_856, P246 want_857, P246 *t_858);
static rstr f_constructor_139(P242 e_875, P246 want_876, P246 *t_877);
static rstr f_gcall_140(P242 e_884, int is_stmt_885, P246 *t_886);
static rstr f_builtin_141(rstr *name_901, P242 tt_902, P242 args_903, rt_int line_904, int is_stmt_905, P246 *t_906);
static void f_translate_142(P242 cap_920);
static void f_print_program_143(void);
static int ex_compile_error_1;
static rt_int g_k_eof_144;
static rt_int g_k_id_145;
static rt_int g_k_kw_146;
static rt_int g_k_op_147;
static rt_int g_k_int_148;
static rt_int g_k_float_149;
static rt_int g_k_enum_150;
static rt_int g_k_str_151;
static rt_int g_n_int_152;
static rt_int g_n_float_153;
static rt_int g_n_str_154;
static rt_int g_n_enum_155;
static rt_int g_n_bool_156;
static rt_int g_n_nil_157;
static rt_int g_n_name_158;
static rt_int g_n_unop_159;
static rt_int g_n_binop_160;
static rt_int g_n_apply_161;
static rt_int g_n_select_162;
static rt_int g_n_ttapply_163;
static rt_int g_n_resolve_164;
static rt_int g_n_cons_165;
static rt_int g_n_citem_166;
static rt_int g_n_range_167;
static rt_int g_n_paren_168;
static rt_int g_n_assign_169;
static rt_int g_n_call_170;
static rt_int g_n_if_171;
static rt_int g_n_case_172;
static rt_int g_n_repeat_173;
static rt_int g_n_begin_174;
static rt_int g_n_guard_175;
static rt_int g_n_exit_176;
static rt_int g_n_return_177;
static rt_int g_n_goto_178;
static rt_int g_n_raise_179;
static rt_int g_n_reraise_180;
static rt_int g_n_alloc_181;
static rt_int g_n_assert_182;
static rt_int g_n_create_183;
static rt_int g_n_wait_184;
static rt_int g_n_region_185;
static rt_int g_n_var_186;
static rt_int g_n_const_187;
static rt_int g_n_abbrev_188;
static rt_int g_n_newtype_189;
static rt_int g_n_ptrtype_190;
static rt_int g_n_proc_191;
static rt_int g_n_func_192;
static rt_int g_n_capsule_193;
static rt_int g_n_expose_194;
static rt_int g_n_exception_195;
static rt_int g_n_task_196;
static rt_int g_n_generic_197;
static rt_int g_n_param_198;
static rt_int g_n_arm_199;
static rt_int g_n_label_200;
static rt_int g_n_handler_201;
static rt_int g_n_comp_202;
static rt_int g_s_int_203;
static rt_int g_s_float_204;
static rt_int g_s_enum_205;
static rt_int g_s_string_206;
static rt_int g_s_array_207;
static rt_int g_s_record_208;
static rt_int g_s_union_209;
static rt_int g_s_set_210;
static rt_int g_s_mailbox_211;
static rt_int g_s_file_212;
static rt_int g_s_name_213;
static rt_int g_s_of_214;
static rt_int g_m_const_215;
static rt_int g_m_var_216;
static rt_int g_m_out_217;
static rt_int g_m_readonly_218;
static rt_int g_t_int_219;
static rt_int g_t_bool_220;
static rt_int g_t_float_221;
static rt_int g_t_enum_222;
static rt_int g_t_string_223;
static rt_int g_t_array_224;
static rt_int g_t_record_225;
static rt_int g_t_ptr_226;
static rt_int g_t_void_227;
static rt_int g_t_file_228;
static rt_int g_t_nil_229;
static rt_int g_y_var_230;
static rt_int g_y_const_231;
static rt_int g_y_func_232;
static rt_int g_y_proc_233;
static rt_int g_y_type_234;
static rt_int g_y_abbrev_235;
static rt_int g_y_exc_236;
static P240 g_toks_262;
static rt_int g_ntoks_263;
static rt_int g_tpos_264;
static rt_int g_src_line_265;
static P258 g_table_266;
static rt_int g_depth_267;
static P252 g_scope_stack_268;
static P246 g_all_types_269;
static rt_int g_serial_270;
static P256 g_out_types_271;
static P256 g_out_helpers_272;
static P256 g_out_protos_273;
static P256 g_out_globals_274;
static P256 g_out_funcs_275;
static P256 g_out_init_276;
static P256 g_out_excs_277;
static P256 g_code_278;
static P256 g_fields_buf_279;
static int g_in_func_280;
static P252 g_func_sym_281;
static P260 g_exits_282;
static rt_int g_frames_283;
static P254 g_handlers_284;
static P246 g_ty_int_285;
static P246 g_ty_bool_286;
static P246 g_ty_float_287;
static P246 g_ty_ascii_288;
static P246 g_ty_string_289;
static P246 g_ty_void_290;
static P246 g_ty_file_291;
static P246 g_ty_nil_292;
static P244 g_no_cons_293;
static P237 f_mk_2(rstr *s_294) {
  struct f_mk_2fr { int dummy;
 rstr *s_294;
 P237 result_;
 P237 t_295;
  } *F = rt_alloc(sizeof *F);
F->s_294 = s_294;
F->t_295 = NULL;
{ rstr *cell296 = rt_alloc(sizeof(rstr));
rt_int pv297 = ((*F->s_294)).len;
(*cell296) = rt_str_new(pv297);
rt_str_assign(&(*cell296), (*F->s_294));
F->t_295 = cell296;
}
F->result_ = F->t_295;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_3(int c_298) {
  struct f_chs_3fr { int dummy;
 int c_298;
 rstr result_;
 rstr r_299;
  } *F = rt_alloc(sizeof *F);
F->c_298 = c_298;
F->r_299 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_299, ((rt_int)1LL))) = F->c_298;
F->result_ = F->r_299;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_itos_4(rt_int n_300) {
  struct f_itos_4fr { int dummy;
 rt_int n_300;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->n_300 = n_300;
F->result_ = rt_str_of_int(F->n_300);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_letter_5(int c_301) {
  struct f_is_letter_5fr { int dummy;
 int c_301;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->c_301 = c_301;
F->result_ = (((65 <= F->c_301) && (F->c_301 <= 90)) || ((97 <= F->c_301) && (F->c_301 <= 122)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_digit_6(int c_302) {
  struct f_is_digit_6fr { int dummy;
 int c_302;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->c_302 = c_302;
F->result_ = ((48 <= F->c_302) && (F->c_302 <= 57));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_upper_7(int c_303) {
  struct f_upper_7fr { int dummy;
 int c_303;
 int result_;
 rstr letters_304;
  } *F = rt_alloc(sizeof *F);
F->c_303 = c_303;
F->letters_304 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_303) && (F->c_303 <= 122))) {
F->result_ = rt_str_get(F->letters_304, rt_add(rt_sub(((rt_int)(F->c_303) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
goto ret_;
}
F->result_ = F->c_303;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lower_s_8(rstr *s_305) {
  struct f_lower_s_8fr { int dummy;
 rstr *s_305;
 rstr result_;
 rstr letters_306;
 rstr r_307;
 rt_int i_308;
  } *F = rt_alloc(sizeof *F);
F->s_305 = s_305;
F->letters_306 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_307 = rt_str_new(((*F->s_305)).len);
rt_str_assign(&F->r_307, (*F->s_305));
{ rt_int lo309 = ((rt_int)1LL), hi310 = ((*F->s_305)).len;
for (rt_int it311 = lo309; it311 <= hi310; it311++) {
F->i_308 = it311;
if (((65 <= rt_str_get(F->r_307, F->i_308)) && (rt_str_get(F->r_307, F->i_308) <= 90))) {
(*rt_str_at(&F->r_307, F->i_308)) = rt_str_get(F->letters_306, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_307, F->i_308)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_307;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_q_9(void) {
  struct f_q_9fr { int dummy;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->result_ = f_chs_3(34);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_new_name_10(rstr *base_312) {
  struct f_new_name_10fr { int dummy;
 rstr *base_312;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->base_312 = base_312;
g_serial_270 = rt_add(g_serial_270, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_312), f_itos_4(g_serial_270));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_11(rt_int line_313, rstr *msg_314) {
  struct f_fail_11fr { int dummy;
 rt_int line_313;
 rstr *msg_314;
  } *F = rt_alloc(sizeof *F);
F->line_313 = line_313;
F->msg_314 = msg_314;
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_4(F->line_313)), rt_str(": ", 2)), (*F->msg_314)));
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P256 f_new_buffer_12(void) {
  struct f_new_buffer_12fr { int dummy;
 P256 result_;
 P256 b_315;
  } *F = rt_alloc(sizeof *F);
F->b_315 = NULL;
{ R257 *cell316 = rt_alloc(sizeof(R257));
(*cell316).head = NULL;
(*cell316).tail = NULL;
F->b_315 = cell316;
}
F->result_ = F->b_315;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_13(P256 b_317, rstr *s_318) {
  struct f_put_13fr { int dummy;
 P256 b_317;
 rstr *s_318;
 P254 l_319;
  } *F = rt_alloc(sizeof *F);
F->b_317 = b_317;
F->s_318 = s_318;
F->l_319 = NULL;
{ R255 *cell320 = rt_alloc(sizeof(R255));
(*cell320).s = NULL;
(*cell320).next = NULL;
F->l_319 = cell320;
}
(*(P254)rt_nil_check(F->l_319)).s = f_mk_2(&(*F->s_318));
if (((*(P256)rt_nil_check(F->b_317)).tail == NULL)) {
(*(P256)rt_nil_check(F->b_317)).head = F->l_319;
} else {
(*(P254)rt_nil_check((*(P256)rt_nil_check(F->b_317)).tail)).next = F->l_319;
}
(*(P256)rt_nil_check(F->b_317)).tail = F->l_319;
ret_:
  return;
}

static void f_emit_14(rstr *s_321) {
  struct f_emit_14fr { int dummy;
 rstr *s_321;
  } *F = rt_alloc(sizeof *F);
F->s_321 = s_321;
f_put_13(g_code_278, &(*F->s_321));
ret_:
  return;
}

static void f_print_buffer_15(P256 b_322) {
  struct f_print_buffer_15fr { int dummy;
 P256 b_322;
 P254 l_323;
  } *F = rt_alloc(sizeof *F);
F->b_322 = b_322;
F->l_323 = NULL;
F->l_323 = (*(P256)rt_nil_check(F->b_322)).head;
while ((F->l_323 != NULL)) {
rt_putln((*(P237)rt_nil_check((*(P254)rt_nil_check(F->l_323)).s)));
F->l_323 = (*(P254)rt_nil_check(F->l_323)).next;
}
ret_:
  return;
}

static void f_splice_16(P256 a_324, P256 b_325) {
  struct f_splice_16fr { int dummy;
 P256 a_324;
 P256 b_325;
  } *F = rt_alloc(sizeof *F);
F->a_324 = a_324;
F->b_325 = b_325;
if (((*(P256)rt_nil_check(F->b_325)).head == NULL)) {
goto ret_;
}
if (((*(P256)rt_nil_check(F->a_324)).tail == NULL)) {
(*(P256)rt_nil_check(F->a_324)).head = (*(P256)rt_nil_check(F->b_325)).head;
} else {
(*(P254)rt_nil_check((*(P256)rt_nil_check(F->a_324)).tail)).next = (*(P256)rt_nil_check(F->b_325)).head;
}
(*(P256)rt_nil_check(F->a_324)).tail = (*(P256)rt_nil_check(F->b_325)).tail;
(*(P256)rt_nil_check(F->b_325)).head = NULL;
(*(P256)rt_nil_check(F->b_325)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_17(rstr *w_326) {
  struct f_is_reserved_17fr { int dummy;
 rstr *w_326;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_326 = w_326;
{ rstr sel327 = (*F->w_326);
if (0 || rt_str_eq(sel327, rt_str("ABBREV", 6)) || rt_str_eq(sel327, rt_str("ABNORMAL", 8)) || rt_str_eq(sel327, rt_str("ALL", 3)) || rt_str_eq(sel327, rt_str("ALLOC", 5)) || rt_str_eq(sel327, rt_str("ASSERT", 6)) || rt_str_eq(sel327, rt_str("BEGIN", 5)) || rt_str_eq(sel327, rt_str("BY", 2)) || rt_str_eq(sel327, rt_str("CAPSULE", 7)) || rt_str_eq(sel327, rt_str("CASE", 4)) || rt_str_eq(sel327, rt_str("CONST", 5)) || rt_str_eq(sel327, rt_str("CREATE", 6)) || rt_str_eq(sel327, rt_str("DO", 2)) || rt_str_eq(sel327, rt_str("ELSE", 4)) || rt_str_eq(sel327, rt_str("ELSEIF", 6)) || rt_str_eq(sel327, rt_str("END", 3)) || rt_str_eq(sel327, rt_str("EXCEPTION", 9)) || rt_str_eq(sel327, rt_str("EXIT", 4)) || rt_str_eq(sel327, rt_str("EXPORTS", 7)) || rt_str_eq(sel327, rt_str("EXPOSE", 6)) || rt_str_eq(sel327, rt_str("EXTERNAL", 8)) || rt_str_eq(sel327, rt_str("FOR", 3)) || rt_str_eq(sel327, rt_str("FROM", 4)) || rt_str_eq(sel327, rt_str("FUNC", 4)) || rt_str_eq(sel327, rt_str("GENERIC", 7)) || rt_str_eq(sel327, rt_str("GOTO", 4)) || rt_str_eq(sel327, rt_str("GUARD", 5)) || rt_str_eq(sel327, rt_str("IF", 2)) || rt_str_eq(sel327, rt_str("IMPORTS", 7)) || rt_str_eq(sel327, rt_str("LOCATION", 8)) || rt_str_eq(sel327, rt_str("NAMED", 5)) || rt_str_eq(sel327, rt_str("NEEDS", 5)) || rt_str_eq(sel327, rt_str("NEW", 3)) || rt_str_eq(sel327, rt_str("NONE", 4)) || rt_str_eq(sel327, rt_str("OUT", 3)) || rt_str_eq(sel327, rt_str("OF", 2)) || rt_str_eq(sel327, rt_str("PRAG", 4)) || rt_str_eq(sel327, rt_str("PROC", 4)) || rt_str_eq(sel327, rt_str("RAISE", 5)) || rt_str_eq(sel327, rt_str("READONLY", 8)) || rt_str_eq(sel327, rt_str("REVERSE", 7)) || rt_str_eq(sel327, rt_str("REGION", 6)) || rt_str_eq(sel327, rt_str("RENAMING", 8)) || rt_str_eq(sel327, rt_str("REP", 3)) || rt_str_eq(sel327, rt_str("REPEAT", 6)) || rt_str_eq(sel327, rt_str("RERAISE", 7)) || rt_str_eq(sel327, rt_str("RETURN", 6)) || rt_str_eq(sel327, rt_str("SUBTYPE", 7)) || rt_str_eq(sel327, rt_str("TASK", 4)) || rt_str_eq(sel327, rt_str("THEN", 4)) || rt_str_eq(sel327, rt_str("TO", 2)) || rt_str_eq(sel327, rt_str("TYPE", 4)) || rt_str_eq(sel327, rt_str("VAR", 3)) || rt_str_eq(sel327, rt_str("WAIT", 4)) || rt_str_eq(sel327, rt_str("WHEN", 4)) || rt_str_eq(sel327, rt_str("WHILE", 5))) {
F->result_ = 1;
goto ret_;
} else {
F->result_ = 0;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_word_op_18(rstr *w_328) {
  struct f_is_word_op_18fr { int dummy;
 rstr *w_328;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_328 = w_328;
F->result_ = ((((((rt_str_eq((*F->w_328), rt_str("DIV", 3)) || rt_str_eq((*F->w_328), rt_str("MOD", 3))) || rt_str_eq((*F->w_328), rt_str("IN", 2))) || rt_str_eq((*F->w_328), rt_str("OR", 2))) || rt_str_eq((*F->w_328), rt_str("XOR", 3))) || rt_str_eq((*F->w_328), rt_str("AND", 3))) || rt_str_eq((*F->w_328), rt_str("NOT", 3)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_add_token_19(rt_int kind_329, rstr *s_330, rt_int ival_331) {
  struct f_add_token_19fr { int dummy;
 rt_int kind_329;
 rstr *s_330;
 rt_int ival_331;
 P238 t_332;
  } *F = rt_alloc(sizeof *F);
F->kind_329 = kind_329;
F->s_330 = s_330;
F->ival_331 = ival_331;
F->t_332 = NULL;
{ R239 *cell333 = rt_alloc(sizeof(R239));
(*cell333).s = NULL;
F->t_332 = cell333;
}
(*(P238)rt_nil_check(F->t_332)).kind = F->kind_329;
(*(P238)rt_nil_check(F->t_332)).line = g_src_line_265;
(*(P238)rt_nil_check(F->t_332)).ival = F->ival_331;
(*(P238)rt_nil_check(F->t_332)).s = f_mk_2(&(*F->s_330));
g_ntoks_263 = rt_add(g_ntoks_263, ((rt_int)1LL));
(*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_ntoks_263, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo] = F->t_332;
ret_:
  return;
}

static void f_lex_line_20(rstr *line_334) {
  struct f_lex_line_20fr { int dummy;
 rstr *line_334;
 rt_int i_335;
 rt_int j_336;
 rt_int n_337;
 int c_338;
 rstr w_339;
 rt_int k_340;
 rstr w_344;
 rt_int k_345;
 rstr two_349;
  } *F = rt_alloc(sizeof *F);
F->line_334 = line_334;
F->i_335 = ((rt_int)1LL);
F->j_336 = ((rt_int)0LL);
F->n_337 = ((*F->line_334)).len;
while ((F->i_335 <= F->n_337)) {
F->c_338 = rt_str_get((*F->line_334), F->i_335);
if (((((F->c_338 == 32) || (F->c_338 == 9)) || (F->c_338 == 13)) || (F->c_338 == 12))) {
F->i_335 = rt_add(F->i_335, ((rt_int)1LL));
} else if ((F->c_338 == 37)) {
F->i_335 = rt_add(F->n_337, ((rt_int)1LL));
} else if (f_is_letter_5(F->c_338)) {
F->j_336 = F->i_335;
while (((F->j_336 <= F->n_337) && ((f_is_letter_5(rt_str_get((*F->line_334), F->j_336)) || f_is_digit_6(rt_str_get((*F->line_334), F->j_336))) || (rt_str_get((*F->line_334), F->j_336) == 95)))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
{
F->w_339 = rt_str_new(rt_sub(F->j_336, F->i_335));
rt_str_assign(&F->w_339, rt_str_slice((*F->line_334), F->i_335, rt_sub(F->j_336, ((rt_int)1LL))));
{ rt_int lo341 = ((rt_int)1LL), hi342 = (F->w_339).len;
for (rt_int it343 = lo341; it343 <= hi342; it343++) {
F->k_340 = it343;
(*rt_str_at(&F->w_339, F->k_340)) = f_upper_7(rt_str_get(F->w_339, F->k_340));
}
}
if (rt_str_eq(F->w_339, rt_str("PRAGMAT", 7))) {
while (((F->j_336 <= F->n_337) && (rt_str_get((*F->line_334), F->j_336) != 59))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
} else if (f_is_reserved_17(&F->w_339)) {
f_add_token_19(g_k_kw_146, &F->w_339, ((rt_int)0LL));
} else if (f_is_word_op_18(&F->w_339)) {
f_add_token_19(g_k_op_147, &F->w_339, ((rt_int)0LL));
} else {
f_add_token_19(g_k_id_145, &F->w_339, ((rt_int)0LL));
}
}
F->i_335 = F->j_336;
} else if (f_is_digit_6(F->c_338)) {
F->j_336 = F->i_335;
while (((F->j_336 <= F->n_337) && f_is_digit_6(rt_str_get((*F->line_334), F->j_336)))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
if ((((F->j_336 < F->n_337) && (rt_str_get((*F->line_334), F->j_336) == 46)) && f_is_digit_6(rt_str_get((*F->line_334), rt_add(F->j_336, ((rt_int)1LL)))))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
while (((F->j_336 <= F->n_337) && f_is_digit_6(rt_str_get((*F->line_334), F->j_336)))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
if (((F->j_336 <= F->n_337) && ((rt_str_get((*F->line_334), F->j_336) == 69) || (rt_str_get((*F->line_334), F->j_336) == 101)))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
if (((F->j_336 <= F->n_337) && ((rt_str_get((*F->line_334), F->j_336) == 43) || (rt_str_get((*F->line_334), F->j_336) == 45)))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
while (((F->j_336 <= F->n_337) && f_is_digit_6(rt_str_get((*F->line_334), F->j_336)))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
}
f_add_token_19(g_k_float_149, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_334), F->i_335, rt_sub(F->j_336, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_19(g_k_int_148, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_334), F->i_335, rt_sub(F->j_336, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_334), F->i_335, rt_sub(F->j_336, ((rt_int)1LL)))));
}
F->i_335 = F->j_336;
} else if ((F->c_338 == 39)) {
F->j_336 = rt_add(F->i_335, ((rt_int)1LL));
if (((F->j_336 > F->n_337) || (!f_is_letter_5(rt_str_get((*F->line_334), F->j_336))))) {
f_fail_11(g_src_line_265, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_336 <= F->n_337) && ((f_is_letter_5(rt_str_get((*F->line_334), F->j_336)) || f_is_digit_6(rt_str_get((*F->line_334), F->j_336))) || (rt_str_get((*F->line_334), F->j_336) == 95)))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
{
F->w_344 = rt_str_new(rt_sub(rt_sub(F->j_336, F->i_335), ((rt_int)1LL)));
rt_str_assign(&F->w_344, rt_str_slice((*F->line_334), rt_add(F->i_335, ((rt_int)1LL)), rt_sub(F->j_336, ((rt_int)1LL))));
{ rt_int lo346 = ((rt_int)1LL), hi347 = (F->w_344).len;
for (rt_int it348 = lo346; it348 <= hi347; it348++) {
F->k_345 = it348;
(*rt_str_at(&F->w_344, F->k_345)) = f_upper_7(rt_str_get(F->w_344, F->k_345));
}
}
f_add_token_19(g_k_enum_150, &F->w_344, ((rt_int)0LL));
}
F->i_335 = F->j_336;
} else if ((F->c_338 == 34)) {
F->j_336 = rt_add(F->i_335, ((rt_int)1LL));
while (((F->j_336 <= F->n_337) && (rt_str_get((*F->line_334), F->j_336) != 34))) {
F->j_336 = rt_add(F->j_336, ((rt_int)1LL));
}
if ((F->j_336 > F->n_337)) {
f_fail_11(g_src_line_265, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_19(g_k_str_151, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_334), rt_add(F->i_335, ((rt_int)1LL)), rt_sub(F->j_336, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_335 = rt_add(F->j_336, ((rt_int)1LL));
} else {
{
F->two_349 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_349, rt_str("  ", 2));
(*rt_str_at(&F->two_349, ((rt_int)1LL))) = F->c_338;
if ((F->i_335 < F->n_337)) {
(*rt_str_at(&F->two_349, ((rt_int)2LL))) = rt_str_get((*F->line_334), rt_add(F->i_335, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_349, rt_str(":=", 2)) || rt_str_eq(F->two_349, rt_str("=>", 2))) || rt_str_eq(F->two_349, rt_str("..", 2))) || rt_str_eq(F->two_349, rt_str("**", 2))) || rt_str_eq(F->two_349, rt_str("/=", 2))) || rt_str_eq(F->two_349, rt_str("<=", 2))) || rt_str_eq(F->two_349, rt_str(">=", 2)))) {
f_add_token_19(g_k_op_147, &F->two_349, ((rt_int)0LL));
F->i_335 = rt_add(F->i_335, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_338 == 40) || (F->c_338 == 41)) || (F->c_338 == 91)) || (F->c_338 == 93)) || (F->c_338 == 44)) || (F->c_338 == 58)) || (F->c_338 == 59)) || (F->c_338 == 46)) || (F->c_338 == 35)) || (F->c_338 == 43)) || (F->c_338 == 45)) || (F->c_338 == 42)) || (F->c_338 == 47)) || (F->c_338 == 38)) || (F->c_338 == 61)) || (F->c_338 == 60)) || (F->c_338 == 62))) {
f_add_token_19(g_k_op_147, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_3(F->c_338); b_; }), ((rt_int)0LL));
F->i_335 = rt_add(F->i_335, ((rt_int)1LL));
} else {
f_fail_11(g_src_line_265, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
}
}
}
}
ret_:
  return;
}

static void f_read_source_21(void) {
  struct f_read_source_21fr { int dummy;
 rstr line_350;
  } *F = rt_alloc(sizeof *F);
while ((!rt_eof())) {
F->line_350 = rt_str_new(rt_sizeln());
rt_readln(&F->line_350);
g_src_line_265 = rt_add(g_src_line_265, ((rt_int)1LL));
f_lex_line_20(&F->line_350);
}
f_add_token_19(g_k_eof_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P242 f_nn_22(rt_int kind_351, rt_int line_352) {
  struct f_nn_22fr { int dummy;
 rt_int kind_351;
 rt_int line_352;
 P242 result_;
 P242 x_353;
  } *F = rt_alloc(sizeof *F);
F->kind_351 = kind_351;
F->line_352 = line_352;
F->x_353 = NULL;
{ R243 *cell354 = rt_alloc(sizeof(R243));
(*cell354).name = NULL;
(*cell354).tag = NULL;
(*cell354).a = NULL;
(*cell354).b = NULL;
(*cell354).c = NULL;
(*cell354).d = NULL;
(*cell354).next = NULL;
F->x_353 = cell354;
}
(*(P242)rt_nil_check(F->x_353)).kind = F->kind_351;
(*(P242)rt_nil_check(F->x_353)).line = F->line_352;
F->result_ = F->x_353;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_23(P242 *head_355, P242 *tail_356, P242 x_357) {
  struct f_append_23fr { int dummy;
 P242 *head_355;
 P242 *tail_356;
 P242 x_357;
  } *F = rt_alloc(sizeof *F);
F->head_355 = head_355;
F->tail_356 = tail_356;
F->x_357 = x_357;
if (((*F->head_355) == NULL)) {
(*F->head_355) = F->x_357;
} else {
(*(P242)rt_nil_check((*F->tail_356))).next = F->x_357;
}
(*F->tail_356) = F->x_357;
while (((*(P242)rt_nil_check((*F->tail_356))).next != NULL)) {
(*F->tail_356) = (*(P242)rt_nil_check((*F->tail_356))).next;
}
ret_:
  return;
}

static rt_int f_list_len_24(P242 l_358) {
  struct f_list_len_24fr { int dummy;
 P242 l_358;
 rt_int result_;
 rt_int n_359;
 P242 p_360;
  } *F = rt_alloc(sizeof *F);
F->l_358 = l_358;
F->n_359 = ((rt_int)0LL);
F->p_360 = NULL;
F->p_360 = F->l_358;
while ((F->p_360 != NULL)) {
F->n_359 = rt_add(F->n_359, ((rt_int)1LL));
F->p_360 = (*(P242)rt_nil_check(F->p_360)).next;
}
F->result_ = F->n_359;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_25(void) {
  struct f_cur_line_25fr { int dummy;
 rt_int result_;
  } *F = rt_alloc(sizeof *F);
F->result_ = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_26(rstr *w_361) {
  struct f_at_kw_26fr { int dummy;
 rstr *w_361;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_361 = w_361;
F->result_ = (((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).kind == g_k_kw_146) && rt_str_eq((*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)), (*F->w_361)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_27(rstr *w_362) {
  struct f_at_op_27fr { int dummy;
 rstr *w_362;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_362 = w_362;
F->result_ = (((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).kind == g_k_op_147) && rt_str_eq((*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)), (*F->w_362)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_28(rt_int k_363) {
  struct f_at_kind_28fr { int dummy;
 rt_int k_363;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->k_363 = k_363;
F->result_ = ((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).kind == F->k_363);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_29(rt_int k_364) {
  struct f_kind_at_29fr { int dummy;
 rt_int k_364;
 rt_int result_;
  } *F = rt_alloc(sizeof *F);
F->k_364 = k_364;
if ((rt_add(g_tpos_264, F->k_364) > g_ntoks_263)) {
F->result_ = g_k_eof_144;
goto ret_;
}
F->result_ = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(rt_add(g_tpos_264, F->k_364), (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P237 f_text_at_30(rt_int k_365) {
  struct f_text_at_30fr { int dummy;
 rt_int k_365;
 P237 result_;
  } *F = rt_alloc(sizeof *F);
F->k_365 = k_365;
if ((rt_add(g_tpos_264, F->k_365) > g_ntoks_263)) {
F->result_ = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_ntoks_263, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
goto ret_;
}
F->result_ = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(rt_add(g_tpos_264, F->k_365), (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_31(rstr *msg_366) {
  struct f_perror_31fr { int dummy;
 rstr *msg_366;
  } *F = rt_alloc(sizeof *F);
F->msg_366 = msg_366;
f_fail_11((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_366), rt_str(" (at ", 5)), (*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_32(rstr *w_367) {
  struct f_accept_kw_32fr { int dummy;
 rstr *w_367;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_367 = w_367;
if (f_at_kw_26(&(*F->w_367))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_accept_op_33(rstr *w_368) {
  struct f_accept_op_33fr { int dummy;
 rstr *w_368;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_368 = w_368;
if (f_at_op_27(&(*F->w_368))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_expect_kw_34(rstr *w_369) {
  struct f_expect_kw_34fr { int dummy;
 rstr *w_369;
  } *F = rt_alloc(sizeof *F);
F->w_369 = w_369;
if ((!f_at_kw_26(&(*F->w_369)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_369)); b_; }));
}
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_35(rstr *w_370) {
  struct f_expect_op_35fr { int dummy;
 rstr *w_370;
  } *F = rt_alloc(sizeof *F);
F->w_370 = w_370;
if ((!f_at_op_27(&(*F->w_370)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_370)); b_; }));
}
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
ret_:
  return;
}

static P237 f_expect_id_36(void) {
  struct f_expect_id_36fr { int dummy;
 P237 result_;
  } *F = rt_alloc(sizeof *F);
if ((!f_at_kind_28(g_k_id_145))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(rt_sub(g_tpos_264, ((rt_int)1LL)), (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_name_node_37(void) {
  struct f_name_node_37fr { int dummy;
 P242 result_;
 P242 x_371;
  } *F = rt_alloc(sizeof *F);
F->x_371 = NULL;
F->x_371 = f_nn_22(g_n_name_158, f_cur_line_25());
(*(P242)rt_nil_check(F->x_371)).name = f_expect_id_36();
F->result_ = F->x_371;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_id_list_38(void) {
  struct f_id_list_38fr { int dummy;
 P242 result_;
 P242 head_372;
 P242 tail_373;
  } *F = rt_alloc(sizeof *F);
F->head_372 = NULL;
F->tail_373 = NULL;
f_append_23(&F->head_372, &F->tail_373, f_name_node_37());
while (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_23(&F->head_372, &F->tail_373, f_name_node_37());
}
F->result_ = F->head_372;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_p_subtype_39(void) {
  struct f_p_subtype_39fr { int dummy;
 P242 result_;
 rt_int line_374;
 P242 x_375;
 rstr w_376;
 P242 head_377;
 P242 tail_378;
 P242 head_379;
 P242 tail_380;
 int more_381;
 P242 names_382;
 P242 st_383;
 P242 cmp_384;
 P242 head_385;
 P242 tail_386;
 int more_387;
 P242 lit_388;
  } *F = rt_alloc(sizeof *F);
F->line_374 = f_cur_line_25();
F->x_375 = NULL;
if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->x_375 = f_nn_22(g_s_of_214, F->line_374);
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P242)rt_nil_check(F->x_375)).a = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_375;
goto ret_;
}
if ((!f_at_kind_28(g_k_id_145))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_376 = rt_str_copy((*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)));
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
if (rt_str_eq(F->w_376, rt_str("ARRAY", 5))) {
F->x_375 = f_nn_22(g_s_array_207, F->line_374);
{
F->head_377 = NULL;
F->tail_378 = NULL;
f_append_23(&F->head_377, &F->tail_378, f_p_subtype_39());
while (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_23(&F->head_377, &F->tail_378, f_p_subtype_39());
}
(*(P242)rt_nil_check(F->x_375)).a = F->head_377;
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P242)rt_nil_check(F->x_375)).b = f_p_subtype_39();
} else if ((rt_str_eq(F->w_376, rt_str("RECORD", 6)) || rt_str_eq(F->w_376, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_376, rt_str("RECORD", 6))) {
F->x_375 = f_nn_22(g_s_record_208, F->line_374);
} else {
F->x_375 = f_nn_22(g_s_union_209, F->line_374);
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_379 = NULL;
F->tail_380 = NULL;
F->more_381 = 1;
while (F->more_381) {
F->names_382 = NULL;
F->names_382 = f_id_list_38();
F->st_383 = NULL;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_383 = f_p_subtype_39();
while ((F->names_382 != NULL)) {
F->cmp_384 = NULL;
F->cmp_384 = f_nn_22(g_n_comp_202, (*(P242)rt_nil_check(F->names_382)).line);
(*(P242)rt_nil_check(F->cmp_384)).name = (*(P242)rt_nil_check(F->names_382)).name;
(*(P242)rt_nil_check(F->cmp_384)).a = F->st_383;
f_append_23(&F->head_379, &F->tail_380, F->cmp_384);
F->names_382 = (*(P242)rt_nil_check(F->names_382)).next;
}
F->more_381 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P242)rt_nil_check(F->x_375)).a = F->head_379;
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_376, rt_str("UNION", 5)) && f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_375)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_376, rt_str("ENUM", 4))) {
F->x_375 = f_nn_22(g_s_enum_205, F->line_374);
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_385 = NULL;
F->tail_386 = NULL;
F->more_387 = 1;
while (F->more_387) {
F->lit_388 = NULL;
F->lit_388 = f_nn_22(g_n_enum_155, F->line_374);
if ((!f_at_kind_28(g_k_enum_150))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P242)rt_nil_check(F->lit_388)).name = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
f_append_23(&F->head_385, &F->tail_386, F->lit_388);
F->more_387 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P242)rt_nil_check(F->x_375)).a = F->head_385;
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_375)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P242)rt_nil_check(F->x_375)).c = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_376, rt_str("STRING", 6)) || rt_str_eq(F->w_376, rt_str("SET", 3))) || rt_str_eq(F->w_376, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_376, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_376, rt_str("STRING", 6))) {
F->x_375 = f_nn_22(g_s_string_206, F->line_374);
} else if (rt_str_eq(F->w_376, rt_str("SET", 3))) {
F->x_375 = f_nn_22(g_s_set_210, F->line_374);
} else if (rt_str_eq(F->w_376, rt_str("MAILBOX", 7))) {
F->x_375 = f_nn_22(g_s_mailbox_211, F->line_374);
} else {
F->x_375 = f_nn_22(g_s_file_212, F->line_374);
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P242)rt_nil_check(F->x_375)).a = f_p_subtype_39();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_375)).b = f_actual_params_40();
}
} else if (rt_str_eq(F->w_376, rt_str("INT", 3))) {
F->x_375 = f_nn_22(g_s_int_203, F->line_374);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_375)).a = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P242)rt_nil_check(F->x_375)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_376, rt_str("FLOAT", 5))) {
F->x_375 = f_nn_22(g_s_float_204, F->line_374);
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_375)).a = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_375)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P242)rt_nil_check(F->x_375)).c = f_expr_44();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_375 = f_nn_22(g_s_name_213, F->line_374);
(*(P242)rt_nil_check(F->x_375)).name = f_mk_2(&F->w_376);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_375)).a = f_actual_tt_42();
}
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_375)).b = f_actual_params_40();
(*(P242)rt_nil_check(F->x_375)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_375;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_actual_params_40(void) {
  struct f_actual_params_40fr { int dummy;
 P242 result_;
 P242 head_389;
 P242 tail_390;
  } *F = rt_alloc(sizeof *F);
F->head_389 = NULL;
F->tail_390 = NULL;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_23(&F->head_389, &F->tail_390, f_expr_44());
while (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_23(&F->head_389, &F->tail_390, f_expr_44());
}
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_389;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_type_word_41(rstr *w_391) {
  struct f_is_type_word_41fr { int dummy;
 rstr *w_391;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_391 = w_391;
F->result_ = ((((((((((((((rt_str_eq((*F->w_391), rt_str("INT", 3)) || rt_str_eq((*F->w_391), rt_str("BOOL", 4))) || rt_str_eq((*F->w_391), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_391), rt_str("ENUM", 4))) || rt_str_eq((*F->w_391), rt_str("RECORD", 6))) || rt_str_eq((*F->w_391), rt_str("UNION", 5))) || rt_str_eq((*F->w_391), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_391), rt_str("STRING", 6))) || rt_str_eq((*F->w_391), rt_str("SET", 3))) || rt_str_eq((*F->w_391), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_391), rt_str("FILE", 4))) || rt_str_eq((*F->w_391), rt_str("ASCII", 5))) || rt_str_eq((*F->w_391), rt_str("ACT", 3))) || rt_str_eq((*F->w_391), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_391), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_actual_tt_42(void) {
  struct f_actual_tt_42fr { int dummy;
 P242 result_;
 P242 head_392;
 P242 tail_393;
 int more_394;
  } *F = rt_alloc(sizeof *F);
F->head_392 = NULL;
F->tail_393 = NULL;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_394 = 1;
while (F->more_394) {
if ((f_at_kind_28(g_k_id_145) && f_is_type_word_41(&(*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s))))) {
f_append_23(&F->head_392, &F->tail_393, f_p_subtype_39());
} else {
f_append_23(&F->head_392, &F->tail_393, f_expr_44());
}
F->more_394 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_392;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_binop_43(P237 op_395, P242 l_396, P242 r_397, rt_int line_398) {
  struct f_binop_43fr { int dummy;
 P237 op_395;
 P242 l_396;
 P242 r_397;
 rt_int line_398;
 P242 result_;
 P242 x_399;
  } *F = rt_alloc(sizeof *F);
F->op_395 = op_395;
F->l_396 = l_396;
F->r_397 = r_397;
F->line_398 = line_398;
F->x_399 = NULL;
F->x_399 = f_nn_22(g_n_binop_160, F->line_398);
(*(P242)rt_nil_check(F->x_399)).name = F->op_395;
(*(P242)rt_nil_check(F->x_399)).a = F->l_396;
(*(P242)rt_nil_check(F->x_399)).b = F->r_397;
F->result_ = F->x_399;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_44(void) {
  struct f_expr_44fr { int dummy;
 P242 result_;
 P242 l_400;
 P237 op_401;
 rt_int line_402;
  } *F = rt_alloc(sizeof *F);
F->l_400 = NULL;
F->l_400 = f_expr_and_45();
while ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_401 = NULL;
F->op_401 = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
F->line_402 = f_cur_line_25();
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->l_400 = f_binop_43(F->op_401, F->l_400, f_expr_and_45(), F->line_402);
}
F->result_ = F->l_400;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_and_45(void) {
  struct f_expr_and_45fr { int dummy;
 P242 result_;
 P242 l_403;
 rt_int line_404;
  } *F = rt_alloc(sizeof *F);
F->l_403 = NULL;
F->l_403 = f_expr_not_46();
while (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_404 = f_cur_line_25();
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->l_403 = f_binop_43(f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_403, f_expr_not_46(), F->line_404);
}
F->result_ = F->l_403;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_not_46(void) {
  struct f_expr_not_46fr { int dummy;
 P242 result_;
 P242 x_405;
  } *F = rt_alloc(sizeof *F);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_405 = NULL;
F->x_405 = f_nn_22(g_n_unop_159, f_cur_line_25());
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_405)).name = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P242)rt_nil_check(F->x_405)).a = f_expr_not_46();
F->result_ = F->x_405;
goto ret_;
}
F->result_ = f_expr_rel_48();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_rel_47(rstr *s_406) {
  struct f_is_rel_47fr { int dummy;
 rstr *s_406;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->s_406 = s_406;
F->result_ = ((((((rt_str_eq((*F->s_406), rt_str("=", 1)) || rt_str_eq((*F->s_406), rt_str("/=", 2))) || rt_str_eq((*F->s_406), rt_str("<", 1))) || rt_str_eq((*F->s_406), rt_str("<=", 2))) || rt_str_eq((*F->s_406), rt_str(">", 1))) || rt_str_eq((*F->s_406), rt_str(">=", 2))) || rt_str_eq((*F->s_406), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_rel_48(void) {
  struct f_expr_rel_48fr { int dummy;
 P242 result_;
 P242 l_407;
 P237 op_408;
 rt_int line_409;
  } *F = rt_alloc(sizeof *F);
F->l_407 = NULL;
F->l_407 = f_expr_add_49();
if ((f_at_kind_28(g_k_op_147) && f_is_rel_47(&(*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s))))) {
F->op_408 = NULL;
F->op_408 = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
F->line_409 = f_cur_line_25();
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->l_407 = f_binop_43(F->op_408, F->l_407, f_expr_add_49(), F->line_409);
}
F->result_ = F->l_407;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_add_49(void) {
  struct f_expr_add_49fr { int dummy;
 P242 result_;
 P242 l_410;
 P237 op_411;
 rt_int line_412;
  } *F = rt_alloc(sizeof *F);
F->l_410 = NULL;
F->l_410 = f_expr_mul_50();
while ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_411 = NULL;
F->op_411 = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
F->line_412 = f_cur_line_25();
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->l_410 = f_binop_43(F->op_411, F->l_410, f_expr_mul_50(), F->line_412);
}
F->result_ = F->l_410;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_mul_50(void) {
  struct f_expr_mul_50fr { int dummy;
 P242 result_;
 P242 l_413;
 P237 op_414;
 rt_int line_415;
  } *F = rt_alloc(sizeof *F);
F->l_413 = NULL;
F->l_413 = f_expr_pow_51();
while (((((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_414 = NULL;
F->op_414 = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
F->line_415 = f_cur_line_25();
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->l_413 = f_binop_43(F->op_414, F->l_413, f_expr_pow_51(), F->line_415);
}
F->result_ = F->l_413;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_pow_51(void) {
  struct f_expr_pow_51fr { int dummy;
 P242 result_;
 P242 l_416;
 rt_int line_417;
  } *F = rt_alloc(sizeof *F);
F->l_416 = NULL;
F->l_416 = f_expr_prefix_52();
while (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_417 = f_cur_line_25();
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->l_416 = f_binop_43(f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_416, f_expr_prefix_52(), F->line_417);
}
F->result_ = F->l_416;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_expr_prefix_52(void) {
  struct f_expr_prefix_52fr { int dummy;
 P242 result_;
 P242 x_418;
  } *F = rt_alloc(sizeof *F);
if ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_418 = NULL;
F->x_418 = f_nn_22(g_n_unop_159, f_cur_line_25());
(*(P242)rt_nil_check(F->x_418)).name = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_418)).a = f_expr_prefix_52();
F->result_ = F->x_418;
goto ret_;
}
F->result_ = f_postfix_53();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_postfix_53(void) {
  struct f_postfix_53fr { int dummy;
 P242 result_;
 P242 p_419;
 rt_int line_420;
 P242 x_421;
 P242 head_422;
 P242 tail_423;
 int more_424;
 P242 lo_425;
 P242 r_426;
 P242 x_427;
 P242 x_428;
 P242 x_429;
  } *F = rt_alloc(sizeof *F);
F->p_419 = NULL;
F->p_419 = f_primary_54();
while (1) {
F->line_420 = f_cur_line_25();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_421 = NULL;
F->x_421 = f_nn_22(g_n_apply_161, F->line_420);
F->head_422 = NULL;
F->tail_423 = NULL;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_424 = 1;
while (F->more_424) {
F->lo_425 = NULL;
F->lo_425 = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_426 = NULL;
F->r_426 = f_nn_22(g_n_range_167, F->line_420);
(*(P242)rt_nil_check(F->r_426)).a = F->lo_425;
(*(P242)rt_nil_check(F->r_426)).b = f_expr_44();
f_append_23(&F->head_422, &F->tail_423, F->r_426);
} else {
f_append_23(&F->head_422, &F->tail_423, F->lo_425);
}
F->more_424 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P242)rt_nil_check(F->x_421)).a = F->p_419;
(*(P242)rt_nil_check(F->x_421)).b = F->head_422;
F->p_419 = F->x_421;
} else if ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_29(((rt_int)1LL)) == g_k_id_145) || (f_kind_at_29(((rt_int)1LL)) == g_k_kw_146)))) {
F->x_427 = NULL;
F->x_427 = f_nn_22(g_n_select_162, F->line_420);
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_427)).a = F->p_419;
(*(P242)rt_nil_check(F->x_427)).name = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->p_419 = F->x_427;
} else if ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P242)rt_nil_check(F->p_419)).kind == g_n_name_158))) {
F->x_428 = NULL;
F->x_428 = f_nn_22(g_n_ttapply_163, F->line_420);
(*(P242)rt_nil_check(F->x_428)).a = F->p_419;
(*(P242)rt_nil_check(F->x_428)).b = f_actual_tt_42();
F->p_419 = F->x_428;
} else if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_429 = NULL;
F->x_429 = f_nn_22(g_n_resolve_164, F->line_420);
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_429)).a = F->p_419;
(*(P242)rt_nil_check(F->x_429)).b = f_p_subtype_39();
F->p_419 = F->x_429;
} else {
F->result_ = F->p_419;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_primary_54(void) {
  struct f_primary_54fr { int dummy;
 P242 result_;
 rt_int line_430;
 P242 x_431;
 rt_int k_432;
 rstr w_433;
 P242 head_434;
 P242 tail_435;
 int more_436;
  } *F = rt_alloc(sizeof *F);
F->line_430 = f_cur_line_25();
F->x_431 = NULL;
F->k_432 = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).kind;
if ((F->k_432 == g_k_int_148)) {
F->x_431 = f_nn_22(g_n_int_152, F->line_430);
(*(P242)rt_nil_check(F->x_431)).ival = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).ival;
(*(P242)rt_nil_check(F->x_431)).name = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = F->x_431;
goto ret_;
}
if ((((F->k_432 == g_k_float_149) || (F->k_432 == g_k_str_151)) || (F->k_432 == g_k_enum_150))) {
if ((F->k_432 == g_k_float_149)) {
F->x_431 = f_nn_22(g_n_float_153, F->line_430);
} else if ((F->k_432 == g_k_str_151)) {
F->x_431 = f_nn_22(g_n_str_154, F->line_430);
} else {
F->x_431 = f_nn_22(g_n_enum_155, F->line_430);
}
(*(P242)rt_nil_check(F->x_431)).name = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = F->x_431;
goto ret_;
}
if ((F->k_432 == g_k_id_145)) {
F->w_433 = rt_str_copy((*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)));
if ((rt_str_eq(F->w_433, rt_str("TRUE", 4)) || rt_str_eq(F->w_433, rt_str("FALSE", 5)))) {
F->x_431 = f_nn_22(g_n_bool_156, F->line_430);
if (rt_str_eq(F->w_433, rt_str("TRUE", 4))) {
(*(P242)rt_nil_check(F->x_431)).ival = ((rt_int)1LL);
}
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = F->x_431;
goto ret_;
}
if (rt_str_eq(F->w_433, rt_str("NIL", 3))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = f_nn_22(g_n_nil_157, F->line_430);
goto ret_;
}
F->result_ = f_name_node_37();
goto ret_;
}
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_431 = f_nn_22(g_n_paren_168, F->line_430);
(*(P242)rt_nil_check(F->x_431)).a = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_431;
goto ret_;
}
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_434 = NULL;
F->tail_435 = NULL;
F->x_431 = f_nn_22(g_n_cons_165, F->line_430);
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_436 = 1;
while (F->more_436) {
f_append_23(&F->head_434, &F->tail_435, f_constructor_item_55());
F->more_436 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P242)rt_nil_check(F->x_431)).a = F->head_434;
F->result_ = F->x_431;
goto ret_;
}
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_constructor_item_55(void) {
  struct f_constructor_item_55fr { int dummy;
 P242 result_;
 rt_int line_437;
 P242 it_438;
 P242 first_439;
 P242 keys_440;
 P242 ktail_441;
 P242 lab_442;
 rt_int save_443;
 P242 more_444;
 P242 tail2_445;
 int ok_446;
 int go_447;
 P242 l2_448;
  } *F = rt_alloc(sizeof *F);
F->line_437 = f_cur_line_25();
F->it_438 = NULL;
F->it_438 = f_nn_22(g_n_citem_166, F->line_437);
F->first_439 = NULL;
F->first_439 = f_expr_44();
F->keys_440 = NULL;
F->ktail_441 = NULL;
F->lab_442 = NULL;
F->lab_442 = f_nn_22(g_n_label_200, F->line_437);
(*(P242)rt_nil_check(F->lab_442)).a = F->first_439;
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P242)rt_nil_check(F->lab_442)).b = f_expr_44();
f_append_23(&F->keys_440, &F->ktail_441, F->lab_442);
} else if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_23(&F->keys_440, &F->ktail_441, F->lab_442);
} else if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_443 = g_tpos_264;
F->more_444 = NULL;
F->tail2_445 = NULL;
F->ok_446 = 0;
F->go_447 = 1;
while ((F->go_447 && f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_448 = NULL;
F->l2_448 = f_nn_22(g_n_label_200, F->line_437);
(*(P242)rt_nil_check(F->l2_448)).a = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P242)rt_nil_check(F->l2_448)).b = f_expr_44();
}
f_append_23(&F->more_444, &F->tail2_445, F->l2_448);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_446 = 1;
F->go_447 = 0;
} else if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_447 = 0;
}
}
if (F->ok_446) {
f_append_23(&F->keys_440, &F->ktail_441, F->lab_442);
f_append_23(&F->keys_440, &F->ktail_441, F->more_444);
} else {
g_tpos_264 = F->save_443;
}
}
if ((F->keys_440 != NULL)) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P242)rt_nil_check(F->it_438)).a = F->keys_440;
(*(P242)rt_nil_check(F->it_438)).b = f_expr_44();
} else {
(*(P242)rt_nil_check(F->it_438)).b = F->first_439;
}
F->result_ = F->it_438;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_body_end_56(void) {
  struct f_at_body_end_56fr { int dummy;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->result_ = (((((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_28(g_k_eof_144));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_body_57(void) {
  struct f_body_57fr { int dummy;
 P242 result_;
 P242 head_449;
 P242 tail_450;
  } *F = rt_alloc(sizeof *F);
F->head_449 = NULL;
F->tail_450 = NULL;
while ((!f_at_body_end_56())) {
f_append_23(&F->head_449, &F->tail_450, f_body_element_58());
}
F->result_ = F->head_449;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_body_element_58(void) {
  struct f_body_element_58fr { int dummy;
 P242 result_;
 P242 x_451;
  } *F = rt_alloc(sizeof *F);
F->x_451 = NULL;
if ((((((((((((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_451 = f_declaration_59();
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_451 = f_nn_22(g_n_assert_182, f_cur_line_25());
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_451)).a = f_expr_44();
} else {
F->x_451 = f_statement_71();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_451;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_declaration_59(void) {
  struct f_declaration_59fr { int dummy;
 P242 result_;
 rt_int line_452;
 P242 head_453;
 P242 tail_454;
 P242 names_455;
 P242 x_456;
  } *F = rt_alloc(sizeof *F);
F->line_452 = f_cur_line_25();
if ((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_60();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_61();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_62();
goto ret_;
} else if (((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_68();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_69();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_453 = NULL;
F->tail_454 = NULL;
F->names_455 = NULL;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->names_455 = f_id_list_38();
while ((F->names_455 != NULL)) {
F->x_456 = NULL;
F->x_456 = f_nn_22(g_n_exception_195, F->line_452);
(*(P242)rt_nil_check(F->x_456)).name = (*(P242)rt_nil_check(F->names_455)).name;
f_append_23(&F->head_453, &F->tail_454, F->x_456);
F->names_455 = (*(P242)rt_nil_check(F->names_455)).next;
}
F->result_ = F->head_453;
goto ret_;
}
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_object_decl_60(void) {
  struct f_object_decl_60fr { int dummy;
 P242 result_;
 rt_int line_457;
 int is_var_458;
 P242 names_459;
 P242 st_460;
 P242 init_461;
 P242 head_462;
 P242 tail_463;
 P242 x_464;
  } *F = rt_alloc(sizeof *F);
F->line_457 = f_cur_line_25();
F->is_var_458 = f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_459 = NULL;
F->st_460 = NULL;
F->init_461 = NULL;
F->head_462 = NULL;
F->tail_463 = NULL;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->names_459 = f_id_list_38();
if (F->is_var_458) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_460 = f_p_subtype_39();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_461 = f_expr_44();
}
} else {
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_460 = f_p_subtype_39();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_461 = f_expr_44();
}
while ((F->names_459 != NULL)) {
F->x_464 = NULL;
if (F->is_var_458) {
F->x_464 = f_nn_22(g_n_var_186, F->line_457);
} else {
F->x_464 = f_nn_22(g_n_const_187, F->line_457);
}
(*(P242)rt_nil_check(F->x_464)).name = (*(P242)rt_nil_check(F->names_459)).name;
(*(P242)rt_nil_check(F->x_464)).a = F->st_460;
(*(P242)rt_nil_check(F->x_464)).b = F->init_461;
f_append_23(&F->head_462, &F->tail_463, F->x_464);
F->names_459 = (*(P242)rt_nil_check(F->names_459)).next;
}
F->result_ = F->head_462;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_abbrev_decl_61(void) {
  struct f_abbrev_decl_61fr { int dummy;
 P242 result_;
 P242 x_465;
  } *F = rt_alloc(sizeof *F);
F->x_465 = NULL;
F->x_465 = f_nn_22(g_n_abbrev_188, f_cur_line_25());
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_465)).name = f_expect_id_36();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_465)).b = f_formal_params_64();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P242)rt_nil_check(F->x_465)).a = f_p_subtype_39();
F->result_ = F->x_465;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_type_decl_62(void) {
  struct f_type_decl_62fr { int dummy;
 P242 result_;
 rt_int line_466;
 P237 name_467;
 P242 params_468;
 P242 x_469;
  } *F = rt_alloc(sizeof *F);
F->line_466 = f_cur_line_25();
F->name_467 = NULL;
F->params_468 = NULL;
F->x_469 = NULL;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->name_467 = f_expect_id_36();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_468 = f_formal_params_64();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_28(g_k_id_145) && rt_str_eq((*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->x_469 = f_nn_22(g_n_ptrtype_190, F->line_466);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_469)).b = f_formal_params_64();
}
} else {
F->x_469 = f_nn_22(g_n_newtype_189, F->line_466);
(*(P242)rt_nil_check(F->x_469)).b = F->params_468;
}
(*(P242)rt_nil_check(F->x_469)).name = F->name_467;
(*(P242)rt_nil_check(F->x_469)).a = f_p_subtype_39();
F->result_ = F->x_469;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_mode_of_63(rstr *w_470) {
  struct f_mode_of_63fr { int dummy;
 rstr *w_470;
 rt_int result_;
  } *F = rt_alloc(sizeof *F);
F->w_470 = w_470;
if (rt_str_eq((*F->w_470), rt_str("VAR", 3))) {
F->result_ = g_m_var_216;
goto ret_;
} else if (rt_str_eq((*F->w_470), rt_str("OUT", 3))) {
F->result_ = g_m_out_217;
goto ret_;
} else if (rt_str_eq((*F->w_470), rt_str("READONLY", 8))) {
F->result_ = g_m_readonly_218;
goto ret_;
}
F->result_ = g_m_const_215;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_formal_params_64(void) {
  struct f_formal_params_64fr { int dummy;
 P242 result_;
 P242 head_471;
 P242 tail_472;
 int more_473;
 rt_int mode_474;
 P242 names_475;
 P242 ntail_476;
 P242 st_477;
 P242 p_478;
  } *F = rt_alloc(sizeof *F);
F->head_471 = NULL;
F->tail_472 = NULL;
F->more_473 = 1;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_473) {
F->mode_474 = g_m_const_215;
F->names_475 = NULL;
F->ntail_476 = NULL;
F->st_477 = NULL;
if ((((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_474 = f_mode_of_63(&(*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)));
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
}
f_append_23(&F->names_475, &F->ntail_476, f_name_node_37());
while ((((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_29(((rt_int)1LL)) == g_k_id_145)) && (f_kind_at_29(((rt_int)2LL)) == g_k_op_147)) && (rt_str_eq((*(P237)rt_nil_check(f_text_at_30(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P237)rt_nil_check(f_text_at_30(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
f_append_23(&F->names_475, &F->ntail_476, f_name_node_37());
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_477 = f_p_subtype_39();
while ((F->names_475 != NULL)) {
F->p_478 = NULL;
F->p_478 = f_nn_22(g_n_param_198, (*(P242)rt_nil_check(F->names_475)).line);
(*(P242)rt_nil_check(F->p_478)).name = (*(P242)rt_nil_check(F->names_475)).name;
(*(P242)rt_nil_check(F->p_478)).ival = F->mode_474;
(*(P242)rt_nil_check(F->p_478)).a = F->st_477;
f_append_23(&F->head_471, &F->tail_472, F->p_478);
F->names_475 = (*(P242)rt_nil_check(F->names_475)).next;
}
F->more_473 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_471;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_65(P242 owner_479) {
  struct f_imports_list_65fr { int dummy;
 P242 owner_479;
 int result_;
 P242 head_480;
 P242 tail_481;
 int more_482;
 int ro_483;
 P242 x_484;
  } *F = rt_alloc(sizeof *F);
F->owner_479 = owner_479;
F->head_480 = NULL;
F->tail_481 = NULL;
F->more_482 = 1;
if ((!f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P242)rt_nil_check(F->owner_479)).flag = rt_add((*(P242)rt_nil_check(F->owner_479)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_482) {
F->ro_483 = f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_484 = NULL;
F->x_484 = f_name_node_37();
if (F->ro_483) {
(*(P242)rt_nil_check(F->x_484)).ival = ((rt_int)1LL);
}
f_append_23(&F->head_480, &F->tail_481, F->x_484);
F->more_482 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P242)rt_nil_check(F->owner_479)).d = F->head_480;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_definable_66(rstr *w_485) {
  struct f_is_definable_66fr { int dummy;
 rstr *w_485;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_485 = w_485;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_485), rt_str("+", 1)) || rt_str_eq((*F->w_485), rt_str("-", 1))) || rt_str_eq((*F->w_485), rt_str("*", 1))) || rt_str_eq((*F->w_485), rt_str("/", 1))) || rt_str_eq((*F->w_485), rt_str("**", 2))) || rt_str_eq((*F->w_485), rt_str("&", 1))) || rt_str_eq((*F->w_485), rt_str("=", 1))) || rt_str_eq((*F->w_485), rt_str("<", 1))) || rt_str_eq((*F->w_485), rt_str("<=", 2))) || rt_str_eq((*F->w_485), rt_str(">", 1))) || rt_str_eq((*F->w_485), rt_str(">=", 2))) || rt_str_eq((*F->w_485), rt_str("/=", 2))) || rt_str_eq((*F->w_485), rt_str("DIV", 3))) || rt_str_eq((*F->w_485), rt_str("MOD", 3))) || rt_str_eq((*F->w_485), rt_str("AND", 3))) || rt_str_eq((*F->w_485), rt_str("OR", 2))) || rt_str_eq((*F->w_485), rt_str("XOR", 3))) || rt_str_eq((*F->w_485), rt_str("NOT", 3))) || rt_str_eq((*F->w_485), rt_str("IN", 2))) || rt_str_eq((*F->w_485), rt_str(":=", 2))) || rt_str_eq((*F->w_485), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P237 f_definable_name_67(void) {
  struct f_definable_name_67fr { int dummy;
 P237 result_;
  } *F = rt_alloc(sizeof *F);
if ((f_at_kind_28(g_k_id_145) || (f_at_kind_28(g_k_op_147) && f_is_definable_66(&(*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)))))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = (*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(rt_sub(g_tpos_264, ((rt_int)1LL)), (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s;
goto ret_;
}
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_subprogram_decl_68(void) {
  struct f_subprogram_decl_68fr { int dummy;
 P242 result_;
 rt_int line_486;
 P242 x_487;
 int is_abn_488;
 int is_func_489;
 int dummy_490;
  } *F = rt_alloc(sizeof *F);
F->line_486 = f_cur_line_25();
F->x_487 = NULL;
F->is_abn_488 = f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_489 = f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_489) {
F->x_487 = f_nn_22(g_n_func_192, F->line_486);
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_487 = f_nn_22(g_n_proc_191, F->line_486);
} else {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
if (F->is_abn_488) {
(*(P242)rt_nil_check(F->x_487)).flag = ((rt_int)1LL);
}
(*(P242)rt_nil_check(F->x_487)).name = f_definable_name_67();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_487)).a = f_formal_params_64();
}
if (F->is_func_489) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P242)rt_nil_check(F->x_487)).b = f_p_subtype_39();
}
F->dummy_490 = f_imports_list_65(F->x_487);
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P242)rt_nil_check(F->x_487)).c = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_489) {
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P237)rt_nil_check(f_definable_name_67())), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->x_487)).name))))) {
f_fail_11(f_cur_line_25(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->x_487)).name))); b_; }));
}
F->result_ = F->x_487;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_capsule_decl_69(void) {
  struct f_capsule_decl_69fr { int dummy;
 P242 result_;
 P242 x_491;
 int dummy_492;
 P242 head_493;
 P242 tail_494;
 int more_495;
 P242 n_496;
  } *F = rt_alloc(sizeof *F);
F->x_491 = NULL;
F->x_491 = f_nn_22(g_n_capsule_193, f_cur_line_25());
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_491)).name = f_expect_id_36();
F->dummy_492 = f_imports_list_65(F->x_491);
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P242)rt_nil_check(F->x_491)).ival = ((rt_int)1LL);
} else if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P242)rt_nil_check(F->x_491)).ival = ((rt_int)0LL);
} else {
F->head_493 = NULL;
F->tail_494 = NULL;
F->more_495 = 1;
while (F->more_495) {
F->n_496 = NULL;
F->n_496 = f_nn_22(g_n_name_158, f_cur_line_25());
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P242)rt_nil_check(F->n_496)).ival = ((rt_int)1LL);
}
(*(P242)rt_nil_check(F->n_496)).name = f_definable_name_67();
f_append_23(&F->head_493, &F->tail_494, F->n_496);
F->more_495 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P242)rt_nil_check(F->x_491)).a = F->head_493;
(*(P242)rt_nil_check(F->x_491)).ival = ((rt_int)2LL);
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P242)rt_nil_check(F->x_491)).c = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P237)rt_nil_check(f_expect_id_36())), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->x_491)).name))))) {
f_fail_11(f_cur_line_25(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_491;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_compound_kw_70(rstr *w_497) {
  struct f_is_compound_kw_70fr { int dummy;
 rstr *w_497;
 int result_;
  } *F = rt_alloc(sizeof *F);
F->w_497 = w_497;
F->result_ = (((((((rt_str_eq((*F->w_497), rt_str("IF", 2)) || rt_str_eq((*F->w_497), rt_str("CASE", 4))) || rt_str_eq((*F->w_497), rt_str("FOR", 3))) || rt_str_eq((*F->w_497), rt_str("WHILE", 5))) || rt_str_eq((*F->w_497), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_497), rt_str("GUARD", 5))) || rt_str_eq((*F->w_497), rt_str("WAIT", 4))) || rt_str_eq((*F->w_497), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_statement_71(void) {
  struct f_statement_71fr { int dummy;
 P242 result_;
 P242 labels_498;
 P242 ltail_499;
 P237 match_500;
 P242 s_501;
  } *F = rt_alloc(sizeof *F);
F->labels_498 = NULL;
F->ltail_499 = NULL;
F->match_500 = NULL;
F->s_501 = NULL;
while (((f_at_kind_28(g_k_id_145) && (f_kind_at_29(((rt_int)1LL)) == g_k_op_147)) && rt_str_eq((*(P237)rt_nil_check(f_text_at_30(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_23(&F->labels_498, &F->ltail_499, f_name_node_37());
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
}
if (((f_at_kind_28(g_k_id_145) && (f_kind_at_29(((rt_int)1LL)) == g_k_kw_146)) && f_is_compound_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P237)rt_nil_check(f_text_at_30(((rt_int)1LL)))); b_; })))) {
F->match_500 = f_expect_id_36();
}
F->s_501 = f_unlabeled_statement_72();
if ((F->match_500 != NULL)) {
if (((((((((*(P242)rt_nil_check(F->s_501)).kind != g_n_if_171) && ((*(P242)rt_nil_check(F->s_501)).kind != g_n_case_172)) && ((*(P242)rt_nil_check(F->s_501)).kind != g_n_repeat_173)) && ((*(P242)rt_nil_check(F->s_501)).kind != g_n_begin_174)) && ((*(P242)rt_nil_check(F->s_501)).kind != g_n_guard_175)) && ((*(P242)rt_nil_check(F->s_501)).kind != g_n_wait_184)) && ((*(P242)rt_nil_check(F->s_501)).kind != g_n_region_185))) {
f_fail_11((*(P242)rt_nil_check(F->s_501)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P237)rt_nil_check(f_expect_id_36())), (*(P237)rt_nil_check(F->match_500))))) {
f_fail_11((*(P242)rt_nil_check(F->s_501)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P237)rt_nil_check(F->match_500))); b_; }));
}
(*(P242)rt_nil_check(F->s_501)).tag = F->match_500;
}
if ((F->labels_498 != NULL)) {
f_fail_11((*(P242)rt_nil_check(F->s_501)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_501;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_unlabeled_statement_72(void) {
  struct f_unlabeled_statement_72fr { int dummy;
 P242 result_;
 rt_int line_502;
 P242 x_503;
 P242 target_504;
  } *F = rt_alloc(sizeof *F);
F->line_502 = f_cur_line_25();
F->x_503 = NULL;
if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_74();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_75();
goto ret_;
} else if ((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_76();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_503 = f_nn_22(g_n_begin_174, F->line_502);
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_503)).a = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_503;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_77();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_503 = f_nn_22(g_n_exit_176, F->line_502);
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_503)).name = f_expect_id_36();
F->result_ = F->x_503;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_503 = f_nn_22(g_n_return_177, F->line_502);
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P242)rt_nil_check(F->x_503)).a = f_expr_44();
}
F->result_ = F->x_503;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_503 = f_nn_22(g_n_raise_179, F->line_502);
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_503)).name = f_expect_id_36();
F->result_ = F->x_503;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->result_ = f_nn_22(g_n_reraise_180, F->line_502);
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_503 = f_nn_22(g_n_alloc_181, F->line_502);
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_503)).a = f_postfix_53();
if ((!(f_at_kind_28(g_k_id_145) && rt_str_eq((*(P237)rt_nil_check((*(P238)rt_nil_check((*(P240)rt_nil_check(g_toks_262)).p[rt_index(g_tpos_264, (*(P240)rt_nil_check(g_toks_262)).lo, (*(P240)rt_nil_check(g_toks_262)).hi) - (*(P240)rt_nil_check(g_toks_262)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P242)rt_nil_check(F->x_503)).b = f_actual_params_40();
}
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P242)rt_nil_check(F->x_503)).c = f_expr_44();
}
F->result_ = F->x_503;
goto ret_;
}
{
F->target_504 = NULL;
F->target_504 = f_postfix_53();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_503 = f_nn_22(g_n_assign_169, F->line_502);
(*(P242)rt_nil_check(F->x_503)).a = F->target_504;
(*(P242)rt_nil_check(F->x_503)).b = f_expr_44();
} else {
F->x_503 = f_nn_22(g_n_call_170, F->line_502);
(*(P242)rt_nil_check(F->x_503)).a = F->target_504;
}
}
F->result_ = F->x_503;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_arm_73(P242 cond_505, P242 b_506, rt_int line_507) {
  struct f_arm_73fr { int dummy;
 P242 cond_505;
 P242 b_506;
 rt_int line_507;
 P242 result_;
 P242 x_508;
  } *F = rt_alloc(sizeof *F);
F->cond_505 = cond_505;
F->b_506 = b_506;
F->line_507 = line_507;
F->x_508 = NULL;
F->x_508 = f_nn_22(g_n_arm_199, F->line_507);
(*(P242)rt_nil_check(F->x_508)).a = F->cond_505;
(*(P242)rt_nil_check(F->x_508)).b = F->b_506;
F->result_ = F->x_508;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_if_stmt_74(void) {
  struct f_if_stmt_74fr { int dummy;
 P242 result_;
 P242 x_509;
 P242 head_510;
 P242 tail_511;
 P242 cond_512;
 int go_513;
  } *F = rt_alloc(sizeof *F);
F->x_509 = NULL;
F->x_509 = f_nn_22(g_n_if_171, f_cur_line_25());
F->head_510 = NULL;
F->tail_511 = NULL;
F->cond_512 = NULL;
F->go_513 = 1;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
F->cond_512 = f_expr_44();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_23(&F->head_510, &F->tail_511, f_arm_73(F->cond_512, f_body_57(), (*(P242)rt_nil_check(F->x_509)).line));
while (F->go_513) {
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_512 = f_expr_44();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_23(&F->head_510, &F->tail_511, f_arm_73(F->cond_512, f_body_57(), (*(P242)rt_nil_check(F->x_509)).line));
} else if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P242)rt_nil_check(F->x_509)).flag = ((rt_int)1LL);
(*(P242)rt_nil_check(F->x_509)).b = f_body_57();
} else {
F->go_513 = 0;
}
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P242)rt_nil_check(F->x_509)).a = F->head_510;
F->result_ = F->x_509;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_case_stmt_75(void) {
  struct f_case_stmt_75fr { int dummy;
 P242 result_;
 P242 x_514;
 P242 head_515;
 P242 tail_516;
 P242 labs_517;
 P242 ltail_518;
 int more_519;
 P242 l_520;
  } *F = rt_alloc(sizeof *F);
F->x_514 = NULL;
F->x_514 = f_nn_22(g_n_case_172, f_cur_line_25());
F->head_515 = NULL;
F->tail_516 = NULL;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_514)).a = f_expr_44();
while (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_517 = NULL;
F->ltail_518 = NULL;
F->more_519 = 1;
while (F->more_519) {
F->l_520 = NULL;
F->l_520 = f_nn_22(g_n_label_200, f_cur_line_25());
(*(P242)rt_nil_check(F->l_520)).a = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P242)rt_nil_check(F->l_520)).b = f_expr_44();
}
f_append_23(&F->labs_517, &F->ltail_518, F->l_520);
F->more_519 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_23(&F->head_515, &F->tail_516, f_arm_73(F->labs_517, f_body_57(), (*(P242)rt_nil_check(F->x_514)).line));
}
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P242)rt_nil_check(F->x_514)).flag = ((rt_int)1LL);
(*(P242)rt_nil_check(F->x_514)).c = f_body_57();
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P242)rt_nil_check(F->x_514)).b = F->head_515;
F->result_ = F->x_514;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_repeat_stmt_76(void) {
  struct f_repeat_stmt_76fr { int dummy;
 P242 result_;
 P242 x_521;
  } *F = rt_alloc(sizeof *F);
F->x_521 = NULL;
F->x_521 = f_nn_22(g_n_repeat_173, f_cur_line_25());
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P242)rt_nil_check(F->x_521)).flag = ((rt_int)1LL);
(*(P242)rt_nil_check(F->x_521)).name = f_expect_id_36();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P242)rt_nil_check(F->x_521)).ival = ((rt_int)1LL);
}
(*(P242)rt_nil_check(F->x_521)).a = f_p_subtype_39();
} else {
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P242)rt_nil_check(F->x_521)).a = f_expr_44();
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P242)rt_nil_check(F->x_521)).b = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_521;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_guard_stmt_77(void) {
  struct f_guard_stmt_77fr { int dummy;
 P242 result_;
 P242 x_522;
 P242 head_523;
 P242 tail_524;
 P242 h_525;
  } *F = rt_alloc(sizeof *F);
F->x_522 = NULL;
F->x_522 = f_nn_22(g_n_guard_175, f_cur_line_25());
F->head_523 = NULL;
F->tail_524 = NULL;
g_tpos_264 = rt_add(g_tpos_264, ((rt_int)1LL));
(*(P242)rt_nil_check(F->x_522)).a = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_525 = NULL;
F->h_525 = f_nn_22(g_n_handler_201, f_cur_line_25());
(*(P242)rt_nil_check(F->h_525)).a = f_id_list_38();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P242)rt_nil_check(F->h_525)).b = f_body_57();
f_append_23(&F->head_523, &F->tail_524, F->h_525);
}
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P242)rt_nil_check(F->x_522)).flag = ((rt_int)1LL);
(*(P242)rt_nil_check(F->x_522)).c = f_body_57();
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P242)rt_nil_check(F->x_522)).b = F->head_523;
F->result_ = F->x_522;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_program_78(void) {
  struct f_program_78fr { int dummy;
 P242 result_;
 P242 x_526;
  } *F = rt_alloc(sizeof *F);
F->x_526 = NULL;
if ((!f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a program is a capsule declaration", 34); b_; }));
}
F->x_526 = f_capsule_decl_69();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
if ((!f_at_kind_28(g_k_eof_144))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("text after the main capsule", 27); b_; }));
}
F->result_ = F->x_526;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_79(rstr *s_527) {
  struct f_hash_79fr { int dummy;
 rstr *s_527;
 rt_int result_;
 rt_int h_528;
 rt_int i_529;
  } *F = rt_alloc(sizeof *F);
F->s_527 = s_527;
F->h_528 = ((rt_int)0LL);
{ rt_int lo530 = ((rt_int)1LL), hi531 = ((*F->s_527)).len;
for (rt_int it532 = lo530; it532 <= hi531; it532++) {
F->i_529 = it532;
F->h_528 = rt_mod(rt_add(rt_mul(F->h_528, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_527), F->i_529)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_528;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P252 f_lookup_80(rstr *name_533) {
  struct f_lookup_80fr { int dummy;
 rstr *name_533;
 P252 result_;
 P252 y_534;
  } *F = rt_alloc(sizeof *F);
F->name_533 = name_533;
F->y_534 = NULL;
F->y_534 = (*(P258)rt_nil_check(g_table_266)).p[rt_index(f_hash_79(&(*F->name_533)), (*(P258)rt_nil_check(g_table_266)).lo, (*(P258)rt_nil_check(g_table_266)).hi) - (*(P258)rt_nil_check(g_table_266)).lo];
while ((F->y_534 != NULL)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_534)).name)), (*F->name_533))) {
F->result_ = F->y_534;
goto ret_;
}
F->y_534 = (*(P252)rt_nil_check(F->y_534)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_81(P252 y_535, rt_int line_536) {
  struct f_define_81fr { int dummy;
 P252 y_535;
 rt_int line_536;
 rt_int h_537;
 P252 z_538;
  } *F = rt_alloc(sizeof *F);
F->y_535 = y_535;
F->line_536 = line_536;
F->h_537 = f_hash_79(&(*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_535)).name)));
F->z_538 = NULL;
F->z_538 = (*(P258)rt_nil_check(g_table_266)).p[rt_index(F->h_537, (*(P258)rt_nil_check(g_table_266)).lo, (*(P258)rt_nil_check(g_table_266)).hi) - (*(P258)rt_nil_check(g_table_266)).lo];
while ((F->z_538 != NULL)) {
if ((((*(P252)rt_nil_check(F->z_538)).depth == g_depth_267) && rt_str_eq((*(P237)rt_nil_check((*(P252)rt_nil_check(F->z_538)).name)), (*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_535)).name))))) {
f_fail_11(F->line_536, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_535)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_538 = (*(P252)rt_nil_check(F->z_538)).chain;
}
(*(P252)rt_nil_check(F->y_535)).depth = g_depth_267;
(*(P252)rt_nil_check(F->y_535)).chain = (*(P258)rt_nil_check(g_table_266)).p[rt_index(F->h_537, (*(P258)rt_nil_check(g_table_266)).lo, (*(P258)rt_nil_check(g_table_266)).hi) - (*(P258)rt_nil_check(g_table_266)).lo];
(*(P258)rt_nil_check(g_table_266)).p[rt_index(F->h_537, (*(P258)rt_nil_check(g_table_266)).lo, (*(P258)rt_nil_check(g_table_266)).hi) - (*(P258)rt_nil_check(g_table_266)).lo] = F->y_535;
(*(P252)rt_nil_check(F->y_535)).stack = g_scope_stack_268;
g_scope_stack_268 = F->y_535;
ret_:
  return;
}

static void f_open_scope_82(void) {
  struct f_open_scope_82fr { int dummy;
  } *F = rt_alloc(sizeof *F);
g_depth_267 = rt_add(g_depth_267, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_83(void) {
  struct f_close_scope_83fr { int dummy;
  } *F = rt_alloc(sizeof *F);
while (((g_scope_stack_268 != NULL) && ((*(P252)rt_nil_check(g_scope_stack_268)).depth == g_depth_267))) {
(*(P258)rt_nil_check(g_table_266)).p[rt_index(f_hash_79(&(*(P237)rt_nil_check((*(P252)rt_nil_check(g_scope_stack_268)).name))), (*(P258)rt_nil_check(g_table_266)).lo, (*(P258)rt_nil_check(g_table_266)).hi) - (*(P258)rt_nil_check(g_table_266)).lo] = (*(P252)rt_nil_check(g_scope_stack_268)).chain;
g_scope_stack_268 = (*(P252)rt_nil_check(g_scope_stack_268)).stack;
}
g_depth_267 = rt_sub(g_depth_267, ((rt_int)1LL));
ret_:
  return;
}

static P252 f_new_sym_84(rt_int kind_539, P237 name_540) {
  struct f_new_sym_84fr { int dummy;
 rt_int kind_539;
 P237 name_540;
 P252 result_;
 P252 y_541;
  } *F = rt_alloc(sizeof *F);
F->kind_539 = kind_539;
F->name_540 = name_540;
F->y_541 = NULL;
{ R253 *cell542 = rt_alloc(sizeof(R253));
(*cell542).name = NULL;
(*cell542).t = NULL;
(*cell542).c = NULL;
(*cell542).access = NULL;
(*cell542).cname = NULL;
(*cell542).st = NULL;
(*cell542).decl = NULL;
(*cell542).params = NULL;
(*cell542).result = NULL;
(*cell542).chain = NULL;
(*cell542).stack = NULL;
F->y_541 = cell542;
}
(*(P252)rt_nil_check(F->y_541)).kind = F->kind_539;
(*(P252)rt_nil_check(F->y_541)).name = F->name_540;
F->result_ = F->y_541;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P246 f_new_typ_85(rt_int kind_543) {
  struct f_new_typ_85fr { int dummy;
 rt_int kind_543;
 P246 result_;
 P246 t_544;
  } *F = rt_alloc(sizeof *F);
F->kind_543 = kind_543;
F->t_544 = NULL;
{ R247 *cell545 = rt_alloc(sizeof(R247));
(*cell545).name = NULL;
(*cell545).lits = NULL;
(*cell545).elem = NULL;
(*cell545).idx = NULL;
(*cell545).elemcons = NULL;
(*cell545).elemst = NULL;
(*cell545).fields = NULL;
(*cell545).target = NULL;
(*cell545).decl = NULL;
(*cell545).cname = NULL;
(*cell545).next = NULL;
F->t_544 = cell545;
}
(*(P246)rt_nil_check(F->t_544)).kind = F->kind_543;
F->result_ = F->t_544;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P244 f_new_cons_86(void) {
  struct f_new_cons_86fr { int dummy;
 P244 result_;
 P244 c_546;
  } *F = rt_alloc(sizeof *F);
F->c_546 = NULL;
{ R245 *cell547 = rt_alloc(sizeof(R245));
(*cell547).lo = NULL;
(*cell547).hi = NULL;
(*cell547).slen = NULL;
F->c_546 = cell547;
}
F->result_ = F->c_546;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_87(P242 a_548, P242 b_549) {
  struct f_same_lits_87fr { int dummy;
 P242 a_548;
 P242 b_549;
 int result_;
 P242 x_550;
 P242 y_551;
  } *F = rt_alloc(sizeof *F);
F->a_548 = a_548;
F->b_549 = b_549;
F->x_550 = NULL;
F->x_550 = F->a_548;
F->y_551 = NULL;
F->y_551 = F->b_549;
while (((F->x_550 != NULL) && (F->y_551 != NULL))) {
if ((!rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->x_550)).name)), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->y_551)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_550 = (*(P242)rt_nil_check(F->x_550)).next;
F->y_551 = (*(P242)rt_nil_check(F->y_551)).next;
}
F->result_ = ((F->x_550 == NULL) && (F->y_551 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_88(P246 a_552, P246 b_553) {
  struct f_same_88fr { int dummy;
 P246 a_552;
 P246 b_553;
 int result_;
 P248 f_554;
 P248 g_555;
  } *F = rt_alloc(sizeof *F);
F->a_552 = a_552;
F->b_553 = b_553;
if ((F->a_552 == F->b_553)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_552 == NULL) || (F->b_553 == NULL)) || ((*(P246)rt_nil_check(F->a_552)).kind != (*(P246)rt_nil_check(F->b_553)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P246)rt_nil_check(F->a_552)).kind == g_t_int_219) || ((*(P246)rt_nil_check(F->a_552)).kind == g_t_bool_220)) || ((*(P246)rt_nil_check(F->a_552)).kind == g_t_float_221)) || ((*(P246)rt_nil_check(F->a_552)).kind == g_t_string_223)) || ((*(P246)rt_nil_check(F->a_552)).kind == g_t_void_227)) || ((*(P246)rt_nil_check(F->a_552)).kind == g_t_file_228))) {
F->result_ = 1;
goto ret_;
}
if (((*(P246)rt_nil_check(F->a_552)).kind == g_t_enum_222)) {
F->result_ = f_same_lits_87((*(P246)rt_nil_check(F->a_552)).lits, (*(P246)rt_nil_check(F->b_553)).lits);
goto ret_;
}
if (((*(P246)rt_nil_check(F->a_552)).kind == g_t_array_224)) {
F->result_ = (f_same_88((*(P246)rt_nil_check(F->a_552)).elem, (*(P246)rt_nil_check(F->b_553)).elem) && f_same_88((*(P246)rt_nil_check(F->a_552)).idx, (*(P246)rt_nil_check(F->b_553)).idx));
goto ret_;
}
if (((*(P246)rt_nil_check(F->a_552)).kind == g_t_record_225)) {
F->f_554 = NULL;
F->f_554 = (*(P246)rt_nil_check(F->a_552)).fields;
F->g_555 = NULL;
F->g_555 = (*(P246)rt_nil_check(F->b_553)).fields;
while (((F->f_554 != NULL) && (F->g_555 != NULL))) {
if (((!rt_str_eq((*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_554)).name)), (*(P237)rt_nil_check((*(P248)rt_nil_check(F->g_555)).name)))) || (!f_same_88((*(P248)rt_nil_check(F->f_554)).t, (*(P248)rt_nil_check(F->g_555)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_554 = (*(P248)rt_nil_check(F->f_554)).next;
F->g_555 = (*(P248)rt_nil_check(F->g_555)).next;
}
F->result_ = ((F->f_554 == NULL) && (F->g_555 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_89(P246 t_556) {
  struct f_kind_name_89fr { int dummy;
 P246 t_556;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->t_556 = t_556;
{ rt_int sel557 = (*(P246)rt_nil_check(F->t_556)).kind;
if (0 || (sel557 == g_t_int_219)) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel557 == g_t_bool_220)) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel557 == g_t_float_221)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel557 == g_t_enum_222)) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel557 == g_t_string_223)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel557 == g_t_array_224)) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel557 == g_t_record_225)) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel557 == g_t_ptr_226)) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_556)).name)));
goto ret_;
} else if (0 || (sel557 == g_t_nil_229)) {
F->result_ = rt_str("NIL", 3);
goto ret_;
} else {
F->result_ = rt_str("this type", 9);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_check_type_90(P246 got_558, P246 want_559, rt_int line_560) {
  struct f_check_type_90fr { int dummy;
 P246 got_558;
 P246 want_559;
 rt_int line_560;
  } *F = rt_alloc(sizeof *F);
F->got_558 = got_558;
F->want_559 = want_559;
F->line_560 = line_560;
if ((F->want_559 == NULL)) {
goto ret_;
}
if ((((*(P246)rt_nil_check(F->got_558)).kind == g_t_nil_229) && ((*(P246)rt_nil_check(F->want_559)).kind == g_t_ptr_226))) {
goto ret_;
}
if ((!f_same_88(F->got_558, F->want_559))) {
f_fail_11(F->line_560, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_89(F->got_558)), rt_str(" where ", 7)), f_kind_name_89(F->want_559)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_91(P246 t_561) {
  struct f_ctype_91fr { int dummy;
 P246 t_561;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->t_561 = t_561;
{ rt_int sel562 = (*(P246)rt_nil_check(F->t_561)).kind;
if (0 || (sel562 == g_t_int_219)) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel562 == g_t_bool_220) || (sel562 == g_t_enum_222) || (sel562 == g_t_file_228)) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel562 == g_t_float_221)) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel562 == g_t_string_223)) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel562 == g_t_void_227)) {
F->result_ = rt_str("void", 4);
goto ret_;
} else {
if (((*(P246)rt_nil_check(F->t_561)).cname == NULL)) {
f_declare_ctype_93(F->t_561);
} else if (((((*(P246)rt_nil_check(F->t_561)).kind == g_t_record_225) && (*(P246)rt_nil_check(F->t_561)).forward) && (!(*(P246)rt_nil_check(F->t_561)).defined))) {
(*(P246)rt_nil_check(F->t_561)).defined = 1;
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_561)).cname))), rt_str(" { ", 3)), f_field_decls_92(F->t_561)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_561)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_92(P246 t_563) {
  struct f_field_decls_92fr { int dummy;
 P246 t_563;
 rstr result_;
 P248 f_564;
 P237 s_565;
  } *F = rt_alloc(sizeof *F);
F->t_563 = t_563;
F->f_564 = NULL;
F->f_564 = (*(P246)rt_nil_check(F->t_563)).fields;
F->s_565 = NULL;
F->s_565 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_564 != NULL)) {
F->s_565 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->s_565)), f_ctype_91((*(P248)rt_nil_check(F->f_564)).t)), rt_str(" ", 1)), f_lower_s_8(&(*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_564)).name)))), rt_str("; ", 2)); b_; }));
F->f_564 = (*(P248)rt_nil_check(F->f_564)).next;
}
F->result_ = (*(P237)rt_nil_check(F->s_565));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_93(P246 t_566) {
  struct f_declare_ctype_93fr { int dummy;
 P246 t_566;
 P246 u_567;
 P246 target_568;
  } *F = rt_alloc(sizeof *F);
F->t_566 = t_566;
F->u_567 = NULL;
F->u_567 = g_all_types_269;
if ((((*(P246)rt_nil_check(F->t_566)).kind == g_t_ptr_226) && ((*(P246)rt_nil_check(F->t_566)).target == NULL))) {
f_finish_ptr_107(F->t_566);
if (((*(P246)rt_nil_check(F->t_566)).cname != NULL)) {
goto ret_;
}
}
if (((*(P246)rt_nil_check(F->t_566)).kind != g_t_ptr_226)) {
while ((F->u_567 != NULL)) {
if ((((*(P246)rt_nil_check(F->u_567)).kind == (*(P246)rt_nil_check(F->t_566)).kind) && f_same_88(F->u_567, F->t_566))) {
(*(P246)rt_nil_check(F->t_566)).cname = (*(P246)rt_nil_check(F->u_567)).cname;
goto ret_;
}
F->u_567 = (*(P246)rt_nil_check(F->u_567)).next;
}
}
if (((*(P246)rt_nil_check(F->t_566)).kind == g_t_array_224)) {
(*(P246)rt_nil_check(F->t_566)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P246)rt_nil_check(F->t_566)).kind == g_t_record_225)) {
(*(P246)rt_nil_check(F->t_566)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P246)rt_nil_check(F->t_566)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P246)rt_nil_check(F->t_566)).next = g_all_types_269;
g_all_types_269 = F->t_566;
if (((*(P246)rt_nil_check(F->t_566)).kind == g_t_ptr_226)) {
F->target_568 = NULL;
F->target_568 = (*(P246)rt_nil_check(F->t_566)).target;
if (((*(P246)rt_nil_check(F->target_568)).kind == g_t_record_225)) {
if (((*(P246)rt_nil_check(F->target_568)).cname == NULL)) {
(*(P246)rt_nil_check(F->target_568)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P246)rt_nil_check(F->target_568)).next = g_all_types_269;
g_all_types_269 = F->target_568;
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->target_568)).cname))), rt_str(" ", 1)), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->target_568)).cname))), rt_str(";", 1)); b_; }));
(*(P246)rt_nil_check(F->target_568)).forward = 1;
}
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->target_568)).cname))), rt_str(" *", 2)), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_91(F->target_568)), rt_str(" *", 2)), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P246)rt_nil_check(F->t_566)).kind == g_t_array_224)) {
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(" ", 1)), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(";", 1)); b_; }));
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(" { rt_int lo, hi; ", 18)), f_ctype_91((*(P246)rt_nil_check(F->t_566)).elem)), rt_str(" *p; };", 7)); b_; }));
} else {
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(" ", 1)), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(";", 1)); b_; }));
(*(P246)rt_nil_check(F->t_566)).defined = 1;
f_put_13(g_out_types_271, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_566)).cname))), rt_str(" { ", 3)), f_field_decls_92(F->t_566)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_94(void) {
  struct f_init_ascii_94fr { int dummy;
 rstr names_569;
 P242 head_570;
 P242 tail_571;
 rt_int start_572;
 rt_int i_573;
 P242 lit_577;
  } *F = rt_alloc(sizeof *F);
F->names_569 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_570 = NULL;
F->tail_571 = NULL;
F->start_572 = ((rt_int)1LL);
{ rt_int lo574 = ((rt_int)1LL), hi575 = (F->names_569).len;
for (rt_int it576 = lo574; it576 <= hi575; it576++) {
F->i_573 = it576;
if ((rt_str_get(F->names_569, F->i_573) == 32)) {
F->lit_577 = NULL;
F->lit_577 = f_nn_22(g_n_enum_155, ((rt_int)0LL));
(*(P242)rt_nil_check(F->lit_577)).name = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_569, F->start_572, rt_sub(F->i_573, ((rt_int)1LL))); b_; }));
f_append_23(&F->head_570, &F->tail_571, F->lit_577);
F->start_572 = rt_add(F->i_573, ((rt_int)1LL));
}
}
}
g_ty_ascii_288 = f_new_typ_85(g_t_enum_222);
(*(P246)rt_nil_check(g_ty_ascii_288)).lits = F->head_570;
(*(P246)rt_nil_check(g_ty_ascii_288)).name = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_95(P242 lits_578, rstr *name_579) {
  struct f_lit_index_95fr { int dummy;
 P242 lits_578;
 rstr *name_579;
 rt_int result_;
 rt_int i_580;
 P242 l_581;
  } *F = rt_alloc(sizeof *F);
F->lits_578 = lits_578;
F->name_579 = name_579;
F->i_580 = ((rt_int)0LL);
F->l_581 = NULL;
F->l_581 = F->lits_578;
while ((F->l_581 != NULL)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->l_581)).name)), (*F->name_579))) {
F->result_ = F->i_580;
goto ret_;
}
F->i_580 = rt_add(F->i_580, ((rt_int)1LL));
F->l_581 = (*(P242)rt_nil_check(F->l_581)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P246 f_resolve_subtype_96(P242 st_582, P244 *c_583) {
  struct f_resolve_subtype_96fr { int dummy;
 P242 st_582;
 P244 *c_583;
 P246 result_;
 P246 t_584;
 int ok_585;
 P246 dummy_586;
 P244 ic_588;
 P244 ec_589;
 P246 it_590;
 P246 et_591;
 P242 comp_592;
 P248 tail_593;
 P244 cc_594;
 P248 f_595;
 P252 y_597;
  } *F = rt_alloc(sizeof *F);
F->st_582 = st_582;
F->c_583 = c_583;
F->t_584 = NULL;
F->dummy_586 = NULL;
(*F->c_583) = f_new_cons_86();
{ rt_int sel587 = (*(P242)rt_nil_check(F->st_582)).kind;
if (0 || (sel587 == g_s_int_203)) {
if (((*(P242)rt_nil_check(F->st_582)).a != NULL)) {
(*(P244)rt_nil_check((*F->c_583))).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_133((*(P242)rt_nil_check(F->st_582)).a, g_ty_int_285, &F->dummy_586); b_; }));
(*(P244)rt_nil_check((*F->c_583))).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_133((*(P242)rt_nil_check(F->st_582)).b, g_ty_int_285, &F->dummy_586); b_; }));
(*(P244)rt_nil_check((*F->c_583))).mlo = f_manifest_98((*(P242)rt_nil_check(F->st_582)).a, &F->ok_585);
(*(P244)rt_nil_check((*F->c_583))).hasm = F->ok_585;
(*(P244)rt_nil_check((*F->c_583))).mhi = f_manifest_98((*(P242)rt_nil_check(F->st_582)).b, &F->ok_585);
(*(P244)rt_nil_check((*F->c_583))).hasm = ((*(P244)rt_nil_check((*F->c_583))).hasm && F->ok_585);
}
F->result_ = g_ty_int_285;
goto ret_;
} else if (0 || (sel587 == g_s_float_204)) {
F->result_ = g_ty_float_287;
goto ret_;
} else if (0 || (sel587 == g_s_enum_205)) {
F->t_584 = f_new_typ_85(g_t_enum_222);
(*(P246)rt_nil_check(F->t_584)).lits = (*(P242)rt_nil_check(F->st_582)).a;
if (((*(P242)rt_nil_check(F->st_582)).b != NULL)) {
(*(P244)rt_nil_check((*F->c_583))).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_133((*(P242)rt_nil_check(F->st_582)).b, F->t_584, &F->dummy_586); b_; }));
(*(P244)rt_nil_check((*F->c_583))).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_133((*(P242)rt_nil_check(F->st_582)).c, F->t_584, &F->dummy_586); b_; }));
}
F->result_ = F->t_584;
goto ret_;
} else if (0 || (sel587 == g_s_string_206)) {
F->t_584 = f_resolve_subtype_96((*(P242)rt_nil_check(F->st_582)).a, &(*F->c_583));
if ((!f_same_88(F->t_584, g_ty_ascii_288))) {
f_fail_11((*(P242)rt_nil_check(F->st_582)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_583) = f_new_cons_86();
if (((*(P242)rt_nil_check(F->st_582)).b != NULL)) {
(*(P244)rt_nil_check((*F->c_583))).slen = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_133((*(P242)rt_nil_check(F->st_582)).b, g_ty_int_285, &F->dummy_586); b_; }));
}
F->result_ = g_ty_string_289;
goto ret_;
} else if (0 || (sel587 == g_s_array_207)) {
if ((f_list_len_24((*(P242)rt_nil_check(F->st_582)).a) != ((rt_int)1LL))) {
f_fail_11((*(P242)rt_nil_check(F->st_582)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only one-dimensional arrays are supported", 41); b_; }));
}
{
F->ic_588 = NULL;
F->ec_589 = NULL;
F->it_590 = NULL;
F->it_590 = f_resolve_subtype_96((*(P242)rt_nil_check(F->st_582)).a, &F->ic_588);
F->et_591 = NULL;
F->et_591 = f_resolve_subtype_96((*(P242)rt_nil_check(F->st_582)).b, &F->ec_589);
F->t_584 = f_new_typ_85(g_t_array_224);
(*(P246)rt_nil_check(F->t_584)).idx = F->it_590;
(*(P246)rt_nil_check(F->t_584)).elem = F->et_591;
(*(P246)rt_nil_check(F->t_584)).elemcons = F->ec_589;
(*(P246)rt_nil_check(F->t_584)).elemst = (*(P242)rt_nil_check(F->st_582)).b;
if (((*(P244)rt_nil_check(F->ic_588)).lo != NULL)) {
(*(P244)rt_nil_check((*F->c_583))).lo = (*(P244)rt_nil_check(F->ic_588)).lo;
(*(P244)rt_nil_check((*F->c_583))).hi = (*(P244)rt_nil_check(F->ic_588)).hi;
} else if (((*(P246)rt_nil_check(F->it_590)).kind == g_t_enum_222)) {
(*(P244)rt_nil_check((*F->c_583))).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P244)rt_nil_check((*F->c_583))).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_4(rt_sub(f_list_len_24((*(P246)rt_nil_check(F->it_590)).lits), ((rt_int)1LL))); b_; }));
}
}
F->result_ = F->t_584;
goto ret_;
} else if (0 || (sel587 == g_s_record_208)) {
F->t_584 = f_new_typ_85(g_t_record_225);
{
F->comp_592 = NULL;
F->comp_592 = (*(P242)rt_nil_check(F->st_582)).a;
F->tail_593 = NULL;
while ((F->comp_592 != NULL)) {
F->cc_594 = NULL;
F->f_595 = NULL;
{ R249 *cell596 = rt_alloc(sizeof(R249));
(*cell596).name = NULL;
(*cell596).t = NULL;
(*cell596).st = NULL;
(*cell596).next = NULL;
F->f_595 = cell596;
}
(*(P248)rt_nil_check(F->f_595)).name = (*(P242)rt_nil_check(F->comp_592)).name;
(*(P248)rt_nil_check(F->f_595)).t = f_resolve_subtype_96((*(P242)rt_nil_check(F->comp_592)).a, &F->cc_594);
(*(P248)rt_nil_check(F->f_595)).st = (*(P242)rt_nil_check(F->comp_592)).a;
if ((F->tail_593 == NULL)) {
(*(P246)rt_nil_check(F->t_584)).fields = F->f_595;
} else {
(*(P248)rt_nil_check(F->tail_593)).next = F->f_595;
}
F->tail_593 = F->f_595;
F->comp_592 = (*(P242)rt_nil_check(F->comp_592)).next;
}
}
F->result_ = F->t_584;
goto ret_;
} else if (0 || (sel587 == g_s_file_212)) {
F->result_ = g_ty_file_291;
goto ret_;
} else if (0 || (sel587 == g_s_name_213)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->st_582)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_286;
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->st_582)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_288;
goto ret_;
}
{
F->y_597 = NULL;
F->y_597 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->st_582)).name)));
if ((F->y_597 == NULL)) {
f_fail_11((*(P242)rt_nil_check(F->st_582)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->st_582)).name))); b_; }));
}
if (((*(P252)rt_nil_check(F->y_597)).kind == g_y_abbrev_235)) {
F->result_ = f_resolve_subtype_96((*(P252)rt_nil_check(F->y_597)).st, &(*F->c_583));
goto ret_;
} else if (((*(P252)rt_nil_check(F->y_597)).kind == g_y_type_234)) {
if (((*(P252)rt_nil_check(F->y_597)).t != NULL)) {
F->result_ = (*(P252)rt_nil_check(F->y_597)).t;
goto ret_;
}
F->result_ = f_resolve_subtype_96((*(P252)rt_nil_check(F->y_597)).st, &(*F->c_583));
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->st_582)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->st_582)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_11((*(P242)rt_nil_check(F->st_582)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_97(rstr *lval_598, P246 t_599, P244 c_600) {
  struct f_init_storage_97fr { int dummy;
 rstr *lval_598;
 P246 t_599;
 P244 c_600;
 rstr i_601;
 P248 f_602;
 P244 fc_603;
 P246 ft_604;
  } *F = rt_alloc(sizeof *F);
F->lval_598 = lval_598;
F->t_599 = t_599;
F->c_600 = c_600;
if (((*(P246)rt_nil_check(F->t_599)).kind == g_t_ptr_226)) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_598), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P246)rt_nil_check(F->t_599)).kind == g_t_string_223)) {
if (((*(P244)rt_nil_check(F->c_600)).slen == NULL)) {
f_fail_11(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_598), rt_str(" = rt_str_new(", 14)), (*(P237)rt_nil_check((*(P244)rt_nil_check(F->c_600)).slen))), rt_str(");", 2)); b_; }));
} else if (((*(P246)rt_nil_check(F->t_599)).kind == g_t_array_224)) {
if (((*(P244)rt_nil_check(F->c_600)).lo == NULL)) {
f_fail_11(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_598), rt_str(".lo = ", 6)), (*(P237)rt_nil_check((*(P244)rt_nil_check(F->c_600)).lo))), rt_str("; ", 2)), (*F->lval_598)), rt_str(".hi = ", 6)), (*(P237)rt_nil_check((*(P244)rt_nil_check(F->c_600)).hi))), rt_str(";", 1)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_598), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_91((*(P246)rt_nil_check(F->t_599)).elem)), rt_str(") * (size_t)(", 13)), (*F->lval_598)), rt_str(".hi >= ", 7)), (*F->lval_598)), rt_str(".lo \? ", 6)), (*F->lval_598)), rt_str(".hi - ", 6)), (*F->lval_598)), rt_str(".lo + 1 : 0));", 14)); b_; }));
if (((((*(P246)rt_nil_check((*(P246)rt_nil_check(F->t_599)).elem)).kind == g_t_string_223) || ((*(P246)rt_nil_check((*(P246)rt_nil_check(F->t_599)).elem)).kind == g_t_array_224)) || ((*(P246)rt_nil_check((*(P246)rt_nil_check(F->t_599)).elem)).kind == g_t_record_225))) {
F->i_601 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_601), rt_str(" = 0; ", 6)), F->i_601), rt_str(" <= ", 4)), (*F->lval_598)), rt_str(".hi - ", 6)), (*F->lval_598)), rt_str(".lo; ", 5)), F->i_601), rt_str("++) {", 5)); b_; }));
f_init_storage_97(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_598), rt_str(".p[", 3)), F->i_601), rt_str("]", 1)); b_; }), (*(P246)rt_nil_check(F->t_599)).elem, (*(P246)rt_nil_check(F->t_599)).elemcons);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P246)rt_nil_check(F->t_599)).kind == g_t_record_225)) {
F->f_602 = NULL;
F->f_602 = (*(P246)rt_nil_check(F->t_599)).fields;
while ((F->f_602 != NULL)) {
F->fc_603 = NULL;
F->ft_604 = NULL;
F->ft_604 = f_resolve_subtype_96((*(P248)rt_nil_check(F->f_602)).st, &F->fc_603);
f_init_storage_97(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_598), rt_str(".", 1)), f_lower_s_8(&(*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_602)).name)))); b_; }), (*(P248)rt_nil_check(F->f_602)).t, F->fc_603);
F->f_602 = (*(P248)rt_nil_check(F->f_602)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_98(P242 e_605, int *ok_606) {
  struct f_manifest_98fr { int dummy;
 P242 e_605;
 int *ok_606;
 rt_int result_;
 rt_int a_607;
 rt_int b_608;
 int ok2_609;
 P252 y_610;
  } *F = rt_alloc(sizeof *F);
F->e_605 = e_605;
F->ok_606 = ok_606;
(*F->ok_606) = 0;
if (((*(P242)rt_nil_check(F->e_605)).kind == g_n_int_152)) {
(*F->ok_606) = 1;
F->result_ = (*(P242)rt_nil_check(F->e_605)).ival;
goto ret_;
} else if (((*(P242)rt_nil_check(F->e_605)).kind == g_n_paren_168)) {
F->result_ = f_manifest_98((*(P242)rt_nil_check(F->e_605)).a, &(*F->ok_606));
goto ret_;
} else if ((((*(P242)rt_nil_check(F->e_605)).kind == g_n_unop_159) && rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_605)).name)), rt_str("-", 1)))) {
F->a_607 = f_manifest_98((*(P242)rt_nil_check(F->e_605)).a, &(*F->ok_606));
F->result_ = rt_neg(F->a_607);
goto ret_;
} else if ((((*(P242)rt_nil_check(F->e_605)).kind == g_n_binop_160) && ((rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_605)).name)), rt_str("+", 1)) || rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_605)).name)), rt_str("-", 1))) || rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_605)).name)), rt_str("*", 1))))) {
F->a_607 = f_manifest_98((*(P242)rt_nil_check(F->e_605)).a, &(*F->ok_606));
F->b_608 = f_manifest_98((*(P242)rt_nil_check(F->e_605)).b, &F->ok2_609);
(*F->ok_606) = ((*F->ok_606) && F->ok2_609);
if ((!(*F->ok_606))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_605)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_607, F->b_608);
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_605)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_607, F->b_608);
goto ret_;
}
F->result_ = rt_mul(F->a_607, F->b_608);
goto ret_;
} else if (((*(P242)rt_nil_check(F->e_605)).kind == g_n_name_158)) {
F->y_610 = NULL;
F->y_610 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_605)).name)));
if ((((F->y_610 != NULL) && ((*(P252)rt_nil_check(F->y_610)).kind == g_y_const_231)) && (*(P252)rt_nil_check(F->y_610)).hasmv)) {
(*F->ok_606) = 1;
F->result_ = (*(P252)rt_nil_check(F->y_610)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_99(rstr *lval_611, P246 t_612, rstr *v_613, P244 c_614) {
  struct f_assign_code_99fr { int dummy;
 rstr *lval_611;
 P246 t_612;
 rstr *v_613;
 P244 c_614;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->lval_611 = lval_611;
F->t_612 = t_612;
F->v_613 = v_613;
F->c_614 = c_614;
if (((*(P246)rt_nil_check(F->t_612)).kind == g_t_string_223)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_611)), rt_str(", ", 2)), (*F->v_613)), rt_str(");", 2));
goto ret_;
} else if ((((*(P246)rt_nil_check(F->t_612)).kind == g_t_array_224) || ((*(P246)rt_nil_check(F->t_612)).kind == g_t_record_225))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_91(F->t_612)), rt_str("(&", 2)), (*F->lval_611)), rt_str(", ", 2)), (*F->v_613)), rt_str(");", 2));
goto ret_;
} else if (((((*(P246)rt_nil_check(F->t_612)).kind == g_t_int_219) && (F->c_614 != NULL)) && (*(P244)rt_nil_check(F->c_614)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_611), rt_str(" = rt_range(", 12)), (*F->v_613)), rt_str(", ", 2)), f_itos_4((*(P244)rt_nil_check(F->c_614)).mlo)), rt_str(", ", 2)), f_itos_4((*(P244)rt_nil_check(F->c_614)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_611), rt_str(" = ", 3)), (*F->v_613)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_100(P246 t_615, rstr *v_616) {
  struct f_copy_code_100fr { int dummy;
 P246 t_615;
 rstr *v_616;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->t_615 = t_615;
F->v_616 = v_616;
if (((*(P246)rt_nil_check(F->t_615)).kind == g_t_string_223)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_616)), rt_str(")", 1));
goto ret_;
} else if ((((*(P246)rt_nil_check(F->t_615)).kind == g_t_array_224) || ((*(P246)rt_nil_check(F->t_615)).kind == g_t_record_225))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_91(F->t_615)), rt_str("(", 1)), (*F->v_616)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_616);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_101(P246 t_617, rstr *a_618, rstr *b_619) {
  struct f_eq_code_101fr { int dummy;
 P246 t_617;
 rstr *a_618;
 rstr *b_619;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->t_617 = t_617;
F->a_618 = a_618;
F->b_619 = b_619;
if (((*(P246)rt_nil_check(F->t_617)).kind == g_t_string_223)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_618)), rt_str(", ", 2)), (*F->b_619)), rt_str(")", 1));
goto ret_;
} else if ((((*(P246)rt_nil_check(F->t_617)).kind == g_t_array_224) || ((*(P246)rt_nil_check(F->t_617)).kind == g_t_record_225))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_91(F->t_617)), rt_str("(", 1)), (*F->a_618)), rt_str(", ", 2)), (*F->b_619)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_618)), rt_str(" == ", 4)), (*F->b_619)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_102(rstr *lval_620, P246 t_621, rstr *v_622) {
  struct f_elem_assign_102fr { int dummy;
 rstr *lval_620;
 P246 t_621;
 rstr *v_622;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->lval_620 = lval_620;
F->t_621 = t_621;
F->v_622 = v_622;
F->result_ = f_assign_code_99(&(*F->lval_620), F->t_621, &(*F->v_622), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_103(P254 l_623, rstr *s_624) {
  struct f_seen_name_103fr { int dummy;
 P254 l_623;
 rstr *s_624;
 int result_;
 P254 p_625;
  } *F = rt_alloc(sizeof *F);
F->l_623 = l_623;
F->s_624 = s_624;
F->p_625 = NULL;
F->p_625 = F->l_623;
while ((F->p_625 != NULL)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P254)rt_nil_check(F->p_625)).s)), (*F->s_624))) {
F->result_ = 1;
goto ret_;
}
F->p_625 = (*(P254)rt_nil_check(F->p_625)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_104(void) {
  struct f_emit_helpers_104fr { int dummy;
 P246 order_626;
 P246 t_627;
 P254 done_628;
 P254 l_629;
 rstr c_630;
  } *F = rt_alloc(sizeof *F);
F->order_626 = NULL;
F->t_627 = NULL;
F->t_627 = g_all_types_269;
F->done_628 = NULL;
while ((F->t_627 != NULL)) {
if ((((*(P246)rt_nil_check(F->t_627)).kind != g_t_ptr_226) && (!f_seen_name_103(F->done_628, &(*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_627)).cname)))))) {
F->l_629 = NULL;
F->c_630 = rt_str_new(((*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_627)).cname))).len);
rt_str_assign(&F->c_630, (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_627)).cname)));
{ R255 *cell631 = rt_alloc(sizeof(R255));
(*cell631).s = NULL;
(*cell631).next = NULL;
F->l_629 = cell631;
}
(*(P254)rt_nil_check(F->l_629)).s = (*(P246)rt_nil_check(F->t_627)).cname;
(*(P254)rt_nil_check(F->l_629)).next = F->done_628;
F->done_628 = F->l_629;
f_put_13(g_out_helpers_272, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_630), rt_str("(", 1)), F->c_630), rt_str(" *d, ", 5)), F->c_630), rt_str(" s);", 4)); b_; }));
f_put_13(g_out_helpers_272, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_630), rt_str(" cp_", 4)), F->c_630), rt_str("(", 1)), F->c_630), rt_str(" s);", 4)); b_; }));
f_put_13(g_out_helpers_272, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_630), rt_str("(", 1)), F->c_630), rt_str(" a, ", 4)), F->c_630), rt_str(" b);", 4)); b_; }));
f_helper_bodies_105(F->t_627);
}
F->t_627 = (*(P246)rt_nil_check(F->t_627)).next;
}
ret_:
  return;
}

static void f_helper_bodies_105(P246 t_632) {
  struct f_helper_bodies_105fr { int dummy;
 P246 t_632;
 rstr c_633;
 P256 b_634;
 P246 e_635;
 P248 f_636;
 P237 conds_637;
 rstr fn_638;
 rstr fn_639;
  } *F = rt_alloc(sizeof *F);
F->t_632 = t_632;
F->c_633 = rt_str_new(((*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_632)).cname))).len);
rt_str_assign(&F->c_633, (*(P237)rt_nil_check((*(P246)rt_nil_check(F->t_632)).cname)));
F->b_634 = NULL;
F->b_634 = g_out_funcs_275;
if (((*(P246)rt_nil_check(F->t_632)).kind == g_t_array_224)) {
F->e_635 = NULL;
F->e_635 = (*(P246)rt_nil_check(F->t_632)).elem;
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_633), rt_str("(", 1)), F->c_633), rt_str(" *d, ", 5)), F->c_633), rt_str(" s) {", 5)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_9()), rt_str("array length", 12)), f_q_9()), rt_str(");", 2)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= s.hi - s.lo; i++) { ", 46), f_elem_assign_102(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_633), rt_str(" cp_", 4)), F->c_633), rt_str("(", 1)), F->c_633), rt_str(" s) {", 5)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_633), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_91(F->e_635)), rt_str(") * (size_t)(s.hi >= s.lo \? s.hi - s.lo + 1 : 0));", 50)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = ", 53), f_copy_code_100(F->e_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_633), rt_str("(", 1)), F->c_633), rt_str(" a, ", 4)), F->c_633), rt_str(" b) {", 5)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!(", 50), f_eq_code_101(F->e_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_636 = NULL;
F->f_636 = (*(P246)rt_nil_check(F->t_632)).fields;
F->conds_637 = NULL;
F->conds_637 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_633), rt_str("(", 1)), F->c_633), rt_str(" *d, ", 5)), F->c_633), rt_str(" s) {", 5)); b_; }));
while ((F->f_636 != NULL)) {
F->fn_638 = rt_str_copy(f_lower_s_8(&(*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_636)).name))));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_102(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_638); b_; }), (*(P248)rt_nil_check(F->f_636)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_638); b_; }))); b_; }));
F->f_636 = (*(P248)rt_nil_check(F->f_636)).next;
}
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_633), rt_str(" cp_", 4)), F->c_633), rt_str("(", 1)), F->c_633), rt_str(" s) {", 5)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_633), rt_str(" d = s;", 7)); b_; }));
F->f_636 = (*(P246)rt_nil_check(F->t_632)).fields;
while ((F->f_636 != NULL)) {
F->fn_639 = rt_str_copy(f_lower_s_8(&(*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_636)).name))));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_639), rt_str(" = ", 3)), f_copy_code_100((*(P248)rt_nil_check(F->f_636)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_639); b_; }))), rt_str(";", 1)); b_; }));
F->conds_637 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->conds_637)), rt_str(" && ", 4)), f_eq_code_101((*(P248)rt_nil_check(F->f_636)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_639); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_639); b_; }))); b_; }));
F->f_636 = (*(P248)rt_nil_check(F->f_636)).next;
}
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_633), rt_str("(", 1)), F->c_633), rt_str(" a, ", 4)), F->c_633), rt_str(" b) {", 5)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P237)rt_nil_check(F->conds_637))), rt_str(";", 1)); b_; }));
f_put_13(F->b_634, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_106(P242 elems_640) {
  struct f_declare_body_106fr { int dummy;
 P242 elems_640;
 P242 e_641;
 P252 y_642;
 P252 y_643;
 P252 y_644;
 P246 t_645;
 P252 y_646;
  } *F = rt_alloc(sizeof *F);
F->elems_640 = elems_640;
F->e_641 = NULL;
F->e_641 = F->elems_640;
while ((F->e_641 != NULL)) {
if ((((*(P242)rt_nil_check(F->e_641)).kind == g_n_proc_191) || ((*(P242)rt_nil_check(F->e_641)).kind == g_n_func_192))) {
f_declare_subprogram_108(F->e_641);
} else if (((*(P242)rt_nil_check(F->e_641)).kind == g_n_exception_195)) {
F->y_642 = NULL;
F->y_642 = f_new_sym_84(g_y_exc_236, (*(P242)rt_nil_check(F->e_641)).name);
(*(P252)rt_nil_check(F->y_642)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_8(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_641)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_81(F->y_642, (*(P242)rt_nil_check(F->e_641)).line);
f_put_13(g_out_globals_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_642)).cname))), rt_str(";", 1)); b_; }));
f_put_13(g_out_excs_277, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_642)).cname))), rt_str(" = rt_exc(", 10)), f_q_9()), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_641)).name))), f_q_9()), rt_str(");", 2)); b_; }));
} else if (((*(P242)rt_nil_check(F->e_641)).kind == g_n_abbrev_188)) {
F->y_643 = NULL;
F->y_643 = f_new_sym_84(g_y_abbrev_235, (*(P242)rt_nil_check(F->e_641)).name);
(*(P252)rt_nil_check(F->y_643)).st = (*(P242)rt_nil_check(F->e_641)).a;
f_define_81(F->y_643, (*(P242)rt_nil_check(F->e_641)).line);
} else if (((*(P242)rt_nil_check(F->e_641)).kind == g_n_ptrtype_190)) {
F->y_644 = NULL;
F->y_644 = f_new_sym_84(g_y_type_234, (*(P242)rt_nil_check(F->e_641)).name);
F->t_645 = NULL;
F->t_645 = f_new_typ_85(g_t_ptr_226);
(*(P246)rt_nil_check(F->t_645)).name = (*(P242)rt_nil_check(F->e_641)).name;
(*(P246)rt_nil_check(F->t_645)).decl = F->e_641;
(*(P252)rt_nil_check(F->y_644)).t = F->t_645;
f_define_81(F->y_644, (*(P242)rt_nil_check(F->e_641)).line);
} else if (((*(P242)rt_nil_check(F->e_641)).kind == g_n_newtype_189)) {
F->y_646 = NULL;
F->y_646 = f_new_sym_84(g_y_type_234, (*(P242)rt_nil_check(F->e_641)).name);
(*(P252)rt_nil_check(F->y_646)).st = (*(P242)rt_nil_check(F->e_641)).a;
f_define_81(F->y_646, (*(P242)rt_nil_check(F->e_641)).line);
}
F->e_641 = (*(P242)rt_nil_check(F->e_641)).next;
}
ret_:
  return;
}

static void f_finish_ptr_107(P246 t_647) {
  struct f_finish_ptr_107fr { int dummy;
 P246 t_647;
 P242 d_648;
 P242 p_649;
 P244 c_650;
 rstr dummy_651;
 P252 y_652;
  } *F = rt_alloc(sizeof *F);
F->t_647 = t_647;
F->d_648 = NULL;
F->d_648 = (*(P246)rt_nil_check(F->t_647)).decl;
F->p_649 = NULL;
F->c_650 = NULL;
F->dummy_651 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_651, rt_str(" ", 1));
if (((*(P246)rt_nil_check(F->t_647)).target != NULL)) {
goto ret_;
}
f_open_scope_82();
F->p_649 = (*(P242)rt_nil_check(F->d_648)).b;
while ((F->p_649 != NULL)) {
F->y_652 = NULL;
F->y_652 = f_new_sym_84(g_y_const_231, (*(P242)rt_nil_check(F->p_649)).name);
(*(P252)rt_nil_check(F->y_652)).t = g_ty_int_285;
(*(P252)rt_nil_check(F->y_652)).access = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_81(F->y_652, (*(P242)rt_nil_check(F->d_648)).line);
F->p_649 = (*(P242)rt_nil_check(F->p_649)).next;
}
(*(P246)rt_nil_check(F->t_647)).target = f_resolve_subtype_96((*(P242)rt_nil_check(F->d_648)).a, &F->c_650);
f_close_scope_83();
(*rt_str_at(&F->dummy_651, ((rt_int)1LL))) = rt_str_get(f_ctype_91(F->t_647), ((rt_int)1LL));
(*rt_str_at(&F->dummy_651, ((rt_int)1LL))) = rt_str_get(f_ctype_91((*(P246)rt_nil_check(F->t_647)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_108(P242 d_653) {
  struct f_declare_subprogram_108fr { int dummy;
 P242 d_653;
 P252 y_654;
 P242 p_655;
 P250 tail_656;
 P250 pm_657;
 P244 rc_659;
  } *F = rt_alloc(sizeof *F);
F->d_653 = d_653;
F->y_654 = NULL;
F->p_655 = NULL;
F->p_655 = (*(P242)rt_nil_check(F->d_653)).a;
F->tail_656 = NULL;
if (((*(P242)rt_nil_check(F->d_653)).kind == g_n_func_192)) {
F->y_654 = f_new_sym_84(g_y_func_232, (*(P242)rt_nil_check(F->d_653)).name);
} else {
F->y_654 = f_new_sym_84(g_y_proc_233, (*(P242)rt_nil_check(F->d_653)).name);
}
while ((F->p_655 != NULL)) {
F->pm_657 = NULL;
{ R251 *cell658 = rt_alloc(sizeof(R251));
(*cell658).name = NULL;
(*cell658).t = NULL;
(*cell658).c = NULL;
(*cell658).next = NULL;
F->pm_657 = cell658;
}
(*(P250)rt_nil_check(F->pm_657)).name = (*(P242)rt_nil_check(F->p_655)).name;
(*(P250)rt_nil_check(F->pm_657)).mode = (*(P242)rt_nil_check(F->p_655)).ival;
(*(P250)rt_nil_check(F->pm_657)).t = f_resolve_subtype_96((*(P242)rt_nil_check(F->p_655)).a, &(*(P250)rt_nil_check(F->pm_657)).c);
if ((F->tail_656 == NULL)) {
(*(P252)rt_nil_check(F->y_654)).params = F->pm_657;
} else {
(*(P250)rt_nil_check(F->tail_656)).next = F->pm_657;
}
F->tail_656 = F->pm_657;
F->p_655 = (*(P242)rt_nil_check(F->p_655)).next;
}
(*(P252)rt_nil_check(F->y_654)).result = g_ty_void_290;
if (((*(P242)rt_nil_check(F->d_653)).b != NULL)) {
F->rc_659 = NULL;
(*(P252)rt_nil_check(F->y_654)).result = f_resolve_subtype_96((*(P242)rt_nil_check(F->d_653)).b, &F->rc_659);
}
(*(P252)rt_nil_check(F->y_654)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_lower_s_8(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->d_653)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P252)rt_nil_check(F->y_654)).decl = F->d_653;
f_define_81(F->y_654, (*(P242)rt_nil_check(F->d_653)).line);
ret_:
  return;
}

static void f_element_109(P242 e_660) {
  struct f_element_109fr { int dummy;
 P242 e_660;
 rt_int k_661;
 P246 t_662;
 rstr c_663;
  } *F = rt_alloc(sizeof *F);
F->e_660 = e_660;
F->k_661 = (*(P242)rt_nil_check(F->e_660)).kind;
if (((F->k_661 == g_n_proc_191) || (F->k_661 == g_n_func_192))) {
f_subprogram_113(F->e_660);
} else if ((((F->k_661 == g_n_exception_195) || (F->k_661 == g_n_abbrev_188)) || (F->k_661 == g_n_newtype_189))) {
goto ret_;
} else if ((F->k_661 == g_n_ptrtype_190)) {
f_finish_ptr_107((*(P252)rt_nil_check(f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_660)).name))))).t);
} else if ((F->k_661 == g_n_var_186)) {
f_var_decl_111(F->e_660);
} else if ((F->k_661 == g_n_const_187)) {
f_const_decl_112(F->e_660);
} else if ((F->k_661 == g_n_assert_182)) {
F->t_662 = NULL;
F->c_663 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_660)).a, g_ty_bool_286, &F->t_662));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_663), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_117(F->e_660);
}
ret_:
  return;
}

static rstr f_storage_110(rstr *name_664, P246 t_665) {
  struct f_storage_110fr { int dummy;
 rstr *name_664;
 P246 t_665;
 rstr result_;
 rstr g_666;
 rstr f_667;
  } *F = rt_alloc(sizeof *F);
F->name_664 = name_664;
F->t_665 = t_665;
if ((!g_in_func_280)) {
F->g_666 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_8(&(*F->name_664))), rt_str("_", 1)); b_; })));
f_put_13(g_out_globals_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_91(F->t_665)), rt_str(" ", 1)), F->g_666), rt_str(";", 1)); b_; }));
F->result_ = F->g_666;
goto ret_;
}
{
F->f_667 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_8(&(*F->name_664)), rt_str("_", 1)); b_; })));
f_put_13(g_fields_buf_279, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_91(F->t_665)), rt_str(" ", 1)), F->f_667), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_667);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_var_decl_111(P242 d_668) {
  struct f_var_decl_111fr { int dummy;
 P242 d_668;
 P244 c_669;
 P246 t_670;
 P252 y_671;
 rstr access_672;
 P246 vt_673;
 rstr v_674;
  } *F = rt_alloc(sizeof *F);
F->d_668 = d_668;
F->c_669 = NULL;
F->t_670 = NULL;
F->t_670 = f_resolve_subtype_96((*(P242)rt_nil_check(F->d_668)).a, &F->c_669);
F->y_671 = NULL;
F->y_671 = f_new_sym_84(g_y_var_230, (*(P242)rt_nil_check(F->d_668)).name);
F->access_672 = rt_str_copy(f_storage_110(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->d_668)).name)), F->t_670));
f_init_storage_97(&F->access_672, F->t_670, F->c_669);
if (((*(P242)rt_nil_check(F->d_668)).b != NULL)) {
F->vt_673 = NULL;
F->v_674 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->d_668)).b, F->t_670, &F->vt_673));
f_check_type_90(F->vt_673, F->t_670, (*(P242)rt_nil_check(F->d_668)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_99(&F->access_672, F->t_670, &F->v_674, F->c_669); b_; }));
}
(*(P252)rt_nil_check(F->y_671)).t = F->t_670;
(*(P252)rt_nil_check(F->y_671)).c = F->c_669;
(*(P252)rt_nil_check(F->y_671)).access = f_mk_2(&F->access_672);
f_define_81(F->y_671, (*(P242)rt_nil_check(F->d_668)).line);
ret_:
  return;
}

static void f_const_decl_112(P242 d_675) {
  struct f_const_decl_112fr { int dummy;
 P242 d_675;
 P244 c_676;
 P246 t_677;
 P246 vt_678;
 P252 y_679;
 int ok_680;
 rstr v_681;
 rstr access_682;
  } *F = rt_alloc(sizeof *F);
F->d_675 = d_675;
F->c_676 = NULL;
F->c_676 = f_new_cons_86();
F->t_677 = NULL;
F->vt_678 = NULL;
F->y_679 = NULL;
F->y_679 = f_new_sym_84(g_y_const_231, (*(P242)rt_nil_check(F->d_675)).name);
if (((*(P242)rt_nil_check(F->d_675)).a != NULL)) {
F->t_677 = f_resolve_subtype_96((*(P242)rt_nil_check(F->d_675)).a, &F->c_676);
}
{
F->v_681 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->d_675)).b, F->t_677, &F->vt_678));
if ((F->t_677 != NULL)) {
f_check_type_90(F->vt_678, F->t_677, (*(P242)rt_nil_check(F->d_675)).line);
} else {
F->t_677 = F->vt_678;
}
if (((*(P246)rt_nil_check(F->t_677)).kind == g_t_int_219)) {
(*(P252)rt_nil_check(F->y_679)).mvalue = f_manifest_98((*(P242)rt_nil_check(F->d_675)).b, &F->ok_680);
(*(P252)rt_nil_check(F->y_679)).hasmv = F->ok_680;
}
{
F->access_682 = rt_str_copy(f_storage_110(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->d_675)).name)), F->t_677));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_682, rt_str(" = ", 3)), f_copy_code_100(F->t_677, &F->v_681)), rt_str(";", 1)); b_; }));
(*(P252)rt_nil_check(F->y_679)).access = f_mk_2(&F->access_682);
}
}
(*(P252)rt_nil_check(F->y_679)).t = F->t_677;
(*(P252)rt_nil_check(F->y_679)).c = F->c_676;
(*(P252)rt_nil_check(F->y_679)).ro_flag = 1;
f_define_81(F->y_679, (*(P242)rt_nil_check(F->d_675)).line);
ret_:
  return;
}

static void f_subprogram_113(P242 d_683) {
  struct f_subprogram_113fr { int dummy;
 P242 d_683;
 P252 y_684;
 P256 saved_code_685;
 P256 saved_fields_686;
 int saved_in_687;
 P252 saved_sym_688;
 P260 saved_exits_689;
 rt_int saved_frames_690;
 P237 args_691;
 P250 pm_692;
 rstr frame_693;
 P237 head_694;
 rstr ct_695;
 rstr f_696;
 P252 p_697;
  } *F = rt_alloc(sizeof *F);
F->d_683 = d_683;
F->y_684 = NULL;
F->y_684 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->d_683)).name)));
F->saved_code_685 = NULL;
F->saved_code_685 = g_code_278;
F->saved_fields_686 = NULL;
F->saved_fields_686 = g_fields_buf_279;
F->saved_in_687 = g_in_func_280;
F->saved_sym_688 = NULL;
F->saved_sym_688 = g_func_sym_281;
F->saved_exits_689 = NULL;
F->saved_exits_689 = g_exits_282;
F->saved_frames_690 = g_frames_283;
F->args_691 = NULL;
F->args_691 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_692 = NULL;
F->pm_692 = (*(P252)rt_nil_check(F->y_684)).params;
F->frame_693 = rt_str_new(((rt_int)4LL));
rt_str_assign(&F->frame_693, rt_str("FR  ", 4));
F->head_694 = NULL;
g_code_278 = f_new_buffer_12();
g_fields_buf_279 = f_new_buffer_12();
g_in_func_280 = 1;
g_func_sym_281 = F->y_684;
g_exits_282 = NULL;
g_frames_283 = ((rt_int)0LL);
f_open_scope_82();
while ((F->pm_692 != NULL)) {
F->ct_695 = rt_str_copy(f_ctype_91((*(P250)rt_nil_check(F->pm_692)).t));
F->f_696 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_8(&(*(P237)rt_nil_check((*(P250)rt_nil_check(F->pm_692)).name))), rt_str("_", 1)); b_; })));
F->p_697 = NULL;
if ((((*(P237)rt_nil_check(F->args_691))).len > ((rt_int)0LL))) {
F->args_691 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check(F->args_691)), rt_str(", ", 2)); b_; }));
}
if (((*(P250)rt_nil_check(F->pm_692)).mode == g_m_const_215)) {
F->p_697 = f_new_sym_84(g_y_const_231, (*(P250)rt_nil_check(F->pm_692)).name);
f_put_13(g_fields_buf_279, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_695), rt_str(" ", 1)), F->f_696), rt_str(";", 1)); b_; }));
F->args_691 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->args_691)), F->ct_695), rt_str(" ", 1)), F->f_696); b_; }));
(*(P252)rt_nil_check(F->p_697)).access = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_696); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_696), rt_str(" = ", 3)), f_copy_code_100((*(P250)rt_nil_check(F->pm_692)).t, &F->f_696)), rt_str(";", 1)); b_; }));
} else {
F->p_697 = f_new_sym_84(g_y_var_230, (*(P250)rt_nil_check(F->pm_692)).name);
f_put_13(g_fields_buf_279, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_695), rt_str(" *", 2)), F->f_696), rt_str(";", 1)); b_; }));
F->args_691 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->args_691)), F->ct_695), rt_str(" *", 2)), F->f_696); b_; }));
(*(P252)rt_nil_check(F->p_697)).access = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_696), rt_str(")", 1)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_696), rt_str(" = ", 3)), F->f_696), rt_str(";", 1)); b_; }));
}
(*(P252)rt_nil_check(F->p_697)).t = (*(P250)rt_nil_check(F->pm_692)).t;
(*(P252)rt_nil_check(F->p_697)).c = (*(P250)rt_nil_check(F->pm_692)).c;
(*(P252)rt_nil_check(F->p_697)).ro_flag = (((*(P250)rt_nil_check(F->pm_692)).mode == g_m_const_215) || ((*(P250)rt_nil_check(F->pm_692)).mode == g_m_readonly_218));
f_define_81(F->p_697, (*(P242)rt_nil_check(F->d_683)).line);
F->pm_692 = (*(P250)rt_nil_check(F->pm_692)).next;
}
if (((*(P246)rt_nil_check((*(P252)rt_nil_check(F->y_684)).result)).kind != g_t_void_227)) {
f_put_13(g_fields_buf_279, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_91((*(P252)rt_nil_check(F->y_684)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_106((*(P242)rt_nil_check(F->d_683)).c);
f_body_elements_114((*(P242)rt_nil_check(F->d_683)).c);
f_close_scope_83();
if ((((*(P237)rt_nil_check(F->args_691))).len == ((rt_int)0LL))) {
F->args_691 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
F->head_694 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_91((*(P252)rt_nil_check(F->y_684)).result)), rt_str(" ", 1)), (*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_684)).cname))), rt_str("(", 1)), (*(P237)rt_nil_check(F->args_691))), rt_str(")", 1)); b_; }));
f_put_13(g_out_protos_273, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check(F->head_694)), rt_str(";", 1)); b_; }));
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check(F->head_694)), rt_str(" {", 2)); b_; }));
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_684)).cname))), rt_str("fr { int dummy;", 15)); b_; }));
f_splice_16(g_out_funcs_275, g_fields_buf_279);
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  } *F = rt_alloc(sizeof *F);", 29); b_; }));
f_splice_16(g_out_funcs_275, g_code_278);
if (((*(P246)rt_nil_check((*(P252)rt_nil_check(F->y_684)).result)).kind != g_t_void_227)) {
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_9()), rt_str("function ended without RETURN", 29)), f_q_9()), rt_str(");", 2)); b_; }));
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(g_out_funcs_275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_278 = F->saved_code_685;
g_fields_buf_279 = F->saved_fields_686;
g_in_func_280 = F->saved_in_687;
g_func_sym_281 = F->saved_sym_688;
g_exits_282 = F->saved_exits_689;
g_frames_283 = F->saved_frames_690;
ret_:
  return;
}

static void f_body_elements_114(P242 elems_698) {
  struct f_body_elements_114fr { int dummy;
 P242 elems_698;
 P242 e_699;
  } *F = rt_alloc(sizeof *F);
F->elems_698 = elems_698;
F->e_699 = NULL;
F->e_699 = F->elems_698;
while ((F->e_699 != NULL)) {
f_element_109(F->e_699);
F->e_699 = (*(P242)rt_nil_check(F->e_699)).next;
}
ret_:
  return;
}

static void f_gen_body_115(P242 elems_700) {
  struct f_gen_body_115fr { int dummy;
 P242 elems_700;
  } *F = rt_alloc(sizeof *F);
F->elems_700 = elems_700;
f_open_scope_82();
f_declare_body_106(F->elems_700);
f_body_elements_114(F->elems_700);
f_close_scope_83();
ret_:
  return;
}

static void f_pop_frames_116(rt_int upto_701) {
  struct f_pop_frames_116fr { int dummy;
 rt_int upto_701;
 rt_int i_702;
  } *F = rt_alloc(sizeof *F);
F->upto_701 = upto_701;
F->i_702 = g_frames_283;
while ((F->i_702 > F->upto_701)) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(xf", 9), f_itos_4(F->i_702)), rt_str(");", 2)); b_; }));
F->i_702 = rt_sub(F->i_702, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_gen_statement_117(P242 s_703) {
  struct f_gen_statement_117fr { int dummy;
 P242 s_703;
 P237 label_704;
 P260 x_705;
  } *F = rt_alloc(sizeof *F);
F->s_703 = s_703;
F->label_704 = NULL;
if (((*(P242)rt_nil_check(F->s_703)).tag != NULL)) {
F->x_705 = NULL;
{ R261 *cell706 = rt_alloc(sizeof(R261));
(*cell706).match = NULL;
(*cell706).label = NULL;
(*cell706).next = NULL;
F->x_705 = cell706;
}
F->label_704 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P260)rt_nil_check(F->x_705)).match = (*(P242)rt_nil_check(F->s_703)).tag;
(*(P260)rt_nil_check(F->x_705)).label = F->label_704;
(*(P260)rt_nil_check(F->x_705)).depth = g_frames_283;
(*(P260)rt_nil_check(F->x_705)).next = g_exits_282;
g_exits_282 = F->x_705;
}
{ rt_int sel707 = (*(P242)rt_nil_check(F->s_703)).kind;
if (0 || (sel707 == g_n_assign_169)) {
f_st_assign_118(F->s_703);
} else if (0 || (sel707 == g_n_call_170)) {
f_st_call_119(F->s_703);
} else if (0 || (sel707 == g_n_if_171)) {
f_st_if_120(F->s_703);
} else if (0 || (sel707 == g_n_case_172)) {
f_st_case_121(F->s_703);
} else if (0 || (sel707 == g_n_repeat_173)) {
f_st_repeat_122(F->s_703);
} else if (0 || (sel707 == g_n_begin_174)) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_115((*(P242)rt_nil_check(F->s_703)).a);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel707 == g_n_exit_176)) {
f_st_exit_123(F->s_703);
} else if (0 || (sel707 == g_n_return_177)) {
f_st_return_124(F->s_703);
} else if (0 || (sel707 == g_n_raise_179)) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_125(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->s_703)).name)), (*(P242)rt_nil_check(F->s_703)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel707 == g_n_reraise_180)) {
if ((g_handlers_284 == NULL)) {
f_fail_11((*(P242)rt_nil_check(F->s_703)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P237)rt_nil_check((*(P254)rt_nil_check(g_handlers_284)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel707 == g_n_guard_175)) {
f_st_guard_126(F->s_703);
} else if (0 || (sel707 == g_n_alloc_181)) {
f_st_alloc_127(F->s_703);
} else {
f_fail_11((*(P242)rt_nil_check(F->s_703)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P242)rt_nil_check(F->s_703)).tag != NULL)) {
g_exits_282 = (*(P260)rt_nil_check(g_exits_282)).next;
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check(F->label_704)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_118(P242 s_708) {
  struct f_st_assign_118fr { int dummy;
 P242 s_708;
 P237 lv_709;
 P246 t_710;
 P246 vt_711;
 P244 c_712;
 int ro_713;
 rstr v_714;
  } *F = rt_alloc(sizeof *F);
F->s_708 = s_708;
F->lv_709 = NULL;
F->t_710 = NULL;
F->vt_711 = NULL;
F->c_712 = NULL;
f_lvalue_130((*(P242)rt_nil_check(F->s_708)).a, &F->lv_709, &F->t_710, &F->c_712, &F->ro_713);
if (F->ro_713) {
f_fail_11((*(P242)rt_nil_check(F->s_708)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
{
F->v_714 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->s_708)).b, F->t_710, &F->vt_711));
f_check_type_90(F->vt_711, F->t_710, (*(P242)rt_nil_check(F->s_708)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_99(&(*(P237)rt_nil_check(F->lv_709)), F->t_710, &F->v_714, F->c_712); b_; }));
}
ret_:
  return;
}

static void f_st_call_119(P242 s_715) {
  struct f_st_call_119fr { int dummy;
 P242 s_715;
 P242 c_716;
 P246 t_717;
 P242 x_718;
  } *F = rt_alloc(sizeof *F);
F->s_715 = s_715;
F->c_716 = NULL;
F->c_716 = (*(P242)rt_nil_check(F->s_715)).a;
F->t_717 = NULL;
if ((((*(P242)rt_nil_check(F->c_716)).kind == g_n_name_158) || ((*(P242)rt_nil_check(F->c_716)).kind == g_n_ttapply_163))) {
F->x_718 = NULL;
F->x_718 = f_nn_22(g_n_apply_161, (*(P242)rt_nil_check(F->c_716)).line);
(*(P242)rt_nil_check(F->x_718)).a = F->c_716;
F->c_716 = F->x_718;
}
if (((*(P242)rt_nil_check(F->c_716)).kind != g_n_apply_161)) {
f_fail_11((*(P242)rt_nil_check(F->s_715)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_140(F->c_716, 1, &F->t_717), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_120(P242 s_719) {
  struct f_st_if_120fr { int dummy;
 P242 s_719;
 P242 a_720;
 int first_721;
 P246 t_722;
 rstr c_723;
  } *F = rt_alloc(sizeof *F);
F->s_719 = s_719;
F->a_720 = NULL;
F->a_720 = (*(P242)rt_nil_check(F->s_719)).a;
F->first_721 = 1;
F->t_722 = NULL;
while ((F->a_720 != NULL)) {
F->c_723 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->a_720)).a, g_ty_bool_286, &F->t_722));
f_check_type_90(F->t_722, g_ty_bool_286, (*(P242)rt_nil_check(F->s_719)).line);
if (F->first_721) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_723), rt_str(") {", 3)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_723), rt_str(") {", 3)); b_; }));
}
F->first_721 = 0;
f_gen_body_115((*(P242)rt_nil_check(F->a_720)).b);
F->a_720 = (*(P242)rt_nil_check(F->a_720)).next;
}
if (((*(P242)rt_nil_check(F->s_719)).flag == ((rt_int)1LL))) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_115((*(P242)rt_nil_check(F->s_719)).b);
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_121(P242 s_724) {
  struct f_st_case_121fr { int dummy;
 P242 s_724;
 P246 st_725;
 P246 vt_726;
 int first_727;
 P242 a_728;
 rstr sel_729;
 rstr tmp_730;
 P242 lab_731;
 P237 conds_732;
 rstr v_733;
 rstr lo_734;
 rstr hi_735;
  } *F = rt_alloc(sizeof *F);
F->s_724 = s_724;
F->st_725 = NULL;
F->vt_726 = NULL;
F->first_727 = 1;
F->a_728 = NULL;
F->a_728 = (*(P242)rt_nil_check(F->s_724)).b;
F->sel_729 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->s_724)).a, NULL, &F->st_725));
F->tmp_730 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_91(F->st_725)), rt_str(" ", 1)), F->tmp_730), rt_str(" = ", 3)), F->sel_729), rt_str(";", 1)); b_; }));
while ((F->a_728 != NULL)) {
F->lab_731 = NULL;
F->lab_731 = (*(P242)rt_nil_check(F->a_728)).a;
F->conds_732 = NULL;
F->conds_732 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_731 != NULL)) {
if (((*(P242)rt_nil_check(F->lab_731)).b == NULL)) {
F->v_733 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->lab_731)).a, F->st_725, &F->vt_726));
f_check_type_90(F->vt_726, F->st_725, (*(P242)rt_nil_check(F->s_724)).line);
F->conds_732 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->conds_732)), rt_str(" || ", 4)), f_eq_code_101(F->st_725, &F->tmp_730, &F->v_733)); b_; }));
} else {
F->lo_734 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->lab_731)).a, F->st_725, &F->vt_726));
F->hi_735 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->lab_731)).b, F->st_725, &F->vt_726));
F->conds_732 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->conds_732)), rt_str(" || (", 5)), F->tmp_730), rt_str(" >= ", 4)), F->lo_734), rt_str(" && ", 4)), F->tmp_730), rt_str(" <= ", 4)), F->hi_735), rt_str(")", 1)); b_; }));
}
F->lab_731 = (*(P242)rt_nil_check(F->lab_731)).next;
}
if (F->first_727) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P237)rt_nil_check(F->conds_732))), rt_str(") {", 3)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P237)rt_nil_check(F->conds_732))), rt_str(") {", 3)); b_; }));
}
F->first_727 = 0;
f_gen_body_115((*(P242)rt_nil_check(F->a_728)).b);
F->a_728 = (*(P242)rt_nil_check(F->a_728)).next;
}
if (F->first_727) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P242)rt_nil_check(F->s_724)).flag == ((rt_int)1LL))) {
f_gen_body_115((*(P242)rt_nil_check(F->s_724)).c);
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_122(P242 s_736) {
  struct f_st_repeat_122fr { int dummy;
 P242 s_736;
 P246 t_737;
 P244 c_738;
 rstr cond_739;
 rstr access_740;
 rstr lov_741;
 rstr hiv_742;
 rstr it_743;
 P252 y_744;
  } *F = rt_alloc(sizeof *F);
F->s_736 = s_736;
F->t_737 = NULL;
F->c_738 = NULL;
if (((*(P242)rt_nil_check(F->s_736)).flag == ((rt_int)0LL))) {
F->cond_739 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->s_736)).a, g_ty_bool_286, &F->t_737));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_739), rt_str(") {", 3)); b_; }));
f_gen_body_115((*(P242)rt_nil_check(F->s_736)).b);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_737 = f_resolve_subtype_96((*(P242)rt_nil_check(F->s_736)).a, &F->c_738);
if ((((*(P246)rt_nil_check(F->t_737)).kind == g_t_enum_222) && ((*(P244)rt_nil_check(F->c_738)).lo == NULL))) {
(*(P244)rt_nil_check(F->c_738)).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P244)rt_nil_check(F->c_738)).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_4(rt_sub(f_list_len_24((*(P246)rt_nil_check(F->t_737)).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P244)rt_nil_check(F->c_738)).lo == NULL)) {
f_fail_11((*(P242)rt_nil_check(F->s_736)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_740 = rt_str_copy(f_storage_110(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->s_736)).name)), F->t_737));
F->lov_741 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_742 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_743 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_744 = NULL;
F->y_744 = f_new_sym_84(g_y_const_231, (*(P242)rt_nil_check(F->s_736)).name);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_741), rt_str(" = ", 3)), (*(P237)rt_nil_check((*(P244)rt_nil_check(F->c_738)).lo))), rt_str(", ", 2)), F->hiv_742), rt_str(" = ", 3)), (*(P237)rt_nil_check((*(P244)rt_nil_check(F->c_738)).hi))), rt_str(";", 1)); b_; }));
if (((*(P242)rt_nil_check(F->s_736)).ival == ((rt_int)1LL))) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_743), rt_str(" = ", 3)), F->hiv_742), rt_str("; ", 2)), F->it_743), rt_str(" >= ", 4)), F->lov_741), rt_str("; ", 2)), F->it_743), rt_str("--) {", 5)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_743), rt_str(" = ", 3)), F->lov_741), rt_str("; ", 2)), F->it_743), rt_str(" <= ", 4)), F->hiv_742), rt_str("; ", 2)), F->it_743), rt_str("++) {", 5)); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_740, rt_str(" = ", 3)), F->it_743), rt_str(";", 1)); b_; }));
f_open_scope_82();
(*(P252)rt_nil_check(F->y_744)).t = F->t_737;
(*(P252)rt_nil_check(F->y_744)).c = F->c_738;
(*(P252)rt_nil_check(F->y_744)).access = f_mk_2(&F->access_740);
(*(P252)rt_nil_check(F->y_744)).ro_flag = 1;
f_define_81(F->y_744, (*(P242)rt_nil_check(F->s_736)).line);
f_gen_body_115((*(P242)rt_nil_check(F->s_736)).b);
f_close_scope_83();
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_123(P242 s_745) {
  struct f_st_exit_123fr { int dummy;
 P242 s_745;
 P260 x_746;
  } *F = rt_alloc(sizeof *F);
F->s_745 = s_745;
F->x_746 = NULL;
F->x_746 = g_exits_282;
while ((F->x_746 != NULL)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P260)rt_nil_check(F->x_746)).match)), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->s_745)).name)))) {
f_pop_frames_116((*(P260)rt_nil_check(F->x_746)).depth);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P237)rt_nil_check((*(P260)rt_nil_check(F->x_746)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_746 = (*(P260)rt_nil_check(F->x_746)).next;
}
f_fail_11((*(P242)rt_nil_check(F->s_745)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->s_745)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_124(P242 s_747) {
  struct f_st_return_124fr { int dummy;
 P242 s_747;
 P246 vt_748;
 rstr v_749;
  } *F = rt_alloc(sizeof *F);
F->s_747 = s_747;
F->vt_748 = NULL;
if ((!g_in_func_280)) {
f_pop_frames_116(((rt_int)0LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P246)rt_nil_check((*(P252)rt_nil_check(g_func_sym_281)).result)).kind == g_t_void_227)) {
if (((*(P242)rt_nil_check(F->s_747)).a != NULL)) {
f_fail_11((*(P242)rt_nil_check(F->s_747)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_116(((rt_int)0LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P242)rt_nil_check(F->s_747)).a == NULL)) {
f_fail_11((*(P242)rt_nil_check(F->s_747)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_749 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->s_747)).a, (*(P252)rt_nil_check(g_func_sym_281)).result, &F->vt_748));
f_check_type_90(F->vt_748, (*(P252)rt_nil_check(g_func_sym_281)).result, (*(P242)rt_nil_check(F->s_747)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_749), rt_str(";", 1)); b_; }));
f_pop_frames_116(((rt_int)0LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_125(rstr *name_750, rt_int line_751) {
  struct f_exc_id_125fr { int dummy;
 rstr *name_750;
 rt_int line_751;
 rstr result_;
 P252 y_752;
  } *F = rt_alloc(sizeof *F);
F->name_750 = name_750;
F->line_751 = line_751;
F->y_752 = NULL;
F->y_752 = f_lookup_80(&(*F->name_750));
if (((F->y_752 != NULL) && ((*(P252)rt_nil_check(F->y_752)).kind == g_y_exc_236))) {
F->result_ = (*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_752)).cname));
goto ret_;
}
if (((((*F->name_750)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_750), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_9()), (*F->name_750)), f_q_9()), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_751, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_750), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_126(P242 s_753) {
  struct f_st_guard_126fr { int dummy;
 P242 s_753;
 P242 h_754;
 int first_755;
 P254 hv_756;
 rstr f_757;
 rstr x_758;
 P242 n_760;
 P237 conds_761;
  } *F = rt_alloc(sizeof *F);
F->s_753 = s_753;
F->h_754 = NULL;
F->h_754 = (*(P242)rt_nil_check(F->s_753)).b;
F->first_755 = 1;
F->hv_756 = NULL;
g_frames_283 = rt_add(g_frames_283, ((rt_int)1LL));
{
F->f_757 = rt_str_copy(rt_str_cat(rt_str("xf", 2), f_itos_4(g_frames_283)));
F->x_758 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_757), rt_str(";", 1)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_757), rt_str(")) {", 4)); b_; }));
f_gen_body_115((*(P242)rt_nil_check(F->s_753)).a);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_757), rt_str(");", 2)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
g_frames_283 = rt_sub(g_frames_283, ((rt_int)1LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_757), rt_str(");", 2)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_758), rt_str(" = rt_xcur;", 11)); b_; }));
{ R255 *cell759 = rt_alloc(sizeof(R255));
(*cell759).s = NULL;
(*cell759).next = NULL;
F->hv_756 = cell759;
}
(*(P254)rt_nil_check(F->hv_756)).s = f_mk_2(&F->x_758);
(*(P254)rt_nil_check(F->hv_756)).next = g_handlers_284;
g_handlers_284 = F->hv_756;
while ((F->h_754 != NULL)) {
F->n_760 = NULL;
F->n_760 = (*(P242)rt_nil_check(F->h_754)).a;
F->conds_761 = NULL;
F->conds_761 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_760 != NULL)) {
F->conds_761 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->conds_761)), rt_str(" || ", 4)), F->x_758), rt_str(" == ", 4)), f_exc_id_125(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->n_760)).name)), (*(P242)rt_nil_check(F->s_753)).line)); b_; }));
F->n_760 = (*(P242)rt_nil_check(F->n_760)).next;
}
if (F->first_755) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P237)rt_nil_check(F->conds_761))), rt_str(") {", 3)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P237)rt_nil_check(F->conds_761))), rt_str(") {", 3)); b_; }));
}
F->first_755 = 0;
f_gen_body_115((*(P242)rt_nil_check(F->h_754)).b);
F->h_754 = (*(P242)rt_nil_check(F->h_754)).next;
}
if (F->first_755) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P242)rt_nil_check(F->s_753)).flag == ((rt_int)1LL))) {
f_gen_body_115((*(P242)rt_nil_check(F->s_753)).c);
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_758), rt_str(");", 2)); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_284 = (*(P254)rt_nil_check(g_handlers_284)).next;
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_127(P242 s_762) {
  struct f_st_alloc_127fr { int dummy;
 P242 s_762;
 P237 lv_763;
 P246 t_764;
 P246 target_765;
 P246 vt_766;
 P244 c_767;
 P244 tc_768;
 int ro_769;
 P242 d_770;
 P242 p_771;
 P242 a_772;
 rstr tcn_773;
 rstr cell_774;
 rstr v_775;
 rstr pv_776;
 P252 y_777;
 rstr v_778;
  } *F = rt_alloc(sizeof *F);
F->s_762 = s_762;
F->lv_763 = NULL;
F->t_764 = NULL;
F->target_765 = NULL;
F->vt_766 = NULL;
F->c_767 = NULL;
F->tc_768 = NULL;
F->d_770 = NULL;
F->p_771 = NULL;
F->a_772 = NULL;
f_lvalue_130((*(P242)rt_nil_check(F->s_762)).a, &F->lv_763, &F->t_764, &F->c_767, &F->ro_769);
if (((*(P246)rt_nil_check(F->t_764)).kind != g_t_ptr_226)) {
f_fail_11((*(P242)rt_nil_check(F->s_762)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_107(F->t_764);
F->d_770 = (*(P246)rt_nil_check(F->t_764)).decl;
F->target_765 = (*(P246)rt_nil_check(F->t_764)).target;
if ((f_list_len_24((*(P242)rt_nil_check(F->s_762)).b) != f_list_len_24((*(P242)rt_nil_check(F->d_770)).b))) {
f_fail_11((*(P242)rt_nil_check(F->s_762)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_4(f_list_len_24((*(P242)rt_nil_check(F->d_770)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_773 = rt_str_copy(f_ctype_91(F->target_765));
F->cell_774 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_773), rt_str(" *", 2)), F->cell_774), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_773), rt_str("));", 3)); b_; }));
f_open_scope_82();
F->p_771 = (*(P242)rt_nil_check(F->d_770)).b;
F->a_772 = (*(P242)rt_nil_check(F->s_762)).b;
while ((F->p_771 != NULL)) {
F->v_775 = rt_str_copy(f_gexpr_133(F->a_772, g_ty_int_285, &F->vt_766));
F->pv_776 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_777 = NULL;
F->y_777 = f_new_sym_84(g_y_const_231, (*(P242)rt_nil_check(F->p_771)).name);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_776), rt_str(" = ", 3)), F->v_775), rt_str(";", 1)); b_; }));
(*(P252)rt_nil_check(F->y_777)).t = g_ty_int_285;
(*(P252)rt_nil_check(F->y_777)).access = f_mk_2(&F->pv_776);
f_define_81(F->y_777, (*(P242)rt_nil_check(F->s_762)).line);
F->p_771 = (*(P242)rt_nil_check(F->p_771)).next;
F->a_772 = (*(P242)rt_nil_check(F->a_772)).next;
}
F->vt_766 = f_resolve_subtype_96((*(P242)rt_nil_check(F->d_770)).a, &F->tc_768);
f_init_storage_97(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_774), rt_str(")", 1)); b_; }), F->target_765, F->tc_768);
f_close_scope_83();
if (((*(P242)rt_nil_check(F->s_762)).c != NULL)) {
F->v_778 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->s_762)).c, F->target_765, &F->vt_766));
f_check_type_90(F->vt_766, F->target_765, (*(P242)rt_nil_check(F->s_762)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_99(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_774), rt_str(")", 1)); b_; }), F->target_765, &F->v_778, F->tc_768); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->lv_763)), rt_str(" = ", 3)), F->cell_774), rt_str(";", 1)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_deref_128(rstr *base_779, P246 t_780) {
  struct f_deref_128fr { int dummy;
 rstr *base_779;
 P246 t_780;
 rstr result_;
  } *F = rt_alloc(sizeof *F);
F->base_779 = base_779;
F->t_780 = t_780;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_91(F->t_780)), rt_str(")rt_nil_check(", 14)), (*F->base_779)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_129(P242 e_781) {
  struct f_is_lvalue_129fr { int dummy;
 P242 e_781;
 int result_;
 P252 y_782;
  } *F = rt_alloc(sizeof *F);
F->e_781 = e_781;
if (((*(P242)rt_nil_check(F->e_781)).kind == g_n_name_158)) {
F->y_782 = NULL;
F->y_782 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_781)).name)));
F->result_ = ((F->y_782 != NULL) && (((*(P252)rt_nil_check(F->y_782)).kind == g_y_var_230) || ((*(P252)rt_nil_check(F->y_782)).kind == g_y_const_231)));
goto ret_;
} else if (((*(P242)rt_nil_check(F->e_781)).kind == g_n_paren_168)) {
F->result_ = f_is_lvalue_129((*(P242)rt_nil_check(F->e_781)).a);
goto ret_;
} else if (((*(P242)rt_nil_check(F->e_781)).kind == g_n_select_162)) {
F->result_ = ((!rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_781)).name)), rt_str("LEN", 3))) && f_is_lvalue_129((*(P242)rt_nil_check(F->e_781)).a));
goto ret_;
} else if (((*(P242)rt_nil_check(F->e_781)).kind == g_n_apply_161)) {
if ((((*(P242)rt_nil_check(F->e_781)).b != NULL) && ((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_781)).b)).kind == g_n_range_167))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_129((*(P242)rt_nil_check(F->e_781)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_130(P242 e_783, P237 *code_784, P246 *t_785, P244 *c_786, int *ro_787) {
  struct f_lvalue_130fr { int dummy;
 P242 e_783;
 P237 *code_784;
 P246 *t_785;
 P244 *c_786;
 int *ro_787;
 P237 base_788;
 P246 bt_789;
 P244 bc_790;
 P252 y_791;
  } *F = rt_alloc(sizeof *F);
F->e_783 = e_783;
F->code_784 = code_784;
F->t_785 = t_785;
F->c_786 = c_786;
F->ro_787 = ro_787;
F->base_788 = NULL;
F->bt_789 = NULL;
F->bc_790 = NULL;
if (((*(P242)rt_nil_check(F->e_783)).kind == g_n_name_158)) {
F->y_791 = NULL;
F->y_791 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_783)).name)));
if ((F->y_791 == NULL)) {
f_fail_11((*(P242)rt_nil_check(F->e_783)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_783)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P252)rt_nil_check(F->y_791)).kind != g_y_var_230) && ((*(P252)rt_nil_check(F->y_791)).kind != g_y_const_231))) {
f_fail_11((*(P242)rt_nil_check(F->e_783)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_783)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_784) = (*(P252)rt_nil_check(F->y_791)).access;
(*F->t_785) = (*(P252)rt_nil_check(F->y_791)).t;
(*F->c_786) = (*(P252)rt_nil_check(F->y_791)).c;
(*F->ro_787) = (*(P252)rt_nil_check(F->y_791)).ro_flag;
} else if (((*(P242)rt_nil_check(F->e_783)).kind == g_n_paren_168)) {
f_lvalue_130((*(P242)rt_nil_check(F->e_783)).a, &(*F->code_784), &(*F->t_785), &(*F->c_786), &(*F->ro_787));
} else if (((*(P242)rt_nil_check(F->e_783)).kind == g_n_select_162)) {
f_lvalue_130((*(P242)rt_nil_check(F->e_783)).a, &F->base_788, &F->bt_789, &F->bc_790, &(*F->ro_787));
f_select_on_131(&(*(P237)rt_nil_check(F->base_788)), F->bt_789, F->e_783, &(*F->ro_787), &(*F->code_784), &(*F->t_785), &(*F->c_786));
} else if (((*(P242)rt_nil_check(F->e_783)).kind == g_n_apply_161)) {
f_lvalue_130((*(P242)rt_nil_check(F->e_783)).a, &F->base_788, &F->bt_789, &F->bc_790, &(*F->ro_787));
f_index_on_132(&(*(P237)rt_nil_check(F->base_788)), F->bt_789, F->e_783, &(*F->ro_787), 1, &(*F->code_784), &(*F->t_785), &(*F->c_786));
} else {
f_fail_11((*(P242)rt_nil_check(F->e_783)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_131(rstr *base_792, P246 bt_793, P242 e_794, int *ro_795, P237 *code_796, P246 *t_797, P244 *c_798) {
  struct f_select_on_131fr { int dummy;
 rstr *base_792;
 P246 bt_793;
 P242 e_794;
 int *ro_795;
 P237 *code_796;
 P246 *t_797;
 P244 *c_798;
 P248 f_799;
 P246 ft_800;
  } *F = rt_alloc(sizeof *F);
F->base_792 = base_792;
F->bt_793 = bt_793;
F->e_794 = e_794;
F->ro_795 = ro_795;
F->code_796 = code_796;
F->t_797 = t_797;
F->c_798 = c_798;
(*F->c_798) = g_no_cons_293;
if (((*(P246)rt_nil_check(F->bt_793)).kind == g_t_ptr_226)) {
f_finish_ptr_107(F->bt_793);
(*F->ro_795) = 0;
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_794)).name)), rt_str("ALL", 3))) {
(*F->code_796) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_128(&(*F->base_792), F->bt_793); b_; }));
(*F->t_797) = (*(P246)rt_nil_check(F->bt_793)).target;
goto ret_;
}
f_select_on_131(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_128(&(*F->base_792), F->bt_793); b_; }), (*(P246)rt_nil_check(F->bt_793)).target, F->e_794, &(*F->ro_795), &(*F->code_796), &(*F->t_797), &(*F->c_798));
goto ret_;
}
if (((*(P246)rt_nil_check(F->bt_793)).kind == g_t_record_225)) {
F->f_799 = NULL;
F->f_799 = (*(P246)rt_nil_check(F->bt_793)).fields;
while ((F->f_799 != NULL)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_799)).name)), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_794)).name)))) {
F->ft_800 = NULL;
F->ft_800 = f_resolve_subtype_96((*(P248)rt_nil_check(F->f_799)).st, &(*F->c_798));
(*F->code_796) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_792), rt_str(".", 1)), f_lower_s_8(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_794)).name)))); b_; }));
(*F->t_797) = (*(P248)rt_nil_check(F->f_799)).t;
goto ret_;
}
F->f_799 = (*(P248)rt_nil_check(F->f_799)).next;
}
f_fail_11((*(P242)rt_nil_check(F->e_794)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_794)).name))); b_; }));
}
f_fail_11((*(P242)rt_nil_check(F->e_794)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_794)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_132(rstr *base_801, P246 bt_802, P242 e_803, int *ro_804, int lv_805, P237 *code_806, P246 *t_807, P244 *c_808) {
  struct f_index_on_132fr { int dummy;
 rstr *base_801;
 P246 bt_802;
 P242 e_803;
 int *ro_804;
 int lv_805;
 P237 *code_806;
 P246 *t_807;
 P244 *c_808;
 P242 a_809;
 P246 it_810;
 rstr lo_811;
 rstr hi_812;
 rstr i_813;
 rstr i_814;
  } *F = rt_alloc(sizeof *F);
F->base_801 = base_801;
F->bt_802 = bt_802;
F->e_803 = e_803;
F->ro_804 = ro_804;
F->lv_805 = lv_805;
F->code_806 = code_806;
F->t_807 = t_807;
F->c_808 = c_808;
F->a_809 = NULL;
F->a_809 = (*(P242)rt_nil_check(F->e_803)).b;
F->it_810 = NULL;
(*F->c_808) = g_no_cons_293;
if (((*(P246)rt_nil_check(F->bt_802)).kind == g_t_ptr_226)) {
f_finish_ptr_107(F->bt_802);
(*F->ro_804) = 0;
f_index_on_132(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_128(&(*F->base_801), F->bt_802); b_; }), (*(P246)rt_nil_check(F->bt_802)).target, F->e_803, &(*F->ro_804), F->lv_805, &(*F->code_806), &(*F->t_807), &(*F->c_808));
goto ret_;
}
if ((f_list_len_24(F->a_809) != ((rt_int)1LL))) {
f_fail_11((*(P242)rt_nil_check(F->e_803)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P246)rt_nil_check(F->bt_802)).kind == g_t_string_223)) {
if (((*(P242)rt_nil_check(F->a_809)).kind == g_n_range_167)) {
F->lo_811 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->a_809)).a, g_ty_int_285, &F->it_810));
F->hi_812 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->a_809)).b, g_ty_int_285, &F->it_810));
(*F->code_806) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_801)), rt_str(", ", 2)), F->lo_811), rt_str(", ", 2)), F->hi_812), rt_str(")", 1)); b_; }));
(*F->t_807) = g_ty_string_289;
(*F->ro_804) = 1;
goto ret_;
}
{
F->i_813 = rt_str_copy(f_gexpr_133(F->a_809, g_ty_int_285, &F->it_810));
(*F->t_807) = g_ty_ascii_288;
if (F->lv_805) {
(*F->code_806) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_801)), rt_str(", ", 2)), F->i_813), rt_str("))", 2)); b_; }));
} else {
(*F->code_806) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_801)), rt_str(", ", 2)), F->i_813), rt_str(")", 1)); b_; }));
(*F->ro_804) = 1;
}
}
goto ret_;
}
if (((*(P246)rt_nil_check(F->bt_802)).kind == g_t_array_224)) {
F->i_814 = rt_str_copy(f_gexpr_133(F->a_809, (*(P246)rt_nil_check(F->bt_802)).idx, &F->it_810));
(*F->code_806) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_801), rt_str(".p[rt_index(", 12)), F->i_814), rt_str(", ", 2)), (*F->base_801)), rt_str(".lo, ", 5)), (*F->base_801)), rt_str(".hi) - ", 7)), (*F->base_801)), rt_str(".lo]", 4)); b_; }));
(*F->t_807) = (*(P246)rt_nil_check(F->bt_802)).elem;
(*F->c_808) = (*(P246)rt_nil_check(F->bt_802)).elemcons;
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->e_803)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_133(P242 e_815, P246 want_816, P246 *t_817) {
  struct f_gexpr_133fr { int dummy;
 P242 e_815;
 P246 want_816;
 P246 *t_817;
 rstr result_;
 rt_int k_818;
 P237 code_819;
 P244 c_820;
 int ro_821;
 P246 bt_822;
 rt_int i_823;
 P252 y_824;
 rstr a_825;
 rstr a_826;
 P242 nm_827;
 P252 y_828;
 rstr base_829;
 rstr base_830;
  } *F = rt_alloc(sizeof *F);
F->e_815 = e_815;
F->want_816 = want_816;
F->t_817 = t_817;
F->k_818 = (*(P242)rt_nil_check(F->e_815)).kind;
F->code_819 = NULL;
F->c_820 = NULL;
F->bt_822 = NULL;
(*F->t_817) = g_ty_int_285;
if ((F->k_818 == g_n_int_152)) {
if (((F->want_816 != NULL) && ((*(P246)rt_nil_check(F->want_816)).kind == g_t_float_221))) {
(*F->t_817) = g_ty_float_287;
F->result_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_818 == g_n_float_153)) {
(*F->t_817) = g_ty_float_287;
F->result_ = (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name));
goto ret_;
} else if ((F->k_818 == g_n_bool_156)) {
(*F->t_817) = g_ty_bool_286;
F->result_ = f_itos_4((*(P242)rt_nil_check(F->e_815)).ival);
goto ret_;
} else if ((F->k_818 == g_n_str_154)) {
(*F->t_817) = g_ty_string_289;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_135(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)))), rt_str(", ", 2)), f_itos_4(((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_818 == g_n_nil_157)) {
(*F->t_817) = g_ty_nil_292;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_818 == g_n_enum_155)) {
if (((F->want_816 != NULL) && ((*(P246)rt_nil_check(F->want_816)).kind == g_t_enum_222))) {
(*F->t_817) = F->want_816;
} else {
(*F->t_817) = f_enum_type_of_136(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), (*(P242)rt_nil_check(F->e_815)).line);
}
{
F->i_823 = f_lit_index_95((*(P246)rt_nil_check((*F->t_817))).lits, &(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)));
if ((F->i_823 < ((rt_int)0LL))) {
f_fail_11((*(P242)rt_nil_check(F->e_815)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_4(F->i_823);
goto ret_;
}
} else if ((F->k_818 == g_n_paren_168)) {
F->result_ = f_gexpr_133((*(P242)rt_nil_check(F->e_815)).a, F->want_816, &(*F->t_817));
goto ret_;
} else if ((F->k_818 == g_n_name_158)) {
F->y_824 = NULL;
F->y_824 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)));
if ((F->y_824 == NULL)) {
if ((((rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("SYS_OUT", 7)))) {
F->result_ = f_gcall_140(f_wrap_apply_134(F->e_815), 0, &(*F->t_817));
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->e_815)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P252)rt_nil_check(F->y_824)).kind == g_y_var_230) || ((*(P252)rt_nil_check(F->y_824)).kind == g_y_const_231))) {
(*F->t_817) = (*(P252)rt_nil_check(F->y_824)).t;
F->result_ = (*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_824)).access));
goto ret_;
}
if (((*(P252)rt_nil_check(F->y_824)).kind == g_y_func_232)) {
F->result_ = f_gcall_140(f_wrap_apply_134(F->e_815), 0, &(*F->t_817));
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->e_815)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((F->k_818 == g_n_unop_159)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("NOT", 3))) {
F->a_825 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_815)).a, g_ty_bool_286, &(*F->t_817)));
f_check_type_90((*F->t_817), g_ty_bool_286, (*(P242)rt_nil_check(F->e_815)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_825), rt_str(")", 1));
goto ret_;
}
{
F->a_826 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_815)).a, F->want_816, &(*F->t_817)));
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("+", 1))) {
F->result_ = F->a_826;
goto ret_;
} else if (((*(P246)rt_nil_check((*F->t_817))).kind == g_t_float_221)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_826), rt_str(")", 1));
goto ret_;
}
f_check_type_90((*F->t_817), g_ty_int_285, (*(P242)rt_nil_check(F->e_815)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_826), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_818 == g_n_binop_160)) {
F->result_ = f_gbinop_138(F->e_815, F->want_816, &(*F->t_817));
goto ret_;
} else if ((F->k_818 == g_n_apply_161)) {
if ((((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_815)).a)).kind == g_n_name_158) || ((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_815)).a)).kind == g_n_ttapply_163))) {
F->nm_827 = NULL;
F->nm_827 = (*(P242)rt_nil_check(F->e_815)).a;
F->y_828 = NULL;
if (((*(P242)rt_nil_check(F->nm_827)).kind == g_n_ttapply_163)) {
F->nm_827 = (*(P242)rt_nil_check(F->nm_827)).a;
}
F->y_828 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->nm_827)).name)));
if ((((F->y_828 == NULL) || ((*(P252)rt_nil_check(F->y_828)).kind == g_y_func_232)) || ((*(P252)rt_nil_check(F->y_828)).kind == g_y_proc_233))) {
F->result_ = f_gcall_140(F->e_815, 0, &(*F->t_817));
goto ret_;
}
}
{
F->base_829 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_815)).a, NULL, &F->bt_822));
F->ro_821 = 1;
f_index_on_132(&F->base_829, F->bt_822, F->e_815, &F->ro_821, 0, &F->code_819, &(*F->t_817), &F->c_820);
F->result_ = (*(P237)rt_nil_check(F->code_819));
goto ret_;
}
} else if ((F->k_818 == g_n_select_162)) {
if (((rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_815)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_137(F->e_815, &(*F->t_817));
goto ret_;
}
{
F->base_830 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_815)).a, NULL, &F->bt_822));
F->ro_821 = 1;
f_select_on_131(&F->base_830, F->bt_822, F->e_815, &F->ro_821, &F->code_819, &(*F->t_817), &F->c_820);
F->result_ = (*(P237)rt_nil_check(F->code_819));
goto ret_;
}
} else if ((F->k_818 == g_n_ttapply_163)) {
F->result_ = f_gcall_140(f_wrap_apply_134(F->e_815), 0, &(*F->t_817));
goto ret_;
} else if ((F->k_818 == g_n_cons_165)) {
F->result_ = f_constructor_139(F->e_815, F->want_816, &(*F->t_817));
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->e_815)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P242 f_wrap_apply_134(P242 e_831) {
  struct f_wrap_apply_134fr { int dummy;
 P242 e_831;
 P242 result_;
 P242 x_832;
  } *F = rt_alloc(sizeof *F);
F->e_831 = e_831;
F->x_832 = NULL;
F->x_832 = f_nn_22(g_n_apply_161, (*(P242)rt_nil_check(F->e_831)).line);
(*(P242)rt_nil_check(F->x_832)).a = F->e_831;
F->result_ = F->x_832;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_135(rstr *s_833) {
  struct f_c_string_135fr { int dummy;
 rstr *s_833;
 rstr result_;
 rt_int n_834;
 rt_int i_835;
 rstr r_839;
 rt_int j_840;
 rt_int i_841;
  } *F = rt_alloc(sizeof *F);
F->s_833 = s_833;
F->n_834 = ((rt_int)0LL);
{ rt_int lo836 = ((rt_int)1LL), hi837 = ((*F->s_833)).len;
for (rt_int it838 = lo836; it838 <= hi837; it838++) {
F->i_835 = it838;
if (((rt_str_get((*F->s_833), F->i_835) == 92) || (rt_str_get((*F->s_833), F->i_835) == 63))) {
F->n_834 = rt_add(F->n_834, ((rt_int)1LL));
}
}
}
{
F->r_839 = rt_str_new(rt_add(rt_add(((*F->s_833)).len, F->n_834), ((rt_int)2LL)));
F->j_840 = ((rt_int)1LL);
(*rt_str_at(&F->r_839, ((rt_int)1LL))) = 34;
{ rt_int lo842 = ((rt_int)1LL), hi843 = ((*F->s_833)).len;
for (rt_int it844 = lo842; it844 <= hi843; it844++) {
F->i_841 = it844;
F->j_840 = rt_add(F->j_840, ((rt_int)1LL));
if (((rt_str_get((*F->s_833), F->i_841) == 92) || (rt_str_get((*F->s_833), F->i_841) == 63))) {
(*rt_str_at(&F->r_839, F->j_840)) = 92;
F->j_840 = rt_add(F->j_840, ((rt_int)1LL));
}
(*rt_str_at(&F->r_839, F->j_840)) = rt_str_get((*F->s_833), F->i_841);
}
}
(*rt_str_at(&F->r_839, rt_add(F->j_840, ((rt_int)1LL)))) = 34;
F->result_ = F->r_839;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P246 f_enum_type_of_136(rstr *lit_845, rt_int line_846) {
  struct f_enum_type_of_136fr { int dummy;
 rstr *lit_845;
 rt_int line_846;
 P246 result_;
 P252 y_847;
 P244 c_848;
  } *F = rt_alloc(sizeof *F);
F->lit_845 = lit_845;
F->line_846 = line_846;
F->y_847 = NULL;
F->y_847 = g_scope_stack_268;
F->c_848 = NULL;
if ((f_lit_index_95((*(P246)rt_nil_check(g_ty_ascii_288)).lits, &(*F->lit_845)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_288;
goto ret_;
}
while ((F->y_847 != NULL)) {
if ((((((*(P252)rt_nil_check(F->y_847)).kind == g_y_abbrev_235) || ((*(P252)rt_nil_check(F->y_847)).kind == g_y_type_234)) && ((*(P252)rt_nil_check(F->y_847)).st != NULL)) && ((*(P242)rt_nil_check((*(P252)rt_nil_check(F->y_847)).st)).kind == g_s_enum_205))) {
if ((f_lit_index_95((*(P242)rt_nil_check((*(P252)rt_nil_check(F->y_847)).st)).a, &(*F->lit_845)) >= ((rt_int)0LL))) {
F->result_ = f_resolve_subtype_96((*(P252)rt_nil_check(F->y_847)).st, &F->c_848);
goto ret_;
}
}
F->y_847 = (*(P252)rt_nil_check(F->y_847)).stack;
}
f_fail_11(F->line_846, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_845)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_137(P242 e_849, P246 *t_850) {
  struct f_attribute_137fr { int dummy;
 P242 e_849;
 P246 *t_850;
 rstr result_;
 P246 bt_851;
 P244 c_852;
 P237 base_853;
 P252 y_854;
 P242 st_855;
  } *F = rt_alloc(sizeof *F);
F->e_849 = e_849;
F->t_850 = t_850;
F->bt_851 = NULL;
F->c_852 = NULL;
(*F->t_850) = g_ty_int_285;
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_849)).name)), rt_str("LEN", 3))) {
F->base_853 = NULL;
F->base_853 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_133((*(P242)rt_nil_check(F->e_849)).a, NULL, &F->bt_851); b_; }));
if (((*(P246)rt_nil_check(F->bt_851)).kind == g_t_ptr_226)) {
f_finish_ptr_107(F->bt_851);
F->base_853 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_128(&(*(P237)rt_nil_check(F->base_853)), F->bt_851); b_; }));
F->bt_851 = (*(P246)rt_nil_check(F->bt_851)).target;
}
if (((*(P246)rt_nil_check(F->bt_851)).kind != g_t_string_223)) {
f_fail_11((*(P242)rt_nil_check(F->e_849)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P237)rt_nil_check(F->base_853))), rt_str(").len", 5));
goto ret_;
}
if (((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_849)).a)).kind == g_n_name_158)) {
F->y_854 = NULL;
F->y_854 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_849)).a)).name)));
if (((F->y_854 != NULL) && (((*(P252)rt_nil_check(F->y_854)).kind == g_y_abbrev_235) || ((*(P252)rt_nil_check(F->y_854)).kind == g_y_type_234)))) {
F->st_855 = NULL;
F->st_855 = f_nn_22(g_s_name_213, (*(P242)rt_nil_check(F->e_849)).line);
(*(P242)rt_nil_check(F->st_855)).name = (*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_849)).a)).name;
(*F->t_850) = f_resolve_subtype_96(F->st_855, &F->c_852);
if (((*(P246)rt_nil_check((*F->t_850))).kind == g_t_enum_222)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_849)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_4(rt_sub(f_list_len_24((*(P246)rt_nil_check((*F->t_850))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P244)rt_nil_check(F->c_852)).lo != NULL)) {
if (rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_849)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P237)rt_nil_check((*(P244)rt_nil_check(F->c_852)).lo));
goto ret_;
}
F->result_ = (*(P237)rt_nil_check((*(P244)rt_nil_check(F->c_852)).hi));
goto ret_;
}
}
}
f_fail_11((*(P242)rt_nil_check(F->e_849)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P237)rt_nil_check((*(P242)rt_nil_check(F->e_849)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_138(P242 e_856, P246 want_857, P246 *t_858) {
  struct f_gbinop_138fr { int dummy;
 P242 e_856;
 P246 want_857;
 P246 *t_858;
 rstr result_;
 P237 op_859;
 P246 ta_860;
 P246 tb_861;
 P246 hint_862;
 rstr a_863;
 rstr b_864;
 P246 wa_865;
 P246 wb_866;
 rstr a_867;
 rstr b_868;
 rstr dummy_869;
 rstr a_870;
 rstr b_871;
 P246 ct_872;
 rstr a_873;
 rstr b_874;
  } *F = rt_alloc(sizeof *F);
F->e_856 = e_856;
F->want_857 = want_857;
F->t_858 = t_858;
F->op_859 = NULL;
F->op_859 = (*(P242)rt_nil_check(F->e_856)).name;
F->ta_860 = NULL;
F->tb_861 = NULL;
F->hint_862 = NULL;
(*F->t_858) = g_ty_bool_286;
if (((rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("AND", 3)) || rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("OR", 2))) || rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("XOR", 3)))) {
F->a_863 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).a, g_ty_bool_286, &F->ta_860));
F->b_864 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).b, g_ty_bool_286, &F->tb_861));
f_check_type_90(F->ta_860, g_ty_bool_286, (*(P242)rt_nil_check(F->e_856)).line);
f_check_type_90(F->tb_861, g_ty_bool_286, (*(P242)rt_nil_check(F->e_856)).line);
if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_863), rt_str(" && ", 4)), F->b_864), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_863), rt_str(" || ", 4)), F->b_864), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_863), rt_str(" != ", 4)), F->b_864), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("&", 1))) {
F->wa_865 = NULL;
F->wb_866 = NULL;
if (((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_856)).a)).kind == g_n_enum_155)) {
F->wa_865 = g_ty_ascii_288;
}
if (((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_856)).b)).kind == g_n_enum_155)) {
F->wb_866 = g_ty_ascii_288;
}
{
F->a_867 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).a, F->wa_865, &F->ta_860));
F->b_868 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).b, F->wb_866, &F->tb_861));
(*F->t_858) = g_ty_string_289;
if ((((*(P246)rt_nil_check(F->ta_860)).kind == g_t_string_223) && ((*(P246)rt_nil_check(F->tb_861)).kind == g_t_string_223))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_867), rt_str(", ", 2)), F->b_868), rt_str(")", 1));
goto ret_;
} else if ((((*(P246)rt_nil_check(F->ta_860)).kind == g_t_string_223) && ((*(P246)rt_nil_check(F->tb_861)).kind == g_t_enum_222))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_867), rt_str(", ", 2)), F->b_868), rt_str(")", 1));
goto ret_;
} else if ((((*(P246)rt_nil_check(F->ta_860)).kind == g_t_enum_222) && ((*(P246)rt_nil_check(F->tb_861)).kind == g_t_string_223))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_867), rt_str(", ", 2)), F->b_868), rt_str(")", 1));
goto ret_;
} else if ((((*(P246)rt_nil_check(F->ta_860)).kind == g_t_enum_222) && ((*(P246)rt_nil_check(F->tb_861)).kind == g_t_enum_222))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_867), rt_str(", ", 2)), F->b_868), rt_str(")", 1));
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->e_856)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_47(&(*(P237)rt_nil_check(F->op_859))) && (!rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("IN", 2))))) {
if (((((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_856)).a)).kind == g_n_enum_155) || ((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_856)).a)).kind == g_n_nil_157)) || ((*(P242)rt_nil_check((*(P242)rt_nil_check(F->e_856)).a)).kind == g_n_int_152))) {
F->dummy_869 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).b, NULL, &F->hint_862));
}
{
F->a_870 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).a, F->hint_862, &F->ta_860));
F->b_871 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).b, F->ta_860, &F->tb_861));
F->ct_872 = NULL;
F->ct_872 = F->ta_860;
(*F->t_858) = g_ty_bool_286;
if ((((*(P246)rt_nil_check(F->ta_860)).kind != g_t_nil_229) && ((*(P246)rt_nil_check(F->tb_861)).kind != g_t_nil_229))) {
f_check_type_90(F->tb_861, F->ta_860, (*(P242)rt_nil_check(F->e_856)).line);
}
if (((*(P246)rt_nil_check(F->ta_860)).kind == g_t_nil_229)) {
F->ct_872 = F->tb_861;
}
if (((*(P246)rt_nil_check(F->ct_872)).kind == g_t_string_223)) {
if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_870), rt_str(", ", 2)), F->b_871), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_870), rt_str(", ", 2)), F->b_871), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_870), rt_str(", ", 2)), F->b_871), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_870), rt_str(", ", 2)), F->b_871), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_871), rt_str(", ", 2)), F->a_870), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_871), rt_str(", ", 2)), F->a_870), rt_str(")", 1));
goto ret_;
}
if ((((*(P246)rt_nil_check(F->ct_872)).kind == g_t_array_224) || ((*(P246)rt_nil_check(F->ct_872)).kind == g_t_record_225))) {
if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("=", 1))) {
F->result_ = f_eq_code_101(F->ct_872, &F->a_870, &F->b_871);
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_101(F->ct_872, &F->a_870, &F->b_871)), rt_str(")", 1));
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->e_856)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_870), rt_str(" == ", 4)), F->b_871), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_870), rt_str(" != ", 4)), F->b_871), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_870), rt_str(" ", 1)), (*(P237)rt_nil_check(F->op_859))), rt_str(" ", 1)), F->b_871), rt_str(")", 1));
goto ret_;
}
}
{
F->a_873 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).a, F->want_857, &F->ta_860));
F->b_874 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->e_856)).b, F->ta_860, &F->tb_861));
if ((((*(P246)rt_nil_check(F->ta_860)).kind == g_t_float_221) || ((*(P246)rt_nil_check(F->tb_861)).kind == g_t_float_221))) {
(*F->t_858) = g_ty_float_287;
if (((rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("+", 1)) || rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("-", 1))) || rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_873), rt_str(" ", 1)), (*(P237)rt_nil_check(F->op_859))), rt_str(" ", 1)), F->b_874), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
}
}
f_check_type_90(F->ta_860, g_ty_int_285, (*(P242)rt_nil_check(F->e_856)).line);
f_check_type_90(F->tb_861, g_ty_int_285, (*(P242)rt_nil_check(F->e_856)).line);
(*F->t_858) = g_ty_int_285;
if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P237)rt_nil_check(F->op_859)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_873), rt_str(", ", 2)), F->b_874), rt_str(")", 1));
goto ret_;
}
f_fail_11((*(P242)rt_nil_check(F->e_856)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P237)rt_nil_check(F->op_859))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_139(P242 e_875, P246 want_876, P246 *t_877) {
  struct f_constructor_139fr { int dummy;
 P242 e_875;
 P246 want_876;
 P246 *t_877;
 rstr result_;
 P242 it_878;
 P248 f_879;
 P246 vt_880;
 rstr tmp_881;
 P237 parts_882;
 rstr v_883;
  } *F = rt_alloc(sizeof *F);
F->e_875 = e_875;
F->want_876 = want_876;
F->t_877 = t_877;
F->it_878 = NULL;
F->it_878 = (*(P242)rt_nil_check(F->e_875)).a;
F->f_879 = NULL;
F->vt_880 = NULL;
if (((F->want_876 == NULL) || ((*(P246)rt_nil_check(F->want_876)).kind != g_t_record_225))) {
f_fail_11((*(P242)rt_nil_check(F->e_875)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only record constructors are handled yet", 40); b_; }));
}
(*F->t_877) = F->want_876;
F->f_879 = (*(P246)rt_nil_check(F->want_876)).fields;
{
F->tmp_881 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_882 = NULL;
F->parts_882 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_91(F->want_876)), rt_str(" ", 1)), F->tmp_881), rt_str(";", 1)); b_; }));
if (((f_list_len_24(F->it_878) != ((rt_int)0LL)) && (f_list_len_24(F->it_878) != ((rt_int)0LL)))) {
while (((F->it_878 != NULL) && (F->f_879 != NULL))) {
if (((((*(P242)rt_nil_check(F->it_878)).a == NULL) || ((*(P242)rt_nil_check((*(P242)rt_nil_check((*(P242)rt_nil_check(F->it_878)).a)).a)).kind != g_n_name_158)) || (!rt_str_eq((*(P237)rt_nil_check((*(P242)rt_nil_check((*(P242)rt_nil_check((*(P242)rt_nil_check(F->it_878)).a)).a)).name)), (*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_879)).name)))))) {
f_fail_11((*(P242)rt_nil_check(F->e_875)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_879)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_883 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->it_878)).b, (*(P248)rt_nil_check(F->f_879)).t, &F->vt_880));
f_check_type_90(F->vt_880, (*(P248)rt_nil_check(F->f_879)).t, (*(P242)rt_nil_check(F->e_875)).line);
F->parts_882 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->parts_882)), rt_str(" ", 1)), F->tmp_881), rt_str(".", 1)), f_lower_s_8(&(*(P237)rt_nil_check((*(P248)rt_nil_check(F->f_879)).name)))), rt_str(" = ", 3)), f_copy_code_100((*(P248)rt_nil_check(F->f_879)).t, &F->v_883)), rt_str(";", 1)); b_; }));
}
F->it_878 = (*(P242)rt_nil_check(F->it_878)).next;
F->f_879 = (*(P248)rt_nil_check(F->f_879)).next;
}
}
if (((F->it_878 != NULL) || (F->f_879 != NULL))) {
f_fail_11((*(P242)rt_nil_check(F->e_875)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->parts_882)), rt_str(" ", 1)), F->tmp_881), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_140(P242 e_884, int is_stmt_885, P246 *t_886) {
  struct f_gcall_140fr { int dummy;
 P242 e_884;
 int is_stmt_885;
 P246 *t_886;
 rstr result_;
 P242 fn_887;
 P242 tt_888;
 P252 y_889;
 P237 args_890;
 P242 a_891;
 P250 pm_892;
 P246 lt_893;
 P246 vt_894;
 P237 lv_895;
 P244 lc_896;
 int ro_897;
 rstr v_898;
 rstr ct_899;
 rstr v_900;
  } *F = rt_alloc(sizeof *F);
F->e_884 = e_884;
F->is_stmt_885 = is_stmt_885;
F->t_886 = t_886;
F->fn_887 = NULL;
F->fn_887 = (*(P242)rt_nil_check(F->e_884)).a;
F->tt_888 = NULL;
F->y_889 = NULL;
F->args_890 = NULL;
F->args_890 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_891 = NULL;
F->a_891 = (*(P242)rt_nil_check(F->e_884)).b;
F->pm_892 = NULL;
F->lt_893 = NULL;
F->vt_894 = NULL;
F->lv_895 = NULL;
F->lc_896 = NULL;
if (((*(P242)rt_nil_check(F->fn_887)).kind == g_n_ttapply_163)) {
F->tt_888 = (*(P242)rt_nil_check(F->fn_887)).b;
F->fn_887 = (*(P242)rt_nil_check(F->fn_887)).a;
}
F->y_889 = f_lookup_80(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->fn_887)).name)));
if ((F->y_889 == NULL)) {
F->result_ = f_builtin_141(&(*(P237)rt_nil_check((*(P242)rt_nil_check(F->fn_887)).name)), F->tt_888, (*(P242)rt_nil_check(F->e_884)).b, (*(P242)rt_nil_check(F->e_884)).line, F->is_stmt_885, &(*F->t_886));
goto ret_;
}
if ((((*(P252)rt_nil_check(F->y_889)).kind != g_y_func_232) && ((*(P252)rt_nil_check(F->y_889)).kind != g_y_proc_233))) {
f_fail_11((*(P242)rt_nil_check(F->e_884)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->fn_887)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_885 && ((*(P252)rt_nil_check(F->y_889)).kind != g_y_proc_233))) {
f_fail_11((*(P242)rt_nil_check(F->e_884)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->fn_887)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_885) && ((*(P252)rt_nil_check(F->y_889)).kind != g_y_func_232))) {
f_fail_11((*(P242)rt_nil_check(F->e_884)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->fn_887)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_892 = (*(P252)rt_nil_check(F->y_889)).params;
while (((F->a_891 != NULL) && (F->pm_892 != NULL))) {
if ((((*(P237)rt_nil_check(F->args_890))).len > ((rt_int)0LL))) {
F->args_890 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check(F->args_890)), rt_str(", ", 2)); b_; }));
}
if ((((*(P250)rt_nil_check(F->pm_892)).mode == g_m_var_216) || ((*(P250)rt_nil_check(F->pm_892)).mode == g_m_out_217))) {
f_lvalue_130(F->a_891, &F->lv_895, &F->lt_893, &F->lc_896, &F->ro_897);
if (F->ro_897) {
f_fail_11((*(P242)rt_nil_check(F->e_884)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check((*(P250)rt_nil_check(F->pm_892)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_90(F->lt_893, (*(P250)rt_nil_check(F->pm_892)).t, (*(P242)rt_nil_check(F->e_884)).line);
F->args_890 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->args_890)), rt_str("&", 1)), (*(P237)rt_nil_check(F->lv_895))); b_; }));
} else if ((((*(P250)rt_nil_check(F->pm_892)).mode == g_m_readonly_218) && f_is_lvalue_129(F->a_891))) {
f_lvalue_130(F->a_891, &F->lv_895, &F->lt_893, &F->lc_896, &F->ro_897);
f_check_type_90(F->lt_893, (*(P250)rt_nil_check(F->pm_892)).t, (*(P242)rt_nil_check(F->e_884)).line);
F->args_890 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->args_890)), rt_str("&", 1)), (*(P237)rt_nil_check(F->lv_895))); b_; }));
} else if (((*(P250)rt_nil_check(F->pm_892)).mode == g_m_readonly_218)) {
F->v_898 = rt_str_copy(f_gexpr_133(F->a_891, (*(P250)rt_nil_check(F->pm_892)).t, &F->vt_894));
F->ct_899 = rt_str_copy(f_ctype_91((*(P250)rt_nil_check(F->pm_892)).t));
f_check_type_90(F->vt_894, (*(P250)rt_nil_check(F->pm_892)).t, (*(P242)rt_nil_check(F->e_884)).line);
F->args_890 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->args_890)), rt_str("({ ", 3)), F->ct_899), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_899), rt_str(")); *b_ = ", 10)), F->v_898), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_900 = rt_str_copy(f_gexpr_133(F->a_891, (*(P250)rt_nil_check(F->pm_892)).t, &F->vt_894));
f_check_type_90(F->vt_894, (*(P250)rt_nil_check(F->pm_892)).t, (*(P242)rt_nil_check(F->e_884)).line);
if (((((*(P246)rt_nil_check((*(P250)rt_nil_check(F->pm_892)).t)).kind == g_t_int_219) && ((*(P250)rt_nil_check(F->pm_892)).c != NULL)) && (*(P244)rt_nil_check((*(P250)rt_nil_check(F->pm_892)).c)).hasm)) {
F->args_890 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check(F->args_890)), rt_str("rt_range(", 9)), F->v_900), rt_str(", ", 2)), f_itos_4((*(P244)rt_nil_check((*(P250)rt_nil_check(F->pm_892)).c)).mlo)), rt_str(", ", 2)), f_itos_4((*(P244)rt_nil_check((*(P250)rt_nil_check(F->pm_892)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_890 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P237)rt_nil_check(F->args_890)), F->v_900); b_; }));
}
}
F->a_891 = (*(P242)rt_nil_check(F->a_891)).next;
F->pm_892 = (*(P250)rt_nil_check(F->pm_892)).next;
}
if (((F->a_891 != NULL) || (F->pm_892 != NULL))) {
f_fail_11((*(P242)rt_nil_check(F->e_884)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check((*(P242)rt_nil_check(F->fn_887)).name)), rt_str(" needs ", 7)), f_itos_4(rt_sub(f_list_len_24((*(P242)rt_nil_check(F->e_884)).b), f_list_len_24(F->a_891)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_886) = (*(P252)rt_nil_check(F->y_889)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P237)rt_nil_check((*(P252)rt_nil_check(F->y_889)).cname)), rt_str("(", 1)), (*(P237)rt_nil_check(F->args_890))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_141(rstr *name_901, P242 tt_902, P242 args_903, rt_int line_904, int is_stmt_905, P246 *t_906) {
  struct f_builtin_141fr { int dummy;
 rstr *name_901;
 P242 tt_902;
 P242 args_903;
 rt_int line_904;
 int is_stmt_905;
 P246 *t_906;
 rstr result_;
 P246 at_907;
 rt_int n_908;
 rstr a_909;
 rstr a_910;
 rstr a_911;
 P242 last_912;
 rstr a_913;
 rstr a_914;
 P237 lv_915;
 P244 lc_916;
 int ro_917;
 P242 last_918;
 rstr a_919;
  } *F = rt_alloc(sizeof *F);
F->name_901 = name_901;
F->tt_902 = tt_902;
F->args_903 = args_903;
F->line_904 = line_904;
F->is_stmt_905 = is_stmt_905;
F->t_906 = t_906;
F->at_907 = NULL;
F->n_908 = f_list_len_24(F->args_903);
(*F->t_906) = g_ty_void_290;
if (((rt_str_eq((*F->name_901), rt_str("POS", 3)) || rt_str_eq((*F->name_901), rt_str("SUCC", 4))) || rt_str_eq((*F->name_901), rt_str("PRED", 4)))) {
F->a_909 = rt_str_copy(f_gexpr_133(F->args_903, NULL, &F->at_907));
if (rt_str_eq((*F->name_901), rt_str("POS", 3))) {
if (((*(P246)rt_nil_check(F->at_907)).kind != g_t_enum_222)) {
f_fail_11(F->line_904, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_906) = g_ty_int_285;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_909), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_906) = F->at_907;
if (((*(P246)rt_nil_check(F->at_907)).kind == g_t_int_219)) {
if (rt_str_eq((*F->name_901), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_909), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_909), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_901), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_909), rt_str(" + 1, 0, ", 9)), f_itos_4(rt_sub(f_list_len_24((*(P246)rt_nil_check(F->at_907)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_909), rt_str(" - 1, 0, ", 9)), f_itos_4(rt_sub(f_list_len_24((*(P246)rt_nil_check(F->at_907)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_901), rt_str("ABS", 3))) {
F->a_910 = rt_str_copy(f_gexpr_133(F->args_903, NULL, &F->at_907));
(*F->t_906) = F->at_907;
if (((*(P246)rt_nil_check(F->at_907)).kind == g_t_int_219)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_910), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_910), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_901), rt_str("CNVT", 4))) {
if ((F->tt_902 == NULL)) {
f_fail_11(F->line_904, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_911 = rt_str_copy(f_gexpr_133(F->args_903, NULL, &F->at_907));
if ((((*(P242)rt_nil_check(F->tt_902)).kind == g_s_string_206) && ((*(P246)rt_nil_check(F->at_907)).kind == g_t_int_219))) {
(*F->t_906) = g_ty_string_289;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_911), rt_str(")", 1));
goto ret_;
} else if ((((*(P242)rt_nil_check(F->tt_902)).kind == g_s_int_203) && ((*(P246)rt_nil_check(F->at_907)).kind == g_t_string_223))) {
(*F->t_906) = g_ty_int_285;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_911), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_904, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_901), rt_str("WRITELN", 7))) {
if ((F->n_908 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_912 = NULL;
F->last_912 = F->args_903;
while (((*(P242)rt_nil_check(F->last_912)).next != NULL)) {
F->last_912 = (*(P242)rt_nil_check(F->last_912)).next;
}
{
F->a_913 = rt_str_copy(f_gexpr_133(F->last_912, g_ty_string_289, &F->at_907));
f_check_type_90(F->at_907, g_ty_string_289, F->line_904);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_913), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_901), rt_str("WRITE", 5))) {
F->a_914 = rt_str_copy(f_gexpr_133((*(P242)rt_nil_check(F->args_903)).next, NULL, &F->at_907));
if (((*(P246)rt_nil_check(F->at_907)).kind == g_t_string_223)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_914), rt_str(")", 1));
goto ret_;
} else if (((*(P246)rt_nil_check(F->at_907)).kind == g_t_enum_222)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_914), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_904, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_901), rt_str("READLN", 6))) {
F->lv_915 = NULL;
F->lc_916 = NULL;
F->last_918 = NULL;
F->last_918 = F->args_903;
while (((*(P242)rt_nil_check(F->last_918)).next != NULL)) {
F->last_918 = (*(P242)rt_nil_check(F->last_918)).next;
}
f_lvalue_130(F->last_918, &F->lv_915, &F->at_907, &F->lc_916, &F->ro_917);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P237)rt_nil_check(F->lv_915))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_901), rt_str("SIZELN", 6))) {
(*F->t_906) = g_ty_int_285;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_901), rt_str("EOF", 3))) {
(*F->t_906) = g_ty_bool_286;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_901), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_901), rt_str("SYS_OUT", 7)))) {
(*F->t_906) = g_ty_file_291;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_901), rt_str("OPEN", 4)) || rt_str_eq((*F->name_901), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if (rt_str_eq((*F->name_901), rt_str("HALT", 4))) {
F->a_919 = rt_str_copy(f_gexpr_133(F->args_903, g_ty_int_285, &F->at_907));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_919), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_904, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_901), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_142(P242 cap_920) {
  struct f_translate_142fr { int dummy;
 P242 cap_920;
  } *F = rt_alloc(sizeof *F);
F->cap_920 = cap_920;
f_declare_body_106((*(P242)rt_nil_check(F->cap_920)).c);
f_body_elements_114((*(P242)rt_nil_check(F->cap_920)).c);
ret_:
  return;
}

static void f_print_program_143(void) {
  struct f_print_program_143fr { int dummy;
  } *F = rt_alloc(sizeof *F);
f_emit_helpers_104();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_9()), rt_str("paleo.h", 7)), f_q_9()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_15(g_out_types_271);
f_print_buffer_15(g_out_helpers_272);
f_print_buffer_15(g_out_protos_273);
f_print_buffer_15(g_out_globals_274);
f_print_buffer_15(g_out_funcs_275);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_15(g_out_excs_277);
f_print_buffer_15(g_out_init_276);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R261(R261 *d, R261 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R261 cp_R261(R261 s) {
  R261 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R261(R261 a, R261 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A259(A259 *d, A259 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i <= s.hi - s.lo; i++) { d->p[i] = s.p[i]; }
}
static A259 cp_A259(A259 s) {
  A259 d = s; d.p = rt_alloc(sizeof(P252) * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));
  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A259(A259 a, A259 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R257(R257 *d, R257 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R257 cp_R257(R257 s) {
  R257 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R257(R257 a, R257 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R255(R255 *d, R255 s) {
  d->s = s.s;
  d->next = s.next;
}
static R255 cp_R255(R255 s) {
  R255 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R255(R255 a, R255 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R253(R253 *d, R253 s) {
  d->kind = s.kind;
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->access = s.access;
  d->cname = s.cname;
  d->ro_flag = s.ro_flag;
  d->mvalue = s.mvalue;
  d->hasmv = s.hasmv;
  d->st = s.st;
  d->decl = s.decl;
  d->params = s.params;
  d->result = s.result;
  d->depth = s.depth;
  d->chain = s.chain;
  d->stack = s.stack;
}
static R253 cp_R253(R253 s) {
  R253 d = s;
  d.kind = s.kind;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.access = s.access;
  d.cname = s.cname;
  d.ro_flag = s.ro_flag;
  d.mvalue = s.mvalue;
  d.hasmv = s.hasmv;
  d.st = s.st;
  d.decl = s.decl;
  d.params = s.params;
  d.result = s.result;
  d.depth = s.depth;
  d.chain = s.chain;
  d.stack = s.stack;
  return d;
}
static int eq_R253(R253 a, R253 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R251(R251 *d, R251 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->next = s.next;
}
static R251 cp_R251(R251 s) {
  R251 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.next = s.next;
  return d;
}
static int eq_R251(R251 a, R251 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.next == b.next);
}
static void as_R249(R249 *d, R249 s) {
  d->name = s.name;
  d->t = s.t;
  d->st = s.st;
  d->next = s.next;
}
static R249 cp_R249(R249 s) {
  R249 d = s;
  d.name = s.name;
  d.t = s.t;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R249(R249 a, R249 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.st == b.st) && (a.next == b.next);
}
static void as_R247(R247 *d, R247 s) {
  d->kind = s.kind;
  d->name = s.name;
  d->lits = s.lits;
  d->elem = s.elem;
  d->idx = s.idx;
  d->elemcons = s.elemcons;
  d->elemst = s.elemst;
  d->fields = s.fields;
  d->target = s.target;
  d->decl = s.decl;
  d->cname = s.cname;
  d->forward = s.forward;
  d->defined = s.defined;
  d->helpers = s.helpers;
  d->next = s.next;
}
static R247 cp_R247(R247 s) {
  R247 d = s;
  d.kind = s.kind;
  d.name = s.name;
  d.lits = s.lits;
  d.elem = s.elem;
  d.idx = s.idx;
  d.elemcons = s.elemcons;
  d.elemst = s.elemst;
  d.fields = s.fields;
  d.target = s.target;
  d.decl = s.decl;
  d.cname = s.cname;
  d.forward = s.forward;
  d.defined = s.defined;
  d.helpers = s.helpers;
  d.next = s.next;
  return d;
}
static int eq_R247(R247 a, R247 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R245(R245 *d, R245 s) {
  d->lo = s.lo;
  d->hi = s.hi;
  d->slen = s.slen;
  d->mlo = s.mlo;
  d->mhi = s.mhi;
  d->hasm = s.hasm;
}
static R245 cp_R245(R245 s) {
  R245 d = s;
  d.lo = s.lo;
  d.hi = s.hi;
  d.slen = s.slen;
  d.mlo = s.mlo;
  d.mhi = s.mhi;
  d.hasm = s.hasm;
  return d;
}
static int eq_R245(R245 a, R245 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm);
}
static void as_R243(R243 *d, R243 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->flag = s.flag;
  d->name = s.name;
  d->tag = s.tag;
  d->a = s.a;
  d->b = s.b;
  d->c = s.c;
  d->d = s.d;
  d->next = s.next;
}
static R243 cp_R243(R243 s) {
  R243 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.flag = s.flag;
  d.name = s.name;
  d.tag = s.tag;
  d.a = s.a;
  d.b = s.b;
  d.c = s.c;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R243(R243 a, R243 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.next == b.next);
}
static void as_A241(A241 *d, A241 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i <= s.hi - s.lo; i++) { d->p[i] = s.p[i]; }
}
static A241 cp_A241(A241 s) {
  A241 d = s; d.p = rt_alloc(sizeof(P238) * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));
  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A241(A241 a, A241 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R239(R239 *d, R239 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R239 cp_R239(R239 s) {
  R239 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R239(R239 a, R239 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_k_eof_144 = ((rt_int)0LL);
g_k_id_145 = ((rt_int)1LL);
g_k_kw_146 = ((rt_int)2LL);
g_k_op_147 = ((rt_int)3LL);
g_k_int_148 = ((rt_int)4LL);
g_k_float_149 = ((rt_int)5LL);
g_k_enum_150 = ((rt_int)6LL);
g_k_str_151 = ((rt_int)7LL);
g_n_int_152 = ((rt_int)1LL);
g_n_float_153 = ((rt_int)2LL);
g_n_str_154 = ((rt_int)3LL);
g_n_enum_155 = ((rt_int)4LL);
g_n_bool_156 = ((rt_int)5LL);
g_n_nil_157 = ((rt_int)6LL);
g_n_name_158 = ((rt_int)7LL);
g_n_unop_159 = ((rt_int)8LL);
g_n_binop_160 = ((rt_int)9LL);
g_n_apply_161 = ((rt_int)10LL);
g_n_select_162 = ((rt_int)11LL);
g_n_ttapply_163 = ((rt_int)12LL);
g_n_resolve_164 = ((rt_int)13LL);
g_n_cons_165 = ((rt_int)14LL);
g_n_citem_166 = ((rt_int)15LL);
g_n_range_167 = ((rt_int)16LL);
g_n_paren_168 = ((rt_int)17LL);
g_n_assign_169 = ((rt_int)20LL);
g_n_call_170 = ((rt_int)21LL);
g_n_if_171 = ((rt_int)22LL);
g_n_case_172 = ((rt_int)23LL);
g_n_repeat_173 = ((rt_int)24LL);
g_n_begin_174 = ((rt_int)25LL);
g_n_guard_175 = ((rt_int)26LL);
g_n_exit_176 = ((rt_int)27LL);
g_n_return_177 = ((rt_int)28LL);
g_n_goto_178 = ((rt_int)29LL);
g_n_raise_179 = ((rt_int)30LL);
g_n_reraise_180 = ((rt_int)31LL);
g_n_alloc_181 = ((rt_int)32LL);
g_n_assert_182 = ((rt_int)33LL);
g_n_create_183 = ((rt_int)34LL);
g_n_wait_184 = ((rt_int)35LL);
g_n_region_185 = ((rt_int)36LL);
g_n_var_186 = ((rt_int)40LL);
g_n_const_187 = ((rt_int)41LL);
g_n_abbrev_188 = ((rt_int)42LL);
g_n_newtype_189 = ((rt_int)43LL);
g_n_ptrtype_190 = ((rt_int)44LL);
g_n_proc_191 = ((rt_int)45LL);
g_n_func_192 = ((rt_int)46LL);
g_n_capsule_193 = ((rt_int)47LL);
g_n_expose_194 = ((rt_int)48LL);
g_n_exception_195 = ((rt_int)49LL);
g_n_task_196 = ((rt_int)50LL);
g_n_generic_197 = ((rt_int)51LL);
g_n_param_198 = ((rt_int)52LL);
g_n_arm_199 = ((rt_int)60LL);
g_n_label_200 = ((rt_int)61LL);
g_n_handler_201 = ((rt_int)62LL);
g_n_comp_202 = ((rt_int)63LL);
g_s_int_203 = ((rt_int)70LL);
g_s_float_204 = ((rt_int)71LL);
g_s_enum_205 = ((rt_int)72LL);
g_s_string_206 = ((rt_int)73LL);
g_s_array_207 = ((rt_int)74LL);
g_s_record_208 = ((rt_int)75LL);
g_s_union_209 = ((rt_int)76LL);
g_s_set_210 = ((rt_int)77LL);
g_s_mailbox_211 = ((rt_int)78LL);
g_s_file_212 = ((rt_int)79LL);
g_s_name_213 = ((rt_int)80LL);
g_s_of_214 = ((rt_int)81LL);
g_m_const_215 = ((rt_int)1LL);
g_m_var_216 = ((rt_int)2LL);
g_m_out_217 = ((rt_int)3LL);
g_m_readonly_218 = ((rt_int)4LL);
g_t_int_219 = ((rt_int)1LL);
g_t_bool_220 = ((rt_int)2LL);
g_t_float_221 = ((rt_int)3LL);
g_t_enum_222 = ((rt_int)4LL);
g_t_string_223 = ((rt_int)5LL);
g_t_array_224 = ((rt_int)6LL);
g_t_record_225 = ((rt_int)7LL);
g_t_ptr_226 = ((rt_int)8LL);
g_t_void_227 = ((rt_int)9LL);
g_t_file_228 = ((rt_int)10LL);
g_t_nil_229 = ((rt_int)11LL);
g_y_var_230 = ((rt_int)1LL);
g_y_const_231 = ((rt_int)2LL);
g_y_func_232 = ((rt_int)3LL);
g_y_proc_233 = ((rt_int)4LL);
g_y_type_234 = ((rt_int)5LL);
g_y_abbrev_235 = ((rt_int)6LL);
g_y_exc_236 = ((rt_int)7LL);
g_toks_262 = NULL;
g_ntoks_263 = ((rt_int)0LL);
g_tpos_264 = ((rt_int)1LL);
g_src_line_265 = ((rt_int)0LL);
g_table_266 = NULL;
g_depth_267 = ((rt_int)0LL);
g_scope_stack_268 = NULL;
g_all_types_269 = NULL;
g_serial_270 = ((rt_int)0LL);
g_out_types_271 = NULL;
g_out_helpers_272 = NULL;
g_out_protos_273 = NULL;
g_out_globals_274 = NULL;
g_out_funcs_275 = NULL;
g_out_init_276 = NULL;
g_out_excs_277 = NULL;
g_code_278 = NULL;
g_fields_buf_279 = NULL;
g_in_func_280 = 0;
g_func_sym_281 = NULL;
g_exits_282 = NULL;
g_frames_283 = ((rt_int)0LL);
g_handlers_284 = NULL;
g_ty_int_285 = NULL;
g_ty_bool_286 = NULL;
g_ty_float_287 = NULL;
g_ty_ascii_288 = NULL;
g_ty_string_289 = NULL;
g_ty_void_290 = NULL;
g_ty_file_291 = NULL;
g_ty_nil_292 = NULL;
g_no_cons_293 = NULL;
{ A241 *cell921 = rt_alloc(sizeof(A241));
rt_int pv922 = ((rt_int)1000000LL);
(*cell921).lo = ((rt_int)1LL); (*cell921).hi = pv922;
(*cell921).p = rt_alloc(sizeof(P238) * (size_t)((*cell921).hi >= (*cell921).lo ? (*cell921).hi - (*cell921).lo + 1 : 0));
g_toks_262 = cell921;
}
{ A259 *cell923 = rt_alloc(sizeof(A259));
rt_int pv924 = ((rt_int)4093LL);
(*cell923).lo = ((rt_int)0LL); (*cell923).hi = pv924;
(*cell923).p = rt_alloc(sizeof(P252) * (size_t)((*cell923).hi >= (*cell923).lo ? (*cell923).hi - (*cell923).lo + 1 : 0));
g_table_266 = cell923;
}
g_out_types_271 = f_new_buffer_12();
g_out_helpers_272 = f_new_buffer_12();
g_out_protos_273 = f_new_buffer_12();
g_out_globals_274 = f_new_buffer_12();
g_out_funcs_275 = f_new_buffer_12();
g_out_init_276 = f_new_buffer_12();
g_out_excs_277 = f_new_buffer_12();
g_code_278 = g_out_init_276;
g_no_cons_293 = f_new_cons_86();
g_ty_int_285 = f_new_typ_85(g_t_int_219);
g_ty_bool_286 = f_new_typ_85(g_t_bool_220);
g_ty_float_287 = f_new_typ_85(g_t_float_221);
g_ty_string_289 = f_new_typ_85(g_t_string_223);
g_ty_void_290 = f_new_typ_85(g_t_void_227);
g_ty_file_291 = f_new_typ_85(g_t_file_228);
g_ty_nil_292 = f_new_typ_85(g_t_nil_229);
{ rt_frame xf1;
if (RT_TRY(xf1)) {
f_init_ascii_94();
f_read_source_21();
f_translate_142(f_program_78());
f_print_program_143();
RT_POP(xf1);
} else {
RT_POP(xf1);
int x925 = rt_xcur;
if (0 || x925 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x925);
}
}
}
  rt_main_done();
  return 0;
}
