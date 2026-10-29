#include "paleo.h"
#include <math.h>
typedef struct R104 R104;
typedef struct R104 *P103;
typedef struct A102 A102;
struct A102 { rt_int lo, hi, lo2, hi2; P103 *p; };
typedef struct R111 R111;
typedef struct R111 *P110;
typedef struct A109 A109;
struct A109 { rt_int lo, hi, lo2, hi2; P110 *p; };
typedef struct R116 R116;
typedef struct R116 *P115;
typedef struct R120 R120;
typedef struct R120 *P119;
typedef rstr *P133;
typedef struct R137 R137;
typedef struct R137 *P136;
typedef struct R140 R140;
typedef struct R140 *P139;
typedef struct R145 R145;
typedef struct R145 *P144;
typedef struct R164 R164;
typedef struct R164 *P163;
typedef struct R171 R171;
typedef struct R171 *P170;
struct R120 { int dummy_; P144 head_; P144 tail_; };
struct R145 { int dummy_; P133 s_; P144 next_; };
struct R104 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P133 s_; };
struct R164 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P133 name_; P133 tag_; P163 a_; P163 b_; P163 c_; P163 d_; P163 e_; P163 next_; P133 formal_; };
typedef struct R1071 R1071;
typedef struct R1071 *P1070;
struct R111 { int dummy_; rt_int kind_; P133 name_; P115 t_; P170 c_; P133 access_path_; P133 cname_; int ro_; rt_int mvalue_; int hasmv_; P163 decl_; P1070 params_; P115 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P110 members_; P110 mnext_; P110 chain_; P110 stack_; };
typedef struct R1082 R1082;
typedef struct R1082 *P1081;
struct R116 { int dummy_; rt_int kind_; P133 name_; P163 lits_; P115 elem_; P115 idx_; P170 elemcons_; P170 tcons_; P1081 fields_; P115 target_; P163 decl_; P133 cname_; int forward_; int defined_; int priv_; P115 next_; P115 idx2_; P133 littab_; P115 parent_; rt_int ndigits_; P133 fdelta_; P133 fsmall_; rt_int dims_; int is_restricted_; };
struct R171 { int dummy_; P133 lo_; P133 hi_; P133 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P133 lo2_; P133 hi2_; };
struct R1082 { int dummy_; P133 name_; P115 t_; P170 c_; P1081 next_; P163 dflt_; };
struct R1071 { int dummy_; P133 name_; rt_int mode_; P115 t_; P170 c_; P133 cfield_; P163 dflt_; P1070 next_; };
struct R137 { int dummy_; P133 match_; P133 label_; rt_int depth_; int is_loop_; P136 next_; };
struct R140 { int dummy_; P163 body_node_; P110 visible_; P139 next_; };
struct f_mk_185fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_184;
 P133 result_;
};
struct f_new_name_188fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_186;
 P133 *res_187;
};
struct f_is_letter_190fr { int dummy;
 struct f_greenc_1fr *up;
 int c_189;
 int result_;
};
struct f_is_digit_192fr { int dummy;
 struct f_greenc_1fr *up;
 int c_191;
 int result_;
};
struct f_upper_194fr { int dummy;
 struct f_greenc_1fr *up;
 int c_193;
 int result_;
};
struct f_lower_s_196fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_195;
 rstr result_;
 rstr r_838;
 rt_int i_840;
};
struct f_upper_s_198fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_197;
 rstr result_;
 rstr r_844;
 rt_int i_846;
};
struct f_is_operator_200fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_199;
 int result_;
};
struct f_c_field_202fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_201;
 rstr result_;
};
struct f_q_203fr { int dummy;
 struct f_greenc_1fr *up;
 rstr result_;
};
struct f_fail_206fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_204;
 rstr msg_205;
};
struct f_new_buffer_207fr { int dummy;
 struct f_greenc_1fr *up;
 P119 result_;
};
struct f_put_to_210fr { int dummy;
 struct f_greenc_1fr *up;
 P119 b_208;
 rstr s_209;
 P144 l_852;
};
struct f_emit_212fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_211;
};
struct f_print_buffer_214fr { int dummy;
 struct f_greenc_1fr *up;
 P119 b_213;
 P144 l_855;
};
struct f_splice_217fr { int dummy;
 struct f_greenc_1fr *up;
 P119 a_215;
 P119 b_216;
};
struct f_is_reserved_219fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_218;
 int result_;
};
struct f_add_token_223fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_220;
 rstr s_221;
 rt_int ival_222;
};
struct f_digit_value_225fr { int dummy;
 struct f_greenc_1fr *up;
 int c_224;
 rt_int result_;
};
struct f_lex_line_227fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_226;
 rt_int i_860;
 rt_int j_861;
 rt_int n_862;
 int c_863;
 rt_int v_864;
 rstr buf_865;
 rt_int bl_866;
 rt_int base_871;
 rstr two_878;
};
struct f_read_source_228fr { int dummy;
 struct f_greenc_1fr *up;
 rstr buf_879;
 rt_int bl_880;
 int c_881;
};
struct f_nn_231fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_229;
 rt_int line_230;
 P163 result_;
};
struct f_append_235fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *head_232;
 P163 *tail_233;
 P163 x_234;
};
struct f_list_len_237fr { int dummy;
 struct f_greenc_1fr *up;
 P163 l_236;
 rt_int result_;
 rt_int n_888;
 P163 p_889;
};
struct f_cur_line_238fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_240fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_239;
 int result_;
};
struct f_at_op_242fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_241;
 int result_;
};
struct f_at_kind_244fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_243;
 int result_;
};
struct f_kind_at_246fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_245;
 rt_int result_;
};
struct f_text_at_248fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_247;
 rstr result_;
};
struct f_perror_250fr { int dummy;
 struct f_greenc_1fr *up;
 rstr msg_249;
};
struct f_skip_251fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_253fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_252;
};
struct f_expect_op_255fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_254;
};
struct f_expect_id_257fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *res_256;
};
struct f_name_node_259fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_258;
 P163 x_891;
};
struct f_id_list_261fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_260;
 P163 head_892;
 P163 tail_893;
 P163 x_894;
};
struct f_binop_266fr { int dummy;
 struct f_greenc_1fr *up;
 P133 op_262;
 P163 l_263;
 P163 r_264;
 rt_int line_265;
 P163 result_;
 P163 x_896;
};
struct f_expr_268fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_267;
 P163 l_897;
 P163 r_898;
 P133 op_899;
 rt_int line_900;
};
struct f_is_rel_270fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_269;
 int result_;
};
struct f_relation_272fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_271;
 P163 l_902;
 P163 r_903;
 P163 lo_904;
 P163 hi_905;
 P163 t_906;
 P133 op_907;
 rt_int line_908;
 int neg_909;
};
struct f_simple_expr_274fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_273;
 P163 l_910;
 P163 r_911;
 P133 op_912;
 rt_int line_913;
};
struct f_term_276fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_275;
 P163 l_915;
 P163 r_916;
 P133 op_917;
 rt_int line_918;
};
struct f_factor_278fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_277;
 P163 l_920;
 P163 r_921;
 P133 op_922;
 rt_int line_923;
};
struct f_primary_280fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_279;
 P163 x_924;
 rt_int line_925;
};
struct f_agg_or_paren_282fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_281;
 rt_int line_926;
 P163 items_927;
 P163 itail_928;
 P163 it_929;
 P163 first_930;
 P163 keys_931;
 P163 ktail_932;
 P163 lab_933;
 P163 x_934;
 int more_935;
};
struct f_name_p_284fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_283;
 P163 p_938;
 P163 x_939;
 P163 args_940;
 P163 atail_941;
 P163 lo_942;
 P163 r_943;
 rt_int line_944;
 int more_945;
 P133 formal_949;
 rt_int mark_950;
};
struct f_subtype_ind_286fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_285;
 P163 x_951;
 P163 r_952;
 P163 args_953;
 P163 atail_954;
 P163 lo_955;
 rt_int line_956;
 int more_957;
};
struct f_type_spec_288fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_287;
 P163 x_960;
};
struct f_type_def_290fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_289;
 P163 x_961;
 P163 lits_962;
 P163 ltail_963;
 P163 l_964;
 P163 idx_965;
 P163 itail_966;
 P163 r_967;
 P163 comps_968;
 P163 ctail_969;
 P163 names_970;
 P163 st_971;
 P163 def_972;
 P163 cm_973;
 rt_int line_974;
 int more_975;
};
struct f_skip_pragma_291fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_skip_visibility_292fr { int dummy;
 struct f_greenc_1fr *up;
 P163 names_981;
};
struct f_skip_representation_293fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_295fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_294;
 P163 head_985;
 P163 tail_986;
 P163 x_987;
 P163 names_988;
};
struct f_object_decl_297fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_296;
 P163 head_990;
 P163 tail_991;
 P163 names_992;
 P163 st_993;
 P163 init_994;
 P163 x_995;
 rt_int line_996;
 int is_const_997;
};
struct f_type_decl_299fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_298;
 P163 x_1000;
 rt_int line_1001;
};
struct f_formal_part_301fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_300;
 P163 head_1002;
 P163 tail_1003;
 P163 names_1004;
 P163 st_1005;
 P163 def_1006;
 P163 p_1007;
 rt_int mode_1008;
 int more_1009;
};
struct f_designator_303fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *res_302;
};
struct f_subprogram_305fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_304;
 P163 x_1012;
 rt_int line_1013;
 int is_proc_1014;
};
struct f_body_part_307fr { int dummy;
 struct f_greenc_1fr *up;
 P163 x_306;
};
struct f_parse_handlers_309fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_308;
 P163 head_1015;
 P163 tail_1016;
 P163 h_1017;
 P163 names_1018;
 P163 ntail_1019;
 P163 n_1020;
};
struct f_package_p_311fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_310;
 P163 x_1024;
 rt_int line_1025;
};
struct f_at_statements_end_312fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_314fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_313;
 P163 head_1026;
 P163 tail_1027;
 P163 x_1028;
};
struct f_statement_316fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_315;
 P163 x_1030;
 P163 t_1031;
 rt_int line_1032;
 P133 label_1033;
};
struct f_task_statement_318fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_317;
};
struct f_if_stmt_320fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_319;
 P163 x_1035;
 P163 arm_1036;
 P163 head_1037;
 P163 tail_1038;
 int go_1039;
};
struct f_case_stmt_322fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_321;
 P163 x_1041;
 P163 arm_1042;
 P163 head_1043;
 P163 tail_1044;
 P163 labs_1045;
 P163 ltail_1046;
 P163 l_1047;
 int others_arm_1048;
};
struct f_loop_stmt_324fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_323;
 P163 x_1051;
 P163 r_1052;
 rt_int line_1053;
};
struct f_compilation_326fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_325;
 P163 head_1054;
 P163 tail_1055;
 P163 x_1056;
};
struct f_hash_328fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_327;
 rt_int result_;
 rt_int h_1058;
 rt_int i_1060;
};
struct f_lookup_330fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_329;
 P110 result_;
 P110 y_1064;
};
struct f_same_task_333fr { int dummy;
 struct f_greenc_1fr *up;
 P110 a_331;
 P110 b_332;
 int result_;
};
struct f_lookup_entry_336fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_334;
 P110 owner_335;
 P110 result_;
 P110 y_1066;
};
struct f_lookup_decl_338fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_337;
 P110 result_;
 P110 y_1068;
};
struct f_overloadable_340fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_339;
 int result_;
};
struct f_same_343fr { int dummy;
 struct f_greenc_1fr *up;
 P115 a_341;
 P115 b_342;
 int result_;
};
struct f_same_signature_346fr { int dummy;
 struct f_greenc_1fr *up;
 P1070 a_344;
 P1070 b_345;
 int result_;
 P1070 x_1072;
 P1070 y_1073;
};
struct f_define_349fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_347;
 rt_int line_348;
 rt_int h_1075;
 P110 z_1076;
};
struct f_open_scope_350fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_351fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_354fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_352;
 P133 name_353;
 P110 result_;
};
struct f_new_typ_356fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_355;
 P115 result_;
};
struct f_new_cons_357fr { int dummy;
 struct f_greenc_1fr *up;
 P170 result_;
};
struct f_kind_name_359fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_358;
 rstr result_;
};
struct f_check_type_363fr { int dummy;
 struct f_greenc_1fr *up;
 P115 got_360;
 P115 want_361;
 rt_int line_362;
};
struct f_field_count_365fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_364;
 rt_int result_;
 rt_int n_1088;
 P1081 f_1089;
};
struct f_ctype_368fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_366;
 P133 *r_367;
 P133 s_1091;
};
struct f_field_decls_371fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_369;
 P133 *r_370;
 P1081 f_1093;
 P133 s_1094;
 P133 ct_1095;
};
struct f_declare_ctype_373fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_372;
 P133 ct_1097;
 P133 s_1098;
 P115 target_1099;
};
struct f_lit_index_376fr { int dummy;
 struct f_greenc_1fr *up;
 P163 lits_374;
 rstr name_375;
 rt_int result_;
 rt_int i_1100;
 P163 l_1101;
};
struct f_manifest_380fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_377;
 rt_int *v_378;
 int *ok_379;
 rt_int a_1103;
 rt_int b_1104;
 int ok2_1105;
 P110 y_1106;
};
struct f_resolve_384fr { int dummy;
 struct f_greenc_1fr *up;
 P163 st_381;
 P115 *t_382;
 P170 *c_383;
 P110 y_1107;
 P115 dummy_1108;
 P133 code_1109;
 int ok_1110;
 P163 r_1111;
};
struct f_type_definition_389fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_385;
 P133 name_386;
 P115 *t_387;
 P170 *c_388;
 P115 dummy_1112;
 P115 it_1113;
 P170 ic_1114;
 P163 l_1115;
 P163 comp_1116;
 P1081 f_1117;
 P1081 tail_1118;
 int ok_1119;
 rt_int n_1120;
 P110 y_1121;
};
struct f_finish_ptr_391fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_390;
 P170 c_1127;
};
struct f_init_storage_395fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_392;
 P115 t_393;
 P170 c_394;
 P133 ct_1128;
 P133 i_1129;
 P133 v_1130;
 P133 x_1131;
 P115 vt_1132;
 P1081 f_1133;
};
struct f_composite_397fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_396;
 int result_;
};
struct f_assign_code_403fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_398;
 P115 t_399;
 rstr v_400;
 P170 c_401;
 P133 *r_402;
 P133 ct_1135;
};
struct f_copy_code_407fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_404;
 rstr v_405;
 P133 *r_406;
 P133 ct_1136;
};
struct f_eq_code_412fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_408;
 rstr a_409;
 rstr b_410;
 P133 *r_411;
 P133 ct_1137;
};
struct f_seen_name_415fr { int dummy;
 struct f_greenc_1fr *up;
 P144 l_413;
 rstr s_414;
 int result_;
 P144 p_1138;
};
struct f_emit_helpers_416fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_1140;
 P144 done_1141;
 P144 l_1142;
};
struct f_helper_bodies_418fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_417;
 P133 c_1146;
 P119 b_1147;
 P133 ct_1148;
 P133 x_1149;
 P133 y_1150;
 P133 conds_1151;
 P1081 f_1152;
};
struct f_storage_422fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_419;
 P115 t_420;
 P133 *access_code_421;
 P133 ct_1155;
 P133 g_1156;
};
struct f_bind_425fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_423;
 P133 access_code_424;
};
struct f_declare_subprograms_427fr { int dummy;
 struct f_greenc_1fr *up;
 P163 from_426;
 P163 e_1157;
};
struct f_declare_one_429fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_428;
 P110 y_1159;
 P110 z_1160;
};
struct f_build_subprogram_432fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_430;
 P110 *y_431;
 P163 p_1163;
 P1070 pm_1164;
 P1070 tail_1165;
 P170 rc_1166;
 rt_int k_1167;
};
struct f_decl_elements_434fr { int dummy;
 struct f_greenc_1fr *up;
 P163 decls_433;
 P163 e_1171;
 int declared_1172;
};
struct f_decl_element_436fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_435;
 P110 y_1174;
 P110 z_1175;
 P115 t_1176;
 P115 vt_1177;
 P170 c_1178;
 P133 acc_1179;
 P133 v_1180;
 P133 x_1181;
 int ok_1182;
};
struct f_other_decl_438fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_437;
};
struct f_subprogram_body_441fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_439;
 P110 y_440;
 P119 saved_code_1184;
 P119 saved_fields_1185;
 int saved_in_1186;
 P110 saved_sym_1187;
 P136 saved_exits_1188;
 rt_int saved_frames_1189;
 P144 saved_handlers_1190;
 P144 saved_cleanups_1191;
 P110 saved_pure_1192;
 P133 aw_1193;
 rt_int saved_pdepth_1194;
 P133 args_1195;
 P133 head_1196;
 P133 frame_1197;
 P133 parent_1198;
 P133 ct_1199;
 P133 x_1200;
 P1070 pm_1201;
 P110 p_1202;
};
struct f_gen_statements_443fr { int dummy;
 struct f_greenc_1fr *up;
 P163 stmts_442;
 P163 s_1205;
};
struct f_pop_frames_445fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_444;
 rt_int i_1207;
 P144 c_1208;
};
struct f_push_cleanup_447fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_446;
};
struct f_pop_cleanup_448fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_452fr { int dummy;
 struct f_greenc_1fr *up;
 P163 stmts_449;
 P163 hs_450;
 rt_int line_451;
 P133 f_1212;
 P133 x_1213;
 P163 h_1214;
 P163 n_1215;
 int first_1216;
 int has_others_1217;
 P133 conds_1218;
};
struct f_exc_id_456fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_453;
 rt_int line_454;
 P133 *r_455;
 P110 y_1223;
};
struct f_gen_statement_458fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_457;
 P115 t_1224;
 P115 vt_1225;
 P170 c_1226;
 P133 lv_1227;
 P133 v_1228;
 P133 x_1229;
 int ro_1230;
};
struct f_slice_assign_460fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_459;
 P133 lv_1232;
 P133 lo_1233;
 P133 hi_1234;
 P133 v_1235;
 P115 t_1236;
 P115 vt_1237;
 P170 c_1238;
 int ro_1239;
};
struct f_gen_call_462fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_461;
 P163 c_1240;
 P115 t_1241;
 P133 v_1242;
};
struct f_gen_if_464fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_463;
 P163 a_1243;
 int first_1244;
 P115 t_1245;
 P133 v_1246;
};
struct f_gen_case_466fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_465;
 P115 st_1248;
 P115 vt_1249;
 int first_1250;
 P163 a_1251;
 P163 lab_1252;
 P133 sel_1253;
 P133 tmp_1254;
 P133 ct_1255;
 P133 conds_1256;
 P133 v_1257;
 P133 lo_1258;
 P133 hi_1259;
};
struct f_push_exit_470fr { int dummy;
 struct f_greenc_1fr *up;
 P133 match_467;
 int is_loop_468;
 P133 *label_469;
};
struct f_gen_loop_472fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_471;
 P115 t_1264;
 P115 vt_1265;
 P170 c_1266;
 P133 label_1267;
 P133 cond_1268;
 P133 acc_1269;
 P133 lov_1270;
 P133 hiv_1271;
 P133 it_1272;
 P110 y_1273;
 P163 r_1274;
};
struct f_gen_block_474fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_473;
 P133 label_1275;
 P133 aw_1276;
};
struct f_gen_exit_476fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_475;
 P136 x_1277;
 P115 t_1278;
 P133 v_1279;
};
struct f_gen_return_478fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_477;
 P115 vt_1281;
 P133 v_1282;
};
struct f_access_of_481fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_479;
 P133 *r_480;
 P133 p_1283;
 rt_int i_1285;
};
struct f_link_to_484fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_482;
 P133 *r_483;
 rt_int i_1290;
};
struct f_c_ident_486fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_485;
 rstr result_;
};
struct f_deref_490fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_487;
 P115 t_488;
 P133 *r_489;
 P133 ct_1294;
};
struct f_is_object_492fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_491;
 int result_;
 P110 y_1295;
};
struct f_lvalue_498fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_493;
 P133 *code_out_494;
 P115 *t_495;
 P170 *c_496;
 int *ro_497;
 P110 y_1296;
 P133 base_1297;
 P115 bt_1298;
 P170 bc_1299;
};
struct f_select_on_506fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_499;
 P115 bt_500;
 P163 e_501;
 int *ro_502;
 P133 *code_out_503;
 P115 *t_504;
 P170 *c_505;
 P1081 f_1300;
 P133 d_1301;
};
struct f_index_on_515fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_507;
 P115 bt_508;
 P163 e_509;
 int *ro_510;
 int lv_511;
 P133 *code_out_512;
 P115 *t_513;
 P170 *c_514;
 P163 a_1303;
 P115 it_1304;
 P133 i_1305;
 P133 lo_1306;
 P133 hi_1307;
 P133 d_1308;
};
struct f_is_char_lit_517fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_516;
 int result_;
};
struct f_is_enum_lit_519fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_518;
 int result_;
 P110 y_1309;
};
struct f_c_string_521fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_520;
 rstr result_;
 rt_int n_1310;
 rt_int i_1312;
 rstr r_1317;
 rt_int j_1318;
 rt_int i_1320;
};
struct f_is_literal_523fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_522;
 int result_;
};
struct f_range_bounds_531fr { int dummy;
 struct f_greenc_1fr *up;
 P163 l_524;
 P163 h_525;
 P115 want_526;
 rt_int line_527;
 P115 *t_528;
 P133 *lo_529;
 P133 *hi_530;
 P115 w_1324;
 P115 t2_1325;
};
struct f_gexpr_536fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_532;
 P115 want_533;
 P115 *t_534;
 P133 *r_535;
 P110 y_1326;
 P115 bt_1327;
 P170 c_1328;
 int ro_1329;
 P133 base_1330;
 P133 a_1331;
 P163 nm_1332;
 int saved_lv_1333;
};
struct f_gexpr_1_541fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_537;
 P115 want_538;
 P115 *t_539;
 P133 *r_540;
 P110 y_1334;
 P115 bt_1335;
 P170 c_1336;
 int ro_1337;
 P133 base_1338;
 P133 a_1339;
 P163 nm_1340;
};
struct f_char_literal_546fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_542;
 P115 want_543;
 P115 *t_544;
 P133 *r_545;
 rt_int i_1342;
};
struct f_gen_name_551fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_547;
 P115 want_548;
 P115 *t_549;
 P133 *r_550;
 P110 y_1343;
 P110 z_1344;
 P163 call_1345;
};
struct f_gen_unop_556fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_552;
 P115 want_553;
 P115 *t_554;
 P133 *r_555;
 P133 a_1347;
 int done_1348;
};
struct f_gen_binop_561fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_557;
 P115 want_558;
 P115 *t_559;
 P133 *r_560;
 rstr op_1349;
 P115 ta_1350;
 P115 tb_1351;
 P115 hint_1352;
 P115 ct_1353;
 P133 a_1354;
 P133 b_1355;
 P133 x_1356;
 P133 dummy_1357;
 int done_1358;
};
struct f_conversion_566fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_562;
 P110 y_563;
 P115 *t_564;
 P133 *r_565;
 P115 aty_1359;
 P133 a_1360;
};
struct f_gen_attr_571fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_567;
 P115 want_568;
 P115 *t_569;
 P133 *r_570;
 rstr a_1361;
 P110 y_1362;
 P115 tt_1363;
 P115 aty_1364;
 P133 v_1365;
 P133 d_1366;
 P170 c_1367;
 rt_int n_1368;
 int ro_1369;
};
struct f_lit_table_574fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_572;
 P133 *r_573;
 P163 l_1370;
 P133 s_1371;
};
struct f_val_rep_580fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_575;
 P115 tt_576;
 P170 c_577;
 P115 *t_578;
 P133 *r_579;
 P115 aty_1373;
 P133 v_1374;
 P133 lt_1375;
 rt_int n_1376;
};
struct f_allocator_585fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_581;
 P115 want_582;
 P115 *t_583;
 P133 *r_584;
 P110 y_1377;
 P115 target_1378;
 P115 vt_1379;
 P133 ct_1380;
 P133 pt_1381;
 P133 cell_1382;
 P133 v_1383;
 P133 x_1384;
};
struct f_aggregate_590fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_586;
 P115 want_587;
 P115 *t_588;
 P133 *r_589;
 P163 it_1385;
 P1081 f_1386;
 P115 vt_1387;
 P133 ct_1388;
 P133 tmp_1389;
 P133 v_1390;
 P133 x_1391;
 P133 parts_1392;
 P133 et_1393;
 P133 lo_1394;
 P133 hi_1395;
 P133 key_1396;
 P133 fill_1397;
 rt_int n_1398;
 P163 lab_1399;
};
struct f_actual_for_594fr { int dummy;
 struct f_greenc_1fr *up;
 P163 args_591;
 P1070 pm_592;
 P1070 first_593;
 P163 result_;
 P163 a_1405;
 P1070 p_1406;
};
struct f_gcall_599fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_595;
 int is_stmt_596;
 P115 *t_597;
 P133 *r_598;
 P163 fn_1409;
 P163 nm_1410;
 P110 y_1411;
 P133 args_1412;
 P133 lv_1413;
 P133 v_1414;
 P133 ct_1415;
 P133 x_1416;
 P163 a_1417;
 P1070 pm_1418;
 P115 lt_1419;
 P115 vt_1420;
 P170 lc_1421;
 int ro_1422;
};
struct f_gcall_with_604fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_600;
 P110 y_601;
 P115 *t_602;
 P133 *r_603;
 P133 args_1423;
 P133 lv_1424;
 P133 v_1425;
 P133 x1_1426;
 P133 x2_1427;
 P163 a_1428;
 P1070 pm_1429;
 P115 lt_1430;
 P115 vt_1431;
 P170 lc_1432;
 int ro_1433;
};
struct f_builtin_611fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_605;
 P163 args_606;
 rt_int line_607;
 int is_stmt_608;
 P115 *t_609;
 P133 *r_610;
 P115 aty_1435;
 P115 lt_1436;
 P133 a_1437;
 P133 w_1438;
 P133 lv_1439;
 P170 lc_1440;
 int ro_1441;
};
struct f_is_package_613fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_612;
 int result_;
 P110 y_1442;
};
struct f_member_of_617fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_614;
 rstr name_615;
 rt_int line_616;
 P110 result_;
 P110 y_1443;
 P110 m_1444;
};
struct f_inside_package_619fr { int dummy;
 struct f_greenc_1fr *up;
 P163 p_618;
 int result_;
 P144 l_1446;
};
struct f_copy_sym_622fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_620;
 P110 *z_621;
};
struct f_complete_private_625fr { int dummy;
 struct f_greenc_1fr *up;
 P115 ph_623;
 P115 full_624;
 P133 n_1450;
 P163 p_1451;
};
struct f_package_spec_627fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_626;
 P110 y_1452;
 P110 m_1453;
 P110 z_1454;
 P163 saved_1455;
 P110 first_private_1456;
};
struct f_hidden_from_630fr { int dummy;
 struct f_greenc_1fr *up;
 P110 m_628;
 P110 first_private_629;
 int result_;
 P110 p_1460;
};
struct f_package_body_632fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_631;
 P110 y_1462;
 P110 m_1463;
 P110 z_1464;
 P163 saved_1465;
};
struct f_use_clause_634fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_633;
 P163 n_1471;
 P110 y_1472;
 P110 m_1473;
 P110 z_1474;
 P110 old_1475;
};
struct f_fits_639fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_635;
 P163 args_636;
 P115 want_637;
 int *ok_638;
 P1070 pm_1478;
 P163 a_1479;
 P115 t_1480;
 P170 c_1481;
 P133 v_1482;
 int ro_1483;
 P119 saved_1484;
 rt_int used_1485;
};
struct f_is_builtin_641fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_640;
 int result_;
};
struct f_resolve_overload_648fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_642;
 P163 args_643;
 int is_stmt_644;
 P115 want_645;
 rt_int line_646;
 P110 *y_647;
 P110 z_1490;
 P110 first_1491;
 rt_int n_1492;
 int ok_1493;
 rt_int pass_1495;
};
struct f_resolve_member_overload_656fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_649;
 rstr name_650;
 P163 args_651;
 int is_stmt_652;
 P115 want_653;
 rt_int line_654;
 P110 *y_655;
 P110 pk_1500;
 P110 z_1501;
 rt_int n_1502;
 int ok_1503;
 rt_int pass_1505;
};
struct f_user_operator_662fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_657;
 P115 want_658;
 P115 *t_659;
 P133 *r_660;
 int *done_661;
 P133 op_1510;
 int negate_1511;
 P110 y_1512;
 P163 call_1513;
 P163 fname_1514;
 P163 l_1515;
 P163 rt_1516;
 int ok_1517;
};
struct f_task_p_664fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_663;
 P163 x_1519;
 rt_int line_1520;
};
struct f_entry_p_666fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_665;
 P163 x_1521;
};
struct f_accept_p_668fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_667;
 P163 x_1522;
};
struct f_delay_p_670fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_669;
 P163 x_1523;
};
struct f_designators_672fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_671;
 P163 head_1524;
 P163 tail_1525;
 P163 n_1526;
};
struct f_parse_task_statement_674fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_673;
 P163 x_1528;
 P163 alt_1529;
 P163 head_1530;
 P163 tail_1531;
 rt_int line_1532;
};
struct f_path_at_678fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_675;
 rstr field_676;
 P133 *r_677;
 rt_int i_1535;
};
struct f_is_task_name_680fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_679;
 int result_;
 P110 y_1539;
};
struct f_task_of_684fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_681;
 P110 *y_682;
 P163 *ix_683;
 P163 n_1540;
};
struct f_own_index_686fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *r_685;
 P110 y_1541;
};
struct f_member_691fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_687;
 rstr arr_688;
 rstr i_689;
 P133 *r_690;
 P133 lo_1542;
 P133 hi_1543;
};
struct f_act_path_694fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_692;
 P133 *r_693;
 P133 i_1544;
};
struct f_act_path_i_698fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_695;
 rstr i_696;
 P133 *r_697;
};
struct f_entry_path_702fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_699;
 rstr i_700;
 P133 *r_701;
 P133 own_1545;
};
struct f_declare_slot_705fr { int dummy;
 struct f_greenc_1fr *up;
 rstr ctype_name_703;
 rstr field_704;
};
struct f_task_decl_707fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_706;
};
struct f_family_arg_struct_708fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_712fr { int dummy;
 struct f_greenc_1fr *up;
 P163 b_709;
 P110 y_710;
 P133 x_711;
 P133 lo_1546;
 P133 hi_1547;
 P133 v_1548;
 P115 vt_1549;
 P170 c_1550;
};
struct f_entry_family_slot_717fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_713;
 rstr base_714;
 rstr i_715;
 P133 *r_716;
 P133 lo_1551;
 P133 hi_1552;
};
struct f_task_spec_719fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_718;
 int has_procs_1553;
 int saved_defer_1554;
 P133 fields_1555;
 P133 ct_1556;
 P1070 pm_1557;
 P133 fp_1558;
 P133 flo_1559;
 P133 fhi_1560;
 P110 y_1561;
 P110 m_1562;
 P110 z_1563;
 P110 saved_1564;
 P133 d_1565;
 P133 v_1566;
 P133 p_1567;
 P133 p2_1568;
 P115 vt_1569;
 P163 r_1570;
};
struct f_entry_decl_721fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_720;
 P110 y_1574;
 P163 p_1575;
 P1070 pm_1576;
 P1070 tail_1577;
 P133 fields_1578;
 P133 ct_1579;
 P133 x_1580;
 P133 lo_1581;
 P133 hi_1582;
};
struct f_task_body_723fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_722;
 P110 y_1586;
 P110 b_1587;
 P110 m_1588;
 P110 z_1589;
 P133 upp_1590;
 P110 saved_1591;
};
struct f_task_awaits_726fr { int dummy;
 struct f_greenc_1fr *up;
 P163 decls_724;
 P133 *aw_725;
 P163 e_1595;
 P110 y_1596;
 P133 p_1597;
};
struct f_task_failure_728fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_727;
 P110 y_1599;
 P133 a_1600;
 P133 i_1601;
 P115 it_1602;
};
struct f_entry_sym_732fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_729;
 P110 *y_730;
 P163 *ix_731;
 P110 t_1603;
};
struct f_other_call_737fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_733;
 int is_stmt_734;
 P115 *t_735;
 P133 *r_736;
 P110 y_1604;
 P1070 pm_1605;
 P163 a_1606;
 P133 parts_1607;
 P133 v_1608;
 P133 lv_1609;
 P133 ent_1610;
 P133 act_1611;
 P133 i_1612;
 P115 vt_1613;
 P115 lt_1614;
 P170 lc_1615;
 int ro_1616;
 P163 ix_1617;
 P163 fix_1618;
 P163 args_node_1619;
};
struct f_other_attr_742fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_738;
 P110 y_739;
 P115 *t_740;
 P133 *r_741;
 rstr a_1621;
 P133 p_1622;
};
struct f_member_attr_746fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_743;
 P115 *t_744;
 P133 *r_745;
 P110 y_1623;
 P163 ix_1624;
 P133 i_1625;
 P133 p_1626;
 P115 vt_1627;
};
struct f_task_builtin_752fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_747;
 P163 args_748;
 rt_int line_749;
 P115 *t_750;
 P133 *r_751;
 P115 vt_1628;
 P133 v_1629;
};
struct f_gen_accept_754fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_753;
 P110 y_1630;
 P136 saved_ax_1631;
 P133 ent_1632;
 P133 ep_1633;
 P133 xf_1634;
 P133 x_1635;
 P1070 pm_1636;
 P163 f_1637;
 P110 p_1638;
};
struct f_member_slot_758fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_755;
 P163 s_756;
 P133 *ent_757;
 P115 vt_1640;
 P133 v_1641;
};
struct f_gen_delay_ticks_761fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_759;
 P133 *r_760;
 P115 vt_1642;
 P133 v_1643;
};
struct f_gen_select_763fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_762;
 P163 alt_1644;
 rt_int n_1645;
 rt_int i_1646;
 int has_delay_1647;
 int has_accept_1648;
 P133 al_1649;
 P133 w_1650;
 P133 g_1651;
 P133 ent_1652;
 P133 ticks_1653;
 P115 vt_1654;
 P110 y_1655;
};
struct f_family_range_768fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_764;
 P163 ix_765;
 P133 *lo_766;
 P133 *hi_767;
 P115 vt_1659;
};
struct f_task_statement_gen_770fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_769;
 P163 n_1660;
 P163 ix_1661;
 P110 y_1662;
 P133 a_1663;
 P133 d_1664;
 P133 l_1665;
 P133 ticks_1666;
 P133 lo_1667;
 P133 hi_1668;
};
struct f_root_name_772fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_771;
 P163 result_;
};
struct f_check_pure_target_775fr { int dummy;
 struct f_greenc_1fr *up;
 P163 target_773;
 rt_int line_774;
 P163 n_1672;
 P110 y_1673;
};
struct f_assigns_nonlocal_778fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_776;
 rstr name_777;
 int result_;
};
struct f_declares_781fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_779;
 rstr name_780;
 int result_;
 P163 p_1674;
 P163 e_1675;
};
struct f_scan_handlers_785fr { int dummy;
 struct f_greenc_1fr *up;
 P163 h_782;
 P163 d_783;
 rstr name_784;
 int result_;
 P163 p_1678;
};
struct f_scan_assigns_789fr { int dummy;
 struct f_greenc_1fr *up;
 P163 stmts_786;
 P163 d_787;
 rstr name_788;
 int result_;
 P163 s_1680;
 P163 a_1681;
 P163 r_1682;
};
struct f_check_call_rules_792fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_790;
 P110 y_791;
 P110 z_1686;
 P110 s_1687;
};
struct f_generic_p_794fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_793;
 P163 x_1689;
 P163 p_1690;
 P163 head_1691;
 P163 tail_1692;
 P163 names_1693;
 P163 st_1694;
 P163 def_1695;
 P163 sub_1696;
 P133 def_name_text_1697;
 int more_1698;
};
struct f_instantiation_797fr { int dummy;
 struct f_greenc_1fr *up;
 P163 x_795;
 P163 *res_796;
 P163 i_1701;
 P163 head_1702;
 P163 tail_1703;
 P163 a_1704;
 P133 formal_1705;
 rt_int mark_1706;
 int more_1707;
};
struct f_generic_decl_799fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_798;
 P110 y_1709;
};
struct f_is_generic_name_801fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_800;
 int result_;
 P110 y_1710;
};
struct f_attach_generic_body_803fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_802;
 P110 y_1711;
};
struct f_restore_generic_context_806fr { int dummy;
 struct f_greenc_1fr *up;
 P163 body_node_804;
 rt_int line_805;
 P139 ctx_1714;
 P110 m_1715;
 P110 z_1716;
 int seen_1717;
};
struct f_gactual_810fr { int dummy;
 struct f_greenc_1fr *up;
 P163 args_807;
 rt_int nth_808;
 rstr name_809;
 P163 result_;
 P163 a_1721;
 rt_int i_1722;
};
struct f_copy_node_814fr { int dummy;
 struct f_greenc_1fr *up;
 P163 n_811;
 P133 name_812;
 P163 *r_813;
};
struct f_instantiate_816fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_815;
 P110 g_1724;
 P163 gd_1725;
 P163 pat_1726;
 P163 f_1727;
 P163 a_1728;
 P163 cn_1729;
 P110 y_1730;
 P110 z_1731;
 P110 fs_1732;
 rt_int nth_1733;
 P115 t_1734;
 P115 vt_1735;
 P170 c_1736;
 P133 v_1737;
 P133 acc_1738;
 P133 x_1739;
 int ok_1740;
};
struct f_predef_type_821fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_817;
 P115 t_818;
 rstr lo_819;
 rstr hi_820;
 P110 y_1743;
};
struct f_predef_const_825fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_822;
 P115 t_823;
 rstr code_text_824;
 P110 y_1744;
};
struct f_predef_exc_827fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_826;
 P110 y_1745;
};
struct f_predef_lit_831fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_828;
 P115 t_829;
 rt_int v_830;
 P110 y_1746;
};
struct f_predefine_832fr { int dummy;
 struct f_greenc_1fr *up;
 rstr control_1747;
 rt_int start_1748;
 rt_int code_no_1749;
 rt_int i_1751;
 rt_int i_1756;
};
struct f_translate_834fr { int dummy;
 struct f_greenc_1fr *up;
 P163 u_833;
 P163 p_1760;
 P110 y_1761;
};
struct f_print_program_835fr { int dummy;
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
 rt_int n_arm_58;
 rt_int n_label_59;
 rt_int n_handler_60;
 rt_int n_comp_61;
 rt_int n_alt_62;
 rt_int d_enum_63;
 rt_int d_range_64;
 rt_int d_float_65;
 rt_int d_array_66;
 rt_int d_record_67;
 rt_int d_access_68;
 rt_int d_derived_69;
 rt_int d_private_70;
 rt_int s_mark_71;
 rt_int m_in_72;
 rt_int m_inout_73;
 rt_int m_out_74;
 rt_int t_int_75;
 rt_int t_bool_76;
 rt_int t_float_77;
 rt_int t_enum_78;
 rt_int t_string_79;
 rt_int t_array_80;
 rt_int t_record_81;
 rt_int t_ptr_82;
 rt_int t_void_83;
 rt_int t_nil_84;
 rt_int t_char_85;
 rt_int t_univ_86;
 rt_int t_act_87;
 rt_int t_tdecl_88;
 rt_int t_entry_89;
 rt_int y_var_90;
 rt_int y_const_91;
 rt_int y_func_92;
 rt_int y_proc_93;
 rt_int y_type_94;
 rt_int y_exc_95;
 rt_int y_enumlit_96;
 rt_int y_package_97;
 rt_int y_task_98;
 rt_int y_entry_99;
 rt_int y_generic_100;
 A102 toks_105;
 rt_int ntoks_106;
 rt_int tpos_107;
 rt_int src_line_108;
 A109 table_112;
 rt_int depth_113;
 P110 scope_stack_114;
 P115 all_types_117;
 rt_int serial_118;
 P119 out_types_121;
 P119 out_frames_122;
 P119 out_helpers_123;
 P119 out_protos_124;
 P119 out_globals_125;
 P119 out_funcs_126;
 P119 out_init_127;
 P119 out_excs_128;
 P119 code_129;
 P119 fields_buf_130;
 int in_func_131;
 rt_int cur_level_132;
 P133 st_field_134;
 P110 func_sym_135;
 P136 exits_138;
 P139 generic_contexts_141;
 P136 accept_exits_142;
 rt_int frames_143;
 P144 handlers_146;
 P144 cleanups_147;
 rt_int trial_148;
 P115 ty_int_149;
 P115 ty_bool_150;
 P115 ty_float_151;
 P115 ty_char_152;
 P115 ty_string_153;
 P115 ty_void_154;
 P115 ty_nil_155;
 P115 ty_univ_156;
 P115 ty_act_157;
 P115 ty_tdecl_158;
 P115 ty_entry_159;
 P110 cur_task_160;
 rt_int accept_depth_161;
 int famarg_done_162;
 P163 fam_ix_165;
 P163 call_task_ix_166;
 int saw_interface_167;
 int defer_entry_structs_168;
 P119 out_awaits_169;
 P170 no_cons_172;
 P163 units_173;
 P144 pkg_stack_174;
 P163 cur_pkg_175;
 P133 prefix_hint_176;
 P115 call_want_177;
 P110 pure_sym_178;
 rt_int pure_depth_179;
 int vrp_ok_180;
 int in_lv_path_181;
 int last_deref_182;
 P133 main_name_183;
};
static void as_R1082(R1082 *d, R1082 s);
static R1082 cp_R1082(R1082 s);
static int eq_R1082(R1082 a, R1082 b);
static void as_R1071(R1071 *d, R1071 s);
static R1071 cp_R1071(R1071 s);
static int eq_R1071(R1071 a, R1071 b);
static void as_R171(R171 *d, R171 s);
static R171 cp_R171(R171 s);
static int eq_R171(R171 a, R171 b);
static void as_R164(R164 *d, R164 s);
static R164 cp_R164(R164 s);
static int eq_R164(R164 a, R164 b);
static void as_R145(R145 *d, R145 s);
static R145 cp_R145(R145 s);
static int eq_R145(R145 a, R145 b);
static void as_R140(R140 *d, R140 s);
static R140 cp_R140(R140 s);
static int eq_R140(R140 a, R140 b);
static void as_R137(R137 *d, R137 s);
static R137 cp_R137(R137 s);
static int eq_R137(R137 a, R137 b);
static void as_R120(R120 *d, R120 s);
static R120 cp_R120(R120 s);
static int eq_R120(R120 a, R120 b);
static void as_R116(R116 *d, R116 s);
static R116 cp_R116(R116 s);
static int eq_R116(R116 a, R116 b);
static void as_R111(R111 *d, R111 s);
static R111 cp_R111(R111 s);
static int eq_R111(R111 a, R111 b);
static void as_A109(A109 *d, A109 s);
static A109 cp_A109(A109 s);
static int eq_A109(A109 a, A109 b);
static void as_R104(R104 *d, R104 s);
static R104 cp_R104(R104 s);
static int eq_R104(R104 a, R104 b);
static void as_A102(A102 *d, A102 s);
static A102 cp_A102(A102 s);
static int eq_A102(A102 a, A102 b);
static P133 f_mk_185(struct f_greenc_1fr *up_, rstr s_184);
static void f_new_name_188(struct f_greenc_1fr *up_, rstr base_186, P133 *res_187);
static int f_is_letter_190(struct f_greenc_1fr *up_, int c_189);
static int f_is_digit_192(struct f_greenc_1fr *up_, int c_191);
static int f_upper_194(struct f_greenc_1fr *up_, int c_193);
static rstr f_lower_s_196(struct f_greenc_1fr *up_, rstr s_195);
static rstr f_upper_s_198(struct f_greenc_1fr *up_, rstr s_197);
static int f_is_operator_200(struct f_greenc_1fr *up_, rstr s_199);
static rstr f_c_field_202(struct f_greenc_1fr *up_, rstr s_201);
static rstr f_q_203(struct f_greenc_1fr *up_);
static void f_fail_206(struct f_greenc_1fr *up_, rt_int line_204, rstr msg_205);
static P119 f_new_buffer_207(struct f_greenc_1fr *up_);
static void f_put_to_210(struct f_greenc_1fr *up_, P119 b_208, rstr s_209);
static void f_emit_212(struct f_greenc_1fr *up_, rstr s_211);
static void f_print_buffer_214(struct f_greenc_1fr *up_, P119 b_213);
static void f_splice_217(struct f_greenc_1fr *up_, P119 a_215, P119 b_216);
static int f_is_reserved_219(struct f_greenc_1fr *up_, rstr w_218);
static void f_add_token_223(struct f_greenc_1fr *up_, rt_int kind_220, rstr s_221, rt_int ival_222);
static rt_int f_digit_value_225(struct f_greenc_1fr *up_, int c_224);
static void f_lex_line_227(struct f_greenc_1fr *up_, rstr line_226);
static void f_read_source_228(struct f_greenc_1fr *up_);
static P163 f_nn_231(struct f_greenc_1fr *up_, rt_int kind_229, rt_int line_230);
static void f_append_235(struct f_greenc_1fr *up_, P163 *head_232, P163 *tail_233, P163 x_234);
static rt_int f_list_len_237(struct f_greenc_1fr *up_, P163 l_236);
static rt_int f_cur_line_238(struct f_greenc_1fr *up_);
static int f_at_kw_240(struct f_greenc_1fr *up_, rstr w_239);
static int f_at_op_242(struct f_greenc_1fr *up_, rstr w_241);
static int f_at_kind_244(struct f_greenc_1fr *up_, rt_int k_243);
static rt_int f_kind_at_246(struct f_greenc_1fr *up_, rt_int k_245);
static rstr f_text_at_248(struct f_greenc_1fr *up_, rt_int k_247);
static void f_perror_250(struct f_greenc_1fr *up_, rstr msg_249);
static void f_skip_251(struct f_greenc_1fr *up_);
static void f_expect_kw_253(struct f_greenc_1fr *up_, rstr w_252);
static void f_expect_op_255(struct f_greenc_1fr *up_, rstr w_254);
static void f_expect_id_257(struct f_greenc_1fr *up_, P133 *res_256);
static void f_name_node_259(struct f_greenc_1fr *up_, P163 *res_258);
static void f_id_list_261(struct f_greenc_1fr *up_, P163 *res_260);
static P163 f_binop_266(struct f_greenc_1fr *up_, P133 op_262, P163 l_263, P163 r_264, rt_int line_265);
static void f_expr_268(struct f_greenc_1fr *up_, P163 *res_267);
static int f_is_rel_270(struct f_greenc_1fr *up_, rstr s_269);
static void f_relation_272(struct f_greenc_1fr *up_, P163 *res_271);
static void f_simple_expr_274(struct f_greenc_1fr *up_, P163 *res_273);
static void f_term_276(struct f_greenc_1fr *up_, P163 *res_275);
static void f_factor_278(struct f_greenc_1fr *up_, P163 *res_277);
static void f_primary_280(struct f_greenc_1fr *up_, P163 *res_279);
static void f_agg_or_paren_282(struct f_greenc_1fr *up_, P163 *res_281);
static void f_name_p_284(struct f_greenc_1fr *up_, P163 *res_283);
static void f_subtype_ind_286(struct f_greenc_1fr *up_, P163 *res_285);
static void f_type_spec_288(struct f_greenc_1fr *up_, P163 *res_287);
static void f_type_def_290(struct f_greenc_1fr *up_, P163 *res_289);
static void f_skip_pragma_291(struct f_greenc_1fr *up_);
static void f_skip_visibility_292(struct f_greenc_1fr *up_);
static void f_skip_representation_293(struct f_greenc_1fr *up_);
static void f_decl_part_295(struct f_greenc_1fr *up_, P163 *res_294);
static void f_object_decl_297(struct f_greenc_1fr *up_, P163 *res_296);
static void f_type_decl_299(struct f_greenc_1fr *up_, P163 *res_298);
static void f_formal_part_301(struct f_greenc_1fr *up_, P163 *res_300);
static void f_designator_303(struct f_greenc_1fr *up_, P133 *res_302);
static void f_subprogram_305(struct f_greenc_1fr *up_, P163 *res_304);
static void f_body_part_307(struct f_greenc_1fr *up_, P163 x_306);
static void f_parse_handlers_309(struct f_greenc_1fr *up_, P163 *res_308);
static void f_package_p_311(struct f_greenc_1fr *up_, P163 *res_310);
static int f_at_statements_end_312(struct f_greenc_1fr *up_);
static void f_statements_314(struct f_greenc_1fr *up_, P163 *res_313);
static void f_statement_316(struct f_greenc_1fr *up_, P163 *res_315);
static void f_task_statement_318(struct f_greenc_1fr *up_, P163 *res_317);
static void f_if_stmt_320(struct f_greenc_1fr *up_, P163 *res_319);
static void f_case_stmt_322(struct f_greenc_1fr *up_, P163 *res_321);
static void f_loop_stmt_324(struct f_greenc_1fr *up_, P163 *res_323);
static void f_compilation_326(struct f_greenc_1fr *up_, P163 *res_325);
static rt_int f_hash_328(struct f_greenc_1fr *up_, rstr s_327);
static P110 f_lookup_330(struct f_greenc_1fr *up_, rstr name_329);
static int f_same_task_333(struct f_greenc_1fr *up_, P110 a_331, P110 b_332);
static P110 f_lookup_entry_336(struct f_greenc_1fr *up_, rstr name_334, P110 owner_335);
static P110 f_lookup_decl_338(struct f_greenc_1fr *up_, P163 d_337);
static int f_overloadable_340(struct f_greenc_1fr *up_, P110 y_339);
static int f_same_343(struct f_greenc_1fr *up_, P115 a_341, P115 b_342);
static int f_same_signature_346(struct f_greenc_1fr *up_, P1070 a_344, P1070 b_345);
static void f_define_349(struct f_greenc_1fr *up_, P110 y_347, rt_int line_348);
static void f_open_scope_350(struct f_greenc_1fr *up_);
static void f_close_scope_351(struct f_greenc_1fr *up_);
static P110 f_new_sym_354(struct f_greenc_1fr *up_, rt_int kind_352, P133 name_353);
static P115 f_new_typ_356(struct f_greenc_1fr *up_, rt_int kind_355);
static P170 f_new_cons_357(struct f_greenc_1fr *up_);
static rstr f_kind_name_359(struct f_greenc_1fr *up_, P115 t_358);
static void f_check_type_363(struct f_greenc_1fr *up_, P115 got_360, P115 want_361, rt_int line_362);
static rt_int f_field_count_365(struct f_greenc_1fr *up_, P115 t_364);
static void f_ctype_368(struct f_greenc_1fr *up_, P115 t_366, P133 *r_367);
static void f_field_decls_371(struct f_greenc_1fr *up_, P115 t_369, P133 *r_370);
static void f_declare_ctype_373(struct f_greenc_1fr *up_, P115 t_372);
static rt_int f_lit_index_376(struct f_greenc_1fr *up_, P163 lits_374, rstr name_375);
static void f_manifest_380(struct f_greenc_1fr *up_, P163 e_377, rt_int *v_378, int *ok_379);
static void f_resolve_384(struct f_greenc_1fr *up_, P163 st_381, P115 *t_382, P170 *c_383);
static void f_type_definition_389(struct f_greenc_1fr *up_, P163 d_385, P133 name_386, P115 *t_387, P170 *c_388);
static void f_finish_ptr_391(struct f_greenc_1fr *up_, P115 t_390);
static void f_init_storage_395(struct f_greenc_1fr *up_, rstr lval_392, P115 t_393, P170 c_394);
static int f_composite_397(struct f_greenc_1fr *up_, P115 t_396);
static void f_assign_code_403(struct f_greenc_1fr *up_, rstr lval_398, P115 t_399, rstr v_400, P170 c_401, P133 *r_402);
static void f_copy_code_407(struct f_greenc_1fr *up_, P115 t_404, rstr v_405, P133 *r_406);
static void f_eq_code_412(struct f_greenc_1fr *up_, P115 t_408, rstr a_409, rstr b_410, P133 *r_411);
static int f_seen_name_415(struct f_greenc_1fr *up_, P144 l_413, rstr s_414);
static void f_emit_helpers_416(struct f_greenc_1fr *up_);
static void f_helper_bodies_418(struct f_greenc_1fr *up_, P115 t_417);
static void f_storage_422(struct f_greenc_1fr *up_, rstr name_419, P115 t_420, P133 *access_code_421);
static void f_bind_425(struct f_greenc_1fr *up_, P110 y_423, P133 access_code_424);
static void f_declare_subprograms_427(struct f_greenc_1fr *up_, P163 from_426);
static void f_declare_one_429(struct f_greenc_1fr *up_, P163 e_428);
static void f_build_subprogram_432(struct f_greenc_1fr *up_, P163 d_430, P110 *y_431);
static void f_decl_elements_434(struct f_greenc_1fr *up_, P163 decls_433);
static void f_decl_element_436(struct f_greenc_1fr *up_, P163 e_435);
static void f_other_decl_438(struct f_greenc_1fr *up_, P163 e_437);
static void f_subprogram_body_441(struct f_greenc_1fr *up_, P163 d_439, P110 y_440);
static void f_gen_statements_443(struct f_greenc_1fr *up_, P163 stmts_442);
static void f_pop_frames_445(struct f_greenc_1fr *up_, rt_int upto_444);
static void f_push_cleanup_447(struct f_greenc_1fr *up_, rstr s_446);
static void f_pop_cleanup_448(struct f_greenc_1fr *up_);
static void f_guarded_452(struct f_greenc_1fr *up_, P163 stmts_449, P163 hs_450, rt_int line_451);
static void f_exc_id_456(struct f_greenc_1fr *up_, rstr name_453, rt_int line_454, P133 *r_455);
static void f_gen_statement_458(struct f_greenc_1fr *up_, P163 s_457);
static void f_slice_assign_460(struct f_greenc_1fr *up_, P163 s_459);
static void f_gen_call_462(struct f_greenc_1fr *up_, P163 s_461);
static void f_gen_if_464(struct f_greenc_1fr *up_, P163 s_463);
static void f_gen_case_466(struct f_greenc_1fr *up_, P163 s_465);
static void f_push_exit_470(struct f_greenc_1fr *up_, P133 match_467, int is_loop_468, P133 *label_469);
static void f_gen_loop_472(struct f_greenc_1fr *up_, P163 s_471);
static void f_gen_block_474(struct f_greenc_1fr *up_, P163 s_473);
static void f_gen_exit_476(struct f_greenc_1fr *up_, P163 s_475);
static void f_gen_return_478(struct f_greenc_1fr *up_, P163 s_477);
static void f_access_of_481(struct f_greenc_1fr *up_, P110 y_479, P133 *r_480);
static void f_link_to_484(struct f_greenc_1fr *up_, rt_int l_482, P133 *r_483);
static rstr f_c_ident_486(struct f_greenc_1fr *up_, rstr s_485);
static void f_deref_490(struct f_greenc_1fr *up_, rstr base_487, P115 t_488, P133 *r_489);
static int f_is_object_492(struct f_greenc_1fr *up_, P163 e_491);
static void f_lvalue_498(struct f_greenc_1fr *up_, P163 e_493, P133 *code_out_494, P115 *t_495, P170 *c_496, int *ro_497);
static void f_select_on_506(struct f_greenc_1fr *up_, rstr base_499, P115 bt_500, P163 e_501, int *ro_502, P133 *code_out_503, P115 *t_504, P170 *c_505);
static void f_index_on_515(struct f_greenc_1fr *up_, rstr base_507, P115 bt_508, P163 e_509, int *ro_510, int lv_511, P133 *code_out_512, P115 *t_513, P170 *c_514);
static int f_is_char_lit_517(struct f_greenc_1fr *up_, P163 e_516);
static int f_is_enum_lit_519(struct f_greenc_1fr *up_, P163 e_518);
static rstr f_c_string_521(struct f_greenc_1fr *up_, rstr s_520);
static int f_is_literal_523(struct f_greenc_1fr *up_, P163 e_522);
static void f_range_bounds_531(struct f_greenc_1fr *up_, P163 l_524, P163 h_525, P115 want_526, rt_int line_527, P115 *t_528, P133 *lo_529, P133 *hi_530);
static void f_gexpr_536(struct f_greenc_1fr *up_, P163 e_532, P115 want_533, P115 *t_534, P133 *r_535);
static void f_gexpr_1_541(struct f_greenc_1fr *up_, P163 e_537, P115 want_538, P115 *t_539, P133 *r_540);
static void f_char_literal_546(struct f_greenc_1fr *up_, P163 e_542, P115 want_543, P115 *t_544, P133 *r_545);
static void f_gen_name_551(struct f_greenc_1fr *up_, P163 e_547, P115 want_548, P115 *t_549, P133 *r_550);
static void f_gen_unop_556(struct f_greenc_1fr *up_, P163 e_552, P115 want_553, P115 *t_554, P133 *r_555);
static void f_gen_binop_561(struct f_greenc_1fr *up_, P163 e_557, P115 want_558, P115 *t_559, P133 *r_560);
static void f_conversion_566(struct f_greenc_1fr *up_, P163 e_562, P110 y_563, P115 *t_564, P133 *r_565);
static void f_gen_attr_571(struct f_greenc_1fr *up_, P163 e_567, P115 want_568, P115 *t_569, P133 *r_570);
static void f_lit_table_574(struct f_greenc_1fr *up_, P115 t_572, P133 *r_573);
static void f_val_rep_580(struct f_greenc_1fr *up_, P163 e_575, P115 tt_576, P170 c_577, P115 *t_578, P133 *r_579);
static void f_allocator_585(struct f_greenc_1fr *up_, P163 e_581, P115 want_582, P115 *t_583, P133 *r_584);
static void f_aggregate_590(struct f_greenc_1fr *up_, P163 e_586, P115 want_587, P115 *t_588, P133 *r_589);
static P163 f_actual_for_594(struct f_greenc_1fr *up_, P163 args_591, P1070 pm_592, P1070 first_593);
static void f_gcall_599(struct f_greenc_1fr *up_, P163 e_595, int is_stmt_596, P115 *t_597, P133 *r_598);
static void f_gcall_with_604(struct f_greenc_1fr *up_, P163 e_600, P110 y_601, P115 *t_602, P133 *r_603);
static void f_builtin_611(struct f_greenc_1fr *up_, rstr name_605, P163 args_606, rt_int line_607, int is_stmt_608, P115 *t_609, P133 *r_610);
static int f_is_package_613(struct f_greenc_1fr *up_, P163 e_612);
static P110 f_member_of_617(struct f_greenc_1fr *up_, rstr p_614, rstr name_615, rt_int line_616);
static int f_inside_package_619(struct f_greenc_1fr *up_, P163 p_618);
static void f_copy_sym_622(struct f_greenc_1fr *up_, P110 y_620, P110 *z_621);
static void f_complete_private_625(struct f_greenc_1fr *up_, P115 ph_623, P115 full_624);
static void f_package_spec_627(struct f_greenc_1fr *up_, P163 e_626);
static int f_hidden_from_630(struct f_greenc_1fr *up_, P110 m_628, P110 first_private_629);
static void f_package_body_632(struct f_greenc_1fr *up_, P163 e_631);
static void f_use_clause_634(struct f_greenc_1fr *up_, P163 e_633);
static void f_fits_639(struct f_greenc_1fr *up_, P110 y_635, P163 args_636, P115 want_637, int *ok_638);
static int f_is_builtin_641(struct f_greenc_1fr *up_, rstr n_640);
static void f_resolve_overload_648(struct f_greenc_1fr *up_, rstr name_642, P163 args_643, int is_stmt_644, P115 want_645, rt_int line_646, P110 *y_647);
static void f_resolve_member_overload_656(struct f_greenc_1fr *up_, rstr p_649, rstr name_650, P163 args_651, int is_stmt_652, P115 want_653, rt_int line_654, P110 *y_655);
static void f_user_operator_662(struct f_greenc_1fr *up_, P163 e_657, P115 want_658, P115 *t_659, P133 *r_660, int *done_661);
static void f_task_p_664(struct f_greenc_1fr *up_, P163 *res_663);
static void f_entry_p_666(struct f_greenc_1fr *up_, P163 *res_665);
static void f_accept_p_668(struct f_greenc_1fr *up_, P163 *res_667);
static void f_delay_p_670(struct f_greenc_1fr *up_, P163 *res_669);
static void f_designators_672(struct f_greenc_1fr *up_, P163 *res_671);
static void f_parse_task_statement_674(struct f_greenc_1fr *up_, P163 *res_673);
static void f_path_at_678(struct f_greenc_1fr *up_, rt_int level_675, rstr field_676, P133 *r_677);
static int f_is_task_name_680(struct f_greenc_1fr *up_, rstr n_679);
static void f_task_of_684(struct f_greenc_1fr *up_, P163 e_681, P110 *y_682, P163 *ix_683);
static void f_own_index_686(struct f_greenc_1fr *up_, P133 *r_685);
static void f_member_691(struct f_greenc_1fr *up_, P110 y_687, rstr arr_688, rstr i_689, P133 *r_690);
static void f_act_path_694(struct f_greenc_1fr *up_, P110 y_692, P133 *r_693);
static void f_act_path_i_698(struct f_greenc_1fr *up_, P110 y_695, rstr i_696, P133 *r_697);
static void f_entry_path_702(struct f_greenc_1fr *up_, P110 y_699, rstr i_700, P133 *r_701);
static void f_declare_slot_705(struct f_greenc_1fr *up_, rstr ctype_name_703, rstr field_704);
static void f_task_decl_707(struct f_greenc_1fr *up_, P163 e_706);
static void f_family_arg_struct_708(struct f_greenc_1fr *up_);
static void f_family_bounds_712(struct f_greenc_1fr *up_, P163 b_709, P110 y_710, P133 x_711);
static void f_entry_family_slot_717(struct f_greenc_1fr *up_, P110 y_713, rstr base_714, rstr i_715, P133 *r_716);
static void f_task_spec_719(struct f_greenc_1fr *up_, P163 e_718);
static void f_entry_decl_721(struct f_greenc_1fr *up_, P163 e_720);
static void f_task_body_723(struct f_greenc_1fr *up_, P163 e_722);
static void f_task_awaits_726(struct f_greenc_1fr *up_, P163 decls_724, P133 *aw_725);
static void f_task_failure_728(struct f_greenc_1fr *up_, P163 s_727);
static void f_entry_sym_732(struct f_greenc_1fr *up_, P163 e_729, P110 *y_730, P163 *ix_731);
static void f_other_call_737(struct f_greenc_1fr *up_, P163 e_733, int is_stmt_734, P115 *t_735, P133 *r_736);
static void f_other_attr_742(struct f_greenc_1fr *up_, P163 e_738, P110 y_739, P115 *t_740, P133 *r_741);
static void f_member_attr_746(struct f_greenc_1fr *up_, P163 e_743, P115 *t_744, P133 *r_745);
static void f_task_builtin_752(struct f_greenc_1fr *up_, rstr name_747, P163 args_748, rt_int line_749, P115 *t_750, P133 *r_751);
static void f_gen_accept_754(struct f_greenc_1fr *up_, P163 s_753);
static void f_member_slot_758(struct f_greenc_1fr *up_, P110 y_755, P163 s_756, P133 *ent_757);
static void f_gen_delay_ticks_761(struct f_greenc_1fr *up_, P163 e_759, P133 *r_760);
static void f_gen_select_763(struct f_greenc_1fr *up_, P163 s_762);
static void f_family_range_768(struct f_greenc_1fr *up_, P110 y_764, P163 ix_765, P133 *lo_766, P133 *hi_767);
static void f_task_statement_gen_770(struct f_greenc_1fr *up_, P163 s_769);
static P163 f_root_name_772(struct f_greenc_1fr *up_, P163 e_771);
static void f_check_pure_target_775(struct f_greenc_1fr *up_, P163 target_773, rt_int line_774);
static int f_assigns_nonlocal_778(struct f_greenc_1fr *up_, P163 d_776, rstr name_777);
static int f_declares_781(struct f_greenc_1fr *up_, P163 d_779, rstr name_780);
static int f_scan_handlers_785(struct f_greenc_1fr *up_, P163 h_782, P163 d_783, rstr name_784);
static int f_scan_assigns_789(struct f_greenc_1fr *up_, P163 stmts_786, P163 d_787, rstr name_788);
static void f_check_call_rules_792(struct f_greenc_1fr *up_, P163 e_790, P110 y_791);
static void f_generic_p_794(struct f_greenc_1fr *up_, P163 *res_793);
static void f_instantiation_797(struct f_greenc_1fr *up_, P163 x_795, P163 *res_796);
static void f_generic_decl_799(struct f_greenc_1fr *up_, P163 e_798);
static int f_is_generic_name_801(struct f_greenc_1fr *up_, rstr n_800);
static void f_attach_generic_body_803(struct f_greenc_1fr *up_, P163 e_802);
static void f_restore_generic_context_806(struct f_greenc_1fr *up_, P163 body_node_804, rt_int line_805);
static P163 f_gactual_810(struct f_greenc_1fr *up_, P163 args_807, rt_int nth_808, rstr name_809);
static void f_copy_node_814(struct f_greenc_1fr *up_, P163 n_811, P133 name_812, P163 *r_813);
static void f_instantiate_816(struct f_greenc_1fr *up_, P163 e_815);
static void f_predef_type_821(struct f_greenc_1fr *up_, rstr name_817, P115 t_818, rstr lo_819, rstr hi_820);
static void f_predef_const_825(struct f_greenc_1fr *up_, rstr name_822, P115 t_823, rstr code_text_824);
static void f_predef_exc_827(struct f_greenc_1fr *up_, rstr name_826);
static void f_predef_lit_831(struct f_greenc_1fr *up_, rstr name_828, P115 t_829, rt_int v_830);
static void f_predefine_832(struct f_greenc_1fr *up_);
static void f_translate_834(struct f_greenc_1fr *up_, P163 u_833);
static void f_print_program_835(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_101;
static P133 f_mk_185(struct f_greenc_1fr *up_, rstr s_184) {
  struct f_mk_185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_184 = rt_str_copy(s_184);
F->result_ = ({ rstr *cell836 = rt_alloc(sizeof(rstr)); *cell836 = rt_str_copy(F->s_184); (P133)cell836; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_188(struct f_greenc_1fr *up_, rstr base_186, P133 *res_187) {
  struct f_new_name_188fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_186 = rt_str_copy(base_186);
F->res_187 = res_187;
F->up->serial_118 = rt_add(F->up->serial_118, ((rt_int)1LL));
(*F->res_187) = ({ rstr *cell837 = rt_alloc(sizeof(rstr)); *cell837 = rt_str_copy(rt_str_cat(F->base_186, rt_str_of_int(F->up->serial_118))); (P133)cell837; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_190(struct f_greenc_1fr *up_, int c_189) {
  struct f_is_letter_190fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_189 = c_189;
F->result_ = (((F->c_189 >= 65) && (F->c_189 <= 90)) || ((F->c_189 >= 97) && (F->c_189 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_192(struct f_greenc_1fr *up_, int c_191) {
  struct f_is_digit_192fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_191 = c_191;
F->result_ = ((F->c_191 >= 48) && (F->c_191 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_194(struct f_greenc_1fr *up_, int c_193) {
  struct f_upper_194fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_193 = c_193;
if (((F->c_193 >= 97) && (F->c_193 <= 122))) {
F->result_ = rt_range((rt_sub(((rt_int)(F->c_193) + 1), ((rt_int)32LL)) - 1), 0, 127);
goto ret_;
}
F->result_ = F->c_193;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_lower_s_196(struct f_greenc_1fr *up_, rstr s_195) {
  struct f_lower_s_196fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_195 = rt_str_copy(s_195);
F->r_838 = rt_str_copy(F->s_195);
{ rt_int lo841 = ((rt_int)1LL), hi842 = (F->s_195).len;
for (rt_int it843 = lo841; it843 <= hi842; it843++) {
F->i_840 = it843;
if (((rt_str_get(F->r_838, F->i_840) >= 65) && (rt_str_get(F->r_838, F->i_840) <= 90))) {
(*rt_str_at(&F->r_838, F->i_840)) = rt_range((rt_add(((rt_int)(rt_str_get(F->r_838, F->i_840)) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_839: ;
F->result_ = F->r_838;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_upper_s_198(struct f_greenc_1fr *up_, rstr s_197) {
  struct f_upper_s_198fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_197 = rt_str_copy(s_197);
F->r_844 = rt_str_copy(F->s_197);
{ rt_int lo847 = ((rt_int)1LL), hi848 = (F->s_197).len;
for (rt_int it849 = lo847; it849 <= hi848; it849++) {
F->i_846 = it849;
(*rt_str_at(&F->r_844, F->i_846)) = f_upper_194(F->up, rt_str_get(F->r_844, F->i_846));
}
}
L_end_845: ;
F->result_ = F->r_844;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_200(struct f_greenc_1fr *up_, rstr s_199) {
  struct f_is_operator_200fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_199 = rt_str_copy(s_199);
F->result_ = (((((((((((((((rt_str_eq(F->s_199, rt_str("+", 1)) || rt_str_eq(F->s_199, rt_str("-", 1))) || rt_str_eq(F->s_199, rt_str("*", 1))) || rt_str_eq(F->s_199, rt_str("/", 1))) || rt_str_eq(F->s_199, rt_str("**", 2))) || rt_str_eq(F->s_199, rt_str("&", 1))) || rt_str_eq(F->s_199, rt_str("=", 1))) || rt_str_eq(F->s_199, rt_str("<", 1))) || rt_str_eq(F->s_199, rt_str("<=", 2))) || rt_str_eq(F->s_199, rt_str(">", 1))) || rt_str_eq(F->s_199, rt_str(">=", 2))) || rt_str_eq(F->s_199, rt_str("MOD", 3))) || rt_str_eq(F->s_199, rt_str("AND", 3))) || rt_str_eq(F->s_199, rt_str("OR", 2))) || rt_str_eq(F->s_199, rt_str("XOR", 3))) || rt_str_eq(F->s_199, rt_str("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_field_202(struct f_greenc_1fr *up_, rstr s_201) {
  struct f_c_field_202fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_201 = rt_str_copy(s_201);
F->result_ = rt_str_catc(f_lower_s_196(F->up, F->s_201), 95);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_q_203(struct f_greenc_1fr *up_) {
  struct f_q_203fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_str("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_206(struct f_greenc_1fr *up_, rt_int line_204, rstr msg_205) {
  struct f_fail_206fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_204 = line_204;
F->msg_205 = rt_str_copy(msg_205);
if ((F->up->trial_148 == ((rt_int)0LL))) {
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("greenc: line ", 13), rt_str_of_int(F->line_204)), rt_str(": ", 2)), F->msg_205));
rt_g_put(rt_str("\n", 1));
}
rt_raise(ex_compile_error_101);
ret_:

  return;
}

static P119 f_new_buffer_207(struct f_greenc_1fr *up_) {
  struct f_new_buffer_207fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R120 *cell850 = rt_alloc(sizeof(R120)); *cell850 = cp_R120(({ R120 ag851; ag851.head_ = NULL; ag851.tail_ = NULL; ag851; })); (P119)cell850; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_210(struct f_greenc_1fr *up_, P119 b_208, rstr s_209) {
  struct f_put_to_210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_208 = b_208;
F->s_209 = rt_str_copy(s_209);
F->l_852 = NULL;
F->l_852 = ({ R145 *cell853 = rt_alloc(sizeof(R145)); *cell853 = cp_R145(({ R145 ag854; ag854.s_ = NULL; ag854.next_ = NULL; ag854; })); (P144)cell853; });
(*(P144)rt_nil_check(F->l_852)).s_ = f_mk_185(F->up, F->s_209);
if (((*(P119)rt_nil_check(F->b_208)).tail_ == NULL)) {
(*(P119)rt_nil_check(F->b_208)).head_ = F->l_852;
} else {
(*(P144)rt_nil_check((*(P119)rt_nil_check(F->b_208)).tail_)).next_ = F->l_852;
}
(*(P119)rt_nil_check(F->b_208)).tail_ = F->l_852;
ret_:

  return;
}

static void f_emit_212(struct f_greenc_1fr *up_, rstr s_211) {
  struct f_emit_212fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_211 = rt_str_copy(s_211);
f_put_to_210(F->up, F->up->code_129, F->s_211);
ret_:

  return;
}

static void f_print_buffer_214(struct f_greenc_1fr *up_, P119 b_213) {
  struct f_print_buffer_214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_213 = b_213;
F->l_855 = NULL;
F->l_855 = (*(P119)rt_nil_check(F->b_213)).head_;
while ((F->l_855 != NULL)) {
rt_g_put((*(P133)rt_nil_check((*(P144)rt_nil_check(F->l_855)).s_)));
rt_g_put(rt_str("\n", 1));
F->l_855 = (*(P144)rt_nil_check(F->l_855)).next_;
}
L_end_856: ;
ret_:

  return;
}

static void f_splice_217(struct f_greenc_1fr *up_, P119 a_215, P119 b_216) {
  struct f_splice_217fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_215 = a_215;
F->b_216 = b_216;
if (((*(P119)rt_nil_check(F->b_216)).head_ == NULL)) {
goto ret_;
}
if (((*(P119)rt_nil_check(F->a_215)).tail_ == NULL)) {
(*(P119)rt_nil_check(F->a_215)).head_ = (*(P119)rt_nil_check(F->b_216)).head_;
} else {
(*(P144)rt_nil_check((*(P119)rt_nil_check(F->a_215)).tail_)).next_ = (*(P119)rt_nil_check(F->b_216)).head_;
}
(*(P119)rt_nil_check(F->a_215)).tail_ = (*(P119)rt_nil_check(F->b_216)).tail_;
(*(P119)rt_nil_check(F->b_216)).head_ = NULL;
(*(P119)rt_nil_check(F->b_216)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_219(struct f_greenc_1fr *up_, rstr w_218) {
  struct f_is_reserved_219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_218 = rt_str_copy(w_218);
{ rt_int sel857 = (F->w_218).len;
if (0 || sel857 == ((rt_int)2LL)) {
F->result_ = ((((((rt_str_eq(F->w_218, rt_str("AT", 2)) || rt_str_eq(F->w_218, rt_str("DO", 2))) || rt_str_eq(F->w_218, rt_str("IF", 2))) || rt_str_eq(F->w_218, rt_str("IN", 2))) || rt_str_eq(F->w_218, rt_str("IS", 2))) || rt_str_eq(F->w_218, rt_str("OF", 2))) || rt_str_eq(F->w_218, rt_str("OR", 2)));
goto ret_;
} else if (0 || sel857 == ((rt_int)3LL)) {
F->result_ = (((((((((rt_str_eq(F->w_218, rt_str("ALL", 3)) || rt_str_eq(F->w_218, rt_str("AND", 3))) || rt_str_eq(F->w_218, rt_str("END", 3))) || rt_str_eq(F->w_218, rt_str("FOR", 3))) || rt_str_eq(F->w_218, rt_str("MOD", 3))) || rt_str_eq(F->w_218, rt_str("NEW", 3))) || rt_str_eq(F->w_218, rt_str("NOT", 3))) || rt_str_eq(F->w_218, rt_str("OUT", 3))) || rt_str_eq(F->w_218, rt_str("USE", 3))) || rt_str_eq(F->w_218, rt_str("XOR", 3)));
goto ret_;
} else if (0 || sel857 == ((rt_int)4LL)) {
F->result_ = ((((((((((rt_str_eq(F->w_218, rt_str("BODY", 4)) || rt_str_eq(F->w_218, rt_str("CASE", 4))) || rt_str_eq(F->w_218, rt_str("ELSE", 4))) || rt_str_eq(F->w_218, rt_str("EXIT", 4))) || rt_str_eq(F->w_218, rt_str("GOTO", 4))) || rt_str_eq(F->w_218, rt_str("LOOP", 4))) || rt_str_eq(F->w_218, rt_str("NULL", 4))) || rt_str_eq(F->w_218, rt_str("TASK", 4))) || rt_str_eq(F->w_218, rt_str("THEN", 4))) || rt_str_eq(F->w_218, rt_str("TYPE", 4))) || rt_str_eq(F->w_218, rt_str("WHEN", 4)));
goto ret_;
} else if (0 || sel857 == ((rt_int)5LL)) {
F->result_ = (((((((((rt_str_eq(F->w_218, rt_str("ABORT", 5)) || rt_str_eq(F->w_218, rt_str("ARRAY", 5))) || rt_str_eq(F->w_218, rt_str("BEGIN", 5))) || rt_str_eq(F->w_218, rt_str("DELAY", 5))) || rt_str_eq(F->w_218, rt_str("DELTA", 5))) || rt_str_eq(F->w_218, rt_str("ELSIF", 5))) || rt_str_eq(F->w_218, rt_str("ENTRY", 5))) || rt_str_eq(F->w_218, rt_str("RAISE", 5))) || rt_str_eq(F->w_218, rt_str("RANGE", 5))) || rt_str_eq(F->w_218, rt_str("WHILE", 5)));
goto ret_;
} else if (0 || sel857 == ((rt_int)6LL)) {
F->result_ = ((((((((rt_str_eq(F->w_218, rt_str("ACCEPT", 6)) || rt_str_eq(F->w_218, rt_str("ACCESS", 6))) || rt_str_eq(F->w_218, rt_str("ASSERT", 6))) || rt_str_eq(F->w_218, rt_str("DIGITS", 6))) || rt_str_eq(F->w_218, rt_str("OTHERS", 6))) || rt_str_eq(F->w_218, rt_str("PRAGMA", 6))) || rt_str_eq(F->w_218, rt_str("RECORD", 6))) || rt_str_eq(F->w_218, rt_str("RETURN", 6))) || rt_str_eq(F->w_218, rt_str("SELECT", 6)));
goto ret_;
} else if (0 || sel857 == ((rt_int)7LL)) {
F->result_ = (((((((rt_str_eq(F->w_218, rt_str("DECLARE", 7)) || rt_str_eq(F->w_218, rt_str("GENERIC", 7))) || rt_str_eq(F->w_218, rt_str("PACKAGE", 7))) || rt_str_eq(F->w_218, rt_str("PACKING", 7))) || rt_str_eq(F->w_218, rt_str("PRIVATE", 7))) || rt_str_eq(F->w_218, rt_str("RENAMES", 7))) || rt_str_eq(F->w_218, rt_str("REVERSE", 7))) || rt_str_eq(F->w_218, rt_str("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel857 == ((rt_int)8LL)) {
F->result_ = (((rt_str_eq(F->w_218, rt_str("CONSTANT", 8)) || rt_str_eq(F->w_218, rt_str("FUNCTION", 8))) || rt_str_eq(F->w_218, rt_str("INITIATE", 8))) || rt_str_eq(F->w_218, rt_str("SEPARATE", 8)));
goto ret_;
} else if (0 || sel857 == ((rt_int)9LL)) {
F->result_ = (rt_str_eq(F->w_218, rt_str("EXCEPTION", 9)) || rt_str_eq(F->w_218, rt_str("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel857 == ((rt_int)10LL)) {
F->result_ = rt_str_eq(F->w_218, rt_str("RESTRICTED", 10));
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

static void f_add_token_223(struct f_greenc_1fr *up_, rt_int kind_220, rstr s_221, rt_int ival_222) {
  struct f_add_token_223fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_220 = kind_220;
F->s_221 = rt_str_copy(s_221);
F->ival_222 = ival_222;
F->up->ntoks_106 = rt_add(F->up->ntoks_106, ((rt_int)1LL));
F->up->toks_105.p[rt_index(F->up->ntoks_106, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo] = ({ R104 *cell858 = rt_alloc(sizeof(R104)); *cell858 = cp_R104(({ R104 ag859; ag859.kind_ = F->kind_220; ag859.line_ = F->up->src_line_108; ag859.ival_ = F->ival_222; ag859.s_ = NULL; ag859; })); (P103)cell858; });
(*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->ntoks_106, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_ = f_mk_185(F->up, F->s_221);
ret_:

  return;
}

static rt_int f_digit_value_225(struct f_greenc_1fr *up_, int c_224) {
  struct f_digit_value_225fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_224 = c_224;
if (f_is_digit_192(F->up, F->c_224)) {
F->result_ = rt_sub(((rt_int)(F->c_224) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_194(F->up, F->c_224)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lex_line_227(struct f_greenc_1fr *up_, rstr line_226) {
  struct f_lex_line_227fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_226 = rt_str_copy(line_226);
F->i_860 = ((rt_int)1LL);
F->j_861 = ((rt_int)0LL);
F->n_862 = (F->line_226).len;
F->buf_865 = rt_str_new((((rt_int)1000LL) - ((rt_int)1LL) + 1));
while ((F->i_860 <= F->n_862)) {
F->c_863 = rt_range(rt_str_get(F->line_226, F->i_860), 0, 127);
if (((((F->c_863 == 32) || (F->c_863 == 9)) || (F->c_863 == 13)) || (F->c_863 == 12))) {
F->i_860 = rt_add(F->i_860, ((rt_int)1LL));
} else if ((((F->c_863 == 45) && (F->i_860 < F->n_862)) && (rt_str_get(F->line_226, rt_add(F->i_860, ((rt_int)1LL))) == 45))) {
F->i_860 = rt_add(F->n_862, ((rt_int)1LL));
} else if (f_is_letter_190(F->up, F->c_863)) {
F->j_861 = F->i_860;
F->bl_866 = ((rt_int)0LL);
while (((F->j_861 <= F->n_862) && ((f_is_letter_190(F->up, rt_str_get(F->line_226, F->j_861)) || f_is_digit_192(F->up, rt_str_get(F->line_226, F->j_861))) || (rt_str_get(F->line_226, F->j_861) == 95)))) {
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = f_upper_194(F->up, rt_str_get(F->line_226, F->j_861));
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
L_end_868: ;
if (f_is_reserved_219(F->up, rt_str_slice(F->buf_865, ((rt_int)1LL), F->bl_866))) {
f_add_token_223(F->up, ((rt_int)2LL), rt_str_slice(F->buf_865, ((rt_int)1LL), F->bl_866), ((rt_int)0LL));
} else {
f_add_token_223(F->up, ((rt_int)1LL), rt_str_slice(F->buf_865, ((rt_int)1LL), F->bl_866), ((rt_int)0LL));
}
F->i_860 = F->j_861;
} else if (f_is_digit_192(F->up, F->c_863)) {
F->j_861 = F->i_860;
F->v_864 = ((rt_int)0LL);
F->bl_866 = ((rt_int)0LL);
while (((F->j_861 <= F->n_862) && (f_is_digit_192(F->up, rt_str_get(F->line_226, F->j_861)) || (rt_str_get(F->line_226, F->j_861) == 95)))) {
if ((rt_str_get(F->line_226, F->j_861) != 95)) {
F->v_864 = rt_add(rt_mul(F->v_864, ((rt_int)10LL)), f_digit_value_225(F->up, rt_str_get(F->line_226, F->j_861)));
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = rt_str_get(F->line_226, F->j_861);
}
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
L_end_869: ;
if (((F->j_861 <= F->n_862) && (rt_str_get(F->line_226, F->j_861) == 35))) {
{
F->base_871 = F->v_864;
F->v_864 = ((rt_int)0LL);
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
while (((F->j_861 <= F->n_862) && ((f_is_letter_190(F->up, rt_str_get(F->line_226, F->j_861)) || f_is_digit_192(F->up, rt_str_get(F->line_226, F->j_861))) || (rt_str_get(F->line_226, F->j_861) == 95)))) {
if ((rt_str_get(F->line_226, F->j_861) != 95)) {
if ((f_digit_value_225(F->up, rt_str_get(F->line_226, F->j_861)) >= F->base_871)) {
f_fail_206(F->up, F->up->src_line_108, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str("digit ", 6), rt_str_get(F->line_226, F->j_861)), rt_str(" is not valid in base ", 22)), rt_str_of_int(F->base_871)), rt_str(" (RM79 2.4)", 11)));
}
F->v_864 = rt_add(rt_mul(F->v_864, F->base_871), f_digit_value_225(F->up, rt_str_get(F->line_226, F->j_861)));
}
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
L_end_872: ;

}
L_end_870: ;
f_add_token_223(F->up, ((rt_int)4LL), rt_str_of_int(F->v_864), F->v_864);
} else if (((F->j_861 < F->n_862) && ((rt_str_get(F->line_226, F->j_861) == 46) && f_is_digit_192(F->up, rt_str_get(F->line_226, rt_add(F->j_861, ((rt_int)1LL))))))) {
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = 46;
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
while (((F->j_861 <= F->n_862) && (f_is_digit_192(F->up, rt_str_get(F->line_226, F->j_861)) || (rt_str_get(F->line_226, F->j_861) == 95)))) {
if ((rt_str_get(F->line_226, F->j_861) != 95)) {
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = rt_str_get(F->line_226, F->j_861);
}
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
L_end_873: ;
if (((F->j_861 <= F->n_862) && ((rt_str_get(F->line_226, F->j_861) == 69) || (rt_str_get(F->line_226, F->j_861) == 101)))) {
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = 69;
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
while (((F->j_861 <= F->n_862) && ((f_is_digit_192(F->up, rt_str_get(F->line_226, F->j_861)) || (rt_str_get(F->line_226, F->j_861) == 43)) || (rt_str_get(F->line_226, F->j_861) == 45)))) {
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = rt_str_get(F->line_226, F->j_861);
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
L_end_874: ;
}
f_add_token_223(F->up, ((rt_int)5LL), rt_str_slice(F->buf_865, ((rt_int)1LL), F->bl_866), ((rt_int)0LL));
} else if (((F->j_861 < F->n_862) && (((rt_str_get(F->line_226, F->j_861) == 69) || (rt_str_get(F->line_226, F->j_861) == 101)) && f_is_digit_192(F->up, rt_str_get(F->line_226, rt_add(F->j_861, ((rt_int)1LL))))))) {
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = 69;
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
while (((F->j_861 <= F->n_862) && f_is_digit_192(F->up, rt_str_get(F->line_226, F->j_861)))) {
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = rt_str_get(F->line_226, F->j_861);
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
L_end_875: ;
f_add_token_223(F->up, ((rt_int)5LL), rt_str_slice(F->buf_865, ((rt_int)1LL), F->bl_866), ((rt_int)0LL));
} else {
f_add_token_223(F->up, ((rt_int)4LL), rt_str_slice(F->buf_865, ((rt_int)1LL), F->bl_866), F->v_864);
}
F->i_860 = F->j_861;
} else if ((F->c_863 == 34)) {
F->j_861 = rt_add(F->i_860, ((rt_int)1LL));
F->bl_866 = ((rt_int)0LL);
for (;;) {
if ((F->j_861 > F->n_862)) {
f_fail_206(F->up, F->up->src_line_108, rt_str("unterminated string", 19));
}
if ((rt_str_get(F->line_226, F->j_861) == 34)) {
if (((F->j_861 == F->n_862) || (rt_str_get(F->line_226, rt_add(F->j_861, ((rt_int)1LL))) != 34))) {
goto L_end_876;
}
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
F->bl_866 = rt_add(F->bl_866, ((rt_int)1LL));
(*rt_str_at(&F->buf_865, F->bl_866)) = rt_str_get(F->line_226, F->j_861);
F->j_861 = rt_add(F->j_861, ((rt_int)1LL));
}
L_end_876: ;
f_add_token_223(F->up, ((rt_int)6LL), rt_str_slice(F->buf_865, ((rt_int)1LL), F->bl_866), ((rt_int)0LL));
F->i_860 = rt_add(F->j_861, ((rt_int)1LL));
} else {
{
F->two_878 = rt_str_new((((rt_int)3LL) - ((rt_int)1LL) + 1));
rt_str_assign(&F->two_878, rt_str("   ", 3));
(*rt_str_at(&F->two_878, ((rt_int)1LL))) = F->c_863;
if ((F->i_860 < F->n_862)) {
(*rt_str_at(&F->two_878, ((rt_int)2LL))) = rt_str_get(F->line_226, rt_add(F->i_860, ((rt_int)1LL)));
}
if ((rt_add(F->i_860, ((rt_int)1LL)) < F->n_862)) {
(*rt_str_at(&F->two_878, ((rt_int)3LL))) = rt_str_get(F->line_226, rt_add(F->i_860, ((rt_int)2LL)));
}
if (rt_str_eq(F->two_878, rt_str(":=:", 3))) {
f_add_token_223(F->up, ((rt_int)3LL), rt_str(":=:", 3), ((rt_int)0LL));
F->i_860 = rt_add(F->i_860, ((rt_int)3LL));
} else if ((((((((((rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str(":=", 2)) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=:", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=>", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str("..", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str("**", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str("/=", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<=", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">=", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<<", 2))) || rt_str_eq(rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">>", 2)))) {
f_add_token_223(F->up, ((rt_int)3LL), rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)2LL)), ((rt_int)0LL));
F->i_860 = rt_add(F->i_860, ((rt_int)2LL));
} else if (((((((((((((((((F->c_863 == 38) || (F->c_863 == 39)) || (F->c_863 == 40)) || (F->c_863 == 41)) || (F->c_863 == 42)) || (F->c_863 == 43)) || (F->c_863 == 44)) || (F->c_863 == 45)) || (F->c_863 == 46)) || (F->c_863 == 47)) || (F->c_863 == 58)) || (F->c_863 == 59)) || (F->c_863 == 60)) || (F->c_863 == 61)) || (F->c_863 == 62)) || (F->c_863 == 124))) {
f_add_token_223(F->up, ((rt_int)3LL), rt_str_slice(F->two_878, ((rt_int)1LL), ((rt_int)1LL)), ((rt_int)0LL));
F->i_860 = rt_add(F->i_860, ((rt_int)1LL));
} else {
f_fail_206(F->up, F->up->src_line_108, rt_str("unexpected character", 20));
}

}
L_end_877: ;
}
}
L_end_867: ;
ret_:

  return;
}

static void f_read_source_228(struct f_greenc_1fr *up_) {
  struct f_read_source_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_879 = rt_str_new((((rt_int)10000LL) - ((rt_int)1LL) + 1));
F->bl_880 = ((rt_int)0LL);
{ rt_frame xf882;
if (RT_TRY(xf882)) {
for (;;) {
(F->c_881 = rt_g_getc());
if ((F->c_881 == 10)) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_227(F->up, rt_str_slice(F->buf_879, ((rt_int)1LL), F->bl_880));
F->bl_880 = ((rt_int)0LL);
} else {
F->bl_880 = rt_add(F->bl_880, ((rt_int)1LL));
(*rt_str_at(&F->buf_879, F->bl_880)) = F->c_881;
}
}
L_end_884: ;
RT_POP(xf882);
} else {
RT_POP(xf882);
int x883 = rt_xcur;
if (rt_g_aborted()) rt_raise(x883);
if (0 || x883 == rt_exc("END_OF_FILE")) {
if ((F->bl_880 > ((rt_int)0LL))) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_227(F->up, rt_str_slice(F->buf_879, ((rt_int)1LL), F->bl_880));
}
f_add_token_223(F->up, ((rt_int)0LL), rt_str("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x883);
}
}
}
ret_:

  return;
}

static P163 f_nn_231(struct f_greenc_1fr *up_, rt_int kind_229, rt_int line_230) {
  struct f_nn_231fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_229 = kind_229;
F->line_230 = line_230;
F->result_ = ({ R164 *cell885 = rt_alloc(sizeof(R164)); *cell885 = cp_R164(({ R164 ag886; ag886.kind_ = F->kind_229; ag886.line_ = F->line_230; ag886.ival_ = ((rt_int)0LL); ag886.flag_ = ((rt_int)0LL); ag886.name_ = NULL; ag886.tag_ = NULL; ag886.a_ = NULL; ag886.b_ = NULL; ag886.c_ = NULL; ag886.d_ = NULL; ag886.e_ = NULL; ag886.next_ = NULL; ag886.formal_ = NULL; ag886; })); (P163)cell885; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_235(struct f_greenc_1fr *up_, P163 *head_232, P163 *tail_233, P163 x_234) {
  struct f_append_235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_232 = head_232;
F->tail_233 = tail_233;
F->x_234 = x_234;
if ((F->x_234 == NULL)) {
goto ret_;
}
if (((*F->head_232) == NULL)) {
(*F->head_232) = F->x_234;
} else {
(*(P163)rt_nil_check((*F->tail_233))).next_ = F->x_234;
}
(*F->tail_233) = F->x_234;
while (((*(P163)rt_nil_check((*F->tail_233))).next_ != NULL)) {
(*F->tail_233) = (*(P163)rt_nil_check((*F->tail_233))).next_;
}
L_end_887: ;
ret_:

  return;
}

static rt_int f_list_len_237(struct f_greenc_1fr *up_, P163 l_236) {
  struct f_list_len_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_236 = l_236;
F->n_888 = ((rt_int)0LL);
F->p_889 = NULL;
F->p_889 = F->l_236;
while ((F->p_889 != NULL)) {
F->n_888 = rt_add(F->n_888, ((rt_int)1LL));
F->p_889 = (*(P163)rt_nil_check(F->p_889)).next_;
}
L_end_890: ;
F->result_ = F->n_888;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_238(struct f_greenc_1fr *up_) {
  struct f_cur_line_238fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_240(struct f_greenc_1fr *up_, rstr w_239) {
  struct f_at_kw_240fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_239 = rt_str_copy(w_239);
F->result_ = (((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == ((rt_int)2LL)) && rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), F->w_239));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_242(struct f_greenc_1fr *up_, rstr w_241) {
  struct f_at_op_242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_241 = rt_str_copy(w_241);
F->result_ = (((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == ((rt_int)3LL)) && rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), F->w_241));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_244(struct f_greenc_1fr *up_, rt_int k_243) {
  struct f_at_kind_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_243 = k_243;
F->result_ = ((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == F->k_243);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_246(struct f_greenc_1fr *up_, rt_int k_245) {
  struct f_kind_at_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_245 = k_245;
if ((rt_add(F->up->tpos_107, F->k_245) > F->up->ntoks_106)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_add(F->up->tpos_107, F->k_245), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_text_at_248(struct f_greenc_1fr *up_, rt_int k_247) {
  struct f_text_at_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_247 = k_247;
if ((rt_add(F->up->tpos_107, F->k_247) > F->up->ntoks_106)) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_add(F->up->tpos_107, F->k_247), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_250(struct f_greenc_1fr *up_, rstr msg_249) {
  struct f_perror_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_249 = rt_str_copy(msg_249);
f_fail_206(F->up, (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).line_, rt_str_catc(rt_str_cat(rt_str_cat(F->msg_249, rt_str(" (at ", 5)), (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))), 41));
ret_:

  return;
}

static void f_skip_251(struct f_greenc_1fr *up_) {
  struct f_skip_251fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_253(struct f_greenc_1fr *up_, rstr w_252) {
  struct f_expect_kw_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_252 = rt_str_copy(w_252);
if ((!f_at_kw_240(F->up, F->w_252))) {
f_perror_250(F->up, rt_str_cat(rt_str("expected ", 9), F->w_252));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_255(struct f_greenc_1fr *up_, rstr w_254) {
  struct f_expect_op_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_254 = rt_str_copy(w_254);
if ((!f_at_op_242(F->up, F->w_254))) {
f_perror_250(F->up, rt_str_cat(rt_str("expected ", 9), F->w_254));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_257(struct f_greenc_1fr *up_, P133 *res_256) {
  struct f_expect_id_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_256 = res_256;
if ((!f_at_kind_244(F->up, ((rt_int)1LL)))) {
f_perror_250(F->up, rt_str("expected an identifier", 22));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
(*F->res_256) = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_sub(F->up->tpos_107, ((rt_int)1LL)), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_259(struct f_greenc_1fr *up_, P163 *res_258) {
  struct f_name_node_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_258 = res_258;
F->x_891 = NULL;
F->x_891 = f_nn_231(F->up, ((rt_int)5LL), f_cur_line_238(F->up));
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_891)).name_);
(*F->res_258) = F->x_891;
goto ret_;
ret_:

  return;
}

static void f_id_list_261(struct f_greenc_1fr *up_, P163 *res_260) {
  struct f_id_list_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_260 = res_260;
F->head_892 = NULL;
F->tail_893 = NULL;
F->x_894 = NULL;
f_name_node_259(F->up, &F->x_894);
f_append_235(F->up, &F->head_892, &F->tail_893, F->x_894);
while (f_at_op_242(F->up, rt_str(",", 1))) {
f_skip_251(F->up);
f_name_node_259(F->up, &F->x_894);
f_append_235(F->up, &F->head_892, &F->tail_893, F->x_894);
}
L_end_895: ;
(*F->res_260) = F->head_892;
goto ret_;
ret_:

  return;
}

static P163 f_binop_266(struct f_greenc_1fr *up_, P133 op_262, P163 l_263, P163 r_264, rt_int line_265) {
  struct f_binop_266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_262 = op_262;
F->l_263 = l_263;
F->r_264 = r_264;
F->line_265 = line_265;
F->x_896 = NULL;
F->x_896 = f_nn_231(F->up, ((rt_int)7LL), F->line_265);
(*(P163)rt_nil_check(F->x_896)).name_ = F->op_262;
(*(P163)rt_nil_check(F->x_896)).a_ = F->l_263;
(*(P163)rt_nil_check(F->x_896)).b_ = F->r_264;
F->result_ = F->x_896;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_268(struct f_greenc_1fr *up_, P163 *res_267) {
  struct f_expr_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_267 = res_267;
F->l_897 = NULL;
F->r_898 = NULL;
F->op_899 = NULL;
f_relation_272(F->up, &F->l_897);
while (((f_at_kw_240(F->up, rt_str("AND", 3)) || f_at_kw_240(F->up, rt_str("OR", 2))) || f_at_kw_240(F->up, rt_str("XOR", 3)))) {
F->op_899 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
F->line_900 = f_cur_line_238(F->up);
f_skip_251(F->up);
if ((rt_str_eq((*(P133)rt_nil_check(F->op_899)), rt_str("AND", 3)) && f_at_kw_240(F->up, rt_str("THEN", 4)))) {
f_skip_251(F->up);
} else if ((rt_str_eq((*(P133)rt_nil_check(F->op_899)), rt_str("OR", 2)) && f_at_kw_240(F->up, rt_str("ELSE", 4)))) {
f_skip_251(F->up);
}
f_relation_272(F->up, &F->r_898);
F->l_897 = f_binop_266(F->up, F->op_899, F->l_897, F->r_898, F->line_900);
}
L_end_901: ;
(*F->res_267) = F->l_897;
goto ret_;
ret_:

  return;
}

static int f_is_rel_270(struct f_greenc_1fr *up_, rstr s_269) {
  struct f_is_rel_270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_269 = rt_str_copy(s_269);
F->result_ = (((((rt_str_eq(F->s_269, rt_str("=", 1)) || rt_str_eq(F->s_269, rt_str("/=", 2))) || rt_str_eq(F->s_269, rt_str("<", 1))) || rt_str_eq(F->s_269, rt_str("<=", 2))) || rt_str_eq(F->s_269, rt_str(">", 1))) || rt_str_eq(F->s_269, rt_str(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_272(struct f_greenc_1fr *up_, P163 *res_271) {
  struct f_relation_272fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_271 = res_271;
F->l_902 = NULL;
F->r_903 = NULL;
F->lo_904 = NULL;
F->hi_905 = NULL;
F->t_906 = NULL;
F->op_907 = NULL;
F->line_908 = f_cur_line_238(F->up);
F->neg_909 = 0;
f_simple_expr_274(F->up, &F->l_902);
if ((f_at_kind_244(F->up, ((rt_int)3LL)) && f_is_rel_270(F->up, (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))))) {
F->op_907 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
f_simple_expr_274(F->up, &F->r_903);
F->l_902 = f_binop_266(F->up, F->op_907, F->l_902, F->r_903, F->line_908);
(*F->res_271) = F->l_902;
goto ret_;
}
if (((f_at_kw_240(F->up, rt_str("NOT", 3)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("IN", 2)))) {
f_skip_251(F->up);
F->neg_909 = 1;
}
if (f_at_kw_240(F->up, rt_str("IN", 2))) {
f_skip_251(F->up);
f_simple_expr_274(F->up, &F->lo_904);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &F->hi_905);
F->t_906 = f_nn_231(F->up, ((rt_int)14LL), F->line_908);
(*(P163)rt_nil_check(F->t_906)).a_ = F->lo_904;
(*(P163)rt_nil_check(F->t_906)).b_ = F->hi_905;
F->op_907 = f_mk_185(F->up, rt_str("IN", 2));
F->l_902 = f_binop_266(F->up, F->op_907, F->l_902, F->t_906, F->line_908);
if (F->neg_909) {
F->t_906 = f_nn_231(F->up, ((rt_int)6LL), F->line_908);
(*(P163)rt_nil_check(F->t_906)).name_ = f_mk_185(F->up, rt_str("NOT", 3));
(*(P163)rt_nil_check(F->t_906)).a_ = F->l_902;
(*F->res_271) = F->t_906;
goto ret_;
}
}
(*F->res_271) = F->l_902;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_274(struct f_greenc_1fr *up_, P163 *res_273) {
  struct f_simple_expr_274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_273 = res_273;
F->l_910 = NULL;
F->r_911 = NULL;
F->op_912 = NULL;
F->line_913 = f_cur_line_238(F->up);
if (((f_at_op_242(F->up, rt_str("+", 1)) || f_at_op_242(F->up, rt_str("-", 1))) || f_at_kw_240(F->up, rt_str("NOT", 3)))) {
F->op_912 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
f_term_276(F->up, &F->r_911);
F->l_910 = f_nn_231(F->up, ((rt_int)6LL), F->line_913);
(*(P163)rt_nil_check(F->l_910)).name_ = F->op_912;
(*(P163)rt_nil_check(F->l_910)).a_ = F->r_911;
} else {
f_term_276(F->up, &F->l_910);
}
while (((f_at_op_242(F->up, rt_str("+", 1)) || f_at_op_242(F->up, rt_str("-", 1))) || f_at_op_242(F->up, rt_str("&", 1)))) {
F->op_912 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
f_term_276(F->up, &F->r_911);
F->l_910 = f_binop_266(F->up, F->op_912, F->l_910, F->r_911, F->line_913);
}
L_end_914: ;
(*F->res_273) = F->l_910;
goto ret_;
ret_:

  return;
}

static void f_term_276(struct f_greenc_1fr *up_, P163 *res_275) {
  struct f_term_276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_275 = res_275;
F->l_915 = NULL;
F->r_916 = NULL;
F->op_917 = NULL;
F->line_918 = f_cur_line_238(F->up);
f_factor_278(F->up, &F->l_915);
while (((f_at_op_242(F->up, rt_str("*", 1)) || f_at_op_242(F->up, rt_str("/", 1))) || f_at_kw_240(F->up, rt_str("MOD", 3)))) {
F->op_917 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
f_factor_278(F->up, &F->r_916);
F->l_915 = f_binop_266(F->up, F->op_917, F->l_915, F->r_916, F->line_918);
}
L_end_919: ;
(*F->res_275) = F->l_915;
goto ret_;
ret_:

  return;
}

static void f_factor_278(struct f_greenc_1fr *up_, P163 *res_277) {
  struct f_factor_278fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_277 = res_277;
F->l_920 = NULL;
F->r_921 = NULL;
F->op_922 = NULL;
F->line_923 = f_cur_line_238(F->up);
f_primary_280(F->up, &F->l_920);
if (f_at_op_242(F->up, rt_str("**", 2))) {
F->op_922 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
f_primary_280(F->up, &F->r_921);
F->l_920 = f_binop_266(F->up, F->op_922, F->l_920, F->r_921, F->line_923);
}
(*F->res_277) = F->l_920;
goto ret_;
ret_:

  return;
}

static void f_primary_280(struct f_greenc_1fr *up_, P163 *res_279) {
  struct f_primary_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_279 = res_279;
F->x_924 = NULL;
F->line_925 = f_cur_line_238(F->up);
if (f_at_kind_244(F->up, ((rt_int)4LL))) {
F->x_924 = f_nn_231(F->up, ((rt_int)1LL), F->line_925);
(*(P163)rt_nil_check(F->x_924)).ival_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).ival_;
(*(P163)rt_nil_check(F->x_924)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
(*F->res_279) = F->x_924;
goto ret_;
}
if (f_at_kind_244(F->up, ((rt_int)5LL))) {
F->x_924 = f_nn_231(F->up, ((rt_int)2LL), F->line_925);
(*(P163)rt_nil_check(F->x_924)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
(*F->res_279) = F->x_924;
goto ret_;
}
if (f_at_kind_244(F->up, ((rt_int)6LL))) {
F->x_924 = f_nn_231(F->up, ((rt_int)3LL), F->line_925);
(*(P163)rt_nil_check(F->x_924)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
(*F->res_279) = F->x_924;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("NULL", 4))) {
f_skip_251(F->up);
F->x_924 = f_nn_231(F->up, ((rt_int)4LL), F->line_925);
(*F->res_279) = F->x_924;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("NEW", 3))) {
f_skip_251(F->up);
F->x_924 = f_nn_231(F->up, ((rt_int)11LL), F->line_925);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_924)).name_);
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_agg_or_paren_282(F->up, &(*(P163)rt_nil_check(F->x_924)).a_);
}
(*F->res_279) = F->x_924;
goto ret_;
}
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_agg_or_paren_282(F->up, &F->x_924);
(*F->res_279) = F->x_924;
goto ret_;
}
if (f_at_kind_244(F->up, ((rt_int)1LL))) {
f_name_p_284(F->up, &F->x_924);
(*F->res_279) = F->x_924;
goto ret_;
}
f_perror_250(F->up, rt_str("expected an expression", 22));
(*F->res_279) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_282(struct f_greenc_1fr *up_, P163 *res_281) {
  struct f_agg_or_paren_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_281 = res_281;
F->line_926 = f_cur_line_238(F->up);
F->items_927 = NULL;
F->itail_928 = NULL;
F->it_929 = NULL;
F->first_930 = NULL;
F->keys_931 = NULL;
F->ktail_932 = NULL;
F->lab_933 = NULL;
F->x_934 = NULL;
F->more_935 = 1;
f_expect_op_255(F->up, rt_str("(", 1));
while (F->more_935) {
F->it_929 = f_nn_231(F->up, ((rt_int)13LL), F->line_926);
if (f_at_kw_240(F->up, rt_str("OTHERS", 6))) {
f_skip_251(F->up);
f_expect_op_255(F->up, rt_str("=>", 2));
F->lab_933 = f_nn_231(F->up, ((rt_int)61LL), F->line_926);
(*(P163)rt_nil_check(F->lab_933)).flag_ = ((rt_int)1LL);
(*(P163)rt_nil_check(F->it_929)).a_ = F->lab_933;
f_expr_268(F->up, &(*(P163)rt_nil_check(F->it_929)).b_);
} else {
f_expr_268(F->up, &F->first_930);
if (((f_at_op_242(F->up, rt_str("..", 2)) || f_at_op_242(F->up, rt_str("|", 1))) || f_at_op_242(F->up, rt_str("=>", 2)))) {
F->keys_931 = NULL;
F->ktail_932 = NULL;
for (;;) {
F->lab_933 = f_nn_231(F->up, ((rt_int)61LL), F->line_926);
(*(P163)rt_nil_check(F->lab_933)).a_ = F->first_930;
if (f_at_op_242(F->up, rt_str("..", 2))) {
f_skip_251(F->up);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->lab_933)).b_);
}
f_append_235(F->up, &F->keys_931, &F->ktail_932, F->lab_933);
if ((!f_at_op_242(F->up, rt_str("|", 1)))) {
goto L_end_937;
}
f_skip_251(F->up);
f_simple_expr_274(F->up, &F->first_930);
}
L_end_937: ;
f_expect_op_255(F->up, rt_str("=>", 2));
(*(P163)rt_nil_check(F->it_929)).a_ = F->keys_931;
f_expr_268(F->up, &(*(P163)rt_nil_check(F->it_929)).b_);
} else {
(*(P163)rt_nil_check(F->it_929)).b_ = F->first_930;
}
}
f_append_235(F->up, &F->items_927, &F->itail_928, F->it_929);
F->more_935 = f_at_op_242(F->up, rt_str(",", 1));
if (F->more_935) {
f_skip_251(F->up);
}
}
L_end_936: ;
f_expect_op_255(F->up, rt_str(")", 1));
if ((((*(P163)rt_nil_check(F->items_927)).next_ == NULL) && ((*(P163)rt_nil_check(F->items_927)).a_ == NULL))) {
F->x_934 = f_nn_231(F->up, ((rt_int)15LL), F->line_926);
(*(P163)rt_nil_check(F->x_934)).a_ = (*(P163)rt_nil_check(F->items_927)).b_;
(*F->res_281) = F->x_934;
goto ret_;
}
F->x_934 = f_nn_231(F->up, ((rt_int)12LL), F->line_926);
(*(P163)rt_nil_check(F->x_934)).a_ = F->items_927;
(*F->res_281) = F->x_934;
goto ret_;
ret_:

  return;
}

static void f_name_p_284(struct f_greenc_1fr *up_, P163 *res_283) {
  struct f_name_p_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_283 = res_283;
F->p_938 = NULL;
F->x_939 = NULL;
F->args_940 = NULL;
F->atail_941 = NULL;
F->lo_942 = NULL;
F->r_943 = NULL;
F->line_944 = f_cur_line_238(F->up);
f_name_node_259(F->up, &F->p_938);
for (;;) {
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
F->args_940 = NULL;
F->atail_941 = NULL;
if ((!f_at_op_242(F->up, rt_str(")", 1)))) {
F->more_945 = 1;
while (F->more_945) {
{
F->formal_949 = NULL;
F->mark_950 = ((rt_int)0LL);
if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) || rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("=>", 2))))) {
F->formal_949 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
if (rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(":=", 2))) {
F->mark_950 = ((rt_int)1LL);
} else if (rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("=:", 2))) {
F->mark_950 = ((rt_int)3LL);
} else if (rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) {
F->mark_950 = ((rt_int)2LL);
} else {
F->mark_950 = ((rt_int)4LL);
}
f_skip_251(F->up);
f_skip_251(F->up);
}
f_expr_268(F->up, &F->lo_942);
if (f_at_op_242(F->up, rt_str("..", 2))) {
f_skip_251(F->up);
F->r_943 = f_nn_231(F->up, ((rt_int)14LL), F->line_944);
(*(P163)rt_nil_check(F->r_943)).a_ = F->lo_942;
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->r_943)).b_);
F->lo_942 = F->r_943;
}
(*(P163)rt_nil_check(F->lo_942)).formal_ = F->formal_949;
(*(P163)rt_nil_check(F->lo_942)).flag_ = F->mark_950;
f_append_235(F->up, &F->args_940, &F->atail_941, F->lo_942);

}
L_end_948: ;
F->more_945 = f_at_op_242(F->up, rt_str(",", 1));
if (F->more_945) {
f_skip_251(F->up);
}
}
L_end_947: ;
}
f_expect_op_255(F->up, rt_str(")", 1));
F->x_939 = f_nn_231(F->up, ((rt_int)8LL), F->line_944);
(*(P163)rt_nil_check(F->x_939)).a_ = F->p_938;
(*(P163)rt_nil_check(F->x_939)).b_ = F->args_940;
F->p_938 = F->x_939;
} else if (f_at_op_242(F->up, rt_str(".", 1))) {
f_skip_251(F->up);
F->x_939 = f_nn_231(F->up, ((rt_int)9LL), F->line_944);
(*(P163)rt_nil_check(F->x_939)).a_ = F->p_938;
if (f_at_kw_240(F->up, rt_str("ALL", 3))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_939)).name_ = f_mk_185(F->up, rt_str("ALL", 3));
} else {
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_939)).name_);
}
F->p_938 = F->x_939;
} else if (f_at_op_242(F->up, rt_str("'", 1))) {
f_skip_251(F->up);
F->x_939 = f_nn_231(F->up, ((rt_int)10LL), F->line_944);
(*(P163)rt_nil_check(F->x_939)).a_ = F->p_938;
(*(P163)rt_nil_check(F->x_939)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_939)).b_);
f_expect_op_255(F->up, rt_str(")", 1));
}
F->p_938 = F->x_939;
} else {
(*F->res_283) = F->p_938;
goto ret_;
}
}
L_end_946: ;
ret_:

  return;
}

static void f_subtype_ind_286(struct f_greenc_1fr *up_, P163 *res_285) {
  struct f_subtype_ind_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_285 = res_285;
F->x_951 = NULL;
F->r_952 = NULL;
F->args_953 = NULL;
F->atail_954 = NULL;
F->lo_955 = NULL;
F->line_956 = f_cur_line_238(F->up);
F->more_957 = 1;
F->x_951 = f_nn_231(F->up, ((rt_int)80LL), F->line_956);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_951)).name_);
while (f_at_op_242(F->up, rt_str(".", 1))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_951)).tag_ = (*(P163)rt_nil_check(F->x_951)).name_;
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_951)).name_);
}
L_end_958: ;
if (f_at_kw_240(F->up, rt_str("RANGE", 5))) {
f_skip_251(F->up);
F->r_952 = f_nn_231(F->up, ((rt_int)14LL), F->line_956);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->r_952)).a_);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->r_952)).b_);
(*(P163)rt_nil_check(F->x_951)).a_ = F->r_952;
(*(P163)rt_nil_check(F->x_951)).flag_ = ((rt_int)1LL);
} else if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
while (F->more_957) {
f_expr_268(F->up, &F->lo_955);
if (f_at_op_242(F->up, rt_str("..", 2))) {
f_skip_251(F->up);
F->r_952 = f_nn_231(F->up, ((rt_int)14LL), F->line_956);
(*(P163)rt_nil_check(F->r_952)).a_ = F->lo_955;
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->r_952)).b_);
F->lo_955 = F->r_952;
}
f_append_235(F->up, &F->args_953, &F->atail_954, F->lo_955);
F->more_957 = f_at_op_242(F->up, rt_str(",", 1));
if (F->more_957) {
f_skip_251(F->up);
}
}
L_end_959: ;
f_expect_op_255(F->up, rt_str(")", 1));
(*(P163)rt_nil_check(F->x_951)).a_ = F->args_953;
(*(P163)rt_nil_check(F->x_951)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_240(F->up, rt_str("DIGITS", 6)) || f_at_kw_240(F->up, rt_str("DELTA", 5)))) {
f_skip_251(F->up);
f_simple_expr_274(F->up, &F->r_952);
if (f_at_kw_240(F->up, rt_str("RANGE", 5))) {
f_skip_251(F->up);
f_simple_expr_274(F->up, &F->r_952);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &F->r_952);
}
}
(*F->res_285) = F->x_951;
goto ret_;
ret_:

  return;
}

static void f_type_spec_288(struct f_greenc_1fr *up_, P163 *res_287) {
  struct f_type_spec_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_287 = res_287;
F->x_960 = NULL;
if (((((f_at_op_242(F->up, rt_str("(", 1)) || f_at_kw_240(F->up, rt_str("ARRAY", 5))) || f_at_kw_240(F->up, rt_str("RECORD", 6))) || f_at_kw_240(F->up, rt_str("ACCESS", 6))) || f_at_kw_240(F->up, rt_str("RANGE", 5)))) {
f_type_def_290(F->up, &F->x_960);
} else {
f_subtype_ind_286(F->up, &F->x_960);
}
(*F->res_287) = F->x_960;
goto ret_;
ret_:

  return;
}

static void f_type_def_290(struct f_greenc_1fr *up_, P163 *res_289) {
  struct f_type_def_290fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_289 = res_289;
F->x_961 = NULL;
F->lits_962 = NULL;
F->ltail_963 = NULL;
F->l_964 = NULL;
F->idx_965 = NULL;
F->itail_966 = NULL;
F->r_967 = NULL;
F->comps_968 = NULL;
F->ctail_969 = NULL;
F->names_970 = NULL;
F->st_971 = NULL;
F->def_972 = NULL;
F->cm_973 = NULL;
F->line_974 = f_cur_line_238(F->up);
F->more_975 = 1;
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
F->x_961 = f_nn_231(F->up, ((rt_int)70LL), F->line_974);
while (F->more_975) {
if (f_at_kind_244(F->up, ((rt_int)6LL))) {
F->l_964 = f_nn_231(F->up, ((rt_int)3LL), F->line_974);
(*(P163)rt_nil_check(F->l_964)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_251(F->up);
} else {
f_name_node_259(F->up, &F->l_964);
}
f_append_235(F->up, &F->lits_962, &F->ltail_963, F->l_964);
F->more_975 = f_at_op_242(F->up, rt_str(",", 1));
if (F->more_975) {
f_skip_251(F->up);
}
}
L_end_976: ;
f_expect_op_255(F->up, rt_str(")", 1));
(*(P163)rt_nil_check(F->x_961)).a_ = F->lits_962;
(*F->res_289) = F->x_961;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("RANGE", 5))) {
f_skip_251(F->up);
F->x_961 = f_nn_231(F->up, ((rt_int)71LL), F->line_974);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->x_961)).a_);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->x_961)).b_);
(*F->res_289) = F->x_961;
goto ret_;
}
if ((f_at_kw_240(F->up, rt_str("DIGITS", 6)) || f_at_kw_240(F->up, rt_str("DELTA", 5)))) {
f_skip_251(F->up);
F->x_961 = f_nn_231(F->up, ((rt_int)72LL), F->line_974);
f_simple_expr_274(F->up, &F->r_967);
if (f_at_kw_240(F->up, rt_str("RANGE", 5))) {
f_skip_251(F->up);
f_simple_expr_274(F->up, &F->r_967);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &F->r_967);
}
(*F->res_289) = F->x_961;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("ARRAY", 5))) {
f_skip_251(F->up);
F->x_961 = f_nn_231(F->up, ((rt_int)73LL), F->line_974);
f_expect_op_255(F->up, rt_str("(", 1));
while (F->more_975) {
if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(",", 1)) || rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(")", 1))))) {
F->l_964 = f_nn_231(F->up, ((rt_int)80LL), F->line_974);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->l_964)).name_);
(*(P163)rt_nil_check(F->x_961)).flag_ = ((rt_int)1LL);
} else {
F->l_964 = f_nn_231(F->up, ((rt_int)14LL), F->line_974);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->l_964)).a_);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->l_964)).b_);
}
f_append_235(F->up, &F->idx_965, &F->itail_966, F->l_964);
F->more_975 = f_at_op_242(F->up, rt_str(",", 1));
if (F->more_975) {
f_skip_251(F->up);
}
}
L_end_977: ;
f_expect_op_255(F->up, rt_str(")", 1));
f_expect_kw_253(F->up, rt_str("OF", 2));
(*(P163)rt_nil_check(F->x_961)).a_ = F->idx_965;
f_type_spec_288(F->up, &(*(P163)rt_nil_check(F->x_961)).b_);
(*F->res_289) = F->x_961;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("RECORD", 6))) {
f_skip_251(F->up);
F->x_961 = f_nn_231(F->up, ((rt_int)74LL), F->line_974);
while ((!f_at_kw_240(F->up, rt_str("END", 3)))) {
if (f_at_kw_240(F->up, rt_str("NULL", 4))) {
f_skip_251(F->up);
f_expect_op_255(F->up, rt_str(";", 1));
} else {
f_id_list_261(F->up, &F->names_970);
f_expect_op_255(F->up, rt_str(":", 1));
if (f_at_kw_240(F->up, rt_str("CONSTANT", 8))) {
f_skip_251(F->up);
}
f_type_spec_288(F->up, &F->st_971);
F->def_972 = NULL;
if (f_at_op_242(F->up, rt_str(":=", 2))) {
f_skip_251(F->up);
f_expr_268(F->up, &F->def_972);
}
f_expect_op_255(F->up, rt_str(";", 1));
while ((F->names_970 != NULL)) {
F->cm_973 = f_nn_231(F->up, ((rt_int)63LL), (*(P163)rt_nil_check(F->names_970)).line_);
(*(P163)rt_nil_check(F->cm_973)).name_ = (*(P163)rt_nil_check(F->names_970)).name_;
(*(P163)rt_nil_check(F->cm_973)).a_ = F->st_971;
(*(P163)rt_nil_check(F->cm_973)).b_ = F->def_972;
f_append_235(F->up, &F->comps_968, &F->ctail_969, F->cm_973);
F->names_970 = (*(P163)rt_nil_check(F->names_970)).next_;
}
L_end_979: ;
}
}
L_end_978: ;
f_expect_kw_253(F->up, rt_str("END", 3));
f_expect_kw_253(F->up, rt_str("RECORD", 6));
(*(P163)rt_nil_check(F->x_961)).a_ = F->comps_968;
(*F->res_289) = F->x_961;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("ACCESS", 6))) {
f_skip_251(F->up);
F->x_961 = f_nn_231(F->up, ((rt_int)75LL), F->line_974);
f_type_spec_288(F->up, &(*(P163)rt_nil_check(F->x_961)).a_);
(*F->res_289) = F->x_961;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("NEW", 3))) {
f_skip_251(F->up);
F->x_961 = f_nn_231(F->up, ((rt_int)76LL), F->line_974);
f_subtype_ind_286(F->up, &(*(P163)rt_nil_check(F->x_961)).a_);
(*F->res_289) = F->x_961;
goto ret_;
}
f_perror_250(F->up, rt_str("expected a type definition", 26));
(*F->res_289) = NULL;
goto ret_;
ret_:

  return;
}

static void f_skip_pragma_291(struct f_greenc_1fr *up_) {
  struct f_skip_pragma_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_op_242(F->up, rt_str(";", 1)))) {
f_skip_251(F->up);
}
L_end_980: ;
f_skip_251(F->up);
ret_:

  return;
}

static void f_skip_visibility_292(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_292fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_981 = NULL;
f_skip_251(F->up);
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
f_id_list_261(F->up, &F->names_981);
f_expect_op_255(F->up, rt_str(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_293(struct f_greenc_1fr *up_) {
  struct f_skip_representation_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_240(F->up, rt_str("USE", 3)))) {
f_skip_251(F->up);
}
L_end_982: ;
f_skip_251(F->up);
if (f_at_kw_240(F->up, rt_str("RECORD", 6))) {
while ((!((f_at_kw_240(F->up, rt_str("END", 3)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("RECORD", 6))))) {
f_skip_251(F->up);
}
L_end_983: ;
f_skip_251(F->up);
f_skip_251(F->up);
}
while ((!f_at_op_242(F->up, rt_str(";", 1)))) {
f_skip_251(F->up);
}
L_end_984: ;
f_skip_251(F->up);
ret_:

  return;
}

static void f_decl_part_295(struct f_greenc_1fr *up_, P163 *res_294) {
  struct f_decl_part_295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_294 = res_294;
F->head_985 = NULL;
F->tail_986 = NULL;
F->x_987 = NULL;
F->names_988 = NULL;
for (;;) {
if (f_at_kw_240(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_291(F->up);
} else if (f_at_kw_240(F->up, rt_str("USE", 3))) {
f_skip_251(F->up);
F->x_987 = f_nn_231(F->up, ((rt_int)55LL), f_cur_line_238(F->up));
f_id_list_261(F->up, &(*(P163)rt_nil_check(F->x_987)).a_);
f_expect_op_255(F->up, rt_str(";", 1));
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else if (f_at_kw_240(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_292(F->up);
} else if (f_at_kw_240(F->up, rt_str("FOR", 3))) {
f_skip_representation_293(F->up);
} else if ((f_at_kw_240(F->up, rt_str("TYPE", 4)) || f_at_kw_240(F->up, rt_str("SUBTYPE", 7)))) {
f_type_decl_299(F->up, &F->x_987);
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else if ((f_at_kw_240(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_240(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_305(F->up, &F->x_987);
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else if (f_at_kw_240(F->up, rt_str("PACKAGE", 7))) {
f_package_p_311(F->up, &F->x_987);
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else if (f_at_kw_240(F->up, rt_str("TASK", 4))) {
f_task_p_664(F->up, &F->x_987);
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else if (f_at_kw_240(F->up, rt_str("GENERIC", 7))) {
f_generic_p_794(F->up, &F->x_987);
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else if (f_at_kw_240(F->up, rt_str("ENTRY", 5))) {
f_entry_p_666(F->up, &F->x_987);
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(",", 1))))) {
f_object_decl_297(F->up, &F->x_987);
f_append_235(F->up, &F->head_985, &F->tail_986, F->x_987);
} else {
(*F->res_294) = F->head_985;
goto ret_;
}
}
L_end_989: ;
ret_:

  return;
}

static void f_object_decl_297(struct f_greenc_1fr *up_, P163 *res_296) {
  struct f_object_decl_297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_296 = res_296;
F->head_990 = NULL;
F->tail_991 = NULL;
F->names_992 = NULL;
F->st_993 = NULL;
F->init_994 = NULL;
F->x_995 = NULL;
F->line_996 = f_cur_line_238(F->up);
F->is_const_997 = 0;
f_id_list_261(F->up, &F->names_992);
f_expect_op_255(F->up, rt_str(":", 1));
if (f_at_kw_240(F->up, rt_str("EXCEPTION", 9))) {
f_skip_251(F->up);
if (f_at_kw_240(F->up, rt_str("RENAMES", 7))) {
f_skip_251(F->up);
F->x_995 = f_nn_231(F->up, ((rt_int)46LL), F->line_996);
(*(P163)rt_nil_check(F->x_995)).name_ = (*(P163)rt_nil_check(F->names_992)).name_;
f_name_p_284(F->up, &(*(P163)rt_nil_check(F->x_995)).a_);
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_296) = F->x_995;
goto ret_;
}
f_expect_op_255(F->up, rt_str(";", 1));
while ((F->names_992 != NULL)) {
F->x_995 = f_nn_231(F->up, ((rt_int)46LL), F->line_996);
(*(P163)rt_nil_check(F->x_995)).name_ = (*(P163)rt_nil_check(F->names_992)).name_;
f_append_235(F->up, &F->head_990, &F->tail_991, F->x_995);
F->names_992 = (*(P163)rt_nil_check(F->names_992)).next_;
}
L_end_998: ;
(*F->res_296) = F->head_990;
goto ret_;
}
if (f_at_kw_240(F->up, rt_str("CONSTANT", 8))) {
f_skip_251(F->up);
F->is_const_997 = 1;
}
f_type_spec_288(F->up, &F->st_993);
if ((f_at_kw_240(F->up, rt_str("RENAMES", 7)) && (!F->is_const_997))) {
f_skip_251(F->up);
F->x_995 = f_nn_231(F->up, ((rt_int)40LL), F->line_996);
(*(P163)rt_nil_check(F->x_995)).name_ = (*(P163)rt_nil_check(F->names_992)).name_;
(*(P163)rt_nil_check(F->x_995)).a_ = F->st_993;
(*(P163)rt_nil_check(F->x_995)).flag_ = ((rt_int)2LL);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_995)).b_);
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_296) = F->x_995;
goto ret_;
}
if (f_at_op_242(F->up, rt_str(":=", 2))) {
f_skip_251(F->up);
f_expr_268(F->up, &F->init_994);
}
f_expect_op_255(F->up, rt_str(";", 1));
while ((F->names_992 != NULL)) {
if (F->is_const_997) {
F->x_995 = f_nn_231(F->up, ((rt_int)41LL), F->line_996);
} else {
F->x_995 = f_nn_231(F->up, ((rt_int)40LL), F->line_996);
}
(*(P163)rt_nil_check(F->x_995)).name_ = (*(P163)rt_nil_check(F->names_992)).name_;
(*(P163)rt_nil_check(F->x_995)).a_ = F->st_993;
(*(P163)rt_nil_check(F->x_995)).b_ = F->init_994;
if ((!(F->is_const_997 && (F->init_994 == NULL)))) {
f_append_235(F->up, &F->head_990, &F->tail_991, F->x_995);
}
F->names_992 = (*(P163)rt_nil_check(F->names_992)).next_;
}
L_end_999: ;
(*F->res_296) = F->head_990;
goto ret_;
ret_:

  return;
}

static void f_type_decl_299(struct f_greenc_1fr *up_, P163 *res_298) {
  struct f_type_decl_299fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_298 = res_298;
F->x_1000 = NULL;
F->line_1001 = f_cur_line_238(F->up);
if (f_at_kw_240(F->up, rt_str("SUBTYPE", 7))) {
f_skip_251(F->up);
F->x_1000 = f_nn_231(F->up, ((rt_int)43LL), F->line_1001);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1000)).name_);
f_expect_kw_253(F->up, rt_str("IS", 2));
f_subtype_ind_286(F->up, &(*(P163)rt_nil_check(F->x_1000)).a_);
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_298) = F->x_1000;
goto ret_;
}
f_expect_kw_253(F->up, rt_str("TYPE", 4));
F->x_1000 = f_nn_231(F->up, ((rt_int)42LL), F->line_1001);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1000)).name_);
if (f_at_op_242(F->up, rt_str(";", 1))) {
f_skip_251(F->up);
(*F->res_298) = NULL;
goto ret_;
}
f_expect_kw_253(F->up, rt_str("IS", 2));
if (f_at_kw_240(F->up, rt_str("PRIVATE", 7))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1000)).a_ = f_nn_231(F->up, ((rt_int)77LL), F->line_1001);
} else {
f_type_def_290(F->up, &(*(P163)rt_nil_check(F->x_1000)).a_);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_298) = F->x_1000;
goto ret_;
ret_:

  return;
}

static void f_formal_part_301(struct f_greenc_1fr *up_, P163 *res_300) {
  struct f_formal_part_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_300 = res_300;
F->head_1002 = NULL;
F->tail_1003 = NULL;
F->names_1004 = NULL;
F->st_1005 = NULL;
F->def_1006 = NULL;
F->p_1007 = NULL;
F->more_1009 = 1;
f_expect_op_255(F->up, rt_str("(", 1));
while (F->more_1009) {
f_id_list_261(F->up, &F->names_1004);
f_expect_op_255(F->up, rt_str(":", 1));
F->mode_1008 = ((rt_int)1LL);
if (f_at_kw_240(F->up, rt_str("IN", 2))) {
f_skip_251(F->up);
if (f_at_kw_240(F->up, rt_str("OUT", 3))) {
f_skip_251(F->up);
F->mode_1008 = ((rt_int)2LL);
}
} else if (f_at_kw_240(F->up, rt_str("OUT", 3))) {
f_skip_251(F->up);
F->mode_1008 = ((rt_int)3LL);
}
f_subtype_ind_286(F->up, &F->st_1005);
F->def_1006 = NULL;
if (f_at_op_242(F->up, rt_str(":=", 2))) {
f_skip_251(F->up);
f_expr_268(F->up, &F->def_1006);
}
while ((F->names_1004 != NULL)) {
F->p_1007 = f_nn_231(F->up, ((rt_int)47LL), (*(P163)rt_nil_check(F->names_1004)).line_);
(*(P163)rt_nil_check(F->p_1007)).name_ = (*(P163)rt_nil_check(F->names_1004)).name_;
(*(P163)rt_nil_check(F->p_1007)).ival_ = F->mode_1008;
(*(P163)rt_nil_check(F->p_1007)).a_ = F->st_1005;
(*(P163)rt_nil_check(F->p_1007)).b_ = F->def_1006;
f_append_235(F->up, &F->head_1002, &F->tail_1003, F->p_1007);
F->names_1004 = (*(P163)rt_nil_check(F->names_1004)).next_;
}
L_end_1011: ;
F->more_1009 = f_at_op_242(F->up, rt_str(";", 1));
if (F->more_1009) {
f_skip_251(F->up);
}
}
L_end_1010: ;
f_expect_op_255(F->up, rt_str(")", 1));
(*F->res_300) = F->head_1002;
goto ret_;
ret_:

  return;
}

static void f_designator_303(struct f_greenc_1fr *up_, P133 *res_302) {
  struct f_designator_303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_302 = res_302;
if (f_at_kind_244(F->up, ((rt_int)6LL))) {
f_skip_251(F->up);
(*F->res_302) = f_mk_185(F->up, f_upper_s_198(F->up, (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_sub(F->up->tpos_107, ((rt_int)1LL)), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))));
if (rt_str_eq((*(P133)rt_nil_check((*F->res_302))), rt_str("/=", 2))) {
f_perror_250(F->up, rt_str("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_200(F->up, (*(P133)rt_nil_check((*F->res_302)))))) {
f_perror_250(F->up, rt_str_cat((*(P133)rt_nil_check((*F->res_302))), rt_str(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_257(F->up, &(*F->res_302));
goto ret_;
ret_:

  return;
}

static void f_subprogram_305(struct f_greenc_1fr *up_, P163 *res_304) {
  struct f_subprogram_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_304 = res_304;
F->x_1012 = NULL;
F->line_1013 = f_cur_line_238(F->up);
F->is_proc_1014 = f_at_kw_240(F->up, rt_str("PROCEDURE", 9));
f_skip_251(F->up);
if (F->is_proc_1014) {
F->x_1012 = f_nn_231(F->up, ((rt_int)44LL), F->line_1013);
} else {
F->x_1012 = f_nn_231(F->up, ((rt_int)45LL), F->line_1013);
}
f_designator_303(F->up, &(*(P163)rt_nil_check(F->x_1012)).name_);
if (((f_at_kw_240(F->up, rt_str("IS", 2)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_797(F->up, F->x_1012, &(*F->res_304));
goto ret_;
}
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_formal_part_301(F->up, &(*(P163)rt_nil_check(F->x_1012)).a_);
}
if (f_at_kw_240(F->up, rt_str("RETURN", 6))) {
f_skip_251(F->up);
f_subtype_ind_286(F->up, &(*(P163)rt_nil_check(F->x_1012)).b_);
if (F->is_proc_1014) {
(*(P163)rt_nil_check(F->x_1012)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_1014)) {
f_perror_250(F->up, rt_str("a function needs a RETURN clause", 32));
}
if (f_at_op_242(F->up, rt_str(";", 1))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1012)).ival_ = ((rt_int)1LL);
(*F->res_304) = F->x_1012;
goto ret_;
}
f_expect_kw_253(F->up, rt_str("IS", 2));
if (f_at_kw_240(F->up, rt_str("SEPARATE", 8))) {
f_perror_250(F->up, rt_str("separate bodies are not handled", 31));
}
f_body_part_307(F->up, F->x_1012);
if ((f_at_kind_244(F->up, ((rt_int)1LL)) || f_at_kind_244(F->up, ((rt_int)6LL)))) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->x_1012)).name_))))) {
f_perror_250(F->up, rt_str_cat(rt_str("the name after END does not match ", 34), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->x_1012)).name_))));
}
f_skip_251(F->up);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_304) = F->x_1012;
goto ret_;
ret_:

  return;
}

static void f_body_part_307(struct f_greenc_1fr *up_, P163 x_306) {
  struct f_body_part_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_306 = x_306;
f_decl_part_295(F->up, &(*(P163)rt_nil_check(F->x_306)).c_);
if (f_at_kw_240(F->up, rt_str("BEGIN", 5))) {
f_skip_251(F->up);
F->up->saw_interface_167 = 0;
f_statements_314(F->up, &(*(P163)rt_nil_check(F->x_306)).d_);
if ((F->up->saw_interface_167 && ((*(P163)rt_nil_check(F->x_306)).d_ == NULL))) {
(*(P163)rt_nil_check(F->x_306)).tag_ = f_mk_185(F->up, rt_str("INTERFACE", 9));
}
F->up->saw_interface_167 = 0;
}
if (f_at_kw_240(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_309(F->up, &(*(P163)rt_nil_check(F->x_306)).e_);
}
f_expect_kw_253(F->up, rt_str("END", 3));
ret_:

  return;
}

static void f_parse_handlers_309(struct f_greenc_1fr *up_, P163 *res_308) {
  struct f_parse_handlers_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_308 = res_308;
F->head_1015 = NULL;
F->tail_1016 = NULL;
F->h_1017 = NULL;
F->names_1018 = NULL;
F->ntail_1019 = NULL;
F->n_1020 = NULL;
f_expect_kw_253(F->up, rt_str("EXCEPTION", 9));
while (f_at_kw_240(F->up, rt_str("WHEN", 4))) {
f_skip_251(F->up);
F->h_1017 = f_nn_231(F->up, ((rt_int)62LL), f_cur_line_238(F->up));
F->names_1018 = NULL;
F->ntail_1019 = NULL;
for (;;) {
if (f_at_kw_240(F->up, rt_str("OTHERS", 6))) {
f_skip_251(F->up);
F->n_1020 = f_nn_231(F->up, ((rt_int)5LL), f_cur_line_238(F->up));
(*(P163)rt_nil_check(F->n_1020)).name_ = f_mk_185(F->up, rt_str("OTHERS", 6));
} else {
f_name_node_259(F->up, &F->n_1020);
while (f_at_op_242(F->up, rt_str(".", 1))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->n_1020)).tag_ = (*(P163)rt_nil_check(F->n_1020)).name_;
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->n_1020)).name_);
}
L_end_1023: ;
}
f_append_235(F->up, &F->names_1018, &F->ntail_1019, F->n_1020);
if ((!f_at_op_242(F->up, rt_str("|", 1)))) {
goto L_end_1022;
}
f_skip_251(F->up);
}
L_end_1022: ;
f_expect_op_255(F->up, rt_str("=>", 2));
(*(P163)rt_nil_check(F->h_1017)).a_ = F->names_1018;
f_statements_314(F->up, &(*(P163)rt_nil_check(F->h_1017)).b_);
f_append_235(F->up, &F->head_1015, &F->tail_1016, F->h_1017);
}
L_end_1021: ;
(*F->res_308) = F->head_1015;
goto ret_;
ret_:

  return;
}

static void f_package_p_311(struct f_greenc_1fr *up_, P163 *res_310) {
  struct f_package_p_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_310 = res_310;
F->x_1024 = NULL;
F->line_1025 = f_cur_line_238(F->up);
f_expect_kw_253(F->up, rt_str("PACKAGE", 7));
if (f_at_kw_240(F->up, rt_str("BODY", 4))) {
f_skip_251(F->up);
F->x_1024 = f_nn_231(F->up, ((rt_int)49LL), F->line_1025);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1024)).name_);
f_expect_kw_253(F->up, rt_str("IS", 2));
f_body_part_307(F->up, F->x_1024);
} else {
F->x_1024 = f_nn_231(F->up, ((rt_int)48LL), F->line_1025);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1024)).name_);
if (((f_at_kw_240(F->up, rt_str("IS", 2)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_797(F->up, F->x_1024, &(*F->res_310));
goto ret_;
}
f_expect_kw_253(F->up, rt_str("IS", 2));
f_decl_part_295(F->up, &(*(P163)rt_nil_check(F->x_1024)).c_);
if (f_at_kw_240(F->up, rt_str("PRIVATE", 7))) {
f_skip_251(F->up);
f_decl_part_295(F->up, &(*(P163)rt_nil_check(F->x_1024)).d_);
}
f_expect_kw_253(F->up, rt_str("END", 3));
}
if (f_at_kind_244(F->up, ((rt_int)1LL))) {
f_skip_251(F->up);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_310) = F->x_1024;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_312(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_312fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_240(F->up, rt_str("END", 3)) || f_at_kw_240(F->up, rt_str("ELSE", 4))) || f_at_kw_240(F->up, rt_str("ELSIF", 5))) || f_at_kw_240(F->up, rt_str("WHEN", 4))) || f_at_kw_240(F->up, rt_str("EXCEPTION", 9))) || f_at_kw_240(F->up, rt_str("OR", 2))) || f_at_kind_244(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_314(struct f_greenc_1fr *up_, P163 *res_313) {
  struct f_statements_314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_313 = res_313;
F->head_1026 = NULL;
F->tail_1027 = NULL;
F->x_1028 = NULL;
while ((!f_at_statements_end_312(F->up))) {
if (f_at_kw_240(F->up, rt_str("PRAGMA", 6))) {
if (((f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("INTERFACE", 9)))) {
F->up->saw_interface_167 = 1;
}
f_skip_pragma_291(F->up);
} else {
f_statement_316(F->up, &F->x_1028);
f_append_235(F->up, &F->head_1026, &F->tail_1027, F->x_1028);
}
}
L_end_1029: ;
(*F->res_313) = F->head_1026;
goto ret_;
ret_:

  return;
}

static void f_statement_316(struct f_greenc_1fr *up_, P163 *res_315) {
  struct f_statement_316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_315 = res_315;
F->x_1030 = NULL;
F->t_1031 = NULL;
F->line_1032 = f_cur_line_238(F->up);
F->label_1033 = NULL;
if (f_at_op_242(F->up, rt_str("<<", 2))) {
f_skip_251(F->up);
f_expect_id_257(F->up, &F->label_1033);
f_expect_op_255(F->up, rt_str(">>", 2));
}
if (f_at_kw_240(F->up, rt_str("NULL", 4))) {
f_skip_251(F->up);
f_expect_op_255(F->up, rt_str(";", 1));
F->x_1030 = f_nn_231(F->up, ((rt_int)31LL), F->line_1032);
(*F->res_315) = F->x_1030;
goto ret_;
} else if (f_at_kw_240(F->up, rt_str("IF", 2))) {
f_if_stmt_320(F->up, &F->x_1030);
(*F->res_315) = F->x_1030;
goto ret_;
} else if (f_at_kw_240(F->up, rt_str("CASE", 4))) {
f_case_stmt_322(F->up, &F->x_1030);
(*F->res_315) = F->x_1030;
goto ret_;
} else if (((f_at_kw_240(F->up, rt_str("FOR", 3)) || f_at_kw_240(F->up, rt_str("WHILE", 5))) || f_at_kw_240(F->up, rt_str("LOOP", 4)))) {
f_loop_stmt_324(F->up, &F->x_1030);
(*(P163)rt_nil_check(F->x_1030)).tag_ = F->label_1033;
if (f_at_kind_244(F->up, ((rt_int)1LL))) {
if (((F->label_1033 == NULL) || (!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check(F->label_1033)))))) {
f_perror_250(F->up, rt_str("the name after END LOOP does not match the label", 48));
}
f_skip_251(F->up);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_315) = F->x_1030;
goto ret_;
} else if ((f_at_kw_240(F->up, rt_str("DECLARE", 7)) || f_at_kw_240(F->up, rt_str("BEGIN", 5)))) {
F->x_1030 = f_nn_231(F->up, ((rt_int)25LL), F->line_1032);
(*(P163)rt_nil_check(F->x_1030)).tag_ = F->label_1033;
if (f_at_kw_240(F->up, rt_str("DECLARE", 7))) {
f_skip_251(F->up);
f_decl_part_295(F->up, &(*(P163)rt_nil_check(F->x_1030)).a_);
}
f_expect_kw_253(F->up, rt_str("BEGIN", 5));
f_statements_314(F->up, &(*(P163)rt_nil_check(F->x_1030)).b_);
if (f_at_kw_240(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_309(F->up, &(*(P163)rt_nil_check(F->x_1030)).c_);
}
f_expect_kw_253(F->up, rt_str("END", 3));
if (f_at_kind_244(F->up, ((rt_int)1LL))) {
f_skip_251(F->up);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_315) = F->x_1030;
goto ret_;
} else if (f_at_kw_240(F->up, rt_str("EXIT", 4))) {
f_skip_251(F->up);
F->x_1030 = f_nn_231(F->up, ((rt_int)26LL), F->line_1032);
if (f_at_kind_244(F->up, ((rt_int)1LL))) {
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1030)).name_);
}
if (f_at_kw_240(F->up, rt_str("WHEN", 4))) {
f_skip_251(F->up);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1030)).a_);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_315) = F->x_1030;
goto ret_;
} else if (f_at_kw_240(F->up, rt_str("RETURN", 6))) {
f_skip_251(F->up);
F->x_1030 = f_nn_231(F->up, ((rt_int)27LL), F->line_1032);
if ((!f_at_op_242(F->up, rt_str(";", 1)))) {
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1030)).a_);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_315) = F->x_1030;
goto ret_;
} else if (f_at_kw_240(F->up, rt_str("RAISE", 5))) {
f_skip_251(F->up);
if (f_at_op_242(F->up, rt_str(";", 1))) {
f_skip_251(F->up);
F->x_1030 = f_nn_231(F->up, ((rt_int)29LL), F->line_1032);
(*F->res_315) = F->x_1030;
goto ret_;
}
F->x_1030 = f_nn_231(F->up, ((rt_int)28LL), F->line_1032);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1030)).name_);
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1030)).a_);
f_expect_op_255(F->up, rt_str(")", 1));
}
while (f_at_op_242(F->up, rt_str(".", 1))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1030)).tag_ = (*(P163)rt_nil_check(F->x_1030)).name_;
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1030)).name_);
}
L_end_1034: ;
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_315) = F->x_1030;
goto ret_;
} else if (f_at_kw_240(F->up, rt_str("ASSERT", 6))) {
f_skip_251(F->up);
F->x_1030 = f_nn_231(F->up, ((rt_int)30LL), F->line_1032);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1030)).a_);
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_315) = F->x_1030;
goto ret_;
} else if (f_at_kw_240(F->up, rt_str("GOTO", 4))) {
f_perror_250(F->up, rt_str("goto is not handled", 19));
}
f_task_statement_318(F->up, &F->x_1030);
if ((F->x_1030 != NULL)) {
(*F->res_315) = F->x_1030;
goto ret_;
}
f_name_p_284(F->up, &F->t_1031);
if (f_at_op_242(F->up, rt_str(":=", 2))) {
f_skip_251(F->up);
F->x_1030 = f_nn_231(F->up, ((rt_int)20LL), F->line_1032);
(*(P163)rt_nil_check(F->x_1030)).a_ = F->t_1031;
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1030)).b_);
} else {
F->x_1030 = f_nn_231(F->up, ((rt_int)21LL), F->line_1032);
(*(P163)rt_nil_check(F->x_1030)).a_ = F->t_1031;
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_315) = F->x_1030;
goto ret_;
ret_:

  return;
}

static void f_task_statement_318(struct f_greenc_1fr *up_, P163 *res_317) {
  struct f_task_statement_318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_317 = res_317;
f_parse_task_statement_674(F->up, &(*F->res_317));
ret_:

  return;
}

static void f_if_stmt_320(struct f_greenc_1fr *up_, P163 *res_319) {
  struct f_if_stmt_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_319 = res_319;
F->x_1035 = NULL;
F->arm_1036 = NULL;
F->head_1037 = NULL;
F->tail_1038 = NULL;
F->go_1039 = 1;
F->x_1035 = f_nn_231(F->up, ((rt_int)22LL), f_cur_line_238(F->up));
f_skip_251(F->up);
F->arm_1036 = f_nn_231(F->up, ((rt_int)60LL), f_cur_line_238(F->up));
f_expr_268(F->up, &(*(P163)rt_nil_check(F->arm_1036)).a_);
f_expect_kw_253(F->up, rt_str("THEN", 4));
f_statements_314(F->up, &(*(P163)rt_nil_check(F->arm_1036)).b_);
f_append_235(F->up, &F->head_1037, &F->tail_1038, F->arm_1036);
while (F->go_1039) {
if (f_at_kw_240(F->up, rt_str("ELSIF", 5))) {
f_skip_251(F->up);
F->arm_1036 = f_nn_231(F->up, ((rt_int)60LL), f_cur_line_238(F->up));
f_expr_268(F->up, &(*(P163)rt_nil_check(F->arm_1036)).a_);
f_expect_kw_253(F->up, rt_str("THEN", 4));
f_statements_314(F->up, &(*(P163)rt_nil_check(F->arm_1036)).b_);
f_append_235(F->up, &F->head_1037, &F->tail_1038, F->arm_1036);
} else if (f_at_kw_240(F->up, rt_str("ELSE", 4))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1035)).flag_ = ((rt_int)1LL);
f_statements_314(F->up, &(*(P163)rt_nil_check(F->x_1035)).b_);
} else {
F->go_1039 = 0;
}
}
L_end_1040: ;
f_expect_kw_253(F->up, rt_str("END", 3));
f_expect_kw_253(F->up, rt_str("IF", 2));
f_expect_op_255(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->x_1035)).a_ = F->head_1037;
(*F->res_319) = F->x_1035;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_322(struct f_greenc_1fr *up_, P163 *res_321) {
  struct f_case_stmt_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_321 = res_321;
F->x_1041 = NULL;
F->arm_1042 = NULL;
F->head_1043 = NULL;
F->tail_1044 = NULL;
F->labs_1045 = NULL;
F->ltail_1046 = NULL;
F->l_1047 = NULL;
F->x_1041 = f_nn_231(F->up, ((rt_int)23LL), f_cur_line_238(F->up));
f_skip_251(F->up);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1041)).a_);
f_expect_kw_253(F->up, rt_str("OF", 2));
while (f_at_kw_240(F->up, rt_str("WHEN", 4))) {
f_skip_251(F->up);
F->labs_1045 = NULL;
F->ltail_1046 = NULL;
F->others_arm_1048 = 0;
for (;;) {
if (f_at_kw_240(F->up, rt_str("OTHERS", 6))) {
f_skip_251(F->up);
F->others_arm_1048 = 1;
} else {
F->l_1047 = f_nn_231(F->up, ((rt_int)61LL), f_cur_line_238(F->up));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->l_1047)).a_);
if (f_at_op_242(F->up, rt_str("..", 2))) {
f_skip_251(F->up);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->l_1047)).b_);
}
f_append_235(F->up, &F->labs_1045, &F->ltail_1046, F->l_1047);
}
if ((!f_at_op_242(F->up, rt_str("|", 1)))) {
goto L_end_1050;
}
f_skip_251(F->up);
}
L_end_1050: ;
f_expect_op_255(F->up, rt_str("=>", 2));
if (F->others_arm_1048) {
(*(P163)rt_nil_check(F->x_1041)).flag_ = ((rt_int)1LL);
f_statements_314(F->up, &(*(P163)rt_nil_check(F->x_1041)).c_);
} else {
F->arm_1042 = f_nn_231(F->up, ((rt_int)60LL), f_cur_line_238(F->up));
(*(P163)rt_nil_check(F->arm_1042)).a_ = F->labs_1045;
f_statements_314(F->up, &(*(P163)rt_nil_check(F->arm_1042)).b_);
f_append_235(F->up, &F->head_1043, &F->tail_1044, F->arm_1042);
}
}
L_end_1049: ;
f_expect_kw_253(F->up, rt_str("END", 3));
f_expect_kw_253(F->up, rt_str("CASE", 4));
f_expect_op_255(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->x_1041)).b_ = F->head_1043;
(*F->res_321) = F->x_1041;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_324(struct f_greenc_1fr *up_, P163 *res_323) {
  struct f_loop_stmt_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_323 = res_323;
F->x_1051 = NULL;
F->r_1052 = NULL;
F->line_1053 = f_cur_line_238(F->up);
F->x_1051 = f_nn_231(F->up, ((rt_int)24LL), F->line_1053);
if (f_at_kw_240(F->up, rt_str("FOR", 3))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1051)).flag_ = ((rt_int)2LL);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1051)).name_);
f_expect_kw_253(F->up, rt_str("IN", 2));
if (f_at_kw_240(F->up, rt_str("REVERSE", 7))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1051)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("LOOP", 4)))) {
f_subtype_ind_286(F->up, &(*(P163)rt_nil_check(F->x_1051)).a_);
} else {
F->r_1052 = f_nn_231(F->up, ((rt_int)14LL), F->line_1053);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->r_1052)).a_);
if (f_at_op_242(F->up, rt_str("..", 2))) {
f_skip_251(F->up);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->r_1052)).b_);
(*(P163)rt_nil_check(F->x_1051)).a_ = F->r_1052;
} else {
(*(P163)rt_nil_check(F->x_1051)).a_ = (*(P163)rt_nil_check(F->r_1052)).a_;
}
}
} else if (f_at_kw_240(F->up, rt_str("WHILE", 5))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1051)).flag_ = ((rt_int)1LL);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1051)).a_);
}
f_expect_kw_253(F->up, rt_str("LOOP", 4));
f_statements_314(F->up, &(*(P163)rt_nil_check(F->x_1051)).b_);
f_expect_kw_253(F->up, rt_str("END", 3));
f_expect_kw_253(F->up, rt_str("LOOP", 4));
(*F->res_323) = F->x_1051;
goto ret_;
ret_:

  return;
}

static void f_compilation_326(struct f_greenc_1fr *up_, P163 *res_325) {
  struct f_compilation_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_325 = res_325;
F->head_1054 = NULL;
F->tail_1055 = NULL;
F->x_1056 = NULL;
while ((!f_at_kind_244(F->up, ((rt_int)0LL)))) {
if (f_at_kw_240(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_291(F->up);
} else {
if (f_at_kw_240(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_292(F->up);
}
if ((f_at_kw_240(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_240(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_305(F->up, &F->x_1056);
} else if (f_at_kw_240(F->up, rt_str("PACKAGE", 7))) {
f_package_p_311(F->up, &F->x_1056);
} else if (f_at_kw_240(F->up, rt_str("TASK", 4))) {
f_task_p_664(F->up, &F->x_1056);
} else if (f_at_kw_240(F->up, rt_str("GENERIC", 7))) {
f_generic_p_794(F->up, &F->x_1056);
} else {
f_perror_250(F->up, rt_str("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_235(F->up, &F->head_1054, &F->tail_1055, F->x_1056);
}
}
L_end_1057: ;
(*F->res_325) = F->head_1054;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_328(struct f_greenc_1fr *up_, rstr s_327) {
  struct f_hash_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_327 = rt_str_copy(s_327);
F->h_1058 = ((rt_int)0LL);
{ rt_int lo1061 = ((rt_int)1LL), hi1062 = (F->s_327).len;
for (rt_int it1063 = lo1061; it1063 <= hi1062; it1063++) {
F->i_1060 = it1063;
F->h_1058 = rt_rem(rt_add(rt_mul(F->h_1058, ((rt_int)31LL)), ((rt_int)(rt_str_get(F->s_327, F->i_1060)) + 1)), ((rt_int)4093LL));
}
}
L_end_1059: ;
F->result_ = F->h_1058;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_330(struct f_greenc_1fr *up_, rstr name_329) {
  struct f_lookup_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_329 = rt_str_copy(name_329);
F->y_1064 = NULL;
F->y_1064 = F->up->table_112.p[rt_index(f_hash_328(F->up, F->name_329), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1064 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1064)).name_)), F->name_329)) {
F->result_ = F->y_1064;
goto ret_;
}
F->y_1064 = (*(P110)rt_nil_check(F->y_1064)).chain_;
}
L_end_1065: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_333(struct f_greenc_1fr *up_, P110 a_331, P110 b_332) {
  struct f_same_task_333fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_331 = a_331;
F->b_332 = b_332;
if ((F->a_331 == F->b_332)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_331 == NULL) || (F->b_332 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->a_331)).cname_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_332)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_entry_336(struct f_greenc_1fr *up_, rstr name_334, P110 owner_335) {
  struct f_lookup_entry_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_334 = rt_str_copy(name_334);
F->owner_335 = owner_335;
F->y_1066 = NULL;
F->y_1066 = F->up->table_112.p[rt_index(f_hash_328(F->up, F->name_334), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1066 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1066)).name_)), F->name_334) && ((*(P110)rt_nil_check(F->y_1066)).kind_ == ((rt_int)10LL))) && f_same_task_333(F->up, (*(P110)rt_nil_check(F->y_1066)).members_, F->owner_335))) {
F->result_ = F->y_1066;
goto ret_;
}
F->y_1066 = (*(P110)rt_nil_check(F->y_1066)).chain_;
}
L_end_1067: ;
F->result_ = f_lookup_330(F->up, F->name_334);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_decl_338(struct f_greenc_1fr *up_, P163 d_337) {
  struct f_lookup_decl_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_337 = d_337;
F->y_1068 = NULL;
F->y_1068 = F->up->table_112.p[rt_index(f_hash_328(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_337)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1068 != NULL)) {
if (((*(P110)rt_nil_check(F->y_1068)).decl_ == F->d_337)) {
F->result_ = F->y_1068;
goto ret_;
}
F->y_1068 = (*(P110)rt_nil_check(F->y_1068)).chain_;
}
L_end_1069: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_340(struct f_greenc_1fr *up_, P110 y_339) {
  struct f_overloadable_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_339 = y_339;
F->result_ = (((((*(P110)rt_nil_check(F->y_339)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_339)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_339)).kind_ == ((rt_int)7LL))) || ((*(P110)rt_nil_check(F->y_339)).kind_ == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_343(struct f_greenc_1fr *up_, P115 a_341, P115 b_342) {
  struct f_same_343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_341 = a_341;
F->b_342 = b_342;
if ((F->a_341 == F->b_342)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_341 == NULL) || (F->b_342 == NULL)) || ((*(P115)rt_nil_check(F->a_341)).kind_ != (*(P115)rt_nil_check(F->b_342)).kind_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((((((*(P115)rt_nil_check(F->a_341)).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check(F->a_341)).kind_ == ((rt_int)2LL))) || ((*(P115)rt_nil_check(F->a_341)).kind_ == ((rt_int)3LL))) || ((*(P115)rt_nil_check(F->a_341)).kind_ == ((rt_int)11LL))) || ((*(P115)rt_nil_check(F->a_341)).kind_ == ((rt_int)5LL))) || ((*(P115)rt_nil_check(F->a_341)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_346(struct f_greenc_1fr *up_, P1070 a_344, P1070 b_345) {
  struct f_same_signature_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_344 = a_344;
F->b_345 = b_345;
F->x_1072 = NULL;
F->x_1072 = F->a_344;
F->y_1073 = NULL;
F->y_1073 = F->b_345;
while (((F->x_1072 != NULL) && (F->y_1073 != NULL))) {
if (((!f_same_343(F->up, (*(P1070)rt_nil_check(F->x_1072)).t_, (*(P1070)rt_nil_check(F->y_1073)).t_)) || ((*(P1070)rt_nil_check(F->x_1072)).mode_ != (*(P1070)rt_nil_check(F->y_1073)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1072 = (*(P1070)rt_nil_check(F->x_1072)).next_;
F->y_1073 = (*(P1070)rt_nil_check(F->y_1073)).next_;
}
L_end_1074: ;
F->result_ = ((F->x_1072 == NULL) && (F->y_1073 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_349(struct f_greenc_1fr *up_, P110 y_347, rt_int line_348) {
  struct f_define_349fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_347 = y_347;
F->line_348 = line_348;
F->h_1075 = f_hash_328(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_347)).name_)));
F->z_1076 = NULL;
F->z_1076 = F->up->table_112.p[rt_index(F->h_1075, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1076 != NULL)) {
if (((((*(P110)rt_nil_check(F->z_1076)).depth_ == F->up->depth_113) && rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1076)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_347)).name_)))) && (!((f_overloadable_340(F->up, F->y_347) && f_overloadable_340(F->up, F->z_1076)) && ((((*(P110)rt_nil_check(F->y_347)).kind_ != (*(P110)rt_nil_check(F->z_1076)).kind_) || (!f_same_signature_346(F->up, (*(P110)rt_nil_check(F->y_347)).params_, (*(P110)rt_nil_check(F->z_1076)).params_))) || (!f_same_343(F->up, (*(P110)rt_nil_check(F->y_347)).result_, (*(P110)rt_nil_check(F->z_1076)).result_))))))) {
f_fail_206(F->up, F->line_348, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_347)).name_)), rt_str(" is already declared in this declarative part", 45)));
}
F->z_1076 = (*(P110)rt_nil_check(F->z_1076)).chain_;
}
L_end_1077: ;
(*(P110)rt_nil_check(F->y_347)).depth_ = F->up->depth_113;
(*(P110)rt_nil_check(F->y_347)).chain_ = F->up->table_112.p[rt_index(F->h_1075, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->up->table_112.p[rt_index(F->h_1075, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = F->y_347;
(*(P110)rt_nil_check(F->y_347)).stack_ = F->up->scope_stack_114;
F->up->scope_stack_114 = F->y_347;
ret_:

  return;
}

static void f_open_scope_350(struct f_greenc_1fr *up_) {
  struct f_open_scope_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_113 = rt_add(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_351(struct f_greenc_1fr *up_) {
  struct f_close_scope_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_114 != NULL) && ((*(P110)rt_nil_check(F->up->scope_stack_114)).depth_ == F->up->depth_113))) {
F->up->table_112.p[rt_index(f_hash_328(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->scope_stack_114)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = (*(P110)rt_nil_check(F->up->scope_stack_114)).chain_;
F->up->scope_stack_114 = (*(P110)rt_nil_check(F->up->scope_stack_114)).stack_;
}
L_end_1078: ;
F->up->depth_113 = rt_sub(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static P110 f_new_sym_354(struct f_greenc_1fr *up_, rt_int kind_352, P133 name_353) {
  struct f_new_sym_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_352 = kind_352;
F->name_353 = name_353;
F->result_ = ({ R111 *cell1079 = rt_alloc(sizeof(R111)); *cell1079 = cp_R111(({ R111 ag1080; ag1080.kind_ = F->kind_352; ag1080.name_ = F->name_353; ag1080.t_ = NULL; ag1080.c_ = NULL; ag1080.access_path_ = NULL; ag1080.cname_ = NULL; ag1080.ro_ = 0; ag1080.mvalue_ = ((rt_int)0LL); ag1080.hasmv_ = 0; ag1080.decl_ = NULL; ag1080.params_ = NULL; ag1080.result_ = NULL; ag1080.depth_ = ((rt_int)0LL); ag1080.level_ = ((rt_int)0LL); ag1080.byref_ = 0; ag1080.vrp_ = 0; ag1080.hidden_ = 0; ag1080.from_use_ = 0; ag1080.members_ = NULL; ag1080.mnext_ = NULL; ag1080.chain_ = NULL; ag1080.stack_ = NULL; ag1080; })); (P110)cell1079; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P115 f_new_typ_356(struct f_greenc_1fr *up_, rt_int kind_355) {
  struct f_new_typ_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_355 = kind_355;
F->result_ = ({ R116 *cell1083 = rt_alloc(sizeof(R116)); *cell1083 = cp_R116(({ R116 ag1084; ag1084.kind_ = F->kind_355; ag1084.name_ = NULL; ag1084.lits_ = NULL; ag1084.elem_ = NULL; ag1084.idx_ = NULL; ag1084.elemcons_ = NULL; ag1084.tcons_ = NULL; ag1084.fields_ = NULL; ag1084.target_ = NULL; ag1084.decl_ = NULL; ag1084.cname_ = NULL; ag1084.forward_ = 0; ag1084.defined_ = 0; ag1084.priv_ = 0; ag1084.next_ = NULL; ag1084.idx2_ = NULL; ag1084.littab_ = NULL; ag1084.parent_ = NULL; ag1084.ndigits_ = ((rt_int)0LL); ag1084.fdelta_ = NULL; ag1084.fsmall_ = NULL; ag1084.dims_ = ((rt_int)0LL); ag1084.is_restricted_ = 0; ag1084; })); (P115)cell1083; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P170 f_new_cons_357(struct f_greenc_1fr *up_) {
  struct f_new_cons_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R171 *cell1085 = rt_alloc(sizeof(R171)); *cell1085 = cp_R171(({ R171 ag1086; ag1086.lo_ = NULL; ag1086.hi_ = NULL; ag1086.slen_ = NULL; ag1086.mlo_ = ((rt_int)0LL); ag1086.mhi_ = ((rt_int)0LL); ag1086.hasm_ = 0; ag1086.lo2_ = NULL; ag1086.hi2_ = NULL; ag1086; })); (P170)cell1085; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_kind_name_359(struct f_greenc_1fr *up_, P115 t_358) {
  struct f_kind_name_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_358 = t_358;
if (((*(P115)rt_nil_check(F->t_358)).name_ != NULL)) {
F->result_ = (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_358)).name_));
goto ret_;
}
{ rt_int sel1087 = (*(P115)rt_nil_check(F->t_358)).kind_;
if (0 || sel1087 == ((rt_int)1LL)) {
F->result_ = rt_str("INTEGER", 7);
goto ret_;
} else if (0 || sel1087 == ((rt_int)2LL)) {
F->result_ = rt_str("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1087 == ((rt_int)3LL)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || sel1087 == ((rt_int)5LL)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || sel1087 == ((rt_int)10LL)) {
F->result_ = rt_str("null", 4);
goto ret_;
} else if (0 || sel1087 == ((rt_int)11LL)) {
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

static void f_check_type_363(struct f_greenc_1fr *up_, P115 got_360, P115 want_361, rt_int line_362) {
  struct f_check_type_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_360 = got_360;
F->want_361 = want_361;
F->line_362 = line_362;
if ((F->want_361 == NULL)) {
goto ret_;
}
if ((((*(P115)rt_nil_check(F->got_360)).kind_ == ((rt_int)10LL)) && ((*(P115)rt_nil_check(F->want_361)).kind_ == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_343(F->up, F->got_360, F->want_361))) {
f_fail_206(F->up, F->line_362, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_359(F->up, F->got_360)), rt_str(" where ", 7)), f_kind_name_359(F->up, F->want_361)), rt_str(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_365(struct f_greenc_1fr *up_, P115 t_364) {
  struct f_field_count_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_364 = t_364;
F->n_1088 = ((rt_int)0LL);
F->f_1089 = NULL;
F->f_1089 = (*(P115)rt_nil_check(F->t_364)).fields_;
while ((F->f_1089 != NULL)) {
F->n_1088 = rt_add(F->n_1088, ((rt_int)1LL));
F->f_1089 = (*(P1081)rt_nil_check(F->f_1089)).next_;
}
L_end_1090: ;
F->result_ = F->n_1088;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_368(struct f_greenc_1fr *up_, P115 t_366, P133 *r_367) {
  struct f_ctype_368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_366 = t_366;
F->r_367 = r_367;
F->s_1091 = NULL;
{ rt_int sel1092 = (*(P115)rt_nil_check(F->t_366)).kind_;
if (0 || sel1092 == ((rt_int)1LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("rt_int", 6));
} else if (0 || sel1092 == ((rt_int)2LL) || sel1092 == ((rt_int)4LL) || sel1092 == ((rt_int)11LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("int", 3));
} else if (0 || sel1092 == ((rt_int)3LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("double", 6));
} else if (0 || sel1092 == ((rt_int)5LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("rstr", 4));
} else if (0 || sel1092 == ((rt_int)9LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("void", 4));
} else if (0 || sel1092 == ((rt_int)13LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("rt_act", 6));
} else if (0 || sel1092 == ((rt_int)14LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("rt_taskdecl", 11));
} else if (0 || sel1092 == ((rt_int)15LL)) {
(*F->r_367) = f_mk_185(F->up, rt_str("rt_entry", 8));
} else {
if (((*(P115)rt_nil_check(F->t_366)).cname_ == NULL)) {
f_declare_ctype_373(F->up, F->t_366);
} else if (((((*(P115)rt_nil_check(F->t_366)).kind_ == ((rt_int)7LL)) && (*(P115)rt_nil_check(F->t_366)).forward_) && (!(*(P115)rt_nil_check(F->t_366)).defined_))) {
(*(P115)rt_nil_check(F->t_366)).defined_ = 1;
f_field_decls_371(F->up, F->t_366, &F->s_1091);
f_put_to_210(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_366)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1091))), rt_str(" };", 3)));
}
(*F->r_367) = (*(P115)rt_nil_check(F->t_366)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_371(struct f_greenc_1fr *up_, P115 t_369, P133 *r_370) {
  struct f_field_decls_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_369 = t_369;
F->r_370 = r_370;
F->f_1093 = NULL;
F->f_1093 = (*(P115)rt_nil_check(F->t_369)).fields_;
F->s_1094 = NULL;
F->ct_1095 = NULL;
F->s_1094 = f_mk_185(F->up, rt_str(" int dummy_;", 12));
while ((F->f_1093 != NULL)) {
f_ctype_368(F->up, (*(P1081)rt_nil_check(F->f_1093)).t_, &F->ct_1095);
F->s_1094 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->s_1094)), 32), (*(P133)rt_nil_check(F->ct_1095))), 32), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1093)).name_)))), 59));
F->f_1093 = (*(P1081)rt_nil_check(F->f_1093)).next_;
}
L_end_1096: ;
(*F->r_370) = F->s_1094;
ret_:

  return;
}

static void f_declare_ctype_373(struct f_greenc_1fr *up_, P115 t_372) {
  struct f_declare_ctype_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_372 = t_372;
F->ct_1097 = NULL;
F->s_1098 = NULL;
F->target_1099 = NULL;
if (((*(P115)rt_nil_check(F->t_372)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_391(F->up, F->t_372);
}
if (((*(P115)rt_nil_check(F->t_372)).kind_ == ((rt_int)6LL))) {
f_new_name_188(F->up, rt_str("A", 1), &(*(P115)rt_nil_check(F->t_372)).cname_);
} else if (((*(P115)rt_nil_check(F->t_372)).kind_ == ((rt_int)7LL))) {
f_new_name_188(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->t_372)).cname_);
} else {
f_new_name_188(F->up, rt_str("P", 1), &(*(P115)rt_nil_check(F->t_372)).cname_);
}
(*(P115)rt_nil_check(F->t_372)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->t_372;
if (((*(P115)rt_nil_check(F->t_372)).kind_ == ((rt_int)8LL))) {
F->target_1099 = (*(P115)rt_nil_check(F->t_372)).target_;
if ((F->target_1099 == NULL)) {
f_fail_206(F->up, ((rt_int)0LL), rt_str_cat(rt_str_cat(rt_str("the designated type of ", 23), f_kind_name_359(F->up, F->t_372)), rt_str(" is never declared", 18)));
}
if (((*(P115)rt_nil_check(F->target_1099)).kind_ == ((rt_int)7LL))) {
if (((*(P115)rt_nil_check(F->target_1099)).cname_ == NULL)) {
f_new_name_188(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->target_1099)).cname_);
(*(P115)rt_nil_check(F->target_1099)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->target_1099;
f_put_to_210(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1099)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1099)).cname_))), 59));
(*(P115)rt_nil_check(F->target_1099)).forward_ = 1;
}
f_put_to_210(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1099)).cname_))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), 59));
} else {
f_ctype_368(F->up, F->target_1099, &F->ct_1097);
f_put_to_210(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), (*(P133)rt_nil_check(F->ct_1097))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), 59));
}
} else if (((*(P115)rt_nil_check(F->t_372)).kind_ == ((rt_int)6LL))) {
f_ctype_368(F->up, (*(P115)rt_nil_check(F->t_372)).elem_, &F->ct_1097);
f_put_to_210(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), 59));
f_put_to_210(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P133)rt_nil_check(F->ct_1097))), rt_str(" *p; };", 7)));
} else {
f_put_to_210(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), 59));
(*(P115)rt_nil_check(F->t_372)).defined_ = 1;
f_field_decls_371(F->up, F->t_372, &F->s_1098);
f_put_to_210(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_372)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1098))), rt_str(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_376(struct f_greenc_1fr *up_, P163 lits_374, rstr name_375) {
  struct f_lit_index_376fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_374 = lits_374;
F->name_375 = rt_str_copy(name_375);
F->i_1100 = ((rt_int)0LL);
F->l_1101 = NULL;
F->l_1101 = F->lits_374;
while ((F->l_1101 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->l_1101)).name_)), F->name_375)) {
F->result_ = F->i_1100;
goto ret_;
}
F->i_1100 = rt_add(F->i_1100, ((rt_int)1LL));
F->l_1101 = (*(P163)rt_nil_check(F->l_1101)).next_;
}
L_end_1102: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_380(struct f_greenc_1fr *up_, P163 e_377, rt_int *v_378, int *ok_379) {
  struct f_manifest_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_377 = e_377;
F->v_378 = v_378;
F->ok_379 = ok_379;
F->y_1106 = NULL;
(*F->ok_379) = 0;
(*F->v_378) = ((rt_int)0LL);
if (((*(P163)rt_nil_check(F->e_377)).kind_ == ((rt_int)1LL))) {
(*F->ok_379) = 1;
(*F->v_378) = (*(P163)rt_nil_check(F->e_377)).ival_;
} else if (((*(P163)rt_nil_check(F->e_377)).kind_ == ((rt_int)15LL))) {
f_manifest_380(F->up, (*(P163)rt_nil_check(F->e_377)).a_, &(*F->v_378), &(*F->ok_379));
} else if ((((*(P163)rt_nil_check(F->e_377)).kind_ == ((rt_int)6LL)) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_377)).name_)), rt_str("-", 1)))) {
f_manifest_380(F->up, (*(P163)rt_nil_check(F->e_377)).a_, &F->a_1103, &(*F->ok_379));
(*F->v_378) = rt_neg(F->a_1103);
} else if ((((*(P163)rt_nil_check(F->e_377)).kind_ == ((rt_int)7LL)) && ((rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_377)).name_)), rt_str("+", 1)) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_377)).name_)), rt_str("-", 1))) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_377)).name_)), rt_str("*", 1))))) {
f_manifest_380(F->up, (*(P163)rt_nil_check(F->e_377)).a_, &F->a_1103, &(*F->ok_379));
f_manifest_380(F->up, (*(P163)rt_nil_check(F->e_377)).b_, &F->b_1104, &F->ok2_1105);
(*F->ok_379) = ((*F->ok_379) && F->ok2_1105);
if ((*F->ok_379)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_377)).name_)), rt_str("+", 1))) {
(*F->v_378) = rt_add(F->a_1103, F->b_1104);
} else if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_377)).name_)), rt_str("-", 1))) {
(*F->v_378) = rt_sub(F->a_1103, F->b_1104);
} else {
(*F->v_378) = rt_mul(F->a_1103, F->b_1104);
}
}
} else if (((*(P163)rt_nil_check(F->e_377)).kind_ == ((rt_int)5LL))) {
F->y_1106 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_377)).name_)));
if ((((F->y_1106 != NULL) && ((*(P110)rt_nil_check(F->y_1106)).kind_ == ((rt_int)2LL))) && (*(P110)rt_nil_check(F->y_1106)).hasmv_)) {
(*F->ok_379) = 1;
(*F->v_378) = (*(P110)rt_nil_check(F->y_1106)).mvalue_;
}
}
ret_:

  return;
}

static void f_resolve_384(struct f_greenc_1fr *up_, P163 st_381, P115 *t_382, P170 *c_383) {
  struct f_resolve_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_381 = st_381;
F->t_382 = t_382;
F->c_383 = c_383;
F->y_1107 = NULL;
F->dummy_1108 = NULL;
F->code_1109 = NULL;
F->r_1111 = NULL;
(*F->c_383) = f_new_cons_357(F->up);
if (((*(P163)rt_nil_check(F->st_381)).kind_ != ((rt_int)80LL))) {
f_type_definition_389(F->up, F->st_381, NULL, &(*F->t_382), &(*F->c_383));
goto ret_;
}
if (((*(P163)rt_nil_check(F->st_381)).tag_ != NULL)) {
F->y_1107 = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_381)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_381)).name_)), (*(P163)rt_nil_check(F->st_381)).line_);
} else {
F->y_1107 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_381)).name_)));
}
if (((F->y_1107 == NULL) || ((*(P110)rt_nil_check(F->y_1107)).kind_ != ((rt_int)5LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->st_381)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_381)).name_)), rt_str(" is not a type", 14)));
}
(*F->t_382) = (*(P110)rt_nil_check(F->y_1107)).t_;
if (((*(P110)rt_nil_check(F->y_1107)).c_ != NULL)) {
(*(P170)rt_nil_check((*F->c_383))).lo_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).lo_;
(*(P170)rt_nil_check((*F->c_383))).hi_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).hi_;
(*(P170)rt_nil_check((*F->c_383))).slen_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).slen_;
(*(P170)rt_nil_check((*F->c_383))).mlo_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).mlo_;
(*(P170)rt_nil_check((*F->c_383))).mhi_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).mhi_;
(*(P170)rt_nil_check((*F->c_383))).hasm_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).hasm_;
(*(P170)rt_nil_check((*F->c_383))).lo2_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).lo2_;
(*(P170)rt_nil_check((*F->c_383))).hi2_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1107)).c_)).hi2_;
}
if (((*F->t_382) == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->st_381)).line_, rt_str_cat(rt_str_cat(rt_str("the type ", 9), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_381)).name_))), rt_str(" is used before its full declaration", 36)));
}
if (((*(P163)rt_nil_check(F->st_381)).flag_ == ((rt_int)1LL))) {
F->r_1111 = (*(P163)rt_nil_check(F->st_381)).a_;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1111)).a_, (*F->t_382), &F->dummy_1108, &(*(P170)rt_nil_check((*F->c_383))).lo_);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1111)).b_, (*F->t_382), &F->dummy_1108, &(*(P170)rt_nil_check((*F->c_383))).hi_);
f_manifest_380(F->up, (*(P163)rt_nil_check(F->r_1111)).a_, &(*(P170)rt_nil_check((*F->c_383))).mlo_, &F->ok_1110);
(*(P170)rt_nil_check((*F->c_383))).hasm_ = F->ok_1110;
f_manifest_380(F->up, (*(P163)rt_nil_check(F->r_1111)).b_, &(*(P170)rt_nil_check((*F->c_383))).mhi_, &F->ok_1110);
(*(P170)rt_nil_check((*F->c_383))).hasm_ = ((*(P170)rt_nil_check((*F->c_383))).hasm_ && F->ok_1110);
} else if (((*(P163)rt_nil_check(F->st_381)).flag_ == ((rt_int)2LL))) {
F->r_1111 = (*(P163)rt_nil_check(F->st_381)).a_;
if (((*(P163)rt_nil_check(F->r_1111)).kind_ != ((rt_int)14LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->st_381)).line_, rt_str("an index constraint is a discrete range", 39));
}
if (((*(P115)rt_nil_check((*F->t_382))).kind_ == ((rt_int)5LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1111)).a_, F->up->ty_int_149, &F->dummy_1108, &F->code_1109);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1111)).b_, F->up->ty_int_149, &F->dummy_1108, &(*(P170)rt_nil_check((*F->c_383))).slen_);
(*(P170)rt_nil_check((*F->c_383))).slen_ = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check((*(P170)rt_nil_check((*F->c_383))).slen_))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->code_1109))), rt_str(" + 1)", 5)));
} else if (((*(P115)rt_nil_check((*F->t_382))).kind_ == ((rt_int)6LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1111)).a_, (*(P115)rt_nil_check((*F->t_382))).idx_, &F->dummy_1108, &(*(P170)rt_nil_check((*F->c_383))).lo_);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1111)).b_, (*(P115)rt_nil_check((*F->t_382))).idx_, &F->dummy_1108, &(*(P170)rt_nil_check((*F->c_383))).hi_);
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->st_381)).line_, rt_str("this type takes no index constraint", 35));
}
}
ret_:

  return;
}

static void f_type_definition_389(struct f_greenc_1fr *up_, P163 d_385, P133 name_386, P115 *t_387, P170 *c_388) {
  struct f_type_definition_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_385 = d_385;
F->name_386 = name_386;
F->t_387 = t_387;
F->c_388 = c_388;
F->dummy_1112 = NULL;
F->it_1113 = NULL;
F->ic_1114 = NULL;
F->l_1115 = NULL;
F->comp_1116 = NULL;
F->f_1117 = NULL;
F->tail_1118 = NULL;
F->y_1121 = NULL;
(*F->c_388) = f_new_cons_357(F->up);
{ rt_int sel1122 = (*(P163)rt_nil_check(F->d_385)).kind_;
if (0 || sel1122 == ((rt_int)70LL)) {
(*F->t_387) = f_new_typ_356(F->up, ((rt_int)4LL));
(*(P115)rt_nil_check((*F->t_387))).lits_ = (*(P163)rt_nil_check(F->d_385)).a_;
(*(P115)rt_nil_check((*F->t_387))).name_ = F->name_386;
F->l_1115 = (*(P163)rt_nil_check(F->d_385)).a_;
F->n_1120 = ((rt_int)0LL);
while ((F->l_1115 != NULL)) {
if (((*(P163)rt_nil_check(F->l_1115)).kind_ == ((rt_int)5LL))) {
F->y_1121 = f_new_sym_354(F->up, ((rt_int)7LL), (*(P163)rt_nil_check(F->l_1115)).name_);
(*(P110)rt_nil_check(F->y_1121)).t_ = (*F->t_387);
(*(P110)rt_nil_check(F->y_1121)).result_ = (*F->t_387);
(*(P110)rt_nil_check(F->y_1121)).mvalue_ = F->n_1120;
(*(P110)rt_nil_check(F->y_1121)).hasmv_ = 1;
f_define_349(F->up, F->y_1121, (*(P163)rt_nil_check(F->l_1115)).line_);
}
F->n_1120 = rt_add(F->n_1120, ((rt_int)1LL));
F->l_1115 = (*(P163)rt_nil_check(F->l_1115)).next_;
}
L_end_1123: ;
(*(P170)rt_nil_check((*F->c_388))).lo_ = f_mk_185(F->up, rt_str("0", 1));
(*(P170)rt_nil_check((*F->c_388))).hi_ = f_mk_185(F->up, rt_str_of_int(rt_sub(F->n_1120, ((rt_int)1LL))));
} else if (0 || sel1122 == ((rt_int)71LL)) {
(*F->t_387) = F->up->ty_int_149;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->d_385)).a_, F->up->ty_int_149, &F->dummy_1112, &(*(P170)rt_nil_check((*F->c_388))).lo_);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->d_385)).b_, F->up->ty_int_149, &F->dummy_1112, &(*(P170)rt_nil_check((*F->c_388))).hi_);
f_manifest_380(F->up, (*(P163)rt_nil_check(F->d_385)).a_, &(*(P170)rt_nil_check((*F->c_388))).mlo_, &F->ok_1119);
(*(P170)rt_nil_check((*F->c_388))).hasm_ = F->ok_1119;
f_manifest_380(F->up, (*(P163)rt_nil_check(F->d_385)).b_, &(*(P170)rt_nil_check((*F->c_388))).mhi_, &F->ok_1119);
(*(P170)rt_nil_check((*F->c_388))).hasm_ = ((*(P170)rt_nil_check((*F->c_388))).hasm_ && F->ok_1119);
} else if (0 || sel1122 == ((rt_int)72LL)) {
(*F->t_387) = F->up->ty_float_151;
} else if (0 || sel1122 == ((rt_int)73LL)) {
if ((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_385)).a_)).next_ != NULL) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_385)).a_)).next_)).next_ != NULL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->d_385)).line_, rt_str("arrays of more than two dimensions are not handled yet", 54));
}
(*F->t_387) = f_new_typ_356(F->up, ((rt_int)6LL));
(*(P115)rt_nil_check((*F->t_387))).name_ = F->name_386;
f_resolve_384(F->up, (*(P163)rt_nil_check(F->d_385)).b_, &(*(P115)rt_nil_check((*F->t_387))).elem_, &(*(P115)rt_nil_check((*F->t_387))).elemcons_);
F->l_1115 = (*(P163)rt_nil_check(F->d_385)).a_;
if (((*(P163)rt_nil_check(F->l_1115)).kind_ == ((rt_int)14LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->l_1115)).a_, NULL, &(*(P115)rt_nil_check((*F->t_387))).idx_, &(*(P170)rt_nil_check((*F->c_388))).lo_);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->l_1115)).b_, (*(P115)rt_nil_check((*F->t_387))).idx_, &F->dummy_1112, &(*(P170)rt_nil_check((*F->c_388))).hi_);
} else {
f_resolve_384(F->up, F->l_1115, &(*(P115)rt_nil_check((*F->t_387))).idx_, &F->ic_1114);
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_387))).idx_)).kind_ == ((rt_int)4LL)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_387))).idx_)).kind_ == ((rt_int)11LL))) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_387))).idx_)).kind_ == ((rt_int)2LL)))) {
(*(P170)rt_nil_check((*F->c_388))).lo_ = (*(P170)rt_nil_check(F->ic_1114)).lo_;
(*(P170)rt_nil_check((*F->c_388))).hi_ = (*(P170)rt_nil_check(F->ic_1114)).hi_;
} else if (((*(P170)rt_nil_check(F->ic_1114)).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_387))).tcons_ = f_new_cons_357(F->up);
(*(P170)rt_nil_check((*(P115)rt_nil_check((*F->t_387))).tcons_)).lo_ = (*(P170)rt_nil_check(F->ic_1114)).lo_;
}
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_385)).a_)).next_ != NULL)) {
F->l_1115 = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_385)).a_)).next_;
if (((*(P163)rt_nil_check(F->l_1115)).kind_ == ((rt_int)14LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->l_1115)).a_, NULL, &(*(P115)rt_nil_check((*F->t_387))).idx2_, &(*(P170)rt_nil_check((*F->c_388))).lo2_);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->l_1115)).b_, (*(P115)rt_nil_check((*F->t_387))).idx2_, &F->dummy_1112, &(*(P170)rt_nil_check((*F->c_388))).hi2_);
} else {
f_resolve_384(F->up, F->l_1115, &(*(P115)rt_nil_check((*F->t_387))).idx2_, &F->ic_1114);
(*(P170)rt_nil_check((*F->c_388))).lo2_ = (*(P170)rt_nil_check(F->ic_1114)).lo_;
(*(P170)rt_nil_check((*F->c_388))).hi2_ = (*(P170)rt_nil_check(F->ic_1114)).hi_;
}
if ((((*(P170)rt_nil_check((*F->c_388))).lo_ == NULL) || ((*(P170)rt_nil_check((*F->c_388))).lo2_ == NULL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->d_385)).line_, rt_str("a two-dimensional array needs the bounds of both indexes here", 61));
}
}
if (((*(P170)rt_nil_check((*F->c_388))).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_387))).tcons_ = (*F->c_388);
}
} else if (0 || sel1122 == ((rt_int)74LL)) {
(*F->t_387) = f_new_typ_356(F->up, ((rt_int)7LL));
(*(P115)rt_nil_check((*F->t_387))).name_ = F->name_386;
F->comp_1116 = (*(P163)rt_nil_check(F->d_385)).a_;
while ((F->comp_1116 != NULL)) {
F->f_1117 = ({ R1082 *cell1125 = rt_alloc(sizeof(R1082)); *cell1125 = cp_R1082(({ R1082 ag1126; ag1126.name_ = (*(P163)rt_nil_check(F->comp_1116)).name_; ag1126.t_ = NULL; ag1126.c_ = NULL; ag1126.next_ = NULL; ag1126.dflt_ = (*(P163)rt_nil_check(F->comp_1116)).b_; ag1126; })); (P1081)cell1125; });
f_resolve_384(F->up, (*(P163)rt_nil_check(F->comp_1116)).a_, &(*(P1081)rt_nil_check(F->f_1117)).t_, &(*(P1081)rt_nil_check(F->f_1117)).c_);
if ((F->tail_1118 == NULL)) {
(*(P115)rt_nil_check((*F->t_387))).fields_ = F->f_1117;
} else {
(*(P1081)rt_nil_check(F->tail_1118)).next_ = F->f_1117;
}
F->tail_1118 = F->f_1117;
F->comp_1116 = (*(P163)rt_nil_check(F->comp_1116)).next_;
}
L_end_1124: ;
} else if (0 || sel1122 == ((rt_int)75LL)) {
(*F->t_387) = f_new_typ_356(F->up, ((rt_int)8LL));
(*(P115)rt_nil_check((*F->t_387))).name_ = F->name_386;
(*(P115)rt_nil_check((*F->t_387))).decl_ = (*(P163)rt_nil_check(F->d_385)).a_;
} else if (0 || sel1122 == ((rt_int)76LL)) {
f_resolve_384(F->up, (*(P163)rt_nil_check(F->d_385)).a_, &(*F->t_387), &(*F->c_388));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->d_385)).line_, rt_str("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_finish_ptr_391(struct f_greenc_1fr *up_, P115 t_390) {
  struct f_finish_ptr_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_390 = t_390;
F->c_1127 = NULL;
if ((((*(P115)rt_nil_check(F->t_390)).target_ == NULL) && ((*(P115)rt_nil_check(F->t_390)).decl_ != NULL))) {
f_resolve_384(F->up, (*(P115)rt_nil_check(F->t_390)).decl_, &(*(P115)rt_nil_check(F->t_390)).target_, &F->c_1127);
}
ret_:

  return;
}

static void f_init_storage_395(struct f_greenc_1fr *up_, rstr lval_392, P115 t_393, P170 c_394) {
  struct f_init_storage_395fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_392 = rt_str_copy(lval_392);
F->t_393 = t_393;
F->c_394 = c_394;
F->ct_1128 = NULL;
F->i_1129 = NULL;
F->v_1130 = NULL;
F->x_1131 = NULL;
F->vt_1132 = NULL;
F->f_1133 = NULL;
if (((*(P115)rt_nil_check(F->t_393)).kind_ == ((rt_int)8LL))) {
f_emit_212(F->up, rt_str_cat(F->lval_392, rt_str(" = NULL;", 8)));
} else if (((*(P115)rt_nil_check(F->t_393)).kind_ == ((rt_int)5LL))) {
if (((*(P170)rt_nil_check(F->c_394)).slen_ == NULL)) {
f_fail_206(F->up, ((rt_int)0LL), rt_str("a STRING object needs an index constraint or an initial value", 61));
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(F->lval_392, rt_str(" = rt_str_new(", 14)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_394)).slen_))), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_393)).kind_ == ((rt_int)6LL))) {
if (((*(P170)rt_nil_check(F->c_394)).lo_ == NULL)) {
f_fail_206(F->up, ((rt_int)0LL), rt_str("an array object needs an index constraint", 41));
}
f_ctype_368(F->up, (*(P115)rt_nil_check(F->t_393)).elem_, &F->ct_1128);
if (((*(P170)rt_nil_check(F->c_394)).lo2_ != NULL)) {
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_392, rt_str(".lo = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_394)).lo_))), rt_str("; ", 2)), F->lval_392), rt_str(".hi = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_394)).hi_))), rt_str("; ", 2)), F->lval_392), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_394)).lo2_))), rt_str("; ", 2)), F->lval_392), rt_str(".hi2 = ", 7)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_394)).hi2_))), 59));
} else {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_392, rt_str(".lo = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_394)).lo_))), rt_str("; ", 2)), F->lval_392), rt_str(".hi = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_394)).hi_))), rt_str("; ", 2)), F->lval_392), rt_str(".lo2 = 1; ", 10)), F->lval_392), rt_str(".hi2 = 1;", 9)));
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_392, rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->ct_1128))), rt_str(") * (size_t)RT_CNT(", 19)), F->lval_392), rt_str("));", 3)));
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_393)).elem_)).kind_ == ((rt_int)5LL)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_393)).elem_)).kind_ == ((rt_int)6LL))) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_393)).elem_)).kind_ == ((rt_int)7LL)))) {
f_new_name_188(F->up, rt_str("i", 1), &F->i_1129);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->i_1129))), rt_str(" = 0; ", 6)), (*(P133)rt_nil_check(F->i_1129))), rt_str(" < RT_CNT(", 10)), F->lval_392), rt_str("); ", 3)), (*(P133)rt_nil_check(F->i_1129))), rt_str("++) {", 5)));
f_init_storage_395(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_392, rt_str(".p[", 3)), (*(P133)rt_nil_check(F->i_1129))), 93), (*(P115)rt_nil_check(F->t_393)).elem_, (*(P115)rt_nil_check(F->t_393)).elemcons_);
f_emit_212(F->up, rt_str("}", 1));
}
} else if (((*(P115)rt_nil_check(F->t_393)).kind_ == ((rt_int)7LL))) {
F->f_1133 = (*(P115)rt_nil_check(F->t_393)).fields_;
while ((F->f_1133 != NULL)) {
f_init_storage_395(F->up, rt_str_cat(rt_str_catc(F->lval_392, 46), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1133)).name_)))), (*(P1081)rt_nil_check(F->f_1133)).t_, (*(P1081)rt_nil_check(F->f_1133)).c_);
if (((*(P1081)rt_nil_check(F->f_1133)).dflt_ != NULL)) {
f_gexpr_536(F->up, (*(P1081)rt_nil_check(F->f_1133)).dflt_, (*(P1081)rt_nil_check(F->f_1133)).t_, &F->vt_1132, &F->v_1130);
f_check_type_363(F->up, F->vt_1132, (*(P1081)rt_nil_check(F->f_1133)).t_, ((rt_int)0LL));
f_assign_code_403(F->up, rt_str_cat(rt_str_catc(F->lval_392, 46), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1133)).name_)))), (*(P1081)rt_nil_check(F->f_1133)).t_, (*(P133)rt_nil_check(F->v_1130)), (*(P1081)rt_nil_check(F->f_1133)).c_, &F->x_1131);
f_emit_212(F->up, (*(P133)rt_nil_check(F->x_1131)));
}
F->f_1133 = (*(P1081)rt_nil_check(F->f_1133)).next_;
}
L_end_1134: ;
}
ret_:

  return;
}

static int f_composite_397(struct f_greenc_1fr *up_, P115 t_396) {
  struct f_composite_397fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_396 = t_396;
F->result_ = (((*(P115)rt_nil_check(F->t_396)).kind_ == ((rt_int)6LL)) || ((*(P115)rt_nil_check(F->t_396)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_403(struct f_greenc_1fr *up_, rstr lval_398, P115 t_399, rstr v_400, P170 c_401, P133 *r_402) {
  struct f_assign_code_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_398 = rt_str_copy(lval_398);
F->t_399 = t_399;
F->v_400 = rt_str_copy(v_400);
F->c_401 = c_401;
F->r_402 = r_402;
F->ct_1135 = NULL;
if (f_composite_397(F->up, F->t_399)) {
f_ctype_368(F->up, F->t_399, &F->ct_1135);
(*F->r_402) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_399)).cname_))), rt_str("(&", 2)), F->lval_398), rt_str(", ", 2)), F->v_400), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_399)).kind_ == ((rt_int)5LL))) {
(*F->r_402) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), F->lval_398), rt_str(", ", 2)), F->v_400), rt_str(");", 2)));
} else if (((((((*(P115)rt_nil_check(F->t_399)).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check(F->t_399)).kind_ == ((rt_int)4LL))) || ((*(P115)rt_nil_check(F->t_399)).kind_ == ((rt_int)11LL))) && (F->c_401 != NULL)) && ((*(P170)rt_nil_check(F->c_401)).lo_ != NULL))) {
(*F->r_402) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_398, rt_str(" = rt_range(", 12)), F->v_400), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_401)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_401)).hi_))), rt_str(");", 2)));
} else {
(*F->r_402) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_398, rt_str(" = ", 3)), F->v_400), 59));
}
ret_:

  return;
}

static void f_copy_code_407(struct f_greenc_1fr *up_, P115 t_404, rstr v_405, P133 *r_406) {
  struct f_copy_code_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_404 = t_404;
F->v_405 = rt_str_copy(v_405);
F->r_406 = r_406;
F->ct_1136 = NULL;
if (f_composite_397(F->up, F->t_404)) {
f_ctype_368(F->up, F->t_404, &F->ct_1136);
(*F->r_406) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("cp_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_404)).cname_))), 40), F->v_405), 41));
} else if (((*(P115)rt_nil_check(F->t_404)).kind_ == ((rt_int)5LL))) {
(*F->r_406) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_copy(", 12), F->v_405), 41));
} else {
(*F->r_406) = f_mk_185(F->up, F->v_405);
}
ret_:

  return;
}

static void f_eq_code_412(struct f_greenc_1fr *up_, P115 t_408, rstr a_409, rstr b_410, P133 *r_411) {
  struct f_eq_code_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_408 = t_408;
F->a_409 = rt_str_copy(a_409);
F->b_410 = rt_str_copy(b_410);
F->r_411 = r_411;
F->ct_1137 = NULL;
if (f_composite_397(F->up, F->t_408)) {
f_ctype_368(F->up, F->t_408, &F->ct_1137);
(*F->r_411) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("eq_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_408)).cname_))), 40), F->a_409), rt_str(", ", 2)), F->b_410), 41));
} else if (((*(P115)rt_nil_check(F->t_408)).kind_ == ((rt_int)5LL))) {
(*F->r_411) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_409), rt_str(", ", 2)), F->b_410), 41));
} else {
(*F->r_411) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_409), rt_str(" == ", 4)), F->b_410), 41));
}
ret_:

  return;
}

static int f_seen_name_415(struct f_greenc_1fr *up_, P144 l_413, rstr s_414) {
  struct f_seen_name_415fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_413 = l_413;
F->s_414 = rt_str_copy(s_414);
F->p_1138 = NULL;
F->p_1138 = F->l_413;
while ((F->p_1138 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P144)rt_nil_check(F->p_1138)).s_)), F->s_414)) {
F->result_ = 1;
goto ret_;
}
F->p_1138 = (*(P144)rt_nil_check(F->p_1138)).next_;
}
L_end_1139: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_416(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1140 = NULL;
F->t_1140 = F->up->all_types_117;
F->done_1141 = NULL;
F->l_1142 = NULL;
while ((F->t_1140 != NULL)) {
if ((f_composite_397(F->up, F->t_1140) && (!f_seen_name_415(F->up, F->done_1141, (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_)))))) {
F->l_1142 = ({ R145 *cell1144 = rt_alloc(sizeof(R145)); *cell1144 = cp_R145(({ R145 ag1145; ag1145.s_ = (*(P115)rt_nil_check(F->t_1140)).cname_; ag1145.next_ = F->done_1141; ag1145; })); (P144)cell1144; });
F->done_1141 = F->l_1142;
f_put_to_210(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), rt_str(" s);", 4)));
f_put_to_210(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), rt_str(" cp_", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), rt_str(" s);", 4)));
f_put_to_210(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), rt_str(" a, ", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1140)).cname_))), rt_str(" b);", 4)));
f_helper_bodies_418(F->up, F->t_1140);
}
F->t_1140 = (*(P115)rt_nil_check(F->t_1140)).next_;
}
L_end_1143: ;
ret_:

  return;
}

static void f_helper_bodies_418(struct f_greenc_1fr *up_, P115 t_417) {
  struct f_helper_bodies_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_417 = t_417;
F->c_1146 = NULL;
F->c_1146 = (*(P115)rt_nil_check(F->t_417)).cname_;
F->b_1147 = NULL;
F->b_1147 = F->up->out_funcs_126;
F->ct_1148 = NULL;
F->x_1149 = NULL;
F->y_1150 = NULL;
F->conds_1151 = NULL;
F->f_1152 = NULL;
if (((*(P115)rt_nil_check(F->t_417)).kind_ == ((rt_int)6LL))) {
f_ctype_368(F->up, (*(P115)rt_nil_check(F->t_417)).elem_, &F->ct_1148);
f_assign_code_403(F->up, rt_str("d->p[i]", 7), (*(P115)rt_nil_check(F->t_417)).elem_, rt_str("s.p[i]", 6), NULL, &F->x_1149);
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1146))), 40), (*(P133)rt_nil_check(F->c_1146))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1146))), rt_str(" s) {", 5)));
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_203(F->up)), rt_str("array length", 12)), f_q_203(F->up)), rt_str(");", 2)));
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), (*(P133)rt_nil_check(F->x_1149))), rt_str(" }", 2)));
f_put_to_210(F->up, F->b_1147, rt_str("}", 1));
f_copy_code_407(F->up, (*(P115)rt_nil_check(F->t_417)).elem_, rt_str("s.p[i]", 6), &F->x_1149);
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1146))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1146))), 40), (*(P133)rt_nil_check(F->c_1146))), rt_str(" s) {", 5)));
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1146))), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P133)rt_nil_check(F->ct_1148))), rt_str(") * (size_t)RT_CNT(s));", 23)));
f_put_to_210(F->up, F->b_1147, rt_str_catc(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), (*(P133)rt_nil_check(F->x_1149))), 59));
f_put_to_210(F->up, F->b_1147, rt_str("  return d;", 11));
f_put_to_210(F->up, F->b_1147, rt_str("}", 1));
f_eq_code_412(F->up, (*(P115)rt_nil_check(F->t_417)).elem_, rt_str("a.p[i]", 6), rt_str("b.p[i]", 6), &F->x_1149);
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1146))), 40), (*(P133)rt_nil_check(F->c_1146))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1146))), rt_str(" b) {", 5)));
f_put_to_210(F->up, F->b_1147, rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43));
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), (*(P133)rt_nil_check(F->x_1149))), rt_str(")) return 0;", 12)));
f_put_to_210(F->up, F->b_1147, rt_str("  return 1;", 11));
f_put_to_210(F->up, F->b_1147, rt_str("}", 1));
} else {
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1146))), 40), (*(P133)rt_nil_check(F->c_1146))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1146))), rt_str(" s) {", 5)));
F->f_1152 = (*(P115)rt_nil_check(F->t_417)).fields_;
while ((F->f_1152 != NULL)) {
f_assign_code_403(F->up, rt_str_cat(rt_str("d->", 3), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1152)).name_)))), (*(P1081)rt_nil_check(F->f_1152)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1152)).name_)))), NULL, &F->x_1149);
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->x_1149))));
F->f_1152 = (*(P1081)rt_nil_check(F->f_1152)).next_;
}
L_end_1153: ;
f_put_to_210(F->up, F->b_1147, rt_str("}", 1));
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1146))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1146))), 40), (*(P133)rt_nil_check(F->c_1146))), rt_str(" s) {", 5)));
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1146))), rt_str(" d = s;", 7)));
F->conds_1151 = f_mk_185(F->up, rt_str("1", 1));
F->f_1152 = (*(P115)rt_nil_check(F->t_417)).fields_;
while ((F->f_1152 != NULL)) {
f_copy_code_407(F->up, (*(P1081)rt_nil_check(F->f_1152)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1152)).name_)))), &F->x_1149);
f_put_to_210(F->up, F->b_1147, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1152)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1149))), 59));
f_eq_code_412(F->up, (*(P1081)rt_nil_check(F->f_1152)).t_, rt_str_cat(rt_str("a.", 2), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1152)).name_)))), rt_str_cat(rt_str("b.", 2), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1152)).name_)))), &F->y_1150);
F->conds_1151 = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1151)), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->y_1150))));
F->f_1152 = (*(P1081)rt_nil_check(F->f_1152)).next_;
}
L_end_1154: ;
f_put_to_210(F->up, F->b_1147, rt_str("  return d;", 11));
f_put_to_210(F->up, F->b_1147, rt_str("}", 1));
f_put_to_210(F->up, F->b_1147, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1146))), 40), (*(P133)rt_nil_check(F->c_1146))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1146))), rt_str(" b) {", 5)));
f_put_to_210(F->up, F->b_1147, rt_str_catc(rt_str_cat(rt_str("  return ", 9), (*(P133)rt_nil_check(F->conds_1151))), 59));
f_put_to_210(F->up, F->b_1147, rt_str("}", 1));
}
ret_:

  return;
}

static void f_storage_422(struct f_greenc_1fr *up_, rstr name_419, P115 t_420, P133 *access_code_421) {
  struct f_storage_422fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_419 = rt_str_copy(name_419);
F->t_420 = t_420;
F->access_code_421 = access_code_421;
F->ct_1155 = NULL;
F->g_1156 = NULL;
f_ctype_368(F->up, F->t_420, &F->ct_1155);
if ((!F->up->in_func_131)) {
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("g_", 2), f_lower_s_196(F->up, F->name_419)), 95), &F->g_1156);
f_put_to_210(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1155))), 32), (*(P133)rt_nil_check(F->g_1156))), 59));
F->up->st_field_134 = F->g_1156;
(*F->access_code_421) = F->g_1156;
} else {
f_new_name_188(F->up, rt_str_catc(f_lower_s_196(F->up, F->name_419), 95), &F->g_1156);
f_put_to_210(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1155))), 32), (*(P133)rt_nil_check(F->g_1156))), 59));
F->up->st_field_134 = F->g_1156;
(*F->access_code_421) = f_mk_185(F->up, rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check(F->g_1156))));
}
ret_:

  return;
}

static void f_bind_425(struct f_greenc_1fr *up_, P110 y_423, P133 access_code_424) {
  struct f_bind_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_423 = y_423;
F->access_code_424 = access_code_424;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_423)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->y_423)).access_path_ = F->up->st_field_134;
} else {
(*(P110)rt_nil_check(F->y_423)).level_ = ((rt_int)0LL);
(*(P110)rt_nil_check(F->y_423)).access_path_ = F->access_code_424;
}
ret_:

  return;
}

static void f_declare_subprograms_427(struct f_greenc_1fr *up_, P163 from_426) {
  struct f_declare_subprograms_427fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_426 = from_426;
F->e_1157 = NULL;
F->e_1157 = F->from_426;
while ((F->e_1157 != NULL)) {
if (((((*(P163)rt_nil_check(F->e_1157)).kind_ == ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->e_1157)).kind_ == ((rt_int)45LL))) && ((*(P163)rt_nil_check(F->e_1157)).ival_ == ((rt_int)0LL)))) {
f_declare_one_429(F->up, F->e_1157);
}
F->e_1157 = (*(P163)rt_nil_check(F->e_1157)).next_;
}
L_end_1158: ;
ret_:

  return;
}

static void f_declare_one_429(struct f_greenc_1fr *up_, P163 e_428) {
  struct f_declare_one_429fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_428 = e_428;
F->y_1159 = NULL;
F->z_1160 = NULL;
if (f_is_generic_name_801(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_428)).name_)))) {
goto ret_;
}
f_build_subprogram_432(F->up, F->e_428, &F->y_1159);
F->z_1160 = F->up->table_112.p[rt_index(f_hash_328(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1159)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1160 != NULL)) {
if (((((((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1160)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1159)).name_))) && (((*(P110)rt_nil_check(F->z_1160)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1160)).kind_ == ((rt_int)4LL)))) && ((*(P110)rt_nil_check(F->z_1160)).decl_ != NULL)) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->z_1160)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->z_1160)).depth_ == F->up->depth_113)) && f_same_signature_346(F->up, (*(P110)rt_nil_check(F->z_1160)).params_, (*(P110)rt_nil_check(F->y_1159)).params_)) && f_same_343(F->up, (*(P110)rt_nil_check(F->z_1160)).result_, (*(P110)rt_nil_check(F->y_1159)).result_))) {
(*(P110)rt_nil_check(F->z_1160)).decl_ = F->e_428;
goto ret_;
}
F->z_1160 = (*(P110)rt_nil_check(F->z_1160)).chain_;
}
L_end_1161: ;
if ((F->up->cur_task_160 != NULL)) {
F->z_1160 = (*(P110)rt_nil_check(F->up->cur_task_160)).members_;
while ((F->z_1160 != NULL)) {
if ((((((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1160)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1159)).name_))) && (((*(P110)rt_nil_check(F->z_1160)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1160)).kind_ == ((rt_int)4LL)))) && ((*(P110)rt_nil_check(F->z_1160)).decl_ != NULL)) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->z_1160)).decl_)).ival_ == ((rt_int)1LL))) && f_same_signature_346(F->up, (*(P110)rt_nil_check(F->z_1160)).params_, (*(P110)rt_nil_check(F->y_1159)).params_)) && f_same_343(F->up, (*(P110)rt_nil_check(F->z_1160)).result_, (*(P110)rt_nil_check(F->y_1159)).result_))) {
(*(P110)rt_nil_check(F->y_1159)).cname_ = (*(P110)rt_nil_check(F->z_1160)).cname_;
(*(P110)rt_nil_check(F->z_1160)).decl_ = F->e_428;
goto L_end_1162;
}
F->z_1160 = (*(P110)rt_nil_check(F->z_1160)).mnext_;
}
L_end_1162: ;
}
f_define_349(F->up, F->y_1159, (*(P163)rt_nil_check(F->e_428)).line_);
ret_:

  return;
}

static void f_build_subprogram_432(struct f_greenc_1fr *up_, P163 d_430, P110 *y_431) {
  struct f_build_subprogram_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_430 = d_430;
F->y_431 = y_431;
F->p_1163 = NULL;
F->p_1163 = (*(P163)rt_nil_check(F->d_430)).a_;
F->pm_1164 = NULL;
F->tail_1165 = NULL;
F->rc_1166 = NULL;
F->k_1167 = ((rt_int)4LL);
if (((*(P163)rt_nil_check(F->d_430)).kind_ == ((rt_int)45LL))) {
F->k_1167 = ((rt_int)3LL);
}
(*F->y_431) = f_new_sym_354(F->up, F->k_1167, (*(P163)rt_nil_check(F->d_430)).name_);
while ((F->p_1163 != NULL)) {
F->pm_1164 = ({ R1071 *cell1169 = rt_alloc(sizeof(R1071)); *cell1169 = cp_R1071(({ R1071 ag1170; ag1170.name_ = (*(P163)rt_nil_check(F->p_1163)).name_; ag1170.mode_ = (*(P163)rt_nil_check(F->p_1163)).ival_; ag1170.t_ = NULL; ag1170.c_ = NULL; ag1170.cfield_ = NULL; ag1170.dflt_ = (*(P163)rt_nil_check(F->p_1163)).b_; ag1170.next_ = NULL; ag1170; })); (P1070)cell1169; });
f_resolve_384(F->up, (*(P163)rt_nil_check(F->p_1163)).a_, &(*(P1070)rt_nil_check(F->pm_1164)).t_, &(*(P1070)rt_nil_check(F->pm_1164)).c_);
f_new_name_188(F->up, rt_str_catc(f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_1163)).name_))), 95), &(*(P1070)rt_nil_check(F->pm_1164)).cfield_);
if ((((*(P163)rt_nil_check(F->d_430)).kind_ == ((rt_int)45LL)) && ((*(P1070)rt_nil_check(F->pm_1164)).mode_ != ((rt_int)1LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->p_1163)).line_, rt_str("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P163)rt_nil_check(F->d_430)).flag_ == ((rt_int)1LL)) && ((*(P1070)rt_nil_check(F->pm_1164)).mode_ != ((rt_int)1LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->p_1163)).line_, rt_str("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1165 == NULL)) {
(*(P110)rt_nil_check((*F->y_431))).params_ = F->pm_1164;
} else {
(*(P1070)rt_nil_check(F->tail_1165)).next_ = F->pm_1164;
}
F->tail_1165 = F->pm_1164;
F->p_1163 = (*(P163)rt_nil_check(F->p_1163)).next_;
}
L_end_1168: ;
(*(P110)rt_nil_check((*F->y_431))).result_ = F->up->ty_void_154;
if (((*(P163)rt_nil_check(F->d_430)).b_ != NULL)) {
f_resolve_384(F->up, (*(P163)rt_nil_check(F->d_430)).b_, &(*(P110)rt_nil_check((*F->y_431))).result_, &F->rc_1166);
}
(*(P110)rt_nil_check((*F->y_431))).vrp_ = ((*(P163)rt_nil_check(F->d_430)).flag_ == ((rt_int)1LL));
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("f_", 2), f_c_ident_486(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_430)).name_)))), 95), &(*(P110)rt_nil_check((*F->y_431))).cname_);
(*(P110)rt_nil_check((*F->y_431))).decl_ = F->d_430;
(*(P110)rt_nil_check((*F->y_431))).level_ = F->up->cur_level_132;
ret_:

  return;
}

static void f_decl_elements_434(struct f_greenc_1fr *up_, P163 decls_433) {
  struct f_decl_elements_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_433 = decls_433;
F->e_1171 = NULL;
F->e_1171 = F->decls_433;
F->declared_1172 = 0;
while ((F->e_1171 != NULL)) {
if ((((((*(P163)rt_nil_check(F->e_1171)).kind_ == ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->e_1171)).kind_ == ((rt_int)45LL))) && ((*(P163)rt_nil_check(F->e_1171)).ival_ != ((rt_int)1LL))) && (!F->declared_1172))) {
f_declare_subprograms_427(F->up, F->e_1171);
F->declared_1172 = 1;
}
f_decl_element_436(F->up, F->e_1171);
F->e_1171 = (*(P163)rt_nil_check(F->e_1171)).next_;
}
L_end_1173: ;
ret_:

  return;
}

static void f_decl_element_436(struct f_greenc_1fr *up_, P163 e_435) {
  struct f_decl_element_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_435 = e_435;
F->y_1174 = NULL;
F->z_1175 = NULL;
F->t_1176 = NULL;
F->vt_1177 = NULL;
F->c_1178 = NULL;
F->acc_1179 = NULL;
F->v_1180 = NULL;
F->x_1181 = NULL;
{ rt_int sel1183 = (*(P163)rt_nil_check(F->e_435)).kind_;
if (0 || sel1183 == ((rt_int)42LL)) {
F->y_1174 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_)));
if ((((((((F->y_1174 != NULL) && ((*(P110)rt_nil_check(F->y_1174)).kind_ == ((rt_int)5LL))) && ((*(P110)rt_nil_check(F->y_1174)).depth_ == F->up->depth_113)) && ((*(P110)rt_nil_check(F->y_1174)).t_ != NULL)) && (*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1174)).t_)).priv_) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1174)).t_)).kind_ == ((rt_int)9LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).kind_ != ((rt_int)77LL)))) {
f_type_definition_389(F->up, (*(P163)rt_nil_check(F->e_435)).a_, (*(P163)rt_nil_check(F->e_435)).name_, &F->t_1176, &F->c_1178);
f_complete_private_625(F->up, (*(P110)rt_nil_check(F->y_1174)).t_, F->t_1176);
(*(P110)rt_nil_check(F->y_1174)).c_ = F->c_1178;
} else {
F->y_1174 = f_new_sym_354(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_435)).name_);
(*(P110)rt_nil_check(F->y_1174)).decl_ = F->e_435;
f_define_349(F->up, F->y_1174, (*(P163)rt_nil_check(F->e_435)).line_);
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).kind_ == ((rt_int)77LL))) {
(*(P110)rt_nil_check(F->y_1174)).t_ = f_new_typ_356(F->up, ((rt_int)9LL));
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1174)).t_)).name_ = (*(P163)rt_nil_check(F->e_435)).name_;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1174)).t_)).priv_ = 1;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1174)).t_)).decl_ = F->up->cur_pkg_175;
} else {
f_type_definition_389(F->up, (*(P163)rt_nil_check(F->e_435)).a_, (*(P163)rt_nil_check(F->e_435)).name_, &(*(P110)rt_nil_check(F->y_1174)).t_, &(*(P110)rt_nil_check(F->y_1174)).c_);
}
}
} else if (0 || sel1183 == ((rt_int)43LL)) {
F->y_1174 = f_new_sym_354(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_435)).name_);
f_resolve_384(F->up, (*(P163)rt_nil_check(F->e_435)).a_, &(*(P110)rt_nil_check(F->y_1174)).t_, &(*(P110)rt_nil_check(F->y_1174)).c_);
f_define_349(F->up, F->y_1174, (*(P163)rt_nil_check(F->e_435)).line_);
} else if (0 || sel1183 == ((rt_int)40LL)) {
f_resolve_384(F->up, (*(P163)rt_nil_check(F->e_435)).a_, &F->t_1176, &F->c_1178);
F->y_1174 = f_new_sym_354(F->up, ((rt_int)1LL), (*(P163)rt_nil_check(F->e_435)).name_);
if (((*(P163)rt_nil_check(F->e_435)).flag_ == ((rt_int)2LL))) {
f_lvalue_498(F->up, (*(P163)rt_nil_check(F->e_435)).b_, &F->v_1180, &F->vt_1177, &F->c_1178, &(*(P110)rt_nil_check(F->y_1174)).ro_);
f_check_type_363(F->up, F->vt_1177, F->t_1176, (*(P163)rt_nil_check(F->e_435)).line_);
f_ctype_368(F->up, F->t_1176, &F->acc_1179);
f_new_name_188(F->up, rt_str_catc(f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_))), 95), &F->x_1181);
if (F->up->in_func_131) {
f_put_to_210(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->acc_1179))), rt_str(" *", 2)), (*(P133)rt_nil_check(F->x_1181))), 59));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check(F->x_1181))), rt_str(" = &(", 5)), (*(P133)rt_nil_check(F->v_1180))), rt_str(");", 2)));
(*(P110)rt_nil_check(F->y_1174)).byref_ = 1;
(*(P110)rt_nil_check(F->y_1174)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->y_1174)).access_path_ = F->x_1181;
} else {
f_put_to_210(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->acc_1179))), rt_str(" *g_", 4)), (*(P133)rt_nil_check(F->x_1181))), 59));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("g_", 2), (*(P133)rt_nil_check(F->x_1181))), rt_str(" = &(", 5)), (*(P133)rt_nil_check(F->v_1180))), rt_str(");", 2)));
(*(P110)rt_nil_check(F->y_1174)).level_ = ((rt_int)0LL);
(*(P110)rt_nil_check(F->y_1174)).access_path_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(*g_", 4), (*(P133)rt_nil_check(F->x_1181))), 41));
}
(*(P110)rt_nil_check(F->y_1174)).t_ = F->vt_1177;
(*(P110)rt_nil_check(F->y_1174)).c_ = F->c_1178;
f_define_349(F->up, F->y_1174, (*(P163)rt_nil_check(F->e_435)).line_);
goto ret_;
}
if (((((*(P115)rt_nil_check(F->t_1176)).kind_ == ((rt_int)5LL)) && ((*(P170)rt_nil_check(F->c_1178)).slen_ == NULL)) && ((*(P163)rt_nil_check(F->e_435)).b_ != NULL))) {
F->up->vrp_ok_180 = 1;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_435)).b_, F->t_1176, &F->vt_1177, &F->v_1180);
F->up->vrp_ok_180 = 0;
f_check_type_363(F->up, F->vt_1177, F->t_1176, (*(P163)rt_nil_check(F->e_435)).line_);
f_storage_422(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_)), F->t_1176, &F->acc_1179);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1179)), rt_str(" = rt_str_copy(", 15)), (*(P133)rt_nil_check(F->v_1180))), rt_str(");", 2)));
} else {
f_storage_422(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_)), F->t_1176, &F->acc_1179);
f_init_storage_395(F->up, (*(P133)rt_nil_check(F->acc_1179)), F->t_1176, F->c_1178);
if (((*(P163)rt_nil_check(F->e_435)).b_ != NULL)) {
F->up->vrp_ok_180 = 1;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_435)).b_, F->t_1176, &F->vt_1177, &F->v_1180);
F->up->vrp_ok_180 = 0;
f_check_type_363(F->up, F->vt_1177, F->t_1176, (*(P163)rt_nil_check(F->e_435)).line_);
f_assign_code_403(F->up, (*(P133)rt_nil_check(F->acc_1179)), F->t_1176, (*(P133)rt_nil_check(F->v_1180)), F->c_1178, &F->x_1181);
f_emit_212(F->up, (*(P133)rt_nil_check(F->x_1181)));
}
}
(*(P110)rt_nil_check(F->y_1174)).t_ = F->t_1176;
(*(P110)rt_nil_check(F->y_1174)).c_ = F->c_1178;
f_bind_425(F->up, F->y_1174, F->acc_1179);
f_define_349(F->up, F->y_1174, (*(P163)rt_nil_check(F->e_435)).line_);
} else if (0 || sel1183 == ((rt_int)41LL)) {
f_resolve_384(F->up, (*(P163)rt_nil_check(F->e_435)).a_, &F->t_1176, &F->c_1178);
F->y_1174 = f_new_sym_354(F->up, ((rt_int)2LL), (*(P163)rt_nil_check(F->e_435)).name_);
F->up->vrp_ok_180 = 1;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_435)).b_, F->t_1176, &F->vt_1177, &F->v_1180);
F->up->vrp_ok_180 = 0;
f_check_type_363(F->up, F->vt_1177, F->t_1176, (*(P163)rt_nil_check(F->e_435)).line_);
if (((*(P115)rt_nil_check(F->t_1176)).kind_ == ((rt_int)1LL))) {
f_manifest_380(F->up, (*(P163)rt_nil_check(F->e_435)).b_, &(*(P110)rt_nil_check(F->y_1174)).mvalue_, &F->ok_1182);
(*(P110)rt_nil_check(F->y_1174)).hasmv_ = F->ok_1182;
}
f_storage_422(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_)), F->t_1176, &F->acc_1179);
f_copy_code_407(F->up, F->t_1176, (*(P133)rt_nil_check(F->v_1180)), &F->x_1181);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1179)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1181))), 59));
(*(P110)rt_nil_check(F->y_1174)).t_ = F->t_1176;
(*(P110)rt_nil_check(F->y_1174)).c_ = F->c_1178;
(*(P110)rt_nil_check(F->y_1174)).ro_ = 1;
f_bind_425(F->up, F->y_1174, F->acc_1179);
f_define_349(F->up, F->y_1174, (*(P163)rt_nil_check(F->e_435)).line_);
} else if (0 || sel1183 == ((rt_int)46LL)) {
if (((*(P163)rt_nil_check(F->e_435)).a_ != NULL)) {
if ((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_613(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).a_))) {
F->y_1174 = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).name_)), (*(P163)rt_nil_check(F->e_435)).line_);
} else if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1174 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_435)).a_)).name_)));
} else {
F->y_1174 = NULL;
}
if (((F->y_1174 == NULL) || ((*(P110)rt_nil_check(F->y_1174)).kind_ != ((rt_int)6LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_435)).line_, rt_str("an exception is renamed only as an exception", 44));
}
f_copy_sym_622(F->up, F->y_1174, &F->z_1175);
(*(P110)rt_nil_check(F->z_1175)).name_ = (*(P163)rt_nil_check(F->e_435)).name_;
f_define_349(F->up, F->z_1175, (*(P163)rt_nil_check(F->e_435)).line_);
goto ret_;
}
F->y_1174 = f_new_sym_354(F->up, ((rt_int)6LL), (*(P163)rt_nil_check(F->e_435)).name_);
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("ex_", 3), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1174)).cname_);
f_put_to_210(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str("static int ", 11), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1174)).cname_))), 59));
f_put_to_210(F->up, F->up->out_excs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1174)).cname_))), rt_str(" = rt_exc(", 10)), f_q_203(F->up)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_))), f_q_203(F->up)), rt_str(");", 2)));
f_define_349(F->up, F->y_1174, (*(P163)rt_nil_check(F->e_435)).line_);
} else if (0 || sel1183 == ((rt_int)44LL) || sel1183 == ((rt_int)45LL)) {
if (f_is_generic_name_801(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_435)).name_)))) {
f_attach_generic_body_803(F->up, F->e_435);
} else if (((*(P163)rt_nil_check(F->e_435)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_432(F->up, F->e_435, &F->y_1174);
f_define_349(F->up, F->y_1174, (*(P163)rt_nil_check(F->e_435)).line_);
} else {
f_subprogram_body_441(F->up, F->e_435, f_lookup_decl_338(F->up, F->e_435));
}
} else if (0 || sel1183 == ((rt_int)55LL)) {
f_use_clause_634(F->up, F->e_435);
} else {
f_other_decl_438(F->up, F->e_435);
}
}
ret_:

  return;
}

static void f_other_decl_438(struct f_greenc_1fr *up_, P163 e_437) {
  struct f_other_decl_438fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_437 = e_437;
if (((*(P163)rt_nil_check(F->e_437)).kind_ == ((rt_int)48LL))) {
f_package_spec_627(F->up, F->e_437);
} else if (((*(P163)rt_nil_check(F->e_437)).kind_ == ((rt_int)49LL))) {
f_package_body_632(F->up, F->e_437);
} else {
f_task_decl_707(F->up, F->e_437);
}
ret_:

  return;
}

static void f_subprogram_body_441(struct f_greenc_1fr *up_, P163 d_439, P110 y_440) {
  struct f_subprogram_body_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_439 = d_439;
F->y_440 = y_440;
F->saved_code_1184 = NULL;
F->saved_code_1184 = F->up->code_129;
F->saved_fields_1185 = NULL;
F->saved_fields_1185 = F->up->fields_buf_130;
F->saved_in_1186 = F->up->in_func_131;
F->saved_sym_1187 = NULL;
F->saved_sym_1187 = F->up->func_sym_135;
F->saved_exits_1188 = NULL;
F->saved_exits_1188 = F->up->exits_138;
F->saved_frames_1189 = F->up->frames_143;
F->saved_handlers_1190 = NULL;
F->saved_handlers_1190 = F->up->handlers_146;
F->saved_cleanups_1191 = NULL;
F->saved_cleanups_1191 = F->up->cleanups_147;
F->saved_pure_1192 = NULL;
F->saved_pure_1192 = F->up->pure_sym_178;
F->aw_1193 = NULL;
F->saved_pdepth_1194 = F->up->pure_depth_179;
F->args_1195 = NULL;
F->head_1196 = NULL;
F->frame_1197 = NULL;
F->parent_1198 = NULL;
F->ct_1199 = NULL;
F->x_1200 = NULL;
F->pm_1201 = NULL;
F->pm_1201 = (*(P110)rt_nil_check(F->y_440)).params_;
F->p_1202 = NULL;
F->frame_1197 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_440)).cname_)), rt_str("fr", 2)));
if (F->up->in_func_131) {
F->parent_1198 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).cname_)), rt_str("fr", 2)));
}
F->up->code_129 = f_new_buffer_207(F->up);
F->up->fields_buf_130 = f_new_buffer_207(F->up);
F->up->in_func_131 = 1;
F->up->func_sym_135 = F->y_440;
F->up->exits_138 = NULL;
F->up->frames_143 = ((rt_int)0LL);
F->up->handlers_146 = NULL;
F->up->cleanups_147 = NULL;
F->up->cur_level_132 = rt_add(F->up->cur_level_132, ((rt_int)1LL));
F->args_1195 = f_mk_185(F->up, rt_str("", 0));
f_open_scope_350(F->up);
if ((((*(P110)rt_nil_check(F->y_440)).kind_ == ((rt_int)3LL)) && (!(*(P110)rt_nil_check(F->y_440)).vrp_))) {
F->up->pure_sym_178 = F->y_440;
F->up->pure_depth_179 = F->up->depth_113;
}
if ((F->parent_1198 != NULL)) {
f_put_to_210(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P133)rt_nil_check(F->parent_1198))), rt_str(" *up;", 5)));
F->args_1195 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->parent_1198))), rt_str(" *up_", 5)));
f_emit_212(F->up, rt_str("F->up = up_;", 12));
}
while ((F->pm_1201 != NULL)) {
f_ctype_368(F->up, (*(P1070)rt_nil_check(F->pm_1201)).t_, &F->ct_1199);
if ((((*(P133)rt_nil_check(F->args_1195))).len > ((rt_int)0LL))) {
F->args_1195 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1195)), rt_str(", ", 2)));
}
if (((*(P1070)rt_nil_check(F->pm_1201)).mode_ == ((rt_int)1LL))) {
F->p_1202 = f_new_sym_354(F->up, ((rt_int)2LL), (*(P1070)rt_nil_check(F->pm_1201)).name_);
(*(P110)rt_nil_check(F->p_1202)).ro_ = 1;
f_put_to_210(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1199))), 32), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))), 59));
F->args_1195 = f_mk_185(F->up, rt_str_cat(rt_str_catc(rt_str_cat((*(P133)rt_nil_check(F->args_1195)), (*(P133)rt_nil_check(F->ct_1199))), 32), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))));
f_copy_code_407(F->up, (*(P1070)rt_nil_check(F->pm_1201)).t_, (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_)), &F->x_1200);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1200))), 59));
} else {
F->p_1202 = f_new_sym_354(F->up, ((rt_int)1LL), (*(P1070)rt_nil_check(F->pm_1201)).name_);
(*(P110)rt_nil_check(F->p_1202)).byref_ = 1;
f_put_to_210(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1199))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))), 59));
F->args_1195 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->args_1195)), (*(P133)rt_nil_check(F->ct_1199))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))));
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))), 59));
}
(*(P110)rt_nil_check(F->p_1202)).access_path_ = (*(P1070)rt_nil_check(F->pm_1201)).cfield_;
(*(P110)rt_nil_check(F->p_1202)).t_ = (*(P1070)rt_nil_check(F->pm_1201)).t_;
(*(P110)rt_nil_check(F->p_1202)).c_ = (*(P1070)rt_nil_check(F->pm_1201)).c_;
(*(P110)rt_nil_check(F->p_1202)).level_ = F->up->cur_level_132;
f_define_349(F->up, F->p_1202, (*(P163)rt_nil_check(F->d_439)).line_);
F->pm_1201 = (*(P1070)rt_nil_check(F->pm_1201)).next_;
}
L_end_1203: ;
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_440)).result_)).kind_ != ((rt_int)9LL))) {
f_ctype_368(F->up, (*(P110)rt_nil_check(F->y_440)).result_, &F->ct_1199);
f_put_to_210(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1199))), rt_str(" result_;", 9)));
}
f_decl_elements_434(F->up, (*(P163)rt_nil_check(F->d_439)).c_);
if (((((*(P163)rt_nil_check(F->d_439)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_439)).tag_)), rt_str("INTERFACE", 9))) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_440)).result_)).kind_ == ((rt_int)9LL)))) {
F->x_1200 = f_mk_185(F->up, rt_str("", 0));
F->pm_1201 = (*(P110)rt_nil_check(F->y_440)).params_;
while ((F->pm_1201 != NULL)) {
if ((((*(P133)rt_nil_check(F->x_1200))).len > ((rt_int)0LL))) {
F->x_1200 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->x_1200)), rt_str(", ", 2)));
}
F->x_1200 = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_1200)), rt_str("F->", 3)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1201)).cfield_))));
F->pm_1201 = (*(P1070)rt_nil_check(F->pm_1201)).next_;
}
L_end_1204: ;
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("rt_g_", 5), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_439)).name_)))), 40), (*(P133)rt_nil_check(F->x_1200))), rt_str(");", 2)));
} else {
f_guarded_452(F->up, (*(P163)rt_nil_check(F->d_439)).d_, (*(P163)rt_nil_check(F->d_439)).e_, (*(P163)rt_nil_check(F->d_439)).line_);
}
f_task_awaits_726(F->up, (*(P163)rt_nil_check(F->d_439)).c_, &F->aw_1193);
f_close_scope_351(F->up);
F->up->cur_level_132 = rt_sub(F->up->cur_level_132, ((rt_int)1LL));
if ((((*(P133)rt_nil_check(F->args_1195))).len == ((rt_int)0LL))) {
F->args_1195 = f_mk_185(F->up, rt_str("void", 4));
}
f_ctype_368(F->up, (*(P110)rt_nil_check(F->y_440)).result_, &F->ct_1199);
F->head_1196 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1199))), 32), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_440)).cname_))), 40), (*(P133)rt_nil_check(F->args_1195))), 41));
f_put_to_210(F->up, F->up->out_protos_124, rt_str_catc((*(P133)rt_nil_check(F->head_1196)), 59));
f_put_to_210(F->up, F->up->out_frames_122, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->frame_1197))), rt_str(" { int dummy;", 13)));
f_splice_217(F->up, F->up->out_frames_122, F->up->fields_buf_130);
f_put_to_210(F->up, F->up->out_frames_122, rt_str("};", 2));
f_put_to_210(F->up, F->up->out_funcs_126, rt_str_cat((*(P133)rt_nil_check(F->head_1196)), rt_str(" {", 2)));
f_put_to_210(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P133)rt_nil_check(F->frame_1197))), rt_str(" *F = rt_alloc(sizeof *F);", 26)));
if ((((*(P110)rt_nil_check(F->y_440)).kind_ == ((rt_int)4LL)) && ((*(P110)rt_nil_check(F->y_440)).access_path_ != NULL))) {
f_put_to_210(F->up, F->up->out_funcs_126, rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_440)).access_path_))));
}
f_splice_217(F->up, F->up->out_funcs_126, F->up->code_129);
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_440)).result_)).kind_ != ((rt_int)9LL))) {
f_put_to_210(F->up, F->up->out_funcs_126, rt_str("  rt_raise(RT_X_INIT);", 22));
f_put_to_210(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_210(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1193)));
f_put_to_210(F->up, F->up->out_funcs_126, rt_str("  return F->result_;", 20));
} else {
f_put_to_210(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_210(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1193)));
f_put_to_210(F->up, F->up->out_funcs_126, rt_str("  return;", 9));
}
f_put_to_210(F->up, F->up->out_funcs_126, rt_str("}", 1));
f_put_to_210(F->up, F->up->out_funcs_126, rt_str("", 0));
F->up->code_129 = F->saved_code_1184;
F->up->fields_buf_130 = F->saved_fields_1185;
F->up->in_func_131 = F->saved_in_1186;
F->up->func_sym_135 = F->saved_sym_1187;
F->up->exits_138 = F->saved_exits_1188;
F->up->frames_143 = F->saved_frames_1189;
F->up->handlers_146 = F->saved_handlers_1190;
F->up->cleanups_147 = F->saved_cleanups_1191;
F->up->pure_sym_178 = F->saved_pure_1192;
F->up->pure_depth_179 = F->saved_pdepth_1194;
ret_:

  return;
}

static void f_gen_statements_443(struct f_greenc_1fr *up_, P163 stmts_442) {
  struct f_gen_statements_443fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_442 = stmts_442;
F->s_1205 = NULL;
F->s_1205 = F->stmts_442;
while ((F->s_1205 != NULL)) {
f_gen_statement_458(F->up, F->s_1205);
F->s_1205 = (*(P163)rt_nil_check(F->s_1205)).next_;
}
L_end_1206: ;
ret_:

  return;
}

static void f_pop_frames_445(struct f_greenc_1fr *up_, rt_int upto_444) {
  struct f_pop_frames_445fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_444 = upto_444;
F->i_1207 = F->up->frames_143;
F->c_1208 = NULL;
F->c_1208 = F->up->cleanups_147;
while ((F->i_1207 > F->upto_444)) {
f_emit_212(F->up, (*(P133)rt_nil_check((*(P144)rt_nil_check(F->c_1208)).s_)));
F->c_1208 = (*(P144)rt_nil_check(F->c_1208)).next_;
F->i_1207 = rt_sub(F->i_1207, ((rt_int)1LL));
}
L_end_1209: ;
ret_:

  return;
}

static void f_push_cleanup_447(struct f_greenc_1fr *up_, rstr s_446) {
  struct f_push_cleanup_447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_446 = rt_str_copy(s_446);
F->up->cleanups_147 = ({ R145 *cell1210 = rt_alloc(sizeof(R145)); *cell1210 = cp_R145(({ R145 ag1211; ag1211.s_ = NULL; ag1211.next_ = F->up->cleanups_147; ag1211; })); (P144)cell1210; });
(*(P144)rt_nil_check(F->up->cleanups_147)).s_ = f_mk_185(F->up, F->s_446);
F->up->frames_143 = rt_add(F->up->frames_143, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_448(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_147 = (*(P144)rt_nil_check(F->up->cleanups_147)).next_;
F->up->frames_143 = rt_sub(F->up->frames_143, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_452(struct f_greenc_1fr *up_, P163 stmts_449, P163 hs_450, rt_int line_451) {
  struct f_guarded_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_449 = stmts_449;
F->hs_450 = hs_450;
F->line_451 = line_451;
F->f_1212 = NULL;
F->x_1213 = NULL;
F->h_1214 = NULL;
F->n_1215 = NULL;
F->first_1216 = 1;
F->has_others_1217 = 0;
F->conds_1218 = NULL;
if ((F->hs_450 == NULL)) {
f_gen_statements_443(F->up, F->stmts_449);
goto ret_;
}
f_new_name_188(F->up, rt_str("xf", 2), &F->f_1212);
f_new_name_188(F->up, rt_str("x", 1), &F->x_1213);
f_push_cleanup_447(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1212))), rt_str(");", 2)));
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str("{ rt_frame ", 11), (*(P133)rt_nil_check(F->f_1212))), 59));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->f_1212))), rt_str(")) {", 4)));
f_gen_statements_443(F->up, F->stmts_449);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1212))), rt_str(");", 2)));
f_emit_212(F->up, rt_str("} else {", 8));
f_pop_cleanup_448(F->up);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1212))), rt_str(");", 2)));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->x_1213))), rt_str(" = rt_xcur;", 11)));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (rt_g_aborted()) rt_raise(", 29), (*(P133)rt_nil_check(F->x_1213))), rt_str(");", 2)));
F->up->handlers_146 = ({ R145 *cell1219 = rt_alloc(sizeof(R145)); *cell1219 = cp_R145(({ R145 ag1220; ag1220.s_ = F->x_1213; ag1220.next_ = F->up->handlers_146; ag1220; })); (P144)cell1219; });
F->h_1214 = F->hs_450;
while ((F->h_1214 != NULL)) {
F->n_1215 = (*(P163)rt_nil_check(F->h_1214)).a_;
F->conds_1218 = f_mk_185(F->up, rt_str("0", 1));
while ((F->n_1215 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1215)).name_)), rt_str("OTHERS", 6))) {
F->has_others_1217 = 1;
F->conds_1218 = f_mk_185(F->up, rt_str("1", 1));
} else {
F->up->prefix_hint_176 = (*(P163)rt_nil_check(F->n_1215)).tag_;
f_exc_id_456(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1215)).name_)), (*(P163)rt_nil_check(F->h_1214)).line_, &F->f_1212);
F->conds_1218 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1218)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->x_1213))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->f_1212))));
}
F->n_1215 = (*(P163)rt_nil_check(F->n_1215)).next_;
}
L_end_1222: ;
if (F->first_1216) {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1218))), rt_str(") {", 3)));
} else {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1218))), rt_str(") {", 3)));
}
F->first_1216 = 0;
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->h_1214)).b_);
F->h_1214 = (*(P163)rt_nil_check(F->h_1214)).next_;
}
L_end_1221: ;
if ((!F->has_others_1217)) {
f_emit_212(F->up, rt_str("} else {", 8));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1213))), rt_str(");", 2)));
}
f_emit_212(F->up, rt_str("}", 1));
F->up->handlers_146 = (*(P144)rt_nil_check(F->up->handlers_146)).next_;
f_emit_212(F->up, rt_str("}", 1));
f_emit_212(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_exc_id_456(struct f_greenc_1fr *up_, rstr name_453, rt_int line_454, P133 *r_455) {
  struct f_exc_id_456fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_453 = rt_str_copy(name_453);
F->line_454 = line_454;
F->r_455 = r_455;
F->y_1223 = NULL;
F->y_1223 = f_lookup_330(F->up, F->name_453);
if ((F->up->prefix_hint_176 != NULL)) {
F->y_1223 = f_member_of_617(F->up, (*(P133)rt_nil_check(F->up->prefix_hint_176)), F->name_453, F->line_454);
F->up->prefix_hint_176 = NULL;
}
if (((F->y_1223 == NULL) || ((*(P110)rt_nil_check(F->y_1223)).kind_ != ((rt_int)6LL)))) {
f_fail_206(F->up, F->line_454, rt_str_cat(F->name_453, rt_str(" is not an exception", 20)));
}
(*F->r_455) = (*(P110)rt_nil_check(F->y_1223)).cname_;
ret_:

  return;
}

static void f_gen_statement_458(struct f_greenc_1fr *up_, P163 s_457) {
  struct f_gen_statement_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_457 = s_457;
F->t_1224 = NULL;
F->vt_1225 = NULL;
F->c_1226 = NULL;
F->lv_1227 = NULL;
F->v_1228 = NULL;
F->x_1229 = NULL;
{ rt_int sel1231 = (*(P163)rt_nil_check(F->s_457)).kind_;
if (0 || sel1231 == ((rt_int)20LL)) {
if (((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_457)).a_)).kind_ == ((rt_int)8LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_457)).a_)).b_ != NULL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_457)).a_)).b_)).kind_ == ((rt_int)14LL)))) {
f_slice_assign_460(F->up, F->s_457);
goto ret_;
}
F->up->in_lv_path_181 = 1;
F->up->last_deref_182 = 0;
f_lvalue_498(F->up, (*(P163)rt_nil_check(F->s_457)).a_, &F->lv_1227, &F->t_1224, &F->c_1226, &F->ro_1230);
F->up->in_lv_path_181 = 0;
if (F->ro_1230) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_457)).line_, rt_str("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_775(F->up, (*(P163)rt_nil_check(F->s_457)).a_, (*(P163)rt_nil_check(F->s_457)).line_);
F->up->vrp_ok_180 = 1;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_457)).b_, F->t_1224, &F->vt_1225, &F->v_1228);
F->up->vrp_ok_180 = 0;
f_check_type_363(F->up, F->vt_1225, F->t_1224, (*(P163)rt_nil_check(F->s_457)).line_);
f_assign_code_403(F->up, (*(P133)rt_nil_check(F->lv_1227)), F->t_1224, (*(P133)rt_nil_check(F->v_1228)), F->c_1226, &F->x_1229);
f_emit_212(F->up, (*(P133)rt_nil_check(F->x_1229)));
} else if (0 || sel1231 == ((rt_int)21LL)) {
F->up->vrp_ok_180 = 1;
f_gen_call_462(F->up, F->s_457);
F->up->vrp_ok_180 = 0;
} else if (0 || sel1231 == ((rt_int)22LL)) {
f_gen_if_464(F->up, F->s_457);
} else if (0 || sel1231 == ((rt_int)23LL)) {
f_gen_case_466(F->up, F->s_457);
} else if (0 || sel1231 == ((rt_int)24LL)) {
f_gen_loop_472(F->up, F->s_457);
} else if (0 || sel1231 == ((rt_int)25LL)) {
f_gen_block_474(F->up, F->s_457);
} else if (0 || sel1231 == ((rt_int)26LL)) {
f_gen_exit_476(F->up, F->s_457);
} else if (0 || sel1231 == ((rt_int)27LL)) {
f_gen_return_478(F->up, F->s_457);
} else if (0 || sel1231 == ((rt_int)28LL)) {
if (((((*(P163)rt_nil_check(F->s_457)).tag_ != NULL) && f_is_task_name_680(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_457)).tag_)))) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_457)).name_)), rt_str("FAILURE", 7)))) {
f_task_failure_728(F->up, F->s_457);
} else {
F->up->prefix_hint_176 = (*(P163)rt_nil_check(F->s_457)).tag_;
f_exc_id_456(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_457)).name_)), (*(P163)rt_nil_check(F->s_457)).line_, &F->x_1229);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1229))), rt_str(");", 2)));
}
} else if (0 || sel1231 == ((rt_int)29LL)) {
if ((F->up->handlers_146 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_457)).line_, rt_str("raise; outside an exception handler", 35));
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check((*(P144)rt_nil_check(F->up->handlers_146)).s_))), rt_str(");", 2)));
} else if (0 || sel1231 == ((rt_int)30LL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_457)).a_, F->up->ty_bool_150, &F->vt_1225, &F->v_1228);
f_check_type_363(F->up, F->vt_1225, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_457)).line_);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (!(", 6), (*(P133)rt_nil_check(F->v_1228))), rt_str(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1231 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_770(F->up, F->s_457);
}
}
ret_:

  return;
}

static void f_slice_assign_460(struct f_greenc_1fr *up_, P163 s_459) {
  struct f_slice_assign_460fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_459 = s_459;
F->lv_1232 = NULL;
F->lo_1233 = NULL;
F->hi_1234 = NULL;
F->v_1235 = NULL;
F->t_1236 = NULL;
F->vt_1237 = NULL;
F->c_1238 = NULL;
F->up->in_lv_path_181 = 1;
F->up->last_deref_182 = 0;
f_lvalue_498(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_459)).a_)).a_, &F->lv_1232, &F->t_1236, &F->c_1238, &F->ro_1239);
F->up->in_lv_path_181 = 0;
if ((F->ro_1239 || ((*(P115)rt_nil_check(F->t_1236)).kind_ != ((rt_int)5LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_459)).line_, rt_str("assignment to a slice needs a STRING variable", 45));
}
f_check_pure_target_775(F->up, (*(P163)rt_nil_check(F->s_459)).a_, (*(P163)rt_nil_check(F->s_459)).line_);
f_gexpr_536(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_459)).a_)).b_)).a_, F->up->ty_int_149, &F->vt_1237, &F->lo_1233);
f_gexpr_536(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_459)).a_)).b_)).b_, F->up->ty_int_149, &F->vt_1237, &F->hi_1234);
F->up->vrp_ok_180 = 1;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_459)).b_, F->up->ty_string_153, &F->vt_1237, &F->v_1235);
F->up->vrp_ok_180 = 0;
f_check_type_363(F->up, F->vt_1237, F->up->ty_string_153, (*(P163)rt_nil_check(F->s_459)).line_);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P133)rt_nil_check(F->lv_1232))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1233))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1234))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->v_1235))), rt_str(");", 2)));
ret_:

  return;
}

static void f_gen_call_462(struct f_greenc_1fr *up_, P163 s_461) {
  struct f_gen_call_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_461 = s_461;
F->c_1240 = NULL;
F->c_1240 = (*(P163)rt_nil_check(F->s_461)).a_;
F->t_1241 = NULL;
F->v_1242 = NULL;
if ((((*(P163)rt_nil_check(F->c_1240)).kind_ == ((rt_int)5LL)) || ((*(P163)rt_nil_check(F->c_1240)).kind_ == ((rt_int)9LL)))) {
F->c_1240 = f_nn_231(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->s_461)).line_);
(*(P163)rt_nil_check(F->c_1240)).a_ = (*(P163)rt_nil_check(F->s_461)).a_;
}
if (((*(P163)rt_nil_check(F->c_1240)).kind_ != ((rt_int)8LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_461)).line_, rt_str("not a procedure call", 20));
}
f_gcall_599(F->up, F->c_1240, 1, &F->t_1241, &F->v_1242);
f_emit_212(F->up, rt_str_catc((*(P133)rt_nil_check(F->v_1242)), 59));
ret_:

  return;
}

static void f_gen_if_464(struct f_greenc_1fr *up_, P163 s_463) {
  struct f_gen_if_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_463 = s_463;
F->a_1243 = NULL;
F->a_1243 = (*(P163)rt_nil_check(F->s_463)).a_;
F->first_1244 = 1;
F->t_1245 = NULL;
F->v_1246 = NULL;
while ((F->a_1243 != NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->a_1243)).a_, F->up->ty_bool_150, &F->t_1245, &F->v_1246);
f_check_type_363(F->up, F->t_1245, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_463)).line_);
if (F->first_1244) {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1246))), rt_str(") {", 3)));
} else {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->v_1246))), rt_str(") {", 3)));
}
F->first_1244 = 0;
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->a_1243)).b_);
F->a_1243 = (*(P163)rt_nil_check(F->a_1243)).next_;
}
L_end_1247: ;
if (((*(P163)rt_nil_check(F->s_463)).flag_ == ((rt_int)1LL))) {
f_emit_212(F->up, rt_str("} else {", 8));
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->s_463)).b_);
}
f_emit_212(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_gen_case_466(struct f_greenc_1fr *up_, P163 s_465) {
  struct f_gen_case_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_465 = s_465;
F->st_1248 = NULL;
F->vt_1249 = NULL;
F->first_1250 = 1;
F->a_1251 = NULL;
F->a_1251 = (*(P163)rt_nil_check(F->s_465)).b_;
F->lab_1252 = NULL;
F->sel_1253 = NULL;
F->tmp_1254 = NULL;
F->ct_1255 = NULL;
F->conds_1256 = NULL;
F->v_1257 = NULL;
F->lo_1258 = NULL;
F->hi_1259 = NULL;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_465)).a_, NULL, &F->st_1248, &F->sel_1253);
f_new_name_188(F->up, rt_str("sel", 3), &F->tmp_1254);
f_ctype_368(F->up, F->st_1248, &F->ct_1255);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ ", 2), (*(P133)rt_nil_check(F->ct_1255))), 32), (*(P133)rt_nil_check(F->tmp_1254))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->sel_1253))), 59));
while ((F->a_1251 != NULL)) {
F->lab_1252 = (*(P163)rt_nil_check(F->a_1251)).a_;
F->conds_1256 = f_mk_185(F->up, rt_str("0", 1));
while ((F->lab_1252 != NULL)) {
if (((*(P163)rt_nil_check(F->lab_1252)).b_ == NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->lab_1252)).a_, F->st_1248, &F->vt_1249, &F->v_1257);
f_check_type_363(F->up, F->vt_1249, F->st_1248, (*(P163)rt_nil_check(F->s_465)).line_);
F->conds_1256 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1256)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->tmp_1254))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->v_1257))));
} else {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->lab_1252)).a_, F->st_1248, &F->vt_1249, &F->lo_1258);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->lab_1252)).b_, F->st_1248, &F->vt_1249, &F->hi_1259);
F->conds_1256 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1256)), rt_str(" || (", 5)), (*(P133)rt_nil_check(F->tmp_1254))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1258))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->tmp_1254))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hi_1259))), 41));
}
F->lab_1252 = (*(P163)rt_nil_check(F->lab_1252)).next_;
}
L_end_1261: ;
if (F->first_1250) {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1256))), rt_str(") {", 3)));
} else {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1256))), rt_str(") {", 3)));
}
F->first_1250 = 0;
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->a_1251)).b_);
F->a_1251 = (*(P163)rt_nil_check(F->a_1251)).next_;
}
L_end_1260: ;
if (F->first_1250) {
f_emit_212(F->up, rt_str("{", 1));
} else {
f_emit_212(F->up, rt_str("} else {", 8));
}
if (((*(P163)rt_nil_check(F->s_465)).flag_ == ((rt_int)1LL))) {
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->s_465)).c_);
} else {
f_emit_212(F->up, rt_str("rt_raise(RT_X_CASE);", 20));
}
f_emit_212(F->up, rt_str("}", 1));
f_emit_212(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_push_exit_470(struct f_greenc_1fr *up_, P133 match_467, int is_loop_468, P133 *label_469) {
  struct f_push_exit_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_467 = match_467;
F->is_loop_468 = is_loop_468;
F->label_469 = label_469;
f_new_name_188(F->up, rt_str("L_end_", 6), &(*F->label_469));
F->up->exits_138 = ({ R137 *cell1262 = rt_alloc(sizeof(R137)); *cell1262 = cp_R137(({ R137 ag1263; ag1263.match_ = F->match_467; ag1263.label_ = (*F->label_469); ag1263.depth_ = F->up->frames_143; ag1263.is_loop_ = F->is_loop_468; ag1263.next_ = F->up->exits_138; ag1263; })); (P136)cell1262; });
ret_:

  return;
}

static void f_gen_loop_472(struct f_greenc_1fr *up_, P163 s_471) {
  struct f_gen_loop_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_471 = s_471;
F->t_1264 = NULL;
F->vt_1265 = NULL;
F->c_1266 = NULL;
F->label_1267 = NULL;
F->cond_1268 = NULL;
F->acc_1269 = NULL;
F->lov_1270 = NULL;
F->hiv_1271 = NULL;
F->it_1272 = NULL;
F->y_1273 = NULL;
F->r_1274 = NULL;
f_push_exit_470(F->up, (*(P163)rt_nil_check(F->s_471)).tag_, 1, &F->label_1267);
if (((*(P163)rt_nil_check(F->s_471)).flag_ == ((rt_int)0LL))) {
f_emit_212(F->up, rt_str("for (;;) {", 10));
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->s_471)).b_);
f_emit_212(F->up, rt_str("}", 1));
} else if (((*(P163)rt_nil_check(F->s_471)).flag_ == ((rt_int)1LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_471)).a_, F->up->ty_bool_150, &F->vt_1265, &F->cond_1268);
f_check_type_363(F->up, F->vt_1265, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_471)).line_);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("while (", 7), (*(P133)rt_nil_check(F->cond_1268))), rt_str(") {", 3)));
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->s_471)).b_);
f_emit_212(F->up, rt_str("}", 1));
} else {
F->r_1274 = (*(P163)rt_nil_check(F->s_471)).a_;
F->c_1266 = f_new_cons_357(F->up);
if (((*(P163)rt_nil_check(F->r_1274)).kind_ == ((rt_int)14LL))) {
f_range_bounds_531(F->up, (*(P163)rt_nil_check(F->r_1274)).a_, (*(P163)rt_nil_check(F->r_1274)).b_, NULL, (*(P163)rt_nil_check(F->s_471)).line_, &F->t_1264, &(*(P170)rt_nil_check(F->c_1266)).lo_, &(*(P170)rt_nil_check(F->c_1266)).hi_);
} else {
f_resolve_384(F->up, F->r_1274, &F->t_1264, &F->c_1266);
if (((*(P170)rt_nil_check(F->c_1266)).lo_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_471)).line_, rt_str("a FOR loop needs a discrete range", 33));
}
}
if ((((((*(P115)rt_nil_check(F->t_1264)).kind_ != ((rt_int)1LL)) && ((*(P115)rt_nil_check(F->t_1264)).kind_ != ((rt_int)4LL))) && ((*(P115)rt_nil_check(F->t_1264)).kind_ != ((rt_int)11LL))) && ((*(P115)rt_nil_check(F->t_1264)).kind_ != ((rt_int)2LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_471)).line_, rt_str("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_422(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_471)).name_)), F->t_1264, &F->acc_1269);
f_new_name_188(F->up, rt_str("lo", 2), &F->lov_1270);
f_new_name_188(F->up, rt_str("hi", 2), &F->hiv_1271);
f_new_name_188(F->up, rt_str("it", 2), &F->it_1272);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), (*(P133)rt_nil_check(F->lov_1270))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1266)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hiv_1271))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1266)).hi_))), 59));
if (((*(P163)rt_nil_check(F->s_471)).ival_ == ((rt_int)1LL))) {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1272))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->hiv_1271))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1272))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lov_1270))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1272))), rt_str("--) {", 5)));
} else {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1272))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->lov_1270))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1272))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hiv_1271))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1272))), rt_str("++) {", 5)));
}
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1269)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->it_1272))), 59));
f_open_scope_350(F->up);
F->y_1273 = f_new_sym_354(F->up, ((rt_int)2LL), (*(P163)rt_nil_check(F->s_471)).name_);
(*(P110)rt_nil_check(F->y_1273)).t_ = F->t_1264;
(*(P110)rt_nil_check(F->y_1273)).ro_ = 1;
f_bind_425(F->up, F->y_1273, F->acc_1269);
f_define_349(F->up, F->y_1273, (*(P163)rt_nil_check(F->s_471)).line_);
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->s_471)).b_);
f_close_scope_351(F->up);
f_emit_212(F->up, rt_str("}", 1));
f_emit_212(F->up, rt_str("}", 1));
}
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_212(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1267)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_474(struct f_greenc_1fr *up_, P163 s_473) {
  struct f_gen_block_474fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_473 = s_473;
F->label_1275 = NULL;
F->aw_1276 = NULL;
f_push_exit_470(F->up, (*(P163)rt_nil_check(F->s_473)).tag_, 0, &F->label_1275);
f_emit_212(F->up, rt_str("{", 1));
f_open_scope_350(F->up);
f_decl_elements_434(F->up, (*(P163)rt_nil_check(F->s_473)).a_);
f_guarded_452(F->up, (*(P163)rt_nil_check(F->s_473)).b_, (*(P163)rt_nil_check(F->s_473)).c_, (*(P163)rt_nil_check(F->s_473)).line_);
f_task_awaits_726(F->up, (*(P163)rt_nil_check(F->s_473)).a_, &F->aw_1276);
f_emit_212(F->up, (*(P133)rt_nil_check(F->aw_1276)));
f_close_scope_351(F->up);
f_emit_212(F->up, rt_str("}", 1));
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_212(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1275)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_476(struct f_greenc_1fr *up_, P163 s_475) {
  struct f_gen_exit_476fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_475 = s_475;
F->x_1277 = NULL;
F->x_1277 = F->up->exits_138;
F->t_1278 = NULL;
F->v_1279 = NULL;
while ((F->x_1277 != NULL)) {
if (((F->up->accept_depth_161 > ((rt_int)0LL)) && (F->x_1277 == F->up->accept_exits_142))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_475)).line_, rt_str("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((((*(P163)rt_nil_check(F->s_475)).name_ == NULL) && (*(P136)rt_nil_check(F->x_1277)).is_loop_) || ((((*(P163)rt_nil_check(F->s_475)).name_ != NULL) && ((*(P136)rt_nil_check(F->x_1277)).match_ != NULL)) && rt_str_eq((*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1277)).match_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_475)).name_)))))) {
if (((*(P163)rt_nil_check(F->s_475)).a_ != NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_475)).a_, F->up->ty_bool_150, &F->t_1278, &F->v_1279);
f_check_type_363(F->up, F->t_1278, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_475)).line_);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1279))), rt_str(") {", 3)));
}
f_pop_frames_445(F->up, (*(P136)rt_nil_check(F->x_1277)).depth_);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str("goto ", 5), (*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1277)).label_))), 59));
if (((*(P163)rt_nil_check(F->s_475)).a_ != NULL)) {
f_emit_212(F->up, rt_str("}", 1));
}
goto ret_;
}
F->x_1277 = (*(P136)rt_nil_check(F->x_1277)).next_;
}
L_end_1280: ;
if (((*(P163)rt_nil_check(F->s_475)).name_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_475)).line_, rt_str("exit outside a loop", 19));
}
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_475)).line_, rt_str_cat(rt_str_cat(rt_str("exit ", 5), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_475)).name_))), rt_str(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_478(struct f_greenc_1fr *up_, P163 s_477) {
  struct f_gen_return_478fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_477 = s_477;
F->vt_1281 = NULL;
F->v_1282 = NULL;
if ((!F->up->in_func_131)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_477)).line_, rt_str("return outside a subprogram", 27));
}
if ((F->up->accept_depth_161 > ((rt_int)0LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_477)).line_, rt_str("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).result_)).kind_ == ((rt_int)9LL))) {
if (((*(P163)rt_nil_check(F->s_477)).a_ != NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_477)).line_, rt_str("a procedure returns no value", 28));
}
f_pop_frames_445(F->up, ((rt_int)0LL));
f_emit_212(F->up, rt_str("goto ret_;", 10));
goto ret_;
}
if (((*(P163)rt_nil_check(F->s_477)).a_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_477)).line_, rt_str("return needs a value here", 25));
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_477)).a_, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, &F->vt_1281, &F->v_1282);
f_check_type_363(F->up, F->vt_1281, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, (*(P163)rt_nil_check(F->s_477)).line_);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str("F->result_ = ", 13), (*(P133)rt_nil_check(F->v_1282))), 59));
f_pop_frames_445(F->up, ((rt_int)0LL));
f_emit_212(F->up, rt_str("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_481(struct f_greenc_1fr *up_, P110 y_479, P133 *r_480) {
  struct f_access_of_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_479 = y_479;
F->r_480 = r_480;
F->p_1283 = NULL;
if (((*(P110)rt_nil_check(F->y_479)).level_ <= ((rt_int)0LL))) {
(*F->r_480) = (*(P110)rt_nil_check(F->y_479)).access_path_;
goto ret_;
}
F->p_1283 = f_mk_185(F->up, rt_str("F", 1));
{ rt_int lo1286 = ((rt_int)1LL), hi1287 = rt_sub(F->up->cur_level_132, (*(P110)rt_nil_check(F->y_479)).level_);
for (rt_int it1288 = lo1286; it1288 <= hi1287; it1288++) {
F->i_1285 = it1288;
F->p_1283 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->p_1283)), rt_str("->up", 4)));
}
}
L_end_1284: ;
if ((*(P110)rt_nil_check(F->y_479)).byref_) {
(*F->r_480) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->p_1283))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_479)).access_path_))), 41));
} else {
(*F->r_480) = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1283)), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_479)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_484(struct f_greenc_1fr *up_, rt_int l_482, P133 *r_483) {
  struct f_link_to_484fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_482 = l_482;
F->r_483 = r_483;
(*F->r_483) = f_mk_185(F->up, rt_str("F", 1));
{ rt_int lo1291 = ((rt_int)1LL), hi1292 = rt_sub(F->up->cur_level_132, F->l_482);
for (rt_int it1293 = lo1291; it1293 <= hi1292; it1293++) {
F->i_1290 = it1293;
(*F->r_483) = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_483))), rt_str("->up", 4)));
}
}
L_end_1289: ;
ret_:

  return;
}

static rstr f_c_ident_486(struct f_greenc_1fr *up_, rstr s_485) {
  struct f_c_ident_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_485 = rt_str_copy(s_485);
if (rt_str_eq(F->s_485, rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("MOD", 3))) {
F->result_ = rt_str("op_mod", 6);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("AND", 3))) {
F->result_ = rt_str("op_and", 6);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("OR", 2))) {
F->result_ = rt_str("op_or", 5);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("XOR", 3))) {
F->result_ = rt_str("op_xor", 6);
goto ret_;
} else if (rt_str_eq(F->s_485, rt_str("NOT", 3))) {
F->result_ = rt_str("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_196(F->up, F->s_485);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_490(struct f_greenc_1fr *up_, rstr base_487, P115 t_488, P133 *r_489) {
  struct f_deref_490fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_487 = rt_str_copy(base_487);
F->t_488 = t_488;
F->r_489 = r_489;
F->ct_1294 = NULL;
if (F->up->in_lv_path_181) {
F->up->last_deref_182 = 1;
}
f_ctype_368(F->up, F->t_488, &F->ct_1294);
(*F->r_489) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), (*(P133)rt_nil_check(F->ct_1294))), rt_str(")rt_nil_check(", 14)), F->base_487), rt_str("))", 2)));
ret_:

  return;
}

static int f_is_object_492(struct f_greenc_1fr *up_, P163 e_491) {
  struct f_is_object_492fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_491 = e_491;
F->y_1295 = NULL;
if (((*(P163)rt_nil_check(F->e_491)).kind_ == ((rt_int)5LL))) {
F->y_1295 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_491)).name_)));
F->result_ = ((F->y_1295 != NULL) && (((*(P110)rt_nil_check(F->y_1295)).kind_ == ((rt_int)1LL)) || ((*(P110)rt_nil_check(F->y_1295)).kind_ == ((rt_int)2LL))));
goto ret_;
} else if (((*(P163)rt_nil_check(F->e_491)).kind_ == ((rt_int)9LL))) {
F->result_ = f_is_object_492(F->up, (*(P163)rt_nil_check(F->e_491)).a_);
goto ret_;
} else if (((*(P163)rt_nil_check(F->e_491)).kind_ == ((rt_int)8LL))) {
if ((((*(P163)rt_nil_check(F->e_491)).b_ != NULL) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_491)).b_)).kind_ == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_492(F->up, (*(P163)rt_nil_check(F->e_491)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_498(struct f_greenc_1fr *up_, P163 e_493, P133 *code_out_494, P115 *t_495, P170 *c_496, int *ro_497) {
  struct f_lvalue_498fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_493 = e_493;
F->code_out_494 = code_out_494;
F->t_495 = t_495;
F->c_496 = c_496;
F->ro_497 = ro_497;
F->y_1296 = NULL;
F->base_1297 = NULL;
F->bt_1298 = NULL;
F->bc_1299 = NULL;
if ((((*(P163)rt_nil_check(F->e_493)).kind_ == ((rt_int)5LL)) || (((*(P163)rt_nil_check(F->e_493)).kind_ == ((rt_int)9LL)) && f_is_package_613(F->up, (*(P163)rt_nil_check(F->e_493)).a_)))) {
if (((*(P163)rt_nil_check(F->e_493)).kind_ == ((rt_int)9LL))) {
F->y_1296 = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_493)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_493)).name_)), (*(P163)rt_nil_check(F->e_493)).line_);
} else {
F->y_1296 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_493)).name_)));
}
if ((F->y_1296 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_493)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_493)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1296)).kind_ != ((rt_int)1LL)) && ((*(P110)rt_nil_check(F->y_1296)).kind_ != ((rt_int)2LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_493)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_493)).name_)), rt_str(" is not an object", 17)));
}
f_access_of_481(F->up, F->y_1296, &(*F->code_out_494));
(*F->t_495) = (*(P110)rt_nil_check(F->y_1296)).t_;
(*F->c_496) = (*(P110)rt_nil_check(F->y_1296)).c_;
(*F->ro_497) = (*(P110)rt_nil_check(F->y_1296)).ro_;
} else if (((*(P163)rt_nil_check(F->e_493)).kind_ == ((rt_int)15LL))) {
f_lvalue_498(F->up, (*(P163)rt_nil_check(F->e_493)).a_, &(*F->code_out_494), &(*F->t_495), &(*F->c_496), &(*F->ro_497));
} else if (((*(P163)rt_nil_check(F->e_493)).kind_ == ((rt_int)9LL))) {
f_lvalue_498(F->up, (*(P163)rt_nil_check(F->e_493)).a_, &F->base_1297, &F->bt_1298, &F->bc_1299, &(*F->ro_497));
f_select_on_506(F->up, (*(P133)rt_nil_check(F->base_1297)), F->bt_1298, F->e_493, &(*F->ro_497), &(*F->code_out_494), &(*F->t_495), &(*F->c_496));
} else if (((*(P163)rt_nil_check(F->e_493)).kind_ == ((rt_int)8LL))) {
f_lvalue_498(F->up, (*(P163)rt_nil_check(F->e_493)).a_, &F->base_1297, &F->bt_1298, &F->bc_1299, &(*F->ro_497));
f_index_on_515(F->up, (*(P133)rt_nil_check(F->base_1297)), F->bt_1298, F->e_493, &(*F->ro_497), 1, &(*F->code_out_494), &(*F->t_495), &(*F->c_496));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_493)).line_, rt_str("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_506(struct f_greenc_1fr *up_, rstr base_499, P115 bt_500, P163 e_501, int *ro_502, P133 *code_out_503, P115 *t_504, P170 *c_505) {
  struct f_select_on_506fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_499 = rt_str_copy(base_499);
F->bt_500 = bt_500;
F->e_501 = e_501;
F->ro_502 = ro_502;
F->code_out_503 = code_out_503;
F->t_504 = t_504;
F->c_505 = c_505;
F->f_1300 = NULL;
F->d_1301 = NULL;
(*F->c_505) = F->up->no_cons_172;
if (((*(P115)rt_nil_check(F->bt_500)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_391(F->up, F->bt_500);
f_deref_490(F->up, F->base_499, F->bt_500, &F->d_1301);
(*F->ro_502) = 0;
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_501)).name_)), rt_str("ALL", 3))) {
(*F->code_out_503) = F->d_1301;
(*F->t_504) = (*(P115)rt_nil_check(F->bt_500)).target_;
goto ret_;
}
f_select_on_506(F->up, (*(P133)rt_nil_check(F->d_1301)), (*(P115)rt_nil_check(F->bt_500)).target_, F->e_501, &(*F->ro_502), &(*F->code_out_503), &(*F->t_504), &(*F->c_505));
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_500)).kind_ == ((rt_int)7LL))) {
if (((*(P115)rt_nil_check(F->bt_500)).priv_ && (!f_inside_package_619(F->up, (*(P115)rt_nil_check(F->bt_500)).decl_)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_501)).line_, rt_str_cat(rt_str_cat(rt_str("the components of private type ", 31), f_kind_name_359(F->up, F->bt_500)), rt_str(" are not visible here (RM79 7.4)", 32)));
}
F->f_1300 = (*(P115)rt_nil_check(F->bt_500)).fields_;
while ((F->f_1300 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1300)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_501)).name_)))) {
(*F->c_505) = (*(P1081)rt_nil_check(F->f_1300)).c_;
(*F->code_out_503) = f_mk_185(F->up, rt_str_cat(rt_str_catc(F->base_499, 46), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_501)).name_)))));
(*F->t_504) = (*(P1081)rt_nil_check(F->f_1300)).t_;
goto ret_;
}
F->f_1300 = (*(P1081)rt_nil_check(F->f_1300)).next_;
}
L_end_1302: ;
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_501)).line_, rt_str_cat(rt_str_cat(f_kind_name_359(F->up, F->bt_500), rt_str(" has no component ", 18)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_501)).name_))));
}
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_501)).line_, rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_501)).name_))), rt_str(" here", 5)));
ret_:

  return;
}

static void f_index_on_515(struct f_greenc_1fr *up_, rstr base_507, P115 bt_508, P163 e_509, int *ro_510, int lv_511, P133 *code_out_512, P115 *t_513, P170 *c_514) {
  struct f_index_on_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_507 = rt_str_copy(base_507);
F->bt_508 = bt_508;
F->e_509 = e_509;
F->ro_510 = ro_510;
F->lv_511 = lv_511;
F->code_out_512 = code_out_512;
F->t_513 = t_513;
F->c_514 = c_514;
F->a_1303 = NULL;
F->a_1303 = (*(P163)rt_nil_check(F->e_509)).b_;
F->it_1304 = NULL;
F->i_1305 = NULL;
F->lo_1306 = NULL;
F->hi_1307 = NULL;
F->d_1308 = NULL;
(*F->c_514) = F->up->no_cons_172;
if (((*(P115)rt_nil_check(F->bt_508)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_391(F->up, F->bt_508);
f_deref_490(F->up, F->base_507, F->bt_508, &F->d_1308);
(*F->ro_510) = 0;
f_index_on_515(F->up, (*(P133)rt_nil_check(F->d_1308)), (*(P115)rt_nil_check(F->bt_508)).target_, F->e_509, &(*F->ro_510), F->lv_511, &(*F->code_out_512), &(*F->t_513), &(*F->c_514));
goto ret_;
}
if ((((f_list_len_237(F->up, F->a_1303) == ((rt_int)2LL)) && ((*(P115)rt_nil_check(F->bt_508)).kind_ == ((rt_int)6LL))) && ((*(P115)rt_nil_check(F->bt_508)).idx2_ != NULL))) {
f_gexpr_536(F->up, F->a_1303, (*(P115)rt_nil_check(F->bt_508)).idx_, &F->it_1304, &F->i_1305);
f_check_type_363(F->up, F->it_1304, (*(P115)rt_nil_check(F->bt_508)).idx_, (*(P163)rt_nil_check(F->e_509)).line_);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->a_1303)).next_, (*(P115)rt_nil_check(F->bt_508)).idx2_, &F->it_1304, &F->d_1308);
f_check_type_363(F->up, F->it_1304, (*(P115)rt_nil_check(F->bt_508)).idx2_, (*(P163)rt_nil_check(F->e_509)).line_);
(*F->code_out_512) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_507, rt_str(".p[(rt_index(", 13)), (*(P133)rt_nil_check(F->i_1305))), rt_str(", ", 2)), F->base_507), rt_str(".lo, ", 5)), F->base_507), rt_str(".hi) - ", 7)), F->base_507), rt_str(".lo) * (", 8)), F->base_507), rt_str(".hi2 - ", 7)), F->base_507), rt_str(".lo2 + 1) + rt_index(", 21)), (*(P133)rt_nil_check(F->d_1308))), rt_str(", ", 2)), F->base_507), rt_str(".lo2, ", 6)), F->base_507), rt_str(".hi2) - ", 8)), F->base_507), rt_str(".lo2]", 5)));
(*F->t_513) = (*(P115)rt_nil_check(F->bt_508)).elem_;
(*F->c_514) = (*(P115)rt_nil_check(F->bt_508)).elemcons_;
goto ret_;
}
if ((f_list_len_237(F->up, F->a_1303) != ((rt_int)1LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_509)).line_, rt_str("one index expected", 18));
}
if (((*(P115)rt_nil_check(F->bt_508)).kind_ == ((rt_int)5LL))) {
if (((*(P163)rt_nil_check(F->a_1303)).kind_ == ((rt_int)14LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->a_1303)).a_, F->up->ty_int_149, &F->it_1304, &F->lo_1306);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->a_1303)).b_, F->up->ty_int_149, &F->it_1304, &F->hi_1307);
(*F->code_out_512) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), F->base_507), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1306))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1307))), 41));
(*F->t_513) = F->up->ty_string_153;
(*F->ro_510) = 1;
goto ret_;
}
f_gexpr_536(F->up, F->a_1303, F->up->ty_int_149, &F->it_1304, &F->i_1305);
(*F->t_513) = F->up->ty_char_152;
if (F->lv_511) {
(*F->code_out_512) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), F->base_507), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1305))), rt_str("))", 2)));
} else {
(*F->code_out_512) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), F->base_507), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1305))), 41));
(*F->ro_510) = 1;
}
goto ret_;
}
if ((((*(P115)rt_nil_check(F->bt_508)).kind_ == ((rt_int)6LL)) && ((*(P163)rt_nil_check(F->a_1303)).kind_ == ((rt_int)14LL)))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->a_1303)).a_, (*(P115)rt_nil_check(F->bt_508)).idx_, &F->it_1304, &F->lo_1306);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->a_1303)).b_, (*(P115)rt_nil_check(F->bt_508)).idx_, &F->it_1304, &F->hi_1307);
f_ctype_368(F->up, F->bt_508, &F->d_1308);
(*F->code_out_512) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->d_1308))), rt_str(" s_ = ", 6)), F->base_507), rt_str("; rt_int l_ = ", 14)), (*(P133)rt_nil_check(F->lo_1306))), rt_str(", h_ = ", 7)), (*(P133)rt_nil_check(F->hi_1307))), rt_str("; if (l_ <= h_) { rt_index(l_, s_.lo, s_.hi); rt_index(h_, s_.lo, s_.hi); }", 75)), rt_str(" s_.p += l_ - s_.lo; s_.lo = l_; s_.hi = h_; s_; })", 51)));
(*F->t_513) = F->bt_508;
(*F->ro_510) = 1;
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_508)).kind_ == ((rt_int)6LL))) {
f_gexpr_536(F->up, F->a_1303, (*(P115)rt_nil_check(F->bt_508)).idx_, &F->it_1304, &F->i_1305);
f_check_type_363(F->up, F->it_1304, (*(P115)rt_nil_check(F->bt_508)).idx_, (*(P163)rt_nil_check(F->e_509)).line_);
(*F->code_out_512) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_507, rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->i_1305))), rt_str(", ", 2)), F->base_507), rt_str(".lo, ", 5)), F->base_507), rt_str(".hi) - ", 7)), F->base_507), rt_str(".lo]", 4)));
(*F->t_513) = (*(P115)rt_nil_check(F->bt_508)).elem_;
(*F->c_514) = (*(P115)rt_nil_check(F->bt_508)).elemcons_;
goto ret_;
}
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_509)).line_, rt_str("cannot index this", 17));
ret_:

  return;
}

static int f_is_char_lit_517(struct f_greenc_1fr *up_, P163 e_516) {
  struct f_is_char_lit_517fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_516 = e_516;
F->result_ = (((*(P163)rt_nil_check(F->e_516)).kind_ == ((rt_int)3LL)) && (((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_516)).name_))).len == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_519(struct f_greenc_1fr *up_, P163 e_518) {
  struct f_is_enum_lit_519fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_518 = e_518;
F->y_1309 = NULL;
if (((*(P163)rt_nil_check(F->e_518)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1309 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_518)).name_)));
F->result_ = ((F->y_1309 != NULL) && ((*(P110)rt_nil_check(F->y_1309)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_string_521(struct f_greenc_1fr *up_, rstr s_520) {
  struct f_c_string_521fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_520 = rt_str_copy(s_520);
F->n_1310 = ((rt_int)0LL);
{ rt_int lo1313 = ((rt_int)1LL), hi1314 = (F->s_520).len;
for (rt_int it1315 = lo1313; it1315 <= hi1314; it1315++) {
F->i_1312 = it1315;
if ((((rt_str_get(F->s_520, F->i_1312) == 34) || (rt_str_get(F->s_520, F->i_1312) == 92)) || (rt_str_get(F->s_520, F->i_1312) == 63))) {
F->n_1310 = rt_add(F->n_1310, ((rt_int)1LL));
}
}
}
L_end_1311: ;
{
F->r_1317 = rt_str_new((rt_add(rt_add((F->s_520).len, F->n_1310), ((rt_int)2LL)) - ((rt_int)1LL) + 1));
F->j_1318 = ((rt_int)1LL);
(*rt_str_at(&F->r_1317, ((rt_int)1LL))) = 34;
{ rt_int lo1321 = ((rt_int)1LL), hi1322 = (F->s_520).len;
for (rt_int it1323 = lo1321; it1323 <= hi1322; it1323++) {
F->i_1320 = it1323;
F->j_1318 = rt_add(F->j_1318, ((rt_int)1LL));
if ((((rt_str_get(F->s_520, F->i_1320) == 34) || (rt_str_get(F->s_520, F->i_1320) == 92)) || (rt_str_get(F->s_520, F->i_1320) == 63))) {
(*rt_str_at(&F->r_1317, F->j_1318)) = 92;
F->j_1318 = rt_add(F->j_1318, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1317, F->j_1318)) = rt_str_get(F->s_520, F->i_1320);
}
}
L_end_1319: ;
(*rt_str_at(&F->r_1317, rt_add(F->j_1318, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1317;
goto ret_;

}
L_end_1316: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_523(struct f_greenc_1fr *up_, P163 e_522) {
  struct f_is_literal_523fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_522 = e_522;
if (((((*(P163)rt_nil_check(F->e_522)).kind_ == ((rt_int)1LL)) || ((*(P163)rt_nil_check(F->e_522)).kind_ == ((rt_int)2LL))) || f_is_char_lit_517(F->up, F->e_522))) {
F->result_ = 1;
goto ret_;
} else if ((((*(P163)rt_nil_check(F->e_522)).kind_ == ((rt_int)15LL)) || (((*(P163)rt_nil_check(F->e_522)).kind_ == ((rt_int)6LL)) && (!rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_522)).name_)), rt_str("NOT", 3)))))) {
F->result_ = f_is_literal_523(F->up, (*(P163)rt_nil_check(F->e_522)).a_);
goto ret_;
} else if ((((*(P163)rt_nil_check(F->e_522)).kind_ == ((rt_int)7LL)) && (((((rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_522)).name_)), rt_str("+", 1)) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_522)).name_)), rt_str("-", 1))) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_522)).name_)), rt_str("*", 1))) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_522)).name_)), rt_str("/", 1))) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_522)).name_)), rt_str("**", 2))) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_522)).name_)), rt_str("MOD", 3))))) {
F->result_ = (f_is_literal_523(F->up, (*(P163)rt_nil_check(F->e_522)).a_) && f_is_literal_523(F->up, (*(P163)rt_nil_check(F->e_522)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_531(struct f_greenc_1fr *up_, P163 l_524, P163 h_525, P115 want_526, rt_int line_527, P115 *t_528, P133 *lo_529, P133 *hi_530) {
  struct f_range_bounds_531fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_524 = l_524;
F->h_525 = h_525;
F->want_526 = want_526;
F->line_527 = line_527;
F->t_528 = t_528;
F->lo_529 = lo_529;
F->hi_530 = hi_530;
F->w_1324 = NULL;
F->w_1324 = F->want_526;
F->t2_1325 = NULL;
if ((((F->w_1324 == NULL) && f_is_char_lit_517(F->up, F->l_524)) && f_is_char_lit_517(F->up, F->h_525))) {
F->w_1324 = F->up->ty_char_152;
}
if ((((F->w_1324 == NULL) && f_is_literal_523(F->up, F->l_524)) && (!f_is_literal_523(F->up, F->h_525)))) {
f_gexpr_536(F->up, F->h_525, NULL, &(*F->t_528), &(*F->hi_530));
f_gexpr_536(F->up, F->l_524, (*F->t_528), &F->t2_1325, &(*F->lo_529));
f_check_type_363(F->up, F->t2_1325, (*F->t_528), F->line_527);
} else {
f_gexpr_536(F->up, F->l_524, F->w_1324, &(*F->t_528), &(*F->lo_529));
f_gexpr_536(F->up, F->h_525, (*F->t_528), &F->t2_1325, &(*F->hi_530));
f_check_type_363(F->up, F->t2_1325, (*F->t_528), F->line_527);
}
ret_:

  return;
}

static void f_gexpr_536(struct f_greenc_1fr *up_, P163 e_532, P115 want_533, P115 *t_534, P133 *r_535) {
  struct f_gexpr_536fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_532 = e_532;
F->want_533 = want_533;
F->t_534 = t_534;
F->r_535 = r_535;
F->y_1326 = NULL;
F->bt_1327 = NULL;
F->c_1328 = NULL;
F->base_1330 = NULL;
F->a_1331 = NULL;
F->nm_1332 = NULL;
F->saved_lv_1333 = F->up->in_lv_path_181;
F->up->in_lv_path_181 = 0;
f_gexpr_1_541(F->up, F->e_532, F->want_533, &(*F->t_534), &(*F->r_535));
F->up->in_lv_path_181 = F->saved_lv_1333;
ret_:

  return;
}

static void f_gexpr_1_541(struct f_greenc_1fr *up_, P163 e_537, P115 want_538, P115 *t_539, P133 *r_540) {
  struct f_gexpr_1_541fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_537 = e_537;
F->want_538 = want_538;
F->t_539 = t_539;
F->r_540 = r_540;
F->y_1334 = NULL;
F->bt_1335 = NULL;
F->c_1336 = NULL;
F->base_1338 = NULL;
F->a_1339 = NULL;
F->nm_1340 = NULL;
(*F->t_539) = F->up->ty_int_149;
{ rt_int sel1341 = (*(P163)rt_nil_check(F->e_537)).kind_;
if (0 || sel1341 == ((rt_int)1LL)) {
(*F->r_540) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P163)rt_nil_check(F->e_537)).ival_)), rt_str("LL)", 3)));
} else if (0 || sel1341 == ((rt_int)2LL)) {
(*F->t_539) = F->up->ty_float_151;
(*F->r_540) = (*(P163)rt_nil_check(F->e_537)).name_;
} else if (0 || sel1341 == ((rt_int)3LL)) {
if (((f_is_char_lit_517(F->up, F->e_537) && (F->want_538 != NULL)) && (((*(P115)rt_nil_check(F->want_538)).kind_ == ((rt_int)11LL)) || ((*(P115)rt_nil_check(F->want_538)).kind_ == ((rt_int)4LL))))) {
f_char_literal_546(F->up, F->e_537, F->want_538, &(*F->t_539), &(*F->r_540));
} else {
(*F->t_539) = F->up->ty_string_153;
(*F->r_540) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_521(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_537)).name_)))), rt_str(", ", 2)), rt_str_of_int(((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_537)).name_))).len)), 41));
}
} else if (0 || sel1341 == ((rt_int)4LL)) {
(*F->t_539) = F->up->ty_nil_155;
(*F->r_540) = f_mk_185(F->up, rt_str("NULL", 4));
} else if (0 || sel1341 == ((rt_int)15LL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_537)).a_, F->want_538, &(*F->t_539), &(*F->r_540));
} else if (0 || sel1341 == ((rt_int)5LL)) {
f_gen_name_551(F->up, F->e_537, F->want_538, &(*F->t_539), &(*F->r_540));
} else if (0 || sel1341 == ((rt_int)6LL)) {
f_gen_unop_556(F->up, F->e_537, F->want_538, &(*F->t_539), &(*F->r_540));
} else if (0 || sel1341 == ((rt_int)7LL)) {
f_gen_binop_561(F->up, F->e_537, F->want_538, &(*F->t_539), &(*F->r_540));
} else if (0 || sel1341 == ((rt_int)8LL)) {
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1334 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).name_)));
if (((F->y_1334 == NULL) || ((((*(P110)rt_nil_check(F->y_1334)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1334)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_1334)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_177 = F->want_538;
f_gcall_599(F->up, F->e_537, 0, &(*F->t_539), &(*F->r_540));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1334)).kind_ == ((rt_int)5LL))) {
f_conversion_566(F->up, F->e_537, F->y_1334, &(*F->t_539), &(*F->r_540));
goto ret_;
}
} else if ((((((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).kind_ == ((rt_int)9LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_680(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).a_)).a_)).name_)))) && (f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).name_)), (*(P163)rt_nil_check(F->e_537)).line_) != NULL)) && ((*(P110)rt_nil_check(f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).name_)), (*(P163)rt_nil_check(F->e_537)).line_))).kind_ == ((rt_int)3LL)))) {
F->up->call_want_177 = F->want_538;
f_gcall_599(F->up, F->e_537, 0, &(*F->t_539), &(*F->r_540));
goto ret_;
} else if ((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_613(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).a_))) {
F->y_1334 = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).name_)), (*(P163)rt_nil_check(F->e_537)).line_);
if (((F->y_1334 != NULL) && ((((*(P110)rt_nil_check(F->y_1334)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1334)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_1334)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_177 = F->want_538;
f_gcall_599(F->up, F->e_537, 0, &(*F->t_539), &(*F->r_540));
goto ret_;
}
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_537)).a_, NULL, &F->bt_1335, &F->base_1338);
F->ro_1337 = 1;
f_index_on_515(F->up, (*(P133)rt_nil_check(F->base_1338)), F->bt_1335, F->e_537, &F->ro_1337, 0, &(*F->r_540), &(*F->t_539), &F->c_1336);
} else if (0 || sel1341 == ((rt_int)9LL)) {
if (f_is_package_613(F->up, (*(P163)rt_nil_check(F->e_537)).a_)) {
F->nm_1340 = f_nn_231(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_537)).line_);
(*(P163)rt_nil_check(F->nm_1340)).name_ = (*(P163)rt_nil_check(F->e_537)).name_;
(*(P163)rt_nil_check(F->nm_1340)).tag_ = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_537)).a_)).name_;
f_gen_name_551(F->up, F->nm_1340, F->want_538, &(*F->t_539), &(*F->r_540));
goto ret_;
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_537)).a_, NULL, &F->bt_1335, &F->base_1338);
F->ro_1337 = 1;
f_select_on_506(F->up, (*(P133)rt_nil_check(F->base_1338)), F->bt_1335, F->e_537, &F->ro_1337, &(*F->r_540), &(*F->t_539), &F->c_1336);
} else if (0 || sel1341 == ((rt_int)10LL)) {
f_gen_attr_571(F->up, F->e_537, F->want_538, &(*F->t_539), &(*F->r_540));
} else if (0 || sel1341 == ((rt_int)11LL)) {
f_allocator_585(F->up, F->e_537, F->want_538, &(*F->t_539), &(*F->r_540));
} else if (0 || sel1341 == ((rt_int)12LL)) {
f_aggregate_590(F->up, F->e_537, F->want_538, &(*F->t_539), &(*F->r_540));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_537)).line_, rt_str("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_char_literal_546(struct f_greenc_1fr *up_, P163 e_542, P115 want_543, P115 *t_544, P133 *r_545) {
  struct f_char_literal_546fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_542 = e_542;
F->want_543 = want_543;
F->t_544 = t_544;
F->r_545 = r_545;
if (((*(P115)rt_nil_check(F->want_543)).kind_ == ((rt_int)11LL))) {
(*F->t_544) = F->up->ty_char_152;
(*F->r_545) = f_mk_185(F->up, rt_str_of_int(rt_sub(((rt_int)(rt_str_get((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_542)).name_)), ((rt_int)1LL))) + 1), ((rt_int)1LL))));
goto ret_;
}
F->i_1342 = f_lit_index_376(F->up, (*(P115)rt_nil_check(F->want_543)).lits_, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_542)).name_)));
if ((F->i_1342 < ((rt_int)0LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_542)).line_, rt_str_cat(rt_str_cat(rt_str_ccat(34, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_542)).name_))), rt_str("\" is not a literal of ", 22)), f_kind_name_359(F->up, F->want_543)));
}
(*F->t_544) = F->want_543;
(*F->r_545) = f_mk_185(F->up, rt_str_of_int(F->i_1342));
ret_:

  return;
}

static void f_gen_name_551(struct f_greenc_1fr *up_, P163 e_547, P115 want_548, P115 *t_549, P133 *r_550) {
  struct f_gen_name_551fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_547 = e_547;
F->want_548 = want_548;
F->t_549 = t_549;
F->r_550 = r_550;
F->y_1343 = NULL;
F->y_1343 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_)));
F->z_1344 = NULL;
F->call_1345 = NULL;
if (((*(P163)rt_nil_check(F->e_547)).tag_ != NULL)) {
F->y_1343 = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_)), (*(P163)rt_nil_check(F->e_547)).line_);
}
if ((F->y_1343 == NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_)), rt_str("PUT", 3)) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_)), rt_str("GET", 3)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_547)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_)), rt_str(" needs an item", 14)));
}
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_547)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1343)).kind_ == ((rt_int)2LL)) && (*(P110)rt_nil_check(F->y_1343)).hasmv_)) {
(*F->t_549) = (*(P110)rt_nil_check(F->y_1343)).t_;
(*F->r_550) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P110)rt_nil_check(F->y_1343)).mvalue_)), rt_str("LL)", 3)));
goto ret_;
}
if ((((*(P110)rt_nil_check(F->y_1343)).kind_ == ((rt_int)1LL)) || ((*(P110)rt_nil_check(F->y_1343)).kind_ == ((rt_int)2LL)))) {
(*F->t_549) = (*(P110)rt_nil_check(F->y_1343)).t_;
f_access_of_481(F->up, F->y_1343, &(*F->r_550));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1343)).kind_ == ((rt_int)7LL))) {
F->z_1344 = F->y_1343;
if ((F->want_548 != NULL)) {
while ((F->z_1344 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1344)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_))) && ((*(P110)rt_nil_check(F->z_1344)).kind_ == ((rt_int)7LL))) && f_same_343(F->up, (*(P110)rt_nil_check(F->z_1344)).t_, F->want_548))) {
goto L_end_1346;
}
F->z_1344 = (*(P110)rt_nil_check(F->z_1344)).chain_;
}
L_end_1346: ;
if ((F->z_1344 == NULL)) {
F->z_1344 = F->y_1343;
}
}
(*F->t_549) = (*(P110)rt_nil_check(F->z_1344)).t_;
(*F->r_550) = f_mk_185(F->up, rt_str_of_int((*(P110)rt_nil_check(F->z_1344)).mvalue_));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1343)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1343)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_1343)).kind_ == ((rt_int)10LL)))) {
F->call_1345 = f_nn_231(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->e_547)).line_);
(*(P163)rt_nil_check(F->call_1345)).a_ = F->e_547;
F->up->call_want_177 = F->want_548;
f_gcall_599(F->up, F->call_1345, 0, &(*F->t_549), &(*F->r_550));
goto ret_;
}
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_547)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_547)).name_)), rt_str(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_556(struct f_greenc_1fr *up_, P163 e_552, P115 want_553, P115 *t_554, P133 *r_555) {
  struct f_gen_unop_556fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_552 = e_552;
F->want_553 = want_553;
F->t_554 = t_554;
F->r_555 = r_555;
F->a_1347 = NULL;
f_user_operator_662(F->up, F->e_552, F->want_553, &(*F->t_554), &(*F->r_555), &F->done_1348);
if (F->done_1348) {
goto ret_;
}
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_552)).name_)), rt_str("NOT", 3))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_552)).a_, F->up->ty_bool_150, &(*F->t_554), &F->a_1347);
f_check_type_363(F->up, (*F->t_554), F->up->ty_bool_150, (*(P163)rt_nil_check(F->e_552)).line_);
(*F->r_555) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->a_1347))), 41));
goto ret_;
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_552)).a_, F->want_553, &(*F->t_554), &F->a_1347);
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_552)).name_)), rt_str("+", 1))) {
(*F->r_555) = F->a_1347;
} else if (((*(P115)rt_nil_check((*F->t_554))).kind_ == ((rt_int)3LL))) {
(*F->r_555) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(-", 2), (*(P133)rt_nil_check(F->a_1347))), 41));
} else {
f_check_type_363(F->up, (*F->t_554), F->up->ty_int_149, (*(P163)rt_nil_check(F->e_552)).line_);
(*F->r_555) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_neg(", 7), (*(P133)rt_nil_check(F->a_1347))), 41));
}
ret_:

  return;
}

static void f_gen_binop_561(struct f_greenc_1fr *up_, P163 e_557, P115 want_558, P115 *t_559, P133 *r_560) {
  struct f_gen_binop_561fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_557 = e_557;
F->want_558 = want_558;
F->t_559 = t_559;
F->r_560 = r_560;
F->op_1349 = rt_str_copy((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_557)).name_)));
F->ta_1350 = NULL;
F->tb_1351 = NULL;
F->hint_1352 = NULL;
F->ct_1353 = NULL;
F->a_1354 = NULL;
F->b_1355 = NULL;
F->x_1356 = NULL;
F->dummy_1357 = NULL;
(*F->t_559) = F->up->ty_bool_150;
f_user_operator_662(F->up, F->e_557, F->want_558, &(*F->t_559), &(*F->r_560), &F->done_1358);
if (F->done_1358) {
goto ret_;
}
if (((rt_str_eq(F->op_1349, rt_str("AND", 3)) || rt_str_eq(F->op_1349, rt_str("OR", 2))) || rt_str_eq(F->op_1349, rt_str("XOR", 3)))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).a_, F->up->ty_bool_150, &F->ta_1350, &F->a_1354);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).b_, F->up->ty_bool_150, &F->tb_1351, &F->b_1355);
f_check_type_363(F->up, F->ta_1350, F->up->ty_bool_150, (*(P163)rt_nil_check(F->e_557)).line_);
f_check_type_363(F->up, F->tb_1351, F->up->ty_bool_150, (*(P163)rt_nil_check(F->e_557)).line_);
if (rt_str_eq(F->op_1349, rt_str("AND", 3))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1354))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("OR", 2))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1354))), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1354))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1355))), 41));
}
goto ret_;
}
if (rt_str_eq(F->op_1349, rt_str("IN", 2))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).a_, NULL, &F->ta_1350, &F->a_1354);
f_gexpr_536(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_557)).b_)).a_, F->ta_1350, &F->tb_1351, &F->b_1355);
f_gexpr_536(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_557)).b_)).b_, F->ta_1350, &F->tb_1351, &F->x_1356);
(*F->r_560) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int m_ = ", 15), (*(P133)rt_nil_check(F->a_1354))), rt_str("; m_ >= ", 8)), (*(P133)rt_nil_check(F->b_1355))), rt_str(" && m_ <= ", 10)), (*(P133)rt_nil_check(F->x_1356))), rt_str("; })", 4)));
goto ret_;
}
if (rt_str_eq(F->op_1349, rt_str("&", 1))) {
if (f_is_char_lit_517(F->up, (*(P163)rt_nil_check(F->e_557)).a_)) {
F->hint_1352 = F->up->ty_char_152;
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).a_, F->hint_1352, &F->ta_1350, &F->a_1354);
F->hint_1352 = NULL;
if (f_is_char_lit_517(F->up, (*(P163)rt_nil_check(F->e_557)).b_)) {
F->hint_1352 = F->up->ty_char_152;
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).b_, F->hint_1352, &F->tb_1351, &F->b_1355);
(*F->t_559) = F->up->ty_string_153;
if ((((*(P115)rt_nil_check(F->ta_1350)).kind_ == ((rt_int)5LL)) && ((*(P115)rt_nil_check(F->tb_1351)).kind_ == ((rt_int)5LL)))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1350)).kind_ == ((rt_int)5LL)) && ((*(P115)rt_nil_check(F->tb_1351)).kind_ == ((rt_int)11LL)))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1350)).kind_ == ((rt_int)11LL)) && ((*(P115)rt_nil_check(F->tb_1351)).kind_ == ((rt_int)5LL)))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1350)).kind_ == ((rt_int)11LL)) && ((*(P115)rt_nil_check(F->tb_1351)).kind_ == ((rt_int)11LL)))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_557)).line_, rt_str("& catenates strings and characters", 34));
}
goto ret_;
}
if (f_is_rel_270(F->up, F->op_1349)) {
if ((((f_is_char_lit_517(F->up, (*(P163)rt_nil_check(F->e_557)).a_) || f_is_enum_lit_519(F->up, (*(P163)rt_nil_check(F->e_557)).a_)) || ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_557)).a_)).kind_ == ((rt_int)4LL))) || ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_557)).a_)).kind_ == ((rt_int)1LL)))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).b_, NULL, &F->hint_1352, &F->dummy_1357);
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).a_, F->hint_1352, &F->ta_1350, &F->a_1354);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).b_, F->ta_1350, &F->tb_1351, &F->b_1355);
F->ct_1353 = F->ta_1350;
if ((((*(P115)rt_nil_check(F->ta_1350)).kind_ != ((rt_int)10LL)) && ((*(P115)rt_nil_check(F->tb_1351)).kind_ != ((rt_int)10LL)))) {
f_check_type_363(F->up, F->tb_1351, F->ta_1350, (*(P163)rt_nil_check(F->e_557)).line_);
}
if (((*(P115)rt_nil_check(F->ta_1350)).kind_ == ((rt_int)10LL))) {
F->ct_1353 = F->tb_1351;
}
if (((*(P115)rt_nil_check(F->ct_1353)).kind_ == ((rt_int)5LL))) {
if (rt_str_eq(F->op_1349, rt_str("=", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("/=", 2))) {
(*F->r_560) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), rt_str("))", 2)));
} else if (rt_str_eq(F->op_1349, rt_str("<", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("<=", 2))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str(">", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->b_1355))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1354))), 41));
} else {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->b_1355))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1354))), 41));
}
goto ret_;
}
if (f_composite_397(F->up, F->ct_1353)) {
f_eq_code_412(F->up, F->ct_1353, (*(P133)rt_nil_check(F->a_1354)), (*(P133)rt_nil_check(F->b_1355)), &F->x_1356);
if (rt_str_eq(F->op_1349, rt_str("=", 1))) {
(*F->r_560) = F->x_1356;
} else if (rt_str_eq(F->op_1349, rt_str("/=", 2))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->x_1356))), 41));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_557)).line_, rt_str("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (rt_str_eq(F->op_1349, rt_str("=", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1354))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("/=", 2))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1354))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1354))), 32), F->op_1349), 32), (*(P133)rt_nil_check(F->b_1355))), 41));
}
goto ret_;
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).a_, F->want_558, &F->ta_1350, &F->a_1354);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_557)).b_, F->ta_1350, &F->tb_1351, &F->b_1355);
if ((((*(P115)rt_nil_check(F->ta_1350)).kind_ == ((rt_int)3LL)) || ((*(P115)rt_nil_check(F->tb_1351)).kind_ == ((rt_int)3LL)))) {
(*F->t_559) = F->up->ty_float_151;
if (rt_str_eq(F->op_1349, rt_str("+", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fadd(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1349, rt_str("-", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fsub(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1349, rt_str("*", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fmul(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1349, rt_str("/", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fdiv(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), rt_str(", 0)", 4)));
} else if (rt_str_eq(F->op_1349, rt_str("**", 2))) {
(*F->r_560) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fpow(", 10), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), rt_str(", 0)", 4)));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_557)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1349), rt_str(" is not defined for FLOAT", 25)));
}
goto ret_;
}
f_check_type_363(F->up, F->ta_1350, F->up->ty_int_149, (*(P163)rt_nil_check(F->e_557)).line_);
f_check_type_363(F->up, F->tb_1351, F->up->ty_int_149, (*(P163)rt_nil_check(F->e_557)).line_);
(*F->t_559) = F->up->ty_int_149;
if (rt_str_eq(F->op_1349, rt_str("+", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("-", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("*", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("/", 1))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_quot(", 8), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("MOD", 3))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_rem(", 7), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else if (rt_str_eq(F->op_1349, rt_str("**", 2))) {
(*F->r_560) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), (*(P133)rt_nil_check(F->a_1354))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1355))), 41));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_557)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1349), rt_str(" is not defined for INTEGER", 27)));
}
ret_:

  return;
}

static void f_conversion_566(struct f_greenc_1fr *up_, P163 e_562, P110 y_563, P115 *t_564, P133 *r_565) {
  struct f_conversion_566fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_562 = e_562;
F->y_563 = y_563;
F->t_564 = t_564;
F->r_565 = r_565;
F->aty_1359 = NULL;
F->a_1360 = NULL;
if ((f_list_len_237(F->up, (*(P163)rt_nil_check(F->e_562)).b_) != ((rt_int)1LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_562)).line_, rt_str("a conversion takes one expression", 33));
}
(*F->t_564) = (*(P110)rt_nil_check(F->y_563)).t_;
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_562)).b_, (*F->t_564), &F->aty_1359, &F->a_1360);
if ((((*(P115)rt_nil_check((*F->t_564))).kind_ == ((rt_int)1LL)) && ((*(P115)rt_nil_check(F->aty_1359)).kind_ == ((rt_int)3LL)))) {
(*F->r_565) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)llround(", 17), (*(P133)rt_nil_check(F->a_1360))), rt_str("))", 2)));
} else if ((((*(P115)rt_nil_check((*F->t_564))).kind_ == ((rt_int)3LL)) && ((*(P115)rt_nil_check(F->aty_1359)).kind_ == ((rt_int)1LL)))) {
(*F->r_565) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((double)(", 10), (*(P133)rt_nil_check(F->a_1360))), rt_str("))", 2)));
} else {
f_check_type_363(F->up, F->aty_1359, (*F->t_564), (*(P163)rt_nil_check(F->e_562)).line_);
if (((((((*(P115)rt_nil_check((*F->t_564))).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check((*F->t_564))).kind_ == ((rt_int)4LL))) || ((*(P115)rt_nil_check((*F->t_564))).kind_ == ((rt_int)11LL))) && ((*(P110)rt_nil_check(F->y_563)).c_ != NULL)) && ((*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_563)).c_)).lo_ != NULL))) {
(*F->r_565) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->a_1360))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_563)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_563)).c_)).hi_))), 41));
} else {
(*F->r_565) = F->a_1360;
}
}
ret_:

  return;
}

static void f_gen_attr_571(struct f_greenc_1fr *up_, P163 e_567, P115 want_568, P115 *t_569, P133 *r_570) {
  struct f_gen_attr_571fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_567 = e_567;
F->want_568 = want_568;
F->t_569 = t_569;
F->r_570 = r_570;
F->a_1361 = rt_str_copy((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_567)).name_)));
F->y_1362 = NULL;
F->tt_1363 = NULL;
F->aty_1364 = NULL;
F->v_1365 = NULL;
F->d_1366 = NULL;
F->c_1367 = NULL;
if (((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).kind_ == ((rt_int)8LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_680(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).a_)).name_))))) {
f_member_attr_746(F->up, F->e_567, &(*F->t_569), &(*F->r_570));
goto ret_;
}
if (rt_str_eq(F->a_1361, rt_str("ADDRESS", 7))) {
f_lvalue_498(F->up, (*(P163)rt_nil_check(F->e_567)).a_, &F->v_1365, &F->aty_1364, &F->c_1367, &F->ro_1369);
(*F->t_569) = F->up->ty_int_149;
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(intptr_t)&(", 21), (*(P133)rt_nil_check(F->v_1365))), rt_str("))", 2)));
goto ret_;
}
if (((rt_str_eq(F->a_1361, rt_str("COUNT", 5)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->y_1362 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).a_)).name_)));
if ((((F->y_1362 != NULL) && ((*(P110)rt_nil_check(F->y_1362)).kind_ == ((rt_int)10LL))) && ((*(P110)rt_nil_check(F->y_1362)).c_ != NULL))) {
if ((!f_same_task_333(F->up, (*(P110)rt_nil_check(F->y_1362)).members_, F->up->cur_task_160))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_567)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_702(F->up, F->y_1362, rt_str("", 0), &F->v_1365);
f_gexpr_536(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).b_, NULL, &F->aty_1364, &F->d_1366);
f_entry_family_slot_717(F->up, F->y_1362, (*(P133)rt_nil_check(F->v_1365)), (*(P133)rt_nil_check(F->d_1366)), &F->v_1365);
(*F->t_569) = F->up->ty_int_149;
(*F->r_570) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P133)rt_nil_check(F->v_1365))), 41));
goto ret_;
}
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1362 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).name_)));
if ((((F->y_1362 == NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).name_)), rt_str("SYSTEM", 6))) && rt_str_eq(F->a_1361, rt_str("CLOCK", 5)))) {
(*F->t_569) = F->up->ty_float_151;
(*F->r_570) = f_mk_185(F->up, rt_str("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_1362 == NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_567)).a_)).name_)), rt_str("SYSTEM", 6))) && (rt_str_eq(F->a_1361, rt_str("MAX_PRIORITY", 12)) || rt_str_eq(F->a_1361, rt_str("MIN_PRIORITY", 12))))) {
(*F->t_569) = F->up->ty_int_149;
if (rt_str_eq(F->a_1361, rt_str("MAX_PRIORITY", 12))) {
(*F->r_570) = f_mk_185(F->up, rt_str("((rt_int)255)", 13));
} else {
(*F->r_570) = f_mk_185(F->up, rt_str("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_1362 != NULL) && ((*(P110)rt_nil_check(F->y_1362)).kind_ == ((rt_int)5LL)))) {
F->tt_1363 = (*(P110)rt_nil_check(F->y_1362)).t_;
F->c_1367 = (*(P110)rt_nil_check(F->y_1362)).c_;
if (rt_str_eq(F->a_1361, rt_str("SIZE", 4))) {
f_ctype_368(F->up, F->tt_1363, &F->d_1366);
(*F->t_569) = F->up->ty_int_149;
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(sizeof(", 17), (*(P133)rt_nil_check(F->d_1366))), rt_str(") * 8))", 7)));
goto ret_;
}
if (rt_str_eq(F->a_1361, rt_str("ORD", 3))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_567)).b_, F->tt_1363, &F->aty_1364, &F->v_1365);
f_check_type_363(F->up, F->aty_1364, F->tt_1363, (*(P163)rt_nil_check(F->e_567)).line_);
(*F->t_569) = F->up->ty_int_149;
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (*(P133)rt_nil_check(F->v_1365))), rt_str(") + 1)", 6)));
goto ret_;
} else if ((rt_str_eq(F->a_1361, rt_str("VAL", 3)) || rt_str_eq(F->a_1361, rt_str("REP", 3)))) {
f_val_rep_580(F->up, F->e_567, F->tt_1363, F->c_1367, &(*F->t_569), &(*F->r_570));
goto ret_;
} else if ((rt_str_eq(F->a_1361, rt_str("SUCC", 4)) || rt_str_eq(F->a_1361, rt_str("PRED", 4)))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_567)).b_, F->tt_1363, &F->aty_1364, &F->v_1365);
(*F->t_569) = F->tt_1363;
if (((*(P115)rt_nil_check(F->tt_1363)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1361, rt_str("SUCC", 4))) {
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->v_1365))), rt_str(", 1)", 4)));
} else {
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->v_1365))), rt_str(", 1)", 4)));
}
} else if (rt_str_eq(F->a_1361, rt_str("SUCC", 4))) {
(*F->r_570) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1365))), rt_str(" + 1, ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1367)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1367)).hi_))), 41));
} else {
(*F->r_570) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1365))), rt_str(" - 1, ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1367)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1367)).hi_))), 41));
}
goto ret_;
} else if ((rt_str_eq(F->a_1361, rt_str("FIRST", 5)) || rt_str_eq(F->a_1361, rt_str("LAST", 4)))) {
(*F->t_569) = F->tt_1363;
if (((*(P115)rt_nil_check(F->tt_1363)).kind_ == ((rt_int)6LL))) {
(*F->t_569) = (*(P115)rt_nil_check(F->tt_1363)).idx_;
}
if (((F->c_1367 != NULL) && ((*(P170)rt_nil_check(F->c_1367)).lo_ != NULL))) {
if (rt_str_eq(F->a_1361, rt_str("FIRST", 5))) {
(*F->r_570) = (*(P170)rt_nil_check(F->c_1367)).lo_;
} else {
(*F->r_570) = (*(P170)rt_nil_check(F->c_1367)).hi_;
}
} else if (((*(P115)rt_nil_check(F->tt_1363)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1361, rt_str("FIRST", 5))) {
(*F->r_570) = f_mk_185(F->up, rt_str("INT64_MIN", 9));
} else {
(*F->r_570) = f_mk_185(F->up, rt_str("INT64_MAX", 9));
}
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_567)).line_, rt_str_cat(rt_str("this type has no ", 17), F->a_1361));
}
goto ret_;
}
f_other_attr_742(F->up, F->e_567, F->y_1362, &(*F->t_569), &(*F->r_570));
goto ret_;
}
if (((F->y_1362 != NULL) && (((*(P110)rt_nil_check(F->y_1362)).kind_ != ((rt_int)1LL)) && ((*(P110)rt_nil_check(F->y_1362)).kind_ != ((rt_int)2LL))))) {
f_other_attr_742(F->up, F->e_567, F->y_1362, &(*F->t_569), &(*F->r_570));
goto ret_;
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_567)).a_, NULL, &F->tt_1363, &F->v_1365);
if (((*(P115)rt_nil_check(F->tt_1363)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_391(F->up, F->tt_1363);
f_deref_490(F->up, (*(P133)rt_nil_check(F->v_1365)), F->tt_1363, &F->d_1366);
F->v_1365 = F->d_1366;
F->tt_1363 = (*(P115)rt_nil_check(F->tt_1363)).target_;
}
(*F->t_569) = F->up->ty_int_149;
if (((*(P115)rt_nil_check(F->tt_1363)).kind_ == ((rt_int)5LL))) {
if ((rt_str_eq(F->a_1361, rt_str("LENGTH", 6)) || rt_str_eq(F->a_1361, rt_str("LAST", 4)))) {
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1365))), rt_str(").len", 5)));
goto ret_;
} else if (rt_str_eq(F->a_1361, rt_str("FIRST", 5))) {
(*F->r_570) = f_mk_185(F->up, rt_str("((rt_int)1)", 11));
goto ret_;
}
} else if (((*(P115)rt_nil_check(F->tt_1363)).kind_ == ((rt_int)6LL))) {
(*F->t_569) = (*(P115)rt_nil_check(F->tt_1363)).idx_;
if (rt_str_eq(F->a_1361, rt_str("FIRST", 5))) {
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1365))), rt_str(").lo", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1361, rt_str("LAST", 4))) {
(*F->r_570) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1365))), rt_str(").hi", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1361, rt_str("LENGTH", 6))) {
(*F->t_569) = F->up->ty_int_149;
(*F->r_570) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("RT_CNT(", 7), (*(P133)rt_nil_check(F->v_1365))), 41));
goto ret_;
}
}
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_567)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1361), rt_str(" is not handled here", 20)));
ret_:

  return;
}

static void f_lit_table_574(struct f_greenc_1fr *up_, P115 t_572, P133 *r_573) {
  struct f_lit_table_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_572 = t_572;
F->r_573 = r_573;
F->l_1370 = NULL;
F->l_1370 = (*(P115)rt_nil_check(F->t_572)).lits_;
F->s_1371 = NULL;
F->s_1371 = f_mk_185(F->up, rt_str("", 0));
if (((*(P115)rt_nil_check(F->t_572)).littab_ == NULL)) {
f_new_name_188(F->up, rt_str("lits", 4), &(*(P115)rt_nil_check(F->t_572)).littab_);
while ((F->l_1370 != NULL)) {
if ((((*(P133)rt_nil_check(F->s_1371))).len > ((rt_int)0LL))) {
F->s_1371 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->s_1371)), rt_str(", ", 2)));
}
if (((*(P163)rt_nil_check(F->l_1370)).kind_ == ((rt_int)3LL))) {
F->s_1371 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->s_1371)), f_c_string_521(F->up, rt_str_cat(rt_str_cat(f_q_203(F->up), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->l_1370)).name_))), f_q_203(F->up)))));
} else {
F->s_1371 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->s_1371)), f_c_string_521(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->l_1370)).name_)))));
}
F->l_1370 = (*(P163)rt_nil_check(F->l_1370)).next_;
}
L_end_1372: ;
f_put_to_210(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_572)).littab_))), rt_str("[] = {", 6)), (*(P133)rt_nil_check(F->s_1371))), rt_str("};", 2)));
}
(*F->r_573) = (*(P115)rt_nil_check(F->t_572)).littab_;
ret_:

  return;
}

static void f_val_rep_580(struct f_greenc_1fr *up_, P163 e_575, P115 tt_576, P170 c_577, P115 *t_578, P133 *r_579) {
  struct f_val_rep_580fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_575 = e_575;
F->tt_576 = tt_576;
F->c_577 = c_577;
F->t_578 = t_578;
F->r_579 = r_579;
F->aty_1373 = NULL;
F->v_1374 = NULL;
F->lt_1375 = NULL;
if (((*(P163)rt_nil_check(F->e_575)).b_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_575)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_575)).name_))), rt_str(" takes an argument", 18)));
}
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_575)).name_)), rt_str("REP", 3))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_575)).b_, F->tt_576, &F->aty_1373, &F->v_1374);
f_check_type_363(F->up, F->aty_1373, F->tt_576, (*(P163)rt_nil_check(F->e_575)).line_);
(*F->t_578) = F->up->ty_string_153;
if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)1LL))) {
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_of_int(", 14), (*(P133)rt_nil_check(F->v_1374))), 41));
} else if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)3LL))) {
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_image_float(", 17), (*(P133)rt_nil_check(F->v_1374))), 41));
} else if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)2LL))) {
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_bool_rep(", 14), (*(P133)rt_nil_check(F->v_1374))), 41));
} else if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)11LL))) {
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_char_rep(", 14), (*(P133)rt_nil_check(F->v_1374))), 41));
} else if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)4LL))) {
f_lit_table_574(F->up, F->tt_576, &F->lt_1375);
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_enum_rep(", 14), (*(P133)rt_nil_check(F->v_1374))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lt_1375))), rt_str(", ", 2)), rt_str_of_int(f_list_len_237(F->up, (*(P115)rt_nil_check(F->tt_576)).lits_))), 41));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_575)).line_, rt_str("REP is an attribute of scalar types", 35));
}
goto ret_;
}
(*F->t_578) = F->tt_576;
if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)1LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_575)).b_, F->up->ty_string_153, &F->aty_1373, &F->v_1374);
f_check_type_363(F->up, F->aty_1373, F->up->ty_string_153, (*(P163)rt_nil_check(F->e_575)).line_);
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_int_of_str(", 14), (*(P133)rt_nil_check(F->v_1374))), 41));
if (((F->c_577 != NULL) && ((*(P170)rt_nil_check(F->c_577)).lo_ != NULL))) {
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check((*F->r_579)))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_577)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_577)).hi_))), 41));
}
} else if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)3LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_575)).b_, F->up->ty_string_153, &F->aty_1373, &F->v_1374);
f_check_type_363(F->up, F->aty_1373, F->up->ty_string_153, (*(P163)rt_nil_check(F->e_575)).line_);
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_float_val(", 15), (*(P133)rt_nil_check(F->v_1374))), 41));
} else if (((((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)2LL)) || ((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)11LL))) || ((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)4LL)))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_575)).b_, NULL, &F->aty_1373, &F->v_1374);
if (((*(P115)rt_nil_check(F->aty_1373)).kind_ == ((rt_int)5LL))) {
if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)2LL))) {
F->v_1374 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_bool_val(", 14), (*(P133)rt_nil_check(F->v_1374))), 41));
} else if (((*(P115)rt_nil_check(F->tt_576)).kind_ == ((rt_int)11LL))) {
F->v_1374 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_char_val(", 14), (*(P133)rt_nil_check(F->v_1374))), 41));
} else {
f_lit_table_574(F->up, F->tt_576, &F->lt_1375);
F->v_1374 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_enum_val(", 14), (*(P133)rt_nil_check(F->v_1374))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lt_1375))), rt_str(", ", 2)), rt_str_of_int(f_list_len_237(F->up, (*(P115)rt_nil_check(F->tt_576)).lits_))), 41));
}
} else {
f_check_type_363(F->up, F->aty_1373, F->up->ty_int_149, (*(P163)rt_nil_check(F->e_575)).line_);
F->v_1374 = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1374))), rt_str(" - 1)", 5)));
}
(*F->r_579) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1374))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_577)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_577)).hi_))), 41));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_575)).line_, rt_str("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_585(struct f_greenc_1fr *up_, P163 e_581, P115 want_582, P115 *t_583, P133 *r_584) {
  struct f_allocator_585fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_581 = e_581;
F->want_582 = want_582;
F->t_583 = t_583;
F->r_584 = r_584;
F->y_1377 = NULL;
F->y_1377 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_581)).name_)));
F->target_1378 = NULL;
F->vt_1379 = NULL;
F->ct_1380 = NULL;
F->pt_1381 = NULL;
F->cell_1382 = NULL;
F->v_1383 = NULL;
F->x_1384 = NULL;
if (((F->want_582 == NULL) || ((*(P115)rt_nil_check(F->want_582)).kind_ != ((rt_int)8LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_581)).line_, rt_str("the access type of this allocator is not known here", 51));
}
if (((F->y_1377 == NULL) || ((*(P110)rt_nil_check(F->y_1377)).kind_ != ((rt_int)5LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_581)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_581)).name_)), rt_str(" is not a type", 14)));
}
f_finish_ptr_391(F->up, F->want_582);
F->target_1378 = (*(P115)rt_nil_check(F->want_582)).target_;
if ((!f_same_343(F->up, (*(P110)rt_nil_check(F->y_1377)).t_, F->want_582))) {
f_check_type_363(F->up, (*(P110)rt_nil_check(F->y_1377)).t_, F->target_1378, (*(P163)rt_nil_check(F->e_581)).line_);
}
f_ctype_368(F->up, F->target_1378, &F->ct_1380);
f_ctype_368(F->up, F->want_582, &F->pt_1381);
f_new_name_188(F->up, rt_str("cell", 4), &F->cell_1382);
if (((*(P163)rt_nil_check(F->e_581)).a_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_581)).line_, rt_str("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_178 != NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_581)).line_, rt_str("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_581)).a_)).kind_ == ((rt_int)12LL))) {
f_aggregate_590(F->up, (*(P163)rt_nil_check(F->e_581)).a_, F->target_1378, &F->vt_1379, &F->v_1383);
} else {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->e_581)).a_, F->target_1378, &F->vt_1379, &F->v_1383);
}
f_check_type_363(F->up, F->vt_1379, F->target_1378, (*(P163)rt_nil_check(F->e_581)).line_);
f_copy_code_407(F->up, F->target_1378, (*(P133)rt_nil_check(F->v_1383)), &F->x_1384);
(*F->t_583) = F->want_582;
(*F->r_584) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1380))), rt_str(" *", 2)), (*(P133)rt_nil_check(F->cell_1382))), rt_str(" = rt_alloc(sizeof(", 19)), (*(P133)rt_nil_check(F->ct_1380))), rt_str(")); *", 5)), (*(P133)rt_nil_check(F->cell_1382))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1384))), rt_str("; (", 3)), (*(P133)rt_nil_check(F->pt_1381))), 41), (*(P133)rt_nil_check(F->cell_1382))), rt_str("; })", 4)));
ret_:

  return;
}

static void f_aggregate_590(struct f_greenc_1fr *up_, P163 e_586, P115 want_587, P115 *t_588, P133 *r_589) {
  struct f_aggregate_590fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_586 = e_586;
F->want_587 = want_587;
F->t_588 = t_588;
F->r_589 = r_589;
F->it_1385 = NULL;
F->it_1385 = (*(P163)rt_nil_check(F->e_586)).a_;
F->f_1386 = NULL;
F->vt_1387 = NULL;
F->ct_1388 = NULL;
F->tmp_1389 = NULL;
F->v_1390 = NULL;
F->x_1391 = NULL;
F->parts_1392 = NULL;
F->et_1393 = NULL;
F->lo_1394 = NULL;
F->hi_1395 = NULL;
F->key_1396 = NULL;
F->fill_1397 = NULL;
F->fill_1397 = f_mk_185(F->up, rt_str("", 0));
F->lab_1399 = NULL;
if ((F->want_587 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_586)).line_, rt_str("the type of this aggregate is not known here", 44));
}
(*F->t_588) = F->want_587;
f_ctype_368(F->up, F->want_587, &F->ct_1388);
f_new_name_188(F->up, rt_str("ag", 2), &F->tmp_1389);
if (((*(P115)rt_nil_check(F->want_587)).kind_ == ((rt_int)7LL))) {
F->parts_1392 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1388))), 32), (*(P133)rt_nil_check(F->tmp_1389))), 59));
if ((f_list_len_237(F->up, F->it_1385) != f_field_count_365(F->up, F->want_587))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_586)).line_, rt_str_cat(rt_str("an aggregate gives every component of ", 38), f_kind_name_359(F->up, F->want_587)));
}
F->f_1386 = (*(P115)rt_nil_check(F->want_587)).fields_;
while ((F->it_1385 != NULL)) {
if (((*(P163)rt_nil_check(F->it_1385)).a_ != NULL)) {
F->f_1386 = (*(P115)rt_nil_check(F->want_587)).fields_;
while (((F->f_1386 != NULL) && (!(((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1385)).a_)).a_)).kind_ == ((rt_int)5LL)) && rt_str_eq((*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1386)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1385)).a_)).a_)).name_))))))) {
F->f_1386 = (*(P1081)rt_nil_check(F->f_1386)).next_;
}
L_end_1401: ;
if ((F->f_1386 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_586)).line_, rt_str("no such component in the aggregate", 34));
}
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->it_1385)).b_, (*(P1081)rt_nil_check(F->f_1386)).t_, &F->vt_1387, &F->v_1390);
f_check_type_363(F->up, F->vt_1387, (*(P1081)rt_nil_check(F->f_1386)).t_, (*(P163)rt_nil_check(F->e_586)).line_);
f_copy_code_407(F->up, (*(P1081)rt_nil_check(F->f_1386)).t_, (*(P133)rt_nil_check(F->v_1390)), &F->x_1391);
F->parts_1392 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1392)), 32), (*(P133)rt_nil_check(F->tmp_1389))), 46), f_c_field_202(F->up, (*(P133)rt_nil_check((*(P1081)rt_nil_check(F->f_1386)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1391))), 59));
F->it_1385 = (*(P163)rt_nil_check(F->it_1385)).next_;
if ((F->f_1386 != NULL)) {
F->f_1386 = (*(P1081)rt_nil_check(F->f_1386)).next_;
}
}
L_end_1400: ;
(*F->r_589) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1392)), 32), (*(P133)rt_nil_check(F->tmp_1389))), rt_str("; })", 4)));
goto ret_;
}
if (((*(P115)rt_nil_check(F->want_587)).kind_ != ((rt_int)6LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_586)).line_, rt_str("an aggregate builds a record or an array", 40));
}
f_ctype_368(F->up, (*(P115)rt_nil_check(F->want_587)).elem_, &F->et_1393);
if (((*(P163)rt_nil_check(F->it_1385)).a_ == NULL)) {
if ((((*(P115)rt_nil_check(F->want_587)).tcons_ != NULL) && ((*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_587)).tcons_)).lo_ != NULL))) {
F->lo_1394 = (*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_587)).tcons_)).lo_;
} else {
F->lo_1394 = f_mk_185(F->up, rt_str("1", 1));
}
F->n_1398 = f_list_len_237(F->up, F->it_1385);
F->parts_1392 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1388))), 32), (*(P133)rt_nil_check(F->tmp_1389))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1394))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->lo_1394))), rt_str(" + ", 3)), rt_str_of_int(rt_sub(F->n_1398, ((rt_int)1LL)))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1393))), rt_str(") * ", 4)), rt_str_of_int(rt_add(F->n_1398, ((rt_int)1LL)))), rt_str(");", 2)));
F->n_1398 = ((rt_int)0LL);
while ((F->it_1385 != NULL)) {
if (((*(P163)rt_nil_check(F->it_1385)).a_ != NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_586)).line_, rt_str("named associations follow the positional ones", 45));
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->it_1385)).b_, (*(P115)rt_nil_check(F->want_587)).elem_, &F->vt_1387, &F->v_1390);
f_check_type_363(F->up, F->vt_1387, (*(P115)rt_nil_check(F->want_587)).elem_, (*(P163)rt_nil_check(F->e_586)).line_);
f_copy_code_407(F->up, (*(P115)rt_nil_check(F->want_587)).elem_, (*(P133)rt_nil_check(F->v_1390)), &F->x_1391);
F->parts_1392 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1392)), 32), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".p[", 3)), rt_str_of_int(F->n_1398)), rt_str("] = ", 4)), (*(P133)rt_nil_check(F->x_1391))), 59));
F->n_1398 = rt_add(F->n_1398, ((rt_int)1LL));
F->it_1385 = (*(P163)rt_nil_check(F->it_1385)).next_;
}
L_end_1402: ;
(*F->r_589) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1392)), 32), (*(P133)rt_nil_check(F->tmp_1389))), rt_str("; })", 4)));
goto ret_;
}
if ((((*(P115)rt_nil_check(F->want_587)).tcons_ != NULL) && ((*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_587)).tcons_)).hi_ != NULL))) {
F->lo_1394 = (*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_587)).tcons_)).lo_;
F->hi_1395 = (*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_587)).tcons_)).hi_;
} else if (((((*(P163)rt_nil_check(F->it_1385)).next_ == NULL) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1385)).a_)).flag_ != ((rt_int)1LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1385)).a_)).b_ != NULL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1385)).a_)).a_, (*(P115)rt_nil_check(F->want_587)).idx_, &F->vt_1387, &F->lo_1394);
f_gexpr_536(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1385)).a_)).b_, (*(P115)rt_nil_check(F->want_587)).idx_, &F->vt_1387, &F->hi_1395);
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_586)).line_, rt_str("the bounds of this aggregate are not known", 42));
}
F->parts_1392 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1388))), 32), (*(P133)rt_nil_check(F->tmp_1389))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1394))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->hi_1395))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1393))), rt_str(") * (size_t)(RT_CNT(", 20)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(") + 1));", 8)));
F->n_1398 = ((*(P133)rt_nil_check(F->parts_1392))).len;
while ((F->it_1385 != NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->it_1385)).b_, (*(P115)rt_nil_check(F->want_587)).elem_, &F->vt_1387, &F->v_1390);
f_check_type_363(F->up, F->vt_1387, (*(P115)rt_nil_check(F->want_587)).elem_, (*(P163)rt_nil_check(F->e_586)).line_);
f_copy_code_407(F->up, (*(P115)rt_nil_check(F->want_587)).elem_, (*(P133)rt_nil_check(F->v_1390)), &F->x_1391);
F->lab_1399 = (*(P163)rt_nil_check(F->it_1385)).a_;
while ((F->lab_1399 != NULL)) {
if (((*(P163)rt_nil_check(F->lab_1399)).flag_ == ((rt_int)1LL))) {
F->fill_1397 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int k_ = 0; k_ < RT_CNT(", 33), (*(P133)rt_nil_check(F->tmp_1389))), rt_str("); k_++) ", 9)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".p[k_] = ", 9)), (*(P133)rt_nil_check(F->x_1391))), 59));
} else if (((*(P163)rt_nil_check(F->lab_1399)).b_ != NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->lab_1399)).a_, (*(P115)rt_nil_check(F->want_587)).idx_, &F->vt_1387, &F->key_1396);
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->lab_1399)).b_, (*(P115)rt_nil_check(F->want_587)).idx_, &F->vt_1387, &F->hi_1395);
F->parts_1392 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1392)), rt_str(" for (rt_int k_ = ", 18)), (*(P133)rt_nil_check(F->key_1396))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1395))), rt_str("; k_++) ", 8)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".p[rt_index(k_, ", 16)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1391))), 59));
} else {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->lab_1399)).a_, (*(P115)rt_nil_check(F->want_587)).idx_, &F->vt_1387, &F->key_1396);
F->parts_1392 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1392)), 32), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->key_1396))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1389))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1391))), 59));
}
F->lab_1399 = (*(P163)rt_nil_check(F->lab_1399)).next_;
}
L_end_1404: ;
F->it_1385 = (*(P163)rt_nil_check(F->it_1385)).next_;
}
L_end_1403: ;
(*F->r_589) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_slice((*(P133)rt_nil_check(F->parts_1392)), ((rt_int)1LL), F->n_1398), (*(P133)rt_nil_check(F->fill_1397))), rt_str_slice((*(P133)rt_nil_check(F->parts_1392)), rt_add(F->n_1398, ((rt_int)1LL)), ((*(P133)rt_nil_check(F->parts_1392))).len)), 32), (*(P133)rt_nil_check(F->tmp_1389))), rt_str("; })", 4)));
ret_:

  return;
}

static P163 f_actual_for_594(struct f_greenc_1fr *up_, P163 args_591, P1070 pm_592, P1070 first_593) {
  struct f_actual_for_594fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_591 = args_591;
F->pm_592 = pm_592;
F->first_593 = first_593;
F->a_1405 = NULL;
F->a_1405 = F->args_591;
F->p_1406 = NULL;
F->p_1406 = F->first_593;
while (((F->a_1405 != NULL) && ((*(P163)rt_nil_check(F->a_1405)).formal_ == NULL))) {
if ((F->p_1406 == F->pm_592)) {
F->result_ = F->a_1405;
goto ret_;
}
F->p_1406 = (*(P1070)rt_nil_check(F->p_1406)).next_;
F->a_1405 = (*(P163)rt_nil_check(F->a_1405)).next_;
}
L_end_1407: ;
while ((F->a_1405 != NULL)) {
if ((((*(P163)rt_nil_check(F->a_1405)).formal_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1405)).formal_)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_592)).name_))))) {
F->result_ = F->a_1405;
goto ret_;
}
F->a_1405 = (*(P163)rt_nil_check(F->a_1405)).next_;
}
L_end_1408: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_599(struct f_greenc_1fr *up_, P163 e_595, int is_stmt_596, P115 *t_597, P133 *r_598) {
  struct f_gcall_599fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_595 = e_595;
F->is_stmt_596 = is_stmt_596;
F->t_597 = t_597;
F->r_598 = r_598;
F->fn_1409 = NULL;
F->fn_1409 = (*(P163)rt_nil_check(F->e_595)).a_;
F->nm_1410 = NULL;
F->y_1411 = NULL;
F->args_1412 = NULL;
F->lv_1413 = NULL;
F->v_1414 = NULL;
F->ct_1415 = NULL;
F->x_1416 = NULL;
F->a_1417 = NULL;
F->pm_1418 = NULL;
F->lt_1419 = NULL;
F->vt_1420 = NULL;
F->lc_1421 = NULL;
if ((((*(P163)rt_nil_check(F->fn_1409)).kind_ == ((rt_int)9LL)) && f_is_package_613(F->up, (*(P163)rt_nil_check(F->fn_1409)).a_))) {
F->nm_1410 = f_nn_231(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->fn_1409)).line_);
(*(P163)rt_nil_check(F->nm_1410)).name_ = (*(P163)rt_nil_check(F->fn_1409)).name_;
(*(P163)rt_nil_check(F->nm_1410)).tag_ = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).a_)).name_;
F->fn_1409 = F->nm_1410;
} else if ((((((*(P163)rt_nil_check(F->fn_1409)).kind_ == ((rt_int)9LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_680(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).a_)).a_)).name_))))) {
F->y_1411 = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), (*(P163)rt_nil_check(F->fn_1409)).line_);
if (((F->y_1411 != NULL) && (((*(P110)rt_nil_check(F->y_1411)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1411)).kind_ == ((rt_int)4LL))))) {
f_resolve_member_overload_656(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), (*(P163)rt_nil_check(F->e_595)).b_, F->is_stmt_596, F->up->call_want_177, (*(P163)rt_nil_check(F->e_595)).line_, &F->y_1411);
F->up->call_task_ix_166 = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).a_)).b_;
if ((F->is_stmt_596 && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1411)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_595)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_604(F->up, F->e_595, F->y_1411, &(*F->t_597), &(*F->r_598));
goto ret_;
}
}
if (((*(P163)rt_nil_check(F->fn_1409)).kind_ != ((rt_int)5LL))) {
f_other_call_737(F->up, F->e_595, F->is_stmt_596, &(*F->t_597), &(*F->r_598));
goto ret_;
}
F->y_1411 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)));
if (((*(P163)rt_nil_check(F->fn_1409)).tag_ != NULL)) {
F->y_1411 = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), (*(P163)rt_nil_check(F->fn_1409)).line_);
}
if ((F->y_1411 == NULL)) {
f_builtin_611(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), (*(P163)rt_nil_check(F->e_595)).b_, (*(P163)rt_nil_check(F->e_595)).line_, F->is_stmt_596, &(*F->t_597), &(*F->r_598));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1411)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1411)).kind_ == ((rt_int)4LL))) && ((*(P163)rt_nil_check(F->fn_1409)).tag_ == NULL))) {
f_resolve_overload_648(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), (*(P163)rt_nil_check(F->e_595)).b_, F->is_stmt_596, F->up->call_want_177, (*(P163)rt_nil_check(F->e_595)).line_, &F->y_1411);
if ((F->y_1411 == NULL)) {
f_builtin_611(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), (*(P163)rt_nil_check(F->e_595)).b_, (*(P163)rt_nil_check(F->e_595)).line_, F->is_stmt_596, &(*F->t_597), &(*F->r_598));
goto ret_;
}
} else if ((((*(P110)rt_nil_check(F->y_1411)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1411)).kind_ == ((rt_int)4LL)))) {
f_resolve_member_overload_656(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), (*(P163)rt_nil_check(F->e_595)).b_, F->is_stmt_596, F->up->call_want_177, (*(P163)rt_nil_check(F->e_595)).line_, &F->y_1411);
}
if (((*(P110)rt_nil_check(F->y_1411)).kind_ == ((rt_int)10LL))) {
f_other_call_737(F->up, F->e_595, F->is_stmt_596, &(*F->t_597), &(*F->r_598));
goto ret_;
}
if ((((*(P110)rt_nil_check(F->y_1411)).kind_ != ((rt_int)3LL)) && ((*(P110)rt_nil_check(F->y_1411)).kind_ != ((rt_int)4LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_595)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), rt_str(" cannot be called", 17)));
}
if ((F->is_stmt_596 && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1411)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_595)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_596) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1411)).result_)).kind_ == ((rt_int)9LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_595)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1409)).name_)), rt_str(" is a procedure, not a function", 31)));
}
f_gcall_with_604(F->up, F->e_595, F->y_1411, &(*F->t_597), &(*F->r_598));
ret_:

  return;
}

static void f_gcall_with_604(struct f_greenc_1fr *up_, P163 e_600, P110 y_601, P115 *t_602, P133 *r_603) {
  struct f_gcall_with_604fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_600 = e_600;
F->y_601 = y_601;
F->t_602 = t_602;
F->r_603 = r_603;
F->args_1423 = NULL;
F->lv_1424 = NULL;
F->v_1425 = NULL;
F->x1_1426 = NULL;
F->x2_1427 = NULL;
F->a_1428 = NULL;
F->pm_1429 = NULL;
F->lt_1430 = NULL;
F->vt_1431 = NULL;
F->lc_1432 = NULL;
f_check_call_rules_792(F->up, F->e_600, F->y_601);
F->args_1423 = f_mk_185(F->up, rt_str("", 0));
if (((((((*(P110)rt_nil_check(F->y_601)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_601)).kind_ == ((rt_int)4LL))) && ((*(P110)rt_nil_check(F->y_601)).access_path_ != NULL)) && ((*(P110)rt_nil_check(F->y_601)).members_ != NULL)) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_166 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_600)).line_, rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_601)).name_)), rt_str(" needs the member of the family: F(I).", 38)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_601)).name_))));
}
f_gexpr_536(F->up, F->up->call_task_ix_166, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).t_, &F->vt_1431, &F->v_1425);
F->up->call_task_ix_166 = NULL;
f_path_at_678(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_601)).access_path_)), &F->lv_1424);
f_path_at_678(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).cname_)), rt_str("lo", 2)), &F->x1_1426);
f_path_at_678(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).cname_)), rt_str("hi", 2)), &F->x2_1427);
F->lv_1424 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lv_1424)), rt_str("[rt_index(", 10)), (*(P133)rt_nil_check(F->v_1425))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->x1_1426))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->x2_1427))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->x1_1426))), 93));
F->args_1423 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1424))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->lv_1424))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((((*(P110)rt_nil_check(F->y_601)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_601)).kind_ == ((rt_int)4LL))) && ((*(P110)rt_nil_check(F->y_601)).access_path_ != NULL))) {
f_path_at_678(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_601)).members_)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_601)).access_path_)), &F->lv_1424);
F->args_1423 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1424))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->lv_1424))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((*(P110)rt_nil_check(F->y_601)).level_ > ((rt_int)0LL))) {
f_link_to_484(F->up, (*(P110)rt_nil_check(F->y_601)).level_, &F->args_1423);
}
F->pm_1429 = (*(P110)rt_nil_check(F->y_601)).params_;
while ((F->pm_1429 != NULL)) {
F->a_1428 = f_actual_for_594(F->up, (*(P163)rt_nil_check(F->e_600)).b_, F->pm_1429, (*(P110)rt_nil_check(F->y_601)).params_);
if ((((*(P133)rt_nil_check(F->args_1423))).len > ((rt_int)0LL))) {
F->args_1423 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1423)), rt_str(", ", 2)));
}
if ((F->a_1428 == NULL)) {
if ((((*(P1070)rt_nil_check(F->pm_1429)).dflt_ == NULL) || ((*(P1070)rt_nil_check(F->pm_1429)).mode_ != ((rt_int)1LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_600)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).name_))));
}
f_gexpr_536(F->up, (*(P1070)rt_nil_check(F->pm_1429)).dflt_, (*(P1070)rt_nil_check(F->pm_1429)).t_, &F->vt_1431, &F->v_1425);
F->args_1423 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1423)), (*(P133)rt_nil_check(F->v_1425))));
} else {
if (((((*(P163)rt_nil_check(F->a_1428)).flag_ != ((rt_int)0LL)) && ((*(P163)rt_nil_check(F->a_1428)).flag_ != ((rt_int)4LL))) && ((*(P163)rt_nil_check(F->a_1428)).flag_ != (*(P1070)rt_nil_check(F->pm_1429)).mode_))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_600)).line_, rt_str_cat(rt_str_cat(rt_str("the association of ", 19), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).name_))), rt_str(" does not match its mode", 24)));
}
if (((*(P1070)rt_nil_check(F->pm_1429)).mode_ == ((rt_int)1LL))) {
f_gexpr_536(F->up, F->a_1428, (*(P1070)rt_nil_check(F->pm_1429)).t_, &F->vt_1431, &F->v_1425);
f_check_type_363(F->up, F->vt_1431, (*(P1070)rt_nil_check(F->pm_1429)).t_, (*(P163)rt_nil_check(F->e_600)).line_);
if (((((*(P1070)rt_nil_check(F->pm_1429)).c_ != NULL) && ((*(P170)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).c_)).lo_ != NULL)) && (((*(P115)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).t_)).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).t_)).kind_ == ((rt_int)4LL))))) {
F->v_1425 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1425))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).c_)).hi_))), 41));
}
F->args_1423 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1423)), (*(P133)rt_nil_check(F->v_1425))));
} else {
f_lvalue_498(F->up, F->a_1428, &F->lv_1424, &F->lt_1430, &F->lc_1432, &F->ro_1433);
if (F->ro_1433) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_600)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1429)).name_)), rt_str(" needs a variable", 17)));
}
f_check_pure_target_775(F->up, F->a_1428, (*(P163)rt_nil_check(F->e_600)).line_);
f_check_type_363(F->up, F->lt_1430, (*(P1070)rt_nil_check(F->pm_1429)).t_, (*(P163)rt_nil_check(F->e_600)).line_);
F->args_1423 = f_mk_185(F->up, rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->args_1423)), 38), (*(P133)rt_nil_check(F->lv_1424))));
}
}
F->pm_1429 = (*(P1070)rt_nil_check(F->pm_1429)).next_;
}
L_end_1434: ;
if (((f_list_len_237(F->up, (*(P163)rt_nil_check(F->e_600)).b_) > ((rt_int)0LL)) && ((*(P110)rt_nil_check(F->y_601)).params_ == NULL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_600)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_601)).name_)), rt_str(" takes no parameters", 20)));
}
(*F->t_602) = (*(P110)rt_nil_check(F->y_601)).result_;
(*F->r_603) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_601)).cname_)), 40), (*(P133)rt_nil_check(F->args_1423))), 41));
ret_:

  return;
}

static void f_builtin_611(struct f_greenc_1fr *up_, rstr name_605, P163 args_606, rt_int line_607, int is_stmt_608, P115 *t_609, P133 *r_610) {
  struct f_builtin_611fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_605 = rt_str_copy(name_605);
F->args_606 = args_606;
F->line_607 = line_607;
F->is_stmt_608 = is_stmt_608;
F->t_609 = t_609;
F->r_610 = r_610;
F->aty_1435 = NULL;
F->lt_1436 = NULL;
F->a_1437 = NULL;
F->w_1438 = NULL;
F->lv_1439 = NULL;
F->lc_1440 = NULL;
(*F->t_609) = F->up->ty_void_154;
if (((F->up->pure_sym_178 != NULL) && (rt_str_eq(F->name_605, rt_str("PUT", 3)) || rt_str_eq(F->name_605, rt_str("GET", 3))))) {
f_fail_206(F->up, F->line_607, rt_str_cat(rt_str_cat(rt_str("a function cannot do input-output: ", 35), F->name_605), rt_str(" has side effects (RM79 6.5)", 28)));
}
if (rt_str_eq(F->name_605, rt_str("PUT", 3))) {
if ((F->args_606 == NULL)) {
f_fail_206(F->up, F->line_607, rt_str("PUT needs an item", 17));
}
f_gexpr_536(F->up, F->args_606, NULL, &F->aty_1435, &F->a_1437);
F->w_1438 = f_mk_185(F->up, rt_str("0", 1));
if (((*(P163)rt_nil_check(F->args_606)).next_ != NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->args_606)).next_, F->up->ty_int_149, &F->lt_1436, &F->w_1438);
}
if (((*(P115)rt_nil_check(F->aty_1435)).kind_ == ((rt_int)5LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_put(", 9), (*(P133)rt_nil_check(F->a_1437))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1435)).kind_ == ((rt_int)11LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_putc(", 10), (*(P133)rt_nil_check(F->a_1437))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1435)).kind_ == ((rt_int)1LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_int(", 13), (*(P133)rt_nil_check(F->a_1437))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1438))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1435)).kind_ == ((rt_int)2LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_bool(", 14), (*(P133)rt_nil_check(F->a_1437))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1438))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1435)).kind_ == ((rt_int)3LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_float(", 15), (*(P133)rt_nil_check(F->a_1437))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1438))), rt_str(", 0)", 4)));
} else {
f_fail_206(F->up, F->line_607, rt_str("PUT of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_605, rt_str("GET", 3))) {
f_lvalue_498(F->up, F->args_606, &F->lv_1439, &F->lt_1436, &F->lc_1440, &F->ro_1441);
if (((*(P115)rt_nil_check(F->lt_1436)).kind_ == ((rt_int)11LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1439))), rt_str(" = rt_g_getc())", 15)));
} else if (((*(P115)rt_nil_check(F->lt_1436)).kind_ == ((rt_int)1LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1439))), rt_str(" = rt_g_get_int())", 18)));
} else if (((*(P115)rt_nil_check(F->lt_1436)).kind_ == ((rt_int)3LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1439))), rt_str(" = rt_g_get_float())", 20)));
} else {
f_fail_206(F->up, F->line_607, rt_str("GET of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_605, rt_str("ABS", 3))) {
f_gexpr_536(F->up, F->args_606, NULL, &(*F->t_609), &F->a_1437);
if (((*(P115)rt_nil_check((*F->t_609))).kind_ == ((rt_int)1LL))) {
(*F->r_610) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_abs(", 7), (*(P133)rt_nil_check(F->a_1437))), 41));
} else {
(*F->r_610) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("fabs(", 5), (*(P133)rt_nil_check(F->a_1437))), 41));
}
} else {
f_task_builtin_752(F->up, F->name_605, F->args_606, F->line_607, &(*F->t_609), &(*F->r_610));
}
ret_:

  return;
}

static int f_is_package_613(struct f_greenc_1fr *up_, P163 e_612) {
  struct f_is_package_613fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_612 = e_612;
F->y_1442 = NULL;
if (((*(P163)rt_nil_check(F->e_612)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1442 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_612)).name_)));
F->result_ = ((F->y_1442 != NULL) && (((*(P110)rt_nil_check(F->y_1442)).kind_ == ((rt_int)8LL)) || ((*(P110)rt_nil_check(F->y_1442)).kind_ == ((rt_int)9LL))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_member_of_617(struct f_greenc_1fr *up_, rstr p_614, rstr name_615, rt_int line_616) {
  struct f_member_of_617fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_614 = rt_str_copy(p_614);
F->name_615 = rt_str_copy(name_615);
F->line_616 = line_616;
F->y_1443 = NULL;
F->y_1443 = f_lookup_330(F->up, F->p_614);
F->m_1444 = NULL;
if (((F->y_1443 == NULL) || (((*(P110)rt_nil_check(F->y_1443)).kind_ != ((rt_int)8LL)) && ((*(P110)rt_nil_check(F->y_1443)).kind_ != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_1444 = (*(P110)rt_nil_check(F->y_1443)).members_;
while ((F->m_1444 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1444)).name_)), F->name_615) && (!(*(P110)rt_nil_check(F->m_1444)).hidden_))) {
F->result_ = F->m_1444;
goto ret_;
}
F->m_1444 = (*(P110)rt_nil_check(F->m_1444)).mnext_;
}
L_end_1445: ;
if (((*(P110)rt_nil_check(F->y_1443)).kind_ == ((rt_int)9LL))) {
F->m_1444 = f_lookup_entry_336(F->up, F->name_615, F->y_1443);
if ((((F->m_1444 != NULL) && ((*(P110)rt_nil_check(F->m_1444)).kind_ == ((rt_int)10LL))) && f_same_task_333(F->up, (*(P110)rt_nil_check(F->m_1444)).members_, F->y_1443))) {
F->result_ = F->m_1444;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_619(struct f_greenc_1fr *up_, P163 p_618) {
  struct f_inside_package_619fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_618 = p_618;
F->l_1446 = NULL;
F->l_1446 = F->up->pkg_stack_174;
if ((F->p_618 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_1446 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P144)rt_nil_check(F->l_1446)).s_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_618)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_1446 = (*(P144)rt_nil_check(F->l_1446)).next_;
}
L_end_1447: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_622(struct f_greenc_1fr *up_, P110 y_620, P110 *z_621) {
  struct f_copy_sym_622fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_620 = y_620;
F->z_621 = z_621;
(*F->z_621) = ({ R111 *cell1448 = rt_alloc(sizeof(R111)); *cell1448 = cp_R111(({ R111 ag1449; ag1449.kind_ = (*(P110)rt_nil_check(F->y_620)).kind_; ag1449.name_ = (*(P110)rt_nil_check(F->y_620)).name_; ag1449.t_ = (*(P110)rt_nil_check(F->y_620)).t_; ag1449.c_ = (*(P110)rt_nil_check(F->y_620)).c_; ag1449.access_path_ = (*(P110)rt_nil_check(F->y_620)).access_path_; ag1449.cname_ = (*(P110)rt_nil_check(F->y_620)).cname_; ag1449.ro_ = (*(P110)rt_nil_check(F->y_620)).ro_; ag1449.mvalue_ = (*(P110)rt_nil_check(F->y_620)).mvalue_; ag1449.hasmv_ = (*(P110)rt_nil_check(F->y_620)).hasmv_; ag1449.decl_ = (*(P110)rt_nil_check(F->y_620)).decl_; ag1449.params_ = (*(P110)rt_nil_check(F->y_620)).params_; ag1449.result_ = (*(P110)rt_nil_check(F->y_620)).result_; ag1449.depth_ = ((rt_int)0LL); ag1449.level_ = (*(P110)rt_nil_check(F->y_620)).level_; ag1449.byref_ = (*(P110)rt_nil_check(F->y_620)).byref_; ag1449.vrp_ = (*(P110)rt_nil_check(F->y_620)).vrp_; ag1449.hidden_ = (*(P110)rt_nil_check(F->y_620)).hidden_; ag1449.from_use_ = 0; ag1449.members_ = (*(P110)rt_nil_check(F->y_620)).members_; ag1449.mnext_ = NULL; ag1449.chain_ = NULL; ag1449.stack_ = NULL; ag1449; })); (P110)cell1448; });
ret_:

  return;
}

static void f_complete_private_625(struct f_greenc_1fr *up_, P115 ph_623, P115 full_624) {
  struct f_complete_private_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_623 = ph_623;
F->full_624 = full_624;
F->n_1450 = NULL;
F->n_1450 = (*(P115)rt_nil_check(F->ph_623)).name_;
F->p_1451 = NULL;
F->p_1451 = (*(P115)rt_nil_check(F->ph_623)).decl_;
as_R116(&(*(P115)rt_nil_check(F->ph_623)), (*(P115)rt_nil_check(F->full_624)));
(*(P115)rt_nil_check(F->ph_623)).name_ = F->n_1450;
(*(P115)rt_nil_check(F->ph_623)).priv_ = 1;
(*(P115)rt_nil_check(F->ph_623)).decl_ = F->p_1451;
ret_:

  return;
}

static void f_package_spec_627(struct f_greenc_1fr *up_, P163 e_626) {
  struct f_package_spec_627fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_626 = e_626;
F->y_1452 = NULL;
F->m_1453 = NULL;
F->z_1454 = NULL;
F->saved_1455 = NULL;
F->saved_1455 = F->up->cur_pkg_175;
F->first_private_1456 = NULL;
F->y_1452 = f_new_sym_354(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->e_626)).name_);
(*(P110)rt_nil_check(F->y_1452)).decl_ = F->e_626;
F->up->pkg_stack_174 = ({ R145 *cell1457 = rt_alloc(sizeof(R145)); *cell1457 = cp_R145(({ R145 ag1458; ag1458.s_ = (*(P163)rt_nil_check(F->e_626)).name_; ag1458.next_ = F->up->pkg_stack_174; ag1458; })); (P144)cell1457; });
F->up->cur_pkg_175 = F->e_626;
f_open_scope_350(F->up);
f_decl_elements_434(F->up, (*(P163)rt_nil_check(F->e_626)).c_);
F->first_private_1456 = F->up->scope_stack_114;
f_decl_elements_434(F->up, (*(P163)rt_nil_check(F->e_626)).d_);
F->m_1453 = F->up->scope_stack_114;
while (((F->m_1453 != NULL) && ((*(P110)rt_nil_check(F->m_1453)).depth_ == F->up->depth_113))) {
f_copy_sym_622(F->up, F->m_1453, &F->z_1454);
(*(P110)rt_nil_check(F->z_1454)).hidden_ = (f_hidden_from_630(F->up, F->m_1453, F->first_private_1456) || (*(P110)rt_nil_check(F->m_1453)).from_use_);
(*(P110)rt_nil_check(F->z_1454)).mnext_ = (*(P110)rt_nil_check(F->y_1452)).members_;
(*(P110)rt_nil_check(F->y_1452)).members_ = F->z_1454;
F->m_1453 = (*(P110)rt_nil_check(F->m_1453)).stack_;
}
L_end_1459: ;
f_close_scope_351(F->up);
F->up->pkg_stack_174 = (*(P144)rt_nil_check(F->up->pkg_stack_174)).next_;
F->up->cur_pkg_175 = F->saved_1455;
f_define_349(F->up, F->y_1452, (*(P163)rt_nil_check(F->e_626)).line_);
ret_:

  return;
}

static int f_hidden_from_630(struct f_greenc_1fr *up_, P110 m_628, P110 first_private_629) {
  struct f_hidden_from_630fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_628 = m_628;
F->first_private_629 = first_private_629;
F->p_1460 = NULL;
F->p_1460 = F->up->scope_stack_114;
while ((F->p_1460 != NULL)) {
if ((F->p_1460 == F->first_private_629)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_1460 == F->m_628)) {
F->result_ = 1;
goto ret_;
}
F->p_1460 = (*(P110)rt_nil_check(F->p_1460)).stack_;
}
L_end_1461: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_632(struct f_greenc_1fr *up_, P163 e_631) {
  struct f_package_body_632fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_631 = e_631;
F->y_1462 = NULL;
F->y_1462 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_631)).name_)));
F->m_1463 = NULL;
F->z_1464 = NULL;
F->saved_1465 = NULL;
F->saved_1465 = F->up->cur_pkg_175;
if (((F->y_1462 != NULL) && ((*(P110)rt_nil_check(F->y_1462)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_803(F->up, F->e_631);
goto ret_;
}
if (((F->y_1462 == NULL) || ((*(P110)rt_nil_check(F->y_1462)).kind_ != ((rt_int)8LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_631)).line_, rt_str_cat(rt_str_cat(rt_str("package body ", 13), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_631)).name_))), rt_str(" has no specification", 21)));
}
F->up->pkg_stack_174 = ({ R145 *cell1466 = rt_alloc(sizeof(R145)); *cell1466 = cp_R145(({ R145 ag1467; ag1467.s_ = (*(P163)rt_nil_check(F->e_631)).name_; ag1467.next_ = F->up->pkg_stack_174; ag1467; })); (P144)cell1466; });
F->up->cur_pkg_175 = (*(P110)rt_nil_check(F->y_1462)).decl_;
f_open_scope_350(F->up);
F->m_1463 = (*(P110)rt_nil_check(F->y_1462)).members_;
while ((F->m_1463 != NULL)) {
f_copy_sym_622(F->up, F->m_1463, &F->z_1464);
(*(P110)rt_nil_check(F->z_1464)).hidden_ = 0;
f_define_349(F->up, F->z_1464, (*(P163)rt_nil_check(F->e_631)).line_);
F->m_1463 = (*(P110)rt_nil_check(F->m_1463)).mnext_;
}
L_end_1468: ;
f_decl_elements_434(F->up, (*(P163)rt_nil_check(F->e_631)).c_);
F->m_1463 = (*(P110)rt_nil_check(F->y_1462)).members_;
while ((F->m_1463 != NULL)) {
if (((((*(P110)rt_nil_check(F->m_1463)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->m_1463)).kind_ == ((rt_int)4LL))) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->m_1463)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_1464 = F->up->table_112.p[rt_index(f_hash_328(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1463)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1464 != NULL)) {
if (((*(P110)rt_nil_check(F->z_1464)).cname_ == (*(P110)rt_nil_check(F->m_1463)).cname_)) {
(*(P110)rt_nil_check(F->m_1463)).decl_ = (*(P110)rt_nil_check(F->z_1464)).decl_;
}
F->z_1464 = (*(P110)rt_nil_check(F->z_1464)).chain_;
}
L_end_1470: ;
if (((*(P163)rt_nil_check((*(P110)rt_nil_check(F->m_1463)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_631)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no body for ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1463)).name_))), rt_str(" in package body ", 17)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_631)).name_))));
}
}
F->m_1463 = (*(P110)rt_nil_check(F->m_1463)).mnext_;
}
L_end_1469: ;
f_guarded_452(F->up, (*(P163)rt_nil_check(F->e_631)).d_, (*(P163)rt_nil_check(F->e_631)).e_, (*(P163)rt_nil_check(F->e_631)).line_);
f_close_scope_351(F->up);
F->up->pkg_stack_174 = (*(P144)rt_nil_check(F->up->pkg_stack_174)).next_;
F->up->cur_pkg_175 = F->saved_1465;
ret_:

  return;
}

static void f_use_clause_634(struct f_greenc_1fr *up_, P163 e_633) {
  struct f_use_clause_634fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_633 = e_633;
F->n_1471 = NULL;
F->n_1471 = (*(P163)rt_nil_check(F->e_633)).a_;
F->y_1472 = NULL;
F->m_1473 = NULL;
F->z_1474 = NULL;
F->old_1475 = NULL;
while ((F->n_1471 != NULL)) {
F->y_1472 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1471)).name_)));
if ((F->y_1472 == NULL)) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1471)).name_)), rt_str("TEXT_IO", 7)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->n_1471)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1471)).name_)), rt_str(" is not a package", 17)));
}
} else if ((((*(P110)rt_nil_check(F->y_1472)).kind_ != ((rt_int)8LL)) && ((*(P110)rt_nil_check(F->y_1472)).kind_ != ((rt_int)9LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->n_1471)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1471)).name_)), rt_str(" is not a package or a task", 27)));
} else {
F->m_1473 = (*(P110)rt_nil_check(F->y_1472)).members_;
while ((F->m_1473 != NULL)) {
F->old_1475 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1473)).name_)));
if (((!(*(P110)rt_nil_check(F->m_1473)).hidden_) && ((F->old_1475 == NULL) || ((((*(P110)rt_nil_check(F->old_1475)).depth_ < F->up->depth_113) && ((*(P110)rt_nil_check(F->old_1475)).kind_ != ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->old_1475)).kind_ != ((rt_int)2LL)))))) {
f_copy_sym_622(F->up, F->m_1473, &F->z_1474);
(*(P110)rt_nil_check(F->z_1474)).from_use_ = 1;
f_define_349(F->up, F->z_1474, (*(P163)rt_nil_check(F->n_1471)).line_);
}
F->m_1473 = (*(P110)rt_nil_check(F->m_1473)).mnext_;
}
L_end_1477: ;
}
F->n_1471 = (*(P163)rt_nil_check(F->n_1471)).next_;
}
L_end_1476: ;
ret_:

  return;
}

static void f_fits_639(struct f_greenc_1fr *up_, P110 y_635, P163 args_636, P115 want_637, int *ok_638) {
  struct f_fits_639fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_635 = y_635;
F->args_636 = args_636;
F->want_637 = want_637;
F->ok_638 = ok_638;
F->pm_1478 = NULL;
F->pm_1478 = (*(P110)rt_nil_check(F->y_635)).params_;
F->a_1479 = NULL;
F->t_1480 = NULL;
F->c_1481 = NULL;
F->v_1482 = NULL;
F->saved_1484 = NULL;
F->saved_1484 = F->up->code_129;
F->used_1485 = ((rt_int)0LL);
(*F->ok_638) = 1;
F->up->trial_148 = rt_add(F->up->trial_148, ((rt_int)1LL));
F->up->code_129 = f_new_buffer_207(F->up);
{
{ rt_frame xf1487;
if (RT_TRY(xf1487)) {
while (((*F->ok_638) && (F->pm_1478 != NULL))) {
F->a_1479 = f_actual_for_594(F->up, F->args_636, F->pm_1478, (*(P110)rt_nil_check(F->y_635)).params_);
if ((F->a_1479 == NULL)) {
(*F->ok_638) = ((*(P1070)rt_nil_check(F->pm_1478)).dflt_ != NULL);
} else {
F->used_1485 = rt_add(F->used_1485, ((rt_int)1LL));
if (((((*(P163)rt_nil_check(F->a_1479)).flag_ != ((rt_int)0LL)) && ((*(P163)rt_nil_check(F->a_1479)).flag_ != ((rt_int)4LL))) && ((*(P163)rt_nil_check(F->a_1479)).flag_ != (*(P1070)rt_nil_check(F->pm_1478)).mode_))) {
(*F->ok_638) = 0;
} else if (((*(P1070)rt_nil_check(F->pm_1478)).mode_ == ((rt_int)1LL))) {
f_gexpr_536(F->up, F->a_1479, (*(P1070)rt_nil_check(F->pm_1478)).t_, &F->t_1480, &F->v_1482);
(*F->ok_638) = (f_same_343(F->up, F->t_1480, (*(P1070)rt_nil_check(F->pm_1478)).t_) || (((*(P115)rt_nil_check(F->t_1480)).kind_ == ((rt_int)10LL)) && ((*(P115)rt_nil_check((*(P1070)rt_nil_check(F->pm_1478)).t_)).kind_ == ((rt_int)8LL))));
} else {
f_lvalue_498(F->up, F->a_1479, &F->v_1482, &F->t_1480, &F->c_1481, &F->ro_1483);
(*F->ok_638) = f_same_343(F->up, F->t_1480, (*(P1070)rt_nil_check(F->pm_1478)).t_);
}
}
F->pm_1478 = (*(P1070)rt_nil_check(F->pm_1478)).next_;
}
L_end_1489: ;
if ((F->used_1485 != f_list_len_237(F->up, F->args_636))) {
(*F->ok_638) = 0;
}
if ((((*F->ok_638) && (F->want_637 != NULL)) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_635)).result_)).kind_ != ((rt_int)9LL)))) {
(*F->ok_638) = (f_same_343(F->up, (*(P110)rt_nil_check(F->y_635)).result_, F->want_637) || ((*(P115)rt_nil_check(F->want_637)).kind_ == ((rt_int)9LL)));
}
RT_POP(xf1487);
} else {
RT_POP(xf1487);
int x1488 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1488);
if (0 || x1488 == ex_compile_error_101) {
(*F->ok_638) = 0;
} else {
rt_raise(x1488);
}
}
}

}
L_end_1486: ;
F->up->trial_148 = rt_sub(F->up->trial_148, ((rt_int)1LL));
F->up->code_129 = F->saved_1484;
ret_:

  return;
}

static int f_is_builtin_641(struct f_greenc_1fr *up_, rstr n_640) {
  struct f_is_builtin_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_640 = rt_str_copy(n_640);
F->result_ = (((rt_str_eq(F->n_640, rt_str("PUT", 3)) || rt_str_eq(F->n_640, rt_str("GET", 3))) || rt_str_eq(F->n_640, rt_str("ABS", 3))) || rt_str_eq(F->n_640, rt_str("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_648(struct f_greenc_1fr *up_, rstr name_642, P163 args_643, int is_stmt_644, P115 want_645, rt_int line_646, P110 *y_647) {
  struct f_resolve_overload_648fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_642 = rt_str_copy(name_642);
F->args_643 = args_643;
F->is_stmt_644 = is_stmt_644;
F->want_645 = want_645;
F->line_646 = line_646;
F->y_647 = y_647;
F->z_1490 = NULL;
F->z_1490 = F->up->table_112.p[rt_index(f_hash_328(F->up, F->name_642), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->first_1491 = NULL;
F->n_1492 = ((rt_int)0LL);
{ rt_int lo1496 = ((rt_int)1LL), hi1497 = ((rt_int)2LL);
for (rt_int it1498 = lo1496; it1498 <= hi1497; it1498++) {
F->pass_1495 = it1498;
F->z_1490 = F->up->table_112.p[rt_index(f_hash_328(F->up, F->name_642), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->n_1492 = ((rt_int)0LL);
while ((F->z_1490 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1490)).name_)), F->name_642) && (((*(P110)rt_nil_check(F->z_1490)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1490)).kind_ == ((rt_int)4LL))))) {
F->n_1492 = rt_add(F->n_1492, ((rt_int)1LL));
if ((F->first_1491 == NULL)) {
F->first_1491 = F->z_1490;
}
if ((((*(P115)rt_nil_check((*(P110)rt_nil_check(F->z_1490)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_644)) {
if ((F->pass_1495 == ((rt_int)1LL))) {
f_fits_639(F->up, F->z_1490, F->args_643, F->want_645, &F->ok_1493);
} else {
f_fits_639(F->up, F->z_1490, F->args_643, NULL, &F->ok_1493);
}
if (F->ok_1493) {
(*F->y_647) = F->z_1490;
goto ret_;
}
}
}
F->z_1490 = (*(P110)rt_nil_check(F->z_1490)).chain_;
}
L_end_1499: ;
}
}
L_end_1494: ;
if (f_is_builtin_641(F->up, F->name_642)) {
(*F->y_647) = NULL;
goto ret_;
}
if ((F->n_1492 > ((rt_int)1LL))) {
f_fail_206(F->up, F->line_646, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_642), rt_str(" fits these actual parameters", 29)));
}
(*F->y_647) = F->first_1491;
ret_:

  return;
}

static void f_resolve_member_overload_656(struct f_greenc_1fr *up_, rstr p_649, rstr name_650, P163 args_651, int is_stmt_652, P115 want_653, rt_int line_654, P110 *y_655) {
  struct f_resolve_member_overload_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_649 = rt_str_copy(p_649);
F->name_650 = rt_str_copy(name_650);
F->args_651 = args_651;
F->is_stmt_652 = is_stmt_652;
F->want_653 = want_653;
F->line_654 = line_654;
F->y_655 = y_655;
F->pk_1500 = NULL;
F->pk_1500 = f_lookup_330(F->up, F->p_649);
F->z_1501 = NULL;
F->n_1502 = ((rt_int)0LL);
if ((F->pk_1500 == NULL)) {
goto ret_;
}
{ rt_int lo1506 = ((rt_int)1LL), hi1507 = ((rt_int)2LL);
for (rt_int it1508 = lo1506; it1508 <= hi1507; it1508++) {
F->pass_1505 = it1508;
F->z_1501 = (*(P110)rt_nil_check(F->pk_1500)).members_;
F->n_1502 = ((rt_int)0LL);
while ((F->z_1501 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1501)).name_)), F->name_650) && (((*(P110)rt_nil_check(F->z_1501)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1501)).kind_ == ((rt_int)4LL)))) && (!(*(P110)rt_nil_check(F->z_1501)).hidden_))) {
F->n_1502 = rt_add(F->n_1502, ((rt_int)1LL));
if ((((*(P115)rt_nil_check((*(P110)rt_nil_check(F->z_1501)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_652)) {
if ((F->pass_1505 == ((rt_int)1LL))) {
f_fits_639(F->up, F->z_1501, F->args_651, F->want_653, &F->ok_1503);
} else {
f_fits_639(F->up, F->z_1501, F->args_651, NULL, &F->ok_1503);
}
if (F->ok_1503) {
(*F->y_655) = F->z_1501;
goto ret_;
}
}
}
F->z_1501 = (*(P110)rt_nil_check(F->z_1501)).mnext_;
}
L_end_1509: ;
}
}
L_end_1504: ;
if ((F->n_1502 > ((rt_int)1LL))) {
f_fail_206(F->up, F->line_654, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_650), rt_str(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_662(struct f_greenc_1fr *up_, P163 e_657, P115 want_658, P115 *t_659, P133 *r_660, int *done_661) {
  struct f_user_operator_662fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_657 = e_657;
F->want_658 = want_658;
F->t_659 = t_659;
F->r_660 = r_660;
F->done_661 = done_661;
F->op_1510 = NULL;
F->op_1510 = (*(P163)rt_nil_check(F->e_657)).name_;
F->negate_1511 = 0;
F->y_1512 = NULL;
F->call_1513 = NULL;
F->fname_1514 = NULL;
F->l_1515 = NULL;
F->rt_1516 = NULL;
(*F->done_661) = 0;
if (rt_str_eq((*(P133)rt_nil_check(F->op_1510)), rt_str("/=", 2))) {
F->op_1510 = f_mk_185(F->up, rt_str("=", 1));
F->negate_1511 = 1;
}
if ((f_lookup_330(F->up, (*(P133)rt_nil_check(F->op_1510))) == NULL)) {
goto ret_;
}
F->l_1515 = f_nn_231(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_657)).a_)).kind_, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_657)).a_)).line_);
as_R164(&(*(P163)rt_nil_check(F->l_1515)), (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_657)).a_)));
(*(P163)rt_nil_check(F->l_1515)).next_ = NULL;
(*(P163)rt_nil_check(F->l_1515)).formal_ = NULL;
(*(P163)rt_nil_check(F->l_1515)).flag_ = ((rt_int)0LL);
if (((*(P163)rt_nil_check(F->e_657)).kind_ == ((rt_int)7LL))) {
F->rt_1516 = f_nn_231(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_657)).b_)).kind_, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_657)).b_)).line_);
as_R164(&(*(P163)rt_nil_check(F->rt_1516)), (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_657)).b_)));
(*(P163)rt_nil_check(F->rt_1516)).next_ = NULL;
(*(P163)rt_nil_check(F->rt_1516)).formal_ = NULL;
(*(P163)rt_nil_check(F->rt_1516)).flag_ = ((rt_int)0LL);
(*(P163)rt_nil_check(F->l_1515)).next_ = F->rt_1516;
}
F->y_1512 = F->up->table_112.p[rt_index(f_hash_328(F->up, (*(P133)rt_nil_check(F->op_1510))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1512 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1512)).name_)), (*(P133)rt_nil_check(F->op_1510))) && ((*(P110)rt_nil_check(F->y_1512)).kind_ == ((rt_int)3LL)))) {
f_fits_639(F->up, F->y_1512, F->l_1515, NULL, &F->ok_1517);
if (F->ok_1517) {
F->fname_1514 = f_nn_231(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_657)).line_);
(*(P163)rt_nil_check(F->fname_1514)).name_ = F->op_1510;
F->call_1513 = f_nn_231(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->e_657)).line_);
(*(P163)rt_nil_check(F->call_1513)).a_ = F->fname_1514;
(*(P163)rt_nil_check(F->call_1513)).b_ = F->l_1515;
F->up->call_want_177 = NULL;
f_gcall_with_604(F->up, F->call_1513, F->y_1512, &(*F->t_659), &(*F->r_660));
if (F->negate_1511) {
(*F->r_660) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check((*F->r_660)))), 41));
}
(*F->done_661) = 1;
goto ret_;
}
}
F->y_1512 = (*(P110)rt_nil_check(F->y_1512)).chain_;
}
L_end_1518: ;
ret_:

  return;
}

static void f_task_p_664(struct f_greenc_1fr *up_, P163 *res_663) {
  struct f_task_p_664fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_663 = res_663;
F->x_1519 = NULL;
F->line_1520 = f_cur_line_238(F->up);
f_expect_kw_253(F->up, rt_str("TASK", 4));
if (f_at_kw_240(F->up, rt_str("BODY", 4))) {
f_skip_251(F->up);
F->x_1519 = f_nn_231(F->up, ((rt_int)51LL), F->line_1520);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1519)).name_);
f_expect_kw_253(F->up, rt_str("IS", 2));
f_body_part_307(F->up, F->x_1519);
} else {
F->x_1519 = f_nn_231(F->up, ((rt_int)50LL), F->line_1520);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1519)).name_);
if (((f_at_kw_240(F->up, rt_str("IS", 2)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_797(F->up, F->x_1519, &(*F->res_663));
goto ret_;
}
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("RANGE", 5)))) {
f_subtype_ind_286(F->up, &(*(P163)rt_nil_check(F->x_1519)).a_);
} else {
(*(P163)rt_nil_check(F->x_1519)).a_ = f_nn_231(F->up, ((rt_int)14LL), F->line_1520);
f_simple_expr_274(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1519)).a_)).a_);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1519)).a_)).b_);
}
f_expect_op_255(F->up, rt_str(")", 1));
}
if (f_at_kw_240(F->up, rt_str("IS", 2))) {
f_skip_251(F->up);
f_decl_part_295(F->up, &(*(P163)rt_nil_check(F->x_1519)).c_);
if (f_at_kw_240(F->up, rt_str("PRIVATE", 7))) {
f_skip_251(F->up);
f_decl_part_295(F->up, &(*(P163)rt_nil_check(F->x_1519)).d_);
}
f_expect_kw_253(F->up, rt_str("END", 3));
}
}
if (f_at_kind_244(F->up, ((rt_int)1LL))) {
f_skip_251(F->up);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_663) = F->x_1519;
ret_:

  return;
}

static void f_entry_p_666(struct f_greenc_1fr *up_, P163 *res_665) {
  struct f_entry_p_666fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_665 = res_665;
F->x_1521 = NULL;
f_expect_kw_253(F->up, rt_str("ENTRY", 5));
F->x_1521 = f_nn_231(F->up, ((rt_int)52LL), f_cur_line_238(F->up));
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1521)).name_);
if ((f_at_op_242(F->up, rt_str("(", 1)) && (!((f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_248(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_248(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_251(F->up);
if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(")", 1)))) {
f_subtype_ind_286(F->up, &(*(P163)rt_nil_check(F->x_1521)).b_);
} else {
(*(P163)rt_nil_check(F->x_1521)).b_ = f_nn_231(F->up, ((rt_int)14LL), f_cur_line_238(F->up));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1521)).b_)).a_);
f_expect_op_255(F->up, rt_str("..", 2));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1521)).b_)).b_);
}
f_expect_op_255(F->up, rt_str(")", 1));
}
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_formal_part_301(F->up, &(*(P163)rt_nil_check(F->x_1521)).a_);
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_665) = F->x_1521;
ret_:

  return;
}

static void f_accept_p_668(struct f_greenc_1fr *up_, P163 *res_667) {
  struct f_accept_p_668fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_667 = res_667;
F->x_1522 = NULL;
f_expect_kw_253(F->up, rt_str("ACCEPT", 6));
F->x_1522 = f_nn_231(F->up, ((rt_int)34LL), f_cur_line_238(F->up));
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->x_1522)).name_);
if ((f_at_op_242(F->up, rt_str("(", 1)) && (!((f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_248(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_248(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_251(F->up);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->x_1522)).c_);
f_expect_op_255(F->up, rt_str(")", 1));
}
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_formal_part_301(F->up, &(*(P163)rt_nil_check(F->x_1522)).a_);
}
if (f_at_kw_240(F->up, rt_str("DO", 2))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1522)).flag_ = ((rt_int)1LL);
f_statements_314(F->up, &(*(P163)rt_nil_check(F->x_1522)).b_);
f_expect_kw_253(F->up, rt_str("END", 3));
if (f_at_kind_244(F->up, ((rt_int)1LL))) {
f_skip_251(F->up);
}
}
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_667) = F->x_1522;
ret_:

  return;
}

static void f_delay_p_670(struct f_greenc_1fr *up_, P163 *res_669) {
  struct f_delay_p_670fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_669 = res_669;
F->x_1523 = NULL;
f_expect_kw_253(F->up, rt_str("DELAY", 5));
F->x_1523 = f_nn_231(F->up, ((rt_int)32LL), f_cur_line_238(F->up));
f_simple_expr_274(F->up, &(*(P163)rt_nil_check(F->x_1523)).a_);
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_669) = F->x_1523;
ret_:

  return;
}

static void f_designators_672(struct f_greenc_1fr *up_, P163 *res_671) {
  struct f_designators_672fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_671 = res_671;
F->head_1524 = NULL;
F->tail_1525 = NULL;
F->n_1526 = NULL;
for (;;) {
f_name_p_284(F->up, &F->n_1526);
f_append_235(F->up, &F->head_1524, &F->tail_1525, F->n_1526);
if ((!f_at_op_242(F->up, rt_str(",", 1)))) {
goto L_end_1527;
}
f_skip_251(F->up);
}
L_end_1527: ;
f_expect_op_255(F->up, rt_str(";", 1));
(*F->res_671) = F->head_1524;
ret_:

  return;
}

static void f_parse_task_statement_674(struct f_greenc_1fr *up_, P163 *res_673) {
  struct f_parse_task_statement_674fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_673 = res_673;
F->x_1528 = NULL;
F->alt_1529 = NULL;
F->head_1530 = NULL;
F->tail_1531 = NULL;
F->line_1532 = f_cur_line_238(F->up);
(*F->res_673) = NULL;
if (f_at_kw_240(F->up, rt_str("INITIATE", 8))) {
f_skip_251(F->up);
F->x_1528 = f_nn_231(F->up, ((rt_int)33LL), F->line_1532);
f_designators_672(F->up, &(*(P163)rt_nil_check(F->x_1528)).a_);
(*F->res_673) = F->x_1528;
} else if (f_at_kw_240(F->up, rt_str("ABORT", 5))) {
f_skip_251(F->up);
F->x_1528 = f_nn_231(F->up, ((rt_int)36LL), F->line_1532);
f_designators_672(F->up, &(*(P163)rt_nil_check(F->x_1528)).a_);
(*F->res_673) = F->x_1528;
} else if (f_at_kw_240(F->up, rt_str("DELAY", 5))) {
f_delay_p_670(F->up, &(*F->res_673));
} else if (f_at_kw_240(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_668(F->up, &(*F->res_673));
} else if (f_at_kw_240(F->up, rt_str("SELECT", 6))) {
f_skip_251(F->up);
F->x_1528 = f_nn_231(F->up, ((rt_int)35LL), F->line_1532);
for (;;) {
F->alt_1529 = f_nn_231(F->up, ((rt_int)64LL), f_cur_line_238(F->up));
if (f_at_kw_240(F->up, rt_str("WHEN", 4))) {
f_skip_251(F->up);
f_expr_268(F->up, &(*(P163)rt_nil_check(F->alt_1529)).a_);
f_expect_op_255(F->up, rt_str("=>", 2));
}
if (f_at_kw_240(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_668(F->up, &(*(P163)rt_nil_check(F->alt_1529)).b_);
} else if (f_at_kw_240(F->up, rt_str("DELAY", 5))) {
f_delay_p_670(F->up, &(*(P163)rt_nil_check(F->alt_1529)).b_);
} else {
f_perror_250(F->up, rt_str("a select alternative starts with accept or delay", 48));
}
f_statements_314(F->up, &(*(P163)rt_nil_check(F->alt_1529)).c_);
f_append_235(F->up, &F->head_1530, &F->tail_1531, F->alt_1529);
if ((!f_at_kw_240(F->up, rt_str("OR", 2)))) {
goto L_end_1533;
}
f_skip_251(F->up);
}
L_end_1533: ;
if (f_at_kw_240(F->up, rt_str("ELSE", 4))) {
f_skip_251(F->up);
(*(P163)rt_nil_check(F->x_1528)).flag_ = ((rt_int)1LL);
f_statements_314(F->up, &(*(P163)rt_nil_check(F->x_1528)).b_);
}
f_expect_kw_253(F->up, rt_str("END", 3));
f_expect_kw_253(F->up, rt_str("SELECT", 6));
f_expect_op_255(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->x_1528)).a_ = F->head_1530;
(*F->res_673) = F->x_1528;
}
ret_:

  return;
}

static void f_path_at_678(struct f_greenc_1fr *up_, rt_int level_675, rstr field_676, P133 *r_677) {
  struct f_path_at_678fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_675 = level_675;
F->field_676 = rt_str_copy(field_676);
F->r_677 = r_677;
if ((F->level_675 <= ((rt_int)0LL))) {
(*F->r_677) = f_mk_185(F->up, F->field_676);
goto ret_;
}
(*F->r_677) = f_mk_185(F->up, rt_str("F", 1));
{ rt_int lo1536 = ((rt_int)1LL), hi1537 = rt_sub(F->up->cur_level_132, F->level_675);
for (rt_int it1538 = lo1536; it1538 <= hi1537; it1538++) {
F->i_1535 = it1538;
(*F->r_677) = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_677))), rt_str("->up", 4)));
}
}
L_end_1534: ;
(*F->r_677) = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->r_677))), rt_str("->", 2)), F->field_676));
ret_:

  return;
}

static int f_is_task_name_680(struct f_greenc_1fr *up_, rstr n_679) {
  struct f_is_task_name_680fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_679 = rt_str_copy(n_679);
F->y_1539 = NULL;
F->y_1539 = f_lookup_330(F->up, F->n_679);
F->result_ = ((F->y_1539 != NULL) && ((*(P110)rt_nil_check(F->y_1539)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_684(struct f_greenc_1fr *up_, P163 e_681, P110 *y_682, P163 *ix_683) {
  struct f_task_of_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_681 = e_681;
F->y_682 = y_682;
F->ix_683 = ix_683;
F->n_1540 = NULL;
F->n_1540 = F->e_681;
(*F->ix_683) = NULL;
if (((*(P163)rt_nil_check(F->e_681)).kind_ == ((rt_int)8LL))) {
F->n_1540 = (*(P163)rt_nil_check(F->e_681)).a_;
(*F->ix_683) = (*(P163)rt_nil_check(F->e_681)).b_;
}
if (((*(P163)rt_nil_check(F->n_1540)).kind_ != ((rt_int)5LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_681)).line_, rt_str("a task name is required", 23));
}
(*F->y_682) = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1540)).name_)));
if ((((*F->y_682) == NULL) || ((*(P110)rt_nil_check((*F->y_682))).kind_ != ((rt_int)9LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_681)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1540)).name_)), rt_str(" is not a task", 14)));
}
if ((((*F->ix_683) != NULL) && ((*(P110)rt_nil_check((*F->y_682))).c_ == NULL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_681)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1540)).name_)), rt_str(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_686(struct f_greenc_1fr *up_, P133 *r_685) {
  struct f_own_index_686fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_685 = r_685;
F->y_1541 = NULL;
F->y_1541 = f_lookup_330(F->up, rt_str("INDEX_", 6));
if ((F->y_1541 == NULL)) {
f_fail_206(F->up, ((rt_int)0LL), rt_str("not inside the body of a task family", 36));
}
f_access_of_481(F->up, F->y_1541, &(*F->r_685));
ret_:

  return;
}

static void f_member_691(struct f_greenc_1fr *up_, P110 y_687, rstr arr_688, rstr i_689, P133 *r_690) {
  struct f_member_691fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_687 = y_687;
F->arr_688 = rt_str_copy(arr_688);
F->i_689 = rt_str_copy(i_689);
F->r_690 = r_690;
F->lo_1542 = NULL;
F->hi_1543 = NULL;
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_687)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_687)).cname_)), rt_str("lo", 2)), &F->lo_1542);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_687)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_687)).cname_)), rt_str("hi", 2)), &F->hi_1543);
(*F->r_690) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->arr_688, rt_str("[rt_index(", 10)), F->i_689), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1542))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1543))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1542))), 93));
ret_:

  return;
}

static void f_act_path_694(struct f_greenc_1fr *up_, P110 y_692, P133 *r_693) {
  struct f_act_path_694fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_692 = y_692;
F->r_693 = r_693;
F->i_1544 = NULL;
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_692)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_692)).cname_)), rt_str("act", 3)), &(*F->r_693));
if (((*(P110)rt_nil_check(F->y_692)).c_ != NULL)) {
f_own_index_686(F->up, &F->i_1544);
f_member_691(F->up, F->y_692, (*(P133)rt_nil_check((*F->r_693))), (*(P133)rt_nil_check(F->i_1544)), &(*F->r_693));
}
ret_:

  return;
}

static void f_act_path_i_698(struct f_greenc_1fr *up_, P110 y_695, rstr i_696, P133 *r_697) {
  struct f_act_path_i_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_695 = y_695;
F->i_696 = rt_str_copy(i_696);
F->r_697 = r_697;
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_695)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_695)).cname_)), rt_str("act", 3)), &(*F->r_697));
f_member_691(F->up, F->y_695, (*(P133)rt_nil_check((*F->r_697))), F->i_696, &(*F->r_697));
ret_:

  return;
}

static void f_entry_path_702(struct f_greenc_1fr *up_, P110 y_699, rstr i_700, P133 *r_701) {
  struct f_entry_path_702fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_699 = y_699;
F->i_700 = rt_str_copy(i_700);
F->r_701 = r_701;
F->own_1545 = NULL;
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_699)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_699)).access_path_)), &(*F->r_701));
if (((((*(P110)rt_nil_check(F->y_699)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_699)).members_)).c_ != NULL)) && (!(*(P110)rt_nil_check(F->y_699)).ro_))) {
if (((F->i_700).len == ((rt_int)0LL))) {
f_own_index_686(F->up, &F->own_1545);
f_member_691(F->up, (*(P110)rt_nil_check(F->y_699)).members_, (*(P133)rt_nil_check((*F->r_701))), (*(P133)rt_nil_check(F->own_1545)), &(*F->r_701));
} else {
f_member_691(F->up, (*(P110)rt_nil_check(F->y_699)).members_, (*(P133)rt_nil_check((*F->r_701))), F->i_700, &(*F->r_701));
}
}
ret_:

  return;
}

static void f_declare_slot_705(struct f_greenc_1fr *up_, rstr ctype_name_703, rstr field_704) {
  struct f_declare_slot_705fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_703 = rt_str_copy(ctype_name_703);
F->field_704 = rt_str_copy(field_704);
if (F->up->in_func_131) {
f_put_to_210(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, F->ctype_name_703), 32), F->field_704), 59));
} else {
f_put_to_210(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), F->ctype_name_703), 32), F->field_704), 59));
}
ret_:

  return;
}

static void f_task_decl_707(struct f_greenc_1fr *up_, P163 e_706) {
  struct f_task_decl_707fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_706 = e_706;
if (((*(P163)rt_nil_check(F->e_706)).kind_ == ((rt_int)50LL))) {
f_task_spec_719(F->up, F->e_706);
} else if (((*(P163)rt_nil_check(F->e_706)).kind_ == ((rt_int)51LL))) {
f_task_body_723(F->up, F->e_706);
} else if (((*(P163)rt_nil_check(F->e_706)).kind_ == ((rt_int)52LL))) {
f_entry_decl_721(F->up, F->e_706);
} else {
f_generic_decl_799(F->up, F->e_706);
}
ret_:

  return;
}

static void f_family_arg_struct_708(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_708fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_162)) {
F->up->famarg_done_162 = 1;
f_put_to_210(F->up, F->up->out_types_121, rt_str("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_712(struct f_greenc_1fr *up_, P163 b_709, P110 y_710, P133 x_711) {
  struct f_family_bounds_712fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_709 = b_709;
F->y_710 = y_710;
F->x_711 = x_711;
F->lo_1546 = NULL;
F->hi_1547 = NULL;
F->v_1548 = NULL;
F->vt_1549 = NULL;
F->c_1550 = NULL;
(*(P110)rt_nil_check(F->y_710)).c_ = f_new_cons_357(F->up);
f_declare_slot_705(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_710)).access_path_)));
f_declare_slot_705(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_710)).cname_)), rt_str("flo", 3)));
f_declare_slot_705(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_710)).cname_)), rt_str("fhi", 3)));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_710)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_710)).cname_)), rt_str("flo", 3)), &F->lo_1546);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_710)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_710)).cname_)), rt_str("fhi", 3)), &F->hi_1547);
if (((*(P163)rt_nil_check(F->b_709)).kind_ == ((rt_int)14LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->b_709)).a_, NULL, &F->vt_1549, &F->v_1548);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1546)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1548))), 59));
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->b_709)).b_, F->vt_1549, &F->vt_1549, &F->v_1548);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->hi_1547)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1548))), 59));
} else {
f_resolve_384(F->up, F->b_709, &F->vt_1549, &F->c_1550);
if (((*(P170)rt_nil_check(F->c_1550)).lo_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->b_709)).line_, rt_str("an entry family needs a discrete range", 38));
}
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1546)), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1550)).lo_))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->hi_1547))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1550)).hi_))), 59));
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_711)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1547))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1546))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1547))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1546))), rt_str(" + 1 : 1));", 11)));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1547))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1546))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_711))), rt_str("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_717(struct f_greenc_1fr *up_, P110 y_713, rstr base_714, rstr i_715, P133 *r_716) {
  struct f_entry_family_slot_717fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_713 = y_713;
F->base_714 = rt_str_copy(base_714);
F->i_715 = rt_str_copy(i_715);
F->r_716 = r_716;
F->lo_1551 = NULL;
F->hi_1552 = NULL;
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_713)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_713)).cname_)), rt_str("flo", 3)), &F->lo_1551);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_713)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_713)).cname_)), rt_str("fhi", 3)), &F->hi_1552);
(*F->r_716) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_714, rt_str("[rt_index(", 10)), F->i_715), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1551))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1552))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1551))), 93));
ret_:

  return;
}

static void f_task_spec_719(struct f_greenc_1fr *up_, P163 e_718) {
  struct f_task_spec_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_718 = e_718;
F->has_procs_1553 = 0;
F->fields_1555 = NULL;
F->ct_1556 = NULL;
F->pm_1557 = NULL;
F->fp_1558 = NULL;
F->flo_1559 = NULL;
F->fhi_1560 = NULL;
F->y_1561 = NULL;
F->m_1562 = NULL;
F->z_1563 = NULL;
F->saved_1564 = NULL;
F->saved_1564 = F->up->cur_task_160;
F->d_1565 = NULL;
F->v_1566 = NULL;
F->p_1567 = NULL;
F->p2_1568 = NULL;
F->vt_1569 = NULL;
F->r_1570 = NULL;
F->y_1561 = f_new_sym_354(F->up, ((rt_int)9LL), (*(P163)rt_nil_check(F->e_718)).name_);
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("t_", 2), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_718)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1561)).cname_);
(*(P110)rt_nil_check(F->y_1561)).decl_ = F->e_718;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1561)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1561)).access_path_ = (*(P110)rt_nil_check(F->y_1561)).cname_;
f_declare_slot_705(F->up, rt_str("rt_taskdecl", 11), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("decl", 4)));
if (((*(P163)rt_nil_check(F->e_718)).a_ != NULL)) {
F->r_1570 = (*(P163)rt_nil_check(F->e_718)).a_;
if (((*(P163)rt_nil_check(F->r_1570)).kind_ == ((rt_int)80LL))) {
F->r_1570 = (*(P163)rt_nil_check(F->r_1570)).a_;
}
(*(P110)rt_nil_check(F->y_1561)).c_ = f_new_cons_357(F->up);
f_declare_slot_705(F->up, rt_str("rt_act *", 8), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("act", 3)));
f_declare_slot_705(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("lo", 2)));
f_declare_slot_705(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("hi", 2)));
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1570)).a_, F->up->ty_int_149, &F->vt_1569, &F->v_1566);
(*(P110)rt_nil_check(F->y_1561)).t_ = F->vt_1569;
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1561)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("lo", 2)), &F->p_1567);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1567)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1566))), 59));
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->r_1570)).b_, F->up->ty_int_149, &F->vt_1569, &F->v_1566);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1561)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("hi", 2)), &F->p2_1568);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p2_1568)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1566))), 59));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1561)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("act", 3)), &F->v_1566);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->v_1566)), rt_str(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P133)rt_nil_check(F->p2_1568))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->p_1567))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->p2_1568))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->p_1567))), rt_str(" + 1 : 1));", 11)));
f_family_arg_struct_708(F->up);
} else {
f_declare_slot_705(F->up, rt_str("rt_act", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("act", 3)));
}
f_put_to_210(F->up, F->up->out_protos_124, rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_))), rt_str("run(void *a);", 13)));
if ((!F->up->in_func_131)) {
f_put_to_210(F->up, F->up->out_awaits_169, rt_str_cat(rt_str_cat(rt_str("  rt_await_decl(&", 17), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_))), rt_str("decl);", 6)));
}
f_open_scope_350(F->up);
F->up->cur_task_160 = F->y_1561;
F->saved_defer_1554 = F->up->defer_entry_structs_168;
F->up->defer_entry_structs_168 = 1;
f_decl_elements_434(F->up, (*(P163)rt_nil_check(F->e_718)).c_);
f_decl_elements_434(F->up, (*(P163)rt_nil_check(F->e_718)).d_);
F->up->defer_entry_structs_168 = F->saved_defer_1554;
F->m_1562 = F->up->scope_stack_114;
while (((F->m_1562 != NULL) && ((*(P110)rt_nil_check(F->m_1562)).depth_ == F->up->depth_113))) {
if ((((*(P110)rt_nil_check(F->m_1562)).kind_ == ((rt_int)10LL)) && (!(*(P110)rt_nil_check(F->m_1562)).from_use_))) {
F->fields_1555 = f_mk_185(F->up, rt_str(" int dummy_;", 12));
F->pm_1557 = (*(P110)rt_nil_check(F->m_1562)).params_;
while ((F->pm_1557 != NULL)) {
f_ctype_368(F->up, (*(P1070)rt_nil_check(F->pm_1557)).t_, &F->ct_1556);
if (((*(P1070)rt_nil_check(F->pm_1557)).mode_ == ((rt_int)1LL))) {
F->fields_1555 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1555)), 32), (*(P133)rt_nil_check(F->ct_1556))), 32), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1557)).cfield_))), 59));
} else {
F->fields_1555 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1555)), 32), (*(P133)rt_nil_check(F->ct_1556))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1557)).cfield_))), 59));
}
F->pm_1557 = (*(P1070)rt_nil_check(F->pm_1557)).next_;
}
L_end_1572: ;
f_put_to_210(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1562)).cname_))), rt_str("p {", 3)), (*(P133)rt_nil_check(F->fields_1555))), rt_str(" };", 3)));
}
F->m_1562 = (*(P110)rt_nil_check(F->m_1562)).stack_;
}
L_end_1571: ;
F->m_1562 = F->up->scope_stack_114;
while (((F->m_1562 != NULL) && ((*(P110)rt_nil_check(F->m_1562)).depth_ == F->up->depth_113))) {
if (((((*(P110)rt_nil_check(F->m_1562)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->m_1562)).kind_ == ((rt_int)4LL))) && (!(*(P110)rt_nil_check(F->m_1562)).from_use_))) {
if (((!F->has_procs_1553) && ((*(P110)rt_nil_check(F->y_1561)).c_ != NULL))) {
f_declare_slot_705(F->up, rt_str("void **", 7), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("frames", 6)));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1561)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("frames", 6)), &F->fp_1558);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1561)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("lo", 2)), &F->flo_1559);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1561)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("hi", 2)), &F->fhi_1560);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->fp_1558)), rt_str(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P133)rt_nil_check(F->fhi_1560))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->flo_1559))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->fhi_1560))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->flo_1559))), rt_str(" + 1 : 1));", 11)));
F->has_procs_1553 = 1;
} else if ((!F->has_procs_1553)) {
f_declare_slot_705(F->up, rt_str("void *", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("frame", 5)));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1561)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("frame", 5)), &F->fp_1558);
f_emit_212(F->up, rt_str_cat((*(P133)rt_nil_check(F->fp_1558)), rt_str(" = NULL;", 8)));
F->has_procs_1553 = 1;
}
if (((*(P110)rt_nil_check(F->y_1561)).c_ != NULL)) {
(*(P110)rt_nil_check(F->m_1562)).access_path_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("frames", 6)));
} else {
(*(P110)rt_nil_check(F->m_1562)).access_path_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1561)).cname_)), rt_str("frame", 5)));
}
(*(P110)rt_nil_check(F->m_1562)).members_ = F->y_1561;
}
f_copy_sym_622(F->up, F->m_1562, &F->z_1563);
(*(P110)rt_nil_check(F->z_1563)).hidden_ = (*(P110)rt_nil_check(F->m_1562)).from_use_;
(*(P110)rt_nil_check(F->z_1563)).mnext_ = (*(P110)rt_nil_check(F->y_1561)).members_;
(*(P110)rt_nil_check(F->y_1561)).members_ = F->z_1563;
F->m_1562 = (*(P110)rt_nil_check(F->m_1562)).stack_;
}
L_end_1573: ;
f_close_scope_351(F->up);
F->up->cur_task_160 = F->saved_1564;
f_define_349(F->up, F->y_1561, (*(P163)rt_nil_check(F->e_718)).line_);
ret_:

  return;
}

static void f_entry_decl_721(struct f_greenc_1fr *up_, P163 e_720) {
  struct f_entry_decl_721fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_720 = e_720;
F->y_1574 = NULL;
F->p_1575 = NULL;
F->p_1575 = (*(P163)rt_nil_check(F->e_720)).a_;
F->pm_1576 = NULL;
F->tail_1577 = NULL;
F->fields_1578 = NULL;
F->ct_1579 = NULL;
F->x_1580 = NULL;
F->lo_1581 = NULL;
F->hi_1582 = NULL;
if ((F->up->cur_task_160 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_720)).line_, rt_str("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_1574 = f_new_sym_354(F->up, ((rt_int)10LL), (*(P163)rt_nil_check(F->e_720)).name_);
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("e_", 2), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_720)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1574)).cname_);
F->fields_1578 = f_mk_185(F->up, rt_str(" int dummy_;", 12));
while ((F->p_1575 != NULL)) {
F->pm_1576 = ({ R1071 *cell1584 = rt_alloc(sizeof(R1071)); *cell1584 = cp_R1071(({ R1071 ag1585; ag1585.name_ = (*(P163)rt_nil_check(F->p_1575)).name_; ag1585.mode_ = (*(P163)rt_nil_check(F->p_1575)).ival_; ag1585.t_ = NULL; ag1585.c_ = NULL; ag1585.cfield_ = NULL; ag1585.dflt_ = NULL; ag1585.next_ = NULL; ag1585; })); (P1070)cell1584; });
f_resolve_384(F->up, (*(P163)rt_nil_check(F->p_1575)).a_, &(*(P1070)rt_nil_check(F->pm_1576)).t_, &(*(P1070)rt_nil_check(F->pm_1576)).c_);
(*(P1070)rt_nil_check(F->pm_1576)).cfield_ = f_mk_185(F->up, f_c_field_202(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_1575)).name_))));
f_ctype_368(F->up, (*(P1070)rt_nil_check(F->pm_1576)).t_, &F->ct_1579);
if (((*(P1070)rt_nil_check(F->pm_1576)).mode_ == ((rt_int)1LL))) {
F->fields_1578 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1578)), 32), (*(P133)rt_nil_check(F->ct_1579))), 32), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1576)).cfield_))), 59));
} else {
F->fields_1578 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1578)), 32), (*(P133)rt_nil_check(F->ct_1579))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1576)).cfield_))), 59));
}
if ((F->tail_1577 == NULL)) {
(*(P110)rt_nil_check(F->y_1574)).params_ = F->pm_1576;
} else {
(*(P1070)rt_nil_check(F->tail_1577)).next_ = F->pm_1576;
}
F->tail_1577 = F->pm_1576;
F->p_1575 = (*(P163)rt_nil_check(F->p_1575)).next_;
}
L_end_1583: ;
if ((!F->up->defer_entry_structs_168)) {
f_put_to_210(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1574)).cname_))), rt_str("p {", 3)), (*(P133)rt_nil_check(F->fields_1578))), rt_str(" };", 3)));
}
(*(P110)rt_nil_check(F->y_1574)).result_ = F->up->ty_void_154;
(*(P110)rt_nil_check(F->y_1574)).decl_ = F->e_720;
(*(P110)rt_nil_check(F->y_1574)).members_ = F->up->cur_task_160;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1574)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1574)).access_path_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1574)).cname_)), rt_str("ent", 3)));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1574)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1574)).access_path_)), &F->x_1580);
(*(P110)rt_nil_check(F->y_1574)).ro_ = ((((*(P110)rt_nil_check(F->up->cur_task_160)).c_ != NULL) && F->up->in_func_131) && (F->up->cur_level_132 > (*(P110)rt_nil_check(F->up->cur_task_160)).level_));
if (((*(P163)rt_nil_check(F->e_720)).b_ != NULL)) {
if ((((*(P110)rt_nil_check(F->up->cur_task_160)).c_ != NULL) && (!(*(P110)rt_nil_check(F->y_1574)).ro_))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_720)).line_, rt_str("an entry family in a task family is not handled", 47));
}
f_family_bounds_712(F->up, (*(P163)rt_nil_check(F->e_720)).b_, F->y_1574, F->x_1580);
} else if ((((*(P110)rt_nil_check(F->up->cur_task_160)).c_ != NULL) && (!(*(P110)rt_nil_check(F->y_1574)).ro_))) {
f_declare_slot_705(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1574)).access_path_)));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->up->cur_task_160)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_160)).cname_)), rt_str("lo", 2)), &F->lo_1581);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->up->cur_task_160)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_160)).cname_)), rt_str("hi", 2)), &F->hi_1582);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_1580)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1582))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1581))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1582))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1581))), rt_str(" + 1 : 1));", 11)));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1582))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1581))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_1580))), rt_str("[k_]);", 6)));
} else {
f_declare_slot_705(F->up, rt_str("rt_entry", 8), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1574)).access_path_)));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("rt_entry_init(&", 15), (*(P133)rt_nil_check(F->x_1580))), rt_str(");", 2)));
}
f_define_349(F->up, F->y_1574, (*(P163)rt_nil_check(F->e_720)).line_);
ret_:

  return;
}

static void f_task_body_723(struct f_greenc_1fr *up_, P163 e_722) {
  struct f_task_body_723fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_722 = e_722;
F->y_1586 = NULL;
F->y_1586 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_722)).name_)));
F->b_1587 = NULL;
F->m_1588 = NULL;
F->z_1589 = NULL;
F->upp_1590 = NULL;
F->saved_1591 = NULL;
F->saved_1591 = F->up->cur_task_160;
if (((F->y_1586 != NULL) && ((*(P110)rt_nil_check(F->y_1586)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_803(F->up, F->e_722);
goto ret_;
}
if (((F->y_1586 == NULL) || ((*(P110)rt_nil_check(F->y_1586)).kind_ != ((rt_int)9LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_722)).line_, rt_str_cat(rt_str_cat(rt_str("task body ", 10), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_722)).name_))), rt_str(" has no task specification", 26)));
}
F->b_1587 = f_new_sym_354(F->up, ((rt_int)4LL), (*(P163)rt_nil_check(F->e_722)).name_);
(*(P110)rt_nil_check(F->b_1587)).cname_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1586)).cname_)), rt_str("body", 4)));
(*(P110)rt_nil_check(F->b_1587)).result_ = F->up->ty_void_154;
(*(P110)rt_nil_check(F->b_1587)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->b_1587)).decl_ = F->e_722;
if (((*(P110)rt_nil_check(F->y_1586)).c_ != NULL)) {
(*(P110)rt_nil_check(F->b_1587)).params_ = ({ R1071 *cell1592 = rt_alloc(sizeof(R1071)); *cell1592 = cp_R1071(({ R1071 ag1593; ag1593.name_ = f_mk_185(F->up, rt_str("INDEX_", 6)); ag1593.mode_ = ((rt_int)1LL); ag1593.t_ = F->up->ty_int_149; ag1593.c_ = NULL; ag1593.cfield_ = f_mk_185(F->up, rt_str("index_", 6)); ag1593.dflt_ = NULL; ag1593.next_ = NULL; ag1593; })); (P1070)cell1592; });
}
f_open_scope_350(F->up);
F->m_1588 = (*(P110)rt_nil_check(F->y_1586)).members_;
while ((F->m_1588 != NULL)) {
f_copy_sym_622(F->up, F->m_1588, &F->z_1589);
f_define_349(F->up, F->z_1589, (*(P163)rt_nil_check(F->e_722)).line_);
if ((((((*(P110)rt_nil_check(F->m_1588)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->m_1588)).kind_ == ((rt_int)4LL))) && ((*(P110)rt_nil_check(F->m_1588)).access_path_ != NULL)) && f_same_task_333(F->up, (*(P110)rt_nil_check(F->m_1588)).members_, F->y_1586))) {
if (((*(P110)rt_nil_check(F->y_1586)).level_ > ((rt_int)0LL))) {
F->upp_1590 = f_mk_185(F->up, rt_str("up_->", 5));
} else {
F->upp_1590 = f_mk_185(F->up, rt_str("", 0));
}
if (((*(P110)rt_nil_check(F->y_1586)).c_ != NULL)) {
(*(P110)rt_nil_check(F->b_1587)).access_path_ = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->upp_1590)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1588)).access_path_))), rt_str("[index_ - ", 10)), (*(P133)rt_nil_check(F->upp_1590))), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1586)).cname_))), rt_str("lo] = F;", 8)));
} else {
(*(P110)rt_nil_check(F->b_1587)).access_path_ = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->upp_1590)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1588)).access_path_))), rt_str(" = F;", 5)));
}
}
F->m_1588 = (*(P110)rt_nil_check(F->m_1588)).mnext_;
}
L_end_1594: ;
F->up->cur_task_160 = F->y_1586;
f_subprogram_body_441(F->up, F->e_722, F->b_1587);
F->up->cur_task_160 = F->saved_1591;
f_close_scope_351(F->up);
if ((((*(P110)rt_nil_check(F->y_1586)).c_ != NULL) && ((*(P110)rt_nil_check(F->b_1587)).level_ > ((rt_int)0LL)))) {
f_put_to_210(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1586)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1587)).cname_))), rt_str("(g->up, g->i); }", 16)));
} else if (((*(P110)rt_nil_check(F->y_1586)).c_ != NULL)) {
f_put_to_210(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1586)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1587)).cname_))), rt_str("(g->i); }", 9)));
} else if (((*(P110)rt_nil_check(F->b_1587)).level_ > ((rt_int)0LL))) {
f_put_to_210(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1586)).cname_))), rt_str("run(void *a) { ", 15)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1587)).cname_))), rt_str("(a); }", 6)));
} else {
f_put_to_210(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1586)).cname_))), rt_str("run(void *a) { (void)a; ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1587)).cname_))), rt_str("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_726(struct f_greenc_1fr *up_, P163 decls_724, P133 *aw_725) {
  struct f_task_awaits_726fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_724 = decls_724;
F->aw_725 = aw_725;
F->e_1595 = NULL;
F->e_1595 = F->decls_724;
F->y_1596 = NULL;
F->p_1597 = NULL;
(*F->aw_725) = f_mk_185(F->up, rt_str("", 0));
while ((F->e_1595 != NULL)) {
if ((((*(P163)rt_nil_check(F->e_1595)).kind_ == ((rt_int)50LL)) || (((*(P163)rt_nil_check(F->e_1595)).kind_ == ((rt_int)53LL)) && ((*(P163)rt_nil_check(F->e_1595)).ival_ == ((rt_int)50LL))))) {
F->y_1596 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_1595)).name_)));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1596)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1596)).cname_)), rt_str("decl", 4)), &F->p_1597);
(*F->aw_725) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->aw_725))), rt_str(" rt_await_decl(&", 16)), (*(P133)rt_nil_check(F->p_1597))), rt_str(");", 2)));
}
F->e_1595 = (*(P163)rt_nil_check(F->e_1595)).next_;
}
L_end_1598: ;
ret_:

  return;
}

static void f_task_failure_728(struct f_greenc_1fr *up_, P163 s_727) {
  struct f_task_failure_728fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_727 = s_727;
F->y_1599 = NULL;
F->y_1599 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_727)).tag_)));
F->a_1600 = NULL;
F->i_1601 = NULL;
F->it_1602 = NULL;
if (((*(P163)rt_nil_check(F->s_727)).a_ != NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_727)).a_, (*(P110)rt_nil_check(F->y_1599)).t_, &F->it_1602, &F->i_1601);
f_act_path_i_698(F->up, F->y_1599, (*(P133)rt_nil_check(F->i_1601)), &F->a_1600);
} else {
f_act_path_694(F->up, F->y_1599, &F->a_1600);
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("rt_exterminate(&", 16), (*(P133)rt_nil_check(F->a_1600))), rt_str(");", 2)));
ret_:

  return;
}

static void f_entry_sym_732(struct f_greenc_1fr *up_, P163 e_729, P110 *y_730, P163 *ix_731) {
  struct f_entry_sym_732fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_729 = e_729;
F->y_730 = y_730;
F->ix_731 = ix_731;
F->t_1603 = NULL;
(*F->ix_731) = NULL;
F->up->fam_ix_165 = NULL;
if (((*(P163)rt_nil_check(F->e_729)).kind_ == ((rt_int)8LL))) {
f_entry_sym_732(F->up, (*(P163)rt_nil_check(F->e_729)).a_, &(*F->y_730), &(*F->ix_731));
if (((*(P110)rt_nil_check((*F->y_730))).c_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_729)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*F->y_730))).name_)), rt_str(" is not an entry family", 23)));
}
F->up->fam_ix_165 = (*(P163)rt_nil_check(F->e_729)).b_;
goto ret_;
}
if (((((*(P163)rt_nil_check(F->e_729)).kind_ == ((rt_int)9LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_729)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_729)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->t_1603 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_729)).a_)).a_)).name_)));
if ((((F->t_1603 == NULL) || ((*(P110)rt_nil_check(F->t_1603)).kind_ != ((rt_int)9LL))) || ((*(P110)rt_nil_check(F->t_1603)).c_ == NULL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_729)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_729)).a_)).a_)).name_)), rt_str(" is not a task family", 21)));
}
(*F->y_730) = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_729)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_729)).name_)), (*(P163)rt_nil_check(F->e_729)).line_);
(*F->ix_731) = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_729)).a_)).b_;
if ((((*F->y_730) == NULL) || ((*(P110)rt_nil_check((*F->y_730))).kind_ != ((rt_int)10LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_729)).line_, rt_str("not an entry", 12));
}
goto ret_;
}
if (((*(P163)rt_nil_check(F->e_729)).kind_ == ((rt_int)5LL))) {
(*F->y_730) = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_729)).name_)));
if (((*(P163)rt_nil_check(F->e_729)).tag_ != NULL)) {
(*F->y_730) = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_729)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_729)).name_)), (*(P163)rt_nil_check(F->e_729)).line_);
}
} else if ((((*(P163)rt_nil_check(F->e_729)).kind_ == ((rt_int)9LL)) && f_is_package_613(F->up, (*(P163)rt_nil_check(F->e_729)).a_))) {
(*F->y_730) = f_member_of_617(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_729)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_729)).name_)), (*(P163)rt_nil_check(F->e_729)).line_);
} else {
(*F->y_730) = NULL;
}
if ((((*F->y_730) == NULL) || ((*(P110)rt_nil_check((*F->y_730))).kind_ != ((rt_int)10LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_729)).line_, rt_str("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_737(struct f_greenc_1fr *up_, P163 e_733, int is_stmt_734, P115 *t_735, P133 *r_736) {
  struct f_other_call_737fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_733 = e_733;
F->is_stmt_734 = is_stmt_734;
F->t_735 = t_735;
F->r_736 = r_736;
F->y_1604 = NULL;
F->pm_1605 = NULL;
F->a_1606 = NULL;
F->parts_1607 = NULL;
F->v_1608 = NULL;
F->lv_1609 = NULL;
F->ent_1610 = NULL;
F->act_1611 = NULL;
F->i_1612 = NULL;
F->vt_1613 = NULL;
F->lt_1614 = NULL;
F->lc_1615 = NULL;
F->ix_1617 = NULL;
F->fix_1618 = NULL;
F->args_node_1619 = NULL;
f_entry_sym_732(F->up, (*(P163)rt_nil_check(F->e_733)).a_, &F->y_1604, &F->ix_1617);
F->fix_1618 = F->up->fam_ix_165;
F->args_node_1619 = (*(P163)rt_nil_check(F->e_733)).b_;
if ((((*(P110)rt_nil_check(F->y_1604)).c_ != NULL) && (F->fix_1618 == NULL))) {
F->fix_1618 = (*(P163)rt_nil_check(F->e_733)).b_;
F->args_node_1619 = NULL;
}
F->i_1612 = f_mk_185(F->up, rt_str("", 0));
if ((F->ix_1617 != NULL)) {
f_gexpr_536(F->up, F->ix_1617, F->up->ty_int_149, &F->vt_1613, &F->i_1612);
} else if (((((*(P110)rt_nil_check(F->y_1604)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1604)).members_)).c_ != NULL)) && ((*(P110)rt_nil_check(F->y_1604)).members_ != F->up->cur_task_160))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_733)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a member of family ", 19), (*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1604)).members_)).name_))), rt_str(" must be named: F(I).", 21)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1604)).name_))));
}
if ((!F->is_stmt_734)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_733)).line_, rt_str("an entry call is a statement", 28));
}
if ((F->up->pure_sym_178 != NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_733)).line_, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_702(F->up, F->y_1604, (*(P133)rt_nil_check(F->i_1612)), &F->ent_1610);
if (((*(P110)rt_nil_check(F->y_1604)).c_ != NULL)) {
if ((F->fix_1618 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_733)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1604)).name_)), rt_str(" is an entry family: name a member, ", 36)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1604)).name_))), rt_str("(I)", 3)));
}
f_gexpr_536(F->up, F->fix_1618, NULL, &F->vt_1613, &F->v_1608);
f_entry_family_slot_717(F->up, F->y_1604, (*(P133)rt_nil_check(F->ent_1610)), (*(P133)rt_nil_check(F->v_1608)), &F->ent_1610);
}
F->parts_1607 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("({ struct ", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1604)).cname_))), rt_str("p p_;", 5)));
F->pm_1605 = (*(P110)rt_nil_check(F->y_1604)).params_;
while ((F->pm_1605 != NULL)) {
F->a_1606 = f_actual_for_594(F->up, F->args_node_1619, F->pm_1605, (*(P110)rt_nil_check(F->y_1604)).params_);
if ((F->a_1606 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_733)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1605)).name_))));
}
if (((*(P1070)rt_nil_check(F->pm_1605)).mode_ == ((rt_int)1LL))) {
f_gexpr_536(F->up, F->a_1606, (*(P1070)rt_nil_check(F->pm_1605)).t_, &F->vt_1613, &F->v_1608);
f_check_type_363(F->up, F->vt_1613, (*(P1070)rt_nil_check(F->pm_1605)).t_, (*(P163)rt_nil_check(F->e_733)).line_);
F->parts_1607 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1607)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1605)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1608))), 59));
} else {
f_lvalue_498(F->up, F->a_1606, &F->lv_1609, &F->lt_1614, &F->lc_1615, &F->ro_1616);
if (F->ro_1616) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_733)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1605)).name_)), rt_str(" needs a variable", 17)));
}
f_check_type_363(F->up, F->lt_1614, (*(P1070)rt_nil_check(F->pm_1605)).t_, (*(P163)rt_nil_check(F->e_733)).line_);
F->parts_1607 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1607)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1605)).cfield_))), rt_str(" = &", 4)), (*(P133)rt_nil_check(F->lv_1609))), 59));
}
F->pm_1605 = (*(P1070)rt_nil_check(F->pm_1605)).next_;
}
L_end_1620: ;
if ((((*(P110)rt_nil_check(F->y_1604)).members_ != NULL) && ((*(P110)rt_nil_check(F->y_1604)).members_ != F->up->cur_task_160))) {
if ((F->ix_1617 != NULL)) {
f_act_path_i_698(F->up, (*(P110)rt_nil_check(F->y_1604)).members_, (*(P133)rt_nil_check(F->i_1612)), &F->act_1611);
} else {
f_act_path_694(F->up, (*(P110)rt_nil_check(F->y_1604)).members_, &F->act_1611);
}
F->parts_1607 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1607)), rt_str(" if (!rt_is_active(&", 20)), (*(P133)rt_nil_check(F->act_1611))), rt_str(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_735) = F->up->ty_void_154;
(*F->r_736) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1607)), rt_str(" rt_entry_call(&", 16)), (*(P133)rt_nil_check(F->ent_1610))), rt_str(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_742(struct f_greenc_1fr *up_, P163 e_738, P110 y_739, P115 *t_740, P133 *r_741) {
  struct f_other_attr_742fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_738 = e_738;
F->y_739 = y_739;
F->t_740 = t_740;
F->r_741 = r_741;
F->a_1621 = rt_str_copy((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_738)).name_)));
F->p_1622 = NULL;
if ((((*(P110)rt_nil_check(F->y_739)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1621, rt_str("INDEX", 5)))) {
if (((*(P110)rt_nil_check(F->y_739)).c_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_738)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_739)).name_)), rt_str(" is not a task family", 21)));
}
f_own_index_686(F->up, &F->p_1622);
(*F->t_740) = F->up->ty_int_149;
if (((*(P110)rt_nil_check(F->y_739)).t_ != NULL)) {
(*F->t_740) = (*(P110)rt_nil_check(F->y_739)).t_;
}
(*F->r_741) = F->p_1622;
} else if ((((*(P110)rt_nil_check(F->y_739)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1621, rt_str("ACTIVE", 6)))) {
f_act_path_694(F->up, F->y_739, &F->p_1622);
(*F->t_740) = F->up->ty_bool_150;
(*F->r_741) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1622))), 41));
} else if ((((*(P110)rt_nil_check(F->y_739)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1621, rt_str("PRIORITY", 8)))) {
f_act_path_694(F->up, F->y_739, &F->p_1622);
(*F->t_740) = F->up->ty_int_149;
(*F->r_741) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1622))), 41));
} else if ((((*(P110)rt_nil_check(F->y_739)).kind_ == ((rt_int)10LL)) && rt_str_eq(F->a_1621, rt_str("COUNT", 5)))) {
if (((*(P110)rt_nil_check(F->y_739)).members_ != F->up->cur_task_160)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_738)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_702(F->up, F->y_739, rt_str("", 0), &F->p_1622);
(*F->t_740) = F->up->ty_int_149;
(*F->r_741) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P133)rt_nil_check(F->p_1622))), 41));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_738)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1621), rt_str(" is not handled here", 20)));
(*F->t_740) = F->up->ty_int_149;
(*F->r_741) = NULL;
}
ret_:

  return;
}

static void f_member_attr_746(struct f_greenc_1fr *up_, P163 e_743, P115 *t_744, P133 *r_745) {
  struct f_member_attr_746fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_743 = e_743;
F->t_744 = t_744;
F->r_745 = r_745;
F->y_1623 = NULL;
F->ix_1624 = NULL;
F->i_1625 = NULL;
F->p_1626 = NULL;
F->vt_1627 = NULL;
f_task_of_684(F->up, (*(P163)rt_nil_check(F->e_743)).a_, &F->y_1623, &F->ix_1624);
f_gexpr_536(F->up, F->ix_1624, F->up->ty_int_149, &F->vt_1627, &F->i_1625);
f_act_path_i_698(F->up, F->y_1623, (*(P133)rt_nil_check(F->i_1625)), &F->p_1626);
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_743)).name_)), rt_str("ACTIVE", 6))) {
(*F->t_744) = F->up->ty_bool_150;
(*F->r_745) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1626))), 41));
} else if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_743)).name_)), rt_str("PRIORITY", 8))) {
(*F->t_744) = F->up->ty_int_149;
(*F->r_745) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1626))), 41));
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_743)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_743)).name_))), rt_str(" is not handled for a family member", 35)));
(*F->t_744) = F->up->ty_int_149;
(*F->r_745) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_752(struct f_greenc_1fr *up_, rstr name_747, P163 args_748, rt_int line_749, P115 *t_750, P133 *r_751) {
  struct f_task_builtin_752fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_747 = rt_str_copy(name_747);
F->args_748 = args_748;
F->line_749 = line_749;
F->t_750 = t_750;
F->r_751 = r_751;
F->vt_1628 = NULL;
F->v_1629 = NULL;
(*F->t_750) = F->up->ty_void_154;
if (rt_str_eq(F->name_747, rt_str("SET_PRIORITY", 12))) {
f_gexpr_536(F->up, F->args_748, F->up->ty_int_149, &F->vt_1628, &F->v_1629);
(*F->r_751) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_set_priority(rt_me(), ", 25), (*(P133)rt_nil_check(F->v_1629))), 41));
} else {
f_fail_206(F->up, F->line_749, rt_str_cat(F->name_747, rt_str(" is not declared", 16)));
(*F->r_751) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_754(struct f_greenc_1fr *up_, P163 s_753) {
  struct f_gen_accept_754fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_753 = s_753;
F->y_1630 = NULL;
F->y_1630 = f_lookup_entry_336(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_753)).name_)), F->up->cur_task_160);
F->saved_ax_1631 = NULL;
F->ent_1632 = NULL;
F->ep_1633 = NULL;
F->xf_1634 = NULL;
F->x_1635 = NULL;
F->pm_1636 = NULL;
F->f_1637 = NULL;
F->f_1637 = (*(P163)rt_nil_check(F->s_753)).a_;
F->p_1638 = NULL;
if (((F->y_1630 == NULL) || ((*(P110)rt_nil_check(F->y_1630)).kind_ != ((rt_int)10LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_753)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_753)).name_)), rt_str(" is not an entry", 16)));
}
if ((!f_same_task_333(F->up, (*(P110)rt_nil_check(F->y_1630)).members_, F->up->cur_task_160))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_753)).line_, rt_str("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_702(F->up, F->y_1630, rt_str("", 0), &F->ent_1632);
f_member_slot_758(F->up, F->y_1630, F->s_753, &F->ent_1632);
if (((*(P163)rt_nil_check(F->s_753)).flag_ == ((rt_int)0LL))) {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_accept_begin(&", 19), (*(P133)rt_nil_check(F->ent_1632))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1632))), rt_str(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_188(F->up, rt_str("ep", 2), &F->ep_1633);
f_new_name_188(F->up, rt_str("xf", 2), &F->xf_1634);
f_new_name_188(F->up, rt_str("x", 1), &F->x_1635);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1630)).cname_))), rt_str("p *", 3)), (*(P133)rt_nil_check(F->ep_1633))), rt_str(" = rt_accept_begin(&", 20)), (*(P133)rt_nil_check(F->ent_1632))), rt_str(");", 2)));
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str("rt_frame ", 9), (*(P133)rt_nil_check(F->xf_1634))), 59));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->xf_1634))), rt_str(")) {", 4)));
f_push_cleanup_447(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1634))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1632))), rt_str(", 0, 0);", 8)));
f_open_scope_350(F->up);
F->pm_1636 = (*(P110)rt_nil_check(F->y_1630)).params_;
while ((F->pm_1636 != NULL)) {
if (((*(P1070)rt_nil_check(F->pm_1636)).mode_ == ((rt_int)1LL))) {
F->p_1638 = f_new_sym_354(F->up, ((rt_int)2LL), (*(P1070)rt_nil_check(F->pm_1636)).name_);
(*(P110)rt_nil_check(F->p_1638)).ro_ = 1;
(*(P110)rt_nil_check(F->p_1638)).access_path_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->ep_1633))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1636)).cfield_))), 41));
} else {
F->p_1638 = f_new_sym_354(F->up, ((rt_int)1LL), (*(P1070)rt_nil_check(F->pm_1636)).name_);
(*(P110)rt_nil_check(F->p_1638)).access_path_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->ep_1633))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1070)rt_nil_check(F->pm_1636)).cfield_))), 41));
}
if ((F->f_1637 != NULL)) {
(*(P110)rt_nil_check(F->p_1638)).name_ = (*(P163)rt_nil_check(F->f_1637)).name_;
F->f_1637 = (*(P163)rt_nil_check(F->f_1637)).next_;
}
(*(P110)rt_nil_check(F->p_1638)).t_ = (*(P1070)rt_nil_check(F->pm_1636)).t_;
(*(P110)rt_nil_check(F->p_1638)).c_ = (*(P1070)rt_nil_check(F->pm_1636)).c_;
f_define_349(F->up, F->p_1638, (*(P163)rt_nil_check(F->s_753)).line_);
F->pm_1636 = (*(P1070)rt_nil_check(F->pm_1636)).next_;
}
L_end_1639: ;
F->up->accept_depth_161 = rt_add(F->up->accept_depth_161, ((rt_int)1LL));
F->saved_ax_1631 = F->up->accept_exits_142;
F->up->accept_exits_142 = F->up->exits_138;
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->s_753)).b_);
F->up->accept_exits_142 = F->saved_ax_1631;
F->up->accept_depth_161 = rt_sub(F->up->accept_depth_161, ((rt_int)1LL));
f_close_scope_351(F->up);
f_pop_cleanup_448(F->up);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1634))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1632))), rt_str(", 0, 0);", 8)));
f_emit_212(F->up, rt_str("} else {", 8));
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1634))), rt_str("); int ", 7)), (*(P133)rt_nil_check(F->x_1635))), rt_str(" = rt_xcur; rt_accept_end(&", 27)), (*(P133)rt_nil_check(F->ent_1632))), rt_str(", 1, ", 5)), (*(P133)rt_nil_check(F->x_1635))), rt_str("); rt_raise(", 12)), (*(P133)rt_nil_check(F->x_1635))), rt_str(");", 2)));
f_emit_212(F->up, rt_str("}", 1));
f_emit_212(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_member_slot_758(struct f_greenc_1fr *up_, P110 y_755, P163 s_756, P133 *ent_757) {
  struct f_member_slot_758fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_755 = y_755;
F->s_756 = s_756;
F->ent_757 = ent_757;
F->vt_1640 = NULL;
F->v_1641 = NULL;
if (((*(P110)rt_nil_check(F->y_755)).c_ != NULL)) {
if (((*(P163)rt_nil_check(F->s_756)).c_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_756)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_755)).name_)), rt_str(" is an entry family: accept ", 28)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_755)).name_))), rt_str("(I)", 3)));
}
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->s_756)).c_, NULL, &F->vt_1640, &F->v_1641);
f_entry_family_slot_717(F->up, F->y_755, (*(P133)rt_nil_check((*F->ent_757))), (*(P133)rt_nil_check(F->v_1641)), &(*F->ent_757));
} else if (((*(P163)rt_nil_check(F->s_756)).c_ != NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_756)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_755)).name_)), rt_str(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_761(struct f_greenc_1fr *up_, P163 e_759, P133 *r_760) {
  struct f_gen_delay_ticks_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_759 = e_759;
F->r_760 = r_760;
F->vt_1642 = NULL;
F->v_1643 = NULL;
f_gexpr_536(F->up, F->e_759, F->up->ty_float_151, &F->vt_1642, &F->v_1643);
f_check_type_363(F->up, F->vt_1642, F->up->ty_float_151, (*(P163)rt_nil_check(F->e_759)).line_);
(*F->r_760) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(rt_int)llround(", 16), (*(P133)rt_nil_check(F->v_1643))), 41));
ret_:

  return;
}

static void f_gen_select_763(struct f_greenc_1fr *up_, P163 s_762) {
  struct f_gen_select_763fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_762 = s_762;
F->alt_1644 = NULL;
F->alt_1644 = (*(P163)rt_nil_check(F->s_762)).a_;
F->n_1645 = ((rt_int)0LL);
F->has_delay_1647 = 0;
F->has_accept_1648 = 0;
F->al_1649 = NULL;
F->w_1650 = NULL;
F->g_1651 = NULL;
F->ent_1652 = NULL;
F->ticks_1653 = NULL;
F->vt_1654 = NULL;
F->y_1655 = NULL;
f_new_name_188(F->up, rt_str("al", 2), &F->al_1649);
f_new_name_188(F->up, rt_str("w", 1), &F->w_1650);
while ((F->alt_1644 != NULL)) {
F->n_1645 = rt_add(F->n_1645, ((rt_int)1LL));
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1644)).b_)).kind_ == ((rt_int)32LL))) {
F->has_delay_1647 = 1;
} else {
F->has_accept_1648 = 1;
}
F->alt_1644 = (*(P163)rt_nil_check(F->alt_1644)).next_;
}
L_end_1656: ;
if ((((*(P163)rt_nil_check(F->s_762)).flag_ == ((rt_int)1LL)) && F->has_delay_1647)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_762)).line_, rt_str("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_1648)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_762)).line_, rt_str("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ rt_alt ", 9), (*(P133)rt_nil_check(F->al_1649))), 91), rt_str_of_int(rt_add(F->n_1645, ((rt_int)1LL)))), rt_str("]; int open_ = 0;", 17)));
F->alt_1644 = (*(P163)rt_nil_check(F->s_762)).a_;
F->i_1646 = ((rt_int)0LL);
while ((F->alt_1644 != NULL)) {
F->g_1651 = f_mk_185(F->up, rt_str("1", 1));
if (((*(P163)rt_nil_check(F->alt_1644)).a_ != NULL)) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->alt_1644)).a_, F->up->ty_bool_150, &F->vt_1654, &F->g_1651);
f_check_type_363(F->up, F->vt_1654, F->up->ty_bool_150, (*(P163)rt_nil_check(F->alt_1644)).line_);
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1644)).b_)).kind_ == ((rt_int)34LL))) {
F->y_1655 = f_lookup_entry_336(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1644)).b_)).name_)), F->up->cur_task_160);
if (((F->y_1655 == NULL) || ((*(P110)rt_nil_check(F->y_1655)).kind_ != ((rt_int)10LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->alt_1644)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1644)).b_)).name_)), rt_str(" is not an entry", 16)));
}
f_entry_path_702(F->up, F->y_1655, rt_str("", 0), &F->ent_1652);
f_member_slot_758(F->up, F->y_1655, (*(P163)rt_nil_check(F->alt_1644)).b_, &F->ent_1652);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1649)), 91), rt_str_of_int(F->i_1646)), rt_str("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P133)rt_nil_check(F->g_1651))), rt_str("), &", 4)), (*(P133)rt_nil_check(F->ent_1652))), rt_str(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_761(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1644)).b_)).a_, &F->ticks_1653);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1649)), 91), rt_str_of_int(F->i_1646)), rt_str("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P133)rt_nil_check(F->g_1651))), rt_str("), NULL, NULL, ", 15)), (*(P133)rt_nil_check(F->ticks_1653))), rt_str("};", 2)));
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("open_ |= ", 9), (*(P133)rt_nil_check(F->al_1649))), 91), rt_str_of_int(F->i_1646)), rt_str("].open;", 7)));
F->i_1646 = rt_add(F->i_1646, ((rt_int)1LL));
F->alt_1644 = (*(P163)rt_nil_check(F->alt_1644)).next_;
}
L_end_1657: ;
if (((*(P163)rt_nil_check(F->s_762)).flag_ == ((rt_int)1LL))) {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1649)), 91), rt_str_of_int(F->n_1645)), rt_str("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_1645 = rt_add(F->n_1645, ((rt_int)1LL));
} else {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!open_) rt_raise(rt_exc(", 28), f_q_203(F->up)), rt_str("SELECT_ERROR", 12)), f_q_203(F->up)), rt_str("));", 3)));
}
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->w_1650))), rt_str(" = rt_wait(", 11)), rt_str_of_int(F->n_1645)), rt_str(", ", 2)), (*(P133)rt_nil_check(F->al_1649))), rt_str(");", 2)));
F->alt_1644 = (*(P163)rt_nil_check(F->s_762)).a_;
F->i_1646 = ((rt_int)0LL);
while ((F->alt_1644 != NULL)) {
if ((F->i_1646 == ((rt_int)0LL))) {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->w_1650))), rt_str(" == 0) {", 8)));
} else {
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->w_1650))), rt_str(" == ", 4)), rt_str_of_int(F->i_1646)), rt_str(") {", 3)));
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1644)).b_)).kind_ == ((rt_int)34LL))) {
f_gen_accept_754(F->up, (*(P163)rt_nil_check(F->alt_1644)).b_);
}
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->alt_1644)).c_);
F->i_1646 = rt_add(F->i_1646, ((rt_int)1LL));
F->alt_1644 = (*(P163)rt_nil_check(F->alt_1644)).next_;
}
L_end_1658: ;
if (((*(P163)rt_nil_check(F->s_762)).flag_ == ((rt_int)1LL))) {
f_emit_212(F->up, rt_str("} else {", 8));
f_gen_statements_443(F->up, (*(P163)rt_nil_check(F->s_762)).b_);
}
f_emit_212(F->up, rt_str("}", 1));
f_emit_212(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_family_range_768(struct f_greenc_1fr *up_, P110 y_764, P163 ix_765, P133 *lo_766, P133 *hi_767) {
  struct f_family_range_768fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_764 = y_764;
F->ix_765 = ix_765;
F->lo_766 = lo_766;
F->hi_767 = hi_767;
F->vt_1659 = NULL;
if ((F->ix_765 == NULL)) {
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_764)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_764)).cname_)), rt_str("lo", 2)), &(*F->lo_766));
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_764)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_764)).cname_)), rt_str("hi", 2)), &(*F->hi_767));
} else if (((*(P163)rt_nil_check(F->ix_765)).kind_ == ((rt_int)14LL))) {
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->ix_765)).a_, F->up->ty_int_149, &F->vt_1659, &(*F->lo_766));
f_gexpr_536(F->up, (*(P163)rt_nil_check(F->ix_765)).b_, F->up->ty_int_149, &F->vt_1659, &(*F->hi_767));
} else {
f_gexpr_536(F->up, F->ix_765, F->up->ty_int_149, &F->vt_1659, &(*F->lo_766));
(*F->hi_767) = (*F->lo_766);
}
ret_:

  return;
}

static void f_task_statement_gen_770(struct f_greenc_1fr *up_, P163 s_769) {
  struct f_task_statement_gen_770fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_769 = s_769;
F->n_1660 = NULL;
F->ix_1661 = NULL;
F->y_1662 = NULL;
F->a_1663 = NULL;
F->d_1664 = NULL;
F->l_1665 = NULL;
F->ticks_1666 = NULL;
F->lo_1667 = NULL;
F->hi_1668 = NULL;
{ rt_int sel1669 = (*(P163)rt_nil_check(F->s_769)).kind_;
if (0 || sel1669 == ((rt_int)32LL)) {
f_gen_delay_ticks_761(F->up, (*(P163)rt_nil_check(F->s_769)).a_, &F->ticks_1666);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), (*(P133)rt_nil_check(F->ticks_1666))), rt_str(");", 2)));
} else if (0 || sel1669 == ((rt_int)33LL)) {
if ((F->up->accept_depth_161 > ((rt_int)0LL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_769)).line_, rt_str("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_1660 = (*(P163)rt_nil_check(F->s_769)).a_;
while ((F->n_1660 != NULL)) {
f_task_of_684(F->up, F->n_1660, &F->y_1662, &F->ix_1661);
f_path_at_678(F->up, (*(P110)rt_nil_check(F->y_1662)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1662)).cname_)), rt_str("decl", 4)), &F->d_1664);
if (((*(P110)rt_nil_check(F->y_1662)).level_ > ((rt_int)0LL))) {
f_link_to_484(F->up, (*(P110)rt_nil_check(F->y_1662)).level_, &F->l_1665);
} else {
F->l_1665 = f_mk_185(F->up, rt_str("NULL", 4));
}
if (((*(P110)rt_nil_check(F->y_1662)).c_ == NULL)) {
f_act_path_694(F->up, F->y_1662, &F->a_1663);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(&", 11), (*(P133)rt_nil_check(F->a_1663))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1664))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1662)).cname_))), rt_str("run, ", 5)), (*(P133)rt_nil_check(F->l_1665))), rt_str(");", 2)));
} else {
f_family_range_768(F->up, F->y_1662, F->ix_1661, &F->lo_1667, &F->hi_1668);
f_act_path_i_698(F->up, F->y_1662, rt_str("k_", 2), &F->a_1663);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1667))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1668))), rt_str("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P133)rt_nil_check(F->l_1665))), rt_str("; g_->i = k_; rt_create(&", 25)), (*(P133)rt_nil_check(F->a_1663))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1664))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1662)).cname_))), rt_str("run, g_); }", 11)));
}
F->n_1660 = (*(P163)rt_nil_check(F->n_1660)).next_;
}
L_end_1670: ;
} else if (0 || sel1669 == ((rt_int)34LL)) {
f_gen_accept_754(F->up, F->s_769);
} else if (0 || sel1669 == ((rt_int)35LL)) {
f_gen_select_763(F->up, F->s_769);
} else if (0 || sel1669 == ((rt_int)36LL)) {
F->n_1660 = (*(P163)rt_nil_check(F->s_769)).a_;
while ((F->n_1660 != NULL)) {
f_task_of_684(F->up, F->n_1660, &F->y_1662, &F->ix_1661);
if (((*(P110)rt_nil_check(F->y_1662)).c_ == NULL)) {
f_act_path_694(F->up, F->y_1662, &F->a_1663);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str("rt_g_abort(&", 12), (*(P133)rt_nil_check(F->a_1663))), rt_str(");", 2)));
} else {
f_family_range_768(F->up, F->y_1662, F->ix_1661, &F->lo_1667, &F->hi_1668);
f_act_path_i_698(F->up, F->y_1662, rt_str("k_", 2), &F->a_1663);
f_emit_212(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1667))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1668))), rt_str("; k_++) rt_g_abort(&", 20)), (*(P133)rt_nil_check(F->a_1663))), rt_str(");", 2)));
}
F->n_1660 = (*(P163)rt_nil_check(F->n_1660)).next_;
}
L_end_1671: ;
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->s_769)).line_, rt_str("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P163 f_root_name_772(struct f_greenc_1fr *up_, P163 e_771) {
  struct f_root_name_772fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_771 = e_771;
if (((*(P163)rt_nil_check(F->e_771)).kind_ == ((rt_int)5LL))) {
F->result_ = F->e_771;
goto ret_;
} else if (((((*(P163)rt_nil_check(F->e_771)).kind_ == ((rt_int)9LL)) || ((*(P163)rt_nil_check(F->e_771)).kind_ == ((rt_int)8LL))) || ((*(P163)rt_nil_check(F->e_771)).kind_ == ((rt_int)15LL)))) {
F->result_ = f_root_name_772(F->up, (*(P163)rt_nil_check(F->e_771)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_775(struct f_greenc_1fr *up_, P163 target_773, rt_int line_774) {
  struct f_check_pure_target_775fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_773 = target_773;
F->line_774 = line_774;
F->n_1672 = NULL;
F->y_1673 = NULL;
if ((F->up->pure_sym_178 == NULL)) {
goto ret_;
}
if (F->up->last_deref_182) {
f_fail_206(F->up, F->line_774, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_1672 = f_root_name_772(F->up, F->target_773);
if ((F->n_1672 != NULL)) {
F->y_1673 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1672)).name_)));
if ((((F->y_1673 != NULL) && ((*(P110)rt_nil_check(F->y_1673)).kind_ == ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->y_1673)).depth_ < F->up->pure_depth_179))) {
f_fail_206(F->up, F->line_774, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not assign to ", 19)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1672)).name_))), rt_str(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_778(struct f_greenc_1fr *up_, P163 d_776, rstr name_777) {
  struct f_assigns_nonlocal_778fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_776 = d_776;
F->name_777 = rt_str_copy(name_777);
F->result_ = (f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->d_776)).d_, F->d_776, F->name_777) || f_scan_handlers_785(F->up, (*(P163)rt_nil_check(F->d_776)).e_, F->d_776, F->name_777));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_781(struct f_greenc_1fr *up_, P163 d_779, rstr name_780) {
  struct f_declares_781fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_779 = d_779;
F->name_780 = rt_str_copy(name_780);
F->p_1674 = NULL;
F->p_1674 = (*(P163)rt_nil_check(F->d_779)).a_;
F->e_1675 = NULL;
F->e_1675 = (*(P163)rt_nil_check(F->d_779)).c_;
while ((F->p_1674 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_1674)).name_)), F->name_780)) {
F->result_ = 1;
goto ret_;
}
F->p_1674 = (*(P163)rt_nil_check(F->p_1674)).next_;
}
L_end_1676: ;
while ((F->e_1675 != NULL)) {
if ((((*(P163)rt_nil_check(F->e_1675)).name_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_1675)).name_)), F->name_780))) {
F->result_ = 1;
goto ret_;
}
F->e_1675 = (*(P163)rt_nil_check(F->e_1675)).next_;
}
L_end_1677: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_785(struct f_greenc_1fr *up_, P163 h_782, P163 d_783, rstr name_784) {
  struct f_scan_handlers_785fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_782 = h_782;
F->d_783 = d_783;
F->name_784 = rt_str_copy(name_784);
F->p_1678 = NULL;
F->p_1678 = F->h_782;
while ((F->p_1678 != NULL)) {
if (f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->p_1678)).b_, F->d_783, F->name_784)) {
F->result_ = 1;
goto ret_;
}
F->p_1678 = (*(P163)rt_nil_check(F->p_1678)).next_;
}
L_end_1679: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_789(struct f_greenc_1fr *up_, P163 stmts_786, P163 d_787, rstr name_788) {
  struct f_scan_assigns_789fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_786 = stmts_786;
F->d_787 = d_787;
F->name_788 = rt_str_copy(name_788);
F->s_1680 = NULL;
F->s_1680 = F->stmts_786;
F->a_1681 = NULL;
F->r_1682 = NULL;
while ((F->s_1680 != NULL)) {
if (((*(P163)rt_nil_check(F->s_1680)).kind_ == ((rt_int)20LL))) {
F->r_1682 = f_root_name_772(F->up, (*(P163)rt_nil_check(F->s_1680)).a_);
if ((((F->r_1682 != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->r_1682)).name_)), F->name_788)) && (!f_declares_781(F->up, F->d_787, F->name_788)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1680)).kind_ == ((rt_int)22LL))) {
F->a_1681 = (*(P163)rt_nil_check(F->s_1680)).a_;
while ((F->a_1681 != NULL)) {
if (f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->a_1681)).b_, F->d_787, F->name_788)) {
F->result_ = 1;
goto ret_;
}
F->a_1681 = (*(P163)rt_nil_check(F->a_1681)).next_;
}
L_end_1684: ;
if (f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->s_1680)).b_, F->d_787, F->name_788)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1680)).kind_ == ((rt_int)23LL))) {
F->a_1681 = (*(P163)rt_nil_check(F->s_1680)).b_;
while ((F->a_1681 != NULL)) {
if (f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->a_1681)).b_, F->d_787, F->name_788)) {
F->result_ = 1;
goto ret_;
}
F->a_1681 = (*(P163)rt_nil_check(F->a_1681)).next_;
}
L_end_1685: ;
if (f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->s_1680)).c_, F->d_787, F->name_788)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1680)).kind_ == ((rt_int)24LL))) {
if (f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->s_1680)).b_, F->d_787, F->name_788)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1680)).kind_ == ((rt_int)25LL))) {
if ((f_scan_assigns_789(F->up, (*(P163)rt_nil_check(F->s_1680)).b_, F->d_787, F->name_788) || f_scan_handlers_785(F->up, (*(P163)rt_nil_check(F->s_1680)).c_, F->d_787, F->name_788))) {
F->result_ = 1;
goto ret_;
}
}
F->s_1680 = (*(P163)rt_nil_check(F->s_1680)).next_;
}
L_end_1683: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_792(struct f_greenc_1fr *up_, P163 e_790, P110 y_791) {
  struct f_check_call_rules_792fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_790 = e_790;
F->y_791 = y_791;
F->z_1686 = NULL;
F->s_1687 = NULL;
if ((((F->up->pure_sym_178 != NULL) && (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_791)).result_)).kind_ == ((rt_int)9LL)) || (*(P110)rt_nil_check(F->y_791)).vrp_)) && ((*(P110)rt_nil_check(F->y_791)).depth_ < F->up->pure_depth_179))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_790)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not call procedure ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_791)).name_))), rt_str(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P110)rt_nil_check(F->y_791)).vrp_) || (F->up->trial_148 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_180)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_790)).line_, rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_791)).name_))), rt_str(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_1687 = F->up->scope_stack_114;
while ((F->s_1687 != NULL)) {
if ((((((*(P110)rt_nil_check(F->s_1687)).kind_ == ((rt_int)1LL)) && ((*(P110)rt_nil_check(F->s_1687)).depth_ <= (*(P110)rt_nil_check(F->y_791)).depth_)) && (f_lookup_330(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1687)).name_))) == F->s_1687)) && f_assigns_nonlocal_778(F->up, (*(P110)rt_nil_check(F->y_791)).decl_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1687)).name_))))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_790)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_791)).name_))), rt_str(" assigns ", 9)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1687)).name_))), rt_str(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_1687 = (*(P110)rt_nil_check(F->s_1687)).stack_;
}
L_end_1688: ;
ret_:

  return;
}

static void f_generic_p_794(struct f_greenc_1fr *up_, P163 *res_793) {
  struct f_generic_p_794fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_793 = res_793;
F->x_1689 = NULL;
F->p_1690 = NULL;
F->head_1691 = NULL;
F->tail_1692 = NULL;
F->names_1693 = NULL;
F->st_1694 = NULL;
F->def_1695 = NULL;
F->sub_1696 = NULL;
F->def_name_text_1697 = NULL;
F->more_1698 = 1;
f_expect_kw_253(F->up, rt_str("GENERIC", 7));
F->x_1689 = f_nn_231(F->up, ((rt_int)54LL), f_cur_line_238(F->up));
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
while (F->more_1698) {
if (f_at_kw_240(F->up, rt_str("RESTRICTED", 10))) {
f_skip_251(F->up);
}
if (f_at_kw_240(F->up, rt_str("TYPE", 4))) {
f_skip_251(F->up);
F->p_1690 = f_nn_231(F->up, ((rt_int)47LL), f_cur_line_238(F->up));
(*(P163)rt_nil_check(F->p_1690)).ival_ = ((rt_int)10LL);
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->p_1690)).name_);
f_append_235(F->up, &F->head_1691, &F->tail_1692, F->p_1690);
} else if ((f_at_kw_240(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_240(F->up, rt_str("FUNCTION", 8)))) {
F->p_1690 = f_nn_231(F->up, ((rt_int)47LL), f_cur_line_238(F->up));
(*(P163)rt_nil_check(F->p_1690)).ival_ = ((rt_int)11LL);
if (f_at_kw_240(F->up, rt_str("PROCEDURE", 9))) {
F->sub_1696 = f_nn_231(F->up, ((rt_int)44LL), f_cur_line_238(F->up));
} else {
F->sub_1696 = f_nn_231(F->up, ((rt_int)45LL), f_cur_line_238(F->up));
}
f_skip_251(F->up);
f_designator_303(F->up, &(*(P163)rt_nil_check(F->sub_1696)).name_);
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_formal_part_301(F->up, &(*(P163)rt_nil_check(F->sub_1696)).a_);
}
if (f_at_kw_240(F->up, rt_str("RETURN", 6))) {
f_skip_251(F->up);
f_subtype_ind_286(F->up, &(*(P163)rt_nil_check(F->sub_1696)).b_);
}
(*(P163)rt_nil_check(F->sub_1696)).ival_ = ((rt_int)1LL);
(*(P163)rt_nil_check(F->p_1690)).name_ = (*(P163)rt_nil_check(F->sub_1696)).name_;
(*(P163)rt_nil_check(F->p_1690)).a_ = F->sub_1696;
if (f_at_kw_240(F->up, rt_str("IS", 2))) {
f_skip_251(F->up);
if (f_at_kind_244(F->up, ((rt_int)6LL))) {
f_designator_303(F->up, &F->def_name_text_1697);
(*(P163)rt_nil_check(F->p_1690)).b_ = f_nn_231(F->up, ((rt_int)5LL), f_cur_line_238(F->up));
(*(P163)rt_nil_check((*(P163)rt_nil_check(F->p_1690)).b_)).name_ = F->def_name_text_1697;
} else {
f_name_p_284(F->up, &(*(P163)rt_nil_check(F->p_1690)).b_);
}
}
f_append_235(F->up, &F->head_1691, &F->tail_1692, F->p_1690);
} else {
f_id_list_261(F->up, &F->names_1693);
f_expect_op_255(F->up, rt_str(":", 1));
if (f_at_kw_240(F->up, rt_str("IN", 2))) {
f_skip_251(F->up);
}
f_subtype_ind_286(F->up, &F->st_1694);
F->def_1695 = NULL;
if (f_at_op_242(F->up, rt_str(":=", 2))) {
f_skip_251(F->up);
f_expr_268(F->up, &F->def_1695);
}
while ((F->names_1693 != NULL)) {
F->p_1690 = f_nn_231(F->up, ((rt_int)47LL), (*(P163)rt_nil_check(F->names_1693)).line_);
(*(P163)rt_nil_check(F->p_1690)).ival_ = ((rt_int)1LL);
(*(P163)rt_nil_check(F->p_1690)).name_ = (*(P163)rt_nil_check(F->names_1693)).name_;
(*(P163)rt_nil_check(F->p_1690)).a_ = F->st_1694;
(*(P163)rt_nil_check(F->p_1690)).b_ = F->def_1695;
f_append_235(F->up, &F->head_1691, &F->tail_1692, F->p_1690);
F->names_1693 = (*(P163)rt_nil_check(F->names_1693)).next_;
}
L_end_1700: ;
}
F->more_1698 = f_at_op_242(F->up, rt_str(";", 1));
if (F->more_1698) {
f_skip_251(F->up);
}
}
L_end_1699: ;
f_expect_op_255(F->up, rt_str(")", 1));
}
if ((f_at_kw_240(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_240(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_305(F->up, &(*(P163)rt_nil_check(F->x_1689)).b_);
} else if (f_at_kw_240(F->up, rt_str("PACKAGE", 7))) {
f_package_p_311(F->up, &(*(P163)rt_nil_check(F->x_1689)).b_);
} else if (f_at_kw_240(F->up, rt_str("TASK", 4))) {
f_task_p_664(F->up, &(*(P163)rt_nil_check(F->x_1689)).b_);
} else {
f_perror_250(F->up, rt_str("a generic unit is a subprogram, a package or a task", 51));
}
(*(P163)rt_nil_check(F->x_1689)).a_ = F->head_1691;
(*(P163)rt_nil_check(F->x_1689)).name_ = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1689)).b_)).name_;
(*F->res_793) = F->x_1689;
ret_:

  return;
}

static void f_instantiation_797(struct f_greenc_1fr *up_, P163 x_795, P163 *res_796) {
  struct f_instantiation_797fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_795 = x_795;
F->res_796 = res_796;
F->i_1701 = NULL;
F->head_1702 = NULL;
F->tail_1703 = NULL;
F->a_1704 = NULL;
F->formal_1705 = NULL;
F->more_1707 = 1;
f_expect_kw_253(F->up, rt_str("IS", 2));
f_expect_kw_253(F->up, rt_str("NEW", 3));
F->i_1701 = f_nn_231(F->up, ((rt_int)53LL), (*(P163)rt_nil_check(F->x_795)).line_);
(*(P163)rt_nil_check(F->i_1701)).name_ = (*(P163)rt_nil_check(F->x_795)).name_;
(*(P163)rt_nil_check(F->i_1701)).ival_ = (*(P163)rt_nil_check(F->x_795)).kind_;
f_expect_id_257(F->up, &(*(P163)rt_nil_check(F->i_1701)).tag_);
if (f_at_op_242(F->up, rt_str("(", 1))) {
f_skip_251(F->up);
while (F->more_1707) {
F->formal_1705 = NULL;
F->mark_1706 = ((rt_int)0LL);
if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("IS", 2)))) {
f_expect_id_257(F->up, &F->formal_1705);
f_skip_251(F->up);
F->mark_1706 = ((rt_int)5LL);
} else if (((f_at_kind_244(F->up, ((rt_int)1LL)) && (f_kind_at_246(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_248(F->up, ((rt_int)1LL)), rt_str(":=:", 3))))) {
f_expect_id_257(F->up, &F->formal_1705);
f_skip_251(F->up);
F->mark_1706 = ((rt_int)1LL);
}
if ((f_at_kind_244(F->up, ((rt_int)6LL)) && (F->mark_1706 == ((rt_int)5LL)))) {
F->a_1704 = f_nn_231(F->up, ((rt_int)5LL), f_cur_line_238(F->up));
f_designator_303(F->up, &(*(P163)rt_nil_check(F->a_1704)).name_);
} else {
f_expr_268(F->up, &F->a_1704);
}
(*(P163)rt_nil_check(F->a_1704)).formal_ = F->formal_1705;
(*(P163)rt_nil_check(F->a_1704)).flag_ = F->mark_1706;
f_append_235(F->up, &F->head_1702, &F->tail_1703, F->a_1704);
F->more_1707 = f_at_op_242(F->up, rt_str(",", 1));
if (F->more_1707) {
f_skip_251(F->up);
}
}
L_end_1708: ;
f_expect_op_255(F->up, rt_str(")", 1));
}
f_expect_op_255(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->i_1701)).a_ = F->head_1702;
(*F->res_796) = F->i_1701;
ret_:

  return;
}

static void f_generic_decl_799(struct f_greenc_1fr *up_, P163 e_798) {
  struct f_generic_decl_799fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_798 = e_798;
F->y_1709 = NULL;
if (((*(P163)rt_nil_check(F->e_798)).kind_ == ((rt_int)54LL))) {
F->y_1709 = f_new_sym_354(F->up, ((rt_int)11LL), (*(P163)rt_nil_check(F->e_798)).name_);
(*(P110)rt_nil_check(F->y_1709)).decl_ = F->e_798;
f_define_349(F->up, F->y_1709, (*(P163)rt_nil_check(F->e_798)).line_);
} else if (((*(P163)rt_nil_check(F->e_798)).kind_ == ((rt_int)53LL))) {
f_instantiate_816(F->up, F->e_798);
} else {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_798)).line_, rt_str("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_801(struct f_greenc_1fr *up_, rstr n_800) {
  struct f_is_generic_name_801fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_800 = rt_str_copy(n_800);
F->y_1710 = NULL;
F->y_1710 = f_lookup_330(F->up, F->n_800);
F->result_ = ((F->y_1710 != NULL) && ((*(P110)rt_nil_check(F->y_1710)).kind_ == ((rt_int)11LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_803(struct f_greenc_1fr *up_, P163 e_802) {
  struct f_attach_generic_body_803fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_802 = e_802;
F->y_1711 = NULL;
F->y_1711 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_802)).name_)));
(*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1711)).decl_)).c_ = F->e_802;
F->up->generic_contexts_141 = ({ R140 *cell1712 = rt_alloc(sizeof(R140)); *cell1712 = cp_R140(({ R140 ag1713; ag1713.body_node_ = F->e_802; ag1713.visible_ = F->up->scope_stack_114; ag1713.next_ = F->up->generic_contexts_141; ag1713; })); (P139)cell1712; });
ret_:

  return;
}

static void f_restore_generic_context_806(struct f_greenc_1fr *up_, P163 body_node_804, rt_int line_805) {
  struct f_restore_generic_context_806fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_804 = body_node_804;
F->line_805 = line_805;
F->ctx_1714 = NULL;
F->ctx_1714 = F->up->generic_contexts_141;
F->m_1715 = NULL;
F->z_1716 = NULL;
while (((F->ctx_1714 != NULL) && ((*(P139)rt_nil_check(F->ctx_1714)).body_node_ != F->body_node_804))) {
F->ctx_1714 = (*(P139)rt_nil_check(F->ctx_1714)).next_;
}
L_end_1718: ;
if ((F->ctx_1714 == NULL)) {
goto ret_;
}
F->m_1715 = (*(P139)rt_nil_check(F->ctx_1714)).visible_;
while ((F->m_1715 != NULL)) {
if ((((*(P110)rt_nil_check(F->m_1715)).level_ <= ((rt_int)0LL)) && ((*(P110)rt_nil_check(F->m_1715)).kind_ != ((rt_int)11LL)))) {
F->z_1716 = F->up->table_112.p[rt_index(f_hash_328(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1715)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->seen_1717 = 0;
while ((F->z_1716 != NULL)) {
if ((((*(P110)rt_nil_check(F->z_1716)).depth_ == F->up->depth_113) && rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1716)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1715)).name_))))) {
F->seen_1717 = 1;
}
F->z_1716 = (*(P110)rt_nil_check(F->z_1716)).chain_;
}
L_end_1720: ;
if ((!F->seen_1717)) {
f_copy_sym_622(F->up, F->m_1715, &F->z_1716);
f_define_349(F->up, F->z_1716, F->line_805);
}
}
F->m_1715 = (*(P110)rt_nil_check(F->m_1715)).stack_;
}
L_end_1719: ;
ret_:

  return;
}

static P163 f_gactual_810(struct f_greenc_1fr *up_, P163 args_807, rt_int nth_808, rstr name_809) {
  struct f_gactual_810fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_807 = args_807;
F->nth_808 = nth_808;
F->name_809 = rt_str_copy(name_809);
F->a_1721 = NULL;
F->a_1721 = F->args_807;
F->i_1722 = ((rt_int)1LL);
while ((F->a_1721 != NULL)) {
if ((((*(P163)rt_nil_check(F->a_1721)).formal_ == NULL) && (F->i_1722 == F->nth_808))) {
F->result_ = F->a_1721;
goto ret_;
}
if ((((*(P163)rt_nil_check(F->a_1721)).formal_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1721)).formal_)), F->name_809))) {
F->result_ = F->a_1721;
goto ret_;
}
if (((*(P163)rt_nil_check(F->a_1721)).formal_ == NULL)) {
F->i_1722 = rt_add(F->i_1722, ((rt_int)1LL));
}
F->a_1721 = (*(P163)rt_nil_check(F->a_1721)).next_;
}
L_end_1723: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_814(struct f_greenc_1fr *up_, P163 n_811, P133 name_812, P163 *r_813) {
  struct f_copy_node_814fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_811 = n_811;
F->name_812 = name_812;
F->r_813 = r_813;
(*F->r_813) = f_nn_231(F->up, (*(P163)rt_nil_check(F->n_811)).kind_, (*(P163)rt_nil_check(F->n_811)).line_);
as_R164(&(*(P163)rt_nil_check((*F->r_813))), (*(P163)rt_nil_check(F->n_811)));
(*(P163)rt_nil_check((*F->r_813))).name_ = F->name_812;
(*(P163)rt_nil_check((*F->r_813))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_816(struct f_greenc_1fr *up_, P163 e_815) {
  struct f_instantiate_816fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_815 = e_815;
F->g_1724 = NULL;
F->g_1724 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_815)).tag_)));
F->gd_1725 = NULL;
F->pat_1726 = NULL;
F->f_1727 = NULL;
F->a_1728 = NULL;
F->cn_1729 = NULL;
F->y_1730 = NULL;
F->z_1731 = NULL;
F->fs_1732 = NULL;
F->nth_1733 = ((rt_int)1LL);
F->t_1734 = NULL;
F->vt_1735 = NULL;
F->c_1736 = NULL;
F->v_1737 = NULL;
F->acc_1738 = NULL;
F->x_1739 = NULL;
if (((F->g_1724 == NULL) || ((*(P110)rt_nil_check(F->g_1724)).kind_ != ((rt_int)11LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_815)).tag_)), rt_str(" is not a generic unit", 22)));
}
F->gd_1725 = (*(P110)rt_nil_check(F->g_1724)).decl_;
F->pat_1726 = (*(P163)rt_nil_check(F->gd_1725)).b_;
f_open_scope_350(F->up);
F->f_1727 = (*(P163)rt_nil_check(F->gd_1725)).a_;
while ((F->f_1727 != NULL)) {
F->a_1728 = f_gactual_810(F->up, (*(P163)rt_nil_check(F->e_815)).a_, F->nth_1733, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1727)).name_)));
F->nth_1733 = rt_add(F->nth_1733, ((rt_int)1LL));
if (((*(P163)rt_nil_check(F->f_1727)).ival_ == ((rt_int)10LL))) {
if (((F->a_1728 == NULL) || ((*(P163)rt_nil_check(F->a_1728)).kind_ != ((rt_int)5LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat(rt_str("a type is required for generic parameter ", 41), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1727)).name_))));
}
F->y_1730 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1728)).name_)));
if (((F->y_1730 == NULL) || ((*(P110)rt_nil_check(F->y_1730)).kind_ != ((rt_int)5LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1728)).name_)), rt_str(" is not a type", 14)));
}
f_copy_sym_622(F->up, F->y_1730, &F->z_1731);
(*(P110)rt_nil_check(F->z_1731)).name_ = (*(P163)rt_nil_check(F->f_1727)).name_;
f_define_349(F->up, F->z_1731, (*(P163)rt_nil_check(F->e_815)).line_);
} else if (((*(P163)rt_nil_check(F->f_1727)).ival_ == ((rt_int)11LL))) {
if ((F->a_1728 == NULL)) {
F->a_1728 = (*(P163)rt_nil_check(F->f_1727)).b_;
}
if (((F->a_1728 == NULL) || ((*(P163)rt_nil_check(F->a_1728)).kind_ != ((rt_int)5LL)))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat(rt_str("a subprogram is required for generic parameter ", 47), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1727)).name_))));
}
f_build_subprogram_432(F->up, (*(P163)rt_nil_check(F->f_1727)).a_, &F->fs_1732);
F->y_1730 = F->up->table_112.p[rt_index(f_hash_328(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1728)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while (((F->y_1730 != NULL) && (!(((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1730)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1728)).name_))) && (((*(P110)rt_nil_check(F->y_1730)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1730)).kind_ == ((rt_int)4LL)))) && f_same_signature_346(F->up, (*(P110)rt_nil_check(F->y_1730)).params_, (*(P110)rt_nil_check(F->fs_1732)).params_)) && f_same_343(F->up, (*(P110)rt_nil_check(F->y_1730)).result_, (*(P110)rt_nil_check(F->fs_1732)).result_))))) {
F->y_1730 = (*(P110)rt_nil_check(F->y_1730)).chain_;
}
L_end_1742: ;
if ((F->y_1730 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no subprogram ", 14), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1728)).name_))), rt_str(" matches generic parameter ", 27)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1727)).name_))));
}
f_copy_sym_622(F->up, F->y_1730, &F->z_1731);
(*(P110)rt_nil_check(F->z_1731)).name_ = (*(P163)rt_nil_check(F->f_1727)).name_;
f_define_349(F->up, F->z_1731, (*(P163)rt_nil_check(F->e_815)).line_);
} else {
if ((F->a_1728 == NULL)) {
F->a_1728 = (*(P163)rt_nil_check(F->f_1727)).b_;
}
if ((F->a_1728 == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat(rt_str("no actual for generic parameter ", 32), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1727)).name_))));
}
f_resolve_384(F->up, (*(P163)rt_nil_check(F->f_1727)).a_, &F->t_1734, &F->c_1736);
f_gexpr_536(F->up, F->a_1728, F->t_1734, &F->vt_1735, &F->v_1737);
f_check_type_363(F->up, F->vt_1735, F->t_1734, (*(P163)rt_nil_check(F->e_815)).line_);
F->z_1731 = f_new_sym_354(F->up, ((rt_int)2LL), (*(P163)rt_nil_check(F->f_1727)).name_);
f_storage_422(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1727)).name_)), F->t_1734, &F->acc_1738);
f_copy_code_407(F->up, F->t_1734, (*(P133)rt_nil_check(F->v_1737)), &F->x_1739);
f_emit_212(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1738)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1739))), 59));
(*(P110)rt_nil_check(F->z_1731)).t_ = F->t_1734;
(*(P110)rt_nil_check(F->z_1731)).c_ = F->c_1736;
(*(P110)rt_nil_check(F->z_1731)).ro_ = 1;
if (((*(P115)rt_nil_check(F->t_1734)).kind_ == ((rt_int)1LL))) {
f_manifest_380(F->up, F->a_1728, &(*(P110)rt_nil_check(F->z_1731)).mvalue_, &F->ok_1740);
(*(P110)rt_nil_check(F->z_1731)).hasmv_ = F->ok_1740;
}
f_bind_425(F->up, F->z_1731, F->acc_1738);
f_define_349(F->up, F->z_1731, (*(P163)rt_nil_check(F->e_815)).line_);
}
F->f_1727 = (*(P163)rt_nil_check(F->f_1727)).next_;
}
L_end_1741: ;
if (((*(P163)rt_nil_check(F->gd_1725)).c_ != NULL)) {
f_restore_generic_context_806(F->up, (*(P163)rt_nil_check(F->gd_1725)).c_, (*(P163)rt_nil_check(F->e_815)).line_);
}
if ((((*(P163)rt_nil_check(F->pat_1726)).kind_ == ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->pat_1726)).kind_ == ((rt_int)45LL)))) {
if (((*(P163)rt_nil_check(F->pat_1726)).ival_ == ((rt_int)1LL))) {
if (((*(P163)rt_nil_check(F->gd_1725)).c_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic ", 20), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_815)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
F->pat_1726 = (*(P163)rt_nil_check(F->gd_1725)).c_;
}
f_copy_node_814(F->up, F->pat_1726, (*(P163)rt_nil_check(F->e_815)).name_, &F->cn_1729);
f_build_subprogram_432(F->up, F->cn_1729, &F->y_1730);
f_define_349(F->up, F->y_1730, (*(P163)rt_nil_check(F->e_815)).line_);
f_subprogram_body_441(F->up, F->cn_1729, F->y_1730);
} else if (((*(P163)rt_nil_check(F->pat_1726)).kind_ == ((rt_int)48LL))) {
f_copy_node_814(F->up, F->pat_1726, (*(P163)rt_nil_check(F->e_815)).name_, &F->cn_1729);
f_package_spec_627(F->up, F->cn_1729);
F->y_1730 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_815)).name_)));
if (((*(P163)rt_nil_check(F->gd_1725)).c_ != NULL)) {
f_copy_node_814(F->up, (*(P163)rt_nil_check(F->gd_1725)).c_, (*(P163)rt_nil_check(F->e_815)).name_, &F->cn_1729);
f_package_body_632(F->up, F->cn_1729);
}
} else {
f_copy_node_814(F->up, F->pat_1726, (*(P163)rt_nil_check(F->e_815)).name_, &F->cn_1729);
f_task_spec_719(F->up, F->cn_1729);
F->y_1730 = f_lookup_330(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_815)).name_)));
if (((*(P163)rt_nil_check(F->gd_1725)).c_ == NULL)) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->e_815)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic task ", 25), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_815)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
f_copy_node_814(F->up, (*(P163)rt_nil_check(F->gd_1725)).c_, (*(P163)rt_nil_check(F->e_815)).name_, &F->cn_1729);
f_task_body_723(F->up, F->cn_1729);
}
f_close_scope_351(F->up);
f_define_349(F->up, F->y_1730, (*(P163)rt_nil_check(F->e_815)).line_);
ret_:

  return;
}

static void f_predef_type_821(struct f_greenc_1fr *up_, rstr name_817, P115 t_818, rstr lo_819, rstr hi_820) {
  struct f_predef_type_821fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_817 = rt_str_copy(name_817);
F->t_818 = t_818;
F->lo_819 = rt_str_copy(lo_819);
F->hi_820 = rt_str_copy(hi_820);
F->y_1743 = NULL;
F->y_1743 = f_new_sym_354(F->up, ((rt_int)5LL), f_mk_185(F->up, F->name_817));
(*(P110)rt_nil_check(F->y_1743)).t_ = F->t_818;
if (((F->lo_819).len > ((rt_int)0LL))) {
(*(P110)rt_nil_check(F->y_1743)).c_ = f_new_cons_357(F->up);
(*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1743)).c_)).lo_ = f_mk_185(F->up, F->lo_819);
(*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1743)).c_)).hi_ = f_mk_185(F->up, F->hi_820);
}
f_define_349(F->up, F->y_1743, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_825(struct f_greenc_1fr *up_, rstr name_822, P115 t_823, rstr code_text_824) {
  struct f_predef_const_825fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_822 = rt_str_copy(name_822);
F->t_823 = t_823;
F->code_text_824 = rt_str_copy(code_text_824);
F->y_1744 = NULL;
F->y_1744 = f_new_sym_354(F->up, ((rt_int)2LL), f_mk_185(F->up, F->name_822));
(*(P110)rt_nil_check(F->y_1744)).t_ = F->t_823;
(*(P110)rt_nil_check(F->y_1744)).ro_ = 1;
(*(P110)rt_nil_check(F->y_1744)).access_path_ = f_mk_185(F->up, F->code_text_824);
f_define_349(F->up, F->y_1744, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_827(struct f_greenc_1fr *up_, rstr name_826) {
  struct f_predef_exc_827fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_826 = rt_str_copy(name_826);
F->y_1745 = NULL;
F->y_1745 = f_new_sym_354(F->up, ((rt_int)6LL), f_mk_185(F->up, F->name_826));
(*(P110)rt_nil_check(F->y_1745)).cname_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_203(F->up)), F->name_826), f_q_203(F->up)), 41));
f_define_349(F->up, F->y_1745, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_831(struct f_greenc_1fr *up_, rstr name_828, P115 t_829, rt_int v_830) {
  struct f_predef_lit_831fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_828 = rt_str_copy(name_828);
F->t_829 = t_829;
F->v_830 = v_830;
F->y_1746 = NULL;
F->y_1746 = f_new_sym_354(F->up, ((rt_int)7LL), f_mk_185(F->up, F->name_828));
(*(P110)rt_nil_check(F->y_1746)).t_ = F->t_829;
(*(P110)rt_nil_check(F->y_1746)).result_ = F->t_829;
(*(P110)rt_nil_check(F->y_1746)).mvalue_ = F->v_830;
(*(P110)rt_nil_check(F->y_1746)).hasmv_ = 1;
f_define_349(F->up, F->y_1746, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_832(struct f_greenc_1fr *up_) {
  struct f_predefine_832fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_1747 = rt_str_copy(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_str("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_1748 = ((rt_int)1LL);
F->code_no_1749 = ((rt_int)0LL);
f_predef_type_821(F->up, rt_str("INTEGER", 7), F->up->ty_int_149, rt_str("", 0), rt_str("", 0));
f_predef_type_821(F->up, rt_str("SHORT_INTEGER", 13), F->up->ty_int_149, rt_str("", 0), rt_str("", 0));
f_predef_type_821(F->up, rt_str("LONG_INTEGER", 12), F->up->ty_int_149, rt_str("", 0), rt_str("", 0));
f_predef_type_821(F->up, rt_str("NATURAL", 7), F->up->ty_int_149, rt_str("1", 1), rt_str("INT64_MAX", 9));
f_predef_type_821(F->up, rt_str("PRIORITY", 8), F->up->ty_int_149, rt_str("0", 1), rt_str("255", 3));
f_predef_type_821(F->up, rt_str("BOOLEAN", 7), F->up->ty_bool_150, rt_str("0", 1), rt_str("1", 1));
f_predef_type_821(F->up, rt_str("CHARACTER", 9), F->up->ty_char_152, rt_str("0", 1), rt_str("127", 3));
f_predef_type_821(F->up, rt_str("STRING", 6), F->up->ty_string_153, rt_str("", 0), rt_str("", 0));
f_predef_type_821(F->up, rt_str("FLOAT", 5), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_type_821(F->up, rt_str("SHORT_FLOAT", 11), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_type_821(F->up, rt_str("LONG_FLOAT", 10), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_type_821(F->up, rt_str("TIME", 4), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_lit_831(F->up, rt_str("FALSE", 5), F->up->ty_bool_150, ((rt_int)0LL));
f_predef_lit_831(F->up, rt_str("TRUE", 4), F->up->ty_bool_150, ((rt_int)1LL));
{ rt_int lo1752 = ((rt_int)1LL), hi1753 = (F->control_1747).len;
for (rt_int it1754 = lo1752; it1754 <= hi1753; it1754++) {
F->i_1751 = it1754;
if ((rt_str_get(F->control_1747, F->i_1751) == 32)) {
f_predef_const_825(F->up, rt_str_slice(F->control_1747, F->start_1748, rt_sub(F->i_1751, ((rt_int)1LL))), F->up->ty_char_152, rt_str_of_int(F->code_no_1749));
F->code_no_1749 = rt_add(F->code_no_1749, ((rt_int)1LL));
F->start_1748 = rt_add(F->i_1751, ((rt_int)1LL));
}
}
}
L_end_1750: ;
f_predef_const_825(F->up, rt_str("DEL", 3), F->up->ty_char_152, rt_str("127", 3));
f_predef_const_825(F->up, rt_str("EXCLAM", 6), F->up->ty_char_152, rt_str("33", 2));
f_predef_const_825(F->up, rt_str("DOLLAR", 6), F->up->ty_char_152, rt_str("36", 2));
f_predef_const_825(F->up, rt_str("QUESTION", 8), F->up->ty_char_152, rt_str("63", 2));
f_predef_const_825(F->up, rt_str("AT_SIGN", 7), F->up->ty_char_152, rt_str("64", 2));
f_predef_const_825(F->up, rt_str("L_BRACKET", 9), F->up->ty_char_152, rt_str("91", 2));
f_predef_const_825(F->up, rt_str("BACK_SLASH", 10), F->up->ty_char_152, rt_str("92", 2));
f_predef_const_825(F->up, rt_str("R_BRACKET", 9), F->up->ty_char_152, rt_str("93", 2));
f_predef_const_825(F->up, rt_str("CIRCUMFLEX", 10), F->up->ty_char_152, rt_str("94", 2));
f_predef_const_825(F->up, rt_str("GRAVE", 5), F->up->ty_char_152, rt_str("96", 2));
f_predef_const_825(F->up, rt_str("L_BRACE", 7), F->up->ty_char_152, rt_str("123", 3));
f_predef_const_825(F->up, rt_str("R_BRACE", 7), F->up->ty_char_152, rt_str("125", 3));
f_predef_const_825(F->up, rt_str("TILDE", 5), F->up->ty_char_152, rt_str("126", 3));
{ rt_int lo1757 = ((rt_int)0LL), hi1758 = ((rt_int)25LL);
for (rt_int it1759 = lo1757; it1759 <= hi1758; it1759++) {
F->i_1756 = it1759;
f_predef_const_825(F->up, rt_str_catc(rt_str("LC_", 3), rt_range((rt_add(((rt_int)66LL), F->i_1756) - 1), 0, 127)), F->up->ty_char_152, rt_str_of_int(rt_add(((rt_int)97LL), F->i_1756)));
}
}
L_end_1755: ;
f_predef_const_825(F->up, rt_str("NEWLINE", 7), F->up->ty_string_153, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_q_203(F->up)), rt_str("\\n", 2)), f_q_203(F->up)), rt_str(", 1)", 4)));
f_predef_const_825(F->up, rt_str("SECONDS", 7), F->up->ty_float_151, rt_str("((double)RT_SECONDS)", 20));
f_predef_exc_827(F->up, rt_str("ACCESS_ERROR", 12));
f_predef_exc_827(F->up, rt_str("ASSERT_ERROR", 12));
f_predef_exc_827(F->up, rt_str("DISCRIMINANT_ERROR", 18));
f_predef_exc_827(F->up, rt_str("DIVIDE_ERROR", 12));
f_predef_exc_827(F->up, rt_str("FAILURE", 7));
f_predef_exc_827(F->up, rt_str("INDEX_ERROR", 11));
f_predef_exc_827(F->up, rt_str("INITIATE_ERROR", 14));
f_predef_exc_827(F->up, rt_str("NO_VALUE_ERROR", 14));
f_predef_exc_827(F->up, rt_str("OVERFLOW", 8));
f_predef_exc_827(F->up, rt_str("OVERLAP_ERROR", 13));
f_predef_exc_827(F->up, rt_str("RANGE_ERROR", 11));
f_predef_exc_827(F->up, rt_str("SELECT_ERROR", 12));
f_predef_exc_827(F->up, rt_str("STORAGE_OVERFLOW", 16));
f_predef_exc_827(F->up, rt_str("TASKING_ERROR", 13));
f_predef_exc_827(F->up, rt_str("UNDERFLOW", 9));
f_predef_exc_827(F->up, rt_str("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_834(struct f_greenc_1fr *up_, P163 u_833) {
  struct f_translate_834fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_833 = u_833;
F->p_1760 = NULL;
F->p_1760 = F->u_833;
F->y_1761 = NULL;
f_open_scope_350(F->up);
while ((F->p_1760 != NULL)) {
if (((*(P163)rt_nil_check(F->p_1760)).next_ == NULL)) {
if ((((*(P163)rt_nil_check(F->p_1760)).kind_ != ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->p_1760)).a_ != NULL))) {
f_fail_206(F->up, (*(P163)rt_nil_check(F->p_1760)).line_, rt_str("the main program is a procedure without parameters", 50));
}
f_build_subprogram_432(F->up, F->p_1760, &F->y_1761);
f_define_349(F->up, F->y_1761, (*(P163)rt_nil_check(F->p_1760)).line_);
f_subprogram_body_441(F->up, F->p_1760, F->y_1761);
F->up->main_name_183 = (*(P110)rt_nil_check(F->y_1761)).cname_;
} else {
f_decl_element_436(F->up, F->p_1760);
}
F->p_1760 = (*(P163)rt_nil_check(F->p_1760)).next_;
}
L_end_1762: ;
ret_:

  return;
}

static void f_print_program_835(struct f_greenc_1fr *up_) {
  struct f_print_program_835fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_416(F->up);
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_203(F->up)), rt_str("paleo.h", 7)), f_q_203(F->up)));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("#include <math.h>", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_214(F->up, F->up->out_types_121);
f_print_buffer_214(F->up, F->up->out_frames_122);
f_print_buffer_214(F->up, F->up->out_helpers_123);
f_print_buffer_214(F->up, F->up->out_protos_124);
f_print_buffer_214(F->up, F->up->out_globals_125);
f_print_buffer_214(F->up, F->up->out_funcs_126);
rt_g_put(rt_str("int main(int argc, char **argv) {", 33));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_init(argc, argv);", 22));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_set_lang(1);", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_214(F->up, F->up->out_excs_128);
f_print_buffer_214(F->up, F->up->out_init_127);
rt_g_put(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->up->main_name_183))), rt_str("();", 3)));
rt_g_put(rt_str("\n", 1));
f_print_buffer_214(F->up, F->up->out_awaits_169);
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
F->n_arm_58 = ((rt_int)60LL);
F->n_label_59 = ((rt_int)61LL);
F->n_handler_60 = ((rt_int)62LL);
F->n_comp_61 = ((rt_int)63LL);
F->n_alt_62 = ((rt_int)64LL);
F->d_enum_63 = ((rt_int)70LL);
F->d_range_64 = ((rt_int)71LL);
F->d_float_65 = ((rt_int)72LL);
F->d_array_66 = ((rt_int)73LL);
F->d_record_67 = ((rt_int)74LL);
F->d_access_68 = ((rt_int)75LL);
F->d_derived_69 = ((rt_int)76LL);
F->d_private_70 = ((rt_int)77LL);
F->s_mark_71 = ((rt_int)80LL);
F->m_in_72 = ((rt_int)1LL);
F->m_inout_73 = ((rt_int)2LL);
F->m_out_74 = ((rt_int)3LL);
F->t_int_75 = ((rt_int)1LL);
F->t_bool_76 = ((rt_int)2LL);
F->t_float_77 = ((rt_int)3LL);
F->t_enum_78 = ((rt_int)4LL);
F->t_string_79 = ((rt_int)5LL);
F->t_array_80 = ((rt_int)6LL);
F->t_record_81 = ((rt_int)7LL);
F->t_ptr_82 = ((rt_int)8LL);
F->t_void_83 = ((rt_int)9LL);
F->t_nil_84 = ((rt_int)10LL);
F->t_char_85 = ((rt_int)11LL);
F->t_univ_86 = ((rt_int)12LL);
F->t_act_87 = ((rt_int)13LL);
F->t_tdecl_88 = ((rt_int)14LL);
F->t_entry_89 = ((rt_int)15LL);
F->y_var_90 = ((rt_int)1LL);
F->y_const_91 = ((rt_int)2LL);
F->y_func_92 = ((rt_int)3LL);
F->y_proc_93 = ((rt_int)4LL);
F->y_type_94 = ((rt_int)5LL);
F->y_exc_95 = ((rt_int)6LL);
F->y_enumlit_96 = ((rt_int)7LL);
F->y_package_97 = ((rt_int)8LL);
F->y_task_98 = ((rt_int)9LL);
F->y_entry_99 = ((rt_int)10LL);
F->y_generic_100 = ((rt_int)11LL);
F->toks_105.lo = ((rt_int)1LL); F->toks_105.hi = ((rt_int)1000000LL); F->toks_105.lo2 = 1; F->toks_105.hi2 = 1;
F->toks_105.p = rt_alloc(sizeof(P103) * (size_t)RT_CNT(F->toks_105));
F->ntoks_106 = ((rt_int)0LL);
F->tpos_107 = ((rt_int)1LL);
F->src_line_108 = ((rt_int)0LL);
F->table_112.lo = ((rt_int)0LL); F->table_112.hi = ((rt_int)4092LL); F->table_112.lo2 = 1; F->table_112.hi2 = 1;
F->table_112.p = rt_alloc(sizeof(P110) * (size_t)RT_CNT(F->table_112));
F->depth_113 = ((rt_int)0LL);
F->scope_stack_114 = NULL;
F->all_types_117 = NULL;
F->serial_118 = ((rt_int)0LL);
F->out_types_121 = NULL;
F->out_frames_122 = NULL;
F->out_helpers_123 = NULL;
F->out_protos_124 = NULL;
F->out_globals_125 = NULL;
F->out_funcs_126 = NULL;
F->out_init_127 = NULL;
F->out_excs_128 = NULL;
F->code_129 = NULL;
F->fields_buf_130 = NULL;
F->in_func_131 = 0;
F->cur_level_132 = ((rt_int)0LL);
F->st_field_134 = NULL;
F->func_sym_135 = NULL;
F->exits_138 = NULL;
F->generic_contexts_141 = NULL;
F->accept_exits_142 = NULL;
F->frames_143 = ((rt_int)0LL);
F->handlers_146 = NULL;
F->cleanups_147 = NULL;
F->trial_148 = ((rt_int)0LL);
F->ty_int_149 = NULL;
F->ty_bool_150 = NULL;
F->ty_float_151 = NULL;
F->ty_char_152 = NULL;
F->ty_string_153 = NULL;
F->ty_void_154 = NULL;
F->ty_nil_155 = NULL;
F->ty_univ_156 = NULL;
F->ty_act_157 = NULL;
F->ty_tdecl_158 = NULL;
F->ty_entry_159 = NULL;
F->cur_task_160 = NULL;
F->accept_depth_161 = ((rt_int)0LL);
F->famarg_done_162 = 0;
F->fam_ix_165 = NULL;
F->call_task_ix_166 = NULL;
F->saw_interface_167 = 0;
F->defer_entry_structs_168 = 0;
F->out_awaits_169 = NULL;
F->no_cons_172 = NULL;
F->units_173 = NULL;
F->pkg_stack_174 = NULL;
F->cur_pkg_175 = NULL;
F->prefix_hint_176 = NULL;
F->call_want_177 = NULL;
F->pure_sym_178 = NULL;
F->pure_depth_179 = ((rt_int)0LL);
F->vrp_ok_180 = 0;
F->in_lv_path_181 = 0;
F->last_deref_182 = 0;
F->main_name_183 = NULL;
F->out_types_121 = f_new_buffer_207(F);
F->out_frames_122 = f_new_buffer_207(F);
F->out_helpers_123 = f_new_buffer_207(F);
F->out_protos_124 = f_new_buffer_207(F);
F->out_globals_125 = f_new_buffer_207(F);
F->out_funcs_126 = f_new_buffer_207(F);
F->out_init_127 = f_new_buffer_207(F);
F->out_excs_128 = f_new_buffer_207(F);
F->code_129 = F->out_init_127;
F->no_cons_172 = f_new_cons_357(F);
F->ty_int_149 = f_new_typ_356(F, ((rt_int)1LL));
F->ty_bool_150 = f_new_typ_356(F, ((rt_int)2LL));
F->ty_float_151 = f_new_typ_356(F, ((rt_int)3LL));
F->ty_char_152 = f_new_typ_356(F, ((rt_int)11LL));
F->ty_string_153 = f_new_typ_356(F, ((rt_int)5LL));
F->ty_void_154 = f_new_typ_356(F, ((rt_int)9LL));
F->ty_nil_155 = f_new_typ_356(F, ((rt_int)10LL));
F->ty_act_157 = f_new_typ_356(F, ((rt_int)13LL));
F->ty_tdecl_158 = f_new_typ_356(F, ((rt_int)14LL));
F->ty_entry_159 = f_new_typ_356(F, ((rt_int)15LL));
F->out_awaits_169 = f_new_buffer_207(F);
f_predefine_832(F);
f_read_source_228(F);
f_compilation_326(F, &F->units_173);
if ((F->units_173 == NULL)) {
f_fail_206(F, ((rt_int)1LL), rt_str("the compilation is empty", 24));
}
f_translate_834(F, F->units_173);
f_print_program_835(F);
ret_:

  return;
}

static void as_R1082(R1082 *d, R1082 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
  d->dflt_ = s.dflt_;
}
static R1082 cp_R1082(R1082 s) {
  R1082 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  d.dflt_ = s.dflt_;
  return d;
}
static int eq_R1082(R1082 a, R1082 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_);
}
static void as_R1071(R1071 *d, R1071 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1071 cp_R1071(R1071 s) {
  R1071 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1071(R1071 a, R1071 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
}
static void as_R171(R171 *d, R171 s) {
  d->lo_ = s.lo_;
  d->hi_ = s.hi_;
  d->slen_ = s.slen_;
  d->mlo_ = s.mlo_;
  d->mhi_ = s.mhi_;
  d->hasm_ = s.hasm_;
  d->lo2_ = s.lo2_;
  d->hi2_ = s.hi2_;
}
static R171 cp_R171(R171 s) {
  R171 d = s;
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
static int eq_R171(R171 a, R171 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_);
}
static void as_R164(R164 *d, R164 s) {
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
static R164 cp_R164(R164 s) {
  R164 d = s;
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
static int eq_R164(R164 a, R164 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R145(R145 *d, R145 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R145 cp_R145(R145 s) {
  R145 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R145(R145 a, R145 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R140(R140 *d, R140 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R140 cp_R140(R140 s) {
  R140 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R140(R140 a, R140 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R137(R137 *d, R137 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R137 cp_R137(R137 s) {
  R137 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R137(R137 a, R137 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R120(R120 *d, R120 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R120 cp_R120(R120 s) {
  R120 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R120(R120 a, R120 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R116(R116 *d, R116 s) {
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
static R116 cp_R116(R116 s) {
  R116 d = s;
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
static int eq_R116(R116 a, R116 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_);
}
static void as_R111(R111 *d, R111 s) {
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
static R111 cp_R111(R111 s) {
  R111 d = s;
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
static int eq_R111(R111 a, R111 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_);
}
static void as_A109(A109 *d, A109 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A109 cp_A109(A109 s) {
  A109 d = s; d.p = rt_alloc(sizeof(P110) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A109(A109 a, A109 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R104(R104 *d, R104 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R104 cp_R104(R104 s) {
  R104 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R104(R104 a, R104 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A102(A102 *d, A102 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A102 cp_A102(A102 s) {
  A102 d = s; d.p = rt_alloc(sizeof(P103) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A102(A102 a, A102 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(1);
  ex_compile_error_101 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
