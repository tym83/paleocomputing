#include "paleo.h"
#include <math.h>
typedef struct R105 R105;
typedef struct R105 *P104;
typedef struct A103 A103;
struct A103 { rt_int lo, hi, lo2, hi2; P104 *p; };
typedef struct R112 R112;
typedef struct R112 *P111;
typedef struct A110 A110;
struct A110 { rt_int lo, hi, lo2, hi2; P111 *p; };
typedef struct R117 R117;
typedef struct R117 *P116;
typedef struct R121 R121;
typedef struct R121 *P120;
typedef rstr *P134;
typedef struct R138 R138;
typedef struct R138 *P137;
typedef struct R141 R141;
typedef struct R141 *P140;
typedef struct R146 R146;
typedef struct R146 *P145;
typedef struct R165 R165;
typedef struct R165 *P164;
typedef struct R172 R172;
typedef struct R172 *P171;
struct R121 { int dummy_; P145 head_; P145 tail_; };
struct R146 { int dummy_; P134 s_; P145 next_; };
struct R105 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P134 s_; };
struct R165 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P134 name_; P134 tag_; P164 a_; P164 b_; P164 c_; P164 d_; P164 e_; P164 next_; P134 formal_; };
typedef struct R1125 R1125;
typedef struct R1125 *P1124;
struct R112 { int dummy_; rt_int kind_; P134 name_; P116 t_; P171 c_; P134 access_path_; P134 cname_; int ro_; rt_int mvalue_; int hasmv_; P164 decl_; P1124 params_; P116 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P111 members_; P111 mnext_; P111 chain_; P111 stack_; };
typedef struct R1136 R1136;
typedef struct R1136 *P1135;
struct R117 { int dummy_; rt_int kind_; P134 name_; P164 lits_; P116 elem_; P116 idx_; P171 elemcons_; P171 tcons_; P1135 fields_; P116 target_; P164 decl_; P134 cname_; int forward_; int defined_; int priv_; P116 next_; P116 idx2_; P134 littab_; P116 parent_; rt_int ndigits_; P134 fdelta_; P134 fsmall_; rt_int dims_; int is_restricted_; };
struct R172 { int dummy_; P134 lo_; P134 hi_; P134 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P134 lo2_; P134 hi2_; };
struct R1136 { int dummy_; P134 name_; P116 t_; P171 c_; P1135 next_; P164 dflt_; };
struct R1125 { int dummy_; P134 name_; rt_int mode_; P116 t_; P171 c_; P134 cfield_; P164 dflt_; P1124 next_; };
struct R138 { int dummy_; P134 match_; P134 label_; rt_int depth_; int is_loop_; P137 next_; };
struct R141 { int dummy_; P164 body_node_; P111 visible_; P140 next_; };
struct f_mk_190fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_189;
 P134 result_;
};
struct f_new_name_193fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_191;
 P134 *res_192;
};
struct f_is_letter_195fr { int dummy;
 struct f_greenc_1fr *up;
 int c_194;
 int result_;
};
struct f_is_digit_197fr { int dummy;
 struct f_greenc_1fr *up;
 int c_196;
 int result_;
};
struct f_upper_199fr { int dummy;
 struct f_greenc_1fr *up;
 int c_198;
 int result_;
};
struct f_lower_s_201fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_200;
 rstr result_;
 rstr r_868;
 rt_int i_870;
};
struct f_upper_s_203fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_202;
 rstr result_;
 rstr r_874;
 rt_int i_876;
};
struct f_is_operator_205fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_204;
 int result_;
};
struct f_c_field_207fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_206;
 rstr result_;
};
struct f_q_208fr { int dummy;
 struct f_greenc_1fr *up;
 rstr result_;
};
struct f_fail_211fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_209;
 rstr msg_210;
};
struct f_new_buffer_212fr { int dummy;
 struct f_greenc_1fr *up;
 P120 result_;
};
struct f_put_to_215fr { int dummy;
 struct f_greenc_1fr *up;
 P120 b_213;
 rstr s_214;
 P145 l_882;
};
struct f_emit_217fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_216;
};
struct f_print_buffer_219fr { int dummy;
 struct f_greenc_1fr *up;
 P120 b_218;
 P145 l_885;
};
struct f_splice_222fr { int dummy;
 struct f_greenc_1fr *up;
 P120 a_220;
 P120 b_221;
};
struct f_is_reserved_224fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_223;
 int result_;
};
struct f_add_token_228fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_225;
 rstr s_226;
 rt_int ival_227;
};
struct f_digit_value_230fr { int dummy;
 struct f_greenc_1fr *up;
 int c_229;
 rt_int result_;
};
struct f_digit_in_233fr { int dummy;
 struct f_greenc_1fr *up;
 int c_231;
 rt_int base_232;
 rt_int result_;
 rt_int d_890;
};
struct f_accumulate_237fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_234;
 rt_int base_235;
 rt_int d_236;
};
struct f_lex_line_239fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_238;
 rt_int i_891;
 rt_int j_892;
 rt_int n_893;
 int c_894;
 int quote_895;
 rt_int v_896;
 rt_int d_897;
 rstr buf_898;
 rt_int bl_899;
 rt_int base_904;
 rstr two_909;
};
struct f_exponent_244fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_240;
 rt_int *j_241;
 rstr *buf_242;
 rt_int *bl_243;
};
struct f_read_file_text_247fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_245;
 P134 *contents_246;
};
struct f_check_include_248fr { int dummy;
 struct f_greenc_1fr *up;
 P134 t_911;
 rt_int saved_line_912;
 rt_int from_913;
 rt_int k_915;
};
struct f_include_line_252fr { int dummy;
 struct f_greenc_1fr *up;
 rstr t_249;
 rt_int from_250;
 rt_int to_251;
 rstr l_919;
 rt_int k_921;
};
struct f_read_source_253fr { int dummy;
 struct f_greenc_1fr *up;
 rstr buf_925;
 rt_int bl_926;
 int c_927;
};
struct f_nn_256fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_254;
 rt_int line_255;
 P164 result_;
};
struct f_append_260fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *head_257;
 P164 *tail_258;
 P164 x_259;
};
struct f_list_len_262fr { int dummy;
 struct f_greenc_1fr *up;
 P164 l_261;
 rt_int result_;
 rt_int n_934;
 P164 p_935;
};
struct f_cur_line_263fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_265fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_264;
 int result_;
};
struct f_at_op_267fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_266;
 int result_;
};
struct f_at_kind_269fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_268;
 int result_;
};
struct f_kind_at_271fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_270;
 rt_int result_;
};
struct f_text_at_273fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_272;
 rstr result_;
};
struct f_perror_275fr { int dummy;
 struct f_greenc_1fr *up;
 rstr msg_274;
};
struct f_skip_276fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_278fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_277;
};
struct f_expect_op_280fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_279;
};
struct f_expect_id_282fr { int dummy;
 struct f_greenc_1fr *up;
 P134 *res_281;
};
struct f_name_node_284fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_283;
 P164 x_937;
};
struct f_id_list_286fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_285;
 P164 head_938;
 P164 tail_939;
 P164 x_940;
};
struct f_binop_291fr { int dummy;
 struct f_greenc_1fr *up;
 P134 op_287;
 P164 l_288;
 P164 r_289;
 rt_int line_290;
 P164 result_;
 P164 x_942;
};
struct f_expr_293fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_292;
 P164 l_943;
 P164 r_944;
 P134 op_945;
 rt_int line_946;
};
struct f_is_rel_295fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_294;
 int result_;
};
struct f_relation_297fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_296;
 P164 l_948;
 P164 r_949;
 P164 lo_950;
 P164 hi_951;
 P164 t_952;
 P134 op_953;
 rt_int line_954;
 int neg_955;
};
struct f_simple_expr_299fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_298;
 P164 l_956;
 P164 r_957;
 P134 op_958;
 rt_int line_959;
};
struct f_term_301fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_300;
 P164 l_961;
 P164 r_962;
 P134 op_963;
 rt_int line_964;
};
struct f_factor_303fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_302;
 P164 l_966;
 P164 r_967;
 P134 op_968;
 rt_int line_969;
};
struct f_primary_305fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_304;
 P164 x_970;
 rt_int line_971;
};
struct f_agg_or_paren_307fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_306;
 rt_int line_972;
 P164 items_973;
 P164 itail_974;
 P164 it_975;
 P164 first_976;
 P164 keys_977;
 P164 ktail_978;
 P164 lab_979;
 P164 x_980;
 int more_981;
};
struct f_name_p_309fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_308;
 P164 p_984;
 P164 x_985;
 P164 args_986;
 P164 atail_987;
 P164 lo_988;
 P164 r_989;
 rt_int line_990;
 int more_991;
 P134 formal_995;
 rt_int mark_996;
};
struct f_subtype_ind_311fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_310;
 P164 x_997;
 P164 r_998;
 P164 args_999;
 P164 atail_1000;
 P164 lo_1001;
 rt_int line_1002;
 int more_1003;
};
struct f_type_spec_313fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_312;
 P164 x_1006;
};
struct f_type_def_315fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_314;
 P164 x_1007;
 P164 lits_1008;
 P164 ltail_1009;
 P164 l_1010;
 P164 idx_1011;
 P164 itail_1012;
 P164 r_1013;
 P164 comps_1014;
 P164 ctail_1015;
 P164 names_1016;
 P164 st_1017;
 P164 def_1018;
 P164 cm_1019;
 rt_int line_1020;
 int more_1021;
};
struct f_pragma_p_317fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_316;
 P164 x_1026;
 P164 a_1027;
 P164 head_1028;
 P164 tail_1029;
};
struct f_check_pragma_319fr { int dummy;
 struct f_greenc_1fr *up;
 P164 x_318;
 rstr p_1031;
 rt_int n_1032;
 P164 a_1033;
};
struct f_skip_visibility_320fr { int dummy;
 struct f_greenc_1fr *up;
 P164 names_1035;
};
struct f_skip_representation_321fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_323fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_322;
 P164 head_1039;
 P164 tail_1040;
 P164 x_1041;
 P164 names_1042;
};
struct f_object_decl_325fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_324;
 P164 head_1044;
 P164 tail_1045;
 P164 names_1046;
 P164 st_1047;
 P164 init_1048;
 P164 x_1049;
 rt_int line_1050;
 int is_const_1051;
};
struct f_type_decl_327fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_326;
 P164 x_1054;
 rt_int line_1055;
};
struct f_formal_part_329fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_328;
 P164 head_1056;
 P164 tail_1057;
 P164 names_1058;
 P164 st_1059;
 P164 def_1060;
 P164 p_1061;
 rt_int mode_1062;
 int more_1063;
};
struct f_designator_331fr { int dummy;
 struct f_greenc_1fr *up;
 P134 *res_330;
};
struct f_subprogram_333fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_332;
 P164 x_1066;
 rt_int line_1067;
 int is_proc_1068;
};
struct f_body_part_335fr { int dummy;
 struct f_greenc_1fr *up;
 P164 x_334;
};
struct f_parse_handlers_337fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_336;
 P164 head_1069;
 P164 tail_1070;
 P164 h_1071;
 P164 names_1072;
 P164 ntail_1073;
 P164 n_1074;
};
struct f_package_p_339fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_338;
 P164 x_1078;
 rt_int line_1079;
};
struct f_at_statements_end_340fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_342fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_341;
 P164 head_1080;
 P164 tail_1081;
 P164 x_1082;
};
struct f_statement_344fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_343;
 P164 x_1084;
 P164 t_1085;
 rt_int line_1086;
 P134 label_1087;
};
struct f_task_statement_346fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_345;
};
struct f_if_stmt_348fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_347;
 P164 x_1089;
 P164 arm_1090;
 P164 head_1091;
 P164 tail_1092;
 int go_1093;
};
struct f_case_stmt_350fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_349;
 P164 x_1095;
 P164 arm_1096;
 P164 head_1097;
 P164 tail_1098;
 P164 labs_1099;
 P164 ltail_1100;
 P164 l_1101;
 int others_arm_1102;
};
struct f_loop_stmt_352fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_351;
 P164 x_1105;
 P164 r_1106;
 rt_int line_1107;
};
struct f_compilation_354fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_353;
 P164 head_1108;
 P164 tail_1109;
 P164 x_1110;
};
struct f_hash_356fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_355;
 rt_int result_;
 rt_int h_1112;
 rt_int i_1114;
};
struct f_lookup_358fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_357;
 P111 result_;
 P111 y_1118;
};
struct f_same_task_361fr { int dummy;
 struct f_greenc_1fr *up;
 P111 a_359;
 P111 b_360;
 int result_;
};
struct f_lookup_entry_364fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_362;
 P111 owner_363;
 P111 result_;
 P111 y_1120;
};
struct f_lookup_decl_366fr { int dummy;
 struct f_greenc_1fr *up;
 P164 d_365;
 P111 result_;
 P111 y_1122;
};
struct f_overloadable_368fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_367;
 int result_;
};
struct f_same_371fr { int dummy;
 struct f_greenc_1fr *up;
 P116 a_369;
 P116 b_370;
 int result_;
};
struct f_same_signature_374fr { int dummy;
 struct f_greenc_1fr *up;
 P1124 a_372;
 P1124 b_373;
 int result_;
 P1124 x_1126;
 P1124 y_1127;
};
struct f_define_377fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_375;
 rt_int line_376;
 rt_int h_1129;
 P111 z_1130;
};
struct f_open_scope_378fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_379fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_382fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_380;
 P134 name_381;
 P111 result_;
};
struct f_new_typ_384fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_383;
 P116 result_;
};
struct f_new_cons_385fr { int dummy;
 struct f_greenc_1fr *up;
 P171 result_;
};
struct f_kind_name_387fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_386;
 rstr result_;
};
struct f_check_type_391fr { int dummy;
 struct f_greenc_1fr *up;
 P116 got_388;
 P116 want_389;
 rt_int line_390;
};
struct f_field_count_393fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_392;
 rt_int result_;
 rt_int n_1142;
 P1135 f_1143;
};
struct f_ctype_396fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_394;
 P134 *r_395;
 P134 s_1145;
};
struct f_field_decls_399fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_397;
 P134 *r_398;
 P1135 f_1147;
 P134 s_1148;
 P134 ct_1149;
};
struct f_declare_ctype_401fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_400;
 P134 ct_1151;
 P134 s_1152;
 P116 target_1153;
};
struct f_lit_index_404fr { int dummy;
 struct f_greenc_1fr *up;
 P164 lits_402;
 rstr name_403;
 rt_int result_;
 rt_int i_1154;
 P164 l_1155;
};
struct f_manifest_408fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_405;
 rt_int *v_406;
 int *ok_407;
 rt_int a_1157;
 rt_int b_1158;
 int ok2_1159;
 P111 y_1160;
};
struct f_resolve_412fr { int dummy;
 struct f_greenc_1fr *up;
 P164 st_409;
 P116 *t_410;
 P171 *c_411;
 P111 y_1161;
 P116 dummy_1162;
 P134 code_1163;
 int ok_1164;
 P164 r_1165;
};
struct f_type_definition_417fr { int dummy;
 struct f_greenc_1fr *up;
 P164 d_413;
 P134 name_414;
 P116 *t_415;
 P171 *c_416;
 P116 dummy_1166;
 P116 it_1167;
 P171 ic_1168;
 P164 l_1169;
 P164 comp_1170;
 P1135 f_1171;
 P1135 tail_1172;
 int ok_1173;
 rt_int n_1174;
 P111 y_1175;
};
struct f_finish_ptr_419fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_418;
 P171 c_1181;
};
struct f_init_storage_423fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_420;
 P116 t_421;
 P171 c_422;
 P134 ct_1182;
 P134 i_1183;
 P134 v_1184;
 P134 x_1185;
 P116 vt_1186;
 P1135 f_1187;
};
struct f_composite_425fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_424;
 int result_;
};
struct f_assign_code_431fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_426;
 P116 t_427;
 rstr v_428;
 P171 c_429;
 P134 *r_430;
 P134 ct_1189;
};
struct f_copy_code_435fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_432;
 rstr v_433;
 P134 *r_434;
 P134 ct_1190;
};
struct f_eq_code_440fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_436;
 rstr a_437;
 rstr b_438;
 P134 *r_439;
 P134 ct_1191;
};
struct f_seen_name_443fr { int dummy;
 struct f_greenc_1fr *up;
 P145 l_441;
 rstr s_442;
 int result_;
 P145 p_1192;
};
struct f_emit_helpers_444fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_1194;
 P145 done_1195;
 P145 l_1196;
};
struct f_helper_bodies_446fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_445;
 P134 c_1200;
 P120 b_1201;
 P134 ct_1202;
 P134 x_1203;
 P134 y_1204;
 P134 conds_1205;
 P1135 f_1206;
};
struct f_storage_450fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_447;
 P116 t_448;
 P134 *access_code_449;
 P134 ct_1209;
 P134 g_1210;
};
struct f_bind_453fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_451;
 P134 access_code_452;
};
struct f_declare_subprograms_455fr { int dummy;
 struct f_greenc_1fr *up;
 P164 from_454;
 P164 e_1211;
};
struct f_declare_one_457fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_456;
 P111 y_1213;
 P111 z_1214;
};
struct f_build_subprogram_460fr { int dummy;
 struct f_greenc_1fr *up;
 P164 d_458;
 P111 *y_459;
 P164 p_1217;
 P1124 pm_1218;
 P1124 tail_1219;
 P171 rc_1220;
 rt_int k_1221;
};
struct f_decl_elements_462fr { int dummy;
 struct f_greenc_1fr *up;
 P164 decls_461;
 P164 e_1225;
 int declared_1226;
};
struct f_decl_element_464fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_463;
 P111 y_1228;
 P111 z_1229;
 P116 t_1230;
 P116 vt_1231;
 P171 c_1232;
 P134 acc_1233;
 P134 v_1234;
 P134 x_1235;
 int ok_1236;
};
struct f_pragma_decl_466fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_465;
};
struct f_other_decl_468fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_467;
};
struct f_subprogram_body_471fr { int dummy;
 struct f_greenc_1fr *up;
 P164 d_469;
 P111 y_470;
 P120 saved_code_1238;
 P120 saved_fields_1239;
 int saved_in_1240;
 P111 saved_sym_1241;
 P137 saved_exits_1242;
 rt_int saved_frames_1243;
 P145 saved_handlers_1244;
 P145 saved_cleanups_1245;
 P111 saved_pure_1246;
 P134 aw_1247;
 rt_int saved_pdepth_1248;
 P134 args_1249;
 P134 head_1250;
 P134 frame_1251;
 P134 parent_1252;
 P134 ct_1253;
 P134 x_1254;
 P1124 pm_1255;
 P111 p_1256;
};
struct f_gen_statements_473fr { int dummy;
 struct f_greenc_1fr *up;
 P164 stmts_472;
 P164 s_1259;
};
struct f_pop_frames_475fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_474;
 rt_int i_1261;
 P145 c_1262;
};
struct f_push_cleanup_477fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_476;
};
struct f_pop_cleanup_478fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_482fr { int dummy;
 struct f_greenc_1fr *up;
 P164 stmts_479;
 P164 hs_480;
 rt_int line_481;
 P134 f_1266;
 P134 x_1267;
 P164 h_1268;
 P164 n_1269;
 int first_1270;
 int has_others_1271;
 P134 conds_1272;
};
struct f_exc_id_486fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_483;
 rt_int line_484;
 P134 *r_485;
 P111 y_1277;
};
struct f_gen_statement_488fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_487;
 P116 t_1278;
 P116 vt_1279;
 P171 c_1280;
 P134 lv_1281;
 P134 v_1282;
 P134 x_1283;
 int ro_1284;
};
struct f_slice_assign_490fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_489;
 P134 lv_1286;
 P134 lo_1287;
 P134 hi_1288;
 P134 v_1289;
 P116 t_1290;
 P116 vt_1291;
 P171 c_1292;
 int ro_1293;
};
struct f_gen_call_492fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_491;
 P164 c_1294;
 P116 t_1295;
 P134 v_1296;
};
struct f_gen_if_494fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_493;
 P164 a_1297;
 int first_1298;
 P116 t_1299;
 P134 v_1300;
};
struct f_gen_case_496fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_495;
 P116 st_1302;
 P116 vt_1303;
 int first_1304;
 P164 a_1305;
 P164 lab_1306;
 P134 sel_1307;
 P134 tmp_1308;
 P134 ct_1309;
 P134 conds_1310;
 P134 v_1311;
 P134 lo_1312;
 P134 hi_1313;
};
struct f_push_exit_500fr { int dummy;
 struct f_greenc_1fr *up;
 P134 match_497;
 int is_loop_498;
 P134 *label_499;
};
struct f_gen_loop_502fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_501;
 P116 t_1318;
 P116 vt_1319;
 P171 c_1320;
 P134 label_1321;
 P134 cond_1322;
 P134 acc_1323;
 P134 lov_1324;
 P134 hiv_1325;
 P134 it_1326;
 P111 y_1327;
 P164 r_1328;
};
struct f_gen_block_504fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_503;
 P134 label_1329;
 P134 aw_1330;
};
struct f_gen_exit_506fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_505;
 P137 x_1331;
 P116 t_1332;
 P134 v_1333;
};
struct f_gen_return_508fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_507;
 P116 vt_1335;
 P134 v_1336;
};
struct f_access_of_511fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_509;
 P134 *r_510;
 P134 p_1337;
 rt_int i_1339;
};
struct f_link_to_514fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_512;
 P134 *r_513;
 rt_int i_1344;
};
struct f_c_ident_516fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_515;
 rstr result_;
};
struct f_deref_520fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_517;
 P116 t_518;
 P134 *r_519;
 P134 ct_1348;
};
struct f_is_object_522fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_521;
 int result_;
 P111 y_1349;
};
struct f_lvalue_528fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_523;
 P134 *code_out_524;
 P116 *t_525;
 P171 *c_526;
 int *ro_527;
 P111 y_1350;
 P134 base_1351;
 P116 bt_1352;
 P171 bc_1353;
};
struct f_select_on_536fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_529;
 P116 bt_530;
 P164 e_531;
 int *ro_532;
 P134 *code_out_533;
 P116 *t_534;
 P171 *c_535;
 P1135 f_1354;
 P134 d_1355;
};
struct f_index_on_545fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_537;
 P116 bt_538;
 P164 e_539;
 int *ro_540;
 int lv_541;
 P134 *code_out_542;
 P116 *t_543;
 P171 *c_544;
 P164 a_1357;
 P116 it_1358;
 P134 i_1359;
 P134 lo_1360;
 P134 hi_1361;
 P134 d_1362;
};
struct f_is_char_lit_547fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_546;
 int result_;
};
struct f_is_enum_lit_549fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_548;
 int result_;
 P111 y_1363;
};
struct f_c_string_551fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_550;
 rstr result_;
 rt_int n_1364;
 rt_int i_1366;
 rstr r_1371;
 rt_int j_1372;
 rt_int i_1374;
};
struct f_is_literal_553fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_552;
 int result_;
};
struct f_range_bounds_561fr { int dummy;
 struct f_greenc_1fr *up;
 P164 l_554;
 P164 h_555;
 P116 want_556;
 rt_int line_557;
 P116 *t_558;
 P134 *lo_559;
 P134 *hi_560;
 P116 w_1378;
 P116 t2_1379;
};
struct f_gexpr_566fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_562;
 P116 want_563;
 P116 *t_564;
 P134 *r_565;
 P111 y_1380;
 P116 bt_1381;
 P171 c_1382;
 int ro_1383;
 P134 base_1384;
 P134 a_1385;
 P164 nm_1386;
 int saved_lv_1387;
};
struct f_gexpr_1_571fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_567;
 P116 want_568;
 P116 *t_569;
 P134 *r_570;
 P111 y_1388;
 P116 bt_1389;
 P171 c_1390;
 int ro_1391;
 P134 base_1392;
 P134 a_1393;
 P164 nm_1394;
};
struct f_char_literal_576fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_572;
 P116 want_573;
 P116 *t_574;
 P134 *r_575;
 rt_int i_1396;
};
struct f_gen_name_581fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_577;
 P116 want_578;
 P116 *t_579;
 P134 *r_580;
 P111 y_1397;
 P111 z_1398;
 P164 call_1399;
};
struct f_gen_unop_586fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_582;
 P116 want_583;
 P116 *t_584;
 P134 *r_585;
 P134 a_1401;
 int done_1402;
};
struct f_gen_binop_591fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_587;
 P116 want_588;
 P116 *t_589;
 P134 *r_590;
 rstr op_1403;
 P116 ta_1404;
 P116 tb_1405;
 P116 hint_1406;
 P116 ct_1407;
 P134 a_1408;
 P134 b_1409;
 P134 x_1410;
 P134 dummy_1411;
 int done_1412;
};
struct f_conversion_596fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_592;
 P111 y_593;
 P116 *t_594;
 P134 *r_595;
 P116 aty_1413;
 P134 a_1414;
};
struct f_gen_attr_601fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_597;
 P116 want_598;
 P116 *t_599;
 P134 *r_600;
 rstr a_1415;
 P111 y_1416;
 P116 tt_1417;
 P116 aty_1418;
 P134 v_1419;
 P134 d_1420;
 P171 c_1421;
 rt_int n_1422;
 int ro_1423;
};
struct f_lit_table_604fr { int dummy;
 struct f_greenc_1fr *up;
 P116 t_602;
 P134 *r_603;
 P164 l_1424;
 P134 s_1425;
};
struct f_val_rep_610fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_605;
 P116 tt_606;
 P171 c_607;
 P116 *t_608;
 P134 *r_609;
 P116 aty_1427;
 P134 v_1428;
 P134 lt_1429;
 rt_int n_1430;
};
struct f_allocator_615fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_611;
 P116 want_612;
 P116 *t_613;
 P134 *r_614;
 P111 y_1431;
 P116 target_1432;
 P116 vt_1433;
 P134 ct_1434;
 P134 pt_1435;
 P134 cell_1436;
 P134 v_1437;
 P134 x_1438;
};
struct f_aggregate_620fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_616;
 P116 want_617;
 P116 *t_618;
 P134 *r_619;
 P164 it_1439;
 P1135 f_1440;
 P116 vt_1441;
 P134 ct_1442;
 P134 tmp_1443;
 P134 v_1444;
 P134 x_1445;
 P134 parts_1446;
 P134 et_1447;
 P134 lo_1448;
 P134 hi_1449;
 P134 key_1450;
 P134 fill_1451;
 rt_int n_1452;
 P164 lab_1453;
};
struct f_actual_for_624fr { int dummy;
 struct f_greenc_1fr *up;
 P164 args_621;
 P1124 pm_622;
 P1124 first_623;
 P164 result_;
 P164 a_1459;
 P1124 p_1460;
};
struct f_gcall_629fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_625;
 int is_stmt_626;
 P116 *t_627;
 P134 *r_628;
 P164 fn_1463;
 P164 nm_1464;
 P111 y_1465;
 P134 args_1466;
 P134 lv_1467;
 P134 v_1468;
 P134 ct_1469;
 P134 x_1470;
 P164 a_1471;
 P1124 pm_1472;
 P116 lt_1473;
 P116 vt_1474;
 P171 lc_1475;
 int ro_1476;
};
struct f_gcall_with_634fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_630;
 P111 y_631;
 P116 *t_632;
 P134 *r_633;
 P134 args_1477;
 P134 lv_1478;
 P134 v_1479;
 P134 x1_1480;
 P134 x2_1481;
 P164 a_1482;
 P1124 pm_1483;
 P116 lt_1484;
 P116 vt_1485;
 P171 lc_1486;
 int ro_1487;
};
struct f_builtin_641fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_635;
 P164 args_636;
 rt_int line_637;
 int is_stmt_638;
 P116 *t_639;
 P134 *r_640;
 P116 aty_1489;
 P116 lt_1490;
 P134 a_1491;
 P134 w_1492;
 P134 lv_1493;
 P171 lc_1494;
 int ro_1495;
};
struct f_is_package_643fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_642;
 int result_;
 P111 y_1496;
};
struct f_member_of_647fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_644;
 rstr name_645;
 rt_int line_646;
 P111 result_;
 P111 y_1497;
 P111 m_1498;
};
struct f_inside_package_649fr { int dummy;
 struct f_greenc_1fr *up;
 P164 p_648;
 int result_;
 P145 l_1500;
};
struct f_copy_sym_652fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_650;
 P111 *z_651;
};
struct f_complete_private_655fr { int dummy;
 struct f_greenc_1fr *up;
 P116 ph_653;
 P116 full_654;
 P134 n_1504;
 P164 p_1505;
};
struct f_package_spec_657fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_656;
 P111 y_1506;
 P111 m_1507;
 P111 z_1508;
 P164 saved_1509;
 P111 first_private_1510;
};
struct f_hidden_from_660fr { int dummy;
 struct f_greenc_1fr *up;
 P111 m_658;
 P111 first_private_659;
 int result_;
 P111 p_1514;
};
struct f_package_body_662fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_661;
 P111 y_1516;
 P111 m_1517;
 P111 z_1518;
 P164 saved_1519;
};
struct f_use_clause_664fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_663;
 P164 n_1525;
 P111 y_1526;
 P111 m_1527;
 P111 z_1528;
 P111 old_1529;
};
struct f_fits_669fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_665;
 P164 args_666;
 P116 want_667;
 int *ok_668;
 P1124 pm_1532;
 P164 a_1533;
 P116 t_1534;
 P171 c_1535;
 P134 v_1536;
 int ro_1537;
 P120 saved_1538;
 rt_int used_1539;
};
struct f_is_builtin_671fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_670;
 int result_;
};
struct f_resolve_overload_678fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_672;
 P164 args_673;
 int is_stmt_674;
 P116 want_675;
 rt_int line_676;
 P111 *y_677;
 P111 z_1544;
 P111 first_1545;
 rt_int n_1546;
 int ok_1547;
 rt_int pass_1549;
};
struct f_resolve_member_overload_686fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_679;
 rstr name_680;
 P164 args_681;
 int is_stmt_682;
 P116 want_683;
 rt_int line_684;
 P111 *y_685;
 P111 pk_1554;
 P111 z_1555;
 rt_int n_1556;
 int ok_1557;
 rt_int pass_1559;
};
struct f_user_operator_692fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_687;
 P116 want_688;
 P116 *t_689;
 P134 *r_690;
 int *done_691;
 P134 op_1564;
 int negate_1565;
 P111 y_1566;
 P164 call_1567;
 P164 fname_1568;
 P164 l_1569;
 P164 rt_1570;
 int ok_1571;
};
struct f_task_p_694fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_693;
 P164 x_1573;
 rt_int line_1574;
};
struct f_entry_p_696fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_695;
 P164 x_1575;
};
struct f_accept_p_698fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_697;
 P164 x_1576;
};
struct f_delay_p_700fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_699;
 P164 x_1577;
};
struct f_designators_702fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_701;
 P164 head_1578;
 P164 tail_1579;
 P164 n_1580;
};
struct f_parse_task_statement_704fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_703;
 P164 x_1582;
 P164 alt_1583;
 P164 head_1584;
 P164 tail_1585;
 rt_int line_1586;
};
struct f_path_at_708fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_705;
 rstr field_706;
 P134 *r_707;
 rt_int i_1589;
};
struct f_is_task_name_710fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_709;
 int result_;
 P111 y_1593;
};
struct f_task_of_714fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_711;
 P111 *y_712;
 P164 *ix_713;
 P164 n_1594;
};
struct f_own_index_716fr { int dummy;
 struct f_greenc_1fr *up;
 P134 *r_715;
 P111 y_1595;
};
struct f_member_721fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_717;
 rstr arr_718;
 rstr i_719;
 P134 *r_720;
 P134 lo_1596;
 P134 hi_1597;
};
struct f_act_path_724fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_722;
 P134 *r_723;
 P134 i_1598;
};
struct f_act_path_i_728fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_725;
 rstr i_726;
 P134 *r_727;
};
struct f_entry_path_732fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_729;
 rstr i_730;
 P134 *r_731;
 P134 own_1599;
};
struct f_declare_slot_735fr { int dummy;
 struct f_greenc_1fr *up;
 rstr ctype_name_733;
 rstr field_734;
};
struct f_task_decl_737fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_736;
};
struct f_family_arg_struct_738fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_742fr { int dummy;
 struct f_greenc_1fr *up;
 P164 b_739;
 P111 y_740;
 P134 x_741;
 P134 lo_1600;
 P134 hi_1601;
 P134 v_1602;
 P116 vt_1603;
 P171 c_1604;
};
struct f_entry_family_slot_747fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_743;
 rstr base_744;
 rstr i_745;
 P134 *r_746;
 P134 lo_1605;
 P134 hi_1606;
};
struct f_task_spec_749fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_748;
 int has_procs_1607;
 int saved_defer_1608;
 P134 fields_1609;
 P134 ct_1610;
 P1124 pm_1611;
 P134 fp_1612;
 P134 flo_1613;
 P134 fhi_1614;
 P111 y_1615;
 P111 m_1616;
 P111 z_1617;
 P111 saved_1618;
 P134 d_1619;
 P134 v_1620;
 P134 p_1621;
 P134 p2_1622;
 P116 vt_1623;
 P164 r_1624;
};
struct f_entry_decl_751fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_750;
 P111 y_1628;
 P164 p_1629;
 P1124 pm_1630;
 P1124 tail_1631;
 P134 fields_1632;
 P134 ct_1633;
 P134 x_1634;
 P134 lo_1635;
 P134 hi_1636;
};
struct f_task_body_753fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_752;
 P111 y_1640;
 P111 b_1641;
 P111 m_1642;
 P111 z_1643;
 P134 upp_1644;
 P111 saved_1645;
};
struct f_task_awaits_756fr { int dummy;
 struct f_greenc_1fr *up;
 P164 decls_754;
 P134 *aw_755;
 P164 e_1649;
 P111 y_1650;
 P134 p_1651;
};
struct f_task_failure_758fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_757;
 P111 y_1653;
 P134 a_1654;
 P134 i_1655;
 P116 it_1656;
};
struct f_entry_sym_762fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_759;
 P111 *y_760;
 P164 *ix_761;
 P111 t_1657;
};
struct f_other_call_767fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_763;
 int is_stmt_764;
 P116 *t_765;
 P134 *r_766;
 P111 y_1658;
 P1124 pm_1659;
 P164 a_1660;
 P134 parts_1661;
 P134 v_1662;
 P134 lv_1663;
 P134 ent_1664;
 P134 act_1665;
 P134 i_1666;
 P116 vt_1667;
 P116 lt_1668;
 P171 lc_1669;
 int ro_1670;
 P164 ix_1671;
 P164 fix_1672;
 P164 args_node_1673;
};
struct f_other_attr_772fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_768;
 P111 y_769;
 P116 *t_770;
 P134 *r_771;
 rstr a_1675;
 P134 p_1676;
};
struct f_member_attr_776fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_773;
 P116 *t_774;
 P134 *r_775;
 P111 y_1677;
 P164 ix_1678;
 P134 i_1679;
 P134 p_1680;
 P116 vt_1681;
};
struct f_task_builtin_782fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_777;
 P164 args_778;
 rt_int line_779;
 P116 *t_780;
 P134 *r_781;
 P116 vt_1682;
 P134 v_1683;
};
struct f_gen_accept_784fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_783;
 P111 y_1684;
 P137 saved_ax_1685;
 P134 ent_1686;
 P134 ep_1687;
 P134 xf_1688;
 P134 x_1689;
 P1124 pm_1690;
 P164 f_1691;
 P111 p_1692;
};
struct f_member_slot_788fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_785;
 P164 s_786;
 P134 *ent_787;
 P116 vt_1694;
 P134 v_1695;
};
struct f_gen_delay_ticks_791fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_789;
 P134 *r_790;
 P116 vt_1696;
 P134 v_1697;
};
struct f_gen_select_793fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_792;
 P164 alt_1698;
 rt_int n_1699;
 rt_int i_1700;
 int has_delay_1701;
 int has_accept_1702;
 P134 al_1703;
 P134 w_1704;
 P134 g_1705;
 P134 ent_1706;
 P134 ticks_1707;
 P116 vt_1708;
 P111 y_1709;
};
struct f_family_range_798fr { int dummy;
 struct f_greenc_1fr *up;
 P111 y_794;
 P164 ix_795;
 P134 *lo_796;
 P134 *hi_797;
 P116 vt_1713;
};
struct f_task_statement_gen_800fr { int dummy;
 struct f_greenc_1fr *up;
 P164 s_799;
 P164 n_1714;
 P164 ix_1715;
 P111 y_1716;
 P134 a_1717;
 P134 d_1718;
 P134 l_1719;
 P134 ticks_1720;
 P134 lo_1721;
 P134 hi_1722;
};
struct f_root_name_802fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_801;
 P164 result_;
};
struct f_check_pure_target_805fr { int dummy;
 struct f_greenc_1fr *up;
 P164 target_803;
 rt_int line_804;
 P164 n_1726;
 P111 y_1727;
};
struct f_assigns_nonlocal_808fr { int dummy;
 struct f_greenc_1fr *up;
 P164 d_806;
 rstr name_807;
 int result_;
};
struct f_declares_811fr { int dummy;
 struct f_greenc_1fr *up;
 P164 d_809;
 rstr name_810;
 int result_;
 P164 p_1728;
 P164 e_1729;
};
struct f_scan_handlers_815fr { int dummy;
 struct f_greenc_1fr *up;
 P164 h_812;
 P164 d_813;
 rstr name_814;
 int result_;
 P164 p_1732;
};
struct f_scan_assigns_819fr { int dummy;
 struct f_greenc_1fr *up;
 P164 stmts_816;
 P164 d_817;
 rstr name_818;
 int result_;
 P164 s_1734;
 P164 a_1735;
 P164 r_1736;
};
struct f_check_call_rules_822fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_820;
 P111 y_821;
 P111 z_1740;
 P111 s_1741;
};
struct f_generic_p_824fr { int dummy;
 struct f_greenc_1fr *up;
 P164 *res_823;
 P164 x_1743;
 P164 p_1744;
 P164 head_1745;
 P164 tail_1746;
 P164 names_1747;
 P164 st_1748;
 P164 def_1749;
 P164 sub_1750;
 P134 def_name_text_1751;
 int more_1752;
};
struct f_instantiation_827fr { int dummy;
 struct f_greenc_1fr *up;
 P164 x_825;
 P164 *res_826;
 P164 i_1755;
 P164 head_1756;
 P164 tail_1757;
 P164 a_1758;
 P134 formal_1759;
 rt_int mark_1760;
 int more_1761;
};
struct f_generic_decl_829fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_828;
 P111 y_1763;
};
struct f_is_generic_name_831fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_830;
 int result_;
 P111 y_1764;
};
struct f_attach_generic_body_833fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_832;
 P111 y_1765;
};
struct f_restore_generic_context_836fr { int dummy;
 struct f_greenc_1fr *up;
 P164 body_node_834;
 rt_int line_835;
 P140 ctx_1768;
 P111 m_1769;
 P111 z_1770;
 int seen_1771;
};
struct f_gactual_840fr { int dummy;
 struct f_greenc_1fr *up;
 P164 args_837;
 rt_int nth_838;
 rstr name_839;
 P164 result_;
 P164 a_1775;
 rt_int i_1776;
};
struct f_copy_node_844fr { int dummy;
 struct f_greenc_1fr *up;
 P164 n_841;
 P134 name_842;
 P164 *r_843;
};
struct f_instantiate_846fr { int dummy;
 struct f_greenc_1fr *up;
 P164 e_845;
 P111 g_1778;
 P164 gd_1779;
 P164 pat_1780;
 P164 f_1781;
 P164 a_1782;
 P164 cn_1783;
 P111 y_1784;
 P111 z_1785;
 P111 fs_1786;
 rt_int nth_1787;
 P116 t_1788;
 P116 vt_1789;
 P171 c_1790;
 P134 v_1791;
 P134 acc_1792;
 P134 x_1793;
 int ok_1794;
};
struct f_predef_type_851fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_847;
 P116 t_848;
 rstr lo_849;
 rstr hi_850;
 P111 y_1797;
};
struct f_predef_const_855fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_852;
 P116 t_853;
 rstr code_text_854;
 P111 y_1798;
};
struct f_predef_exc_857fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_856;
 P111 y_1799;
};
struct f_predef_lit_861fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_858;
 P116 t_859;
 rt_int v_860;
 P111 y_1800;
};
struct f_predefine_862fr { int dummy;
 struct f_greenc_1fr *up;
 rstr control_1801;
 rt_int start_1802;
 rt_int code_no_1803;
 rt_int i_1805;
 rt_int i_1810;
};
struct f_translate_864fr { int dummy;
 struct f_greenc_1fr *up;
 P164 u_863;
 P164 p_1814;
 P111 y_1815;
};
struct f_print_program_865fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_greenc_1fr { int dummy;
 rt_int k_eof_2;
 rt_int k_id_3;
 rt_int k_kw_4;
 rt_int k_op_5;
 rt_int k_int_6;
 rt_int k_float_7;
 rt_int k_str_8;
 rt_int n_int_9;
 rt_int n_float_10;
 rt_int n_str_11;
 rt_int n_nil_12;
 rt_int n_name_13;
 rt_int n_unop_14;
 rt_int n_binop_15;
 rt_int n_apply_16;
 rt_int n_select_17;
 rt_int n_attr_18;
 rt_int n_new_19;
 rt_int n_agg_20;
 rt_int n_citem_21;
 rt_int n_range_22;
 rt_int n_paren_23;
 rt_int n_raw_24;
 rt_int n_assign_25;
 rt_int n_call_26;
 rt_int n_if_27;
 rt_int n_case_28;
 rt_int n_loop_29;
 rt_int n_block_30;
 rt_int n_exit_31;
 rt_int n_return_32;
 rt_int n_raise_33;
 rt_int n_reraise_34;
 rt_int n_assert_35;
 rt_int n_null_36;
 rt_int n_delay_37;
 rt_int n_initiate_38;
 rt_int n_accept_39;
 rt_int n_selects_40;
 rt_int n_abort_41;
 rt_int n_var_42;
 rt_int n_const_43;
 rt_int n_type_44;
 rt_int n_subtype_45;
 rt_int n_proc_46;
 rt_int n_func_47;
 rt_int n_exc_48;
 rt_int n_param_49;
 rt_int n_pkgspec_50;
 rt_int n_pkgbody_51;
 rt_int n_taskspec_52;
 rt_int n_taskbody_53;
 rt_int n_entry_54;
 rt_int n_inst_55;
 rt_int n_generic_56;
 rt_int n_use_57;
 rt_int n_pragma_58;
 rt_int n_arm_59;
 rt_int n_label_60;
 rt_int n_handler_61;
 rt_int n_comp_62;
 rt_int n_alt_63;
 rt_int d_enum_64;
 rt_int d_range_65;
 rt_int d_float_66;
 rt_int d_array_67;
 rt_int d_record_68;
 rt_int d_access_69;
 rt_int d_derived_70;
 rt_int d_private_71;
 rt_int s_mark_72;
 rt_int m_in_73;
 rt_int m_inout_74;
 rt_int m_out_75;
 rt_int t_int_76;
 rt_int t_bool_77;
 rt_int t_float_78;
 rt_int t_enum_79;
 rt_int t_string_80;
 rt_int t_array_81;
 rt_int t_record_82;
 rt_int t_ptr_83;
 rt_int t_void_84;
 rt_int t_nil_85;
 rt_int t_char_86;
 rt_int t_univ_87;
 rt_int t_act_88;
 rt_int t_tdecl_89;
 rt_int t_entry_90;
 rt_int y_var_91;
 rt_int y_const_92;
 rt_int y_func_93;
 rt_int y_proc_94;
 rt_int y_type_95;
 rt_int y_exc_96;
 rt_int y_enumlit_97;
 rt_int y_package_98;
 rt_int y_task_99;
 rt_int y_entry_100;
 rt_int y_generic_101;
 A103 toks_106;
 rt_int ntoks_107;
 rt_int tpos_108;
 rt_int src_line_109;
 A110 table_113;
 rt_int depth_114;
 P111 scope_stack_115;
 P116 all_types_118;
 rt_int serial_119;
 P120 out_types_122;
 P120 out_frames_123;
 P120 out_helpers_124;
 P120 out_protos_125;
 P120 out_globals_126;
 P120 out_funcs_127;
 P120 out_init_128;
 P120 out_excs_129;
 P120 code_130;
 P120 fields_buf_131;
 int in_func_132;
 rt_int cur_level_133;
 P134 st_field_135;
 P111 func_sym_136;
 P137 exits_139;
 P140 generic_contexts_142;
 P137 accept_exits_143;
 rt_int frames_144;
 P145 handlers_147;
 P145 cleanups_148;
 rt_int trial_149;
 P116 ty_int_150;
 P116 ty_bool_151;
 P116 ty_float_152;
 P116 ty_char_153;
 P116 ty_string_154;
 P116 ty_void_155;
 P116 ty_nil_156;
 P116 ty_univ_157;
 P116 ty_act_158;
 P116 ty_tdecl_159;
 P116 ty_entry_160;
 P111 cur_task_161;
 rt_int accept_depth_162;
 int famarg_done_163;
 P164 fam_ix_166;
 P164 call_task_ix_167;
 int saw_interface_168;
 int defer_entry_structs_169;
 P120 out_awaits_170;
 P171 no_cons_173;
 P164 units_174;
 P145 pkg_stack_175;
 P164 cur_pkg_176;
 P134 prefix_hint_177;
 P116 call_want_178;
 P111 pure_sym_179;
 rt_int pure_depth_180;
 int vrp_ok_181;
 int in_lv_path_182;
 int last_deref_183;
 P134 main_name_184;
 P134 conf_system_185;
 rt_int conf_storage_unit_186;
 rt_int conf_memory_size_187;
 P134 conf_optimize_188;
};
static void as_R1136(R1136 *d, R1136 s);
static R1136 cp_R1136(R1136 s);
static int eq_R1136(R1136 a, R1136 b);
static void as_R1125(R1125 *d, R1125 s);
static R1125 cp_R1125(R1125 s);
static int eq_R1125(R1125 a, R1125 b);
static void as_R172(R172 *d, R172 s);
static R172 cp_R172(R172 s);
static int eq_R172(R172 a, R172 b);
static void as_R165(R165 *d, R165 s);
static R165 cp_R165(R165 s);
static int eq_R165(R165 a, R165 b);
static void as_R146(R146 *d, R146 s);
static R146 cp_R146(R146 s);
static int eq_R146(R146 a, R146 b);
static void as_R141(R141 *d, R141 s);
static R141 cp_R141(R141 s);
static int eq_R141(R141 a, R141 b);
static void as_R138(R138 *d, R138 s);
static R138 cp_R138(R138 s);
static int eq_R138(R138 a, R138 b);
static void as_R121(R121 *d, R121 s);
static R121 cp_R121(R121 s);
static int eq_R121(R121 a, R121 b);
static void as_R117(R117 *d, R117 s);
static R117 cp_R117(R117 s);
static int eq_R117(R117 a, R117 b);
static void as_R112(R112 *d, R112 s);
static R112 cp_R112(R112 s);
static int eq_R112(R112 a, R112 b);
static void as_A110(A110 *d, A110 s);
static A110 cp_A110(A110 s);
static int eq_A110(A110 a, A110 b);
static void as_R105(R105 *d, R105 s);
static R105 cp_R105(R105 s);
static int eq_R105(R105 a, R105 b);
static void as_A103(A103 *d, A103 s);
static A103 cp_A103(A103 s);
static int eq_A103(A103 a, A103 b);
static P134 f_mk_190(struct f_greenc_1fr *up_, rstr s_189);
static void f_new_name_193(struct f_greenc_1fr *up_, rstr base_191, P134 *res_192);
static int f_is_letter_195(struct f_greenc_1fr *up_, int c_194);
static int f_is_digit_197(struct f_greenc_1fr *up_, int c_196);
static int f_upper_199(struct f_greenc_1fr *up_, int c_198);
static rstr f_lower_s_201(struct f_greenc_1fr *up_, rstr s_200);
static rstr f_upper_s_203(struct f_greenc_1fr *up_, rstr s_202);
static int f_is_operator_205(struct f_greenc_1fr *up_, rstr s_204);
static rstr f_c_field_207(struct f_greenc_1fr *up_, rstr s_206);
static rstr f_q_208(struct f_greenc_1fr *up_);
static void f_fail_211(struct f_greenc_1fr *up_, rt_int line_209, rstr msg_210);
static P120 f_new_buffer_212(struct f_greenc_1fr *up_);
static void f_put_to_215(struct f_greenc_1fr *up_, P120 b_213, rstr s_214);
static void f_emit_217(struct f_greenc_1fr *up_, rstr s_216);
static void f_print_buffer_219(struct f_greenc_1fr *up_, P120 b_218);
static void f_splice_222(struct f_greenc_1fr *up_, P120 a_220, P120 b_221);
static int f_is_reserved_224(struct f_greenc_1fr *up_, rstr w_223);
static void f_add_token_228(struct f_greenc_1fr *up_, rt_int kind_225, rstr s_226, rt_int ival_227);
static rt_int f_digit_value_230(struct f_greenc_1fr *up_, int c_229);
static rt_int f_digit_in_233(struct f_greenc_1fr *up_, int c_231, rt_int base_232);
static void f_accumulate_237(struct f_greenc_1fr *up_, rt_int *v_234, rt_int base_235, rt_int d_236);
static void f_lex_line_239(struct f_greenc_1fr *up_, rstr line_238);
static void f_exponent_244(struct f_greenc_1fr *up_, rstr line_240, rt_int *j_241, rstr *buf_242, rt_int *bl_243);
static void f_read_file_text_247(struct f_greenc_1fr *up_, rstr name_245, P134 *contents_246);
static void f_check_include_248(struct f_greenc_1fr *up_);
static void f_include_line_252(struct f_greenc_1fr *up_, rstr t_249, rt_int from_250, rt_int to_251);
static void f_read_source_253(struct f_greenc_1fr *up_);
static P164 f_nn_256(struct f_greenc_1fr *up_, rt_int kind_254, rt_int line_255);
static void f_append_260(struct f_greenc_1fr *up_, P164 *head_257, P164 *tail_258, P164 x_259);
static rt_int f_list_len_262(struct f_greenc_1fr *up_, P164 l_261);
static rt_int f_cur_line_263(struct f_greenc_1fr *up_);
static int f_at_kw_265(struct f_greenc_1fr *up_, rstr w_264);
static int f_at_op_267(struct f_greenc_1fr *up_, rstr w_266);
static int f_at_kind_269(struct f_greenc_1fr *up_, rt_int k_268);
static rt_int f_kind_at_271(struct f_greenc_1fr *up_, rt_int k_270);
static rstr f_text_at_273(struct f_greenc_1fr *up_, rt_int k_272);
static void f_perror_275(struct f_greenc_1fr *up_, rstr msg_274);
static void f_skip_276(struct f_greenc_1fr *up_);
static void f_expect_kw_278(struct f_greenc_1fr *up_, rstr w_277);
static void f_expect_op_280(struct f_greenc_1fr *up_, rstr w_279);
static void f_expect_id_282(struct f_greenc_1fr *up_, P134 *res_281);
static void f_name_node_284(struct f_greenc_1fr *up_, P164 *res_283);
static void f_id_list_286(struct f_greenc_1fr *up_, P164 *res_285);
static P164 f_binop_291(struct f_greenc_1fr *up_, P134 op_287, P164 l_288, P164 r_289, rt_int line_290);
static void f_expr_293(struct f_greenc_1fr *up_, P164 *res_292);
static int f_is_rel_295(struct f_greenc_1fr *up_, rstr s_294);
static void f_relation_297(struct f_greenc_1fr *up_, P164 *res_296);
static void f_simple_expr_299(struct f_greenc_1fr *up_, P164 *res_298);
static void f_term_301(struct f_greenc_1fr *up_, P164 *res_300);
static void f_factor_303(struct f_greenc_1fr *up_, P164 *res_302);
static void f_primary_305(struct f_greenc_1fr *up_, P164 *res_304);
static void f_agg_or_paren_307(struct f_greenc_1fr *up_, P164 *res_306);
static void f_name_p_309(struct f_greenc_1fr *up_, P164 *res_308);
static void f_subtype_ind_311(struct f_greenc_1fr *up_, P164 *res_310);
static void f_type_spec_313(struct f_greenc_1fr *up_, P164 *res_312);
static void f_type_def_315(struct f_greenc_1fr *up_, P164 *res_314);
static void f_pragma_p_317(struct f_greenc_1fr *up_, P164 *res_316);
static void f_check_pragma_319(struct f_greenc_1fr *up_, P164 x_318);
static void f_skip_visibility_320(struct f_greenc_1fr *up_);
static void f_skip_representation_321(struct f_greenc_1fr *up_);
static void f_decl_part_323(struct f_greenc_1fr *up_, P164 *res_322);
static void f_object_decl_325(struct f_greenc_1fr *up_, P164 *res_324);
static void f_type_decl_327(struct f_greenc_1fr *up_, P164 *res_326);
static void f_formal_part_329(struct f_greenc_1fr *up_, P164 *res_328);
static void f_designator_331(struct f_greenc_1fr *up_, P134 *res_330);
static void f_subprogram_333(struct f_greenc_1fr *up_, P164 *res_332);
static void f_body_part_335(struct f_greenc_1fr *up_, P164 x_334);
static void f_parse_handlers_337(struct f_greenc_1fr *up_, P164 *res_336);
static void f_package_p_339(struct f_greenc_1fr *up_, P164 *res_338);
static int f_at_statements_end_340(struct f_greenc_1fr *up_);
static void f_statements_342(struct f_greenc_1fr *up_, P164 *res_341);
static void f_statement_344(struct f_greenc_1fr *up_, P164 *res_343);
static void f_task_statement_346(struct f_greenc_1fr *up_, P164 *res_345);
static void f_if_stmt_348(struct f_greenc_1fr *up_, P164 *res_347);
static void f_case_stmt_350(struct f_greenc_1fr *up_, P164 *res_349);
static void f_loop_stmt_352(struct f_greenc_1fr *up_, P164 *res_351);
static void f_compilation_354(struct f_greenc_1fr *up_, P164 *res_353);
static rt_int f_hash_356(struct f_greenc_1fr *up_, rstr s_355);
static P111 f_lookup_358(struct f_greenc_1fr *up_, rstr name_357);
static int f_same_task_361(struct f_greenc_1fr *up_, P111 a_359, P111 b_360);
static P111 f_lookup_entry_364(struct f_greenc_1fr *up_, rstr name_362, P111 owner_363);
static P111 f_lookup_decl_366(struct f_greenc_1fr *up_, P164 d_365);
static int f_overloadable_368(struct f_greenc_1fr *up_, P111 y_367);
static int f_same_371(struct f_greenc_1fr *up_, P116 a_369, P116 b_370);
static int f_same_signature_374(struct f_greenc_1fr *up_, P1124 a_372, P1124 b_373);
static void f_define_377(struct f_greenc_1fr *up_, P111 y_375, rt_int line_376);
static void f_open_scope_378(struct f_greenc_1fr *up_);
static void f_close_scope_379(struct f_greenc_1fr *up_);
static P111 f_new_sym_382(struct f_greenc_1fr *up_, rt_int kind_380, P134 name_381);
static P116 f_new_typ_384(struct f_greenc_1fr *up_, rt_int kind_383);
static P171 f_new_cons_385(struct f_greenc_1fr *up_);
static rstr f_kind_name_387(struct f_greenc_1fr *up_, P116 t_386);
static void f_check_type_391(struct f_greenc_1fr *up_, P116 got_388, P116 want_389, rt_int line_390);
static rt_int f_field_count_393(struct f_greenc_1fr *up_, P116 t_392);
static void f_ctype_396(struct f_greenc_1fr *up_, P116 t_394, P134 *r_395);
static void f_field_decls_399(struct f_greenc_1fr *up_, P116 t_397, P134 *r_398);
static void f_declare_ctype_401(struct f_greenc_1fr *up_, P116 t_400);
static rt_int f_lit_index_404(struct f_greenc_1fr *up_, P164 lits_402, rstr name_403);
static void f_manifest_408(struct f_greenc_1fr *up_, P164 e_405, rt_int *v_406, int *ok_407);
static void f_resolve_412(struct f_greenc_1fr *up_, P164 st_409, P116 *t_410, P171 *c_411);
static void f_type_definition_417(struct f_greenc_1fr *up_, P164 d_413, P134 name_414, P116 *t_415, P171 *c_416);
static void f_finish_ptr_419(struct f_greenc_1fr *up_, P116 t_418);
static void f_init_storage_423(struct f_greenc_1fr *up_, rstr lval_420, P116 t_421, P171 c_422);
static int f_composite_425(struct f_greenc_1fr *up_, P116 t_424);
static void f_assign_code_431(struct f_greenc_1fr *up_, rstr lval_426, P116 t_427, rstr v_428, P171 c_429, P134 *r_430);
static void f_copy_code_435(struct f_greenc_1fr *up_, P116 t_432, rstr v_433, P134 *r_434);
static void f_eq_code_440(struct f_greenc_1fr *up_, P116 t_436, rstr a_437, rstr b_438, P134 *r_439);
static int f_seen_name_443(struct f_greenc_1fr *up_, P145 l_441, rstr s_442);
static void f_emit_helpers_444(struct f_greenc_1fr *up_);
static void f_helper_bodies_446(struct f_greenc_1fr *up_, P116 t_445);
static void f_storage_450(struct f_greenc_1fr *up_, rstr name_447, P116 t_448, P134 *access_code_449);
static void f_bind_453(struct f_greenc_1fr *up_, P111 y_451, P134 access_code_452);
static void f_declare_subprograms_455(struct f_greenc_1fr *up_, P164 from_454);
static void f_declare_one_457(struct f_greenc_1fr *up_, P164 e_456);
static void f_build_subprogram_460(struct f_greenc_1fr *up_, P164 d_458, P111 *y_459);
static void f_decl_elements_462(struct f_greenc_1fr *up_, P164 decls_461);
static void f_decl_element_464(struct f_greenc_1fr *up_, P164 e_463);
static void f_pragma_decl_466(struct f_greenc_1fr *up_, P164 e_465);
static void f_other_decl_468(struct f_greenc_1fr *up_, P164 e_467);
static void f_subprogram_body_471(struct f_greenc_1fr *up_, P164 d_469, P111 y_470);
static void f_gen_statements_473(struct f_greenc_1fr *up_, P164 stmts_472);
static void f_pop_frames_475(struct f_greenc_1fr *up_, rt_int upto_474);
static void f_push_cleanup_477(struct f_greenc_1fr *up_, rstr s_476);
static void f_pop_cleanup_478(struct f_greenc_1fr *up_);
static void f_guarded_482(struct f_greenc_1fr *up_, P164 stmts_479, P164 hs_480, rt_int line_481);
static void f_exc_id_486(struct f_greenc_1fr *up_, rstr name_483, rt_int line_484, P134 *r_485);
static void f_gen_statement_488(struct f_greenc_1fr *up_, P164 s_487);
static void f_slice_assign_490(struct f_greenc_1fr *up_, P164 s_489);
static void f_gen_call_492(struct f_greenc_1fr *up_, P164 s_491);
static void f_gen_if_494(struct f_greenc_1fr *up_, P164 s_493);
static void f_gen_case_496(struct f_greenc_1fr *up_, P164 s_495);
static void f_push_exit_500(struct f_greenc_1fr *up_, P134 match_497, int is_loop_498, P134 *label_499);
static void f_gen_loop_502(struct f_greenc_1fr *up_, P164 s_501);
static void f_gen_block_504(struct f_greenc_1fr *up_, P164 s_503);
static void f_gen_exit_506(struct f_greenc_1fr *up_, P164 s_505);
static void f_gen_return_508(struct f_greenc_1fr *up_, P164 s_507);
static void f_access_of_511(struct f_greenc_1fr *up_, P111 y_509, P134 *r_510);
static void f_link_to_514(struct f_greenc_1fr *up_, rt_int l_512, P134 *r_513);
static rstr f_c_ident_516(struct f_greenc_1fr *up_, rstr s_515);
static void f_deref_520(struct f_greenc_1fr *up_, rstr base_517, P116 t_518, P134 *r_519);
static int f_is_object_522(struct f_greenc_1fr *up_, P164 e_521);
static void f_lvalue_528(struct f_greenc_1fr *up_, P164 e_523, P134 *code_out_524, P116 *t_525, P171 *c_526, int *ro_527);
static void f_select_on_536(struct f_greenc_1fr *up_, rstr base_529, P116 bt_530, P164 e_531, int *ro_532, P134 *code_out_533, P116 *t_534, P171 *c_535);
static void f_index_on_545(struct f_greenc_1fr *up_, rstr base_537, P116 bt_538, P164 e_539, int *ro_540, int lv_541, P134 *code_out_542, P116 *t_543, P171 *c_544);
static int f_is_char_lit_547(struct f_greenc_1fr *up_, P164 e_546);
static int f_is_enum_lit_549(struct f_greenc_1fr *up_, P164 e_548);
static rstr f_c_string_551(struct f_greenc_1fr *up_, rstr s_550);
static int f_is_literal_553(struct f_greenc_1fr *up_, P164 e_552);
static void f_range_bounds_561(struct f_greenc_1fr *up_, P164 l_554, P164 h_555, P116 want_556, rt_int line_557, P116 *t_558, P134 *lo_559, P134 *hi_560);
static void f_gexpr_566(struct f_greenc_1fr *up_, P164 e_562, P116 want_563, P116 *t_564, P134 *r_565);
static void f_gexpr_1_571(struct f_greenc_1fr *up_, P164 e_567, P116 want_568, P116 *t_569, P134 *r_570);
static void f_char_literal_576(struct f_greenc_1fr *up_, P164 e_572, P116 want_573, P116 *t_574, P134 *r_575);
static void f_gen_name_581(struct f_greenc_1fr *up_, P164 e_577, P116 want_578, P116 *t_579, P134 *r_580);
static void f_gen_unop_586(struct f_greenc_1fr *up_, P164 e_582, P116 want_583, P116 *t_584, P134 *r_585);
static void f_gen_binop_591(struct f_greenc_1fr *up_, P164 e_587, P116 want_588, P116 *t_589, P134 *r_590);
static void f_conversion_596(struct f_greenc_1fr *up_, P164 e_592, P111 y_593, P116 *t_594, P134 *r_595);
static void f_gen_attr_601(struct f_greenc_1fr *up_, P164 e_597, P116 want_598, P116 *t_599, P134 *r_600);
static void f_lit_table_604(struct f_greenc_1fr *up_, P116 t_602, P134 *r_603);
static void f_val_rep_610(struct f_greenc_1fr *up_, P164 e_605, P116 tt_606, P171 c_607, P116 *t_608, P134 *r_609);
static void f_allocator_615(struct f_greenc_1fr *up_, P164 e_611, P116 want_612, P116 *t_613, P134 *r_614);
static void f_aggregate_620(struct f_greenc_1fr *up_, P164 e_616, P116 want_617, P116 *t_618, P134 *r_619);
static P164 f_actual_for_624(struct f_greenc_1fr *up_, P164 args_621, P1124 pm_622, P1124 first_623);
static void f_gcall_629(struct f_greenc_1fr *up_, P164 e_625, int is_stmt_626, P116 *t_627, P134 *r_628);
static void f_gcall_with_634(struct f_greenc_1fr *up_, P164 e_630, P111 y_631, P116 *t_632, P134 *r_633);
static void f_builtin_641(struct f_greenc_1fr *up_, rstr name_635, P164 args_636, rt_int line_637, int is_stmt_638, P116 *t_639, P134 *r_640);
static int f_is_package_643(struct f_greenc_1fr *up_, P164 e_642);
static P111 f_member_of_647(struct f_greenc_1fr *up_, rstr p_644, rstr name_645, rt_int line_646);
static int f_inside_package_649(struct f_greenc_1fr *up_, P164 p_648);
static void f_copy_sym_652(struct f_greenc_1fr *up_, P111 y_650, P111 *z_651);
static void f_complete_private_655(struct f_greenc_1fr *up_, P116 ph_653, P116 full_654);
static void f_package_spec_657(struct f_greenc_1fr *up_, P164 e_656);
static int f_hidden_from_660(struct f_greenc_1fr *up_, P111 m_658, P111 first_private_659);
static void f_package_body_662(struct f_greenc_1fr *up_, P164 e_661);
static void f_use_clause_664(struct f_greenc_1fr *up_, P164 e_663);
static void f_fits_669(struct f_greenc_1fr *up_, P111 y_665, P164 args_666, P116 want_667, int *ok_668);
static int f_is_builtin_671(struct f_greenc_1fr *up_, rstr n_670);
static void f_resolve_overload_678(struct f_greenc_1fr *up_, rstr name_672, P164 args_673, int is_stmt_674, P116 want_675, rt_int line_676, P111 *y_677);
static void f_resolve_member_overload_686(struct f_greenc_1fr *up_, rstr p_679, rstr name_680, P164 args_681, int is_stmt_682, P116 want_683, rt_int line_684, P111 *y_685);
static void f_user_operator_692(struct f_greenc_1fr *up_, P164 e_687, P116 want_688, P116 *t_689, P134 *r_690, int *done_691);
static void f_task_p_694(struct f_greenc_1fr *up_, P164 *res_693);
static void f_entry_p_696(struct f_greenc_1fr *up_, P164 *res_695);
static void f_accept_p_698(struct f_greenc_1fr *up_, P164 *res_697);
static void f_delay_p_700(struct f_greenc_1fr *up_, P164 *res_699);
static void f_designators_702(struct f_greenc_1fr *up_, P164 *res_701);
static void f_parse_task_statement_704(struct f_greenc_1fr *up_, P164 *res_703);
static void f_path_at_708(struct f_greenc_1fr *up_, rt_int level_705, rstr field_706, P134 *r_707);
static int f_is_task_name_710(struct f_greenc_1fr *up_, rstr n_709);
static void f_task_of_714(struct f_greenc_1fr *up_, P164 e_711, P111 *y_712, P164 *ix_713);
static void f_own_index_716(struct f_greenc_1fr *up_, P134 *r_715);
static void f_member_721(struct f_greenc_1fr *up_, P111 y_717, rstr arr_718, rstr i_719, P134 *r_720);
static void f_act_path_724(struct f_greenc_1fr *up_, P111 y_722, P134 *r_723);
static void f_act_path_i_728(struct f_greenc_1fr *up_, P111 y_725, rstr i_726, P134 *r_727);
static void f_entry_path_732(struct f_greenc_1fr *up_, P111 y_729, rstr i_730, P134 *r_731);
static void f_declare_slot_735(struct f_greenc_1fr *up_, rstr ctype_name_733, rstr field_734);
static void f_task_decl_737(struct f_greenc_1fr *up_, P164 e_736);
static void f_family_arg_struct_738(struct f_greenc_1fr *up_);
static void f_family_bounds_742(struct f_greenc_1fr *up_, P164 b_739, P111 y_740, P134 x_741);
static void f_entry_family_slot_747(struct f_greenc_1fr *up_, P111 y_743, rstr base_744, rstr i_745, P134 *r_746);
static void f_task_spec_749(struct f_greenc_1fr *up_, P164 e_748);
static void f_entry_decl_751(struct f_greenc_1fr *up_, P164 e_750);
static void f_task_body_753(struct f_greenc_1fr *up_, P164 e_752);
static void f_task_awaits_756(struct f_greenc_1fr *up_, P164 decls_754, P134 *aw_755);
static void f_task_failure_758(struct f_greenc_1fr *up_, P164 s_757);
static void f_entry_sym_762(struct f_greenc_1fr *up_, P164 e_759, P111 *y_760, P164 *ix_761);
static void f_other_call_767(struct f_greenc_1fr *up_, P164 e_763, int is_stmt_764, P116 *t_765, P134 *r_766);
static void f_other_attr_772(struct f_greenc_1fr *up_, P164 e_768, P111 y_769, P116 *t_770, P134 *r_771);
static void f_member_attr_776(struct f_greenc_1fr *up_, P164 e_773, P116 *t_774, P134 *r_775);
static void f_task_builtin_782(struct f_greenc_1fr *up_, rstr name_777, P164 args_778, rt_int line_779, P116 *t_780, P134 *r_781);
static void f_gen_accept_784(struct f_greenc_1fr *up_, P164 s_783);
static void f_member_slot_788(struct f_greenc_1fr *up_, P111 y_785, P164 s_786, P134 *ent_787);
static void f_gen_delay_ticks_791(struct f_greenc_1fr *up_, P164 e_789, P134 *r_790);
static void f_gen_select_793(struct f_greenc_1fr *up_, P164 s_792);
static void f_family_range_798(struct f_greenc_1fr *up_, P111 y_794, P164 ix_795, P134 *lo_796, P134 *hi_797);
static void f_task_statement_gen_800(struct f_greenc_1fr *up_, P164 s_799);
static P164 f_root_name_802(struct f_greenc_1fr *up_, P164 e_801);
static void f_check_pure_target_805(struct f_greenc_1fr *up_, P164 target_803, rt_int line_804);
static int f_assigns_nonlocal_808(struct f_greenc_1fr *up_, P164 d_806, rstr name_807);
static int f_declares_811(struct f_greenc_1fr *up_, P164 d_809, rstr name_810);
static int f_scan_handlers_815(struct f_greenc_1fr *up_, P164 h_812, P164 d_813, rstr name_814);
static int f_scan_assigns_819(struct f_greenc_1fr *up_, P164 stmts_816, P164 d_817, rstr name_818);
static void f_check_call_rules_822(struct f_greenc_1fr *up_, P164 e_820, P111 y_821);
static void f_generic_p_824(struct f_greenc_1fr *up_, P164 *res_823);
static void f_instantiation_827(struct f_greenc_1fr *up_, P164 x_825, P164 *res_826);
static void f_generic_decl_829(struct f_greenc_1fr *up_, P164 e_828);
static int f_is_generic_name_831(struct f_greenc_1fr *up_, rstr n_830);
static void f_attach_generic_body_833(struct f_greenc_1fr *up_, P164 e_832);
static void f_restore_generic_context_836(struct f_greenc_1fr *up_, P164 body_node_834, rt_int line_835);
static P164 f_gactual_840(struct f_greenc_1fr *up_, P164 args_837, rt_int nth_838, rstr name_839);
static void f_copy_node_844(struct f_greenc_1fr *up_, P164 n_841, P134 name_842, P164 *r_843);
static void f_instantiate_846(struct f_greenc_1fr *up_, P164 e_845);
static void f_predef_type_851(struct f_greenc_1fr *up_, rstr name_847, P116 t_848, rstr lo_849, rstr hi_850);
static void f_predef_const_855(struct f_greenc_1fr *up_, rstr name_852, P116 t_853, rstr code_text_854);
static void f_predef_exc_857(struct f_greenc_1fr *up_, rstr name_856);
static void f_predef_lit_861(struct f_greenc_1fr *up_, rstr name_858, P116 t_859, rt_int v_860);
static void f_predefine_862(struct f_greenc_1fr *up_);
static void f_translate_864(struct f_greenc_1fr *up_, P164 u_863);
static void f_print_program_865(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_102;
static P134 f_mk_190(struct f_greenc_1fr *up_, rstr s_189) {
  struct f_mk_190fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_189 = rt_str_copy(s_189);
F->result_ = ({ rstr *cell866 = rt_alloc(sizeof(rstr)); *cell866 = rt_str_copy(F->s_189); (P134)cell866; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_193(struct f_greenc_1fr *up_, rstr base_191, P134 *res_192) {
  struct f_new_name_193fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_191 = rt_str_copy(base_191);
F->res_192 = res_192;
F->up->serial_119 = rt_add(F->up->serial_119, ((rt_int)1LL));
(*F->res_192) = ({ rstr *cell867 = rt_alloc(sizeof(rstr)); *cell867 = rt_str_copy(rt_str_cat(F->base_191, rt_str_of_int(F->up->serial_119))); (P134)cell867; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_195(struct f_greenc_1fr *up_, int c_194) {
  struct f_is_letter_195fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_194 = c_194;
F->result_ = (((F->c_194 >= 65) && (F->c_194 <= 90)) || ((F->c_194 >= 97) && (F->c_194 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_197(struct f_greenc_1fr *up_, int c_196) {
  struct f_is_digit_197fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_196 = c_196;
F->result_ = ((F->c_196 >= 48) && (F->c_196 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_199(struct f_greenc_1fr *up_, int c_198) {
  struct f_upper_199fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_198 = c_198;
if (((F->c_198 >= 97) && (F->c_198 <= 122))) {
F->result_ = rt_range((rt_sub(((rt_int)(F->c_198) + 1), ((rt_int)32LL)) - 1), 0, 127);
goto ret_;
}
F->result_ = F->c_198;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_lower_s_201(struct f_greenc_1fr *up_, rstr s_200) {
  struct f_lower_s_201fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_200 = rt_str_copy(s_200);
F->r_868 = rt_str_copy(F->s_200);
{ rt_int lo871 = ((rt_int)1LL), hi872 = (F->s_200).len;
for (rt_int it873 = lo871; it873 <= hi872; it873++) {
F->i_870 = it873;
if (((rt_str_get(F->r_868, F->i_870) >= 65) && (rt_str_get(F->r_868, F->i_870) <= 90))) {
(*rt_str_at(&F->r_868, F->i_870)) = rt_range((rt_add(((rt_int)(rt_str_get(F->r_868, F->i_870)) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_869: ;
F->result_ = F->r_868;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_upper_s_203(struct f_greenc_1fr *up_, rstr s_202) {
  struct f_upper_s_203fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_202 = rt_str_copy(s_202);
F->r_874 = rt_str_copy(F->s_202);
{ rt_int lo877 = ((rt_int)1LL), hi878 = (F->s_202).len;
for (rt_int it879 = lo877; it879 <= hi878; it879++) {
F->i_876 = it879;
(*rt_str_at(&F->r_874, F->i_876)) = f_upper_199(F->up, rt_str_get(F->r_874, F->i_876));
}
}
L_end_875: ;
F->result_ = F->r_874;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_205(struct f_greenc_1fr *up_, rstr s_204) {
  struct f_is_operator_205fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_204 = rt_str_copy(s_204);
F->result_ = (((((((((((((((rt_str_eq(F->s_204, rt_str("+", 1)) || rt_str_eq(F->s_204, rt_str("-", 1))) || rt_str_eq(F->s_204, rt_str("*", 1))) || rt_str_eq(F->s_204, rt_str("/", 1))) || rt_str_eq(F->s_204, rt_str("**", 2))) || rt_str_eq(F->s_204, rt_str("&", 1))) || rt_str_eq(F->s_204, rt_str("=", 1))) || rt_str_eq(F->s_204, rt_str("<", 1))) || rt_str_eq(F->s_204, rt_str("<=", 2))) || rt_str_eq(F->s_204, rt_str(">", 1))) || rt_str_eq(F->s_204, rt_str(">=", 2))) || rt_str_eq(F->s_204, rt_str("MOD", 3))) || rt_str_eq(F->s_204, rt_str("AND", 3))) || rt_str_eq(F->s_204, rt_str("OR", 2))) || rt_str_eq(F->s_204, rt_str("XOR", 3))) || rt_str_eq(F->s_204, rt_str("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_field_207(struct f_greenc_1fr *up_, rstr s_206) {
  struct f_c_field_207fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_206 = rt_str_copy(s_206);
F->result_ = rt_str_catc(f_lower_s_201(F->up, F->s_206), 95);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_q_208(struct f_greenc_1fr *up_) {
  struct f_q_208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_str("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_211(struct f_greenc_1fr *up_, rt_int line_209, rstr msg_210) {
  struct f_fail_211fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_209 = line_209;
F->msg_210 = rt_str_copy(msg_210);
if ((F->up->trial_149 == ((rt_int)0LL))) {
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("greenc: line ", 13), rt_str_of_int(F->line_209)), rt_str(": ", 2)), F->msg_210));
rt_g_put(rt_str("\n", 1));
}
rt_raise(ex_compile_error_102);
ret_:

  return;
}

static P120 f_new_buffer_212(struct f_greenc_1fr *up_) {
  struct f_new_buffer_212fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R121 *cell880 = rt_alloc(sizeof(R121)); *cell880 = cp_R121(({ R121 ag881; ag881.head_ = NULL; ag881.tail_ = NULL; ag881; })); (P120)cell880; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_215(struct f_greenc_1fr *up_, P120 b_213, rstr s_214) {
  struct f_put_to_215fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_213 = b_213;
F->s_214 = rt_str_copy(s_214);
F->l_882 = NULL;
F->l_882 = ({ R146 *cell883 = rt_alloc(sizeof(R146)); *cell883 = cp_R146(({ R146 ag884; ag884.s_ = NULL; ag884.next_ = NULL; ag884; })); (P145)cell883; });
(*(P145)rt_nil_check(F->l_882)).s_ = f_mk_190(F->up, F->s_214);
if (((*(P120)rt_nil_check(F->b_213)).tail_ == NULL)) {
(*(P120)rt_nil_check(F->b_213)).head_ = F->l_882;
} else {
(*(P145)rt_nil_check((*(P120)rt_nil_check(F->b_213)).tail_)).next_ = F->l_882;
}
(*(P120)rt_nil_check(F->b_213)).tail_ = F->l_882;
ret_:

  return;
}

static void f_emit_217(struct f_greenc_1fr *up_, rstr s_216) {
  struct f_emit_217fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_216 = rt_str_copy(s_216);
f_put_to_215(F->up, F->up->code_130, F->s_216);
ret_:

  return;
}

static void f_print_buffer_219(struct f_greenc_1fr *up_, P120 b_218) {
  struct f_print_buffer_219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_218 = b_218;
F->l_885 = NULL;
F->l_885 = (*(P120)rt_nil_check(F->b_218)).head_;
while ((F->l_885 != NULL)) {
rt_g_put((*(P134)rt_nil_check((*(P145)rt_nil_check(F->l_885)).s_)));
rt_g_put(rt_str("\n", 1));
F->l_885 = (*(P145)rt_nil_check(F->l_885)).next_;
}
L_end_886: ;
ret_:

  return;
}

static void f_splice_222(struct f_greenc_1fr *up_, P120 a_220, P120 b_221) {
  struct f_splice_222fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_220 = a_220;
F->b_221 = b_221;
if (((*(P120)rt_nil_check(F->b_221)).head_ == NULL)) {
goto ret_;
}
if (((*(P120)rt_nil_check(F->a_220)).tail_ == NULL)) {
(*(P120)rt_nil_check(F->a_220)).head_ = (*(P120)rt_nil_check(F->b_221)).head_;
} else {
(*(P145)rt_nil_check((*(P120)rt_nil_check(F->a_220)).tail_)).next_ = (*(P120)rt_nil_check(F->b_221)).head_;
}
(*(P120)rt_nil_check(F->a_220)).tail_ = (*(P120)rt_nil_check(F->b_221)).tail_;
(*(P120)rt_nil_check(F->b_221)).head_ = NULL;
(*(P120)rt_nil_check(F->b_221)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_224(struct f_greenc_1fr *up_, rstr w_223) {
  struct f_is_reserved_224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_223 = rt_str_copy(w_223);
{ rt_int sel887 = (F->w_223).len;
if (0 || sel887 == ((rt_int)2LL)) {
F->result_ = ((((((rt_str_eq(F->w_223, rt_str("AT", 2)) || rt_str_eq(F->w_223, rt_str("DO", 2))) || rt_str_eq(F->w_223, rt_str("IF", 2))) || rt_str_eq(F->w_223, rt_str("IN", 2))) || rt_str_eq(F->w_223, rt_str("IS", 2))) || rt_str_eq(F->w_223, rt_str("OF", 2))) || rt_str_eq(F->w_223, rt_str("OR", 2)));
goto ret_;
} else if (0 || sel887 == ((rt_int)3LL)) {
F->result_ = (((((((((rt_str_eq(F->w_223, rt_str("ALL", 3)) || rt_str_eq(F->w_223, rt_str("AND", 3))) || rt_str_eq(F->w_223, rt_str("END", 3))) || rt_str_eq(F->w_223, rt_str("FOR", 3))) || rt_str_eq(F->w_223, rt_str("MOD", 3))) || rt_str_eq(F->w_223, rt_str("NEW", 3))) || rt_str_eq(F->w_223, rt_str("NOT", 3))) || rt_str_eq(F->w_223, rt_str("OUT", 3))) || rt_str_eq(F->w_223, rt_str("USE", 3))) || rt_str_eq(F->w_223, rt_str("XOR", 3)));
goto ret_;
} else if (0 || sel887 == ((rt_int)4LL)) {
F->result_ = ((((((((((rt_str_eq(F->w_223, rt_str("BODY", 4)) || rt_str_eq(F->w_223, rt_str("CASE", 4))) || rt_str_eq(F->w_223, rt_str("ELSE", 4))) || rt_str_eq(F->w_223, rt_str("EXIT", 4))) || rt_str_eq(F->w_223, rt_str("GOTO", 4))) || rt_str_eq(F->w_223, rt_str("LOOP", 4))) || rt_str_eq(F->w_223, rt_str("NULL", 4))) || rt_str_eq(F->w_223, rt_str("TASK", 4))) || rt_str_eq(F->w_223, rt_str("THEN", 4))) || rt_str_eq(F->w_223, rt_str("TYPE", 4))) || rt_str_eq(F->w_223, rt_str("WHEN", 4)));
goto ret_;
} else if (0 || sel887 == ((rt_int)5LL)) {
F->result_ = (((((((((rt_str_eq(F->w_223, rt_str("ABORT", 5)) || rt_str_eq(F->w_223, rt_str("ARRAY", 5))) || rt_str_eq(F->w_223, rt_str("BEGIN", 5))) || rt_str_eq(F->w_223, rt_str("DELAY", 5))) || rt_str_eq(F->w_223, rt_str("DELTA", 5))) || rt_str_eq(F->w_223, rt_str("ELSIF", 5))) || rt_str_eq(F->w_223, rt_str("ENTRY", 5))) || rt_str_eq(F->w_223, rt_str("RAISE", 5))) || rt_str_eq(F->w_223, rt_str("RANGE", 5))) || rt_str_eq(F->w_223, rt_str("WHILE", 5)));
goto ret_;
} else if (0 || sel887 == ((rt_int)6LL)) {
F->result_ = ((((((((rt_str_eq(F->w_223, rt_str("ACCEPT", 6)) || rt_str_eq(F->w_223, rt_str("ACCESS", 6))) || rt_str_eq(F->w_223, rt_str("ASSERT", 6))) || rt_str_eq(F->w_223, rt_str("DIGITS", 6))) || rt_str_eq(F->w_223, rt_str("OTHERS", 6))) || rt_str_eq(F->w_223, rt_str("PRAGMA", 6))) || rt_str_eq(F->w_223, rt_str("RECORD", 6))) || rt_str_eq(F->w_223, rt_str("RETURN", 6))) || rt_str_eq(F->w_223, rt_str("SELECT", 6)));
goto ret_;
} else if (0 || sel887 == ((rt_int)7LL)) {
F->result_ = (((((((rt_str_eq(F->w_223, rt_str("DECLARE", 7)) || rt_str_eq(F->w_223, rt_str("GENERIC", 7))) || rt_str_eq(F->w_223, rt_str("PACKAGE", 7))) || rt_str_eq(F->w_223, rt_str("PACKING", 7))) || rt_str_eq(F->w_223, rt_str("PRIVATE", 7))) || rt_str_eq(F->w_223, rt_str("RENAMES", 7))) || rt_str_eq(F->w_223, rt_str("REVERSE", 7))) || rt_str_eq(F->w_223, rt_str("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel887 == ((rt_int)8LL)) {
F->result_ = (((rt_str_eq(F->w_223, rt_str("CONSTANT", 8)) || rt_str_eq(F->w_223, rt_str("FUNCTION", 8))) || rt_str_eq(F->w_223, rt_str("INITIATE", 8))) || rt_str_eq(F->w_223, rt_str("SEPARATE", 8)));
goto ret_;
} else if (0 || sel887 == ((rt_int)9LL)) {
F->result_ = (rt_str_eq(F->w_223, rt_str("EXCEPTION", 9)) || rt_str_eq(F->w_223, rt_str("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel887 == ((rt_int)10LL)) {
F->result_ = rt_str_eq(F->w_223, rt_str("RESTRICTED", 10));
goto ret_;
} else {
F->result_ = 0;
goto ret_;
}
}
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_add_token_228(struct f_greenc_1fr *up_, rt_int kind_225, rstr s_226, rt_int ival_227) {
  struct f_add_token_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_225 = kind_225;
F->s_226 = rt_str_copy(s_226);
F->ival_227 = ival_227;
F->up->ntoks_107 = rt_add(F->up->ntoks_107, ((rt_int)1LL));
F->up->toks_106.p[rt_index(F->up->ntoks_107, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo] = ({ R105 *cell888 = rt_alloc(sizeof(R105)); *cell888 = cp_R105(({ R105 ag889; ag889.kind_ = F->kind_225; ag889.line_ = F->up->src_line_109; ag889.ival_ = F->ival_227; ag889.s_ = NULL; ag889; })); (P104)cell888; });
(*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->ntoks_107, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_ = f_mk_190(F->up, F->s_226);
ret_:

  return;
}

static rt_int f_digit_value_230(struct f_greenc_1fr *up_, int c_229) {
  struct f_digit_value_230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_229 = c_229;
if (f_is_digit_197(F->up, F->c_229)) {
F->result_ = rt_sub(((rt_int)(F->c_229) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_199(F->up, F->c_229)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_233(struct f_greenc_1fr *up_, int c_231, rt_int base_232) {
  struct f_digit_in_233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_231 = c_231;
F->base_232 = base_232;
if (f_is_digit_197(F->up, F->c_231)) {
F->d_890 = rt_sub(((rt_int)(F->c_231) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_199(F->up, F->c_231) >= 65) && (f_upper_199(F->up, F->c_231) <= 70))) {
F->d_890 = rt_add(rt_sub(((rt_int)(f_upper_199(F->up, F->c_231)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((F->d_890 >= F->base_232)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = F->d_890;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_237(struct f_greenc_1fr *up_, rt_int *v_234, rt_int base_235, rt_int d_236) {
  struct f_accumulate_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_234 = v_234;
F->base_235 = base_235;
F->d_236 = d_236;
if (((*F->v_234) > rt_quot(rt_sub(INT64_MAX, F->d_236), F->base_235))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_234) = rt_add(rt_mul((*F->v_234), F->base_235), F->d_236);
ret_:

  return;
}

static void f_lex_line_239(struct f_greenc_1fr *up_, rstr line_238) {
  struct f_lex_line_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_238 = rt_str_copy(line_238);
F->i_891 = ((rt_int)1LL);
F->j_892 = ((rt_int)0LL);
F->n_893 = (F->line_238).len;
F->buf_898 = rt_str_new((((rt_int)1000LL) - ((rt_int)1LL) + 1));
while ((F->i_891 <= F->n_893)) {
F->c_894 = rt_range(rt_str_get(F->line_238, F->i_891), 0, 127);
if (((((F->c_894 == 32) || (F->c_894 == 9)) || (F->c_894 == 13)) || (F->c_894 == 12))) {
F->i_891 = rt_add(F->i_891, ((rt_int)1LL));
} else if ((((F->c_894 == 45) && (F->i_891 < F->n_893)) && (rt_str_get(F->line_238, rt_add(F->i_891, ((rt_int)1LL))) == 45))) {
F->i_891 = rt_add(F->n_893, ((rt_int)1LL));
} else if (f_is_letter_195(F->up, F->c_894)) {
F->j_892 = F->i_891;
F->bl_899 = ((rt_int)0LL);
while (((F->j_892 <= F->n_893) && ((f_is_letter_195(F->up, rt_str_get(F->line_238, F->j_892)) || f_is_digit_197(F->up, rt_str_get(F->line_238, F->j_892))) || (rt_str_get(F->line_238, F->j_892) == 95)))) {
if (((rt_str_get(F->line_238, F->j_892) == 95) && ((F->j_892 == F->n_893) || (!(f_is_letter_195(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL)))) || f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))))))))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
F->bl_899 = rt_add(F->bl_899, ((rt_int)1LL));
(*rt_str_at(&F->buf_898, F->bl_899)) = f_upper_199(F->up, rt_str_get(F->line_238, F->j_892));
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
}
L_end_901: ;
if (f_is_reserved_224(F->up, rt_str_slice(F->buf_898, ((rt_int)1LL), F->bl_899))) {
f_add_token_228(F->up, ((rt_int)2LL), rt_str_slice(F->buf_898, ((rt_int)1LL), F->bl_899), ((rt_int)0LL));
} else {
f_add_token_228(F->up, ((rt_int)1LL), rt_str_slice(F->buf_898, ((rt_int)1LL), F->bl_899), ((rt_int)0LL));
}
F->i_891 = F->j_892;
} else if (f_is_digit_197(F->up, F->c_894)) {
F->j_892 = F->i_891;
F->v_896 = ((rt_int)0LL);
F->bl_899 = ((rt_int)0LL);
while (((F->j_892 <= F->n_893) && (f_is_digit_197(F->up, rt_str_get(F->line_238, F->j_892)) || (rt_str_get(F->line_238, F->j_892) == 95)))) {
if ((rt_str_get(F->line_238, F->j_892) == 95)) {
if (((F->j_892 == F->n_893) || (!f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))))))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_237(F->up, &F->v_896, ((rt_int)10LL), rt_sub(((rt_int)(rt_str_get(F->line_238, F->j_892)) + 1), ((rt_int)(48) + 1)));
F->bl_899 = rt_add(F->bl_899, ((rt_int)1LL));
(*rt_str_at(&F->buf_898, F->bl_899)) = rt_str_get(F->line_238, F->j_892);
}
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
}
L_end_902: ;
if (((F->j_892 < F->n_893) && ((rt_str_get(F->line_238, F->j_892) == 35) || ((rt_str_get(F->line_238, F->j_892) == 58) && (f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL)))) || f_is_letter_195(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))))))))) {
{
F->base_904 = F->v_896;
if (((F->base_904 < ((rt_int)2LL)) || (F->base_904 > ((rt_int)16LL)))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_896 = ((rt_int)0LL);
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
if (((F->j_892 > F->n_893) || (f_digit_in_233(F->up, rt_str_get(F->line_238, F->j_892), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("a based number needs digits (RM79 2.4)", 38));
}
while (((F->j_892 <= F->n_893) && ((f_is_letter_195(F->up, rt_str_get(F->line_238, F->j_892)) || f_is_digit_197(F->up, rt_str_get(F->line_238, F->j_892))) || (rt_str_get(F->line_238, F->j_892) == 95)))) {
if ((rt_str_get(F->line_238, F->j_892) == 95)) {
if (((F->j_892 == F->n_893) || (f_digit_in_233(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_897 = f_digit_in_233(F->up, rt_str_get(F->line_238, F->j_892), F->base_904);
if ((F->d_897 < ((rt_int)0LL))) {
f_fail_211(F->up, F->up->src_line_109, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str("digit ", 6), rt_str_get(F->line_238, F->j_892)), rt_str(" is not valid in base ", 22)), rt_str_of_int(F->base_904)), rt_str(" (RM79 2.4)", 11)));
}
f_accumulate_237(F->up, &F->v_896, F->base_904, F->d_897);
}
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
}
L_end_905: ;

}
L_end_903: ;
f_add_token_228(F->up, ((rt_int)4LL), rt_str_of_int(F->v_896), F->v_896);
} else if (((F->j_892 < F->n_893) && ((rt_str_get(F->line_238, F->j_892) == 46) && f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))))))) {
F->bl_899 = rt_add(F->bl_899, ((rt_int)1LL));
(*rt_str_at(&F->buf_898, F->bl_899)) = 46;
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
while (((F->j_892 <= F->n_893) && (f_is_digit_197(F->up, rt_str_get(F->line_238, F->j_892)) || (rt_str_get(F->line_238, F->j_892) == 95)))) {
if ((rt_str_get(F->line_238, F->j_892) != 95)) {
F->bl_899 = rt_add(F->bl_899, ((rt_int)1LL));
(*rt_str_at(&F->buf_898, F->bl_899)) = rt_str_get(F->line_238, F->j_892);
} else if (((F->j_892 == F->n_893) || (!f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))))))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
}
L_end_906: ;
if (((F->j_892 < F->n_893) && (((rt_str_get(F->line_238, F->j_892) == 69) || (rt_str_get(F->line_238, F->j_892) == 101)) && (f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL)))) || ((rt_add(F->j_892, ((rt_int)1LL)) < F->n_893) && (((rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))) == 43) || (rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))) == 45)) && f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)2LL)))))))))) {
f_exponent_244(F->up, F->line_238, &F->j_892, &F->buf_898, &F->bl_899);
}
f_add_token_228(F->up, ((rt_int)5LL), rt_str_slice(F->buf_898, ((rt_int)1LL), F->bl_899), ((rt_int)0LL));
} else if (((F->j_892 < F->n_893) && (((rt_str_get(F->line_238, F->j_892) == 69) || (rt_str_get(F->line_238, F->j_892) == 101)) && (f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL)))) || ((rt_add(F->j_892, ((rt_int)1LL)) < F->n_893) && (((rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))) == 43) || (rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))) == 45)) && f_is_digit_197(F->up, rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)2LL)))))))))) {
f_exponent_244(F->up, F->line_238, &F->j_892, &F->buf_898, &F->bl_899);
f_add_token_228(F->up, ((rt_int)5LL), rt_str_slice(F->buf_898, ((rt_int)1LL), F->bl_899), ((rt_int)0LL));
} else {
f_add_token_228(F->up, ((rt_int)4LL), rt_str_slice(F->buf_898, ((rt_int)1LL), F->bl_899), F->v_896);
}
F->i_891 = F->j_892;
} else if (((F->c_894 == 34) || (F->c_894 == 37))) {
F->quote_895 = rt_range(F->c_894, 0, 127);
F->j_892 = rt_add(F->i_891, ((rt_int)1LL));
F->bl_899 = ((rt_int)0LL);
for (;;) {
if ((F->j_892 > F->n_893)) {
f_fail_211(F->up, F->up->src_line_109, rt_str("unterminated string", 19));
}
if ((rt_str_get(F->line_238, F->j_892) == F->quote_895)) {
if (((F->j_892 == F->n_893) || (rt_str_get(F->line_238, rt_add(F->j_892, ((rt_int)1LL))) != F->quote_895))) {
goto L_end_907;
}
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
} else if (((F->quote_895 == 37) && (rt_str_get(F->line_238, F->j_892) == 34))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_899 = rt_add(F->bl_899, ((rt_int)1LL));
(*rt_str_at(&F->buf_898, F->bl_899)) = rt_str_get(F->line_238, F->j_892);
F->j_892 = rt_add(F->j_892, ((rt_int)1LL));
}
L_end_907: ;
f_add_token_228(F->up, ((rt_int)6LL), rt_str_slice(F->buf_898, ((rt_int)1LL), F->bl_899), ((rt_int)0LL));
F->i_891 = rt_add(F->j_892, ((rt_int)1LL));
} else {
{
F->two_909 = rt_str_new((((rt_int)3LL) - ((rt_int)1LL) + 1));
rt_str_assign(&F->two_909, rt_str("   ", 3));
(*rt_str_at(&F->two_909, ((rt_int)1LL))) = F->c_894;
if ((F->i_891 < F->n_893)) {
(*rt_str_at(&F->two_909, ((rt_int)2LL))) = rt_str_get(F->line_238, rt_add(F->i_891, ((rt_int)1LL)));
}
if ((rt_add(F->i_891, ((rt_int)1LL)) < F->n_893)) {
(*rt_str_at(&F->two_909, ((rt_int)3LL))) = rt_str_get(F->line_238, rt_add(F->i_891, ((rt_int)2LL)));
}
if (rt_str_eq(F->two_909, rt_str(":=:", 3))) {
f_add_token_228(F->up, ((rt_int)3LL), rt_str(":=:", 3), ((rt_int)0LL));
F->i_891 = rt_add(F->i_891, ((rt_int)3LL));
} else if ((((((((((rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str(":=", 2)) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=:", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=>", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str("..", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str("**", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str("/=", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<=", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">=", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<<", 2))) || rt_str_eq(rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">>", 2)))) {
f_add_token_228(F->up, ((rt_int)3LL), rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)2LL)), ((rt_int)0LL));
F->i_891 = rt_add(F->i_891, ((rt_int)2LL));
} else if ((F->c_894 == 33)) {
f_add_token_228(F->up, ((rt_int)3LL), rt_str("|", 1), ((rt_int)0LL));
F->i_891 = rt_add(F->i_891, ((rt_int)1LL));
} else if (((((((((((((((((F->c_894 == 38) || (F->c_894 == 39)) || (F->c_894 == 40)) || (F->c_894 == 41)) || (F->c_894 == 42)) || (F->c_894 == 43)) || (F->c_894 == 44)) || (F->c_894 == 45)) || (F->c_894 == 46)) || (F->c_894 == 47)) || (F->c_894 == 58)) || (F->c_894 == 59)) || (F->c_894 == 60)) || (F->c_894 == 61)) || (F->c_894 == 62)) || (F->c_894 == 124))) {
f_add_token_228(F->up, ((rt_int)3LL), rt_str_slice(F->two_909, ((rt_int)1LL), ((rt_int)1LL)), ((rt_int)0LL));
F->i_891 = rt_add(F->i_891, ((rt_int)1LL));
if ((F->c_894 == 59)) {
f_check_include_248(F->up);
}
} else {
f_fail_211(F->up, F->up->src_line_109, rt_str("unexpected character", 20));
}

}
L_end_908: ;
}
}
L_end_900: ;
ret_:

  return;
}

static void f_exponent_244(struct f_greenc_1fr *up_, rstr line_240, rt_int *j_241, rstr *buf_242, rt_int *bl_243) {
  struct f_exponent_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_240 = rt_str_copy(line_240);
F->j_241 = j_241;
F->buf_242 = buf_242;
F->bl_243 = bl_243;
(*F->bl_243) = rt_add((*F->bl_243), ((rt_int)1LL));
(*rt_str_at(&(*F->buf_242), (*F->bl_243))) = 69;
(*F->j_241) = rt_add((*F->j_241), ((rt_int)1LL));
if (((rt_str_get(F->line_240, (*F->j_241)) == 43) || (rt_str_get(F->line_240, (*F->j_241)) == 45))) {
(*F->bl_243) = rt_add((*F->bl_243), ((rt_int)1LL));
(*rt_str_at(&(*F->buf_242), (*F->bl_243))) = rt_str_get(F->line_240, (*F->j_241));
(*F->j_241) = rt_add((*F->j_241), ((rt_int)1LL));
}
while ((((*F->j_241) <= (F->line_240).len) && (f_is_digit_197(F->up, rt_str_get(F->line_240, (*F->j_241))) || (rt_str_get(F->line_240, (*F->j_241)) == 95)))) {
if ((rt_str_get(F->line_240, (*F->j_241)) != 95)) {
(*F->bl_243) = rt_add((*F->bl_243), ((rt_int)1LL));
(*rt_str_at(&(*F->buf_242), (*F->bl_243))) = rt_str_get(F->line_240, (*F->j_241));
} else if ((((*F->j_241) == (F->line_240).len) || (!f_is_digit_197(F->up, rt_str_get(F->line_240, rt_add((*F->j_241), ((rt_int)1LL))))))) {
f_fail_211(F->up, F->up->src_line_109, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_241) = rt_add((*F->j_241), ((rt_int)1LL));
}
L_end_910: ;
ret_:

  return;
}

static void f_read_file_text_247(struct f_greenc_1fr *up_, rstr name_245, P134 *contents_246) {
  struct f_read_file_text_247fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_245 = rt_str_copy(name_245);
F->contents_246 = contents_246;
rt_g_read_file_text(F->name_245, F->contents_246);
ret_:

  return;
}

static void f_check_include_248(struct f_greenc_1fr *up_) {
  struct f_check_include_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_911 = NULL;
F->saved_line_912 = F->up->src_line_109;
F->from_913 = ((rt_int)1LL);
if ((F->up->ntoks_107 < ((rt_int)6LL))) {
goto ret_;
}
if ((!(((((((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)5LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).kind_ == ((rt_int)2LL)) && rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)5LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), rt_str("PRAGMA", 6))) && rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)4LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), rt_str("INCLUDE", 7))) && rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)3LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), rt_str("(", 1))) && ((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)2LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).kind_ == ((rt_int)6LL))) && rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)1LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), rt_str(")", 1))))) {
goto ret_;
}
f_read_file_text_247(F->up, (*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)2LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), &F->t_911);
if ((F->t_911 == NULL)) {
f_fail_211(F->up, F->up->src_line_109, rt_str_cat(rt_str_cat(rt_str("pragma INCLUDE: the file ", 25), (*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->ntoks_107, ((rt_int)2LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_))), rt_str(" cannot be read", 15)));
}
F->up->ntoks_107 = rt_sub(F->up->ntoks_107, ((rt_int)6LL));
F->up->src_line_109 = ((rt_int)0LL);
{ rt_int lo916 = ((rt_int)1LL), hi917 = ((*(P134)rt_nil_check(F->t_911))).len;
for (rt_int it918 = lo916; it918 <= hi917; it918++) {
F->k_915 = it918;
if ((rt_str_get((*(P134)rt_nil_check(F->t_911)), F->k_915) == 10)) {
F->up->src_line_109 = rt_add(F->up->src_line_109, ((rt_int)1LL));
f_include_line_252(F->up, (*(P134)rt_nil_check(F->t_911)), F->from_913, rt_sub(F->k_915, ((rt_int)1LL)));
F->from_913 = rt_add(F->k_915, ((rt_int)1LL));
}
}
}
L_end_914: ;
if ((F->from_913 <= ((*(P134)rt_nil_check(F->t_911))).len)) {
F->up->src_line_109 = rt_add(F->up->src_line_109, ((rt_int)1LL));
f_include_line_252(F->up, (*(P134)rt_nil_check(F->t_911)), F->from_913, ((*(P134)rt_nil_check(F->t_911))).len);
}
F->up->src_line_109 = F->saved_line_912;
ret_:

  return;
}

static void f_include_line_252(struct f_greenc_1fr *up_, rstr t_249, rt_int from_250, rt_int to_251) {
  struct f_include_line_252fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_249 = rt_str_copy(t_249);
F->from_250 = from_250;
F->to_251 = to_251;
F->l_919 = rt_str_new((rt_add(rt_sub(F->to_251, F->from_250), ((rt_int)1LL)) - ((rt_int)1LL) + 1));
{ rt_int lo922 = F->from_250, hi923 = F->to_251;
for (rt_int it924 = lo922; it924 <= hi923; it924++) {
F->k_921 = it924;
(*rt_str_at(&F->l_919, rt_add(rt_sub(F->k_921, F->from_250), ((rt_int)1LL)))) = rt_str_get(F->t_249, F->k_921);
}
}
L_end_920: ;
f_lex_line_239(F->up, F->l_919);
ret_:

  return;
}

static void f_read_source_253(struct f_greenc_1fr *up_) {
  struct f_read_source_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_925 = rt_str_new((((rt_int)10000LL) - ((rt_int)1LL) + 1));
F->bl_926 = ((rt_int)0LL);
{ rt_frame xf928;
if (RT_TRY(xf928)) {
for (;;) {
(F->c_927 = rt_g_getc());
if ((F->c_927 == 10)) {
F->up->src_line_109 = rt_add(F->up->src_line_109, ((rt_int)1LL));
f_lex_line_239(F->up, rt_str_slice(F->buf_925, ((rt_int)1LL), F->bl_926));
F->bl_926 = ((rt_int)0LL);
} else {
F->bl_926 = rt_add(F->bl_926, ((rt_int)1LL));
(*rt_str_at(&F->buf_925, F->bl_926)) = F->c_927;
}
}
L_end_930: ;
RT_POP(xf928);
} else {
RT_POP(xf928);
int x929 = rt_xcur;
if (rt_g_aborted()) rt_raise(x929);
if (0 || x929 == rt_exc("END_OF_FILE")) {
if ((F->bl_926 > ((rt_int)0LL))) {
F->up->src_line_109 = rt_add(F->up->src_line_109, ((rt_int)1LL));
f_lex_line_239(F->up, rt_str_slice(F->buf_925, ((rt_int)1LL), F->bl_926));
}
f_add_token_228(F->up, ((rt_int)0LL), rt_str("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x929);
}
}
}
ret_:

  return;
}

static P164 f_nn_256(struct f_greenc_1fr *up_, rt_int kind_254, rt_int line_255) {
  struct f_nn_256fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_254 = kind_254;
F->line_255 = line_255;
F->result_ = ({ R165 *cell931 = rt_alloc(sizeof(R165)); *cell931 = cp_R165(({ R165 ag932; ag932.kind_ = F->kind_254; ag932.line_ = F->line_255; ag932.ival_ = ((rt_int)0LL); ag932.flag_ = ((rt_int)0LL); ag932.name_ = NULL; ag932.tag_ = NULL; ag932.a_ = NULL; ag932.b_ = NULL; ag932.c_ = NULL; ag932.d_ = NULL; ag932.e_ = NULL; ag932.next_ = NULL; ag932.formal_ = NULL; ag932; })); (P164)cell931; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_260(struct f_greenc_1fr *up_, P164 *head_257, P164 *tail_258, P164 x_259) {
  struct f_append_260fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_257 = head_257;
F->tail_258 = tail_258;
F->x_259 = x_259;
if ((F->x_259 == NULL)) {
goto ret_;
}
if (((*F->head_257) == NULL)) {
(*F->head_257) = F->x_259;
} else {
(*(P164)rt_nil_check((*F->tail_258))).next_ = F->x_259;
}
(*F->tail_258) = F->x_259;
while (((*(P164)rt_nil_check((*F->tail_258))).next_ != NULL)) {
(*F->tail_258) = (*(P164)rt_nil_check((*F->tail_258))).next_;
}
L_end_933: ;
ret_:

  return;
}

static rt_int f_list_len_262(struct f_greenc_1fr *up_, P164 l_261) {
  struct f_list_len_262fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_261 = l_261;
F->n_934 = ((rt_int)0LL);
F->p_935 = NULL;
F->p_935 = F->l_261;
while ((F->p_935 != NULL)) {
F->n_934 = rt_add(F->n_934, ((rt_int)1LL));
F->p_935 = (*(P164)rt_nil_check(F->p_935)).next_;
}
L_end_936: ;
F->result_ = F->n_934;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_263(struct f_greenc_1fr *up_) {
  struct f_cur_line_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_265(struct f_greenc_1fr *up_, rstr w_264) {
  struct f_at_kw_265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_264 = rt_str_copy(w_264);
F->result_ = (((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).kind_ == ((rt_int)2LL)) && rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), F->w_264));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_267(struct f_greenc_1fr *up_, rstr w_266) {
  struct f_at_op_267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_266 = rt_str_copy(w_266);
F->result_ = (((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).kind_ == ((rt_int)3LL)) && rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), F->w_266));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_269(struct f_greenc_1fr *up_, rt_int k_268) {
  struct f_at_kind_269fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_268 = k_268;
F->result_ = ((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).kind_ == F->k_268);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_271(struct f_greenc_1fr *up_, rt_int k_270) {
  struct f_kind_at_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_270 = k_270;
if ((rt_add(F->up->tpos_108, F->k_270) > F->up->ntoks_107)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_add(F->up->tpos_108, F->k_270), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_text_at_273(struct f_greenc_1fr *up_, rt_int k_272) {
  struct f_text_at_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_272 = k_272;
if ((rt_add(F->up->tpos_108, F->k_272) > F->up->ntoks_107)) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = (*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_add(F->up->tpos_108, F->k_272), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_275(struct f_greenc_1fr *up_, rstr msg_274) {
  struct f_perror_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_274 = rt_str_copy(msg_274);
f_fail_211(F->up, (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).line_, rt_str_catc(rt_str_cat(rt_str_cat(F->msg_274, rt_str(" (at ", 5)), (*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_))), 41));
ret_:

  return;
}

static void f_skip_276(struct f_greenc_1fr *up_) {
  struct f_skip_276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_108 = rt_add(F->up->tpos_108, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_278(struct f_greenc_1fr *up_, rstr w_277) {
  struct f_expect_kw_278fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_277 = rt_str_copy(w_277);
if ((!f_at_kw_265(F->up, F->w_277))) {
f_perror_275(F->up, rt_str_cat(rt_str("expected ", 9), F->w_277));
}
F->up->tpos_108 = rt_add(F->up->tpos_108, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_280(struct f_greenc_1fr *up_, rstr w_279) {
  struct f_expect_op_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_279 = rt_str_copy(w_279);
if ((!f_at_op_267(F->up, F->w_279))) {
f_perror_275(F->up, rt_str_cat(rt_str("expected ", 9), F->w_279));
}
F->up->tpos_108 = rt_add(F->up->tpos_108, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_282(struct f_greenc_1fr *up_, P134 *res_281) {
  struct f_expect_id_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_281 = res_281;
if ((!f_at_kind_269(F->up, ((rt_int)1LL)))) {
f_perror_275(F->up, rt_str("expected an identifier", 22));
}
F->up->tpos_108 = rt_add(F->up->tpos_108, ((rt_int)1LL));
(*F->res_281) = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->tpos_108, ((rt_int)1LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_284(struct f_greenc_1fr *up_, P164 *res_283) {
  struct f_name_node_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_283 = res_283;
F->x_937 = NULL;
F->x_937 = f_nn_256(F->up, ((rt_int)5LL), f_cur_line_263(F->up));
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_937)).name_);
(*F->res_283) = F->x_937;
goto ret_;
ret_:

  return;
}

static void f_id_list_286(struct f_greenc_1fr *up_, P164 *res_285) {
  struct f_id_list_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_285 = res_285;
F->head_938 = NULL;
F->tail_939 = NULL;
F->x_940 = NULL;
f_name_node_284(F->up, &F->x_940);
f_append_260(F->up, &F->head_938, &F->tail_939, F->x_940);
while (f_at_op_267(F->up, rt_str(",", 1))) {
f_skip_276(F->up);
f_name_node_284(F->up, &F->x_940);
f_append_260(F->up, &F->head_938, &F->tail_939, F->x_940);
}
L_end_941: ;
(*F->res_285) = F->head_938;
goto ret_;
ret_:

  return;
}

static P164 f_binop_291(struct f_greenc_1fr *up_, P134 op_287, P164 l_288, P164 r_289, rt_int line_290) {
  struct f_binop_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_287 = op_287;
F->l_288 = l_288;
F->r_289 = r_289;
F->line_290 = line_290;
F->x_942 = NULL;
F->x_942 = f_nn_256(F->up, ((rt_int)7LL), F->line_290);
(*(P164)rt_nil_check(F->x_942)).name_ = F->op_287;
(*(P164)rt_nil_check(F->x_942)).a_ = F->l_288;
(*(P164)rt_nil_check(F->x_942)).b_ = F->r_289;
F->result_ = F->x_942;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_293(struct f_greenc_1fr *up_, P164 *res_292) {
  struct f_expr_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_292 = res_292;
F->l_943 = NULL;
F->r_944 = NULL;
F->op_945 = NULL;
f_relation_297(F->up, &F->l_943);
while (((f_at_kw_265(F->up, rt_str("AND", 3)) || f_at_kw_265(F->up, rt_str("OR", 2))) || f_at_kw_265(F->up, rt_str("XOR", 3)))) {
F->op_945 = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
F->line_946 = f_cur_line_263(F->up);
f_skip_276(F->up);
if ((rt_str_eq((*(P134)rt_nil_check(F->op_945)), rt_str("AND", 3)) && f_at_kw_265(F->up, rt_str("THEN", 4)))) {
f_skip_276(F->up);
} else if ((rt_str_eq((*(P134)rt_nil_check(F->op_945)), rt_str("OR", 2)) && f_at_kw_265(F->up, rt_str("ELSE", 4)))) {
f_skip_276(F->up);
}
f_relation_297(F->up, &F->r_944);
F->l_943 = f_binop_291(F->up, F->op_945, F->l_943, F->r_944, F->line_946);
}
L_end_947: ;
(*F->res_292) = F->l_943;
goto ret_;
ret_:

  return;
}

static int f_is_rel_295(struct f_greenc_1fr *up_, rstr s_294) {
  struct f_is_rel_295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_294 = rt_str_copy(s_294);
F->result_ = (((((rt_str_eq(F->s_294, rt_str("=", 1)) || rt_str_eq(F->s_294, rt_str("/=", 2))) || rt_str_eq(F->s_294, rt_str("<", 1))) || rt_str_eq(F->s_294, rt_str("<=", 2))) || rt_str_eq(F->s_294, rt_str(">", 1))) || rt_str_eq(F->s_294, rt_str(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_297(struct f_greenc_1fr *up_, P164 *res_296) {
  struct f_relation_297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_296 = res_296;
F->l_948 = NULL;
F->r_949 = NULL;
F->lo_950 = NULL;
F->hi_951 = NULL;
F->t_952 = NULL;
F->op_953 = NULL;
F->line_954 = f_cur_line_263(F->up);
F->neg_955 = 0;
f_simple_expr_299(F->up, &F->l_948);
if ((f_at_kind_269(F->up, ((rt_int)3LL)) && f_is_rel_295(F->up, (*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_))))) {
F->op_953 = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
f_simple_expr_299(F->up, &F->r_949);
F->l_948 = f_binop_291(F->up, F->op_953, F->l_948, F->r_949, F->line_954);
(*F->res_296) = F->l_948;
goto ret_;
}
if (((f_at_kw_265(F->up, rt_str("NOT", 3)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("IN", 2)))) {
f_skip_276(F->up);
F->neg_955 = 1;
}
if (f_at_kw_265(F->up, rt_str("IN", 2))) {
f_skip_276(F->up);
f_simple_expr_299(F->up, &F->lo_950);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &F->hi_951);
F->t_952 = f_nn_256(F->up, ((rt_int)14LL), F->line_954);
(*(P164)rt_nil_check(F->t_952)).a_ = F->lo_950;
(*(P164)rt_nil_check(F->t_952)).b_ = F->hi_951;
F->op_953 = f_mk_190(F->up, rt_str("IN", 2));
F->l_948 = f_binop_291(F->up, F->op_953, F->l_948, F->t_952, F->line_954);
if (F->neg_955) {
F->t_952 = f_nn_256(F->up, ((rt_int)6LL), F->line_954);
(*(P164)rt_nil_check(F->t_952)).name_ = f_mk_190(F->up, rt_str("NOT", 3));
(*(P164)rt_nil_check(F->t_952)).a_ = F->l_948;
(*F->res_296) = F->t_952;
goto ret_;
}
}
(*F->res_296) = F->l_948;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_299(struct f_greenc_1fr *up_, P164 *res_298) {
  struct f_simple_expr_299fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_298 = res_298;
F->l_956 = NULL;
F->r_957 = NULL;
F->op_958 = NULL;
F->line_959 = f_cur_line_263(F->up);
if (((f_at_op_267(F->up, rt_str("+", 1)) || f_at_op_267(F->up, rt_str("-", 1))) || f_at_kw_265(F->up, rt_str("NOT", 3)))) {
F->op_958 = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
f_term_301(F->up, &F->r_957);
F->l_956 = f_nn_256(F->up, ((rt_int)6LL), F->line_959);
(*(P164)rt_nil_check(F->l_956)).name_ = F->op_958;
(*(P164)rt_nil_check(F->l_956)).a_ = F->r_957;
} else {
f_term_301(F->up, &F->l_956);
}
while (((f_at_op_267(F->up, rt_str("+", 1)) || f_at_op_267(F->up, rt_str("-", 1))) || f_at_op_267(F->up, rt_str("&", 1)))) {
F->op_958 = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
f_term_301(F->up, &F->r_957);
F->l_956 = f_binop_291(F->up, F->op_958, F->l_956, F->r_957, F->line_959);
}
L_end_960: ;
(*F->res_298) = F->l_956;
goto ret_;
ret_:

  return;
}

static void f_term_301(struct f_greenc_1fr *up_, P164 *res_300) {
  struct f_term_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_300 = res_300;
F->l_961 = NULL;
F->r_962 = NULL;
F->op_963 = NULL;
F->line_964 = f_cur_line_263(F->up);
f_factor_303(F->up, &F->l_961);
while (((f_at_op_267(F->up, rt_str("*", 1)) || f_at_op_267(F->up, rt_str("/", 1))) || f_at_kw_265(F->up, rt_str("MOD", 3)))) {
F->op_963 = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
f_factor_303(F->up, &F->r_962);
F->l_961 = f_binop_291(F->up, F->op_963, F->l_961, F->r_962, F->line_964);
}
L_end_965: ;
(*F->res_300) = F->l_961;
goto ret_;
ret_:

  return;
}

static void f_factor_303(struct f_greenc_1fr *up_, P164 *res_302) {
  struct f_factor_303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_302 = res_302;
F->l_966 = NULL;
F->r_967 = NULL;
F->op_968 = NULL;
F->line_969 = f_cur_line_263(F->up);
f_primary_305(F->up, &F->l_966);
if (f_at_op_267(F->up, rt_str("**", 2))) {
F->op_968 = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
f_primary_305(F->up, &F->r_967);
F->l_966 = f_binop_291(F->up, F->op_968, F->l_966, F->r_967, F->line_969);
}
(*F->res_302) = F->l_966;
goto ret_;
ret_:

  return;
}

static void f_primary_305(struct f_greenc_1fr *up_, P164 *res_304) {
  struct f_primary_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_304 = res_304;
F->x_970 = NULL;
F->line_971 = f_cur_line_263(F->up);
if (f_at_kind_269(F->up, ((rt_int)4LL))) {
F->x_970 = f_nn_256(F->up, ((rt_int)1LL), F->line_971);
(*(P164)rt_nil_check(F->x_970)).ival_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).ival_;
(*(P164)rt_nil_check(F->x_970)).name_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
(*F->res_304) = F->x_970;
goto ret_;
}
if (f_at_kind_269(F->up, ((rt_int)5LL))) {
F->x_970 = f_nn_256(F->up, ((rt_int)2LL), F->line_971);
(*(P164)rt_nil_check(F->x_970)).name_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
(*F->res_304) = F->x_970;
goto ret_;
}
if (f_at_kind_269(F->up, ((rt_int)6LL))) {
F->x_970 = f_nn_256(F->up, ((rt_int)3LL), F->line_971);
(*(P164)rt_nil_check(F->x_970)).name_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
(*F->res_304) = F->x_970;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("NULL", 4))) {
f_skip_276(F->up);
F->x_970 = f_nn_256(F->up, ((rt_int)4LL), F->line_971);
(*F->res_304) = F->x_970;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("NEW", 3))) {
f_skip_276(F->up);
F->x_970 = f_nn_256(F->up, ((rt_int)11LL), F->line_971);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_970)).name_);
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_agg_or_paren_307(F->up, &(*(P164)rt_nil_check(F->x_970)).a_);
}
(*F->res_304) = F->x_970;
goto ret_;
}
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_agg_or_paren_307(F->up, &F->x_970);
(*F->res_304) = F->x_970;
goto ret_;
}
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
f_name_p_309(F->up, &F->x_970);
(*F->res_304) = F->x_970;
goto ret_;
}
f_perror_275(F->up, rt_str("expected an expression", 22));
(*F->res_304) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_307(struct f_greenc_1fr *up_, P164 *res_306) {
  struct f_agg_or_paren_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_306 = res_306;
F->line_972 = f_cur_line_263(F->up);
F->items_973 = NULL;
F->itail_974 = NULL;
F->it_975 = NULL;
F->first_976 = NULL;
F->keys_977 = NULL;
F->ktail_978 = NULL;
F->lab_979 = NULL;
F->x_980 = NULL;
F->more_981 = 1;
f_expect_op_280(F->up, rt_str("(", 1));
while (F->more_981) {
F->it_975 = f_nn_256(F->up, ((rt_int)13LL), F->line_972);
if (f_at_kw_265(F->up, rt_str("OTHERS", 6))) {
f_skip_276(F->up);
f_expect_op_280(F->up, rt_str("=>", 2));
F->lab_979 = f_nn_256(F->up, ((rt_int)61LL), F->line_972);
(*(P164)rt_nil_check(F->lab_979)).flag_ = ((rt_int)1LL);
(*(P164)rt_nil_check(F->it_975)).a_ = F->lab_979;
f_expr_293(F->up, &(*(P164)rt_nil_check(F->it_975)).b_);
} else {
f_expr_293(F->up, &F->first_976);
if (((f_at_op_267(F->up, rt_str("..", 2)) || f_at_op_267(F->up, rt_str("|", 1))) || f_at_op_267(F->up, rt_str("=>", 2)))) {
F->keys_977 = NULL;
F->ktail_978 = NULL;
for (;;) {
F->lab_979 = f_nn_256(F->up, ((rt_int)61LL), F->line_972);
(*(P164)rt_nil_check(F->lab_979)).a_ = F->first_976;
if (f_at_op_267(F->up, rt_str("..", 2))) {
f_skip_276(F->up);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->lab_979)).b_);
}
f_append_260(F->up, &F->keys_977, &F->ktail_978, F->lab_979);
if ((!f_at_op_267(F->up, rt_str("|", 1)))) {
goto L_end_983;
}
f_skip_276(F->up);
f_simple_expr_299(F->up, &F->first_976);
}
L_end_983: ;
f_expect_op_280(F->up, rt_str("=>", 2));
(*(P164)rt_nil_check(F->it_975)).a_ = F->keys_977;
f_expr_293(F->up, &(*(P164)rt_nil_check(F->it_975)).b_);
} else {
(*(P164)rt_nil_check(F->it_975)).b_ = F->first_976;
}
}
f_append_260(F->up, &F->items_973, &F->itail_974, F->it_975);
F->more_981 = f_at_op_267(F->up, rt_str(",", 1));
if (F->more_981) {
f_skip_276(F->up);
}
}
L_end_982: ;
f_expect_op_280(F->up, rt_str(")", 1));
if ((((*(P164)rt_nil_check(F->items_973)).next_ == NULL) && ((*(P164)rt_nil_check(F->items_973)).a_ == NULL))) {
F->x_980 = f_nn_256(F->up, ((rt_int)15LL), F->line_972);
(*(P164)rt_nil_check(F->x_980)).a_ = (*(P164)rt_nil_check(F->items_973)).b_;
(*F->res_306) = F->x_980;
goto ret_;
}
F->x_980 = f_nn_256(F->up, ((rt_int)12LL), F->line_972);
(*(P164)rt_nil_check(F->x_980)).a_ = F->items_973;
(*F->res_306) = F->x_980;
goto ret_;
ret_:

  return;
}

static void f_name_p_309(struct f_greenc_1fr *up_, P164 *res_308) {
  struct f_name_p_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_308 = res_308;
F->p_984 = NULL;
F->x_985 = NULL;
F->args_986 = NULL;
F->atail_987 = NULL;
F->lo_988 = NULL;
F->r_989 = NULL;
F->line_990 = f_cur_line_263(F->up);
f_name_node_284(F->up, &F->p_984);
for (;;) {
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
F->args_986 = NULL;
F->atail_987 = NULL;
if ((!f_at_op_267(F->up, rt_str(")", 1)))) {
F->more_991 = 1;
while (F->more_991) {
{
F->formal_995 = NULL;
F->mark_996 = ((rt_int)0LL);
if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) || rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("=>", 2))))) {
F->formal_995 = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
if (rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(":=", 2))) {
F->mark_996 = ((rt_int)1LL);
} else if (rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("=:", 2))) {
F->mark_996 = ((rt_int)3LL);
} else if (rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) {
F->mark_996 = ((rt_int)2LL);
} else {
F->mark_996 = ((rt_int)4LL);
}
f_skip_276(F->up);
f_skip_276(F->up);
}
f_expr_293(F->up, &F->lo_988);
if (f_at_op_267(F->up, rt_str("..", 2))) {
f_skip_276(F->up);
F->r_989 = f_nn_256(F->up, ((rt_int)14LL), F->line_990);
(*(P164)rt_nil_check(F->r_989)).a_ = F->lo_988;
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->r_989)).b_);
F->lo_988 = F->r_989;
}
(*(P164)rt_nil_check(F->lo_988)).formal_ = F->formal_995;
(*(P164)rt_nil_check(F->lo_988)).flag_ = F->mark_996;
f_append_260(F->up, &F->args_986, &F->atail_987, F->lo_988);

}
L_end_994: ;
F->more_991 = f_at_op_267(F->up, rt_str(",", 1));
if (F->more_991) {
f_skip_276(F->up);
}
}
L_end_993: ;
}
f_expect_op_280(F->up, rt_str(")", 1));
F->x_985 = f_nn_256(F->up, ((rt_int)8LL), F->line_990);
(*(P164)rt_nil_check(F->x_985)).a_ = F->p_984;
(*(P164)rt_nil_check(F->x_985)).b_ = F->args_986;
F->p_984 = F->x_985;
} else if (f_at_op_267(F->up, rt_str(".", 1))) {
f_skip_276(F->up);
F->x_985 = f_nn_256(F->up, ((rt_int)9LL), F->line_990);
(*(P164)rt_nil_check(F->x_985)).a_ = F->p_984;
if (f_at_kw_265(F->up, rt_str("ALL", 3))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_985)).name_ = f_mk_190(F->up, rt_str("ALL", 3));
} else {
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_985)).name_);
}
F->p_984 = F->x_985;
} else if (f_at_op_267(F->up, rt_str("'", 1))) {
f_skip_276(F->up);
F->x_985 = f_nn_256(F->up, ((rt_int)10LL), F->line_990);
(*(P164)rt_nil_check(F->x_985)).a_ = F->p_984;
(*(P164)rt_nil_check(F->x_985)).name_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_985)).b_);
f_expect_op_280(F->up, rt_str(")", 1));
}
F->p_984 = F->x_985;
} else {
(*F->res_308) = F->p_984;
goto ret_;
}
}
L_end_992: ;
ret_:

  return;
}

static void f_subtype_ind_311(struct f_greenc_1fr *up_, P164 *res_310) {
  struct f_subtype_ind_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_310 = res_310;
F->x_997 = NULL;
F->r_998 = NULL;
F->args_999 = NULL;
F->atail_1000 = NULL;
F->lo_1001 = NULL;
F->line_1002 = f_cur_line_263(F->up);
F->more_1003 = 1;
F->x_997 = f_nn_256(F->up, ((rt_int)80LL), F->line_1002);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_997)).name_);
while (f_at_op_267(F->up, rt_str(".", 1))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_997)).tag_ = (*(P164)rt_nil_check(F->x_997)).name_;
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_997)).name_);
}
L_end_1004: ;
if (f_at_kw_265(F->up, rt_str("RANGE", 5))) {
f_skip_276(F->up);
F->r_998 = f_nn_256(F->up, ((rt_int)14LL), F->line_1002);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->r_998)).a_);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->r_998)).b_);
(*(P164)rt_nil_check(F->x_997)).a_ = F->r_998;
(*(P164)rt_nil_check(F->x_997)).flag_ = ((rt_int)1LL);
} else if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
while (F->more_1003) {
f_expr_293(F->up, &F->lo_1001);
if (f_at_op_267(F->up, rt_str("..", 2))) {
f_skip_276(F->up);
F->r_998 = f_nn_256(F->up, ((rt_int)14LL), F->line_1002);
(*(P164)rt_nil_check(F->r_998)).a_ = F->lo_1001;
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->r_998)).b_);
F->lo_1001 = F->r_998;
}
f_append_260(F->up, &F->args_999, &F->atail_1000, F->lo_1001);
F->more_1003 = f_at_op_267(F->up, rt_str(",", 1));
if (F->more_1003) {
f_skip_276(F->up);
}
}
L_end_1005: ;
f_expect_op_280(F->up, rt_str(")", 1));
(*(P164)rt_nil_check(F->x_997)).a_ = F->args_999;
(*(P164)rt_nil_check(F->x_997)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_265(F->up, rt_str("DIGITS", 6)) || f_at_kw_265(F->up, rt_str("DELTA", 5)))) {
f_skip_276(F->up);
f_simple_expr_299(F->up, &F->r_998);
if (f_at_kw_265(F->up, rt_str("RANGE", 5))) {
f_skip_276(F->up);
f_simple_expr_299(F->up, &F->r_998);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &F->r_998);
}
}
(*F->res_310) = F->x_997;
goto ret_;
ret_:

  return;
}

static void f_type_spec_313(struct f_greenc_1fr *up_, P164 *res_312) {
  struct f_type_spec_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_312 = res_312;
F->x_1006 = NULL;
if (((((f_at_op_267(F->up, rt_str("(", 1)) || f_at_kw_265(F->up, rt_str("ARRAY", 5))) || f_at_kw_265(F->up, rt_str("RECORD", 6))) || f_at_kw_265(F->up, rt_str("ACCESS", 6))) || f_at_kw_265(F->up, rt_str("RANGE", 5)))) {
f_type_def_315(F->up, &F->x_1006);
} else {
f_subtype_ind_311(F->up, &F->x_1006);
}
(*F->res_312) = F->x_1006;
goto ret_;
ret_:

  return;
}

static void f_type_def_315(struct f_greenc_1fr *up_, P164 *res_314) {
  struct f_type_def_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_314 = res_314;
F->x_1007 = NULL;
F->lits_1008 = NULL;
F->ltail_1009 = NULL;
F->l_1010 = NULL;
F->idx_1011 = NULL;
F->itail_1012 = NULL;
F->r_1013 = NULL;
F->comps_1014 = NULL;
F->ctail_1015 = NULL;
F->names_1016 = NULL;
F->st_1017 = NULL;
F->def_1018 = NULL;
F->cm_1019 = NULL;
F->line_1020 = f_cur_line_263(F->up);
F->more_1021 = 1;
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
F->x_1007 = f_nn_256(F->up, ((rt_int)70LL), F->line_1020);
while (F->more_1021) {
if (f_at_kind_269(F->up, ((rt_int)6LL))) {
F->l_1010 = f_nn_256(F->up, ((rt_int)3LL), F->line_1020);
(*(P164)rt_nil_check(F->l_1010)).name_ = (*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_;
f_skip_276(F->up);
} else {
f_name_node_284(F->up, &F->l_1010);
}
f_append_260(F->up, &F->lits_1008, &F->ltail_1009, F->l_1010);
F->more_1021 = f_at_op_267(F->up, rt_str(",", 1));
if (F->more_1021) {
f_skip_276(F->up);
}
}
L_end_1022: ;
f_expect_op_280(F->up, rt_str(")", 1));
(*(P164)rt_nil_check(F->x_1007)).a_ = F->lits_1008;
(*F->res_314) = F->x_1007;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("RANGE", 5))) {
f_skip_276(F->up);
F->x_1007 = f_nn_256(F->up, ((rt_int)71LL), F->line_1020);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->x_1007)).a_);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->x_1007)).b_);
(*F->res_314) = F->x_1007;
goto ret_;
}
if ((f_at_kw_265(F->up, rt_str("DIGITS", 6)) || f_at_kw_265(F->up, rt_str("DELTA", 5)))) {
f_skip_276(F->up);
F->x_1007 = f_nn_256(F->up, ((rt_int)72LL), F->line_1020);
f_simple_expr_299(F->up, &F->r_1013);
if (f_at_kw_265(F->up, rt_str("RANGE", 5))) {
f_skip_276(F->up);
f_simple_expr_299(F->up, &F->r_1013);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &F->r_1013);
}
(*F->res_314) = F->x_1007;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("ARRAY", 5))) {
f_skip_276(F->up);
F->x_1007 = f_nn_256(F->up, ((rt_int)73LL), F->line_1020);
f_expect_op_280(F->up, rt_str("(", 1));
while (F->more_1021) {
if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(",", 1)) || rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(")", 1))))) {
F->l_1010 = f_nn_256(F->up, ((rt_int)80LL), F->line_1020);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->l_1010)).name_);
(*(P164)rt_nil_check(F->x_1007)).flag_ = ((rt_int)1LL);
} else {
F->l_1010 = f_nn_256(F->up, ((rt_int)14LL), F->line_1020);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->l_1010)).a_);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->l_1010)).b_);
}
f_append_260(F->up, &F->idx_1011, &F->itail_1012, F->l_1010);
F->more_1021 = f_at_op_267(F->up, rt_str(",", 1));
if (F->more_1021) {
f_skip_276(F->up);
}
}
L_end_1023: ;
f_expect_op_280(F->up, rt_str(")", 1));
f_expect_kw_278(F->up, rt_str("OF", 2));
(*(P164)rt_nil_check(F->x_1007)).a_ = F->idx_1011;
f_type_spec_313(F->up, &(*(P164)rt_nil_check(F->x_1007)).b_);
(*F->res_314) = F->x_1007;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("RECORD", 6))) {
f_skip_276(F->up);
F->x_1007 = f_nn_256(F->up, ((rt_int)74LL), F->line_1020);
while ((!f_at_kw_265(F->up, rt_str("END", 3)))) {
if (f_at_kw_265(F->up, rt_str("NULL", 4))) {
f_skip_276(F->up);
f_expect_op_280(F->up, rt_str(";", 1));
} else {
f_id_list_286(F->up, &F->names_1016);
f_expect_op_280(F->up, rt_str(":", 1));
if (f_at_kw_265(F->up, rt_str("CONSTANT", 8))) {
f_skip_276(F->up);
}
f_type_spec_313(F->up, &F->st_1017);
F->def_1018 = NULL;
if (f_at_op_267(F->up, rt_str(":=", 2))) {
f_skip_276(F->up);
f_expr_293(F->up, &F->def_1018);
}
f_expect_op_280(F->up, rt_str(";", 1));
while ((F->names_1016 != NULL)) {
F->cm_1019 = f_nn_256(F->up, ((rt_int)63LL), (*(P164)rt_nil_check(F->names_1016)).line_);
(*(P164)rt_nil_check(F->cm_1019)).name_ = (*(P164)rt_nil_check(F->names_1016)).name_;
(*(P164)rt_nil_check(F->cm_1019)).a_ = F->st_1017;
(*(P164)rt_nil_check(F->cm_1019)).b_ = F->def_1018;
f_append_260(F->up, &F->comps_1014, &F->ctail_1015, F->cm_1019);
F->names_1016 = (*(P164)rt_nil_check(F->names_1016)).next_;
}
L_end_1025: ;
}
}
L_end_1024: ;
f_expect_kw_278(F->up, rt_str("END", 3));
f_expect_kw_278(F->up, rt_str("RECORD", 6));
(*(P164)rt_nil_check(F->x_1007)).a_ = F->comps_1014;
(*F->res_314) = F->x_1007;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("ACCESS", 6))) {
f_skip_276(F->up);
F->x_1007 = f_nn_256(F->up, ((rt_int)75LL), F->line_1020);
f_type_spec_313(F->up, &(*(P164)rt_nil_check(F->x_1007)).a_);
(*F->res_314) = F->x_1007;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("NEW", 3))) {
f_skip_276(F->up);
F->x_1007 = f_nn_256(F->up, ((rt_int)76LL), F->line_1020);
f_subtype_ind_311(F->up, &(*(P164)rt_nil_check(F->x_1007)).a_);
(*F->res_314) = F->x_1007;
goto ret_;
}
f_perror_275(F->up, rt_str("expected a type definition", 26));
(*F->res_314) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_317(struct f_greenc_1fr *up_, P164 *res_316) {
  struct f_pragma_p_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_316 = res_316;
F->x_1026 = NULL;
F->a_1027 = NULL;
F->head_1028 = NULL;
F->tail_1029 = NULL;
F->x_1026 = f_nn_256(F->up, ((rt_int)56LL), f_cur_line_263(F->up));
f_expect_kw_278(F->up, rt_str("PRAGMA", 6));
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1026)).name_);
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
for (;;) {
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
f_name_node_284(F->up, &F->a_1027);
} else if (((f_at_kind_269(F->up, ((rt_int)6LL)) || f_at_kind_269(F->up, ((rt_int)4LL))) || f_at_kind_269(F->up, ((rt_int)5LL)))) {
f_primary_305(F->up, &F->a_1027);
} else {
f_perror_275(F->up, rt_str("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_260(F->up, &F->head_1028, &F->tail_1029, F->a_1027);
if ((!f_at_op_267(F->up, rt_str(",", 1)))) {
goto L_end_1030;
}
f_skip_276(F->up);
}
L_end_1030: ;
f_expect_op_280(F->up, rt_str(")", 1));
}
f_expect_op_280(F->up, rt_str(";", 1));
(*(P164)rt_nil_check(F->x_1026)).a_ = F->head_1028;
f_check_pragma_319(F->up, F->x_1026);
(*F->res_316) = F->x_1026;
ret_:

  return;
}

static void f_check_pragma_319(struct f_greenc_1fr *up_, P164 x_318) {
  struct f_check_pragma_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_318 = x_318;
F->p_1031 = rt_str_copy((*(P134)rt_nil_check((*(P164)rt_nil_check(F->x_318)).name_)));
F->n_1032 = f_list_len_262(F->up, (*(P164)rt_nil_check(F->x_318)).a_);
F->a_1033 = NULL;
F->a_1033 = (*(P164)rt_nil_check(F->x_318)).a_;
if ((rt_str_eq(F->p_1031, rt_str("PAGE", 4)) || rt_str_eq(F->p_1031, rt_str("INLINE", 6)))) {
if ((F->n_1032 != ((rt_int)0LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1031), rt_str(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((rt_str_eq(F->p_1031, rt_str("LIST", 4)) || rt_str_eq(F->p_1031, rt_str("OPTIMIZE", 8))) || rt_str_eq(F->p_1031, rt_str("CREATION", 8))) || rt_str_eq(F->p_1031, rt_str("INTERFACE", 9))) || rt_str_eq(F->p_1031, rt_str("SYSTEM", 6)))) {
if (((F->n_1032 != ((rt_int)1LL)) || ((*(P164)rt_nil_check(F->a_1033)).kind_ != ((rt_int)5LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1031), rt_str(" takes one identifier (RM79 App. B)", 35)));
}
if (((rt_str_eq(F->p_1031, rt_str("LIST", 4)) && (!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1033)).name_)), rt_str("ON", 2)))) && (!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1033)).name_)), rt_str("OFF", 3))))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((rt_str_eq(F->p_1031, rt_str("OPTIMIZE", 8)) && (!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1033)).name_)), rt_str("TIME", 4)))) && (!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1033)).name_)), rt_str("SPACE", 5))))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((rt_str_eq(F->p_1031, rt_str("CREATION", 8)) && (!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1033)).name_)), rt_str("STATIC", 6)))) && (!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1033)).name_)), rt_str("DYNAMIC", 7))))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (rt_str_eq(F->p_1031, rt_str("OPTIMIZE", 8))) {
F->up->conf_optimize_188 = (*(P164)rt_nil_check(F->a_1033)).name_;
} else if (rt_str_eq(F->p_1031, rt_str("SYSTEM", 6))) {
F->up->conf_system_185 = (*(P164)rt_nil_check(F->a_1033)).name_;
}
} else if ((rt_str_eq(F->p_1031, rt_str("STORAGE_UNIT", 12)) || rt_str_eq(F->p_1031, rt_str("MEMORY_SIZE", 11)))) {
if (((F->n_1032 != ((rt_int)1LL)) || ((*(P164)rt_nil_check(F->a_1033)).kind_ != ((rt_int)1LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1031), rt_str(" takes a number (RM79 13.7)", 27)));
}
if (rt_str_eq(F->p_1031, rt_str("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_186 = (*(P164)rt_nil_check(F->a_1033)).ival_;
} else {
F->up->conf_memory_size_187 = (*(P164)rt_nil_check(F->a_1033)).ival_;
}
} else if ((rt_str_eq(F->p_1031, rt_str("SUPPRESS", 8)) || rt_str_eq(F->p_1031, rt_str("ENVIRONMENT", 11)))) {
if ((F->n_1032 == ((rt_int)0LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1031), rt_str(" names at least one ", 20)), rt_str("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1033 != NULL)) {
if (((*(P164)rt_nil_check(F->a_1033)).kind_ != ((rt_int)5LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1031), rt_str(" takes names (RM79 App. B)", 26)));
}
F->a_1033 = (*(P164)rt_nil_check(F->a_1033)).next_;
}
L_end_1034: ;
} else if (rt_str_eq(F->p_1031, rt_str("INCLUDE", 7))) {
if (((F->n_1032 != ((rt_int)1LL)) || ((*(P164)rt_nil_check(F->a_1033)).kind_ != ((rt_int)3LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->x_318)).line_, rt_str("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_skip_visibility_320(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_1035 = NULL;
f_skip_276(F->up);
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
f_id_list_286(F->up, &F->names_1035);
f_expect_op_280(F->up, rt_str(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_321(struct f_greenc_1fr *up_) {
  struct f_skip_representation_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_265(F->up, rt_str("USE", 3)))) {
f_skip_276(F->up);
}
L_end_1036: ;
f_skip_276(F->up);
if (f_at_kw_265(F->up, rt_str("RECORD", 6))) {
while ((!((f_at_kw_265(F->up, rt_str("END", 3)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("RECORD", 6))))) {
f_skip_276(F->up);
}
L_end_1037: ;
f_skip_276(F->up);
f_skip_276(F->up);
}
while ((!f_at_op_267(F->up, rt_str(";", 1)))) {
f_skip_276(F->up);
}
L_end_1038: ;
f_skip_276(F->up);
ret_:

  return;
}

static void f_decl_part_323(struct f_greenc_1fr *up_, P164 *res_322) {
  struct f_decl_part_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_322 = res_322;
F->head_1039 = NULL;
F->tail_1040 = NULL;
F->x_1041 = NULL;
F->names_1042 = NULL;
for (;;) {
if (f_at_kw_265(F->up, rt_str("PRAGMA", 6))) {
f_pragma_p_317(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if (f_at_kw_265(F->up, rt_str("USE", 3))) {
f_skip_276(F->up);
F->x_1041 = f_nn_256(F->up, ((rt_int)55LL), f_cur_line_263(F->up));
f_id_list_286(F->up, &(*(P164)rt_nil_check(F->x_1041)).a_);
f_expect_op_280(F->up, rt_str(";", 1));
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if (f_at_kw_265(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_320(F->up);
} else if (f_at_kw_265(F->up, rt_str("FOR", 3))) {
f_skip_representation_321(F->up);
} else if ((f_at_kw_265(F->up, rt_str("TYPE", 4)) || f_at_kw_265(F->up, rt_str("SUBTYPE", 7)))) {
f_type_decl_327(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if ((f_at_kw_265(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_265(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_333(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if (f_at_kw_265(F->up, rt_str("PACKAGE", 7))) {
f_package_p_339(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if (f_at_kw_265(F->up, rt_str("TASK", 4))) {
f_task_p_694(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if (f_at_kw_265(F->up, rt_str("GENERIC", 7))) {
f_generic_p_824(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if (f_at_kw_265(F->up, rt_str("ENTRY", 5))) {
f_entry_p_696(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(",", 1))))) {
f_object_decl_325(F->up, &F->x_1041);
f_append_260(F->up, &F->head_1039, &F->tail_1040, F->x_1041);
} else {
(*F->res_322) = F->head_1039;
goto ret_;
}
}
L_end_1043: ;
ret_:

  return;
}

static void f_object_decl_325(struct f_greenc_1fr *up_, P164 *res_324) {
  struct f_object_decl_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_324 = res_324;
F->head_1044 = NULL;
F->tail_1045 = NULL;
F->names_1046 = NULL;
F->st_1047 = NULL;
F->init_1048 = NULL;
F->x_1049 = NULL;
F->line_1050 = f_cur_line_263(F->up);
F->is_const_1051 = 0;
f_id_list_286(F->up, &F->names_1046);
f_expect_op_280(F->up, rt_str(":", 1));
if (f_at_kw_265(F->up, rt_str("EXCEPTION", 9))) {
f_skip_276(F->up);
if (f_at_kw_265(F->up, rt_str("RENAMES", 7))) {
f_skip_276(F->up);
F->x_1049 = f_nn_256(F->up, ((rt_int)46LL), F->line_1050);
(*(P164)rt_nil_check(F->x_1049)).name_ = (*(P164)rt_nil_check(F->names_1046)).name_;
f_name_p_309(F->up, &(*(P164)rt_nil_check(F->x_1049)).a_);
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_324) = F->x_1049;
goto ret_;
}
f_expect_op_280(F->up, rt_str(";", 1));
while ((F->names_1046 != NULL)) {
F->x_1049 = f_nn_256(F->up, ((rt_int)46LL), F->line_1050);
(*(P164)rt_nil_check(F->x_1049)).name_ = (*(P164)rt_nil_check(F->names_1046)).name_;
f_append_260(F->up, &F->head_1044, &F->tail_1045, F->x_1049);
F->names_1046 = (*(P164)rt_nil_check(F->names_1046)).next_;
}
L_end_1052: ;
(*F->res_324) = F->head_1044;
goto ret_;
}
if (f_at_kw_265(F->up, rt_str("CONSTANT", 8))) {
f_skip_276(F->up);
F->is_const_1051 = 1;
}
f_type_spec_313(F->up, &F->st_1047);
if ((f_at_kw_265(F->up, rt_str("RENAMES", 7)) && (!F->is_const_1051))) {
f_skip_276(F->up);
F->x_1049 = f_nn_256(F->up, ((rt_int)40LL), F->line_1050);
(*(P164)rt_nil_check(F->x_1049)).name_ = (*(P164)rt_nil_check(F->names_1046)).name_;
(*(P164)rt_nil_check(F->x_1049)).a_ = F->st_1047;
(*(P164)rt_nil_check(F->x_1049)).flag_ = ((rt_int)2LL);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1049)).b_);
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_324) = F->x_1049;
goto ret_;
}
if (f_at_op_267(F->up, rt_str(":=", 2))) {
f_skip_276(F->up);
f_expr_293(F->up, &F->init_1048);
}
f_expect_op_280(F->up, rt_str(";", 1));
while ((F->names_1046 != NULL)) {
if (F->is_const_1051) {
F->x_1049 = f_nn_256(F->up, ((rt_int)41LL), F->line_1050);
} else {
F->x_1049 = f_nn_256(F->up, ((rt_int)40LL), F->line_1050);
}
(*(P164)rt_nil_check(F->x_1049)).name_ = (*(P164)rt_nil_check(F->names_1046)).name_;
(*(P164)rt_nil_check(F->x_1049)).a_ = F->st_1047;
(*(P164)rt_nil_check(F->x_1049)).b_ = F->init_1048;
if ((!(F->is_const_1051 && (F->init_1048 == NULL)))) {
f_append_260(F->up, &F->head_1044, &F->tail_1045, F->x_1049);
}
F->names_1046 = (*(P164)rt_nil_check(F->names_1046)).next_;
}
L_end_1053: ;
(*F->res_324) = F->head_1044;
goto ret_;
ret_:

  return;
}

static void f_type_decl_327(struct f_greenc_1fr *up_, P164 *res_326) {
  struct f_type_decl_327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_326 = res_326;
F->x_1054 = NULL;
F->line_1055 = f_cur_line_263(F->up);
if (f_at_kw_265(F->up, rt_str("SUBTYPE", 7))) {
f_skip_276(F->up);
F->x_1054 = f_nn_256(F->up, ((rt_int)43LL), F->line_1055);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1054)).name_);
f_expect_kw_278(F->up, rt_str("IS", 2));
f_subtype_ind_311(F->up, &(*(P164)rt_nil_check(F->x_1054)).a_);
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_326) = F->x_1054;
goto ret_;
}
f_expect_kw_278(F->up, rt_str("TYPE", 4));
F->x_1054 = f_nn_256(F->up, ((rt_int)42LL), F->line_1055);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1054)).name_);
if (f_at_op_267(F->up, rt_str(";", 1))) {
f_skip_276(F->up);
(*F->res_326) = NULL;
goto ret_;
}
f_expect_kw_278(F->up, rt_str("IS", 2));
if (f_at_kw_265(F->up, rt_str("PRIVATE", 7))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1054)).a_ = f_nn_256(F->up, ((rt_int)77LL), F->line_1055);
} else {
f_type_def_315(F->up, &(*(P164)rt_nil_check(F->x_1054)).a_);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_326) = F->x_1054;
goto ret_;
ret_:

  return;
}

static void f_formal_part_329(struct f_greenc_1fr *up_, P164 *res_328) {
  struct f_formal_part_329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_328 = res_328;
F->head_1056 = NULL;
F->tail_1057 = NULL;
F->names_1058 = NULL;
F->st_1059 = NULL;
F->def_1060 = NULL;
F->p_1061 = NULL;
F->more_1063 = 1;
f_expect_op_280(F->up, rt_str("(", 1));
while (F->more_1063) {
f_id_list_286(F->up, &F->names_1058);
f_expect_op_280(F->up, rt_str(":", 1));
F->mode_1062 = ((rt_int)1LL);
if (f_at_kw_265(F->up, rt_str("IN", 2))) {
f_skip_276(F->up);
if (f_at_kw_265(F->up, rt_str("OUT", 3))) {
f_skip_276(F->up);
F->mode_1062 = ((rt_int)2LL);
}
} else if (f_at_kw_265(F->up, rt_str("OUT", 3))) {
f_skip_276(F->up);
F->mode_1062 = ((rt_int)3LL);
}
f_subtype_ind_311(F->up, &F->st_1059);
F->def_1060 = NULL;
if (f_at_op_267(F->up, rt_str(":=", 2))) {
f_skip_276(F->up);
f_expr_293(F->up, &F->def_1060);
}
while ((F->names_1058 != NULL)) {
F->p_1061 = f_nn_256(F->up, ((rt_int)47LL), (*(P164)rt_nil_check(F->names_1058)).line_);
(*(P164)rt_nil_check(F->p_1061)).name_ = (*(P164)rt_nil_check(F->names_1058)).name_;
(*(P164)rt_nil_check(F->p_1061)).ival_ = F->mode_1062;
(*(P164)rt_nil_check(F->p_1061)).a_ = F->st_1059;
(*(P164)rt_nil_check(F->p_1061)).b_ = F->def_1060;
f_append_260(F->up, &F->head_1056, &F->tail_1057, F->p_1061);
F->names_1058 = (*(P164)rt_nil_check(F->names_1058)).next_;
}
L_end_1065: ;
F->more_1063 = f_at_op_267(F->up, rt_str(";", 1));
if (F->more_1063) {
f_skip_276(F->up);
}
}
L_end_1064: ;
f_expect_op_280(F->up, rt_str(")", 1));
(*F->res_328) = F->head_1056;
goto ret_;
ret_:

  return;
}

static void f_designator_331(struct f_greenc_1fr *up_, P134 *res_330) {
  struct f_designator_331fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_330 = res_330;
if (f_at_kind_269(F->up, ((rt_int)6LL))) {
f_skip_276(F->up);
(*F->res_330) = f_mk_190(F->up, f_upper_s_203(F->up, (*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(rt_sub(F->up->tpos_108, ((rt_int)1LL)), F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_))));
if (rt_str_eq((*(P134)rt_nil_check((*F->res_330))), rt_str("/=", 2))) {
f_perror_275(F->up, rt_str("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_205(F->up, (*(P134)rt_nil_check((*F->res_330)))))) {
f_perror_275(F->up, rt_str_cat((*(P134)rt_nil_check((*F->res_330))), rt_str(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_282(F->up, &(*F->res_330));
goto ret_;
ret_:

  return;
}

static void f_subprogram_333(struct f_greenc_1fr *up_, P164 *res_332) {
  struct f_subprogram_333fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_332 = res_332;
F->x_1066 = NULL;
F->line_1067 = f_cur_line_263(F->up);
F->is_proc_1068 = f_at_kw_265(F->up, rt_str("PROCEDURE", 9));
f_skip_276(F->up);
if (F->is_proc_1068) {
F->x_1066 = f_nn_256(F->up, ((rt_int)44LL), F->line_1067);
} else {
F->x_1066 = f_nn_256(F->up, ((rt_int)45LL), F->line_1067);
}
f_designator_331(F->up, &(*(P164)rt_nil_check(F->x_1066)).name_);
if (((f_at_kw_265(F->up, rt_str("IS", 2)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_827(F->up, F->x_1066, &(*F->res_332));
goto ret_;
}
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_formal_part_329(F->up, &(*(P164)rt_nil_check(F->x_1066)).a_);
}
if (f_at_kw_265(F->up, rt_str("RETURN", 6))) {
f_skip_276(F->up);
f_subtype_ind_311(F->up, &(*(P164)rt_nil_check(F->x_1066)).b_);
if (F->is_proc_1068) {
(*(P164)rt_nil_check(F->x_1066)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_1068)) {
f_perror_275(F->up, rt_str("a function needs a RETURN clause", 32));
}
if (f_at_op_267(F->up, rt_str(";", 1))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1066)).ival_ = ((rt_int)1LL);
(*F->res_332) = F->x_1066;
goto ret_;
}
f_expect_kw_278(F->up, rt_str("IS", 2));
if (f_at_kw_265(F->up, rt_str("SEPARATE", 8))) {
f_perror_275(F->up, rt_str("separate bodies are not handled", 31));
}
f_body_part_335(F->up, F->x_1066);
if ((f_at_kind_269(F->up, ((rt_int)1LL)) || f_at_kind_269(F->up, ((rt_int)6LL)))) {
if ((!rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->x_1066)).name_))))) {
f_perror_275(F->up, rt_str_cat(rt_str("the name after END does not match ", 34), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->x_1066)).name_))));
}
f_skip_276(F->up);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_332) = F->x_1066;
goto ret_;
ret_:

  return;
}

static void f_body_part_335(struct f_greenc_1fr *up_, P164 x_334) {
  struct f_body_part_335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_334 = x_334;
f_decl_part_323(F->up, &(*(P164)rt_nil_check(F->x_334)).c_);
if (f_at_kw_265(F->up, rt_str("BEGIN", 5))) {
f_skip_276(F->up);
F->up->saw_interface_168 = 0;
f_statements_342(F->up, &(*(P164)rt_nil_check(F->x_334)).d_);
if ((F->up->saw_interface_168 && ((*(P164)rt_nil_check(F->x_334)).d_ == NULL))) {
(*(P164)rt_nil_check(F->x_334)).tag_ = f_mk_190(F->up, rt_str("INTERFACE", 9));
}
F->up->saw_interface_168 = 0;
}
if (f_at_kw_265(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_337(F->up, &(*(P164)rt_nil_check(F->x_334)).e_);
}
f_expect_kw_278(F->up, rt_str("END", 3));
ret_:

  return;
}

static void f_parse_handlers_337(struct f_greenc_1fr *up_, P164 *res_336) {
  struct f_parse_handlers_337fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_336 = res_336;
F->head_1069 = NULL;
F->tail_1070 = NULL;
F->h_1071 = NULL;
F->names_1072 = NULL;
F->ntail_1073 = NULL;
F->n_1074 = NULL;
f_expect_kw_278(F->up, rt_str("EXCEPTION", 9));
while (f_at_kw_265(F->up, rt_str("WHEN", 4))) {
f_skip_276(F->up);
F->h_1071 = f_nn_256(F->up, ((rt_int)62LL), f_cur_line_263(F->up));
F->names_1072 = NULL;
F->ntail_1073 = NULL;
for (;;) {
if (f_at_kw_265(F->up, rt_str("OTHERS", 6))) {
f_skip_276(F->up);
F->n_1074 = f_nn_256(F->up, ((rt_int)5LL), f_cur_line_263(F->up));
(*(P164)rt_nil_check(F->n_1074)).name_ = f_mk_190(F->up, rt_str("OTHERS", 6));
} else {
f_name_node_284(F->up, &F->n_1074);
while (f_at_op_267(F->up, rt_str(".", 1))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->n_1074)).tag_ = (*(P164)rt_nil_check(F->n_1074)).name_;
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->n_1074)).name_);
}
L_end_1077: ;
}
f_append_260(F->up, &F->names_1072, &F->ntail_1073, F->n_1074);
if ((!f_at_op_267(F->up, rt_str("|", 1)))) {
goto L_end_1076;
}
f_skip_276(F->up);
}
L_end_1076: ;
f_expect_op_280(F->up, rt_str("=>", 2));
(*(P164)rt_nil_check(F->h_1071)).a_ = F->names_1072;
f_statements_342(F->up, &(*(P164)rt_nil_check(F->h_1071)).b_);
f_append_260(F->up, &F->head_1069, &F->tail_1070, F->h_1071);
}
L_end_1075: ;
(*F->res_336) = F->head_1069;
goto ret_;
ret_:

  return;
}

static void f_package_p_339(struct f_greenc_1fr *up_, P164 *res_338) {
  struct f_package_p_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_338 = res_338;
F->x_1078 = NULL;
F->line_1079 = f_cur_line_263(F->up);
f_expect_kw_278(F->up, rt_str("PACKAGE", 7));
if (f_at_kw_265(F->up, rt_str("BODY", 4))) {
f_skip_276(F->up);
F->x_1078 = f_nn_256(F->up, ((rt_int)49LL), F->line_1079);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1078)).name_);
f_expect_kw_278(F->up, rt_str("IS", 2));
f_body_part_335(F->up, F->x_1078);
} else {
F->x_1078 = f_nn_256(F->up, ((rt_int)48LL), F->line_1079);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1078)).name_);
if (((f_at_kw_265(F->up, rt_str("IS", 2)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_827(F->up, F->x_1078, &(*F->res_338));
goto ret_;
}
f_expect_kw_278(F->up, rt_str("IS", 2));
f_decl_part_323(F->up, &(*(P164)rt_nil_check(F->x_1078)).c_);
if (f_at_kw_265(F->up, rt_str("PRIVATE", 7))) {
f_skip_276(F->up);
f_decl_part_323(F->up, &(*(P164)rt_nil_check(F->x_1078)).d_);
}
f_expect_kw_278(F->up, rt_str("END", 3));
}
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
f_skip_276(F->up);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_338) = F->x_1078;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_340(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_265(F->up, rt_str("END", 3)) || f_at_kw_265(F->up, rt_str("ELSE", 4))) || f_at_kw_265(F->up, rt_str("ELSIF", 5))) || f_at_kw_265(F->up, rt_str("WHEN", 4))) || f_at_kw_265(F->up, rt_str("EXCEPTION", 9))) || f_at_kw_265(F->up, rt_str("OR", 2))) || f_at_kind_269(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_342(struct f_greenc_1fr *up_, P164 *res_341) {
  struct f_statements_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_341 = res_341;
F->head_1080 = NULL;
F->tail_1081 = NULL;
F->x_1082 = NULL;
while ((!f_at_statements_end_340(F->up))) {
if (f_at_kw_265(F->up, rt_str("PRAGMA", 6))) {
f_pragma_p_317(F->up, &F->x_1082);
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->x_1082)).name_)), rt_str("INTERFACE", 9))) {
F->up->saw_interface_168 = 1;
}
} else {
f_statement_344(F->up, &F->x_1082);
f_append_260(F->up, &F->head_1080, &F->tail_1081, F->x_1082);
}
}
L_end_1083: ;
(*F->res_341) = F->head_1080;
goto ret_;
ret_:

  return;
}

static void f_statement_344(struct f_greenc_1fr *up_, P164 *res_343) {
  struct f_statement_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_343 = res_343;
F->x_1084 = NULL;
F->t_1085 = NULL;
F->line_1086 = f_cur_line_263(F->up);
F->label_1087 = NULL;
if (f_at_op_267(F->up, rt_str("<<", 2))) {
f_skip_276(F->up);
f_expect_id_282(F->up, &F->label_1087);
f_expect_op_280(F->up, rt_str(">>", 2));
}
if (f_at_kw_265(F->up, rt_str("NULL", 4))) {
f_skip_276(F->up);
f_expect_op_280(F->up, rt_str(";", 1));
F->x_1084 = f_nn_256(F->up, ((rt_int)31LL), F->line_1086);
(*F->res_343) = F->x_1084;
goto ret_;
} else if (f_at_kw_265(F->up, rt_str("IF", 2))) {
f_if_stmt_348(F->up, &F->x_1084);
(*F->res_343) = F->x_1084;
goto ret_;
} else if (f_at_kw_265(F->up, rt_str("CASE", 4))) {
f_case_stmt_350(F->up, &F->x_1084);
(*F->res_343) = F->x_1084;
goto ret_;
} else if (((f_at_kw_265(F->up, rt_str("FOR", 3)) || f_at_kw_265(F->up, rt_str("WHILE", 5))) || f_at_kw_265(F->up, rt_str("LOOP", 4)))) {
f_loop_stmt_352(F->up, &F->x_1084);
(*(P164)rt_nil_check(F->x_1084)).tag_ = F->label_1087;
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
if (((F->label_1087 == NULL) || (!rt_str_eq((*(P134)rt_nil_check((*(P104)rt_nil_check(F->up->toks_106.p[rt_index(F->up->tpos_108, F->up->toks_106.lo, F->up->toks_106.hi) - F->up->toks_106.lo])).s_)), (*(P134)rt_nil_check(F->label_1087)))))) {
f_perror_275(F->up, rt_str("the name after END LOOP does not match the label", 48));
}
f_skip_276(F->up);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1084;
goto ret_;
} else if ((f_at_kw_265(F->up, rt_str("DECLARE", 7)) || f_at_kw_265(F->up, rt_str("BEGIN", 5)))) {
F->x_1084 = f_nn_256(F->up, ((rt_int)25LL), F->line_1086);
(*(P164)rt_nil_check(F->x_1084)).tag_ = F->label_1087;
if (f_at_kw_265(F->up, rt_str("DECLARE", 7))) {
f_skip_276(F->up);
f_decl_part_323(F->up, &(*(P164)rt_nil_check(F->x_1084)).a_);
}
f_expect_kw_278(F->up, rt_str("BEGIN", 5));
f_statements_342(F->up, &(*(P164)rt_nil_check(F->x_1084)).b_);
if (f_at_kw_265(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_337(F->up, &(*(P164)rt_nil_check(F->x_1084)).c_);
}
f_expect_kw_278(F->up, rt_str("END", 3));
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
f_skip_276(F->up);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1084;
goto ret_;
} else if (f_at_kw_265(F->up, rt_str("EXIT", 4))) {
f_skip_276(F->up);
F->x_1084 = f_nn_256(F->up, ((rt_int)26LL), F->line_1086);
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1084)).name_);
}
if (f_at_kw_265(F->up, rt_str("WHEN", 4))) {
f_skip_276(F->up);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1084)).a_);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1084;
goto ret_;
} else if (f_at_kw_265(F->up, rt_str("RETURN", 6))) {
f_skip_276(F->up);
F->x_1084 = f_nn_256(F->up, ((rt_int)27LL), F->line_1086);
if ((!f_at_op_267(F->up, rt_str(";", 1)))) {
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1084)).a_);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1084;
goto ret_;
} else if (f_at_kw_265(F->up, rt_str("RAISE", 5))) {
f_skip_276(F->up);
if (f_at_op_267(F->up, rt_str(";", 1))) {
f_skip_276(F->up);
F->x_1084 = f_nn_256(F->up, ((rt_int)29LL), F->line_1086);
(*F->res_343) = F->x_1084;
goto ret_;
}
F->x_1084 = f_nn_256(F->up, ((rt_int)28LL), F->line_1086);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1084)).name_);
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1084)).a_);
f_expect_op_280(F->up, rt_str(")", 1));
}
while (f_at_op_267(F->up, rt_str(".", 1))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1084)).tag_ = (*(P164)rt_nil_check(F->x_1084)).name_;
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1084)).name_);
}
L_end_1088: ;
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1084;
goto ret_;
} else if (f_at_kw_265(F->up, rt_str("ASSERT", 6))) {
f_skip_276(F->up);
F->x_1084 = f_nn_256(F->up, ((rt_int)30LL), F->line_1086);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1084)).a_);
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1084;
goto ret_;
} else if (f_at_kw_265(F->up, rt_str("GOTO", 4))) {
f_perror_275(F->up, rt_str("goto is not handled", 19));
}
f_task_statement_346(F->up, &F->x_1084);
if ((F->x_1084 != NULL)) {
(*F->res_343) = F->x_1084;
goto ret_;
}
f_name_p_309(F->up, &F->t_1085);
if (f_at_op_267(F->up, rt_str(":=", 2))) {
f_skip_276(F->up);
F->x_1084 = f_nn_256(F->up, ((rt_int)20LL), F->line_1086);
(*(P164)rt_nil_check(F->x_1084)).a_ = F->t_1085;
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1084)).b_);
} else {
F->x_1084 = f_nn_256(F->up, ((rt_int)21LL), F->line_1086);
(*(P164)rt_nil_check(F->x_1084)).a_ = F->t_1085;
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1084;
goto ret_;
ret_:

  return;
}

static void f_task_statement_346(struct f_greenc_1fr *up_, P164 *res_345) {
  struct f_task_statement_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_345 = res_345;
f_parse_task_statement_704(F->up, &(*F->res_345));
ret_:

  return;
}

static void f_if_stmt_348(struct f_greenc_1fr *up_, P164 *res_347) {
  struct f_if_stmt_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->x_1089 = NULL;
F->arm_1090 = NULL;
F->head_1091 = NULL;
F->tail_1092 = NULL;
F->go_1093 = 1;
F->x_1089 = f_nn_256(F->up, ((rt_int)22LL), f_cur_line_263(F->up));
f_skip_276(F->up);
F->arm_1090 = f_nn_256(F->up, ((rt_int)60LL), f_cur_line_263(F->up));
f_expr_293(F->up, &(*(P164)rt_nil_check(F->arm_1090)).a_);
f_expect_kw_278(F->up, rt_str("THEN", 4));
f_statements_342(F->up, &(*(P164)rt_nil_check(F->arm_1090)).b_);
f_append_260(F->up, &F->head_1091, &F->tail_1092, F->arm_1090);
while (F->go_1093) {
if (f_at_kw_265(F->up, rt_str("ELSIF", 5))) {
f_skip_276(F->up);
F->arm_1090 = f_nn_256(F->up, ((rt_int)60LL), f_cur_line_263(F->up));
f_expr_293(F->up, &(*(P164)rt_nil_check(F->arm_1090)).a_);
f_expect_kw_278(F->up, rt_str("THEN", 4));
f_statements_342(F->up, &(*(P164)rt_nil_check(F->arm_1090)).b_);
f_append_260(F->up, &F->head_1091, &F->tail_1092, F->arm_1090);
} else if (f_at_kw_265(F->up, rt_str("ELSE", 4))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1089)).flag_ = ((rt_int)1LL);
f_statements_342(F->up, &(*(P164)rt_nil_check(F->x_1089)).b_);
} else {
F->go_1093 = 0;
}
}
L_end_1094: ;
f_expect_kw_278(F->up, rt_str("END", 3));
f_expect_kw_278(F->up, rt_str("IF", 2));
f_expect_op_280(F->up, rt_str(";", 1));
(*(P164)rt_nil_check(F->x_1089)).a_ = F->head_1091;
(*F->res_347) = F->x_1089;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_350(struct f_greenc_1fr *up_, P164 *res_349) {
  struct f_case_stmt_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_349 = res_349;
F->x_1095 = NULL;
F->arm_1096 = NULL;
F->head_1097 = NULL;
F->tail_1098 = NULL;
F->labs_1099 = NULL;
F->ltail_1100 = NULL;
F->l_1101 = NULL;
F->x_1095 = f_nn_256(F->up, ((rt_int)23LL), f_cur_line_263(F->up));
f_skip_276(F->up);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1095)).a_);
f_expect_kw_278(F->up, rt_str("OF", 2));
while (f_at_kw_265(F->up, rt_str("WHEN", 4))) {
f_skip_276(F->up);
F->labs_1099 = NULL;
F->ltail_1100 = NULL;
F->others_arm_1102 = 0;
for (;;) {
if (f_at_kw_265(F->up, rt_str("OTHERS", 6))) {
f_skip_276(F->up);
F->others_arm_1102 = 1;
} else {
F->l_1101 = f_nn_256(F->up, ((rt_int)61LL), f_cur_line_263(F->up));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->l_1101)).a_);
if (f_at_op_267(F->up, rt_str("..", 2))) {
f_skip_276(F->up);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->l_1101)).b_);
}
f_append_260(F->up, &F->labs_1099, &F->ltail_1100, F->l_1101);
}
if ((!f_at_op_267(F->up, rt_str("|", 1)))) {
goto L_end_1104;
}
f_skip_276(F->up);
}
L_end_1104: ;
f_expect_op_280(F->up, rt_str("=>", 2));
if (F->others_arm_1102) {
(*(P164)rt_nil_check(F->x_1095)).flag_ = ((rt_int)1LL);
f_statements_342(F->up, &(*(P164)rt_nil_check(F->x_1095)).c_);
} else {
F->arm_1096 = f_nn_256(F->up, ((rt_int)60LL), f_cur_line_263(F->up));
(*(P164)rt_nil_check(F->arm_1096)).a_ = F->labs_1099;
f_statements_342(F->up, &(*(P164)rt_nil_check(F->arm_1096)).b_);
f_append_260(F->up, &F->head_1097, &F->tail_1098, F->arm_1096);
}
}
L_end_1103: ;
f_expect_kw_278(F->up, rt_str("END", 3));
f_expect_kw_278(F->up, rt_str("CASE", 4));
f_expect_op_280(F->up, rt_str(";", 1));
(*(P164)rt_nil_check(F->x_1095)).b_ = F->head_1097;
(*F->res_349) = F->x_1095;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_352(struct f_greenc_1fr *up_, P164 *res_351) {
  struct f_loop_stmt_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_351 = res_351;
F->x_1105 = NULL;
F->r_1106 = NULL;
F->line_1107 = f_cur_line_263(F->up);
F->x_1105 = f_nn_256(F->up, ((rt_int)24LL), F->line_1107);
if (f_at_kw_265(F->up, rt_str("FOR", 3))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1105)).flag_ = ((rt_int)2LL);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1105)).name_);
f_expect_kw_278(F->up, rt_str("IN", 2));
if (f_at_kw_265(F->up, rt_str("REVERSE", 7))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1105)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("LOOP", 4)))) {
f_subtype_ind_311(F->up, &(*(P164)rt_nil_check(F->x_1105)).a_);
} else {
F->r_1106 = f_nn_256(F->up, ((rt_int)14LL), F->line_1107);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->r_1106)).a_);
if (f_at_op_267(F->up, rt_str("..", 2))) {
f_skip_276(F->up);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->r_1106)).b_);
(*(P164)rt_nil_check(F->x_1105)).a_ = F->r_1106;
} else {
(*(P164)rt_nil_check(F->x_1105)).a_ = (*(P164)rt_nil_check(F->r_1106)).a_;
}
}
} else if (f_at_kw_265(F->up, rt_str("WHILE", 5))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1105)).flag_ = ((rt_int)1LL);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1105)).a_);
}
f_expect_kw_278(F->up, rt_str("LOOP", 4));
f_statements_342(F->up, &(*(P164)rt_nil_check(F->x_1105)).b_);
f_expect_kw_278(F->up, rt_str("END", 3));
f_expect_kw_278(F->up, rt_str("LOOP", 4));
(*F->res_351) = F->x_1105;
goto ret_;
ret_:

  return;
}

static void f_compilation_354(struct f_greenc_1fr *up_, P164 *res_353) {
  struct f_compilation_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_353 = res_353;
F->head_1108 = NULL;
F->tail_1109 = NULL;
F->x_1110 = NULL;
while ((!f_at_kind_269(F->up, ((rt_int)0LL)))) {
if (f_at_kw_265(F->up, rt_str("PRAGMA", 6))) {
f_pragma_p_317(F->up, &F->x_1110);
} else {
if (f_at_kw_265(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_320(F->up);
}
if ((f_at_kw_265(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_265(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_333(F->up, &F->x_1110);
} else if (f_at_kw_265(F->up, rt_str("PACKAGE", 7))) {
f_package_p_339(F->up, &F->x_1110);
} else if (f_at_kw_265(F->up, rt_str("TASK", 4))) {
f_task_p_694(F->up, &F->x_1110);
} else if (f_at_kw_265(F->up, rt_str("GENERIC", 7))) {
f_generic_p_824(F->up, &F->x_1110);
} else {
f_perror_275(F->up, rt_str("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_260(F->up, &F->head_1108, &F->tail_1109, F->x_1110);
}
}
L_end_1111: ;
(*F->res_353) = F->head_1108;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_356(struct f_greenc_1fr *up_, rstr s_355) {
  struct f_hash_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_355 = rt_str_copy(s_355);
F->h_1112 = ((rt_int)0LL);
{ rt_int lo1115 = ((rt_int)1LL), hi1116 = (F->s_355).len;
for (rt_int it1117 = lo1115; it1117 <= hi1116; it1117++) {
F->i_1114 = it1117;
F->h_1112 = rt_rem(rt_add(rt_mul(F->h_1112, ((rt_int)31LL)), ((rt_int)(rt_str_get(F->s_355, F->i_1114)) + 1)), ((rt_int)4093LL));
}
}
L_end_1113: ;
F->result_ = F->h_1112;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P111 f_lookup_358(struct f_greenc_1fr *up_, rstr name_357) {
  struct f_lookup_358fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_357 = rt_str_copy(name_357);
F->y_1118 = NULL;
F->y_1118 = F->up->table_113.p[rt_index(f_hash_356(F->up, F->name_357), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while ((F->y_1118 != NULL)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1118)).name_)), F->name_357)) {
F->result_ = F->y_1118;
goto ret_;
}
F->y_1118 = (*(P111)rt_nil_check(F->y_1118)).chain_;
}
L_end_1119: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_361(struct f_greenc_1fr *up_, P111 a_359, P111 b_360) {
  struct f_same_task_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_359 = a_359;
F->b_360 = b_360;
if ((F->a_359 == F->b_360)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_359 == NULL) || (F->b_360 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->a_359)).cname_)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->b_360)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P111 f_lookup_entry_364(struct f_greenc_1fr *up_, rstr name_362, P111 owner_363) {
  struct f_lookup_entry_364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_362 = rt_str_copy(name_362);
F->owner_363 = owner_363;
F->y_1120 = NULL;
F->y_1120 = F->up->table_113.p[rt_index(f_hash_356(F->up, F->name_362), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while ((F->y_1120 != NULL)) {
if (((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1120)).name_)), F->name_362) && ((*(P111)rt_nil_check(F->y_1120)).kind_ == ((rt_int)10LL))) && f_same_task_361(F->up, (*(P111)rt_nil_check(F->y_1120)).members_, F->owner_363))) {
F->result_ = F->y_1120;
goto ret_;
}
F->y_1120 = (*(P111)rt_nil_check(F->y_1120)).chain_;
}
L_end_1121: ;
F->result_ = f_lookup_358(F->up, F->name_362);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P111 f_lookup_decl_366(struct f_greenc_1fr *up_, P164 d_365) {
  struct f_lookup_decl_366fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_365 = d_365;
F->y_1122 = NULL;
F->y_1122 = F->up->table_113.p[rt_index(f_hash_356(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->d_365)).name_))), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while ((F->y_1122 != NULL)) {
if (((*(P111)rt_nil_check(F->y_1122)).decl_ == F->d_365)) {
F->result_ = F->y_1122;
goto ret_;
}
F->y_1122 = (*(P111)rt_nil_check(F->y_1122)).chain_;
}
L_end_1123: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_368(struct f_greenc_1fr *up_, P111 y_367) {
  struct f_overloadable_368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_367 = y_367;
F->result_ = (((((*(P111)rt_nil_check(F->y_367)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_367)).kind_ == ((rt_int)4LL))) || ((*(P111)rt_nil_check(F->y_367)).kind_ == ((rt_int)7LL))) || ((*(P111)rt_nil_check(F->y_367)).kind_ == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_371(struct f_greenc_1fr *up_, P116 a_369, P116 b_370) {
  struct f_same_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_369 = a_369;
F->b_370 = b_370;
if ((F->a_369 == F->b_370)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_369 == NULL) || (F->b_370 == NULL)) || ((*(P116)rt_nil_check(F->a_369)).kind_ != (*(P116)rt_nil_check(F->b_370)).kind_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((((((*(P116)rt_nil_check(F->a_369)).kind_ == ((rt_int)1LL)) || ((*(P116)rt_nil_check(F->a_369)).kind_ == ((rt_int)2LL))) || ((*(P116)rt_nil_check(F->a_369)).kind_ == ((rt_int)3LL))) || ((*(P116)rt_nil_check(F->a_369)).kind_ == ((rt_int)11LL))) || ((*(P116)rt_nil_check(F->a_369)).kind_ == ((rt_int)5LL))) || ((*(P116)rt_nil_check(F->a_369)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_374(struct f_greenc_1fr *up_, P1124 a_372, P1124 b_373) {
  struct f_same_signature_374fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_372 = a_372;
F->b_373 = b_373;
F->x_1126 = NULL;
F->x_1126 = F->a_372;
F->y_1127 = NULL;
F->y_1127 = F->b_373;
while (((F->x_1126 != NULL) && (F->y_1127 != NULL))) {
if (((!f_same_371(F->up, (*(P1124)rt_nil_check(F->x_1126)).t_, (*(P1124)rt_nil_check(F->y_1127)).t_)) || ((*(P1124)rt_nil_check(F->x_1126)).mode_ != (*(P1124)rt_nil_check(F->y_1127)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1126 = (*(P1124)rt_nil_check(F->x_1126)).next_;
F->y_1127 = (*(P1124)rt_nil_check(F->y_1127)).next_;
}
L_end_1128: ;
F->result_ = ((F->x_1126 == NULL) && (F->y_1127 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_377(struct f_greenc_1fr *up_, P111 y_375, rt_int line_376) {
  struct f_define_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_375 = y_375;
F->line_376 = line_376;
F->h_1129 = f_hash_356(F->up, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_375)).name_)));
F->z_1130 = NULL;
F->z_1130 = F->up->table_113.p[rt_index(F->h_1129, F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while ((F->z_1130 != NULL)) {
if (((((*(P111)rt_nil_check(F->z_1130)).depth_ == F->up->depth_114) && rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->z_1130)).name_)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_375)).name_)))) && (!((f_overloadable_368(F->up, F->y_375) && f_overloadable_368(F->up, F->z_1130)) && ((((*(P111)rt_nil_check(F->y_375)).kind_ != (*(P111)rt_nil_check(F->z_1130)).kind_) || (!f_same_signature_374(F->up, (*(P111)rt_nil_check(F->y_375)).params_, (*(P111)rt_nil_check(F->z_1130)).params_))) || (!f_same_371(F->up, (*(P111)rt_nil_check(F->y_375)).result_, (*(P111)rt_nil_check(F->z_1130)).result_))))))) {
f_fail_211(F->up, F->line_376, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_375)).name_)), rt_str(" is already declared in this declarative part", 45)));
}
F->z_1130 = (*(P111)rt_nil_check(F->z_1130)).chain_;
}
L_end_1131: ;
(*(P111)rt_nil_check(F->y_375)).depth_ = F->up->depth_114;
(*(P111)rt_nil_check(F->y_375)).chain_ = F->up->table_113.p[rt_index(F->h_1129, F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
F->up->table_113.p[rt_index(F->h_1129, F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo] = F->y_375;
(*(P111)rt_nil_check(F->y_375)).stack_ = F->up->scope_stack_115;
F->up->scope_stack_115 = F->y_375;
ret_:

  return;
}

static void f_open_scope_378(struct f_greenc_1fr *up_) {
  struct f_open_scope_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_114 = rt_add(F->up->depth_114, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_379(struct f_greenc_1fr *up_) {
  struct f_close_scope_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_115 != NULL) && ((*(P111)rt_nil_check(F->up->scope_stack_115)).depth_ == F->up->depth_114))) {
F->up->table_113.p[rt_index(f_hash_356(F->up, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->scope_stack_115)).name_))), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo] = (*(P111)rt_nil_check(F->up->scope_stack_115)).chain_;
F->up->scope_stack_115 = (*(P111)rt_nil_check(F->up->scope_stack_115)).stack_;
}
L_end_1132: ;
F->up->depth_114 = rt_sub(F->up->depth_114, ((rt_int)1LL));
ret_:

  return;
}

static P111 f_new_sym_382(struct f_greenc_1fr *up_, rt_int kind_380, P134 name_381) {
  struct f_new_sym_382fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_380 = kind_380;
F->name_381 = name_381;
F->result_ = ({ R112 *cell1133 = rt_alloc(sizeof(R112)); *cell1133 = cp_R112(({ R112 ag1134; ag1134.kind_ = F->kind_380; ag1134.name_ = F->name_381; ag1134.t_ = NULL; ag1134.c_ = NULL; ag1134.access_path_ = NULL; ag1134.cname_ = NULL; ag1134.ro_ = 0; ag1134.mvalue_ = ((rt_int)0LL); ag1134.hasmv_ = 0; ag1134.decl_ = NULL; ag1134.params_ = NULL; ag1134.result_ = NULL; ag1134.depth_ = ((rt_int)0LL); ag1134.level_ = ((rt_int)0LL); ag1134.byref_ = 0; ag1134.vrp_ = 0; ag1134.hidden_ = 0; ag1134.from_use_ = 0; ag1134.members_ = NULL; ag1134.mnext_ = NULL; ag1134.chain_ = NULL; ag1134.stack_ = NULL; ag1134; })); (P111)cell1133; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P116 f_new_typ_384(struct f_greenc_1fr *up_, rt_int kind_383) {
  struct f_new_typ_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_383 = kind_383;
F->result_ = ({ R117 *cell1137 = rt_alloc(sizeof(R117)); *cell1137 = cp_R117(({ R117 ag1138; ag1138.kind_ = F->kind_383; ag1138.name_ = NULL; ag1138.lits_ = NULL; ag1138.elem_ = NULL; ag1138.idx_ = NULL; ag1138.elemcons_ = NULL; ag1138.tcons_ = NULL; ag1138.fields_ = NULL; ag1138.target_ = NULL; ag1138.decl_ = NULL; ag1138.cname_ = NULL; ag1138.forward_ = 0; ag1138.defined_ = 0; ag1138.priv_ = 0; ag1138.next_ = NULL; ag1138.idx2_ = NULL; ag1138.littab_ = NULL; ag1138.parent_ = NULL; ag1138.ndigits_ = ((rt_int)0LL); ag1138.fdelta_ = NULL; ag1138.fsmall_ = NULL; ag1138.dims_ = ((rt_int)0LL); ag1138.is_restricted_ = 0; ag1138; })); (P116)cell1137; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P171 f_new_cons_385(struct f_greenc_1fr *up_) {
  struct f_new_cons_385fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R172 *cell1139 = rt_alloc(sizeof(R172)); *cell1139 = cp_R172(({ R172 ag1140; ag1140.lo_ = NULL; ag1140.hi_ = NULL; ag1140.slen_ = NULL; ag1140.mlo_ = ((rt_int)0LL); ag1140.mhi_ = ((rt_int)0LL); ag1140.hasm_ = 0; ag1140.lo2_ = NULL; ag1140.hi2_ = NULL; ag1140; })); (P171)cell1139; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_kind_name_387(struct f_greenc_1fr *up_, P116 t_386) {
  struct f_kind_name_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_386 = t_386;
if (((*(P116)rt_nil_check(F->t_386)).name_ != NULL)) {
F->result_ = (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_386)).name_));
goto ret_;
}
{ rt_int sel1141 = (*(P116)rt_nil_check(F->t_386)).kind_;
if (0 || sel1141 == ((rt_int)1LL)) {
F->result_ = rt_str("INTEGER", 7);
goto ret_;
} else if (0 || sel1141 == ((rt_int)2LL)) {
F->result_ = rt_str("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1141 == ((rt_int)3LL)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || sel1141 == ((rt_int)5LL)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || sel1141 == ((rt_int)10LL)) {
F->result_ = rt_str("null", 4);
goto ret_;
} else if (0 || sel1141 == ((rt_int)11LL)) {
F->result_ = rt_str("CHARACTER", 9);
goto ret_;
} else {
F->result_ = rt_str("an anonymous type", 17);
goto ret_;
}
}
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_type_391(struct f_greenc_1fr *up_, P116 got_388, P116 want_389, rt_int line_390) {
  struct f_check_type_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_388 = got_388;
F->want_389 = want_389;
F->line_390 = line_390;
if ((F->want_389 == NULL)) {
goto ret_;
}
if ((((*(P116)rt_nil_check(F->got_388)).kind_ == ((rt_int)10LL)) && ((*(P116)rt_nil_check(F->want_389)).kind_ == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_371(F->up, F->got_388, F->want_389))) {
f_fail_211(F->up, F->line_390, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_387(F->up, F->got_388)), rt_str(" where ", 7)), f_kind_name_387(F->up, F->want_389)), rt_str(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_393(struct f_greenc_1fr *up_, P116 t_392) {
  struct f_field_count_393fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_392 = t_392;
F->n_1142 = ((rt_int)0LL);
F->f_1143 = NULL;
F->f_1143 = (*(P116)rt_nil_check(F->t_392)).fields_;
while ((F->f_1143 != NULL)) {
F->n_1142 = rt_add(F->n_1142, ((rt_int)1LL));
F->f_1143 = (*(P1135)rt_nil_check(F->f_1143)).next_;
}
L_end_1144: ;
F->result_ = F->n_1142;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_396(struct f_greenc_1fr *up_, P116 t_394, P134 *r_395) {
  struct f_ctype_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_394 = t_394;
F->r_395 = r_395;
F->s_1145 = NULL;
{ rt_int sel1146 = (*(P116)rt_nil_check(F->t_394)).kind_;
if (0 || sel1146 == ((rt_int)1LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("rt_int", 6));
} else if (0 || sel1146 == ((rt_int)2LL) || sel1146 == ((rt_int)4LL) || sel1146 == ((rt_int)11LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("int", 3));
} else if (0 || sel1146 == ((rt_int)3LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("double", 6));
} else if (0 || sel1146 == ((rt_int)5LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("rstr", 4));
} else if (0 || sel1146 == ((rt_int)9LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("void", 4));
} else if (0 || sel1146 == ((rt_int)13LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("rt_act", 6));
} else if (0 || sel1146 == ((rt_int)14LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("rt_taskdecl", 11));
} else if (0 || sel1146 == ((rt_int)15LL)) {
(*F->r_395) = f_mk_190(F->up, rt_str("rt_entry", 8));
} else {
if (((*(P116)rt_nil_check(F->t_394)).cname_ == NULL)) {
f_declare_ctype_401(F->up, F->t_394);
} else if (((((*(P116)rt_nil_check(F->t_394)).kind_ == ((rt_int)7LL)) && (*(P116)rt_nil_check(F->t_394)).forward_) && (!(*(P116)rt_nil_check(F->t_394)).defined_))) {
(*(P116)rt_nil_check(F->t_394)).defined_ = 1;
f_field_decls_399(F->up, F->t_394, &F->s_1145);
f_put_to_215(F->up, F->up->out_types_122, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_394)).cname_))), rt_str(" {", 2)), (*(P134)rt_nil_check(F->s_1145))), rt_str(" };", 3)));
}
(*F->r_395) = (*(P116)rt_nil_check(F->t_394)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_399(struct f_greenc_1fr *up_, P116 t_397, P134 *r_398) {
  struct f_field_decls_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_397 = t_397;
F->r_398 = r_398;
F->f_1147 = NULL;
F->f_1147 = (*(P116)rt_nil_check(F->t_397)).fields_;
F->s_1148 = NULL;
F->ct_1149 = NULL;
F->s_1148 = f_mk_190(F->up, rt_str(" int dummy_;", 12));
while ((F->f_1147 != NULL)) {
f_ctype_396(F->up, (*(P1135)rt_nil_check(F->f_1147)).t_, &F->ct_1149);
F->s_1148 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->s_1148)), 32), (*(P134)rt_nil_check(F->ct_1149))), 32), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1147)).name_)))), 59));
F->f_1147 = (*(P1135)rt_nil_check(F->f_1147)).next_;
}
L_end_1150: ;
(*F->r_398) = F->s_1148;
ret_:

  return;
}

static void f_declare_ctype_401(struct f_greenc_1fr *up_, P116 t_400) {
  struct f_declare_ctype_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_400 = t_400;
F->ct_1151 = NULL;
F->s_1152 = NULL;
F->target_1153 = NULL;
if (((*(P116)rt_nil_check(F->t_400)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_419(F->up, F->t_400);
}
if (((*(P116)rt_nil_check(F->t_400)).kind_ == ((rt_int)6LL))) {
f_new_name_193(F->up, rt_str("A", 1), &(*(P116)rt_nil_check(F->t_400)).cname_);
} else if (((*(P116)rt_nil_check(F->t_400)).kind_ == ((rt_int)7LL))) {
f_new_name_193(F->up, rt_str("R", 1), &(*(P116)rt_nil_check(F->t_400)).cname_);
} else {
f_new_name_193(F->up, rt_str("P", 1), &(*(P116)rt_nil_check(F->t_400)).cname_);
}
(*(P116)rt_nil_check(F->t_400)).next_ = F->up->all_types_118;
F->up->all_types_118 = F->t_400;
if (((*(P116)rt_nil_check(F->t_400)).kind_ == ((rt_int)8LL))) {
F->target_1153 = (*(P116)rt_nil_check(F->t_400)).target_;
if ((F->target_1153 == NULL)) {
f_fail_211(F->up, ((rt_int)0LL), rt_str_cat(rt_str_cat(rt_str("the designated type of ", 23), f_kind_name_387(F->up, F->t_400)), rt_str(" is never declared", 18)));
}
if (((*(P116)rt_nil_check(F->target_1153)).kind_ == ((rt_int)7LL))) {
if (((*(P116)rt_nil_check(F->target_1153)).cname_ == NULL)) {
f_new_name_193(F->up, rt_str("R", 1), &(*(P116)rt_nil_check(F->target_1153)).cname_);
(*(P116)rt_nil_check(F->target_1153)).next_ = F->up->all_types_118;
F->up->all_types_118 = F->target_1153;
f_put_to_215(F->up, F->up->out_types_122, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->target_1153)).cname_))), 32), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->target_1153)).cname_))), 59));
(*(P116)rt_nil_check(F->target_1153)).forward_ = 1;
}
f_put_to_215(F->up, F->up->out_types_122, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->target_1153)).cname_))), rt_str(" *", 2)), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), 59));
} else {
f_ctype_396(F->up, F->target_1153, &F->ct_1151);
f_put_to_215(F->up, F->up->out_types_122, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), (*(P134)rt_nil_check(F->ct_1151))), rt_str(" *", 2)), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), 59));
}
} else if (((*(P116)rt_nil_check(F->t_400)).kind_ == ((rt_int)6LL))) {
f_ctype_396(F->up, (*(P116)rt_nil_check(F->t_400)).elem_, &F->ct_1151);
f_put_to_215(F->up, F->up->out_types_122, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), 32), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), 59));
f_put_to_215(F->up, F->up->out_types_122, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P134)rt_nil_check(F->ct_1151))), rt_str(" *p; };", 7)));
} else {
f_put_to_215(F->up, F->up->out_types_122, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), 32), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), 59));
(*(P116)rt_nil_check(F->t_400)).defined_ = 1;
f_field_decls_399(F->up, F->t_400, &F->s_1152);
f_put_to_215(F->up, F->up->out_types_122, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_400)).cname_))), rt_str(" {", 2)), (*(P134)rt_nil_check(F->s_1152))), rt_str(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_404(struct f_greenc_1fr *up_, P164 lits_402, rstr name_403) {
  struct f_lit_index_404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_402 = lits_402;
F->name_403 = rt_str_copy(name_403);
F->i_1154 = ((rt_int)0LL);
F->l_1155 = NULL;
F->l_1155 = F->lits_402;
while ((F->l_1155 != NULL)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->l_1155)).name_)), F->name_403)) {
F->result_ = F->i_1154;
goto ret_;
}
F->i_1154 = rt_add(F->i_1154, ((rt_int)1LL));
F->l_1155 = (*(P164)rt_nil_check(F->l_1155)).next_;
}
L_end_1156: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_408(struct f_greenc_1fr *up_, P164 e_405, rt_int *v_406, int *ok_407) {
  struct f_manifest_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_405 = e_405;
F->v_406 = v_406;
F->ok_407 = ok_407;
F->y_1160 = NULL;
(*F->ok_407) = 0;
(*F->v_406) = ((rt_int)0LL);
if (((*(P164)rt_nil_check(F->e_405)).kind_ == ((rt_int)1LL))) {
(*F->ok_407) = 1;
(*F->v_406) = (*(P164)rt_nil_check(F->e_405)).ival_;
} else if (((*(P164)rt_nil_check(F->e_405)).kind_ == ((rt_int)15LL))) {
f_manifest_408(F->up, (*(P164)rt_nil_check(F->e_405)).a_, &(*F->v_406), &(*F->ok_407));
} else if ((((*(P164)rt_nil_check(F->e_405)).kind_ == ((rt_int)6LL)) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_405)).name_)), rt_str("-", 1)))) {
f_manifest_408(F->up, (*(P164)rt_nil_check(F->e_405)).a_, &F->a_1157, &(*F->ok_407));
(*F->v_406) = rt_neg(F->a_1157);
} else if ((((*(P164)rt_nil_check(F->e_405)).kind_ == ((rt_int)7LL)) && ((rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_405)).name_)), rt_str("+", 1)) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_405)).name_)), rt_str("-", 1))) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_405)).name_)), rt_str("*", 1))))) {
f_manifest_408(F->up, (*(P164)rt_nil_check(F->e_405)).a_, &F->a_1157, &(*F->ok_407));
f_manifest_408(F->up, (*(P164)rt_nil_check(F->e_405)).b_, &F->b_1158, &F->ok2_1159);
(*F->ok_407) = ((*F->ok_407) && F->ok2_1159);
if ((*F->ok_407)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_405)).name_)), rt_str("+", 1))) {
(*F->v_406) = rt_add(F->a_1157, F->b_1158);
} else if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_405)).name_)), rt_str("-", 1))) {
(*F->v_406) = rt_sub(F->a_1157, F->b_1158);
} else {
(*F->v_406) = rt_mul(F->a_1157, F->b_1158);
}
}
} else if (((*(P164)rt_nil_check(F->e_405)).kind_ == ((rt_int)5LL))) {
F->y_1160 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_405)).name_)));
if ((((F->y_1160 != NULL) && ((*(P111)rt_nil_check(F->y_1160)).kind_ == ((rt_int)2LL))) && (*(P111)rt_nil_check(F->y_1160)).hasmv_)) {
(*F->ok_407) = 1;
(*F->v_406) = (*(P111)rt_nil_check(F->y_1160)).mvalue_;
}
}
ret_:

  return;
}

static void f_resolve_412(struct f_greenc_1fr *up_, P164 st_409, P116 *t_410, P171 *c_411) {
  struct f_resolve_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_409 = st_409;
F->t_410 = t_410;
F->c_411 = c_411;
F->y_1161 = NULL;
F->dummy_1162 = NULL;
F->code_1163 = NULL;
F->r_1165 = NULL;
(*F->c_411) = f_new_cons_385(F->up);
if (((*(P164)rt_nil_check(F->st_409)).kind_ != ((rt_int)80LL))) {
f_type_definition_417(F->up, F->st_409, NULL, &(*F->t_410), &(*F->c_411));
goto ret_;
}
if (((*(P164)rt_nil_check(F->st_409)).tag_ != NULL)) {
F->y_1161 = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->st_409)).tag_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->st_409)).name_)), (*(P164)rt_nil_check(F->st_409)).line_);
} else {
F->y_1161 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->st_409)).name_)));
}
if (((F->y_1161 == NULL) || ((*(P111)rt_nil_check(F->y_1161)).kind_ != ((rt_int)5LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->st_409)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->st_409)).name_)), rt_str(" is not a type", 14)));
}
(*F->t_410) = (*(P111)rt_nil_check(F->y_1161)).t_;
if (((*(P111)rt_nil_check(F->y_1161)).c_ != NULL)) {
(*(P171)rt_nil_check((*F->c_411))).lo_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).lo_;
(*(P171)rt_nil_check((*F->c_411))).hi_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).hi_;
(*(P171)rt_nil_check((*F->c_411))).slen_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).slen_;
(*(P171)rt_nil_check((*F->c_411))).mlo_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).mlo_;
(*(P171)rt_nil_check((*F->c_411))).mhi_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).mhi_;
(*(P171)rt_nil_check((*F->c_411))).hasm_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).hasm_;
(*(P171)rt_nil_check((*F->c_411))).lo2_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).lo2_;
(*(P171)rt_nil_check((*F->c_411))).hi2_ = (*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1161)).c_)).hi2_;
}
if (((*F->t_410) == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->st_409)).line_, rt_str_cat(rt_str_cat(rt_str("the type ", 9), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->st_409)).name_))), rt_str(" is used before its full declaration", 36)));
}
if (((*(P164)rt_nil_check(F->st_409)).flag_ == ((rt_int)1LL))) {
F->r_1165 = (*(P164)rt_nil_check(F->st_409)).a_;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1165)).a_, (*F->t_410), &F->dummy_1162, &(*(P171)rt_nil_check((*F->c_411))).lo_);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1165)).b_, (*F->t_410), &F->dummy_1162, &(*(P171)rt_nil_check((*F->c_411))).hi_);
f_manifest_408(F->up, (*(P164)rt_nil_check(F->r_1165)).a_, &(*(P171)rt_nil_check((*F->c_411))).mlo_, &F->ok_1164);
(*(P171)rt_nil_check((*F->c_411))).hasm_ = F->ok_1164;
f_manifest_408(F->up, (*(P164)rt_nil_check(F->r_1165)).b_, &(*(P171)rt_nil_check((*F->c_411))).mhi_, &F->ok_1164);
(*(P171)rt_nil_check((*F->c_411))).hasm_ = ((*(P171)rt_nil_check((*F->c_411))).hasm_ && F->ok_1164);
} else if (((*(P164)rt_nil_check(F->st_409)).flag_ == ((rt_int)2LL))) {
F->r_1165 = (*(P164)rt_nil_check(F->st_409)).a_;
if (((*(P164)rt_nil_check(F->r_1165)).kind_ != ((rt_int)14LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->st_409)).line_, rt_str("an index constraint is a discrete range", 39));
}
if (((*(P116)rt_nil_check((*F->t_410))).kind_ == ((rt_int)5LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1165)).a_, F->up->ty_int_150, &F->dummy_1162, &F->code_1163);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1165)).b_, F->up->ty_int_150, &F->dummy_1162, &(*(P171)rt_nil_check((*F->c_411))).slen_);
(*(P171)rt_nil_check((*F->c_411))).slen_ = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check((*(P171)rt_nil_check((*F->c_411))).slen_))), rt_str(" - ", 3)), (*(P134)rt_nil_check(F->code_1163))), rt_str(" + 1)", 5)));
} else if (((*(P116)rt_nil_check((*F->t_410))).kind_ == ((rt_int)6LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1165)).a_, (*(P116)rt_nil_check((*F->t_410))).idx_, &F->dummy_1162, &(*(P171)rt_nil_check((*F->c_411))).lo_);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1165)).b_, (*(P116)rt_nil_check((*F->t_410))).idx_, &F->dummy_1162, &(*(P171)rt_nil_check((*F->c_411))).hi_);
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->st_409)).line_, rt_str("this type takes no index constraint", 35));
}
}
ret_:

  return;
}

static void f_type_definition_417(struct f_greenc_1fr *up_, P164 d_413, P134 name_414, P116 *t_415, P171 *c_416) {
  struct f_type_definition_417fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_413 = d_413;
F->name_414 = name_414;
F->t_415 = t_415;
F->c_416 = c_416;
F->dummy_1166 = NULL;
F->it_1167 = NULL;
F->ic_1168 = NULL;
F->l_1169 = NULL;
F->comp_1170 = NULL;
F->f_1171 = NULL;
F->tail_1172 = NULL;
F->y_1175 = NULL;
(*F->c_416) = f_new_cons_385(F->up);
{ rt_int sel1176 = (*(P164)rt_nil_check(F->d_413)).kind_;
if (0 || sel1176 == ((rt_int)70LL)) {
(*F->t_415) = f_new_typ_384(F->up, ((rt_int)4LL));
(*(P116)rt_nil_check((*F->t_415))).lits_ = (*(P164)rt_nil_check(F->d_413)).a_;
(*(P116)rt_nil_check((*F->t_415))).name_ = F->name_414;
F->l_1169 = (*(P164)rt_nil_check(F->d_413)).a_;
F->n_1174 = ((rt_int)0LL);
while ((F->l_1169 != NULL)) {
if (((*(P164)rt_nil_check(F->l_1169)).kind_ == ((rt_int)5LL))) {
F->y_1175 = f_new_sym_382(F->up, ((rt_int)7LL), (*(P164)rt_nil_check(F->l_1169)).name_);
(*(P111)rt_nil_check(F->y_1175)).t_ = (*F->t_415);
(*(P111)rt_nil_check(F->y_1175)).result_ = (*F->t_415);
(*(P111)rt_nil_check(F->y_1175)).mvalue_ = F->n_1174;
(*(P111)rt_nil_check(F->y_1175)).hasmv_ = 1;
f_define_377(F->up, F->y_1175, (*(P164)rt_nil_check(F->l_1169)).line_);
}
F->n_1174 = rt_add(F->n_1174, ((rt_int)1LL));
F->l_1169 = (*(P164)rt_nil_check(F->l_1169)).next_;
}
L_end_1177: ;
(*(P171)rt_nil_check((*F->c_416))).lo_ = f_mk_190(F->up, rt_str("0", 1));
(*(P171)rt_nil_check((*F->c_416))).hi_ = f_mk_190(F->up, rt_str_of_int(rt_sub(F->n_1174, ((rt_int)1LL))));
} else if (0 || sel1176 == ((rt_int)71LL)) {
(*F->t_415) = F->up->ty_int_150;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->d_413)).a_, F->up->ty_int_150, &F->dummy_1166, &(*(P171)rt_nil_check((*F->c_416))).lo_);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->d_413)).b_, F->up->ty_int_150, &F->dummy_1166, &(*(P171)rt_nil_check((*F->c_416))).hi_);
f_manifest_408(F->up, (*(P164)rt_nil_check(F->d_413)).a_, &(*(P171)rt_nil_check((*F->c_416))).mlo_, &F->ok_1173);
(*(P171)rt_nil_check((*F->c_416))).hasm_ = F->ok_1173;
f_manifest_408(F->up, (*(P164)rt_nil_check(F->d_413)).b_, &(*(P171)rt_nil_check((*F->c_416))).mhi_, &F->ok_1173);
(*(P171)rt_nil_check((*F->c_416))).hasm_ = ((*(P171)rt_nil_check((*F->c_416))).hasm_ && F->ok_1173);
} else if (0 || sel1176 == ((rt_int)72LL)) {
(*F->t_415) = F->up->ty_float_152;
} else if (0 || sel1176 == ((rt_int)73LL)) {
if ((((*(P164)rt_nil_check((*(P164)rt_nil_check(F->d_413)).a_)).next_ != NULL) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->d_413)).a_)).next_)).next_ != NULL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->d_413)).line_, rt_str("arrays of more than two dimensions are not handled yet", 54));
}
(*F->t_415) = f_new_typ_384(F->up, ((rt_int)6LL));
(*(P116)rt_nil_check((*F->t_415))).name_ = F->name_414;
f_resolve_412(F->up, (*(P164)rt_nil_check(F->d_413)).b_, &(*(P116)rt_nil_check((*F->t_415))).elem_, &(*(P116)rt_nil_check((*F->t_415))).elemcons_);
F->l_1169 = (*(P164)rt_nil_check(F->d_413)).a_;
if (((*(P164)rt_nil_check(F->l_1169)).kind_ == ((rt_int)14LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->l_1169)).a_, NULL, &(*(P116)rt_nil_check((*F->t_415))).idx_, &(*(P171)rt_nil_check((*F->c_416))).lo_);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->l_1169)).b_, (*(P116)rt_nil_check((*F->t_415))).idx_, &F->dummy_1166, &(*(P171)rt_nil_check((*F->c_416))).hi_);
} else {
f_resolve_412(F->up, F->l_1169, &(*(P116)rt_nil_check((*F->t_415))).idx_, &F->ic_1168);
if (((((*(P116)rt_nil_check((*(P116)rt_nil_check((*F->t_415))).idx_)).kind_ == ((rt_int)4LL)) || ((*(P116)rt_nil_check((*(P116)rt_nil_check((*F->t_415))).idx_)).kind_ == ((rt_int)11LL))) || ((*(P116)rt_nil_check((*(P116)rt_nil_check((*F->t_415))).idx_)).kind_ == ((rt_int)2LL)))) {
(*(P171)rt_nil_check((*F->c_416))).lo_ = (*(P171)rt_nil_check(F->ic_1168)).lo_;
(*(P171)rt_nil_check((*F->c_416))).hi_ = (*(P171)rt_nil_check(F->ic_1168)).hi_;
} else if (((*(P171)rt_nil_check(F->ic_1168)).lo_ != NULL)) {
(*(P116)rt_nil_check((*F->t_415))).tcons_ = f_new_cons_385(F->up);
(*(P171)rt_nil_check((*(P116)rt_nil_check((*F->t_415))).tcons_)).lo_ = (*(P171)rt_nil_check(F->ic_1168)).lo_;
}
}
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->d_413)).a_)).next_ != NULL)) {
F->l_1169 = (*(P164)rt_nil_check((*(P164)rt_nil_check(F->d_413)).a_)).next_;
if (((*(P164)rt_nil_check(F->l_1169)).kind_ == ((rt_int)14LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->l_1169)).a_, NULL, &(*(P116)rt_nil_check((*F->t_415))).idx2_, &(*(P171)rt_nil_check((*F->c_416))).lo2_);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->l_1169)).b_, (*(P116)rt_nil_check((*F->t_415))).idx2_, &F->dummy_1166, &(*(P171)rt_nil_check((*F->c_416))).hi2_);
} else {
f_resolve_412(F->up, F->l_1169, &(*(P116)rt_nil_check((*F->t_415))).idx2_, &F->ic_1168);
(*(P171)rt_nil_check((*F->c_416))).lo2_ = (*(P171)rt_nil_check(F->ic_1168)).lo_;
(*(P171)rt_nil_check((*F->c_416))).hi2_ = (*(P171)rt_nil_check(F->ic_1168)).hi_;
}
if ((((*(P171)rt_nil_check((*F->c_416))).lo_ == NULL) || ((*(P171)rt_nil_check((*F->c_416))).lo2_ == NULL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->d_413)).line_, rt_str("a two-dimensional array needs the bounds of both indexes here", 61));
}
}
if (((*(P171)rt_nil_check((*F->c_416))).lo_ != NULL)) {
(*(P116)rt_nil_check((*F->t_415))).tcons_ = (*F->c_416);
}
} else if (0 || sel1176 == ((rt_int)74LL)) {
(*F->t_415) = f_new_typ_384(F->up, ((rt_int)7LL));
(*(P116)rt_nil_check((*F->t_415))).name_ = F->name_414;
F->comp_1170 = (*(P164)rt_nil_check(F->d_413)).a_;
while ((F->comp_1170 != NULL)) {
F->f_1171 = ({ R1136 *cell1179 = rt_alloc(sizeof(R1136)); *cell1179 = cp_R1136(({ R1136 ag1180; ag1180.name_ = (*(P164)rt_nil_check(F->comp_1170)).name_; ag1180.t_ = NULL; ag1180.c_ = NULL; ag1180.next_ = NULL; ag1180.dflt_ = (*(P164)rt_nil_check(F->comp_1170)).b_; ag1180; })); (P1135)cell1179; });
f_resolve_412(F->up, (*(P164)rt_nil_check(F->comp_1170)).a_, &(*(P1135)rt_nil_check(F->f_1171)).t_, &(*(P1135)rt_nil_check(F->f_1171)).c_);
if ((F->tail_1172 == NULL)) {
(*(P116)rt_nil_check((*F->t_415))).fields_ = F->f_1171;
} else {
(*(P1135)rt_nil_check(F->tail_1172)).next_ = F->f_1171;
}
F->tail_1172 = F->f_1171;
F->comp_1170 = (*(P164)rt_nil_check(F->comp_1170)).next_;
}
L_end_1178: ;
} else if (0 || sel1176 == ((rt_int)75LL)) {
(*F->t_415) = f_new_typ_384(F->up, ((rt_int)8LL));
(*(P116)rt_nil_check((*F->t_415))).name_ = F->name_414;
(*(P116)rt_nil_check((*F->t_415))).decl_ = (*(P164)rt_nil_check(F->d_413)).a_;
} else if (0 || sel1176 == ((rt_int)76LL)) {
f_resolve_412(F->up, (*(P164)rt_nil_check(F->d_413)).a_, &(*F->t_415), &(*F->c_416));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->d_413)).line_, rt_str("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_finish_ptr_419(struct f_greenc_1fr *up_, P116 t_418) {
  struct f_finish_ptr_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_418 = t_418;
F->c_1181 = NULL;
if ((((*(P116)rt_nil_check(F->t_418)).target_ == NULL) && ((*(P116)rt_nil_check(F->t_418)).decl_ != NULL))) {
f_resolve_412(F->up, (*(P116)rt_nil_check(F->t_418)).decl_, &(*(P116)rt_nil_check(F->t_418)).target_, &F->c_1181);
}
ret_:

  return;
}

static void f_init_storage_423(struct f_greenc_1fr *up_, rstr lval_420, P116 t_421, P171 c_422) {
  struct f_init_storage_423fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_420 = rt_str_copy(lval_420);
F->t_421 = t_421;
F->c_422 = c_422;
F->ct_1182 = NULL;
F->i_1183 = NULL;
F->v_1184 = NULL;
F->x_1185 = NULL;
F->vt_1186 = NULL;
F->f_1187 = NULL;
if (((*(P116)rt_nil_check(F->t_421)).kind_ == ((rt_int)8LL))) {
f_emit_217(F->up, rt_str_cat(F->lval_420, rt_str(" = NULL;", 8)));
} else if (((*(P116)rt_nil_check(F->t_421)).kind_ == ((rt_int)5LL))) {
if (((*(P171)rt_nil_check(F->c_422)).slen_ == NULL)) {
f_fail_211(F->up, ((rt_int)0LL), rt_str("a STRING object needs an index constraint or an initial value", 61));
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(F->lval_420, rt_str(" = rt_str_new(", 14)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_422)).slen_))), rt_str(");", 2)));
} else if (((*(P116)rt_nil_check(F->t_421)).kind_ == ((rt_int)6LL))) {
if (((*(P171)rt_nil_check(F->c_422)).lo_ == NULL)) {
f_fail_211(F->up, ((rt_int)0LL), rt_str("an array object needs an index constraint", 41));
}
f_ctype_396(F->up, (*(P116)rt_nil_check(F->t_421)).elem_, &F->ct_1182);
if (((*(P171)rt_nil_check(F->c_422)).lo2_ != NULL)) {
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_420, rt_str(".lo = ", 6)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_422)).lo_))), rt_str("; ", 2)), F->lval_420), rt_str(".hi = ", 6)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_422)).hi_))), rt_str("; ", 2)), F->lval_420), rt_str(".lo2 = ", 7)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_422)).lo2_))), rt_str("; ", 2)), F->lval_420), rt_str(".hi2 = ", 7)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_422)).hi2_))), 59));
} else {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_420, rt_str(".lo = ", 6)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_422)).lo_))), rt_str("; ", 2)), F->lval_420), rt_str(".hi = ", 6)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_422)).hi_))), rt_str("; ", 2)), F->lval_420), rt_str(".lo2 = 1; ", 10)), F->lval_420), rt_str(".hi2 = 1;", 9)));
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_420, rt_str(".p = rt_alloc(sizeof(", 21)), (*(P134)rt_nil_check(F->ct_1182))), rt_str(") * (size_t)RT_CNT(", 19)), F->lval_420), rt_str("));", 3)));
if (((((*(P116)rt_nil_check((*(P116)rt_nil_check(F->t_421)).elem_)).kind_ == ((rt_int)5LL)) || ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->t_421)).elem_)).kind_ == ((rt_int)6LL))) || ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->t_421)).elem_)).kind_ == ((rt_int)7LL)))) {
f_new_name_193(F->up, rt_str("i", 1), &F->i_1183);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P134)rt_nil_check(F->i_1183))), rt_str(" = 0; ", 6)), (*(P134)rt_nil_check(F->i_1183))), rt_str(" < RT_CNT(", 10)), F->lval_420), rt_str("); ", 3)), (*(P134)rt_nil_check(F->i_1183))), rt_str("++) {", 5)));
f_init_storage_423(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_420, rt_str(".p[", 3)), (*(P134)rt_nil_check(F->i_1183))), 93), (*(P116)rt_nil_check(F->t_421)).elem_, (*(P116)rt_nil_check(F->t_421)).elemcons_);
f_emit_217(F->up, rt_str("}", 1));
}
} else if (((*(P116)rt_nil_check(F->t_421)).kind_ == ((rt_int)7LL))) {
F->f_1187 = (*(P116)rt_nil_check(F->t_421)).fields_;
while ((F->f_1187 != NULL)) {
f_init_storage_423(F->up, rt_str_cat(rt_str_catc(F->lval_420, 46), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1187)).name_)))), (*(P1135)rt_nil_check(F->f_1187)).t_, (*(P1135)rt_nil_check(F->f_1187)).c_);
if (((*(P1135)rt_nil_check(F->f_1187)).dflt_ != NULL)) {
f_gexpr_566(F->up, (*(P1135)rt_nil_check(F->f_1187)).dflt_, (*(P1135)rt_nil_check(F->f_1187)).t_, &F->vt_1186, &F->v_1184);
f_check_type_391(F->up, F->vt_1186, (*(P1135)rt_nil_check(F->f_1187)).t_, ((rt_int)0LL));
f_assign_code_431(F->up, rt_str_cat(rt_str_catc(F->lval_420, 46), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1187)).name_)))), (*(P1135)rt_nil_check(F->f_1187)).t_, (*(P134)rt_nil_check(F->v_1184)), (*(P1135)rt_nil_check(F->f_1187)).c_, &F->x_1185);
f_emit_217(F->up, (*(P134)rt_nil_check(F->x_1185)));
}
F->f_1187 = (*(P1135)rt_nil_check(F->f_1187)).next_;
}
L_end_1188: ;
}
ret_:

  return;
}

static int f_composite_425(struct f_greenc_1fr *up_, P116 t_424) {
  struct f_composite_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_424 = t_424;
F->result_ = (((*(P116)rt_nil_check(F->t_424)).kind_ == ((rt_int)6LL)) || ((*(P116)rt_nil_check(F->t_424)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_431(struct f_greenc_1fr *up_, rstr lval_426, P116 t_427, rstr v_428, P171 c_429, P134 *r_430) {
  struct f_assign_code_431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_426 = rt_str_copy(lval_426);
F->t_427 = t_427;
F->v_428 = rt_str_copy(v_428);
F->c_429 = c_429;
F->r_430 = r_430;
F->ct_1189 = NULL;
if (f_composite_425(F->up, F->t_427)) {
f_ctype_396(F->up, F->t_427, &F->ct_1189);
(*F->r_430) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_427)).cname_))), rt_str("(&", 2)), F->lval_426), rt_str(", ", 2)), F->v_428), rt_str(");", 2)));
} else if (((*(P116)rt_nil_check(F->t_427)).kind_ == ((rt_int)5LL))) {
(*F->r_430) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), F->lval_426), rt_str(", ", 2)), F->v_428), rt_str(");", 2)));
} else if (((((((*(P116)rt_nil_check(F->t_427)).kind_ == ((rt_int)1LL)) || ((*(P116)rt_nil_check(F->t_427)).kind_ == ((rt_int)4LL))) || ((*(P116)rt_nil_check(F->t_427)).kind_ == ((rt_int)11LL))) && (F->c_429 != NULL)) && ((*(P171)rt_nil_check(F->c_429)).lo_ != NULL))) {
(*F->r_430) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_426, rt_str(" = rt_range(", 12)), F->v_428), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_429)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_429)).hi_))), rt_str(");", 2)));
} else {
(*F->r_430) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_426, rt_str(" = ", 3)), F->v_428), 59));
}
ret_:

  return;
}

static void f_copy_code_435(struct f_greenc_1fr *up_, P116 t_432, rstr v_433, P134 *r_434) {
  struct f_copy_code_435fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_432 = t_432;
F->v_433 = rt_str_copy(v_433);
F->r_434 = r_434;
F->ct_1190 = NULL;
if (f_composite_425(F->up, F->t_432)) {
f_ctype_396(F->up, F->t_432, &F->ct_1190);
(*F->r_434) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("cp_", 3), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_432)).cname_))), 40), F->v_433), 41));
} else if (((*(P116)rt_nil_check(F->t_432)).kind_ == ((rt_int)5LL))) {
(*F->r_434) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_copy(", 12), F->v_433), 41));
} else {
(*F->r_434) = f_mk_190(F->up, F->v_433);
}
ret_:

  return;
}

static void f_eq_code_440(struct f_greenc_1fr *up_, P116 t_436, rstr a_437, rstr b_438, P134 *r_439) {
  struct f_eq_code_440fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_436 = t_436;
F->a_437 = rt_str_copy(a_437);
F->b_438 = rt_str_copy(b_438);
F->r_439 = r_439;
F->ct_1191 = NULL;
if (f_composite_425(F->up, F->t_436)) {
f_ctype_396(F->up, F->t_436, &F->ct_1191);
(*F->r_439) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("eq_", 3), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_436)).cname_))), 40), F->a_437), rt_str(", ", 2)), F->b_438), 41));
} else if (((*(P116)rt_nil_check(F->t_436)).kind_ == ((rt_int)5LL))) {
(*F->r_439) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_437), rt_str(", ", 2)), F->b_438), 41));
} else {
(*F->r_439) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_437), rt_str(" == ", 4)), F->b_438), 41));
}
ret_:

  return;
}

static int f_seen_name_443(struct f_greenc_1fr *up_, P145 l_441, rstr s_442) {
  struct f_seen_name_443fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_441 = l_441;
F->s_442 = rt_str_copy(s_442);
F->p_1192 = NULL;
F->p_1192 = F->l_441;
while ((F->p_1192 != NULL)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P145)rt_nil_check(F->p_1192)).s_)), F->s_442)) {
F->result_ = 1;
goto ret_;
}
F->p_1192 = (*(P145)rt_nil_check(F->p_1192)).next_;
}
L_end_1193: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_444(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1194 = NULL;
F->t_1194 = F->up->all_types_118;
F->done_1195 = NULL;
F->l_1196 = NULL;
while ((F->t_1194 != NULL)) {
if ((f_composite_425(F->up, F->t_1194) && (!f_seen_name_443(F->up, F->done_1195, (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_)))))) {
F->l_1196 = ({ R146 *cell1198 = rt_alloc(sizeof(R146)); *cell1198 = cp_R146(({ R146 ag1199; ag1199.s_ = (*(P116)rt_nil_check(F->t_1194)).cname_; ag1199.next_ = F->done_1195; ag1199; })); (P145)cell1198; });
F->done_1195 = F->l_1196;
f_put_to_215(F->up, F->up->out_helpers_124, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), 40), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), rt_str(" *d, ", 5)), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), rt_str(" s);", 4)));
f_put_to_215(F->up, F->up->out_helpers_124, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), rt_str(" cp_", 4)), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), 40), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), rt_str(" s);", 4)));
f_put_to_215(F->up, F->up->out_helpers_124, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), 40), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), rt_str(" a, ", 4)), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_1194)).cname_))), rt_str(" b);", 4)));
f_helper_bodies_446(F->up, F->t_1194);
}
F->t_1194 = (*(P116)rt_nil_check(F->t_1194)).next_;
}
L_end_1197: ;
ret_:

  return;
}

static void f_helper_bodies_446(struct f_greenc_1fr *up_, P116 t_445) {
  struct f_helper_bodies_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_445 = t_445;
F->c_1200 = NULL;
F->c_1200 = (*(P116)rt_nil_check(F->t_445)).cname_;
F->b_1201 = NULL;
F->b_1201 = F->up->out_funcs_127;
F->ct_1202 = NULL;
F->x_1203 = NULL;
F->y_1204 = NULL;
F->conds_1205 = NULL;
F->f_1206 = NULL;
if (((*(P116)rt_nil_check(F->t_445)).kind_ == ((rt_int)6LL))) {
f_ctype_396(F->up, (*(P116)rt_nil_check(F->t_445)).elem_, &F->ct_1202);
f_assign_code_431(F->up, rt_str("d->p[i]", 7), (*(P116)rt_nil_check(F->t_445)).elem_, rt_str("s.p[i]", 6), NULL, &F->x_1203);
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P134)rt_nil_check(F->c_1200))), 40), (*(P134)rt_nil_check(F->c_1200))), rt_str(" *d, ", 5)), (*(P134)rt_nil_check(F->c_1200))), rt_str(" s) {", 5)));
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_208(F->up)), rt_str("array length", 12)), f_q_208(F->up)), rt_str(");", 2)));
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), (*(P134)rt_nil_check(F->x_1203))), rt_str(" }", 2)));
f_put_to_215(F->up, F->b_1201, rt_str("}", 1));
f_copy_code_435(F->up, (*(P116)rt_nil_check(F->t_445)).elem_, rt_str("s.p[i]", 6), &F->x_1203);
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P134)rt_nil_check(F->c_1200))), rt_str(" cp_", 4)), (*(P134)rt_nil_check(F->c_1200))), 40), (*(P134)rt_nil_check(F->c_1200))), rt_str(" s) {", 5)));
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P134)rt_nil_check(F->c_1200))), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P134)rt_nil_check(F->ct_1202))), rt_str(") * (size_t)RT_CNT(s));", 23)));
f_put_to_215(F->up, F->b_1201, rt_str_catc(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), (*(P134)rt_nil_check(F->x_1203))), 59));
f_put_to_215(F->up, F->b_1201, rt_str("  return d;", 11));
f_put_to_215(F->up, F->b_1201, rt_str("}", 1));
f_eq_code_440(F->up, (*(P116)rt_nil_check(F->t_445)).elem_, rt_str("a.p[i]", 6), rt_str("b.p[i]", 6), &F->x_1203);
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P134)rt_nil_check(F->c_1200))), 40), (*(P134)rt_nil_check(F->c_1200))), rt_str(" a, ", 4)), (*(P134)rt_nil_check(F->c_1200))), rt_str(" b) {", 5)));
f_put_to_215(F->up, F->b_1201, rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43));
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), (*(P134)rt_nil_check(F->x_1203))), rt_str(")) return 0;", 12)));
f_put_to_215(F->up, F->b_1201, rt_str("  return 1;", 11));
f_put_to_215(F->up, F->b_1201, rt_str("}", 1));
} else {
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P134)rt_nil_check(F->c_1200))), 40), (*(P134)rt_nil_check(F->c_1200))), rt_str(" *d, ", 5)), (*(P134)rt_nil_check(F->c_1200))), rt_str(" s) {", 5)));
F->f_1206 = (*(P116)rt_nil_check(F->t_445)).fields_;
while ((F->f_1206 != NULL)) {
f_assign_code_431(F->up, rt_str_cat(rt_str("d->", 3), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1206)).name_)))), (*(P1135)rt_nil_check(F->f_1206)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1206)).name_)))), NULL, &F->x_1203);
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str("  ", 2), (*(P134)rt_nil_check(F->x_1203))));
F->f_1206 = (*(P1135)rt_nil_check(F->f_1206)).next_;
}
L_end_1207: ;
f_put_to_215(F->up, F->b_1201, rt_str("}", 1));
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P134)rt_nil_check(F->c_1200))), rt_str(" cp_", 4)), (*(P134)rt_nil_check(F->c_1200))), 40), (*(P134)rt_nil_check(F->c_1200))), rt_str(" s) {", 5)));
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P134)rt_nil_check(F->c_1200))), rt_str(" d = s;", 7)));
F->conds_1205 = f_mk_190(F->up, rt_str("1", 1));
F->f_1206 = (*(P116)rt_nil_check(F->t_445)).fields_;
while ((F->f_1206 != NULL)) {
f_copy_code_435(F->up, (*(P1135)rt_nil_check(F->f_1206)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1206)).name_)))), &F->x_1203);
f_put_to_215(F->up, F->b_1201, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1206)).name_)))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->x_1203))), 59));
f_eq_code_440(F->up, (*(P1135)rt_nil_check(F->f_1206)).t_, rt_str_cat(rt_str("a.", 2), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1206)).name_)))), rt_str_cat(rt_str("b.", 2), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1206)).name_)))), &F->y_1204);
F->conds_1205 = f_mk_190(F->up, rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->conds_1205)), rt_str(" && ", 4)), (*(P134)rt_nil_check(F->y_1204))));
F->f_1206 = (*(P1135)rt_nil_check(F->f_1206)).next_;
}
L_end_1208: ;
f_put_to_215(F->up, F->b_1201, rt_str("  return d;", 11));
f_put_to_215(F->up, F->b_1201, rt_str("}", 1));
f_put_to_215(F->up, F->b_1201, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P134)rt_nil_check(F->c_1200))), 40), (*(P134)rt_nil_check(F->c_1200))), rt_str(" a, ", 4)), (*(P134)rt_nil_check(F->c_1200))), rt_str(" b) {", 5)));
f_put_to_215(F->up, F->b_1201, rt_str_catc(rt_str_cat(rt_str("  return ", 9), (*(P134)rt_nil_check(F->conds_1205))), 59));
f_put_to_215(F->up, F->b_1201, rt_str("}", 1));
}
ret_:

  return;
}

static void f_storage_450(struct f_greenc_1fr *up_, rstr name_447, P116 t_448, P134 *access_code_449) {
  struct f_storage_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_447 = rt_str_copy(name_447);
F->t_448 = t_448;
F->access_code_449 = access_code_449;
F->ct_1209 = NULL;
F->g_1210 = NULL;
f_ctype_396(F->up, F->t_448, &F->ct_1209);
if ((!F->up->in_func_132)) {
f_new_name_193(F->up, rt_str_catc(rt_str_cat(rt_str("g_", 2), f_lower_s_201(F->up, F->name_447)), 95), &F->g_1210);
f_put_to_215(F->up, F->up->out_globals_126, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P134)rt_nil_check(F->ct_1209))), 32), (*(P134)rt_nil_check(F->g_1210))), 59));
F->up->st_field_135 = F->g_1210;
(*F->access_code_449) = F->g_1210;
} else {
f_new_name_193(F->up, rt_str_catc(f_lower_s_201(F->up, F->name_447), 95), &F->g_1210);
f_put_to_215(F->up, F->up->fields_buf_131, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P134)rt_nil_check(F->ct_1209))), 32), (*(P134)rt_nil_check(F->g_1210))), 59));
F->up->st_field_135 = F->g_1210;
(*F->access_code_449) = f_mk_190(F->up, rt_str_cat(rt_str("F->", 3), (*(P134)rt_nil_check(F->g_1210))));
}
ret_:

  return;
}

static void f_bind_453(struct f_greenc_1fr *up_, P111 y_451, P134 access_code_452) {
  struct f_bind_453fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_451 = y_451;
F->access_code_452 = access_code_452;
if (F->up->in_func_132) {
(*(P111)rt_nil_check(F->y_451)).level_ = F->up->cur_level_133;
(*(P111)rt_nil_check(F->y_451)).access_path_ = F->up->st_field_135;
} else {
(*(P111)rt_nil_check(F->y_451)).level_ = ((rt_int)0LL);
(*(P111)rt_nil_check(F->y_451)).access_path_ = F->access_code_452;
}
ret_:

  return;
}

static void f_declare_subprograms_455(struct f_greenc_1fr *up_, P164 from_454) {
  struct f_declare_subprograms_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_454 = from_454;
F->e_1211 = NULL;
F->e_1211 = F->from_454;
while ((F->e_1211 != NULL)) {
if (((((*(P164)rt_nil_check(F->e_1211)).kind_ == ((rt_int)44LL)) || ((*(P164)rt_nil_check(F->e_1211)).kind_ == ((rt_int)45LL))) && ((*(P164)rt_nil_check(F->e_1211)).ival_ == ((rt_int)0LL)))) {
f_declare_one_457(F->up, F->e_1211);
}
F->e_1211 = (*(P164)rt_nil_check(F->e_1211)).next_;
}
L_end_1212: ;
ret_:

  return;
}

static void f_declare_one_457(struct f_greenc_1fr *up_, P164 e_456) {
  struct f_declare_one_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_456 = e_456;
F->y_1213 = NULL;
F->z_1214 = NULL;
if (f_is_generic_name_831(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_456)).name_)))) {
goto ret_;
}
f_build_subprogram_460(F->up, F->e_456, &F->y_1213);
F->z_1214 = F->up->table_113.p[rt_index(f_hash_356(F->up, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1213)).name_))), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while ((F->z_1214 != NULL)) {
if (((((((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->z_1214)).name_)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1213)).name_))) && (((*(P111)rt_nil_check(F->z_1214)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->z_1214)).kind_ == ((rt_int)4LL)))) && ((*(P111)rt_nil_check(F->z_1214)).decl_ != NULL)) && ((*(P164)rt_nil_check((*(P111)rt_nil_check(F->z_1214)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P111)rt_nil_check(F->z_1214)).depth_ == F->up->depth_114)) && f_same_signature_374(F->up, (*(P111)rt_nil_check(F->z_1214)).params_, (*(P111)rt_nil_check(F->y_1213)).params_)) && f_same_371(F->up, (*(P111)rt_nil_check(F->z_1214)).result_, (*(P111)rt_nil_check(F->y_1213)).result_))) {
(*(P111)rt_nil_check(F->z_1214)).decl_ = F->e_456;
goto ret_;
}
F->z_1214 = (*(P111)rt_nil_check(F->z_1214)).chain_;
}
L_end_1215: ;
if ((F->up->cur_task_161 != NULL)) {
F->z_1214 = (*(P111)rt_nil_check(F->up->cur_task_161)).members_;
while ((F->z_1214 != NULL)) {
if ((((((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->z_1214)).name_)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1213)).name_))) && (((*(P111)rt_nil_check(F->z_1214)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->z_1214)).kind_ == ((rt_int)4LL)))) && ((*(P111)rt_nil_check(F->z_1214)).decl_ != NULL)) && ((*(P164)rt_nil_check((*(P111)rt_nil_check(F->z_1214)).decl_)).ival_ == ((rt_int)1LL))) && f_same_signature_374(F->up, (*(P111)rt_nil_check(F->z_1214)).params_, (*(P111)rt_nil_check(F->y_1213)).params_)) && f_same_371(F->up, (*(P111)rt_nil_check(F->z_1214)).result_, (*(P111)rt_nil_check(F->y_1213)).result_))) {
(*(P111)rt_nil_check(F->y_1213)).cname_ = (*(P111)rt_nil_check(F->z_1214)).cname_;
(*(P111)rt_nil_check(F->z_1214)).decl_ = F->e_456;
goto L_end_1216;
}
F->z_1214 = (*(P111)rt_nil_check(F->z_1214)).mnext_;
}
L_end_1216: ;
}
f_define_377(F->up, F->y_1213, (*(P164)rt_nil_check(F->e_456)).line_);
ret_:

  return;
}

static void f_build_subprogram_460(struct f_greenc_1fr *up_, P164 d_458, P111 *y_459) {
  struct f_build_subprogram_460fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_458 = d_458;
F->y_459 = y_459;
F->p_1217 = NULL;
F->p_1217 = (*(P164)rt_nil_check(F->d_458)).a_;
F->pm_1218 = NULL;
F->tail_1219 = NULL;
F->rc_1220 = NULL;
F->k_1221 = ((rt_int)4LL);
if (((*(P164)rt_nil_check(F->d_458)).kind_ == ((rt_int)45LL))) {
F->k_1221 = ((rt_int)3LL);
}
(*F->y_459) = f_new_sym_382(F->up, F->k_1221, (*(P164)rt_nil_check(F->d_458)).name_);
while ((F->p_1217 != NULL)) {
F->pm_1218 = ({ R1125 *cell1223 = rt_alloc(sizeof(R1125)); *cell1223 = cp_R1125(({ R1125 ag1224; ag1224.name_ = (*(P164)rt_nil_check(F->p_1217)).name_; ag1224.mode_ = (*(P164)rt_nil_check(F->p_1217)).ival_; ag1224.t_ = NULL; ag1224.c_ = NULL; ag1224.cfield_ = NULL; ag1224.dflt_ = (*(P164)rt_nil_check(F->p_1217)).b_; ag1224.next_ = NULL; ag1224; })); (P1124)cell1223; });
f_resolve_412(F->up, (*(P164)rt_nil_check(F->p_1217)).a_, &(*(P1124)rt_nil_check(F->pm_1218)).t_, &(*(P1124)rt_nil_check(F->pm_1218)).c_);
f_new_name_193(F->up, rt_str_catc(f_lower_s_201(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->p_1217)).name_))), 95), &(*(P1124)rt_nil_check(F->pm_1218)).cfield_);
if ((((*(P164)rt_nil_check(F->d_458)).kind_ == ((rt_int)45LL)) && ((*(P1124)rt_nil_check(F->pm_1218)).mode_ != ((rt_int)1LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->p_1217)).line_, rt_str("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P164)rt_nil_check(F->d_458)).flag_ == ((rt_int)1LL)) && ((*(P1124)rt_nil_check(F->pm_1218)).mode_ != ((rt_int)1LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->p_1217)).line_, rt_str("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1219 == NULL)) {
(*(P111)rt_nil_check((*F->y_459))).params_ = F->pm_1218;
} else {
(*(P1124)rt_nil_check(F->tail_1219)).next_ = F->pm_1218;
}
F->tail_1219 = F->pm_1218;
F->p_1217 = (*(P164)rt_nil_check(F->p_1217)).next_;
}
L_end_1222: ;
(*(P111)rt_nil_check((*F->y_459))).result_ = F->up->ty_void_155;
if (((*(P164)rt_nil_check(F->d_458)).b_ != NULL)) {
f_resolve_412(F->up, (*(P164)rt_nil_check(F->d_458)).b_, &(*(P111)rt_nil_check((*F->y_459))).result_, &F->rc_1220);
}
(*(P111)rt_nil_check((*F->y_459))).vrp_ = ((*(P164)rt_nil_check(F->d_458)).flag_ == ((rt_int)1LL));
f_new_name_193(F->up, rt_str_catc(rt_str_cat(rt_str("f_", 2), f_c_ident_516(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->d_458)).name_)))), 95), &(*(P111)rt_nil_check((*F->y_459))).cname_);
(*(P111)rt_nil_check((*F->y_459))).decl_ = F->d_458;
(*(P111)rt_nil_check((*F->y_459))).level_ = F->up->cur_level_133;
ret_:

  return;
}

static void f_decl_elements_462(struct f_greenc_1fr *up_, P164 decls_461) {
  struct f_decl_elements_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_461 = decls_461;
F->e_1225 = NULL;
F->e_1225 = F->decls_461;
F->declared_1226 = 0;
while ((F->e_1225 != NULL)) {
if ((((((*(P164)rt_nil_check(F->e_1225)).kind_ == ((rt_int)44LL)) || ((*(P164)rt_nil_check(F->e_1225)).kind_ == ((rt_int)45LL))) && ((*(P164)rt_nil_check(F->e_1225)).ival_ != ((rt_int)1LL))) && (!F->declared_1226))) {
f_declare_subprograms_455(F->up, F->e_1225);
F->declared_1226 = 1;
}
f_decl_element_464(F->up, F->e_1225);
F->e_1225 = (*(P164)rt_nil_check(F->e_1225)).next_;
}
L_end_1227: ;
ret_:

  return;
}

static void f_decl_element_464(struct f_greenc_1fr *up_, P164 e_463) {
  struct f_decl_element_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_463 = e_463;
F->y_1228 = NULL;
F->z_1229 = NULL;
F->t_1230 = NULL;
F->vt_1231 = NULL;
F->c_1232 = NULL;
F->acc_1233 = NULL;
F->v_1234 = NULL;
F->x_1235 = NULL;
{ rt_int sel1237 = (*(P164)rt_nil_check(F->e_463)).kind_;
if (0 || sel1237 == ((rt_int)42LL)) {
F->y_1228 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_)));
if ((((((((F->y_1228 != NULL) && ((*(P111)rt_nil_check(F->y_1228)).kind_ == ((rt_int)5LL))) && ((*(P111)rt_nil_check(F->y_1228)).depth_ == F->up->depth_114)) && ((*(P111)rt_nil_check(F->y_1228)).t_ != NULL)) && (*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1228)).t_)).priv_) && ((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1228)).t_)).kind_ == ((rt_int)9LL))) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).kind_ != ((rt_int)77LL)))) {
f_type_definition_417(F->up, (*(P164)rt_nil_check(F->e_463)).a_, (*(P164)rt_nil_check(F->e_463)).name_, &F->t_1230, &F->c_1232);
f_complete_private_655(F->up, (*(P111)rt_nil_check(F->y_1228)).t_, F->t_1230);
(*(P111)rt_nil_check(F->y_1228)).c_ = F->c_1232;
} else {
F->y_1228 = f_new_sym_382(F->up, ((rt_int)5LL), (*(P164)rt_nil_check(F->e_463)).name_);
(*(P111)rt_nil_check(F->y_1228)).decl_ = F->e_463;
f_define_377(F->up, F->y_1228, (*(P164)rt_nil_check(F->e_463)).line_);
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).kind_ == ((rt_int)77LL))) {
(*(P111)rt_nil_check(F->y_1228)).t_ = f_new_typ_384(F->up, ((rt_int)9LL));
(*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1228)).t_)).name_ = (*(P164)rt_nil_check(F->e_463)).name_;
(*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1228)).t_)).priv_ = 1;
(*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1228)).t_)).decl_ = F->up->cur_pkg_176;
} else {
f_type_definition_417(F->up, (*(P164)rt_nil_check(F->e_463)).a_, (*(P164)rt_nil_check(F->e_463)).name_, &(*(P111)rt_nil_check(F->y_1228)).t_, &(*(P111)rt_nil_check(F->y_1228)).c_);
}
}
} else if (0 || sel1237 == ((rt_int)43LL)) {
F->y_1228 = f_new_sym_382(F->up, ((rt_int)5LL), (*(P164)rt_nil_check(F->e_463)).name_);
f_resolve_412(F->up, (*(P164)rt_nil_check(F->e_463)).a_, &(*(P111)rt_nil_check(F->y_1228)).t_, &(*(P111)rt_nil_check(F->y_1228)).c_);
f_define_377(F->up, F->y_1228, (*(P164)rt_nil_check(F->e_463)).line_);
} else if (0 || sel1237 == ((rt_int)40LL)) {
f_resolve_412(F->up, (*(P164)rt_nil_check(F->e_463)).a_, &F->t_1230, &F->c_1232);
F->y_1228 = f_new_sym_382(F->up, ((rt_int)1LL), (*(P164)rt_nil_check(F->e_463)).name_);
if (((*(P164)rt_nil_check(F->e_463)).flag_ == ((rt_int)2LL))) {
f_lvalue_528(F->up, (*(P164)rt_nil_check(F->e_463)).b_, &F->v_1234, &F->vt_1231, &F->c_1232, &(*(P111)rt_nil_check(F->y_1228)).ro_);
f_check_type_391(F->up, F->vt_1231, F->t_1230, (*(P164)rt_nil_check(F->e_463)).line_);
f_ctype_396(F->up, F->t_1230, &F->acc_1233);
f_new_name_193(F->up, rt_str_catc(f_lower_s_201(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_))), 95), &F->x_1235);
if (F->up->in_func_132) {
f_put_to_215(F->up, F->up->fields_buf_131, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P134)rt_nil_check(F->acc_1233))), rt_str(" *", 2)), (*(P134)rt_nil_check(F->x_1235))), 59));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P134)rt_nil_check(F->x_1235))), rt_str(" = &(", 5)), (*(P134)rt_nil_check(F->v_1234))), rt_str(");", 2)));
(*(P111)rt_nil_check(F->y_1228)).byref_ = 1;
(*(P111)rt_nil_check(F->y_1228)).level_ = F->up->cur_level_133;
(*(P111)rt_nil_check(F->y_1228)).access_path_ = F->x_1235;
} else {
f_put_to_215(F->up, F->up->out_globals_126, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P134)rt_nil_check(F->acc_1233))), rt_str(" *g_", 4)), (*(P134)rt_nil_check(F->x_1235))), 59));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("g_", 2), (*(P134)rt_nil_check(F->x_1235))), rt_str(" = &(", 5)), (*(P134)rt_nil_check(F->v_1234))), rt_str(");", 2)));
(*(P111)rt_nil_check(F->y_1228)).level_ = ((rt_int)0LL);
(*(P111)rt_nil_check(F->y_1228)).access_path_ = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("(*g_", 4), (*(P134)rt_nil_check(F->x_1235))), 41));
}
(*(P111)rt_nil_check(F->y_1228)).t_ = F->vt_1231;
(*(P111)rt_nil_check(F->y_1228)).c_ = F->c_1232;
f_define_377(F->up, F->y_1228, (*(P164)rt_nil_check(F->e_463)).line_);
goto ret_;
}
if (((((*(P116)rt_nil_check(F->t_1230)).kind_ == ((rt_int)5LL)) && ((*(P171)rt_nil_check(F->c_1232)).slen_ == NULL)) && ((*(P164)rt_nil_check(F->e_463)).b_ != NULL))) {
F->up->vrp_ok_181 = 1;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_463)).b_, F->t_1230, &F->vt_1231, &F->v_1234);
F->up->vrp_ok_181 = 0;
f_check_type_391(F->up, F->vt_1231, F->t_1230, (*(P164)rt_nil_check(F->e_463)).line_);
f_storage_450(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_)), F->t_1230, &F->acc_1233);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->acc_1233)), rt_str(" = rt_str_copy(", 15)), (*(P134)rt_nil_check(F->v_1234))), rt_str(");", 2)));
} else {
f_storage_450(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_)), F->t_1230, &F->acc_1233);
f_init_storage_423(F->up, (*(P134)rt_nil_check(F->acc_1233)), F->t_1230, F->c_1232);
if (((*(P164)rt_nil_check(F->e_463)).b_ != NULL)) {
F->up->vrp_ok_181 = 1;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_463)).b_, F->t_1230, &F->vt_1231, &F->v_1234);
F->up->vrp_ok_181 = 0;
f_check_type_391(F->up, F->vt_1231, F->t_1230, (*(P164)rt_nil_check(F->e_463)).line_);
f_assign_code_431(F->up, (*(P134)rt_nil_check(F->acc_1233)), F->t_1230, (*(P134)rt_nil_check(F->v_1234)), F->c_1232, &F->x_1235);
f_emit_217(F->up, (*(P134)rt_nil_check(F->x_1235)));
}
}
(*(P111)rt_nil_check(F->y_1228)).t_ = F->t_1230;
(*(P111)rt_nil_check(F->y_1228)).c_ = F->c_1232;
f_bind_453(F->up, F->y_1228, F->acc_1233);
f_define_377(F->up, F->y_1228, (*(P164)rt_nil_check(F->e_463)).line_);
} else if (0 || sel1237 == ((rt_int)41LL)) {
f_resolve_412(F->up, (*(P164)rt_nil_check(F->e_463)).a_, &F->t_1230, &F->c_1232);
F->y_1228 = f_new_sym_382(F->up, ((rt_int)2LL), (*(P164)rt_nil_check(F->e_463)).name_);
F->up->vrp_ok_181 = 1;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_463)).b_, F->t_1230, &F->vt_1231, &F->v_1234);
F->up->vrp_ok_181 = 0;
f_check_type_391(F->up, F->vt_1231, F->t_1230, (*(P164)rt_nil_check(F->e_463)).line_);
if (((*(P116)rt_nil_check(F->t_1230)).kind_ == ((rt_int)1LL))) {
f_manifest_408(F->up, (*(P164)rt_nil_check(F->e_463)).b_, &(*(P111)rt_nil_check(F->y_1228)).mvalue_, &F->ok_1236);
(*(P111)rt_nil_check(F->y_1228)).hasmv_ = F->ok_1236;
}
f_storage_450(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_)), F->t_1230, &F->acc_1233);
f_copy_code_435(F->up, F->t_1230, (*(P134)rt_nil_check(F->v_1234)), &F->x_1235);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->acc_1233)), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->x_1235))), 59));
(*(P111)rt_nil_check(F->y_1228)).t_ = F->t_1230;
(*(P111)rt_nil_check(F->y_1228)).c_ = F->c_1232;
(*(P111)rt_nil_check(F->y_1228)).ro_ = 1;
f_bind_453(F->up, F->y_1228, F->acc_1233);
f_define_377(F->up, F->y_1228, (*(P164)rt_nil_check(F->e_463)).line_);
} else if (0 || sel1237 == ((rt_int)46LL)) {
if (((*(P164)rt_nil_check(F->e_463)).a_ != NULL)) {
if ((((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_643(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).a_))) {
F->y_1228 = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).name_)), (*(P164)rt_nil_check(F->e_463)).line_);
} else if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1228 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_463)).a_)).name_)));
} else {
F->y_1228 = NULL;
}
if (((F->y_1228 == NULL) || ((*(P111)rt_nil_check(F->y_1228)).kind_ != ((rt_int)6LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_463)).line_, rt_str("an exception is renamed only as an exception", 44));
}
f_copy_sym_652(F->up, F->y_1228, &F->z_1229);
(*(P111)rt_nil_check(F->z_1229)).name_ = (*(P164)rt_nil_check(F->e_463)).name_;
f_define_377(F->up, F->z_1229, (*(P164)rt_nil_check(F->e_463)).line_);
goto ret_;
}
F->y_1228 = f_new_sym_382(F->up, ((rt_int)6LL), (*(P164)rt_nil_check(F->e_463)).name_);
f_new_name_193(F->up, rt_str_catc(rt_str_cat(rt_str("ex_", 3), f_lower_s_201(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_)))), 95), &(*(P111)rt_nil_check(F->y_1228)).cname_);
f_put_to_215(F->up, F->up->out_globals_126, rt_str_catc(rt_str_cat(rt_str("static int ", 11), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1228)).cname_))), 59));
f_put_to_215(F->up, F->up->out_excs_129, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1228)).cname_))), rt_str(" = rt_exc(", 10)), f_q_208(F->up)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_))), f_q_208(F->up)), rt_str(");", 2)));
f_define_377(F->up, F->y_1228, (*(P164)rt_nil_check(F->e_463)).line_);
} else if (0 || sel1237 == ((rt_int)44LL) || sel1237 == ((rt_int)45LL)) {
if (f_is_generic_name_831(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_463)).name_)))) {
f_attach_generic_body_833(F->up, F->e_463);
} else if (((*(P164)rt_nil_check(F->e_463)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_460(F->up, F->e_463, &F->y_1228);
f_define_377(F->up, F->y_1228, (*(P164)rt_nil_check(F->e_463)).line_);
} else {
f_subprogram_body_471(F->up, F->e_463, f_lookup_decl_366(F->up, F->e_463));
}
} else if (0 || sel1237 == ((rt_int)55LL)) {
f_use_clause_664(F->up, F->e_463);
} else if (0 || sel1237 == ((rt_int)56LL)) {
f_pragma_decl_466(F->up, F->e_463);
} else {
f_other_decl_468(F->up, F->e_463);
}
}
ret_:

  return;
}

static void f_pragma_decl_466(struct f_greenc_1fr *up_, P164 e_465) {
  struct f_pragma_decl_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_465 = e_465;
ret_:

  return;
}

static void f_other_decl_468(struct f_greenc_1fr *up_, P164 e_467) {
  struct f_other_decl_468fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_467 = e_467;
if (((*(P164)rt_nil_check(F->e_467)).kind_ == ((rt_int)48LL))) {
f_package_spec_657(F->up, F->e_467);
} else if (((*(P164)rt_nil_check(F->e_467)).kind_ == ((rt_int)49LL))) {
f_package_body_662(F->up, F->e_467);
} else {
f_task_decl_737(F->up, F->e_467);
}
ret_:

  return;
}

static void f_subprogram_body_471(struct f_greenc_1fr *up_, P164 d_469, P111 y_470) {
  struct f_subprogram_body_471fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_469 = d_469;
F->y_470 = y_470;
F->saved_code_1238 = NULL;
F->saved_code_1238 = F->up->code_130;
F->saved_fields_1239 = NULL;
F->saved_fields_1239 = F->up->fields_buf_131;
F->saved_in_1240 = F->up->in_func_132;
F->saved_sym_1241 = NULL;
F->saved_sym_1241 = F->up->func_sym_136;
F->saved_exits_1242 = NULL;
F->saved_exits_1242 = F->up->exits_139;
F->saved_frames_1243 = F->up->frames_144;
F->saved_handlers_1244 = NULL;
F->saved_handlers_1244 = F->up->handlers_147;
F->saved_cleanups_1245 = NULL;
F->saved_cleanups_1245 = F->up->cleanups_148;
F->saved_pure_1246 = NULL;
F->saved_pure_1246 = F->up->pure_sym_179;
F->aw_1247 = NULL;
F->saved_pdepth_1248 = F->up->pure_depth_180;
F->args_1249 = NULL;
F->head_1250 = NULL;
F->frame_1251 = NULL;
F->parent_1252 = NULL;
F->ct_1253 = NULL;
F->x_1254 = NULL;
F->pm_1255 = NULL;
F->pm_1255 = (*(P111)rt_nil_check(F->y_470)).params_;
F->p_1256 = NULL;
F->frame_1251 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_470)).cname_)), rt_str("fr", 2)));
if (F->up->in_func_132) {
F->parent_1252 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->func_sym_136)).cname_)), rt_str("fr", 2)));
}
F->up->code_130 = f_new_buffer_212(F->up);
F->up->fields_buf_131 = f_new_buffer_212(F->up);
F->up->in_func_132 = 1;
F->up->func_sym_136 = F->y_470;
F->up->exits_139 = NULL;
F->up->frames_144 = ((rt_int)0LL);
F->up->handlers_147 = NULL;
F->up->cleanups_148 = NULL;
F->up->cur_level_133 = rt_add(F->up->cur_level_133, ((rt_int)1LL));
F->args_1249 = f_mk_190(F->up, rt_str("", 0));
f_open_scope_378(F->up);
if ((((*(P111)rt_nil_check(F->y_470)).kind_ == ((rt_int)3LL)) && (!(*(P111)rt_nil_check(F->y_470)).vrp_))) {
F->up->pure_sym_179 = F->y_470;
F->up->pure_depth_180 = F->up->depth_114;
}
if ((F->parent_1252 != NULL)) {
f_put_to_215(F->up, F->up->fields_buf_131, rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P134)rt_nil_check(F->parent_1252))), rt_str(" *up;", 5)));
F->args_1249 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P134)rt_nil_check(F->parent_1252))), rt_str(" *up_", 5)));
f_emit_217(F->up, rt_str("F->up = up_;", 12));
}
while ((F->pm_1255 != NULL)) {
f_ctype_396(F->up, (*(P1124)rt_nil_check(F->pm_1255)).t_, &F->ct_1253);
if ((((*(P134)rt_nil_check(F->args_1249))).len > ((rt_int)0LL))) {
F->args_1249 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->args_1249)), rt_str(", ", 2)));
}
if (((*(P1124)rt_nil_check(F->pm_1255)).mode_ == ((rt_int)1LL))) {
F->p_1256 = f_new_sym_382(F->up, ((rt_int)2LL), (*(P1124)rt_nil_check(F->pm_1255)).name_);
(*(P111)rt_nil_check(F->p_1256)).ro_ = 1;
f_put_to_215(F->up, F->up->fields_buf_131, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P134)rt_nil_check(F->ct_1253))), 32), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))), 59));
F->args_1249 = f_mk_190(F->up, rt_str_cat(rt_str_catc(rt_str_cat((*(P134)rt_nil_check(F->args_1249)), (*(P134)rt_nil_check(F->ct_1253))), 32), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))));
f_copy_code_435(F->up, (*(P1124)rt_nil_check(F->pm_1255)).t_, (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_)), &F->x_1254);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->x_1254))), 59));
} else {
F->p_1256 = f_new_sym_382(F->up, ((rt_int)1LL), (*(P1124)rt_nil_check(F->pm_1255)).name_);
(*(P111)rt_nil_check(F->p_1256)).byref_ = 1;
f_put_to_215(F->up, F->up->fields_buf_131, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P134)rt_nil_check(F->ct_1253))), rt_str(" *", 2)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))), 59));
F->args_1249 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->args_1249)), (*(P134)rt_nil_check(F->ct_1253))), rt_str(" *", 2)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))));
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))), rt_str(" = ", 3)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))), 59));
}
(*(P111)rt_nil_check(F->p_1256)).access_path_ = (*(P1124)rt_nil_check(F->pm_1255)).cfield_;
(*(P111)rt_nil_check(F->p_1256)).t_ = (*(P1124)rt_nil_check(F->pm_1255)).t_;
(*(P111)rt_nil_check(F->p_1256)).c_ = (*(P1124)rt_nil_check(F->pm_1255)).c_;
(*(P111)rt_nil_check(F->p_1256)).level_ = F->up->cur_level_133;
f_define_377(F->up, F->p_1256, (*(P164)rt_nil_check(F->d_469)).line_);
F->pm_1255 = (*(P1124)rt_nil_check(F->pm_1255)).next_;
}
L_end_1257: ;
if (((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_470)).result_)).kind_ != ((rt_int)9LL))) {
f_ctype_396(F->up, (*(P111)rt_nil_check(F->y_470)).result_, &F->ct_1253);
f_put_to_215(F->up, F->up->fields_buf_131, rt_str_cat(rt_str_ccat(32, (*(P134)rt_nil_check(F->ct_1253))), rt_str(" result_;", 9)));
}
f_decl_elements_462(F->up, (*(P164)rt_nil_check(F->d_469)).c_);
if (((((*(P164)rt_nil_check(F->d_469)).tag_ != NULL) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->d_469)).tag_)), rt_str("INTERFACE", 9))) && ((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_470)).result_)).kind_ == ((rt_int)9LL)))) {
F->x_1254 = f_mk_190(F->up, rt_str("", 0));
F->pm_1255 = (*(P111)rt_nil_check(F->y_470)).params_;
while ((F->pm_1255 != NULL)) {
if ((((*(P134)rt_nil_check(F->x_1254))).len > ((rt_int)0LL))) {
F->x_1254 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->x_1254)), rt_str(", ", 2)));
}
F->x_1254 = f_mk_190(F->up, rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->x_1254)), rt_str("F->", 3)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1255)).cfield_))));
F->pm_1255 = (*(P1124)rt_nil_check(F->pm_1255)).next_;
}
L_end_1258: ;
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("rt_g_", 5), f_lower_s_201(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->d_469)).name_)))), 40), (*(P134)rt_nil_check(F->x_1254))), rt_str(");", 2)));
} else {
f_guarded_482(F->up, (*(P164)rt_nil_check(F->d_469)).d_, (*(P164)rt_nil_check(F->d_469)).e_, (*(P164)rt_nil_check(F->d_469)).line_);
}
f_task_awaits_756(F->up, (*(P164)rt_nil_check(F->d_469)).c_, &F->aw_1247);
f_close_scope_379(F->up);
F->up->cur_level_133 = rt_sub(F->up->cur_level_133, ((rt_int)1LL));
if ((((*(P134)rt_nil_check(F->args_1249))).len == ((rt_int)0LL))) {
F->args_1249 = f_mk_190(F->up, rt_str("void", 4));
}
f_ctype_396(F->up, (*(P111)rt_nil_check(F->y_470)).result_, &F->ct_1253);
F->head_1250 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P134)rt_nil_check(F->ct_1253))), 32), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_470)).cname_))), 40), (*(P134)rt_nil_check(F->args_1249))), 41));
f_put_to_215(F->up, F->up->out_protos_125, rt_str_catc((*(P134)rt_nil_check(F->head_1250)), 59));
f_put_to_215(F->up, F->up->out_frames_123, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P134)rt_nil_check(F->frame_1251))), rt_str(" { int dummy;", 13)));
f_splice_222(F->up, F->up->out_frames_123, F->up->fields_buf_131);
f_put_to_215(F->up, F->up->out_frames_123, rt_str("};", 2));
f_put_to_215(F->up, F->up->out_funcs_127, rt_str_cat((*(P134)rt_nil_check(F->head_1250)), rt_str(" {", 2)));
f_put_to_215(F->up, F->up->out_funcs_127, rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P134)rt_nil_check(F->frame_1251))), rt_str(" *F = rt_alloc(sizeof *F);", 26)));
if ((((*(P111)rt_nil_check(F->y_470)).kind_ == ((rt_int)4LL)) && ((*(P111)rt_nil_check(F->y_470)).access_path_ != NULL))) {
f_put_to_215(F->up, F->up->out_funcs_127, rt_str_cat(rt_str("  ", 2), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_470)).access_path_))));
}
f_splice_222(F->up, F->up->out_funcs_127, F->up->code_130);
if (((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_470)).result_)).kind_ != ((rt_int)9LL))) {
f_put_to_215(F->up, F->up->out_funcs_127, rt_str("  rt_raise(RT_X_INIT);", 22));
f_put_to_215(F->up, F->up->out_funcs_127, rt_str("ret_:", 5));
f_put_to_215(F->up, F->up->out_funcs_127, (*(P134)rt_nil_check(F->aw_1247)));
f_put_to_215(F->up, F->up->out_funcs_127, rt_str("  return F->result_;", 20));
} else {
f_put_to_215(F->up, F->up->out_funcs_127, rt_str("ret_:", 5));
f_put_to_215(F->up, F->up->out_funcs_127, (*(P134)rt_nil_check(F->aw_1247)));
f_put_to_215(F->up, F->up->out_funcs_127, rt_str("  return;", 9));
}
f_put_to_215(F->up, F->up->out_funcs_127, rt_str("}", 1));
f_put_to_215(F->up, F->up->out_funcs_127, rt_str("", 0));
F->up->code_130 = F->saved_code_1238;
F->up->fields_buf_131 = F->saved_fields_1239;
F->up->in_func_132 = F->saved_in_1240;
F->up->func_sym_136 = F->saved_sym_1241;
F->up->exits_139 = F->saved_exits_1242;
F->up->frames_144 = F->saved_frames_1243;
F->up->handlers_147 = F->saved_handlers_1244;
F->up->cleanups_148 = F->saved_cleanups_1245;
F->up->pure_sym_179 = F->saved_pure_1246;
F->up->pure_depth_180 = F->saved_pdepth_1248;
ret_:

  return;
}

static void f_gen_statements_473(struct f_greenc_1fr *up_, P164 stmts_472) {
  struct f_gen_statements_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_472 = stmts_472;
F->s_1259 = NULL;
F->s_1259 = F->stmts_472;
while ((F->s_1259 != NULL)) {
f_gen_statement_488(F->up, F->s_1259);
F->s_1259 = (*(P164)rt_nil_check(F->s_1259)).next_;
}
L_end_1260: ;
ret_:

  return;
}

static void f_pop_frames_475(struct f_greenc_1fr *up_, rt_int upto_474) {
  struct f_pop_frames_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_474 = upto_474;
F->i_1261 = F->up->frames_144;
F->c_1262 = NULL;
F->c_1262 = F->up->cleanups_148;
while ((F->i_1261 > F->upto_474)) {
f_emit_217(F->up, (*(P134)rt_nil_check((*(P145)rt_nil_check(F->c_1262)).s_)));
F->c_1262 = (*(P145)rt_nil_check(F->c_1262)).next_;
F->i_1261 = rt_sub(F->i_1261, ((rt_int)1LL));
}
L_end_1263: ;
ret_:

  return;
}

static void f_push_cleanup_477(struct f_greenc_1fr *up_, rstr s_476) {
  struct f_push_cleanup_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_476 = rt_str_copy(s_476);
F->up->cleanups_148 = ({ R146 *cell1264 = rt_alloc(sizeof(R146)); *cell1264 = cp_R146(({ R146 ag1265; ag1265.s_ = NULL; ag1265.next_ = F->up->cleanups_148; ag1265; })); (P145)cell1264; });
(*(P145)rt_nil_check(F->up->cleanups_148)).s_ = f_mk_190(F->up, F->s_476);
F->up->frames_144 = rt_add(F->up->frames_144, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_478(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_478fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_148 = (*(P145)rt_nil_check(F->up->cleanups_148)).next_;
F->up->frames_144 = rt_sub(F->up->frames_144, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_482(struct f_greenc_1fr *up_, P164 stmts_479, P164 hs_480, rt_int line_481) {
  struct f_guarded_482fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_479 = stmts_479;
F->hs_480 = hs_480;
F->line_481 = line_481;
F->f_1266 = NULL;
F->x_1267 = NULL;
F->h_1268 = NULL;
F->n_1269 = NULL;
F->first_1270 = 1;
F->has_others_1271 = 0;
F->conds_1272 = NULL;
if ((F->hs_480 == NULL)) {
f_gen_statements_473(F->up, F->stmts_479);
goto ret_;
}
f_new_name_193(F->up, rt_str("xf", 2), &F->f_1266);
f_new_name_193(F->up, rt_str("x", 1), &F->x_1267);
f_push_cleanup_477(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P134)rt_nil_check(F->f_1266))), rt_str(");", 2)));
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str("{ rt_frame ", 11), (*(P134)rt_nil_check(F->f_1266))), 59));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P134)rt_nil_check(F->f_1266))), rt_str(")) {", 4)));
f_gen_statements_473(F->up, F->stmts_479);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P134)rt_nil_check(F->f_1266))), rt_str(");", 2)));
f_emit_217(F->up, rt_str("} else {", 8));
f_pop_cleanup_478(F->up);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P134)rt_nil_check(F->f_1266))), rt_str(");", 2)));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P134)rt_nil_check(F->x_1267))), rt_str(" = rt_xcur;", 11)));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (rt_g_aborted()) rt_raise(", 29), (*(P134)rt_nil_check(F->x_1267))), rt_str(");", 2)));
F->up->handlers_147 = ({ R146 *cell1273 = rt_alloc(sizeof(R146)); *cell1273 = cp_R146(({ R146 ag1274; ag1274.s_ = F->x_1267; ag1274.next_ = F->up->handlers_147; ag1274; })); (P145)cell1273; });
F->h_1268 = F->hs_480;
while ((F->h_1268 != NULL)) {
F->n_1269 = (*(P164)rt_nil_check(F->h_1268)).a_;
F->conds_1272 = f_mk_190(F->up, rt_str("0", 1));
while ((F->n_1269 != NULL)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1269)).name_)), rt_str("OTHERS", 6))) {
F->has_others_1271 = 1;
F->conds_1272 = f_mk_190(F->up, rt_str("1", 1));
} else {
F->up->prefix_hint_177 = (*(P164)rt_nil_check(F->n_1269)).tag_;
f_exc_id_486(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1269)).name_)), (*(P164)rt_nil_check(F->h_1268)).line_, &F->f_1266);
F->conds_1272 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->conds_1272)), rt_str(" || ", 4)), (*(P134)rt_nil_check(F->x_1267))), rt_str(" == ", 4)), (*(P134)rt_nil_check(F->f_1266))));
}
F->n_1269 = (*(P164)rt_nil_check(F->n_1269)).next_;
}
L_end_1276: ;
if (F->first_1270) {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P134)rt_nil_check(F->conds_1272))), rt_str(") {", 3)));
} else {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P134)rt_nil_check(F->conds_1272))), rt_str(") {", 3)));
}
F->first_1270 = 0;
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->h_1268)).b_);
F->h_1268 = (*(P164)rt_nil_check(F->h_1268)).next_;
}
L_end_1275: ;
if ((!F->has_others_1271)) {
f_emit_217(F->up, rt_str("} else {", 8));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P134)rt_nil_check(F->x_1267))), rt_str(");", 2)));
}
f_emit_217(F->up, rt_str("}", 1));
F->up->handlers_147 = (*(P145)rt_nil_check(F->up->handlers_147)).next_;
f_emit_217(F->up, rt_str("}", 1));
f_emit_217(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_exc_id_486(struct f_greenc_1fr *up_, rstr name_483, rt_int line_484, P134 *r_485) {
  struct f_exc_id_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_483 = rt_str_copy(name_483);
F->line_484 = line_484;
F->r_485 = r_485;
F->y_1277 = NULL;
F->y_1277 = f_lookup_358(F->up, F->name_483);
if ((F->up->prefix_hint_177 != NULL)) {
F->y_1277 = f_member_of_647(F->up, (*(P134)rt_nil_check(F->up->prefix_hint_177)), F->name_483, F->line_484);
F->up->prefix_hint_177 = NULL;
}
if (((F->y_1277 == NULL) || ((*(P111)rt_nil_check(F->y_1277)).kind_ != ((rt_int)6LL)))) {
f_fail_211(F->up, F->line_484, rt_str_cat(F->name_483, rt_str(" is not an exception", 20)));
}
(*F->r_485) = (*(P111)rt_nil_check(F->y_1277)).cname_;
ret_:

  return;
}

static void f_gen_statement_488(struct f_greenc_1fr *up_, P164 s_487) {
  struct f_gen_statement_488fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_487 = s_487;
F->t_1278 = NULL;
F->vt_1279 = NULL;
F->c_1280 = NULL;
F->lv_1281 = NULL;
F->v_1282 = NULL;
F->x_1283 = NULL;
{ rt_int sel1285 = (*(P164)rt_nil_check(F->s_487)).kind_;
if (0 || sel1285 == ((rt_int)20LL)) {
if (((((*(P164)rt_nil_check((*(P164)rt_nil_check(F->s_487)).a_)).kind_ == ((rt_int)8LL)) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->s_487)).a_)).b_ != NULL)) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->s_487)).a_)).b_)).kind_ == ((rt_int)14LL)))) {
f_slice_assign_490(F->up, F->s_487);
goto ret_;
}
F->up->in_lv_path_182 = 1;
F->up->last_deref_183 = 0;
f_lvalue_528(F->up, (*(P164)rt_nil_check(F->s_487)).a_, &F->lv_1281, &F->t_1278, &F->c_1280, &F->ro_1284);
F->up->in_lv_path_182 = 0;
if (F->ro_1284) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_487)).line_, rt_str("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_805(F->up, (*(P164)rt_nil_check(F->s_487)).a_, (*(P164)rt_nil_check(F->s_487)).line_);
F->up->vrp_ok_181 = 1;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_487)).b_, F->t_1278, &F->vt_1279, &F->v_1282);
F->up->vrp_ok_181 = 0;
f_check_type_391(F->up, F->vt_1279, F->t_1278, (*(P164)rt_nil_check(F->s_487)).line_);
f_assign_code_431(F->up, (*(P134)rt_nil_check(F->lv_1281)), F->t_1278, (*(P134)rt_nil_check(F->v_1282)), F->c_1280, &F->x_1283);
f_emit_217(F->up, (*(P134)rt_nil_check(F->x_1283)));
} else if (0 || sel1285 == ((rt_int)21LL)) {
F->up->vrp_ok_181 = 1;
f_gen_call_492(F->up, F->s_487);
F->up->vrp_ok_181 = 0;
} else if (0 || sel1285 == ((rt_int)22LL)) {
f_gen_if_494(F->up, F->s_487);
} else if (0 || sel1285 == ((rt_int)23LL)) {
f_gen_case_496(F->up, F->s_487);
} else if (0 || sel1285 == ((rt_int)24LL)) {
f_gen_loop_502(F->up, F->s_487);
} else if (0 || sel1285 == ((rt_int)25LL)) {
f_gen_block_504(F->up, F->s_487);
} else if (0 || sel1285 == ((rt_int)26LL)) {
f_gen_exit_506(F->up, F->s_487);
} else if (0 || sel1285 == ((rt_int)27LL)) {
f_gen_return_508(F->up, F->s_487);
} else if (0 || sel1285 == ((rt_int)28LL)) {
if (((((*(P164)rt_nil_check(F->s_487)).tag_ != NULL) && f_is_task_name_710(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_487)).tag_)))) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_487)).name_)), rt_str("FAILURE", 7)))) {
f_task_failure_758(F->up, F->s_487);
} else {
F->up->prefix_hint_177 = (*(P164)rt_nil_check(F->s_487)).tag_;
f_exc_id_486(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_487)).name_)), (*(P164)rt_nil_check(F->s_487)).line_, &F->x_1283);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P134)rt_nil_check(F->x_1283))), rt_str(");", 2)));
}
} else if (0 || sel1285 == ((rt_int)29LL)) {
if ((F->up->handlers_147 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_487)).line_, rt_str("raise; outside an exception handler", 35));
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P134)rt_nil_check((*(P145)rt_nil_check(F->up->handlers_147)).s_))), rt_str(");", 2)));
} else if (0 || sel1285 == ((rt_int)30LL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_487)).a_, F->up->ty_bool_151, &F->vt_1279, &F->v_1282);
f_check_type_391(F->up, F->vt_1279, F->up->ty_bool_151, (*(P164)rt_nil_check(F->s_487)).line_);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (!(", 6), (*(P134)rt_nil_check(F->v_1282))), rt_str(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1285 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_800(F->up, F->s_487);
}
}
ret_:

  return;
}

static void f_slice_assign_490(struct f_greenc_1fr *up_, P164 s_489) {
  struct f_slice_assign_490fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_489 = s_489;
F->lv_1286 = NULL;
F->lo_1287 = NULL;
F->hi_1288 = NULL;
F->v_1289 = NULL;
F->t_1290 = NULL;
F->vt_1291 = NULL;
F->c_1292 = NULL;
F->up->in_lv_path_182 = 1;
F->up->last_deref_183 = 0;
f_lvalue_528(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->s_489)).a_)).a_, &F->lv_1286, &F->t_1290, &F->c_1292, &F->ro_1293);
F->up->in_lv_path_182 = 0;
if ((F->ro_1293 || ((*(P116)rt_nil_check(F->t_1290)).kind_ != ((rt_int)5LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_489)).line_, rt_str("assignment to a slice needs a STRING variable", 45));
}
f_check_pure_target_805(F->up, (*(P164)rt_nil_check(F->s_489)).a_, (*(P164)rt_nil_check(F->s_489)).line_);
f_gexpr_566(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->s_489)).a_)).b_)).a_, F->up->ty_int_150, &F->vt_1291, &F->lo_1287);
f_gexpr_566(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->s_489)).a_)).b_)).b_, F->up->ty_int_150, &F->vt_1291, &F->hi_1288);
F->up->vrp_ok_181 = 1;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_489)).b_, F->up->ty_string_154, &F->vt_1291, &F->v_1289);
F->up->vrp_ok_181 = 0;
f_check_type_391(F->up, F->vt_1291, F->up->ty_string_154, (*(P164)rt_nil_check(F->s_489)).line_);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P134)rt_nil_check(F->lv_1286))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->lo_1287))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->hi_1288))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->v_1289))), rt_str(");", 2)));
ret_:

  return;
}

static void f_gen_call_492(struct f_greenc_1fr *up_, P164 s_491) {
  struct f_gen_call_492fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_491 = s_491;
F->c_1294 = NULL;
F->c_1294 = (*(P164)rt_nil_check(F->s_491)).a_;
F->t_1295 = NULL;
F->v_1296 = NULL;
if ((((*(P164)rt_nil_check(F->c_1294)).kind_ == ((rt_int)5LL)) || ((*(P164)rt_nil_check(F->c_1294)).kind_ == ((rt_int)9LL)))) {
F->c_1294 = f_nn_256(F->up, ((rt_int)8LL), (*(P164)rt_nil_check(F->s_491)).line_);
(*(P164)rt_nil_check(F->c_1294)).a_ = (*(P164)rt_nil_check(F->s_491)).a_;
}
if (((*(P164)rt_nil_check(F->c_1294)).kind_ != ((rt_int)8LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_491)).line_, rt_str("not a procedure call", 20));
}
f_gcall_629(F->up, F->c_1294, 1, &F->t_1295, &F->v_1296);
f_emit_217(F->up, rt_str_catc((*(P134)rt_nil_check(F->v_1296)), 59));
ret_:

  return;
}

static void f_gen_if_494(struct f_greenc_1fr *up_, P164 s_493) {
  struct f_gen_if_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_493 = s_493;
F->a_1297 = NULL;
F->a_1297 = (*(P164)rt_nil_check(F->s_493)).a_;
F->first_1298 = 1;
F->t_1299 = NULL;
F->v_1300 = NULL;
while ((F->a_1297 != NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->a_1297)).a_, F->up->ty_bool_151, &F->t_1299, &F->v_1300);
f_check_type_391(F->up, F->t_1299, F->up->ty_bool_151, (*(P164)rt_nil_check(F->s_493)).line_);
if (F->first_1298) {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P134)rt_nil_check(F->v_1300))), rt_str(") {", 3)));
} else {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P134)rt_nil_check(F->v_1300))), rt_str(") {", 3)));
}
F->first_1298 = 0;
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->a_1297)).b_);
F->a_1297 = (*(P164)rt_nil_check(F->a_1297)).next_;
}
L_end_1301: ;
if (((*(P164)rt_nil_check(F->s_493)).flag_ == ((rt_int)1LL))) {
f_emit_217(F->up, rt_str("} else {", 8));
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->s_493)).b_);
}
f_emit_217(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_gen_case_496(struct f_greenc_1fr *up_, P164 s_495) {
  struct f_gen_case_496fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_495 = s_495;
F->st_1302 = NULL;
F->vt_1303 = NULL;
F->first_1304 = 1;
F->a_1305 = NULL;
F->a_1305 = (*(P164)rt_nil_check(F->s_495)).b_;
F->lab_1306 = NULL;
F->sel_1307 = NULL;
F->tmp_1308 = NULL;
F->ct_1309 = NULL;
F->conds_1310 = NULL;
F->v_1311 = NULL;
F->lo_1312 = NULL;
F->hi_1313 = NULL;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_495)).a_, NULL, &F->st_1302, &F->sel_1307);
f_new_name_193(F->up, rt_str("sel", 3), &F->tmp_1308);
f_ctype_396(F->up, F->st_1302, &F->ct_1309);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ ", 2), (*(P134)rt_nil_check(F->ct_1309))), 32), (*(P134)rt_nil_check(F->tmp_1308))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->sel_1307))), 59));
while ((F->a_1305 != NULL)) {
F->lab_1306 = (*(P164)rt_nil_check(F->a_1305)).a_;
F->conds_1310 = f_mk_190(F->up, rt_str("0", 1));
while ((F->lab_1306 != NULL)) {
if (((*(P164)rt_nil_check(F->lab_1306)).b_ == NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->lab_1306)).a_, F->st_1302, &F->vt_1303, &F->v_1311);
f_check_type_391(F->up, F->vt_1303, F->st_1302, (*(P164)rt_nil_check(F->s_495)).line_);
F->conds_1310 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->conds_1310)), rt_str(" || ", 4)), (*(P134)rt_nil_check(F->tmp_1308))), rt_str(" == ", 4)), (*(P134)rt_nil_check(F->v_1311))));
} else {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->lab_1306)).a_, F->st_1302, &F->vt_1303, &F->lo_1312);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->lab_1306)).b_, F->st_1302, &F->vt_1303, &F->hi_1313);
F->conds_1310 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->conds_1310)), rt_str(" || (", 5)), (*(P134)rt_nil_check(F->tmp_1308))), rt_str(" >= ", 4)), (*(P134)rt_nil_check(F->lo_1312))), rt_str(" && ", 4)), (*(P134)rt_nil_check(F->tmp_1308))), rt_str(" <= ", 4)), (*(P134)rt_nil_check(F->hi_1313))), 41));
}
F->lab_1306 = (*(P164)rt_nil_check(F->lab_1306)).next_;
}
L_end_1315: ;
if (F->first_1304) {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P134)rt_nil_check(F->conds_1310))), rt_str(") {", 3)));
} else {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P134)rt_nil_check(F->conds_1310))), rt_str(") {", 3)));
}
F->first_1304 = 0;
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->a_1305)).b_);
F->a_1305 = (*(P164)rt_nil_check(F->a_1305)).next_;
}
L_end_1314: ;
if (F->first_1304) {
f_emit_217(F->up, rt_str("{", 1));
} else {
f_emit_217(F->up, rt_str("} else {", 8));
}
if (((*(P164)rt_nil_check(F->s_495)).flag_ == ((rt_int)1LL))) {
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->s_495)).c_);
} else {
f_emit_217(F->up, rt_str("rt_raise(RT_X_CASE);", 20));
}
f_emit_217(F->up, rt_str("}", 1));
f_emit_217(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_push_exit_500(struct f_greenc_1fr *up_, P134 match_497, int is_loop_498, P134 *label_499) {
  struct f_push_exit_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_497 = match_497;
F->is_loop_498 = is_loop_498;
F->label_499 = label_499;
f_new_name_193(F->up, rt_str("L_end_", 6), &(*F->label_499));
F->up->exits_139 = ({ R138 *cell1316 = rt_alloc(sizeof(R138)); *cell1316 = cp_R138(({ R138 ag1317; ag1317.match_ = F->match_497; ag1317.label_ = (*F->label_499); ag1317.depth_ = F->up->frames_144; ag1317.is_loop_ = F->is_loop_498; ag1317.next_ = F->up->exits_139; ag1317; })); (P137)cell1316; });
ret_:

  return;
}

static void f_gen_loop_502(struct f_greenc_1fr *up_, P164 s_501) {
  struct f_gen_loop_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_501 = s_501;
F->t_1318 = NULL;
F->vt_1319 = NULL;
F->c_1320 = NULL;
F->label_1321 = NULL;
F->cond_1322 = NULL;
F->acc_1323 = NULL;
F->lov_1324 = NULL;
F->hiv_1325 = NULL;
F->it_1326 = NULL;
F->y_1327 = NULL;
F->r_1328 = NULL;
f_push_exit_500(F->up, (*(P164)rt_nil_check(F->s_501)).tag_, 1, &F->label_1321);
if (((*(P164)rt_nil_check(F->s_501)).flag_ == ((rt_int)0LL))) {
f_emit_217(F->up, rt_str("for (;;) {", 10));
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->s_501)).b_);
f_emit_217(F->up, rt_str("}", 1));
} else if (((*(P164)rt_nil_check(F->s_501)).flag_ == ((rt_int)1LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_501)).a_, F->up->ty_bool_151, &F->vt_1319, &F->cond_1322);
f_check_type_391(F->up, F->vt_1319, F->up->ty_bool_151, (*(P164)rt_nil_check(F->s_501)).line_);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("while (", 7), (*(P134)rt_nil_check(F->cond_1322))), rt_str(") {", 3)));
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->s_501)).b_);
f_emit_217(F->up, rt_str("}", 1));
} else {
F->r_1328 = (*(P164)rt_nil_check(F->s_501)).a_;
F->c_1320 = f_new_cons_385(F->up);
if (((*(P164)rt_nil_check(F->r_1328)).kind_ == ((rt_int)14LL))) {
f_range_bounds_561(F->up, (*(P164)rt_nil_check(F->r_1328)).a_, (*(P164)rt_nil_check(F->r_1328)).b_, NULL, (*(P164)rt_nil_check(F->s_501)).line_, &F->t_1318, &(*(P171)rt_nil_check(F->c_1320)).lo_, &(*(P171)rt_nil_check(F->c_1320)).hi_);
} else {
f_resolve_412(F->up, F->r_1328, &F->t_1318, &F->c_1320);
if (((*(P171)rt_nil_check(F->c_1320)).lo_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_501)).line_, rt_str("a FOR loop needs a discrete range", 33));
}
}
if ((((((*(P116)rt_nil_check(F->t_1318)).kind_ != ((rt_int)1LL)) && ((*(P116)rt_nil_check(F->t_1318)).kind_ != ((rt_int)4LL))) && ((*(P116)rt_nil_check(F->t_1318)).kind_ != ((rt_int)11LL))) && ((*(P116)rt_nil_check(F->t_1318)).kind_ != ((rt_int)2LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_501)).line_, rt_str("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_450(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_501)).name_)), F->t_1318, &F->acc_1323);
f_new_name_193(F->up, rt_str("lo", 2), &F->lov_1324);
f_new_name_193(F->up, rt_str("hi", 2), &F->hiv_1325);
f_new_name_193(F->up, rt_str("it", 2), &F->it_1326);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), (*(P134)rt_nil_check(F->lov_1324))), rt_str(" = ", 3)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1320)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->hiv_1325))), rt_str(" = ", 3)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1320)).hi_))), 59));
if (((*(P164)rt_nil_check(F->s_501)).ival_ == ((rt_int)1LL))) {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P134)rt_nil_check(F->it_1326))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->hiv_1325))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->it_1326))), rt_str(" >= ", 4)), (*(P134)rt_nil_check(F->lov_1324))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->it_1326))), rt_str("--) {", 5)));
} else {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P134)rt_nil_check(F->it_1326))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->lov_1324))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->it_1326))), rt_str(" <= ", 4)), (*(P134)rt_nil_check(F->hiv_1325))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->it_1326))), rt_str("++) {", 5)));
}
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->acc_1323)), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->it_1326))), 59));
f_open_scope_378(F->up);
F->y_1327 = f_new_sym_382(F->up, ((rt_int)2LL), (*(P164)rt_nil_check(F->s_501)).name_);
(*(P111)rt_nil_check(F->y_1327)).t_ = F->t_1318;
(*(P111)rt_nil_check(F->y_1327)).ro_ = 1;
f_bind_453(F->up, F->y_1327, F->acc_1323);
f_define_377(F->up, F->y_1327, (*(P164)rt_nil_check(F->s_501)).line_);
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->s_501)).b_);
f_close_scope_379(F->up);
f_emit_217(F->up, rt_str("}", 1));
f_emit_217(F->up, rt_str("}", 1));
}
F->up->exits_139 = (*(P137)rt_nil_check(F->up->exits_139)).next_;
f_emit_217(F->up, rt_str_cat((*(P134)rt_nil_check(F->label_1321)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_504(struct f_greenc_1fr *up_, P164 s_503) {
  struct f_gen_block_504fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_503 = s_503;
F->label_1329 = NULL;
F->aw_1330 = NULL;
f_push_exit_500(F->up, (*(P164)rt_nil_check(F->s_503)).tag_, 0, &F->label_1329);
f_emit_217(F->up, rt_str("{", 1));
f_open_scope_378(F->up);
f_decl_elements_462(F->up, (*(P164)rt_nil_check(F->s_503)).a_);
f_guarded_482(F->up, (*(P164)rt_nil_check(F->s_503)).b_, (*(P164)rt_nil_check(F->s_503)).c_, (*(P164)rt_nil_check(F->s_503)).line_);
f_task_awaits_756(F->up, (*(P164)rt_nil_check(F->s_503)).a_, &F->aw_1330);
f_emit_217(F->up, (*(P134)rt_nil_check(F->aw_1330)));
f_close_scope_379(F->up);
f_emit_217(F->up, rt_str("}", 1));
F->up->exits_139 = (*(P137)rt_nil_check(F->up->exits_139)).next_;
f_emit_217(F->up, rt_str_cat((*(P134)rt_nil_check(F->label_1329)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_506(struct f_greenc_1fr *up_, P164 s_505) {
  struct f_gen_exit_506fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_505 = s_505;
F->x_1331 = NULL;
F->x_1331 = F->up->exits_139;
F->t_1332 = NULL;
F->v_1333 = NULL;
while ((F->x_1331 != NULL)) {
if (((F->up->accept_depth_162 > ((rt_int)0LL)) && (F->x_1331 == F->up->accept_exits_143))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_505)).line_, rt_str("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((((*(P164)rt_nil_check(F->s_505)).name_ == NULL) && (*(P137)rt_nil_check(F->x_1331)).is_loop_) || ((((*(P164)rt_nil_check(F->s_505)).name_ != NULL) && ((*(P137)rt_nil_check(F->x_1331)).match_ != NULL)) && rt_str_eq((*(P134)rt_nil_check((*(P137)rt_nil_check(F->x_1331)).match_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_505)).name_)))))) {
if (((*(P164)rt_nil_check(F->s_505)).a_ != NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_505)).a_, F->up->ty_bool_151, &F->t_1332, &F->v_1333);
f_check_type_391(F->up, F->t_1332, F->up->ty_bool_151, (*(P164)rt_nil_check(F->s_505)).line_);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P134)rt_nil_check(F->v_1333))), rt_str(") {", 3)));
}
f_pop_frames_475(F->up, (*(P137)rt_nil_check(F->x_1331)).depth_);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str("goto ", 5), (*(P134)rt_nil_check((*(P137)rt_nil_check(F->x_1331)).label_))), 59));
if (((*(P164)rt_nil_check(F->s_505)).a_ != NULL)) {
f_emit_217(F->up, rt_str("}", 1));
}
goto ret_;
}
F->x_1331 = (*(P137)rt_nil_check(F->x_1331)).next_;
}
L_end_1334: ;
if (((*(P164)rt_nil_check(F->s_505)).name_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_505)).line_, rt_str("exit outside a loop", 19));
}
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_505)).line_, rt_str_cat(rt_str_cat(rt_str("exit ", 5), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_505)).name_))), rt_str(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_508(struct f_greenc_1fr *up_, P164 s_507) {
  struct f_gen_return_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_507 = s_507;
F->vt_1335 = NULL;
F->v_1336 = NULL;
if ((!F->up->in_func_132)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_507)).line_, rt_str("return outside a subprogram", 27));
}
if ((F->up->accept_depth_162 > ((rt_int)0LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_507)).line_, rt_str("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P116)rt_nil_check((*(P111)rt_nil_check(F->up->func_sym_136)).result_)).kind_ == ((rt_int)9LL))) {
if (((*(P164)rt_nil_check(F->s_507)).a_ != NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_507)).line_, rt_str("a procedure returns no value", 28));
}
f_pop_frames_475(F->up, ((rt_int)0LL));
f_emit_217(F->up, rt_str("goto ret_;", 10));
goto ret_;
}
if (((*(P164)rt_nil_check(F->s_507)).a_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_507)).line_, rt_str("return needs a value here", 25));
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_507)).a_, (*(P111)rt_nil_check(F->up->func_sym_136)).result_, &F->vt_1335, &F->v_1336);
f_check_type_391(F->up, F->vt_1335, (*(P111)rt_nil_check(F->up->func_sym_136)).result_, (*(P164)rt_nil_check(F->s_507)).line_);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str("F->result_ = ", 13), (*(P134)rt_nil_check(F->v_1336))), 59));
f_pop_frames_475(F->up, ((rt_int)0LL));
f_emit_217(F->up, rt_str("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_511(struct f_greenc_1fr *up_, P111 y_509, P134 *r_510) {
  struct f_access_of_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_509 = y_509;
F->r_510 = r_510;
F->p_1337 = NULL;
if (((*(P111)rt_nil_check(F->y_509)).level_ <= ((rt_int)0LL))) {
(*F->r_510) = (*(P111)rt_nil_check(F->y_509)).access_path_;
goto ret_;
}
F->p_1337 = f_mk_190(F->up, rt_str("F", 1));
{ rt_int lo1340 = ((rt_int)1LL), hi1341 = rt_sub(F->up->cur_level_133, (*(P111)rt_nil_check(F->y_509)).level_);
for (rt_int it1342 = lo1340; it1342 <= hi1341; it1342++) {
F->i_1339 = it1342;
F->p_1337 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->p_1337)), rt_str("->up", 4)));
}
}
L_end_1338: ;
if ((*(P111)rt_nil_check(F->y_509)).byref_) {
(*F->r_510) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P134)rt_nil_check(F->p_1337))), rt_str("->", 2)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_509)).access_path_))), 41));
} else {
(*F->r_510) = f_mk_190(F->up, rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->p_1337)), rt_str("->", 2)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_509)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_514(struct f_greenc_1fr *up_, rt_int l_512, P134 *r_513) {
  struct f_link_to_514fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_512 = l_512;
F->r_513 = r_513;
(*F->r_513) = f_mk_190(F->up, rt_str("F", 1));
{ rt_int lo1345 = ((rt_int)1LL), hi1346 = rt_sub(F->up->cur_level_133, F->l_512);
for (rt_int it1347 = lo1345; it1347 <= hi1346; it1347++) {
F->i_1344 = it1347;
(*F->r_513) = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*F->r_513))), rt_str("->up", 4)));
}
}
L_end_1343: ;
ret_:

  return;
}

static rstr f_c_ident_516(struct f_greenc_1fr *up_, rstr s_515) {
  struct f_c_ident_516fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_515 = rt_str_copy(s_515);
if (rt_str_eq(F->s_515, rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("MOD", 3))) {
F->result_ = rt_str("op_mod", 6);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("AND", 3))) {
F->result_ = rt_str("op_and", 6);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("OR", 2))) {
F->result_ = rt_str("op_or", 5);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("XOR", 3))) {
F->result_ = rt_str("op_xor", 6);
goto ret_;
} else if (rt_str_eq(F->s_515, rt_str("NOT", 3))) {
F->result_ = rt_str("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_201(F->up, F->s_515);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_520(struct f_greenc_1fr *up_, rstr base_517, P116 t_518, P134 *r_519) {
  struct f_deref_520fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_517 = rt_str_copy(base_517);
F->t_518 = t_518;
F->r_519 = r_519;
F->ct_1348 = NULL;
if (F->up->in_lv_path_182) {
F->up->last_deref_183 = 1;
}
f_ctype_396(F->up, F->t_518, &F->ct_1348);
(*F->r_519) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), (*(P134)rt_nil_check(F->ct_1348))), rt_str(")rt_nil_check(", 14)), F->base_517), rt_str("))", 2)));
ret_:

  return;
}

static int f_is_object_522(struct f_greenc_1fr *up_, P164 e_521) {
  struct f_is_object_522fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_521 = e_521;
F->y_1349 = NULL;
if (((*(P164)rt_nil_check(F->e_521)).kind_ == ((rt_int)5LL))) {
F->y_1349 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_521)).name_)));
F->result_ = ((F->y_1349 != NULL) && (((*(P111)rt_nil_check(F->y_1349)).kind_ == ((rt_int)1LL)) || ((*(P111)rt_nil_check(F->y_1349)).kind_ == ((rt_int)2LL))));
goto ret_;
} else if (((*(P164)rt_nil_check(F->e_521)).kind_ == ((rt_int)9LL))) {
F->result_ = f_is_object_522(F->up, (*(P164)rt_nil_check(F->e_521)).a_);
goto ret_;
} else if (((*(P164)rt_nil_check(F->e_521)).kind_ == ((rt_int)8LL))) {
if ((((*(P164)rt_nil_check(F->e_521)).b_ != NULL) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_521)).b_)).kind_ == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_522(F->up, (*(P164)rt_nil_check(F->e_521)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_528(struct f_greenc_1fr *up_, P164 e_523, P134 *code_out_524, P116 *t_525, P171 *c_526, int *ro_527) {
  struct f_lvalue_528fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_523 = e_523;
F->code_out_524 = code_out_524;
F->t_525 = t_525;
F->c_526 = c_526;
F->ro_527 = ro_527;
F->y_1350 = NULL;
F->base_1351 = NULL;
F->bt_1352 = NULL;
F->bc_1353 = NULL;
if ((((*(P164)rt_nil_check(F->e_523)).kind_ == ((rt_int)5LL)) || (((*(P164)rt_nil_check(F->e_523)).kind_ == ((rt_int)9LL)) && f_is_package_643(F->up, (*(P164)rt_nil_check(F->e_523)).a_)))) {
if (((*(P164)rt_nil_check(F->e_523)).kind_ == ((rt_int)9LL))) {
F->y_1350 = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_523)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_523)).name_)), (*(P164)rt_nil_check(F->e_523)).line_);
} else {
F->y_1350 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_523)).name_)));
}
if ((F->y_1350 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_523)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_523)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P111)rt_nil_check(F->y_1350)).kind_ != ((rt_int)1LL)) && ((*(P111)rt_nil_check(F->y_1350)).kind_ != ((rt_int)2LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_523)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_523)).name_)), rt_str(" is not an object", 17)));
}
f_access_of_511(F->up, F->y_1350, &(*F->code_out_524));
(*F->t_525) = (*(P111)rt_nil_check(F->y_1350)).t_;
(*F->c_526) = (*(P111)rt_nil_check(F->y_1350)).c_;
(*F->ro_527) = (*(P111)rt_nil_check(F->y_1350)).ro_;
} else if (((*(P164)rt_nil_check(F->e_523)).kind_ == ((rt_int)15LL))) {
f_lvalue_528(F->up, (*(P164)rt_nil_check(F->e_523)).a_, &(*F->code_out_524), &(*F->t_525), &(*F->c_526), &(*F->ro_527));
} else if (((*(P164)rt_nil_check(F->e_523)).kind_ == ((rt_int)9LL))) {
f_lvalue_528(F->up, (*(P164)rt_nil_check(F->e_523)).a_, &F->base_1351, &F->bt_1352, &F->bc_1353, &(*F->ro_527));
f_select_on_536(F->up, (*(P134)rt_nil_check(F->base_1351)), F->bt_1352, F->e_523, &(*F->ro_527), &(*F->code_out_524), &(*F->t_525), &(*F->c_526));
} else if (((*(P164)rt_nil_check(F->e_523)).kind_ == ((rt_int)8LL))) {
f_lvalue_528(F->up, (*(P164)rt_nil_check(F->e_523)).a_, &F->base_1351, &F->bt_1352, &F->bc_1353, &(*F->ro_527));
f_index_on_545(F->up, (*(P134)rt_nil_check(F->base_1351)), F->bt_1352, F->e_523, &(*F->ro_527), 1, &(*F->code_out_524), &(*F->t_525), &(*F->c_526));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_523)).line_, rt_str("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_536(struct f_greenc_1fr *up_, rstr base_529, P116 bt_530, P164 e_531, int *ro_532, P134 *code_out_533, P116 *t_534, P171 *c_535) {
  struct f_select_on_536fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_529 = rt_str_copy(base_529);
F->bt_530 = bt_530;
F->e_531 = e_531;
F->ro_532 = ro_532;
F->code_out_533 = code_out_533;
F->t_534 = t_534;
F->c_535 = c_535;
F->f_1354 = NULL;
F->d_1355 = NULL;
(*F->c_535) = F->up->no_cons_173;
if (((*(P116)rt_nil_check(F->bt_530)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_419(F->up, F->bt_530);
f_deref_520(F->up, F->base_529, F->bt_530, &F->d_1355);
(*F->ro_532) = 0;
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_531)).name_)), rt_str("ALL", 3))) {
(*F->code_out_533) = F->d_1355;
(*F->t_534) = (*(P116)rt_nil_check(F->bt_530)).target_;
goto ret_;
}
f_select_on_536(F->up, (*(P134)rt_nil_check(F->d_1355)), (*(P116)rt_nil_check(F->bt_530)).target_, F->e_531, &(*F->ro_532), &(*F->code_out_533), &(*F->t_534), &(*F->c_535));
goto ret_;
}
if (((*(P116)rt_nil_check(F->bt_530)).kind_ == ((rt_int)7LL))) {
if (((*(P116)rt_nil_check(F->bt_530)).priv_ && (!f_inside_package_649(F->up, (*(P116)rt_nil_check(F->bt_530)).decl_)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_531)).line_, rt_str_cat(rt_str_cat(rt_str("the components of private type ", 31), f_kind_name_387(F->up, F->bt_530)), rt_str(" are not visible here (RM79 7.4)", 32)));
}
F->f_1354 = (*(P116)rt_nil_check(F->bt_530)).fields_;
while ((F->f_1354 != NULL)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1354)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_531)).name_)))) {
(*F->c_535) = (*(P1135)rt_nil_check(F->f_1354)).c_;
(*F->code_out_533) = f_mk_190(F->up, rt_str_cat(rt_str_catc(F->base_529, 46), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_531)).name_)))));
(*F->t_534) = (*(P1135)rt_nil_check(F->f_1354)).t_;
goto ret_;
}
F->f_1354 = (*(P1135)rt_nil_check(F->f_1354)).next_;
}
L_end_1356: ;
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_531)).line_, rt_str_cat(rt_str_cat(f_kind_name_387(F->up, F->bt_530), rt_str(" has no component ", 18)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_531)).name_))));
}
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_531)).line_, rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_531)).name_))), rt_str(" here", 5)));
ret_:

  return;
}

static void f_index_on_545(struct f_greenc_1fr *up_, rstr base_537, P116 bt_538, P164 e_539, int *ro_540, int lv_541, P134 *code_out_542, P116 *t_543, P171 *c_544) {
  struct f_index_on_545fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_537 = rt_str_copy(base_537);
F->bt_538 = bt_538;
F->e_539 = e_539;
F->ro_540 = ro_540;
F->lv_541 = lv_541;
F->code_out_542 = code_out_542;
F->t_543 = t_543;
F->c_544 = c_544;
F->a_1357 = NULL;
F->a_1357 = (*(P164)rt_nil_check(F->e_539)).b_;
F->it_1358 = NULL;
F->i_1359 = NULL;
F->lo_1360 = NULL;
F->hi_1361 = NULL;
F->d_1362 = NULL;
(*F->c_544) = F->up->no_cons_173;
if (((*(P116)rt_nil_check(F->bt_538)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_419(F->up, F->bt_538);
f_deref_520(F->up, F->base_537, F->bt_538, &F->d_1362);
(*F->ro_540) = 0;
f_index_on_545(F->up, (*(P134)rt_nil_check(F->d_1362)), (*(P116)rt_nil_check(F->bt_538)).target_, F->e_539, &(*F->ro_540), F->lv_541, &(*F->code_out_542), &(*F->t_543), &(*F->c_544));
goto ret_;
}
if ((((f_list_len_262(F->up, F->a_1357) == ((rt_int)2LL)) && ((*(P116)rt_nil_check(F->bt_538)).kind_ == ((rt_int)6LL))) && ((*(P116)rt_nil_check(F->bt_538)).idx2_ != NULL))) {
f_gexpr_566(F->up, F->a_1357, (*(P116)rt_nil_check(F->bt_538)).idx_, &F->it_1358, &F->i_1359);
f_check_type_391(F->up, F->it_1358, (*(P116)rt_nil_check(F->bt_538)).idx_, (*(P164)rt_nil_check(F->e_539)).line_);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->a_1357)).next_, (*(P116)rt_nil_check(F->bt_538)).idx2_, &F->it_1358, &F->d_1362);
f_check_type_391(F->up, F->it_1358, (*(P116)rt_nil_check(F->bt_538)).idx2_, (*(P164)rt_nil_check(F->e_539)).line_);
(*F->code_out_542) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_537, rt_str(".p[(rt_index(", 13)), (*(P134)rt_nil_check(F->i_1359))), rt_str(", ", 2)), F->base_537), rt_str(".lo, ", 5)), F->base_537), rt_str(".hi) - ", 7)), F->base_537), rt_str(".lo) * (", 8)), F->base_537), rt_str(".hi2 - ", 7)), F->base_537), rt_str(".lo2 + 1) + rt_index(", 21)), (*(P134)rt_nil_check(F->d_1362))), rt_str(", ", 2)), F->base_537), rt_str(".lo2, ", 6)), F->base_537), rt_str(".hi2) - ", 8)), F->base_537), rt_str(".lo2]", 5)));
(*F->t_543) = (*(P116)rt_nil_check(F->bt_538)).elem_;
(*F->c_544) = (*(P116)rt_nil_check(F->bt_538)).elemcons_;
goto ret_;
}
if ((f_list_len_262(F->up, F->a_1357) != ((rt_int)1LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_539)).line_, rt_str("one index expected", 18));
}
if (((*(P116)rt_nil_check(F->bt_538)).kind_ == ((rt_int)5LL))) {
if (((*(P164)rt_nil_check(F->a_1357)).kind_ == ((rt_int)14LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->a_1357)).a_, F->up->ty_int_150, &F->it_1358, &F->lo_1360);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->a_1357)).b_, F->up->ty_int_150, &F->it_1358, &F->hi_1361);
(*F->code_out_542) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), F->base_537), rt_str(", ", 2)), (*(P134)rt_nil_check(F->lo_1360))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->hi_1361))), 41));
(*F->t_543) = F->up->ty_string_154;
(*F->ro_540) = 1;
goto ret_;
}
f_gexpr_566(F->up, F->a_1357, F->up->ty_int_150, &F->it_1358, &F->i_1359);
(*F->t_543) = F->up->ty_char_153;
if (F->lv_541) {
(*F->code_out_542) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), F->base_537), rt_str(", ", 2)), (*(P134)rt_nil_check(F->i_1359))), rt_str("))", 2)));
} else {
(*F->code_out_542) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), F->base_537), rt_str(", ", 2)), (*(P134)rt_nil_check(F->i_1359))), 41));
(*F->ro_540) = 1;
}
goto ret_;
}
if ((((*(P116)rt_nil_check(F->bt_538)).kind_ == ((rt_int)6LL)) && ((*(P164)rt_nil_check(F->a_1357)).kind_ == ((rt_int)14LL)))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->a_1357)).a_, (*(P116)rt_nil_check(F->bt_538)).idx_, &F->it_1358, &F->lo_1360);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->a_1357)).b_, (*(P116)rt_nil_check(F->bt_538)).idx_, &F->it_1358, &F->hi_1361);
f_ctype_396(F->up, F->bt_538, &F->d_1362);
(*F->code_out_542) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P134)rt_nil_check(F->d_1362))), rt_str(" s_ = ", 6)), F->base_537), rt_str("; rt_int l_ = ", 14)), (*(P134)rt_nil_check(F->lo_1360))), rt_str(", h_ = ", 7)), (*(P134)rt_nil_check(F->hi_1361))), rt_str("; if (l_ <= h_) { rt_index(l_, s_.lo, s_.hi); rt_index(h_, s_.lo, s_.hi); }", 75)), rt_str(" s_.p += l_ - s_.lo; s_.lo = l_; s_.hi = h_; s_; })", 51)));
(*F->t_543) = F->bt_538;
(*F->ro_540) = 1;
goto ret_;
}
if (((*(P116)rt_nil_check(F->bt_538)).kind_ == ((rt_int)6LL))) {
f_gexpr_566(F->up, F->a_1357, (*(P116)rt_nil_check(F->bt_538)).idx_, &F->it_1358, &F->i_1359);
f_check_type_391(F->up, F->it_1358, (*(P116)rt_nil_check(F->bt_538)).idx_, (*(P164)rt_nil_check(F->e_539)).line_);
(*F->code_out_542) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_537, rt_str(".p[rt_index(", 12)), (*(P134)rt_nil_check(F->i_1359))), rt_str(", ", 2)), F->base_537), rt_str(".lo, ", 5)), F->base_537), rt_str(".hi) - ", 7)), F->base_537), rt_str(".lo]", 4)));
(*F->t_543) = (*(P116)rt_nil_check(F->bt_538)).elem_;
(*F->c_544) = (*(P116)rt_nil_check(F->bt_538)).elemcons_;
goto ret_;
}
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_539)).line_, rt_str("cannot index this", 17));
ret_:

  return;
}

static int f_is_char_lit_547(struct f_greenc_1fr *up_, P164 e_546) {
  struct f_is_char_lit_547fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_546 = e_546;
F->result_ = (((*(P164)rt_nil_check(F->e_546)).kind_ == ((rt_int)3LL)) && (((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_546)).name_))).len == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_549(struct f_greenc_1fr *up_, P164 e_548) {
  struct f_is_enum_lit_549fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_548 = e_548;
F->y_1363 = NULL;
if (((*(P164)rt_nil_check(F->e_548)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1363 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_548)).name_)));
F->result_ = ((F->y_1363 != NULL) && ((*(P111)rt_nil_check(F->y_1363)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_string_551(struct f_greenc_1fr *up_, rstr s_550) {
  struct f_c_string_551fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_550 = rt_str_copy(s_550);
F->n_1364 = ((rt_int)0LL);
{ rt_int lo1367 = ((rt_int)1LL), hi1368 = (F->s_550).len;
for (rt_int it1369 = lo1367; it1369 <= hi1368; it1369++) {
F->i_1366 = it1369;
if ((((rt_str_get(F->s_550, F->i_1366) == 34) || (rt_str_get(F->s_550, F->i_1366) == 92)) || (rt_str_get(F->s_550, F->i_1366) == 63))) {
F->n_1364 = rt_add(F->n_1364, ((rt_int)1LL));
}
}
}
L_end_1365: ;
{
F->r_1371 = rt_str_new((rt_add(rt_add((F->s_550).len, F->n_1364), ((rt_int)2LL)) - ((rt_int)1LL) + 1));
F->j_1372 = ((rt_int)1LL);
(*rt_str_at(&F->r_1371, ((rt_int)1LL))) = 34;
{ rt_int lo1375 = ((rt_int)1LL), hi1376 = (F->s_550).len;
for (rt_int it1377 = lo1375; it1377 <= hi1376; it1377++) {
F->i_1374 = it1377;
F->j_1372 = rt_add(F->j_1372, ((rt_int)1LL));
if ((((rt_str_get(F->s_550, F->i_1374) == 34) || (rt_str_get(F->s_550, F->i_1374) == 92)) || (rt_str_get(F->s_550, F->i_1374) == 63))) {
(*rt_str_at(&F->r_1371, F->j_1372)) = 92;
F->j_1372 = rt_add(F->j_1372, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1371, F->j_1372)) = rt_str_get(F->s_550, F->i_1374);
}
}
L_end_1373: ;
(*rt_str_at(&F->r_1371, rt_add(F->j_1372, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1371;
goto ret_;

}
L_end_1370: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_553(struct f_greenc_1fr *up_, P164 e_552) {
  struct f_is_literal_553fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_552 = e_552;
if (((((*(P164)rt_nil_check(F->e_552)).kind_ == ((rt_int)1LL)) || ((*(P164)rt_nil_check(F->e_552)).kind_ == ((rt_int)2LL))) || f_is_char_lit_547(F->up, F->e_552))) {
F->result_ = 1;
goto ret_;
} else if ((((*(P164)rt_nil_check(F->e_552)).kind_ == ((rt_int)15LL)) || (((*(P164)rt_nil_check(F->e_552)).kind_ == ((rt_int)6LL)) && (!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_552)).name_)), rt_str("NOT", 3)))))) {
F->result_ = f_is_literal_553(F->up, (*(P164)rt_nil_check(F->e_552)).a_);
goto ret_;
} else if ((((*(P164)rt_nil_check(F->e_552)).kind_ == ((rt_int)7LL)) && (((((rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_552)).name_)), rt_str("+", 1)) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_552)).name_)), rt_str("-", 1))) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_552)).name_)), rt_str("*", 1))) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_552)).name_)), rt_str("/", 1))) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_552)).name_)), rt_str("**", 2))) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_552)).name_)), rt_str("MOD", 3))))) {
F->result_ = (f_is_literal_553(F->up, (*(P164)rt_nil_check(F->e_552)).a_) && f_is_literal_553(F->up, (*(P164)rt_nil_check(F->e_552)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_561(struct f_greenc_1fr *up_, P164 l_554, P164 h_555, P116 want_556, rt_int line_557, P116 *t_558, P134 *lo_559, P134 *hi_560) {
  struct f_range_bounds_561fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_554 = l_554;
F->h_555 = h_555;
F->want_556 = want_556;
F->line_557 = line_557;
F->t_558 = t_558;
F->lo_559 = lo_559;
F->hi_560 = hi_560;
F->w_1378 = NULL;
F->w_1378 = F->want_556;
F->t2_1379 = NULL;
if ((((F->w_1378 == NULL) && f_is_char_lit_547(F->up, F->l_554)) && f_is_char_lit_547(F->up, F->h_555))) {
F->w_1378 = F->up->ty_char_153;
}
if ((((F->w_1378 == NULL) && f_is_literal_553(F->up, F->l_554)) && (!f_is_literal_553(F->up, F->h_555)))) {
f_gexpr_566(F->up, F->h_555, NULL, &(*F->t_558), &(*F->hi_560));
f_gexpr_566(F->up, F->l_554, (*F->t_558), &F->t2_1379, &(*F->lo_559));
f_check_type_391(F->up, F->t2_1379, (*F->t_558), F->line_557);
} else {
f_gexpr_566(F->up, F->l_554, F->w_1378, &(*F->t_558), &(*F->lo_559));
f_gexpr_566(F->up, F->h_555, (*F->t_558), &F->t2_1379, &(*F->hi_560));
f_check_type_391(F->up, F->t2_1379, (*F->t_558), F->line_557);
}
ret_:

  return;
}

static void f_gexpr_566(struct f_greenc_1fr *up_, P164 e_562, P116 want_563, P116 *t_564, P134 *r_565) {
  struct f_gexpr_566fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_562 = e_562;
F->want_563 = want_563;
F->t_564 = t_564;
F->r_565 = r_565;
F->y_1380 = NULL;
F->bt_1381 = NULL;
F->c_1382 = NULL;
F->base_1384 = NULL;
F->a_1385 = NULL;
F->nm_1386 = NULL;
F->saved_lv_1387 = F->up->in_lv_path_182;
F->up->in_lv_path_182 = 0;
f_gexpr_1_571(F->up, F->e_562, F->want_563, &(*F->t_564), &(*F->r_565));
F->up->in_lv_path_182 = F->saved_lv_1387;
ret_:

  return;
}

static void f_gexpr_1_571(struct f_greenc_1fr *up_, P164 e_567, P116 want_568, P116 *t_569, P134 *r_570) {
  struct f_gexpr_1_571fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_567 = e_567;
F->want_568 = want_568;
F->t_569 = t_569;
F->r_570 = r_570;
F->y_1388 = NULL;
F->bt_1389 = NULL;
F->c_1390 = NULL;
F->base_1392 = NULL;
F->a_1393 = NULL;
F->nm_1394 = NULL;
(*F->t_569) = F->up->ty_int_150;
{ rt_int sel1395 = (*(P164)rt_nil_check(F->e_567)).kind_;
if (0 || sel1395 == ((rt_int)1LL)) {
(*F->r_570) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P164)rt_nil_check(F->e_567)).ival_)), rt_str("LL)", 3)));
} else if (0 || sel1395 == ((rt_int)2LL)) {
(*F->t_569) = F->up->ty_float_152;
(*F->r_570) = (*(P164)rt_nil_check(F->e_567)).name_;
} else if (0 || sel1395 == ((rt_int)3LL)) {
if (((f_is_char_lit_547(F->up, F->e_567) && (F->want_568 != NULL)) && (((*(P116)rt_nil_check(F->want_568)).kind_ == ((rt_int)11LL)) || ((*(P116)rt_nil_check(F->want_568)).kind_ == ((rt_int)4LL))))) {
f_char_literal_576(F->up, F->e_567, F->want_568, &(*F->t_569), &(*F->r_570));
} else {
(*F->t_569) = F->up->ty_string_154;
(*F->r_570) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_551(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_567)).name_)))), rt_str(", ", 2)), rt_str_of_int(((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_567)).name_))).len)), 41));
}
} else if (0 || sel1395 == ((rt_int)4LL)) {
(*F->t_569) = F->up->ty_nil_156;
(*F->r_570) = f_mk_190(F->up, rt_str("NULL", 4));
} else if (0 || sel1395 == ((rt_int)15LL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_567)).a_, F->want_568, &(*F->t_569), &(*F->r_570));
} else if (0 || sel1395 == ((rt_int)5LL)) {
f_gen_name_581(F->up, F->e_567, F->want_568, &(*F->t_569), &(*F->r_570));
} else if (0 || sel1395 == ((rt_int)6LL)) {
f_gen_unop_586(F->up, F->e_567, F->want_568, &(*F->t_569), &(*F->r_570));
} else if (0 || sel1395 == ((rt_int)7LL)) {
f_gen_binop_591(F->up, F->e_567, F->want_568, &(*F->t_569), &(*F->r_570));
} else if (0 || sel1395 == ((rt_int)8LL)) {
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1388 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).name_)));
if (((F->y_1388 == NULL) || ((((*(P111)rt_nil_check(F->y_1388)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_1388)).kind_ == ((rt_int)4LL))) || ((*(P111)rt_nil_check(F->y_1388)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_178 = F->want_568;
f_gcall_629(F->up, F->e_567, 0, &(*F->t_569), &(*F->r_570));
goto ret_;
}
if (((*(P111)rt_nil_check(F->y_1388)).kind_ == ((rt_int)5LL))) {
f_conversion_596(F->up, F->e_567, F->y_1388, &(*F->t_569), &(*F->r_570));
goto ret_;
}
} else if ((((((((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).kind_ == ((rt_int)9LL)) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).a_)).kind_ == ((rt_int)8LL))) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_710(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).a_)).a_)).name_)))) && (f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).a_)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).name_)), (*(P164)rt_nil_check(F->e_567)).line_) != NULL)) && ((*(P111)rt_nil_check(f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).a_)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).name_)), (*(P164)rt_nil_check(F->e_567)).line_))).kind_ == ((rt_int)3LL)))) {
F->up->call_want_178 = F->want_568;
f_gcall_629(F->up, F->e_567, 0, &(*F->t_569), &(*F->r_570));
goto ret_;
} else if ((((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_643(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).a_))) {
F->y_1388 = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).name_)), (*(P164)rt_nil_check(F->e_567)).line_);
if (((F->y_1388 != NULL) && ((((*(P111)rt_nil_check(F->y_1388)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_1388)).kind_ == ((rt_int)4LL))) || ((*(P111)rt_nil_check(F->y_1388)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_178 = F->want_568;
f_gcall_629(F->up, F->e_567, 0, &(*F->t_569), &(*F->r_570));
goto ret_;
}
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_567)).a_, NULL, &F->bt_1389, &F->base_1392);
F->ro_1391 = 1;
f_index_on_545(F->up, (*(P134)rt_nil_check(F->base_1392)), F->bt_1389, F->e_567, &F->ro_1391, 0, &(*F->r_570), &(*F->t_569), &F->c_1390);
} else if (0 || sel1395 == ((rt_int)9LL)) {
if (f_is_package_643(F->up, (*(P164)rt_nil_check(F->e_567)).a_)) {
F->nm_1394 = f_nn_256(F->up, ((rt_int)5LL), (*(P164)rt_nil_check(F->e_567)).line_);
(*(P164)rt_nil_check(F->nm_1394)).name_ = (*(P164)rt_nil_check(F->e_567)).name_;
(*(P164)rt_nil_check(F->nm_1394)).tag_ = (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_567)).a_)).name_;
f_gen_name_581(F->up, F->nm_1394, F->want_568, &(*F->t_569), &(*F->r_570));
goto ret_;
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_567)).a_, NULL, &F->bt_1389, &F->base_1392);
F->ro_1391 = 1;
f_select_on_536(F->up, (*(P134)rt_nil_check(F->base_1392)), F->bt_1389, F->e_567, &F->ro_1391, &(*F->r_570), &(*F->t_569), &F->c_1390);
} else if (0 || sel1395 == ((rt_int)10LL)) {
f_gen_attr_601(F->up, F->e_567, F->want_568, &(*F->t_569), &(*F->r_570));
} else if (0 || sel1395 == ((rt_int)11LL)) {
f_allocator_615(F->up, F->e_567, F->want_568, &(*F->t_569), &(*F->r_570));
} else if (0 || sel1395 == ((rt_int)12LL)) {
f_aggregate_620(F->up, F->e_567, F->want_568, &(*F->t_569), &(*F->r_570));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_567)).line_, rt_str("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_char_literal_576(struct f_greenc_1fr *up_, P164 e_572, P116 want_573, P116 *t_574, P134 *r_575) {
  struct f_char_literal_576fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_572 = e_572;
F->want_573 = want_573;
F->t_574 = t_574;
F->r_575 = r_575;
if (((*(P116)rt_nil_check(F->want_573)).kind_ == ((rt_int)11LL))) {
(*F->t_574) = F->up->ty_char_153;
(*F->r_575) = f_mk_190(F->up, rt_str_of_int(rt_sub(((rt_int)(rt_str_get((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_572)).name_)), ((rt_int)1LL))) + 1), ((rt_int)1LL))));
goto ret_;
}
F->i_1396 = f_lit_index_404(F->up, (*(P116)rt_nil_check(F->want_573)).lits_, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_572)).name_)));
if ((F->i_1396 < ((rt_int)0LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_572)).line_, rt_str_cat(rt_str_cat(rt_str_ccat(34, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_572)).name_))), rt_str("\" is not a literal of ", 22)), f_kind_name_387(F->up, F->want_573)));
}
(*F->t_574) = F->want_573;
(*F->r_575) = f_mk_190(F->up, rt_str_of_int(F->i_1396));
ret_:

  return;
}

static void f_gen_name_581(struct f_greenc_1fr *up_, P164 e_577, P116 want_578, P116 *t_579, P134 *r_580) {
  struct f_gen_name_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_577 = e_577;
F->want_578 = want_578;
F->t_579 = t_579;
F->r_580 = r_580;
F->y_1397 = NULL;
F->y_1397 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_)));
F->z_1398 = NULL;
F->call_1399 = NULL;
if (((*(P164)rt_nil_check(F->e_577)).tag_ != NULL)) {
F->y_1397 = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).tag_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_)), (*(P164)rt_nil_check(F->e_577)).line_);
}
if ((F->y_1397 == NULL)) {
if ((rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_)), rt_str("PUT", 3)) || rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_)), rt_str("GET", 3)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_577)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_)), rt_str(" needs an item", 14)));
}
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_577)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P111)rt_nil_check(F->y_1397)).kind_ == ((rt_int)2LL)) && (*(P111)rt_nil_check(F->y_1397)).hasmv_)) {
(*F->t_579) = (*(P111)rt_nil_check(F->y_1397)).t_;
(*F->r_580) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P111)rt_nil_check(F->y_1397)).mvalue_)), rt_str("LL)", 3)));
goto ret_;
}
if ((((*(P111)rt_nil_check(F->y_1397)).kind_ == ((rt_int)1LL)) || ((*(P111)rt_nil_check(F->y_1397)).kind_ == ((rt_int)2LL)))) {
(*F->t_579) = (*(P111)rt_nil_check(F->y_1397)).t_;
f_access_of_511(F->up, F->y_1397, &(*F->r_580));
goto ret_;
}
if (((*(P111)rt_nil_check(F->y_1397)).kind_ == ((rt_int)7LL))) {
F->z_1398 = F->y_1397;
if ((F->want_578 != NULL)) {
while ((F->z_1398 != NULL)) {
if (((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->z_1398)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_))) && ((*(P111)rt_nil_check(F->z_1398)).kind_ == ((rt_int)7LL))) && f_same_371(F->up, (*(P111)rt_nil_check(F->z_1398)).t_, F->want_578))) {
goto L_end_1400;
}
F->z_1398 = (*(P111)rt_nil_check(F->z_1398)).chain_;
}
L_end_1400: ;
if ((F->z_1398 == NULL)) {
F->z_1398 = F->y_1397;
}
}
(*F->t_579) = (*(P111)rt_nil_check(F->z_1398)).t_;
(*F->r_580) = f_mk_190(F->up, rt_str_of_int((*(P111)rt_nil_check(F->z_1398)).mvalue_));
goto ret_;
}
if (((((*(P111)rt_nil_check(F->y_1397)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_1397)).kind_ == ((rt_int)4LL))) || ((*(P111)rt_nil_check(F->y_1397)).kind_ == ((rt_int)10LL)))) {
F->call_1399 = f_nn_256(F->up, ((rt_int)8LL), (*(P164)rt_nil_check(F->e_577)).line_);
(*(P164)rt_nil_check(F->call_1399)).a_ = F->e_577;
F->up->call_want_178 = F->want_578;
f_gcall_629(F->up, F->call_1399, 0, &(*F->t_579), &(*F->r_580));
goto ret_;
}
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_577)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_577)).name_)), rt_str(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_586(struct f_greenc_1fr *up_, P164 e_582, P116 want_583, P116 *t_584, P134 *r_585) {
  struct f_gen_unop_586fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_582 = e_582;
F->want_583 = want_583;
F->t_584 = t_584;
F->r_585 = r_585;
F->a_1401 = NULL;
f_user_operator_692(F->up, F->e_582, F->want_583, &(*F->t_584), &(*F->r_585), &F->done_1402);
if (F->done_1402) {
goto ret_;
}
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_582)).name_)), rt_str("NOT", 3))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_582)).a_, F->up->ty_bool_151, &(*F->t_584), &F->a_1401);
f_check_type_391(F->up, (*F->t_584), F->up->ty_bool_151, (*(P164)rt_nil_check(F->e_582)).line_);
(*F->r_585) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P134)rt_nil_check(F->a_1401))), 41));
goto ret_;
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_582)).a_, F->want_583, &(*F->t_584), &F->a_1401);
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_582)).name_)), rt_str("+", 1))) {
(*F->r_585) = F->a_1401;
} else if (((*(P116)rt_nil_check((*F->t_584))).kind_ == ((rt_int)3LL))) {
(*F->r_585) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("(-", 2), (*(P134)rt_nil_check(F->a_1401))), 41));
} else {
f_check_type_391(F->up, (*F->t_584), F->up->ty_int_150, (*(P164)rt_nil_check(F->e_582)).line_);
(*F->r_585) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_neg(", 7), (*(P134)rt_nil_check(F->a_1401))), 41));
}
ret_:

  return;
}

static void f_gen_binop_591(struct f_greenc_1fr *up_, P164 e_587, P116 want_588, P116 *t_589, P134 *r_590) {
  struct f_gen_binop_591fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_587 = e_587;
F->want_588 = want_588;
F->t_589 = t_589;
F->r_590 = r_590;
F->op_1403 = rt_str_copy((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_587)).name_)));
F->ta_1404 = NULL;
F->tb_1405 = NULL;
F->hint_1406 = NULL;
F->ct_1407 = NULL;
F->a_1408 = NULL;
F->b_1409 = NULL;
F->x_1410 = NULL;
F->dummy_1411 = NULL;
(*F->t_589) = F->up->ty_bool_151;
f_user_operator_692(F->up, F->e_587, F->want_588, &(*F->t_589), &(*F->r_590), &F->done_1412);
if (F->done_1412) {
goto ret_;
}
if (((rt_str_eq(F->op_1403, rt_str("AND", 3)) || rt_str_eq(F->op_1403, rt_str("OR", 2))) || rt_str_eq(F->op_1403, rt_str("XOR", 3)))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).a_, F->up->ty_bool_151, &F->ta_1404, &F->a_1408);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).b_, F->up->ty_bool_151, &F->tb_1405, &F->b_1409);
f_check_type_391(F->up, F->ta_1404, F->up->ty_bool_151, (*(P164)rt_nil_check(F->e_587)).line_);
f_check_type_391(F->up, F->tb_1405, F->up->ty_bool_151, (*(P164)rt_nil_check(F->e_587)).line_);
if (rt_str_eq(F->op_1403, rt_str("AND", 3))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->a_1408))), rt_str(" && ", 4)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("OR", 2))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->a_1408))), rt_str(" || ", 4)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->a_1408))), rt_str(" != ", 4)), (*(P134)rt_nil_check(F->b_1409))), 41));
}
goto ret_;
}
if (rt_str_eq(F->op_1403, rt_str("IN", 2))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).a_, NULL, &F->ta_1404, &F->a_1408);
f_gexpr_566(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_587)).b_)).a_, F->ta_1404, &F->tb_1405, &F->b_1409);
f_gexpr_566(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_587)).b_)).b_, F->ta_1404, &F->tb_1405, &F->x_1410);
(*F->r_590) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int m_ = ", 15), (*(P134)rt_nil_check(F->a_1408))), rt_str("; m_ >= ", 8)), (*(P134)rt_nil_check(F->b_1409))), rt_str(" && m_ <= ", 10)), (*(P134)rt_nil_check(F->x_1410))), rt_str("; })", 4)));
goto ret_;
}
if (rt_str_eq(F->op_1403, rt_str("&", 1))) {
if (f_is_char_lit_547(F->up, (*(P164)rt_nil_check(F->e_587)).a_)) {
F->hint_1406 = F->up->ty_char_153;
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).a_, F->hint_1406, &F->ta_1404, &F->a_1408);
F->hint_1406 = NULL;
if (f_is_char_lit_547(F->up, (*(P164)rt_nil_check(F->e_587)).b_)) {
F->hint_1406 = F->up->ty_char_153;
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).b_, F->hint_1406, &F->tb_1405, &F->b_1409);
(*F->t_589) = F->up->ty_string_154;
if ((((*(P116)rt_nil_check(F->ta_1404)).kind_ == ((rt_int)5LL)) && ((*(P116)rt_nil_check(F->tb_1405)).kind_ == ((rt_int)5LL)))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if ((((*(P116)rt_nil_check(F->ta_1404)).kind_ == ((rt_int)5LL)) && ((*(P116)rt_nil_check(F->tb_1405)).kind_ == ((rt_int)11LL)))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if ((((*(P116)rt_nil_check(F->ta_1404)).kind_ == ((rt_int)11LL)) && ((*(P116)rt_nil_check(F->tb_1405)).kind_ == ((rt_int)5LL)))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if ((((*(P116)rt_nil_check(F->ta_1404)).kind_ == ((rt_int)11LL)) && ((*(P116)rt_nil_check(F->tb_1405)).kind_ == ((rt_int)11LL)))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_587)).line_, rt_str("& catenates strings and characters", 34));
}
goto ret_;
}
if (f_is_rel_295(F->up, F->op_1403)) {
if ((((f_is_char_lit_547(F->up, (*(P164)rt_nil_check(F->e_587)).a_) || f_is_enum_lit_549(F->up, (*(P164)rt_nil_check(F->e_587)).a_)) || ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_587)).a_)).kind_ == ((rt_int)4LL))) || ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_587)).a_)).kind_ == ((rt_int)1LL)))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).b_, NULL, &F->hint_1406, &F->dummy_1411);
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).a_, F->hint_1406, &F->ta_1404, &F->a_1408);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).b_, F->ta_1404, &F->tb_1405, &F->b_1409);
F->ct_1407 = F->ta_1404;
if ((((*(P116)rt_nil_check(F->ta_1404)).kind_ != ((rt_int)10LL)) && ((*(P116)rt_nil_check(F->tb_1405)).kind_ != ((rt_int)10LL)))) {
f_check_type_391(F->up, F->tb_1405, F->ta_1404, (*(P164)rt_nil_check(F->e_587)).line_);
}
if (((*(P116)rt_nil_check(F->ta_1404)).kind_ == ((rt_int)10LL))) {
F->ct_1407 = F->tb_1405;
}
if (((*(P116)rt_nil_check(F->ct_1407)).kind_ == ((rt_int)5LL))) {
if (rt_str_eq(F->op_1403, rt_str("=", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("/=", 2))) {
(*F->r_590) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), rt_str("))", 2)));
} else if (rt_str_eq(F->op_1403, rt_str("<", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("<=", 2))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str(">", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P134)rt_nil_check(F->b_1409))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->a_1408))), 41));
} else {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P134)rt_nil_check(F->b_1409))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->a_1408))), 41));
}
goto ret_;
}
if (f_composite_425(F->up, F->ct_1407)) {
f_eq_code_440(F->up, F->ct_1407, (*(P134)rt_nil_check(F->a_1408)), (*(P134)rt_nil_check(F->b_1409)), &F->x_1410);
if (rt_str_eq(F->op_1403, rt_str("=", 1))) {
(*F->r_590) = F->x_1410;
} else if (rt_str_eq(F->op_1403, rt_str("/=", 2))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P134)rt_nil_check(F->x_1410))), 41));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_587)).line_, rt_str("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (rt_str_eq(F->op_1403, rt_str("=", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->a_1408))), rt_str(" == ", 4)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("/=", 2))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->a_1408))), rt_str(" != ", 4)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P134)rt_nil_check(F->a_1408))), 32), F->op_1403), 32), (*(P134)rt_nil_check(F->b_1409))), 41));
}
goto ret_;
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).a_, F->want_588, &F->ta_1404, &F->a_1408);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_587)).b_, F->ta_1404, &F->tb_1405, &F->b_1409);
if ((((*(P116)rt_nil_check(F->ta_1404)).kind_ == ((rt_int)3LL)) || ((*(P116)rt_nil_check(F->tb_1405)).kind_ == ((rt_int)3LL)))) {
(*F->t_589) = F->up->ty_float_152;
if (rt_str_eq(F->op_1403, rt_str("+", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fadd(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1403, rt_str("-", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fsub(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1403, rt_str("*", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fmul(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1403, rt_str("/", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fdiv(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1403, rt_str("**", 2))) {
(*F->r_590) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fpow(", 10), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), rt_str(", 0)", 4)));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_587)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1403), rt_str(" is not defined for FLOAT", 25)));
}
goto ret_;
}
f_check_type_391(F->up, F->ta_1404, F->up->ty_int_150, (*(P164)rt_nil_check(F->e_587)).line_);
f_check_type_391(F->up, F->tb_1405, F->up->ty_int_150, (*(P164)rt_nil_check(F->e_587)).line_);
(*F->t_589) = F->up->ty_int_150;
if (rt_str_eq(F->op_1403, rt_str("+", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("-", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("*", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("/", 1))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_quot(", 8), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("MOD", 3))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_rem(", 7), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else if (rt_str_eq(F->op_1403, rt_str("**", 2))) {
(*F->r_590) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), (*(P134)rt_nil_check(F->a_1408))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->b_1409))), 41));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_587)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1403), rt_str(" is not defined for INTEGER", 27)));
}
ret_:

  return;
}

static void f_conversion_596(struct f_greenc_1fr *up_, P164 e_592, P111 y_593, P116 *t_594, P134 *r_595) {
  struct f_conversion_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_592 = e_592;
F->y_593 = y_593;
F->t_594 = t_594;
F->r_595 = r_595;
F->aty_1413 = NULL;
F->a_1414 = NULL;
if ((f_list_len_262(F->up, (*(P164)rt_nil_check(F->e_592)).b_) != ((rt_int)1LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_592)).line_, rt_str("a conversion takes one expression", 33));
}
(*F->t_594) = (*(P111)rt_nil_check(F->y_593)).t_;
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_592)).b_, (*F->t_594), &F->aty_1413, &F->a_1414);
if ((((*(P116)rt_nil_check((*F->t_594))).kind_ == ((rt_int)1LL)) && ((*(P116)rt_nil_check(F->aty_1413)).kind_ == ((rt_int)3LL)))) {
(*F->r_595) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)llround(", 17), (*(P134)rt_nil_check(F->a_1414))), rt_str("))", 2)));
} else if ((((*(P116)rt_nil_check((*F->t_594))).kind_ == ((rt_int)3LL)) && ((*(P116)rt_nil_check(F->aty_1413)).kind_ == ((rt_int)1LL)))) {
(*F->r_595) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("((double)(", 10), (*(P134)rt_nil_check(F->a_1414))), rt_str("))", 2)));
} else {
f_check_type_391(F->up, F->aty_1413, (*F->t_594), (*(P164)rt_nil_check(F->e_592)).line_);
if (((((((*(P116)rt_nil_check((*F->t_594))).kind_ == ((rt_int)1LL)) || ((*(P116)rt_nil_check((*F->t_594))).kind_ == ((rt_int)4LL))) || ((*(P116)rt_nil_check((*F->t_594))).kind_ == ((rt_int)11LL))) && ((*(P111)rt_nil_check(F->y_593)).c_ != NULL)) && ((*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_593)).c_)).lo_ != NULL))) {
(*F->r_595) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P134)rt_nil_check(F->a_1414))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_593)).c_)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_593)).c_)).hi_))), 41));
} else {
(*F->r_595) = F->a_1414;
}
}
ret_:

  return;
}

static void f_gen_attr_601(struct f_greenc_1fr *up_, P164 e_597, P116 want_598, P116 *t_599, P134 *r_600) {
  struct f_gen_attr_601fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_597 = e_597;
F->want_598 = want_598;
F->t_599 = t_599;
F->r_600 = r_600;
F->a_1415 = rt_str_copy((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_597)).name_)));
F->y_1416 = NULL;
F->tt_1417 = NULL;
F->aty_1418 = NULL;
F->v_1419 = NULL;
F->d_1420 = NULL;
F->c_1421 = NULL;
if (((((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).kind_ == ((rt_int)8LL)) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_710(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).a_)).name_))))) {
f_member_attr_776(F->up, F->e_597, &(*F->t_599), &(*F->r_600));
goto ret_;
}
if (rt_str_eq(F->a_1415, rt_str("ADDRESS", 7))) {
f_lvalue_528(F->up, (*(P164)rt_nil_check(F->e_597)).a_, &F->v_1419, &F->aty_1418, &F->c_1421, &F->ro_1423);
(*F->t_599) = F->up->ty_int_150;
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(intptr_t)&(", 21), (*(P134)rt_nil_check(F->v_1419))), rt_str("))", 2)));
goto ret_;
}
if (((rt_str_eq(F->a_1415, rt_str("COUNT", 5)) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).kind_ == ((rt_int)8LL))) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->y_1416 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).a_)).name_)));
if ((((F->y_1416 != NULL) && ((*(P111)rt_nil_check(F->y_1416)).kind_ == ((rt_int)10LL))) && ((*(P111)rt_nil_check(F->y_1416)).c_ != NULL))) {
if ((!f_same_task_361(F->up, (*(P111)rt_nil_check(F->y_1416)).members_, F->up->cur_task_161))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_597)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_732(F->up, F->y_1416, rt_str("", 0), &F->v_1419);
f_gexpr_566(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).b_, NULL, &F->aty_1418, &F->d_1420);
f_entry_family_slot_747(F->up, F->y_1416, (*(P134)rt_nil_check(F->v_1419)), (*(P134)rt_nil_check(F->d_1420)), &F->v_1419);
(*F->t_599) = F->up->ty_int_150;
(*F->r_600) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P134)rt_nil_check(F->v_1419))), 41));
goto ret_;
}
}
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1416 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).name_)));
if ((((F->y_1416 == NULL) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).name_)), rt_str("SYSTEM", 6))) && rt_str_eq(F->a_1415, rt_str("CLOCK", 5)))) {
(*F->t_599) = F->up->ty_float_152;
(*F->r_600) = f_mk_190(F->up, rt_str("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_1416 == NULL) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_597)).a_)).name_)), rt_str("SYSTEM", 6))) && (rt_str_eq(F->a_1415, rt_str("MAX_PRIORITY", 12)) || rt_str_eq(F->a_1415, rt_str("MIN_PRIORITY", 12))))) {
(*F->t_599) = F->up->ty_int_150;
if (rt_str_eq(F->a_1415, rt_str("MAX_PRIORITY", 12))) {
(*F->r_600) = f_mk_190(F->up, rt_str("((rt_int)255)", 13));
} else {
(*F->r_600) = f_mk_190(F->up, rt_str("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_1416 != NULL) && ((*(P111)rt_nil_check(F->y_1416)).kind_ == ((rt_int)5LL)))) {
F->tt_1417 = (*(P111)rt_nil_check(F->y_1416)).t_;
F->c_1421 = (*(P111)rt_nil_check(F->y_1416)).c_;
if (rt_str_eq(F->a_1415, rt_str("SIZE", 4))) {
f_ctype_396(F->up, F->tt_1417, &F->d_1420);
(*F->t_599) = F->up->ty_int_150;
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(sizeof(", 17), (*(P134)rt_nil_check(F->d_1420))), rt_str(") * 8))", 7)));
goto ret_;
}
if (rt_str_eq(F->a_1415, rt_str("ORD", 3))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_597)).b_, F->tt_1417, &F->aty_1418, &F->v_1419);
f_check_type_391(F->up, F->aty_1418, F->tt_1417, (*(P164)rt_nil_check(F->e_597)).line_);
(*F->t_599) = F->up->ty_int_150;
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (*(P134)rt_nil_check(F->v_1419))), rt_str(") + 1)", 6)));
goto ret_;
} else if ((rt_str_eq(F->a_1415, rt_str("VAL", 3)) || rt_str_eq(F->a_1415, rt_str("REP", 3)))) {
f_val_rep_610(F->up, F->e_597, F->tt_1417, F->c_1421, &(*F->t_599), &(*F->r_600));
goto ret_;
} else if ((rt_str_eq(F->a_1415, rt_str("SUCC", 4)) || rt_str_eq(F->a_1415, rt_str("PRED", 4)))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_597)).b_, F->tt_1417, &F->aty_1418, &F->v_1419);
(*F->t_599) = F->tt_1417;
if (((*(P116)rt_nil_check(F->tt_1417)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1415, rt_str("SUCC", 4))) {
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P134)rt_nil_check(F->v_1419))), rt_str(", 1)", 4)));
} else {
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P134)rt_nil_check(F->v_1419))), rt_str(", 1)", 4)));
}
} else if (rt_str_eq(F->a_1415, rt_str("SUCC", 4))) {
(*F->r_600) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P134)rt_nil_check(F->v_1419))), rt_str(" + 1, ", 6)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1421)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1421)).hi_))), 41));
} else {
(*F->r_600) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P134)rt_nil_check(F->v_1419))), rt_str(" - 1, ", 6)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1421)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1421)).hi_))), 41));
}
goto ret_;
} else if ((rt_str_eq(F->a_1415, rt_str("FIRST", 5)) || rt_str_eq(F->a_1415, rt_str("LAST", 4)))) {
(*F->t_599) = F->tt_1417;
if (((*(P116)rt_nil_check(F->tt_1417)).kind_ == ((rt_int)6LL))) {
(*F->t_599) = (*(P116)rt_nil_check(F->tt_1417)).idx_;
}
if (((F->c_1421 != NULL) && ((*(P171)rt_nil_check(F->c_1421)).lo_ != NULL))) {
if (rt_str_eq(F->a_1415, rt_str("FIRST", 5))) {
(*F->r_600) = (*(P171)rt_nil_check(F->c_1421)).lo_;
} else {
(*F->r_600) = (*(P171)rt_nil_check(F->c_1421)).hi_;
}
} else if (((*(P116)rt_nil_check(F->tt_1417)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1415, rt_str("FIRST", 5))) {
(*F->r_600) = f_mk_190(F->up, rt_str("INT64_MIN", 9));
} else {
(*F->r_600) = f_mk_190(F->up, rt_str("INT64_MAX", 9));
}
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_597)).line_, rt_str_cat(rt_str("this type has no ", 17), F->a_1415));
}
goto ret_;
}
f_other_attr_772(F->up, F->e_597, F->y_1416, &(*F->t_599), &(*F->r_600));
goto ret_;
}
if (((F->y_1416 != NULL) && (((*(P111)rt_nil_check(F->y_1416)).kind_ != ((rt_int)1LL)) && ((*(P111)rt_nil_check(F->y_1416)).kind_ != ((rt_int)2LL))))) {
f_other_attr_772(F->up, F->e_597, F->y_1416, &(*F->t_599), &(*F->r_600));
goto ret_;
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_597)).a_, NULL, &F->tt_1417, &F->v_1419);
if (((*(P116)rt_nil_check(F->tt_1417)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_419(F->up, F->tt_1417);
f_deref_520(F->up, (*(P134)rt_nil_check(F->v_1419)), F->tt_1417, &F->d_1420);
F->v_1419 = F->d_1420;
F->tt_1417 = (*(P116)rt_nil_check(F->tt_1417)).target_;
}
(*F->t_599) = F->up->ty_int_150;
if (((*(P116)rt_nil_check(F->tt_1417)).kind_ == ((rt_int)5LL))) {
if ((rt_str_eq(F->a_1415, rt_str("LENGTH", 6)) || rt_str_eq(F->a_1415, rt_str("LAST", 4)))) {
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->v_1419))), rt_str(").len", 5)));
goto ret_;
} else if (rt_str_eq(F->a_1415, rt_str("FIRST", 5))) {
(*F->r_600) = f_mk_190(F->up, rt_str("((rt_int)1)", 11));
goto ret_;
}
} else if (((*(P116)rt_nil_check(F->tt_1417)).kind_ == ((rt_int)6LL))) {
(*F->t_599) = (*(P116)rt_nil_check(F->tt_1417)).idx_;
if (rt_str_eq(F->a_1415, rt_str("FIRST", 5))) {
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->v_1419))), rt_str(").lo", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1415, rt_str("LAST", 4))) {
(*F->r_600) = f_mk_190(F->up, rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->v_1419))), rt_str(").hi", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1415, rt_str("LENGTH", 6))) {
(*F->t_599) = F->up->ty_int_150;
(*F->r_600) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("RT_CNT(", 7), (*(P134)rt_nil_check(F->v_1419))), 41));
goto ret_;
}
}
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_597)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1415), rt_str(" is not handled here", 20)));
ret_:

  return;
}

static void f_lit_table_604(struct f_greenc_1fr *up_, P116 t_602, P134 *r_603) {
  struct f_lit_table_604fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_602 = t_602;
F->r_603 = r_603;
F->l_1424 = NULL;
F->l_1424 = (*(P116)rt_nil_check(F->t_602)).lits_;
F->s_1425 = NULL;
F->s_1425 = f_mk_190(F->up, rt_str("", 0));
if (((*(P116)rt_nil_check(F->t_602)).littab_ == NULL)) {
f_new_name_193(F->up, rt_str("lits", 4), &(*(P116)rt_nil_check(F->t_602)).littab_);
while ((F->l_1424 != NULL)) {
if ((((*(P134)rt_nil_check(F->s_1425))).len > ((rt_int)0LL))) {
F->s_1425 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->s_1425)), rt_str(", ", 2)));
}
if (((*(P164)rt_nil_check(F->l_1424)).kind_ == ((rt_int)3LL))) {
F->s_1425 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->s_1425)), f_c_string_551(F->up, rt_str_cat(rt_str_cat(f_q_208(F->up), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->l_1424)).name_))), f_q_208(F->up)))));
} else {
F->s_1425 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->s_1425)), f_c_string_551(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->l_1424)).name_)))));
}
F->l_1424 = (*(P164)rt_nil_check(F->l_1424)).next_;
}
L_end_1426: ;
f_put_to_215(F->up, F->up->out_types_122, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (*(P134)rt_nil_check((*(P116)rt_nil_check(F->t_602)).littab_))), rt_str("[] = {", 6)), (*(P134)rt_nil_check(F->s_1425))), rt_str("};", 2)));
}
(*F->r_603) = (*(P116)rt_nil_check(F->t_602)).littab_;
ret_:

  return;
}

static void f_val_rep_610(struct f_greenc_1fr *up_, P164 e_605, P116 tt_606, P171 c_607, P116 *t_608, P134 *r_609) {
  struct f_val_rep_610fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_605 = e_605;
F->tt_606 = tt_606;
F->c_607 = c_607;
F->t_608 = t_608;
F->r_609 = r_609;
F->aty_1427 = NULL;
F->v_1428 = NULL;
F->lt_1429 = NULL;
if (((*(P164)rt_nil_check(F->e_605)).b_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_605)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_605)).name_))), rt_str(" takes an argument", 18)));
}
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_605)).name_)), rt_str("REP", 3))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_605)).b_, F->tt_606, &F->aty_1427, &F->v_1428);
f_check_type_391(F->up, F->aty_1427, F->tt_606, (*(P164)rt_nil_check(F->e_605)).line_);
(*F->t_608) = F->up->ty_string_154;
if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)1LL))) {
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_of_int(", 14), (*(P134)rt_nil_check(F->v_1428))), 41));
} else if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)3LL))) {
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_image_float(", 17), (*(P134)rt_nil_check(F->v_1428))), 41));
} else if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)2LL))) {
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_bool_rep(", 14), (*(P134)rt_nil_check(F->v_1428))), 41));
} else if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)11LL))) {
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_char_rep(", 14), (*(P134)rt_nil_check(F->v_1428))), 41));
} else if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)4LL))) {
f_lit_table_604(F->up, F->tt_606, &F->lt_1429);
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_enum_rep(", 14), (*(P134)rt_nil_check(F->v_1428))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->lt_1429))), rt_str(", ", 2)), rt_str_of_int(f_list_len_262(F->up, (*(P116)rt_nil_check(F->tt_606)).lits_))), 41));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_605)).line_, rt_str("REP is an attribute of scalar types", 35));
}
goto ret_;
}
(*F->t_608) = F->tt_606;
if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)1LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_605)).b_, F->up->ty_string_154, &F->aty_1427, &F->v_1428);
f_check_type_391(F->up, F->aty_1427, F->up->ty_string_154, (*(P164)rt_nil_check(F->e_605)).line_);
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_int_of_str(", 14), (*(P134)rt_nil_check(F->v_1428))), 41));
if (((F->c_607 != NULL) && ((*(P171)rt_nil_check(F->c_607)).lo_ != NULL))) {
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P134)rt_nil_check((*F->r_609)))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_607)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_607)).hi_))), 41));
}
} else if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)3LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_605)).b_, F->up->ty_string_154, &F->aty_1427, &F->v_1428);
f_check_type_391(F->up, F->aty_1427, F->up->ty_string_154, (*(P164)rt_nil_check(F->e_605)).line_);
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_float_val(", 15), (*(P134)rt_nil_check(F->v_1428))), 41));
} else if (((((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)2LL)) || ((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)11LL))) || ((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)4LL)))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_605)).b_, NULL, &F->aty_1427, &F->v_1428);
if (((*(P116)rt_nil_check(F->aty_1427)).kind_ == ((rt_int)5LL))) {
if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)2LL))) {
F->v_1428 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_bool_val(", 14), (*(P134)rt_nil_check(F->v_1428))), 41));
} else if (((*(P116)rt_nil_check(F->tt_606)).kind_ == ((rt_int)11LL))) {
F->v_1428 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_char_val(", 14), (*(P134)rt_nil_check(F->v_1428))), 41));
} else {
f_lit_table_604(F->up, F->tt_606, &F->lt_1429);
F->v_1428 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_enum_val(", 14), (*(P134)rt_nil_check(F->v_1428))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->lt_1429))), rt_str(", ", 2)), rt_str_of_int(f_list_len_262(F->up, (*(P116)rt_nil_check(F->tt_606)).lits_))), 41));
}
} else {
f_check_type_391(F->up, F->aty_1427, F->up->ty_int_150, (*(P164)rt_nil_check(F->e_605)).line_);
F->v_1428 = f_mk_190(F->up, rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->v_1428))), rt_str(" - 1)", 5)));
}
(*F->r_609) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P134)rt_nil_check(F->v_1428))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_607)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_607)).hi_))), 41));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_605)).line_, rt_str("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_615(struct f_greenc_1fr *up_, P164 e_611, P116 want_612, P116 *t_613, P134 *r_614) {
  struct f_allocator_615fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_611 = e_611;
F->want_612 = want_612;
F->t_613 = t_613;
F->r_614 = r_614;
F->y_1431 = NULL;
F->y_1431 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_611)).name_)));
F->target_1432 = NULL;
F->vt_1433 = NULL;
F->ct_1434 = NULL;
F->pt_1435 = NULL;
F->cell_1436 = NULL;
F->v_1437 = NULL;
F->x_1438 = NULL;
if (((F->want_612 == NULL) || ((*(P116)rt_nil_check(F->want_612)).kind_ != ((rt_int)8LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_611)).line_, rt_str("the access type of this allocator is not known here", 51));
}
if (((F->y_1431 == NULL) || ((*(P111)rt_nil_check(F->y_1431)).kind_ != ((rt_int)5LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_611)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_611)).name_)), rt_str(" is not a type", 14)));
}
f_finish_ptr_419(F->up, F->want_612);
F->target_1432 = (*(P116)rt_nil_check(F->want_612)).target_;
if ((!f_same_371(F->up, (*(P111)rt_nil_check(F->y_1431)).t_, F->want_612))) {
f_check_type_391(F->up, (*(P111)rt_nil_check(F->y_1431)).t_, F->target_1432, (*(P164)rt_nil_check(F->e_611)).line_);
}
f_ctype_396(F->up, F->target_1432, &F->ct_1434);
f_ctype_396(F->up, F->want_612, &F->pt_1435);
f_new_name_193(F->up, rt_str("cell", 4), &F->cell_1436);
if (((*(P164)rt_nil_check(F->e_611)).a_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_611)).line_, rt_str("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_179 != NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_611)).line_, rt_str("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_611)).a_)).kind_ == ((rt_int)12LL))) {
f_aggregate_620(F->up, (*(P164)rt_nil_check(F->e_611)).a_, F->target_1432, &F->vt_1433, &F->v_1437);
} else {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->e_611)).a_, F->target_1432, &F->vt_1433, &F->v_1437);
}
f_check_type_391(F->up, F->vt_1433, F->target_1432, (*(P164)rt_nil_check(F->e_611)).line_);
f_copy_code_435(F->up, F->target_1432, (*(P134)rt_nil_check(F->v_1437)), &F->x_1438);
(*F->t_613) = F->want_612;
(*F->r_614) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P134)rt_nil_check(F->ct_1434))), rt_str(" *", 2)), (*(P134)rt_nil_check(F->cell_1436))), rt_str(" = rt_alloc(sizeof(", 19)), (*(P134)rt_nil_check(F->ct_1434))), rt_str(")); *", 5)), (*(P134)rt_nil_check(F->cell_1436))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->x_1438))), rt_str("; (", 3)), (*(P134)rt_nil_check(F->pt_1435))), 41), (*(P134)rt_nil_check(F->cell_1436))), rt_str("; })", 4)));
ret_:

  return;
}

static void f_aggregate_620(struct f_greenc_1fr *up_, P164 e_616, P116 want_617, P116 *t_618, P134 *r_619) {
  struct f_aggregate_620fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_616 = e_616;
F->want_617 = want_617;
F->t_618 = t_618;
F->r_619 = r_619;
F->it_1439 = NULL;
F->it_1439 = (*(P164)rt_nil_check(F->e_616)).a_;
F->f_1440 = NULL;
F->vt_1441 = NULL;
F->ct_1442 = NULL;
F->tmp_1443 = NULL;
F->v_1444 = NULL;
F->x_1445 = NULL;
F->parts_1446 = NULL;
F->et_1447 = NULL;
F->lo_1448 = NULL;
F->hi_1449 = NULL;
F->key_1450 = NULL;
F->fill_1451 = NULL;
F->fill_1451 = f_mk_190(F->up, rt_str("", 0));
F->lab_1453 = NULL;
if ((F->want_617 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_616)).line_, rt_str("the type of this aggregate is not known here", 44));
}
(*F->t_618) = F->want_617;
f_ctype_396(F->up, F->want_617, &F->ct_1442);
f_new_name_193(F->up, rt_str("ag", 2), &F->tmp_1443);
if (((*(P116)rt_nil_check(F->want_617)).kind_ == ((rt_int)7LL))) {
F->parts_1446 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P134)rt_nil_check(F->ct_1442))), 32), (*(P134)rt_nil_check(F->tmp_1443))), 59));
if ((f_list_len_262(F->up, F->it_1439) != f_field_count_393(F->up, F->want_617))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_616)).line_, rt_str_cat(rt_str("an aggregate gives every component of ", 38), f_kind_name_387(F->up, F->want_617)));
}
F->f_1440 = (*(P116)rt_nil_check(F->want_617)).fields_;
while ((F->it_1439 != NULL)) {
if (((*(P164)rt_nil_check(F->it_1439)).a_ != NULL)) {
F->f_1440 = (*(P116)rt_nil_check(F->want_617)).fields_;
while (((F->f_1440 != NULL) && (!(((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->it_1439)).a_)).a_)).kind_ == ((rt_int)5LL)) && rt_str_eq((*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1440)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->it_1439)).a_)).a_)).name_))))))) {
F->f_1440 = (*(P1135)rt_nil_check(F->f_1440)).next_;
}
L_end_1455: ;
if ((F->f_1440 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_616)).line_, rt_str("no such component in the aggregate", 34));
}
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->it_1439)).b_, (*(P1135)rt_nil_check(F->f_1440)).t_, &F->vt_1441, &F->v_1444);
f_check_type_391(F->up, F->vt_1441, (*(P1135)rt_nil_check(F->f_1440)).t_, (*(P164)rt_nil_check(F->e_616)).line_);
f_copy_code_435(F->up, (*(P1135)rt_nil_check(F->f_1440)).t_, (*(P134)rt_nil_check(F->v_1444)), &F->x_1445);
F->parts_1446 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->parts_1446)), 32), (*(P134)rt_nil_check(F->tmp_1443))), 46), f_c_field_207(F->up, (*(P134)rt_nil_check((*(P1135)rt_nil_check(F->f_1440)).name_)))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->x_1445))), 59));
F->it_1439 = (*(P164)rt_nil_check(F->it_1439)).next_;
if ((F->f_1440 != NULL)) {
F->f_1440 = (*(P1135)rt_nil_check(F->f_1440)).next_;
}
}
L_end_1454: ;
(*F->r_619) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->parts_1446)), 32), (*(P134)rt_nil_check(F->tmp_1443))), rt_str("; })", 4)));
goto ret_;
}
if (((*(P116)rt_nil_check(F->want_617)).kind_ != ((rt_int)6LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_616)).line_, rt_str("an aggregate builds a record or an array", 40));
}
f_ctype_396(F->up, (*(P116)rt_nil_check(F->want_617)).elem_, &F->et_1447);
if (((*(P164)rt_nil_check(F->it_1439)).a_ == NULL)) {
if ((((*(P116)rt_nil_check(F->want_617)).tcons_ != NULL) && ((*(P171)rt_nil_check((*(P116)rt_nil_check(F->want_617)).tcons_)).lo_ != NULL))) {
F->lo_1448 = (*(P171)rt_nil_check((*(P116)rt_nil_check(F->want_617)).tcons_)).lo_;
} else {
F->lo_1448 = f_mk_190(F->up, rt_str("1", 1));
}
F->n_1452 = f_list_len_262(F->up, F->it_1439);
F->parts_1446 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P134)rt_nil_check(F->ct_1442))), 32), (*(P134)rt_nil_check(F->tmp_1443))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo = ", 6)), (*(P134)rt_nil_check(F->lo_1448))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".hi = ", 6)), (*(P134)rt_nil_check(F->lo_1448))), rt_str(" + ", 3)), rt_str_of_int(rt_sub(F->n_1452, ((rt_int)1LL)))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo2 = ", 7)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".hi2 = 1; ", 10)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P134)rt_nil_check(F->et_1447))), rt_str(") * ", 4)), rt_str_of_int(rt_add(F->n_1452, ((rt_int)1LL)))), rt_str(");", 2)));
F->n_1452 = ((rt_int)0LL);
while ((F->it_1439 != NULL)) {
if (((*(P164)rt_nil_check(F->it_1439)).a_ != NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_616)).line_, rt_str("named associations follow the positional ones", 45));
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->it_1439)).b_, (*(P116)rt_nil_check(F->want_617)).elem_, &F->vt_1441, &F->v_1444);
f_check_type_391(F->up, F->vt_1441, (*(P116)rt_nil_check(F->want_617)).elem_, (*(P164)rt_nil_check(F->e_616)).line_);
f_copy_code_435(F->up, (*(P116)rt_nil_check(F->want_617)).elem_, (*(P134)rt_nil_check(F->v_1444)), &F->x_1445);
F->parts_1446 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->parts_1446)), 32), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".p[", 3)), rt_str_of_int(F->n_1452)), rt_str("] = ", 4)), (*(P134)rt_nil_check(F->x_1445))), 59));
F->n_1452 = rt_add(F->n_1452, ((rt_int)1LL));
F->it_1439 = (*(P164)rt_nil_check(F->it_1439)).next_;
}
L_end_1456: ;
(*F->r_619) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->parts_1446)), 32), (*(P134)rt_nil_check(F->tmp_1443))), rt_str("; })", 4)));
goto ret_;
}
if ((((*(P116)rt_nil_check(F->want_617)).tcons_ != NULL) && ((*(P171)rt_nil_check((*(P116)rt_nil_check(F->want_617)).tcons_)).hi_ != NULL))) {
F->lo_1448 = (*(P171)rt_nil_check((*(P116)rt_nil_check(F->want_617)).tcons_)).lo_;
F->hi_1449 = (*(P171)rt_nil_check((*(P116)rt_nil_check(F->want_617)).tcons_)).hi_;
} else if (((((*(P164)rt_nil_check(F->it_1439)).next_ == NULL) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->it_1439)).a_)).flag_ != ((rt_int)1LL))) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->it_1439)).a_)).b_ != NULL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->it_1439)).a_)).a_, (*(P116)rt_nil_check(F->want_617)).idx_, &F->vt_1441, &F->lo_1448);
f_gexpr_566(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->it_1439)).a_)).b_, (*(P116)rt_nil_check(F->want_617)).idx_, &F->vt_1441, &F->hi_1449);
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_616)).line_, rt_str("the bounds of this aggregate are not known", 42));
}
F->parts_1446 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P134)rt_nil_check(F->ct_1442))), 32), (*(P134)rt_nil_check(F->tmp_1443))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo = ", 6)), (*(P134)rt_nil_check(F->lo_1448))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".hi = ", 6)), (*(P134)rt_nil_check(F->hi_1449))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo2 = ", 7)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".hi2 = 1; ", 10)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P134)rt_nil_check(F->et_1447))), rt_str(") * (size_t)(RT_CNT(", 20)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(") + 1));", 8)));
F->n_1452 = ((*(P134)rt_nil_check(F->parts_1446))).len;
while ((F->it_1439 != NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->it_1439)).b_, (*(P116)rt_nil_check(F->want_617)).elem_, &F->vt_1441, &F->v_1444);
f_check_type_391(F->up, F->vt_1441, (*(P116)rt_nil_check(F->want_617)).elem_, (*(P164)rt_nil_check(F->e_616)).line_);
f_copy_code_435(F->up, (*(P116)rt_nil_check(F->want_617)).elem_, (*(P134)rt_nil_check(F->v_1444)), &F->x_1445);
F->lab_1453 = (*(P164)rt_nil_check(F->it_1439)).a_;
while ((F->lab_1453 != NULL)) {
if (((*(P164)rt_nil_check(F->lab_1453)).flag_ == ((rt_int)1LL))) {
F->fill_1451 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int k_ = 0; k_ < RT_CNT(", 33), (*(P134)rt_nil_check(F->tmp_1443))), rt_str("); k_++) ", 9)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".p[k_] = ", 9)), (*(P134)rt_nil_check(F->x_1445))), 59));
} else if (((*(P164)rt_nil_check(F->lab_1453)).b_ != NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->lab_1453)).a_, (*(P116)rt_nil_check(F->want_617)).idx_, &F->vt_1441, &F->key_1450);
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->lab_1453)).b_, (*(P116)rt_nil_check(F->want_617)).idx_, &F->vt_1441, &F->hi_1449);
F->parts_1446 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->parts_1446)), rt_str(" for (rt_int k_ = ", 18)), (*(P134)rt_nil_check(F->key_1450))), rt_str("; k_ <= ", 8)), (*(P134)rt_nil_check(F->hi_1449))), rt_str("; k_++) ", 8)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".p[rt_index(k_, ", 16)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo, ", 5)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".hi) - ", 7)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo] = ", 7)), (*(P134)rt_nil_check(F->x_1445))), 59));
} else {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->lab_1453)).a_, (*(P116)rt_nil_check(F->want_617)).idx_, &F->vt_1441, &F->key_1450);
F->parts_1446 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->parts_1446)), 32), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".p[rt_index(", 12)), (*(P134)rt_nil_check(F->key_1450))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo, ", 5)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".hi) - ", 7)), (*(P134)rt_nil_check(F->tmp_1443))), rt_str(".lo] = ", 7)), (*(P134)rt_nil_check(F->x_1445))), 59));
}
F->lab_1453 = (*(P164)rt_nil_check(F->lab_1453)).next_;
}
L_end_1458: ;
F->it_1439 = (*(P164)rt_nil_check(F->it_1439)).next_;
}
L_end_1457: ;
(*F->r_619) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_slice((*(P134)rt_nil_check(F->parts_1446)), ((rt_int)1LL), F->n_1452), (*(P134)rt_nil_check(F->fill_1451))), rt_str_slice((*(P134)rt_nil_check(F->parts_1446)), rt_add(F->n_1452, ((rt_int)1LL)), ((*(P134)rt_nil_check(F->parts_1446))).len)), 32), (*(P134)rt_nil_check(F->tmp_1443))), rt_str("; })", 4)));
ret_:

  return;
}

static P164 f_actual_for_624(struct f_greenc_1fr *up_, P164 args_621, P1124 pm_622, P1124 first_623) {
  struct f_actual_for_624fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_621 = args_621;
F->pm_622 = pm_622;
F->first_623 = first_623;
F->a_1459 = NULL;
F->a_1459 = F->args_621;
F->p_1460 = NULL;
F->p_1460 = F->first_623;
while (((F->a_1459 != NULL) && ((*(P164)rt_nil_check(F->a_1459)).formal_ == NULL))) {
if ((F->p_1460 == F->pm_622)) {
F->result_ = F->a_1459;
goto ret_;
}
F->p_1460 = (*(P1124)rt_nil_check(F->p_1460)).next_;
F->a_1459 = (*(P164)rt_nil_check(F->a_1459)).next_;
}
L_end_1461: ;
while ((F->a_1459 != NULL)) {
if ((((*(P164)rt_nil_check(F->a_1459)).formal_ != NULL) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1459)).formal_)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_622)).name_))))) {
F->result_ = F->a_1459;
goto ret_;
}
F->a_1459 = (*(P164)rt_nil_check(F->a_1459)).next_;
}
L_end_1462: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_629(struct f_greenc_1fr *up_, P164 e_625, int is_stmt_626, P116 *t_627, P134 *r_628) {
  struct f_gcall_629fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_625 = e_625;
F->is_stmt_626 = is_stmt_626;
F->t_627 = t_627;
F->r_628 = r_628;
F->fn_1463 = NULL;
F->fn_1463 = (*(P164)rt_nil_check(F->e_625)).a_;
F->nm_1464 = NULL;
F->y_1465 = NULL;
F->args_1466 = NULL;
F->lv_1467 = NULL;
F->v_1468 = NULL;
F->ct_1469 = NULL;
F->x_1470 = NULL;
F->a_1471 = NULL;
F->pm_1472 = NULL;
F->lt_1473 = NULL;
F->vt_1474 = NULL;
F->lc_1475 = NULL;
if ((((*(P164)rt_nil_check(F->fn_1463)).kind_ == ((rt_int)9LL)) && f_is_package_643(F->up, (*(P164)rt_nil_check(F->fn_1463)).a_))) {
F->nm_1464 = f_nn_256(F->up, ((rt_int)5LL), (*(P164)rt_nil_check(F->fn_1463)).line_);
(*(P164)rt_nil_check(F->nm_1464)).name_ = (*(P164)rt_nil_check(F->fn_1463)).name_;
(*(P164)rt_nil_check(F->nm_1464)).tag_ = (*(P164)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).a_)).name_;
F->fn_1463 = F->nm_1464;
} else if ((((((*(P164)rt_nil_check(F->fn_1463)).kind_ == ((rt_int)9LL)) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).a_)).kind_ == ((rt_int)8LL))) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_710(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).a_)).a_)).name_))))) {
F->y_1465 = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).a_)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), (*(P164)rt_nil_check(F->fn_1463)).line_);
if (((F->y_1465 != NULL) && (((*(P111)rt_nil_check(F->y_1465)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_1465)).kind_ == ((rt_int)4LL))))) {
f_resolve_member_overload_686(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).a_)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), (*(P164)rt_nil_check(F->e_625)).b_, F->is_stmt_626, F->up->call_want_178, (*(P164)rt_nil_check(F->e_625)).line_, &F->y_1465);
F->up->call_task_ix_167 = (*(P164)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).a_)).b_;
if ((F->is_stmt_626 && ((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1465)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_625)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_634(F->up, F->e_625, F->y_1465, &(*F->t_627), &(*F->r_628));
goto ret_;
}
}
if (((*(P164)rt_nil_check(F->fn_1463)).kind_ != ((rt_int)5LL))) {
f_other_call_767(F->up, F->e_625, F->is_stmt_626, &(*F->t_627), &(*F->r_628));
goto ret_;
}
F->y_1465 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)));
if (((*(P164)rt_nil_check(F->fn_1463)).tag_ != NULL)) {
F->y_1465 = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).tag_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), (*(P164)rt_nil_check(F->fn_1463)).line_);
}
if ((F->y_1465 == NULL)) {
f_builtin_641(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), (*(P164)rt_nil_check(F->e_625)).b_, (*(P164)rt_nil_check(F->e_625)).line_, F->is_stmt_626, &(*F->t_627), &(*F->r_628));
goto ret_;
}
if (((((*(P111)rt_nil_check(F->y_1465)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_1465)).kind_ == ((rt_int)4LL))) && ((*(P164)rt_nil_check(F->fn_1463)).tag_ == NULL))) {
f_resolve_overload_678(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), (*(P164)rt_nil_check(F->e_625)).b_, F->is_stmt_626, F->up->call_want_178, (*(P164)rt_nil_check(F->e_625)).line_, &F->y_1465);
if ((F->y_1465 == NULL)) {
f_builtin_641(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), (*(P164)rt_nil_check(F->e_625)).b_, (*(P164)rt_nil_check(F->e_625)).line_, F->is_stmt_626, &(*F->t_627), &(*F->r_628));
goto ret_;
}
} else if ((((*(P111)rt_nil_check(F->y_1465)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_1465)).kind_ == ((rt_int)4LL)))) {
f_resolve_member_overload_686(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).tag_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), (*(P164)rt_nil_check(F->e_625)).b_, F->is_stmt_626, F->up->call_want_178, (*(P164)rt_nil_check(F->e_625)).line_, &F->y_1465);
}
if (((*(P111)rt_nil_check(F->y_1465)).kind_ == ((rt_int)10LL))) {
f_other_call_767(F->up, F->e_625, F->is_stmt_626, &(*F->t_627), &(*F->r_628));
goto ret_;
}
if ((((*(P111)rt_nil_check(F->y_1465)).kind_ != ((rt_int)3LL)) && ((*(P111)rt_nil_check(F->y_1465)).kind_ != ((rt_int)4LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_625)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), rt_str(" cannot be called", 17)));
}
if ((F->is_stmt_626 && ((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1465)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_625)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_626) && ((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_1465)).result_)).kind_ == ((rt_int)9LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_625)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->fn_1463)).name_)), rt_str(" is a procedure, not a function", 31)));
}
f_gcall_with_634(F->up, F->e_625, F->y_1465, &(*F->t_627), &(*F->r_628));
ret_:

  return;
}

static void f_gcall_with_634(struct f_greenc_1fr *up_, P164 e_630, P111 y_631, P116 *t_632, P134 *r_633) {
  struct f_gcall_with_634fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_630 = e_630;
F->y_631 = y_631;
F->t_632 = t_632;
F->r_633 = r_633;
F->args_1477 = NULL;
F->lv_1478 = NULL;
F->v_1479 = NULL;
F->x1_1480 = NULL;
F->x2_1481 = NULL;
F->a_1482 = NULL;
F->pm_1483 = NULL;
F->lt_1484 = NULL;
F->vt_1485 = NULL;
F->lc_1486 = NULL;
f_check_call_rules_822(F->up, F->e_630, F->y_631);
F->args_1477 = f_mk_190(F->up, rt_str("", 0));
if (((((((*(P111)rt_nil_check(F->y_631)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_631)).kind_ == ((rt_int)4LL))) && ((*(P111)rt_nil_check(F->y_631)).access_path_ != NULL)) && ((*(P111)rt_nil_check(F->y_631)).members_ != NULL)) && ((*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_167 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_630)).line_, rt_str_cat(rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_631)).name_)), rt_str(" needs the member of the family: F(I).", 38)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_631)).name_))));
}
f_gexpr_566(F->up, F->up->call_task_ix_167, (*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).t_, &F->vt_1485, &F->v_1479);
F->up->call_task_ix_167 = NULL;
f_path_at_708(F->up, (*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).level_, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_631)).access_path_)), &F->lv_1478);
f_path_at_708(F->up, (*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).cname_)), rt_str("lo", 2)), &F->x1_1480);
f_path_at_708(F->up, (*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).cname_)), rt_str("hi", 2)), &F->x2_1481);
F->lv_1478 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->lv_1478)), rt_str("[rt_index(", 10)), (*(P134)rt_nil_check(F->v_1479))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->x1_1480))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->x2_1481))), rt_str(") - ", 4)), (*(P134)rt_nil_check(F->x1_1480))), 93));
F->args_1477 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->lv_1478))), rt_str(" \? ", 3)), (*(P134)rt_nil_check(F->lv_1478))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((((*(P111)rt_nil_check(F->y_631)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_631)).kind_ == ((rt_int)4LL))) && ((*(P111)rt_nil_check(F->y_631)).access_path_ != NULL))) {
f_path_at_708(F->up, (*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_631)).members_)).level_, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_631)).access_path_)), &F->lv_1478);
F->args_1477 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->lv_1478))), rt_str(" \? ", 3)), (*(P134)rt_nil_check(F->lv_1478))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((*(P111)rt_nil_check(F->y_631)).level_ > ((rt_int)0LL))) {
f_link_to_514(F->up, (*(P111)rt_nil_check(F->y_631)).level_, &F->args_1477);
}
F->pm_1483 = (*(P111)rt_nil_check(F->y_631)).params_;
while ((F->pm_1483 != NULL)) {
F->a_1482 = f_actual_for_624(F->up, (*(P164)rt_nil_check(F->e_630)).b_, F->pm_1483, (*(P111)rt_nil_check(F->y_631)).params_);
if ((((*(P134)rt_nil_check(F->args_1477))).len > ((rt_int)0LL))) {
F->args_1477 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->args_1477)), rt_str(", ", 2)));
}
if ((F->a_1482 == NULL)) {
if ((((*(P1124)rt_nil_check(F->pm_1483)).dflt_ == NULL) || ((*(P1124)rt_nil_check(F->pm_1483)).mode_ != ((rt_int)1LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_630)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).name_))));
}
f_gexpr_566(F->up, (*(P1124)rt_nil_check(F->pm_1483)).dflt_, (*(P1124)rt_nil_check(F->pm_1483)).t_, &F->vt_1485, &F->v_1479);
F->args_1477 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->args_1477)), (*(P134)rt_nil_check(F->v_1479))));
} else {
if (((((*(P164)rt_nil_check(F->a_1482)).flag_ != ((rt_int)0LL)) && ((*(P164)rt_nil_check(F->a_1482)).flag_ != ((rt_int)4LL))) && ((*(P164)rt_nil_check(F->a_1482)).flag_ != (*(P1124)rt_nil_check(F->pm_1483)).mode_))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_630)).line_, rt_str_cat(rt_str_cat(rt_str("the association of ", 19), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).name_))), rt_str(" does not match its mode", 24)));
}
if (((*(P1124)rt_nil_check(F->pm_1483)).mode_ == ((rt_int)1LL))) {
f_gexpr_566(F->up, F->a_1482, (*(P1124)rt_nil_check(F->pm_1483)).t_, &F->vt_1485, &F->v_1479);
f_check_type_391(F->up, F->vt_1485, (*(P1124)rt_nil_check(F->pm_1483)).t_, (*(P164)rt_nil_check(F->e_630)).line_);
if (((((*(P1124)rt_nil_check(F->pm_1483)).c_ != NULL) && ((*(P171)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).c_)).lo_ != NULL)) && (((*(P116)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).t_)).kind_ == ((rt_int)1LL)) || ((*(P116)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).t_)).kind_ == ((rt_int)4LL))))) {
F->v_1479 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P134)rt_nil_check(F->v_1479))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).c_)).lo_))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P171)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).c_)).hi_))), 41));
}
F->args_1477 = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check(F->args_1477)), (*(P134)rt_nil_check(F->v_1479))));
} else {
f_lvalue_528(F->up, F->a_1482, &F->lv_1478, &F->lt_1484, &F->lc_1486, &F->ro_1487);
if (F->ro_1487) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_630)).line_, rt_str_cat((*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1483)).name_)), rt_str(" needs a variable", 17)));
}
f_check_pure_target_805(F->up, F->a_1482, (*(P164)rt_nil_check(F->e_630)).line_);
f_check_type_391(F->up, F->lt_1484, (*(P1124)rt_nil_check(F->pm_1483)).t_, (*(P164)rt_nil_check(F->e_630)).line_);
F->args_1477 = f_mk_190(F->up, rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->args_1477)), 38), (*(P134)rt_nil_check(F->lv_1478))));
}
}
F->pm_1483 = (*(P1124)rt_nil_check(F->pm_1483)).next_;
}
L_end_1488: ;
if (((f_list_len_262(F->up, (*(P164)rt_nil_check(F->e_630)).b_) > ((rt_int)0LL)) && ((*(P111)rt_nil_check(F->y_631)).params_ == NULL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_630)).line_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_631)).name_)), rt_str(" takes no parameters", 20)));
}
(*F->t_632) = (*(P111)rt_nil_check(F->y_631)).result_;
(*F->r_633) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_631)).cname_)), 40), (*(P134)rt_nil_check(F->args_1477))), 41));
ret_:

  return;
}

static void f_builtin_641(struct f_greenc_1fr *up_, rstr name_635, P164 args_636, rt_int line_637, int is_stmt_638, P116 *t_639, P134 *r_640) {
  struct f_builtin_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_635 = rt_str_copy(name_635);
F->args_636 = args_636;
F->line_637 = line_637;
F->is_stmt_638 = is_stmt_638;
F->t_639 = t_639;
F->r_640 = r_640;
F->aty_1489 = NULL;
F->lt_1490 = NULL;
F->a_1491 = NULL;
F->w_1492 = NULL;
F->lv_1493 = NULL;
F->lc_1494 = NULL;
(*F->t_639) = F->up->ty_void_155;
if (((F->up->pure_sym_179 != NULL) && (rt_str_eq(F->name_635, rt_str("PUT", 3)) || rt_str_eq(F->name_635, rt_str("GET", 3))))) {
f_fail_211(F->up, F->line_637, rt_str_cat(rt_str_cat(rt_str("a function cannot do input-output: ", 35), F->name_635), rt_str(" has side effects (RM79 6.5)", 28)));
}
if (rt_str_eq(F->name_635, rt_str("PUT", 3))) {
if ((F->args_636 == NULL)) {
f_fail_211(F->up, F->line_637, rt_str("PUT needs an item", 17));
}
f_gexpr_566(F->up, F->args_636, NULL, &F->aty_1489, &F->a_1491);
F->w_1492 = f_mk_190(F->up, rt_str("0", 1));
if (((*(P164)rt_nil_check(F->args_636)).next_ != NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->args_636)).next_, F->up->ty_int_150, &F->lt_1490, &F->w_1492);
}
if (((*(P116)rt_nil_check(F->aty_1489)).kind_ == ((rt_int)5LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_put(", 9), (*(P134)rt_nil_check(F->a_1491))), 41));
} else if (((*(P116)rt_nil_check(F->aty_1489)).kind_ == ((rt_int)11LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_putc(", 10), (*(P134)rt_nil_check(F->a_1491))), 41));
} else if (((*(P116)rt_nil_check(F->aty_1489)).kind_ == ((rt_int)1LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_int(", 13), (*(P134)rt_nil_check(F->a_1491))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->w_1492))), 41));
} else if (((*(P116)rt_nil_check(F->aty_1489)).kind_ == ((rt_int)2LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_bool(", 14), (*(P134)rt_nil_check(F->a_1491))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->w_1492))), 41));
} else if (((*(P116)rt_nil_check(F->aty_1489)).kind_ == ((rt_int)3LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_float(", 15), (*(P134)rt_nil_check(F->a_1491))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->w_1492))), rt_str(", 0)", 4)));
} else {
f_fail_211(F->up, F->line_637, rt_str("PUT of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_635, rt_str("GET", 3))) {
f_lvalue_528(F->up, F->args_636, &F->lv_1493, &F->lt_1490, &F->lc_1494, &F->ro_1495);
if (((*(P116)rt_nil_check(F->lt_1490)).kind_ == ((rt_int)11LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->lv_1493))), rt_str(" = rt_g_getc())", 15)));
} else if (((*(P116)rt_nil_check(F->lt_1490)).kind_ == ((rt_int)1LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->lv_1493))), rt_str(" = rt_g_get_int())", 18)));
} else if (((*(P116)rt_nil_check(F->lt_1490)).kind_ == ((rt_int)3LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->lv_1493))), rt_str(" = rt_g_get_float())", 20)));
} else {
f_fail_211(F->up, F->line_637, rt_str("GET of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_635, rt_str("ABS", 3))) {
f_gexpr_566(F->up, F->args_636, NULL, &(*F->t_639), &F->a_1491);
if (((*(P116)rt_nil_check((*F->t_639))).kind_ == ((rt_int)1LL))) {
(*F->r_640) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_abs(", 7), (*(P134)rt_nil_check(F->a_1491))), 41));
} else {
(*F->r_640) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("fabs(", 5), (*(P134)rt_nil_check(F->a_1491))), 41));
}
} else {
f_task_builtin_782(F->up, F->name_635, F->args_636, F->line_637, &(*F->t_639), &(*F->r_640));
}
ret_:

  return;
}

static int f_is_package_643(struct f_greenc_1fr *up_, P164 e_642) {
  struct f_is_package_643fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_642 = e_642;
F->y_1496 = NULL;
if (((*(P164)rt_nil_check(F->e_642)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1496 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_642)).name_)));
F->result_ = ((F->y_1496 != NULL) && (((*(P111)rt_nil_check(F->y_1496)).kind_ == ((rt_int)8LL)) || ((*(P111)rt_nil_check(F->y_1496)).kind_ == ((rt_int)9LL))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P111 f_member_of_647(struct f_greenc_1fr *up_, rstr p_644, rstr name_645, rt_int line_646) {
  struct f_member_of_647fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_644 = rt_str_copy(p_644);
F->name_645 = rt_str_copy(name_645);
F->line_646 = line_646;
F->y_1497 = NULL;
F->y_1497 = f_lookup_358(F->up, F->p_644);
F->m_1498 = NULL;
if (((F->y_1497 == NULL) || (((*(P111)rt_nil_check(F->y_1497)).kind_ != ((rt_int)8LL)) && ((*(P111)rt_nil_check(F->y_1497)).kind_ != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_1498 = (*(P111)rt_nil_check(F->y_1497)).members_;
while ((F->m_1498 != NULL)) {
if ((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1498)).name_)), F->name_645) && (!(*(P111)rt_nil_check(F->m_1498)).hidden_))) {
F->result_ = F->m_1498;
goto ret_;
}
F->m_1498 = (*(P111)rt_nil_check(F->m_1498)).mnext_;
}
L_end_1499: ;
if (((*(P111)rt_nil_check(F->y_1497)).kind_ == ((rt_int)9LL))) {
F->m_1498 = f_lookup_entry_364(F->up, F->name_645, F->y_1497);
if ((((F->m_1498 != NULL) && ((*(P111)rt_nil_check(F->m_1498)).kind_ == ((rt_int)10LL))) && f_same_task_361(F->up, (*(P111)rt_nil_check(F->m_1498)).members_, F->y_1497))) {
F->result_ = F->m_1498;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_649(struct f_greenc_1fr *up_, P164 p_648) {
  struct f_inside_package_649fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_648 = p_648;
F->l_1500 = NULL;
F->l_1500 = F->up->pkg_stack_175;
if ((F->p_648 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_1500 != NULL)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P145)rt_nil_check(F->l_1500)).s_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->p_648)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_1500 = (*(P145)rt_nil_check(F->l_1500)).next_;
}
L_end_1501: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_652(struct f_greenc_1fr *up_, P111 y_650, P111 *z_651) {
  struct f_copy_sym_652fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_650 = y_650;
F->z_651 = z_651;
(*F->z_651) = ({ R112 *cell1502 = rt_alloc(sizeof(R112)); *cell1502 = cp_R112(({ R112 ag1503; ag1503.kind_ = (*(P111)rt_nil_check(F->y_650)).kind_; ag1503.name_ = (*(P111)rt_nil_check(F->y_650)).name_; ag1503.t_ = (*(P111)rt_nil_check(F->y_650)).t_; ag1503.c_ = (*(P111)rt_nil_check(F->y_650)).c_; ag1503.access_path_ = (*(P111)rt_nil_check(F->y_650)).access_path_; ag1503.cname_ = (*(P111)rt_nil_check(F->y_650)).cname_; ag1503.ro_ = (*(P111)rt_nil_check(F->y_650)).ro_; ag1503.mvalue_ = (*(P111)rt_nil_check(F->y_650)).mvalue_; ag1503.hasmv_ = (*(P111)rt_nil_check(F->y_650)).hasmv_; ag1503.decl_ = (*(P111)rt_nil_check(F->y_650)).decl_; ag1503.params_ = (*(P111)rt_nil_check(F->y_650)).params_; ag1503.result_ = (*(P111)rt_nil_check(F->y_650)).result_; ag1503.depth_ = ((rt_int)0LL); ag1503.level_ = (*(P111)rt_nil_check(F->y_650)).level_; ag1503.byref_ = (*(P111)rt_nil_check(F->y_650)).byref_; ag1503.vrp_ = (*(P111)rt_nil_check(F->y_650)).vrp_; ag1503.hidden_ = (*(P111)rt_nil_check(F->y_650)).hidden_; ag1503.from_use_ = 0; ag1503.members_ = (*(P111)rt_nil_check(F->y_650)).members_; ag1503.mnext_ = NULL; ag1503.chain_ = NULL; ag1503.stack_ = NULL; ag1503; })); (P111)cell1502; });
ret_:

  return;
}

static void f_complete_private_655(struct f_greenc_1fr *up_, P116 ph_653, P116 full_654) {
  struct f_complete_private_655fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_653 = ph_653;
F->full_654 = full_654;
F->n_1504 = NULL;
F->n_1504 = (*(P116)rt_nil_check(F->ph_653)).name_;
F->p_1505 = NULL;
F->p_1505 = (*(P116)rt_nil_check(F->ph_653)).decl_;
as_R117(&(*(P116)rt_nil_check(F->ph_653)), (*(P116)rt_nil_check(F->full_654)));
(*(P116)rt_nil_check(F->ph_653)).name_ = F->n_1504;
(*(P116)rt_nil_check(F->ph_653)).priv_ = 1;
(*(P116)rt_nil_check(F->ph_653)).decl_ = F->p_1505;
ret_:

  return;
}

static void f_package_spec_657(struct f_greenc_1fr *up_, P164 e_656) {
  struct f_package_spec_657fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_656 = e_656;
F->y_1506 = NULL;
F->m_1507 = NULL;
F->z_1508 = NULL;
F->saved_1509 = NULL;
F->saved_1509 = F->up->cur_pkg_176;
F->first_private_1510 = NULL;
F->y_1506 = f_new_sym_382(F->up, ((rt_int)8LL), (*(P164)rt_nil_check(F->e_656)).name_);
(*(P111)rt_nil_check(F->y_1506)).decl_ = F->e_656;
F->up->pkg_stack_175 = ({ R146 *cell1511 = rt_alloc(sizeof(R146)); *cell1511 = cp_R146(({ R146 ag1512; ag1512.s_ = (*(P164)rt_nil_check(F->e_656)).name_; ag1512.next_ = F->up->pkg_stack_175; ag1512; })); (P145)cell1511; });
F->up->cur_pkg_176 = F->e_656;
f_open_scope_378(F->up);
f_decl_elements_462(F->up, (*(P164)rt_nil_check(F->e_656)).c_);
F->first_private_1510 = F->up->scope_stack_115;
f_decl_elements_462(F->up, (*(P164)rt_nil_check(F->e_656)).d_);
F->m_1507 = F->up->scope_stack_115;
while (((F->m_1507 != NULL) && ((*(P111)rt_nil_check(F->m_1507)).depth_ == F->up->depth_114))) {
f_copy_sym_652(F->up, F->m_1507, &F->z_1508);
(*(P111)rt_nil_check(F->z_1508)).hidden_ = (f_hidden_from_660(F->up, F->m_1507, F->first_private_1510) || (*(P111)rt_nil_check(F->m_1507)).from_use_);
(*(P111)rt_nil_check(F->z_1508)).mnext_ = (*(P111)rt_nil_check(F->y_1506)).members_;
(*(P111)rt_nil_check(F->y_1506)).members_ = F->z_1508;
F->m_1507 = (*(P111)rt_nil_check(F->m_1507)).stack_;
}
L_end_1513: ;
f_close_scope_379(F->up);
F->up->pkg_stack_175 = (*(P145)rt_nil_check(F->up->pkg_stack_175)).next_;
F->up->cur_pkg_176 = F->saved_1509;
f_define_377(F->up, F->y_1506, (*(P164)rt_nil_check(F->e_656)).line_);
ret_:

  return;
}

static int f_hidden_from_660(struct f_greenc_1fr *up_, P111 m_658, P111 first_private_659) {
  struct f_hidden_from_660fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_658 = m_658;
F->first_private_659 = first_private_659;
F->p_1514 = NULL;
F->p_1514 = F->up->scope_stack_115;
while ((F->p_1514 != NULL)) {
if ((F->p_1514 == F->first_private_659)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_1514 == F->m_658)) {
F->result_ = 1;
goto ret_;
}
F->p_1514 = (*(P111)rt_nil_check(F->p_1514)).stack_;
}
L_end_1515: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_662(struct f_greenc_1fr *up_, P164 e_661) {
  struct f_package_body_662fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_661 = e_661;
F->y_1516 = NULL;
F->y_1516 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_661)).name_)));
F->m_1517 = NULL;
F->z_1518 = NULL;
F->saved_1519 = NULL;
F->saved_1519 = F->up->cur_pkg_176;
if (((F->y_1516 != NULL) && ((*(P111)rt_nil_check(F->y_1516)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_833(F->up, F->e_661);
goto ret_;
}
if (((F->y_1516 == NULL) || ((*(P111)rt_nil_check(F->y_1516)).kind_ != ((rt_int)8LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_661)).line_, rt_str_cat(rt_str_cat(rt_str("package body ", 13), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_661)).name_))), rt_str(" has no specification", 21)));
}
F->up->pkg_stack_175 = ({ R146 *cell1520 = rt_alloc(sizeof(R146)); *cell1520 = cp_R146(({ R146 ag1521; ag1521.s_ = (*(P164)rt_nil_check(F->e_661)).name_; ag1521.next_ = F->up->pkg_stack_175; ag1521; })); (P145)cell1520; });
F->up->cur_pkg_176 = (*(P111)rt_nil_check(F->y_1516)).decl_;
f_open_scope_378(F->up);
F->m_1517 = (*(P111)rt_nil_check(F->y_1516)).members_;
while ((F->m_1517 != NULL)) {
f_copy_sym_652(F->up, F->m_1517, &F->z_1518);
(*(P111)rt_nil_check(F->z_1518)).hidden_ = 0;
f_define_377(F->up, F->z_1518, (*(P164)rt_nil_check(F->e_661)).line_);
F->m_1517 = (*(P111)rt_nil_check(F->m_1517)).mnext_;
}
L_end_1522: ;
f_decl_elements_462(F->up, (*(P164)rt_nil_check(F->e_661)).c_);
F->m_1517 = (*(P111)rt_nil_check(F->y_1516)).members_;
while ((F->m_1517 != NULL)) {
if (((((*(P111)rt_nil_check(F->m_1517)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->m_1517)).kind_ == ((rt_int)4LL))) && ((*(P164)rt_nil_check((*(P111)rt_nil_check(F->m_1517)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_1518 = F->up->table_113.p[rt_index(f_hash_356(F->up, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1517)).name_))), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while ((F->z_1518 != NULL)) {
if (((*(P111)rt_nil_check(F->z_1518)).cname_ == (*(P111)rt_nil_check(F->m_1517)).cname_)) {
(*(P111)rt_nil_check(F->m_1517)).decl_ = (*(P111)rt_nil_check(F->z_1518)).decl_;
}
F->z_1518 = (*(P111)rt_nil_check(F->z_1518)).chain_;
}
L_end_1524: ;
if (((*(P164)rt_nil_check((*(P111)rt_nil_check(F->m_1517)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_661)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no body for ", 12), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1517)).name_))), rt_str(" in package body ", 17)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_661)).name_))));
}
}
F->m_1517 = (*(P111)rt_nil_check(F->m_1517)).mnext_;
}
L_end_1523: ;
f_guarded_482(F->up, (*(P164)rt_nil_check(F->e_661)).d_, (*(P164)rt_nil_check(F->e_661)).e_, (*(P164)rt_nil_check(F->e_661)).line_);
f_close_scope_379(F->up);
F->up->pkg_stack_175 = (*(P145)rt_nil_check(F->up->pkg_stack_175)).next_;
F->up->cur_pkg_176 = F->saved_1519;
ret_:

  return;
}

static void f_use_clause_664(struct f_greenc_1fr *up_, P164 e_663) {
  struct f_use_clause_664fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_663 = e_663;
F->n_1525 = NULL;
F->n_1525 = (*(P164)rt_nil_check(F->e_663)).a_;
F->y_1526 = NULL;
F->m_1527 = NULL;
F->z_1528 = NULL;
F->old_1529 = NULL;
while ((F->n_1525 != NULL)) {
F->y_1526 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1525)).name_)));
if ((F->y_1526 == NULL)) {
if ((!rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1525)).name_)), rt_str("TEXT_IO", 7)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->n_1525)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1525)).name_)), rt_str(" is not a package", 17)));
}
} else if ((((*(P111)rt_nil_check(F->y_1526)).kind_ != ((rt_int)8LL)) && ((*(P111)rt_nil_check(F->y_1526)).kind_ != ((rt_int)9LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->n_1525)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1525)).name_)), rt_str(" is not a package or a task", 27)));
} else {
F->m_1527 = (*(P111)rt_nil_check(F->y_1526)).members_;
while ((F->m_1527 != NULL)) {
F->old_1529 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1527)).name_)));
if (((!(*(P111)rt_nil_check(F->m_1527)).hidden_) && ((F->old_1529 == NULL) || ((((*(P111)rt_nil_check(F->old_1529)).depth_ < F->up->depth_114) && ((*(P111)rt_nil_check(F->old_1529)).kind_ != ((rt_int)1LL))) && ((*(P111)rt_nil_check(F->old_1529)).kind_ != ((rt_int)2LL)))))) {
f_copy_sym_652(F->up, F->m_1527, &F->z_1528);
(*(P111)rt_nil_check(F->z_1528)).from_use_ = 1;
f_define_377(F->up, F->z_1528, (*(P164)rt_nil_check(F->n_1525)).line_);
}
F->m_1527 = (*(P111)rt_nil_check(F->m_1527)).mnext_;
}
L_end_1531: ;
}
F->n_1525 = (*(P164)rt_nil_check(F->n_1525)).next_;
}
L_end_1530: ;
ret_:

  return;
}

static void f_fits_669(struct f_greenc_1fr *up_, P111 y_665, P164 args_666, P116 want_667, int *ok_668) {
  struct f_fits_669fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_665 = y_665;
F->args_666 = args_666;
F->want_667 = want_667;
F->ok_668 = ok_668;
F->pm_1532 = NULL;
F->pm_1532 = (*(P111)rt_nil_check(F->y_665)).params_;
F->a_1533 = NULL;
F->t_1534 = NULL;
F->c_1535 = NULL;
F->v_1536 = NULL;
F->saved_1538 = NULL;
F->saved_1538 = F->up->code_130;
F->used_1539 = ((rt_int)0LL);
(*F->ok_668) = 1;
F->up->trial_149 = rt_add(F->up->trial_149, ((rt_int)1LL));
F->up->code_130 = f_new_buffer_212(F->up);
{
{ rt_frame xf1541;
if (RT_TRY(xf1541)) {
while (((*F->ok_668) && (F->pm_1532 != NULL))) {
F->a_1533 = f_actual_for_624(F->up, F->args_666, F->pm_1532, (*(P111)rt_nil_check(F->y_665)).params_);
if ((F->a_1533 == NULL)) {
(*F->ok_668) = ((*(P1124)rt_nil_check(F->pm_1532)).dflt_ != NULL);
} else {
F->used_1539 = rt_add(F->used_1539, ((rt_int)1LL));
if (((((*(P164)rt_nil_check(F->a_1533)).flag_ != ((rt_int)0LL)) && ((*(P164)rt_nil_check(F->a_1533)).flag_ != ((rt_int)4LL))) && ((*(P164)rt_nil_check(F->a_1533)).flag_ != (*(P1124)rt_nil_check(F->pm_1532)).mode_))) {
(*F->ok_668) = 0;
} else if (((*(P1124)rt_nil_check(F->pm_1532)).mode_ == ((rt_int)1LL))) {
f_gexpr_566(F->up, F->a_1533, (*(P1124)rt_nil_check(F->pm_1532)).t_, &F->t_1534, &F->v_1536);
(*F->ok_668) = (f_same_371(F->up, F->t_1534, (*(P1124)rt_nil_check(F->pm_1532)).t_) || (((*(P116)rt_nil_check(F->t_1534)).kind_ == ((rt_int)10LL)) && ((*(P116)rt_nil_check((*(P1124)rt_nil_check(F->pm_1532)).t_)).kind_ == ((rt_int)8LL))));
} else {
f_lvalue_528(F->up, F->a_1533, &F->v_1536, &F->t_1534, &F->c_1535, &F->ro_1537);
(*F->ok_668) = f_same_371(F->up, F->t_1534, (*(P1124)rt_nil_check(F->pm_1532)).t_);
}
}
F->pm_1532 = (*(P1124)rt_nil_check(F->pm_1532)).next_;
}
L_end_1543: ;
if ((F->used_1539 != f_list_len_262(F->up, F->args_666))) {
(*F->ok_668) = 0;
}
if ((((*F->ok_668) && (F->want_667 != NULL)) && ((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_665)).result_)).kind_ != ((rt_int)9LL)))) {
(*F->ok_668) = (f_same_371(F->up, (*(P111)rt_nil_check(F->y_665)).result_, F->want_667) || ((*(P116)rt_nil_check(F->want_667)).kind_ == ((rt_int)9LL)));
}
RT_POP(xf1541);
} else {
RT_POP(xf1541);
int x1542 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1542);
if (0 || x1542 == ex_compile_error_102) {
(*F->ok_668) = 0;
} else {
rt_raise(x1542);
}
}
}

}
L_end_1540: ;
F->up->trial_149 = rt_sub(F->up->trial_149, ((rt_int)1LL));
F->up->code_130 = F->saved_1538;
ret_:

  return;
}

static int f_is_builtin_671(struct f_greenc_1fr *up_, rstr n_670) {
  struct f_is_builtin_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_670 = rt_str_copy(n_670);
F->result_ = (((rt_str_eq(F->n_670, rt_str("PUT", 3)) || rt_str_eq(F->n_670, rt_str("GET", 3))) || rt_str_eq(F->n_670, rt_str("ABS", 3))) || rt_str_eq(F->n_670, rt_str("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_678(struct f_greenc_1fr *up_, rstr name_672, P164 args_673, int is_stmt_674, P116 want_675, rt_int line_676, P111 *y_677) {
  struct f_resolve_overload_678fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_672 = rt_str_copy(name_672);
F->args_673 = args_673;
F->is_stmt_674 = is_stmt_674;
F->want_675 = want_675;
F->line_676 = line_676;
F->y_677 = y_677;
F->z_1544 = NULL;
F->z_1544 = F->up->table_113.p[rt_index(f_hash_356(F->up, F->name_672), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
F->first_1545 = NULL;
F->n_1546 = ((rt_int)0LL);
{ rt_int lo1550 = ((rt_int)1LL), hi1551 = ((rt_int)2LL);
for (rt_int it1552 = lo1550; it1552 <= hi1551; it1552++) {
F->pass_1549 = it1552;
F->z_1544 = F->up->table_113.p[rt_index(f_hash_356(F->up, F->name_672), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
F->n_1546 = ((rt_int)0LL);
while ((F->z_1544 != NULL)) {
if ((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->z_1544)).name_)), F->name_672) && (((*(P111)rt_nil_check(F->z_1544)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->z_1544)).kind_ == ((rt_int)4LL))))) {
F->n_1546 = rt_add(F->n_1546, ((rt_int)1LL));
if ((F->first_1545 == NULL)) {
F->first_1545 = F->z_1544;
}
if ((((*(P116)rt_nil_check((*(P111)rt_nil_check(F->z_1544)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_674)) {
if ((F->pass_1549 == ((rt_int)1LL))) {
f_fits_669(F->up, F->z_1544, F->args_673, F->want_675, &F->ok_1547);
} else {
f_fits_669(F->up, F->z_1544, F->args_673, NULL, &F->ok_1547);
}
if (F->ok_1547) {
(*F->y_677) = F->z_1544;
goto ret_;
}
}
}
F->z_1544 = (*(P111)rt_nil_check(F->z_1544)).chain_;
}
L_end_1553: ;
}
}
L_end_1548: ;
if (f_is_builtin_671(F->up, F->name_672)) {
(*F->y_677) = NULL;
goto ret_;
}
if ((F->n_1546 > ((rt_int)1LL))) {
f_fail_211(F->up, F->line_676, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_672), rt_str(" fits these actual parameters", 29)));
}
(*F->y_677) = F->first_1545;
ret_:

  return;
}

static void f_resolve_member_overload_686(struct f_greenc_1fr *up_, rstr p_679, rstr name_680, P164 args_681, int is_stmt_682, P116 want_683, rt_int line_684, P111 *y_685) {
  struct f_resolve_member_overload_686fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_679 = rt_str_copy(p_679);
F->name_680 = rt_str_copy(name_680);
F->args_681 = args_681;
F->is_stmt_682 = is_stmt_682;
F->want_683 = want_683;
F->line_684 = line_684;
F->y_685 = y_685;
F->pk_1554 = NULL;
F->pk_1554 = f_lookup_358(F->up, F->p_679);
F->z_1555 = NULL;
F->n_1556 = ((rt_int)0LL);
if ((F->pk_1554 == NULL)) {
goto ret_;
}
{ rt_int lo1560 = ((rt_int)1LL), hi1561 = ((rt_int)2LL);
for (rt_int it1562 = lo1560; it1562 <= hi1561; it1562++) {
F->pass_1559 = it1562;
F->z_1555 = (*(P111)rt_nil_check(F->pk_1554)).members_;
F->n_1556 = ((rt_int)0LL);
while ((F->z_1555 != NULL)) {
if (((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->z_1555)).name_)), F->name_680) && (((*(P111)rt_nil_check(F->z_1555)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->z_1555)).kind_ == ((rt_int)4LL)))) && (!(*(P111)rt_nil_check(F->z_1555)).hidden_))) {
F->n_1556 = rt_add(F->n_1556, ((rt_int)1LL));
if ((((*(P116)rt_nil_check((*(P111)rt_nil_check(F->z_1555)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_682)) {
if ((F->pass_1559 == ((rt_int)1LL))) {
f_fits_669(F->up, F->z_1555, F->args_681, F->want_683, &F->ok_1557);
} else {
f_fits_669(F->up, F->z_1555, F->args_681, NULL, &F->ok_1557);
}
if (F->ok_1557) {
(*F->y_685) = F->z_1555;
goto ret_;
}
}
}
F->z_1555 = (*(P111)rt_nil_check(F->z_1555)).mnext_;
}
L_end_1563: ;
}
}
L_end_1558: ;
if ((F->n_1556 > ((rt_int)1LL))) {
f_fail_211(F->up, F->line_684, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_680), rt_str(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_692(struct f_greenc_1fr *up_, P164 e_687, P116 want_688, P116 *t_689, P134 *r_690, int *done_691) {
  struct f_user_operator_692fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_687 = e_687;
F->want_688 = want_688;
F->t_689 = t_689;
F->r_690 = r_690;
F->done_691 = done_691;
F->op_1564 = NULL;
F->op_1564 = (*(P164)rt_nil_check(F->e_687)).name_;
F->negate_1565 = 0;
F->y_1566 = NULL;
F->call_1567 = NULL;
F->fname_1568 = NULL;
F->l_1569 = NULL;
F->rt_1570 = NULL;
(*F->done_691) = 0;
if (rt_str_eq((*(P134)rt_nil_check(F->op_1564)), rt_str("/=", 2))) {
F->op_1564 = f_mk_190(F->up, rt_str("=", 1));
F->negate_1565 = 1;
}
if ((f_lookup_358(F->up, (*(P134)rt_nil_check(F->op_1564))) == NULL)) {
goto ret_;
}
F->l_1569 = f_nn_256(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_687)).a_)).kind_, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_687)).a_)).line_);
as_R165(&(*(P164)rt_nil_check(F->l_1569)), (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_687)).a_)));
(*(P164)rt_nil_check(F->l_1569)).next_ = NULL;
(*(P164)rt_nil_check(F->l_1569)).formal_ = NULL;
(*(P164)rt_nil_check(F->l_1569)).flag_ = ((rt_int)0LL);
if (((*(P164)rt_nil_check(F->e_687)).kind_ == ((rt_int)7LL))) {
F->rt_1570 = f_nn_256(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_687)).b_)).kind_, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_687)).b_)).line_);
as_R165(&(*(P164)rt_nil_check(F->rt_1570)), (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_687)).b_)));
(*(P164)rt_nil_check(F->rt_1570)).next_ = NULL;
(*(P164)rt_nil_check(F->rt_1570)).formal_ = NULL;
(*(P164)rt_nil_check(F->rt_1570)).flag_ = ((rt_int)0LL);
(*(P164)rt_nil_check(F->l_1569)).next_ = F->rt_1570;
}
F->y_1566 = F->up->table_113.p[rt_index(f_hash_356(F->up, (*(P134)rt_nil_check(F->op_1564))), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while ((F->y_1566 != NULL)) {
if ((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1566)).name_)), (*(P134)rt_nil_check(F->op_1564))) && ((*(P111)rt_nil_check(F->y_1566)).kind_ == ((rt_int)3LL)))) {
f_fits_669(F->up, F->y_1566, F->l_1569, NULL, &F->ok_1571);
if (F->ok_1571) {
F->fname_1568 = f_nn_256(F->up, ((rt_int)5LL), (*(P164)rt_nil_check(F->e_687)).line_);
(*(P164)rt_nil_check(F->fname_1568)).name_ = F->op_1564;
F->call_1567 = f_nn_256(F->up, ((rt_int)8LL), (*(P164)rt_nil_check(F->e_687)).line_);
(*(P164)rt_nil_check(F->call_1567)).a_ = F->fname_1568;
(*(P164)rt_nil_check(F->call_1567)).b_ = F->l_1569;
F->up->call_want_178 = NULL;
f_gcall_with_634(F->up, F->call_1567, F->y_1566, &(*F->t_689), &(*F->r_690));
if (F->negate_1565) {
(*F->r_690) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P134)rt_nil_check((*F->r_690)))), 41));
}
(*F->done_691) = 1;
goto ret_;
}
}
F->y_1566 = (*(P111)rt_nil_check(F->y_1566)).chain_;
}
L_end_1572: ;
ret_:

  return;
}

static void f_task_p_694(struct f_greenc_1fr *up_, P164 *res_693) {
  struct f_task_p_694fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_693 = res_693;
F->x_1573 = NULL;
F->line_1574 = f_cur_line_263(F->up);
f_expect_kw_278(F->up, rt_str("TASK", 4));
if (f_at_kw_265(F->up, rt_str("BODY", 4))) {
f_skip_276(F->up);
F->x_1573 = f_nn_256(F->up, ((rt_int)51LL), F->line_1574);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1573)).name_);
f_expect_kw_278(F->up, rt_str("IS", 2));
f_body_part_335(F->up, F->x_1573);
} else {
F->x_1573 = f_nn_256(F->up, ((rt_int)50LL), F->line_1574);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1573)).name_);
if (((f_at_kw_265(F->up, rt_str("IS", 2)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_827(F->up, F->x_1573, &(*F->res_693));
goto ret_;
}
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("RANGE", 5)))) {
f_subtype_ind_311(F->up, &(*(P164)rt_nil_check(F->x_1573)).a_);
} else {
(*(P164)rt_nil_check(F->x_1573)).a_ = f_nn_256(F->up, ((rt_int)14LL), F->line_1574);
f_simple_expr_299(F->up, &(*(P164)rt_nil_check((*(P164)rt_nil_check(F->x_1573)).a_)).a_);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check((*(P164)rt_nil_check(F->x_1573)).a_)).b_);
}
f_expect_op_280(F->up, rt_str(")", 1));
}
if (f_at_kw_265(F->up, rt_str("IS", 2))) {
f_skip_276(F->up);
f_decl_part_323(F->up, &(*(P164)rt_nil_check(F->x_1573)).c_);
if (f_at_kw_265(F->up, rt_str("PRIVATE", 7))) {
f_skip_276(F->up);
f_decl_part_323(F->up, &(*(P164)rt_nil_check(F->x_1573)).d_);
}
f_expect_kw_278(F->up, rt_str("END", 3));
}
}
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
f_skip_276(F->up);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_693) = F->x_1573;
ret_:

  return;
}

static void f_entry_p_696(struct f_greenc_1fr *up_, P164 *res_695) {
  struct f_entry_p_696fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_695 = res_695;
F->x_1575 = NULL;
f_expect_kw_278(F->up, rt_str("ENTRY", 5));
F->x_1575 = f_nn_256(F->up, ((rt_int)52LL), f_cur_line_263(F->up));
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1575)).name_);
if ((f_at_op_267(F->up, rt_str("(", 1)) && (!((f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_273(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_273(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_276(F->up);
if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(")", 1)))) {
f_subtype_ind_311(F->up, &(*(P164)rt_nil_check(F->x_1575)).b_);
} else {
(*(P164)rt_nil_check(F->x_1575)).b_ = f_nn_256(F->up, ((rt_int)14LL), f_cur_line_263(F->up));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check((*(P164)rt_nil_check(F->x_1575)).b_)).a_);
f_expect_op_280(F->up, rt_str("..", 2));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check((*(P164)rt_nil_check(F->x_1575)).b_)).b_);
}
f_expect_op_280(F->up, rt_str(")", 1));
}
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_formal_part_329(F->up, &(*(P164)rt_nil_check(F->x_1575)).a_);
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_695) = F->x_1575;
ret_:

  return;
}

static void f_accept_p_698(struct f_greenc_1fr *up_, P164 *res_697) {
  struct f_accept_p_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_697 = res_697;
F->x_1576 = NULL;
f_expect_kw_278(F->up, rt_str("ACCEPT", 6));
F->x_1576 = f_nn_256(F->up, ((rt_int)34LL), f_cur_line_263(F->up));
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->x_1576)).name_);
if ((f_at_op_267(F->up, rt_str("(", 1)) && (!((f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_273(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_273(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_276(F->up);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->x_1576)).c_);
f_expect_op_280(F->up, rt_str(")", 1));
}
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_formal_part_329(F->up, &(*(P164)rt_nil_check(F->x_1576)).a_);
}
if (f_at_kw_265(F->up, rt_str("DO", 2))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1576)).flag_ = ((rt_int)1LL);
f_statements_342(F->up, &(*(P164)rt_nil_check(F->x_1576)).b_);
f_expect_kw_278(F->up, rt_str("END", 3));
if (f_at_kind_269(F->up, ((rt_int)1LL))) {
f_skip_276(F->up);
}
}
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_697) = F->x_1576;
ret_:

  return;
}

static void f_delay_p_700(struct f_greenc_1fr *up_, P164 *res_699) {
  struct f_delay_p_700fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_699 = res_699;
F->x_1577 = NULL;
f_expect_kw_278(F->up, rt_str("DELAY", 5));
F->x_1577 = f_nn_256(F->up, ((rt_int)32LL), f_cur_line_263(F->up));
f_simple_expr_299(F->up, &(*(P164)rt_nil_check(F->x_1577)).a_);
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_699) = F->x_1577;
ret_:

  return;
}

static void f_designators_702(struct f_greenc_1fr *up_, P164 *res_701) {
  struct f_designators_702fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_701 = res_701;
F->head_1578 = NULL;
F->tail_1579 = NULL;
F->n_1580 = NULL;
for (;;) {
f_name_p_309(F->up, &F->n_1580);
f_append_260(F->up, &F->head_1578, &F->tail_1579, F->n_1580);
if ((!f_at_op_267(F->up, rt_str(",", 1)))) {
goto L_end_1581;
}
f_skip_276(F->up);
}
L_end_1581: ;
f_expect_op_280(F->up, rt_str(";", 1));
(*F->res_701) = F->head_1578;
ret_:

  return;
}

static void f_parse_task_statement_704(struct f_greenc_1fr *up_, P164 *res_703) {
  struct f_parse_task_statement_704fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_703 = res_703;
F->x_1582 = NULL;
F->alt_1583 = NULL;
F->head_1584 = NULL;
F->tail_1585 = NULL;
F->line_1586 = f_cur_line_263(F->up);
(*F->res_703) = NULL;
if (f_at_kw_265(F->up, rt_str("INITIATE", 8))) {
f_skip_276(F->up);
F->x_1582 = f_nn_256(F->up, ((rt_int)33LL), F->line_1586);
f_designators_702(F->up, &(*(P164)rt_nil_check(F->x_1582)).a_);
(*F->res_703) = F->x_1582;
} else if (f_at_kw_265(F->up, rt_str("ABORT", 5))) {
f_skip_276(F->up);
F->x_1582 = f_nn_256(F->up, ((rt_int)36LL), F->line_1586);
f_designators_702(F->up, &(*(P164)rt_nil_check(F->x_1582)).a_);
(*F->res_703) = F->x_1582;
} else if (f_at_kw_265(F->up, rt_str("DELAY", 5))) {
f_delay_p_700(F->up, &(*F->res_703));
} else if (f_at_kw_265(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_698(F->up, &(*F->res_703));
} else if (f_at_kw_265(F->up, rt_str("SELECT", 6))) {
f_skip_276(F->up);
F->x_1582 = f_nn_256(F->up, ((rt_int)35LL), F->line_1586);
for (;;) {
F->alt_1583 = f_nn_256(F->up, ((rt_int)64LL), f_cur_line_263(F->up));
if (f_at_kw_265(F->up, rt_str("WHEN", 4))) {
f_skip_276(F->up);
f_expr_293(F->up, &(*(P164)rt_nil_check(F->alt_1583)).a_);
f_expect_op_280(F->up, rt_str("=>", 2));
}
if (f_at_kw_265(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_698(F->up, &(*(P164)rt_nil_check(F->alt_1583)).b_);
} else if (f_at_kw_265(F->up, rt_str("DELAY", 5))) {
f_delay_p_700(F->up, &(*(P164)rt_nil_check(F->alt_1583)).b_);
} else {
f_perror_275(F->up, rt_str("a select alternative starts with accept or delay", 48));
}
f_statements_342(F->up, &(*(P164)rt_nil_check(F->alt_1583)).c_);
f_append_260(F->up, &F->head_1584, &F->tail_1585, F->alt_1583);
if ((!f_at_kw_265(F->up, rt_str("OR", 2)))) {
goto L_end_1587;
}
f_skip_276(F->up);
}
L_end_1587: ;
if (f_at_kw_265(F->up, rt_str("ELSE", 4))) {
f_skip_276(F->up);
(*(P164)rt_nil_check(F->x_1582)).flag_ = ((rt_int)1LL);
f_statements_342(F->up, &(*(P164)rt_nil_check(F->x_1582)).b_);
}
f_expect_kw_278(F->up, rt_str("END", 3));
f_expect_kw_278(F->up, rt_str("SELECT", 6));
f_expect_op_280(F->up, rt_str(";", 1));
(*(P164)rt_nil_check(F->x_1582)).a_ = F->head_1584;
(*F->res_703) = F->x_1582;
}
ret_:

  return;
}

static void f_path_at_708(struct f_greenc_1fr *up_, rt_int level_705, rstr field_706, P134 *r_707) {
  struct f_path_at_708fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_705 = level_705;
F->field_706 = rt_str_copy(field_706);
F->r_707 = r_707;
if ((F->level_705 <= ((rt_int)0LL))) {
(*F->r_707) = f_mk_190(F->up, F->field_706);
goto ret_;
}
(*F->r_707) = f_mk_190(F->up, rt_str("F", 1));
{ rt_int lo1590 = ((rt_int)1LL), hi1591 = rt_sub(F->up->cur_level_133, F->level_705);
for (rt_int it1592 = lo1590; it1592 <= hi1591; it1592++) {
F->i_1589 = it1592;
(*F->r_707) = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*F->r_707))), rt_str("->up", 4)));
}
}
L_end_1588: ;
(*F->r_707) = f_mk_190(F->up, rt_str_cat(rt_str_cat((*(P134)rt_nil_check((*F->r_707))), rt_str("->", 2)), F->field_706));
ret_:

  return;
}

static int f_is_task_name_710(struct f_greenc_1fr *up_, rstr n_709) {
  struct f_is_task_name_710fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_709 = rt_str_copy(n_709);
F->y_1593 = NULL;
F->y_1593 = f_lookup_358(F->up, F->n_709);
F->result_ = ((F->y_1593 != NULL) && ((*(P111)rt_nil_check(F->y_1593)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_714(struct f_greenc_1fr *up_, P164 e_711, P111 *y_712, P164 *ix_713) {
  struct f_task_of_714fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_711 = e_711;
F->y_712 = y_712;
F->ix_713 = ix_713;
F->n_1594 = NULL;
F->n_1594 = F->e_711;
(*F->ix_713) = NULL;
if (((*(P164)rt_nil_check(F->e_711)).kind_ == ((rt_int)8LL))) {
F->n_1594 = (*(P164)rt_nil_check(F->e_711)).a_;
(*F->ix_713) = (*(P164)rt_nil_check(F->e_711)).b_;
}
if (((*(P164)rt_nil_check(F->n_1594)).kind_ != ((rt_int)5LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_711)).line_, rt_str("a task name is required", 23));
}
(*F->y_712) = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1594)).name_)));
if ((((*F->y_712) == NULL) || ((*(P111)rt_nil_check((*F->y_712))).kind_ != ((rt_int)9LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_711)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1594)).name_)), rt_str(" is not a task", 14)));
}
if ((((*F->ix_713) != NULL) && ((*(P111)rt_nil_check((*F->y_712))).c_ == NULL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_711)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1594)).name_)), rt_str(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_716(struct f_greenc_1fr *up_, P134 *r_715) {
  struct f_own_index_716fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_715 = r_715;
F->y_1595 = NULL;
F->y_1595 = f_lookup_358(F->up, rt_str("INDEX_", 6));
if ((F->y_1595 == NULL)) {
f_fail_211(F->up, ((rt_int)0LL), rt_str("not inside the body of a task family", 36));
}
f_access_of_511(F->up, F->y_1595, &(*F->r_715));
ret_:

  return;
}

static void f_member_721(struct f_greenc_1fr *up_, P111 y_717, rstr arr_718, rstr i_719, P134 *r_720) {
  struct f_member_721fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_717 = y_717;
F->arr_718 = rt_str_copy(arr_718);
F->i_719 = rt_str_copy(i_719);
F->r_720 = r_720;
F->lo_1596 = NULL;
F->hi_1597 = NULL;
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_717)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_717)).cname_)), rt_str("lo", 2)), &F->lo_1596);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_717)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_717)).cname_)), rt_str("hi", 2)), &F->hi_1597);
(*F->r_720) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->arr_718, rt_str("[rt_index(", 10)), F->i_719), rt_str(", ", 2)), (*(P134)rt_nil_check(F->lo_1596))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->hi_1597))), rt_str(") - ", 4)), (*(P134)rt_nil_check(F->lo_1596))), 93));
ret_:

  return;
}

static void f_act_path_724(struct f_greenc_1fr *up_, P111 y_722, P134 *r_723) {
  struct f_act_path_724fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_722 = y_722;
F->r_723 = r_723;
F->i_1598 = NULL;
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_722)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_722)).cname_)), rt_str("act", 3)), &(*F->r_723));
if (((*(P111)rt_nil_check(F->y_722)).c_ != NULL)) {
f_own_index_716(F->up, &F->i_1598);
f_member_721(F->up, F->y_722, (*(P134)rt_nil_check((*F->r_723))), (*(P134)rt_nil_check(F->i_1598)), &(*F->r_723));
}
ret_:

  return;
}

static void f_act_path_i_728(struct f_greenc_1fr *up_, P111 y_725, rstr i_726, P134 *r_727) {
  struct f_act_path_i_728fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_725 = y_725;
F->i_726 = rt_str_copy(i_726);
F->r_727 = r_727;
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_725)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_725)).cname_)), rt_str("act", 3)), &(*F->r_727));
f_member_721(F->up, F->y_725, (*(P134)rt_nil_check((*F->r_727))), F->i_726, &(*F->r_727));
ret_:

  return;
}

static void f_entry_path_732(struct f_greenc_1fr *up_, P111 y_729, rstr i_730, P134 *r_731) {
  struct f_entry_path_732fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_729 = y_729;
F->i_730 = rt_str_copy(i_730);
F->r_731 = r_731;
F->own_1599 = NULL;
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_729)).level_, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_729)).access_path_)), &(*F->r_731));
if (((((*(P111)rt_nil_check(F->y_729)).members_ != NULL) && ((*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_729)).members_)).c_ != NULL)) && (!(*(P111)rt_nil_check(F->y_729)).ro_))) {
if (((F->i_730).len == ((rt_int)0LL))) {
f_own_index_716(F->up, &F->own_1599);
f_member_721(F->up, (*(P111)rt_nil_check(F->y_729)).members_, (*(P134)rt_nil_check((*F->r_731))), (*(P134)rt_nil_check(F->own_1599)), &(*F->r_731));
} else {
f_member_721(F->up, (*(P111)rt_nil_check(F->y_729)).members_, (*(P134)rt_nil_check((*F->r_731))), F->i_730, &(*F->r_731));
}
}
ret_:

  return;
}

static void f_declare_slot_735(struct f_greenc_1fr *up_, rstr ctype_name_733, rstr field_734) {
  struct f_declare_slot_735fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_733 = rt_str_copy(ctype_name_733);
F->field_734 = rt_str_copy(field_734);
if (F->up->in_func_132) {
f_put_to_215(F->up, F->up->fields_buf_131, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, F->ctype_name_733), 32), F->field_734), 59));
} else {
f_put_to_215(F->up, F->up->out_globals_126, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), F->ctype_name_733), 32), F->field_734), 59));
}
ret_:

  return;
}

static void f_task_decl_737(struct f_greenc_1fr *up_, P164 e_736) {
  struct f_task_decl_737fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_736 = e_736;
if (((*(P164)rt_nil_check(F->e_736)).kind_ == ((rt_int)50LL))) {
f_task_spec_749(F->up, F->e_736);
} else if (((*(P164)rt_nil_check(F->e_736)).kind_ == ((rt_int)51LL))) {
f_task_body_753(F->up, F->e_736);
} else if (((*(P164)rt_nil_check(F->e_736)).kind_ == ((rt_int)52LL))) {
f_entry_decl_751(F->up, F->e_736);
} else {
f_generic_decl_829(F->up, F->e_736);
}
ret_:

  return;
}

static void f_family_arg_struct_738(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_738fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_163)) {
F->up->famarg_done_163 = 1;
f_put_to_215(F->up, F->up->out_types_122, rt_str("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_742(struct f_greenc_1fr *up_, P164 b_739, P111 y_740, P134 x_741) {
  struct f_family_bounds_742fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_739 = b_739;
F->y_740 = y_740;
F->x_741 = x_741;
F->lo_1600 = NULL;
F->hi_1601 = NULL;
F->v_1602 = NULL;
F->vt_1603 = NULL;
F->c_1604 = NULL;
(*(P111)rt_nil_check(F->y_740)).c_ = f_new_cons_385(F->up);
f_declare_slot_735(F->up, rt_str("rt_entry *", 10), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_740)).access_path_)));
f_declare_slot_735(F->up, rt_str("rt_int", 6), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_740)).cname_)), rt_str("flo", 3)));
f_declare_slot_735(F->up, rt_str("rt_int", 6), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_740)).cname_)), rt_str("fhi", 3)));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_740)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_740)).cname_)), rt_str("flo", 3)), &F->lo_1600);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_740)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_740)).cname_)), rt_str("fhi", 3)), &F->hi_1601);
if (((*(P164)rt_nil_check(F->b_739)).kind_ == ((rt_int)14LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->b_739)).a_, NULL, &F->vt_1603, &F->v_1602);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->lo_1600)), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->v_1602))), 59));
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->b_739)).b_, F->vt_1603, &F->vt_1603, &F->v_1602);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->hi_1601)), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->v_1602))), 59));
} else {
f_resolve_412(F->up, F->b_739, &F->vt_1603, &F->c_1604);
if (((*(P171)rt_nil_check(F->c_1604)).lo_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->b_739)).line_, rt_str("an entry family needs a discrete range", 38));
}
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->lo_1600)), rt_str(" = ", 3)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1604)).lo_))), rt_str("; ", 2)), (*(P134)rt_nil_check(F->hi_1601))), rt_str(" = ", 3)), (*(P134)rt_nil_check((*(P171)rt_nil_check(F->c_1604)).hi_))), 59));
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->x_741)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P134)rt_nil_check(F->hi_1601))), rt_str(" >= ", 4)), (*(P134)rt_nil_check(F->lo_1600))), rt_str(" \? ", 3)), (*(P134)rt_nil_check(F->hi_1601))), rt_str(" - ", 3)), (*(P134)rt_nil_check(F->lo_1600))), rt_str(" + 1 : 1));", 11)));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P134)rt_nil_check(F->hi_1601))), rt_str(" - ", 3)), (*(P134)rt_nil_check(F->lo_1600))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P134)rt_nil_check(F->x_741))), rt_str("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_747(struct f_greenc_1fr *up_, P111 y_743, rstr base_744, rstr i_745, P134 *r_746) {
  struct f_entry_family_slot_747fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_743 = y_743;
F->base_744 = rt_str_copy(base_744);
F->i_745 = rt_str_copy(i_745);
F->r_746 = r_746;
F->lo_1605 = NULL;
F->hi_1606 = NULL;
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_743)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_743)).cname_)), rt_str("flo", 3)), &F->lo_1605);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_743)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_743)).cname_)), rt_str("fhi", 3)), &F->hi_1606);
(*F->r_746) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_744, rt_str("[rt_index(", 10)), F->i_745), rt_str(", ", 2)), (*(P134)rt_nil_check(F->lo_1605))), rt_str(", ", 2)), (*(P134)rt_nil_check(F->hi_1606))), rt_str(") - ", 4)), (*(P134)rt_nil_check(F->lo_1605))), 93));
ret_:

  return;
}

static void f_task_spec_749(struct f_greenc_1fr *up_, P164 e_748) {
  struct f_task_spec_749fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_748 = e_748;
F->has_procs_1607 = 0;
F->fields_1609 = NULL;
F->ct_1610 = NULL;
F->pm_1611 = NULL;
F->fp_1612 = NULL;
F->flo_1613 = NULL;
F->fhi_1614 = NULL;
F->y_1615 = NULL;
F->m_1616 = NULL;
F->z_1617 = NULL;
F->saved_1618 = NULL;
F->saved_1618 = F->up->cur_task_161;
F->d_1619 = NULL;
F->v_1620 = NULL;
F->p_1621 = NULL;
F->p2_1622 = NULL;
F->vt_1623 = NULL;
F->r_1624 = NULL;
F->y_1615 = f_new_sym_382(F->up, ((rt_int)9LL), (*(P164)rt_nil_check(F->e_748)).name_);
f_new_name_193(F->up, rt_str_catc(rt_str_cat(rt_str("t_", 2), f_lower_s_201(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_748)).name_)))), 95), &(*(P111)rt_nil_check(F->y_1615)).cname_);
(*(P111)rt_nil_check(F->y_1615)).decl_ = F->e_748;
if (F->up->in_func_132) {
(*(P111)rt_nil_check(F->y_1615)).level_ = F->up->cur_level_133;
}
(*(P111)rt_nil_check(F->y_1615)).access_path_ = (*(P111)rt_nil_check(F->y_1615)).cname_;
f_declare_slot_735(F->up, rt_str("rt_taskdecl", 11), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("decl", 4)));
if (((*(P164)rt_nil_check(F->e_748)).a_ != NULL)) {
F->r_1624 = (*(P164)rt_nil_check(F->e_748)).a_;
if (((*(P164)rt_nil_check(F->r_1624)).kind_ == ((rt_int)80LL))) {
F->r_1624 = (*(P164)rt_nil_check(F->r_1624)).a_;
}
(*(P111)rt_nil_check(F->y_1615)).c_ = f_new_cons_385(F->up);
f_declare_slot_735(F->up, rt_str("rt_act *", 8), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("act", 3)));
f_declare_slot_735(F->up, rt_str("rt_int", 6), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("lo", 2)));
f_declare_slot_735(F->up, rt_str("rt_int", 6), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("hi", 2)));
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1624)).a_, F->up->ty_int_150, &F->vt_1623, &F->v_1620);
(*(P111)rt_nil_check(F->y_1615)).t_ = F->vt_1623;
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1615)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("lo", 2)), &F->p_1621);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->p_1621)), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->v_1620))), 59));
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->r_1624)).b_, F->up->ty_int_150, &F->vt_1623, &F->v_1620);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1615)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("hi", 2)), &F->p2_1622);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->p2_1622)), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->v_1620))), 59));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1615)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("act", 3)), &F->v_1620);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->v_1620)), rt_str(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P134)rt_nil_check(F->p2_1622))), rt_str(" >= ", 4)), (*(P134)rt_nil_check(F->p_1621))), rt_str(" \? ", 3)), (*(P134)rt_nil_check(F->p2_1622))), rt_str(" - ", 3)), (*(P134)rt_nil_check(F->p_1621))), rt_str(" + 1 : 1));", 11)));
f_family_arg_struct_738(F->up);
} else {
f_declare_slot_735(F->up, rt_str("rt_act", 6), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("act", 3)));
}
f_put_to_215(F->up, F->up->out_protos_125, rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_))), rt_str("run(void *a);", 13)));
if ((!F->up->in_func_132)) {
f_put_to_215(F->up, F->up->out_awaits_170, rt_str_cat(rt_str_cat(rt_str("  rt_await_decl(&", 17), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_))), rt_str("decl);", 6)));
}
f_open_scope_378(F->up);
F->up->cur_task_161 = F->y_1615;
F->saved_defer_1608 = F->up->defer_entry_structs_169;
F->up->defer_entry_structs_169 = 1;
f_decl_elements_462(F->up, (*(P164)rt_nil_check(F->e_748)).c_);
f_decl_elements_462(F->up, (*(P164)rt_nil_check(F->e_748)).d_);
F->up->defer_entry_structs_169 = F->saved_defer_1608;
F->m_1616 = F->up->scope_stack_115;
while (((F->m_1616 != NULL) && ((*(P111)rt_nil_check(F->m_1616)).depth_ == F->up->depth_114))) {
if ((((*(P111)rt_nil_check(F->m_1616)).kind_ == ((rt_int)10LL)) && (!(*(P111)rt_nil_check(F->m_1616)).from_use_))) {
F->fields_1609 = f_mk_190(F->up, rt_str(" int dummy_;", 12));
F->pm_1611 = (*(P111)rt_nil_check(F->m_1616)).params_;
while ((F->pm_1611 != NULL)) {
f_ctype_396(F->up, (*(P1124)rt_nil_check(F->pm_1611)).t_, &F->ct_1610);
if (((*(P1124)rt_nil_check(F->pm_1611)).mode_ == ((rt_int)1LL))) {
F->fields_1609 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->fields_1609)), 32), (*(P134)rt_nil_check(F->ct_1610))), 32), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1611)).cfield_))), 59));
} else {
F->fields_1609 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->fields_1609)), 32), (*(P134)rt_nil_check(F->ct_1610))), rt_str(" *", 2)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1611)).cfield_))), 59));
}
F->pm_1611 = (*(P1124)rt_nil_check(F->pm_1611)).next_;
}
L_end_1626: ;
f_put_to_215(F->up, F->up->out_types_122, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1616)).cname_))), rt_str("p {", 3)), (*(P134)rt_nil_check(F->fields_1609))), rt_str(" };", 3)));
}
F->m_1616 = (*(P111)rt_nil_check(F->m_1616)).stack_;
}
L_end_1625: ;
F->m_1616 = F->up->scope_stack_115;
while (((F->m_1616 != NULL) && ((*(P111)rt_nil_check(F->m_1616)).depth_ == F->up->depth_114))) {
if (((((*(P111)rt_nil_check(F->m_1616)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->m_1616)).kind_ == ((rt_int)4LL))) && (!(*(P111)rt_nil_check(F->m_1616)).from_use_))) {
if (((!F->has_procs_1607) && ((*(P111)rt_nil_check(F->y_1615)).c_ != NULL))) {
f_declare_slot_735(F->up, rt_str("void **", 7), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("frames", 6)));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1615)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("frames", 6)), &F->fp_1612);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1615)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("lo", 2)), &F->flo_1613);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1615)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("hi", 2)), &F->fhi_1614);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->fp_1612)), rt_str(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P134)rt_nil_check(F->fhi_1614))), rt_str(" >= ", 4)), (*(P134)rt_nil_check(F->flo_1613))), rt_str(" \? ", 3)), (*(P134)rt_nil_check(F->fhi_1614))), rt_str(" - ", 3)), (*(P134)rt_nil_check(F->flo_1613))), rt_str(" + 1 : 1));", 11)));
F->has_procs_1607 = 1;
} else if ((!F->has_procs_1607)) {
f_declare_slot_735(F->up, rt_str("void *", 6), rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("frame", 5)));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1615)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("frame", 5)), &F->fp_1612);
f_emit_217(F->up, rt_str_cat((*(P134)rt_nil_check(F->fp_1612)), rt_str(" = NULL;", 8)));
F->has_procs_1607 = 1;
}
if (((*(P111)rt_nil_check(F->y_1615)).c_ != NULL)) {
(*(P111)rt_nil_check(F->m_1616)).access_path_ = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("frames", 6)));
} else {
(*(P111)rt_nil_check(F->m_1616)).access_path_ = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1615)).cname_)), rt_str("frame", 5)));
}
(*(P111)rt_nil_check(F->m_1616)).members_ = F->y_1615;
}
f_copy_sym_652(F->up, F->m_1616, &F->z_1617);
(*(P111)rt_nil_check(F->z_1617)).hidden_ = (*(P111)rt_nil_check(F->m_1616)).from_use_;
(*(P111)rt_nil_check(F->z_1617)).mnext_ = (*(P111)rt_nil_check(F->y_1615)).members_;
(*(P111)rt_nil_check(F->y_1615)).members_ = F->z_1617;
F->m_1616 = (*(P111)rt_nil_check(F->m_1616)).stack_;
}
L_end_1627: ;
f_close_scope_379(F->up);
F->up->cur_task_161 = F->saved_1618;
f_define_377(F->up, F->y_1615, (*(P164)rt_nil_check(F->e_748)).line_);
ret_:

  return;
}

static void f_entry_decl_751(struct f_greenc_1fr *up_, P164 e_750) {
  struct f_entry_decl_751fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_750 = e_750;
F->y_1628 = NULL;
F->p_1629 = NULL;
F->p_1629 = (*(P164)rt_nil_check(F->e_750)).a_;
F->pm_1630 = NULL;
F->tail_1631 = NULL;
F->fields_1632 = NULL;
F->ct_1633 = NULL;
F->x_1634 = NULL;
F->lo_1635 = NULL;
F->hi_1636 = NULL;
if ((F->up->cur_task_161 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_750)).line_, rt_str("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_1628 = f_new_sym_382(F->up, ((rt_int)10LL), (*(P164)rt_nil_check(F->e_750)).name_);
f_new_name_193(F->up, rt_str_catc(rt_str_cat(rt_str("e_", 2), f_lower_s_201(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_750)).name_)))), 95), &(*(P111)rt_nil_check(F->y_1628)).cname_);
F->fields_1632 = f_mk_190(F->up, rt_str(" int dummy_;", 12));
while ((F->p_1629 != NULL)) {
F->pm_1630 = ({ R1125 *cell1638 = rt_alloc(sizeof(R1125)); *cell1638 = cp_R1125(({ R1125 ag1639; ag1639.name_ = (*(P164)rt_nil_check(F->p_1629)).name_; ag1639.mode_ = (*(P164)rt_nil_check(F->p_1629)).ival_; ag1639.t_ = NULL; ag1639.c_ = NULL; ag1639.cfield_ = NULL; ag1639.dflt_ = NULL; ag1639.next_ = NULL; ag1639; })); (P1124)cell1638; });
f_resolve_412(F->up, (*(P164)rt_nil_check(F->p_1629)).a_, &(*(P1124)rt_nil_check(F->pm_1630)).t_, &(*(P1124)rt_nil_check(F->pm_1630)).c_);
(*(P1124)rt_nil_check(F->pm_1630)).cfield_ = f_mk_190(F->up, f_c_field_207(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->p_1629)).name_))));
f_ctype_396(F->up, (*(P1124)rt_nil_check(F->pm_1630)).t_, &F->ct_1633);
if (((*(P1124)rt_nil_check(F->pm_1630)).mode_ == ((rt_int)1LL))) {
F->fields_1632 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->fields_1632)), 32), (*(P134)rt_nil_check(F->ct_1633))), 32), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1630)).cfield_))), 59));
} else {
F->fields_1632 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->fields_1632)), 32), (*(P134)rt_nil_check(F->ct_1633))), rt_str(" *", 2)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1630)).cfield_))), 59));
}
if ((F->tail_1631 == NULL)) {
(*(P111)rt_nil_check(F->y_1628)).params_ = F->pm_1630;
} else {
(*(P1124)rt_nil_check(F->tail_1631)).next_ = F->pm_1630;
}
F->tail_1631 = F->pm_1630;
F->p_1629 = (*(P164)rt_nil_check(F->p_1629)).next_;
}
L_end_1637: ;
if ((!F->up->defer_entry_structs_169)) {
f_put_to_215(F->up, F->up->out_types_122, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1628)).cname_))), rt_str("p {", 3)), (*(P134)rt_nil_check(F->fields_1632))), rt_str(" };", 3)));
}
(*(P111)rt_nil_check(F->y_1628)).result_ = F->up->ty_void_155;
(*(P111)rt_nil_check(F->y_1628)).decl_ = F->e_750;
(*(P111)rt_nil_check(F->y_1628)).members_ = F->up->cur_task_161;
if (F->up->in_func_132) {
(*(P111)rt_nil_check(F->y_1628)).level_ = F->up->cur_level_133;
}
(*(P111)rt_nil_check(F->y_1628)).access_path_ = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1628)).cname_)), rt_str("ent", 3)));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1628)).level_, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1628)).access_path_)), &F->x_1634);
(*(P111)rt_nil_check(F->y_1628)).ro_ = ((((*(P111)rt_nil_check(F->up->cur_task_161)).c_ != NULL) && F->up->in_func_132) && (F->up->cur_level_133 > (*(P111)rt_nil_check(F->up->cur_task_161)).level_));
if (((*(P164)rt_nil_check(F->e_750)).b_ != NULL)) {
if ((((*(P111)rt_nil_check(F->up->cur_task_161)).c_ != NULL) && (!(*(P111)rt_nil_check(F->y_1628)).ro_))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_750)).line_, rt_str("an entry family in a task family is not handled", 47));
}
f_family_bounds_742(F->up, (*(P164)rt_nil_check(F->e_750)).b_, F->y_1628, F->x_1634);
} else if ((((*(P111)rt_nil_check(F->up->cur_task_161)).c_ != NULL) && (!(*(P111)rt_nil_check(F->y_1628)).ro_))) {
f_declare_slot_735(F->up, rt_str("rt_entry *", 10), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1628)).access_path_)));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->up->cur_task_161)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->cur_task_161)).cname_)), rt_str("lo", 2)), &F->lo_1635);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->up->cur_task_161)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->cur_task_161)).cname_)), rt_str("hi", 2)), &F->hi_1636);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->x_1634)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P134)rt_nil_check(F->hi_1636))), rt_str(" >= ", 4)), (*(P134)rt_nil_check(F->lo_1635))), rt_str(" \? ", 3)), (*(P134)rt_nil_check(F->hi_1636))), rt_str(" - ", 3)), (*(P134)rt_nil_check(F->lo_1635))), rt_str(" + 1 : 1));", 11)));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P134)rt_nil_check(F->hi_1636))), rt_str(" - ", 3)), (*(P134)rt_nil_check(F->lo_1635))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P134)rt_nil_check(F->x_1634))), rt_str("[k_]);", 6)));
} else {
f_declare_slot_735(F->up, rt_str("rt_entry", 8), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1628)).access_path_)));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("rt_entry_init(&", 15), (*(P134)rt_nil_check(F->x_1634))), rt_str(");", 2)));
}
f_define_377(F->up, F->y_1628, (*(P164)rt_nil_check(F->e_750)).line_);
ret_:

  return;
}

static void f_task_body_753(struct f_greenc_1fr *up_, P164 e_752) {
  struct f_task_body_753fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_752 = e_752;
F->y_1640 = NULL;
F->y_1640 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_752)).name_)));
F->b_1641 = NULL;
F->m_1642 = NULL;
F->z_1643 = NULL;
F->upp_1644 = NULL;
F->saved_1645 = NULL;
F->saved_1645 = F->up->cur_task_161;
if (((F->y_1640 != NULL) && ((*(P111)rt_nil_check(F->y_1640)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_833(F->up, F->e_752);
goto ret_;
}
if (((F->y_1640 == NULL) || ((*(P111)rt_nil_check(F->y_1640)).kind_ != ((rt_int)9LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_752)).line_, rt_str_cat(rt_str_cat(rt_str("task body ", 10), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_752)).name_))), rt_str(" has no task specification", 26)));
}
F->b_1641 = f_new_sym_382(F->up, ((rt_int)4LL), (*(P164)rt_nil_check(F->e_752)).name_);
(*(P111)rt_nil_check(F->b_1641)).cname_ = f_mk_190(F->up, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1640)).cname_)), rt_str("body", 4)));
(*(P111)rt_nil_check(F->b_1641)).result_ = F->up->ty_void_155;
(*(P111)rt_nil_check(F->b_1641)).level_ = F->up->cur_level_133;
(*(P111)rt_nil_check(F->b_1641)).decl_ = F->e_752;
if (((*(P111)rt_nil_check(F->y_1640)).c_ != NULL)) {
(*(P111)rt_nil_check(F->b_1641)).params_ = ({ R1125 *cell1646 = rt_alloc(sizeof(R1125)); *cell1646 = cp_R1125(({ R1125 ag1647; ag1647.name_ = f_mk_190(F->up, rt_str("INDEX_", 6)); ag1647.mode_ = ((rt_int)1LL); ag1647.t_ = F->up->ty_int_150; ag1647.c_ = NULL; ag1647.cfield_ = f_mk_190(F->up, rt_str("index_", 6)); ag1647.dflt_ = NULL; ag1647.next_ = NULL; ag1647; })); (P1124)cell1646; });
}
f_open_scope_378(F->up);
F->m_1642 = (*(P111)rt_nil_check(F->y_1640)).members_;
while ((F->m_1642 != NULL)) {
f_copy_sym_652(F->up, F->m_1642, &F->z_1643);
f_define_377(F->up, F->z_1643, (*(P164)rt_nil_check(F->e_752)).line_);
if ((((((*(P111)rt_nil_check(F->m_1642)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->m_1642)).kind_ == ((rt_int)4LL))) && ((*(P111)rt_nil_check(F->m_1642)).access_path_ != NULL)) && f_same_task_361(F->up, (*(P111)rt_nil_check(F->m_1642)).members_, F->y_1640))) {
if (((*(P111)rt_nil_check(F->y_1640)).level_ > ((rt_int)0LL))) {
F->upp_1644 = f_mk_190(F->up, rt_str("up_->", 5));
} else {
F->upp_1644 = f_mk_190(F->up, rt_str("", 0));
}
if (((*(P111)rt_nil_check(F->y_1640)).c_ != NULL)) {
(*(P111)rt_nil_check(F->b_1641)).access_path_ = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->upp_1644)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1642)).access_path_))), rt_str("[index_ - ", 10)), (*(P134)rt_nil_check(F->upp_1644))), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1640)).cname_))), rt_str("lo] = F;", 8)));
} else {
(*(P111)rt_nil_check(F->b_1641)).access_path_ = f_mk_190(F->up, rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->upp_1644)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1642)).access_path_))), rt_str(" = F;", 5)));
}
}
F->m_1642 = (*(P111)rt_nil_check(F->m_1642)).mnext_;
}
L_end_1648: ;
F->up->cur_task_161 = F->y_1640;
f_subprogram_body_471(F->up, F->e_752, F->b_1641);
F->up->cur_task_161 = F->saved_1645;
f_close_scope_379(F->up);
if ((((*(P111)rt_nil_check(F->y_1640)).c_ != NULL) && ((*(P111)rt_nil_check(F->b_1641)).level_ > ((rt_int)0LL)))) {
f_put_to_215(F->up, F->up->out_funcs_127, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1640)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->b_1641)).cname_))), rt_str("(g->up, g->i); }", 16)));
} else if (((*(P111)rt_nil_check(F->y_1640)).c_ != NULL)) {
f_put_to_215(F->up, F->up->out_funcs_127, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1640)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->b_1641)).cname_))), rt_str("(g->i); }", 9)));
} else if (((*(P111)rt_nil_check(F->b_1641)).level_ > ((rt_int)0LL))) {
f_put_to_215(F->up, F->up->out_funcs_127, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1640)).cname_))), rt_str("run(void *a) { ", 15)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->b_1641)).cname_))), rt_str("(a); }", 6)));
} else {
f_put_to_215(F->up, F->up->out_funcs_127, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1640)).cname_))), rt_str("run(void *a) { (void)a; ", 24)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->b_1641)).cname_))), rt_str("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_756(struct f_greenc_1fr *up_, P164 decls_754, P134 *aw_755) {
  struct f_task_awaits_756fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_754 = decls_754;
F->aw_755 = aw_755;
F->e_1649 = NULL;
F->e_1649 = F->decls_754;
F->y_1650 = NULL;
F->p_1651 = NULL;
(*F->aw_755) = f_mk_190(F->up, rt_str("", 0));
while ((F->e_1649 != NULL)) {
if ((((*(P164)rt_nil_check(F->e_1649)).kind_ == ((rt_int)50LL)) || (((*(P164)rt_nil_check(F->e_1649)).kind_ == ((rt_int)53LL)) && ((*(P164)rt_nil_check(F->e_1649)).ival_ == ((rt_int)50LL))))) {
F->y_1650 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_1649)).name_)));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1650)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1650)).cname_)), rt_str("decl", 4)), &F->p_1651);
(*F->aw_755) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check((*F->aw_755))), rt_str(" rt_await_decl(&", 16)), (*(P134)rt_nil_check(F->p_1651))), rt_str(");", 2)));
}
F->e_1649 = (*(P164)rt_nil_check(F->e_1649)).next_;
}
L_end_1652: ;
ret_:

  return;
}

static void f_task_failure_758(struct f_greenc_1fr *up_, P164 s_757) {
  struct f_task_failure_758fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_757 = s_757;
F->y_1653 = NULL;
F->y_1653 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_757)).tag_)));
F->a_1654 = NULL;
F->i_1655 = NULL;
F->it_1656 = NULL;
if (((*(P164)rt_nil_check(F->s_757)).a_ != NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_757)).a_, (*(P111)rt_nil_check(F->y_1653)).t_, &F->it_1656, &F->i_1655);
f_act_path_i_728(F->up, F->y_1653, (*(P134)rt_nil_check(F->i_1655)), &F->a_1654);
} else {
f_act_path_724(F->up, F->y_1653, &F->a_1654);
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("rt_exterminate(&", 16), (*(P134)rt_nil_check(F->a_1654))), rt_str(");", 2)));
ret_:

  return;
}

static void f_entry_sym_762(struct f_greenc_1fr *up_, P164 e_759, P111 *y_760, P164 *ix_761) {
  struct f_entry_sym_762fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_759 = e_759;
F->y_760 = y_760;
F->ix_761 = ix_761;
F->t_1657 = NULL;
(*F->ix_761) = NULL;
F->up->fam_ix_166 = NULL;
if (((*(P164)rt_nil_check(F->e_759)).kind_ == ((rt_int)8LL))) {
f_entry_sym_762(F->up, (*(P164)rt_nil_check(F->e_759)).a_, &(*F->y_760), &(*F->ix_761));
if (((*(P111)rt_nil_check((*F->y_760))).c_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_759)).line_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check((*F->y_760))).name_)), rt_str(" is not an entry family", 23)));
}
F->up->fam_ix_166 = (*(P164)rt_nil_check(F->e_759)).b_;
goto ret_;
}
if (((((*(P164)rt_nil_check(F->e_759)).kind_ == ((rt_int)9LL)) && ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_759)).a_)).kind_ == ((rt_int)8LL))) && ((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_759)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->t_1657 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_759)).a_)).a_)).name_)));
if ((((F->t_1657 == NULL) || ((*(P111)rt_nil_check(F->t_1657)).kind_ != ((rt_int)9LL))) || ((*(P111)rt_nil_check(F->t_1657)).c_ == NULL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_759)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_759)).a_)).a_)).name_)), rt_str(" is not a task family", 21)));
}
(*F->y_760) = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_759)).a_)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_759)).name_)), (*(P164)rt_nil_check(F->e_759)).line_);
(*F->ix_761) = (*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_759)).a_)).b_;
if ((((*F->y_760) == NULL) || ((*(P111)rt_nil_check((*F->y_760))).kind_ != ((rt_int)10LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_759)).line_, rt_str("not an entry", 12));
}
goto ret_;
}
if (((*(P164)rt_nil_check(F->e_759)).kind_ == ((rt_int)5LL))) {
(*F->y_760) = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_759)).name_)));
if (((*(P164)rt_nil_check(F->e_759)).tag_ != NULL)) {
(*F->y_760) = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_759)).tag_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_759)).name_)), (*(P164)rt_nil_check(F->e_759)).line_);
}
} else if ((((*(P164)rt_nil_check(F->e_759)).kind_ == ((rt_int)9LL)) && f_is_package_643(F->up, (*(P164)rt_nil_check(F->e_759)).a_))) {
(*F->y_760) = f_member_of_647(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->e_759)).a_)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_759)).name_)), (*(P164)rt_nil_check(F->e_759)).line_);
} else {
(*F->y_760) = NULL;
}
if ((((*F->y_760) == NULL) || ((*(P111)rt_nil_check((*F->y_760))).kind_ != ((rt_int)10LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_759)).line_, rt_str("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_767(struct f_greenc_1fr *up_, P164 e_763, int is_stmt_764, P116 *t_765, P134 *r_766) {
  struct f_other_call_767fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_763 = e_763;
F->is_stmt_764 = is_stmt_764;
F->t_765 = t_765;
F->r_766 = r_766;
F->y_1658 = NULL;
F->pm_1659 = NULL;
F->a_1660 = NULL;
F->parts_1661 = NULL;
F->v_1662 = NULL;
F->lv_1663 = NULL;
F->ent_1664 = NULL;
F->act_1665 = NULL;
F->i_1666 = NULL;
F->vt_1667 = NULL;
F->lt_1668 = NULL;
F->lc_1669 = NULL;
F->ix_1671 = NULL;
F->fix_1672 = NULL;
F->args_node_1673 = NULL;
f_entry_sym_762(F->up, (*(P164)rt_nil_check(F->e_763)).a_, &F->y_1658, &F->ix_1671);
F->fix_1672 = F->up->fam_ix_166;
F->args_node_1673 = (*(P164)rt_nil_check(F->e_763)).b_;
if ((((*(P111)rt_nil_check(F->y_1658)).c_ != NULL) && (F->fix_1672 == NULL))) {
F->fix_1672 = (*(P164)rt_nil_check(F->e_763)).b_;
F->args_node_1673 = NULL;
}
F->i_1666 = f_mk_190(F->up, rt_str("", 0));
if ((F->ix_1671 != NULL)) {
f_gexpr_566(F->up, F->ix_1671, F->up->ty_int_150, &F->vt_1667, &F->i_1666);
} else if (((((*(P111)rt_nil_check(F->y_1658)).members_ != NULL) && ((*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_1658)).members_)).c_ != NULL)) && ((*(P111)rt_nil_check(F->y_1658)).members_ != F->up->cur_task_161))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_763)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a member of family ", 19), (*(P134)rt_nil_check((*(P111)rt_nil_check((*(P111)rt_nil_check(F->y_1658)).members_)).name_))), rt_str(" must be named: F(I).", 21)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1658)).name_))));
}
if ((!F->is_stmt_764)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_763)).line_, rt_str("an entry call is a statement", 28));
}
if ((F->up->pure_sym_179 != NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_763)).line_, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->pure_sym_179)).name_))), rt_str(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_732(F->up, F->y_1658, (*(P134)rt_nil_check(F->i_1666)), &F->ent_1664);
if (((*(P111)rt_nil_check(F->y_1658)).c_ != NULL)) {
if ((F->fix_1672 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_763)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1658)).name_)), rt_str(" is an entry family: name a member, ", 36)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1658)).name_))), rt_str("(I)", 3)));
}
f_gexpr_566(F->up, F->fix_1672, NULL, &F->vt_1667, &F->v_1662);
f_entry_family_slot_747(F->up, F->y_1658, (*(P134)rt_nil_check(F->ent_1664)), (*(P134)rt_nil_check(F->v_1662)), &F->ent_1664);
}
F->parts_1661 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str("({ struct ", 10), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1658)).cname_))), rt_str("p p_;", 5)));
F->pm_1659 = (*(P111)rt_nil_check(F->y_1658)).params_;
while ((F->pm_1659 != NULL)) {
F->a_1660 = f_actual_for_624(F->up, F->args_node_1673, F->pm_1659, (*(P111)rt_nil_check(F->y_1658)).params_);
if ((F->a_1660 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_763)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1659)).name_))));
}
if (((*(P1124)rt_nil_check(F->pm_1659)).mode_ == ((rt_int)1LL))) {
f_gexpr_566(F->up, F->a_1660, (*(P1124)rt_nil_check(F->pm_1659)).t_, &F->vt_1667, &F->v_1662);
f_check_type_391(F->up, F->vt_1667, (*(P1124)rt_nil_check(F->pm_1659)).t_, (*(P164)rt_nil_check(F->e_763)).line_);
F->parts_1661 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->parts_1661)), rt_str(" p_.", 4)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1659)).cfield_))), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->v_1662))), 59));
} else {
f_lvalue_528(F->up, F->a_1660, &F->lv_1663, &F->lt_1668, &F->lc_1669, &F->ro_1670);
if (F->ro_1670) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_763)).line_, rt_str_cat((*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1659)).name_)), rt_str(" needs a variable", 17)));
}
f_check_type_391(F->up, F->lt_1668, (*(P1124)rt_nil_check(F->pm_1659)).t_, (*(P164)rt_nil_check(F->e_763)).line_);
F->parts_1661 = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->parts_1661)), rt_str(" p_.", 4)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1659)).cfield_))), rt_str(" = &", 4)), (*(P134)rt_nil_check(F->lv_1663))), 59));
}
F->pm_1659 = (*(P1124)rt_nil_check(F->pm_1659)).next_;
}
L_end_1674: ;
if ((((*(P111)rt_nil_check(F->y_1658)).members_ != NULL) && ((*(P111)rt_nil_check(F->y_1658)).members_ != F->up->cur_task_161))) {
if ((F->ix_1671 != NULL)) {
f_act_path_i_728(F->up, (*(P111)rt_nil_check(F->y_1658)).members_, (*(P134)rt_nil_check(F->i_1666)), &F->act_1665);
} else {
f_act_path_724(F->up, (*(P111)rt_nil_check(F->y_1658)).members_, &F->act_1665);
}
F->parts_1661 = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->parts_1661)), rt_str(" if (!rt_is_active(&", 20)), (*(P134)rt_nil_check(F->act_1665))), rt_str(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_765) = F->up->ty_void_155;
(*F->r_766) = f_mk_190(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->parts_1661)), rt_str(" rt_entry_call(&", 16)), (*(P134)rt_nil_check(F->ent_1664))), rt_str(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_772(struct f_greenc_1fr *up_, P164 e_768, P111 y_769, P116 *t_770, P134 *r_771) {
  struct f_other_attr_772fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_768 = e_768;
F->y_769 = y_769;
F->t_770 = t_770;
F->r_771 = r_771;
F->a_1675 = rt_str_copy((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_768)).name_)));
F->p_1676 = NULL;
if ((((*(P111)rt_nil_check(F->y_769)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1675, rt_str("INDEX", 5)))) {
if (((*(P111)rt_nil_check(F->y_769)).c_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_768)).line_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_769)).name_)), rt_str(" is not a task family", 21)));
}
f_own_index_716(F->up, &F->p_1676);
(*F->t_770) = F->up->ty_int_150;
if (((*(P111)rt_nil_check(F->y_769)).t_ != NULL)) {
(*F->t_770) = (*(P111)rt_nil_check(F->y_769)).t_;
}
(*F->r_771) = F->p_1676;
} else if ((((*(P111)rt_nil_check(F->y_769)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1675, rt_str("ACTIVE", 6)))) {
f_act_path_724(F->up, F->y_769, &F->p_1676);
(*F->t_770) = F->up->ty_bool_151;
(*F->r_771) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P134)rt_nil_check(F->p_1676))), 41));
} else if ((((*(P111)rt_nil_check(F->y_769)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1675, rt_str("PRIORITY", 8)))) {
f_act_path_724(F->up, F->y_769, &F->p_1676);
(*F->t_770) = F->up->ty_int_150;
(*F->r_771) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P134)rt_nil_check(F->p_1676))), 41));
} else if ((((*(P111)rt_nil_check(F->y_769)).kind_ == ((rt_int)10LL)) && rt_str_eq(F->a_1675, rt_str("COUNT", 5)))) {
if (((*(P111)rt_nil_check(F->y_769)).members_ != F->up->cur_task_161)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_768)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_732(F->up, F->y_769, rt_str("", 0), &F->p_1676);
(*F->t_770) = F->up->ty_int_150;
(*F->r_771) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P134)rt_nil_check(F->p_1676))), 41));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_768)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1675), rt_str(" is not handled here", 20)));
(*F->t_770) = F->up->ty_int_150;
(*F->r_771) = NULL;
}
ret_:

  return;
}

static void f_member_attr_776(struct f_greenc_1fr *up_, P164 e_773, P116 *t_774, P134 *r_775) {
  struct f_member_attr_776fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_773 = e_773;
F->t_774 = t_774;
F->r_775 = r_775;
F->y_1677 = NULL;
F->ix_1678 = NULL;
F->i_1679 = NULL;
F->p_1680 = NULL;
F->vt_1681 = NULL;
f_task_of_714(F->up, (*(P164)rt_nil_check(F->e_773)).a_, &F->y_1677, &F->ix_1678);
f_gexpr_566(F->up, F->ix_1678, F->up->ty_int_150, &F->vt_1681, &F->i_1679);
f_act_path_i_728(F->up, F->y_1677, (*(P134)rt_nil_check(F->i_1679)), &F->p_1680);
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_773)).name_)), rt_str("ACTIVE", 6))) {
(*F->t_774) = F->up->ty_bool_151;
(*F->r_775) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P134)rt_nil_check(F->p_1680))), 41));
} else if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_773)).name_)), rt_str("PRIORITY", 8))) {
(*F->t_774) = F->up->ty_int_150;
(*F->r_775) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P134)rt_nil_check(F->p_1680))), 41));
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_773)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_773)).name_))), rt_str(" is not handled for a family member", 35)));
(*F->t_774) = F->up->ty_int_150;
(*F->r_775) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_782(struct f_greenc_1fr *up_, rstr name_777, P164 args_778, rt_int line_779, P116 *t_780, P134 *r_781) {
  struct f_task_builtin_782fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_777 = rt_str_copy(name_777);
F->args_778 = args_778;
F->line_779 = line_779;
F->t_780 = t_780;
F->r_781 = r_781;
F->vt_1682 = NULL;
F->v_1683 = NULL;
(*F->t_780) = F->up->ty_void_155;
if (rt_str_eq(F->name_777, rt_str("SET_PRIORITY", 12))) {
f_gexpr_566(F->up, F->args_778, F->up->ty_int_150, &F->vt_1682, &F->v_1683);
(*F->r_781) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("rt_set_priority(rt_me(), ", 25), (*(P134)rt_nil_check(F->v_1683))), 41));
} else {
f_fail_211(F->up, F->line_779, rt_str_cat(F->name_777, rt_str(" is not declared", 16)));
(*F->r_781) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_784(struct f_greenc_1fr *up_, P164 s_783) {
  struct f_gen_accept_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_783 = s_783;
F->y_1684 = NULL;
F->y_1684 = f_lookup_entry_364(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_783)).name_)), F->up->cur_task_161);
F->saved_ax_1685 = NULL;
F->ent_1686 = NULL;
F->ep_1687 = NULL;
F->xf_1688 = NULL;
F->x_1689 = NULL;
F->pm_1690 = NULL;
F->f_1691 = NULL;
F->f_1691 = (*(P164)rt_nil_check(F->s_783)).a_;
F->p_1692 = NULL;
if (((F->y_1684 == NULL) || ((*(P111)rt_nil_check(F->y_1684)).kind_ != ((rt_int)10LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_783)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->s_783)).name_)), rt_str(" is not an entry", 16)));
}
if ((!f_same_task_361(F->up, (*(P111)rt_nil_check(F->y_1684)).members_, F->up->cur_task_161))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_783)).line_, rt_str("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_732(F->up, F->y_1684, rt_str("", 0), &F->ent_1686);
f_member_slot_788(F->up, F->y_1684, F->s_783, &F->ent_1686);
if (((*(P164)rt_nil_check(F->s_783)).flag_ == ((rt_int)0LL))) {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_accept_begin(&", 19), (*(P134)rt_nil_check(F->ent_1686))), rt_str("); rt_accept_end(&", 18)), (*(P134)rt_nil_check(F->ent_1686))), rt_str(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_193(F->up, rt_str("ep", 2), &F->ep_1687);
f_new_name_193(F->up, rt_str("xf", 2), &F->xf_1688);
f_new_name_193(F->up, rt_str("x", 1), &F->x_1689);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1684)).cname_))), rt_str("p *", 3)), (*(P134)rt_nil_check(F->ep_1687))), rt_str(" = rt_accept_begin(&", 20)), (*(P134)rt_nil_check(F->ent_1686))), rt_str(");", 2)));
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str("rt_frame ", 9), (*(P134)rt_nil_check(F->xf_1688))), 59));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P134)rt_nil_check(F->xf_1688))), rt_str(")) {", 4)));
f_push_cleanup_477(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P134)rt_nil_check(F->xf_1688))), rt_str("); rt_accept_end(&", 18)), (*(P134)rt_nil_check(F->ent_1686))), rt_str(", 0, 0);", 8)));
f_open_scope_378(F->up);
F->pm_1690 = (*(P111)rt_nil_check(F->y_1684)).params_;
while ((F->pm_1690 != NULL)) {
if (((*(P1124)rt_nil_check(F->pm_1690)).mode_ == ((rt_int)1LL))) {
F->p_1692 = f_new_sym_382(F->up, ((rt_int)2LL), (*(P1124)rt_nil_check(F->pm_1690)).name_);
(*(P111)rt_nil_check(F->p_1692)).ro_ = 1;
(*(P111)rt_nil_check(F->p_1692)).access_path_ = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P134)rt_nil_check(F->ep_1687))), rt_str("->", 2)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1690)).cfield_))), 41));
} else {
F->p_1692 = f_new_sym_382(F->up, ((rt_int)1LL), (*(P1124)rt_nil_check(F->pm_1690)).name_);
(*(P111)rt_nil_check(F->p_1692)).access_path_ = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P134)rt_nil_check(F->ep_1687))), rt_str("->", 2)), (*(P134)rt_nil_check((*(P1124)rt_nil_check(F->pm_1690)).cfield_))), 41));
}
if ((F->f_1691 != NULL)) {
(*(P111)rt_nil_check(F->p_1692)).name_ = (*(P164)rt_nil_check(F->f_1691)).name_;
F->f_1691 = (*(P164)rt_nil_check(F->f_1691)).next_;
}
(*(P111)rt_nil_check(F->p_1692)).t_ = (*(P1124)rt_nil_check(F->pm_1690)).t_;
(*(P111)rt_nil_check(F->p_1692)).c_ = (*(P1124)rt_nil_check(F->pm_1690)).c_;
f_define_377(F->up, F->p_1692, (*(P164)rt_nil_check(F->s_783)).line_);
F->pm_1690 = (*(P1124)rt_nil_check(F->pm_1690)).next_;
}
L_end_1693: ;
F->up->accept_depth_162 = rt_add(F->up->accept_depth_162, ((rt_int)1LL));
F->saved_ax_1685 = F->up->accept_exits_143;
F->up->accept_exits_143 = F->up->exits_139;
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->s_783)).b_);
F->up->accept_exits_143 = F->saved_ax_1685;
F->up->accept_depth_162 = rt_sub(F->up->accept_depth_162, ((rt_int)1LL));
f_close_scope_379(F->up);
f_pop_cleanup_478(F->up);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P134)rt_nil_check(F->xf_1688))), rt_str("); rt_accept_end(&", 18)), (*(P134)rt_nil_check(F->ent_1686))), rt_str(", 0, 0);", 8)));
f_emit_217(F->up, rt_str("} else {", 8));
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P134)rt_nil_check(F->xf_1688))), rt_str("); int ", 7)), (*(P134)rt_nil_check(F->x_1689))), rt_str(" = rt_xcur; rt_accept_end(&", 27)), (*(P134)rt_nil_check(F->ent_1686))), rt_str(", 1, ", 5)), (*(P134)rt_nil_check(F->x_1689))), rt_str("); rt_raise(", 12)), (*(P134)rt_nil_check(F->x_1689))), rt_str(");", 2)));
f_emit_217(F->up, rt_str("}", 1));
f_emit_217(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_member_slot_788(struct f_greenc_1fr *up_, P111 y_785, P164 s_786, P134 *ent_787) {
  struct f_member_slot_788fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_785 = y_785;
F->s_786 = s_786;
F->ent_787 = ent_787;
F->vt_1694 = NULL;
F->v_1695 = NULL;
if (((*(P111)rt_nil_check(F->y_785)).c_ != NULL)) {
if (((*(P164)rt_nil_check(F->s_786)).c_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_786)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_785)).name_)), rt_str(" is an entry family: accept ", 28)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_785)).name_))), rt_str("(I)", 3)));
}
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->s_786)).c_, NULL, &F->vt_1694, &F->v_1695);
f_entry_family_slot_747(F->up, F->y_785, (*(P134)rt_nil_check((*F->ent_787))), (*(P134)rt_nil_check(F->v_1695)), &(*F->ent_787));
} else if (((*(P164)rt_nil_check(F->s_786)).c_ != NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_786)).line_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_785)).name_)), rt_str(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_791(struct f_greenc_1fr *up_, P164 e_789, P134 *r_790) {
  struct f_gen_delay_ticks_791fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_789 = e_789;
F->r_790 = r_790;
F->vt_1696 = NULL;
F->v_1697 = NULL;
f_gexpr_566(F->up, F->e_789, F->up->ty_float_152, &F->vt_1696, &F->v_1697);
f_check_type_391(F->up, F->vt_1696, F->up->ty_float_152, (*(P164)rt_nil_check(F->e_789)).line_);
(*F->r_790) = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str("(rt_int)llround(", 16), (*(P134)rt_nil_check(F->v_1697))), 41));
ret_:

  return;
}

static void f_gen_select_793(struct f_greenc_1fr *up_, P164 s_792) {
  struct f_gen_select_793fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_792 = s_792;
F->alt_1698 = NULL;
F->alt_1698 = (*(P164)rt_nil_check(F->s_792)).a_;
F->n_1699 = ((rt_int)0LL);
F->has_delay_1701 = 0;
F->has_accept_1702 = 0;
F->al_1703 = NULL;
F->w_1704 = NULL;
F->g_1705 = NULL;
F->ent_1706 = NULL;
F->ticks_1707 = NULL;
F->vt_1708 = NULL;
F->y_1709 = NULL;
f_new_name_193(F->up, rt_str("al", 2), &F->al_1703);
f_new_name_193(F->up, rt_str("w", 1), &F->w_1704);
while ((F->alt_1698 != NULL)) {
F->n_1699 = rt_add(F->n_1699, ((rt_int)1LL));
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->alt_1698)).b_)).kind_ == ((rt_int)32LL))) {
F->has_delay_1701 = 1;
} else {
F->has_accept_1702 = 1;
}
F->alt_1698 = (*(P164)rt_nil_check(F->alt_1698)).next_;
}
L_end_1710: ;
if ((((*(P164)rt_nil_check(F->s_792)).flag_ == ((rt_int)1LL)) && F->has_delay_1701)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_792)).line_, rt_str("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_1702)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_792)).line_, rt_str("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ rt_alt ", 9), (*(P134)rt_nil_check(F->al_1703))), 91), rt_str_of_int(rt_add(F->n_1699, ((rt_int)1LL)))), rt_str("]; int open_ = 0;", 17)));
F->alt_1698 = (*(P164)rt_nil_check(F->s_792)).a_;
F->i_1700 = ((rt_int)0LL);
while ((F->alt_1698 != NULL)) {
F->g_1705 = f_mk_190(F->up, rt_str("1", 1));
if (((*(P164)rt_nil_check(F->alt_1698)).a_ != NULL)) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->alt_1698)).a_, F->up->ty_bool_151, &F->vt_1708, &F->g_1705);
f_check_type_391(F->up, F->vt_1708, F->up->ty_bool_151, (*(P164)rt_nil_check(F->alt_1698)).line_);
}
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->alt_1698)).b_)).kind_ == ((rt_int)34LL))) {
F->y_1709 = f_lookup_entry_364(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->alt_1698)).b_)).name_)), F->up->cur_task_161);
if (((F->y_1709 == NULL) || ((*(P111)rt_nil_check(F->y_1709)).kind_ != ((rt_int)10LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->alt_1698)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check((*(P164)rt_nil_check(F->alt_1698)).b_)).name_)), rt_str(" is not an entry", 16)));
}
f_entry_path_732(F->up, F->y_1709, rt_str("", 0), &F->ent_1706);
f_member_slot_788(F->up, F->y_1709, (*(P164)rt_nil_check(F->alt_1698)).b_, &F->ent_1706);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->al_1703)), 91), rt_str_of_int(F->i_1700)), rt_str("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P134)rt_nil_check(F->g_1705))), rt_str("), &", 4)), (*(P134)rt_nil_check(F->ent_1706))), rt_str(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_791(F->up, (*(P164)rt_nil_check((*(P164)rt_nil_check(F->alt_1698)).b_)).a_, &F->ticks_1707);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->al_1703)), 91), rt_str_of_int(F->i_1700)), rt_str("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P134)rt_nil_check(F->g_1705))), rt_str("), NULL, NULL, ", 15)), (*(P134)rt_nil_check(F->ticks_1707))), rt_str("};", 2)));
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("open_ |= ", 9), (*(P134)rt_nil_check(F->al_1703))), 91), rt_str_of_int(F->i_1700)), rt_str("].open;", 7)));
F->i_1700 = rt_add(F->i_1700, ((rt_int)1LL));
F->alt_1698 = (*(P164)rt_nil_check(F->alt_1698)).next_;
}
L_end_1711: ;
if (((*(P164)rt_nil_check(F->s_792)).flag_ == ((rt_int)1LL))) {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P134)rt_nil_check(F->al_1703)), 91), rt_str_of_int(F->n_1699)), rt_str("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_1699 = rt_add(F->n_1699, ((rt_int)1LL));
} else {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!open_) rt_raise(rt_exc(", 28), f_q_208(F->up)), rt_str("SELECT_ERROR", 12)), f_q_208(F->up)), rt_str("));", 3)));
}
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P134)rt_nil_check(F->w_1704))), rt_str(" = rt_wait(", 11)), rt_str_of_int(F->n_1699)), rt_str(", ", 2)), (*(P134)rt_nil_check(F->al_1703))), rt_str(");", 2)));
F->alt_1698 = (*(P164)rt_nil_check(F->s_792)).a_;
F->i_1700 = ((rt_int)0LL);
while ((F->alt_1698 != NULL)) {
if ((F->i_1700 == ((rt_int)0LL))) {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P134)rt_nil_check(F->w_1704))), rt_str(" == 0) {", 8)));
} else {
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P134)rt_nil_check(F->w_1704))), rt_str(" == ", 4)), rt_str_of_int(F->i_1700)), rt_str(") {", 3)));
}
if (((*(P164)rt_nil_check((*(P164)rt_nil_check(F->alt_1698)).b_)).kind_ == ((rt_int)34LL))) {
f_gen_accept_784(F->up, (*(P164)rt_nil_check(F->alt_1698)).b_);
}
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->alt_1698)).c_);
F->i_1700 = rt_add(F->i_1700, ((rt_int)1LL));
F->alt_1698 = (*(P164)rt_nil_check(F->alt_1698)).next_;
}
L_end_1712: ;
if (((*(P164)rt_nil_check(F->s_792)).flag_ == ((rt_int)1LL))) {
f_emit_217(F->up, rt_str("} else {", 8));
f_gen_statements_473(F->up, (*(P164)rt_nil_check(F->s_792)).b_);
}
f_emit_217(F->up, rt_str("}", 1));
f_emit_217(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_family_range_798(struct f_greenc_1fr *up_, P111 y_794, P164 ix_795, P134 *lo_796, P134 *hi_797) {
  struct f_family_range_798fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_794 = y_794;
F->ix_795 = ix_795;
F->lo_796 = lo_796;
F->hi_797 = hi_797;
F->vt_1713 = NULL;
if ((F->ix_795 == NULL)) {
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_794)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_794)).cname_)), rt_str("lo", 2)), &(*F->lo_796));
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_794)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_794)).cname_)), rt_str("hi", 2)), &(*F->hi_797));
} else if (((*(P164)rt_nil_check(F->ix_795)).kind_ == ((rt_int)14LL))) {
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->ix_795)).a_, F->up->ty_int_150, &F->vt_1713, &(*F->lo_796));
f_gexpr_566(F->up, (*(P164)rt_nil_check(F->ix_795)).b_, F->up->ty_int_150, &F->vt_1713, &(*F->hi_797));
} else {
f_gexpr_566(F->up, F->ix_795, F->up->ty_int_150, &F->vt_1713, &(*F->lo_796));
(*F->hi_797) = (*F->lo_796);
}
ret_:

  return;
}

static void f_task_statement_gen_800(struct f_greenc_1fr *up_, P164 s_799) {
  struct f_task_statement_gen_800fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_799 = s_799;
F->n_1714 = NULL;
F->ix_1715 = NULL;
F->y_1716 = NULL;
F->a_1717 = NULL;
F->d_1718 = NULL;
F->l_1719 = NULL;
F->ticks_1720 = NULL;
F->lo_1721 = NULL;
F->hi_1722 = NULL;
{ rt_int sel1723 = (*(P164)rt_nil_check(F->s_799)).kind_;
if (0 || sel1723 == ((rt_int)32LL)) {
f_gen_delay_ticks_791(F->up, (*(P164)rt_nil_check(F->s_799)).a_, &F->ticks_1720);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), (*(P134)rt_nil_check(F->ticks_1720))), rt_str(");", 2)));
} else if (0 || sel1723 == ((rt_int)33LL)) {
if ((F->up->accept_depth_162 > ((rt_int)0LL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_799)).line_, rt_str("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_1714 = (*(P164)rt_nil_check(F->s_799)).a_;
while ((F->n_1714 != NULL)) {
f_task_of_714(F->up, F->n_1714, &F->y_1716, &F->ix_1715);
f_path_at_708(F->up, (*(P111)rt_nil_check(F->y_1716)).level_, rt_str_cat((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1716)).cname_)), rt_str("decl", 4)), &F->d_1718);
if (((*(P111)rt_nil_check(F->y_1716)).level_ > ((rt_int)0LL))) {
f_link_to_514(F->up, (*(P111)rt_nil_check(F->y_1716)).level_, &F->l_1719);
} else {
F->l_1719 = f_mk_190(F->up, rt_str("NULL", 4));
}
if (((*(P111)rt_nil_check(F->y_1716)).c_ == NULL)) {
f_act_path_724(F->up, F->y_1716, &F->a_1717);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(&", 11), (*(P134)rt_nil_check(F->a_1717))), rt_str(", &", 3)), (*(P134)rt_nil_check(F->d_1718))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1716)).cname_))), rt_str("run, ", 5)), (*(P134)rt_nil_check(F->l_1719))), rt_str(");", 2)));
} else {
f_family_range_798(F->up, F->y_1716, F->ix_1715, &F->lo_1721, &F->hi_1722);
f_act_path_i_728(F->up, F->y_1716, rt_str("k_", 2), &F->a_1717);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P134)rt_nil_check(F->lo_1721))), rt_str("; k_ <= ", 8)), (*(P134)rt_nil_check(F->hi_1722))), rt_str("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P134)rt_nil_check(F->l_1719))), rt_str("; g_->i = k_; rt_create(&", 25)), (*(P134)rt_nil_check(F->a_1717))), rt_str(", &", 3)), (*(P134)rt_nil_check(F->d_1718))), rt_str(", ", 2)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1716)).cname_))), rt_str("run, g_); }", 11)));
}
F->n_1714 = (*(P164)rt_nil_check(F->n_1714)).next_;
}
L_end_1724: ;
} else if (0 || sel1723 == ((rt_int)34LL)) {
f_gen_accept_784(F->up, F->s_799);
} else if (0 || sel1723 == ((rt_int)35LL)) {
f_gen_select_793(F->up, F->s_799);
} else if (0 || sel1723 == ((rt_int)36LL)) {
F->n_1714 = (*(P164)rt_nil_check(F->s_799)).a_;
while ((F->n_1714 != NULL)) {
f_task_of_714(F->up, F->n_1714, &F->y_1716, &F->ix_1715);
if (((*(P111)rt_nil_check(F->y_1716)).c_ == NULL)) {
f_act_path_724(F->up, F->y_1716, &F->a_1717);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str("rt_g_abort(&", 12), (*(P134)rt_nil_check(F->a_1717))), rt_str(");", 2)));
} else {
f_family_range_798(F->up, F->y_1716, F->ix_1715, &F->lo_1721, &F->hi_1722);
f_act_path_i_728(F->up, F->y_1716, rt_str("k_", 2), &F->a_1717);
f_emit_217(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P134)rt_nil_check(F->lo_1721))), rt_str("; k_ <= ", 8)), (*(P134)rt_nil_check(F->hi_1722))), rt_str("; k_++) rt_g_abort(&", 20)), (*(P134)rt_nil_check(F->a_1717))), rt_str(");", 2)));
}
F->n_1714 = (*(P164)rt_nil_check(F->n_1714)).next_;
}
L_end_1725: ;
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->s_799)).line_, rt_str("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P164 f_root_name_802(struct f_greenc_1fr *up_, P164 e_801) {
  struct f_root_name_802fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_801 = e_801;
if (((*(P164)rt_nil_check(F->e_801)).kind_ == ((rt_int)5LL))) {
F->result_ = F->e_801;
goto ret_;
} else if (((((*(P164)rt_nil_check(F->e_801)).kind_ == ((rt_int)9LL)) || ((*(P164)rt_nil_check(F->e_801)).kind_ == ((rt_int)8LL))) || ((*(P164)rt_nil_check(F->e_801)).kind_ == ((rt_int)15LL)))) {
F->result_ = f_root_name_802(F->up, (*(P164)rt_nil_check(F->e_801)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_805(struct f_greenc_1fr *up_, P164 target_803, rt_int line_804) {
  struct f_check_pure_target_805fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_803 = target_803;
F->line_804 = line_804;
F->n_1726 = NULL;
F->y_1727 = NULL;
if ((F->up->pure_sym_179 == NULL)) {
goto ret_;
}
if (F->up->last_deref_183) {
f_fail_211(F->up, F->line_804, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->pure_sym_179)).name_))), rt_str(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_1726 = f_root_name_802(F->up, F->target_803);
if ((F->n_1726 != NULL)) {
F->y_1727 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1726)).name_)));
if ((((F->y_1727 != NULL) && ((*(P111)rt_nil_check(F->y_1727)).kind_ == ((rt_int)1LL))) && ((*(P111)rt_nil_check(F->y_1727)).depth_ < F->up->pure_depth_180))) {
f_fail_211(F->up, F->line_804, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->pure_sym_179)).name_))), rt_str(" may not assign to ", 19)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->n_1726)).name_))), rt_str(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_808(struct f_greenc_1fr *up_, P164 d_806, rstr name_807) {
  struct f_assigns_nonlocal_808fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_806 = d_806;
F->name_807 = rt_str_copy(name_807);
F->result_ = (f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->d_806)).d_, F->d_806, F->name_807) || f_scan_handlers_815(F->up, (*(P164)rt_nil_check(F->d_806)).e_, F->d_806, F->name_807));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_811(struct f_greenc_1fr *up_, P164 d_809, rstr name_810) {
  struct f_declares_811fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_809 = d_809;
F->name_810 = rt_str_copy(name_810);
F->p_1728 = NULL;
F->p_1728 = (*(P164)rt_nil_check(F->d_809)).a_;
F->e_1729 = NULL;
F->e_1729 = (*(P164)rt_nil_check(F->d_809)).c_;
while ((F->p_1728 != NULL)) {
if (rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->p_1728)).name_)), F->name_810)) {
F->result_ = 1;
goto ret_;
}
F->p_1728 = (*(P164)rt_nil_check(F->p_1728)).next_;
}
L_end_1730: ;
while ((F->e_1729 != NULL)) {
if ((((*(P164)rt_nil_check(F->e_1729)).name_ != NULL) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_1729)).name_)), F->name_810))) {
F->result_ = 1;
goto ret_;
}
F->e_1729 = (*(P164)rt_nil_check(F->e_1729)).next_;
}
L_end_1731: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_815(struct f_greenc_1fr *up_, P164 h_812, P164 d_813, rstr name_814) {
  struct f_scan_handlers_815fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_812 = h_812;
F->d_813 = d_813;
F->name_814 = rt_str_copy(name_814);
F->p_1732 = NULL;
F->p_1732 = F->h_812;
while ((F->p_1732 != NULL)) {
if (f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->p_1732)).b_, F->d_813, F->name_814)) {
F->result_ = 1;
goto ret_;
}
F->p_1732 = (*(P164)rt_nil_check(F->p_1732)).next_;
}
L_end_1733: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_819(struct f_greenc_1fr *up_, P164 stmts_816, P164 d_817, rstr name_818) {
  struct f_scan_assigns_819fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_816 = stmts_816;
F->d_817 = d_817;
F->name_818 = rt_str_copy(name_818);
F->s_1734 = NULL;
F->s_1734 = F->stmts_816;
F->a_1735 = NULL;
F->r_1736 = NULL;
while ((F->s_1734 != NULL)) {
if (((*(P164)rt_nil_check(F->s_1734)).kind_ == ((rt_int)20LL))) {
F->r_1736 = f_root_name_802(F->up, (*(P164)rt_nil_check(F->s_1734)).a_);
if ((((F->r_1736 != NULL) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->r_1736)).name_)), F->name_818)) && (!f_declares_811(F->up, F->d_817, F->name_818)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P164)rt_nil_check(F->s_1734)).kind_ == ((rt_int)22LL))) {
F->a_1735 = (*(P164)rt_nil_check(F->s_1734)).a_;
while ((F->a_1735 != NULL)) {
if (f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->a_1735)).b_, F->d_817, F->name_818)) {
F->result_ = 1;
goto ret_;
}
F->a_1735 = (*(P164)rt_nil_check(F->a_1735)).next_;
}
L_end_1738: ;
if (f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->s_1734)).b_, F->d_817, F->name_818)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P164)rt_nil_check(F->s_1734)).kind_ == ((rt_int)23LL))) {
F->a_1735 = (*(P164)rt_nil_check(F->s_1734)).b_;
while ((F->a_1735 != NULL)) {
if (f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->a_1735)).b_, F->d_817, F->name_818)) {
F->result_ = 1;
goto ret_;
}
F->a_1735 = (*(P164)rt_nil_check(F->a_1735)).next_;
}
L_end_1739: ;
if (f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->s_1734)).c_, F->d_817, F->name_818)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P164)rt_nil_check(F->s_1734)).kind_ == ((rt_int)24LL))) {
if (f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->s_1734)).b_, F->d_817, F->name_818)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P164)rt_nil_check(F->s_1734)).kind_ == ((rt_int)25LL))) {
if ((f_scan_assigns_819(F->up, (*(P164)rt_nil_check(F->s_1734)).b_, F->d_817, F->name_818) || f_scan_handlers_815(F->up, (*(P164)rt_nil_check(F->s_1734)).c_, F->d_817, F->name_818))) {
F->result_ = 1;
goto ret_;
}
}
F->s_1734 = (*(P164)rt_nil_check(F->s_1734)).next_;
}
L_end_1737: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_822(struct f_greenc_1fr *up_, P164 e_820, P111 y_821) {
  struct f_check_call_rules_822fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_820 = e_820;
F->y_821 = y_821;
F->z_1740 = NULL;
F->s_1741 = NULL;
if ((((F->up->pure_sym_179 != NULL) && (((*(P116)rt_nil_check((*(P111)rt_nil_check(F->y_821)).result_)).kind_ == ((rt_int)9LL)) || (*(P111)rt_nil_check(F->y_821)).vrp_)) && ((*(P111)rt_nil_check(F->y_821)).depth_ < F->up->pure_depth_180))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_820)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->up->pure_sym_179)).name_))), rt_str(" may not call procedure ", 24)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_821)).name_))), rt_str(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P111)rt_nil_check(F->y_821)).vrp_) || (F->up->trial_149 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_181)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_820)).line_, rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_821)).name_))), rt_str(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_1741 = F->up->scope_stack_115;
while ((F->s_1741 != NULL)) {
if ((((((*(P111)rt_nil_check(F->s_1741)).kind_ == ((rt_int)1LL)) && ((*(P111)rt_nil_check(F->s_1741)).depth_ <= (*(P111)rt_nil_check(F->y_821)).depth_)) && (f_lookup_358(F->up, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->s_1741)).name_))) == F->s_1741)) && f_assigns_nonlocal_808(F->up, (*(P111)rt_nil_check(F->y_821)).decl_, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->s_1741)).name_))))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_820)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_821)).name_))), rt_str(" assigns ", 9)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->s_1741)).name_))), rt_str(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_1741 = (*(P111)rt_nil_check(F->s_1741)).stack_;
}
L_end_1742: ;
ret_:

  return;
}

static void f_generic_p_824(struct f_greenc_1fr *up_, P164 *res_823) {
  struct f_generic_p_824fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_823 = res_823;
F->x_1743 = NULL;
F->p_1744 = NULL;
F->head_1745 = NULL;
F->tail_1746 = NULL;
F->names_1747 = NULL;
F->st_1748 = NULL;
F->def_1749 = NULL;
F->sub_1750 = NULL;
F->def_name_text_1751 = NULL;
F->more_1752 = 1;
f_expect_kw_278(F->up, rt_str("GENERIC", 7));
F->x_1743 = f_nn_256(F->up, ((rt_int)54LL), f_cur_line_263(F->up));
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
while (F->more_1752) {
if (f_at_kw_265(F->up, rt_str("RESTRICTED", 10))) {
f_skip_276(F->up);
}
if (f_at_kw_265(F->up, rt_str("TYPE", 4))) {
f_skip_276(F->up);
F->p_1744 = f_nn_256(F->up, ((rt_int)47LL), f_cur_line_263(F->up));
(*(P164)rt_nil_check(F->p_1744)).ival_ = ((rt_int)10LL);
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->p_1744)).name_);
f_append_260(F->up, &F->head_1745, &F->tail_1746, F->p_1744);
} else if ((f_at_kw_265(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_265(F->up, rt_str("FUNCTION", 8)))) {
F->p_1744 = f_nn_256(F->up, ((rt_int)47LL), f_cur_line_263(F->up));
(*(P164)rt_nil_check(F->p_1744)).ival_ = ((rt_int)11LL);
if (f_at_kw_265(F->up, rt_str("PROCEDURE", 9))) {
F->sub_1750 = f_nn_256(F->up, ((rt_int)44LL), f_cur_line_263(F->up));
} else {
F->sub_1750 = f_nn_256(F->up, ((rt_int)45LL), f_cur_line_263(F->up));
}
f_skip_276(F->up);
f_designator_331(F->up, &(*(P164)rt_nil_check(F->sub_1750)).name_);
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_formal_part_329(F->up, &(*(P164)rt_nil_check(F->sub_1750)).a_);
}
if (f_at_kw_265(F->up, rt_str("RETURN", 6))) {
f_skip_276(F->up);
f_subtype_ind_311(F->up, &(*(P164)rt_nil_check(F->sub_1750)).b_);
}
(*(P164)rt_nil_check(F->sub_1750)).ival_ = ((rt_int)1LL);
(*(P164)rt_nil_check(F->p_1744)).name_ = (*(P164)rt_nil_check(F->sub_1750)).name_;
(*(P164)rt_nil_check(F->p_1744)).a_ = F->sub_1750;
if (f_at_kw_265(F->up, rt_str("IS", 2))) {
f_skip_276(F->up);
if (f_at_kind_269(F->up, ((rt_int)6LL))) {
f_designator_331(F->up, &F->def_name_text_1751);
(*(P164)rt_nil_check(F->p_1744)).b_ = f_nn_256(F->up, ((rt_int)5LL), f_cur_line_263(F->up));
(*(P164)rt_nil_check((*(P164)rt_nil_check(F->p_1744)).b_)).name_ = F->def_name_text_1751;
} else {
f_name_p_309(F->up, &(*(P164)rt_nil_check(F->p_1744)).b_);
}
}
f_append_260(F->up, &F->head_1745, &F->tail_1746, F->p_1744);
} else {
f_id_list_286(F->up, &F->names_1747);
f_expect_op_280(F->up, rt_str(":", 1));
if (f_at_kw_265(F->up, rt_str("IN", 2))) {
f_skip_276(F->up);
}
f_subtype_ind_311(F->up, &F->st_1748);
F->def_1749 = NULL;
if (f_at_op_267(F->up, rt_str(":=", 2))) {
f_skip_276(F->up);
f_expr_293(F->up, &F->def_1749);
}
while ((F->names_1747 != NULL)) {
F->p_1744 = f_nn_256(F->up, ((rt_int)47LL), (*(P164)rt_nil_check(F->names_1747)).line_);
(*(P164)rt_nil_check(F->p_1744)).ival_ = ((rt_int)1LL);
(*(P164)rt_nil_check(F->p_1744)).name_ = (*(P164)rt_nil_check(F->names_1747)).name_;
(*(P164)rt_nil_check(F->p_1744)).a_ = F->st_1748;
(*(P164)rt_nil_check(F->p_1744)).b_ = F->def_1749;
f_append_260(F->up, &F->head_1745, &F->tail_1746, F->p_1744);
F->names_1747 = (*(P164)rt_nil_check(F->names_1747)).next_;
}
L_end_1754: ;
}
F->more_1752 = f_at_op_267(F->up, rt_str(";", 1));
if (F->more_1752) {
f_skip_276(F->up);
}
}
L_end_1753: ;
f_expect_op_280(F->up, rt_str(")", 1));
}
if ((f_at_kw_265(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_265(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_333(F->up, &(*(P164)rt_nil_check(F->x_1743)).b_);
} else if (f_at_kw_265(F->up, rt_str("PACKAGE", 7))) {
f_package_p_339(F->up, &(*(P164)rt_nil_check(F->x_1743)).b_);
} else if (f_at_kw_265(F->up, rt_str("TASK", 4))) {
f_task_p_694(F->up, &(*(P164)rt_nil_check(F->x_1743)).b_);
} else {
f_perror_275(F->up, rt_str("a generic unit is a subprogram, a package or a task", 51));
}
(*(P164)rt_nil_check(F->x_1743)).a_ = F->head_1745;
(*(P164)rt_nil_check(F->x_1743)).name_ = (*(P164)rt_nil_check((*(P164)rt_nil_check(F->x_1743)).b_)).name_;
(*F->res_823) = F->x_1743;
ret_:

  return;
}

static void f_instantiation_827(struct f_greenc_1fr *up_, P164 x_825, P164 *res_826) {
  struct f_instantiation_827fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_825 = x_825;
F->res_826 = res_826;
F->i_1755 = NULL;
F->head_1756 = NULL;
F->tail_1757 = NULL;
F->a_1758 = NULL;
F->formal_1759 = NULL;
F->more_1761 = 1;
f_expect_kw_278(F->up, rt_str("IS", 2));
f_expect_kw_278(F->up, rt_str("NEW", 3));
F->i_1755 = f_nn_256(F->up, ((rt_int)53LL), (*(P164)rt_nil_check(F->x_825)).line_);
(*(P164)rt_nil_check(F->i_1755)).name_ = (*(P164)rt_nil_check(F->x_825)).name_;
(*(P164)rt_nil_check(F->i_1755)).ival_ = (*(P164)rt_nil_check(F->x_825)).kind_;
f_expect_id_282(F->up, &(*(P164)rt_nil_check(F->i_1755)).tag_);
if (f_at_op_267(F->up, rt_str("(", 1))) {
f_skip_276(F->up);
while (F->more_1761) {
F->formal_1759 = NULL;
F->mark_1760 = ((rt_int)0LL);
if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("IS", 2)))) {
f_expect_id_282(F->up, &F->formal_1759);
f_skip_276(F->up);
F->mark_1760 = ((rt_int)5LL);
} else if (((f_at_kind_269(F->up, ((rt_int)1LL)) && (f_kind_at_271(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_273(F->up, ((rt_int)1LL)), rt_str(":=:", 3))))) {
f_expect_id_282(F->up, &F->formal_1759);
f_skip_276(F->up);
F->mark_1760 = ((rt_int)1LL);
}
if ((f_at_kind_269(F->up, ((rt_int)6LL)) && (F->mark_1760 == ((rt_int)5LL)))) {
F->a_1758 = f_nn_256(F->up, ((rt_int)5LL), f_cur_line_263(F->up));
f_designator_331(F->up, &(*(P164)rt_nil_check(F->a_1758)).name_);
} else {
f_expr_293(F->up, &F->a_1758);
}
(*(P164)rt_nil_check(F->a_1758)).formal_ = F->formal_1759;
(*(P164)rt_nil_check(F->a_1758)).flag_ = F->mark_1760;
f_append_260(F->up, &F->head_1756, &F->tail_1757, F->a_1758);
F->more_1761 = f_at_op_267(F->up, rt_str(",", 1));
if (F->more_1761) {
f_skip_276(F->up);
}
}
L_end_1762: ;
f_expect_op_280(F->up, rt_str(")", 1));
}
f_expect_op_280(F->up, rt_str(";", 1));
(*(P164)rt_nil_check(F->i_1755)).a_ = F->head_1756;
(*F->res_826) = F->i_1755;
ret_:

  return;
}

static void f_generic_decl_829(struct f_greenc_1fr *up_, P164 e_828) {
  struct f_generic_decl_829fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_828 = e_828;
F->y_1763 = NULL;
if (((*(P164)rt_nil_check(F->e_828)).kind_ == ((rt_int)54LL))) {
F->y_1763 = f_new_sym_382(F->up, ((rt_int)11LL), (*(P164)rt_nil_check(F->e_828)).name_);
(*(P111)rt_nil_check(F->y_1763)).decl_ = F->e_828;
f_define_377(F->up, F->y_1763, (*(P164)rt_nil_check(F->e_828)).line_);
} else if (((*(P164)rt_nil_check(F->e_828)).kind_ == ((rt_int)53LL))) {
f_instantiate_846(F->up, F->e_828);
} else {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_828)).line_, rt_str("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_831(struct f_greenc_1fr *up_, rstr n_830) {
  struct f_is_generic_name_831fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_830 = rt_str_copy(n_830);
F->y_1764 = NULL;
F->y_1764 = f_lookup_358(F->up, F->n_830);
F->result_ = ((F->y_1764 != NULL) && ((*(P111)rt_nil_check(F->y_1764)).kind_ == ((rt_int)11LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_833(struct f_greenc_1fr *up_, P164 e_832) {
  struct f_attach_generic_body_833fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_832 = e_832;
F->y_1765 = NULL;
F->y_1765 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_832)).name_)));
(*(P164)rt_nil_check((*(P111)rt_nil_check(F->y_1765)).decl_)).c_ = F->e_832;
F->up->generic_contexts_142 = ({ R141 *cell1766 = rt_alloc(sizeof(R141)); *cell1766 = cp_R141(({ R141 ag1767; ag1767.body_node_ = F->e_832; ag1767.visible_ = F->up->scope_stack_115; ag1767.next_ = F->up->generic_contexts_142; ag1767; })); (P140)cell1766; });
ret_:

  return;
}

static void f_restore_generic_context_836(struct f_greenc_1fr *up_, P164 body_node_834, rt_int line_835) {
  struct f_restore_generic_context_836fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_834 = body_node_834;
F->line_835 = line_835;
F->ctx_1768 = NULL;
F->ctx_1768 = F->up->generic_contexts_142;
F->m_1769 = NULL;
F->z_1770 = NULL;
while (((F->ctx_1768 != NULL) && ((*(P140)rt_nil_check(F->ctx_1768)).body_node_ != F->body_node_834))) {
F->ctx_1768 = (*(P140)rt_nil_check(F->ctx_1768)).next_;
}
L_end_1772: ;
if ((F->ctx_1768 == NULL)) {
goto ret_;
}
F->m_1769 = (*(P140)rt_nil_check(F->ctx_1768)).visible_;
while ((F->m_1769 != NULL)) {
if ((((*(P111)rt_nil_check(F->m_1769)).level_ <= ((rt_int)0LL)) && ((*(P111)rt_nil_check(F->m_1769)).kind_ != ((rt_int)11LL)))) {
F->z_1770 = F->up->table_113.p[rt_index(f_hash_356(F->up, (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1769)).name_))), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
F->seen_1771 = 0;
while ((F->z_1770 != NULL)) {
if ((((*(P111)rt_nil_check(F->z_1770)).depth_ == F->up->depth_114) && rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->z_1770)).name_)), (*(P134)rt_nil_check((*(P111)rt_nil_check(F->m_1769)).name_))))) {
F->seen_1771 = 1;
}
F->z_1770 = (*(P111)rt_nil_check(F->z_1770)).chain_;
}
L_end_1774: ;
if ((!F->seen_1771)) {
f_copy_sym_652(F->up, F->m_1769, &F->z_1770);
f_define_377(F->up, F->z_1770, F->line_835);
}
}
F->m_1769 = (*(P111)rt_nil_check(F->m_1769)).stack_;
}
L_end_1773: ;
ret_:

  return;
}

static P164 f_gactual_840(struct f_greenc_1fr *up_, P164 args_837, rt_int nth_838, rstr name_839) {
  struct f_gactual_840fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_837 = args_837;
F->nth_838 = nth_838;
F->name_839 = rt_str_copy(name_839);
F->a_1775 = NULL;
F->a_1775 = F->args_837;
F->i_1776 = ((rt_int)1LL);
while ((F->a_1775 != NULL)) {
if ((((*(P164)rt_nil_check(F->a_1775)).formal_ == NULL) && (F->i_1776 == F->nth_838))) {
F->result_ = F->a_1775;
goto ret_;
}
if ((((*(P164)rt_nil_check(F->a_1775)).formal_ != NULL) && rt_str_eq((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1775)).formal_)), F->name_839))) {
F->result_ = F->a_1775;
goto ret_;
}
if (((*(P164)rt_nil_check(F->a_1775)).formal_ == NULL)) {
F->i_1776 = rt_add(F->i_1776, ((rt_int)1LL));
}
F->a_1775 = (*(P164)rt_nil_check(F->a_1775)).next_;
}
L_end_1777: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_844(struct f_greenc_1fr *up_, P164 n_841, P134 name_842, P164 *r_843) {
  struct f_copy_node_844fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_841 = n_841;
F->name_842 = name_842;
F->r_843 = r_843;
(*F->r_843) = f_nn_256(F->up, (*(P164)rt_nil_check(F->n_841)).kind_, (*(P164)rt_nil_check(F->n_841)).line_);
as_R165(&(*(P164)rt_nil_check((*F->r_843))), (*(P164)rt_nil_check(F->n_841)));
(*(P164)rt_nil_check((*F->r_843))).name_ = F->name_842;
(*(P164)rt_nil_check((*F->r_843))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_846(struct f_greenc_1fr *up_, P164 e_845) {
  struct f_instantiate_846fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_845 = e_845;
F->g_1778 = NULL;
F->g_1778 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_845)).tag_)));
F->gd_1779 = NULL;
F->pat_1780 = NULL;
F->f_1781 = NULL;
F->a_1782 = NULL;
F->cn_1783 = NULL;
F->y_1784 = NULL;
F->z_1785 = NULL;
F->fs_1786 = NULL;
F->nth_1787 = ((rt_int)1LL);
F->t_1788 = NULL;
F->vt_1789 = NULL;
F->c_1790 = NULL;
F->v_1791 = NULL;
F->acc_1792 = NULL;
F->x_1793 = NULL;
if (((F->g_1778 == NULL) || ((*(P111)rt_nil_check(F->g_1778)).kind_ != ((rt_int)11LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_845)).tag_)), rt_str(" is not a generic unit", 22)));
}
F->gd_1779 = (*(P111)rt_nil_check(F->g_1778)).decl_;
F->pat_1780 = (*(P164)rt_nil_check(F->gd_1779)).b_;
f_open_scope_378(F->up);
F->f_1781 = (*(P164)rt_nil_check(F->gd_1779)).a_;
while ((F->f_1781 != NULL)) {
F->a_1782 = f_gactual_840(F->up, (*(P164)rt_nil_check(F->e_845)).a_, F->nth_1787, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->f_1781)).name_)));
F->nth_1787 = rt_add(F->nth_1787, ((rt_int)1LL));
if (((*(P164)rt_nil_check(F->f_1781)).ival_ == ((rt_int)10LL))) {
if (((F->a_1782 == NULL) || ((*(P164)rt_nil_check(F->a_1782)).kind_ != ((rt_int)5LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat(rt_str("a type is required for generic parameter ", 41), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->f_1781)).name_))));
}
F->y_1784 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1782)).name_)));
if (((F->y_1784 == NULL) || ((*(P111)rt_nil_check(F->y_1784)).kind_ != ((rt_int)5LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat((*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1782)).name_)), rt_str(" is not a type", 14)));
}
f_copy_sym_652(F->up, F->y_1784, &F->z_1785);
(*(P111)rt_nil_check(F->z_1785)).name_ = (*(P164)rt_nil_check(F->f_1781)).name_;
f_define_377(F->up, F->z_1785, (*(P164)rt_nil_check(F->e_845)).line_);
} else if (((*(P164)rt_nil_check(F->f_1781)).ival_ == ((rt_int)11LL))) {
if ((F->a_1782 == NULL)) {
F->a_1782 = (*(P164)rt_nil_check(F->f_1781)).b_;
}
if (((F->a_1782 == NULL) || ((*(P164)rt_nil_check(F->a_1782)).kind_ != ((rt_int)5LL)))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat(rt_str("a subprogram is required for generic parameter ", 47), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->f_1781)).name_))));
}
f_build_subprogram_460(F->up, (*(P164)rt_nil_check(F->f_1781)).a_, &F->fs_1786);
F->y_1784 = F->up->table_113.p[rt_index(f_hash_356(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1782)).name_))), F->up->table_113.lo, F->up->table_113.hi) - F->up->table_113.lo];
while (((F->y_1784 != NULL) && (!(((rt_str_eq((*(P134)rt_nil_check((*(P111)rt_nil_check(F->y_1784)).name_)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1782)).name_))) && (((*(P111)rt_nil_check(F->y_1784)).kind_ == ((rt_int)3LL)) || ((*(P111)rt_nil_check(F->y_1784)).kind_ == ((rt_int)4LL)))) && f_same_signature_374(F->up, (*(P111)rt_nil_check(F->y_1784)).params_, (*(P111)rt_nil_check(F->fs_1786)).params_)) && f_same_371(F->up, (*(P111)rt_nil_check(F->y_1784)).result_, (*(P111)rt_nil_check(F->fs_1786)).result_))))) {
F->y_1784 = (*(P111)rt_nil_check(F->y_1784)).chain_;
}
L_end_1796: ;
if ((F->y_1784 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no subprogram ", 14), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->a_1782)).name_))), rt_str(" matches generic parameter ", 27)), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->f_1781)).name_))));
}
f_copy_sym_652(F->up, F->y_1784, &F->z_1785);
(*(P111)rt_nil_check(F->z_1785)).name_ = (*(P164)rt_nil_check(F->f_1781)).name_;
f_define_377(F->up, F->z_1785, (*(P164)rt_nil_check(F->e_845)).line_);
} else {
if ((F->a_1782 == NULL)) {
F->a_1782 = (*(P164)rt_nil_check(F->f_1781)).b_;
}
if ((F->a_1782 == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat(rt_str("no actual for generic parameter ", 32), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->f_1781)).name_))));
}
f_resolve_412(F->up, (*(P164)rt_nil_check(F->f_1781)).a_, &F->t_1788, &F->c_1790);
f_gexpr_566(F->up, F->a_1782, F->t_1788, &F->vt_1789, &F->v_1791);
f_check_type_391(F->up, F->vt_1789, F->t_1788, (*(P164)rt_nil_check(F->e_845)).line_);
F->z_1785 = f_new_sym_382(F->up, ((rt_int)2LL), (*(P164)rt_nil_check(F->f_1781)).name_);
f_storage_450(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->f_1781)).name_)), F->t_1788, &F->acc_1792);
f_copy_code_435(F->up, F->t_1788, (*(P134)rt_nil_check(F->v_1791)), &F->x_1793);
f_emit_217(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P134)rt_nil_check(F->acc_1792)), rt_str(" = ", 3)), (*(P134)rt_nil_check(F->x_1793))), 59));
(*(P111)rt_nil_check(F->z_1785)).t_ = F->t_1788;
(*(P111)rt_nil_check(F->z_1785)).c_ = F->c_1790;
(*(P111)rt_nil_check(F->z_1785)).ro_ = 1;
if (((*(P116)rt_nil_check(F->t_1788)).kind_ == ((rt_int)1LL))) {
f_manifest_408(F->up, F->a_1782, &(*(P111)rt_nil_check(F->z_1785)).mvalue_, &F->ok_1794);
(*(P111)rt_nil_check(F->z_1785)).hasmv_ = F->ok_1794;
}
f_bind_453(F->up, F->z_1785, F->acc_1792);
f_define_377(F->up, F->z_1785, (*(P164)rt_nil_check(F->e_845)).line_);
}
F->f_1781 = (*(P164)rt_nil_check(F->f_1781)).next_;
}
L_end_1795: ;
if (((*(P164)rt_nil_check(F->gd_1779)).c_ != NULL)) {
f_restore_generic_context_836(F->up, (*(P164)rt_nil_check(F->gd_1779)).c_, (*(P164)rt_nil_check(F->e_845)).line_);
}
if ((((*(P164)rt_nil_check(F->pat_1780)).kind_ == ((rt_int)44LL)) || ((*(P164)rt_nil_check(F->pat_1780)).kind_ == ((rt_int)45LL)))) {
if (((*(P164)rt_nil_check(F->pat_1780)).ival_ == ((rt_int)1LL))) {
if (((*(P164)rt_nil_check(F->gd_1779)).c_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic ", 20), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_845)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
F->pat_1780 = (*(P164)rt_nil_check(F->gd_1779)).c_;
}
f_copy_node_844(F->up, F->pat_1780, (*(P164)rt_nil_check(F->e_845)).name_, &F->cn_1783);
f_build_subprogram_460(F->up, F->cn_1783, &F->y_1784);
f_define_377(F->up, F->y_1784, (*(P164)rt_nil_check(F->e_845)).line_);
f_subprogram_body_471(F->up, F->cn_1783, F->y_1784);
} else if (((*(P164)rt_nil_check(F->pat_1780)).kind_ == ((rt_int)48LL))) {
f_copy_node_844(F->up, F->pat_1780, (*(P164)rt_nil_check(F->e_845)).name_, &F->cn_1783);
f_package_spec_657(F->up, F->cn_1783);
F->y_1784 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_845)).name_)));
if (((*(P164)rt_nil_check(F->gd_1779)).c_ != NULL)) {
f_copy_node_844(F->up, (*(P164)rt_nil_check(F->gd_1779)).c_, (*(P164)rt_nil_check(F->e_845)).name_, &F->cn_1783);
f_package_body_662(F->up, F->cn_1783);
}
} else {
f_copy_node_844(F->up, F->pat_1780, (*(P164)rt_nil_check(F->e_845)).name_, &F->cn_1783);
f_task_spec_749(F->up, F->cn_1783);
F->y_1784 = f_lookup_358(F->up, (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_845)).name_)));
if (((*(P164)rt_nil_check(F->gd_1779)).c_ == NULL)) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->e_845)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic task ", 25), (*(P134)rt_nil_check((*(P164)rt_nil_check(F->e_845)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
f_copy_node_844(F->up, (*(P164)rt_nil_check(F->gd_1779)).c_, (*(P164)rt_nil_check(F->e_845)).name_, &F->cn_1783);
f_task_body_753(F->up, F->cn_1783);
}
f_close_scope_379(F->up);
f_define_377(F->up, F->y_1784, (*(P164)rt_nil_check(F->e_845)).line_);
ret_:

  return;
}

static void f_predef_type_851(struct f_greenc_1fr *up_, rstr name_847, P116 t_848, rstr lo_849, rstr hi_850) {
  struct f_predef_type_851fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_847 = rt_str_copy(name_847);
F->t_848 = t_848;
F->lo_849 = rt_str_copy(lo_849);
F->hi_850 = rt_str_copy(hi_850);
F->y_1797 = NULL;
F->y_1797 = f_new_sym_382(F->up, ((rt_int)5LL), f_mk_190(F->up, F->name_847));
(*(P111)rt_nil_check(F->y_1797)).t_ = F->t_848;
if (((F->lo_849).len > ((rt_int)0LL))) {
(*(P111)rt_nil_check(F->y_1797)).c_ = f_new_cons_385(F->up);
(*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1797)).c_)).lo_ = f_mk_190(F->up, F->lo_849);
(*(P171)rt_nil_check((*(P111)rt_nil_check(F->y_1797)).c_)).hi_ = f_mk_190(F->up, F->hi_850);
}
f_define_377(F->up, F->y_1797, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_855(struct f_greenc_1fr *up_, rstr name_852, P116 t_853, rstr code_text_854) {
  struct f_predef_const_855fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_852 = rt_str_copy(name_852);
F->t_853 = t_853;
F->code_text_854 = rt_str_copy(code_text_854);
F->y_1798 = NULL;
F->y_1798 = f_new_sym_382(F->up, ((rt_int)2LL), f_mk_190(F->up, F->name_852));
(*(P111)rt_nil_check(F->y_1798)).t_ = F->t_853;
(*(P111)rt_nil_check(F->y_1798)).ro_ = 1;
(*(P111)rt_nil_check(F->y_1798)).access_path_ = f_mk_190(F->up, F->code_text_854);
f_define_377(F->up, F->y_1798, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_857(struct f_greenc_1fr *up_, rstr name_856) {
  struct f_predef_exc_857fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_856 = rt_str_copy(name_856);
F->y_1799 = NULL;
F->y_1799 = f_new_sym_382(F->up, ((rt_int)6LL), f_mk_190(F->up, F->name_856));
(*(P111)rt_nil_check(F->y_1799)).cname_ = f_mk_190(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_208(F->up)), F->name_856), f_q_208(F->up)), 41));
f_define_377(F->up, F->y_1799, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_861(struct f_greenc_1fr *up_, rstr name_858, P116 t_859, rt_int v_860) {
  struct f_predef_lit_861fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_858 = rt_str_copy(name_858);
F->t_859 = t_859;
F->v_860 = v_860;
F->y_1800 = NULL;
F->y_1800 = f_new_sym_382(F->up, ((rt_int)7LL), f_mk_190(F->up, F->name_858));
(*(P111)rt_nil_check(F->y_1800)).t_ = F->t_859;
(*(P111)rt_nil_check(F->y_1800)).result_ = F->t_859;
(*(P111)rt_nil_check(F->y_1800)).mvalue_ = F->v_860;
(*(P111)rt_nil_check(F->y_1800)).hasmv_ = 1;
f_define_377(F->up, F->y_1800, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_862(struct f_greenc_1fr *up_) {
  struct f_predefine_862fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_1801 = rt_str_copy(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_str("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_1802 = ((rt_int)1LL);
F->code_no_1803 = ((rt_int)0LL);
f_predef_type_851(F->up, rt_str("INTEGER", 7), F->up->ty_int_150, rt_str("", 0), rt_str("", 0));
f_predef_type_851(F->up, rt_str("SHORT_INTEGER", 13), F->up->ty_int_150, rt_str("", 0), rt_str("", 0));
f_predef_type_851(F->up, rt_str("LONG_INTEGER", 12), F->up->ty_int_150, rt_str("", 0), rt_str("", 0));
f_predef_type_851(F->up, rt_str("NATURAL", 7), F->up->ty_int_150, rt_str("1", 1), rt_str("INT64_MAX", 9));
f_predef_type_851(F->up, rt_str("PRIORITY", 8), F->up->ty_int_150, rt_str("0", 1), rt_str("255", 3));
f_predef_type_851(F->up, rt_str("BOOLEAN", 7), F->up->ty_bool_151, rt_str("0", 1), rt_str("1", 1));
f_predef_type_851(F->up, rt_str("CHARACTER", 9), F->up->ty_char_153, rt_str("0", 1), rt_str("127", 3));
f_predef_type_851(F->up, rt_str("STRING", 6), F->up->ty_string_154, rt_str("", 0), rt_str("", 0));
f_predef_type_851(F->up, rt_str("FLOAT", 5), F->up->ty_float_152, rt_str("", 0), rt_str("", 0));
f_predef_type_851(F->up, rt_str("SHORT_FLOAT", 11), F->up->ty_float_152, rt_str("", 0), rt_str("", 0));
f_predef_type_851(F->up, rt_str("LONG_FLOAT", 10), F->up->ty_float_152, rt_str("", 0), rt_str("", 0));
f_predef_type_851(F->up, rt_str("TIME", 4), F->up->ty_float_152, rt_str("", 0), rt_str("", 0));
f_predef_lit_861(F->up, rt_str("FALSE", 5), F->up->ty_bool_151, ((rt_int)0LL));
f_predef_lit_861(F->up, rt_str("TRUE", 4), F->up->ty_bool_151, ((rt_int)1LL));
{ rt_int lo1806 = ((rt_int)1LL), hi1807 = (F->control_1801).len;
for (rt_int it1808 = lo1806; it1808 <= hi1807; it1808++) {
F->i_1805 = it1808;
if ((rt_str_get(F->control_1801, F->i_1805) == 32)) {
f_predef_const_855(F->up, rt_str_slice(F->control_1801, F->start_1802, rt_sub(F->i_1805, ((rt_int)1LL))), F->up->ty_char_153, rt_str_of_int(F->code_no_1803));
F->code_no_1803 = rt_add(F->code_no_1803, ((rt_int)1LL));
F->start_1802 = rt_add(F->i_1805, ((rt_int)1LL));
}
}
}
L_end_1804: ;
f_predef_const_855(F->up, rt_str("DEL", 3), F->up->ty_char_153, rt_str("127", 3));
f_predef_const_855(F->up, rt_str("EXCLAM", 6), F->up->ty_char_153, rt_str("33", 2));
f_predef_const_855(F->up, rt_str("DOLLAR", 6), F->up->ty_char_153, rt_str("36", 2));
f_predef_const_855(F->up, rt_str("QUESTION", 8), F->up->ty_char_153, rt_str("63", 2));
f_predef_const_855(F->up, rt_str("AT_SIGN", 7), F->up->ty_char_153, rt_str("64", 2));
f_predef_const_855(F->up, rt_str("L_BRACKET", 9), F->up->ty_char_153, rt_str("91", 2));
f_predef_const_855(F->up, rt_str("BACK_SLASH", 10), F->up->ty_char_153, rt_str("92", 2));
f_predef_const_855(F->up, rt_str("R_BRACKET", 9), F->up->ty_char_153, rt_str("93", 2));
f_predef_const_855(F->up, rt_str("CIRCUMFLEX", 10), F->up->ty_char_153, rt_str("94", 2));
f_predef_const_855(F->up, rt_str("GRAVE", 5), F->up->ty_char_153, rt_str("96", 2));
f_predef_const_855(F->up, rt_str("L_BRACE", 7), F->up->ty_char_153, rt_str("123", 3));
f_predef_const_855(F->up, rt_str("R_BRACE", 7), F->up->ty_char_153, rt_str("125", 3));
f_predef_const_855(F->up, rt_str("TILDE", 5), F->up->ty_char_153, rt_str("126", 3));
{ rt_int lo1811 = ((rt_int)0LL), hi1812 = ((rt_int)25LL);
for (rt_int it1813 = lo1811; it1813 <= hi1812; it1813++) {
F->i_1810 = it1813;
f_predef_const_855(F->up, rt_str_catc(rt_str("LC_", 3), rt_range((rt_add(((rt_int)66LL), F->i_1810) - 1), 0, 127)), F->up->ty_char_153, rt_str_of_int(rt_add(((rt_int)97LL), F->i_1810)));
}
}
L_end_1809: ;
f_predef_const_855(F->up, rt_str("NEWLINE", 7), F->up->ty_string_154, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_q_208(F->up)), rt_str("\\n", 2)), f_q_208(F->up)), rt_str(", 1)", 4)));
f_predef_const_855(F->up, rt_str("SECONDS", 7), F->up->ty_float_152, rt_str("((double)RT_SECONDS)", 20));
f_predef_exc_857(F->up, rt_str("ACCESS_ERROR", 12));
f_predef_exc_857(F->up, rt_str("ASSERT_ERROR", 12));
f_predef_exc_857(F->up, rt_str("DISCRIMINANT_ERROR", 18));
f_predef_exc_857(F->up, rt_str("DIVIDE_ERROR", 12));
f_predef_exc_857(F->up, rt_str("FAILURE", 7));
f_predef_exc_857(F->up, rt_str("INDEX_ERROR", 11));
f_predef_exc_857(F->up, rt_str("INITIATE_ERROR", 14));
f_predef_exc_857(F->up, rt_str("NO_VALUE_ERROR", 14));
f_predef_exc_857(F->up, rt_str("OVERFLOW", 8));
f_predef_exc_857(F->up, rt_str("OVERLAP_ERROR", 13));
f_predef_exc_857(F->up, rt_str("RANGE_ERROR", 11));
f_predef_exc_857(F->up, rt_str("SELECT_ERROR", 12));
f_predef_exc_857(F->up, rt_str("STORAGE_OVERFLOW", 16));
f_predef_exc_857(F->up, rt_str("TASKING_ERROR", 13));
f_predef_exc_857(F->up, rt_str("UNDERFLOW", 9));
f_predef_exc_857(F->up, rt_str("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_864(struct f_greenc_1fr *up_, P164 u_863) {
  struct f_translate_864fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_863 = u_863;
F->p_1814 = NULL;
F->p_1814 = F->u_863;
F->y_1815 = NULL;
f_open_scope_378(F->up);
while ((F->p_1814 != NULL)) {
if (((*(P164)rt_nil_check(F->p_1814)).next_ == NULL)) {
if ((((*(P164)rt_nil_check(F->p_1814)).kind_ != ((rt_int)44LL)) || ((*(P164)rt_nil_check(F->p_1814)).a_ != NULL))) {
f_fail_211(F->up, (*(P164)rt_nil_check(F->p_1814)).line_, rt_str("the main program is a procedure without parameters", 50));
}
f_build_subprogram_460(F->up, F->p_1814, &F->y_1815);
f_define_377(F->up, F->y_1815, (*(P164)rt_nil_check(F->p_1814)).line_);
f_subprogram_body_471(F->up, F->p_1814, F->y_1815);
F->up->main_name_184 = (*(P111)rt_nil_check(F->y_1815)).cname_;
} else {
f_decl_element_464(F->up, F->p_1814);
}
F->p_1814 = (*(P164)rt_nil_check(F->p_1814)).next_;
}
L_end_1816: ;
ret_:

  return;
}

static void f_print_program_865(struct f_greenc_1fr *up_) {
  struct f_print_program_865fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_444(F->up);
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_208(F->up)), rt_str("paleo.h", 7)), f_q_208(F->up)));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("#include <math.h>", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_219(F->up, F->up->out_types_122);
f_print_buffer_219(F->up, F->up->out_frames_123);
f_print_buffer_219(F->up, F->up->out_helpers_124);
f_print_buffer_219(F->up, F->up->out_protos_125);
f_print_buffer_219(F->up, F->up->out_globals_126);
f_print_buffer_219(F->up, F->up->out_funcs_127);
rt_g_put(rt_str("int main(int argc, char **argv) {", 33));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_init(argc, argv);", 22));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_set_lang(1);", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_219(F->up, F->up->out_excs_129);
f_print_buffer_219(F->up, F->up->out_init_128);
rt_g_put(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P134)rt_nil_check(F->up->main_name_184))), rt_str("();", 3)));
rt_g_put(rt_str("\n", 1));
f_print_buffer_219(F->up, F->up->out_awaits_170);
rt_g_put(rt_str("  rt_main_done();", 17));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  return 0;", 11));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("}", 1));
rt_g_put(rt_str("\n", 1));
ret_:

  return;
}

static void f_greenc_1(void) {
  struct f_greenc_1fr *F = rt_alloc(sizeof *F);
F->k_eof_2 = ((rt_int)0LL);
F->k_id_3 = ((rt_int)1LL);
F->k_kw_4 = ((rt_int)2LL);
F->k_op_5 = ((rt_int)3LL);
F->k_int_6 = ((rt_int)4LL);
F->k_float_7 = ((rt_int)5LL);
F->k_str_8 = ((rt_int)6LL);
F->n_int_9 = ((rt_int)1LL);
F->n_float_10 = ((rt_int)2LL);
F->n_str_11 = ((rt_int)3LL);
F->n_nil_12 = ((rt_int)4LL);
F->n_name_13 = ((rt_int)5LL);
F->n_unop_14 = ((rt_int)6LL);
F->n_binop_15 = ((rt_int)7LL);
F->n_apply_16 = ((rt_int)8LL);
F->n_select_17 = ((rt_int)9LL);
F->n_attr_18 = ((rt_int)10LL);
F->n_new_19 = ((rt_int)11LL);
F->n_agg_20 = ((rt_int)12LL);
F->n_citem_21 = ((rt_int)13LL);
F->n_range_22 = ((rt_int)14LL);
F->n_paren_23 = ((rt_int)15LL);
F->n_raw_24 = ((rt_int)16LL);
F->n_assign_25 = ((rt_int)20LL);
F->n_call_26 = ((rt_int)21LL);
F->n_if_27 = ((rt_int)22LL);
F->n_case_28 = ((rt_int)23LL);
F->n_loop_29 = ((rt_int)24LL);
F->n_block_30 = ((rt_int)25LL);
F->n_exit_31 = ((rt_int)26LL);
F->n_return_32 = ((rt_int)27LL);
F->n_raise_33 = ((rt_int)28LL);
F->n_reraise_34 = ((rt_int)29LL);
F->n_assert_35 = ((rt_int)30LL);
F->n_null_36 = ((rt_int)31LL);
F->n_delay_37 = ((rt_int)32LL);
F->n_initiate_38 = ((rt_int)33LL);
F->n_accept_39 = ((rt_int)34LL);
F->n_selects_40 = ((rt_int)35LL);
F->n_abort_41 = ((rt_int)36LL);
F->n_var_42 = ((rt_int)40LL);
F->n_const_43 = ((rt_int)41LL);
F->n_type_44 = ((rt_int)42LL);
F->n_subtype_45 = ((rt_int)43LL);
F->n_proc_46 = ((rt_int)44LL);
F->n_func_47 = ((rt_int)45LL);
F->n_exc_48 = ((rt_int)46LL);
F->n_param_49 = ((rt_int)47LL);
F->n_pkgspec_50 = ((rt_int)48LL);
F->n_pkgbody_51 = ((rt_int)49LL);
F->n_taskspec_52 = ((rt_int)50LL);
F->n_taskbody_53 = ((rt_int)51LL);
F->n_entry_54 = ((rt_int)52LL);
F->n_inst_55 = ((rt_int)53LL);
F->n_generic_56 = ((rt_int)54LL);
F->n_use_57 = ((rt_int)55LL);
F->n_pragma_58 = ((rt_int)56LL);
F->n_arm_59 = ((rt_int)60LL);
F->n_label_60 = ((rt_int)61LL);
F->n_handler_61 = ((rt_int)62LL);
F->n_comp_62 = ((rt_int)63LL);
F->n_alt_63 = ((rt_int)64LL);
F->d_enum_64 = ((rt_int)70LL);
F->d_range_65 = ((rt_int)71LL);
F->d_float_66 = ((rt_int)72LL);
F->d_array_67 = ((rt_int)73LL);
F->d_record_68 = ((rt_int)74LL);
F->d_access_69 = ((rt_int)75LL);
F->d_derived_70 = ((rt_int)76LL);
F->d_private_71 = ((rt_int)77LL);
F->s_mark_72 = ((rt_int)80LL);
F->m_in_73 = ((rt_int)1LL);
F->m_inout_74 = ((rt_int)2LL);
F->m_out_75 = ((rt_int)3LL);
F->t_int_76 = ((rt_int)1LL);
F->t_bool_77 = ((rt_int)2LL);
F->t_float_78 = ((rt_int)3LL);
F->t_enum_79 = ((rt_int)4LL);
F->t_string_80 = ((rt_int)5LL);
F->t_array_81 = ((rt_int)6LL);
F->t_record_82 = ((rt_int)7LL);
F->t_ptr_83 = ((rt_int)8LL);
F->t_void_84 = ((rt_int)9LL);
F->t_nil_85 = ((rt_int)10LL);
F->t_char_86 = ((rt_int)11LL);
F->t_univ_87 = ((rt_int)12LL);
F->t_act_88 = ((rt_int)13LL);
F->t_tdecl_89 = ((rt_int)14LL);
F->t_entry_90 = ((rt_int)15LL);
F->y_var_91 = ((rt_int)1LL);
F->y_const_92 = ((rt_int)2LL);
F->y_func_93 = ((rt_int)3LL);
F->y_proc_94 = ((rt_int)4LL);
F->y_type_95 = ((rt_int)5LL);
F->y_exc_96 = ((rt_int)6LL);
F->y_enumlit_97 = ((rt_int)7LL);
F->y_package_98 = ((rt_int)8LL);
F->y_task_99 = ((rt_int)9LL);
F->y_entry_100 = ((rt_int)10LL);
F->y_generic_101 = ((rt_int)11LL);
F->toks_106.lo = ((rt_int)1LL); F->toks_106.hi = ((rt_int)1000000LL); F->toks_106.lo2 = 1; F->toks_106.hi2 = 1;
F->toks_106.p = rt_alloc(sizeof(P104) * (size_t)RT_CNT(F->toks_106));
F->ntoks_107 = ((rt_int)0LL);
F->tpos_108 = ((rt_int)1LL);
F->src_line_109 = ((rt_int)0LL);
F->table_113.lo = ((rt_int)0LL); F->table_113.hi = ((rt_int)4092LL); F->table_113.lo2 = 1; F->table_113.hi2 = 1;
F->table_113.p = rt_alloc(sizeof(P111) * (size_t)RT_CNT(F->table_113));
F->depth_114 = ((rt_int)0LL);
F->scope_stack_115 = NULL;
F->all_types_118 = NULL;
F->serial_119 = ((rt_int)0LL);
F->out_types_122 = NULL;
F->out_frames_123 = NULL;
F->out_helpers_124 = NULL;
F->out_protos_125 = NULL;
F->out_globals_126 = NULL;
F->out_funcs_127 = NULL;
F->out_init_128 = NULL;
F->out_excs_129 = NULL;
F->code_130 = NULL;
F->fields_buf_131 = NULL;
F->in_func_132 = 0;
F->cur_level_133 = ((rt_int)0LL);
F->st_field_135 = NULL;
F->func_sym_136 = NULL;
F->exits_139 = NULL;
F->generic_contexts_142 = NULL;
F->accept_exits_143 = NULL;
F->frames_144 = ((rt_int)0LL);
F->handlers_147 = NULL;
F->cleanups_148 = NULL;
F->trial_149 = ((rt_int)0LL);
F->ty_int_150 = NULL;
F->ty_bool_151 = NULL;
F->ty_float_152 = NULL;
F->ty_char_153 = NULL;
F->ty_string_154 = NULL;
F->ty_void_155 = NULL;
F->ty_nil_156 = NULL;
F->ty_univ_157 = NULL;
F->ty_act_158 = NULL;
F->ty_tdecl_159 = NULL;
F->ty_entry_160 = NULL;
F->cur_task_161 = NULL;
F->accept_depth_162 = ((rt_int)0LL);
F->famarg_done_163 = 0;
F->fam_ix_166 = NULL;
F->call_task_ix_167 = NULL;
F->saw_interface_168 = 0;
F->defer_entry_structs_169 = 0;
F->out_awaits_170 = NULL;
F->no_cons_173 = NULL;
F->units_174 = NULL;
F->pkg_stack_175 = NULL;
F->cur_pkg_176 = NULL;
F->prefix_hint_177 = NULL;
F->call_want_178 = NULL;
F->pure_sym_179 = NULL;
F->pure_depth_180 = ((rt_int)0LL);
F->vrp_ok_181 = 0;
F->in_lv_path_182 = 0;
F->last_deref_183 = 0;
F->main_name_184 = NULL;
F->conf_system_185 = NULL;
F->conf_storage_unit_186 = ((rt_int)8LL);
F->conf_memory_size_187 = ((rt_int)1048576LL);
F->conf_optimize_188 = NULL;
F->out_types_122 = f_new_buffer_212(F);
F->out_frames_123 = f_new_buffer_212(F);
F->out_helpers_124 = f_new_buffer_212(F);
F->out_protos_125 = f_new_buffer_212(F);
F->out_globals_126 = f_new_buffer_212(F);
F->out_funcs_127 = f_new_buffer_212(F);
F->out_init_128 = f_new_buffer_212(F);
F->out_excs_129 = f_new_buffer_212(F);
F->code_130 = F->out_init_128;
F->no_cons_173 = f_new_cons_385(F);
F->ty_int_150 = f_new_typ_384(F, ((rt_int)1LL));
F->ty_bool_151 = f_new_typ_384(F, ((rt_int)2LL));
F->ty_float_152 = f_new_typ_384(F, ((rt_int)3LL));
F->ty_char_153 = f_new_typ_384(F, ((rt_int)11LL));
F->ty_string_154 = f_new_typ_384(F, ((rt_int)5LL));
F->ty_void_155 = f_new_typ_384(F, ((rt_int)9LL));
F->ty_nil_156 = f_new_typ_384(F, ((rt_int)10LL));
F->ty_act_158 = f_new_typ_384(F, ((rt_int)13LL));
F->ty_tdecl_159 = f_new_typ_384(F, ((rt_int)14LL));
F->ty_entry_160 = f_new_typ_384(F, ((rt_int)15LL));
F->out_awaits_170 = f_new_buffer_212(F);
f_predefine_862(F);
f_read_source_253(F);
f_compilation_354(F, &F->units_174);
if ((F->units_174 == NULL)) {
f_fail_211(F, ((rt_int)1LL), rt_str("the compilation is empty", 24));
}
f_translate_864(F, F->units_174);
f_print_program_865(F);
ret_:

  return;
}

static void as_R1136(R1136 *d, R1136 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
  d->dflt_ = s.dflt_;
}
static R1136 cp_R1136(R1136 s) {
  R1136 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  d.dflt_ = s.dflt_;
  return d;
}
static int eq_R1136(R1136 a, R1136 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_);
}
static void as_R1125(R1125 *d, R1125 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1125 cp_R1125(R1125 s) {
  R1125 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1125(R1125 a, R1125 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
}
static void as_R172(R172 *d, R172 s) {
  d->lo_ = s.lo_;
  d->hi_ = s.hi_;
  d->slen_ = s.slen_;
  d->mlo_ = s.mlo_;
  d->mhi_ = s.mhi_;
  d->hasm_ = s.hasm_;
  d->lo2_ = s.lo2_;
  d->hi2_ = s.hi2_;
}
static R172 cp_R172(R172 s) {
  R172 d = s;
  d.lo_ = s.lo_;
  d.hi_ = s.hi_;
  d.slen_ = s.slen_;
  d.mlo_ = s.mlo_;
  d.mhi_ = s.mhi_;
  d.hasm_ = s.hasm_;
  d.lo2_ = s.lo2_;
  d.hi2_ = s.hi2_;
  return d;
}
static int eq_R172(R172 a, R172 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_);
}
static void as_R165(R165 *d, R165 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->flag_ = s.flag_;
  d->name_ = s.name_;
  d->tag_ = s.tag_;
  d->a_ = s.a_;
  d->b_ = s.b_;
  d->c_ = s.c_;
  d->d_ = s.d_;
  d->e_ = s.e_;
  d->next_ = s.next_;
  d->formal_ = s.formal_;
}
static R165 cp_R165(R165 s) {
  R165 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.flag_ = s.flag_;
  d.name_ = s.name_;
  d.tag_ = s.tag_;
  d.a_ = s.a_;
  d.b_ = s.b_;
  d.c_ = s.c_;
  d.d_ = s.d_;
  d.e_ = s.e_;
  d.next_ = s.next_;
  d.formal_ = s.formal_;
  return d;
}
static int eq_R165(R165 a, R165 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R146(R146 *d, R146 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R146 cp_R146(R146 s) {
  R146 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R146(R146 a, R146 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R141(R141 *d, R141 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R141 cp_R141(R141 s) {
  R141 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R141(R141 a, R141 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R138(R138 *d, R138 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R138 cp_R138(R138 s) {
  R138 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R138(R138 a, R138 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R121(R121 *d, R121 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R121 cp_R121(R121 s) {
  R121 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R121(R121 a, R121 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R117(R117 *d, R117 s) {
  d->kind_ = s.kind_;
  d->name_ = s.name_;
  d->lits_ = s.lits_;
  d->elem_ = s.elem_;
  d->idx_ = s.idx_;
  d->elemcons_ = s.elemcons_;
  d->tcons_ = s.tcons_;
  d->fields_ = s.fields_;
  d->target_ = s.target_;
  d->decl_ = s.decl_;
  d->cname_ = s.cname_;
  d->forward_ = s.forward_;
  d->defined_ = s.defined_;
  d->priv_ = s.priv_;
  d->next_ = s.next_;
  d->idx2_ = s.idx2_;
  d->littab_ = s.littab_;
  d->parent_ = s.parent_;
  d->ndigits_ = s.ndigits_;
  d->fdelta_ = s.fdelta_;
  d->fsmall_ = s.fsmall_;
  d->dims_ = s.dims_;
  d->is_restricted_ = s.is_restricted_;
}
static R117 cp_R117(R117 s) {
  R117 d = s;
  d.kind_ = s.kind_;
  d.name_ = s.name_;
  d.lits_ = s.lits_;
  d.elem_ = s.elem_;
  d.idx_ = s.idx_;
  d.elemcons_ = s.elemcons_;
  d.tcons_ = s.tcons_;
  d.fields_ = s.fields_;
  d.target_ = s.target_;
  d.decl_ = s.decl_;
  d.cname_ = s.cname_;
  d.forward_ = s.forward_;
  d.defined_ = s.defined_;
  d.priv_ = s.priv_;
  d.next_ = s.next_;
  d.idx2_ = s.idx2_;
  d.littab_ = s.littab_;
  d.parent_ = s.parent_;
  d.ndigits_ = s.ndigits_;
  d.fdelta_ = s.fdelta_;
  d.fsmall_ = s.fsmall_;
  d.dims_ = s.dims_;
  d.is_restricted_ = s.is_restricted_;
  return d;
}
static int eq_R117(R117 a, R117 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_);
}
static void as_R112(R112 *d, R112 s) {
  d->kind_ = s.kind_;
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->access_path_ = s.access_path_;
  d->cname_ = s.cname_;
  d->ro_ = s.ro_;
  d->mvalue_ = s.mvalue_;
  d->hasmv_ = s.hasmv_;
  d->decl_ = s.decl_;
  d->params_ = s.params_;
  d->result_ = s.result_;
  d->depth_ = s.depth_;
  d->level_ = s.level_;
  d->byref_ = s.byref_;
  d->vrp_ = s.vrp_;
  d->hidden_ = s.hidden_;
  d->from_use_ = s.from_use_;
  d->members_ = s.members_;
  d->mnext_ = s.mnext_;
  d->chain_ = s.chain_;
  d->stack_ = s.stack_;
}
static R112 cp_R112(R112 s) {
  R112 d = s;
  d.kind_ = s.kind_;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.access_path_ = s.access_path_;
  d.cname_ = s.cname_;
  d.ro_ = s.ro_;
  d.mvalue_ = s.mvalue_;
  d.hasmv_ = s.hasmv_;
  d.decl_ = s.decl_;
  d.params_ = s.params_;
  d.result_ = s.result_;
  d.depth_ = s.depth_;
  d.level_ = s.level_;
  d.byref_ = s.byref_;
  d.vrp_ = s.vrp_;
  d.hidden_ = s.hidden_;
  d.from_use_ = s.from_use_;
  d.members_ = s.members_;
  d.mnext_ = s.mnext_;
  d.chain_ = s.chain_;
  d.stack_ = s.stack_;
  return d;
}
static int eq_R112(R112 a, R112 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_);
}
static void as_A110(A110 *d, A110 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A110 cp_A110(A110 s) {
  A110 d = s; d.p = rt_alloc(sizeof(P111) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A110(A110 a, A110 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R105(R105 *d, R105 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R105 cp_R105(R105 s) {
  R105 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R105(R105 a, R105 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A103(A103 *d, A103 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A103 cp_A103(A103 s) {
  A103 d = s; d.p = rt_alloc(sizeof(P104) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A103(A103 a, A103 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(1);
  ex_compile_error_102 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
