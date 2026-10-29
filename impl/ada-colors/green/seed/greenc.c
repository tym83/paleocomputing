#include "paleo.h"
#include <math.h>
typedef struct R106 R106;
typedef struct R106 *P105;
typedef struct A104 A104;
struct A104 { rt_int lo, hi, lo2, hi2; P105 *p; };
typedef struct R113 R113;
typedef struct R113 *P112;
typedef struct A111 A111;
struct A111 { rt_int lo, hi, lo2, hi2; P112 *p; };
typedef struct R118 R118;
typedef struct R118 *P117;
typedef struct R122 R122;
typedef struct R122 *P121;
typedef rstr *P135;
typedef struct R139 R139;
typedef struct R139 *P138;
typedef struct R142 R142;
typedef struct R142 *P141;
typedef struct R147 R147;
typedef struct R147 *P146;
typedef struct R170 R170;
typedef struct R170 *P169;
typedef struct R174 R174;
typedef struct R174 *P173;
struct R122 { int dummy_; P146 head_; P146 tail_; };
struct R147 { int dummy_; P135 s_; P146 next_; };
struct R106 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P135 s_; };
struct R170 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P135 name_; P135 tag_; P169 a_; P169 b_; P169 c_; P169 d_; P169 e_; P169 next_; P135 formal_; };
typedef struct R1195 R1195;
typedef struct R1195 *P1194;
struct R113 { int dummy_; rt_int kind_; P135 name_; P117 t_; P173 c_; P135 access_path_; P135 cname_; int ro_; rt_int mvalue_; int hasmv_; P169 decl_; P1194 params_; P117 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P112 members_; P112 mnext_; P112 chain_; P112 stack_; };
typedef struct R1206 R1206;
typedef struct R1206 *P1205;
struct R118 { int dummy_; rt_int kind_; P135 name_; P169 lits_; P117 elem_; P117 idx_; P173 elemcons_; P173 tcons_; P1205 fields_; P117 target_; P169 decl_; P135 cname_; int forward_; int defined_; int priv_; P117 next_; P117 idx2_; P135 littab_; P117 parent_; rt_int ndigits_; P135 fdelta_; P135 fsmall_; rt_int dims_; int is_restricted_; };
struct R174 { int dummy_; P135 lo_; P135 hi_; P135 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P135 lo2_; P135 hi2_; P135 acc_; };
struct R1195 { int dummy_; P135 name_; rt_int mode_; P117 t_; P173 c_; P135 cfield_; P169 dflt_; P1194 next_; };
struct R1206 { int dummy_; P135 name_; P117 t_; P173 c_; P1205 next_; P169 dflt_; };
struct R139 { int dummy_; P135 match_; P135 label_; rt_int depth_; int is_loop_; P138 next_; };
struct R142 { int dummy_; P169 body_node_; P112 visible_; P141 next_; };
struct f_mk_201fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_200;
 P135 result_;
};
struct f_new_name_204fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_202;
 P135 *res_203;
};
struct f_is_letter_206fr { int dummy;
 struct f_greenc_1fr *up;
 int c_205;
 int result_;
};
struct f_is_digit_208fr { int dummy;
 struct f_greenc_1fr *up;
 int c_207;
 int result_;
};
struct f_upper_210fr { int dummy;
 struct f_greenc_1fr *up;
 int c_209;
 int result_;
};
struct f_lower_s_212fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_211;
 rstr result_;
 rstr r_934;
 rt_int i_936;
};
struct f_upper_s_214fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_213;
 rstr result_;
 rstr r_940;
 rt_int i_942;
};
struct f_is_operator_216fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_215;
 int result_;
};
struct f_c_field_218fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_217;
 rstr result_;
};
struct f_q_219fr { int dummy;
 struct f_greenc_1fr *up;
 rstr result_;
};
struct f_fail_222fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_220;
 rstr msg_221;
};
struct f_new_buffer_223fr { int dummy;
 struct f_greenc_1fr *up;
 P121 result_;
};
struct f_put_to_226fr { int dummy;
 struct f_greenc_1fr *up;
 P121 b_224;
 rstr s_225;
 P146 l_948;
};
struct f_emit_228fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_227;
};
struct f_print_buffer_230fr { int dummy;
 struct f_greenc_1fr *up;
 P121 b_229;
 P146 l_951;
};
struct f_splice_233fr { int dummy;
 struct f_greenc_1fr *up;
 P121 a_231;
 P121 b_232;
};
struct f_is_reserved_235fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_234;
 int result_;
};
struct f_add_token_239fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_236;
 rstr s_237;
 rt_int ival_238;
};
struct f_digit_value_241fr { int dummy;
 struct f_greenc_1fr *up;
 int c_240;
 rt_int result_;
};
struct f_digit_in_244fr { int dummy;
 struct f_greenc_1fr *up;
 int c_242;
 rt_int base_243;
 rt_int result_;
 rt_int d_956;
};
struct f_accumulate_248fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_245;
 rt_int base_246;
 rt_int d_247;
};
struct f_lex_line_250fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_249;
 rt_int i_957;
 rt_int j_958;
 rt_int n_959;
 int c_960;
 int quote_961;
 rt_int v_962;
 rt_int d_963;
 rstr buf_964;
 rt_int bl_965;
 rt_int base_970;
 rstr two_975;
};
struct f_exponent_255fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_251;
 rt_int *j_252;
 rstr *buf_253;
 rt_int *bl_254;
};
struct f_read_file_text_258fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_256;
 P135 *contents_257;
};
struct f_check_include_259fr { int dummy;
 struct f_greenc_1fr *up;
 P135 t_977;
 rt_int saved_line_978;
 rt_int from_979;
 rt_int k_981;
};
struct f_include_line_263fr { int dummy;
 struct f_greenc_1fr *up;
 rstr t_260;
 rt_int from_261;
 rt_int to_262;
 rstr l_985;
 rt_int k_987;
};
struct f_read_source_264fr { int dummy;
 struct f_greenc_1fr *up;
 rstr buf_991;
 rt_int bl_992;
 int c_993;
};
struct f_nn_267fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_265;
 rt_int line_266;
 P169 result_;
};
struct f_append_271fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *head_268;
 P169 *tail_269;
 P169 x_270;
};
struct f_list_len_273fr { int dummy;
 struct f_greenc_1fr *up;
 P169 l_272;
 rt_int result_;
 rt_int n_1000;
 P169 p_1001;
};
struct f_cur_line_274fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_276fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_275;
 int result_;
};
struct f_at_op_278fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_277;
 int result_;
};
struct f_at_kind_280fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_279;
 int result_;
};
struct f_kind_at_282fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_281;
 rt_int result_;
};
struct f_text_at_284fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_283;
 rstr result_;
};
struct f_perror_286fr { int dummy;
 struct f_greenc_1fr *up;
 rstr msg_285;
};
struct f_skip_287fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_289fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_288;
};
struct f_expect_op_291fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_290;
};
struct f_expect_id_293fr { int dummy;
 struct f_greenc_1fr *up;
 P135 *res_292;
};
struct f_name_node_295fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_294;
 P169 x_1003;
};
struct f_id_list_297fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_296;
 P169 head_1004;
 P169 tail_1005;
 P169 x_1006;
};
struct f_binop_302fr { int dummy;
 struct f_greenc_1fr *up;
 P135 op_298;
 P169 l_299;
 P169 r_300;
 rt_int line_301;
 P169 result_;
 P169 x_1008;
};
struct f_expr_304fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_303;
 P169 l_1009;
 P169 r_1010;
 P135 op_1011;
 rt_int line_1012;
};
struct f_is_rel_306fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_305;
 int result_;
};
struct f_relation_308fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_307;
 P169 l_1014;
 P169 r_1015;
 P169 lo_1016;
 P169 hi_1017;
 P169 t_1018;
 P135 op_1019;
 rt_int line_1020;
 int neg_1021;
};
struct f_simple_expr_310fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_309;
 P169 l_1022;
 P169 r_1023;
 P135 op_1024;
 rt_int line_1025;
};
struct f_term_312fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_311;
 P169 l_1027;
 P169 r_1028;
 P135 op_1029;
 rt_int line_1030;
};
struct f_factor_314fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_313;
 P169 l_1032;
 P169 r_1033;
 P135 op_1034;
 rt_int line_1035;
};
struct f_primary_316fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_315;
 P169 x_1036;
 rt_int line_1037;
};
struct f_agg_or_paren_318fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_317;
 rt_int line_1038;
 P169 items_1039;
 P169 itail_1040;
 P169 it_1041;
 P169 first_1042;
 P169 keys_1043;
 P169 ktail_1044;
 P169 lab_1045;
 P169 x_1046;
 int more_1047;
};
struct f_name_p_320fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_319;
 P169 p_1050;
 P169 x_1051;
 P169 args_1052;
 P169 atail_1053;
 P169 lo_1054;
 P169 r_1055;
 rt_int line_1056;
 int more_1057;
 P135 formal_1061;
 rt_int mark_1062;
};
struct f_subtype_ind_322fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_321;
 P169 x_1063;
 P169 r_1064;
 P169 args_1065;
 P169 atail_1066;
 P169 lo_1067;
 rt_int line_1068;
 int more_1069;
};
struct f_type_spec_324fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_323;
 P169 x_1072;
};
struct f_type_def_326fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_325;
 P169 x_1073;
 P169 lits_1074;
 P169 ltail_1075;
 P169 l_1076;
 P169 idx_1077;
 P169 itail_1078;
 P169 r_1079;
 P169 comps_1080;
 P169 ctail_1081;
 P169 names_1082;
 P169 st_1083;
 P169 def_1084;
 P169 cm_1085;
 rt_int line_1086;
 int more_1087;
};
struct f_pragma_p_328fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_327;
 P169 x_1092;
 P169 a_1093;
 P169 head_1094;
 P169 tail_1095;
};
struct f_check_pragma_330fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_329;
 rstr p_1097;
 rt_int n_1098;
 P169 a_1099;
};
struct f_skip_visibility_331fr { int dummy;
 struct f_greenc_1fr *up;
 P169 names_1101;
};
struct f_skip_representation_332fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_334fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_333;
 P169 head_1105;
 P169 tail_1106;
 P169 x_1107;
 P169 names_1108;
};
struct f_object_decl_336fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_335;
 P169 head_1110;
 P169 tail_1111;
 P169 names_1112;
 P169 st_1113;
 P169 init_1114;
 P169 x_1115;
 rt_int line_1116;
 int is_const_1117;
};
struct f_type_decl_338fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_337;
 P169 x_1120;
 rt_int line_1121;
};
struct f_formal_part_340fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_339;
 P169 head_1122;
 P169 tail_1123;
 P169 names_1124;
 P169 st_1125;
 P169 def_1126;
 P169 p_1127;
 rt_int mode_1128;
 int more_1129;
};
struct f_designator_342fr { int dummy;
 struct f_greenc_1fr *up;
 P135 *res_341;
};
struct f_subprogram_344fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_343;
 P169 x_1132;
 rt_int line_1133;
 int is_proc_1134;
};
struct f_body_part_346fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_345;
};
struct f_parse_handlers_348fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_347;
 P169 head_1135;
 P169 tail_1136;
 P169 h_1137;
 P169 names_1138;
 P169 ntail_1139;
 P169 n_1140;
};
struct f_package_p_350fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_349;
 P169 x_1144;
 rt_int line_1145;
};
struct f_at_statements_end_351fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_353fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_352;
 P169 head_1146;
 P169 tail_1147;
 P169 x_1148;
};
struct f_statement_355fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_354;
 P169 x_1150;
 P169 t_1151;
 rt_int line_1152;
 P135 label_1153;
};
struct f_task_statement_357fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_356;
};
struct f_if_stmt_359fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_358;
 P169 x_1155;
 P169 arm_1156;
 P169 head_1157;
 P169 tail_1158;
 int go_1159;
};
struct f_case_stmt_361fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_360;
 P169 x_1161;
 P169 arm_1162;
 P169 head_1163;
 P169 tail_1164;
 P169 labs_1165;
 P169 ltail_1166;
 P169 l_1167;
 int others_arm_1168;
};
struct f_loop_stmt_363fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_362;
 P169 x_1171;
 P169 r_1172;
 rt_int line_1173;
};
struct f_compilation_365fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_364;
 P169 head_1174;
 P169 tail_1175;
 P169 x_1176;
};
struct f_hash_367fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_366;
 rt_int result_;
 rt_int h_1178;
 rt_int i_1180;
};
struct f_lookup_369fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_368;
 P112 result_;
 P112 y_1184;
};
struct f_same_task_372fr { int dummy;
 struct f_greenc_1fr *up;
 P112 a_370;
 P112 b_371;
 int result_;
};
struct f_lookup_entry_375fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_373;
 P112 owner_374;
 P112 result_;
 P112 y_1186;
};
struct f_lookup_decl_377fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_376;
 P112 result_;
 P112 y_1188;
};
struct f_overloadable_379fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_378;
 int result_;
};
struct f_same_382fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_380;
 P117 b_381;
 int result_;
};
struct f_root_384fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_383;
 P117 result_;
 P117 r_1190;
};
struct f_derived_from_387fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_385;
 P117 b_386;
 int result_;
 P117 r_1192;
};
struct f_is_numeric_389fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_388;
 int result_;
};
struct f_is_discrete_391fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_390;
 int result_;
};
struct f_same_signature_394fr { int dummy;
 struct f_greenc_1fr *up;
 P1194 a_392;
 P1194 b_393;
 int result_;
 P1194 x_1196;
 P1194 y_1197;
};
struct f_define_397fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_395;
 rt_int line_396;
 rt_int h_1199;
 P112 z_1200;
};
struct f_open_scope_398fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_399fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_402fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_400;
 P135 name_401;
 P112 result_;
};
struct f_new_typ_404fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_403;
 P117 result_;
};
struct f_new_cons_405fr { int dummy;
 struct f_greenc_1fr *up;
 P173 result_;
};
struct f_kind_name_407fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_406;
 rstr result_;
};
struct f_check_type_411fr { int dummy;
 struct f_greenc_1fr *up;
 P117 got_408;
 P117 want_409;
 rt_int line_410;
};
struct f_field_count_413fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_412;
 rt_int result_;
 rt_int n_1212;
 P1205 f_1213;
};
struct f_ctype_416fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_414;
 P135 *r_415;
 P135 s_1215;
};
struct f_field_decls_419fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_417;
 P135 *r_418;
 P1205 f_1217;
 P135 s_1218;
 P135 ct_1219;
};
struct f_declare_ctype_421fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_420;
 P135 ct_1221;
 P135 s_1222;
 P117 target_1223;
};
struct f_lit_index_424fr { int dummy;
 struct f_greenc_1fr *up;
 P169 lits_422;
 rstr name_423;
 rt_int result_;
 rt_int i_1224;
 P169 l_1225;
};
struct f_manifest_428fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_425;
 rt_int *v_426;
 int *ok_427;
 rt_int a_1227;
 rt_int b_1228;
 int ok2_1229;
 P112 y_1230;
};
struct f_resolve_432fr { int dummy;
 struct f_greenc_1fr *up;
 P169 st_429;
 P117 *t_430;
 P173 *c_431;
 P112 y_1231;
 P117 dummy_1232;
 P135 code_1233;
 int ok_1234;
 P169 r_1235;
};
struct f_range_of_436fr { int dummy;
 struct f_greenc_1fr *up;
 P169 r_433;
 P117 t_434;
 P173 c_435;
 P117 dummy_1236;
 int ok_1237;
};
struct f_fresh_typ_440fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_437;
 P135 name_438;
 P117 *t_439;
 P117 ph_1238;
};
struct f_inherit_444fr { int dummy;
 struct f_greenc_1fr *up;
 P117 parent_441;
 P117 t_442;
 rt_int line_443;
 P112 s_1239;
 P112 z_1240;
 P1194 p_1241;
 P1194 q_1242;
 P1194 tail_1243;
 int uses_1244;
 P112 news_1245;
};
struct f_derive_literals_447fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_445;
 rt_int line_446;
 P169 l_1252;
 rt_int n_1253;
 P112 y_1254;
};
struct f_type_definition_452fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_448;
 P135 name_449;
 P117 *t_450;
 P173 *c_451;
 P117 dummy_1256;
 P117 it_1257;
 P173 ic_1258;
 P169 l_1259;
 P169 comp_1260;
 P1205 f_1261;
 P1205 tail_1262;
 int ok_1263;
 rt_int n_1264;
 P112 y_1265;
};
struct f_derived_type_457fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_453;
 P135 name_454;
 P117 *t_455;
 P173 *c_456;
 P117 pt_1271;
 P135 ct_1272;
 P117 ph_1273;
};
struct f_real_type_462fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_458;
 P135 name_459;
 P117 *t_460;
 P173 *c_461;
 P117 dt_1274;
 P135 dv_1275;
 rt_int n_1276;
 int ok_1277;
};
struct f_finish_ptr_464fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_463;
 P173 c_1278;
};
struct f_init_storage_468fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_465;
 P117 t_466;
 P173 c_467;
 P135 ct_1279;
 P135 i_1280;
 P135 v_1281;
 P135 x_1282;
 P117 vt_1283;
 P1205 f_1284;
};
struct f_composite_470fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_469;
 int result_;
};
struct f_assign_code_476fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_471;
 P117 t_472;
 rstr v_473;
 P173 c_474;
 P135 *r_475;
 P135 ct_1286;
};
struct f_copy_code_480fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_477;
 rstr v_478;
 P135 *r_479;
 P135 ct_1287;
};
struct f_eq_code_485fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_481;
 rstr a_482;
 rstr b_483;
 P135 *r_484;
 P135 ct_1288;
};
struct f_seen_name_488fr { int dummy;
 struct f_greenc_1fr *up;
 P146 l_486;
 rstr s_487;
 int result_;
 P146 p_1289;
};
struct f_emit_helpers_489fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_1291;
 P146 done_1292;
 P146 l_1293;
};
struct f_helper_bodies_491fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_490;
 P135 c_1297;
 P121 b_1298;
 P135 ct_1299;
 P135 x_1300;
 P135 y_1301;
 P135 conds_1302;
 P1205 f_1303;
};
struct f_storage_495fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_492;
 P117 t_493;
 P135 *access_code_494;
 P135 ct_1306;
 P135 g_1307;
};
struct f_bind_498fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_496;
 P135 access_code_497;
};
struct f_declare_subprograms_500fr { int dummy;
 struct f_greenc_1fr *up;
 P169 from_499;
 P169 e_1308;
};
struct f_declare_one_502fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_501;
 P112 y_1310;
 P112 z_1311;
};
struct f_build_subprogram_505fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_503;
 P112 *y_504;
 P169 p_1314;
 P1194 pm_1315;
 P1194 tail_1316;
 P173 rc_1317;
 rt_int k_1318;
};
struct f_decl_elements_507fr { int dummy;
 struct f_greenc_1fr *up;
 P169 decls_506;
 P169 e_1322;
 int declared_1323;
};
struct f_decl_element_509fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_508;
 P169 pd_1325;
 P112 y_1326;
 P112 z_1327;
 P117 t_1328;
 P117 vt_1329;
 P173 c_1330;
 P135 acc_1331;
 P135 v_1332;
 P135 x_1333;
 int ok_1334;
};
struct f_pragma_decl_511fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_510;
};
struct f_resolve_object_type_515fr { int dummy;
 struct f_greenc_1fr *up;
 P169 st_512;
 P117 *t_513;
 P173 *c_514;
};
struct f_other_decl_517fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_516;
};
struct f_subprogram_body_520fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_518;
 P112 y_519;
 P121 saved_code_1336;
 P121 saved_fields_1337;
 int saved_in_1338;
 P112 saved_sym_1339;
 P138 saved_exits_1340;
 rt_int saved_frames_1341;
 P146 saved_handlers_1342;
 P146 saved_cleanups_1343;
 P112 saved_pure_1344;
 P135 aw_1345;
 rt_int saved_pdepth_1346;
 P135 args_1347;
 P135 head_1348;
 P135 frame_1349;
 P135 parent_1350;
 P135 ct_1351;
 P135 x_1352;
 P1194 pm_1353;
 P112 p_1354;
};
struct f_gen_statements_522fr { int dummy;
 struct f_greenc_1fr *up;
 P169 stmts_521;
 P169 s_1357;
};
struct f_pop_frames_524fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_523;
 rt_int i_1359;
 P146 c_1360;
};
struct f_push_cleanup_526fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_525;
};
struct f_pop_cleanup_527fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_531fr { int dummy;
 struct f_greenc_1fr *up;
 P169 stmts_528;
 P169 hs_529;
 rt_int line_530;
 P135 f_1364;
 P135 x_1365;
 P169 h_1366;
 P169 n_1367;
 int first_1368;
 int has_others_1369;
 P135 conds_1370;
};
struct f_exc_id_535fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_532;
 rt_int line_533;
 P135 *r_534;
 P112 y_1375;
};
struct f_gen_statement_537fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_536;
 P117 t_1376;
 P117 vt_1377;
 P173 c_1378;
 P135 lv_1379;
 P135 v_1380;
 P135 x_1381;
 int ro_1382;
};
struct f_slice_assign_539fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_538;
 P135 lv_1384;
 P135 lo_1385;
 P135 hi_1386;
 P135 v_1387;
 P117 t_1388;
 P117 vt_1389;
 P173 c_1390;
 int ro_1391;
};
struct f_gen_call_541fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_540;
 P169 c_1392;
 P117 t_1393;
 P135 v_1394;
};
struct f_gen_if_543fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_542;
 P169 a_1395;
 int first_1396;
 P117 t_1397;
 P135 v_1398;
};
struct f_gen_case_545fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_544;
 P117 st_1400;
 P117 vt_1401;
 int first_1402;
 P169 a_1403;
 P169 lab_1404;
 P135 sel_1405;
 P135 tmp_1406;
 P135 ct_1407;
 P135 conds_1408;
 P135 v_1409;
 P135 lo_1410;
 P135 hi_1411;
};
struct f_push_exit_549fr { int dummy;
 struct f_greenc_1fr *up;
 P135 match_546;
 int is_loop_547;
 P135 *label_548;
};
struct f_gen_loop_551fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_550;
 P117 t_1416;
 P117 vt_1417;
 P173 c_1418;
 P135 label_1419;
 P135 cond_1420;
 P135 acc_1421;
 P135 lov_1422;
 P135 hiv_1423;
 P135 it_1424;
 P112 y_1425;
 P169 r_1426;
};
struct f_gen_block_553fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_552;
 P135 label_1427;
 P135 aw_1428;
};
struct f_gen_exit_555fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_554;
 P138 x_1429;
 P117 t_1430;
 P135 v_1431;
};
struct f_gen_return_557fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_556;
 P117 vt_1433;
 P135 v_1434;
};
struct f_access_of_560fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_558;
 P135 *r_559;
 P135 p_1435;
 rt_int i_1437;
};
struct f_link_to_563fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_561;
 P135 *r_562;
 rt_int i_1442;
};
struct f_c_ident_565fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_564;
 rstr result_;
};
struct f_deref_569fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_566;
 P117 t_567;
 P135 *r_568;
 P135 ct_1446;
};
struct f_is_object_571fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_570;
 int result_;
 P112 y_1447;
};
struct f_lvalue_577fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_572;
 P135 *code_out_573;
 P117 *t_574;
 P173 *c_575;
 int *ro_576;
 P112 y_1448;
 P135 base_1449;
 P117 bt_1450;
 P173 bc_1451;
};
struct f_select_on_585fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_578;
 P117 bt_579;
 P169 e_580;
 int *ro_581;
 P135 *code_out_582;
 P117 *t_583;
 P173 *c_584;
 P1205 f_1452;
 P135 d_1453;
};
struct f_index_on_594fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_586;
 P117 bt_587;
 P169 e_588;
 int *ro_589;
 int lv_590;
 P135 *code_out_591;
 P117 *t_592;
 P173 *c_593;
 P169 a_1455;
 P117 it_1456;
 P135 i_1457;
 P135 lo_1458;
 P135 hi_1459;
 P135 d_1460;
};
struct f_is_char_lit_596fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_595;
 int result_;
};
struct f_is_enum_lit_598fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_597;
 int result_;
 P112 y_1461;
};
struct f_c_string_600fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_599;
 rstr result_;
 rt_int n_1462;
 rt_int i_1464;
 rstr r_1469;
 rt_int j_1470;
 rt_int i_1472;
};
struct f_is_literal_602fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_601;
 int result_;
};
struct f_range_bounds_610fr { int dummy;
 struct f_greenc_1fr *up;
 P169 l_603;
 P169 h_604;
 P117 want_605;
 rt_int line_606;
 P117 *t_607;
 P135 *lo_608;
 P135 *hi_609;
 P117 w_1476;
 P117 t2_1477;
};
struct f_gexpr_615fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_611;
 P117 want_612;
 P117 *t_613;
 P135 *r_614;
 P112 y_1478;
 P117 bt_1479;
 P173 c_1480;
 int ro_1481;
 P135 base_1482;
 P135 a_1483;
 P169 nm_1484;
 int saved_lv_1485;
};
struct f_gexpr_1_620fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_616;
 P117 want_617;
 P117 *t_618;
 P135 *r_619;
 P112 y_1486;
 P117 bt_1487;
 P173 c_1488;
 int ro_1489;
 P135 base_1490;
 P135 a_1491;
 P169 nm_1492;
};
struct f_char_literal_625fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_621;
 P117 want_622;
 P117 *t_623;
 P135 *r_624;
 rt_int i_1494;
};
struct f_gen_name_630fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_626;
 P117 want_627;
 P117 *t_628;
 P135 *r_629;
 P112 y_1495;
 P112 z_1496;
 P169 call_1497;
};
struct f_gen_unop_635fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_631;
 P117 want_632;
 P117 *t_633;
 P135 *r_634;
 P135 a_1499;
 int done_1500;
};
struct f_short_int_637fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_636;
 int result_;
};
struct f_float_kind_639fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_638;
 rstr result_;
};
struct f_arithmetic_644fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_640;
 P117 want_641;
 P117 *t_642;
 P135 *r_643;
 rstr op_1501;
 P117 ta_1502;
 P117 tb_1503;
 P117 hint_1504;
 P135 a_1505;
 P135 b_1506;
};
struct f_fixed_operation_652fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_645;
 P117 ta_646;
 P117 tb_647;
 rstr a_648;
 rstr b_649;
 P117 *t_650;
 P135 *r_651;
 rstr op_1507;
};
struct f_gen_binop_657fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_653;
 P117 want_654;
 P117 *t_655;
 P135 *r_656;
 rstr op_1508;
 P117 ta_1509;
 P117 tb_1510;
 P117 hint_1511;
 P117 ct_1512;
 P135 a_1513;
 P135 b_1514;
 P135 x_1515;
 P135 dummy_1516;
 int done_1517;
};
struct f_conversion_662fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_658;
 P112 y_659;
 P117 *t_660;
 P135 *r_661;
 P117 aty_1518;
 P135 a_1519;
};
struct f_gen_attr_667fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_663;
 P117 want_664;
 P117 *t_665;
 P135 *r_666;
 rstr a_1520;
 P112 y_1521;
 P117 tt_1522;
 P117 aty_1523;
 P135 v_1524;
 P135 d_1525;
 P173 c_1526;
 rt_int n_1527;
 int ro_1528;
};
struct f_lit_table_670fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_668;
 P135 *r_669;
 P169 l_1529;
 P135 s_1530;
};
struct f_val_rep_676fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_671;
 P117 tt_672;
 P173 c_673;
 P117 *t_674;
 P135 *r_675;
 P117 aty_1532;
 P135 v_1533;
 P135 lt_1534;
 rt_int n_1535;
};
struct f_allocator_681fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_677;
 P117 want_678;
 P117 *t_679;
 P135 *r_680;
 P112 y_1536;
 P117 target_1537;
 P117 vt_1538;
 P135 ct_1539;
 P135 pt_1540;
 P135 cell_1541;
 P135 v_1542;
 P135 x_1543;
};
struct f_aggregate_686fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_682;
 P117 want_683;
 P117 *t_684;
 P135 *r_685;
 P169 it_1544;
 P1205 f_1545;
 P117 vt_1546;
 P135 ct_1547;
 P135 tmp_1548;
 P135 v_1549;
 P135 x_1550;
 P135 parts_1551;
 P135 et_1552;
 P135 lo_1553;
 P135 hi_1554;
 P135 key_1555;
 P135 fill_1556;
 rt_int n_1557;
 P169 lab_1558;
};
struct f_actual_for_690fr { int dummy;
 struct f_greenc_1fr *up;
 P169 args_687;
 P1194 pm_688;
 P1194 first_689;
 P169 result_;
 P169 a_1564;
 P1194 p_1565;
};
struct f_gcall_695fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_691;
 int is_stmt_692;
 P117 *t_693;
 P135 *r_694;
 P169 fn_1568;
 P169 nm_1569;
 P112 y_1570;
 P135 args_1571;
 P135 lv_1572;
 P135 v_1573;
 P135 ct_1574;
 P135 x_1575;
 P169 a_1576;
 P1194 pm_1577;
 P117 lt_1578;
 P117 vt_1579;
 P173 lc_1580;
 int ro_1581;
};
struct f_gcall_with_700fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_696;
 P112 y_697;
 P117 *t_698;
 P135 *r_699;
 P135 args_1582;
 P135 lv_1583;
 P135 v_1584;
 P135 x1_1585;
 P135 x2_1586;
 P169 a_1587;
 P1194 pm_1588;
 P117 lt_1589;
 P117 vt_1590;
 P173 lc_1591;
 int ro_1592;
};
struct f_builtin_707fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_701;
 P169 args_702;
 rt_int line_703;
 int is_stmt_704;
 P117 *t_705;
 P135 *r_706;
 P117 aty_1594;
 P117 lt_1595;
 P135 a_1596;
 P135 w_1597;
 P135 lv_1598;
 P173 lc_1599;
 int ro_1600;
};
struct f_is_package_709fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_708;
 int result_;
 P112 y_1601;
};
struct f_member_of_713fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_710;
 rstr name_711;
 rt_int line_712;
 P112 result_;
 P112 y_1602;
 P112 m_1603;
};
struct f_inside_package_715fr { int dummy;
 struct f_greenc_1fr *up;
 P169 p_714;
 int result_;
 P146 l_1605;
};
struct f_copy_sym_718fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_716;
 P112 *z_717;
};
struct f_complete_private_721fr { int dummy;
 struct f_greenc_1fr *up;
 P117 ph_719;
 P117 full_720;
 P135 n_1609;
 P169 p_1610;
};
struct f_package_spec_723fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_722;
 P112 y_1611;
 P112 m_1612;
 P112 z_1613;
 P169 saved_1614;
 P112 first_private_1615;
};
struct f_hidden_from_726fr { int dummy;
 struct f_greenc_1fr *up;
 P112 m_724;
 P112 first_private_725;
 int result_;
 P112 p_1619;
};
struct f_package_body_728fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_727;
 P112 y_1621;
 P112 m_1622;
 P112 z_1623;
 P169 saved_1624;
};
struct f_use_clause_730fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_729;
 P169 n_1630;
 P112 y_1631;
 P112 m_1632;
 P112 z_1633;
 P112 old_1634;
};
struct f_fits_735fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_731;
 P169 args_732;
 P117 want_733;
 int *ok_734;
 P1194 pm_1637;
 P169 a_1638;
 P117 t_1639;
 P173 c_1640;
 P135 v_1641;
 int ro_1642;
 P121 saved_1643;
 rt_int used_1644;
};
struct f_is_builtin_737fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_736;
 int result_;
};
struct f_resolve_overload_744fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_738;
 P169 args_739;
 int is_stmt_740;
 P117 want_741;
 rt_int line_742;
 P112 *y_743;
 P112 z_1649;
 P112 first_1650;
 rt_int n_1651;
 int ok_1652;
 rt_int pass_1654;
};
struct f_resolve_member_overload_752fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_745;
 rstr name_746;
 P169 args_747;
 int is_stmt_748;
 P117 want_749;
 rt_int line_750;
 P112 *y_751;
 P112 pk_1659;
 P112 z_1660;
 rt_int n_1661;
 int ok_1662;
 rt_int pass_1664;
};
struct f_user_operator_758fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_753;
 P117 want_754;
 P117 *t_755;
 P135 *r_756;
 int *done_757;
 P135 op_1669;
 int negate_1670;
 P112 y_1671;
 P169 call_1672;
 P169 fname_1673;
 P169 l_1674;
 P169 rt_1675;
 int ok_1676;
};
struct f_task_p_760fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_759;
 P169 x_1678;
 rt_int line_1679;
};
struct f_entry_p_762fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_761;
 P169 x_1680;
};
struct f_accept_p_764fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_763;
 P169 x_1681;
};
struct f_delay_p_766fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_765;
 P169 x_1682;
};
struct f_designators_768fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_767;
 P169 head_1683;
 P169 tail_1684;
 P169 n_1685;
};
struct f_parse_task_statement_770fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_769;
 P169 x_1687;
 P169 alt_1688;
 P169 head_1689;
 P169 tail_1690;
 rt_int line_1691;
};
struct f_path_at_774fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_771;
 rstr field_772;
 P135 *r_773;
 rt_int i_1694;
};
struct f_is_task_name_776fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_775;
 int result_;
 P112 y_1698;
};
struct f_task_of_780fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_777;
 P112 *y_778;
 P169 *ix_779;
 P169 n_1699;
};
struct f_own_index_782fr { int dummy;
 struct f_greenc_1fr *up;
 P135 *r_781;
 P112 y_1700;
};
struct f_member_787fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_783;
 rstr arr_784;
 rstr i_785;
 P135 *r_786;
 P135 lo_1701;
 P135 hi_1702;
};
struct f_act_path_790fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_788;
 P135 *r_789;
 P135 i_1703;
};
struct f_act_path_i_794fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_791;
 rstr i_792;
 P135 *r_793;
};
struct f_entry_path_798fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_795;
 rstr i_796;
 P135 *r_797;
 P135 own_1704;
};
struct f_declare_slot_801fr { int dummy;
 struct f_greenc_1fr *up;
 rstr ctype_name_799;
 rstr field_800;
};
struct f_task_decl_803fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_802;
};
struct f_family_arg_struct_804fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_808fr { int dummy;
 struct f_greenc_1fr *up;
 P169 b_805;
 P112 y_806;
 P135 x_807;
 P135 lo_1705;
 P135 hi_1706;
 P135 v_1707;
 P117 vt_1708;
 P173 c_1709;
};
struct f_entry_family_slot_813fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_809;
 rstr base_810;
 rstr i_811;
 P135 *r_812;
 P135 lo_1710;
 P135 hi_1711;
};
struct f_task_spec_815fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_814;
 int has_procs_1712;
 int saved_defer_1713;
 P135 fields_1714;
 P135 ct_1715;
 P1194 pm_1716;
 P135 fp_1717;
 P135 flo_1718;
 P135 fhi_1719;
 P112 y_1720;
 P112 m_1721;
 P112 z_1722;
 P112 saved_1723;
 P135 d_1724;
 P135 v_1725;
 P135 p_1726;
 P135 p2_1727;
 P117 vt_1728;
 P169 r_1729;
};
struct f_entry_decl_817fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_816;
 P112 y_1733;
 P169 p_1734;
 P1194 pm_1735;
 P1194 tail_1736;
 P135 fields_1737;
 P135 ct_1738;
 P135 x_1739;
 P135 lo_1740;
 P135 hi_1741;
};
struct f_task_body_819fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_818;
 P112 y_1745;
 P112 b_1746;
 P112 m_1747;
 P112 z_1748;
 P135 upp_1749;
 P112 saved_1750;
};
struct f_task_awaits_822fr { int dummy;
 struct f_greenc_1fr *up;
 P169 decls_820;
 P135 *aw_821;
 P169 e_1754;
 P112 y_1755;
 P135 p_1756;
};
struct f_task_failure_824fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_823;
 P112 y_1758;
 P135 a_1759;
 P135 i_1760;
 P117 it_1761;
};
struct f_entry_sym_828fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_825;
 P112 *y_826;
 P169 *ix_827;
 P112 t_1762;
};
struct f_other_call_833fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_829;
 int is_stmt_830;
 P117 *t_831;
 P135 *r_832;
 P112 y_1763;
 P1194 pm_1764;
 P169 a_1765;
 P135 parts_1766;
 P135 v_1767;
 P135 lv_1768;
 P135 ent_1769;
 P135 act_1770;
 P135 i_1771;
 P117 vt_1772;
 P117 lt_1773;
 P173 lc_1774;
 int ro_1775;
 P169 ix_1776;
 P169 fix_1777;
 P169 args_node_1778;
};
struct f_other_attr_838fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_834;
 P112 y_835;
 P117 *t_836;
 P135 *r_837;
 rstr a_1780;
 P135 p_1781;
};
struct f_member_attr_842fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_839;
 P117 *t_840;
 P135 *r_841;
 P112 y_1782;
 P169 ix_1783;
 P135 i_1784;
 P135 p_1785;
 P117 vt_1786;
};
struct f_task_builtin_848fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_843;
 P169 args_844;
 rt_int line_845;
 P117 *t_846;
 P135 *r_847;
 P117 vt_1787;
 P135 v_1788;
};
struct f_gen_accept_850fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_849;
 P112 y_1789;
 P138 saved_ax_1790;
 P135 ent_1791;
 P135 ep_1792;
 P135 xf_1793;
 P135 x_1794;
 P1194 pm_1795;
 P169 f_1796;
 P112 p_1797;
};
struct f_member_slot_854fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_851;
 P169 s_852;
 P135 *ent_853;
 P117 vt_1799;
 P135 v_1800;
};
struct f_gen_delay_ticks_857fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_855;
 P135 *r_856;
 P117 vt_1801;
 P135 v_1802;
};
struct f_gen_select_859fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_858;
 P169 alt_1803;
 rt_int n_1804;
 rt_int i_1805;
 int has_delay_1806;
 int has_accept_1807;
 P135 al_1808;
 P135 w_1809;
 P135 g_1810;
 P135 ent_1811;
 P135 ticks_1812;
 P117 vt_1813;
 P112 y_1814;
};
struct f_family_range_864fr { int dummy;
 struct f_greenc_1fr *up;
 P112 y_860;
 P169 ix_861;
 P135 *lo_862;
 P135 *hi_863;
 P117 vt_1818;
};
struct f_task_statement_gen_866fr { int dummy;
 struct f_greenc_1fr *up;
 P169 s_865;
 P169 n_1819;
 P169 ix_1820;
 P112 y_1821;
 P135 a_1822;
 P135 d_1823;
 P135 l_1824;
 P135 ticks_1825;
 P135 lo_1826;
 P135 hi_1827;
};
struct f_root_name_868fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_867;
 P169 result_;
};
struct f_check_pure_target_871fr { int dummy;
 struct f_greenc_1fr *up;
 P169 target_869;
 rt_int line_870;
 P169 n_1831;
 P112 y_1832;
};
struct f_assigns_nonlocal_874fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_872;
 rstr name_873;
 int result_;
};
struct f_declares_877fr { int dummy;
 struct f_greenc_1fr *up;
 P169 d_875;
 rstr name_876;
 int result_;
 P169 p_1833;
 P169 e_1834;
};
struct f_scan_handlers_881fr { int dummy;
 struct f_greenc_1fr *up;
 P169 h_878;
 P169 d_879;
 rstr name_880;
 int result_;
 P169 p_1837;
};
struct f_scan_assigns_885fr { int dummy;
 struct f_greenc_1fr *up;
 P169 stmts_882;
 P169 d_883;
 rstr name_884;
 int result_;
 P169 s_1839;
 P169 a_1840;
 P169 r_1841;
};
struct f_check_call_rules_888fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_886;
 P112 y_887;
 P112 z_1845;
 P112 s_1846;
};
struct f_generic_p_890fr { int dummy;
 struct f_greenc_1fr *up;
 P169 *res_889;
 P169 x_1848;
 P169 p_1849;
 P169 head_1850;
 P169 tail_1851;
 P169 names_1852;
 P169 st_1853;
 P169 def_1854;
 P169 sub_1855;
 P135 def_name_text_1856;
 int more_1857;
};
struct f_instantiation_893fr { int dummy;
 struct f_greenc_1fr *up;
 P169 x_891;
 P169 *res_892;
 P169 i_1860;
 P169 head_1861;
 P169 tail_1862;
 P169 a_1863;
 P135 formal_1864;
 rt_int mark_1865;
 int more_1866;
};
struct f_generic_decl_895fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_894;
 P112 y_1868;
};
struct f_is_generic_name_897fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_896;
 int result_;
 P112 y_1869;
};
struct f_attach_generic_body_899fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_898;
 P112 y_1870;
};
struct f_restore_generic_context_902fr { int dummy;
 struct f_greenc_1fr *up;
 P169 body_node_900;
 rt_int line_901;
 P141 ctx_1873;
 P112 m_1874;
 P112 z_1875;
 int seen_1876;
};
struct f_gactual_906fr { int dummy;
 struct f_greenc_1fr *up;
 P169 args_903;
 rt_int nth_904;
 rstr name_905;
 P169 result_;
 P169 a_1880;
 rt_int i_1881;
};
struct f_copy_node_910fr { int dummy;
 struct f_greenc_1fr *up;
 P169 n_907;
 P135 name_908;
 P169 *r_909;
};
struct f_instantiate_912fr { int dummy;
 struct f_greenc_1fr *up;
 P169 e_911;
 P112 g_1883;
 P169 gd_1884;
 P169 pat_1885;
 P169 f_1886;
 P169 a_1887;
 P169 cn_1888;
 P112 y_1889;
 P112 z_1890;
 P112 fs_1891;
 rt_int nth_1892;
 P117 t_1893;
 P117 vt_1894;
 P173 c_1895;
 P135 v_1896;
 P135 acc_1897;
 P135 x_1898;
 int ok_1899;
};
struct f_predef_type_917fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_913;
 P117 t_914;
 rstr lo_915;
 rstr hi_916;
 P112 y_1902;
};
struct f_predef_const_921fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_918;
 P117 t_919;
 rstr code_text_920;
 P112 y_1903;
};
struct f_predef_exc_923fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_922;
 P112 y_1904;
};
struct f_predef_lit_927fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_924;
 P117 t_925;
 rt_int v_926;
 P112 y_1905;
};
struct f_predefine_928fr { int dummy;
 struct f_greenc_1fr *up;
 rstr control_1906;
 rt_int start_1907;
 rt_int code_no_1908;
 rt_int i_1910;
 rt_int i_1915;
};
struct f_translate_930fr { int dummy;
 struct f_greenc_1fr *up;
 P169 u_929;
 P169 p_1919;
 P112 y_1920;
};
struct f_print_program_931fr { int dummy;
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
 rt_int t_fixed_91;
 rt_int y_var_92;
 rt_int y_const_93;
 rt_int y_func_94;
 rt_int y_proc_95;
 rt_int y_type_96;
 rt_int y_exc_97;
 rt_int y_enumlit_98;
 rt_int y_package_99;
 rt_int y_task_100;
 rt_int y_entry_101;
 rt_int y_generic_102;
 A104 toks_107;
 rt_int ntoks_108;
 rt_int tpos_109;
 rt_int src_line_110;
 A111 table_114;
 rt_int depth_115;
 P112 scope_stack_116;
 P117 all_types_119;
 rt_int serial_120;
 P121 out_types_123;
 P121 out_frames_124;
 P121 out_helpers_125;
 P121 out_protos_126;
 P121 out_globals_127;
 P121 out_funcs_128;
 P121 out_init_129;
 P121 out_excs_130;
 P121 code_131;
 P121 fields_buf_132;
 int in_func_133;
 rt_int cur_level_134;
 P135 st_field_136;
 P112 func_sym_137;
 P138 exits_140;
 P141 generic_contexts_143;
 P138 accept_exits_144;
 rt_int frames_145;
 P146 handlers_148;
 P146 cleanups_149;
 rt_int trial_150;
 P117 ty_int_151;
 P117 ty_bool_152;
 P117 ty_float_153;
 P117 ty_char_154;
 P117 ty_string_155;
 P117 ty_void_156;
 P117 ty_nil_157;
 P117 ty_univ_158;
 P117 ty_act_159;
 P117 ty_tdecl_160;
 P117 ty_entry_161;
 P117 ty_short_162;
 P117 ty_long_163;
 P117 ty_sfloat_164;
 P117 ty_lfloat_165;
 P117 ty_time_166;
 P117 ty_ufixed_167;
 P117 completing_168;
 P169 anon_node_171;
 P117 anon_typ_172;
 P173 anon_cons_175;
 P112 cur_task_176;
 rt_int accept_depth_177;
 int famarg_done_178;
 P169 fam_ix_179;
 P169 call_task_ix_180;
 int saw_interface_181;
 int defer_entry_structs_182;
 P121 out_awaits_183;
 P173 no_cons_184;
 P169 units_185;
 P146 pkg_stack_186;
 P169 cur_pkg_187;
 P135 prefix_hint_188;
 P117 call_want_189;
 P112 pure_sym_190;
 rt_int pure_depth_191;
 int vrp_ok_192;
 int in_lv_path_193;
 int last_deref_194;
 P135 main_name_195;
 P135 conf_system_196;
 rt_int conf_storage_unit_197;
 rt_int conf_memory_size_198;
 P135 conf_optimize_199;
};
static void as_R1206(R1206 *d, R1206 s);
static R1206 cp_R1206(R1206 s);
static int eq_R1206(R1206 a, R1206 b);
static void as_R1195(R1195 *d, R1195 s);
static R1195 cp_R1195(R1195 s);
static int eq_R1195(R1195 a, R1195 b);
static void as_R174(R174 *d, R174 s);
static R174 cp_R174(R174 s);
static int eq_R174(R174 a, R174 b);
static void as_R170(R170 *d, R170 s);
static R170 cp_R170(R170 s);
static int eq_R170(R170 a, R170 b);
static void as_R147(R147 *d, R147 s);
static R147 cp_R147(R147 s);
static int eq_R147(R147 a, R147 b);
static void as_R142(R142 *d, R142 s);
static R142 cp_R142(R142 s);
static int eq_R142(R142 a, R142 b);
static void as_R139(R139 *d, R139 s);
static R139 cp_R139(R139 s);
static int eq_R139(R139 a, R139 b);
static void as_R122(R122 *d, R122 s);
static R122 cp_R122(R122 s);
static int eq_R122(R122 a, R122 b);
static void as_R118(R118 *d, R118 s);
static R118 cp_R118(R118 s);
static int eq_R118(R118 a, R118 b);
static void as_R113(R113 *d, R113 s);
static R113 cp_R113(R113 s);
static int eq_R113(R113 a, R113 b);
static void as_A111(A111 *d, A111 s);
static A111 cp_A111(A111 s);
static int eq_A111(A111 a, A111 b);
static void as_R106(R106 *d, R106 s);
static R106 cp_R106(R106 s);
static int eq_R106(R106 a, R106 b);
static void as_A104(A104 *d, A104 s);
static A104 cp_A104(A104 s);
static int eq_A104(A104 a, A104 b);
static P135 f_mk_201(struct f_greenc_1fr *up_, rstr s_200);
static void f_new_name_204(struct f_greenc_1fr *up_, rstr base_202, P135 *res_203);
static int f_is_letter_206(struct f_greenc_1fr *up_, int c_205);
static int f_is_digit_208(struct f_greenc_1fr *up_, int c_207);
static int f_upper_210(struct f_greenc_1fr *up_, int c_209);
static rstr f_lower_s_212(struct f_greenc_1fr *up_, rstr s_211);
static rstr f_upper_s_214(struct f_greenc_1fr *up_, rstr s_213);
static int f_is_operator_216(struct f_greenc_1fr *up_, rstr s_215);
static rstr f_c_field_218(struct f_greenc_1fr *up_, rstr s_217);
static rstr f_q_219(struct f_greenc_1fr *up_);
static void f_fail_222(struct f_greenc_1fr *up_, rt_int line_220, rstr msg_221);
static P121 f_new_buffer_223(struct f_greenc_1fr *up_);
static void f_put_to_226(struct f_greenc_1fr *up_, P121 b_224, rstr s_225);
static void f_emit_228(struct f_greenc_1fr *up_, rstr s_227);
static void f_print_buffer_230(struct f_greenc_1fr *up_, P121 b_229);
static void f_splice_233(struct f_greenc_1fr *up_, P121 a_231, P121 b_232);
static int f_is_reserved_235(struct f_greenc_1fr *up_, rstr w_234);
static void f_add_token_239(struct f_greenc_1fr *up_, rt_int kind_236, rstr s_237, rt_int ival_238);
static rt_int f_digit_value_241(struct f_greenc_1fr *up_, int c_240);
static rt_int f_digit_in_244(struct f_greenc_1fr *up_, int c_242, rt_int base_243);
static void f_accumulate_248(struct f_greenc_1fr *up_, rt_int *v_245, rt_int base_246, rt_int d_247);
static void f_lex_line_250(struct f_greenc_1fr *up_, rstr line_249);
static void f_exponent_255(struct f_greenc_1fr *up_, rstr line_251, rt_int *j_252, rstr *buf_253, rt_int *bl_254);
static void f_read_file_text_258(struct f_greenc_1fr *up_, rstr name_256, P135 *contents_257);
static void f_check_include_259(struct f_greenc_1fr *up_);
static void f_include_line_263(struct f_greenc_1fr *up_, rstr t_260, rt_int from_261, rt_int to_262);
static void f_read_source_264(struct f_greenc_1fr *up_);
static P169 f_nn_267(struct f_greenc_1fr *up_, rt_int kind_265, rt_int line_266);
static void f_append_271(struct f_greenc_1fr *up_, P169 *head_268, P169 *tail_269, P169 x_270);
static rt_int f_list_len_273(struct f_greenc_1fr *up_, P169 l_272);
static rt_int f_cur_line_274(struct f_greenc_1fr *up_);
static int f_at_kw_276(struct f_greenc_1fr *up_, rstr w_275);
static int f_at_op_278(struct f_greenc_1fr *up_, rstr w_277);
static int f_at_kind_280(struct f_greenc_1fr *up_, rt_int k_279);
static rt_int f_kind_at_282(struct f_greenc_1fr *up_, rt_int k_281);
static rstr f_text_at_284(struct f_greenc_1fr *up_, rt_int k_283);
static void f_perror_286(struct f_greenc_1fr *up_, rstr msg_285);
static void f_skip_287(struct f_greenc_1fr *up_);
static void f_expect_kw_289(struct f_greenc_1fr *up_, rstr w_288);
static void f_expect_op_291(struct f_greenc_1fr *up_, rstr w_290);
static void f_expect_id_293(struct f_greenc_1fr *up_, P135 *res_292);
static void f_name_node_295(struct f_greenc_1fr *up_, P169 *res_294);
static void f_id_list_297(struct f_greenc_1fr *up_, P169 *res_296);
static P169 f_binop_302(struct f_greenc_1fr *up_, P135 op_298, P169 l_299, P169 r_300, rt_int line_301);
static void f_expr_304(struct f_greenc_1fr *up_, P169 *res_303);
static int f_is_rel_306(struct f_greenc_1fr *up_, rstr s_305);
static void f_relation_308(struct f_greenc_1fr *up_, P169 *res_307);
static void f_simple_expr_310(struct f_greenc_1fr *up_, P169 *res_309);
static void f_term_312(struct f_greenc_1fr *up_, P169 *res_311);
static void f_factor_314(struct f_greenc_1fr *up_, P169 *res_313);
static void f_primary_316(struct f_greenc_1fr *up_, P169 *res_315);
static void f_agg_or_paren_318(struct f_greenc_1fr *up_, P169 *res_317);
static void f_name_p_320(struct f_greenc_1fr *up_, P169 *res_319);
static void f_subtype_ind_322(struct f_greenc_1fr *up_, P169 *res_321);
static void f_type_spec_324(struct f_greenc_1fr *up_, P169 *res_323);
static void f_type_def_326(struct f_greenc_1fr *up_, P169 *res_325);
static void f_pragma_p_328(struct f_greenc_1fr *up_, P169 *res_327);
static void f_check_pragma_330(struct f_greenc_1fr *up_, P169 x_329);
static void f_skip_visibility_331(struct f_greenc_1fr *up_);
static void f_skip_representation_332(struct f_greenc_1fr *up_);
static void f_decl_part_334(struct f_greenc_1fr *up_, P169 *res_333);
static void f_object_decl_336(struct f_greenc_1fr *up_, P169 *res_335);
static void f_type_decl_338(struct f_greenc_1fr *up_, P169 *res_337);
static void f_formal_part_340(struct f_greenc_1fr *up_, P169 *res_339);
static void f_designator_342(struct f_greenc_1fr *up_, P135 *res_341);
static void f_subprogram_344(struct f_greenc_1fr *up_, P169 *res_343);
static void f_body_part_346(struct f_greenc_1fr *up_, P169 x_345);
static void f_parse_handlers_348(struct f_greenc_1fr *up_, P169 *res_347);
static void f_package_p_350(struct f_greenc_1fr *up_, P169 *res_349);
static int f_at_statements_end_351(struct f_greenc_1fr *up_);
static void f_statements_353(struct f_greenc_1fr *up_, P169 *res_352);
static void f_statement_355(struct f_greenc_1fr *up_, P169 *res_354);
static void f_task_statement_357(struct f_greenc_1fr *up_, P169 *res_356);
static void f_if_stmt_359(struct f_greenc_1fr *up_, P169 *res_358);
static void f_case_stmt_361(struct f_greenc_1fr *up_, P169 *res_360);
static void f_loop_stmt_363(struct f_greenc_1fr *up_, P169 *res_362);
static void f_compilation_365(struct f_greenc_1fr *up_, P169 *res_364);
static rt_int f_hash_367(struct f_greenc_1fr *up_, rstr s_366);
static P112 f_lookup_369(struct f_greenc_1fr *up_, rstr name_368);
static int f_same_task_372(struct f_greenc_1fr *up_, P112 a_370, P112 b_371);
static P112 f_lookup_entry_375(struct f_greenc_1fr *up_, rstr name_373, P112 owner_374);
static P112 f_lookup_decl_377(struct f_greenc_1fr *up_, P169 d_376);
static int f_overloadable_379(struct f_greenc_1fr *up_, P112 y_378);
static int f_same_382(struct f_greenc_1fr *up_, P117 a_380, P117 b_381);
static P117 f_root_384(struct f_greenc_1fr *up_, P117 t_383);
static int f_derived_from_387(struct f_greenc_1fr *up_, P117 a_385, P117 b_386);
static int f_is_numeric_389(struct f_greenc_1fr *up_, P117 t_388);
static int f_is_discrete_391(struct f_greenc_1fr *up_, P117 t_390);
static int f_same_signature_394(struct f_greenc_1fr *up_, P1194 a_392, P1194 b_393);
static void f_define_397(struct f_greenc_1fr *up_, P112 y_395, rt_int line_396);
static void f_open_scope_398(struct f_greenc_1fr *up_);
static void f_close_scope_399(struct f_greenc_1fr *up_);
static P112 f_new_sym_402(struct f_greenc_1fr *up_, rt_int kind_400, P135 name_401);
static P117 f_new_typ_404(struct f_greenc_1fr *up_, rt_int kind_403);
static P173 f_new_cons_405(struct f_greenc_1fr *up_);
static rstr f_kind_name_407(struct f_greenc_1fr *up_, P117 t_406);
static void f_check_type_411(struct f_greenc_1fr *up_, P117 got_408, P117 want_409, rt_int line_410);
static rt_int f_field_count_413(struct f_greenc_1fr *up_, P117 t_412);
static void f_ctype_416(struct f_greenc_1fr *up_, P117 t_414, P135 *r_415);
static void f_field_decls_419(struct f_greenc_1fr *up_, P117 t_417, P135 *r_418);
static void f_declare_ctype_421(struct f_greenc_1fr *up_, P117 t_420);
static rt_int f_lit_index_424(struct f_greenc_1fr *up_, P169 lits_422, rstr name_423);
static void f_manifest_428(struct f_greenc_1fr *up_, P169 e_425, rt_int *v_426, int *ok_427);
static void f_resolve_432(struct f_greenc_1fr *up_, P169 st_429, P117 *t_430, P173 *c_431);
static void f_range_of_436(struct f_greenc_1fr *up_, P169 r_433, P117 t_434, P173 c_435);
static void f_fresh_typ_440(struct f_greenc_1fr *up_, rt_int kind_437, P135 name_438, P117 *t_439);
static void f_inherit_444(struct f_greenc_1fr *up_, P117 parent_441, P117 t_442, rt_int line_443);
static void f_derive_literals_447(struct f_greenc_1fr *up_, P117 t_445, rt_int line_446);
static void f_type_definition_452(struct f_greenc_1fr *up_, P169 d_448, P135 name_449, P117 *t_450, P173 *c_451);
static void f_derived_type_457(struct f_greenc_1fr *up_, P169 d_453, P135 name_454, P117 *t_455, P173 *c_456);
static void f_real_type_462(struct f_greenc_1fr *up_, P169 d_458, P135 name_459, P117 *t_460, P173 *c_461);
static void f_finish_ptr_464(struct f_greenc_1fr *up_, P117 t_463);
static void f_init_storage_468(struct f_greenc_1fr *up_, rstr lval_465, P117 t_466, P173 c_467);
static int f_composite_470(struct f_greenc_1fr *up_, P117 t_469);
static void f_assign_code_476(struct f_greenc_1fr *up_, rstr lval_471, P117 t_472, rstr v_473, P173 c_474, P135 *r_475);
static void f_copy_code_480(struct f_greenc_1fr *up_, P117 t_477, rstr v_478, P135 *r_479);
static void f_eq_code_485(struct f_greenc_1fr *up_, P117 t_481, rstr a_482, rstr b_483, P135 *r_484);
static int f_seen_name_488(struct f_greenc_1fr *up_, P146 l_486, rstr s_487);
static void f_emit_helpers_489(struct f_greenc_1fr *up_);
static void f_helper_bodies_491(struct f_greenc_1fr *up_, P117 t_490);
static void f_storage_495(struct f_greenc_1fr *up_, rstr name_492, P117 t_493, P135 *access_code_494);
static void f_bind_498(struct f_greenc_1fr *up_, P112 y_496, P135 access_code_497);
static void f_declare_subprograms_500(struct f_greenc_1fr *up_, P169 from_499);
static void f_declare_one_502(struct f_greenc_1fr *up_, P169 e_501);
static void f_build_subprogram_505(struct f_greenc_1fr *up_, P169 d_503, P112 *y_504);
static void f_decl_elements_507(struct f_greenc_1fr *up_, P169 decls_506);
static void f_decl_element_509(struct f_greenc_1fr *up_, P169 e_508);
static void f_pragma_decl_511(struct f_greenc_1fr *up_, P169 e_510);
static void f_resolve_object_type_515(struct f_greenc_1fr *up_, P169 st_512, P117 *t_513, P173 *c_514);
static void f_other_decl_517(struct f_greenc_1fr *up_, P169 e_516);
static void f_subprogram_body_520(struct f_greenc_1fr *up_, P169 d_518, P112 y_519);
static void f_gen_statements_522(struct f_greenc_1fr *up_, P169 stmts_521);
static void f_pop_frames_524(struct f_greenc_1fr *up_, rt_int upto_523);
static void f_push_cleanup_526(struct f_greenc_1fr *up_, rstr s_525);
static void f_pop_cleanup_527(struct f_greenc_1fr *up_);
static void f_guarded_531(struct f_greenc_1fr *up_, P169 stmts_528, P169 hs_529, rt_int line_530);
static void f_exc_id_535(struct f_greenc_1fr *up_, rstr name_532, rt_int line_533, P135 *r_534);
static void f_gen_statement_537(struct f_greenc_1fr *up_, P169 s_536);
static void f_slice_assign_539(struct f_greenc_1fr *up_, P169 s_538);
static void f_gen_call_541(struct f_greenc_1fr *up_, P169 s_540);
static void f_gen_if_543(struct f_greenc_1fr *up_, P169 s_542);
static void f_gen_case_545(struct f_greenc_1fr *up_, P169 s_544);
static void f_push_exit_549(struct f_greenc_1fr *up_, P135 match_546, int is_loop_547, P135 *label_548);
static void f_gen_loop_551(struct f_greenc_1fr *up_, P169 s_550);
static void f_gen_block_553(struct f_greenc_1fr *up_, P169 s_552);
static void f_gen_exit_555(struct f_greenc_1fr *up_, P169 s_554);
static void f_gen_return_557(struct f_greenc_1fr *up_, P169 s_556);
static void f_access_of_560(struct f_greenc_1fr *up_, P112 y_558, P135 *r_559);
static void f_link_to_563(struct f_greenc_1fr *up_, rt_int l_561, P135 *r_562);
static rstr f_c_ident_565(struct f_greenc_1fr *up_, rstr s_564);
static void f_deref_569(struct f_greenc_1fr *up_, rstr base_566, P117 t_567, P135 *r_568);
static int f_is_object_571(struct f_greenc_1fr *up_, P169 e_570);
static void f_lvalue_577(struct f_greenc_1fr *up_, P169 e_572, P135 *code_out_573, P117 *t_574, P173 *c_575, int *ro_576);
static void f_select_on_585(struct f_greenc_1fr *up_, rstr base_578, P117 bt_579, P169 e_580, int *ro_581, P135 *code_out_582, P117 *t_583, P173 *c_584);
static void f_index_on_594(struct f_greenc_1fr *up_, rstr base_586, P117 bt_587, P169 e_588, int *ro_589, int lv_590, P135 *code_out_591, P117 *t_592, P173 *c_593);
static int f_is_char_lit_596(struct f_greenc_1fr *up_, P169 e_595);
static int f_is_enum_lit_598(struct f_greenc_1fr *up_, P169 e_597);
static rstr f_c_string_600(struct f_greenc_1fr *up_, rstr s_599);
static int f_is_literal_602(struct f_greenc_1fr *up_, P169 e_601);
static void f_range_bounds_610(struct f_greenc_1fr *up_, P169 l_603, P169 h_604, P117 want_605, rt_int line_606, P117 *t_607, P135 *lo_608, P135 *hi_609);
static void f_gexpr_615(struct f_greenc_1fr *up_, P169 e_611, P117 want_612, P117 *t_613, P135 *r_614);
static void f_gexpr_1_620(struct f_greenc_1fr *up_, P169 e_616, P117 want_617, P117 *t_618, P135 *r_619);
static void f_char_literal_625(struct f_greenc_1fr *up_, P169 e_621, P117 want_622, P117 *t_623, P135 *r_624);
static void f_gen_name_630(struct f_greenc_1fr *up_, P169 e_626, P117 want_627, P117 *t_628, P135 *r_629);
static void f_gen_unop_635(struct f_greenc_1fr *up_, P169 e_631, P117 want_632, P117 *t_633, P135 *r_634);
static int f_short_int_637(struct f_greenc_1fr *up_, P117 t_636);
static rstr f_float_kind_639(struct f_greenc_1fr *up_, P117 t_638);
static void f_arithmetic_644(struct f_greenc_1fr *up_, P169 e_640, P117 want_641, P117 *t_642, P135 *r_643);
static void f_fixed_operation_652(struct f_greenc_1fr *up_, P169 e_645, P117 ta_646, P117 tb_647, rstr a_648, rstr b_649, P117 *t_650, P135 *r_651);
static void f_gen_binop_657(struct f_greenc_1fr *up_, P169 e_653, P117 want_654, P117 *t_655, P135 *r_656);
static void f_conversion_662(struct f_greenc_1fr *up_, P169 e_658, P112 y_659, P117 *t_660, P135 *r_661);
static void f_gen_attr_667(struct f_greenc_1fr *up_, P169 e_663, P117 want_664, P117 *t_665, P135 *r_666);
static void f_lit_table_670(struct f_greenc_1fr *up_, P117 t_668, P135 *r_669);
static void f_val_rep_676(struct f_greenc_1fr *up_, P169 e_671, P117 tt_672, P173 c_673, P117 *t_674, P135 *r_675);
static void f_allocator_681(struct f_greenc_1fr *up_, P169 e_677, P117 want_678, P117 *t_679, P135 *r_680);
static void f_aggregate_686(struct f_greenc_1fr *up_, P169 e_682, P117 want_683, P117 *t_684, P135 *r_685);
static P169 f_actual_for_690(struct f_greenc_1fr *up_, P169 args_687, P1194 pm_688, P1194 first_689);
static void f_gcall_695(struct f_greenc_1fr *up_, P169 e_691, int is_stmt_692, P117 *t_693, P135 *r_694);
static void f_gcall_with_700(struct f_greenc_1fr *up_, P169 e_696, P112 y_697, P117 *t_698, P135 *r_699);
static void f_builtin_707(struct f_greenc_1fr *up_, rstr name_701, P169 args_702, rt_int line_703, int is_stmt_704, P117 *t_705, P135 *r_706);
static int f_is_package_709(struct f_greenc_1fr *up_, P169 e_708);
static P112 f_member_of_713(struct f_greenc_1fr *up_, rstr p_710, rstr name_711, rt_int line_712);
static int f_inside_package_715(struct f_greenc_1fr *up_, P169 p_714);
static void f_copy_sym_718(struct f_greenc_1fr *up_, P112 y_716, P112 *z_717);
static void f_complete_private_721(struct f_greenc_1fr *up_, P117 ph_719, P117 full_720);
static void f_package_spec_723(struct f_greenc_1fr *up_, P169 e_722);
static int f_hidden_from_726(struct f_greenc_1fr *up_, P112 m_724, P112 first_private_725);
static void f_package_body_728(struct f_greenc_1fr *up_, P169 e_727);
static void f_use_clause_730(struct f_greenc_1fr *up_, P169 e_729);
static void f_fits_735(struct f_greenc_1fr *up_, P112 y_731, P169 args_732, P117 want_733, int *ok_734);
static int f_is_builtin_737(struct f_greenc_1fr *up_, rstr n_736);
static void f_resolve_overload_744(struct f_greenc_1fr *up_, rstr name_738, P169 args_739, int is_stmt_740, P117 want_741, rt_int line_742, P112 *y_743);
static void f_resolve_member_overload_752(struct f_greenc_1fr *up_, rstr p_745, rstr name_746, P169 args_747, int is_stmt_748, P117 want_749, rt_int line_750, P112 *y_751);
static void f_user_operator_758(struct f_greenc_1fr *up_, P169 e_753, P117 want_754, P117 *t_755, P135 *r_756, int *done_757);
static void f_task_p_760(struct f_greenc_1fr *up_, P169 *res_759);
static void f_entry_p_762(struct f_greenc_1fr *up_, P169 *res_761);
static void f_accept_p_764(struct f_greenc_1fr *up_, P169 *res_763);
static void f_delay_p_766(struct f_greenc_1fr *up_, P169 *res_765);
static void f_designators_768(struct f_greenc_1fr *up_, P169 *res_767);
static void f_parse_task_statement_770(struct f_greenc_1fr *up_, P169 *res_769);
static void f_path_at_774(struct f_greenc_1fr *up_, rt_int level_771, rstr field_772, P135 *r_773);
static int f_is_task_name_776(struct f_greenc_1fr *up_, rstr n_775);
static void f_task_of_780(struct f_greenc_1fr *up_, P169 e_777, P112 *y_778, P169 *ix_779);
static void f_own_index_782(struct f_greenc_1fr *up_, P135 *r_781);
static void f_member_787(struct f_greenc_1fr *up_, P112 y_783, rstr arr_784, rstr i_785, P135 *r_786);
static void f_act_path_790(struct f_greenc_1fr *up_, P112 y_788, P135 *r_789);
static void f_act_path_i_794(struct f_greenc_1fr *up_, P112 y_791, rstr i_792, P135 *r_793);
static void f_entry_path_798(struct f_greenc_1fr *up_, P112 y_795, rstr i_796, P135 *r_797);
static void f_declare_slot_801(struct f_greenc_1fr *up_, rstr ctype_name_799, rstr field_800);
static void f_task_decl_803(struct f_greenc_1fr *up_, P169 e_802);
static void f_family_arg_struct_804(struct f_greenc_1fr *up_);
static void f_family_bounds_808(struct f_greenc_1fr *up_, P169 b_805, P112 y_806, P135 x_807);
static void f_entry_family_slot_813(struct f_greenc_1fr *up_, P112 y_809, rstr base_810, rstr i_811, P135 *r_812);
static void f_task_spec_815(struct f_greenc_1fr *up_, P169 e_814);
static void f_entry_decl_817(struct f_greenc_1fr *up_, P169 e_816);
static void f_task_body_819(struct f_greenc_1fr *up_, P169 e_818);
static void f_task_awaits_822(struct f_greenc_1fr *up_, P169 decls_820, P135 *aw_821);
static void f_task_failure_824(struct f_greenc_1fr *up_, P169 s_823);
static void f_entry_sym_828(struct f_greenc_1fr *up_, P169 e_825, P112 *y_826, P169 *ix_827);
static void f_other_call_833(struct f_greenc_1fr *up_, P169 e_829, int is_stmt_830, P117 *t_831, P135 *r_832);
static void f_other_attr_838(struct f_greenc_1fr *up_, P169 e_834, P112 y_835, P117 *t_836, P135 *r_837);
static void f_member_attr_842(struct f_greenc_1fr *up_, P169 e_839, P117 *t_840, P135 *r_841);
static void f_task_builtin_848(struct f_greenc_1fr *up_, rstr name_843, P169 args_844, rt_int line_845, P117 *t_846, P135 *r_847);
static void f_gen_accept_850(struct f_greenc_1fr *up_, P169 s_849);
static void f_member_slot_854(struct f_greenc_1fr *up_, P112 y_851, P169 s_852, P135 *ent_853);
static void f_gen_delay_ticks_857(struct f_greenc_1fr *up_, P169 e_855, P135 *r_856);
static void f_gen_select_859(struct f_greenc_1fr *up_, P169 s_858);
static void f_family_range_864(struct f_greenc_1fr *up_, P112 y_860, P169 ix_861, P135 *lo_862, P135 *hi_863);
static void f_task_statement_gen_866(struct f_greenc_1fr *up_, P169 s_865);
static P169 f_root_name_868(struct f_greenc_1fr *up_, P169 e_867);
static void f_check_pure_target_871(struct f_greenc_1fr *up_, P169 target_869, rt_int line_870);
static int f_assigns_nonlocal_874(struct f_greenc_1fr *up_, P169 d_872, rstr name_873);
static int f_declares_877(struct f_greenc_1fr *up_, P169 d_875, rstr name_876);
static int f_scan_handlers_881(struct f_greenc_1fr *up_, P169 h_878, P169 d_879, rstr name_880);
static int f_scan_assigns_885(struct f_greenc_1fr *up_, P169 stmts_882, P169 d_883, rstr name_884);
static void f_check_call_rules_888(struct f_greenc_1fr *up_, P169 e_886, P112 y_887);
static void f_generic_p_890(struct f_greenc_1fr *up_, P169 *res_889);
static void f_instantiation_893(struct f_greenc_1fr *up_, P169 x_891, P169 *res_892);
static void f_generic_decl_895(struct f_greenc_1fr *up_, P169 e_894);
static int f_is_generic_name_897(struct f_greenc_1fr *up_, rstr n_896);
static void f_attach_generic_body_899(struct f_greenc_1fr *up_, P169 e_898);
static void f_restore_generic_context_902(struct f_greenc_1fr *up_, P169 body_node_900, rt_int line_901);
static P169 f_gactual_906(struct f_greenc_1fr *up_, P169 args_903, rt_int nth_904, rstr name_905);
static void f_copy_node_910(struct f_greenc_1fr *up_, P169 n_907, P135 name_908, P169 *r_909);
static void f_instantiate_912(struct f_greenc_1fr *up_, P169 e_911);
static void f_predef_type_917(struct f_greenc_1fr *up_, rstr name_913, P117 t_914, rstr lo_915, rstr hi_916);
static void f_predef_const_921(struct f_greenc_1fr *up_, rstr name_918, P117 t_919, rstr code_text_920);
static void f_predef_exc_923(struct f_greenc_1fr *up_, rstr name_922);
static void f_predef_lit_927(struct f_greenc_1fr *up_, rstr name_924, P117 t_925, rt_int v_926);
static void f_predefine_928(struct f_greenc_1fr *up_);
static void f_translate_930(struct f_greenc_1fr *up_, P169 u_929);
static void f_print_program_931(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_103;
static P135 f_mk_201(struct f_greenc_1fr *up_, rstr s_200) {
  struct f_mk_201fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_200 = rt_str_copy(s_200);
F->result_ = ({ rstr *cell932 = rt_alloc(sizeof(rstr)); *cell932 = rt_str_copy(F->s_200); (P135)cell932; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_204(struct f_greenc_1fr *up_, rstr base_202, P135 *res_203) {
  struct f_new_name_204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_202 = rt_str_copy(base_202);
F->res_203 = res_203;
F->up->serial_120 = rt_add(F->up->serial_120, ((rt_int)1LL));
(*F->res_203) = ({ rstr *cell933 = rt_alloc(sizeof(rstr)); *cell933 = rt_str_copy(rt_str_cat(F->base_202, rt_str_of_int(F->up->serial_120))); (P135)cell933; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_206(struct f_greenc_1fr *up_, int c_205) {
  struct f_is_letter_206fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_205 = c_205;
F->result_ = (((F->c_205 >= 65) && (F->c_205 <= 90)) || ((F->c_205 >= 97) && (F->c_205 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_208(struct f_greenc_1fr *up_, int c_207) {
  struct f_is_digit_208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_207 = c_207;
F->result_ = ((F->c_207 >= 48) && (F->c_207 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_210(struct f_greenc_1fr *up_, int c_209) {
  struct f_upper_210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_209 = c_209;
if (((F->c_209 >= 97) && (F->c_209 <= 122))) {
F->result_ = rt_range((rt_sub(((rt_int)(F->c_209) + 1), ((rt_int)32LL)) - 1), 0, 127);
goto ret_;
}
F->result_ = F->c_209;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_lower_s_212(struct f_greenc_1fr *up_, rstr s_211) {
  struct f_lower_s_212fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_211 = rt_str_copy(s_211);
F->r_934 = rt_str_copy(F->s_211);
{ rt_int lo937 = ((rt_int)1LL), hi938 = (F->s_211).len;
for (rt_int it939 = lo937; it939 <= hi938; it939++) {
F->i_936 = it939;
if (((rt_str_get(F->r_934, F->i_936) >= 65) && (rt_str_get(F->r_934, F->i_936) <= 90))) {
(*rt_str_at(&F->r_934, F->i_936)) = rt_range((rt_add(((rt_int)(rt_str_get(F->r_934, F->i_936)) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_935: ;
F->result_ = F->r_934;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_upper_s_214(struct f_greenc_1fr *up_, rstr s_213) {
  struct f_upper_s_214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_213 = rt_str_copy(s_213);
F->r_940 = rt_str_copy(F->s_213);
{ rt_int lo943 = ((rt_int)1LL), hi944 = (F->s_213).len;
for (rt_int it945 = lo943; it945 <= hi944; it945++) {
F->i_942 = it945;
(*rt_str_at(&F->r_940, F->i_942)) = f_upper_210(F->up, rt_str_get(F->r_940, F->i_942));
}
}
L_end_941: ;
F->result_ = F->r_940;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_216(struct f_greenc_1fr *up_, rstr s_215) {
  struct f_is_operator_216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_215 = rt_str_copy(s_215);
F->result_ = (((((((((((((((rt_str_eq(F->s_215, rt_str("+", 1)) || rt_str_eq(F->s_215, rt_str("-", 1))) || rt_str_eq(F->s_215, rt_str("*", 1))) || rt_str_eq(F->s_215, rt_str("/", 1))) || rt_str_eq(F->s_215, rt_str("**", 2))) || rt_str_eq(F->s_215, rt_str("&", 1))) || rt_str_eq(F->s_215, rt_str("=", 1))) || rt_str_eq(F->s_215, rt_str("<", 1))) || rt_str_eq(F->s_215, rt_str("<=", 2))) || rt_str_eq(F->s_215, rt_str(">", 1))) || rt_str_eq(F->s_215, rt_str(">=", 2))) || rt_str_eq(F->s_215, rt_str("MOD", 3))) || rt_str_eq(F->s_215, rt_str("AND", 3))) || rt_str_eq(F->s_215, rt_str("OR", 2))) || rt_str_eq(F->s_215, rt_str("XOR", 3))) || rt_str_eq(F->s_215, rt_str("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_field_218(struct f_greenc_1fr *up_, rstr s_217) {
  struct f_c_field_218fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_217 = rt_str_copy(s_217);
F->result_ = rt_str_catc(f_lower_s_212(F->up, F->s_217), 95);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_q_219(struct f_greenc_1fr *up_) {
  struct f_q_219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_str("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_222(struct f_greenc_1fr *up_, rt_int line_220, rstr msg_221) {
  struct f_fail_222fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_220 = line_220;
F->msg_221 = rt_str_copy(msg_221);
if ((F->up->trial_150 == ((rt_int)0LL))) {
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("greenc: line ", 13), rt_str_of_int(F->line_220)), rt_str(": ", 2)), F->msg_221));
rt_g_put(rt_str("\n", 1));
}
rt_raise(ex_compile_error_103);
ret_:

  return;
}

static P121 f_new_buffer_223(struct f_greenc_1fr *up_) {
  struct f_new_buffer_223fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R122 *cell946 = rt_alloc(sizeof(R122)); *cell946 = cp_R122(({ R122 ag947; ag947.head_ = NULL; ag947.tail_ = NULL; ag947; })); (P121)cell946; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_226(struct f_greenc_1fr *up_, P121 b_224, rstr s_225) {
  struct f_put_to_226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_224 = b_224;
F->s_225 = rt_str_copy(s_225);
F->l_948 = NULL;
F->l_948 = ({ R147 *cell949 = rt_alloc(sizeof(R147)); *cell949 = cp_R147(({ R147 ag950; ag950.s_ = NULL; ag950.next_ = NULL; ag950; })); (P146)cell949; });
(*(P146)rt_nil_check(F->l_948)).s_ = f_mk_201(F->up, F->s_225);
if (((*(P121)rt_nil_check(F->b_224)).tail_ == NULL)) {
(*(P121)rt_nil_check(F->b_224)).head_ = F->l_948;
} else {
(*(P146)rt_nil_check((*(P121)rt_nil_check(F->b_224)).tail_)).next_ = F->l_948;
}
(*(P121)rt_nil_check(F->b_224)).tail_ = F->l_948;
ret_:

  return;
}

static void f_emit_228(struct f_greenc_1fr *up_, rstr s_227) {
  struct f_emit_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_227 = rt_str_copy(s_227);
f_put_to_226(F->up, F->up->code_131, F->s_227);
ret_:

  return;
}

static void f_print_buffer_230(struct f_greenc_1fr *up_, P121 b_229) {
  struct f_print_buffer_230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_229 = b_229;
F->l_951 = NULL;
F->l_951 = (*(P121)rt_nil_check(F->b_229)).head_;
while ((F->l_951 != NULL)) {
rt_g_put((*(P135)rt_nil_check((*(P146)rt_nil_check(F->l_951)).s_)));
rt_g_put(rt_str("\n", 1));
F->l_951 = (*(P146)rt_nil_check(F->l_951)).next_;
}
L_end_952: ;
ret_:

  return;
}

static void f_splice_233(struct f_greenc_1fr *up_, P121 a_231, P121 b_232) {
  struct f_splice_233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_231 = a_231;
F->b_232 = b_232;
if (((*(P121)rt_nil_check(F->b_232)).head_ == NULL)) {
goto ret_;
}
if (((*(P121)rt_nil_check(F->a_231)).tail_ == NULL)) {
(*(P121)rt_nil_check(F->a_231)).head_ = (*(P121)rt_nil_check(F->b_232)).head_;
} else {
(*(P146)rt_nil_check((*(P121)rt_nil_check(F->a_231)).tail_)).next_ = (*(P121)rt_nil_check(F->b_232)).head_;
}
(*(P121)rt_nil_check(F->a_231)).tail_ = (*(P121)rt_nil_check(F->b_232)).tail_;
(*(P121)rt_nil_check(F->b_232)).head_ = NULL;
(*(P121)rt_nil_check(F->b_232)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_235(struct f_greenc_1fr *up_, rstr w_234) {
  struct f_is_reserved_235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_234 = rt_str_copy(w_234);
{ rt_int sel953 = (F->w_234).len;
if (0 || sel953 == ((rt_int)2LL)) {
F->result_ = ((((((rt_str_eq(F->w_234, rt_str("AT", 2)) || rt_str_eq(F->w_234, rt_str("DO", 2))) || rt_str_eq(F->w_234, rt_str("IF", 2))) || rt_str_eq(F->w_234, rt_str("IN", 2))) || rt_str_eq(F->w_234, rt_str("IS", 2))) || rt_str_eq(F->w_234, rt_str("OF", 2))) || rt_str_eq(F->w_234, rt_str("OR", 2)));
goto ret_;
} else if (0 || sel953 == ((rt_int)3LL)) {
F->result_ = (((((((((rt_str_eq(F->w_234, rt_str("ALL", 3)) || rt_str_eq(F->w_234, rt_str("AND", 3))) || rt_str_eq(F->w_234, rt_str("END", 3))) || rt_str_eq(F->w_234, rt_str("FOR", 3))) || rt_str_eq(F->w_234, rt_str("MOD", 3))) || rt_str_eq(F->w_234, rt_str("NEW", 3))) || rt_str_eq(F->w_234, rt_str("NOT", 3))) || rt_str_eq(F->w_234, rt_str("OUT", 3))) || rt_str_eq(F->w_234, rt_str("USE", 3))) || rt_str_eq(F->w_234, rt_str("XOR", 3)));
goto ret_;
} else if (0 || sel953 == ((rt_int)4LL)) {
F->result_ = ((((((((((rt_str_eq(F->w_234, rt_str("BODY", 4)) || rt_str_eq(F->w_234, rt_str("CASE", 4))) || rt_str_eq(F->w_234, rt_str("ELSE", 4))) || rt_str_eq(F->w_234, rt_str("EXIT", 4))) || rt_str_eq(F->w_234, rt_str("GOTO", 4))) || rt_str_eq(F->w_234, rt_str("LOOP", 4))) || rt_str_eq(F->w_234, rt_str("NULL", 4))) || rt_str_eq(F->w_234, rt_str("TASK", 4))) || rt_str_eq(F->w_234, rt_str("THEN", 4))) || rt_str_eq(F->w_234, rt_str("TYPE", 4))) || rt_str_eq(F->w_234, rt_str("WHEN", 4)));
goto ret_;
} else if (0 || sel953 == ((rt_int)5LL)) {
F->result_ = (((((((((rt_str_eq(F->w_234, rt_str("ABORT", 5)) || rt_str_eq(F->w_234, rt_str("ARRAY", 5))) || rt_str_eq(F->w_234, rt_str("BEGIN", 5))) || rt_str_eq(F->w_234, rt_str("DELAY", 5))) || rt_str_eq(F->w_234, rt_str("DELTA", 5))) || rt_str_eq(F->w_234, rt_str("ELSIF", 5))) || rt_str_eq(F->w_234, rt_str("ENTRY", 5))) || rt_str_eq(F->w_234, rt_str("RAISE", 5))) || rt_str_eq(F->w_234, rt_str("RANGE", 5))) || rt_str_eq(F->w_234, rt_str("WHILE", 5)));
goto ret_;
} else if (0 || sel953 == ((rt_int)6LL)) {
F->result_ = ((((((((rt_str_eq(F->w_234, rt_str("ACCEPT", 6)) || rt_str_eq(F->w_234, rt_str("ACCESS", 6))) || rt_str_eq(F->w_234, rt_str("ASSERT", 6))) || rt_str_eq(F->w_234, rt_str("DIGITS", 6))) || rt_str_eq(F->w_234, rt_str("OTHERS", 6))) || rt_str_eq(F->w_234, rt_str("PRAGMA", 6))) || rt_str_eq(F->w_234, rt_str("RECORD", 6))) || rt_str_eq(F->w_234, rt_str("RETURN", 6))) || rt_str_eq(F->w_234, rt_str("SELECT", 6)));
goto ret_;
} else if (0 || sel953 == ((rt_int)7LL)) {
F->result_ = (((((((rt_str_eq(F->w_234, rt_str("DECLARE", 7)) || rt_str_eq(F->w_234, rt_str("GENERIC", 7))) || rt_str_eq(F->w_234, rt_str("PACKAGE", 7))) || rt_str_eq(F->w_234, rt_str("PACKING", 7))) || rt_str_eq(F->w_234, rt_str("PRIVATE", 7))) || rt_str_eq(F->w_234, rt_str("RENAMES", 7))) || rt_str_eq(F->w_234, rt_str("REVERSE", 7))) || rt_str_eq(F->w_234, rt_str("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel953 == ((rt_int)8LL)) {
F->result_ = (((rt_str_eq(F->w_234, rt_str("CONSTANT", 8)) || rt_str_eq(F->w_234, rt_str("FUNCTION", 8))) || rt_str_eq(F->w_234, rt_str("INITIATE", 8))) || rt_str_eq(F->w_234, rt_str("SEPARATE", 8)));
goto ret_;
} else if (0 || sel953 == ((rt_int)9LL)) {
F->result_ = (rt_str_eq(F->w_234, rt_str("EXCEPTION", 9)) || rt_str_eq(F->w_234, rt_str("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel953 == ((rt_int)10LL)) {
F->result_ = rt_str_eq(F->w_234, rt_str("RESTRICTED", 10));
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

static void f_add_token_239(struct f_greenc_1fr *up_, rt_int kind_236, rstr s_237, rt_int ival_238) {
  struct f_add_token_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_236 = kind_236;
F->s_237 = rt_str_copy(s_237);
F->ival_238 = ival_238;
F->up->ntoks_108 = rt_add(F->up->ntoks_108, ((rt_int)1LL));
F->up->toks_107.p[rt_index(F->up->ntoks_108, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo] = ({ R106 *cell954 = rt_alloc(sizeof(R106)); *cell954 = cp_R106(({ R106 ag955; ag955.kind_ = F->kind_236; ag955.line_ = F->up->src_line_110; ag955.ival_ = F->ival_238; ag955.s_ = NULL; ag955; })); (P105)cell954; });
(*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->ntoks_108, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_ = f_mk_201(F->up, F->s_237);
ret_:

  return;
}

static rt_int f_digit_value_241(struct f_greenc_1fr *up_, int c_240) {
  struct f_digit_value_241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_240 = c_240;
if (f_is_digit_208(F->up, F->c_240)) {
F->result_ = rt_sub(((rt_int)(F->c_240) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_210(F->up, F->c_240)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_244(struct f_greenc_1fr *up_, int c_242, rt_int base_243) {
  struct f_digit_in_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_242 = c_242;
F->base_243 = base_243;
if (f_is_digit_208(F->up, F->c_242)) {
F->d_956 = rt_sub(((rt_int)(F->c_242) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_210(F->up, F->c_242) >= 65) && (f_upper_210(F->up, F->c_242) <= 70))) {
F->d_956 = rt_add(rt_sub(((rt_int)(f_upper_210(F->up, F->c_242)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((F->d_956 >= F->base_243)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = F->d_956;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_248(struct f_greenc_1fr *up_, rt_int *v_245, rt_int base_246, rt_int d_247) {
  struct f_accumulate_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_245 = v_245;
F->base_246 = base_246;
F->d_247 = d_247;
if (((*F->v_245) > rt_quot(rt_sub(INT64_MAX, F->d_247), F->base_246))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_245) = rt_add(rt_mul((*F->v_245), F->base_246), F->d_247);
ret_:

  return;
}

static void f_lex_line_250(struct f_greenc_1fr *up_, rstr line_249) {
  struct f_lex_line_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_249 = rt_str_copy(line_249);
F->i_957 = ((rt_int)1LL);
F->j_958 = ((rt_int)0LL);
F->n_959 = (F->line_249).len;
F->buf_964 = rt_str_new((((rt_int)1000LL) - ((rt_int)1LL) + 1));
while ((F->i_957 <= F->n_959)) {
F->c_960 = rt_range(rt_str_get(F->line_249, F->i_957), 0, 127);
if (((((F->c_960 == 32) || (F->c_960 == 9)) || (F->c_960 == 13)) || (F->c_960 == 12))) {
F->i_957 = rt_add(F->i_957, ((rt_int)1LL));
} else if ((((F->c_960 == 45) && (F->i_957 < F->n_959)) && (rt_str_get(F->line_249, rt_add(F->i_957, ((rt_int)1LL))) == 45))) {
F->i_957 = rt_add(F->n_959, ((rt_int)1LL));
} else if (f_is_letter_206(F->up, F->c_960)) {
F->j_958 = F->i_957;
F->bl_965 = ((rt_int)0LL);
while (((F->j_958 <= F->n_959) && ((f_is_letter_206(F->up, rt_str_get(F->line_249, F->j_958)) || f_is_digit_208(F->up, rt_str_get(F->line_249, F->j_958))) || (rt_str_get(F->line_249, F->j_958) == 95)))) {
if (((rt_str_get(F->line_249, F->j_958) == 95) && ((F->j_958 == F->n_959) || (!(f_is_letter_206(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL)))) || f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))))))))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
F->bl_965 = rt_add(F->bl_965, ((rt_int)1LL));
(*rt_str_at(&F->buf_964, F->bl_965)) = f_upper_210(F->up, rt_str_get(F->line_249, F->j_958));
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
}
L_end_967: ;
if (f_is_reserved_235(F->up, rt_str_slice(F->buf_964, ((rt_int)1LL), F->bl_965))) {
f_add_token_239(F->up, ((rt_int)2LL), rt_str_slice(F->buf_964, ((rt_int)1LL), F->bl_965), ((rt_int)0LL));
} else {
f_add_token_239(F->up, ((rt_int)1LL), rt_str_slice(F->buf_964, ((rt_int)1LL), F->bl_965), ((rt_int)0LL));
}
F->i_957 = F->j_958;
} else if (f_is_digit_208(F->up, F->c_960)) {
F->j_958 = F->i_957;
F->v_962 = ((rt_int)0LL);
F->bl_965 = ((rt_int)0LL);
while (((F->j_958 <= F->n_959) && (f_is_digit_208(F->up, rt_str_get(F->line_249, F->j_958)) || (rt_str_get(F->line_249, F->j_958) == 95)))) {
if ((rt_str_get(F->line_249, F->j_958) == 95)) {
if (((F->j_958 == F->n_959) || (!f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))))))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_248(F->up, &F->v_962, ((rt_int)10LL), rt_sub(((rt_int)(rt_str_get(F->line_249, F->j_958)) + 1), ((rt_int)(48) + 1)));
F->bl_965 = rt_add(F->bl_965, ((rt_int)1LL));
(*rt_str_at(&F->buf_964, F->bl_965)) = rt_str_get(F->line_249, F->j_958);
}
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
}
L_end_968: ;
if (((F->j_958 < F->n_959) && ((rt_str_get(F->line_249, F->j_958) == 35) || ((rt_str_get(F->line_249, F->j_958) == 58) && (f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL)))) || f_is_letter_206(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))))))))) {
{
F->base_970 = F->v_962;
if (((F->base_970 < ((rt_int)2LL)) || (F->base_970 > ((rt_int)16LL)))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_962 = ((rt_int)0LL);
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
if (((F->j_958 > F->n_959) || (f_digit_in_244(F->up, rt_str_get(F->line_249, F->j_958), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("a based number needs digits (RM79 2.4)", 38));
}
while (((F->j_958 <= F->n_959) && ((f_is_letter_206(F->up, rt_str_get(F->line_249, F->j_958)) || f_is_digit_208(F->up, rt_str_get(F->line_249, F->j_958))) || (rt_str_get(F->line_249, F->j_958) == 95)))) {
if ((rt_str_get(F->line_249, F->j_958) == 95)) {
if (((F->j_958 == F->n_959) || (f_digit_in_244(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_963 = f_digit_in_244(F->up, rt_str_get(F->line_249, F->j_958), F->base_970);
if ((F->d_963 < ((rt_int)0LL))) {
f_fail_222(F->up, F->up->src_line_110, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str("digit ", 6), rt_str_get(F->line_249, F->j_958)), rt_str(" is not valid in base ", 22)), rt_str_of_int(F->base_970)), rt_str(" (RM79 2.4)", 11)));
}
f_accumulate_248(F->up, &F->v_962, F->base_970, F->d_963);
}
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
}
L_end_971: ;

}
L_end_969: ;
f_add_token_239(F->up, ((rt_int)4LL), rt_str_of_int(F->v_962), F->v_962);
} else if (((F->j_958 < F->n_959) && ((rt_str_get(F->line_249, F->j_958) == 46) && f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))))))) {
F->bl_965 = rt_add(F->bl_965, ((rt_int)1LL));
(*rt_str_at(&F->buf_964, F->bl_965)) = 46;
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
while (((F->j_958 <= F->n_959) && (f_is_digit_208(F->up, rt_str_get(F->line_249, F->j_958)) || (rt_str_get(F->line_249, F->j_958) == 95)))) {
if ((rt_str_get(F->line_249, F->j_958) != 95)) {
F->bl_965 = rt_add(F->bl_965, ((rt_int)1LL));
(*rt_str_at(&F->buf_964, F->bl_965)) = rt_str_get(F->line_249, F->j_958);
} else if (((F->j_958 == F->n_959) || (!f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))))))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
}
L_end_972: ;
if (((F->j_958 < F->n_959) && (((rt_str_get(F->line_249, F->j_958) == 69) || (rt_str_get(F->line_249, F->j_958) == 101)) && (f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL)))) || ((rt_add(F->j_958, ((rt_int)1LL)) < F->n_959) && (((rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))) == 43) || (rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))) == 45)) && f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)2LL)))))))))) {
f_exponent_255(F->up, F->line_249, &F->j_958, &F->buf_964, &F->bl_965);
}
f_add_token_239(F->up, ((rt_int)5LL), rt_str_slice(F->buf_964, ((rt_int)1LL), F->bl_965), ((rt_int)0LL));
} else if (((F->j_958 < F->n_959) && (((rt_str_get(F->line_249, F->j_958) == 69) || (rt_str_get(F->line_249, F->j_958) == 101)) && (f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL)))) || ((rt_add(F->j_958, ((rt_int)1LL)) < F->n_959) && (((rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))) == 43) || (rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))) == 45)) && f_is_digit_208(F->up, rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)2LL)))))))))) {
f_exponent_255(F->up, F->line_249, &F->j_958, &F->buf_964, &F->bl_965);
f_add_token_239(F->up, ((rt_int)5LL), rt_str_slice(F->buf_964, ((rt_int)1LL), F->bl_965), ((rt_int)0LL));
} else {
f_add_token_239(F->up, ((rt_int)4LL), rt_str_slice(F->buf_964, ((rt_int)1LL), F->bl_965), F->v_962);
}
F->i_957 = F->j_958;
} else if (((F->c_960 == 34) || (F->c_960 == 37))) {
F->quote_961 = rt_range(F->c_960, 0, 127);
F->j_958 = rt_add(F->i_957, ((rt_int)1LL));
F->bl_965 = ((rt_int)0LL);
for (;;) {
if ((F->j_958 > F->n_959)) {
f_fail_222(F->up, F->up->src_line_110, rt_str("unterminated string", 19));
}
if ((rt_str_get(F->line_249, F->j_958) == F->quote_961)) {
if (((F->j_958 == F->n_959) || (rt_str_get(F->line_249, rt_add(F->j_958, ((rt_int)1LL))) != F->quote_961))) {
goto L_end_973;
}
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
} else if (((F->quote_961 == 37) && (rt_str_get(F->line_249, F->j_958) == 34))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_965 = rt_add(F->bl_965, ((rt_int)1LL));
(*rt_str_at(&F->buf_964, F->bl_965)) = rt_str_get(F->line_249, F->j_958);
F->j_958 = rt_add(F->j_958, ((rt_int)1LL));
}
L_end_973: ;
f_add_token_239(F->up, ((rt_int)6LL), rt_str_slice(F->buf_964, ((rt_int)1LL), F->bl_965), ((rt_int)0LL));
F->i_957 = rt_add(F->j_958, ((rt_int)1LL));
} else {
{
F->two_975 = rt_str_new((((rt_int)3LL) - ((rt_int)1LL) + 1));
rt_str_assign(&F->two_975, rt_str("   ", 3));
(*rt_str_at(&F->two_975, ((rt_int)1LL))) = F->c_960;
if ((F->i_957 < F->n_959)) {
(*rt_str_at(&F->two_975, ((rt_int)2LL))) = rt_str_get(F->line_249, rt_add(F->i_957, ((rt_int)1LL)));
}
if ((rt_add(F->i_957, ((rt_int)1LL)) < F->n_959)) {
(*rt_str_at(&F->two_975, ((rt_int)3LL))) = rt_str_get(F->line_249, rt_add(F->i_957, ((rt_int)2LL)));
}
if (rt_str_eq(F->two_975, rt_str(":=:", 3))) {
f_add_token_239(F->up, ((rt_int)3LL), rt_str(":=:", 3), ((rt_int)0LL));
F->i_957 = rt_add(F->i_957, ((rt_int)3LL));
} else if ((((((((((rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str(":=", 2)) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=:", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=>", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str("..", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str("**", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str("/=", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<=", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">=", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<<", 2))) || rt_str_eq(rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">>", 2)))) {
f_add_token_239(F->up, ((rt_int)3LL), rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)2LL)), ((rt_int)0LL));
F->i_957 = rt_add(F->i_957, ((rt_int)2LL));
} else if ((F->c_960 == 33)) {
f_add_token_239(F->up, ((rt_int)3LL), rt_str("|", 1), ((rt_int)0LL));
F->i_957 = rt_add(F->i_957, ((rt_int)1LL));
} else if (((((((((((((((((F->c_960 == 38) || (F->c_960 == 39)) || (F->c_960 == 40)) || (F->c_960 == 41)) || (F->c_960 == 42)) || (F->c_960 == 43)) || (F->c_960 == 44)) || (F->c_960 == 45)) || (F->c_960 == 46)) || (F->c_960 == 47)) || (F->c_960 == 58)) || (F->c_960 == 59)) || (F->c_960 == 60)) || (F->c_960 == 61)) || (F->c_960 == 62)) || (F->c_960 == 124))) {
f_add_token_239(F->up, ((rt_int)3LL), rt_str_slice(F->two_975, ((rt_int)1LL), ((rt_int)1LL)), ((rt_int)0LL));
F->i_957 = rt_add(F->i_957, ((rt_int)1LL));
if ((F->c_960 == 59)) {
f_check_include_259(F->up);
}
} else {
f_fail_222(F->up, F->up->src_line_110, rt_str("unexpected character", 20));
}

}
L_end_974: ;
}
}
L_end_966: ;
ret_:

  return;
}

static void f_exponent_255(struct f_greenc_1fr *up_, rstr line_251, rt_int *j_252, rstr *buf_253, rt_int *bl_254) {
  struct f_exponent_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_251 = rt_str_copy(line_251);
F->j_252 = j_252;
F->buf_253 = buf_253;
F->bl_254 = bl_254;
(*F->bl_254) = rt_add((*F->bl_254), ((rt_int)1LL));
(*rt_str_at(&(*F->buf_253), (*F->bl_254))) = 69;
(*F->j_252) = rt_add((*F->j_252), ((rt_int)1LL));
if (((rt_str_get(F->line_251, (*F->j_252)) == 43) || (rt_str_get(F->line_251, (*F->j_252)) == 45))) {
(*F->bl_254) = rt_add((*F->bl_254), ((rt_int)1LL));
(*rt_str_at(&(*F->buf_253), (*F->bl_254))) = rt_str_get(F->line_251, (*F->j_252));
(*F->j_252) = rt_add((*F->j_252), ((rt_int)1LL));
}
while ((((*F->j_252) <= (F->line_251).len) && (f_is_digit_208(F->up, rt_str_get(F->line_251, (*F->j_252))) || (rt_str_get(F->line_251, (*F->j_252)) == 95)))) {
if ((rt_str_get(F->line_251, (*F->j_252)) != 95)) {
(*F->bl_254) = rt_add((*F->bl_254), ((rt_int)1LL));
(*rt_str_at(&(*F->buf_253), (*F->bl_254))) = rt_str_get(F->line_251, (*F->j_252));
} else if ((((*F->j_252) == (F->line_251).len) || (!f_is_digit_208(F->up, rt_str_get(F->line_251, rt_add((*F->j_252), ((rt_int)1LL))))))) {
f_fail_222(F->up, F->up->src_line_110, rt_str("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_252) = rt_add((*F->j_252), ((rt_int)1LL));
}
L_end_976: ;
ret_:

  return;
}

static void f_read_file_text_258(struct f_greenc_1fr *up_, rstr name_256, P135 *contents_257) {
  struct f_read_file_text_258fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_256 = rt_str_copy(name_256);
F->contents_257 = contents_257;
rt_g_read_file_text(F->name_256, F->contents_257);
ret_:

  return;
}

static void f_check_include_259(struct f_greenc_1fr *up_) {
  struct f_check_include_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_977 = NULL;
F->saved_line_978 = F->up->src_line_110;
F->from_979 = ((rt_int)1LL);
if ((F->up->ntoks_108 < ((rt_int)6LL))) {
goto ret_;
}
if ((!(((((((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)5LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).kind_ == ((rt_int)2LL)) && rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)5LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), rt_str("PRAGMA", 6))) && rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)4LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), rt_str("INCLUDE", 7))) && rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)3LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), rt_str("(", 1))) && ((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)2LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).kind_ == ((rt_int)6LL))) && rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)1LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), rt_str(")", 1))))) {
goto ret_;
}
f_read_file_text_258(F->up, (*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)2LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), &F->t_977);
if ((F->t_977 == NULL)) {
f_fail_222(F->up, F->up->src_line_110, rt_str_cat(rt_str_cat(rt_str("pragma INCLUDE: the file ", 25), (*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->ntoks_108, ((rt_int)2LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_))), rt_str(" cannot be read", 15)));
}
F->up->ntoks_108 = rt_sub(F->up->ntoks_108, ((rt_int)6LL));
F->up->src_line_110 = ((rt_int)0LL);
{ rt_int lo982 = ((rt_int)1LL), hi983 = ((*(P135)rt_nil_check(F->t_977))).len;
for (rt_int it984 = lo982; it984 <= hi983; it984++) {
F->k_981 = it984;
if ((rt_str_get((*(P135)rt_nil_check(F->t_977)), F->k_981) == 10)) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_include_line_263(F->up, (*(P135)rt_nil_check(F->t_977)), F->from_979, rt_sub(F->k_981, ((rt_int)1LL)));
F->from_979 = rt_add(F->k_981, ((rt_int)1LL));
}
}
}
L_end_980: ;
if ((F->from_979 <= ((*(P135)rt_nil_check(F->t_977))).len)) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_include_line_263(F->up, (*(P135)rt_nil_check(F->t_977)), F->from_979, ((*(P135)rt_nil_check(F->t_977))).len);
}
F->up->src_line_110 = F->saved_line_978;
ret_:

  return;
}

static void f_include_line_263(struct f_greenc_1fr *up_, rstr t_260, rt_int from_261, rt_int to_262) {
  struct f_include_line_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_260 = rt_str_copy(t_260);
F->from_261 = from_261;
F->to_262 = to_262;
F->l_985 = rt_str_new((rt_add(rt_sub(F->to_262, F->from_261), ((rt_int)1LL)) - ((rt_int)1LL) + 1));
{ rt_int lo988 = F->from_261, hi989 = F->to_262;
for (rt_int it990 = lo988; it990 <= hi989; it990++) {
F->k_987 = it990;
(*rt_str_at(&F->l_985, rt_add(rt_sub(F->k_987, F->from_261), ((rt_int)1LL)))) = rt_str_get(F->t_260, F->k_987);
}
}
L_end_986: ;
f_lex_line_250(F->up, F->l_985);
ret_:

  return;
}

static void f_read_source_264(struct f_greenc_1fr *up_) {
  struct f_read_source_264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_991 = rt_str_new((((rt_int)10000LL) - ((rt_int)1LL) + 1));
F->bl_992 = ((rt_int)0LL);
{ rt_frame xf994;
if (RT_TRY(xf994)) {
for (;;) {
(F->c_993 = rt_g_getc());
if ((F->c_993 == 10)) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_lex_line_250(F->up, rt_str_slice(F->buf_991, ((rt_int)1LL), F->bl_992));
F->bl_992 = ((rt_int)0LL);
} else {
F->bl_992 = rt_add(F->bl_992, ((rt_int)1LL));
(*rt_str_at(&F->buf_991, F->bl_992)) = F->c_993;
}
}
L_end_996: ;
RT_POP(xf994);
} else {
RT_POP(xf994);
int x995 = rt_xcur;
if (rt_g_aborted()) rt_raise(x995);
if (0 || x995 == rt_exc("END_OF_FILE")) {
if ((F->bl_992 > ((rt_int)0LL))) {
F->up->src_line_110 = rt_add(F->up->src_line_110, ((rt_int)1LL));
f_lex_line_250(F->up, rt_str_slice(F->buf_991, ((rt_int)1LL), F->bl_992));
}
f_add_token_239(F->up, ((rt_int)0LL), rt_str("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x995);
}
}
}
ret_:

  return;
}

static P169 f_nn_267(struct f_greenc_1fr *up_, rt_int kind_265, rt_int line_266) {
  struct f_nn_267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_265 = kind_265;
F->line_266 = line_266;
F->result_ = ({ R170 *cell997 = rt_alloc(sizeof(R170)); *cell997 = cp_R170(({ R170 ag998; ag998.kind_ = F->kind_265; ag998.line_ = F->line_266; ag998.ival_ = ((rt_int)0LL); ag998.flag_ = ((rt_int)0LL); ag998.name_ = NULL; ag998.tag_ = NULL; ag998.a_ = NULL; ag998.b_ = NULL; ag998.c_ = NULL; ag998.d_ = NULL; ag998.e_ = NULL; ag998.next_ = NULL; ag998.formal_ = NULL; ag998; })); (P169)cell997; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_271(struct f_greenc_1fr *up_, P169 *head_268, P169 *tail_269, P169 x_270) {
  struct f_append_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_268 = head_268;
F->tail_269 = tail_269;
F->x_270 = x_270;
if ((F->x_270 == NULL)) {
goto ret_;
}
if (((*F->head_268) == NULL)) {
(*F->head_268) = F->x_270;
} else {
(*(P169)rt_nil_check((*F->tail_269))).next_ = F->x_270;
}
(*F->tail_269) = F->x_270;
while (((*(P169)rt_nil_check((*F->tail_269))).next_ != NULL)) {
(*F->tail_269) = (*(P169)rt_nil_check((*F->tail_269))).next_;
}
L_end_999: ;
ret_:

  return;
}

static rt_int f_list_len_273(struct f_greenc_1fr *up_, P169 l_272) {
  struct f_list_len_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_272 = l_272;
F->n_1000 = ((rt_int)0LL);
F->p_1001 = NULL;
F->p_1001 = F->l_272;
while ((F->p_1001 != NULL)) {
F->n_1000 = rt_add(F->n_1000, ((rt_int)1LL));
F->p_1001 = (*(P169)rt_nil_check(F->p_1001)).next_;
}
L_end_1002: ;
F->result_ = F->n_1000;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_274(struct f_greenc_1fr *up_) {
  struct f_cur_line_274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_276(struct f_greenc_1fr *up_, rstr w_275) {
  struct f_at_kw_276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_275 = rt_str_copy(w_275);
F->result_ = (((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).kind_ == ((rt_int)2LL)) && rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), F->w_275));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_278(struct f_greenc_1fr *up_, rstr w_277) {
  struct f_at_op_278fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_277 = rt_str_copy(w_277);
F->result_ = (((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).kind_ == ((rt_int)3LL)) && rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), F->w_277));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_280(struct f_greenc_1fr *up_, rt_int k_279) {
  struct f_at_kind_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_279 = k_279;
F->result_ = ((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).kind_ == F->k_279);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_282(struct f_greenc_1fr *up_, rt_int k_281) {
  struct f_kind_at_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_281 = k_281;
if ((rt_add(F->up->tpos_109, F->k_281) > F->up->ntoks_108)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_add(F->up->tpos_109, F->k_281), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_text_at_284(struct f_greenc_1fr *up_, rt_int k_283) {
  struct f_text_at_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_283 = k_283;
if ((rt_add(F->up->tpos_109, F->k_283) > F->up->ntoks_108)) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = (*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_add(F->up->tpos_109, F->k_283), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_286(struct f_greenc_1fr *up_, rstr msg_285) {
  struct f_perror_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_285 = rt_str_copy(msg_285);
f_fail_222(F->up, (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).line_, rt_str_catc(rt_str_cat(rt_str_cat(F->msg_285, rt_str(" (at ", 5)), (*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_))), 41));
ret_:

  return;
}

static void f_skip_287(struct f_greenc_1fr *up_) {
  struct f_skip_287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_289(struct f_greenc_1fr *up_, rstr w_288) {
  struct f_expect_kw_289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_288 = rt_str_copy(w_288);
if ((!f_at_kw_276(F->up, F->w_288))) {
f_perror_286(F->up, rt_str_cat(rt_str("expected ", 9), F->w_288));
}
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_291(struct f_greenc_1fr *up_, rstr w_290) {
  struct f_expect_op_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_290 = rt_str_copy(w_290);
if ((!f_at_op_278(F->up, F->w_290))) {
f_perror_286(F->up, rt_str_cat(rt_str("expected ", 9), F->w_290));
}
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_293(struct f_greenc_1fr *up_, P135 *res_292) {
  struct f_expect_id_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_292 = res_292;
if ((!f_at_kind_280(F->up, ((rt_int)1LL)))) {
f_perror_286(F->up, rt_str("expected an identifier", 22));
}
F->up->tpos_109 = rt_add(F->up->tpos_109, ((rt_int)1LL));
(*F->res_292) = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->tpos_109, ((rt_int)1LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_295(struct f_greenc_1fr *up_, P169 *res_294) {
  struct f_name_node_295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_294 = res_294;
F->x_1003 = NULL;
F->x_1003 = f_nn_267(F->up, ((rt_int)5LL), f_cur_line_274(F->up));
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1003)).name_);
(*F->res_294) = F->x_1003;
goto ret_;
ret_:

  return;
}

static void f_id_list_297(struct f_greenc_1fr *up_, P169 *res_296) {
  struct f_id_list_297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_296 = res_296;
F->head_1004 = NULL;
F->tail_1005 = NULL;
F->x_1006 = NULL;
f_name_node_295(F->up, &F->x_1006);
f_append_271(F->up, &F->head_1004, &F->tail_1005, F->x_1006);
while (f_at_op_278(F->up, rt_str(",", 1))) {
f_skip_287(F->up);
f_name_node_295(F->up, &F->x_1006);
f_append_271(F->up, &F->head_1004, &F->tail_1005, F->x_1006);
}
L_end_1007: ;
(*F->res_296) = F->head_1004;
goto ret_;
ret_:

  return;
}

static P169 f_binop_302(struct f_greenc_1fr *up_, P135 op_298, P169 l_299, P169 r_300, rt_int line_301) {
  struct f_binop_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_298 = op_298;
F->l_299 = l_299;
F->r_300 = r_300;
F->line_301 = line_301;
F->x_1008 = NULL;
F->x_1008 = f_nn_267(F->up, ((rt_int)7LL), F->line_301);
(*(P169)rt_nil_check(F->x_1008)).name_ = F->op_298;
(*(P169)rt_nil_check(F->x_1008)).a_ = F->l_299;
(*(P169)rt_nil_check(F->x_1008)).b_ = F->r_300;
F->result_ = F->x_1008;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_304(struct f_greenc_1fr *up_, P169 *res_303) {
  struct f_expr_304fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_303 = res_303;
F->l_1009 = NULL;
F->r_1010 = NULL;
F->op_1011 = NULL;
f_relation_308(F->up, &F->l_1009);
while (((f_at_kw_276(F->up, rt_str("AND", 3)) || f_at_kw_276(F->up, rt_str("OR", 2))) || f_at_kw_276(F->up, rt_str("XOR", 3)))) {
F->op_1011 = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
F->line_1012 = f_cur_line_274(F->up);
f_skip_287(F->up);
if ((rt_str_eq((*(P135)rt_nil_check(F->op_1011)), rt_str("AND", 3)) && f_at_kw_276(F->up, rt_str("THEN", 4)))) {
f_skip_287(F->up);
} else if ((rt_str_eq((*(P135)rt_nil_check(F->op_1011)), rt_str("OR", 2)) && f_at_kw_276(F->up, rt_str("ELSE", 4)))) {
f_skip_287(F->up);
}
f_relation_308(F->up, &F->r_1010);
F->l_1009 = f_binop_302(F->up, F->op_1011, F->l_1009, F->r_1010, F->line_1012);
}
L_end_1013: ;
(*F->res_303) = F->l_1009;
goto ret_;
ret_:

  return;
}

static int f_is_rel_306(struct f_greenc_1fr *up_, rstr s_305) {
  struct f_is_rel_306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_305 = rt_str_copy(s_305);
F->result_ = (((((rt_str_eq(F->s_305, rt_str("=", 1)) || rt_str_eq(F->s_305, rt_str("/=", 2))) || rt_str_eq(F->s_305, rt_str("<", 1))) || rt_str_eq(F->s_305, rt_str("<=", 2))) || rt_str_eq(F->s_305, rt_str(">", 1))) || rt_str_eq(F->s_305, rt_str(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_308(struct f_greenc_1fr *up_, P169 *res_307) {
  struct f_relation_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_307 = res_307;
F->l_1014 = NULL;
F->r_1015 = NULL;
F->lo_1016 = NULL;
F->hi_1017 = NULL;
F->t_1018 = NULL;
F->op_1019 = NULL;
F->line_1020 = f_cur_line_274(F->up);
F->neg_1021 = 0;
f_simple_expr_310(F->up, &F->l_1014);
if ((f_at_kind_280(F->up, ((rt_int)3LL)) && f_is_rel_306(F->up, (*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_))))) {
F->op_1019 = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
f_simple_expr_310(F->up, &F->r_1015);
F->l_1014 = f_binop_302(F->up, F->op_1019, F->l_1014, F->r_1015, F->line_1020);
(*F->res_307) = F->l_1014;
goto ret_;
}
if (((f_at_kw_276(F->up, rt_str("NOT", 3)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("IN", 2)))) {
f_skip_287(F->up);
F->neg_1021 = 1;
}
if (f_at_kw_276(F->up, rt_str("IN", 2))) {
f_skip_287(F->up);
f_simple_expr_310(F->up, &F->lo_1016);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &F->hi_1017);
F->t_1018 = f_nn_267(F->up, ((rt_int)14LL), F->line_1020);
(*(P169)rt_nil_check(F->t_1018)).a_ = F->lo_1016;
(*(P169)rt_nil_check(F->t_1018)).b_ = F->hi_1017;
F->op_1019 = f_mk_201(F->up, rt_str("IN", 2));
F->l_1014 = f_binop_302(F->up, F->op_1019, F->l_1014, F->t_1018, F->line_1020);
if (F->neg_1021) {
F->t_1018 = f_nn_267(F->up, ((rt_int)6LL), F->line_1020);
(*(P169)rt_nil_check(F->t_1018)).name_ = f_mk_201(F->up, rt_str("NOT", 3));
(*(P169)rt_nil_check(F->t_1018)).a_ = F->l_1014;
(*F->res_307) = F->t_1018;
goto ret_;
}
}
(*F->res_307) = F->l_1014;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_310(struct f_greenc_1fr *up_, P169 *res_309) {
  struct f_simple_expr_310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_309 = res_309;
F->l_1022 = NULL;
F->r_1023 = NULL;
F->op_1024 = NULL;
F->line_1025 = f_cur_line_274(F->up);
if (((f_at_op_278(F->up, rt_str("+", 1)) || f_at_op_278(F->up, rt_str("-", 1))) || f_at_kw_276(F->up, rt_str("NOT", 3)))) {
F->op_1024 = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
f_term_312(F->up, &F->r_1023);
F->l_1022 = f_nn_267(F->up, ((rt_int)6LL), F->line_1025);
(*(P169)rt_nil_check(F->l_1022)).name_ = F->op_1024;
(*(P169)rt_nil_check(F->l_1022)).a_ = F->r_1023;
} else {
f_term_312(F->up, &F->l_1022);
}
while (((f_at_op_278(F->up, rt_str("+", 1)) || f_at_op_278(F->up, rt_str("-", 1))) || f_at_op_278(F->up, rt_str("&", 1)))) {
F->op_1024 = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
f_term_312(F->up, &F->r_1023);
F->l_1022 = f_binop_302(F->up, F->op_1024, F->l_1022, F->r_1023, F->line_1025);
}
L_end_1026: ;
(*F->res_309) = F->l_1022;
goto ret_;
ret_:

  return;
}

static void f_term_312(struct f_greenc_1fr *up_, P169 *res_311) {
  struct f_term_312fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_311 = res_311;
F->l_1027 = NULL;
F->r_1028 = NULL;
F->op_1029 = NULL;
F->line_1030 = f_cur_line_274(F->up);
f_factor_314(F->up, &F->l_1027);
while (((f_at_op_278(F->up, rt_str("*", 1)) || f_at_op_278(F->up, rt_str("/", 1))) || f_at_kw_276(F->up, rt_str("MOD", 3)))) {
F->op_1029 = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
f_factor_314(F->up, &F->r_1028);
F->l_1027 = f_binop_302(F->up, F->op_1029, F->l_1027, F->r_1028, F->line_1030);
}
L_end_1031: ;
(*F->res_311) = F->l_1027;
goto ret_;
ret_:

  return;
}

static void f_factor_314(struct f_greenc_1fr *up_, P169 *res_313) {
  struct f_factor_314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_313 = res_313;
F->l_1032 = NULL;
F->r_1033 = NULL;
F->op_1034 = NULL;
F->line_1035 = f_cur_line_274(F->up);
f_primary_316(F->up, &F->l_1032);
if (f_at_op_278(F->up, rt_str("**", 2))) {
F->op_1034 = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
f_primary_316(F->up, &F->r_1033);
F->l_1032 = f_binop_302(F->up, F->op_1034, F->l_1032, F->r_1033, F->line_1035);
}
(*F->res_313) = F->l_1032;
goto ret_;
ret_:

  return;
}

static void f_primary_316(struct f_greenc_1fr *up_, P169 *res_315) {
  struct f_primary_316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_315 = res_315;
F->x_1036 = NULL;
F->line_1037 = f_cur_line_274(F->up);
if (f_at_kind_280(F->up, ((rt_int)4LL))) {
F->x_1036 = f_nn_267(F->up, ((rt_int)1LL), F->line_1037);
(*(P169)rt_nil_check(F->x_1036)).ival_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).ival_;
(*(P169)rt_nil_check(F->x_1036)).name_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
(*F->res_315) = F->x_1036;
goto ret_;
}
if (f_at_kind_280(F->up, ((rt_int)5LL))) {
F->x_1036 = f_nn_267(F->up, ((rt_int)2LL), F->line_1037);
(*(P169)rt_nil_check(F->x_1036)).name_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
(*F->res_315) = F->x_1036;
goto ret_;
}
if (f_at_kind_280(F->up, ((rt_int)6LL))) {
F->x_1036 = f_nn_267(F->up, ((rt_int)3LL), F->line_1037);
(*(P169)rt_nil_check(F->x_1036)).name_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
(*F->res_315) = F->x_1036;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("NULL", 4))) {
f_skip_287(F->up);
F->x_1036 = f_nn_267(F->up, ((rt_int)4LL), F->line_1037);
(*F->res_315) = F->x_1036;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("NEW", 3))) {
f_skip_287(F->up);
F->x_1036 = f_nn_267(F->up, ((rt_int)11LL), F->line_1037);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1036)).name_);
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_agg_or_paren_318(F->up, &(*(P169)rt_nil_check(F->x_1036)).a_);
}
(*F->res_315) = F->x_1036;
goto ret_;
}
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_agg_or_paren_318(F->up, &F->x_1036);
(*F->res_315) = F->x_1036;
goto ret_;
}
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
f_name_p_320(F->up, &F->x_1036);
(*F->res_315) = F->x_1036;
goto ret_;
}
f_perror_286(F->up, rt_str("expected an expression", 22));
(*F->res_315) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_318(struct f_greenc_1fr *up_, P169 *res_317) {
  struct f_agg_or_paren_318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_317 = res_317;
F->line_1038 = f_cur_line_274(F->up);
F->items_1039 = NULL;
F->itail_1040 = NULL;
F->it_1041 = NULL;
F->first_1042 = NULL;
F->keys_1043 = NULL;
F->ktail_1044 = NULL;
F->lab_1045 = NULL;
F->x_1046 = NULL;
F->more_1047 = 1;
f_expect_op_291(F->up, rt_str("(", 1));
while (F->more_1047) {
F->it_1041 = f_nn_267(F->up, ((rt_int)13LL), F->line_1038);
if (f_at_kw_276(F->up, rt_str("OTHERS", 6))) {
f_skip_287(F->up);
f_expect_op_291(F->up, rt_str("=>", 2));
F->lab_1045 = f_nn_267(F->up, ((rt_int)61LL), F->line_1038);
(*(P169)rt_nil_check(F->lab_1045)).flag_ = ((rt_int)1LL);
(*(P169)rt_nil_check(F->it_1041)).a_ = F->lab_1045;
f_expr_304(F->up, &(*(P169)rt_nil_check(F->it_1041)).b_);
} else {
f_expr_304(F->up, &F->first_1042);
if (((f_at_op_278(F->up, rt_str("..", 2)) || f_at_op_278(F->up, rt_str("|", 1))) || f_at_op_278(F->up, rt_str("=>", 2)))) {
F->keys_1043 = NULL;
F->ktail_1044 = NULL;
for (;;) {
F->lab_1045 = f_nn_267(F->up, ((rt_int)61LL), F->line_1038);
(*(P169)rt_nil_check(F->lab_1045)).a_ = F->first_1042;
if (f_at_op_278(F->up, rt_str("..", 2))) {
f_skip_287(F->up);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->lab_1045)).b_);
}
f_append_271(F->up, &F->keys_1043, &F->ktail_1044, F->lab_1045);
if ((!f_at_op_278(F->up, rt_str("|", 1)))) {
goto L_end_1049;
}
f_skip_287(F->up);
f_simple_expr_310(F->up, &F->first_1042);
}
L_end_1049: ;
f_expect_op_291(F->up, rt_str("=>", 2));
(*(P169)rt_nil_check(F->it_1041)).a_ = F->keys_1043;
f_expr_304(F->up, &(*(P169)rt_nil_check(F->it_1041)).b_);
} else {
(*(P169)rt_nil_check(F->it_1041)).b_ = F->first_1042;
}
}
f_append_271(F->up, &F->items_1039, &F->itail_1040, F->it_1041);
F->more_1047 = f_at_op_278(F->up, rt_str(",", 1));
if (F->more_1047) {
f_skip_287(F->up);
}
}
L_end_1048: ;
f_expect_op_291(F->up, rt_str(")", 1));
if ((((*(P169)rt_nil_check(F->items_1039)).next_ == NULL) && ((*(P169)rt_nil_check(F->items_1039)).a_ == NULL))) {
F->x_1046 = f_nn_267(F->up, ((rt_int)15LL), F->line_1038);
(*(P169)rt_nil_check(F->x_1046)).a_ = (*(P169)rt_nil_check(F->items_1039)).b_;
(*F->res_317) = F->x_1046;
goto ret_;
}
F->x_1046 = f_nn_267(F->up, ((rt_int)12LL), F->line_1038);
(*(P169)rt_nil_check(F->x_1046)).a_ = F->items_1039;
(*F->res_317) = F->x_1046;
goto ret_;
ret_:

  return;
}

static void f_name_p_320(struct f_greenc_1fr *up_, P169 *res_319) {
  struct f_name_p_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_319 = res_319;
F->p_1050 = NULL;
F->x_1051 = NULL;
F->args_1052 = NULL;
F->atail_1053 = NULL;
F->lo_1054 = NULL;
F->r_1055 = NULL;
F->line_1056 = f_cur_line_274(F->up);
f_name_node_295(F->up, &F->p_1050);
for (;;) {
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
F->args_1052 = NULL;
F->atail_1053 = NULL;
if ((!f_at_op_278(F->up, rt_str(")", 1)))) {
F->more_1057 = 1;
while (F->more_1057) {
{
F->formal_1061 = NULL;
F->mark_1062 = ((rt_int)0LL);
if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) || rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("=>", 2))))) {
F->formal_1061 = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
if (rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(":=", 2))) {
F->mark_1062 = ((rt_int)1LL);
} else if (rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("=:", 2))) {
F->mark_1062 = ((rt_int)3LL);
} else if (rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) {
F->mark_1062 = ((rt_int)2LL);
} else {
F->mark_1062 = ((rt_int)4LL);
}
f_skip_287(F->up);
f_skip_287(F->up);
}
f_expr_304(F->up, &F->lo_1054);
if (f_at_op_278(F->up, rt_str("..", 2))) {
f_skip_287(F->up);
F->r_1055 = f_nn_267(F->up, ((rt_int)14LL), F->line_1056);
(*(P169)rt_nil_check(F->r_1055)).a_ = F->lo_1054;
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1055)).b_);
F->lo_1054 = F->r_1055;
}
(*(P169)rt_nil_check(F->lo_1054)).formal_ = F->formal_1061;
(*(P169)rt_nil_check(F->lo_1054)).flag_ = F->mark_1062;
f_append_271(F->up, &F->args_1052, &F->atail_1053, F->lo_1054);

}
L_end_1060: ;
F->more_1057 = f_at_op_278(F->up, rt_str(",", 1));
if (F->more_1057) {
f_skip_287(F->up);
}
}
L_end_1059: ;
}
f_expect_op_291(F->up, rt_str(")", 1));
F->x_1051 = f_nn_267(F->up, ((rt_int)8LL), F->line_1056);
(*(P169)rt_nil_check(F->x_1051)).a_ = F->p_1050;
(*(P169)rt_nil_check(F->x_1051)).b_ = F->args_1052;
F->p_1050 = F->x_1051;
} else if (f_at_op_278(F->up, rt_str(".", 1))) {
f_skip_287(F->up);
F->x_1051 = f_nn_267(F->up, ((rt_int)9LL), F->line_1056);
(*(P169)rt_nil_check(F->x_1051)).a_ = F->p_1050;
if (f_at_kw_276(F->up, rt_str("ALL", 3))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1051)).name_ = f_mk_201(F->up, rt_str("ALL", 3));
} else {
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1051)).name_);
}
F->p_1050 = F->x_1051;
} else if (f_at_op_278(F->up, rt_str("'", 1))) {
f_skip_287(F->up);
F->x_1051 = f_nn_267(F->up, ((rt_int)10LL), F->line_1056);
(*(P169)rt_nil_check(F->x_1051)).a_ = F->p_1050;
(*(P169)rt_nil_check(F->x_1051)).name_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1051)).b_);
f_expect_op_291(F->up, rt_str(")", 1));
}
F->p_1050 = F->x_1051;
} else {
(*F->res_319) = F->p_1050;
goto ret_;
}
}
L_end_1058: ;
ret_:

  return;
}

static void f_subtype_ind_322(struct f_greenc_1fr *up_, P169 *res_321) {
  struct f_subtype_ind_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_321 = res_321;
F->x_1063 = NULL;
F->r_1064 = NULL;
F->args_1065 = NULL;
F->atail_1066 = NULL;
F->lo_1067 = NULL;
F->line_1068 = f_cur_line_274(F->up);
F->more_1069 = 1;
F->x_1063 = f_nn_267(F->up, ((rt_int)80LL), F->line_1068);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1063)).name_);
while (f_at_op_278(F->up, rt_str(".", 1))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1063)).tag_ = (*(P169)rt_nil_check(F->x_1063)).name_;
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1063)).name_);
}
L_end_1070: ;
if (f_at_kw_276(F->up, rt_str("RANGE", 5))) {
f_skip_287(F->up);
F->r_1064 = f_nn_267(F->up, ((rt_int)14LL), F->line_1068);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1064)).a_);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1064)).b_);
(*(P169)rt_nil_check(F->x_1063)).a_ = F->r_1064;
(*(P169)rt_nil_check(F->x_1063)).flag_ = ((rt_int)1LL);
} else if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
while (F->more_1069) {
f_expr_304(F->up, &F->lo_1067);
if (f_at_op_278(F->up, rt_str("..", 2))) {
f_skip_287(F->up);
F->r_1064 = f_nn_267(F->up, ((rt_int)14LL), F->line_1068);
(*(P169)rt_nil_check(F->r_1064)).a_ = F->lo_1067;
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1064)).b_);
F->lo_1067 = F->r_1064;
}
f_append_271(F->up, &F->args_1065, &F->atail_1066, F->lo_1067);
F->more_1069 = f_at_op_278(F->up, rt_str(",", 1));
if (F->more_1069) {
f_skip_287(F->up);
}
}
L_end_1071: ;
f_expect_op_291(F->up, rt_str(")", 1));
(*(P169)rt_nil_check(F->x_1063)).a_ = F->args_1065;
(*(P169)rt_nil_check(F->x_1063)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_276(F->up, rt_str("DIGITS", 6)) || f_at_kw_276(F->up, rt_str("DELTA", 5)))) {
f_skip_287(F->up);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->x_1063)).b_);
(*(P169)rt_nil_check(F->x_1063)).flag_ = ((rt_int)3LL);
if (f_at_kw_276(F->up, rt_str("RANGE", 5))) {
f_skip_287(F->up);
F->r_1064 = f_nn_267(F->up, ((rt_int)14LL), F->line_1068);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1064)).a_);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1064)).b_);
(*(P169)rt_nil_check(F->x_1063)).a_ = F->r_1064;
}
}
(*F->res_321) = F->x_1063;
goto ret_;
ret_:

  return;
}

static void f_type_spec_324(struct f_greenc_1fr *up_, P169 *res_323) {
  struct f_type_spec_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_323 = res_323;
F->x_1072 = NULL;
if ((((((((f_at_op_278(F->up, rt_str("(", 1)) || f_at_kw_276(F->up, rt_str("ARRAY", 5))) || f_at_kw_276(F->up, rt_str("RECORD", 6))) || f_at_kw_276(F->up, rt_str("ACCESS", 6))) || f_at_kw_276(F->up, rt_str("RANGE", 5))) || f_at_kw_276(F->up, rt_str("DIGITS", 6))) || f_at_kw_276(F->up, rt_str("DELTA", 5))) || f_at_kw_276(F->up, rt_str("NEW", 3)))) {
f_type_def_326(F->up, &F->x_1072);
} else {
f_subtype_ind_322(F->up, &F->x_1072);
}
(*F->res_323) = F->x_1072;
goto ret_;
ret_:

  return;
}

static void f_type_def_326(struct f_greenc_1fr *up_, P169 *res_325) {
  struct f_type_def_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_325 = res_325;
F->x_1073 = NULL;
F->lits_1074 = NULL;
F->ltail_1075 = NULL;
F->l_1076 = NULL;
F->idx_1077 = NULL;
F->itail_1078 = NULL;
F->r_1079 = NULL;
F->comps_1080 = NULL;
F->ctail_1081 = NULL;
F->names_1082 = NULL;
F->st_1083 = NULL;
F->def_1084 = NULL;
F->cm_1085 = NULL;
F->line_1086 = f_cur_line_274(F->up);
F->more_1087 = 1;
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
F->x_1073 = f_nn_267(F->up, ((rt_int)70LL), F->line_1086);
while (F->more_1087) {
if (f_at_kind_280(F->up, ((rt_int)6LL))) {
F->l_1076 = f_nn_267(F->up, ((rt_int)3LL), F->line_1086);
(*(P169)rt_nil_check(F->l_1076)).name_ = (*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_;
f_skip_287(F->up);
} else {
f_name_node_295(F->up, &F->l_1076);
}
f_append_271(F->up, &F->lits_1074, &F->ltail_1075, F->l_1076);
F->more_1087 = f_at_op_278(F->up, rt_str(",", 1));
if (F->more_1087) {
f_skip_287(F->up);
}
}
L_end_1088: ;
f_expect_op_291(F->up, rt_str(")", 1));
(*(P169)rt_nil_check(F->x_1073)).a_ = F->lits_1074;
(*F->res_325) = F->x_1073;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("RANGE", 5))) {
f_skip_287(F->up);
F->x_1073 = f_nn_267(F->up, ((rt_int)71LL), F->line_1086);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->x_1073)).a_);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->x_1073)).b_);
(*F->res_325) = F->x_1073;
goto ret_;
}
if ((f_at_kw_276(F->up, rt_str("DIGITS", 6)) || f_at_kw_276(F->up, rt_str("DELTA", 5)))) {
F->x_1073 = f_nn_267(F->up, ((rt_int)72LL), F->line_1086);
(*(P169)rt_nil_check(F->x_1073)).flag_ = ((rt_int)1LL);
if (f_at_kw_276(F->up, rt_str("DELTA", 5))) {
(*(P169)rt_nil_check(F->x_1073)).flag_ = ((rt_int)2LL);
}
f_skip_287(F->up);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->x_1073)).a_);
if (f_at_kw_276(F->up, rt_str("RANGE", 5))) {
f_skip_287(F->up);
F->r_1079 = f_nn_267(F->up, ((rt_int)14LL), F->line_1086);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1079)).a_);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1079)).b_);
(*(P169)rt_nil_check(F->x_1073)).b_ = F->r_1079;
}
(*F->res_325) = F->x_1073;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("ARRAY", 5))) {
f_skip_287(F->up);
F->x_1073 = f_nn_267(F->up, ((rt_int)73LL), F->line_1086);
f_expect_op_291(F->up, rt_str("(", 1));
while (F->more_1087) {
if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(",", 1)) || rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(")", 1))))) {
F->l_1076 = f_nn_267(F->up, ((rt_int)80LL), F->line_1086);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->l_1076)).name_);
(*(P169)rt_nil_check(F->x_1073)).flag_ = ((rt_int)1LL);
} else {
F->l_1076 = f_nn_267(F->up, ((rt_int)14LL), F->line_1086);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->l_1076)).a_);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->l_1076)).b_);
}
f_append_271(F->up, &F->idx_1077, &F->itail_1078, F->l_1076);
F->more_1087 = f_at_op_278(F->up, rt_str(",", 1));
if (F->more_1087) {
f_skip_287(F->up);
}
}
L_end_1089: ;
f_expect_op_291(F->up, rt_str(")", 1));
f_expect_kw_289(F->up, rt_str("OF", 2));
(*(P169)rt_nil_check(F->x_1073)).a_ = F->idx_1077;
f_type_spec_324(F->up, &(*(P169)rt_nil_check(F->x_1073)).b_);
(*F->res_325) = F->x_1073;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("RECORD", 6))) {
f_skip_287(F->up);
F->x_1073 = f_nn_267(F->up, ((rt_int)74LL), F->line_1086);
while ((!f_at_kw_276(F->up, rt_str("END", 3)))) {
if (f_at_kw_276(F->up, rt_str("NULL", 4))) {
f_skip_287(F->up);
f_expect_op_291(F->up, rt_str(";", 1));
} else {
f_id_list_297(F->up, &F->names_1082);
f_expect_op_291(F->up, rt_str(":", 1));
if (f_at_kw_276(F->up, rt_str("CONSTANT", 8))) {
f_skip_287(F->up);
}
f_type_spec_324(F->up, &F->st_1083);
F->def_1084 = NULL;
if (f_at_op_278(F->up, rt_str(":=", 2))) {
f_skip_287(F->up);
f_expr_304(F->up, &F->def_1084);
}
f_expect_op_291(F->up, rt_str(";", 1));
while ((F->names_1082 != NULL)) {
F->cm_1085 = f_nn_267(F->up, ((rt_int)63LL), (*(P169)rt_nil_check(F->names_1082)).line_);
(*(P169)rt_nil_check(F->cm_1085)).name_ = (*(P169)rt_nil_check(F->names_1082)).name_;
(*(P169)rt_nil_check(F->cm_1085)).a_ = F->st_1083;
(*(P169)rt_nil_check(F->cm_1085)).b_ = F->def_1084;
f_append_271(F->up, &F->comps_1080, &F->ctail_1081, F->cm_1085);
F->names_1082 = (*(P169)rt_nil_check(F->names_1082)).next_;
}
L_end_1091: ;
}
}
L_end_1090: ;
f_expect_kw_289(F->up, rt_str("END", 3));
f_expect_kw_289(F->up, rt_str("RECORD", 6));
(*(P169)rt_nil_check(F->x_1073)).a_ = F->comps_1080;
(*F->res_325) = F->x_1073;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("ACCESS", 6))) {
f_skip_287(F->up);
F->x_1073 = f_nn_267(F->up, ((rt_int)75LL), F->line_1086);
f_type_spec_324(F->up, &(*(P169)rt_nil_check(F->x_1073)).a_);
(*F->res_325) = F->x_1073;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("NEW", 3))) {
f_skip_287(F->up);
F->x_1073 = f_nn_267(F->up, ((rt_int)76LL), F->line_1086);
f_subtype_ind_322(F->up, &(*(P169)rt_nil_check(F->x_1073)).a_);
(*F->res_325) = F->x_1073;
goto ret_;
}
f_perror_286(F->up, rt_str("expected a type definition", 26));
(*F->res_325) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_328(struct f_greenc_1fr *up_, P169 *res_327) {
  struct f_pragma_p_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_327 = res_327;
F->x_1092 = NULL;
F->a_1093 = NULL;
F->head_1094 = NULL;
F->tail_1095 = NULL;
F->x_1092 = f_nn_267(F->up, ((rt_int)56LL), f_cur_line_274(F->up));
f_expect_kw_289(F->up, rt_str("PRAGMA", 6));
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1092)).name_);
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
for (;;) {
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
f_name_node_295(F->up, &F->a_1093);
} else if (((f_at_kind_280(F->up, ((rt_int)6LL)) || f_at_kind_280(F->up, ((rt_int)4LL))) || f_at_kind_280(F->up, ((rt_int)5LL)))) {
f_primary_316(F->up, &F->a_1093);
} else {
f_perror_286(F->up, rt_str("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_271(F->up, &F->head_1094, &F->tail_1095, F->a_1093);
if ((!f_at_op_278(F->up, rt_str(",", 1)))) {
goto L_end_1096;
}
f_skip_287(F->up);
}
L_end_1096: ;
f_expect_op_291(F->up, rt_str(")", 1));
}
f_expect_op_291(F->up, rt_str(";", 1));
(*(P169)rt_nil_check(F->x_1092)).a_ = F->head_1094;
f_check_pragma_330(F->up, F->x_1092);
(*F->res_327) = F->x_1092;
ret_:

  return;
}

static void f_check_pragma_330(struct f_greenc_1fr *up_, P169 x_329) {
  struct f_check_pragma_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_329 = x_329;
F->p_1097 = rt_str_copy((*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_329)).name_)));
F->n_1098 = f_list_len_273(F->up, (*(P169)rt_nil_check(F->x_329)).a_);
F->a_1099 = NULL;
F->a_1099 = (*(P169)rt_nil_check(F->x_329)).a_;
if ((rt_str_eq(F->p_1097, rt_str("PAGE", 4)) || rt_str_eq(F->p_1097, rt_str("INLINE", 6)))) {
if ((F->n_1098 != ((rt_int)0LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1097), rt_str(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((rt_str_eq(F->p_1097, rt_str("LIST", 4)) || rt_str_eq(F->p_1097, rt_str("OPTIMIZE", 8))) || rt_str_eq(F->p_1097, rt_str("CREATION", 8))) || rt_str_eq(F->p_1097, rt_str("INTERFACE", 9))) || rt_str_eq(F->p_1097, rt_str("SYSTEM", 6)))) {
if (((F->n_1098 != ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->a_1099)).kind_ != ((rt_int)5LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1097), rt_str(" takes one identifier (RM79 App. B)", 35)));
}
if (((rt_str_eq(F->p_1097, rt_str("LIST", 4)) && (!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1099)).name_)), rt_str("ON", 2)))) && (!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1099)).name_)), rt_str("OFF", 3))))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((rt_str_eq(F->p_1097, rt_str("OPTIMIZE", 8)) && (!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1099)).name_)), rt_str("TIME", 4)))) && (!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1099)).name_)), rt_str("SPACE", 5))))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((rt_str_eq(F->p_1097, rt_str("CREATION", 8)) && (!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1099)).name_)), rt_str("STATIC", 6)))) && (!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1099)).name_)), rt_str("DYNAMIC", 7))))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (rt_str_eq(F->p_1097, rt_str("OPTIMIZE", 8))) {
F->up->conf_optimize_199 = (*(P169)rt_nil_check(F->a_1099)).name_;
} else if (rt_str_eq(F->p_1097, rt_str("SYSTEM", 6))) {
F->up->conf_system_196 = (*(P169)rt_nil_check(F->a_1099)).name_;
}
} else if ((rt_str_eq(F->p_1097, rt_str("STORAGE_UNIT", 12)) || rt_str_eq(F->p_1097, rt_str("MEMORY_SIZE", 11)))) {
if (((F->n_1098 != ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->a_1099)).kind_ != ((rt_int)1LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1097), rt_str(" takes a number (RM79 13.7)", 27)));
}
if (rt_str_eq(F->p_1097, rt_str("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_197 = (*(P169)rt_nil_check(F->a_1099)).ival_;
} else {
F->up->conf_memory_size_198 = (*(P169)rt_nil_check(F->a_1099)).ival_;
}
} else if ((rt_str_eq(F->p_1097, rt_str("SUPPRESS", 8)) || rt_str_eq(F->p_1097, rt_str("ENVIRONMENT", 11)))) {
if ((F->n_1098 == ((rt_int)0LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1097), rt_str(" names at least one ", 20)), rt_str("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1099 != NULL)) {
if (((*(P169)rt_nil_check(F->a_1099)).kind_ != ((rt_int)5LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str_cat(rt_str_cat(rt_str("pragma ", 7), F->p_1097), rt_str(" takes names (RM79 App. B)", 26)));
}
F->a_1099 = (*(P169)rt_nil_check(F->a_1099)).next_;
}
L_end_1100: ;
} else if (rt_str_eq(F->p_1097, rt_str("INCLUDE", 7))) {
if (((F->n_1098 != ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->a_1099)).kind_ != ((rt_int)3LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->x_329)).line_, rt_str("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_skip_visibility_331(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_331fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_1101 = NULL;
f_skip_287(F->up);
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
f_id_list_297(F->up, &F->names_1101);
f_expect_op_291(F->up, rt_str(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_332(struct f_greenc_1fr *up_) {
  struct f_skip_representation_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_276(F->up, rt_str("USE", 3)))) {
f_skip_287(F->up);
}
L_end_1102: ;
f_skip_287(F->up);
if (f_at_kw_276(F->up, rt_str("RECORD", 6))) {
while ((!((f_at_kw_276(F->up, rt_str("END", 3)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("RECORD", 6))))) {
f_skip_287(F->up);
}
L_end_1103: ;
f_skip_287(F->up);
f_skip_287(F->up);
}
while ((!f_at_op_278(F->up, rt_str(";", 1)))) {
f_skip_287(F->up);
}
L_end_1104: ;
f_skip_287(F->up);
ret_:

  return;
}

static void f_decl_part_334(struct f_greenc_1fr *up_, P169 *res_333) {
  struct f_decl_part_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_333 = res_333;
F->head_1105 = NULL;
F->tail_1106 = NULL;
F->x_1107 = NULL;
F->names_1108 = NULL;
for (;;) {
if (f_at_kw_276(F->up, rt_str("PRAGMA", 6))) {
f_pragma_p_328(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if (f_at_kw_276(F->up, rt_str("USE", 3))) {
f_skip_287(F->up);
F->x_1107 = f_nn_267(F->up, ((rt_int)55LL), f_cur_line_274(F->up));
f_id_list_297(F->up, &(*(P169)rt_nil_check(F->x_1107)).a_);
f_expect_op_291(F->up, rt_str(";", 1));
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if (f_at_kw_276(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_331(F->up);
} else if (f_at_kw_276(F->up, rt_str("FOR", 3))) {
f_skip_representation_332(F->up);
} else if ((f_at_kw_276(F->up, rt_str("TYPE", 4)) || f_at_kw_276(F->up, rt_str("SUBTYPE", 7)))) {
f_type_decl_338(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if ((f_at_kw_276(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_276(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_344(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if (f_at_kw_276(F->up, rt_str("PACKAGE", 7))) {
f_package_p_350(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if (f_at_kw_276(F->up, rt_str("TASK", 4))) {
f_task_p_760(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if (f_at_kw_276(F->up, rt_str("GENERIC", 7))) {
f_generic_p_890(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if (f_at_kw_276(F->up, rt_str("ENTRY", 5))) {
f_entry_p_762(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(",", 1))))) {
f_object_decl_336(F->up, &F->x_1107);
f_append_271(F->up, &F->head_1105, &F->tail_1106, F->x_1107);
} else {
(*F->res_333) = F->head_1105;
goto ret_;
}
}
L_end_1109: ;
ret_:

  return;
}

static void f_object_decl_336(struct f_greenc_1fr *up_, P169 *res_335) {
  struct f_object_decl_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_335 = res_335;
F->head_1110 = NULL;
F->tail_1111 = NULL;
F->names_1112 = NULL;
F->st_1113 = NULL;
F->init_1114 = NULL;
F->x_1115 = NULL;
F->line_1116 = f_cur_line_274(F->up);
F->is_const_1117 = 0;
f_id_list_297(F->up, &F->names_1112);
f_expect_op_291(F->up, rt_str(":", 1));
if (f_at_kw_276(F->up, rt_str("EXCEPTION", 9))) {
f_skip_287(F->up);
if (f_at_kw_276(F->up, rt_str("RENAMES", 7))) {
f_skip_287(F->up);
F->x_1115 = f_nn_267(F->up, ((rt_int)46LL), F->line_1116);
(*(P169)rt_nil_check(F->x_1115)).name_ = (*(P169)rt_nil_check(F->names_1112)).name_;
f_name_p_320(F->up, &(*(P169)rt_nil_check(F->x_1115)).a_);
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_335) = F->x_1115;
goto ret_;
}
f_expect_op_291(F->up, rt_str(";", 1));
while ((F->names_1112 != NULL)) {
F->x_1115 = f_nn_267(F->up, ((rt_int)46LL), F->line_1116);
(*(P169)rt_nil_check(F->x_1115)).name_ = (*(P169)rt_nil_check(F->names_1112)).name_;
f_append_271(F->up, &F->head_1110, &F->tail_1111, F->x_1115);
F->names_1112 = (*(P169)rt_nil_check(F->names_1112)).next_;
}
L_end_1118: ;
(*F->res_335) = F->head_1110;
goto ret_;
}
if (f_at_kw_276(F->up, rt_str("CONSTANT", 8))) {
f_skip_287(F->up);
F->is_const_1117 = 1;
}
f_type_spec_324(F->up, &F->st_1113);
if ((f_at_kw_276(F->up, rt_str("RENAMES", 7)) && (!F->is_const_1117))) {
f_skip_287(F->up);
F->x_1115 = f_nn_267(F->up, ((rt_int)40LL), F->line_1116);
(*(P169)rt_nil_check(F->x_1115)).name_ = (*(P169)rt_nil_check(F->names_1112)).name_;
(*(P169)rt_nil_check(F->x_1115)).a_ = F->st_1113;
(*(P169)rt_nil_check(F->x_1115)).flag_ = ((rt_int)2LL);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1115)).b_);
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_335) = F->x_1115;
goto ret_;
}
if (f_at_op_278(F->up, rt_str(":=", 2))) {
f_skip_287(F->up);
f_expr_304(F->up, &F->init_1114);
}
f_expect_op_291(F->up, rt_str(";", 1));
while ((F->names_1112 != NULL)) {
if (F->is_const_1117) {
F->x_1115 = f_nn_267(F->up, ((rt_int)41LL), F->line_1116);
} else {
F->x_1115 = f_nn_267(F->up, ((rt_int)40LL), F->line_1116);
}
(*(P169)rt_nil_check(F->x_1115)).name_ = (*(P169)rt_nil_check(F->names_1112)).name_;
(*(P169)rt_nil_check(F->x_1115)).a_ = F->st_1113;
(*(P169)rt_nil_check(F->x_1115)).b_ = F->init_1114;
if ((!(F->is_const_1117 && (F->init_1114 == NULL)))) {
f_append_271(F->up, &F->head_1110, &F->tail_1111, F->x_1115);
}
F->names_1112 = (*(P169)rt_nil_check(F->names_1112)).next_;
}
L_end_1119: ;
(*F->res_335) = F->head_1110;
goto ret_;
ret_:

  return;
}

static void f_type_decl_338(struct f_greenc_1fr *up_, P169 *res_337) {
  struct f_type_decl_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_337 = res_337;
F->x_1120 = NULL;
F->line_1121 = f_cur_line_274(F->up);
if (f_at_kw_276(F->up, rt_str("SUBTYPE", 7))) {
f_skip_287(F->up);
F->x_1120 = f_nn_267(F->up, ((rt_int)43LL), F->line_1121);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1120)).name_);
f_expect_kw_289(F->up, rt_str("IS", 2));
f_subtype_ind_322(F->up, &(*(P169)rt_nil_check(F->x_1120)).a_);
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_337) = F->x_1120;
goto ret_;
}
f_expect_kw_289(F->up, rt_str("TYPE", 4));
F->x_1120 = f_nn_267(F->up, ((rt_int)42LL), F->line_1121);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1120)).name_);
if (f_at_op_278(F->up, rt_str(";", 1))) {
f_skip_287(F->up);
(*F->res_337) = NULL;
goto ret_;
}
f_expect_kw_289(F->up, rt_str("IS", 2));
if (f_at_kw_276(F->up, rt_str("PRIVATE", 7))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1120)).a_ = f_nn_267(F->up, ((rt_int)77LL), F->line_1121);
} else {
f_type_def_326(F->up, &(*(P169)rt_nil_check(F->x_1120)).a_);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_337) = F->x_1120;
goto ret_;
ret_:

  return;
}

static void f_formal_part_340(struct f_greenc_1fr *up_, P169 *res_339) {
  struct f_formal_part_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_339 = res_339;
F->head_1122 = NULL;
F->tail_1123 = NULL;
F->names_1124 = NULL;
F->st_1125 = NULL;
F->def_1126 = NULL;
F->p_1127 = NULL;
F->more_1129 = 1;
f_expect_op_291(F->up, rt_str("(", 1));
while (F->more_1129) {
f_id_list_297(F->up, &F->names_1124);
f_expect_op_291(F->up, rt_str(":", 1));
F->mode_1128 = ((rt_int)1LL);
if (f_at_kw_276(F->up, rt_str("IN", 2))) {
f_skip_287(F->up);
if (f_at_kw_276(F->up, rt_str("OUT", 3))) {
f_skip_287(F->up);
F->mode_1128 = ((rt_int)2LL);
}
} else if (f_at_kw_276(F->up, rt_str("OUT", 3))) {
f_skip_287(F->up);
F->mode_1128 = ((rt_int)3LL);
}
f_subtype_ind_322(F->up, &F->st_1125);
F->def_1126 = NULL;
if (f_at_op_278(F->up, rt_str(":=", 2))) {
f_skip_287(F->up);
f_expr_304(F->up, &F->def_1126);
}
while ((F->names_1124 != NULL)) {
F->p_1127 = f_nn_267(F->up, ((rt_int)47LL), (*(P169)rt_nil_check(F->names_1124)).line_);
(*(P169)rt_nil_check(F->p_1127)).name_ = (*(P169)rt_nil_check(F->names_1124)).name_;
(*(P169)rt_nil_check(F->p_1127)).ival_ = F->mode_1128;
(*(P169)rt_nil_check(F->p_1127)).a_ = F->st_1125;
(*(P169)rt_nil_check(F->p_1127)).b_ = F->def_1126;
f_append_271(F->up, &F->head_1122, &F->tail_1123, F->p_1127);
F->names_1124 = (*(P169)rt_nil_check(F->names_1124)).next_;
}
L_end_1131: ;
F->more_1129 = f_at_op_278(F->up, rt_str(";", 1));
if (F->more_1129) {
f_skip_287(F->up);
}
}
L_end_1130: ;
f_expect_op_291(F->up, rt_str(")", 1));
(*F->res_339) = F->head_1122;
goto ret_;
ret_:

  return;
}

static void f_designator_342(struct f_greenc_1fr *up_, P135 *res_341) {
  struct f_designator_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_341 = res_341;
if (f_at_kind_280(F->up, ((rt_int)6LL))) {
f_skip_287(F->up);
(*F->res_341) = f_mk_201(F->up, f_upper_s_214(F->up, (*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(rt_sub(F->up->tpos_109, ((rt_int)1LL)), F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_))));
if (rt_str_eq((*(P135)rt_nil_check((*F->res_341))), rt_str("/=", 2))) {
f_perror_286(F->up, rt_str("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_216(F->up, (*(P135)rt_nil_check((*F->res_341)))))) {
f_perror_286(F->up, rt_str_cat((*(P135)rt_nil_check((*F->res_341))), rt_str(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_293(F->up, &(*F->res_341));
goto ret_;
ret_:

  return;
}

static void f_subprogram_344(struct f_greenc_1fr *up_, P169 *res_343) {
  struct f_subprogram_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_343 = res_343;
F->x_1132 = NULL;
F->line_1133 = f_cur_line_274(F->up);
F->is_proc_1134 = f_at_kw_276(F->up, rt_str("PROCEDURE", 9));
f_skip_287(F->up);
if (F->is_proc_1134) {
F->x_1132 = f_nn_267(F->up, ((rt_int)44LL), F->line_1133);
} else {
F->x_1132 = f_nn_267(F->up, ((rt_int)45LL), F->line_1133);
}
f_designator_342(F->up, &(*(P169)rt_nil_check(F->x_1132)).name_);
if (((f_at_kw_276(F->up, rt_str("IS", 2)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_893(F->up, F->x_1132, &(*F->res_343));
goto ret_;
}
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_formal_part_340(F->up, &(*(P169)rt_nil_check(F->x_1132)).a_);
}
if (f_at_kw_276(F->up, rt_str("RETURN", 6))) {
f_skip_287(F->up);
f_subtype_ind_322(F->up, &(*(P169)rt_nil_check(F->x_1132)).b_);
if (F->is_proc_1134) {
(*(P169)rt_nil_check(F->x_1132)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_1134)) {
f_perror_286(F->up, rt_str("a function needs a RETURN clause", 32));
}
if (f_at_op_278(F->up, rt_str(";", 1))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1132)).ival_ = ((rt_int)1LL);
(*F->res_343) = F->x_1132;
goto ret_;
}
f_expect_kw_289(F->up, rt_str("IS", 2));
if (f_at_kw_276(F->up, rt_str("SEPARATE", 8))) {
f_perror_286(F->up, rt_str("separate bodies are not handled", 31));
}
f_body_part_346(F->up, F->x_1132);
if ((f_at_kind_280(F->up, ((rt_int)1LL)) || f_at_kind_280(F->up, ((rt_int)6LL)))) {
if ((!rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_1132)).name_))))) {
f_perror_286(F->up, rt_str_cat(rt_str("the name after END does not match ", 34), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_1132)).name_))));
}
f_skip_287(F->up);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_343) = F->x_1132;
goto ret_;
ret_:

  return;
}

static void f_body_part_346(struct f_greenc_1fr *up_, P169 x_345) {
  struct f_body_part_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_345 = x_345;
f_decl_part_334(F->up, &(*(P169)rt_nil_check(F->x_345)).c_);
if (f_at_kw_276(F->up, rt_str("BEGIN", 5))) {
f_skip_287(F->up);
F->up->saw_interface_181 = 0;
f_statements_353(F->up, &(*(P169)rt_nil_check(F->x_345)).d_);
if ((F->up->saw_interface_181 && ((*(P169)rt_nil_check(F->x_345)).d_ == NULL))) {
(*(P169)rt_nil_check(F->x_345)).tag_ = f_mk_201(F->up, rt_str("INTERFACE", 9));
}
F->up->saw_interface_181 = 0;
}
if (f_at_kw_276(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_348(F->up, &(*(P169)rt_nil_check(F->x_345)).e_);
}
f_expect_kw_289(F->up, rt_str("END", 3));
ret_:

  return;
}

static void f_parse_handlers_348(struct f_greenc_1fr *up_, P169 *res_347) {
  struct f_parse_handlers_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->head_1135 = NULL;
F->tail_1136 = NULL;
F->h_1137 = NULL;
F->names_1138 = NULL;
F->ntail_1139 = NULL;
F->n_1140 = NULL;
f_expect_kw_289(F->up, rt_str("EXCEPTION", 9));
while (f_at_kw_276(F->up, rt_str("WHEN", 4))) {
f_skip_287(F->up);
F->h_1137 = f_nn_267(F->up, ((rt_int)62LL), f_cur_line_274(F->up));
F->names_1138 = NULL;
F->ntail_1139 = NULL;
for (;;) {
if (f_at_kw_276(F->up, rt_str("OTHERS", 6))) {
f_skip_287(F->up);
F->n_1140 = f_nn_267(F->up, ((rt_int)5LL), f_cur_line_274(F->up));
(*(P169)rt_nil_check(F->n_1140)).name_ = f_mk_201(F->up, rt_str("OTHERS", 6));
} else {
f_name_node_295(F->up, &F->n_1140);
while (f_at_op_278(F->up, rt_str(".", 1))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->n_1140)).tag_ = (*(P169)rt_nil_check(F->n_1140)).name_;
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->n_1140)).name_);
}
L_end_1143: ;
}
f_append_271(F->up, &F->names_1138, &F->ntail_1139, F->n_1140);
if ((!f_at_op_278(F->up, rt_str("|", 1)))) {
goto L_end_1142;
}
f_skip_287(F->up);
}
L_end_1142: ;
f_expect_op_291(F->up, rt_str("=>", 2));
(*(P169)rt_nil_check(F->h_1137)).a_ = F->names_1138;
f_statements_353(F->up, &(*(P169)rt_nil_check(F->h_1137)).b_);
f_append_271(F->up, &F->head_1135, &F->tail_1136, F->h_1137);
}
L_end_1141: ;
(*F->res_347) = F->head_1135;
goto ret_;
ret_:

  return;
}

static void f_package_p_350(struct f_greenc_1fr *up_, P169 *res_349) {
  struct f_package_p_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_349 = res_349;
F->x_1144 = NULL;
F->line_1145 = f_cur_line_274(F->up);
f_expect_kw_289(F->up, rt_str("PACKAGE", 7));
if (f_at_kw_276(F->up, rt_str("BODY", 4))) {
f_skip_287(F->up);
F->x_1144 = f_nn_267(F->up, ((rt_int)49LL), F->line_1145);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1144)).name_);
f_expect_kw_289(F->up, rt_str("IS", 2));
f_body_part_346(F->up, F->x_1144);
} else {
F->x_1144 = f_nn_267(F->up, ((rt_int)48LL), F->line_1145);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1144)).name_);
if (((f_at_kw_276(F->up, rt_str("IS", 2)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_893(F->up, F->x_1144, &(*F->res_349));
goto ret_;
}
f_expect_kw_289(F->up, rt_str("IS", 2));
f_decl_part_334(F->up, &(*(P169)rt_nil_check(F->x_1144)).c_);
if (f_at_kw_276(F->up, rt_str("PRIVATE", 7))) {
f_skip_287(F->up);
f_decl_part_334(F->up, &(*(P169)rt_nil_check(F->x_1144)).d_);
}
f_expect_kw_289(F->up, rt_str("END", 3));
}
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
f_skip_287(F->up);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_349) = F->x_1144;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_351(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_276(F->up, rt_str("END", 3)) || f_at_kw_276(F->up, rt_str("ELSE", 4))) || f_at_kw_276(F->up, rt_str("ELSIF", 5))) || f_at_kw_276(F->up, rt_str("WHEN", 4))) || f_at_kw_276(F->up, rt_str("EXCEPTION", 9))) || f_at_kw_276(F->up, rt_str("OR", 2))) || f_at_kind_280(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_353(struct f_greenc_1fr *up_, P169 *res_352) {
  struct f_statements_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_352 = res_352;
F->head_1146 = NULL;
F->tail_1147 = NULL;
F->x_1148 = NULL;
while ((!f_at_statements_end_351(F->up))) {
if (f_at_kw_276(F->up, rt_str("PRAGMA", 6))) {
f_pragma_p_328(F->up, &F->x_1148);
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->x_1148)).name_)), rt_str("INTERFACE", 9))) {
F->up->saw_interface_181 = 1;
}
} else {
f_statement_355(F->up, &F->x_1148);
f_append_271(F->up, &F->head_1146, &F->tail_1147, F->x_1148);
}
}
L_end_1149: ;
(*F->res_352) = F->head_1146;
goto ret_;
ret_:

  return;
}

static void f_statement_355(struct f_greenc_1fr *up_, P169 *res_354) {
  struct f_statement_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_354 = res_354;
F->x_1150 = NULL;
F->t_1151 = NULL;
F->line_1152 = f_cur_line_274(F->up);
F->label_1153 = NULL;
if (f_at_op_278(F->up, rt_str("<<", 2))) {
f_skip_287(F->up);
f_expect_id_293(F->up, &F->label_1153);
f_expect_op_291(F->up, rt_str(">>", 2));
}
if (f_at_kw_276(F->up, rt_str("NULL", 4))) {
f_skip_287(F->up);
f_expect_op_291(F->up, rt_str(";", 1));
F->x_1150 = f_nn_267(F->up, ((rt_int)31LL), F->line_1152);
(*F->res_354) = F->x_1150;
goto ret_;
} else if (f_at_kw_276(F->up, rt_str("IF", 2))) {
f_if_stmt_359(F->up, &F->x_1150);
(*F->res_354) = F->x_1150;
goto ret_;
} else if (f_at_kw_276(F->up, rt_str("CASE", 4))) {
f_case_stmt_361(F->up, &F->x_1150);
(*F->res_354) = F->x_1150;
goto ret_;
} else if (((f_at_kw_276(F->up, rt_str("FOR", 3)) || f_at_kw_276(F->up, rt_str("WHILE", 5))) || f_at_kw_276(F->up, rt_str("LOOP", 4)))) {
f_loop_stmt_363(F->up, &F->x_1150);
(*(P169)rt_nil_check(F->x_1150)).tag_ = F->label_1153;
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
if (((F->label_1153 == NULL) || (!rt_str_eq((*(P135)rt_nil_check((*(P105)rt_nil_check(F->up->toks_107.p[rt_index(F->up->tpos_109, F->up->toks_107.lo, F->up->toks_107.hi) - F->up->toks_107.lo])).s_)), (*(P135)rt_nil_check(F->label_1153)))))) {
f_perror_286(F->up, rt_str("the name after END LOOP does not match the label", 48));
}
f_skip_287(F->up);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_354) = F->x_1150;
goto ret_;
} else if ((f_at_kw_276(F->up, rt_str("DECLARE", 7)) || f_at_kw_276(F->up, rt_str("BEGIN", 5)))) {
F->x_1150 = f_nn_267(F->up, ((rt_int)25LL), F->line_1152);
(*(P169)rt_nil_check(F->x_1150)).tag_ = F->label_1153;
if (f_at_kw_276(F->up, rt_str("DECLARE", 7))) {
f_skip_287(F->up);
f_decl_part_334(F->up, &(*(P169)rt_nil_check(F->x_1150)).a_);
}
f_expect_kw_289(F->up, rt_str("BEGIN", 5));
f_statements_353(F->up, &(*(P169)rt_nil_check(F->x_1150)).b_);
if (f_at_kw_276(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_348(F->up, &(*(P169)rt_nil_check(F->x_1150)).c_);
}
f_expect_kw_289(F->up, rt_str("END", 3));
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
f_skip_287(F->up);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_354) = F->x_1150;
goto ret_;
} else if (f_at_kw_276(F->up, rt_str("EXIT", 4))) {
f_skip_287(F->up);
F->x_1150 = f_nn_267(F->up, ((rt_int)26LL), F->line_1152);
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1150)).name_);
}
if (f_at_kw_276(F->up, rt_str("WHEN", 4))) {
f_skip_287(F->up);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1150)).a_);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_354) = F->x_1150;
goto ret_;
} else if (f_at_kw_276(F->up, rt_str("RETURN", 6))) {
f_skip_287(F->up);
F->x_1150 = f_nn_267(F->up, ((rt_int)27LL), F->line_1152);
if ((!f_at_op_278(F->up, rt_str(";", 1)))) {
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1150)).a_);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_354) = F->x_1150;
goto ret_;
} else if (f_at_kw_276(F->up, rt_str("RAISE", 5))) {
f_skip_287(F->up);
if (f_at_op_278(F->up, rt_str(";", 1))) {
f_skip_287(F->up);
F->x_1150 = f_nn_267(F->up, ((rt_int)29LL), F->line_1152);
(*F->res_354) = F->x_1150;
goto ret_;
}
F->x_1150 = f_nn_267(F->up, ((rt_int)28LL), F->line_1152);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1150)).name_);
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1150)).a_);
f_expect_op_291(F->up, rt_str(")", 1));
}
while (f_at_op_278(F->up, rt_str(".", 1))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1150)).tag_ = (*(P169)rt_nil_check(F->x_1150)).name_;
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1150)).name_);
}
L_end_1154: ;
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_354) = F->x_1150;
goto ret_;
} else if (f_at_kw_276(F->up, rt_str("ASSERT", 6))) {
f_skip_287(F->up);
F->x_1150 = f_nn_267(F->up, ((rt_int)30LL), F->line_1152);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1150)).a_);
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_354) = F->x_1150;
goto ret_;
} else if (f_at_kw_276(F->up, rt_str("GOTO", 4))) {
f_perror_286(F->up, rt_str("goto is not handled", 19));
}
f_task_statement_357(F->up, &F->x_1150);
if ((F->x_1150 != NULL)) {
(*F->res_354) = F->x_1150;
goto ret_;
}
f_name_p_320(F->up, &F->t_1151);
if (f_at_op_278(F->up, rt_str(":=", 2))) {
f_skip_287(F->up);
F->x_1150 = f_nn_267(F->up, ((rt_int)20LL), F->line_1152);
(*(P169)rt_nil_check(F->x_1150)).a_ = F->t_1151;
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1150)).b_);
} else {
F->x_1150 = f_nn_267(F->up, ((rt_int)21LL), F->line_1152);
(*(P169)rt_nil_check(F->x_1150)).a_ = F->t_1151;
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_354) = F->x_1150;
goto ret_;
ret_:

  return;
}

static void f_task_statement_357(struct f_greenc_1fr *up_, P169 *res_356) {
  struct f_task_statement_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_356 = res_356;
f_parse_task_statement_770(F->up, &(*F->res_356));
ret_:

  return;
}

static void f_if_stmt_359(struct f_greenc_1fr *up_, P169 *res_358) {
  struct f_if_stmt_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_358 = res_358;
F->x_1155 = NULL;
F->arm_1156 = NULL;
F->head_1157 = NULL;
F->tail_1158 = NULL;
F->go_1159 = 1;
F->x_1155 = f_nn_267(F->up, ((rt_int)22LL), f_cur_line_274(F->up));
f_skip_287(F->up);
F->arm_1156 = f_nn_267(F->up, ((rt_int)60LL), f_cur_line_274(F->up));
f_expr_304(F->up, &(*(P169)rt_nil_check(F->arm_1156)).a_);
f_expect_kw_289(F->up, rt_str("THEN", 4));
f_statements_353(F->up, &(*(P169)rt_nil_check(F->arm_1156)).b_);
f_append_271(F->up, &F->head_1157, &F->tail_1158, F->arm_1156);
while (F->go_1159) {
if (f_at_kw_276(F->up, rt_str("ELSIF", 5))) {
f_skip_287(F->up);
F->arm_1156 = f_nn_267(F->up, ((rt_int)60LL), f_cur_line_274(F->up));
f_expr_304(F->up, &(*(P169)rt_nil_check(F->arm_1156)).a_);
f_expect_kw_289(F->up, rt_str("THEN", 4));
f_statements_353(F->up, &(*(P169)rt_nil_check(F->arm_1156)).b_);
f_append_271(F->up, &F->head_1157, &F->tail_1158, F->arm_1156);
} else if (f_at_kw_276(F->up, rt_str("ELSE", 4))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1155)).flag_ = ((rt_int)1LL);
f_statements_353(F->up, &(*(P169)rt_nil_check(F->x_1155)).b_);
} else {
F->go_1159 = 0;
}
}
L_end_1160: ;
f_expect_kw_289(F->up, rt_str("END", 3));
f_expect_kw_289(F->up, rt_str("IF", 2));
f_expect_op_291(F->up, rt_str(";", 1));
(*(P169)rt_nil_check(F->x_1155)).a_ = F->head_1157;
(*F->res_358) = F->x_1155;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_361(struct f_greenc_1fr *up_, P169 *res_360) {
  struct f_case_stmt_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_360 = res_360;
F->x_1161 = NULL;
F->arm_1162 = NULL;
F->head_1163 = NULL;
F->tail_1164 = NULL;
F->labs_1165 = NULL;
F->ltail_1166 = NULL;
F->l_1167 = NULL;
F->x_1161 = f_nn_267(F->up, ((rt_int)23LL), f_cur_line_274(F->up));
f_skip_287(F->up);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1161)).a_);
f_expect_kw_289(F->up, rt_str("OF", 2));
while (f_at_kw_276(F->up, rt_str("WHEN", 4))) {
f_skip_287(F->up);
F->labs_1165 = NULL;
F->ltail_1166 = NULL;
F->others_arm_1168 = 0;
for (;;) {
if (f_at_kw_276(F->up, rt_str("OTHERS", 6))) {
f_skip_287(F->up);
F->others_arm_1168 = 1;
} else {
F->l_1167 = f_nn_267(F->up, ((rt_int)61LL), f_cur_line_274(F->up));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->l_1167)).a_);
if (f_at_op_278(F->up, rt_str("..", 2))) {
f_skip_287(F->up);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->l_1167)).b_);
}
f_append_271(F->up, &F->labs_1165, &F->ltail_1166, F->l_1167);
}
if ((!f_at_op_278(F->up, rt_str("|", 1)))) {
goto L_end_1170;
}
f_skip_287(F->up);
}
L_end_1170: ;
f_expect_op_291(F->up, rt_str("=>", 2));
if (F->others_arm_1168) {
(*(P169)rt_nil_check(F->x_1161)).flag_ = ((rt_int)1LL);
f_statements_353(F->up, &(*(P169)rt_nil_check(F->x_1161)).c_);
} else {
F->arm_1162 = f_nn_267(F->up, ((rt_int)60LL), f_cur_line_274(F->up));
(*(P169)rt_nil_check(F->arm_1162)).a_ = F->labs_1165;
f_statements_353(F->up, &(*(P169)rt_nil_check(F->arm_1162)).b_);
f_append_271(F->up, &F->head_1163, &F->tail_1164, F->arm_1162);
}
}
L_end_1169: ;
f_expect_kw_289(F->up, rt_str("END", 3));
f_expect_kw_289(F->up, rt_str("CASE", 4));
f_expect_op_291(F->up, rt_str(";", 1));
(*(P169)rt_nil_check(F->x_1161)).b_ = F->head_1163;
(*F->res_360) = F->x_1161;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_363(struct f_greenc_1fr *up_, P169 *res_362) {
  struct f_loop_stmt_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_362 = res_362;
F->x_1171 = NULL;
F->r_1172 = NULL;
F->line_1173 = f_cur_line_274(F->up);
F->x_1171 = f_nn_267(F->up, ((rt_int)24LL), F->line_1173);
if (f_at_kw_276(F->up, rt_str("FOR", 3))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1171)).flag_ = ((rt_int)2LL);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1171)).name_);
f_expect_kw_289(F->up, rt_str("IN", 2));
if (f_at_kw_276(F->up, rt_str("REVERSE", 7))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1171)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("LOOP", 4)))) {
f_subtype_ind_322(F->up, &(*(P169)rt_nil_check(F->x_1171)).a_);
} else {
F->r_1172 = f_nn_267(F->up, ((rt_int)14LL), F->line_1173);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1172)).a_);
if (f_at_op_278(F->up, rt_str("..", 2))) {
f_skip_287(F->up);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->r_1172)).b_);
(*(P169)rt_nil_check(F->x_1171)).a_ = F->r_1172;
} else {
(*(P169)rt_nil_check(F->x_1171)).a_ = (*(P169)rt_nil_check(F->r_1172)).a_;
}
}
} else if (f_at_kw_276(F->up, rt_str("WHILE", 5))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1171)).flag_ = ((rt_int)1LL);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1171)).a_);
}
f_expect_kw_289(F->up, rt_str("LOOP", 4));
f_statements_353(F->up, &(*(P169)rt_nil_check(F->x_1171)).b_);
f_expect_kw_289(F->up, rt_str("END", 3));
f_expect_kw_289(F->up, rt_str("LOOP", 4));
(*F->res_362) = F->x_1171;
goto ret_;
ret_:

  return;
}

static void f_compilation_365(struct f_greenc_1fr *up_, P169 *res_364) {
  struct f_compilation_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_364 = res_364;
F->head_1174 = NULL;
F->tail_1175 = NULL;
F->x_1176 = NULL;
while ((!f_at_kind_280(F->up, ((rt_int)0LL)))) {
if (f_at_kw_276(F->up, rt_str("PRAGMA", 6))) {
f_pragma_p_328(F->up, &F->x_1176);
} else {
if (f_at_kw_276(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_331(F->up);
}
if ((f_at_kw_276(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_276(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_344(F->up, &F->x_1176);
} else if (f_at_kw_276(F->up, rt_str("PACKAGE", 7))) {
f_package_p_350(F->up, &F->x_1176);
} else if (f_at_kw_276(F->up, rt_str("TASK", 4))) {
f_task_p_760(F->up, &F->x_1176);
} else if (f_at_kw_276(F->up, rt_str("GENERIC", 7))) {
f_generic_p_890(F->up, &F->x_1176);
} else {
f_perror_286(F->up, rt_str("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_271(F->up, &F->head_1174, &F->tail_1175, F->x_1176);
}
}
L_end_1177: ;
(*F->res_364) = F->head_1174;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_367(struct f_greenc_1fr *up_, rstr s_366) {
  struct f_hash_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_366 = rt_str_copy(s_366);
F->h_1178 = ((rt_int)0LL);
{ rt_int lo1181 = ((rt_int)1LL), hi1182 = (F->s_366).len;
for (rt_int it1183 = lo1181; it1183 <= hi1182; it1183++) {
F->i_1180 = it1183;
F->h_1178 = rt_rem(rt_add(rt_mul(F->h_1178, ((rt_int)31LL)), ((rt_int)(rt_str_get(F->s_366, F->i_1180)) + 1)), ((rt_int)4093LL));
}
}
L_end_1179: ;
F->result_ = F->h_1178;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_lookup_369(struct f_greenc_1fr *up_, rstr name_368) {
  struct f_lookup_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_368 = rt_str_copy(name_368);
F->y_1184 = NULL;
F->y_1184 = F->up->table_114.p[rt_index(f_hash_367(F->up, F->name_368), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while ((F->y_1184 != NULL)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1184)).name_)), F->name_368)) {
F->result_ = F->y_1184;
goto ret_;
}
F->y_1184 = (*(P112)rt_nil_check(F->y_1184)).chain_;
}
L_end_1185: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_372(struct f_greenc_1fr *up_, P112 a_370, P112 b_371) {
  struct f_same_task_372fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_370 = a_370;
F->b_371 = b_371;
if ((F->a_370 == F->b_371)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_370 == NULL) || (F->b_371 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->a_370)).cname_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_371)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_lookup_entry_375(struct f_greenc_1fr *up_, rstr name_373, P112 owner_374) {
  struct f_lookup_entry_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_373 = rt_str_copy(name_373);
F->owner_374 = owner_374;
F->y_1186 = NULL;
F->y_1186 = F->up->table_114.p[rt_index(f_hash_367(F->up, F->name_373), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while ((F->y_1186 != NULL)) {
if (((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1186)).name_)), F->name_373) && ((*(P112)rt_nil_check(F->y_1186)).kind_ == ((rt_int)10LL))) && f_same_task_372(F->up, (*(P112)rt_nil_check(F->y_1186)).members_, F->owner_374))) {
F->result_ = F->y_1186;
goto ret_;
}
F->y_1186 = (*(P112)rt_nil_check(F->y_1186)).chain_;
}
L_end_1187: ;
F->result_ = f_lookup_369(F->up, F->name_373);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_lookup_decl_377(struct f_greenc_1fr *up_, P169 d_376) {
  struct f_lookup_decl_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_376 = d_376;
F->y_1188 = NULL;
F->y_1188 = F->up->table_114.p[rt_index(f_hash_367(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_376)).name_))), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while ((F->y_1188 != NULL)) {
if (((*(P112)rt_nil_check(F->y_1188)).decl_ == F->d_376)) {
F->result_ = F->y_1188;
goto ret_;
}
F->y_1188 = (*(P112)rt_nil_check(F->y_1188)).chain_;
}
L_end_1189: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_379(struct f_greenc_1fr *up_, P112 y_378) {
  struct f_overloadable_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_378 = y_378;
F->result_ = (((((*(P112)rt_nil_check(F->y_378)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_378)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_378)).kind_ == ((rt_int)7LL))) || ((*(P112)rt_nil_check(F->y_378)).kind_ == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_382(struct f_greenc_1fr *up_, P117 a_380, P117 b_381) {
  struct f_same_382fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_380 = a_380;
F->b_381 = b_381;
F->result_ = (F->a_380 == F->b_381);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_root_384(struct f_greenc_1fr *up_, P117 t_383) {
  struct f_root_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_383 = t_383;
F->r_1190 = NULL;
F->r_1190 = F->t_383;
while (((*(P117)rt_nil_check(F->r_1190)).parent_ != NULL)) {
F->r_1190 = (*(P117)rt_nil_check(F->r_1190)).parent_;
}
L_end_1191: ;
F->result_ = F->r_1190;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_387(struct f_greenc_1fr *up_, P117 a_385, P117 b_386) {
  struct f_derived_from_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_385 = a_385;
F->b_386 = b_386;
F->r_1192 = NULL;
F->r_1192 = F->a_385;
while ((F->r_1192 != NULL)) {
if ((F->r_1192 == F->b_386)) {
F->result_ = 1;
goto ret_;
}
F->r_1192 = (*(P117)rt_nil_check(F->r_1192)).parent_;
}
L_end_1193: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_389(struct f_greenc_1fr *up_, P117 t_388) {
  struct f_is_numeric_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_388 = t_388;
F->result_ = ((((*(P117)rt_nil_check(F->t_388)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check(F->t_388)).kind_ == ((rt_int)3LL))) || ((*(P117)rt_nil_check(F->t_388)).kind_ == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_391(struct f_greenc_1fr *up_, P117 t_390) {
  struct f_is_discrete_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_390 = t_390;
F->result_ = (((((*(P117)rt_nil_check(F->t_390)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check(F->t_390)).kind_ == ((rt_int)4LL))) || ((*(P117)rt_nil_check(F->t_390)).kind_ == ((rt_int)11LL))) || ((*(P117)rt_nil_check(F->t_390)).kind_ == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_394(struct f_greenc_1fr *up_, P1194 a_392, P1194 b_393) {
  struct f_same_signature_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_392 = a_392;
F->b_393 = b_393;
F->x_1196 = NULL;
F->x_1196 = F->a_392;
F->y_1197 = NULL;
F->y_1197 = F->b_393;
while (((F->x_1196 != NULL) && (F->y_1197 != NULL))) {
if (((!f_same_382(F->up, (*(P1194)rt_nil_check(F->x_1196)).t_, (*(P1194)rt_nil_check(F->y_1197)).t_)) || ((*(P1194)rt_nil_check(F->x_1196)).mode_ != (*(P1194)rt_nil_check(F->y_1197)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1196 = (*(P1194)rt_nil_check(F->x_1196)).next_;
F->y_1197 = (*(P1194)rt_nil_check(F->y_1197)).next_;
}
L_end_1198: ;
F->result_ = ((F->x_1196 == NULL) && (F->y_1197 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_397(struct f_greenc_1fr *up_, P112 y_395, rt_int line_396) {
  struct f_define_397fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_395 = y_395;
F->line_396 = line_396;
F->h_1199 = f_hash_367(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_395)).name_)));
F->z_1200 = NULL;
F->z_1200 = F->up->table_114.p[rt_index(F->h_1199, F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while ((F->z_1200 != NULL)) {
if (((((*(P112)rt_nil_check(F->z_1200)).depth_ == F->up->depth_115) && rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1200)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_395)).name_)))) && (!((f_overloadable_379(F->up, F->y_395) && f_overloadable_379(F->up, F->z_1200)) && ((((*(P112)rt_nil_check(F->y_395)).kind_ != (*(P112)rt_nil_check(F->z_1200)).kind_) || (!f_same_signature_394(F->up, (*(P112)rt_nil_check(F->y_395)).params_, (*(P112)rt_nil_check(F->z_1200)).params_))) || (!f_same_382(F->up, (*(P112)rt_nil_check(F->y_395)).result_, (*(P112)rt_nil_check(F->z_1200)).result_))))))) {
f_fail_222(F->up, F->line_396, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_395)).name_)), rt_str(" is already declared in this declarative part", 45)));
}
F->z_1200 = (*(P112)rt_nil_check(F->z_1200)).chain_;
}
L_end_1201: ;
(*(P112)rt_nil_check(F->y_395)).depth_ = F->up->depth_115;
(*(P112)rt_nil_check(F->y_395)).chain_ = F->up->table_114.p[rt_index(F->h_1199, F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
F->up->table_114.p[rt_index(F->h_1199, F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo] = F->y_395;
(*(P112)rt_nil_check(F->y_395)).stack_ = F->up->scope_stack_116;
F->up->scope_stack_116 = F->y_395;
ret_:

  return;
}

static void f_open_scope_398(struct f_greenc_1fr *up_) {
  struct f_open_scope_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_115 = rt_add(F->up->depth_115, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_399(struct f_greenc_1fr *up_) {
  struct f_close_scope_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_116 != NULL) && ((*(P112)rt_nil_check(F->up->scope_stack_116)).depth_ == F->up->depth_115))) {
F->up->table_114.p[rt_index(f_hash_367(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->scope_stack_116)).name_))), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo] = (*(P112)rt_nil_check(F->up->scope_stack_116)).chain_;
F->up->scope_stack_116 = (*(P112)rt_nil_check(F->up->scope_stack_116)).stack_;
}
L_end_1202: ;
F->up->depth_115 = rt_sub(F->up->depth_115, ((rt_int)1LL));
ret_:

  return;
}

static P112 f_new_sym_402(struct f_greenc_1fr *up_, rt_int kind_400, P135 name_401) {
  struct f_new_sym_402fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_400 = kind_400;
F->name_401 = name_401;
F->result_ = ({ R113 *cell1203 = rt_alloc(sizeof(R113)); *cell1203 = cp_R113(({ R113 ag1204; ag1204.kind_ = F->kind_400; ag1204.name_ = F->name_401; ag1204.t_ = NULL; ag1204.c_ = NULL; ag1204.access_path_ = NULL; ag1204.cname_ = NULL; ag1204.ro_ = 0; ag1204.mvalue_ = ((rt_int)0LL); ag1204.hasmv_ = 0; ag1204.decl_ = NULL; ag1204.params_ = NULL; ag1204.result_ = NULL; ag1204.depth_ = ((rt_int)0LL); ag1204.level_ = ((rt_int)0LL); ag1204.byref_ = 0; ag1204.vrp_ = 0; ag1204.hidden_ = 0; ag1204.from_use_ = 0; ag1204.members_ = NULL; ag1204.mnext_ = NULL; ag1204.chain_ = NULL; ag1204.stack_ = NULL; ag1204; })); (P112)cell1203; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_new_typ_404(struct f_greenc_1fr *up_, rt_int kind_403) {
  struct f_new_typ_404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_403 = kind_403;
F->result_ = ({ R118 *cell1207 = rt_alloc(sizeof(R118)); *cell1207 = cp_R118(({ R118 ag1208; ag1208.kind_ = F->kind_403; ag1208.name_ = NULL; ag1208.lits_ = NULL; ag1208.elem_ = NULL; ag1208.idx_ = NULL; ag1208.elemcons_ = NULL; ag1208.tcons_ = NULL; ag1208.fields_ = NULL; ag1208.target_ = NULL; ag1208.decl_ = NULL; ag1208.cname_ = NULL; ag1208.forward_ = 0; ag1208.defined_ = 0; ag1208.priv_ = 0; ag1208.next_ = NULL; ag1208.idx2_ = NULL; ag1208.littab_ = NULL; ag1208.parent_ = NULL; ag1208.ndigits_ = ((rt_int)0LL); ag1208.fdelta_ = NULL; ag1208.fsmall_ = NULL; ag1208.dims_ = ((rt_int)0LL); ag1208.is_restricted_ = 0; ag1208; })); (P117)cell1207; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P173 f_new_cons_405(struct f_greenc_1fr *up_) {
  struct f_new_cons_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R174 *cell1209 = rt_alloc(sizeof(R174)); *cell1209 = cp_R174(({ R174 ag1210; ag1210.lo_ = NULL; ag1210.hi_ = NULL; ag1210.slen_ = NULL; ag1210.mlo_ = ((rt_int)0LL); ag1210.mhi_ = ((rt_int)0LL); ag1210.hasm_ = 0; ag1210.lo2_ = NULL; ag1210.hi2_ = NULL; ag1210.acc_ = NULL; ag1210; })); (P173)cell1209; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_kind_name_407(struct f_greenc_1fr *up_, P117 t_406) {
  struct f_kind_name_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_406 = t_406;
if (((*(P117)rt_nil_check(F->t_406)).name_ != NULL)) {
F->result_ = (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_406)).name_));
goto ret_;
}
{ rt_int sel1211 = (*(P117)rt_nil_check(F->t_406)).kind_;
if (0 || sel1211 == ((rt_int)1LL)) {
F->result_ = rt_str("INTEGER", 7);
goto ret_;
} else if (0 || sel1211 == ((rt_int)2LL)) {
F->result_ = rt_str("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1211 == ((rt_int)3LL)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || sel1211 == ((rt_int)5LL)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || sel1211 == ((rt_int)10LL)) {
F->result_ = rt_str("null", 4);
goto ret_;
} else if (0 || sel1211 == ((rt_int)11LL)) {
F->result_ = rt_str("CHARACTER", 9);
goto ret_;
} else if (0 || sel1211 == ((rt_int)16LL)) {
F->result_ = rt_str("a fixed point type", 18);
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

static void f_check_type_411(struct f_greenc_1fr *up_, P117 got_408, P117 want_409, rt_int line_410) {
  struct f_check_type_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_408 = got_408;
F->want_409 = want_409;
F->line_410 = line_410;
if ((F->want_409 == NULL)) {
goto ret_;
}
if ((((*(P117)rt_nil_check(F->got_408)).kind_ == ((rt_int)10LL)) && ((*(P117)rt_nil_check(F->want_409)).kind_ == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_382(F->up, F->got_408, F->want_409))) {
f_fail_222(F->up, F->line_410, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_407(F->up, F->got_408)), rt_str(" where ", 7)), f_kind_name_407(F->up, F->want_409)), rt_str(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_413(struct f_greenc_1fr *up_, P117 t_412) {
  struct f_field_count_413fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_412 = t_412;
F->n_1212 = ((rt_int)0LL);
F->f_1213 = NULL;
F->f_1213 = (*(P117)rt_nil_check(F->t_412)).fields_;
while ((F->f_1213 != NULL)) {
F->n_1212 = rt_add(F->n_1212, ((rt_int)1LL));
F->f_1213 = (*(P1205)rt_nil_check(F->f_1213)).next_;
}
L_end_1214: ;
F->result_ = F->n_1212;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_416(struct f_greenc_1fr *up_, P117 t_414, P135 *r_415) {
  struct f_ctype_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_414 = t_414;
F->r_415 = r_415;
F->s_1215 = NULL;
{ rt_int sel1216 = (*(P117)rt_nil_check(F->t_414)).kind_;
if (0 || sel1216 == ((rt_int)1LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("rt_int", 6));
} else if (0 || sel1216 == ((rt_int)2LL) || sel1216 == ((rt_int)4LL) || sel1216 == ((rt_int)11LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("int", 3));
} else if (0 || sel1216 == ((rt_int)3LL) || sel1216 == ((rt_int)16LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("double", 6));
} else if (0 || sel1216 == ((rt_int)5LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("rstr", 4));
} else if (0 || sel1216 == ((rt_int)9LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("void", 4));
} else if (0 || sel1216 == ((rt_int)13LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("rt_act", 6));
} else if (0 || sel1216 == ((rt_int)14LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("rt_taskdecl", 11));
} else if (0 || sel1216 == ((rt_int)15LL)) {
(*F->r_415) = f_mk_201(F->up, rt_str("rt_entry", 8));
} else {
if (((*(P117)rt_nil_check(F->t_414)).cname_ == NULL)) {
f_declare_ctype_421(F->up, F->t_414);
} else if (((((*(P117)rt_nil_check(F->t_414)).kind_ == ((rt_int)7LL)) && (*(P117)rt_nil_check(F->t_414)).forward_) && (!(*(P117)rt_nil_check(F->t_414)).defined_))) {
(*(P117)rt_nil_check(F->t_414)).defined_ = 1;
f_field_decls_419(F->up, F->t_414, &F->s_1215);
f_put_to_226(F->up, F->up->out_types_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_414)).cname_))), rt_str(" {", 2)), (*(P135)rt_nil_check(F->s_1215))), rt_str(" };", 3)));
}
(*F->r_415) = (*(P117)rt_nil_check(F->t_414)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_419(struct f_greenc_1fr *up_, P117 t_417, P135 *r_418) {
  struct f_field_decls_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_417 = t_417;
F->r_418 = r_418;
F->f_1217 = NULL;
F->f_1217 = (*(P117)rt_nil_check(F->t_417)).fields_;
F->s_1218 = NULL;
F->ct_1219 = NULL;
F->s_1218 = f_mk_201(F->up, rt_str(" int dummy_;", 12));
while ((F->f_1217 != NULL)) {
f_ctype_416(F->up, (*(P1205)rt_nil_check(F->f_1217)).t_, &F->ct_1219);
F->s_1218 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->s_1218)), 32), (*(P135)rt_nil_check(F->ct_1219))), 32), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1217)).name_)))), 59));
F->f_1217 = (*(P1205)rt_nil_check(F->f_1217)).next_;
}
L_end_1220: ;
(*F->r_418) = F->s_1218;
ret_:

  return;
}

static void f_declare_ctype_421(struct f_greenc_1fr *up_, P117 t_420) {
  struct f_declare_ctype_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_420 = t_420;
F->ct_1221 = NULL;
F->s_1222 = NULL;
F->target_1223 = NULL;
if (((*(P117)rt_nil_check(F->t_420)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_464(F->up, F->t_420);
}
if (((*(P117)rt_nil_check(F->t_420)).kind_ == ((rt_int)6LL))) {
f_new_name_204(F->up, rt_str("A", 1), &(*(P117)rt_nil_check(F->t_420)).cname_);
} else if (((*(P117)rt_nil_check(F->t_420)).kind_ == ((rt_int)7LL))) {
f_new_name_204(F->up, rt_str("R", 1), &(*(P117)rt_nil_check(F->t_420)).cname_);
} else {
f_new_name_204(F->up, rt_str("P", 1), &(*(P117)rt_nil_check(F->t_420)).cname_);
}
(*(P117)rt_nil_check(F->t_420)).next_ = F->up->all_types_119;
F->up->all_types_119 = F->t_420;
if (((*(P117)rt_nil_check(F->t_420)).kind_ == ((rt_int)8LL))) {
F->target_1223 = (*(P117)rt_nil_check(F->t_420)).target_;
if ((F->target_1223 == NULL)) {
f_fail_222(F->up, ((rt_int)0LL), rt_str_cat(rt_str_cat(rt_str("the designated type of ", 23), f_kind_name_407(F->up, F->t_420)), rt_str(" is never declared", 18)));
}
if (((*(P117)rt_nil_check(F->target_1223)).kind_ == ((rt_int)7LL))) {
if (((*(P117)rt_nil_check(F->target_1223)).cname_ == NULL)) {
f_new_name_204(F->up, rt_str("R", 1), &(*(P117)rt_nil_check(F->target_1223)).cname_);
(*(P117)rt_nil_check(F->target_1223)).next_ = F->up->all_types_119;
F->up->all_types_119 = F->target_1223;
f_put_to_226(F->up, F->up->out_types_123, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->target_1223)).cname_))), 32), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->target_1223)).cname_))), 59));
(*(P117)rt_nil_check(F->target_1223)).forward_ = 1;
}
f_put_to_226(F->up, F->up->out_types_123, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->target_1223)).cname_))), rt_str(" *", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), 59));
} else {
f_ctype_416(F->up, F->target_1223, &F->ct_1221);
f_put_to_226(F->up, F->up->out_types_123, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), (*(P135)rt_nil_check(F->ct_1221))), rt_str(" *", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), 59));
}
} else if (((*(P117)rt_nil_check(F->t_420)).kind_ == ((rt_int)6LL))) {
f_ctype_416(F->up, (*(P117)rt_nil_check(F->t_420)).elem_, &F->ct_1221);
f_put_to_226(F->up, F->up->out_types_123, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), 32), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), 59));
f_put_to_226(F->up, F->up->out_types_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P135)rt_nil_check(F->ct_1221))), rt_str(" *p; };", 7)));
} else {
f_put_to_226(F->up, F->up->out_types_123, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), 32), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), 59));
(*(P117)rt_nil_check(F->t_420)).defined_ = 1;
f_field_decls_419(F->up, F->t_420, &F->s_1222);
f_put_to_226(F->up, F->up->out_types_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_420)).cname_))), rt_str(" {", 2)), (*(P135)rt_nil_check(F->s_1222))), rt_str(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_424(struct f_greenc_1fr *up_, P169 lits_422, rstr name_423) {
  struct f_lit_index_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_422 = lits_422;
F->name_423 = rt_str_copy(name_423);
F->i_1224 = ((rt_int)0LL);
F->l_1225 = NULL;
F->l_1225 = F->lits_422;
while ((F->l_1225 != NULL)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->l_1225)).name_)), F->name_423)) {
F->result_ = F->i_1224;
goto ret_;
}
F->i_1224 = rt_add(F->i_1224, ((rt_int)1LL));
F->l_1225 = (*(P169)rt_nil_check(F->l_1225)).next_;
}
L_end_1226: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_428(struct f_greenc_1fr *up_, P169 e_425, rt_int *v_426, int *ok_427) {
  struct f_manifest_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_425 = e_425;
F->v_426 = v_426;
F->ok_427 = ok_427;
F->y_1230 = NULL;
(*F->ok_427) = 0;
(*F->v_426) = ((rt_int)0LL);
if (((*(P169)rt_nil_check(F->e_425)).kind_ == ((rt_int)1LL))) {
(*F->ok_427) = 1;
(*F->v_426) = (*(P169)rt_nil_check(F->e_425)).ival_;
} else if (((*(P169)rt_nil_check(F->e_425)).kind_ == ((rt_int)15LL))) {
f_manifest_428(F->up, (*(P169)rt_nil_check(F->e_425)).a_, &(*F->v_426), &(*F->ok_427));
} else if ((((*(P169)rt_nil_check(F->e_425)).kind_ == ((rt_int)6LL)) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("-", 1)))) {
f_manifest_428(F->up, (*(P169)rt_nil_check(F->e_425)).a_, &F->a_1227, &(*F->ok_427));
(*F->v_426) = rt_neg(F->a_1227);
} else if ((((*(P169)rt_nil_check(F->e_425)).kind_ == ((rt_int)7LL)) && ((rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("+", 1)) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("-", 1))) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("*", 1))))) {
f_manifest_428(F->up, (*(P169)rt_nil_check(F->e_425)).a_, &F->a_1227, &(*F->ok_427));
f_manifest_428(F->up, (*(P169)rt_nil_check(F->e_425)).b_, &F->b_1228, &F->ok2_1229);
(*F->ok_427) = ((*F->ok_427) && F->ok2_1229);
if ((*F->ok_427)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("+", 1))) {
(*F->v_426) = rt_add(F->a_1227, F->b_1228);
} else if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("-", 1))) {
(*F->v_426) = rt_sub(F->a_1227, F->b_1228);
} else {
(*F->v_426) = rt_mul(F->a_1227, F->b_1228);
}
}
} else if (((*(P169)rt_nil_check(F->e_425)).kind_ == ((rt_int)5LL))) {
F->y_1230 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)));
if ((((F->y_1230 != NULL) && (((*(P112)rt_nil_check(F->y_1230)).kind_ == ((rt_int)2LL)) || ((*(P112)rt_nil_check(F->y_1230)).kind_ == ((rt_int)7LL)))) && (*(P112)rt_nil_check(F->y_1230)).hasmv_)) {
(*F->ok_427) = 1;
(*F->v_426) = (*(P112)rt_nil_check(F->y_1230)).mvalue_;
}
} else if (((((*(P169)rt_nil_check(F->e_425)).kind_ == ((rt_int)10LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_425)).a_)).kind_ == ((rt_int)5LL))) && (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("FIRST", 5)) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("LAST", 4))))) {
F->y_1230 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_425)).a_)).name_)));
if (((((F->y_1230 != NULL) && ((*(P112)rt_nil_check(F->y_1230)).kind_ == ((rt_int)5LL))) && ((*(P112)rt_nil_check(F->y_1230)).c_ != NULL)) && (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1230)).c_)).hasm_)) {
(*F->ok_427) = 1;
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_425)).name_)), rt_str("FIRST", 5))) {
(*F->v_426) = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1230)).c_)).mlo_;
} else {
(*F->v_426) = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1230)).c_)).mhi_;
}
}
} else if (((((*(P169)rt_nil_check(F->e_425)).kind_ == ((rt_int)8LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_425)).a_)).kind_ == ((rt_int)5LL))) && (f_list_len_273(F->up, (*(P169)rt_nil_check(F->e_425)).b_) == ((rt_int)1LL)))) {
F->y_1230 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_425)).a_)).name_)));
if (((((F->y_1230 != NULL) && ((*(P112)rt_nil_check(F->y_1230)).kind_ == ((rt_int)5LL))) && ((*(P112)rt_nil_check(F->y_1230)).t_ != NULL)) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1230)).t_)).kind_ == ((rt_int)1LL)))) {
f_manifest_428(F->up, (*(P169)rt_nil_check(F->e_425)).b_, &(*F->v_426), &(*F->ok_427));
}
}
ret_:

  return;
}

static void f_resolve_432(struct f_greenc_1fr *up_, P169 st_429, P117 *t_430, P173 *c_431) {
  struct f_resolve_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_429 = st_429;
F->t_430 = t_430;
F->c_431 = c_431;
F->y_1231 = NULL;
F->dummy_1232 = NULL;
F->code_1233 = NULL;
F->r_1235 = NULL;
(*F->c_431) = f_new_cons_405(F->up);
if (((*(P169)rt_nil_check(F->st_429)).kind_ != ((rt_int)80LL))) {
f_type_definition_452(F->up, F->st_429, NULL, &(*F->t_430), &(*F->c_431));
goto ret_;
}
if (((*(P169)rt_nil_check(F->st_429)).tag_ != NULL)) {
F->y_1231 = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_429)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_429)).name_)), (*(P169)rt_nil_check(F->st_429)).line_);
} else {
F->y_1231 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_429)).name_)));
}
if (((F->y_1231 == NULL) || ((*(P112)rt_nil_check(F->y_1231)).kind_ != ((rt_int)5LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->st_429)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_429)).name_)), rt_str(" is not a type", 14)));
}
(*F->t_430) = (*(P112)rt_nil_check(F->y_1231)).t_;
if (((*(P112)rt_nil_check(F->y_1231)).c_ != NULL)) {
(*(P173)rt_nil_check((*F->c_431))).lo_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).lo_;
(*(P173)rt_nil_check((*F->c_431))).hi_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).hi_;
(*(P173)rt_nil_check((*F->c_431))).slen_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).slen_;
(*(P173)rt_nil_check((*F->c_431))).mlo_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).mlo_;
(*(P173)rt_nil_check((*F->c_431))).mhi_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).mhi_;
(*(P173)rt_nil_check((*F->c_431))).hasm_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).hasm_;
(*(P173)rt_nil_check((*F->c_431))).lo2_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).lo2_;
(*(P173)rt_nil_check((*F->c_431))).hi2_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).hi2_;
(*(P173)rt_nil_check((*F->c_431))).acc_ = (*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1231)).c_)).acc_;
}
if (((*F->t_430) == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->st_429)).line_, rt_str_cat(rt_str_cat(rt_str("the type ", 9), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->st_429)).name_))), rt_str(" is used before its full declaration", 36)));
}
if (((*(P169)rt_nil_check(F->st_429)).flag_ == ((rt_int)3LL))) {
if ((((*(P117)rt_nil_check((*F->t_430))).kind_ != ((rt_int)3LL)) && ((*(P117)rt_nil_check((*F->t_430))).kind_ != ((rt_int)16LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->st_429)).line_, rt_str("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->st_429)).b_, NULL, &F->dummy_1232, &(*(P173)rt_nil_check((*F->c_431))).acc_);
}
if ((((*(P169)rt_nil_check(F->st_429)).flag_ == ((rt_int)1LL)) || (((*(P169)rt_nil_check(F->st_429)).flag_ == ((rt_int)3LL)) && ((*(P169)rt_nil_check(F->st_429)).a_ != NULL)))) {
F->r_1235 = (*(P169)rt_nil_check(F->st_429)).a_;
if (((!f_is_numeric_389(F->up, (*F->t_430))) && (!f_is_discrete_391(F->up, (*F->t_430))))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->st_429)).line_, rt_str("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_436(F->up, F->r_1235, (*F->t_430), (*F->c_431));
} else if (((*(P169)rt_nil_check(F->st_429)).flag_ == ((rt_int)2LL))) {
F->r_1235 = (*(P169)rt_nil_check(F->st_429)).a_;
if (((*(P169)rt_nil_check(F->r_1235)).kind_ != ((rt_int)14LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->st_429)).line_, rt_str("an index constraint is a discrete range", 39));
}
if (((*(P117)rt_nil_check((*F->t_430))).kind_ == ((rt_int)5LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_1235)).a_, F->up->ty_int_151, &F->dummy_1232, &F->code_1233);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_1235)).b_, F->up->ty_int_151, &F->dummy_1232, &(*(P173)rt_nil_check((*F->c_431))).slen_);
(*(P173)rt_nil_check((*F->c_431))).slen_ = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check((*(P173)rt_nil_check((*F->c_431))).slen_))), rt_str(" - ", 3)), (*(P135)rt_nil_check(F->code_1233))), rt_str(" + 1)", 5)));
} else if (((*(P117)rt_nil_check((*F->t_430))).kind_ == ((rt_int)6LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_1235)).a_, (*(P117)rt_nil_check((*F->t_430))).idx_, &F->dummy_1232, &(*(P173)rt_nil_check((*F->c_431))).lo_);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_1235)).b_, (*(P117)rt_nil_check((*F->t_430))).idx_, &F->dummy_1232, &(*(P173)rt_nil_check((*F->c_431))).hi_);
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->st_429)).line_, rt_str("this type takes no index constraint", 35));
}
}
ret_:

  return;
}

static void f_range_of_436(struct f_greenc_1fr *up_, P169 r_433, P117 t_434, P173 c_435) {
  struct f_range_of_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_433 = r_433;
F->t_434 = t_434;
F->c_435 = c_435;
F->dummy_1236 = NULL;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_433)).a_, F->t_434, &F->dummy_1236, &(*(P173)rt_nil_check(F->c_435)).lo_);
f_check_type_411(F->up, F->dummy_1236, F->t_434, (*(P169)rt_nil_check(F->r_433)).line_);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_433)).b_, F->t_434, &F->dummy_1236, &(*(P173)rt_nil_check(F->c_435)).hi_);
f_check_type_411(F->up, F->dummy_1236, F->t_434, (*(P169)rt_nil_check(F->r_433)).line_);
if (((*(P117)rt_nil_check(F->t_434)).kind_ == ((rt_int)16LL))) {
(*(P173)rt_nil_check(F->c_435)).lo_ = f_mk_201(F->up, rt_str_catc(rt_str_ccat(40, (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_435)).lo_))), 41));
(*(P173)rt_nil_check(F->c_435)).hi_ = f_mk_201(F->up, rt_str_catc(rt_str_ccat(40, (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_435)).hi_))), 41));
}
f_manifest_428(F->up, (*(P169)rt_nil_check(F->r_433)).a_, &(*(P173)rt_nil_check(F->c_435)).mlo_, &F->ok_1237);
(*(P173)rt_nil_check(F->c_435)).hasm_ = F->ok_1237;
f_manifest_428(F->up, (*(P169)rt_nil_check(F->r_433)).b_, &(*(P173)rt_nil_check(F->c_435)).mhi_, &F->ok_1237);
(*(P173)rt_nil_check(F->c_435)).hasm_ = ((*(P173)rt_nil_check(F->c_435)).hasm_ && F->ok_1237);
ret_:

  return;
}

static void f_fresh_typ_440(struct f_greenc_1fr *up_, rt_int kind_437, P135 name_438, P117 *t_439) {
  struct f_fresh_typ_440fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_437 = kind_437;
F->name_438 = name_438;
F->t_439 = t_439;
F->ph_1238 = NULL;
F->ph_1238 = F->up->completing_168;
F->up->completing_168 = NULL;
if ((F->ph_1238 == NULL)) {
(*F->t_439) = f_new_typ_404(F->up, F->kind_437);
(*(P117)rt_nil_check((*F->t_439))).name_ = F->name_438;
goto ret_;
}
as_R118(&(*(P117)rt_nil_check(F->ph_1238)), (*(P117)rt_nil_check(f_new_typ_404(F->up, F->kind_437))));
(*(P117)rt_nil_check(F->ph_1238)).name_ = F->name_438;
(*F->t_439) = F->ph_1238;
ret_:

  return;
}

static void f_inherit_444(struct f_greenc_1fr *up_, P117 parent_441, P117 t_442, rt_int line_443) {
  struct f_inherit_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_441 = parent_441;
F->t_442 = t_442;
F->line_443 = line_443;
F->s_1239 = NULL;
F->s_1239 = F->up->scope_stack_116;
F->z_1240 = NULL;
F->p_1241 = NULL;
F->q_1242 = NULL;
F->tail_1243 = NULL;
F->news_1245 = NULL;
while ((F->s_1239 != NULL)) {
if ((((((*(P112)rt_nil_check(F->s_1239)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->s_1239)).kind_ == ((rt_int)4LL))) && (!(*(P112)rt_nil_check(F->s_1239)).hidden_)) && ((*(P112)rt_nil_check(F->s_1239)).members_ == NULL))) {
F->uses_1244 = f_same_382(F->up, (*(P112)rt_nil_check(F->s_1239)).result_, F->parent_441);
F->p_1241 = (*(P112)rt_nil_check(F->s_1239)).params_;
while ((F->p_1241 != NULL)) {
F->uses_1244 = (F->uses_1244 || f_same_382(F->up, (*(P1194)rt_nil_check(F->p_1241)).t_, F->parent_441));
F->p_1241 = (*(P1194)rt_nil_check(F->p_1241)).next_;
}
L_end_1247: ;
if (F->uses_1244) {
f_copy_sym_718(F->up, F->s_1239, &F->z_1240);
(*(P112)rt_nil_check(F->z_1240)).params_ = NULL;
F->tail_1243 = NULL;
F->p_1241 = (*(P112)rt_nil_check(F->s_1239)).params_;
while ((F->p_1241 != NULL)) {
F->q_1242 = ({ R1195 *cell1249 = rt_alloc(sizeof(R1195)); *cell1249 = cp_R1195(({ R1195 ag1250; ag1250.name_ = (*(P1194)rt_nil_check(F->p_1241)).name_; ag1250.mode_ = (*(P1194)rt_nil_check(F->p_1241)).mode_; ag1250.t_ = (*(P1194)rt_nil_check(F->p_1241)).t_; ag1250.c_ = (*(P1194)rt_nil_check(F->p_1241)).c_; ag1250.cfield_ = (*(P1194)rt_nil_check(F->p_1241)).cfield_; ag1250.dflt_ = (*(P1194)rt_nil_check(F->p_1241)).dflt_; ag1250.next_ = NULL; ag1250; })); (P1194)cell1249; });
if (f_same_382(F->up, (*(P1194)rt_nil_check(F->q_1242)).t_, F->parent_441)) {
(*(P1194)rt_nil_check(F->q_1242)).t_ = F->t_442;
}
if ((F->tail_1243 == NULL)) {
(*(P112)rt_nil_check(F->z_1240)).params_ = F->q_1242;
} else {
(*(P1194)rt_nil_check(F->tail_1243)).next_ = F->q_1242;
}
F->tail_1243 = F->q_1242;
F->p_1241 = (*(P1194)rt_nil_check(F->p_1241)).next_;
}
L_end_1248: ;
if (f_same_382(F->up, (*(P112)rt_nil_check(F->z_1240)).result_, F->parent_441)) {
(*(P112)rt_nil_check(F->z_1240)).result_ = F->t_442;
}
(*(P112)rt_nil_check(F->z_1240)).chain_ = F->news_1245;
F->news_1245 = F->z_1240;
}
}
F->s_1239 = (*(P112)rt_nil_check(F->s_1239)).stack_;
}
L_end_1246: ;
while ((F->news_1245 != NULL)) {
F->z_1240 = F->news_1245;
F->news_1245 = (*(P112)rt_nil_check(F->news_1245)).chain_;
(*(P112)rt_nil_check(F->z_1240)).chain_ = NULL;
f_define_397(F->up, F->z_1240, F->line_443);
}
L_end_1251: ;
ret_:

  return;
}

static void f_derive_literals_447(struct f_greenc_1fr *up_, P117 t_445, rt_int line_446) {
  struct f_derive_literals_447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_445 = t_445;
F->line_446 = line_446;
F->l_1252 = NULL;
F->l_1252 = (*(P117)rt_nil_check(F->t_445)).lits_;
F->n_1253 = ((rt_int)0LL);
F->y_1254 = NULL;
while ((F->l_1252 != NULL)) {
if (((*(P169)rt_nil_check(F->l_1252)).kind_ == ((rt_int)5LL))) {
F->y_1254 = f_new_sym_402(F->up, ((rt_int)7LL), (*(P169)rt_nil_check(F->l_1252)).name_);
(*(P112)rt_nil_check(F->y_1254)).t_ = F->t_445;
(*(P112)rt_nil_check(F->y_1254)).result_ = F->t_445;
(*(P112)rt_nil_check(F->y_1254)).mvalue_ = F->n_1253;
(*(P112)rt_nil_check(F->y_1254)).hasmv_ = 1;
f_define_397(F->up, F->y_1254, F->line_446);
}
F->n_1253 = rt_add(F->n_1253, ((rt_int)1LL));
F->l_1252 = (*(P169)rt_nil_check(F->l_1252)).next_;
}
L_end_1255: ;
ret_:

  return;
}

static void f_type_definition_452(struct f_greenc_1fr *up_, P169 d_448, P135 name_449, P117 *t_450, P173 *c_451) {
  struct f_type_definition_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_448 = d_448;
F->name_449 = name_449;
F->t_450 = t_450;
F->c_451 = c_451;
F->dummy_1256 = NULL;
F->it_1257 = NULL;
F->ic_1258 = NULL;
F->l_1259 = NULL;
F->comp_1260 = NULL;
F->f_1261 = NULL;
F->tail_1262 = NULL;
F->y_1265 = NULL;
(*F->c_451) = f_new_cons_405(F->up);
{ rt_int sel1266 = (*(P169)rt_nil_check(F->d_448)).kind_;
if (0 || sel1266 == ((rt_int)70LL)) {
f_fresh_typ_440(F->up, ((rt_int)4LL), F->name_449, &(*F->t_450));
(*(P117)rt_nil_check((*F->t_450))).lits_ = (*(P169)rt_nil_check(F->d_448)).a_;
F->l_1259 = (*(P169)rt_nil_check(F->d_448)).a_;
F->n_1264 = ((rt_int)0LL);
while ((F->l_1259 != NULL)) {
if (((*(P169)rt_nil_check(F->l_1259)).kind_ == ((rt_int)5LL))) {
F->y_1265 = f_new_sym_402(F->up, ((rt_int)7LL), (*(P169)rt_nil_check(F->l_1259)).name_);
(*(P112)rt_nil_check(F->y_1265)).t_ = (*F->t_450);
(*(P112)rt_nil_check(F->y_1265)).result_ = (*F->t_450);
(*(P112)rt_nil_check(F->y_1265)).mvalue_ = F->n_1264;
(*(P112)rt_nil_check(F->y_1265)).hasmv_ = 1;
f_define_397(F->up, F->y_1265, (*(P169)rt_nil_check(F->l_1259)).line_);
}
F->n_1264 = rt_add(F->n_1264, ((rt_int)1LL));
F->l_1259 = (*(P169)rt_nil_check(F->l_1259)).next_;
}
L_end_1267: ;
(*(P173)rt_nil_check((*F->c_451))).lo_ = f_mk_201(F->up, rt_str("0", 1));
(*(P173)rt_nil_check((*F->c_451))).hi_ = f_mk_201(F->up, rt_str_of_int(rt_sub(F->n_1264, ((rt_int)1LL))));
} else if (0 || sel1266 == ((rt_int)71LL)) {
f_fresh_typ_440(F->up, ((rt_int)1LL), F->name_449, &(*F->t_450));
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->d_448)).a_, F->up->ty_int_151, &F->dummy_1256, &(*(P173)rt_nil_check((*F->c_451))).lo_);
if (((*(P117)rt_nil_check(F->dummy_1256)).kind_ != ((rt_int)1LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_448)).line_, rt_str("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->d_448)).b_, F->up->ty_int_151, &F->dummy_1256, &(*(P173)rt_nil_check((*F->c_451))).hi_);
if (((*(P117)rt_nil_check(F->dummy_1256)).kind_ != ((rt_int)1LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_448)).line_, rt_str("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_428(F->up, (*(P169)rt_nil_check(F->d_448)).a_, &(*(P173)rt_nil_check((*F->c_451))).mlo_, &F->ok_1263);
(*(P173)rt_nil_check((*F->c_451))).hasm_ = F->ok_1263;
f_manifest_428(F->up, (*(P169)rt_nil_check(F->d_448)).b_, &(*(P173)rt_nil_check((*F->c_451))).mhi_, &F->ok_1263);
(*(P173)rt_nil_check((*F->c_451))).hasm_ = ((*(P173)rt_nil_check((*F->c_451))).hasm_ && F->ok_1263);
(*(P117)rt_nil_check((*F->t_450))).parent_ = F->up->ty_int_151;
if (((*(P173)rt_nil_check((*F->c_451))).hasm_ && (((*(P173)rt_nil_check((*F->c_451))).mlo_ >= rt_neg(((rt_int)2147483648LL))) && ((*(P173)rt_nil_check((*F->c_451))).mhi_ <= ((rt_int)2147483647LL))))) {
(*(P117)rt_nil_check((*F->t_450))).parent_ = F->up->ty_short_162;
}
f_inherit_444(F->up, (*(P117)rt_nil_check((*F->t_450))).parent_, (*F->t_450), (*(P169)rt_nil_check(F->d_448)).line_);
} else if (0 || sel1266 == ((rt_int)72LL)) {
f_real_type_462(F->up, F->d_448, F->name_449, &(*F->t_450), &(*F->c_451));
} else if (0 || sel1266 == ((rt_int)73LL)) {
if ((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->d_448)).a_)).next_ != NULL) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->d_448)).a_)).next_)).next_ != NULL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_448)).line_, rt_str("arrays of more than two dimensions are not handled yet", 54));
}
f_fresh_typ_440(F->up, ((rt_int)6LL), F->name_449, &(*F->t_450));
f_resolve_432(F->up, (*(P169)rt_nil_check(F->d_448)).b_, &(*(P117)rt_nil_check((*F->t_450))).elem_, &(*(P117)rt_nil_check((*F->t_450))).elemcons_);
F->l_1259 = (*(P169)rt_nil_check(F->d_448)).a_;
if (((*(P169)rt_nil_check(F->l_1259)).kind_ == ((rt_int)14LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->l_1259)).a_, NULL, &(*(P117)rt_nil_check((*F->t_450))).idx_, &(*(P173)rt_nil_check((*F->c_451))).lo_);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->l_1259)).b_, (*(P117)rt_nil_check((*F->t_450))).idx_, &F->dummy_1256, &(*(P173)rt_nil_check((*F->c_451))).hi_);
} else {
f_resolve_432(F->up, F->l_1259, &(*(P117)rt_nil_check((*F->t_450))).idx_, &F->ic_1258);
if ((((((*(P117)rt_nil_check((*(P117)rt_nil_check((*F->t_450))).idx_)).kind_ == ((rt_int)4LL)) || ((*(P117)rt_nil_check((*(P117)rt_nil_check((*F->t_450))).idx_)).kind_ == ((rt_int)11LL))) || ((*(P117)rt_nil_check((*(P117)rt_nil_check((*F->t_450))).idx_)).kind_ == ((rt_int)2LL))) || ((*(P173)rt_nil_check(F->ic_1258)).hasm_ && ((rt_sub((*(P173)rt_nil_check(F->ic_1258)).mhi_, (*(P173)rt_nil_check(F->ic_1258)).mlo_) >= ((rt_int)0LL)) && (rt_sub((*(P173)rt_nil_check(F->ic_1258)).mhi_, (*(P173)rt_nil_check(F->ic_1258)).mlo_) < ((rt_int)1000000LL)))))) {
(*(P173)rt_nil_check((*F->c_451))).lo_ = (*(P173)rt_nil_check(F->ic_1258)).lo_;
(*(P173)rt_nil_check((*F->c_451))).hi_ = (*(P173)rt_nil_check(F->ic_1258)).hi_;
} else if (((*(P173)rt_nil_check(F->ic_1258)).lo_ != NULL)) {
(*(P117)rt_nil_check((*F->t_450))).tcons_ = f_new_cons_405(F->up);
(*(P173)rt_nil_check((*(P117)rt_nil_check((*F->t_450))).tcons_)).lo_ = (*(P173)rt_nil_check(F->ic_1258)).lo_;
}
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->d_448)).a_)).next_ != NULL)) {
F->l_1259 = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->d_448)).a_)).next_;
if (((*(P169)rt_nil_check(F->l_1259)).kind_ == ((rt_int)14LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->l_1259)).a_, NULL, &(*(P117)rt_nil_check((*F->t_450))).idx2_, &(*(P173)rt_nil_check((*F->c_451))).lo2_);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->l_1259)).b_, (*(P117)rt_nil_check((*F->t_450))).idx2_, &F->dummy_1256, &(*(P173)rt_nil_check((*F->c_451))).hi2_);
} else {
f_resolve_432(F->up, F->l_1259, &(*(P117)rt_nil_check((*F->t_450))).idx2_, &F->ic_1258);
(*(P173)rt_nil_check((*F->c_451))).lo2_ = (*(P173)rt_nil_check(F->ic_1258)).lo_;
(*(P173)rt_nil_check((*F->c_451))).hi2_ = (*(P173)rt_nil_check(F->ic_1258)).hi_;
}
if ((((*(P173)rt_nil_check((*F->c_451))).lo_ == NULL) || ((*(P173)rt_nil_check((*F->c_451))).lo2_ == NULL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_448)).line_, rt_str("a two-dimensional array needs the bounds of both indexes here", 61));
}
}
if (((*(P173)rt_nil_check((*F->c_451))).lo_ != NULL)) {
(*(P117)rt_nil_check((*F->t_450))).tcons_ = (*F->c_451);
}
} else if (0 || sel1266 == ((rt_int)74LL)) {
f_fresh_typ_440(F->up, ((rt_int)7LL), F->name_449, &(*F->t_450));
F->comp_1260 = (*(P169)rt_nil_check(F->d_448)).a_;
while ((F->comp_1260 != NULL)) {
F->f_1261 = ({ R1206 *cell1269 = rt_alloc(sizeof(R1206)); *cell1269 = cp_R1206(({ R1206 ag1270; ag1270.name_ = (*(P169)rt_nil_check(F->comp_1260)).name_; ag1270.t_ = NULL; ag1270.c_ = NULL; ag1270.next_ = NULL; ag1270.dflt_ = (*(P169)rt_nil_check(F->comp_1260)).b_; ag1270; })); (P1205)cell1269; });
f_resolve_432(F->up, (*(P169)rt_nil_check(F->comp_1260)).a_, &(*(P1205)rt_nil_check(F->f_1261)).t_, &(*(P1205)rt_nil_check(F->f_1261)).c_);
if ((F->tail_1262 == NULL)) {
(*(P117)rt_nil_check((*F->t_450))).fields_ = F->f_1261;
} else {
(*(P1205)rt_nil_check(F->tail_1262)).next_ = F->f_1261;
}
F->tail_1262 = F->f_1261;
F->comp_1260 = (*(P169)rt_nil_check(F->comp_1260)).next_;
}
L_end_1268: ;
} else if (0 || sel1266 == ((rt_int)75LL)) {
f_fresh_typ_440(F->up, ((rt_int)8LL), F->name_449, &(*F->t_450));
(*(P117)rt_nil_check((*F->t_450))).decl_ = (*(P169)rt_nil_check(F->d_448)).a_;
} else if (0 || sel1266 == ((rt_int)76LL)) {
f_derived_type_457(F->up, F->d_448, F->name_449, &(*F->t_450), &(*F->c_451));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_448)).line_, rt_str("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_derived_type_457(struct f_greenc_1fr *up_, P169 d_453, P135 name_454, P117 *t_455, P173 *c_456) {
  struct f_derived_type_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_453 = d_453;
F->name_454 = name_454;
F->t_455 = t_455;
F->c_456 = c_456;
F->pt_1271 = NULL;
F->ct_1272 = NULL;
F->ph_1273 = NULL;
F->ph_1273 = F->up->completing_168;
F->up->completing_168 = NULL;
f_resolve_432(F->up, (*(P169)rt_nil_check(F->d_453)).a_, &F->pt_1271, &(*F->c_456));
if ((((*(P117)rt_nil_check(F->pt_1271)).kind_ == ((rt_int)9LL)) && (*(P117)rt_nil_check(F->pt_1271)).priv_)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_453)).line_, rt_str("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_470(F->up, F->pt_1271) || ((*(P117)rt_nil_check(F->pt_1271)).kind_ == ((rt_int)8LL)))) {
f_ctype_416(F->up, F->pt_1271, &F->ct_1272);
}
if ((F->ph_1273 == NULL)) {
(*F->t_455) = f_new_typ_404(F->up, (*(P117)rt_nil_check(F->pt_1271)).kind_);
} else {
(*F->t_455) = F->ph_1273;
}
as_R118(&(*(P117)rt_nil_check((*F->t_455))), (*(P117)rt_nil_check(F->pt_1271)));
(*(P117)rt_nil_check((*F->t_455))).name_ = F->name_454;
(*(P117)rt_nil_check((*F->t_455))).parent_ = F->pt_1271;
(*(P117)rt_nil_check((*F->t_455))).next_ = NULL;
if (((*(P117)rt_nil_check((*F->t_455))).kind_ == ((rt_int)4LL))) {
f_derive_literals_447(F->up, (*F->t_455), (*(P169)rt_nil_check(F->d_453)).line_);
}
f_inherit_444(F->up, F->pt_1271, (*F->t_455), (*(P169)rt_nil_check(F->d_453)).line_);
ret_:

  return;
}

static void f_real_type_462(struct f_greenc_1fr *up_, P169 d_458, P135 name_459, P117 *t_460, P173 *c_461) {
  struct f_real_type_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_458 = d_458;
F->name_459 = name_459;
F->t_460 = t_460;
F->c_461 = c_461;
F->dt_1274 = NULL;
F->dv_1275 = NULL;
(*F->c_461) = f_new_cons_405(F->up);
if (((*(P169)rt_nil_check(F->d_458)).flag_ == ((rt_int)1LL))) {
f_manifest_428(F->up, (*(P169)rt_nil_check(F->d_458)).a_, &F->n_1276, &F->ok_1277);
if ((!F->ok_1277)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_458)).line_, rt_str("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((F->n_1276 < ((rt_int)1LL)) || (F->n_1276 > ((rt_int)15LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_458)).line_, rt_str_cat(rt_str_cat(rt_str("no predefined floating point type has ", 38), rt_str_of_int(F->n_1276)), rt_str(" digits", 7)));
}
f_fresh_typ_440(F->up, ((rt_int)3LL), F->name_459, &(*F->t_460));
(*(P117)rt_nil_check((*F->t_460))).ndigits_ = F->n_1276;
if ((F->n_1276 <= ((rt_int)6LL))) {
(*(P117)rt_nil_check((*F->t_460))).parent_ = F->up->ty_sfloat_164;
} else {
(*(P117)rt_nil_check((*F->t_460))).parent_ = F->up->ty_float_153;
}
} else {
if (((*(P169)rt_nil_check(F->d_458)).b_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_458)).line_, rt_str("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->d_458)).a_, F->up->ty_float_153, &F->dt_1274, &F->dv_1275);
if (((*(P117)rt_nil_check(F->dt_1274)).kind_ != ((rt_int)3LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->d_458)).line_, rt_str("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_440(F->up, ((rt_int)16LL), F->name_459, &(*F->t_460));
(*(P117)rt_nil_check((*F->t_460))).fdelta_ = f_mk_201(F->up, rt_str_catc(rt_str_ccat(40, (*(P135)rt_nil_check(F->dv_1275))), 41));
(*(P117)rt_nil_check((*F->t_460))).fsmall_ = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_small(", 11), (*(P135)rt_nil_check(F->dv_1275))), 41));
}
if (((*(P169)rt_nil_check(F->d_458)).b_ != NULL)) {
f_range_of_436(F->up, (*(P169)rt_nil_check(F->d_458)).b_, (*F->t_460), (*F->c_461));
}
if (((*(P117)rt_nil_check((*F->t_460))).parent_ != NULL)) {
f_inherit_444(F->up, (*(P117)rt_nil_check((*F->t_460))).parent_, (*F->t_460), (*(P169)rt_nil_check(F->d_458)).line_);
}
ret_:

  return;
}

static void f_finish_ptr_464(struct f_greenc_1fr *up_, P117 t_463) {
  struct f_finish_ptr_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_463 = t_463;
F->c_1278 = NULL;
if ((((*(P117)rt_nil_check(F->t_463)).target_ == NULL) && ((*(P117)rt_nil_check(F->t_463)).decl_ != NULL))) {
f_resolve_432(F->up, (*(P117)rt_nil_check(F->t_463)).decl_, &(*(P117)rt_nil_check(F->t_463)).target_, &F->c_1278);
}
ret_:

  return;
}

static void f_init_storage_468(struct f_greenc_1fr *up_, rstr lval_465, P117 t_466, P173 c_467) {
  struct f_init_storage_468fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_465 = rt_str_copy(lval_465);
F->t_466 = t_466;
F->c_467 = c_467;
F->ct_1279 = NULL;
F->i_1280 = NULL;
F->v_1281 = NULL;
F->x_1282 = NULL;
F->vt_1283 = NULL;
F->f_1284 = NULL;
if (((*(P117)rt_nil_check(F->t_466)).kind_ == ((rt_int)8LL))) {
f_emit_228(F->up, rt_str_cat(F->lval_465, rt_str(" = NULL;", 8)));
} else if (((*(P117)rt_nil_check(F->t_466)).kind_ == ((rt_int)5LL))) {
if (((*(P173)rt_nil_check(F->c_467)).slen_ == NULL)) {
f_fail_222(F->up, ((rt_int)0LL), rt_str("a STRING object needs an index constraint or an initial value", 61));
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(F->lval_465, rt_str(" = rt_str_new(", 14)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_467)).slen_))), rt_str(");", 2)));
} else if (((*(P117)rt_nil_check(F->t_466)).kind_ == ((rt_int)6LL))) {
if (((*(P173)rt_nil_check(F->c_467)).lo_ == NULL)) {
f_fail_222(F->up, ((rt_int)0LL), rt_str("an array object needs an index constraint", 41));
}
f_ctype_416(F->up, (*(P117)rt_nil_check(F->t_466)).elem_, &F->ct_1279);
if (((*(P173)rt_nil_check(F->c_467)).lo2_ != NULL)) {
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_465, rt_str(".lo = ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_467)).lo_))), rt_str("; ", 2)), F->lval_465), rt_str(".hi = ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_467)).hi_))), rt_str("; ", 2)), F->lval_465), rt_str(".lo2 = ", 7)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_467)).lo2_))), rt_str("; ", 2)), F->lval_465), rt_str(".hi2 = ", 7)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_467)).hi2_))), 59));
} else {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_465, rt_str(".lo = ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_467)).lo_))), rt_str("; ", 2)), F->lval_465), rt_str(".hi = ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_467)).hi_))), rt_str("; ", 2)), F->lval_465), rt_str(".lo2 = 1; ", 10)), F->lval_465), rt_str(".hi2 = 1;", 9)));
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_465, rt_str(".p = rt_alloc(sizeof(", 21)), (*(P135)rt_nil_check(F->ct_1279))), rt_str(") * (size_t)RT_CNT(", 19)), F->lval_465), rt_str("));", 3)));
if (((((*(P117)rt_nil_check((*(P117)rt_nil_check(F->t_466)).elem_)).kind_ == ((rt_int)5LL)) || ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->t_466)).elem_)).kind_ == ((rt_int)6LL))) || ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->t_466)).elem_)).kind_ == ((rt_int)7LL)))) {
f_new_name_204(F->up, rt_str("i", 1), &F->i_1280);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P135)rt_nil_check(F->i_1280))), rt_str(" = 0; ", 6)), (*(P135)rt_nil_check(F->i_1280))), rt_str(" < RT_CNT(", 10)), F->lval_465), rt_str("); ", 3)), (*(P135)rt_nil_check(F->i_1280))), rt_str("++) {", 5)));
f_init_storage_468(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_465, rt_str(".p[", 3)), (*(P135)rt_nil_check(F->i_1280))), 93), (*(P117)rt_nil_check(F->t_466)).elem_, (*(P117)rt_nil_check(F->t_466)).elemcons_);
f_emit_228(F->up, rt_str("}", 1));
}
} else if (((*(P117)rt_nil_check(F->t_466)).kind_ == ((rt_int)7LL))) {
F->f_1284 = (*(P117)rt_nil_check(F->t_466)).fields_;
while ((F->f_1284 != NULL)) {
f_init_storage_468(F->up, rt_str_cat(rt_str_catc(F->lval_465, 46), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1284)).name_)))), (*(P1205)rt_nil_check(F->f_1284)).t_, (*(P1205)rt_nil_check(F->f_1284)).c_);
if (((*(P1205)rt_nil_check(F->f_1284)).dflt_ != NULL)) {
f_gexpr_615(F->up, (*(P1205)rt_nil_check(F->f_1284)).dflt_, (*(P1205)rt_nil_check(F->f_1284)).t_, &F->vt_1283, &F->v_1281);
f_check_type_411(F->up, F->vt_1283, (*(P1205)rt_nil_check(F->f_1284)).t_, ((rt_int)0LL));
f_assign_code_476(F->up, rt_str_cat(rt_str_catc(F->lval_465, 46), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1284)).name_)))), (*(P1205)rt_nil_check(F->f_1284)).t_, (*(P135)rt_nil_check(F->v_1281)), (*(P1205)rt_nil_check(F->f_1284)).c_, &F->x_1282);
f_emit_228(F->up, (*(P135)rt_nil_check(F->x_1282)));
}
F->f_1284 = (*(P1205)rt_nil_check(F->f_1284)).next_;
}
L_end_1285: ;
}
ret_:

  return;
}

static int f_composite_470(struct f_greenc_1fr *up_, P117 t_469) {
  struct f_composite_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_469 = t_469;
F->result_ = (((*(P117)rt_nil_check(F->t_469)).kind_ == ((rt_int)6LL)) || ((*(P117)rt_nil_check(F->t_469)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_476(struct f_greenc_1fr *up_, rstr lval_471, P117 t_472, rstr v_473, P173 c_474, P135 *r_475) {
  struct f_assign_code_476fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_471 = rt_str_copy(lval_471);
F->t_472 = t_472;
F->v_473 = rt_str_copy(v_473);
F->c_474 = c_474;
F->r_475 = r_475;
F->ct_1286 = NULL;
if (f_composite_470(F->up, F->t_472)) {
f_ctype_416(F->up, F->t_472, &F->ct_1286);
(*F->r_475) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_472)).cname_))), rt_str("(&", 2)), F->lval_471), rt_str(", ", 2)), F->v_473), rt_str(");", 2)));
} else if (((*(P117)rt_nil_check(F->t_472)).kind_ == ((rt_int)5LL))) {
(*F->r_475) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), F->lval_471), rt_str(", ", 2)), F->v_473), rt_str(");", 2)));
} else if (((((((*(P117)rt_nil_check(F->t_472)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check(F->t_472)).kind_ == ((rt_int)4LL))) || ((*(P117)rt_nil_check(F->t_472)).kind_ == ((rt_int)11LL))) && (F->c_474 != NULL)) && ((*(P173)rt_nil_check(F->c_474)).lo_ != NULL))) {
(*F->r_475) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_471, rt_str(" = rt_range(", 12)), F->v_473), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_474)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_474)).hi_))), rt_str(");", 2)));
} else if ((((((*(P117)rt_nil_check(F->t_472)).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check(F->t_472)).kind_ == ((rt_int)16LL))) && (F->c_474 != NULL)) && ((*(P173)rt_nil_check(F->c_474)).lo_ != NULL))) {
(*F->r_475) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_471, rt_str(" = rt_frange(", 13)), F->v_473), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_474)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_474)).hi_))), rt_str(");", 2)));
} else {
(*F->r_475) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_471, rt_str(" = ", 3)), F->v_473), 59));
}
ret_:

  return;
}

static void f_copy_code_480(struct f_greenc_1fr *up_, P117 t_477, rstr v_478, P135 *r_479) {
  struct f_copy_code_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_477 = t_477;
F->v_478 = rt_str_copy(v_478);
F->r_479 = r_479;
F->ct_1287 = NULL;
if (f_composite_470(F->up, F->t_477)) {
f_ctype_416(F->up, F->t_477, &F->ct_1287);
(*F->r_479) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("cp_", 3), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_477)).cname_))), 40), F->v_478), 41));
} else if (((*(P117)rt_nil_check(F->t_477)).kind_ == ((rt_int)5LL))) {
(*F->r_479) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_copy(", 12), F->v_478), 41));
} else {
(*F->r_479) = f_mk_201(F->up, F->v_478);
}
ret_:

  return;
}

static void f_eq_code_485(struct f_greenc_1fr *up_, P117 t_481, rstr a_482, rstr b_483, P135 *r_484) {
  struct f_eq_code_485fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_481 = t_481;
F->a_482 = rt_str_copy(a_482);
F->b_483 = rt_str_copy(b_483);
F->r_484 = r_484;
F->ct_1288 = NULL;
if (f_composite_470(F->up, F->t_481)) {
f_ctype_416(F->up, F->t_481, &F->ct_1288);
(*F->r_484) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("eq_", 3), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_481)).cname_))), 40), F->a_482), rt_str(", ", 2)), F->b_483), 41));
} else if (((*(P117)rt_nil_check(F->t_481)).kind_ == ((rt_int)5LL))) {
(*F->r_484) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_482), rt_str(", ", 2)), F->b_483), 41));
} else {
(*F->r_484) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_482), rt_str(" == ", 4)), F->b_483), 41));
}
ret_:

  return;
}

static int f_seen_name_488(struct f_greenc_1fr *up_, P146 l_486, rstr s_487) {
  struct f_seen_name_488fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_486 = l_486;
F->s_487 = rt_str_copy(s_487);
F->p_1289 = NULL;
F->p_1289 = F->l_486;
while ((F->p_1289 != NULL)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P146)rt_nil_check(F->p_1289)).s_)), F->s_487)) {
F->result_ = 1;
goto ret_;
}
F->p_1289 = (*(P146)rt_nil_check(F->p_1289)).next_;
}
L_end_1290: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_489(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_489fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1291 = NULL;
F->t_1291 = F->up->all_types_119;
F->done_1292 = NULL;
F->l_1293 = NULL;
while ((F->t_1291 != NULL)) {
if ((f_composite_470(F->up, F->t_1291) && (!f_seen_name_488(F->up, F->done_1292, (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_)))))) {
F->l_1293 = ({ R147 *cell1295 = rt_alloc(sizeof(R147)); *cell1295 = cp_R147(({ R147 ag1296; ag1296.s_ = (*(P117)rt_nil_check(F->t_1291)).cname_; ag1296.next_ = F->done_1292; ag1296; })); (P146)cell1295; });
F->done_1292 = F->l_1293;
f_put_to_226(F->up, F->up->out_helpers_125, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), 40), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), rt_str(" *d, ", 5)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), rt_str(" s);", 4)));
f_put_to_226(F->up, F->up->out_helpers_125, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), rt_str(" cp_", 4)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), 40), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), rt_str(" s);", 4)));
f_put_to_226(F->up, F->up->out_helpers_125, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), 40), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), rt_str(" a, ", 4)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_1291)).cname_))), rt_str(" b);", 4)));
f_helper_bodies_491(F->up, F->t_1291);
}
F->t_1291 = (*(P117)rt_nil_check(F->t_1291)).next_;
}
L_end_1294: ;
ret_:

  return;
}

static void f_helper_bodies_491(struct f_greenc_1fr *up_, P117 t_490) {
  struct f_helper_bodies_491fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_490 = t_490;
F->c_1297 = NULL;
F->c_1297 = (*(P117)rt_nil_check(F->t_490)).cname_;
F->b_1298 = NULL;
F->b_1298 = F->up->out_funcs_128;
F->ct_1299 = NULL;
F->x_1300 = NULL;
F->y_1301 = NULL;
F->conds_1302 = NULL;
F->f_1303 = NULL;
if (((*(P117)rt_nil_check(F->t_490)).kind_ == ((rt_int)6LL))) {
f_ctype_416(F->up, (*(P117)rt_nil_check(F->t_490)).elem_, &F->ct_1299);
f_assign_code_476(F->up, rt_str("d->p[i]", 7), (*(P117)rt_nil_check(F->t_490)).elem_, rt_str("s.p[i]", 6), NULL, &F->x_1300);
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P135)rt_nil_check(F->c_1297))), 40), (*(P135)rt_nil_check(F->c_1297))), rt_str(" *d, ", 5)), (*(P135)rt_nil_check(F->c_1297))), rt_str(" s) {", 5)));
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_219(F->up)), rt_str("array length", 12)), f_q_219(F->up)), rt_str(");", 2)));
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), (*(P135)rt_nil_check(F->x_1300))), rt_str(" }", 2)));
f_put_to_226(F->up, F->b_1298, rt_str("}", 1));
f_copy_code_480(F->up, (*(P117)rt_nil_check(F->t_490)).elem_, rt_str("s.p[i]", 6), &F->x_1300);
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P135)rt_nil_check(F->c_1297))), rt_str(" cp_", 4)), (*(P135)rt_nil_check(F->c_1297))), 40), (*(P135)rt_nil_check(F->c_1297))), rt_str(" s) {", 5)));
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P135)rt_nil_check(F->c_1297))), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P135)rt_nil_check(F->ct_1299))), rt_str(") * (size_t)RT_CNT(s));", 23)));
f_put_to_226(F->up, F->b_1298, rt_str_catc(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), (*(P135)rt_nil_check(F->x_1300))), 59));
f_put_to_226(F->up, F->b_1298, rt_str("  return d;", 11));
f_put_to_226(F->up, F->b_1298, rt_str("}", 1));
f_eq_code_485(F->up, (*(P117)rt_nil_check(F->t_490)).elem_, rt_str("a.p[i]", 6), rt_str("b.p[i]", 6), &F->x_1300);
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P135)rt_nil_check(F->c_1297))), 40), (*(P135)rt_nil_check(F->c_1297))), rt_str(" a, ", 4)), (*(P135)rt_nil_check(F->c_1297))), rt_str(" b) {", 5)));
f_put_to_226(F->up, F->b_1298, rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43));
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), (*(P135)rt_nil_check(F->x_1300))), rt_str(")) return 0;", 12)));
f_put_to_226(F->up, F->b_1298, rt_str("  return 1;", 11));
f_put_to_226(F->up, F->b_1298, rt_str("}", 1));
} else {
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P135)rt_nil_check(F->c_1297))), 40), (*(P135)rt_nil_check(F->c_1297))), rt_str(" *d, ", 5)), (*(P135)rt_nil_check(F->c_1297))), rt_str(" s) {", 5)));
F->f_1303 = (*(P117)rt_nil_check(F->t_490)).fields_;
while ((F->f_1303 != NULL)) {
f_assign_code_476(F->up, rt_str_cat(rt_str("d->", 3), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1303)).name_)))), (*(P1205)rt_nil_check(F->f_1303)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1303)).name_)))), NULL, &F->x_1300);
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str("  ", 2), (*(P135)rt_nil_check(F->x_1300))));
F->f_1303 = (*(P1205)rt_nil_check(F->f_1303)).next_;
}
L_end_1304: ;
f_put_to_226(F->up, F->b_1298, rt_str("}", 1));
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P135)rt_nil_check(F->c_1297))), rt_str(" cp_", 4)), (*(P135)rt_nil_check(F->c_1297))), 40), (*(P135)rt_nil_check(F->c_1297))), rt_str(" s) {", 5)));
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P135)rt_nil_check(F->c_1297))), rt_str(" d = s;", 7)));
F->conds_1302 = f_mk_201(F->up, rt_str("1", 1));
F->f_1303 = (*(P117)rt_nil_check(F->t_490)).fields_;
while ((F->f_1303 != NULL)) {
f_copy_code_480(F->up, (*(P1205)rt_nil_check(F->f_1303)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1303)).name_)))), &F->x_1300);
f_put_to_226(F->up, F->b_1298, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1303)).name_)))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->x_1300))), 59));
f_eq_code_485(F->up, (*(P1205)rt_nil_check(F->f_1303)).t_, rt_str_cat(rt_str("a.", 2), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1303)).name_)))), rt_str_cat(rt_str("b.", 2), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1303)).name_)))), &F->y_1301);
F->conds_1302 = f_mk_201(F->up, rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->conds_1302)), rt_str(" && ", 4)), (*(P135)rt_nil_check(F->y_1301))));
F->f_1303 = (*(P1205)rt_nil_check(F->f_1303)).next_;
}
L_end_1305: ;
f_put_to_226(F->up, F->b_1298, rt_str("  return d;", 11));
f_put_to_226(F->up, F->b_1298, rt_str("}", 1));
f_put_to_226(F->up, F->b_1298, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P135)rt_nil_check(F->c_1297))), 40), (*(P135)rt_nil_check(F->c_1297))), rt_str(" a, ", 4)), (*(P135)rt_nil_check(F->c_1297))), rt_str(" b) {", 5)));
f_put_to_226(F->up, F->b_1298, rt_str_catc(rt_str_cat(rt_str("  return ", 9), (*(P135)rt_nil_check(F->conds_1302))), 59));
f_put_to_226(F->up, F->b_1298, rt_str("}", 1));
}
ret_:

  return;
}

static void f_storage_495(struct f_greenc_1fr *up_, rstr name_492, P117 t_493, P135 *access_code_494) {
  struct f_storage_495fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_492 = rt_str_copy(name_492);
F->t_493 = t_493;
F->access_code_494 = access_code_494;
F->ct_1306 = NULL;
F->g_1307 = NULL;
f_ctype_416(F->up, F->t_493, &F->ct_1306);
if ((!F->up->in_func_133)) {
f_new_name_204(F->up, rt_str_catc(rt_str_cat(rt_str("g_", 2), f_lower_s_212(F->up, F->name_492)), 95), &F->g_1307);
f_put_to_226(F->up, F->up->out_globals_127, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P135)rt_nil_check(F->ct_1306))), 32), (*(P135)rt_nil_check(F->g_1307))), 59));
F->up->st_field_136 = F->g_1307;
(*F->access_code_494) = F->g_1307;
} else {
f_new_name_204(F->up, rt_str_catc(f_lower_s_212(F->up, F->name_492), 95), &F->g_1307);
f_put_to_226(F->up, F->up->fields_buf_132, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P135)rt_nil_check(F->ct_1306))), 32), (*(P135)rt_nil_check(F->g_1307))), 59));
F->up->st_field_136 = F->g_1307;
(*F->access_code_494) = f_mk_201(F->up, rt_str_cat(rt_str("F->", 3), (*(P135)rt_nil_check(F->g_1307))));
}
ret_:

  return;
}

static void f_bind_498(struct f_greenc_1fr *up_, P112 y_496, P135 access_code_497) {
  struct f_bind_498fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_496 = y_496;
F->access_code_497 = access_code_497;
if (F->up->in_func_133) {
(*(P112)rt_nil_check(F->y_496)).level_ = F->up->cur_level_134;
(*(P112)rt_nil_check(F->y_496)).access_path_ = F->up->st_field_136;
} else {
(*(P112)rt_nil_check(F->y_496)).level_ = ((rt_int)0LL);
(*(P112)rt_nil_check(F->y_496)).access_path_ = F->access_code_497;
}
ret_:

  return;
}

static void f_declare_subprograms_500(struct f_greenc_1fr *up_, P169 from_499) {
  struct f_declare_subprograms_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_499 = from_499;
F->e_1308 = NULL;
F->e_1308 = F->from_499;
while ((F->e_1308 != NULL)) {
if (((((*(P169)rt_nil_check(F->e_1308)).kind_ == ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->e_1308)).kind_ == ((rt_int)45LL))) && ((*(P169)rt_nil_check(F->e_1308)).ival_ == ((rt_int)0LL)))) {
f_declare_one_502(F->up, F->e_1308);
}
F->e_1308 = (*(P169)rt_nil_check(F->e_1308)).next_;
}
L_end_1309: ;
ret_:

  return;
}

static void f_declare_one_502(struct f_greenc_1fr *up_, P169 e_501) {
  struct f_declare_one_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_501 = e_501;
F->y_1310 = NULL;
F->z_1311 = NULL;
if (f_is_generic_name_897(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_501)).name_)))) {
goto ret_;
}
f_build_subprogram_505(F->up, F->e_501, &F->y_1310);
F->z_1311 = F->up->table_114.p[rt_index(f_hash_367(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1310)).name_))), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while ((F->z_1311 != NULL)) {
if (((((((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1311)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1310)).name_))) && (((*(P112)rt_nil_check(F->z_1311)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_1311)).kind_ == ((rt_int)4LL)))) && ((*(P112)rt_nil_check(F->z_1311)).decl_ != NULL)) && ((*(P169)rt_nil_check((*(P112)rt_nil_check(F->z_1311)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P112)rt_nil_check(F->z_1311)).depth_ == F->up->depth_115)) && f_same_signature_394(F->up, (*(P112)rt_nil_check(F->z_1311)).params_, (*(P112)rt_nil_check(F->y_1310)).params_)) && f_same_382(F->up, (*(P112)rt_nil_check(F->z_1311)).result_, (*(P112)rt_nil_check(F->y_1310)).result_))) {
(*(P112)rt_nil_check(F->z_1311)).decl_ = F->e_501;
goto ret_;
}
F->z_1311 = (*(P112)rt_nil_check(F->z_1311)).chain_;
}
L_end_1312: ;
if ((F->up->cur_task_176 != NULL)) {
F->z_1311 = (*(P112)rt_nil_check(F->up->cur_task_176)).members_;
while ((F->z_1311 != NULL)) {
if ((((((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1311)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1310)).name_))) && (((*(P112)rt_nil_check(F->z_1311)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_1311)).kind_ == ((rt_int)4LL)))) && ((*(P112)rt_nil_check(F->z_1311)).decl_ != NULL)) && ((*(P169)rt_nil_check((*(P112)rt_nil_check(F->z_1311)).decl_)).ival_ == ((rt_int)1LL))) && f_same_signature_394(F->up, (*(P112)rt_nil_check(F->z_1311)).params_, (*(P112)rt_nil_check(F->y_1310)).params_)) && f_same_382(F->up, (*(P112)rt_nil_check(F->z_1311)).result_, (*(P112)rt_nil_check(F->y_1310)).result_))) {
(*(P112)rt_nil_check(F->y_1310)).cname_ = (*(P112)rt_nil_check(F->z_1311)).cname_;
(*(P112)rt_nil_check(F->z_1311)).decl_ = F->e_501;
goto L_end_1313;
}
F->z_1311 = (*(P112)rt_nil_check(F->z_1311)).mnext_;
}
L_end_1313: ;
}
f_define_397(F->up, F->y_1310, (*(P169)rt_nil_check(F->e_501)).line_);
ret_:

  return;
}

static void f_build_subprogram_505(struct f_greenc_1fr *up_, P169 d_503, P112 *y_504) {
  struct f_build_subprogram_505fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_503 = d_503;
F->y_504 = y_504;
F->p_1314 = NULL;
F->p_1314 = (*(P169)rt_nil_check(F->d_503)).a_;
F->pm_1315 = NULL;
F->tail_1316 = NULL;
F->rc_1317 = NULL;
F->k_1318 = ((rt_int)4LL);
if (((*(P169)rt_nil_check(F->d_503)).kind_ == ((rt_int)45LL))) {
F->k_1318 = ((rt_int)3LL);
}
(*F->y_504) = f_new_sym_402(F->up, F->k_1318, (*(P169)rt_nil_check(F->d_503)).name_);
while ((F->p_1314 != NULL)) {
F->pm_1315 = ({ R1195 *cell1320 = rt_alloc(sizeof(R1195)); *cell1320 = cp_R1195(({ R1195 ag1321; ag1321.name_ = (*(P169)rt_nil_check(F->p_1314)).name_; ag1321.mode_ = (*(P169)rt_nil_check(F->p_1314)).ival_; ag1321.t_ = NULL; ag1321.c_ = NULL; ag1321.cfield_ = NULL; ag1321.dflt_ = (*(P169)rt_nil_check(F->p_1314)).b_; ag1321.next_ = NULL; ag1321; })); (P1194)cell1320; });
f_resolve_432(F->up, (*(P169)rt_nil_check(F->p_1314)).a_, &(*(P1194)rt_nil_check(F->pm_1315)).t_, &(*(P1194)rt_nil_check(F->pm_1315)).c_);
f_new_name_204(F->up, rt_str_catc(f_lower_s_212(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_1314)).name_))), 95), &(*(P1194)rt_nil_check(F->pm_1315)).cfield_);
if ((((*(P169)rt_nil_check(F->d_503)).kind_ == ((rt_int)45LL)) && ((*(P1194)rt_nil_check(F->pm_1315)).mode_ != ((rt_int)1LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->p_1314)).line_, rt_str("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P169)rt_nil_check(F->d_503)).flag_ == ((rt_int)1LL)) && ((*(P1194)rt_nil_check(F->pm_1315)).mode_ != ((rt_int)1LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->p_1314)).line_, rt_str("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1316 == NULL)) {
(*(P112)rt_nil_check((*F->y_504))).params_ = F->pm_1315;
} else {
(*(P1194)rt_nil_check(F->tail_1316)).next_ = F->pm_1315;
}
F->tail_1316 = F->pm_1315;
F->p_1314 = (*(P169)rt_nil_check(F->p_1314)).next_;
}
L_end_1319: ;
(*(P112)rt_nil_check((*F->y_504))).result_ = F->up->ty_void_156;
if (((*(P169)rt_nil_check(F->d_503)).b_ != NULL)) {
f_resolve_432(F->up, (*(P169)rt_nil_check(F->d_503)).b_, &(*(P112)rt_nil_check((*F->y_504))).result_, &F->rc_1317);
}
(*(P112)rt_nil_check((*F->y_504))).vrp_ = ((*(P169)rt_nil_check(F->d_503)).flag_ == ((rt_int)1LL));
f_new_name_204(F->up, rt_str_catc(rt_str_cat(rt_str("f_", 2), f_c_ident_565(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_503)).name_)))), 95), &(*(P112)rt_nil_check((*F->y_504))).cname_);
(*(P112)rt_nil_check((*F->y_504))).decl_ = F->d_503;
(*(P112)rt_nil_check((*F->y_504))).level_ = F->up->cur_level_134;
ret_:

  return;
}

static void f_decl_elements_507(struct f_greenc_1fr *up_, P169 decls_506) {
  struct f_decl_elements_507fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_506 = decls_506;
F->e_1322 = NULL;
F->e_1322 = F->decls_506;
F->declared_1323 = 0;
F->up->anon_node_171 = NULL;
while ((F->e_1322 != NULL)) {
if (((((*(P169)rt_nil_check(F->e_1322)).kind_ != ((rt_int)40LL)) && ((*(P169)rt_nil_check(F->e_1322)).kind_ != ((rt_int)41LL))) || ((*(P169)rt_nil_check(F->e_1322)).a_ != F->up->anon_node_171))) {
F->up->anon_node_171 = NULL;
}
if ((((((*(P169)rt_nil_check(F->e_1322)).kind_ == ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->e_1322)).kind_ == ((rt_int)45LL))) && ((*(P169)rt_nil_check(F->e_1322)).ival_ != ((rt_int)1LL))) && (!F->declared_1323))) {
f_declare_subprograms_500(F->up, F->e_1322);
F->declared_1323 = 1;
}
f_decl_element_509(F->up, F->e_1322);
F->e_1322 = (*(P169)rt_nil_check(F->e_1322)).next_;
}
L_end_1324: ;
ret_:

  return;
}

static void f_decl_element_509(struct f_greenc_1fr *up_, P169 e_508) {
  struct f_decl_element_509fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_508 = e_508;
F->pd_1325 = NULL;
F->y_1326 = NULL;
F->z_1327 = NULL;
F->t_1328 = NULL;
F->vt_1329 = NULL;
F->c_1330 = NULL;
F->acc_1331 = NULL;
F->v_1332 = NULL;
F->x_1333 = NULL;
{ rt_int sel1335 = (*(P169)rt_nil_check(F->e_508)).kind_;
if (0 || sel1335 == ((rt_int)42LL)) {
F->y_1326 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_)));
if ((((((((F->y_1326 != NULL) && ((*(P112)rt_nil_check(F->y_1326)).kind_ == ((rt_int)5LL))) && ((*(P112)rt_nil_check(F->y_1326)).depth_ == F->up->depth_115)) && ((*(P112)rt_nil_check(F->y_1326)).t_ != NULL)) && (*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).priv_) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).kind_ == ((rt_int)9LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).kind_ != ((rt_int)77LL)))) {
F->up->completing_168 = (*(P112)rt_nil_check(F->y_1326)).t_;
F->x_1333 = (*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).name_;
F->pd_1325 = (*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).decl_;
f_type_definition_452(F->up, (*(P169)rt_nil_check(F->e_508)).a_, (*(P169)rt_nil_check(F->e_508)).name_, &F->t_1328, &F->c_1330);
F->up->completing_168 = NULL;
if ((F->t_1328 != (*(P112)rt_nil_check(F->y_1326)).t_)) {
as_R118(&(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)), (*(P117)rt_nil_check(F->t_1328)));
}
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).name_ = F->x_1333;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).priv_ = 1;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).decl_ = F->pd_1325;
(*(P112)rt_nil_check(F->y_1326)).c_ = F->c_1330;
} else {
F->y_1326 = f_new_sym_402(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_508)).name_);
(*(P112)rt_nil_check(F->y_1326)).decl_ = F->e_508;
f_define_397(F->up, F->y_1326, (*(P169)rt_nil_check(F->e_508)).line_);
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).kind_ == ((rt_int)77LL))) {
(*(P112)rt_nil_check(F->y_1326)).t_ = f_new_typ_404(F->up, ((rt_int)9LL));
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).name_ = (*(P169)rt_nil_check(F->e_508)).name_;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).priv_ = 1;
(*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).t_)).decl_ = F->up->cur_pkg_187;
} else {
f_type_definition_452(F->up, (*(P169)rt_nil_check(F->e_508)).a_, (*(P169)rt_nil_check(F->e_508)).name_, &(*(P112)rt_nil_check(F->y_1326)).t_, &(*(P112)rt_nil_check(F->y_1326)).c_);
}
}
} else if (0 || sel1335 == ((rt_int)43LL)) {
F->y_1326 = f_new_sym_402(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_508)).name_);
f_resolve_432(F->up, (*(P169)rt_nil_check(F->e_508)).a_, &(*(P112)rt_nil_check(F->y_1326)).t_, &(*(P112)rt_nil_check(F->y_1326)).c_);
f_define_397(F->up, F->y_1326, (*(P169)rt_nil_check(F->e_508)).line_);
} else if (0 || sel1335 == ((rt_int)40LL)) {
f_resolve_object_type_515(F->up, (*(P169)rt_nil_check(F->e_508)).a_, &F->t_1328, &F->c_1330);
F->y_1326 = f_new_sym_402(F->up, ((rt_int)1LL), (*(P169)rt_nil_check(F->e_508)).name_);
if (((*(P169)rt_nil_check(F->e_508)).flag_ == ((rt_int)2LL))) {
f_lvalue_577(F->up, (*(P169)rt_nil_check(F->e_508)).b_, &F->v_1332, &F->vt_1329, &F->c_1330, &(*(P112)rt_nil_check(F->y_1326)).ro_);
f_check_type_411(F->up, F->vt_1329, F->t_1328, (*(P169)rt_nil_check(F->e_508)).line_);
f_ctype_416(F->up, F->t_1328, &F->acc_1331);
f_new_name_204(F->up, rt_str_catc(f_lower_s_212(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_))), 95), &F->x_1333);
if (F->up->in_func_133) {
f_put_to_226(F->up, F->up->fields_buf_132, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P135)rt_nil_check(F->acc_1331))), rt_str(" *", 2)), (*(P135)rt_nil_check(F->x_1333))), 59));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P135)rt_nil_check(F->x_1333))), rt_str(" = &(", 5)), (*(P135)rt_nil_check(F->v_1332))), rt_str(");", 2)));
(*(P112)rt_nil_check(F->y_1326)).byref_ = 1;
(*(P112)rt_nil_check(F->y_1326)).level_ = F->up->cur_level_134;
(*(P112)rt_nil_check(F->y_1326)).access_path_ = F->x_1333;
} else {
f_put_to_226(F->up, F->up->out_globals_127, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P135)rt_nil_check(F->acc_1331))), rt_str(" *g_", 4)), (*(P135)rt_nil_check(F->x_1333))), 59));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("g_", 2), (*(P135)rt_nil_check(F->x_1333))), rt_str(" = &(", 5)), (*(P135)rt_nil_check(F->v_1332))), rt_str(");", 2)));
(*(P112)rt_nil_check(F->y_1326)).level_ = ((rt_int)0LL);
(*(P112)rt_nil_check(F->y_1326)).access_path_ = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("(*g_", 4), (*(P135)rt_nil_check(F->x_1333))), 41));
}
(*(P112)rt_nil_check(F->y_1326)).t_ = F->vt_1329;
(*(P112)rt_nil_check(F->y_1326)).c_ = F->c_1330;
f_define_397(F->up, F->y_1326, (*(P169)rt_nil_check(F->e_508)).line_);
goto ret_;
}
if (((((*(P117)rt_nil_check(F->t_1328)).kind_ == ((rt_int)5LL)) && ((*(P173)rt_nil_check(F->c_1330)).slen_ == NULL)) && ((*(P169)rt_nil_check(F->e_508)).b_ != NULL))) {
F->up->vrp_ok_192 = 1;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_508)).b_, F->t_1328, &F->vt_1329, &F->v_1332);
F->up->vrp_ok_192 = 0;
f_check_type_411(F->up, F->vt_1329, F->t_1328, (*(P169)rt_nil_check(F->e_508)).line_);
f_storage_495(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_)), F->t_1328, &F->acc_1331);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->acc_1331)), rt_str(" = rt_str_copy(", 15)), (*(P135)rt_nil_check(F->v_1332))), rt_str(");", 2)));
} else {
f_storage_495(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_)), F->t_1328, &F->acc_1331);
f_init_storage_468(F->up, (*(P135)rt_nil_check(F->acc_1331)), F->t_1328, F->c_1330);
if (((*(P169)rt_nil_check(F->e_508)).b_ != NULL)) {
F->up->vrp_ok_192 = 1;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_508)).b_, F->t_1328, &F->vt_1329, &F->v_1332);
F->up->vrp_ok_192 = 0;
f_check_type_411(F->up, F->vt_1329, F->t_1328, (*(P169)rt_nil_check(F->e_508)).line_);
f_assign_code_476(F->up, (*(P135)rt_nil_check(F->acc_1331)), F->t_1328, (*(P135)rt_nil_check(F->v_1332)), F->c_1330, &F->x_1333);
f_emit_228(F->up, (*(P135)rt_nil_check(F->x_1333)));
}
}
(*(P112)rt_nil_check(F->y_1326)).t_ = F->t_1328;
(*(P112)rt_nil_check(F->y_1326)).c_ = F->c_1330;
f_bind_498(F->up, F->y_1326, F->acc_1331);
f_define_397(F->up, F->y_1326, (*(P169)rt_nil_check(F->e_508)).line_);
} else if (0 || sel1335 == ((rt_int)41LL)) {
f_resolve_object_type_515(F->up, (*(P169)rt_nil_check(F->e_508)).a_, &F->t_1328, &F->c_1330);
F->y_1326 = f_new_sym_402(F->up, ((rt_int)2LL), (*(P169)rt_nil_check(F->e_508)).name_);
F->up->vrp_ok_192 = 1;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_508)).b_, F->t_1328, &F->vt_1329, &F->v_1332);
F->up->vrp_ok_192 = 0;
f_check_type_411(F->up, F->vt_1329, F->t_1328, (*(P169)rt_nil_check(F->e_508)).line_);
if (((*(P117)rt_nil_check(F->t_1328)).kind_ == ((rt_int)1LL))) {
f_manifest_428(F->up, (*(P169)rt_nil_check(F->e_508)).b_, &(*(P112)rt_nil_check(F->y_1326)).mvalue_, &F->ok_1334);
(*(P112)rt_nil_check(F->y_1326)).hasmv_ = F->ok_1334;
}
f_storage_495(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_)), F->t_1328, &F->acc_1331);
f_copy_code_480(F->up, F->t_1328, (*(P135)rt_nil_check(F->v_1332)), &F->x_1333);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->acc_1331)), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->x_1333))), 59));
(*(P112)rt_nil_check(F->y_1326)).t_ = F->t_1328;
(*(P112)rt_nil_check(F->y_1326)).c_ = F->c_1330;
(*(P112)rt_nil_check(F->y_1326)).ro_ = 1;
f_bind_498(F->up, F->y_1326, F->acc_1331);
f_define_397(F->up, F->y_1326, (*(P169)rt_nil_check(F->e_508)).line_);
} else if (0 || sel1335 == ((rt_int)46LL)) {
if (((*(P169)rt_nil_check(F->e_508)).a_ != NULL)) {
if ((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_709(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).a_))) {
F->y_1326 = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).name_)), (*(P169)rt_nil_check(F->e_508)).line_);
} else if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1326 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_508)).a_)).name_)));
} else {
F->y_1326 = NULL;
}
if (((F->y_1326 == NULL) || ((*(P112)rt_nil_check(F->y_1326)).kind_ != ((rt_int)6LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_508)).line_, rt_str("an exception is renamed only as an exception", 44));
}
f_copy_sym_718(F->up, F->y_1326, &F->z_1327);
(*(P112)rt_nil_check(F->z_1327)).name_ = (*(P169)rt_nil_check(F->e_508)).name_;
f_define_397(F->up, F->z_1327, (*(P169)rt_nil_check(F->e_508)).line_);
goto ret_;
}
F->y_1326 = f_new_sym_402(F->up, ((rt_int)6LL), (*(P169)rt_nil_check(F->e_508)).name_);
f_new_name_204(F->up, rt_str_catc(rt_str_cat(rt_str("ex_", 3), f_lower_s_212(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_)))), 95), &(*(P112)rt_nil_check(F->y_1326)).cname_);
f_put_to_226(F->up, F->up->out_globals_127, rt_str_catc(rt_str_cat(rt_str("static int ", 11), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).cname_))), 59));
f_put_to_226(F->up, F->up->out_excs_130, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1326)).cname_))), rt_str(" = rt_exc(", 10)), f_q_219(F->up)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_))), f_q_219(F->up)), rt_str(");", 2)));
f_define_397(F->up, F->y_1326, (*(P169)rt_nil_check(F->e_508)).line_);
} else if (0 || sel1335 == ((rt_int)44LL) || sel1335 == ((rt_int)45LL)) {
if (f_is_generic_name_897(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_508)).name_)))) {
f_attach_generic_body_899(F->up, F->e_508);
} else if (((*(P169)rt_nil_check(F->e_508)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_505(F->up, F->e_508, &F->y_1326);
f_define_397(F->up, F->y_1326, (*(P169)rt_nil_check(F->e_508)).line_);
} else {
f_subprogram_body_520(F->up, F->e_508, f_lookup_decl_377(F->up, F->e_508));
}
} else if (0 || sel1335 == ((rt_int)55LL)) {
f_use_clause_730(F->up, F->e_508);
} else if (0 || sel1335 == ((rt_int)56LL)) {
f_pragma_decl_511(F->up, F->e_508);
} else {
f_other_decl_517(F->up, F->e_508);
}
}
ret_:

  return;
}

static void f_pragma_decl_511(struct f_greenc_1fr *up_, P169 e_510) {
  struct f_pragma_decl_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_510 = e_510;
ret_:

  return;
}

static void f_resolve_object_type_515(struct f_greenc_1fr *up_, P169 st_512, P117 *t_513, P173 *c_514) {
  struct f_resolve_object_type_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_512 = st_512;
F->t_513 = t_513;
F->c_514 = c_514;
if ((((*(P169)rt_nil_check(F->st_512)).kind_ != ((rt_int)80LL)) && (F->st_512 == F->up->anon_node_171))) {
(*F->t_513) = F->up->anon_typ_172;
(*F->c_514) = F->up->anon_cons_175;
goto ret_;
}
f_resolve_432(F->up, F->st_512, &(*F->t_513), &(*F->c_514));
if (((*(P169)rt_nil_check(F->st_512)).kind_ != ((rt_int)80LL))) {
F->up->anon_node_171 = F->st_512;
F->up->anon_typ_172 = (*F->t_513);
F->up->anon_cons_175 = (*F->c_514);
}
ret_:

  return;
}

static void f_other_decl_517(struct f_greenc_1fr *up_, P169 e_516) {
  struct f_other_decl_517fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_516 = e_516;
if (((*(P169)rt_nil_check(F->e_516)).kind_ == ((rt_int)48LL))) {
f_package_spec_723(F->up, F->e_516);
} else if (((*(P169)rt_nil_check(F->e_516)).kind_ == ((rt_int)49LL))) {
f_package_body_728(F->up, F->e_516);
} else {
f_task_decl_803(F->up, F->e_516);
}
ret_:

  return;
}

static void f_subprogram_body_520(struct f_greenc_1fr *up_, P169 d_518, P112 y_519) {
  struct f_subprogram_body_520fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_518 = d_518;
F->y_519 = y_519;
F->saved_code_1336 = NULL;
F->saved_code_1336 = F->up->code_131;
F->saved_fields_1337 = NULL;
F->saved_fields_1337 = F->up->fields_buf_132;
F->saved_in_1338 = F->up->in_func_133;
F->saved_sym_1339 = NULL;
F->saved_sym_1339 = F->up->func_sym_137;
F->saved_exits_1340 = NULL;
F->saved_exits_1340 = F->up->exits_140;
F->saved_frames_1341 = F->up->frames_145;
F->saved_handlers_1342 = NULL;
F->saved_handlers_1342 = F->up->handlers_148;
F->saved_cleanups_1343 = NULL;
F->saved_cleanups_1343 = F->up->cleanups_149;
F->saved_pure_1344 = NULL;
F->saved_pure_1344 = F->up->pure_sym_190;
F->aw_1345 = NULL;
F->saved_pdepth_1346 = F->up->pure_depth_191;
F->args_1347 = NULL;
F->head_1348 = NULL;
F->frame_1349 = NULL;
F->parent_1350 = NULL;
F->ct_1351 = NULL;
F->x_1352 = NULL;
F->pm_1353 = NULL;
F->pm_1353 = (*(P112)rt_nil_check(F->y_519)).params_;
F->p_1354 = NULL;
F->frame_1349 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_519)).cname_)), rt_str("fr", 2)));
if (F->up->in_func_133) {
F->parent_1350 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->func_sym_137)).cname_)), rt_str("fr", 2)));
}
F->up->code_131 = f_new_buffer_223(F->up);
F->up->fields_buf_132 = f_new_buffer_223(F->up);
F->up->in_func_133 = 1;
F->up->func_sym_137 = F->y_519;
F->up->exits_140 = NULL;
F->up->frames_145 = ((rt_int)0LL);
F->up->handlers_148 = NULL;
F->up->cleanups_149 = NULL;
F->up->cur_level_134 = rt_add(F->up->cur_level_134, ((rt_int)1LL));
F->args_1347 = f_mk_201(F->up, rt_str("", 0));
f_open_scope_398(F->up);
if ((((*(P112)rt_nil_check(F->y_519)).kind_ == ((rt_int)3LL)) && (!(*(P112)rt_nil_check(F->y_519)).vrp_))) {
F->up->pure_sym_190 = F->y_519;
F->up->pure_depth_191 = F->up->depth_115;
}
if ((F->parent_1350 != NULL)) {
f_put_to_226(F->up, F->up->fields_buf_132, rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P135)rt_nil_check(F->parent_1350))), rt_str(" *up;", 5)));
F->args_1347 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P135)rt_nil_check(F->parent_1350))), rt_str(" *up_", 5)));
f_emit_228(F->up, rt_str("F->up = up_;", 12));
}
while ((F->pm_1353 != NULL)) {
f_ctype_416(F->up, (*(P1194)rt_nil_check(F->pm_1353)).t_, &F->ct_1351);
if ((((*(P135)rt_nil_check(F->args_1347))).len > ((rt_int)0LL))) {
F->args_1347 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->args_1347)), rt_str(", ", 2)));
}
if (((*(P1194)rt_nil_check(F->pm_1353)).mode_ == ((rt_int)1LL))) {
F->p_1354 = f_new_sym_402(F->up, ((rt_int)2LL), (*(P1194)rt_nil_check(F->pm_1353)).name_);
(*(P112)rt_nil_check(F->p_1354)).ro_ = 1;
f_put_to_226(F->up, F->up->fields_buf_132, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P135)rt_nil_check(F->ct_1351))), 32), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))), 59));
F->args_1347 = f_mk_201(F->up, rt_str_cat(rt_str_catc(rt_str_cat((*(P135)rt_nil_check(F->args_1347)), (*(P135)rt_nil_check(F->ct_1351))), 32), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))));
f_copy_code_480(F->up, (*(P1194)rt_nil_check(F->pm_1353)).t_, (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_)), &F->x_1352);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->x_1352))), 59));
} else {
F->p_1354 = f_new_sym_402(F->up, ((rt_int)1LL), (*(P1194)rt_nil_check(F->pm_1353)).name_);
(*(P112)rt_nil_check(F->p_1354)).byref_ = 1;
f_put_to_226(F->up, F->up->fields_buf_132, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P135)rt_nil_check(F->ct_1351))), rt_str(" *", 2)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))), 59));
F->args_1347 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->args_1347)), (*(P135)rt_nil_check(F->ct_1351))), rt_str(" *", 2)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))));
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))), rt_str(" = ", 3)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))), 59));
}
(*(P112)rt_nil_check(F->p_1354)).access_path_ = (*(P1194)rt_nil_check(F->pm_1353)).cfield_;
(*(P112)rt_nil_check(F->p_1354)).t_ = (*(P1194)rt_nil_check(F->pm_1353)).t_;
(*(P112)rt_nil_check(F->p_1354)).c_ = (*(P1194)rt_nil_check(F->pm_1353)).c_;
(*(P112)rt_nil_check(F->p_1354)).level_ = F->up->cur_level_134;
f_define_397(F->up, F->p_1354, (*(P169)rt_nil_check(F->d_518)).line_);
F->pm_1353 = (*(P1194)rt_nil_check(F->pm_1353)).next_;
}
L_end_1355: ;
if (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_519)).result_)).kind_ != ((rt_int)9LL))) {
f_ctype_416(F->up, (*(P112)rt_nil_check(F->y_519)).result_, &F->ct_1351);
f_put_to_226(F->up, F->up->fields_buf_132, rt_str_cat(rt_str_ccat(32, (*(P135)rt_nil_check(F->ct_1351))), rt_str(" result_;", 9)));
}
f_decl_elements_507(F->up, (*(P169)rt_nil_check(F->d_518)).c_);
if (((((*(P169)rt_nil_check(F->d_518)).tag_ != NULL) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_518)).tag_)), rt_str("INTERFACE", 9))) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_519)).result_)).kind_ == ((rt_int)9LL)))) {
F->x_1352 = f_mk_201(F->up, rt_str("", 0));
F->pm_1353 = (*(P112)rt_nil_check(F->y_519)).params_;
while ((F->pm_1353 != NULL)) {
if ((((*(P135)rt_nil_check(F->x_1352))).len > ((rt_int)0LL))) {
F->x_1352 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->x_1352)), rt_str(", ", 2)));
}
F->x_1352 = f_mk_201(F->up, rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->x_1352)), rt_str("F->", 3)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1353)).cfield_))));
F->pm_1353 = (*(P1194)rt_nil_check(F->pm_1353)).next_;
}
L_end_1356: ;
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("rt_g_", 5), f_lower_s_212(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->d_518)).name_)))), 40), (*(P135)rt_nil_check(F->x_1352))), rt_str(");", 2)));
} else {
f_guarded_531(F->up, (*(P169)rt_nil_check(F->d_518)).d_, (*(P169)rt_nil_check(F->d_518)).e_, (*(P169)rt_nil_check(F->d_518)).line_);
}
f_task_awaits_822(F->up, (*(P169)rt_nil_check(F->d_518)).c_, &F->aw_1345);
f_close_scope_399(F->up);
F->up->cur_level_134 = rt_sub(F->up->cur_level_134, ((rt_int)1LL));
if ((((*(P135)rt_nil_check(F->args_1347))).len == ((rt_int)0LL))) {
F->args_1347 = f_mk_201(F->up, rt_str("void", 4));
}
f_ctype_416(F->up, (*(P112)rt_nil_check(F->y_519)).result_, &F->ct_1351);
F->head_1348 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P135)rt_nil_check(F->ct_1351))), 32), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_519)).cname_))), 40), (*(P135)rt_nil_check(F->args_1347))), 41));
f_put_to_226(F->up, F->up->out_protos_126, rt_str_catc((*(P135)rt_nil_check(F->head_1348)), 59));
f_put_to_226(F->up, F->up->out_frames_124, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P135)rt_nil_check(F->frame_1349))), rt_str(" { int dummy;", 13)));
f_splice_233(F->up, F->up->out_frames_124, F->up->fields_buf_132);
f_put_to_226(F->up, F->up->out_frames_124, rt_str("};", 2));
f_put_to_226(F->up, F->up->out_funcs_128, rt_str_cat((*(P135)rt_nil_check(F->head_1348)), rt_str(" {", 2)));
f_put_to_226(F->up, F->up->out_funcs_128, rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P135)rt_nil_check(F->frame_1349))), rt_str(" *F = rt_alloc(sizeof *F);", 26)));
if ((((*(P112)rt_nil_check(F->y_519)).kind_ == ((rt_int)4LL)) && ((*(P112)rt_nil_check(F->y_519)).access_path_ != NULL))) {
f_put_to_226(F->up, F->up->out_funcs_128, rt_str_cat(rt_str("  ", 2), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_519)).access_path_))));
}
f_splice_233(F->up, F->up->out_funcs_128, F->up->code_131);
if (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_519)).result_)).kind_ != ((rt_int)9LL))) {
f_put_to_226(F->up, F->up->out_funcs_128, rt_str("  rt_raise(RT_X_INIT);", 22));
f_put_to_226(F->up, F->up->out_funcs_128, rt_str("ret_:", 5));
f_put_to_226(F->up, F->up->out_funcs_128, (*(P135)rt_nil_check(F->aw_1345)));
f_put_to_226(F->up, F->up->out_funcs_128, rt_str("  return F->result_;", 20));
} else {
f_put_to_226(F->up, F->up->out_funcs_128, rt_str("ret_:", 5));
f_put_to_226(F->up, F->up->out_funcs_128, (*(P135)rt_nil_check(F->aw_1345)));
f_put_to_226(F->up, F->up->out_funcs_128, rt_str("  return;", 9));
}
f_put_to_226(F->up, F->up->out_funcs_128, rt_str("}", 1));
f_put_to_226(F->up, F->up->out_funcs_128, rt_str("", 0));
F->up->code_131 = F->saved_code_1336;
F->up->fields_buf_132 = F->saved_fields_1337;
F->up->in_func_133 = F->saved_in_1338;
F->up->func_sym_137 = F->saved_sym_1339;
F->up->exits_140 = F->saved_exits_1340;
F->up->frames_145 = F->saved_frames_1341;
F->up->handlers_148 = F->saved_handlers_1342;
F->up->cleanups_149 = F->saved_cleanups_1343;
F->up->pure_sym_190 = F->saved_pure_1344;
F->up->pure_depth_191 = F->saved_pdepth_1346;
ret_:

  return;
}

static void f_gen_statements_522(struct f_greenc_1fr *up_, P169 stmts_521) {
  struct f_gen_statements_522fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_521 = stmts_521;
F->s_1357 = NULL;
F->s_1357 = F->stmts_521;
while ((F->s_1357 != NULL)) {
f_gen_statement_537(F->up, F->s_1357);
F->s_1357 = (*(P169)rt_nil_check(F->s_1357)).next_;
}
L_end_1358: ;
ret_:

  return;
}

static void f_pop_frames_524(struct f_greenc_1fr *up_, rt_int upto_523) {
  struct f_pop_frames_524fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_523 = upto_523;
F->i_1359 = F->up->frames_145;
F->c_1360 = NULL;
F->c_1360 = F->up->cleanups_149;
while ((F->i_1359 > F->upto_523)) {
f_emit_228(F->up, (*(P135)rt_nil_check((*(P146)rt_nil_check(F->c_1360)).s_)));
F->c_1360 = (*(P146)rt_nil_check(F->c_1360)).next_;
F->i_1359 = rt_sub(F->i_1359, ((rt_int)1LL));
}
L_end_1361: ;
ret_:

  return;
}

static void f_push_cleanup_526(struct f_greenc_1fr *up_, rstr s_525) {
  struct f_push_cleanup_526fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_525 = rt_str_copy(s_525);
F->up->cleanups_149 = ({ R147 *cell1362 = rt_alloc(sizeof(R147)); *cell1362 = cp_R147(({ R147 ag1363; ag1363.s_ = NULL; ag1363.next_ = F->up->cleanups_149; ag1363; })); (P146)cell1362; });
(*(P146)rt_nil_check(F->up->cleanups_149)).s_ = f_mk_201(F->up, F->s_525);
F->up->frames_145 = rt_add(F->up->frames_145, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_527(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_527fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_149 = (*(P146)rt_nil_check(F->up->cleanups_149)).next_;
F->up->frames_145 = rt_sub(F->up->frames_145, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_531(struct f_greenc_1fr *up_, P169 stmts_528, P169 hs_529, rt_int line_530) {
  struct f_guarded_531fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_528 = stmts_528;
F->hs_529 = hs_529;
F->line_530 = line_530;
F->f_1364 = NULL;
F->x_1365 = NULL;
F->h_1366 = NULL;
F->n_1367 = NULL;
F->first_1368 = 1;
F->has_others_1369 = 0;
F->conds_1370 = NULL;
if ((F->hs_529 == NULL)) {
f_gen_statements_522(F->up, F->stmts_528);
goto ret_;
}
f_new_name_204(F->up, rt_str("xf", 2), &F->f_1364);
f_new_name_204(F->up, rt_str("x", 1), &F->x_1365);
f_push_cleanup_526(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P135)rt_nil_check(F->f_1364))), rt_str(");", 2)));
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str("{ rt_frame ", 11), (*(P135)rt_nil_check(F->f_1364))), 59));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P135)rt_nil_check(F->f_1364))), rt_str(")) {", 4)));
f_gen_statements_522(F->up, F->stmts_528);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P135)rt_nil_check(F->f_1364))), rt_str(");", 2)));
f_emit_228(F->up, rt_str("} else {", 8));
f_pop_cleanup_527(F->up);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P135)rt_nil_check(F->f_1364))), rt_str(");", 2)));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P135)rt_nil_check(F->x_1365))), rt_str(" = rt_xcur;", 11)));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (rt_g_aborted()) rt_raise(", 29), (*(P135)rt_nil_check(F->x_1365))), rt_str(");", 2)));
F->up->handlers_148 = ({ R147 *cell1371 = rt_alloc(sizeof(R147)); *cell1371 = cp_R147(({ R147 ag1372; ag1372.s_ = F->x_1365; ag1372.next_ = F->up->handlers_148; ag1372; })); (P146)cell1371; });
F->h_1366 = F->hs_529;
while ((F->h_1366 != NULL)) {
F->n_1367 = (*(P169)rt_nil_check(F->h_1366)).a_;
F->conds_1370 = f_mk_201(F->up, rt_str("0", 1));
while ((F->n_1367 != NULL)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1367)).name_)), rt_str("OTHERS", 6))) {
F->has_others_1369 = 1;
F->conds_1370 = f_mk_201(F->up, rt_str("1", 1));
} else {
F->up->prefix_hint_188 = (*(P169)rt_nil_check(F->n_1367)).tag_;
f_exc_id_535(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1367)).name_)), (*(P169)rt_nil_check(F->h_1366)).line_, &F->f_1364);
F->conds_1370 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->conds_1370)), rt_str(" || ", 4)), (*(P135)rt_nil_check(F->x_1365))), rt_str(" == ", 4)), (*(P135)rt_nil_check(F->f_1364))));
}
F->n_1367 = (*(P169)rt_nil_check(F->n_1367)).next_;
}
L_end_1374: ;
if (F->first_1368) {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P135)rt_nil_check(F->conds_1370))), rt_str(") {", 3)));
} else {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P135)rt_nil_check(F->conds_1370))), rt_str(") {", 3)));
}
F->first_1368 = 0;
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->h_1366)).b_);
F->h_1366 = (*(P169)rt_nil_check(F->h_1366)).next_;
}
L_end_1373: ;
if ((!F->has_others_1369)) {
f_emit_228(F->up, rt_str("} else {", 8));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P135)rt_nil_check(F->x_1365))), rt_str(");", 2)));
}
f_emit_228(F->up, rt_str("}", 1));
F->up->handlers_148 = (*(P146)rt_nil_check(F->up->handlers_148)).next_;
f_emit_228(F->up, rt_str("}", 1));
f_emit_228(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_exc_id_535(struct f_greenc_1fr *up_, rstr name_532, rt_int line_533, P135 *r_534) {
  struct f_exc_id_535fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_532 = rt_str_copy(name_532);
F->line_533 = line_533;
F->r_534 = r_534;
F->y_1375 = NULL;
F->y_1375 = f_lookup_369(F->up, F->name_532);
if ((F->up->prefix_hint_188 != NULL)) {
F->y_1375 = f_member_of_713(F->up, (*(P135)rt_nil_check(F->up->prefix_hint_188)), F->name_532, F->line_533);
F->up->prefix_hint_188 = NULL;
}
if (((F->y_1375 == NULL) || ((*(P112)rt_nil_check(F->y_1375)).kind_ != ((rt_int)6LL)))) {
f_fail_222(F->up, F->line_533, rt_str_cat(F->name_532, rt_str(" is not an exception", 20)));
}
(*F->r_534) = (*(P112)rt_nil_check(F->y_1375)).cname_;
ret_:

  return;
}

static void f_gen_statement_537(struct f_greenc_1fr *up_, P169 s_536) {
  struct f_gen_statement_537fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_536 = s_536;
F->t_1376 = NULL;
F->vt_1377 = NULL;
F->c_1378 = NULL;
F->lv_1379 = NULL;
F->v_1380 = NULL;
F->x_1381 = NULL;
{ rt_int sel1383 = (*(P169)rt_nil_check(F->s_536)).kind_;
if (0 || sel1383 == ((rt_int)20LL)) {
if (((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_536)).a_)).kind_ == ((rt_int)8LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_536)).a_)).b_ != NULL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_536)).a_)).b_)).kind_ == ((rt_int)14LL)))) {
f_slice_assign_539(F->up, F->s_536);
goto ret_;
}
F->up->in_lv_path_193 = 1;
F->up->last_deref_194 = 0;
f_lvalue_577(F->up, (*(P169)rt_nil_check(F->s_536)).a_, &F->lv_1379, &F->t_1376, &F->c_1378, &F->ro_1382);
F->up->in_lv_path_193 = 0;
if (F->ro_1382) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_536)).line_, rt_str("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_871(F->up, (*(P169)rt_nil_check(F->s_536)).a_, (*(P169)rt_nil_check(F->s_536)).line_);
F->up->vrp_ok_192 = 1;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_536)).b_, F->t_1376, &F->vt_1377, &F->v_1380);
F->up->vrp_ok_192 = 0;
f_check_type_411(F->up, F->vt_1377, F->t_1376, (*(P169)rt_nil_check(F->s_536)).line_);
f_assign_code_476(F->up, (*(P135)rt_nil_check(F->lv_1379)), F->t_1376, (*(P135)rt_nil_check(F->v_1380)), F->c_1378, &F->x_1381);
f_emit_228(F->up, (*(P135)rt_nil_check(F->x_1381)));
} else if (0 || sel1383 == ((rt_int)21LL)) {
F->up->vrp_ok_192 = 1;
f_gen_call_541(F->up, F->s_536);
F->up->vrp_ok_192 = 0;
} else if (0 || sel1383 == ((rt_int)22LL)) {
f_gen_if_543(F->up, F->s_536);
} else if (0 || sel1383 == ((rt_int)23LL)) {
f_gen_case_545(F->up, F->s_536);
} else if (0 || sel1383 == ((rt_int)24LL)) {
f_gen_loop_551(F->up, F->s_536);
} else if (0 || sel1383 == ((rt_int)25LL)) {
f_gen_block_553(F->up, F->s_536);
} else if (0 || sel1383 == ((rt_int)26LL)) {
f_gen_exit_555(F->up, F->s_536);
} else if (0 || sel1383 == ((rt_int)27LL)) {
f_gen_return_557(F->up, F->s_536);
} else if (0 || sel1383 == ((rt_int)28LL)) {
if (((((*(P169)rt_nil_check(F->s_536)).tag_ != NULL) && f_is_task_name_776(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_536)).tag_)))) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_536)).name_)), rt_str("FAILURE", 7)))) {
f_task_failure_824(F->up, F->s_536);
} else {
F->up->prefix_hint_188 = (*(P169)rt_nil_check(F->s_536)).tag_;
f_exc_id_535(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_536)).name_)), (*(P169)rt_nil_check(F->s_536)).line_, &F->x_1381);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P135)rt_nil_check(F->x_1381))), rt_str(");", 2)));
}
} else if (0 || sel1383 == ((rt_int)29LL)) {
if ((F->up->handlers_148 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_536)).line_, rt_str("raise; outside an exception handler", 35));
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P135)rt_nil_check((*(P146)rt_nil_check(F->up->handlers_148)).s_))), rt_str(");", 2)));
} else if (0 || sel1383 == ((rt_int)30LL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_536)).a_, F->up->ty_bool_152, &F->vt_1377, &F->v_1380);
f_check_type_411(F->up, F->vt_1377, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_536)).line_);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (!(", 6), (*(P135)rt_nil_check(F->v_1380))), rt_str(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1383 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_866(F->up, F->s_536);
}
}
ret_:

  return;
}

static void f_slice_assign_539(struct f_greenc_1fr *up_, P169 s_538) {
  struct f_slice_assign_539fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_538 = s_538;
F->lv_1384 = NULL;
F->lo_1385 = NULL;
F->hi_1386 = NULL;
F->v_1387 = NULL;
F->t_1388 = NULL;
F->vt_1389 = NULL;
F->c_1390 = NULL;
F->up->in_lv_path_193 = 1;
F->up->last_deref_194 = 0;
f_lvalue_577(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_538)).a_)).a_, &F->lv_1384, &F->t_1388, &F->c_1390, &F->ro_1391);
F->up->in_lv_path_193 = 0;
if ((F->ro_1391 || ((*(P117)rt_nil_check(F->t_1388)).kind_ != ((rt_int)5LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_538)).line_, rt_str("assignment to a slice needs a STRING variable", 45));
}
f_check_pure_target_871(F->up, (*(P169)rt_nil_check(F->s_538)).a_, (*(P169)rt_nil_check(F->s_538)).line_);
f_gexpr_615(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_538)).a_)).b_)).a_, F->up->ty_int_151, &F->vt_1389, &F->lo_1385);
f_gexpr_615(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->s_538)).a_)).b_)).b_, F->up->ty_int_151, &F->vt_1389, &F->hi_1386);
F->up->vrp_ok_192 = 1;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_538)).b_, F->up->ty_string_155, &F->vt_1389, &F->v_1387);
F->up->vrp_ok_192 = 0;
f_check_type_411(F->up, F->vt_1389, F->up->ty_string_155, (*(P169)rt_nil_check(F->s_538)).line_);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P135)rt_nil_check(F->lv_1384))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->lo_1385))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->hi_1386))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->v_1387))), rt_str(");", 2)));
ret_:

  return;
}

static void f_gen_call_541(struct f_greenc_1fr *up_, P169 s_540) {
  struct f_gen_call_541fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_540 = s_540;
F->c_1392 = NULL;
F->c_1392 = (*(P169)rt_nil_check(F->s_540)).a_;
F->t_1393 = NULL;
F->v_1394 = NULL;
if ((((*(P169)rt_nil_check(F->c_1392)).kind_ == ((rt_int)5LL)) || ((*(P169)rt_nil_check(F->c_1392)).kind_ == ((rt_int)9LL)))) {
F->c_1392 = f_nn_267(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->s_540)).line_);
(*(P169)rt_nil_check(F->c_1392)).a_ = (*(P169)rt_nil_check(F->s_540)).a_;
}
if (((*(P169)rt_nil_check(F->c_1392)).kind_ != ((rt_int)8LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_540)).line_, rt_str("not a procedure call", 20));
}
f_gcall_695(F->up, F->c_1392, 1, &F->t_1393, &F->v_1394);
f_emit_228(F->up, rt_str_catc((*(P135)rt_nil_check(F->v_1394)), 59));
ret_:

  return;
}

static void f_gen_if_543(struct f_greenc_1fr *up_, P169 s_542) {
  struct f_gen_if_543fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_542 = s_542;
F->a_1395 = NULL;
F->a_1395 = (*(P169)rt_nil_check(F->s_542)).a_;
F->first_1396 = 1;
F->t_1397 = NULL;
F->v_1398 = NULL;
while ((F->a_1395 != NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->a_1395)).a_, F->up->ty_bool_152, &F->t_1397, &F->v_1398);
f_check_type_411(F->up, F->t_1397, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_542)).line_);
if (F->first_1396) {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P135)rt_nil_check(F->v_1398))), rt_str(") {", 3)));
} else {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P135)rt_nil_check(F->v_1398))), rt_str(") {", 3)));
}
F->first_1396 = 0;
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->a_1395)).b_);
F->a_1395 = (*(P169)rt_nil_check(F->a_1395)).next_;
}
L_end_1399: ;
if (((*(P169)rt_nil_check(F->s_542)).flag_ == ((rt_int)1LL))) {
f_emit_228(F->up, rt_str("} else {", 8));
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->s_542)).b_);
}
f_emit_228(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_gen_case_545(struct f_greenc_1fr *up_, P169 s_544) {
  struct f_gen_case_545fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_544 = s_544;
F->st_1400 = NULL;
F->vt_1401 = NULL;
F->first_1402 = 1;
F->a_1403 = NULL;
F->a_1403 = (*(P169)rt_nil_check(F->s_544)).b_;
F->lab_1404 = NULL;
F->sel_1405 = NULL;
F->tmp_1406 = NULL;
F->ct_1407 = NULL;
F->conds_1408 = NULL;
F->v_1409 = NULL;
F->lo_1410 = NULL;
F->hi_1411 = NULL;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_544)).a_, NULL, &F->st_1400, &F->sel_1405);
f_new_name_204(F->up, rt_str("sel", 3), &F->tmp_1406);
f_ctype_416(F->up, F->st_1400, &F->ct_1407);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ ", 2), (*(P135)rt_nil_check(F->ct_1407))), 32), (*(P135)rt_nil_check(F->tmp_1406))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->sel_1405))), 59));
while ((F->a_1403 != NULL)) {
F->lab_1404 = (*(P169)rt_nil_check(F->a_1403)).a_;
F->conds_1408 = f_mk_201(F->up, rt_str("0", 1));
while ((F->lab_1404 != NULL)) {
if (((*(P169)rt_nil_check(F->lab_1404)).b_ == NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->lab_1404)).a_, F->st_1400, &F->vt_1401, &F->v_1409);
f_check_type_411(F->up, F->vt_1401, F->st_1400, (*(P169)rt_nil_check(F->s_544)).line_);
F->conds_1408 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->conds_1408)), rt_str(" || ", 4)), (*(P135)rt_nil_check(F->tmp_1406))), rt_str(" == ", 4)), (*(P135)rt_nil_check(F->v_1409))));
} else {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->lab_1404)).a_, F->st_1400, &F->vt_1401, &F->lo_1410);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->lab_1404)).b_, F->st_1400, &F->vt_1401, &F->hi_1411);
F->conds_1408 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->conds_1408)), rt_str(" || (", 5)), (*(P135)rt_nil_check(F->tmp_1406))), rt_str(" >= ", 4)), (*(P135)rt_nil_check(F->lo_1410))), rt_str(" && ", 4)), (*(P135)rt_nil_check(F->tmp_1406))), rt_str(" <= ", 4)), (*(P135)rt_nil_check(F->hi_1411))), 41));
}
F->lab_1404 = (*(P169)rt_nil_check(F->lab_1404)).next_;
}
L_end_1413: ;
if (F->first_1402) {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P135)rt_nil_check(F->conds_1408))), rt_str(") {", 3)));
} else {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P135)rt_nil_check(F->conds_1408))), rt_str(") {", 3)));
}
F->first_1402 = 0;
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->a_1403)).b_);
F->a_1403 = (*(P169)rt_nil_check(F->a_1403)).next_;
}
L_end_1412: ;
if (F->first_1402) {
f_emit_228(F->up, rt_str("{", 1));
} else {
f_emit_228(F->up, rt_str("} else {", 8));
}
if (((*(P169)rt_nil_check(F->s_544)).flag_ == ((rt_int)1LL))) {
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->s_544)).c_);
} else {
f_emit_228(F->up, rt_str("rt_raise(RT_X_CASE);", 20));
}
f_emit_228(F->up, rt_str("}", 1));
f_emit_228(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_push_exit_549(struct f_greenc_1fr *up_, P135 match_546, int is_loop_547, P135 *label_548) {
  struct f_push_exit_549fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_546 = match_546;
F->is_loop_547 = is_loop_547;
F->label_548 = label_548;
f_new_name_204(F->up, rt_str("L_end_", 6), &(*F->label_548));
F->up->exits_140 = ({ R139 *cell1414 = rt_alloc(sizeof(R139)); *cell1414 = cp_R139(({ R139 ag1415; ag1415.match_ = F->match_546; ag1415.label_ = (*F->label_548); ag1415.depth_ = F->up->frames_145; ag1415.is_loop_ = F->is_loop_547; ag1415.next_ = F->up->exits_140; ag1415; })); (P138)cell1414; });
ret_:

  return;
}

static void f_gen_loop_551(struct f_greenc_1fr *up_, P169 s_550) {
  struct f_gen_loop_551fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_550 = s_550;
F->t_1416 = NULL;
F->vt_1417 = NULL;
F->c_1418 = NULL;
F->label_1419 = NULL;
F->cond_1420 = NULL;
F->acc_1421 = NULL;
F->lov_1422 = NULL;
F->hiv_1423 = NULL;
F->it_1424 = NULL;
F->y_1425 = NULL;
F->r_1426 = NULL;
f_push_exit_549(F->up, (*(P169)rt_nil_check(F->s_550)).tag_, 1, &F->label_1419);
if (((*(P169)rt_nil_check(F->s_550)).flag_ == ((rt_int)0LL))) {
f_emit_228(F->up, rt_str("for (;;) {", 10));
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->s_550)).b_);
f_emit_228(F->up, rt_str("}", 1));
} else if (((*(P169)rt_nil_check(F->s_550)).flag_ == ((rt_int)1LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_550)).a_, F->up->ty_bool_152, &F->vt_1417, &F->cond_1420);
f_check_type_411(F->up, F->vt_1417, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_550)).line_);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("while (", 7), (*(P135)rt_nil_check(F->cond_1420))), rt_str(") {", 3)));
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->s_550)).b_);
f_emit_228(F->up, rt_str("}", 1));
} else {
F->r_1426 = (*(P169)rt_nil_check(F->s_550)).a_;
F->c_1418 = f_new_cons_405(F->up);
if (((*(P169)rt_nil_check(F->r_1426)).kind_ == ((rt_int)14LL))) {
f_range_bounds_610(F->up, (*(P169)rt_nil_check(F->r_1426)).a_, (*(P169)rt_nil_check(F->r_1426)).b_, NULL, (*(P169)rt_nil_check(F->s_550)).line_, &F->t_1416, &(*(P173)rt_nil_check(F->c_1418)).lo_, &(*(P173)rt_nil_check(F->c_1418)).hi_);
} else {
f_resolve_432(F->up, F->r_1426, &F->t_1416, &F->c_1418);
if (((*(P173)rt_nil_check(F->c_1418)).lo_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_550)).line_, rt_str("a FOR loop needs a discrete range", 33));
}
}
if ((((((*(P117)rt_nil_check(F->t_1416)).kind_ != ((rt_int)1LL)) && ((*(P117)rt_nil_check(F->t_1416)).kind_ != ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->t_1416)).kind_ != ((rt_int)11LL))) && ((*(P117)rt_nil_check(F->t_1416)).kind_ != ((rt_int)2LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_550)).line_, rt_str("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_495(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_550)).name_)), F->t_1416, &F->acc_1421);
f_new_name_204(F->up, rt_str("lo", 2), &F->lov_1422);
f_new_name_204(F->up, rt_str("hi", 2), &F->hiv_1423);
f_new_name_204(F->up, rt_str("it", 2), &F->it_1424);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), (*(P135)rt_nil_check(F->lov_1422))), rt_str(" = ", 3)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1418)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->hiv_1423))), rt_str(" = ", 3)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1418)).hi_))), 59));
if (((*(P169)rt_nil_check(F->s_550)).ival_ == ((rt_int)1LL))) {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P135)rt_nil_check(F->it_1424))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->hiv_1423))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->it_1424))), rt_str(" >= ", 4)), (*(P135)rt_nil_check(F->lov_1422))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->it_1424))), rt_str("--) {", 5)));
} else {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P135)rt_nil_check(F->it_1424))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->lov_1422))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->it_1424))), rt_str(" <= ", 4)), (*(P135)rt_nil_check(F->hiv_1423))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->it_1424))), rt_str("++) {", 5)));
}
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->acc_1421)), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->it_1424))), 59));
f_open_scope_398(F->up);
F->y_1425 = f_new_sym_402(F->up, ((rt_int)2LL), (*(P169)rt_nil_check(F->s_550)).name_);
(*(P112)rt_nil_check(F->y_1425)).t_ = F->t_1416;
(*(P112)rt_nil_check(F->y_1425)).ro_ = 1;
f_bind_498(F->up, F->y_1425, F->acc_1421);
f_define_397(F->up, F->y_1425, (*(P169)rt_nil_check(F->s_550)).line_);
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->s_550)).b_);
f_close_scope_399(F->up);
f_emit_228(F->up, rt_str("}", 1));
f_emit_228(F->up, rt_str("}", 1));
}
F->up->exits_140 = (*(P138)rt_nil_check(F->up->exits_140)).next_;
f_emit_228(F->up, rt_str_cat((*(P135)rt_nil_check(F->label_1419)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_553(struct f_greenc_1fr *up_, P169 s_552) {
  struct f_gen_block_553fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_552 = s_552;
F->label_1427 = NULL;
F->aw_1428 = NULL;
f_push_exit_549(F->up, (*(P169)rt_nil_check(F->s_552)).tag_, 0, &F->label_1427);
f_emit_228(F->up, rt_str("{", 1));
f_open_scope_398(F->up);
f_decl_elements_507(F->up, (*(P169)rt_nil_check(F->s_552)).a_);
f_guarded_531(F->up, (*(P169)rt_nil_check(F->s_552)).b_, (*(P169)rt_nil_check(F->s_552)).c_, (*(P169)rt_nil_check(F->s_552)).line_);
f_task_awaits_822(F->up, (*(P169)rt_nil_check(F->s_552)).a_, &F->aw_1428);
f_emit_228(F->up, (*(P135)rt_nil_check(F->aw_1428)));
f_close_scope_399(F->up);
f_emit_228(F->up, rt_str("}", 1));
F->up->exits_140 = (*(P138)rt_nil_check(F->up->exits_140)).next_;
f_emit_228(F->up, rt_str_cat((*(P135)rt_nil_check(F->label_1427)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_555(struct f_greenc_1fr *up_, P169 s_554) {
  struct f_gen_exit_555fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_554 = s_554;
F->x_1429 = NULL;
F->x_1429 = F->up->exits_140;
F->t_1430 = NULL;
F->v_1431 = NULL;
while ((F->x_1429 != NULL)) {
if (((F->up->accept_depth_177 > ((rt_int)0LL)) && (F->x_1429 == F->up->accept_exits_144))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_554)).line_, rt_str("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((((*(P169)rt_nil_check(F->s_554)).name_ == NULL) && (*(P138)rt_nil_check(F->x_1429)).is_loop_) || ((((*(P169)rt_nil_check(F->s_554)).name_ != NULL) && ((*(P138)rt_nil_check(F->x_1429)).match_ != NULL)) && rt_str_eq((*(P135)rt_nil_check((*(P138)rt_nil_check(F->x_1429)).match_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_554)).name_)))))) {
if (((*(P169)rt_nil_check(F->s_554)).a_ != NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_554)).a_, F->up->ty_bool_152, &F->t_1430, &F->v_1431);
f_check_type_411(F->up, F->t_1430, F->up->ty_bool_152, (*(P169)rt_nil_check(F->s_554)).line_);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P135)rt_nil_check(F->v_1431))), rt_str(") {", 3)));
}
f_pop_frames_524(F->up, (*(P138)rt_nil_check(F->x_1429)).depth_);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str("goto ", 5), (*(P135)rt_nil_check((*(P138)rt_nil_check(F->x_1429)).label_))), 59));
if (((*(P169)rt_nil_check(F->s_554)).a_ != NULL)) {
f_emit_228(F->up, rt_str("}", 1));
}
goto ret_;
}
F->x_1429 = (*(P138)rt_nil_check(F->x_1429)).next_;
}
L_end_1432: ;
if (((*(P169)rt_nil_check(F->s_554)).name_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_554)).line_, rt_str("exit outside a loop", 19));
}
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_554)).line_, rt_str_cat(rt_str_cat(rt_str("exit ", 5), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_554)).name_))), rt_str(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_557(struct f_greenc_1fr *up_, P169 s_556) {
  struct f_gen_return_557fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_556 = s_556;
F->vt_1433 = NULL;
F->v_1434 = NULL;
if ((!F->up->in_func_133)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_556)).line_, rt_str("return outside a subprogram", 27));
}
if ((F->up->accept_depth_177 > ((rt_int)0LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_556)).line_, rt_str("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->up->func_sym_137)).result_)).kind_ == ((rt_int)9LL))) {
if (((*(P169)rt_nil_check(F->s_556)).a_ != NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_556)).line_, rt_str("a procedure returns no value", 28));
}
f_pop_frames_524(F->up, ((rt_int)0LL));
f_emit_228(F->up, rt_str("goto ret_;", 10));
goto ret_;
}
if (((*(P169)rt_nil_check(F->s_556)).a_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_556)).line_, rt_str("return needs a value here", 25));
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_556)).a_, (*(P112)rt_nil_check(F->up->func_sym_137)).result_, &F->vt_1433, &F->v_1434);
f_check_type_411(F->up, F->vt_1433, (*(P112)rt_nil_check(F->up->func_sym_137)).result_, (*(P169)rt_nil_check(F->s_556)).line_);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str("F->result_ = ", 13), (*(P135)rt_nil_check(F->v_1434))), 59));
f_pop_frames_524(F->up, ((rt_int)0LL));
f_emit_228(F->up, rt_str("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_560(struct f_greenc_1fr *up_, P112 y_558, P135 *r_559) {
  struct f_access_of_560fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_558 = y_558;
F->r_559 = r_559;
F->p_1435 = NULL;
if (((*(P112)rt_nil_check(F->y_558)).level_ <= ((rt_int)0LL))) {
(*F->r_559) = (*(P112)rt_nil_check(F->y_558)).access_path_;
goto ret_;
}
F->p_1435 = f_mk_201(F->up, rt_str("F", 1));
{ rt_int lo1438 = ((rt_int)1LL), hi1439 = rt_sub(F->up->cur_level_134, (*(P112)rt_nil_check(F->y_558)).level_);
for (rt_int it1440 = lo1438; it1440 <= hi1439; it1440++) {
F->i_1437 = it1440;
F->p_1435 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->p_1435)), rt_str("->up", 4)));
}
}
L_end_1436: ;
if ((*(P112)rt_nil_check(F->y_558)).byref_) {
(*F->r_559) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P135)rt_nil_check(F->p_1435))), rt_str("->", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_558)).access_path_))), 41));
} else {
(*F->r_559) = f_mk_201(F->up, rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->p_1435)), rt_str("->", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_558)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_563(struct f_greenc_1fr *up_, rt_int l_561, P135 *r_562) {
  struct f_link_to_563fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_561 = l_561;
F->r_562 = r_562;
(*F->r_562) = f_mk_201(F->up, rt_str("F", 1));
{ rt_int lo1443 = ((rt_int)1LL), hi1444 = rt_sub(F->up->cur_level_134, F->l_561);
for (rt_int it1445 = lo1443; it1445 <= hi1444; it1445++) {
F->i_1442 = it1445;
(*F->r_562) = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*F->r_562))), rt_str("->up", 4)));
}
}
L_end_1441: ;
ret_:

  return;
}

static rstr f_c_ident_565(struct f_greenc_1fr *up_, rstr s_564) {
  struct f_c_ident_565fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_564 = rt_str_copy(s_564);
if (rt_str_eq(F->s_564, rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("MOD", 3))) {
F->result_ = rt_str("op_mod", 6);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("AND", 3))) {
F->result_ = rt_str("op_and", 6);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("OR", 2))) {
F->result_ = rt_str("op_or", 5);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("XOR", 3))) {
F->result_ = rt_str("op_xor", 6);
goto ret_;
} else if (rt_str_eq(F->s_564, rt_str("NOT", 3))) {
F->result_ = rt_str("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_212(F->up, F->s_564);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_569(struct f_greenc_1fr *up_, rstr base_566, P117 t_567, P135 *r_568) {
  struct f_deref_569fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_566 = rt_str_copy(base_566);
F->t_567 = t_567;
F->r_568 = r_568;
F->ct_1446 = NULL;
if (F->up->in_lv_path_193) {
F->up->last_deref_194 = 1;
}
f_ctype_416(F->up, F->t_567, &F->ct_1446);
(*F->r_568) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), (*(P135)rt_nil_check(F->ct_1446))), rt_str(")rt_nil_check(", 14)), F->base_566), rt_str("))", 2)));
ret_:

  return;
}

static int f_is_object_571(struct f_greenc_1fr *up_, P169 e_570) {
  struct f_is_object_571fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_570 = e_570;
F->y_1447 = NULL;
if (((*(P169)rt_nil_check(F->e_570)).kind_ == ((rt_int)5LL))) {
F->y_1447 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_570)).name_)));
F->result_ = ((F->y_1447 != NULL) && (((*(P112)rt_nil_check(F->y_1447)).kind_ == ((rt_int)1LL)) || ((*(P112)rt_nil_check(F->y_1447)).kind_ == ((rt_int)2LL))));
goto ret_;
} else if (((*(P169)rt_nil_check(F->e_570)).kind_ == ((rt_int)9LL))) {
F->result_ = f_is_object_571(F->up, (*(P169)rt_nil_check(F->e_570)).a_);
goto ret_;
} else if (((*(P169)rt_nil_check(F->e_570)).kind_ == ((rt_int)8LL))) {
if ((((*(P169)rt_nil_check(F->e_570)).b_ != NULL) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_570)).b_)).kind_ == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_571(F->up, (*(P169)rt_nil_check(F->e_570)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_577(struct f_greenc_1fr *up_, P169 e_572, P135 *code_out_573, P117 *t_574, P173 *c_575, int *ro_576) {
  struct f_lvalue_577fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_572 = e_572;
F->code_out_573 = code_out_573;
F->t_574 = t_574;
F->c_575 = c_575;
F->ro_576 = ro_576;
F->y_1448 = NULL;
F->base_1449 = NULL;
F->bt_1450 = NULL;
F->bc_1451 = NULL;
if ((((*(P169)rt_nil_check(F->e_572)).kind_ == ((rt_int)5LL)) || (((*(P169)rt_nil_check(F->e_572)).kind_ == ((rt_int)9LL)) && f_is_package_709(F->up, (*(P169)rt_nil_check(F->e_572)).a_)))) {
if (((*(P169)rt_nil_check(F->e_572)).kind_ == ((rt_int)9LL))) {
F->y_1448 = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_572)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_572)).name_)), (*(P169)rt_nil_check(F->e_572)).line_);
} else {
F->y_1448 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_572)).name_)));
}
if ((F->y_1448 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_572)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_572)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P112)rt_nil_check(F->y_1448)).kind_ != ((rt_int)1LL)) && ((*(P112)rt_nil_check(F->y_1448)).kind_ != ((rt_int)2LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_572)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_572)).name_)), rt_str(" is not an object", 17)));
}
f_access_of_560(F->up, F->y_1448, &(*F->code_out_573));
(*F->t_574) = (*(P112)rt_nil_check(F->y_1448)).t_;
(*F->c_575) = (*(P112)rt_nil_check(F->y_1448)).c_;
(*F->ro_576) = (*(P112)rt_nil_check(F->y_1448)).ro_;
} else if (((*(P169)rt_nil_check(F->e_572)).kind_ == ((rt_int)15LL))) {
f_lvalue_577(F->up, (*(P169)rt_nil_check(F->e_572)).a_, &(*F->code_out_573), &(*F->t_574), &(*F->c_575), &(*F->ro_576));
} else if (((*(P169)rt_nil_check(F->e_572)).kind_ == ((rt_int)9LL))) {
f_lvalue_577(F->up, (*(P169)rt_nil_check(F->e_572)).a_, &F->base_1449, &F->bt_1450, &F->bc_1451, &(*F->ro_576));
f_select_on_585(F->up, (*(P135)rt_nil_check(F->base_1449)), F->bt_1450, F->e_572, &(*F->ro_576), &(*F->code_out_573), &(*F->t_574), &(*F->c_575));
} else if (((*(P169)rt_nil_check(F->e_572)).kind_ == ((rt_int)8LL))) {
f_lvalue_577(F->up, (*(P169)rt_nil_check(F->e_572)).a_, &F->base_1449, &F->bt_1450, &F->bc_1451, &(*F->ro_576));
f_index_on_594(F->up, (*(P135)rt_nil_check(F->base_1449)), F->bt_1450, F->e_572, &(*F->ro_576), 1, &(*F->code_out_573), &(*F->t_574), &(*F->c_575));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_572)).line_, rt_str("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_585(struct f_greenc_1fr *up_, rstr base_578, P117 bt_579, P169 e_580, int *ro_581, P135 *code_out_582, P117 *t_583, P173 *c_584) {
  struct f_select_on_585fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_578 = rt_str_copy(base_578);
F->bt_579 = bt_579;
F->e_580 = e_580;
F->ro_581 = ro_581;
F->code_out_582 = code_out_582;
F->t_583 = t_583;
F->c_584 = c_584;
F->f_1452 = NULL;
F->d_1453 = NULL;
(*F->c_584) = F->up->no_cons_184;
if (((*(P117)rt_nil_check(F->bt_579)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_464(F->up, F->bt_579);
f_deref_569(F->up, F->base_578, F->bt_579, &F->d_1453);
(*F->ro_581) = 0;
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_580)).name_)), rt_str("ALL", 3))) {
(*F->code_out_582) = F->d_1453;
(*F->t_583) = (*(P117)rt_nil_check(F->bt_579)).target_;
goto ret_;
}
f_select_on_585(F->up, (*(P135)rt_nil_check(F->d_1453)), (*(P117)rt_nil_check(F->bt_579)).target_, F->e_580, &(*F->ro_581), &(*F->code_out_582), &(*F->t_583), &(*F->c_584));
goto ret_;
}
if (((*(P117)rt_nil_check(F->bt_579)).kind_ == ((rt_int)7LL))) {
if (((*(P117)rt_nil_check(F->bt_579)).priv_ && (!f_inside_package_715(F->up, (*(P117)rt_nil_check(F->bt_579)).decl_)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_580)).line_, rt_str_cat(rt_str_cat(rt_str("the components of private type ", 31), f_kind_name_407(F->up, F->bt_579)), rt_str(" are not visible here (RM79 7.4)", 32)));
}
F->f_1452 = (*(P117)rt_nil_check(F->bt_579)).fields_;
while ((F->f_1452 != NULL)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1452)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_580)).name_)))) {
(*F->c_584) = (*(P1205)rt_nil_check(F->f_1452)).c_;
(*F->code_out_582) = f_mk_201(F->up, rt_str_cat(rt_str_catc(F->base_578, 46), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_580)).name_)))));
(*F->t_583) = (*(P1205)rt_nil_check(F->f_1452)).t_;
goto ret_;
}
F->f_1452 = (*(P1205)rt_nil_check(F->f_1452)).next_;
}
L_end_1454: ;
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_580)).line_, rt_str_cat(rt_str_cat(f_kind_name_407(F->up, F->bt_579), rt_str(" has no component ", 18)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_580)).name_))));
}
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_580)).line_, rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_580)).name_))), rt_str(" here", 5)));
ret_:

  return;
}

static void f_index_on_594(struct f_greenc_1fr *up_, rstr base_586, P117 bt_587, P169 e_588, int *ro_589, int lv_590, P135 *code_out_591, P117 *t_592, P173 *c_593) {
  struct f_index_on_594fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_586 = rt_str_copy(base_586);
F->bt_587 = bt_587;
F->e_588 = e_588;
F->ro_589 = ro_589;
F->lv_590 = lv_590;
F->code_out_591 = code_out_591;
F->t_592 = t_592;
F->c_593 = c_593;
F->a_1455 = NULL;
F->a_1455 = (*(P169)rt_nil_check(F->e_588)).b_;
F->it_1456 = NULL;
F->i_1457 = NULL;
F->lo_1458 = NULL;
F->hi_1459 = NULL;
F->d_1460 = NULL;
(*F->c_593) = F->up->no_cons_184;
if (((*(P117)rt_nil_check(F->bt_587)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_464(F->up, F->bt_587);
f_deref_569(F->up, F->base_586, F->bt_587, &F->d_1460);
(*F->ro_589) = 0;
f_index_on_594(F->up, (*(P135)rt_nil_check(F->d_1460)), (*(P117)rt_nil_check(F->bt_587)).target_, F->e_588, &(*F->ro_589), F->lv_590, &(*F->code_out_591), &(*F->t_592), &(*F->c_593));
goto ret_;
}
if ((((f_list_len_273(F->up, F->a_1455) == ((rt_int)2LL)) && ((*(P117)rt_nil_check(F->bt_587)).kind_ == ((rt_int)6LL))) && ((*(P117)rt_nil_check(F->bt_587)).idx2_ != NULL))) {
f_gexpr_615(F->up, F->a_1455, (*(P117)rt_nil_check(F->bt_587)).idx_, &F->it_1456, &F->i_1457);
f_check_type_411(F->up, F->it_1456, (*(P117)rt_nil_check(F->bt_587)).idx_, (*(P169)rt_nil_check(F->e_588)).line_);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->a_1455)).next_, (*(P117)rt_nil_check(F->bt_587)).idx2_, &F->it_1456, &F->d_1460);
f_check_type_411(F->up, F->it_1456, (*(P117)rt_nil_check(F->bt_587)).idx2_, (*(P169)rt_nil_check(F->e_588)).line_);
(*F->code_out_591) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_586, rt_str(".p[(rt_index(", 13)), (*(P135)rt_nil_check(F->i_1457))), rt_str(", ", 2)), F->base_586), rt_str(".lo, ", 5)), F->base_586), rt_str(".hi) - ", 7)), F->base_586), rt_str(".lo) * (", 8)), F->base_586), rt_str(".hi2 - ", 7)), F->base_586), rt_str(".lo2 + 1) + rt_index(", 21)), (*(P135)rt_nil_check(F->d_1460))), rt_str(", ", 2)), F->base_586), rt_str(".lo2, ", 6)), F->base_586), rt_str(".hi2) - ", 8)), F->base_586), rt_str(".lo2]", 5)));
(*F->t_592) = (*(P117)rt_nil_check(F->bt_587)).elem_;
(*F->c_593) = (*(P117)rt_nil_check(F->bt_587)).elemcons_;
goto ret_;
}
if ((f_list_len_273(F->up, F->a_1455) != ((rt_int)1LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_588)).line_, rt_str("one index expected", 18));
}
if (((*(P117)rt_nil_check(F->bt_587)).kind_ == ((rt_int)5LL))) {
if (((*(P169)rt_nil_check(F->a_1455)).kind_ == ((rt_int)14LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->a_1455)).a_, F->up->ty_int_151, &F->it_1456, &F->lo_1458);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->a_1455)).b_, F->up->ty_int_151, &F->it_1456, &F->hi_1459);
(*F->code_out_591) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), F->base_586), rt_str(", ", 2)), (*(P135)rt_nil_check(F->lo_1458))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->hi_1459))), 41));
(*F->t_592) = F->up->ty_string_155;
(*F->ro_589) = 1;
goto ret_;
}
f_gexpr_615(F->up, F->a_1455, F->up->ty_int_151, &F->it_1456, &F->i_1457);
(*F->t_592) = F->up->ty_char_154;
if (F->lv_590) {
(*F->code_out_591) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), F->base_586), rt_str(", ", 2)), (*(P135)rt_nil_check(F->i_1457))), rt_str("))", 2)));
} else {
(*F->code_out_591) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), F->base_586), rt_str(", ", 2)), (*(P135)rt_nil_check(F->i_1457))), 41));
(*F->ro_589) = 1;
}
goto ret_;
}
if ((((*(P117)rt_nil_check(F->bt_587)).kind_ == ((rt_int)6LL)) && ((*(P169)rt_nil_check(F->a_1455)).kind_ == ((rt_int)14LL)))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->a_1455)).a_, (*(P117)rt_nil_check(F->bt_587)).idx_, &F->it_1456, &F->lo_1458);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->a_1455)).b_, (*(P117)rt_nil_check(F->bt_587)).idx_, &F->it_1456, &F->hi_1459);
f_ctype_416(F->up, F->bt_587, &F->d_1460);
(*F->code_out_591) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P135)rt_nil_check(F->d_1460))), rt_str(" s_ = ", 6)), F->base_586), rt_str("; rt_int l_ = ", 14)), (*(P135)rt_nil_check(F->lo_1458))), rt_str(", h_ = ", 7)), (*(P135)rt_nil_check(F->hi_1459))), rt_str("; if (l_ <= h_) { rt_index(l_, s_.lo, s_.hi); rt_index(h_, s_.lo, s_.hi); }", 75)), rt_str(" s_.p += l_ - s_.lo; s_.lo = l_; s_.hi = h_; s_; })", 51)));
(*F->t_592) = F->bt_587;
(*F->ro_589) = 1;
goto ret_;
}
if (((*(P117)rt_nil_check(F->bt_587)).kind_ == ((rt_int)6LL))) {
f_gexpr_615(F->up, F->a_1455, (*(P117)rt_nil_check(F->bt_587)).idx_, &F->it_1456, &F->i_1457);
f_check_type_411(F->up, F->it_1456, (*(P117)rt_nil_check(F->bt_587)).idx_, (*(P169)rt_nil_check(F->e_588)).line_);
(*F->code_out_591) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_586, rt_str(".p[rt_index(", 12)), (*(P135)rt_nil_check(F->i_1457))), rt_str(", ", 2)), F->base_586), rt_str(".lo, ", 5)), F->base_586), rt_str(".hi) - ", 7)), F->base_586), rt_str(".lo]", 4)));
(*F->t_592) = (*(P117)rt_nil_check(F->bt_587)).elem_;
(*F->c_593) = (*(P117)rt_nil_check(F->bt_587)).elemcons_;
goto ret_;
}
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_588)).line_, rt_str("cannot index this", 17));
ret_:

  return;
}

static int f_is_char_lit_596(struct f_greenc_1fr *up_, P169 e_595) {
  struct f_is_char_lit_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_595 = e_595;
F->result_ = (((*(P169)rt_nil_check(F->e_595)).kind_ == ((rt_int)3LL)) && (((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_595)).name_))).len == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_598(struct f_greenc_1fr *up_, P169 e_597) {
  struct f_is_enum_lit_598fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_597 = e_597;
F->y_1461 = NULL;
if (((*(P169)rt_nil_check(F->e_597)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1461 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_597)).name_)));
F->result_ = ((F->y_1461 != NULL) && ((*(P112)rt_nil_check(F->y_1461)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_string_600(struct f_greenc_1fr *up_, rstr s_599) {
  struct f_c_string_600fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_599 = rt_str_copy(s_599);
F->n_1462 = ((rt_int)0LL);
{ rt_int lo1465 = ((rt_int)1LL), hi1466 = (F->s_599).len;
for (rt_int it1467 = lo1465; it1467 <= hi1466; it1467++) {
F->i_1464 = it1467;
if ((((rt_str_get(F->s_599, F->i_1464) == 34) || (rt_str_get(F->s_599, F->i_1464) == 92)) || (rt_str_get(F->s_599, F->i_1464) == 63))) {
F->n_1462 = rt_add(F->n_1462, ((rt_int)1LL));
}
}
}
L_end_1463: ;
{
F->r_1469 = rt_str_new((rt_add(rt_add((F->s_599).len, F->n_1462), ((rt_int)2LL)) - ((rt_int)1LL) + 1));
F->j_1470 = ((rt_int)1LL);
(*rt_str_at(&F->r_1469, ((rt_int)1LL))) = 34;
{ rt_int lo1473 = ((rt_int)1LL), hi1474 = (F->s_599).len;
for (rt_int it1475 = lo1473; it1475 <= hi1474; it1475++) {
F->i_1472 = it1475;
F->j_1470 = rt_add(F->j_1470, ((rt_int)1LL));
if ((((rt_str_get(F->s_599, F->i_1472) == 34) || (rt_str_get(F->s_599, F->i_1472) == 92)) || (rt_str_get(F->s_599, F->i_1472) == 63))) {
(*rt_str_at(&F->r_1469, F->j_1470)) = 92;
F->j_1470 = rt_add(F->j_1470, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1469, F->j_1470)) = rt_str_get(F->s_599, F->i_1472);
}
}
L_end_1471: ;
(*rt_str_at(&F->r_1469, rt_add(F->j_1470, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1469;
goto ret_;

}
L_end_1468: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_602(struct f_greenc_1fr *up_, P169 e_601) {
  struct f_is_literal_602fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_601 = e_601;
if (((((*(P169)rt_nil_check(F->e_601)).kind_ == ((rt_int)1LL)) || ((*(P169)rt_nil_check(F->e_601)).kind_ == ((rt_int)2LL))) || f_is_char_lit_596(F->up, F->e_601))) {
F->result_ = 1;
goto ret_;
} else if ((((*(P169)rt_nil_check(F->e_601)).kind_ == ((rt_int)15LL)) || (((*(P169)rt_nil_check(F->e_601)).kind_ == ((rt_int)6LL)) && (!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_601)).name_)), rt_str("NOT", 3)))))) {
F->result_ = f_is_literal_602(F->up, (*(P169)rt_nil_check(F->e_601)).a_);
goto ret_;
} else if ((((*(P169)rt_nil_check(F->e_601)).kind_ == ((rt_int)7LL)) && (((((rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_601)).name_)), rt_str("+", 1)) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_601)).name_)), rt_str("-", 1))) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_601)).name_)), rt_str("*", 1))) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_601)).name_)), rt_str("/", 1))) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_601)).name_)), rt_str("**", 2))) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_601)).name_)), rt_str("MOD", 3))))) {
F->result_ = (f_is_literal_602(F->up, (*(P169)rt_nil_check(F->e_601)).a_) && f_is_literal_602(F->up, (*(P169)rt_nil_check(F->e_601)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_610(struct f_greenc_1fr *up_, P169 l_603, P169 h_604, P117 want_605, rt_int line_606, P117 *t_607, P135 *lo_608, P135 *hi_609) {
  struct f_range_bounds_610fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_603 = l_603;
F->h_604 = h_604;
F->want_605 = want_605;
F->line_606 = line_606;
F->t_607 = t_607;
F->lo_608 = lo_608;
F->hi_609 = hi_609;
F->w_1476 = NULL;
F->w_1476 = F->want_605;
F->t2_1477 = NULL;
if ((((F->w_1476 == NULL) && f_is_char_lit_596(F->up, F->l_603)) && f_is_char_lit_596(F->up, F->h_604))) {
F->w_1476 = F->up->ty_char_154;
}
if ((((F->w_1476 == NULL) && f_is_literal_602(F->up, F->l_603)) && (!f_is_literal_602(F->up, F->h_604)))) {
f_gexpr_615(F->up, F->h_604, NULL, &(*F->t_607), &(*F->hi_609));
f_gexpr_615(F->up, F->l_603, (*F->t_607), &F->t2_1477, &(*F->lo_608));
f_check_type_411(F->up, F->t2_1477, (*F->t_607), F->line_606);
} else {
f_gexpr_615(F->up, F->l_603, F->w_1476, &(*F->t_607), &(*F->lo_608));
f_gexpr_615(F->up, F->h_604, (*F->t_607), &F->t2_1477, &(*F->hi_609));
f_check_type_411(F->up, F->t2_1477, (*F->t_607), F->line_606);
}
ret_:

  return;
}

static void f_gexpr_615(struct f_greenc_1fr *up_, P169 e_611, P117 want_612, P117 *t_613, P135 *r_614) {
  struct f_gexpr_615fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_611 = e_611;
F->want_612 = want_612;
F->t_613 = t_613;
F->r_614 = r_614;
F->y_1478 = NULL;
F->bt_1479 = NULL;
F->c_1480 = NULL;
F->base_1482 = NULL;
F->a_1483 = NULL;
F->nm_1484 = NULL;
F->saved_lv_1485 = F->up->in_lv_path_193;
F->up->in_lv_path_193 = 0;
f_gexpr_1_620(F->up, F->e_611, F->want_612, &(*F->t_613), &(*F->r_614));
F->up->in_lv_path_193 = F->saved_lv_1485;
ret_:

  return;
}

static void f_gexpr_1_620(struct f_greenc_1fr *up_, P169 e_616, P117 want_617, P117 *t_618, P135 *r_619) {
  struct f_gexpr_1_620fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_616 = e_616;
F->want_617 = want_617;
F->t_618 = t_618;
F->r_619 = r_619;
F->y_1486 = NULL;
F->bt_1487 = NULL;
F->c_1488 = NULL;
F->base_1490 = NULL;
F->a_1491 = NULL;
F->nm_1492 = NULL;
(*F->t_618) = F->up->ty_int_151;
{ rt_int sel1493 = (*(P169)rt_nil_check(F->e_616)).kind_;
if (0 || sel1493 == ((rt_int)1LL)) {
if (((F->want_617 != NULL) && ((*(P117)rt_nil_check(F->want_617)).kind_ == ((rt_int)1LL)))) {
(*F->t_618) = F->want_617;
}
(*F->r_619) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P169)rt_nil_check(F->e_616)).ival_)), rt_str("LL)", 3)));
} else if (0 || sel1493 == ((rt_int)2LL)) {
(*F->t_618) = F->up->ty_float_153;
(*F->r_619) = (*(P169)rt_nil_check(F->e_616)).name_;
if (((F->want_617 != NULL) && ((*(P117)rt_nil_check(F->want_617)).kind_ == ((rt_int)3LL)))) {
(*F->t_618) = F->want_617;
} else if ((((F->want_617 != NULL) && ((*(P117)rt_nil_check(F->want_617)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->want_617)).fsmall_ != NULL))) {
(*F->t_618) = F->want_617;
(*F->r_619) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fix(", 9), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_616)).name_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->want_617)).fsmall_))), 41));
}
} else if (0 || sel1493 == ((rt_int)3LL)) {
if (((f_is_char_lit_596(F->up, F->e_616) && (F->want_617 != NULL)) && (((*(P117)rt_nil_check(F->want_617)).kind_ == ((rt_int)11LL)) || ((*(P117)rt_nil_check(F->want_617)).kind_ == ((rt_int)4LL))))) {
f_char_literal_625(F->up, F->e_616, F->want_617, &(*F->t_618), &(*F->r_619));
} else {
(*F->t_618) = F->up->ty_string_155;
(*F->r_619) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_600(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_616)).name_)))), rt_str(", ", 2)), rt_str_of_int(((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_616)).name_))).len)), 41));
}
} else if (0 || sel1493 == ((rt_int)4LL)) {
(*F->t_618) = F->up->ty_nil_157;
(*F->r_619) = f_mk_201(F->up, rt_str("NULL", 4));
} else if (0 || sel1493 == ((rt_int)15LL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_616)).a_, F->want_617, &(*F->t_618), &(*F->r_619));
} else if (0 || sel1493 == ((rt_int)5LL)) {
f_gen_name_630(F->up, F->e_616, F->want_617, &(*F->t_618), &(*F->r_619));
} else if (0 || sel1493 == ((rt_int)6LL)) {
f_gen_unop_635(F->up, F->e_616, F->want_617, &(*F->t_618), &(*F->r_619));
} else if (0 || sel1493 == ((rt_int)7LL)) {
f_gen_binop_657(F->up, F->e_616, F->want_617, &(*F->t_618), &(*F->r_619));
} else if (0 || sel1493 == ((rt_int)8LL)) {
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1486 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).name_)));
if (((F->y_1486 == NULL) || ((((*(P112)rt_nil_check(F->y_1486)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_1486)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_1486)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_189 = F->want_617;
f_gcall_695(F->up, F->e_616, 0, &(*F->t_618), &(*F->r_619));
goto ret_;
}
if (((*(P112)rt_nil_check(F->y_1486)).kind_ == ((rt_int)5LL))) {
f_conversion_662(F->up, F->e_616, F->y_1486, &(*F->t_618), &(*F->r_619));
goto ret_;
}
} else if ((((((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).kind_ == ((rt_int)9LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_776(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).a_)).a_)).name_)))) && (f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).name_)), (*(P169)rt_nil_check(F->e_616)).line_) != NULL)) && ((*(P112)rt_nil_check(f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).name_)), (*(P169)rt_nil_check(F->e_616)).line_))).kind_ == ((rt_int)3LL)))) {
F->up->call_want_189 = F->want_617;
f_gcall_695(F->up, F->e_616, 0, &(*F->t_618), &(*F->r_619));
goto ret_;
} else if ((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_709(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).a_))) {
F->y_1486 = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).name_)), (*(P169)rt_nil_check(F->e_616)).line_);
if (((F->y_1486 != NULL) && ((((*(P112)rt_nil_check(F->y_1486)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_1486)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_1486)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_189 = F->want_617;
f_gcall_695(F->up, F->e_616, 0, &(*F->t_618), &(*F->r_619));
goto ret_;
}
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_616)).a_, NULL, &F->bt_1487, &F->base_1490);
F->ro_1489 = 1;
f_index_on_594(F->up, (*(P135)rt_nil_check(F->base_1490)), F->bt_1487, F->e_616, &F->ro_1489, 0, &(*F->r_619), &(*F->t_618), &F->c_1488);
} else if (0 || sel1493 == ((rt_int)9LL)) {
if (f_is_package_709(F->up, (*(P169)rt_nil_check(F->e_616)).a_)) {
F->nm_1492 = f_nn_267(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_616)).line_);
(*(P169)rt_nil_check(F->nm_1492)).name_ = (*(P169)rt_nil_check(F->e_616)).name_;
(*(P169)rt_nil_check(F->nm_1492)).tag_ = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_616)).a_)).name_;
f_gen_name_630(F->up, F->nm_1492, F->want_617, &(*F->t_618), &(*F->r_619));
goto ret_;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_616)).a_, NULL, &F->bt_1487, &F->base_1490);
F->ro_1489 = 1;
f_select_on_585(F->up, (*(P135)rt_nil_check(F->base_1490)), F->bt_1487, F->e_616, &F->ro_1489, &(*F->r_619), &(*F->t_618), &F->c_1488);
} else if (0 || sel1493 == ((rt_int)10LL)) {
f_gen_attr_667(F->up, F->e_616, F->want_617, &(*F->t_618), &(*F->r_619));
} else if (0 || sel1493 == ((rt_int)11LL)) {
f_allocator_681(F->up, F->e_616, F->want_617, &(*F->t_618), &(*F->r_619));
} else if (0 || sel1493 == ((rt_int)12LL)) {
f_aggregate_686(F->up, F->e_616, F->want_617, &(*F->t_618), &(*F->r_619));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_616)).line_, rt_str("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_char_literal_625(struct f_greenc_1fr *up_, P169 e_621, P117 want_622, P117 *t_623, P135 *r_624) {
  struct f_char_literal_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_621 = e_621;
F->want_622 = want_622;
F->t_623 = t_623;
F->r_624 = r_624;
if (((*(P117)rt_nil_check(F->want_622)).kind_ == ((rt_int)11LL))) {
(*F->t_623) = F->want_622;
(*F->r_624) = f_mk_201(F->up, rt_str_of_int(rt_sub(((rt_int)(rt_str_get((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_621)).name_)), ((rt_int)1LL))) + 1), ((rt_int)1LL))));
goto ret_;
}
F->i_1494 = f_lit_index_424(F->up, (*(P117)rt_nil_check(F->want_622)).lits_, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_621)).name_)));
if ((F->i_1494 < ((rt_int)0LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_621)).line_, rt_str_cat(rt_str_cat(rt_str_ccat(34, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_621)).name_))), rt_str("\" is not a literal of ", 22)), f_kind_name_407(F->up, F->want_622)));
}
(*F->t_623) = F->want_622;
(*F->r_624) = f_mk_201(F->up, rt_str_of_int(F->i_1494));
ret_:

  return;
}

static void f_gen_name_630(struct f_greenc_1fr *up_, P169 e_626, P117 want_627, P117 *t_628, P135 *r_629) {
  struct f_gen_name_630fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_626 = e_626;
F->want_627 = want_627;
F->t_628 = t_628;
F->r_629 = r_629;
F->y_1495 = NULL;
F->y_1495 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_)));
F->z_1496 = NULL;
F->call_1497 = NULL;
if (((*(P169)rt_nil_check(F->e_626)).tag_ != NULL)) {
F->y_1495 = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_)), (*(P169)rt_nil_check(F->e_626)).line_);
}
if ((F->y_1495 == NULL)) {
if ((rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_)), rt_str("PUT", 3)) || rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_)), rt_str("GET", 3)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_626)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_)), rt_str(" needs an item", 14)));
}
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_626)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P112)rt_nil_check(F->y_1495)).kind_ == ((rt_int)2LL)) && (*(P112)rt_nil_check(F->y_1495)).hasmv_)) {
(*F->t_628) = (*(P112)rt_nil_check(F->y_1495)).t_;
(*F->r_629) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P112)rt_nil_check(F->y_1495)).mvalue_)), rt_str("LL)", 3)));
goto ret_;
}
if ((((*(P112)rt_nil_check(F->y_1495)).kind_ == ((rt_int)1LL)) || ((*(P112)rt_nil_check(F->y_1495)).kind_ == ((rt_int)2LL)))) {
(*F->t_628) = (*(P112)rt_nil_check(F->y_1495)).t_;
f_access_of_560(F->up, F->y_1495, &(*F->r_629));
goto ret_;
}
if (((*(P112)rt_nil_check(F->y_1495)).kind_ == ((rt_int)7LL))) {
F->z_1496 = F->y_1495;
if ((F->want_627 != NULL)) {
while ((F->z_1496 != NULL)) {
if (((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1496)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_))) && ((*(P112)rt_nil_check(F->z_1496)).kind_ == ((rt_int)7LL))) && f_same_382(F->up, (*(P112)rt_nil_check(F->z_1496)).t_, F->want_627))) {
goto L_end_1498;
}
F->z_1496 = (*(P112)rt_nil_check(F->z_1496)).chain_;
}
L_end_1498: ;
if ((F->z_1496 == NULL)) {
F->z_1496 = F->y_1495;
}
}
(*F->t_628) = (*(P112)rt_nil_check(F->z_1496)).t_;
(*F->r_629) = f_mk_201(F->up, rt_str_of_int((*(P112)rt_nil_check(F->z_1496)).mvalue_));
goto ret_;
}
if (((((*(P112)rt_nil_check(F->y_1495)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_1495)).kind_ == ((rt_int)4LL))) || ((*(P112)rt_nil_check(F->y_1495)).kind_ == ((rt_int)10LL)))) {
F->call_1497 = f_nn_267(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->e_626)).line_);
(*(P169)rt_nil_check(F->call_1497)).a_ = F->e_626;
F->up->call_want_189 = F->want_627;
f_gcall_695(F->up, F->call_1497, 0, &(*F->t_628), &(*F->r_629));
goto ret_;
}
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_626)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_626)).name_)), rt_str(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_635(struct f_greenc_1fr *up_, P169 e_631, P117 want_632, P117 *t_633, P135 *r_634) {
  struct f_gen_unop_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_631 = e_631;
F->want_632 = want_632;
F->t_633 = t_633;
F->r_634 = r_634;
F->a_1499 = NULL;
f_user_operator_758(F->up, F->e_631, F->want_632, &(*F->t_633), &(*F->r_634), &F->done_1500);
if (F->done_1500) {
goto ret_;
}
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_631)).name_)), rt_str("NOT", 3))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_631)).a_, F->up->ty_bool_152, &(*F->t_633), &F->a_1499);
f_check_type_411(F->up, (*F->t_633), F->up->ty_bool_152, (*(P169)rt_nil_check(F->e_631)).line_);
(*F->r_634) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P135)rt_nil_check(F->a_1499))), 41));
goto ret_;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_631)).a_, F->want_632, &(*F->t_633), &F->a_1499);
if ((!f_is_numeric_389(F->up, (*F->t_633)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_631)).line_, rt_str_cat(rt_str_cat(rt_str("unary ", 6), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_631)).name_))), rt_str(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_631)).name_)), rt_str("+", 1))) {
(*F->r_634) = F->a_1499;
} else if ((((*(P117)rt_nil_check((*F->t_633))).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check((*F->t_633))).kind_ == ((rt_int)16LL)))) {
(*F->r_634) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("(-", 2), (*(P135)rt_nil_check(F->a_1499))), 41));
} else {
(*F->r_634) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_neg(", 7), (*(P135)rt_nil_check(F->a_1499))), 41));
}
ret_:

  return;
}

static int f_short_int_637(struct f_greenc_1fr *up_, P117 t_636) {
  struct f_short_int_637fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_636 = t_636;
F->result_ = (((*(P117)rt_nil_check(F->t_636)).kind_ == ((rt_int)1LL)) && (f_root_384(F->up, F->t_636) == F->up->ty_short_162));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_float_kind_639(struct f_greenc_1fr *up_, P117 t_638) {
  struct f_float_kind_639fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_638 = t_638;
if ((f_root_384(F->up, F->t_638) == F->up->ty_sfloat_164)) {
F->result_ = rt_str("1", 1);
goto ret_;
}
F->result_ = rt_str("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arithmetic_644(struct f_greenc_1fr *up_, P169 e_640, P117 want_641, P117 *t_642, P135 *r_643) {
  struct f_arithmetic_644fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_640 = e_640;
F->want_641 = want_641;
F->t_642 = t_642;
F->r_643 = r_643;
F->op_1501 = rt_str_copy((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_640)).name_)));
F->ta_1502 = NULL;
F->tb_1503 = NULL;
F->hint_1504 = NULL;
F->a_1505 = NULL;
F->b_1506 = NULL;
if (rt_str_eq(F->op_1501, rt_str("**", 2))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_640)).a_, F->want_641, &F->ta_1502, &F->a_1505);
F->hint_1504 = F->up->ty_int_151;
if (((*(P117)rt_nil_check(F->ta_1502)).kind_ == ((rt_int)1LL))) {
F->hint_1504 = F->ta_1502;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_640)).b_, F->hint_1504, &F->tb_1503, &F->b_1506);
if (((*(P117)rt_nil_check(F->tb_1503)).kind_ != ((rt_int)1LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_640)).line_, rt_str("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_642) = F->ta_1502;
if (((*(P117)rt_nil_check(F->ta_1502)).kind_ == ((rt_int)1LL))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), 41));
} else if (((*(P117)rt_nil_check(F->ta_1502)).kind_ == ((rt_int)3LL))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fpow(", 10), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), rt_str(", ", 2)), f_float_kind_639(F->up, F->ta_1502)), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_640)).line_, rt_str("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_602(F->up, (*(P169)rt_nil_check(F->e_640)).a_) && (!f_is_literal_602(F->up, (*(P169)rt_nil_check(F->e_640)).b_)))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_640)).b_, F->want_641, &F->tb_1503, &F->b_1506);
F->hint_1504 = F->tb_1503;
if ((((*(P117)rt_nil_check(F->tb_1503)).kind_ == ((rt_int)16LL)) && (rt_str_eq(F->op_1501, rt_str("*", 1)) || rt_str_eq(F->op_1501, rt_str("/", 1))))) {
F->hint_1504 = F->up->ty_int_151;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_640)).a_, F->hint_1504, &F->ta_1502, &F->a_1505);
} else {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_640)).a_, F->want_641, &F->ta_1502, &F->a_1505);
F->hint_1504 = F->ta_1502;
if ((((((*(P117)rt_nil_check(F->ta_1502)).kind_ == ((rt_int)16LL)) && (rt_str_eq(F->op_1501, rt_str("*", 1)) || rt_str_eq(F->op_1501, rt_str("/", 1)))) && f_is_literal_602(F->up, (*(P169)rt_nil_check(F->e_640)).b_)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_640)).b_)).kind_ == ((rt_int)1LL)))) {
F->hint_1504 = F->up->ty_int_151;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_640)).b_, F->hint_1504, &F->tb_1503, &F->b_1506);
}
if (((!f_is_numeric_389(F->up, F->ta_1502)) || (!f_is_numeric_389(F->up, F->tb_1503)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_640)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1501), rt_str(" needs numeric operands, not ", 29)), f_kind_name_407(F->up, F->ta_1502)), rt_str(" and ", 5)), f_kind_name_407(F->up, F->tb_1503)));
}
if ((((*(P117)rt_nil_check(F->ta_1502)).kind_ == ((rt_int)16LL)) || ((*(P117)rt_nil_check(F->tb_1503)).kind_ == ((rt_int)16LL)))) {
f_fixed_operation_652(F->up, F->e_640, F->ta_1502, F->tb_1503, (*(P135)rt_nil_check(F->a_1505)), (*(P135)rt_nil_check(F->b_1506)), &(*F->t_642), &(*F->r_643));
goto ret_;
}
f_check_type_411(F->up, F->tb_1503, F->ta_1502, (*(P169)rt_nil_check(F->e_640)).line_);
(*F->t_642) = F->ta_1502;
if (((*(P117)rt_nil_check(F->ta_1502)).kind_ == ((rt_int)3LL))) {
if (rt_str_eq(F->op_1501, rt_str("+", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fadd(", 10), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), rt_str(", ", 2)), f_float_kind_639(F->up, F->ta_1502)), 41));
} else if (rt_str_eq(F->op_1501, rt_str("-", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fsub(", 10), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), rt_str(", ", 2)), f_float_kind_639(F->up, F->ta_1502)), 41));
} else if (rt_str_eq(F->op_1501, rt_str("*", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fmul(", 10), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), rt_str(", ", 2)), f_float_kind_639(F->up, F->ta_1502)), 41));
} else if (rt_str_eq(F->op_1501, rt_str("/", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fdiv(", 10), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), rt_str(", ", 2)), f_float_kind_639(F->up, F->ta_1502)), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_640)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1501), rt_str(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (rt_str_eq(F->op_1501, rt_str("+", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), 41));
} else if (rt_str_eq(F->op_1501, rt_str("-", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), 41));
} else if (rt_str_eq(F->op_1501, rt_str("*", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), 41));
} else if (rt_str_eq(F->op_1501, rt_str("/", 1))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_quot(", 8), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), 41));
} else if (rt_str_eq(F->op_1501, rt_str("MOD", 3))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_rem(", 7), (*(P135)rt_nil_check(F->a_1505))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1506))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_640)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1501), rt_str(" is not defined for integers", 28)));
}
}
if (f_short_int_637(F->up, (*F->t_642))) {
(*F->r_643) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_short(", 11), (*(P135)rt_nil_check((*F->r_643)))), 41));
}
ret_:

  return;
}

static void f_fixed_operation_652(struct f_greenc_1fr *up_, P169 e_645, P117 ta_646, P117 tb_647, rstr a_648, rstr b_649, P117 *t_650, P135 *r_651) {
  struct f_fixed_operation_652fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_645 = e_645;
F->ta_646 = ta_646;
F->tb_647 = tb_647;
F->a_648 = rt_str_copy(a_648);
F->b_649 = rt_str_copy(b_649);
F->t_650 = t_650;
F->r_651 = r_651;
F->op_1507 = rt_str_copy((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_645)).name_)));
if ((rt_str_eq(F->op_1507, rt_str("+", 1)) || rt_str_eq(F->op_1507, rt_str("-", 1)))) {
f_check_type_411(F->up, F->tb_647, F->ta_646, (*(P169)rt_nil_check(F->e_645)).line_);
(*F->t_650) = F->ta_646;
(*F->r_651) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, F->a_648), 32), F->op_1507), 32), F->b_649), 41));
} else if (((rt_str_eq(F->op_1507, rt_str("*", 1)) && ((*(P117)rt_nil_check(F->ta_646)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_647)).kind_ == ((rt_int)16LL)))) {
(*F->t_650) = F->up->ty_ufixed_167;
(*F->r_651) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_648), rt_str(" * ", 3)), F->b_649), 41));
} else if (((rt_str_eq(F->op_1507, rt_str("/", 1)) && ((*(P117)rt_nil_check(F->ta_646)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_647)).kind_ == ((rt_int)16LL)))) {
(*F->t_650) = F->up->ty_ufixed_167;
(*F->r_651) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fdiv(", 10), F->a_648), rt_str(", ", 2)), F->b_649), rt_str(", 0)", 4)));
} else if (((rt_str_eq(F->op_1507, rt_str("*", 1)) && ((*(P117)rt_nil_check(F->ta_646)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_647)).kind_ == ((rt_int)1LL)))) {
(*F->t_650) = F->ta_646;
(*F->r_651) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_648), rt_str(" * (double)(", 12)), F->b_649), rt_str("))", 2)));
} else if (((rt_str_eq(F->op_1507, rt_str("*", 1)) && ((*(P117)rt_nil_check(F->ta_646)).kind_ == ((rt_int)1LL))) && ((*(P117)rt_nil_check(F->tb_647)).kind_ == ((rt_int)16LL)))) {
(*F->t_650) = F->tb_647;
(*F->r_651) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_648), rt_str(") * ", 4)), F->b_649), 41));
} else if (((rt_str_eq(F->op_1507, rt_str("/", 1)) && ((*(P117)rt_nil_check(F->ta_646)).kind_ == ((rt_int)16LL))) && ((*(P117)rt_nil_check(F->tb_647)).kind_ == ((rt_int)1LL)))) {
(*F->t_650) = F->ta_646;
(*F->r_651) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fix(rt_g_fdiv(", 19), F->a_648), rt_str(", (double)(", 11)), F->b_649), rt_str("), 0), ", 7)), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->ta_646)).fsmall_))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_645)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1507), rt_str(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_657(struct f_greenc_1fr *up_, P169 e_653, P117 want_654, P117 *t_655, P135 *r_656) {
  struct f_gen_binop_657fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_653 = e_653;
F->want_654 = want_654;
F->t_655 = t_655;
F->r_656 = r_656;
F->op_1508 = rt_str_copy((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_653)).name_)));
F->ta_1509 = NULL;
F->tb_1510 = NULL;
F->hint_1511 = NULL;
F->ct_1512 = NULL;
F->a_1513 = NULL;
F->b_1514 = NULL;
F->x_1515 = NULL;
F->dummy_1516 = NULL;
(*F->t_655) = F->up->ty_bool_152;
f_user_operator_758(F->up, F->e_653, F->want_654, &(*F->t_655), &(*F->r_656), &F->done_1517);
if (F->done_1517) {
goto ret_;
}
if (((rt_str_eq(F->op_1508, rt_str("AND", 3)) || rt_str_eq(F->op_1508, rt_str("OR", 2))) || rt_str_eq(F->op_1508, rt_str("XOR", 3)))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).a_, F->up->ty_bool_152, &F->ta_1509, &F->a_1513);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).b_, F->up->ty_bool_152, &F->tb_1510, &F->b_1514);
f_check_type_411(F->up, F->ta_1509, F->up->ty_bool_152, (*(P169)rt_nil_check(F->e_653)).line_);
f_check_type_411(F->up, F->tb_1510, F->up->ty_bool_152, (*(P169)rt_nil_check(F->e_653)).line_);
if (rt_str_eq(F->op_1508, rt_str("AND", 3))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->a_1513))), rt_str(" && ", 4)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if (rt_str_eq(F->op_1508, rt_str("OR", 2))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->a_1513))), rt_str(" || ", 4)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->a_1513))), rt_str(" != ", 4)), (*(P135)rt_nil_check(F->b_1514))), 41));
}
goto ret_;
}
if (rt_str_eq(F->op_1508, rt_str("IN", 2))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).a_, NULL, &F->ta_1509, &F->a_1513);
f_gexpr_615(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_653)).b_)).a_, F->ta_1509, &F->tb_1510, &F->b_1514);
f_gexpr_615(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_653)).b_)).b_, F->ta_1509, &F->tb_1510, &F->x_1515);
(*F->r_656) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int m_ = ", 15), (*(P135)rt_nil_check(F->a_1513))), rt_str("; m_ >= ", 8)), (*(P135)rt_nil_check(F->b_1514))), rt_str(" && m_ <= ", 10)), (*(P135)rt_nil_check(F->x_1515))), rt_str("; })", 4)));
goto ret_;
}
if (rt_str_eq(F->op_1508, rt_str("&", 1))) {
if (f_is_char_lit_596(F->up, (*(P169)rt_nil_check(F->e_653)).a_)) {
F->hint_1511 = F->up->ty_char_154;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).a_, F->hint_1511, &F->ta_1509, &F->a_1513);
F->hint_1511 = NULL;
if (f_is_char_lit_596(F->up, (*(P169)rt_nil_check(F->e_653)).b_)) {
F->hint_1511 = F->up->ty_char_154;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).b_, F->hint_1511, &F->tb_1510, &F->b_1514);
(*F->t_655) = F->up->ty_string_155;
if ((((*(P117)rt_nil_check(F->ta_1509)).kind_ == ((rt_int)5LL)) && ((*(P117)rt_nil_check(F->tb_1510)).kind_ == ((rt_int)5LL)))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if ((((*(P117)rt_nil_check(F->ta_1509)).kind_ == ((rt_int)5LL)) && ((*(P117)rt_nil_check(F->tb_1510)).kind_ == ((rt_int)11LL)))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if ((((*(P117)rt_nil_check(F->ta_1509)).kind_ == ((rt_int)11LL)) && ((*(P117)rt_nil_check(F->tb_1510)).kind_ == ((rt_int)5LL)))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if ((((*(P117)rt_nil_check(F->ta_1509)).kind_ == ((rt_int)11LL)) && ((*(P117)rt_nil_check(F->tb_1510)).kind_ == ((rt_int)11LL)))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_653)).line_, rt_str("& catenates strings and characters", 34));
}
goto ret_;
}
if (f_is_rel_306(F->up, F->op_1508)) {
if (((f_is_literal_602(F->up, (*(P169)rt_nil_check(F->e_653)).a_) || f_is_enum_lit_598(F->up, (*(P169)rt_nil_check(F->e_653)).a_)) || ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_653)).a_)).kind_ == ((rt_int)4LL)))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).b_, NULL, &F->hint_1511, &F->dummy_1516);
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).a_, F->hint_1511, &F->ta_1509, &F->a_1513);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_653)).b_, F->ta_1509, &F->tb_1510, &F->b_1514);
F->ct_1512 = F->ta_1509;
if ((((*(P117)rt_nil_check(F->ta_1509)).kind_ != ((rt_int)10LL)) && ((*(P117)rt_nil_check(F->tb_1510)).kind_ != ((rt_int)10LL)))) {
f_check_type_411(F->up, F->tb_1510, F->ta_1509, (*(P169)rt_nil_check(F->e_653)).line_);
}
if (((*(P117)rt_nil_check(F->ta_1509)).kind_ == ((rt_int)10LL))) {
F->ct_1512 = F->tb_1510;
}
if (((*(P117)rt_nil_check(F->ct_1512)).kind_ == ((rt_int)5LL))) {
if (rt_str_eq(F->op_1508, rt_str("=", 1))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if (rt_str_eq(F->op_1508, rt_str("/=", 2))) {
(*F->r_656) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), rt_str("))", 2)));
} else if (rt_str_eq(F->op_1508, rt_str("<", 1))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if (rt_str_eq(F->op_1508, rt_str("<=", 2))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P135)rt_nil_check(F->a_1513))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if (rt_str_eq(F->op_1508, rt_str(">", 1))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P135)rt_nil_check(F->b_1514))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->a_1513))), 41));
} else {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P135)rt_nil_check(F->b_1514))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->a_1513))), 41));
}
goto ret_;
}
if (f_composite_470(F->up, F->ct_1512)) {
f_eq_code_485(F->up, F->ct_1512, (*(P135)rt_nil_check(F->a_1513)), (*(P135)rt_nil_check(F->b_1514)), &F->x_1515);
if (rt_str_eq(F->op_1508, rt_str("=", 1))) {
(*F->r_656) = F->x_1515;
} else if (rt_str_eq(F->op_1508, rt_str("/=", 2))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P135)rt_nil_check(F->x_1515))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_653)).line_, rt_str("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (rt_str_eq(F->op_1508, rt_str("=", 1))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->a_1513))), rt_str(" == ", 4)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else if (rt_str_eq(F->op_1508, rt_str("/=", 2))) {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->a_1513))), rt_str(" != ", 4)), (*(P135)rt_nil_check(F->b_1514))), 41));
} else {
(*F->r_656) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P135)rt_nil_check(F->a_1513))), 32), F->op_1508), 32), (*(P135)rt_nil_check(F->b_1514))), 41));
}
goto ret_;
}
f_arithmetic_644(F->up, F->e_653, F->want_654, &(*F->t_655), &(*F->r_656));
ret_:

  return;
}

static void f_conversion_662(struct f_greenc_1fr *up_, P169 e_658, P112 y_659, P117 *t_660, P135 *r_661) {
  struct f_conversion_662fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_658 = e_658;
F->y_659 = y_659;
F->t_660 = t_660;
F->r_661 = r_661;
F->aty_1518 = NULL;
F->a_1519 = NULL;
if ((f_list_len_273(F->up, (*(P169)rt_nil_check(F->e_658)).b_) != ((rt_int)1LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_658)).line_, rt_str("a conversion takes one expression", 33));
}
(*F->t_660) = (*(P112)rt_nil_check(F->y_659)).t_;
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_658)).b_, (*F->t_660), &F->aty_1518, &F->a_1519);
if ((f_is_numeric_389(F->up, (*F->t_660)) && f_is_numeric_389(F->up, F->aty_1518))) {
if ((((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)1LL)) && ((*(P117)rt_nil_check(F->aty_1518)).kind_ != ((rt_int)1LL)))) {
(*F->r_661) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_round(", 11), (*(P135)rt_nil_check(F->a_1519))), 41));
} else if ((((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)3LL)) && ((*(P117)rt_nil_check(F->aty_1518)).kind_ == ((rt_int)1LL)))) {
(*F->r_661) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("((double)(", 10), (*(P135)rt_nil_check(F->a_1519))), rt_str("))", 2)));
} else if ((((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)16LL)) && ((*(P117)rt_nil_check((*F->t_660))).fsmall_ != NULL))) {
if (((*(P117)rt_nil_check(F->aty_1518)).kind_ == ((rt_int)1LL))) {
(*F->r_661) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fix((double)(", 18), (*(P135)rt_nil_check(F->a_1519))), rt_str("), ", 3)), (*(P135)rt_nil_check((*(P117)rt_nil_check((*F->t_660))).fsmall_))), 41));
} else {
(*F->r_661) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_fix(", 9), (*(P135)rt_nil_check(F->a_1519))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P117)rt_nil_check((*F->t_660))).fsmall_))), 41));
}
} else {
(*F->r_661) = F->a_1519;
}
} else if (((f_same_382(F->up, F->aty_1518, (*F->t_660)) || f_derived_from_387(F->up, F->aty_1518, (*F->t_660))) || f_derived_from_387(F->up, (*F->t_660), F->aty_1518))) {
(*F->r_661) = F->a_1519;
} else {
f_check_type_411(F->up, F->aty_1518, (*F->t_660), (*(P169)rt_nil_check(F->e_658)).line_);
(*F->r_661) = F->a_1519;
}
if (((((((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)4LL))) || ((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)11LL))) && ((*(P112)rt_nil_check(F->y_659)).c_ != NULL)) && ((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_659)).c_)).lo_ != NULL))) {
(*F->r_661) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P135)rt_nil_check((*F->r_661)))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_659)).c_)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_659)).c_)).hi_))), 41));
} else if ((((((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check((*F->t_660))).kind_ == ((rt_int)16LL))) && ((*(P112)rt_nil_check(F->y_659)).c_ != NULL)) && ((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_659)).c_)).lo_ != NULL))) {
(*F->r_661) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*(P135)rt_nil_check((*F->r_661)))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_659)).c_)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_659)).c_)).hi_))), 41));
} else if (f_short_int_637(F->up, (*F->t_660))) {
(*F->r_661) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_short(", 11), (*(P135)rt_nil_check((*F->r_661)))), 41));
}
ret_:

  return;
}

static void f_gen_attr_667(struct f_greenc_1fr *up_, P169 e_663, P117 want_664, P117 *t_665, P135 *r_666) {
  struct f_gen_attr_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_663 = e_663;
F->want_664 = want_664;
F->t_665 = t_665;
F->r_666 = r_666;
F->a_1520 = rt_str_copy((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_663)).name_)));
F->y_1521 = NULL;
F->tt_1522 = NULL;
F->aty_1523 = NULL;
F->v_1524 = NULL;
F->d_1525 = NULL;
F->c_1526 = NULL;
if (((((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).kind_ == ((rt_int)8LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_776(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).a_)).name_))))) {
f_member_attr_842(F->up, F->e_663, &(*F->t_665), &(*F->r_666));
goto ret_;
}
if (rt_str_eq(F->a_1520, rt_str("ADDRESS", 7))) {
f_lvalue_577(F->up, (*(P169)rt_nil_check(F->e_663)).a_, &F->v_1524, &F->aty_1523, &F->c_1526, &F->ro_1528);
(*F->t_665) = F->up->ty_int_151;
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(intptr_t)&(", 21), (*(P135)rt_nil_check(F->v_1524))), rt_str("))", 2)));
goto ret_;
}
if (((rt_str_eq(F->a_1520, rt_str("COUNT", 5)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->y_1521 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).a_)).name_)));
if ((((F->y_1521 != NULL) && ((*(P112)rt_nil_check(F->y_1521)).kind_ == ((rt_int)10LL))) && ((*(P112)rt_nil_check(F->y_1521)).c_ != NULL))) {
if ((!f_same_task_372(F->up, (*(P112)rt_nil_check(F->y_1521)).members_, F->up->cur_task_176))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_663)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_798(F->up, F->y_1521, rt_str("", 0), &F->v_1524);
f_gexpr_615(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).b_, NULL, &F->aty_1523, &F->d_1525);
f_entry_family_slot_813(F->up, F->y_1521, (*(P135)rt_nil_check(F->v_1524)), (*(P135)rt_nil_check(F->d_1525)), &F->v_1524);
(*F->t_665) = F->up->ty_int_151;
(*F->r_666) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P135)rt_nil_check(F->v_1524))), 41));
goto ret_;
}
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1521 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).name_)));
if ((((F->y_1521 == NULL) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).name_)), rt_str("SYSTEM", 6))) && rt_str_eq(F->a_1520, rt_str("CLOCK", 5)))) {
(*F->t_665) = F->up->ty_time_166;
(*F->r_666) = f_mk_201(F->up, rt_str("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_1521 == NULL) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_663)).a_)).name_)), rt_str("SYSTEM", 6))) && (rt_str_eq(F->a_1520, rt_str("MAX_PRIORITY", 12)) || rt_str_eq(F->a_1520, rt_str("MIN_PRIORITY", 12))))) {
(*F->t_665) = F->up->ty_int_151;
if (rt_str_eq(F->a_1520, rt_str("MAX_PRIORITY", 12))) {
(*F->r_666) = f_mk_201(F->up, rt_str("((rt_int)255)", 13));
} else {
(*F->r_666) = f_mk_201(F->up, rt_str("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_1521 != NULL) && ((*(P112)rt_nil_check(F->y_1521)).kind_ == ((rt_int)5LL)))) {
F->tt_1522 = (*(P112)rt_nil_check(F->y_1521)).t_;
F->c_1526 = (*(P112)rt_nil_check(F->y_1521)).c_;
if (rt_str_eq(F->a_1520, rt_str("SIZE", 4))) {
f_ctype_416(F->up, F->tt_1522, &F->d_1525);
(*F->t_665) = F->up->ty_int_151;
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(sizeof(", 17), (*(P135)rt_nil_check(F->d_1525))), rt_str(") * 8))", 7)));
goto ret_;
}
if (rt_str_eq(F->a_1520, rt_str("ORD", 3))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_663)).b_, F->tt_1522, &F->aty_1523, &F->v_1524);
f_check_type_411(F->up, F->aty_1523, F->tt_1522, (*(P169)rt_nil_check(F->e_663)).line_);
(*F->t_665) = F->up->ty_int_151;
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (*(P135)rt_nil_check(F->v_1524))), rt_str(") + 1)", 6)));
goto ret_;
} else if ((rt_str_eq(F->a_1520, rt_str("VAL", 3)) || rt_str_eq(F->a_1520, rt_str("REP", 3)))) {
f_val_rep_676(F->up, F->e_663, F->tt_1522, F->c_1526, &(*F->t_665), &(*F->r_666));
goto ret_;
} else if ((rt_str_eq(F->a_1520, rt_str("SUCC", 4)) || rt_str_eq(F->a_1520, rt_str("PRED", 4)))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_663)).b_, F->tt_1522, &F->aty_1523, &F->v_1524);
(*F->t_665) = F->tt_1522;
if (((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1520, rt_str("SUCC", 4))) {
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P135)rt_nil_check(F->v_1524))), rt_str(", 1)", 4)));
} else {
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P135)rt_nil_check(F->v_1524))), rt_str(", 1)", 4)));
}
} else if (rt_str_eq(F->a_1520, rt_str("SUCC", 4))) {
(*F->r_666) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P135)rt_nil_check(F->v_1524))), rt_str(" + 1, ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1526)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1526)).hi_))), 41));
} else {
(*F->r_666) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P135)rt_nil_check(F->v_1524))), rt_str(" - 1, ", 6)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1526)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1526)).hi_))), 41));
}
goto ret_;
} else if ((rt_str_eq(F->a_1520, rt_str("FIRST", 5)) || rt_str_eq(F->a_1520, rt_str("LAST", 4)))) {
(*F->t_665) = F->tt_1522;
if (((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)6LL))) {
(*F->t_665) = (*(P117)rt_nil_check(F->tt_1522)).idx_;
}
if (((F->c_1526 != NULL) && ((*(P173)rt_nil_check(F->c_1526)).lo_ != NULL))) {
if (rt_str_eq(F->a_1520, rt_str("FIRST", 5))) {
(*F->r_666) = (*(P173)rt_nil_check(F->c_1526)).lo_;
} else {
(*F->r_666) = (*(P173)rt_nil_check(F->c_1526)).hi_;
}
} else if (((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1520, rt_str("FIRST", 5))) {
(*F->r_666) = f_mk_201(F->up, rt_str("INT64_MIN", 9));
} else {
(*F->r_666) = f_mk_201(F->up, rt_str("INT64_MAX", 9));
}
} else if ((((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)3LL)) && (f_root_384(F->up, F->tt_1522) == F->up->ty_sfloat_164))) {
if (rt_str_eq(F->a_1520, rt_str("FIRST", 5))) {
(*F->r_666) = f_mk_201(F->up, rt_str("(-3.40282347e+38)", 17));
} else {
(*F->r_666) = f_mk_201(F->up, rt_str("3.40282347e+38", 14));
}
} else if (((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)3LL))) {
if (rt_str_eq(F->a_1520, rt_str("FIRST", 5))) {
(*F->r_666) = f_mk_201(F->up, rt_str("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_666) = f_mk_201(F->up, rt_str("1.7976931348623157e+308", 23));
}
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_663)).line_, rt_str_cat(rt_str("this type has no ", 17), F->a_1520));
}
goto ret_;
}
f_other_attr_838(F->up, F->e_663, F->y_1521, &(*F->t_665), &(*F->r_666));
goto ret_;
}
if (((F->y_1521 != NULL) && (((*(P112)rt_nil_check(F->y_1521)).kind_ != ((rt_int)1LL)) && ((*(P112)rt_nil_check(F->y_1521)).kind_ != ((rt_int)2LL))))) {
f_other_attr_838(F->up, F->e_663, F->y_1521, &(*F->t_665), &(*F->r_666));
goto ret_;
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_663)).a_, NULL, &F->tt_1522, &F->v_1524);
if (((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_464(F->up, F->tt_1522);
f_deref_569(F->up, (*(P135)rt_nil_check(F->v_1524)), F->tt_1522, &F->d_1525);
F->v_1524 = F->d_1525;
F->tt_1522 = (*(P117)rt_nil_check(F->tt_1522)).target_;
}
(*F->t_665) = F->up->ty_int_151;
if (((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)5LL))) {
if ((rt_str_eq(F->a_1520, rt_str("LENGTH", 6)) || rt_str_eq(F->a_1520, rt_str("LAST", 4)))) {
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->v_1524))), rt_str(").len", 5)));
goto ret_;
} else if (rt_str_eq(F->a_1520, rt_str("FIRST", 5))) {
(*F->r_666) = f_mk_201(F->up, rt_str("((rt_int)1)", 11));
goto ret_;
}
} else if (((*(P117)rt_nil_check(F->tt_1522)).kind_ == ((rt_int)6LL))) {
(*F->t_665) = (*(P117)rt_nil_check(F->tt_1522)).idx_;
if (rt_str_eq(F->a_1520, rt_str("FIRST", 5))) {
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->v_1524))), rt_str(").lo", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1520, rt_str("LAST", 4))) {
(*F->r_666) = f_mk_201(F->up, rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->v_1524))), rt_str(").hi", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1520, rt_str("LENGTH", 6))) {
(*F->t_665) = F->up->ty_int_151;
(*F->r_666) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("RT_CNT(", 7), (*(P135)rt_nil_check(F->v_1524))), 41));
goto ret_;
}
}
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_663)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1520), rt_str(" is not handled here", 20)));
ret_:

  return;
}

static void f_lit_table_670(struct f_greenc_1fr *up_, P117 t_668, P135 *r_669) {
  struct f_lit_table_670fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_668 = t_668;
F->r_669 = r_669;
F->l_1529 = NULL;
F->l_1529 = (*(P117)rt_nil_check(F->t_668)).lits_;
F->s_1530 = NULL;
F->s_1530 = f_mk_201(F->up, rt_str("", 0));
if (((*(P117)rt_nil_check(F->t_668)).littab_ == NULL)) {
f_new_name_204(F->up, rt_str("lits", 4), &(*(P117)rt_nil_check(F->t_668)).littab_);
while ((F->l_1529 != NULL)) {
if ((((*(P135)rt_nil_check(F->s_1530))).len > ((rt_int)0LL))) {
F->s_1530 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->s_1530)), rt_str(", ", 2)));
}
if (((*(P169)rt_nil_check(F->l_1529)).kind_ == ((rt_int)3LL))) {
F->s_1530 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->s_1530)), f_c_string_600(F->up, rt_str_cat(rt_str_cat(f_q_219(F->up), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->l_1529)).name_))), f_q_219(F->up)))));
} else {
F->s_1530 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->s_1530)), f_c_string_600(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->l_1529)).name_)))));
}
F->l_1529 = (*(P169)rt_nil_check(F->l_1529)).next_;
}
L_end_1531: ;
f_put_to_226(F->up, F->up->out_types_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (*(P135)rt_nil_check((*(P117)rt_nil_check(F->t_668)).littab_))), rt_str("[] = {", 6)), (*(P135)rt_nil_check(F->s_1530))), rt_str("};", 2)));
}
(*F->r_669) = (*(P117)rt_nil_check(F->t_668)).littab_;
ret_:

  return;
}

static void f_val_rep_676(struct f_greenc_1fr *up_, P169 e_671, P117 tt_672, P173 c_673, P117 *t_674, P135 *r_675) {
  struct f_val_rep_676fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_671 = e_671;
F->tt_672 = tt_672;
F->c_673 = c_673;
F->t_674 = t_674;
F->r_675 = r_675;
F->aty_1532 = NULL;
F->v_1533 = NULL;
F->lt_1534 = NULL;
if (((*(P169)rt_nil_check(F->e_671)).b_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_671)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_671)).name_))), rt_str(" takes an argument", 18)));
}
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_671)).name_)), rt_str("REP", 3))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_671)).b_, F->tt_672, &F->aty_1532, &F->v_1533);
f_check_type_411(F->up, F->aty_1532, F->tt_672, (*(P169)rt_nil_check(F->e_671)).line_);
(*F->t_674) = F->up->ty_string_155;
if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)1LL))) {
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_of_int(", 14), (*(P135)rt_nil_check(F->v_1533))), 41));
} else if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)3LL))) {
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_image_float(", 17), (*(P135)rt_nil_check(F->v_1533))), 41));
} else if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)2LL))) {
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_bool_rep(", 14), (*(P135)rt_nil_check(F->v_1533))), 41));
} else if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)11LL))) {
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_char_rep(", 14), (*(P135)rt_nil_check(F->v_1533))), 41));
} else if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)4LL))) {
f_lit_table_670(F->up, F->tt_672, &F->lt_1534);
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_enum_rep(", 14), (*(P135)rt_nil_check(F->v_1533))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->lt_1534))), rt_str(", ", 2)), rt_str_of_int(f_list_len_273(F->up, (*(P117)rt_nil_check(F->tt_672)).lits_))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_671)).line_, rt_str("REP is an attribute of scalar types", 35));
}
goto ret_;
}
(*F->t_674) = F->tt_672;
if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)1LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_671)).b_, F->up->ty_string_155, &F->aty_1532, &F->v_1533);
f_check_type_411(F->up, F->aty_1532, F->up->ty_string_155, (*(P169)rt_nil_check(F->e_671)).line_);
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_int_of_str(", 14), (*(P135)rt_nil_check(F->v_1533))), 41));
if (((F->c_673 != NULL) && ((*(P173)rt_nil_check(F->c_673)).lo_ != NULL))) {
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P135)rt_nil_check((*F->r_675)))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_673)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_673)).hi_))), 41));
}
} else if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)3LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_671)).b_, F->up->ty_string_155, &F->aty_1532, &F->v_1533);
f_check_type_411(F->up, F->aty_1532, F->up->ty_string_155, (*(P169)rt_nil_check(F->e_671)).line_);
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_float_val(", 15), (*(P135)rt_nil_check(F->v_1533))), 41));
} else if (((((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)2LL)) || ((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)11LL))) || ((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)4LL)))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_671)).b_, NULL, &F->aty_1532, &F->v_1533);
if (((*(P117)rt_nil_check(F->aty_1532)).kind_ == ((rt_int)5LL))) {
if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)2LL))) {
F->v_1533 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_bool_val(", 14), (*(P135)rt_nil_check(F->v_1533))), 41));
} else if (((*(P117)rt_nil_check(F->tt_672)).kind_ == ((rt_int)11LL))) {
F->v_1533 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_char_val(", 14), (*(P135)rt_nil_check(F->v_1533))), 41));
} else {
f_lit_table_670(F->up, F->tt_672, &F->lt_1534);
F->v_1533 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_enum_val(", 14), (*(P135)rt_nil_check(F->v_1533))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->lt_1534))), rt_str(", ", 2)), rt_str_of_int(f_list_len_273(F->up, (*(P117)rt_nil_check(F->tt_672)).lits_))), 41));
}
} else {
f_check_type_411(F->up, F->aty_1532, F->up->ty_int_151, (*(P169)rt_nil_check(F->e_671)).line_);
F->v_1533 = f_mk_201(F->up, rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->v_1533))), rt_str(" - 1)", 5)));
}
(*F->r_675) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P135)rt_nil_check(F->v_1533))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_673)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_673)).hi_))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_671)).line_, rt_str("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_681(struct f_greenc_1fr *up_, P169 e_677, P117 want_678, P117 *t_679, P135 *r_680) {
  struct f_allocator_681fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_677 = e_677;
F->want_678 = want_678;
F->t_679 = t_679;
F->r_680 = r_680;
F->y_1536 = NULL;
F->y_1536 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_677)).name_)));
F->target_1537 = NULL;
F->vt_1538 = NULL;
F->ct_1539 = NULL;
F->pt_1540 = NULL;
F->cell_1541 = NULL;
F->v_1542 = NULL;
F->x_1543 = NULL;
if (((F->want_678 == NULL) || ((*(P117)rt_nil_check(F->want_678)).kind_ != ((rt_int)8LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_677)).line_, rt_str("the access type of this allocator is not known here", 51));
}
if (((F->y_1536 == NULL) || ((*(P112)rt_nil_check(F->y_1536)).kind_ != ((rt_int)5LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_677)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_677)).name_)), rt_str(" is not a type", 14)));
}
f_finish_ptr_464(F->up, F->want_678);
F->target_1537 = (*(P117)rt_nil_check(F->want_678)).target_;
if ((!f_same_382(F->up, (*(P112)rt_nil_check(F->y_1536)).t_, F->want_678))) {
f_check_type_411(F->up, (*(P112)rt_nil_check(F->y_1536)).t_, F->target_1537, (*(P169)rt_nil_check(F->e_677)).line_);
}
f_ctype_416(F->up, F->target_1537, &F->ct_1539);
f_ctype_416(F->up, F->want_678, &F->pt_1540);
f_new_name_204(F->up, rt_str("cell", 4), &F->cell_1541);
if (((*(P169)rt_nil_check(F->e_677)).a_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_677)).line_, rt_str("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_190 != NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_677)).line_, rt_str("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_677)).a_)).kind_ == ((rt_int)12LL))) {
f_aggregate_686(F->up, (*(P169)rt_nil_check(F->e_677)).a_, F->target_1537, &F->vt_1538, &F->v_1542);
} else {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->e_677)).a_, F->target_1537, &F->vt_1538, &F->v_1542);
}
f_check_type_411(F->up, F->vt_1538, F->target_1537, (*(P169)rt_nil_check(F->e_677)).line_);
f_copy_code_480(F->up, F->target_1537, (*(P135)rt_nil_check(F->v_1542)), &F->x_1543);
(*F->t_679) = F->want_678;
(*F->r_680) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P135)rt_nil_check(F->ct_1539))), rt_str(" *", 2)), (*(P135)rt_nil_check(F->cell_1541))), rt_str(" = rt_alloc(sizeof(", 19)), (*(P135)rt_nil_check(F->ct_1539))), rt_str(")); *", 5)), (*(P135)rt_nil_check(F->cell_1541))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->x_1543))), rt_str("; (", 3)), (*(P135)rt_nil_check(F->pt_1540))), 41), (*(P135)rt_nil_check(F->cell_1541))), rt_str("; })", 4)));
ret_:

  return;
}

static void f_aggregate_686(struct f_greenc_1fr *up_, P169 e_682, P117 want_683, P117 *t_684, P135 *r_685) {
  struct f_aggregate_686fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_682 = e_682;
F->want_683 = want_683;
F->t_684 = t_684;
F->r_685 = r_685;
F->it_1544 = NULL;
F->it_1544 = (*(P169)rt_nil_check(F->e_682)).a_;
F->f_1545 = NULL;
F->vt_1546 = NULL;
F->ct_1547 = NULL;
F->tmp_1548 = NULL;
F->v_1549 = NULL;
F->x_1550 = NULL;
F->parts_1551 = NULL;
F->et_1552 = NULL;
F->lo_1553 = NULL;
F->hi_1554 = NULL;
F->key_1555 = NULL;
F->fill_1556 = NULL;
F->fill_1556 = f_mk_201(F->up, rt_str("", 0));
F->lab_1558 = NULL;
if ((F->want_683 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_682)).line_, rt_str("the type of this aggregate is not known here", 44));
}
(*F->t_684) = F->want_683;
f_ctype_416(F->up, F->want_683, &F->ct_1547);
f_new_name_204(F->up, rt_str("ag", 2), &F->tmp_1548);
if (((*(P117)rt_nil_check(F->want_683)).kind_ == ((rt_int)7LL))) {
F->parts_1551 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P135)rt_nil_check(F->ct_1547))), 32), (*(P135)rt_nil_check(F->tmp_1548))), 59));
if ((f_list_len_273(F->up, F->it_1544) != f_field_count_413(F->up, F->want_683))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_682)).line_, rt_str_cat(rt_str("an aggregate gives every component of ", 38), f_kind_name_407(F->up, F->want_683)));
}
F->f_1545 = (*(P117)rt_nil_check(F->want_683)).fields_;
while ((F->it_1544 != NULL)) {
if (((*(P169)rt_nil_check(F->it_1544)).a_ != NULL)) {
F->f_1545 = (*(P117)rt_nil_check(F->want_683)).fields_;
while (((F->f_1545 != NULL) && (!(((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_1544)).a_)).a_)).kind_ == ((rt_int)5LL)) && rt_str_eq((*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1545)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_1544)).a_)).a_)).name_))))))) {
F->f_1545 = (*(P1205)rt_nil_check(F->f_1545)).next_;
}
L_end_1560: ;
if ((F->f_1545 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_682)).line_, rt_str("no such component in the aggregate", 34));
}
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->it_1544)).b_, (*(P1205)rt_nil_check(F->f_1545)).t_, &F->vt_1546, &F->v_1549);
f_check_type_411(F->up, F->vt_1546, (*(P1205)rt_nil_check(F->f_1545)).t_, (*(P169)rt_nil_check(F->e_682)).line_);
f_copy_code_480(F->up, (*(P1205)rt_nil_check(F->f_1545)).t_, (*(P135)rt_nil_check(F->v_1549)), &F->x_1550);
F->parts_1551 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->parts_1551)), 32), (*(P135)rt_nil_check(F->tmp_1548))), 46), f_c_field_218(F->up, (*(P135)rt_nil_check((*(P1205)rt_nil_check(F->f_1545)).name_)))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->x_1550))), 59));
F->it_1544 = (*(P169)rt_nil_check(F->it_1544)).next_;
if ((F->f_1545 != NULL)) {
F->f_1545 = (*(P1205)rt_nil_check(F->f_1545)).next_;
}
}
L_end_1559: ;
(*F->r_685) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->parts_1551)), 32), (*(P135)rt_nil_check(F->tmp_1548))), rt_str("; })", 4)));
goto ret_;
}
if (((*(P117)rt_nil_check(F->want_683)).kind_ != ((rt_int)6LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_682)).line_, rt_str("an aggregate builds a record or an array", 40));
}
f_ctype_416(F->up, (*(P117)rt_nil_check(F->want_683)).elem_, &F->et_1552);
if (((*(P169)rt_nil_check(F->it_1544)).a_ == NULL)) {
if ((((*(P117)rt_nil_check(F->want_683)).tcons_ != NULL) && ((*(P173)rt_nil_check((*(P117)rt_nil_check(F->want_683)).tcons_)).lo_ != NULL))) {
F->lo_1553 = (*(P173)rt_nil_check((*(P117)rt_nil_check(F->want_683)).tcons_)).lo_;
} else {
F->lo_1553 = f_mk_201(F->up, rt_str("1", 1));
}
F->n_1557 = f_list_len_273(F->up, F->it_1544);
F->parts_1551 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P135)rt_nil_check(F->ct_1547))), 32), (*(P135)rt_nil_check(F->tmp_1548))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo = ", 6)), (*(P135)rt_nil_check(F->lo_1553))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".hi = ", 6)), (*(P135)rt_nil_check(F->lo_1553))), rt_str(" + ", 3)), rt_str_of_int(rt_sub(F->n_1557, ((rt_int)1LL)))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo2 = ", 7)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".hi2 = 1; ", 10)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P135)rt_nil_check(F->et_1552))), rt_str(") * ", 4)), rt_str_of_int(rt_add(F->n_1557, ((rt_int)1LL)))), rt_str(");", 2)));
F->n_1557 = ((rt_int)0LL);
while ((F->it_1544 != NULL)) {
if (((*(P169)rt_nil_check(F->it_1544)).a_ != NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_682)).line_, rt_str("named associations follow the positional ones", 45));
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->it_1544)).b_, (*(P117)rt_nil_check(F->want_683)).elem_, &F->vt_1546, &F->v_1549);
f_check_type_411(F->up, F->vt_1546, (*(P117)rt_nil_check(F->want_683)).elem_, (*(P169)rt_nil_check(F->e_682)).line_);
f_copy_code_480(F->up, (*(P117)rt_nil_check(F->want_683)).elem_, (*(P135)rt_nil_check(F->v_1549)), &F->x_1550);
F->parts_1551 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->parts_1551)), 32), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".p[", 3)), rt_str_of_int(F->n_1557)), rt_str("] = ", 4)), (*(P135)rt_nil_check(F->x_1550))), 59));
F->n_1557 = rt_add(F->n_1557, ((rt_int)1LL));
F->it_1544 = (*(P169)rt_nil_check(F->it_1544)).next_;
}
L_end_1561: ;
(*F->r_685) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->parts_1551)), 32), (*(P135)rt_nil_check(F->tmp_1548))), rt_str("; })", 4)));
goto ret_;
}
if ((((*(P117)rt_nil_check(F->want_683)).tcons_ != NULL) && ((*(P173)rt_nil_check((*(P117)rt_nil_check(F->want_683)).tcons_)).hi_ != NULL))) {
F->lo_1553 = (*(P173)rt_nil_check((*(P117)rt_nil_check(F->want_683)).tcons_)).lo_;
F->hi_1554 = (*(P173)rt_nil_check((*(P117)rt_nil_check(F->want_683)).tcons_)).hi_;
} else if (((((*(P169)rt_nil_check(F->it_1544)).next_ == NULL) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_1544)).a_)).flag_ != ((rt_int)1LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_1544)).a_)).b_ != NULL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_1544)).a_)).a_, (*(P117)rt_nil_check(F->want_683)).idx_, &F->vt_1546, &F->lo_1553);
f_gexpr_615(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->it_1544)).a_)).b_, (*(P117)rt_nil_check(F->want_683)).idx_, &F->vt_1546, &F->hi_1554);
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_682)).line_, rt_str("the bounds of this aggregate are not known", 42));
}
F->parts_1551 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P135)rt_nil_check(F->ct_1547))), 32), (*(P135)rt_nil_check(F->tmp_1548))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo = ", 6)), (*(P135)rt_nil_check(F->lo_1553))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".hi = ", 6)), (*(P135)rt_nil_check(F->hi_1554))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo2 = ", 7)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".hi2 = 1; ", 10)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P135)rt_nil_check(F->et_1552))), rt_str(") * (size_t)(RT_CNT(", 20)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(") + 1));", 8)));
F->n_1557 = ((*(P135)rt_nil_check(F->parts_1551))).len;
while ((F->it_1544 != NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->it_1544)).b_, (*(P117)rt_nil_check(F->want_683)).elem_, &F->vt_1546, &F->v_1549);
f_check_type_411(F->up, F->vt_1546, (*(P117)rt_nil_check(F->want_683)).elem_, (*(P169)rt_nil_check(F->e_682)).line_);
f_copy_code_480(F->up, (*(P117)rt_nil_check(F->want_683)).elem_, (*(P135)rt_nil_check(F->v_1549)), &F->x_1550);
F->lab_1558 = (*(P169)rt_nil_check(F->it_1544)).a_;
while ((F->lab_1558 != NULL)) {
if (((*(P169)rt_nil_check(F->lab_1558)).flag_ == ((rt_int)1LL))) {
F->fill_1556 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int k_ = 0; k_ < RT_CNT(", 33), (*(P135)rt_nil_check(F->tmp_1548))), rt_str("); k_++) ", 9)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".p[k_] = ", 9)), (*(P135)rt_nil_check(F->x_1550))), 59));
} else if (((*(P169)rt_nil_check(F->lab_1558)).b_ != NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->lab_1558)).a_, (*(P117)rt_nil_check(F->want_683)).idx_, &F->vt_1546, &F->key_1555);
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->lab_1558)).b_, (*(P117)rt_nil_check(F->want_683)).idx_, &F->vt_1546, &F->hi_1554);
F->parts_1551 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->parts_1551)), rt_str(" for (rt_int k_ = ", 18)), (*(P135)rt_nil_check(F->key_1555))), rt_str("; k_ <= ", 8)), (*(P135)rt_nil_check(F->hi_1554))), rt_str("; k_++) ", 8)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".p[rt_index(k_, ", 16)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo, ", 5)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".hi) - ", 7)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo] = ", 7)), (*(P135)rt_nil_check(F->x_1550))), 59));
} else {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->lab_1558)).a_, (*(P117)rt_nil_check(F->want_683)).idx_, &F->vt_1546, &F->key_1555);
F->parts_1551 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->parts_1551)), 32), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".p[rt_index(", 12)), (*(P135)rt_nil_check(F->key_1555))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo, ", 5)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".hi) - ", 7)), (*(P135)rt_nil_check(F->tmp_1548))), rt_str(".lo] = ", 7)), (*(P135)rt_nil_check(F->x_1550))), 59));
}
F->lab_1558 = (*(P169)rt_nil_check(F->lab_1558)).next_;
}
L_end_1563: ;
F->it_1544 = (*(P169)rt_nil_check(F->it_1544)).next_;
}
L_end_1562: ;
(*F->r_685) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_slice((*(P135)rt_nil_check(F->parts_1551)), ((rt_int)1LL), F->n_1557), (*(P135)rt_nil_check(F->fill_1556))), rt_str_slice((*(P135)rt_nil_check(F->parts_1551)), rt_add(F->n_1557, ((rt_int)1LL)), ((*(P135)rt_nil_check(F->parts_1551))).len)), 32), (*(P135)rt_nil_check(F->tmp_1548))), rt_str("; })", 4)));
ret_:

  return;
}

static P169 f_actual_for_690(struct f_greenc_1fr *up_, P169 args_687, P1194 pm_688, P1194 first_689) {
  struct f_actual_for_690fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_687 = args_687;
F->pm_688 = pm_688;
F->first_689 = first_689;
F->a_1564 = NULL;
F->a_1564 = F->args_687;
F->p_1565 = NULL;
F->p_1565 = F->first_689;
while (((F->a_1564 != NULL) && ((*(P169)rt_nil_check(F->a_1564)).formal_ == NULL))) {
if ((F->p_1565 == F->pm_688)) {
F->result_ = F->a_1564;
goto ret_;
}
F->p_1565 = (*(P1194)rt_nil_check(F->p_1565)).next_;
F->a_1564 = (*(P169)rt_nil_check(F->a_1564)).next_;
}
L_end_1566: ;
while ((F->a_1564 != NULL)) {
if ((((*(P169)rt_nil_check(F->a_1564)).formal_ != NULL) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1564)).formal_)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_688)).name_))))) {
F->result_ = F->a_1564;
goto ret_;
}
F->a_1564 = (*(P169)rt_nil_check(F->a_1564)).next_;
}
L_end_1567: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_695(struct f_greenc_1fr *up_, P169 e_691, int is_stmt_692, P117 *t_693, P135 *r_694) {
  struct f_gcall_695fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_691 = e_691;
F->is_stmt_692 = is_stmt_692;
F->t_693 = t_693;
F->r_694 = r_694;
F->fn_1568 = NULL;
F->fn_1568 = (*(P169)rt_nil_check(F->e_691)).a_;
F->nm_1569 = NULL;
F->y_1570 = NULL;
F->args_1571 = NULL;
F->lv_1572 = NULL;
F->v_1573 = NULL;
F->ct_1574 = NULL;
F->x_1575 = NULL;
F->a_1576 = NULL;
F->pm_1577 = NULL;
F->lt_1578 = NULL;
F->vt_1579 = NULL;
F->lc_1580 = NULL;
if ((((*(P169)rt_nil_check(F->fn_1568)).kind_ == ((rt_int)9LL)) && f_is_package_709(F->up, (*(P169)rt_nil_check(F->fn_1568)).a_))) {
F->nm_1569 = f_nn_267(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->fn_1568)).line_);
(*(P169)rt_nil_check(F->nm_1569)).name_ = (*(P169)rt_nil_check(F->fn_1568)).name_;
(*(P169)rt_nil_check(F->nm_1569)).tag_ = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).a_)).name_;
F->fn_1568 = F->nm_1569;
} else if ((((((*(P169)rt_nil_check(F->fn_1568)).kind_ == ((rt_int)9LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_776(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).a_)).a_)).name_))))) {
F->y_1570 = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), (*(P169)rt_nil_check(F->fn_1568)).line_);
if (((F->y_1570 != NULL) && (((*(P112)rt_nil_check(F->y_1570)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_1570)).kind_ == ((rt_int)4LL))))) {
f_resolve_member_overload_752(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), (*(P169)rt_nil_check(F->e_691)).b_, F->is_stmt_692, F->up->call_want_189, (*(P169)rt_nil_check(F->e_691)).line_, &F->y_1570);
F->up->call_task_ix_180 = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).a_)).b_;
if ((F->is_stmt_692 && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1570)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_691)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_700(F->up, F->e_691, F->y_1570, &(*F->t_693), &(*F->r_694));
goto ret_;
}
}
if (((*(P169)rt_nil_check(F->fn_1568)).kind_ != ((rt_int)5LL))) {
f_other_call_833(F->up, F->e_691, F->is_stmt_692, &(*F->t_693), &(*F->r_694));
goto ret_;
}
F->y_1570 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)));
if (((*(P169)rt_nil_check(F->fn_1568)).tag_ != NULL)) {
F->y_1570 = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), (*(P169)rt_nil_check(F->fn_1568)).line_);
}
if ((F->y_1570 == NULL)) {
f_builtin_707(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), (*(P169)rt_nil_check(F->e_691)).b_, (*(P169)rt_nil_check(F->e_691)).line_, F->is_stmt_692, &(*F->t_693), &(*F->r_694));
goto ret_;
}
if (((((*(P112)rt_nil_check(F->y_1570)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_1570)).kind_ == ((rt_int)4LL))) && ((*(P169)rt_nil_check(F->fn_1568)).tag_ == NULL))) {
f_resolve_overload_744(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), (*(P169)rt_nil_check(F->e_691)).b_, F->is_stmt_692, F->up->call_want_189, (*(P169)rt_nil_check(F->e_691)).line_, &F->y_1570);
if ((F->y_1570 == NULL)) {
f_builtin_707(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), (*(P169)rt_nil_check(F->e_691)).b_, (*(P169)rt_nil_check(F->e_691)).line_, F->is_stmt_692, &(*F->t_693), &(*F->r_694));
goto ret_;
}
} else if ((((*(P112)rt_nil_check(F->y_1570)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_1570)).kind_ == ((rt_int)4LL)))) {
f_resolve_member_overload_752(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), (*(P169)rt_nil_check(F->e_691)).b_, F->is_stmt_692, F->up->call_want_189, (*(P169)rt_nil_check(F->e_691)).line_, &F->y_1570);
}
if (((*(P112)rt_nil_check(F->y_1570)).kind_ == ((rt_int)10LL))) {
f_other_call_833(F->up, F->e_691, F->is_stmt_692, &(*F->t_693), &(*F->r_694));
goto ret_;
}
if ((((*(P112)rt_nil_check(F->y_1570)).kind_ != ((rt_int)3LL)) && ((*(P112)rt_nil_check(F->y_1570)).kind_ != ((rt_int)4LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_691)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), rt_str(" cannot be called", 17)));
}
if ((F->is_stmt_692 && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1570)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_691)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_692) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_1570)).result_)).kind_ == ((rt_int)9LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_691)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->fn_1568)).name_)), rt_str(" is a procedure, not a function", 31)));
}
f_gcall_with_700(F->up, F->e_691, F->y_1570, &(*F->t_693), &(*F->r_694));
ret_:

  return;
}

static void f_gcall_with_700(struct f_greenc_1fr *up_, P169 e_696, P112 y_697, P117 *t_698, P135 *r_699) {
  struct f_gcall_with_700fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_696 = e_696;
F->y_697 = y_697;
F->t_698 = t_698;
F->r_699 = r_699;
F->args_1582 = NULL;
F->lv_1583 = NULL;
F->v_1584 = NULL;
F->x1_1585 = NULL;
F->x2_1586 = NULL;
F->a_1587 = NULL;
F->pm_1588 = NULL;
F->lt_1589 = NULL;
F->vt_1590 = NULL;
F->lc_1591 = NULL;
f_check_call_rules_888(F->up, F->e_696, F->y_697);
F->args_1582 = f_mk_201(F->up, rt_str("", 0));
if (((((((*(P112)rt_nil_check(F->y_697)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_697)).kind_ == ((rt_int)4LL))) && ((*(P112)rt_nil_check(F->y_697)).access_path_ != NULL)) && ((*(P112)rt_nil_check(F->y_697)).members_ != NULL)) && ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_180 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_696)).line_, rt_str_cat(rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_697)).name_)), rt_str(" needs the member of the family: F(I).", 38)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_697)).name_))));
}
f_gexpr_615(F->up, F->up->call_task_ix_180, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).t_, &F->vt_1590, &F->v_1584);
F->up->call_task_ix_180 = NULL;
f_path_at_774(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_697)).access_path_)), &F->lv_1583);
f_path_at_774(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).cname_)), rt_str("lo", 2)), &F->x1_1585);
f_path_at_774(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).cname_)), rt_str("hi", 2)), &F->x2_1586);
F->lv_1583 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->lv_1583)), rt_str("[rt_index(", 10)), (*(P135)rt_nil_check(F->v_1584))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->x1_1585))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->x2_1586))), rt_str(") - ", 4)), (*(P135)rt_nil_check(F->x1_1585))), 93));
F->args_1582 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->lv_1583))), rt_str(" \? ", 3)), (*(P135)rt_nil_check(F->lv_1583))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((((*(P112)rt_nil_check(F->y_697)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_697)).kind_ == ((rt_int)4LL))) && ((*(P112)rt_nil_check(F->y_697)).access_path_ != NULL))) {
f_path_at_774(F->up, (*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_697)).members_)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_697)).access_path_)), &F->lv_1583);
F->args_1582 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->lv_1583))), rt_str(" \? ", 3)), (*(P135)rt_nil_check(F->lv_1583))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((*(P112)rt_nil_check(F->y_697)).level_ > ((rt_int)0LL))) {
f_link_to_563(F->up, (*(P112)rt_nil_check(F->y_697)).level_, &F->args_1582);
}
F->pm_1588 = (*(P112)rt_nil_check(F->y_697)).params_;
while ((F->pm_1588 != NULL)) {
F->a_1587 = f_actual_for_690(F->up, (*(P169)rt_nil_check(F->e_696)).b_, F->pm_1588, (*(P112)rt_nil_check(F->y_697)).params_);
if ((((*(P135)rt_nil_check(F->args_1582))).len > ((rt_int)0LL))) {
F->args_1582 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->args_1582)), rt_str(", ", 2)));
}
if ((F->a_1587 == NULL)) {
if ((((*(P1194)rt_nil_check(F->pm_1588)).dflt_ == NULL) || ((*(P1194)rt_nil_check(F->pm_1588)).mode_ != ((rt_int)1LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_696)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).name_))));
}
f_gexpr_615(F->up, (*(P1194)rt_nil_check(F->pm_1588)).dflt_, (*(P1194)rt_nil_check(F->pm_1588)).t_, &F->vt_1590, &F->v_1584);
F->args_1582 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->args_1582)), (*(P135)rt_nil_check(F->v_1584))));
} else {
if (((((*(P169)rt_nil_check(F->a_1587)).flag_ != ((rt_int)0LL)) && ((*(P169)rt_nil_check(F->a_1587)).flag_ != ((rt_int)4LL))) && ((*(P169)rt_nil_check(F->a_1587)).flag_ != (*(P1194)rt_nil_check(F->pm_1588)).mode_))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_696)).line_, rt_str_cat(rt_str_cat(rt_str("the association of ", 19), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).name_))), rt_str(" does not match its mode", 24)));
}
if (((*(P1194)rt_nil_check(F->pm_1588)).mode_ == ((rt_int)1LL))) {
f_gexpr_615(F->up, F->a_1587, (*(P1194)rt_nil_check(F->pm_1588)).t_, &F->vt_1590, &F->v_1584);
f_check_type_411(F->up, F->vt_1590, (*(P1194)rt_nil_check(F->pm_1588)).t_, (*(P169)rt_nil_check(F->e_696)).line_);
if (((((*(P1194)rt_nil_check(F->pm_1588)).c_ != NULL) && ((*(P173)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).c_)).lo_ != NULL)) && (((*(P117)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).t_)).kind_ == ((rt_int)1LL)) || ((*(P117)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).t_)).kind_ == ((rt_int)4LL))))) {
F->v_1584 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P135)rt_nil_check(F->v_1584))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).c_)).lo_))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P173)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).c_)).hi_))), 41));
}
F->args_1582 = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check(F->args_1582)), (*(P135)rt_nil_check(F->v_1584))));
} else {
f_lvalue_577(F->up, F->a_1587, &F->lv_1583, &F->lt_1589, &F->lc_1591, &F->ro_1592);
if (F->ro_1592) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_696)).line_, rt_str_cat((*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1588)).name_)), rt_str(" needs a variable", 17)));
}
f_check_pure_target_871(F->up, F->a_1587, (*(P169)rt_nil_check(F->e_696)).line_);
f_check_type_411(F->up, F->lt_1589, (*(P1194)rt_nil_check(F->pm_1588)).t_, (*(P169)rt_nil_check(F->e_696)).line_);
F->args_1582 = f_mk_201(F->up, rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->args_1582)), 38), (*(P135)rt_nil_check(F->lv_1583))));
}
}
F->pm_1588 = (*(P1194)rt_nil_check(F->pm_1588)).next_;
}
L_end_1593: ;
if (((f_list_len_273(F->up, (*(P169)rt_nil_check(F->e_696)).b_) > ((rt_int)0LL)) && ((*(P112)rt_nil_check(F->y_697)).params_ == NULL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_696)).line_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_697)).name_)), rt_str(" takes no parameters", 20)));
}
(*F->t_698) = (*(P112)rt_nil_check(F->y_697)).result_;
(*F->r_699) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_697)).cname_)), 40), (*(P135)rt_nil_check(F->args_1582))), 41));
ret_:

  return;
}

static void f_builtin_707(struct f_greenc_1fr *up_, rstr name_701, P169 args_702, rt_int line_703, int is_stmt_704, P117 *t_705, P135 *r_706) {
  struct f_builtin_707fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_701 = rt_str_copy(name_701);
F->args_702 = args_702;
F->line_703 = line_703;
F->is_stmt_704 = is_stmt_704;
F->t_705 = t_705;
F->r_706 = r_706;
F->aty_1594 = NULL;
F->lt_1595 = NULL;
F->a_1596 = NULL;
F->w_1597 = NULL;
F->lv_1598 = NULL;
F->lc_1599 = NULL;
(*F->t_705) = F->up->ty_void_156;
if (((F->up->pure_sym_190 != NULL) && (rt_str_eq(F->name_701, rt_str("PUT", 3)) || rt_str_eq(F->name_701, rt_str("GET", 3))))) {
f_fail_222(F->up, F->line_703, rt_str_cat(rt_str_cat(rt_str("a function cannot do input-output: ", 35), F->name_701), rt_str(" has side effects (RM79 6.5)", 28)));
}
if (rt_str_eq(F->name_701, rt_str("PUT", 3))) {
if ((F->args_702 == NULL)) {
f_fail_222(F->up, F->line_703, rt_str("PUT needs an item", 17));
}
f_gexpr_615(F->up, F->args_702, NULL, &F->aty_1594, &F->a_1596);
F->w_1597 = f_mk_201(F->up, rt_str("0", 1));
if (((*(P169)rt_nil_check(F->args_702)).next_ != NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->args_702)).next_, F->up->ty_int_151, &F->lt_1595, &F->w_1597);
}
if (((*(P117)rt_nil_check(F->aty_1594)).kind_ == ((rt_int)5LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_put(", 9), (*(P135)rt_nil_check(F->a_1596))), 41));
} else if (((*(P117)rt_nil_check(F->aty_1594)).kind_ == ((rt_int)11LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_putc(", 10), (*(P135)rt_nil_check(F->a_1596))), 41));
} else if (((*(P117)rt_nil_check(F->aty_1594)).kind_ == ((rt_int)1LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_int(", 13), (*(P135)rt_nil_check(F->a_1596))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->w_1597))), 41));
} else if (((*(P117)rt_nil_check(F->aty_1594)).kind_ == ((rt_int)2LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_bool(", 14), (*(P135)rt_nil_check(F->a_1596))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->w_1597))), 41));
} else if (((*(P117)rt_nil_check(F->aty_1594)).kind_ == ((rt_int)16LL))) {
f_fail_222(F->up, F->line_703, rt_str("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if (((*(P117)rt_nil_check(F->aty_1594)).kind_ == ((rt_int)3LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_float(", 15), (*(P135)rt_nil_check(F->a_1596))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->w_1597))), rt_str(", 0)", 4)));
} else {
f_fail_222(F->up, F->line_703, rt_str("PUT of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_701, rt_str("GET", 3))) {
f_lvalue_577(F->up, F->args_702, &F->lv_1598, &F->lt_1595, &F->lc_1599, &F->ro_1600);
if (((*(P117)rt_nil_check(F->lt_1595)).kind_ == ((rt_int)11LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->lv_1598))), rt_str(" = rt_g_getc())", 15)));
} else if (((*(P117)rt_nil_check(F->lt_1595)).kind_ == ((rt_int)1LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->lv_1598))), rt_str(" = rt_g_get_int())", 18)));
} else if (((*(P117)rt_nil_check(F->lt_1595)).kind_ == ((rt_int)3LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->lv_1598))), rt_str(" = rt_g_get_float())", 20)));
} else {
f_fail_222(F->up, F->line_703, rt_str("GET of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_701, rt_str("ABS", 3))) {
f_gexpr_615(F->up, F->args_702, NULL, &(*F->t_705), &F->a_1596);
if (((*(P117)rt_nil_check((*F->t_705))).kind_ == ((rt_int)1LL))) {
(*F->r_706) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_abs(", 7), (*(P135)rt_nil_check(F->a_1596))), 41));
} else if ((((*(P117)rt_nil_check((*F->t_705))).kind_ == ((rt_int)3LL)) || ((*(P117)rt_nil_check((*F->t_705))).kind_ == ((rt_int)16LL)))) {
(*F->r_706) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("fabs(", 5), (*(P135)rt_nil_check(F->a_1596))), 41));
} else {
f_fail_222(F->up, F->line_703, rt_str("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_848(F->up, F->name_701, F->args_702, F->line_703, &(*F->t_705), &(*F->r_706));
}
ret_:

  return;
}

static int f_is_package_709(struct f_greenc_1fr *up_, P169 e_708) {
  struct f_is_package_709fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_708 = e_708;
F->y_1601 = NULL;
if (((*(P169)rt_nil_check(F->e_708)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1601 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_708)).name_)));
F->result_ = ((F->y_1601 != NULL) && (((*(P112)rt_nil_check(F->y_1601)).kind_ == ((rt_int)8LL)) || ((*(P112)rt_nil_check(F->y_1601)).kind_ == ((rt_int)9LL))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P112 f_member_of_713(struct f_greenc_1fr *up_, rstr p_710, rstr name_711, rt_int line_712) {
  struct f_member_of_713fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_710 = rt_str_copy(p_710);
F->name_711 = rt_str_copy(name_711);
F->line_712 = line_712;
F->y_1602 = NULL;
F->y_1602 = f_lookup_369(F->up, F->p_710);
F->m_1603 = NULL;
if (((F->y_1602 == NULL) || (((*(P112)rt_nil_check(F->y_1602)).kind_ != ((rt_int)8LL)) && ((*(P112)rt_nil_check(F->y_1602)).kind_ != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_1603 = (*(P112)rt_nil_check(F->y_1602)).members_;
while ((F->m_1603 != NULL)) {
if ((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1603)).name_)), F->name_711) && (!(*(P112)rt_nil_check(F->m_1603)).hidden_))) {
F->result_ = F->m_1603;
goto ret_;
}
F->m_1603 = (*(P112)rt_nil_check(F->m_1603)).mnext_;
}
L_end_1604: ;
if (((*(P112)rt_nil_check(F->y_1602)).kind_ == ((rt_int)9LL))) {
F->m_1603 = f_lookup_entry_375(F->up, F->name_711, F->y_1602);
if ((((F->m_1603 != NULL) && ((*(P112)rt_nil_check(F->m_1603)).kind_ == ((rt_int)10LL))) && f_same_task_372(F->up, (*(P112)rt_nil_check(F->m_1603)).members_, F->y_1602))) {
F->result_ = F->m_1603;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_715(struct f_greenc_1fr *up_, P169 p_714) {
  struct f_inside_package_715fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_714 = p_714;
F->l_1605 = NULL;
F->l_1605 = F->up->pkg_stack_186;
if ((F->p_714 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_1605 != NULL)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P146)rt_nil_check(F->l_1605)).s_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_714)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_1605 = (*(P146)rt_nil_check(F->l_1605)).next_;
}
L_end_1606: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_718(struct f_greenc_1fr *up_, P112 y_716, P112 *z_717) {
  struct f_copy_sym_718fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_716 = y_716;
F->z_717 = z_717;
(*F->z_717) = ({ R113 *cell1607 = rt_alloc(sizeof(R113)); *cell1607 = cp_R113(({ R113 ag1608; ag1608.kind_ = (*(P112)rt_nil_check(F->y_716)).kind_; ag1608.name_ = (*(P112)rt_nil_check(F->y_716)).name_; ag1608.t_ = (*(P112)rt_nil_check(F->y_716)).t_; ag1608.c_ = (*(P112)rt_nil_check(F->y_716)).c_; ag1608.access_path_ = (*(P112)rt_nil_check(F->y_716)).access_path_; ag1608.cname_ = (*(P112)rt_nil_check(F->y_716)).cname_; ag1608.ro_ = (*(P112)rt_nil_check(F->y_716)).ro_; ag1608.mvalue_ = (*(P112)rt_nil_check(F->y_716)).mvalue_; ag1608.hasmv_ = (*(P112)rt_nil_check(F->y_716)).hasmv_; ag1608.decl_ = (*(P112)rt_nil_check(F->y_716)).decl_; ag1608.params_ = (*(P112)rt_nil_check(F->y_716)).params_; ag1608.result_ = (*(P112)rt_nil_check(F->y_716)).result_; ag1608.depth_ = ((rt_int)0LL); ag1608.level_ = (*(P112)rt_nil_check(F->y_716)).level_; ag1608.byref_ = (*(P112)rt_nil_check(F->y_716)).byref_; ag1608.vrp_ = (*(P112)rt_nil_check(F->y_716)).vrp_; ag1608.hidden_ = (*(P112)rt_nil_check(F->y_716)).hidden_; ag1608.from_use_ = 0; ag1608.members_ = (*(P112)rt_nil_check(F->y_716)).members_; ag1608.mnext_ = NULL; ag1608.chain_ = NULL; ag1608.stack_ = NULL; ag1608; })); (P112)cell1607; });
ret_:

  return;
}

static void f_complete_private_721(struct f_greenc_1fr *up_, P117 ph_719, P117 full_720) {
  struct f_complete_private_721fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_719 = ph_719;
F->full_720 = full_720;
F->n_1609 = NULL;
F->n_1609 = (*(P117)rt_nil_check(F->ph_719)).name_;
F->p_1610 = NULL;
F->p_1610 = (*(P117)rt_nil_check(F->ph_719)).decl_;
as_R118(&(*(P117)rt_nil_check(F->ph_719)), (*(P117)rt_nil_check(F->full_720)));
(*(P117)rt_nil_check(F->ph_719)).name_ = F->n_1609;
(*(P117)rt_nil_check(F->ph_719)).priv_ = 1;
(*(P117)rt_nil_check(F->ph_719)).decl_ = F->p_1610;
ret_:

  return;
}

static void f_package_spec_723(struct f_greenc_1fr *up_, P169 e_722) {
  struct f_package_spec_723fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_722 = e_722;
F->y_1611 = NULL;
F->m_1612 = NULL;
F->z_1613 = NULL;
F->saved_1614 = NULL;
F->saved_1614 = F->up->cur_pkg_187;
F->first_private_1615 = NULL;
F->y_1611 = f_new_sym_402(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->e_722)).name_);
(*(P112)rt_nil_check(F->y_1611)).decl_ = F->e_722;
F->up->pkg_stack_186 = ({ R147 *cell1616 = rt_alloc(sizeof(R147)); *cell1616 = cp_R147(({ R147 ag1617; ag1617.s_ = (*(P169)rt_nil_check(F->e_722)).name_; ag1617.next_ = F->up->pkg_stack_186; ag1617; })); (P146)cell1616; });
F->up->cur_pkg_187 = F->e_722;
f_open_scope_398(F->up);
f_decl_elements_507(F->up, (*(P169)rt_nil_check(F->e_722)).c_);
F->first_private_1615 = F->up->scope_stack_116;
f_decl_elements_507(F->up, (*(P169)rt_nil_check(F->e_722)).d_);
F->m_1612 = F->up->scope_stack_116;
while (((F->m_1612 != NULL) && ((*(P112)rt_nil_check(F->m_1612)).depth_ == F->up->depth_115))) {
f_copy_sym_718(F->up, F->m_1612, &F->z_1613);
(*(P112)rt_nil_check(F->z_1613)).hidden_ = (f_hidden_from_726(F->up, F->m_1612, F->first_private_1615) || (*(P112)rt_nil_check(F->m_1612)).from_use_);
(*(P112)rt_nil_check(F->z_1613)).mnext_ = (*(P112)rt_nil_check(F->y_1611)).members_;
(*(P112)rt_nil_check(F->y_1611)).members_ = F->z_1613;
F->m_1612 = (*(P112)rt_nil_check(F->m_1612)).stack_;
}
L_end_1618: ;
f_close_scope_399(F->up);
F->up->pkg_stack_186 = (*(P146)rt_nil_check(F->up->pkg_stack_186)).next_;
F->up->cur_pkg_187 = F->saved_1614;
f_define_397(F->up, F->y_1611, (*(P169)rt_nil_check(F->e_722)).line_);
ret_:

  return;
}

static int f_hidden_from_726(struct f_greenc_1fr *up_, P112 m_724, P112 first_private_725) {
  struct f_hidden_from_726fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_724 = m_724;
F->first_private_725 = first_private_725;
F->p_1619 = NULL;
F->p_1619 = F->up->scope_stack_116;
while ((F->p_1619 != NULL)) {
if ((F->p_1619 == F->first_private_725)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_1619 == F->m_724)) {
F->result_ = 1;
goto ret_;
}
F->p_1619 = (*(P112)rt_nil_check(F->p_1619)).stack_;
}
L_end_1620: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_728(struct f_greenc_1fr *up_, P169 e_727) {
  struct f_package_body_728fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_727 = e_727;
F->y_1621 = NULL;
F->y_1621 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_727)).name_)));
F->m_1622 = NULL;
F->z_1623 = NULL;
F->saved_1624 = NULL;
F->saved_1624 = F->up->cur_pkg_187;
if (((F->y_1621 != NULL) && ((*(P112)rt_nil_check(F->y_1621)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_899(F->up, F->e_727);
goto ret_;
}
if (((F->y_1621 == NULL) || ((*(P112)rt_nil_check(F->y_1621)).kind_ != ((rt_int)8LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_727)).line_, rt_str_cat(rt_str_cat(rt_str("package body ", 13), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_727)).name_))), rt_str(" has no specification", 21)));
}
F->up->pkg_stack_186 = ({ R147 *cell1625 = rt_alloc(sizeof(R147)); *cell1625 = cp_R147(({ R147 ag1626; ag1626.s_ = (*(P169)rt_nil_check(F->e_727)).name_; ag1626.next_ = F->up->pkg_stack_186; ag1626; })); (P146)cell1625; });
F->up->cur_pkg_187 = (*(P112)rt_nil_check(F->y_1621)).decl_;
f_open_scope_398(F->up);
F->m_1622 = (*(P112)rt_nil_check(F->y_1621)).members_;
while ((F->m_1622 != NULL)) {
f_copy_sym_718(F->up, F->m_1622, &F->z_1623);
(*(P112)rt_nil_check(F->z_1623)).hidden_ = 0;
f_define_397(F->up, F->z_1623, (*(P169)rt_nil_check(F->e_727)).line_);
F->m_1622 = (*(P112)rt_nil_check(F->m_1622)).mnext_;
}
L_end_1627: ;
f_decl_elements_507(F->up, (*(P169)rt_nil_check(F->e_727)).c_);
F->m_1622 = (*(P112)rt_nil_check(F->y_1621)).members_;
while ((F->m_1622 != NULL)) {
if (((((*(P112)rt_nil_check(F->m_1622)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->m_1622)).kind_ == ((rt_int)4LL))) && ((*(P169)rt_nil_check((*(P112)rt_nil_check(F->m_1622)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_1623 = F->up->table_114.p[rt_index(f_hash_367(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1622)).name_))), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while ((F->z_1623 != NULL)) {
if (((*(P112)rt_nil_check(F->z_1623)).cname_ == (*(P112)rt_nil_check(F->m_1622)).cname_)) {
(*(P112)rt_nil_check(F->m_1622)).decl_ = (*(P112)rt_nil_check(F->z_1623)).decl_;
}
F->z_1623 = (*(P112)rt_nil_check(F->z_1623)).chain_;
}
L_end_1629: ;
if (((*(P169)rt_nil_check((*(P112)rt_nil_check(F->m_1622)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_727)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no body for ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1622)).name_))), rt_str(" in package body ", 17)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_727)).name_))));
}
}
F->m_1622 = (*(P112)rt_nil_check(F->m_1622)).mnext_;
}
L_end_1628: ;
f_guarded_531(F->up, (*(P169)rt_nil_check(F->e_727)).d_, (*(P169)rt_nil_check(F->e_727)).e_, (*(P169)rt_nil_check(F->e_727)).line_);
f_close_scope_399(F->up);
F->up->pkg_stack_186 = (*(P146)rt_nil_check(F->up->pkg_stack_186)).next_;
F->up->cur_pkg_187 = F->saved_1624;
ret_:

  return;
}

static void f_use_clause_730(struct f_greenc_1fr *up_, P169 e_729) {
  struct f_use_clause_730fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_729 = e_729;
F->n_1630 = NULL;
F->n_1630 = (*(P169)rt_nil_check(F->e_729)).a_;
F->y_1631 = NULL;
F->m_1632 = NULL;
F->z_1633 = NULL;
F->old_1634 = NULL;
while ((F->n_1630 != NULL)) {
F->y_1631 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1630)).name_)));
if ((F->y_1631 == NULL)) {
if ((!rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1630)).name_)), rt_str("TEXT_IO", 7)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->n_1630)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1630)).name_)), rt_str(" is not a package", 17)));
}
} else if ((((*(P112)rt_nil_check(F->y_1631)).kind_ != ((rt_int)8LL)) && ((*(P112)rt_nil_check(F->y_1631)).kind_ != ((rt_int)9LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->n_1630)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1630)).name_)), rt_str(" is not a package or a task", 27)));
} else {
F->m_1632 = (*(P112)rt_nil_check(F->y_1631)).members_;
while ((F->m_1632 != NULL)) {
F->old_1634 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1632)).name_)));
if (((!(*(P112)rt_nil_check(F->m_1632)).hidden_) && ((F->old_1634 == NULL) || ((((*(P112)rt_nil_check(F->old_1634)).depth_ < F->up->depth_115) && ((*(P112)rt_nil_check(F->old_1634)).kind_ != ((rt_int)1LL))) && ((*(P112)rt_nil_check(F->old_1634)).kind_ != ((rt_int)2LL)))))) {
f_copy_sym_718(F->up, F->m_1632, &F->z_1633);
(*(P112)rt_nil_check(F->z_1633)).from_use_ = 1;
f_define_397(F->up, F->z_1633, (*(P169)rt_nil_check(F->n_1630)).line_);
}
F->m_1632 = (*(P112)rt_nil_check(F->m_1632)).mnext_;
}
L_end_1636: ;
}
F->n_1630 = (*(P169)rt_nil_check(F->n_1630)).next_;
}
L_end_1635: ;
ret_:

  return;
}

static void f_fits_735(struct f_greenc_1fr *up_, P112 y_731, P169 args_732, P117 want_733, int *ok_734) {
  struct f_fits_735fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_731 = y_731;
F->args_732 = args_732;
F->want_733 = want_733;
F->ok_734 = ok_734;
F->pm_1637 = NULL;
F->pm_1637 = (*(P112)rt_nil_check(F->y_731)).params_;
F->a_1638 = NULL;
F->t_1639 = NULL;
F->c_1640 = NULL;
F->v_1641 = NULL;
F->saved_1643 = NULL;
F->saved_1643 = F->up->code_131;
F->used_1644 = ((rt_int)0LL);
(*F->ok_734) = 1;
F->up->trial_150 = rt_add(F->up->trial_150, ((rt_int)1LL));
F->up->code_131 = f_new_buffer_223(F->up);
{
{ rt_frame xf1646;
if (RT_TRY(xf1646)) {
while (((*F->ok_734) && (F->pm_1637 != NULL))) {
F->a_1638 = f_actual_for_690(F->up, F->args_732, F->pm_1637, (*(P112)rt_nil_check(F->y_731)).params_);
if ((F->a_1638 == NULL)) {
(*F->ok_734) = ((*(P1194)rt_nil_check(F->pm_1637)).dflt_ != NULL);
} else {
F->used_1644 = rt_add(F->used_1644, ((rt_int)1LL));
if (((((*(P169)rt_nil_check(F->a_1638)).flag_ != ((rt_int)0LL)) && ((*(P169)rt_nil_check(F->a_1638)).flag_ != ((rt_int)4LL))) && ((*(P169)rt_nil_check(F->a_1638)).flag_ != (*(P1194)rt_nil_check(F->pm_1637)).mode_))) {
(*F->ok_734) = 0;
} else if (((*(P1194)rt_nil_check(F->pm_1637)).mode_ == ((rt_int)1LL))) {
f_gexpr_615(F->up, F->a_1638, (*(P1194)rt_nil_check(F->pm_1637)).t_, &F->t_1639, &F->v_1641);
(*F->ok_734) = (f_same_382(F->up, F->t_1639, (*(P1194)rt_nil_check(F->pm_1637)).t_) || (((*(P117)rt_nil_check(F->t_1639)).kind_ == ((rt_int)10LL)) && ((*(P117)rt_nil_check((*(P1194)rt_nil_check(F->pm_1637)).t_)).kind_ == ((rt_int)8LL))));
} else {
f_lvalue_577(F->up, F->a_1638, &F->v_1641, &F->t_1639, &F->c_1640, &F->ro_1642);
(*F->ok_734) = f_same_382(F->up, F->t_1639, (*(P1194)rt_nil_check(F->pm_1637)).t_);
}
}
F->pm_1637 = (*(P1194)rt_nil_check(F->pm_1637)).next_;
}
L_end_1648: ;
if ((F->used_1644 != f_list_len_273(F->up, F->args_732))) {
(*F->ok_734) = 0;
}
if ((((*F->ok_734) && (F->want_733 != NULL)) && ((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_731)).result_)).kind_ != ((rt_int)9LL)))) {
(*F->ok_734) = (f_same_382(F->up, (*(P112)rt_nil_check(F->y_731)).result_, F->want_733) || ((*(P117)rt_nil_check(F->want_733)).kind_ == ((rt_int)9LL)));
}
RT_POP(xf1646);
} else {
RT_POP(xf1646);
int x1647 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1647);
if (0 || x1647 == ex_compile_error_103) {
(*F->ok_734) = 0;
} else {
rt_raise(x1647);
}
}
}

}
L_end_1645: ;
F->up->trial_150 = rt_sub(F->up->trial_150, ((rt_int)1LL));
F->up->code_131 = F->saved_1643;
ret_:

  return;
}

static int f_is_builtin_737(struct f_greenc_1fr *up_, rstr n_736) {
  struct f_is_builtin_737fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_736 = rt_str_copy(n_736);
F->result_ = (((rt_str_eq(F->n_736, rt_str("PUT", 3)) || rt_str_eq(F->n_736, rt_str("GET", 3))) || rt_str_eq(F->n_736, rt_str("ABS", 3))) || rt_str_eq(F->n_736, rt_str("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_744(struct f_greenc_1fr *up_, rstr name_738, P169 args_739, int is_stmt_740, P117 want_741, rt_int line_742, P112 *y_743) {
  struct f_resolve_overload_744fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_738 = rt_str_copy(name_738);
F->args_739 = args_739;
F->is_stmt_740 = is_stmt_740;
F->want_741 = want_741;
F->line_742 = line_742;
F->y_743 = y_743;
F->z_1649 = NULL;
F->z_1649 = F->up->table_114.p[rt_index(f_hash_367(F->up, F->name_738), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
F->first_1650 = NULL;
F->n_1651 = ((rt_int)0LL);
{ rt_int lo1655 = ((rt_int)1LL), hi1656 = ((rt_int)2LL);
for (rt_int it1657 = lo1655; it1657 <= hi1656; it1657++) {
F->pass_1654 = it1657;
F->z_1649 = F->up->table_114.p[rt_index(f_hash_367(F->up, F->name_738), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
F->n_1651 = ((rt_int)0LL);
while ((F->z_1649 != NULL)) {
if ((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1649)).name_)), F->name_738) && (((*(P112)rt_nil_check(F->z_1649)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_1649)).kind_ == ((rt_int)4LL))))) {
F->n_1651 = rt_add(F->n_1651, ((rt_int)1LL));
if ((F->first_1650 == NULL)) {
F->first_1650 = F->z_1649;
}
if ((((*(P117)rt_nil_check((*(P112)rt_nil_check(F->z_1649)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_740)) {
if ((F->pass_1654 == ((rt_int)1LL))) {
f_fits_735(F->up, F->z_1649, F->args_739, F->want_741, &F->ok_1652);
} else {
f_fits_735(F->up, F->z_1649, F->args_739, NULL, &F->ok_1652);
}
if (F->ok_1652) {
(*F->y_743) = F->z_1649;
goto ret_;
}
}
}
F->z_1649 = (*(P112)rt_nil_check(F->z_1649)).chain_;
}
L_end_1658: ;
}
}
L_end_1653: ;
if (f_is_builtin_737(F->up, F->name_738)) {
(*F->y_743) = NULL;
goto ret_;
}
if ((F->n_1651 > ((rt_int)1LL))) {
f_fail_222(F->up, F->line_742, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_738), rt_str(" fits these actual parameters", 29)));
}
(*F->y_743) = F->first_1650;
ret_:

  return;
}

static void f_resolve_member_overload_752(struct f_greenc_1fr *up_, rstr p_745, rstr name_746, P169 args_747, int is_stmt_748, P117 want_749, rt_int line_750, P112 *y_751) {
  struct f_resolve_member_overload_752fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_745 = rt_str_copy(p_745);
F->name_746 = rt_str_copy(name_746);
F->args_747 = args_747;
F->is_stmt_748 = is_stmt_748;
F->want_749 = want_749;
F->line_750 = line_750;
F->y_751 = y_751;
F->pk_1659 = NULL;
F->pk_1659 = f_lookup_369(F->up, F->p_745);
F->z_1660 = NULL;
F->n_1661 = ((rt_int)0LL);
if ((F->pk_1659 == NULL)) {
goto ret_;
}
{ rt_int lo1665 = ((rt_int)1LL), hi1666 = ((rt_int)2LL);
for (rt_int it1667 = lo1665; it1667 <= hi1666; it1667++) {
F->pass_1664 = it1667;
F->z_1660 = (*(P112)rt_nil_check(F->pk_1659)).members_;
F->n_1661 = ((rt_int)0LL);
while ((F->z_1660 != NULL)) {
if (((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1660)).name_)), F->name_746) && (((*(P112)rt_nil_check(F->z_1660)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->z_1660)).kind_ == ((rt_int)4LL)))) && (!(*(P112)rt_nil_check(F->z_1660)).hidden_))) {
F->n_1661 = rt_add(F->n_1661, ((rt_int)1LL));
if ((((*(P117)rt_nil_check((*(P112)rt_nil_check(F->z_1660)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_748)) {
if ((F->pass_1664 == ((rt_int)1LL))) {
f_fits_735(F->up, F->z_1660, F->args_747, F->want_749, &F->ok_1662);
} else {
f_fits_735(F->up, F->z_1660, F->args_747, NULL, &F->ok_1662);
}
if (F->ok_1662) {
(*F->y_751) = F->z_1660;
goto ret_;
}
}
}
F->z_1660 = (*(P112)rt_nil_check(F->z_1660)).mnext_;
}
L_end_1668: ;
}
}
L_end_1663: ;
if ((F->n_1661 > ((rt_int)1LL))) {
f_fail_222(F->up, F->line_750, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_746), rt_str(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_758(struct f_greenc_1fr *up_, P169 e_753, P117 want_754, P117 *t_755, P135 *r_756, int *done_757) {
  struct f_user_operator_758fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_753 = e_753;
F->want_754 = want_754;
F->t_755 = t_755;
F->r_756 = r_756;
F->done_757 = done_757;
F->op_1669 = NULL;
F->op_1669 = (*(P169)rt_nil_check(F->e_753)).name_;
F->negate_1670 = 0;
F->y_1671 = NULL;
F->call_1672 = NULL;
F->fname_1673 = NULL;
F->l_1674 = NULL;
F->rt_1675 = NULL;
(*F->done_757) = 0;
if (rt_str_eq((*(P135)rt_nil_check(F->op_1669)), rt_str("/=", 2))) {
F->op_1669 = f_mk_201(F->up, rt_str("=", 1));
F->negate_1670 = 1;
}
if ((f_lookup_369(F->up, (*(P135)rt_nil_check(F->op_1669))) == NULL)) {
goto ret_;
}
F->l_1674 = f_nn_267(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_753)).a_)).kind_, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_753)).a_)).line_);
as_R170(&(*(P169)rt_nil_check(F->l_1674)), (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_753)).a_)));
(*(P169)rt_nil_check(F->l_1674)).next_ = NULL;
(*(P169)rt_nil_check(F->l_1674)).formal_ = NULL;
(*(P169)rt_nil_check(F->l_1674)).flag_ = ((rt_int)0LL);
if (((*(P169)rt_nil_check(F->e_753)).kind_ == ((rt_int)7LL))) {
F->rt_1675 = f_nn_267(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_753)).b_)).kind_, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_753)).b_)).line_);
as_R170(&(*(P169)rt_nil_check(F->rt_1675)), (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_753)).b_)));
(*(P169)rt_nil_check(F->rt_1675)).next_ = NULL;
(*(P169)rt_nil_check(F->rt_1675)).formal_ = NULL;
(*(P169)rt_nil_check(F->rt_1675)).flag_ = ((rt_int)0LL);
(*(P169)rt_nil_check(F->l_1674)).next_ = F->rt_1675;
}
F->y_1671 = F->up->table_114.p[rt_index(f_hash_367(F->up, (*(P135)rt_nil_check(F->op_1669))), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while ((F->y_1671 != NULL)) {
if ((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1671)).name_)), (*(P135)rt_nil_check(F->op_1669))) && ((*(P112)rt_nil_check(F->y_1671)).kind_ == ((rt_int)3LL)))) {
f_fits_735(F->up, F->y_1671, F->l_1674, NULL, &F->ok_1676);
if (F->ok_1676) {
F->fname_1673 = f_nn_267(F->up, ((rt_int)5LL), (*(P169)rt_nil_check(F->e_753)).line_);
(*(P169)rt_nil_check(F->fname_1673)).name_ = F->op_1669;
F->call_1672 = f_nn_267(F->up, ((rt_int)8LL), (*(P169)rt_nil_check(F->e_753)).line_);
(*(P169)rt_nil_check(F->call_1672)).a_ = F->fname_1673;
(*(P169)rt_nil_check(F->call_1672)).b_ = F->l_1674;
F->up->call_want_189 = NULL;
f_gcall_with_700(F->up, F->call_1672, F->y_1671, &(*F->t_755), &(*F->r_756));
if (F->negate_1670) {
(*F->r_756) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P135)rt_nil_check((*F->r_756)))), 41));
}
(*F->done_757) = 1;
goto ret_;
}
}
F->y_1671 = (*(P112)rt_nil_check(F->y_1671)).chain_;
}
L_end_1677: ;
ret_:

  return;
}

static void f_task_p_760(struct f_greenc_1fr *up_, P169 *res_759) {
  struct f_task_p_760fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_759 = res_759;
F->x_1678 = NULL;
F->line_1679 = f_cur_line_274(F->up);
f_expect_kw_289(F->up, rt_str("TASK", 4));
if (f_at_kw_276(F->up, rt_str("BODY", 4))) {
f_skip_287(F->up);
F->x_1678 = f_nn_267(F->up, ((rt_int)51LL), F->line_1679);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1678)).name_);
f_expect_kw_289(F->up, rt_str("IS", 2));
f_body_part_346(F->up, F->x_1678);
} else {
F->x_1678 = f_nn_267(F->up, ((rt_int)50LL), F->line_1679);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1678)).name_);
if (((f_at_kw_276(F->up, rt_str("IS", 2)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_893(F->up, F->x_1678, &(*F->res_759));
goto ret_;
}
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("RANGE", 5)))) {
f_subtype_ind_322(F->up, &(*(P169)rt_nil_check(F->x_1678)).a_);
} else {
(*(P169)rt_nil_check(F->x_1678)).a_ = f_nn_267(F->up, ((rt_int)14LL), F->line_1679);
f_simple_expr_310(F->up, &(*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_1678)).a_)).a_);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_1678)).a_)).b_);
}
f_expect_op_291(F->up, rt_str(")", 1));
}
if (f_at_kw_276(F->up, rt_str("IS", 2))) {
f_skip_287(F->up);
f_decl_part_334(F->up, &(*(P169)rt_nil_check(F->x_1678)).c_);
if (f_at_kw_276(F->up, rt_str("PRIVATE", 7))) {
f_skip_287(F->up);
f_decl_part_334(F->up, &(*(P169)rt_nil_check(F->x_1678)).d_);
}
f_expect_kw_289(F->up, rt_str("END", 3));
}
}
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
f_skip_287(F->up);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_759) = F->x_1678;
ret_:

  return;
}

static void f_entry_p_762(struct f_greenc_1fr *up_, P169 *res_761) {
  struct f_entry_p_762fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_761 = res_761;
F->x_1680 = NULL;
f_expect_kw_289(F->up, rt_str("ENTRY", 5));
F->x_1680 = f_nn_267(F->up, ((rt_int)52LL), f_cur_line_274(F->up));
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1680)).name_);
if ((f_at_op_278(F->up, rt_str("(", 1)) && (!((f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_284(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_284(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_287(F->up);
if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(")", 1)))) {
f_subtype_ind_322(F->up, &(*(P169)rt_nil_check(F->x_1680)).b_);
} else {
(*(P169)rt_nil_check(F->x_1680)).b_ = f_nn_267(F->up, ((rt_int)14LL), f_cur_line_274(F->up));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_1680)).b_)).a_);
f_expect_op_291(F->up, rt_str("..", 2));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_1680)).b_)).b_);
}
f_expect_op_291(F->up, rt_str(")", 1));
}
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_formal_part_340(F->up, &(*(P169)rt_nil_check(F->x_1680)).a_);
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_761) = F->x_1680;
ret_:

  return;
}

static void f_accept_p_764(struct f_greenc_1fr *up_, P169 *res_763) {
  struct f_accept_p_764fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_763 = res_763;
F->x_1681 = NULL;
f_expect_kw_289(F->up, rt_str("ACCEPT", 6));
F->x_1681 = f_nn_267(F->up, ((rt_int)34LL), f_cur_line_274(F->up));
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->x_1681)).name_);
if ((f_at_op_278(F->up, rt_str("(", 1)) && (!((f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_284(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_284(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_287(F->up);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->x_1681)).c_);
f_expect_op_291(F->up, rt_str(")", 1));
}
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_formal_part_340(F->up, &(*(P169)rt_nil_check(F->x_1681)).a_);
}
if (f_at_kw_276(F->up, rt_str("DO", 2))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1681)).flag_ = ((rt_int)1LL);
f_statements_353(F->up, &(*(P169)rt_nil_check(F->x_1681)).b_);
f_expect_kw_289(F->up, rt_str("END", 3));
if (f_at_kind_280(F->up, ((rt_int)1LL))) {
f_skip_287(F->up);
}
}
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_763) = F->x_1681;
ret_:

  return;
}

static void f_delay_p_766(struct f_greenc_1fr *up_, P169 *res_765) {
  struct f_delay_p_766fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_765 = res_765;
F->x_1682 = NULL;
f_expect_kw_289(F->up, rt_str("DELAY", 5));
F->x_1682 = f_nn_267(F->up, ((rt_int)32LL), f_cur_line_274(F->up));
f_simple_expr_310(F->up, &(*(P169)rt_nil_check(F->x_1682)).a_);
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_765) = F->x_1682;
ret_:

  return;
}

static void f_designators_768(struct f_greenc_1fr *up_, P169 *res_767) {
  struct f_designators_768fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_767 = res_767;
F->head_1683 = NULL;
F->tail_1684 = NULL;
F->n_1685 = NULL;
for (;;) {
f_name_p_320(F->up, &F->n_1685);
f_append_271(F->up, &F->head_1683, &F->tail_1684, F->n_1685);
if ((!f_at_op_278(F->up, rt_str(",", 1)))) {
goto L_end_1686;
}
f_skip_287(F->up);
}
L_end_1686: ;
f_expect_op_291(F->up, rt_str(";", 1));
(*F->res_767) = F->head_1683;
ret_:

  return;
}

static void f_parse_task_statement_770(struct f_greenc_1fr *up_, P169 *res_769) {
  struct f_parse_task_statement_770fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_769 = res_769;
F->x_1687 = NULL;
F->alt_1688 = NULL;
F->head_1689 = NULL;
F->tail_1690 = NULL;
F->line_1691 = f_cur_line_274(F->up);
(*F->res_769) = NULL;
if (f_at_kw_276(F->up, rt_str("INITIATE", 8))) {
f_skip_287(F->up);
F->x_1687 = f_nn_267(F->up, ((rt_int)33LL), F->line_1691);
f_designators_768(F->up, &(*(P169)rt_nil_check(F->x_1687)).a_);
(*F->res_769) = F->x_1687;
} else if (f_at_kw_276(F->up, rt_str("ABORT", 5))) {
f_skip_287(F->up);
F->x_1687 = f_nn_267(F->up, ((rt_int)36LL), F->line_1691);
f_designators_768(F->up, &(*(P169)rt_nil_check(F->x_1687)).a_);
(*F->res_769) = F->x_1687;
} else if (f_at_kw_276(F->up, rt_str("DELAY", 5))) {
f_delay_p_766(F->up, &(*F->res_769));
} else if (f_at_kw_276(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_764(F->up, &(*F->res_769));
} else if (f_at_kw_276(F->up, rt_str("SELECT", 6))) {
f_skip_287(F->up);
F->x_1687 = f_nn_267(F->up, ((rt_int)35LL), F->line_1691);
for (;;) {
F->alt_1688 = f_nn_267(F->up, ((rt_int)64LL), f_cur_line_274(F->up));
if (f_at_kw_276(F->up, rt_str("WHEN", 4))) {
f_skip_287(F->up);
f_expr_304(F->up, &(*(P169)rt_nil_check(F->alt_1688)).a_);
f_expect_op_291(F->up, rt_str("=>", 2));
}
if (f_at_kw_276(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_764(F->up, &(*(P169)rt_nil_check(F->alt_1688)).b_);
} else if (f_at_kw_276(F->up, rt_str("DELAY", 5))) {
f_delay_p_766(F->up, &(*(P169)rt_nil_check(F->alt_1688)).b_);
} else {
f_perror_286(F->up, rt_str("a select alternative starts with accept or delay", 48));
}
f_statements_353(F->up, &(*(P169)rt_nil_check(F->alt_1688)).c_);
f_append_271(F->up, &F->head_1689, &F->tail_1690, F->alt_1688);
if ((!f_at_kw_276(F->up, rt_str("OR", 2)))) {
goto L_end_1692;
}
f_skip_287(F->up);
}
L_end_1692: ;
if (f_at_kw_276(F->up, rt_str("ELSE", 4))) {
f_skip_287(F->up);
(*(P169)rt_nil_check(F->x_1687)).flag_ = ((rt_int)1LL);
f_statements_353(F->up, &(*(P169)rt_nil_check(F->x_1687)).b_);
}
f_expect_kw_289(F->up, rt_str("END", 3));
f_expect_kw_289(F->up, rt_str("SELECT", 6));
f_expect_op_291(F->up, rt_str(";", 1));
(*(P169)rt_nil_check(F->x_1687)).a_ = F->head_1689;
(*F->res_769) = F->x_1687;
}
ret_:

  return;
}

static void f_path_at_774(struct f_greenc_1fr *up_, rt_int level_771, rstr field_772, P135 *r_773) {
  struct f_path_at_774fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_771 = level_771;
F->field_772 = rt_str_copy(field_772);
F->r_773 = r_773;
if ((F->level_771 <= ((rt_int)0LL))) {
(*F->r_773) = f_mk_201(F->up, F->field_772);
goto ret_;
}
(*F->r_773) = f_mk_201(F->up, rt_str("F", 1));
{ rt_int lo1695 = ((rt_int)1LL), hi1696 = rt_sub(F->up->cur_level_134, F->level_771);
for (rt_int it1697 = lo1695; it1697 <= hi1696; it1697++) {
F->i_1694 = it1697;
(*F->r_773) = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*F->r_773))), rt_str("->up", 4)));
}
}
L_end_1693: ;
(*F->r_773) = f_mk_201(F->up, rt_str_cat(rt_str_cat((*(P135)rt_nil_check((*F->r_773))), rt_str("->", 2)), F->field_772));
ret_:

  return;
}

static int f_is_task_name_776(struct f_greenc_1fr *up_, rstr n_775) {
  struct f_is_task_name_776fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_775 = rt_str_copy(n_775);
F->y_1698 = NULL;
F->y_1698 = f_lookup_369(F->up, F->n_775);
F->result_ = ((F->y_1698 != NULL) && ((*(P112)rt_nil_check(F->y_1698)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_780(struct f_greenc_1fr *up_, P169 e_777, P112 *y_778, P169 *ix_779) {
  struct f_task_of_780fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_777 = e_777;
F->y_778 = y_778;
F->ix_779 = ix_779;
F->n_1699 = NULL;
F->n_1699 = F->e_777;
(*F->ix_779) = NULL;
if (((*(P169)rt_nil_check(F->e_777)).kind_ == ((rt_int)8LL))) {
F->n_1699 = (*(P169)rt_nil_check(F->e_777)).a_;
(*F->ix_779) = (*(P169)rt_nil_check(F->e_777)).b_;
}
if (((*(P169)rt_nil_check(F->n_1699)).kind_ != ((rt_int)5LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_777)).line_, rt_str("a task name is required", 23));
}
(*F->y_778) = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1699)).name_)));
if ((((*F->y_778) == NULL) || ((*(P112)rt_nil_check((*F->y_778))).kind_ != ((rt_int)9LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_777)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1699)).name_)), rt_str(" is not a task", 14)));
}
if ((((*F->ix_779) != NULL) && ((*(P112)rt_nil_check((*F->y_778))).c_ == NULL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_777)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1699)).name_)), rt_str(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_782(struct f_greenc_1fr *up_, P135 *r_781) {
  struct f_own_index_782fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_781 = r_781;
F->y_1700 = NULL;
F->y_1700 = f_lookup_369(F->up, rt_str("INDEX_", 6));
if ((F->y_1700 == NULL)) {
f_fail_222(F->up, ((rt_int)0LL), rt_str("not inside the body of a task family", 36));
}
f_access_of_560(F->up, F->y_1700, &(*F->r_781));
ret_:

  return;
}

static void f_member_787(struct f_greenc_1fr *up_, P112 y_783, rstr arr_784, rstr i_785, P135 *r_786) {
  struct f_member_787fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_783 = y_783;
F->arr_784 = rt_str_copy(arr_784);
F->i_785 = rt_str_copy(i_785);
F->r_786 = r_786;
F->lo_1701 = NULL;
F->hi_1702 = NULL;
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_783)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_783)).cname_)), rt_str("lo", 2)), &F->lo_1701);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_783)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_783)).cname_)), rt_str("hi", 2)), &F->hi_1702);
(*F->r_786) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->arr_784, rt_str("[rt_index(", 10)), F->i_785), rt_str(", ", 2)), (*(P135)rt_nil_check(F->lo_1701))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->hi_1702))), rt_str(") - ", 4)), (*(P135)rt_nil_check(F->lo_1701))), 93));
ret_:

  return;
}

static void f_act_path_790(struct f_greenc_1fr *up_, P112 y_788, P135 *r_789) {
  struct f_act_path_790fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_788 = y_788;
F->r_789 = r_789;
F->i_1703 = NULL;
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_788)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_788)).cname_)), rt_str("act", 3)), &(*F->r_789));
if (((*(P112)rt_nil_check(F->y_788)).c_ != NULL)) {
f_own_index_782(F->up, &F->i_1703);
f_member_787(F->up, F->y_788, (*(P135)rt_nil_check((*F->r_789))), (*(P135)rt_nil_check(F->i_1703)), &(*F->r_789));
}
ret_:

  return;
}

static void f_act_path_i_794(struct f_greenc_1fr *up_, P112 y_791, rstr i_792, P135 *r_793) {
  struct f_act_path_i_794fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_791 = y_791;
F->i_792 = rt_str_copy(i_792);
F->r_793 = r_793;
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_791)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_791)).cname_)), rt_str("act", 3)), &(*F->r_793));
f_member_787(F->up, F->y_791, (*(P135)rt_nil_check((*F->r_793))), F->i_792, &(*F->r_793));
ret_:

  return;
}

static void f_entry_path_798(struct f_greenc_1fr *up_, P112 y_795, rstr i_796, P135 *r_797) {
  struct f_entry_path_798fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_795 = y_795;
F->i_796 = rt_str_copy(i_796);
F->r_797 = r_797;
F->own_1704 = NULL;
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_795)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_795)).access_path_)), &(*F->r_797));
if (((((*(P112)rt_nil_check(F->y_795)).members_ != NULL) && ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_795)).members_)).c_ != NULL)) && (!(*(P112)rt_nil_check(F->y_795)).ro_))) {
if (((F->i_796).len == ((rt_int)0LL))) {
f_own_index_782(F->up, &F->own_1704);
f_member_787(F->up, (*(P112)rt_nil_check(F->y_795)).members_, (*(P135)rt_nil_check((*F->r_797))), (*(P135)rt_nil_check(F->own_1704)), &(*F->r_797));
} else {
f_member_787(F->up, (*(P112)rt_nil_check(F->y_795)).members_, (*(P135)rt_nil_check((*F->r_797))), F->i_796, &(*F->r_797));
}
}
ret_:

  return;
}

static void f_declare_slot_801(struct f_greenc_1fr *up_, rstr ctype_name_799, rstr field_800) {
  struct f_declare_slot_801fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_799 = rt_str_copy(ctype_name_799);
F->field_800 = rt_str_copy(field_800);
if (F->up->in_func_133) {
f_put_to_226(F->up, F->up->fields_buf_132, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, F->ctype_name_799), 32), F->field_800), 59));
} else {
f_put_to_226(F->up, F->up->out_globals_127, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), F->ctype_name_799), 32), F->field_800), 59));
}
ret_:

  return;
}

static void f_task_decl_803(struct f_greenc_1fr *up_, P169 e_802) {
  struct f_task_decl_803fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_802 = e_802;
if (((*(P169)rt_nil_check(F->e_802)).kind_ == ((rt_int)50LL))) {
f_task_spec_815(F->up, F->e_802);
} else if (((*(P169)rt_nil_check(F->e_802)).kind_ == ((rt_int)51LL))) {
f_task_body_819(F->up, F->e_802);
} else if (((*(P169)rt_nil_check(F->e_802)).kind_ == ((rt_int)52LL))) {
f_entry_decl_817(F->up, F->e_802);
} else {
f_generic_decl_895(F->up, F->e_802);
}
ret_:

  return;
}

static void f_family_arg_struct_804(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_804fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_178)) {
F->up->famarg_done_178 = 1;
f_put_to_226(F->up, F->up->out_types_123, rt_str("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_808(struct f_greenc_1fr *up_, P169 b_805, P112 y_806, P135 x_807) {
  struct f_family_bounds_808fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_805 = b_805;
F->y_806 = y_806;
F->x_807 = x_807;
F->lo_1705 = NULL;
F->hi_1706 = NULL;
F->v_1707 = NULL;
F->vt_1708 = NULL;
F->c_1709 = NULL;
(*(P112)rt_nil_check(F->y_806)).c_ = f_new_cons_405(F->up);
f_declare_slot_801(F->up, rt_str("rt_entry *", 10), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_806)).access_path_)));
f_declare_slot_801(F->up, rt_str("rt_int", 6), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_806)).cname_)), rt_str("flo", 3)));
f_declare_slot_801(F->up, rt_str("rt_int", 6), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_806)).cname_)), rt_str("fhi", 3)));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_806)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_806)).cname_)), rt_str("flo", 3)), &F->lo_1705);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_806)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_806)).cname_)), rt_str("fhi", 3)), &F->hi_1706);
if (((*(P169)rt_nil_check(F->b_805)).kind_ == ((rt_int)14LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->b_805)).a_, NULL, &F->vt_1708, &F->v_1707);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->lo_1705)), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->v_1707))), 59));
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->b_805)).b_, F->vt_1708, &F->vt_1708, &F->v_1707);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->hi_1706)), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->v_1707))), 59));
} else {
f_resolve_432(F->up, F->b_805, &F->vt_1708, &F->c_1709);
if (((*(P173)rt_nil_check(F->c_1709)).lo_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->b_805)).line_, rt_str("an entry family needs a discrete range", 38));
}
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->lo_1705)), rt_str(" = ", 3)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1709)).lo_))), rt_str("; ", 2)), (*(P135)rt_nil_check(F->hi_1706))), rt_str(" = ", 3)), (*(P135)rt_nil_check((*(P173)rt_nil_check(F->c_1709)).hi_))), 59));
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->x_807)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P135)rt_nil_check(F->hi_1706))), rt_str(" >= ", 4)), (*(P135)rt_nil_check(F->lo_1705))), rt_str(" \? ", 3)), (*(P135)rt_nil_check(F->hi_1706))), rt_str(" - ", 3)), (*(P135)rt_nil_check(F->lo_1705))), rt_str(" + 1 : 1));", 11)));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P135)rt_nil_check(F->hi_1706))), rt_str(" - ", 3)), (*(P135)rt_nil_check(F->lo_1705))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P135)rt_nil_check(F->x_807))), rt_str("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_813(struct f_greenc_1fr *up_, P112 y_809, rstr base_810, rstr i_811, P135 *r_812) {
  struct f_entry_family_slot_813fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_809 = y_809;
F->base_810 = rt_str_copy(base_810);
F->i_811 = rt_str_copy(i_811);
F->r_812 = r_812;
F->lo_1710 = NULL;
F->hi_1711 = NULL;
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_809)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_809)).cname_)), rt_str("flo", 3)), &F->lo_1710);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_809)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_809)).cname_)), rt_str("fhi", 3)), &F->hi_1711);
(*F->r_812) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_810, rt_str("[rt_index(", 10)), F->i_811), rt_str(", ", 2)), (*(P135)rt_nil_check(F->lo_1710))), rt_str(", ", 2)), (*(P135)rt_nil_check(F->hi_1711))), rt_str(") - ", 4)), (*(P135)rt_nil_check(F->lo_1710))), 93));
ret_:

  return;
}

static void f_task_spec_815(struct f_greenc_1fr *up_, P169 e_814) {
  struct f_task_spec_815fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_814 = e_814;
F->has_procs_1712 = 0;
F->fields_1714 = NULL;
F->ct_1715 = NULL;
F->pm_1716 = NULL;
F->fp_1717 = NULL;
F->flo_1718 = NULL;
F->fhi_1719 = NULL;
F->y_1720 = NULL;
F->m_1721 = NULL;
F->z_1722 = NULL;
F->saved_1723 = NULL;
F->saved_1723 = F->up->cur_task_176;
F->d_1724 = NULL;
F->v_1725 = NULL;
F->p_1726 = NULL;
F->p2_1727 = NULL;
F->vt_1728 = NULL;
F->r_1729 = NULL;
F->y_1720 = f_new_sym_402(F->up, ((rt_int)9LL), (*(P169)rt_nil_check(F->e_814)).name_);
f_new_name_204(F->up, rt_str_catc(rt_str_cat(rt_str("t_", 2), f_lower_s_212(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_814)).name_)))), 95), &(*(P112)rt_nil_check(F->y_1720)).cname_);
(*(P112)rt_nil_check(F->y_1720)).decl_ = F->e_814;
if (F->up->in_func_133) {
(*(P112)rt_nil_check(F->y_1720)).level_ = F->up->cur_level_134;
}
(*(P112)rt_nil_check(F->y_1720)).access_path_ = (*(P112)rt_nil_check(F->y_1720)).cname_;
f_declare_slot_801(F->up, rt_str("rt_taskdecl", 11), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("decl", 4)));
if (((*(P169)rt_nil_check(F->e_814)).a_ != NULL)) {
F->r_1729 = (*(P169)rt_nil_check(F->e_814)).a_;
if (((*(P169)rt_nil_check(F->r_1729)).kind_ == ((rt_int)80LL))) {
F->r_1729 = (*(P169)rt_nil_check(F->r_1729)).a_;
}
(*(P112)rt_nil_check(F->y_1720)).c_ = f_new_cons_405(F->up);
f_declare_slot_801(F->up, rt_str("rt_act *", 8), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("act", 3)));
f_declare_slot_801(F->up, rt_str("rt_int", 6), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("lo", 2)));
f_declare_slot_801(F->up, rt_str("rt_int", 6), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("hi", 2)));
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_1729)).a_, F->up->ty_int_151, &F->vt_1728, &F->v_1725);
(*(P112)rt_nil_check(F->y_1720)).t_ = F->vt_1728;
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1720)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("lo", 2)), &F->p_1726);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->p_1726)), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->v_1725))), 59));
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->r_1729)).b_, F->up->ty_int_151, &F->vt_1728, &F->v_1725);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1720)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("hi", 2)), &F->p2_1727);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->p2_1727)), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->v_1725))), 59));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1720)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("act", 3)), &F->v_1725);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->v_1725)), rt_str(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P135)rt_nil_check(F->p2_1727))), rt_str(" >= ", 4)), (*(P135)rt_nil_check(F->p_1726))), rt_str(" \? ", 3)), (*(P135)rt_nil_check(F->p2_1727))), rt_str(" - ", 3)), (*(P135)rt_nil_check(F->p_1726))), rt_str(" + 1 : 1));", 11)));
f_family_arg_struct_804(F->up);
} else {
f_declare_slot_801(F->up, rt_str("rt_act", 6), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("act", 3)));
}
f_put_to_226(F->up, F->up->out_protos_126, rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_))), rt_str("run(void *a);", 13)));
if ((!F->up->in_func_133)) {
f_put_to_226(F->up, F->up->out_awaits_183, rt_str_cat(rt_str_cat(rt_str("  rt_await_decl(&", 17), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_))), rt_str("decl);", 6)));
}
f_open_scope_398(F->up);
F->up->cur_task_176 = F->y_1720;
F->saved_defer_1713 = F->up->defer_entry_structs_182;
F->up->defer_entry_structs_182 = 1;
f_decl_elements_507(F->up, (*(P169)rt_nil_check(F->e_814)).c_);
f_decl_elements_507(F->up, (*(P169)rt_nil_check(F->e_814)).d_);
F->up->defer_entry_structs_182 = F->saved_defer_1713;
F->m_1721 = F->up->scope_stack_116;
while (((F->m_1721 != NULL) && ((*(P112)rt_nil_check(F->m_1721)).depth_ == F->up->depth_115))) {
if ((((*(P112)rt_nil_check(F->m_1721)).kind_ == ((rt_int)10LL)) && (!(*(P112)rt_nil_check(F->m_1721)).from_use_))) {
F->fields_1714 = f_mk_201(F->up, rt_str(" int dummy_;", 12));
F->pm_1716 = (*(P112)rt_nil_check(F->m_1721)).params_;
while ((F->pm_1716 != NULL)) {
f_ctype_416(F->up, (*(P1194)rt_nil_check(F->pm_1716)).t_, &F->ct_1715);
if (((*(P1194)rt_nil_check(F->pm_1716)).mode_ == ((rt_int)1LL))) {
F->fields_1714 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->fields_1714)), 32), (*(P135)rt_nil_check(F->ct_1715))), 32), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1716)).cfield_))), 59));
} else {
F->fields_1714 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->fields_1714)), 32), (*(P135)rt_nil_check(F->ct_1715))), rt_str(" *", 2)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1716)).cfield_))), 59));
}
F->pm_1716 = (*(P1194)rt_nil_check(F->pm_1716)).next_;
}
L_end_1731: ;
f_put_to_226(F->up, F->up->out_types_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1721)).cname_))), rt_str("p {", 3)), (*(P135)rt_nil_check(F->fields_1714))), rt_str(" };", 3)));
}
F->m_1721 = (*(P112)rt_nil_check(F->m_1721)).stack_;
}
L_end_1730: ;
F->m_1721 = F->up->scope_stack_116;
while (((F->m_1721 != NULL) && ((*(P112)rt_nil_check(F->m_1721)).depth_ == F->up->depth_115))) {
if (((((*(P112)rt_nil_check(F->m_1721)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->m_1721)).kind_ == ((rt_int)4LL))) && (!(*(P112)rt_nil_check(F->m_1721)).from_use_))) {
if (((!F->has_procs_1712) && ((*(P112)rt_nil_check(F->y_1720)).c_ != NULL))) {
f_declare_slot_801(F->up, rt_str("void **", 7), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("frames", 6)));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1720)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("frames", 6)), &F->fp_1717);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1720)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("lo", 2)), &F->flo_1718);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1720)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("hi", 2)), &F->fhi_1719);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->fp_1717)), rt_str(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P135)rt_nil_check(F->fhi_1719))), rt_str(" >= ", 4)), (*(P135)rt_nil_check(F->flo_1718))), rt_str(" \? ", 3)), (*(P135)rt_nil_check(F->fhi_1719))), rt_str(" - ", 3)), (*(P135)rt_nil_check(F->flo_1718))), rt_str(" + 1 : 1));", 11)));
F->has_procs_1712 = 1;
} else if ((!F->has_procs_1712)) {
f_declare_slot_801(F->up, rt_str("void *", 6), rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("frame", 5)));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1720)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("frame", 5)), &F->fp_1717);
f_emit_228(F->up, rt_str_cat((*(P135)rt_nil_check(F->fp_1717)), rt_str(" = NULL;", 8)));
F->has_procs_1712 = 1;
}
if (((*(P112)rt_nil_check(F->y_1720)).c_ != NULL)) {
(*(P112)rt_nil_check(F->m_1721)).access_path_ = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("frames", 6)));
} else {
(*(P112)rt_nil_check(F->m_1721)).access_path_ = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1720)).cname_)), rt_str("frame", 5)));
}
(*(P112)rt_nil_check(F->m_1721)).members_ = F->y_1720;
}
f_copy_sym_718(F->up, F->m_1721, &F->z_1722);
(*(P112)rt_nil_check(F->z_1722)).hidden_ = (*(P112)rt_nil_check(F->m_1721)).from_use_;
(*(P112)rt_nil_check(F->z_1722)).mnext_ = (*(P112)rt_nil_check(F->y_1720)).members_;
(*(P112)rt_nil_check(F->y_1720)).members_ = F->z_1722;
F->m_1721 = (*(P112)rt_nil_check(F->m_1721)).stack_;
}
L_end_1732: ;
f_close_scope_399(F->up);
F->up->cur_task_176 = F->saved_1723;
f_define_397(F->up, F->y_1720, (*(P169)rt_nil_check(F->e_814)).line_);
ret_:

  return;
}

static void f_entry_decl_817(struct f_greenc_1fr *up_, P169 e_816) {
  struct f_entry_decl_817fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_816 = e_816;
F->y_1733 = NULL;
F->p_1734 = NULL;
F->p_1734 = (*(P169)rt_nil_check(F->e_816)).a_;
F->pm_1735 = NULL;
F->tail_1736 = NULL;
F->fields_1737 = NULL;
F->ct_1738 = NULL;
F->x_1739 = NULL;
F->lo_1740 = NULL;
F->hi_1741 = NULL;
if ((F->up->cur_task_176 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_816)).line_, rt_str("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_1733 = f_new_sym_402(F->up, ((rt_int)10LL), (*(P169)rt_nil_check(F->e_816)).name_);
f_new_name_204(F->up, rt_str_catc(rt_str_cat(rt_str("e_", 2), f_lower_s_212(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_816)).name_)))), 95), &(*(P112)rt_nil_check(F->y_1733)).cname_);
F->fields_1737 = f_mk_201(F->up, rt_str(" int dummy_;", 12));
while ((F->p_1734 != NULL)) {
F->pm_1735 = ({ R1195 *cell1743 = rt_alloc(sizeof(R1195)); *cell1743 = cp_R1195(({ R1195 ag1744; ag1744.name_ = (*(P169)rt_nil_check(F->p_1734)).name_; ag1744.mode_ = (*(P169)rt_nil_check(F->p_1734)).ival_; ag1744.t_ = NULL; ag1744.c_ = NULL; ag1744.cfield_ = NULL; ag1744.dflt_ = NULL; ag1744.next_ = NULL; ag1744; })); (P1194)cell1743; });
f_resolve_432(F->up, (*(P169)rt_nil_check(F->p_1734)).a_, &(*(P1194)rt_nil_check(F->pm_1735)).t_, &(*(P1194)rt_nil_check(F->pm_1735)).c_);
(*(P1194)rt_nil_check(F->pm_1735)).cfield_ = f_mk_201(F->up, f_c_field_218(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_1734)).name_))));
f_ctype_416(F->up, (*(P1194)rt_nil_check(F->pm_1735)).t_, &F->ct_1738);
if (((*(P1194)rt_nil_check(F->pm_1735)).mode_ == ((rt_int)1LL))) {
F->fields_1737 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->fields_1737)), 32), (*(P135)rt_nil_check(F->ct_1738))), 32), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1735)).cfield_))), 59));
} else {
F->fields_1737 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->fields_1737)), 32), (*(P135)rt_nil_check(F->ct_1738))), rt_str(" *", 2)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1735)).cfield_))), 59));
}
if ((F->tail_1736 == NULL)) {
(*(P112)rt_nil_check(F->y_1733)).params_ = F->pm_1735;
} else {
(*(P1194)rt_nil_check(F->tail_1736)).next_ = F->pm_1735;
}
F->tail_1736 = F->pm_1735;
F->p_1734 = (*(P169)rt_nil_check(F->p_1734)).next_;
}
L_end_1742: ;
if ((!F->up->defer_entry_structs_182)) {
f_put_to_226(F->up, F->up->out_types_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1733)).cname_))), rt_str("p {", 3)), (*(P135)rt_nil_check(F->fields_1737))), rt_str(" };", 3)));
}
(*(P112)rt_nil_check(F->y_1733)).result_ = F->up->ty_void_156;
(*(P112)rt_nil_check(F->y_1733)).decl_ = F->e_816;
(*(P112)rt_nil_check(F->y_1733)).members_ = F->up->cur_task_176;
if (F->up->in_func_133) {
(*(P112)rt_nil_check(F->y_1733)).level_ = F->up->cur_level_134;
}
(*(P112)rt_nil_check(F->y_1733)).access_path_ = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1733)).cname_)), rt_str("ent", 3)));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1733)).level_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1733)).access_path_)), &F->x_1739);
(*(P112)rt_nil_check(F->y_1733)).ro_ = ((((*(P112)rt_nil_check(F->up->cur_task_176)).c_ != NULL) && F->up->in_func_133) && (F->up->cur_level_134 > (*(P112)rt_nil_check(F->up->cur_task_176)).level_));
if (((*(P169)rt_nil_check(F->e_816)).b_ != NULL)) {
if ((((*(P112)rt_nil_check(F->up->cur_task_176)).c_ != NULL) && (!(*(P112)rt_nil_check(F->y_1733)).ro_))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_816)).line_, rt_str("an entry family in a task family is not handled", 47));
}
f_family_bounds_808(F->up, (*(P169)rt_nil_check(F->e_816)).b_, F->y_1733, F->x_1739);
} else if ((((*(P112)rt_nil_check(F->up->cur_task_176)).c_ != NULL) && (!(*(P112)rt_nil_check(F->y_1733)).ro_))) {
f_declare_slot_801(F->up, rt_str("rt_entry *", 10), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1733)).access_path_)));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->up->cur_task_176)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->cur_task_176)).cname_)), rt_str("lo", 2)), &F->lo_1740);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->up->cur_task_176)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->cur_task_176)).cname_)), rt_str("hi", 2)), &F->hi_1741);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->x_1739)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P135)rt_nil_check(F->hi_1741))), rt_str(" >= ", 4)), (*(P135)rt_nil_check(F->lo_1740))), rt_str(" \? ", 3)), (*(P135)rt_nil_check(F->hi_1741))), rt_str(" - ", 3)), (*(P135)rt_nil_check(F->lo_1740))), rt_str(" + 1 : 1));", 11)));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P135)rt_nil_check(F->hi_1741))), rt_str(" - ", 3)), (*(P135)rt_nil_check(F->lo_1740))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P135)rt_nil_check(F->x_1739))), rt_str("[k_]);", 6)));
} else {
f_declare_slot_801(F->up, rt_str("rt_entry", 8), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1733)).access_path_)));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("rt_entry_init(&", 15), (*(P135)rt_nil_check(F->x_1739))), rt_str(");", 2)));
}
f_define_397(F->up, F->y_1733, (*(P169)rt_nil_check(F->e_816)).line_);
ret_:

  return;
}

static void f_task_body_819(struct f_greenc_1fr *up_, P169 e_818) {
  struct f_task_body_819fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_818 = e_818;
F->y_1745 = NULL;
F->y_1745 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_818)).name_)));
F->b_1746 = NULL;
F->m_1747 = NULL;
F->z_1748 = NULL;
F->upp_1749 = NULL;
F->saved_1750 = NULL;
F->saved_1750 = F->up->cur_task_176;
if (((F->y_1745 != NULL) && ((*(P112)rt_nil_check(F->y_1745)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_899(F->up, F->e_818);
goto ret_;
}
if (((F->y_1745 == NULL) || ((*(P112)rt_nil_check(F->y_1745)).kind_ != ((rt_int)9LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_818)).line_, rt_str_cat(rt_str_cat(rt_str("task body ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_818)).name_))), rt_str(" has no task specification", 26)));
}
F->b_1746 = f_new_sym_402(F->up, ((rt_int)4LL), (*(P169)rt_nil_check(F->e_818)).name_);
(*(P112)rt_nil_check(F->b_1746)).cname_ = f_mk_201(F->up, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1745)).cname_)), rt_str("body", 4)));
(*(P112)rt_nil_check(F->b_1746)).result_ = F->up->ty_void_156;
(*(P112)rt_nil_check(F->b_1746)).level_ = F->up->cur_level_134;
(*(P112)rt_nil_check(F->b_1746)).decl_ = F->e_818;
if (((*(P112)rt_nil_check(F->y_1745)).c_ != NULL)) {
(*(P112)rt_nil_check(F->b_1746)).params_ = ({ R1195 *cell1751 = rt_alloc(sizeof(R1195)); *cell1751 = cp_R1195(({ R1195 ag1752; ag1752.name_ = f_mk_201(F->up, rt_str("INDEX_", 6)); ag1752.mode_ = ((rt_int)1LL); ag1752.t_ = F->up->ty_int_151; ag1752.c_ = NULL; ag1752.cfield_ = f_mk_201(F->up, rt_str("index_", 6)); ag1752.dflt_ = NULL; ag1752.next_ = NULL; ag1752; })); (P1194)cell1751; });
}
f_open_scope_398(F->up);
F->m_1747 = (*(P112)rt_nil_check(F->y_1745)).members_;
while ((F->m_1747 != NULL)) {
f_copy_sym_718(F->up, F->m_1747, &F->z_1748);
f_define_397(F->up, F->z_1748, (*(P169)rt_nil_check(F->e_818)).line_);
if ((((((*(P112)rt_nil_check(F->m_1747)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->m_1747)).kind_ == ((rt_int)4LL))) && ((*(P112)rt_nil_check(F->m_1747)).access_path_ != NULL)) && f_same_task_372(F->up, (*(P112)rt_nil_check(F->m_1747)).members_, F->y_1745))) {
if (((*(P112)rt_nil_check(F->y_1745)).level_ > ((rt_int)0LL))) {
F->upp_1749 = f_mk_201(F->up, rt_str("up_->", 5));
} else {
F->upp_1749 = f_mk_201(F->up, rt_str("", 0));
}
if (((*(P112)rt_nil_check(F->y_1745)).c_ != NULL)) {
(*(P112)rt_nil_check(F->b_1746)).access_path_ = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->upp_1749)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1747)).access_path_))), rt_str("[index_ - ", 10)), (*(P135)rt_nil_check(F->upp_1749))), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1745)).cname_))), rt_str("lo] = F;", 8)));
} else {
(*(P112)rt_nil_check(F->b_1746)).access_path_ = f_mk_201(F->up, rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->upp_1749)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1747)).access_path_))), rt_str(" = F;", 5)));
}
}
F->m_1747 = (*(P112)rt_nil_check(F->m_1747)).mnext_;
}
L_end_1753: ;
F->up->cur_task_176 = F->y_1745;
f_subprogram_body_520(F->up, F->e_818, F->b_1746);
F->up->cur_task_176 = F->saved_1750;
f_close_scope_399(F->up);
if ((((*(P112)rt_nil_check(F->y_1745)).c_ != NULL) && ((*(P112)rt_nil_check(F->b_1746)).level_ > ((rt_int)0LL)))) {
f_put_to_226(F->up, F->up->out_funcs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1745)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_1746)).cname_))), rt_str("(g->up, g->i); }", 16)));
} else if (((*(P112)rt_nil_check(F->y_1745)).c_ != NULL)) {
f_put_to_226(F->up, F->up->out_funcs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1745)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_1746)).cname_))), rt_str("(g->i); }", 9)));
} else if (((*(P112)rt_nil_check(F->b_1746)).level_ > ((rt_int)0LL))) {
f_put_to_226(F->up, F->up->out_funcs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1745)).cname_))), rt_str("run(void *a) { ", 15)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_1746)).cname_))), rt_str("(a); }", 6)));
} else {
f_put_to_226(F->up, F->up->out_funcs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1745)).cname_))), rt_str("run(void *a) { (void)a; ", 24)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->b_1746)).cname_))), rt_str("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_822(struct f_greenc_1fr *up_, P169 decls_820, P135 *aw_821) {
  struct f_task_awaits_822fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_820 = decls_820;
F->aw_821 = aw_821;
F->e_1754 = NULL;
F->e_1754 = F->decls_820;
F->y_1755 = NULL;
F->p_1756 = NULL;
(*F->aw_821) = f_mk_201(F->up, rt_str("", 0));
while ((F->e_1754 != NULL)) {
if ((((*(P169)rt_nil_check(F->e_1754)).kind_ == ((rt_int)50LL)) || (((*(P169)rt_nil_check(F->e_1754)).kind_ == ((rt_int)53LL)) && ((*(P169)rt_nil_check(F->e_1754)).ival_ == ((rt_int)50LL))))) {
F->y_1755 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1754)).name_)));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1755)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1755)).cname_)), rt_str("decl", 4)), &F->p_1756);
(*F->aw_821) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check((*F->aw_821))), rt_str(" rt_await_decl(&", 16)), (*(P135)rt_nil_check(F->p_1756))), rt_str(");", 2)));
}
F->e_1754 = (*(P169)rt_nil_check(F->e_1754)).next_;
}
L_end_1757: ;
ret_:

  return;
}

static void f_task_failure_824(struct f_greenc_1fr *up_, P169 s_823) {
  struct f_task_failure_824fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_823 = s_823;
F->y_1758 = NULL;
F->y_1758 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_823)).tag_)));
F->a_1759 = NULL;
F->i_1760 = NULL;
F->it_1761 = NULL;
if (((*(P169)rt_nil_check(F->s_823)).a_ != NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_823)).a_, (*(P112)rt_nil_check(F->y_1758)).t_, &F->it_1761, &F->i_1760);
f_act_path_i_794(F->up, F->y_1758, (*(P135)rt_nil_check(F->i_1760)), &F->a_1759);
} else {
f_act_path_790(F->up, F->y_1758, &F->a_1759);
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("rt_exterminate(&", 16), (*(P135)rt_nil_check(F->a_1759))), rt_str(");", 2)));
ret_:

  return;
}

static void f_entry_sym_828(struct f_greenc_1fr *up_, P169 e_825, P112 *y_826, P169 *ix_827) {
  struct f_entry_sym_828fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_825 = e_825;
F->y_826 = y_826;
F->ix_827 = ix_827;
F->t_1762 = NULL;
(*F->ix_827) = NULL;
F->up->fam_ix_179 = NULL;
if (((*(P169)rt_nil_check(F->e_825)).kind_ == ((rt_int)8LL))) {
f_entry_sym_828(F->up, (*(P169)rt_nil_check(F->e_825)).a_, &(*F->y_826), &(*F->ix_827));
if (((*(P112)rt_nil_check((*F->y_826))).c_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_825)).line_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check((*F->y_826))).name_)), rt_str(" is not an entry family", 23)));
}
F->up->fam_ix_179 = (*(P169)rt_nil_check(F->e_825)).b_;
goto ret_;
}
if (((((*(P169)rt_nil_check(F->e_825)).kind_ == ((rt_int)9LL)) && ((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_825)).a_)).kind_ == ((rt_int)8LL))) && ((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_825)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->t_1762 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_825)).a_)).a_)).name_)));
if ((((F->t_1762 == NULL) || ((*(P112)rt_nil_check(F->t_1762)).kind_ != ((rt_int)9LL))) || ((*(P112)rt_nil_check(F->t_1762)).c_ == NULL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_825)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_825)).a_)).a_)).name_)), rt_str(" is not a task family", 21)));
}
(*F->y_826) = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_825)).a_)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_825)).name_)), (*(P169)rt_nil_check(F->e_825)).line_);
(*F->ix_827) = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_825)).a_)).b_;
if ((((*F->y_826) == NULL) || ((*(P112)rt_nil_check((*F->y_826))).kind_ != ((rt_int)10LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_825)).line_, rt_str("not an entry", 12));
}
goto ret_;
}
if (((*(P169)rt_nil_check(F->e_825)).kind_ == ((rt_int)5LL))) {
(*F->y_826) = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_825)).name_)));
if (((*(P169)rt_nil_check(F->e_825)).tag_ != NULL)) {
(*F->y_826) = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_825)).tag_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_825)).name_)), (*(P169)rt_nil_check(F->e_825)).line_);
}
} else if ((((*(P169)rt_nil_check(F->e_825)).kind_ == ((rt_int)9LL)) && f_is_package_709(F->up, (*(P169)rt_nil_check(F->e_825)).a_))) {
(*F->y_826) = f_member_of_713(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->e_825)).a_)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_825)).name_)), (*(P169)rt_nil_check(F->e_825)).line_);
} else {
(*F->y_826) = NULL;
}
if ((((*F->y_826) == NULL) || ((*(P112)rt_nil_check((*F->y_826))).kind_ != ((rt_int)10LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_825)).line_, rt_str("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_833(struct f_greenc_1fr *up_, P169 e_829, int is_stmt_830, P117 *t_831, P135 *r_832) {
  struct f_other_call_833fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_829 = e_829;
F->is_stmt_830 = is_stmt_830;
F->t_831 = t_831;
F->r_832 = r_832;
F->y_1763 = NULL;
F->pm_1764 = NULL;
F->a_1765 = NULL;
F->parts_1766 = NULL;
F->v_1767 = NULL;
F->lv_1768 = NULL;
F->ent_1769 = NULL;
F->act_1770 = NULL;
F->i_1771 = NULL;
F->vt_1772 = NULL;
F->lt_1773 = NULL;
F->lc_1774 = NULL;
F->ix_1776 = NULL;
F->fix_1777 = NULL;
F->args_node_1778 = NULL;
f_entry_sym_828(F->up, (*(P169)rt_nil_check(F->e_829)).a_, &F->y_1763, &F->ix_1776);
F->fix_1777 = F->up->fam_ix_179;
F->args_node_1778 = (*(P169)rt_nil_check(F->e_829)).b_;
if ((((*(P112)rt_nil_check(F->y_1763)).c_ != NULL) && (F->fix_1777 == NULL))) {
F->fix_1777 = (*(P169)rt_nil_check(F->e_829)).b_;
F->args_node_1778 = NULL;
}
F->i_1771 = f_mk_201(F->up, rt_str("", 0));
if ((F->ix_1776 != NULL)) {
f_gexpr_615(F->up, F->ix_1776, F->up->ty_int_151, &F->vt_1772, &F->i_1771);
} else if (((((*(P112)rt_nil_check(F->y_1763)).members_ != NULL) && ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_1763)).members_)).c_ != NULL)) && ((*(P112)rt_nil_check(F->y_1763)).members_ != F->up->cur_task_176))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_829)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a member of family ", 19), (*(P135)rt_nil_check((*(P112)rt_nil_check((*(P112)rt_nil_check(F->y_1763)).members_)).name_))), rt_str(" must be named: F(I).", 21)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1763)).name_))));
}
if ((!F->is_stmt_830)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_829)).line_, rt_str("an entry call is a statement", 28));
}
if ((F->up->pure_sym_190 != NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_829)).line_, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_190)).name_))), rt_str(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_798(F->up, F->y_1763, (*(P135)rt_nil_check(F->i_1771)), &F->ent_1769);
if (((*(P112)rt_nil_check(F->y_1763)).c_ != NULL)) {
if ((F->fix_1777 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_829)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1763)).name_)), rt_str(" is an entry family: name a member, ", 36)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1763)).name_))), rt_str("(I)", 3)));
}
f_gexpr_615(F->up, F->fix_1777, NULL, &F->vt_1772, &F->v_1767);
f_entry_family_slot_813(F->up, F->y_1763, (*(P135)rt_nil_check(F->ent_1769)), (*(P135)rt_nil_check(F->v_1767)), &F->ent_1769);
}
F->parts_1766 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str("({ struct ", 10), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1763)).cname_))), rt_str("p p_;", 5)));
F->pm_1764 = (*(P112)rt_nil_check(F->y_1763)).params_;
while ((F->pm_1764 != NULL)) {
F->a_1765 = f_actual_for_690(F->up, F->args_node_1778, F->pm_1764, (*(P112)rt_nil_check(F->y_1763)).params_);
if ((F->a_1765 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_829)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1764)).name_))));
}
if (((*(P1194)rt_nil_check(F->pm_1764)).mode_ == ((rt_int)1LL))) {
f_gexpr_615(F->up, F->a_1765, (*(P1194)rt_nil_check(F->pm_1764)).t_, &F->vt_1772, &F->v_1767);
f_check_type_411(F->up, F->vt_1772, (*(P1194)rt_nil_check(F->pm_1764)).t_, (*(P169)rt_nil_check(F->e_829)).line_);
F->parts_1766 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->parts_1766)), rt_str(" p_.", 4)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1764)).cfield_))), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->v_1767))), 59));
} else {
f_lvalue_577(F->up, F->a_1765, &F->lv_1768, &F->lt_1773, &F->lc_1774, &F->ro_1775);
if (F->ro_1775) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_829)).line_, rt_str_cat((*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1764)).name_)), rt_str(" needs a variable", 17)));
}
f_check_type_411(F->up, F->lt_1773, (*(P1194)rt_nil_check(F->pm_1764)).t_, (*(P169)rt_nil_check(F->e_829)).line_);
F->parts_1766 = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->parts_1766)), rt_str(" p_.", 4)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1764)).cfield_))), rt_str(" = &", 4)), (*(P135)rt_nil_check(F->lv_1768))), 59));
}
F->pm_1764 = (*(P1194)rt_nil_check(F->pm_1764)).next_;
}
L_end_1779: ;
if ((((*(P112)rt_nil_check(F->y_1763)).members_ != NULL) && ((*(P112)rt_nil_check(F->y_1763)).members_ != F->up->cur_task_176))) {
if ((F->ix_1776 != NULL)) {
f_act_path_i_794(F->up, (*(P112)rt_nil_check(F->y_1763)).members_, (*(P135)rt_nil_check(F->i_1771)), &F->act_1770);
} else {
f_act_path_790(F->up, (*(P112)rt_nil_check(F->y_1763)).members_, &F->act_1770);
}
F->parts_1766 = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->parts_1766)), rt_str(" if (!rt_is_active(&", 20)), (*(P135)rt_nil_check(F->act_1770))), rt_str(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_831) = F->up->ty_void_156;
(*F->r_832) = f_mk_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->parts_1766)), rt_str(" rt_entry_call(&", 16)), (*(P135)rt_nil_check(F->ent_1769))), rt_str(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_838(struct f_greenc_1fr *up_, P169 e_834, P112 y_835, P117 *t_836, P135 *r_837) {
  struct f_other_attr_838fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_834 = e_834;
F->y_835 = y_835;
F->t_836 = t_836;
F->r_837 = r_837;
F->a_1780 = rt_str_copy((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_834)).name_)));
F->p_1781 = NULL;
if ((((*(P112)rt_nil_check(F->y_835)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1780, rt_str("INDEX", 5)))) {
if (((*(P112)rt_nil_check(F->y_835)).c_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_835)).name_)), rt_str(" is not a task family", 21)));
}
f_own_index_782(F->up, &F->p_1781);
(*F->t_836) = F->up->ty_int_151;
if (((*(P112)rt_nil_check(F->y_835)).t_ != NULL)) {
(*F->t_836) = (*(P112)rt_nil_check(F->y_835)).t_;
}
(*F->r_837) = F->p_1781;
} else if ((((*(P112)rt_nil_check(F->y_835)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1780, rt_str("ACTIVE", 6)))) {
f_act_path_790(F->up, F->y_835, &F->p_1781);
(*F->t_836) = F->up->ty_bool_152;
(*F->r_837) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P135)rt_nil_check(F->p_1781))), 41));
} else if ((((*(P112)rt_nil_check(F->y_835)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1780, rt_str("PRIORITY", 8)))) {
f_act_path_790(F->up, F->y_835, &F->p_1781);
(*F->t_836) = F->up->ty_int_151;
(*F->r_837) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P135)rt_nil_check(F->p_1781))), 41));
} else if ((((*(P112)rt_nil_check(F->y_835)).kind_ == ((rt_int)10LL)) && rt_str_eq(F->a_1780, rt_str("COUNT", 5)))) {
if (((*(P112)rt_nil_check(F->y_835)).members_ != F->up->cur_task_176)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_798(F->up, F->y_835, rt_str("", 0), &F->p_1781);
(*F->t_836) = F->up->ty_int_151;
(*F->r_837) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P135)rt_nil_check(F->p_1781))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_834)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1780), rt_str(" is not handled here", 20)));
(*F->t_836) = F->up->ty_int_151;
(*F->r_837) = NULL;
}
ret_:

  return;
}

static void f_member_attr_842(struct f_greenc_1fr *up_, P169 e_839, P117 *t_840, P135 *r_841) {
  struct f_member_attr_842fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_839 = e_839;
F->t_840 = t_840;
F->r_841 = r_841;
F->y_1782 = NULL;
F->ix_1783 = NULL;
F->i_1784 = NULL;
F->p_1785 = NULL;
F->vt_1786 = NULL;
f_task_of_780(F->up, (*(P169)rt_nil_check(F->e_839)).a_, &F->y_1782, &F->ix_1783);
f_gexpr_615(F->up, F->ix_1783, F->up->ty_int_151, &F->vt_1786, &F->i_1784);
f_act_path_i_794(F->up, F->y_1782, (*(P135)rt_nil_check(F->i_1784)), &F->p_1785);
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_839)).name_)), rt_str("ACTIVE", 6))) {
(*F->t_840) = F->up->ty_bool_152;
(*F->r_841) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P135)rt_nil_check(F->p_1785))), 41));
} else if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_839)).name_)), rt_str("PRIORITY", 8))) {
(*F->t_840) = F->up->ty_int_151;
(*F->r_841) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P135)rt_nil_check(F->p_1785))), 41));
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_839)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_839)).name_))), rt_str(" is not handled for a family member", 35)));
(*F->t_840) = F->up->ty_int_151;
(*F->r_841) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_848(struct f_greenc_1fr *up_, rstr name_843, P169 args_844, rt_int line_845, P117 *t_846, P135 *r_847) {
  struct f_task_builtin_848fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_843 = rt_str_copy(name_843);
F->args_844 = args_844;
F->line_845 = line_845;
F->t_846 = t_846;
F->r_847 = r_847;
F->vt_1787 = NULL;
F->v_1788 = NULL;
(*F->t_846) = F->up->ty_void_156;
if (rt_str_eq(F->name_843, rt_str("SET_PRIORITY", 12))) {
f_gexpr_615(F->up, F->args_844, F->up->ty_int_151, &F->vt_1787, &F->v_1788);
(*F->r_847) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_set_priority(rt_me(), ", 25), (*(P135)rt_nil_check(F->v_1788))), 41));
} else {
f_fail_222(F->up, F->line_845, rt_str_cat(F->name_843, rt_str(" is not declared", 16)));
(*F->r_847) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_850(struct f_greenc_1fr *up_, P169 s_849) {
  struct f_gen_accept_850fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_849 = s_849;
F->y_1789 = NULL;
F->y_1789 = f_lookup_entry_375(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_849)).name_)), F->up->cur_task_176);
F->saved_ax_1790 = NULL;
F->ent_1791 = NULL;
F->ep_1792 = NULL;
F->xf_1793 = NULL;
F->x_1794 = NULL;
F->pm_1795 = NULL;
F->f_1796 = NULL;
F->f_1796 = (*(P169)rt_nil_check(F->s_849)).a_;
F->p_1797 = NULL;
if (((F->y_1789 == NULL) || ((*(P112)rt_nil_check(F->y_1789)).kind_ != ((rt_int)10LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_849)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->s_849)).name_)), rt_str(" is not an entry", 16)));
}
if ((!f_same_task_372(F->up, (*(P112)rt_nil_check(F->y_1789)).members_, F->up->cur_task_176))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_849)).line_, rt_str("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_798(F->up, F->y_1789, rt_str("", 0), &F->ent_1791);
f_member_slot_854(F->up, F->y_1789, F->s_849, &F->ent_1791);
if (((*(P169)rt_nil_check(F->s_849)).flag_ == ((rt_int)0LL))) {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_accept_begin(&", 19), (*(P135)rt_nil_check(F->ent_1791))), rt_str("); rt_accept_end(&", 18)), (*(P135)rt_nil_check(F->ent_1791))), rt_str(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_204(F->up, rt_str("ep", 2), &F->ep_1792);
f_new_name_204(F->up, rt_str("xf", 2), &F->xf_1793);
f_new_name_204(F->up, rt_str("x", 1), &F->x_1794);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1789)).cname_))), rt_str("p *", 3)), (*(P135)rt_nil_check(F->ep_1792))), rt_str(" = rt_accept_begin(&", 20)), (*(P135)rt_nil_check(F->ent_1791))), rt_str(");", 2)));
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str("rt_frame ", 9), (*(P135)rt_nil_check(F->xf_1793))), 59));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P135)rt_nil_check(F->xf_1793))), rt_str(")) {", 4)));
f_push_cleanup_526(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P135)rt_nil_check(F->xf_1793))), rt_str("); rt_accept_end(&", 18)), (*(P135)rt_nil_check(F->ent_1791))), rt_str(", 0, 0);", 8)));
f_open_scope_398(F->up);
F->pm_1795 = (*(P112)rt_nil_check(F->y_1789)).params_;
while ((F->pm_1795 != NULL)) {
if (((*(P1194)rt_nil_check(F->pm_1795)).mode_ == ((rt_int)1LL))) {
F->p_1797 = f_new_sym_402(F->up, ((rt_int)2LL), (*(P1194)rt_nil_check(F->pm_1795)).name_);
(*(P112)rt_nil_check(F->p_1797)).ro_ = 1;
(*(P112)rt_nil_check(F->p_1797)).access_path_ = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P135)rt_nil_check(F->ep_1792))), rt_str("->", 2)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1795)).cfield_))), 41));
} else {
F->p_1797 = f_new_sym_402(F->up, ((rt_int)1LL), (*(P1194)rt_nil_check(F->pm_1795)).name_);
(*(P112)rt_nil_check(F->p_1797)).access_path_ = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P135)rt_nil_check(F->ep_1792))), rt_str("->", 2)), (*(P135)rt_nil_check((*(P1194)rt_nil_check(F->pm_1795)).cfield_))), 41));
}
if ((F->f_1796 != NULL)) {
(*(P112)rt_nil_check(F->p_1797)).name_ = (*(P169)rt_nil_check(F->f_1796)).name_;
F->f_1796 = (*(P169)rt_nil_check(F->f_1796)).next_;
}
(*(P112)rt_nil_check(F->p_1797)).t_ = (*(P1194)rt_nil_check(F->pm_1795)).t_;
(*(P112)rt_nil_check(F->p_1797)).c_ = (*(P1194)rt_nil_check(F->pm_1795)).c_;
f_define_397(F->up, F->p_1797, (*(P169)rt_nil_check(F->s_849)).line_);
F->pm_1795 = (*(P1194)rt_nil_check(F->pm_1795)).next_;
}
L_end_1798: ;
F->up->accept_depth_177 = rt_add(F->up->accept_depth_177, ((rt_int)1LL));
F->saved_ax_1790 = F->up->accept_exits_144;
F->up->accept_exits_144 = F->up->exits_140;
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->s_849)).b_);
F->up->accept_exits_144 = F->saved_ax_1790;
F->up->accept_depth_177 = rt_sub(F->up->accept_depth_177, ((rt_int)1LL));
f_close_scope_399(F->up);
f_pop_cleanup_527(F->up);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P135)rt_nil_check(F->xf_1793))), rt_str("); rt_accept_end(&", 18)), (*(P135)rt_nil_check(F->ent_1791))), rt_str(", 0, 0);", 8)));
f_emit_228(F->up, rt_str("} else {", 8));
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P135)rt_nil_check(F->xf_1793))), rt_str("); int ", 7)), (*(P135)rt_nil_check(F->x_1794))), rt_str(" = rt_xcur; rt_accept_end(&", 27)), (*(P135)rt_nil_check(F->ent_1791))), rt_str(", 1, ", 5)), (*(P135)rt_nil_check(F->x_1794))), rt_str("); rt_raise(", 12)), (*(P135)rt_nil_check(F->x_1794))), rt_str(");", 2)));
f_emit_228(F->up, rt_str("}", 1));
f_emit_228(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_member_slot_854(struct f_greenc_1fr *up_, P112 y_851, P169 s_852, P135 *ent_853) {
  struct f_member_slot_854fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_851 = y_851;
F->s_852 = s_852;
F->ent_853 = ent_853;
F->vt_1799 = NULL;
F->v_1800 = NULL;
if (((*(P112)rt_nil_check(F->y_851)).c_ != NULL)) {
if (((*(P169)rt_nil_check(F->s_852)).c_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_852)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_851)).name_)), rt_str(" is an entry family: accept ", 28)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_851)).name_))), rt_str("(I)", 3)));
}
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->s_852)).c_, NULL, &F->vt_1799, &F->v_1800);
f_entry_family_slot_813(F->up, F->y_851, (*(P135)rt_nil_check((*F->ent_853))), (*(P135)rt_nil_check(F->v_1800)), &(*F->ent_853));
} else if (((*(P169)rt_nil_check(F->s_852)).c_ != NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_852)).line_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_851)).name_)), rt_str(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_857(struct f_greenc_1fr *up_, P169 e_855, P135 *r_856) {
  struct f_gen_delay_ticks_857fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_855 = e_855;
F->r_856 = r_856;
F->vt_1801 = NULL;
F->v_1802 = NULL;
f_gexpr_615(F->up, F->e_855, F->up->ty_time_166, &F->vt_1801, &F->v_1802);
f_check_type_411(F->up, F->vt_1801, F->up->ty_time_166, (*(P169)rt_nil_check(F->e_855)).line_);
(*F->r_856) = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str("(rt_int)llround(", 16), (*(P135)rt_nil_check(F->v_1802))), 41));
ret_:

  return;
}

static void f_gen_select_859(struct f_greenc_1fr *up_, P169 s_858) {
  struct f_gen_select_859fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_858 = s_858;
F->alt_1803 = NULL;
F->alt_1803 = (*(P169)rt_nil_check(F->s_858)).a_;
F->n_1804 = ((rt_int)0LL);
F->has_delay_1806 = 0;
F->has_accept_1807 = 0;
F->al_1808 = NULL;
F->w_1809 = NULL;
F->g_1810 = NULL;
F->ent_1811 = NULL;
F->ticks_1812 = NULL;
F->vt_1813 = NULL;
F->y_1814 = NULL;
f_new_name_204(F->up, rt_str("al", 2), &F->al_1808);
f_new_name_204(F->up, rt_str("w", 1), &F->w_1809);
while ((F->alt_1803 != NULL)) {
F->n_1804 = rt_add(F->n_1804, ((rt_int)1LL));
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_1803)).b_)).kind_ == ((rt_int)32LL))) {
F->has_delay_1806 = 1;
} else {
F->has_accept_1807 = 1;
}
F->alt_1803 = (*(P169)rt_nil_check(F->alt_1803)).next_;
}
L_end_1815: ;
if ((((*(P169)rt_nil_check(F->s_858)).flag_ == ((rt_int)1LL)) && F->has_delay_1806)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_858)).line_, rt_str("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_1807)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_858)).line_, rt_str("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ rt_alt ", 9), (*(P135)rt_nil_check(F->al_1808))), 91), rt_str_of_int(rt_add(F->n_1804, ((rt_int)1LL)))), rt_str("]; int open_ = 0;", 17)));
F->alt_1803 = (*(P169)rt_nil_check(F->s_858)).a_;
F->i_1805 = ((rt_int)0LL);
while ((F->alt_1803 != NULL)) {
F->g_1810 = f_mk_201(F->up, rt_str("1", 1));
if (((*(P169)rt_nil_check(F->alt_1803)).a_ != NULL)) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->alt_1803)).a_, F->up->ty_bool_152, &F->vt_1813, &F->g_1810);
f_check_type_411(F->up, F->vt_1813, F->up->ty_bool_152, (*(P169)rt_nil_check(F->alt_1803)).line_);
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_1803)).b_)).kind_ == ((rt_int)34LL))) {
F->y_1814 = f_lookup_entry_375(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_1803)).b_)).name_)), F->up->cur_task_176);
if (((F->y_1814 == NULL) || ((*(P112)rt_nil_check(F->y_1814)).kind_ != ((rt_int)10LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->alt_1803)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_1803)).b_)).name_)), rt_str(" is not an entry", 16)));
}
f_entry_path_798(F->up, F->y_1814, rt_str("", 0), &F->ent_1811);
f_member_slot_854(F->up, F->y_1814, (*(P169)rt_nil_check(F->alt_1803)).b_, &F->ent_1811);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->al_1808)), 91), rt_str_of_int(F->i_1805)), rt_str("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P135)rt_nil_check(F->g_1810))), rt_str("), &", 4)), (*(P135)rt_nil_check(F->ent_1811))), rt_str(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_857(F->up, (*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_1803)).b_)).a_, &F->ticks_1812);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->al_1808)), 91), rt_str_of_int(F->i_1805)), rt_str("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P135)rt_nil_check(F->g_1810))), rt_str("), NULL, NULL, ", 15)), (*(P135)rt_nil_check(F->ticks_1812))), rt_str("};", 2)));
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("open_ |= ", 9), (*(P135)rt_nil_check(F->al_1808))), 91), rt_str_of_int(F->i_1805)), rt_str("].open;", 7)));
F->i_1805 = rt_add(F->i_1805, ((rt_int)1LL));
F->alt_1803 = (*(P169)rt_nil_check(F->alt_1803)).next_;
}
L_end_1816: ;
if (((*(P169)rt_nil_check(F->s_858)).flag_ == ((rt_int)1LL))) {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P135)rt_nil_check(F->al_1808)), 91), rt_str_of_int(F->n_1804)), rt_str("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_1804 = rt_add(F->n_1804, ((rt_int)1LL));
} else {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!open_) rt_raise(rt_exc(", 28), f_q_219(F->up)), rt_str("SELECT_ERROR", 12)), f_q_219(F->up)), rt_str("));", 3)));
}
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P135)rt_nil_check(F->w_1809))), rt_str(" = rt_wait(", 11)), rt_str_of_int(F->n_1804)), rt_str(", ", 2)), (*(P135)rt_nil_check(F->al_1808))), rt_str(");", 2)));
F->alt_1803 = (*(P169)rt_nil_check(F->s_858)).a_;
F->i_1805 = ((rt_int)0LL);
while ((F->alt_1803 != NULL)) {
if ((F->i_1805 == ((rt_int)0LL))) {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P135)rt_nil_check(F->w_1809))), rt_str(" == 0) {", 8)));
} else {
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P135)rt_nil_check(F->w_1809))), rt_str(" == ", 4)), rt_str_of_int(F->i_1805)), rt_str(") {", 3)));
}
if (((*(P169)rt_nil_check((*(P169)rt_nil_check(F->alt_1803)).b_)).kind_ == ((rt_int)34LL))) {
f_gen_accept_850(F->up, (*(P169)rt_nil_check(F->alt_1803)).b_);
}
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->alt_1803)).c_);
F->i_1805 = rt_add(F->i_1805, ((rt_int)1LL));
F->alt_1803 = (*(P169)rt_nil_check(F->alt_1803)).next_;
}
L_end_1817: ;
if (((*(P169)rt_nil_check(F->s_858)).flag_ == ((rt_int)1LL))) {
f_emit_228(F->up, rt_str("} else {", 8));
f_gen_statements_522(F->up, (*(P169)rt_nil_check(F->s_858)).b_);
}
f_emit_228(F->up, rt_str("}", 1));
f_emit_228(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_family_range_864(struct f_greenc_1fr *up_, P112 y_860, P169 ix_861, P135 *lo_862, P135 *hi_863) {
  struct f_family_range_864fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_860 = y_860;
F->ix_861 = ix_861;
F->lo_862 = lo_862;
F->hi_863 = hi_863;
F->vt_1818 = NULL;
if ((F->ix_861 == NULL)) {
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_860)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_860)).cname_)), rt_str("lo", 2)), &(*F->lo_862));
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_860)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_860)).cname_)), rt_str("hi", 2)), &(*F->hi_863));
} else if (((*(P169)rt_nil_check(F->ix_861)).kind_ == ((rt_int)14LL))) {
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->ix_861)).a_, F->up->ty_int_151, &F->vt_1818, &(*F->lo_862));
f_gexpr_615(F->up, (*(P169)rt_nil_check(F->ix_861)).b_, F->up->ty_int_151, &F->vt_1818, &(*F->hi_863));
} else {
f_gexpr_615(F->up, F->ix_861, F->up->ty_int_151, &F->vt_1818, &(*F->lo_862));
(*F->hi_863) = (*F->lo_862);
}
ret_:

  return;
}

static void f_task_statement_gen_866(struct f_greenc_1fr *up_, P169 s_865) {
  struct f_task_statement_gen_866fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_865 = s_865;
F->n_1819 = NULL;
F->ix_1820 = NULL;
F->y_1821 = NULL;
F->a_1822 = NULL;
F->d_1823 = NULL;
F->l_1824 = NULL;
F->ticks_1825 = NULL;
F->lo_1826 = NULL;
F->hi_1827 = NULL;
{ rt_int sel1828 = (*(P169)rt_nil_check(F->s_865)).kind_;
if (0 || sel1828 == ((rt_int)32LL)) {
f_gen_delay_ticks_857(F->up, (*(P169)rt_nil_check(F->s_865)).a_, &F->ticks_1825);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), (*(P135)rt_nil_check(F->ticks_1825))), rt_str(");", 2)));
} else if (0 || sel1828 == ((rt_int)33LL)) {
if ((F->up->accept_depth_177 > ((rt_int)0LL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_865)).line_, rt_str("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_1819 = (*(P169)rt_nil_check(F->s_865)).a_;
while ((F->n_1819 != NULL)) {
f_task_of_780(F->up, F->n_1819, &F->y_1821, &F->ix_1820);
f_path_at_774(F->up, (*(P112)rt_nil_check(F->y_1821)).level_, rt_str_cat((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1821)).cname_)), rt_str("decl", 4)), &F->d_1823);
if (((*(P112)rt_nil_check(F->y_1821)).level_ > ((rt_int)0LL))) {
f_link_to_563(F->up, (*(P112)rt_nil_check(F->y_1821)).level_, &F->l_1824);
} else {
F->l_1824 = f_mk_201(F->up, rt_str("NULL", 4));
}
if (((*(P112)rt_nil_check(F->y_1821)).c_ == NULL)) {
f_act_path_790(F->up, F->y_1821, &F->a_1822);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(&", 11), (*(P135)rt_nil_check(F->a_1822))), rt_str(", &", 3)), (*(P135)rt_nil_check(F->d_1823))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1821)).cname_))), rt_str("run, ", 5)), (*(P135)rt_nil_check(F->l_1824))), rt_str(");", 2)));
} else {
f_family_range_864(F->up, F->y_1821, F->ix_1820, &F->lo_1826, &F->hi_1827);
f_act_path_i_794(F->up, F->y_1821, rt_str("k_", 2), &F->a_1822);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P135)rt_nil_check(F->lo_1826))), rt_str("; k_ <= ", 8)), (*(P135)rt_nil_check(F->hi_1827))), rt_str("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P135)rt_nil_check(F->l_1824))), rt_str("; g_->i = k_; rt_create(&", 25)), (*(P135)rt_nil_check(F->a_1822))), rt_str(", &", 3)), (*(P135)rt_nil_check(F->d_1823))), rt_str(", ", 2)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1821)).cname_))), rt_str("run, g_); }", 11)));
}
F->n_1819 = (*(P169)rt_nil_check(F->n_1819)).next_;
}
L_end_1829: ;
} else if (0 || sel1828 == ((rt_int)34LL)) {
f_gen_accept_850(F->up, F->s_865);
} else if (0 || sel1828 == ((rt_int)35LL)) {
f_gen_select_859(F->up, F->s_865);
} else if (0 || sel1828 == ((rt_int)36LL)) {
F->n_1819 = (*(P169)rt_nil_check(F->s_865)).a_;
while ((F->n_1819 != NULL)) {
f_task_of_780(F->up, F->n_1819, &F->y_1821, &F->ix_1820);
if (((*(P112)rt_nil_check(F->y_1821)).c_ == NULL)) {
f_act_path_790(F->up, F->y_1821, &F->a_1822);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str("rt_g_abort(&", 12), (*(P135)rt_nil_check(F->a_1822))), rt_str(");", 2)));
} else {
f_family_range_864(F->up, F->y_1821, F->ix_1820, &F->lo_1826, &F->hi_1827);
f_act_path_i_794(F->up, F->y_1821, rt_str("k_", 2), &F->a_1822);
f_emit_228(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P135)rt_nil_check(F->lo_1826))), rt_str("; k_ <= ", 8)), (*(P135)rt_nil_check(F->hi_1827))), rt_str("; k_++) rt_g_abort(&", 20)), (*(P135)rt_nil_check(F->a_1822))), rt_str(");", 2)));
}
F->n_1819 = (*(P169)rt_nil_check(F->n_1819)).next_;
}
L_end_1830: ;
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->s_865)).line_, rt_str("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P169 f_root_name_868(struct f_greenc_1fr *up_, P169 e_867) {
  struct f_root_name_868fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_867 = e_867;
if (((*(P169)rt_nil_check(F->e_867)).kind_ == ((rt_int)5LL))) {
F->result_ = F->e_867;
goto ret_;
} else if (((((*(P169)rt_nil_check(F->e_867)).kind_ == ((rt_int)9LL)) || ((*(P169)rt_nil_check(F->e_867)).kind_ == ((rt_int)8LL))) || ((*(P169)rt_nil_check(F->e_867)).kind_ == ((rt_int)15LL)))) {
F->result_ = f_root_name_868(F->up, (*(P169)rt_nil_check(F->e_867)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_871(struct f_greenc_1fr *up_, P169 target_869, rt_int line_870) {
  struct f_check_pure_target_871fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_869 = target_869;
F->line_870 = line_870;
F->n_1831 = NULL;
F->y_1832 = NULL;
if ((F->up->pure_sym_190 == NULL)) {
goto ret_;
}
if (F->up->last_deref_194) {
f_fail_222(F->up, F->line_870, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_190)).name_))), rt_str(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_1831 = f_root_name_868(F->up, F->target_869);
if ((F->n_1831 != NULL)) {
F->y_1832 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1831)).name_)));
if ((((F->y_1832 != NULL) && ((*(P112)rt_nil_check(F->y_1832)).kind_ == ((rt_int)1LL))) && ((*(P112)rt_nil_check(F->y_1832)).depth_ < F->up->pure_depth_191))) {
f_fail_222(F->up, F->line_870, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_190)).name_))), rt_str(" may not assign to ", 19)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->n_1831)).name_))), rt_str(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_874(struct f_greenc_1fr *up_, P169 d_872, rstr name_873) {
  struct f_assigns_nonlocal_874fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_872 = d_872;
F->name_873 = rt_str_copy(name_873);
F->result_ = (f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->d_872)).d_, F->d_872, F->name_873) || f_scan_handlers_881(F->up, (*(P169)rt_nil_check(F->d_872)).e_, F->d_872, F->name_873));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_877(struct f_greenc_1fr *up_, P169 d_875, rstr name_876) {
  struct f_declares_877fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_875 = d_875;
F->name_876 = rt_str_copy(name_876);
F->p_1833 = NULL;
F->p_1833 = (*(P169)rt_nil_check(F->d_875)).a_;
F->e_1834 = NULL;
F->e_1834 = (*(P169)rt_nil_check(F->d_875)).c_;
while ((F->p_1833 != NULL)) {
if (rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->p_1833)).name_)), F->name_876)) {
F->result_ = 1;
goto ret_;
}
F->p_1833 = (*(P169)rt_nil_check(F->p_1833)).next_;
}
L_end_1835: ;
while ((F->e_1834 != NULL)) {
if ((((*(P169)rt_nil_check(F->e_1834)).name_ != NULL) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_1834)).name_)), F->name_876))) {
F->result_ = 1;
goto ret_;
}
F->e_1834 = (*(P169)rt_nil_check(F->e_1834)).next_;
}
L_end_1836: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_881(struct f_greenc_1fr *up_, P169 h_878, P169 d_879, rstr name_880) {
  struct f_scan_handlers_881fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_878 = h_878;
F->d_879 = d_879;
F->name_880 = rt_str_copy(name_880);
F->p_1837 = NULL;
F->p_1837 = F->h_878;
while ((F->p_1837 != NULL)) {
if (f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->p_1837)).b_, F->d_879, F->name_880)) {
F->result_ = 1;
goto ret_;
}
F->p_1837 = (*(P169)rt_nil_check(F->p_1837)).next_;
}
L_end_1838: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_885(struct f_greenc_1fr *up_, P169 stmts_882, P169 d_883, rstr name_884) {
  struct f_scan_assigns_885fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_882 = stmts_882;
F->d_883 = d_883;
F->name_884 = rt_str_copy(name_884);
F->s_1839 = NULL;
F->s_1839 = F->stmts_882;
F->a_1840 = NULL;
F->r_1841 = NULL;
while ((F->s_1839 != NULL)) {
if (((*(P169)rt_nil_check(F->s_1839)).kind_ == ((rt_int)20LL))) {
F->r_1841 = f_root_name_868(F->up, (*(P169)rt_nil_check(F->s_1839)).a_);
if ((((F->r_1841 != NULL) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->r_1841)).name_)), F->name_884)) && (!f_declares_877(F->up, F->d_883, F->name_884)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_1839)).kind_ == ((rt_int)22LL))) {
F->a_1840 = (*(P169)rt_nil_check(F->s_1839)).a_;
while ((F->a_1840 != NULL)) {
if (f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->a_1840)).b_, F->d_883, F->name_884)) {
F->result_ = 1;
goto ret_;
}
F->a_1840 = (*(P169)rt_nil_check(F->a_1840)).next_;
}
L_end_1843: ;
if (f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->s_1839)).b_, F->d_883, F->name_884)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_1839)).kind_ == ((rt_int)23LL))) {
F->a_1840 = (*(P169)rt_nil_check(F->s_1839)).b_;
while ((F->a_1840 != NULL)) {
if (f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->a_1840)).b_, F->d_883, F->name_884)) {
F->result_ = 1;
goto ret_;
}
F->a_1840 = (*(P169)rt_nil_check(F->a_1840)).next_;
}
L_end_1844: ;
if (f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->s_1839)).c_, F->d_883, F->name_884)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_1839)).kind_ == ((rt_int)24LL))) {
if (f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->s_1839)).b_, F->d_883, F->name_884)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P169)rt_nil_check(F->s_1839)).kind_ == ((rt_int)25LL))) {
if ((f_scan_assigns_885(F->up, (*(P169)rt_nil_check(F->s_1839)).b_, F->d_883, F->name_884) || f_scan_handlers_881(F->up, (*(P169)rt_nil_check(F->s_1839)).c_, F->d_883, F->name_884))) {
F->result_ = 1;
goto ret_;
}
}
F->s_1839 = (*(P169)rt_nil_check(F->s_1839)).next_;
}
L_end_1842: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_888(struct f_greenc_1fr *up_, P169 e_886, P112 y_887) {
  struct f_check_call_rules_888fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_886 = e_886;
F->y_887 = y_887;
F->z_1845 = NULL;
F->s_1846 = NULL;
if ((((F->up->pure_sym_190 != NULL) && (((*(P117)rt_nil_check((*(P112)rt_nil_check(F->y_887)).result_)).kind_ == ((rt_int)9LL)) || (*(P112)rt_nil_check(F->y_887)).vrp_)) && ((*(P112)rt_nil_check(F->y_887)).depth_ < F->up->pure_depth_191))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_886)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->up->pure_sym_190)).name_))), rt_str(" may not call procedure ", 24)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_887)).name_))), rt_str(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P112)rt_nil_check(F->y_887)).vrp_) || (F->up->trial_150 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_192)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_886)).line_, rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_887)).name_))), rt_str(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_1846 = F->up->scope_stack_116;
while ((F->s_1846 != NULL)) {
if ((((((*(P112)rt_nil_check(F->s_1846)).kind_ == ((rt_int)1LL)) && ((*(P112)rt_nil_check(F->s_1846)).depth_ <= (*(P112)rt_nil_check(F->y_887)).depth_)) && (f_lookup_369(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->s_1846)).name_))) == F->s_1846)) && f_assigns_nonlocal_874(F->up, (*(P112)rt_nil_check(F->y_887)).decl_, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->s_1846)).name_))))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_886)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_887)).name_))), rt_str(" assigns ", 9)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->s_1846)).name_))), rt_str(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_1846 = (*(P112)rt_nil_check(F->s_1846)).stack_;
}
L_end_1847: ;
ret_:

  return;
}

static void f_generic_p_890(struct f_greenc_1fr *up_, P169 *res_889) {
  struct f_generic_p_890fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_889 = res_889;
F->x_1848 = NULL;
F->p_1849 = NULL;
F->head_1850 = NULL;
F->tail_1851 = NULL;
F->names_1852 = NULL;
F->st_1853 = NULL;
F->def_1854 = NULL;
F->sub_1855 = NULL;
F->def_name_text_1856 = NULL;
F->more_1857 = 1;
f_expect_kw_289(F->up, rt_str("GENERIC", 7));
F->x_1848 = f_nn_267(F->up, ((rt_int)54LL), f_cur_line_274(F->up));
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
while (F->more_1857) {
if (f_at_kw_276(F->up, rt_str("RESTRICTED", 10))) {
f_skip_287(F->up);
}
if (f_at_kw_276(F->up, rt_str("TYPE", 4))) {
f_skip_287(F->up);
F->p_1849 = f_nn_267(F->up, ((rt_int)47LL), f_cur_line_274(F->up));
(*(P169)rt_nil_check(F->p_1849)).ival_ = ((rt_int)10LL);
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->p_1849)).name_);
f_append_271(F->up, &F->head_1850, &F->tail_1851, F->p_1849);
} else if ((f_at_kw_276(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_276(F->up, rt_str("FUNCTION", 8)))) {
F->p_1849 = f_nn_267(F->up, ((rt_int)47LL), f_cur_line_274(F->up));
(*(P169)rt_nil_check(F->p_1849)).ival_ = ((rt_int)11LL);
if (f_at_kw_276(F->up, rt_str("PROCEDURE", 9))) {
F->sub_1855 = f_nn_267(F->up, ((rt_int)44LL), f_cur_line_274(F->up));
} else {
F->sub_1855 = f_nn_267(F->up, ((rt_int)45LL), f_cur_line_274(F->up));
}
f_skip_287(F->up);
f_designator_342(F->up, &(*(P169)rt_nil_check(F->sub_1855)).name_);
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_formal_part_340(F->up, &(*(P169)rt_nil_check(F->sub_1855)).a_);
}
if (f_at_kw_276(F->up, rt_str("RETURN", 6))) {
f_skip_287(F->up);
f_subtype_ind_322(F->up, &(*(P169)rt_nil_check(F->sub_1855)).b_);
}
(*(P169)rt_nil_check(F->sub_1855)).ival_ = ((rt_int)1LL);
(*(P169)rt_nil_check(F->p_1849)).name_ = (*(P169)rt_nil_check(F->sub_1855)).name_;
(*(P169)rt_nil_check(F->p_1849)).a_ = F->sub_1855;
if (f_at_kw_276(F->up, rt_str("IS", 2))) {
f_skip_287(F->up);
if (f_at_kind_280(F->up, ((rt_int)6LL))) {
f_designator_342(F->up, &F->def_name_text_1856);
(*(P169)rt_nil_check(F->p_1849)).b_ = f_nn_267(F->up, ((rt_int)5LL), f_cur_line_274(F->up));
(*(P169)rt_nil_check((*(P169)rt_nil_check(F->p_1849)).b_)).name_ = F->def_name_text_1856;
} else {
f_name_p_320(F->up, &(*(P169)rt_nil_check(F->p_1849)).b_);
}
}
f_append_271(F->up, &F->head_1850, &F->tail_1851, F->p_1849);
} else {
f_id_list_297(F->up, &F->names_1852);
f_expect_op_291(F->up, rt_str(":", 1));
if (f_at_kw_276(F->up, rt_str("IN", 2))) {
f_skip_287(F->up);
}
f_subtype_ind_322(F->up, &F->st_1853);
F->def_1854 = NULL;
if (f_at_op_278(F->up, rt_str(":=", 2))) {
f_skip_287(F->up);
f_expr_304(F->up, &F->def_1854);
}
while ((F->names_1852 != NULL)) {
F->p_1849 = f_nn_267(F->up, ((rt_int)47LL), (*(P169)rt_nil_check(F->names_1852)).line_);
(*(P169)rt_nil_check(F->p_1849)).ival_ = ((rt_int)1LL);
(*(P169)rt_nil_check(F->p_1849)).name_ = (*(P169)rt_nil_check(F->names_1852)).name_;
(*(P169)rt_nil_check(F->p_1849)).a_ = F->st_1853;
(*(P169)rt_nil_check(F->p_1849)).b_ = F->def_1854;
f_append_271(F->up, &F->head_1850, &F->tail_1851, F->p_1849);
F->names_1852 = (*(P169)rt_nil_check(F->names_1852)).next_;
}
L_end_1859: ;
}
F->more_1857 = f_at_op_278(F->up, rt_str(";", 1));
if (F->more_1857) {
f_skip_287(F->up);
}
}
L_end_1858: ;
f_expect_op_291(F->up, rt_str(")", 1));
}
if ((f_at_kw_276(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_276(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_344(F->up, &(*(P169)rt_nil_check(F->x_1848)).b_);
} else if (f_at_kw_276(F->up, rt_str("PACKAGE", 7))) {
f_package_p_350(F->up, &(*(P169)rt_nil_check(F->x_1848)).b_);
} else if (f_at_kw_276(F->up, rt_str("TASK", 4))) {
f_task_p_760(F->up, &(*(P169)rt_nil_check(F->x_1848)).b_);
} else {
f_perror_286(F->up, rt_str("a generic unit is a subprogram, a package or a task", 51));
}
(*(P169)rt_nil_check(F->x_1848)).a_ = F->head_1850;
(*(P169)rt_nil_check(F->x_1848)).name_ = (*(P169)rt_nil_check((*(P169)rt_nil_check(F->x_1848)).b_)).name_;
(*F->res_889) = F->x_1848;
ret_:

  return;
}

static void f_instantiation_893(struct f_greenc_1fr *up_, P169 x_891, P169 *res_892) {
  struct f_instantiation_893fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_891 = x_891;
F->res_892 = res_892;
F->i_1860 = NULL;
F->head_1861 = NULL;
F->tail_1862 = NULL;
F->a_1863 = NULL;
F->formal_1864 = NULL;
F->more_1866 = 1;
f_expect_kw_289(F->up, rt_str("IS", 2));
f_expect_kw_289(F->up, rt_str("NEW", 3));
F->i_1860 = f_nn_267(F->up, ((rt_int)53LL), (*(P169)rt_nil_check(F->x_891)).line_);
(*(P169)rt_nil_check(F->i_1860)).name_ = (*(P169)rt_nil_check(F->x_891)).name_;
(*(P169)rt_nil_check(F->i_1860)).ival_ = (*(P169)rt_nil_check(F->x_891)).kind_;
f_expect_id_293(F->up, &(*(P169)rt_nil_check(F->i_1860)).tag_);
if (f_at_op_278(F->up, rt_str("(", 1))) {
f_skip_287(F->up);
while (F->more_1866) {
F->formal_1864 = NULL;
F->mark_1865 = ((rt_int)0LL);
if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("IS", 2)))) {
f_expect_id_293(F->up, &F->formal_1864);
f_skip_287(F->up);
F->mark_1865 = ((rt_int)5LL);
} else if (((f_at_kind_280(F->up, ((rt_int)1LL)) && (f_kind_at_282(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_284(F->up, ((rt_int)1LL)), rt_str(":=:", 3))))) {
f_expect_id_293(F->up, &F->formal_1864);
f_skip_287(F->up);
F->mark_1865 = ((rt_int)1LL);
}
if ((f_at_kind_280(F->up, ((rt_int)6LL)) && (F->mark_1865 == ((rt_int)5LL)))) {
F->a_1863 = f_nn_267(F->up, ((rt_int)5LL), f_cur_line_274(F->up));
f_designator_342(F->up, &(*(P169)rt_nil_check(F->a_1863)).name_);
} else {
f_expr_304(F->up, &F->a_1863);
}
(*(P169)rt_nil_check(F->a_1863)).formal_ = F->formal_1864;
(*(P169)rt_nil_check(F->a_1863)).flag_ = F->mark_1865;
f_append_271(F->up, &F->head_1861, &F->tail_1862, F->a_1863);
F->more_1866 = f_at_op_278(F->up, rt_str(",", 1));
if (F->more_1866) {
f_skip_287(F->up);
}
}
L_end_1867: ;
f_expect_op_291(F->up, rt_str(")", 1));
}
f_expect_op_291(F->up, rt_str(";", 1));
(*(P169)rt_nil_check(F->i_1860)).a_ = F->head_1861;
(*F->res_892) = F->i_1860;
ret_:

  return;
}

static void f_generic_decl_895(struct f_greenc_1fr *up_, P169 e_894) {
  struct f_generic_decl_895fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_894 = e_894;
F->y_1868 = NULL;
if (((*(P169)rt_nil_check(F->e_894)).kind_ == ((rt_int)54LL))) {
F->y_1868 = f_new_sym_402(F->up, ((rt_int)11LL), (*(P169)rt_nil_check(F->e_894)).name_);
(*(P112)rt_nil_check(F->y_1868)).decl_ = F->e_894;
f_define_397(F->up, F->y_1868, (*(P169)rt_nil_check(F->e_894)).line_);
} else if (((*(P169)rt_nil_check(F->e_894)).kind_ == ((rt_int)53LL))) {
f_instantiate_912(F->up, F->e_894);
} else {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_894)).line_, rt_str("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_897(struct f_greenc_1fr *up_, rstr n_896) {
  struct f_is_generic_name_897fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_896 = rt_str_copy(n_896);
F->y_1869 = NULL;
F->y_1869 = f_lookup_369(F->up, F->n_896);
F->result_ = ((F->y_1869 != NULL) && ((*(P112)rt_nil_check(F->y_1869)).kind_ == ((rt_int)11LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_899(struct f_greenc_1fr *up_, P169 e_898) {
  struct f_attach_generic_body_899fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_898 = e_898;
F->y_1870 = NULL;
F->y_1870 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_898)).name_)));
(*(P169)rt_nil_check((*(P112)rt_nil_check(F->y_1870)).decl_)).c_ = F->e_898;
F->up->generic_contexts_143 = ({ R142 *cell1871 = rt_alloc(sizeof(R142)); *cell1871 = cp_R142(({ R142 ag1872; ag1872.body_node_ = F->e_898; ag1872.visible_ = F->up->scope_stack_116; ag1872.next_ = F->up->generic_contexts_143; ag1872; })); (P141)cell1871; });
ret_:

  return;
}

static void f_restore_generic_context_902(struct f_greenc_1fr *up_, P169 body_node_900, rt_int line_901) {
  struct f_restore_generic_context_902fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_900 = body_node_900;
F->line_901 = line_901;
F->ctx_1873 = NULL;
F->ctx_1873 = F->up->generic_contexts_143;
F->m_1874 = NULL;
F->z_1875 = NULL;
while (((F->ctx_1873 != NULL) && ((*(P141)rt_nil_check(F->ctx_1873)).body_node_ != F->body_node_900))) {
F->ctx_1873 = (*(P141)rt_nil_check(F->ctx_1873)).next_;
}
L_end_1877: ;
if ((F->ctx_1873 == NULL)) {
goto ret_;
}
F->m_1874 = (*(P141)rt_nil_check(F->ctx_1873)).visible_;
while ((F->m_1874 != NULL)) {
if ((((*(P112)rt_nil_check(F->m_1874)).level_ <= ((rt_int)0LL)) && ((*(P112)rt_nil_check(F->m_1874)).kind_ != ((rt_int)11LL)))) {
F->z_1875 = F->up->table_114.p[rt_index(f_hash_367(F->up, (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1874)).name_))), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
F->seen_1876 = 0;
while ((F->z_1875 != NULL)) {
if ((((*(P112)rt_nil_check(F->z_1875)).depth_ == F->up->depth_115) && rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->z_1875)).name_)), (*(P135)rt_nil_check((*(P112)rt_nil_check(F->m_1874)).name_))))) {
F->seen_1876 = 1;
}
F->z_1875 = (*(P112)rt_nil_check(F->z_1875)).chain_;
}
L_end_1879: ;
if ((!F->seen_1876)) {
f_copy_sym_718(F->up, F->m_1874, &F->z_1875);
f_define_397(F->up, F->z_1875, F->line_901);
}
}
F->m_1874 = (*(P112)rt_nil_check(F->m_1874)).stack_;
}
L_end_1878: ;
ret_:

  return;
}

static P169 f_gactual_906(struct f_greenc_1fr *up_, P169 args_903, rt_int nth_904, rstr name_905) {
  struct f_gactual_906fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_903 = args_903;
F->nth_904 = nth_904;
F->name_905 = rt_str_copy(name_905);
F->a_1880 = NULL;
F->a_1880 = F->args_903;
F->i_1881 = ((rt_int)1LL);
while ((F->a_1880 != NULL)) {
if ((((*(P169)rt_nil_check(F->a_1880)).formal_ == NULL) && (F->i_1881 == F->nth_904))) {
F->result_ = F->a_1880;
goto ret_;
}
if ((((*(P169)rt_nil_check(F->a_1880)).formal_ != NULL) && rt_str_eq((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1880)).formal_)), F->name_905))) {
F->result_ = F->a_1880;
goto ret_;
}
if (((*(P169)rt_nil_check(F->a_1880)).formal_ == NULL)) {
F->i_1881 = rt_add(F->i_1881, ((rt_int)1LL));
}
F->a_1880 = (*(P169)rt_nil_check(F->a_1880)).next_;
}
L_end_1882: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_910(struct f_greenc_1fr *up_, P169 n_907, P135 name_908, P169 *r_909) {
  struct f_copy_node_910fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_907 = n_907;
F->name_908 = name_908;
F->r_909 = r_909;
(*F->r_909) = f_nn_267(F->up, (*(P169)rt_nil_check(F->n_907)).kind_, (*(P169)rt_nil_check(F->n_907)).line_);
as_R170(&(*(P169)rt_nil_check((*F->r_909))), (*(P169)rt_nil_check(F->n_907)));
(*(P169)rt_nil_check((*F->r_909))).name_ = F->name_908;
(*(P169)rt_nil_check((*F->r_909))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_912(struct f_greenc_1fr *up_, P169 e_911) {
  struct f_instantiate_912fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_911 = e_911;
F->g_1883 = NULL;
F->g_1883 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_911)).tag_)));
F->gd_1884 = NULL;
F->pat_1885 = NULL;
F->f_1886 = NULL;
F->a_1887 = NULL;
F->cn_1888 = NULL;
F->y_1889 = NULL;
F->z_1890 = NULL;
F->fs_1891 = NULL;
F->nth_1892 = ((rt_int)1LL);
F->t_1893 = NULL;
F->vt_1894 = NULL;
F->c_1895 = NULL;
F->v_1896 = NULL;
F->acc_1897 = NULL;
F->x_1898 = NULL;
if (((F->g_1883 == NULL) || ((*(P112)rt_nil_check(F->g_1883)).kind_ != ((rt_int)11LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_911)).tag_)), rt_str(" is not a generic unit", 22)));
}
F->gd_1884 = (*(P112)rt_nil_check(F->g_1883)).decl_;
F->pat_1885 = (*(P169)rt_nil_check(F->gd_1884)).b_;
f_open_scope_398(F->up);
F->f_1886 = (*(P169)rt_nil_check(F->gd_1884)).a_;
while ((F->f_1886 != NULL)) {
F->a_1887 = f_gactual_906(F->up, (*(P169)rt_nil_check(F->e_911)).a_, F->nth_1892, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_1886)).name_)));
F->nth_1892 = rt_add(F->nth_1892, ((rt_int)1LL));
if (((*(P169)rt_nil_check(F->f_1886)).ival_ == ((rt_int)10LL))) {
if (((F->a_1887 == NULL) || ((*(P169)rt_nil_check(F->a_1887)).kind_ != ((rt_int)5LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat(rt_str("a type is required for generic parameter ", 41), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_1886)).name_))));
}
F->y_1889 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1887)).name_)));
if (((F->y_1889 == NULL) || ((*(P112)rt_nil_check(F->y_1889)).kind_ != ((rt_int)5LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat((*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1887)).name_)), rt_str(" is not a type", 14)));
}
f_copy_sym_718(F->up, F->y_1889, &F->z_1890);
(*(P112)rt_nil_check(F->z_1890)).name_ = (*(P169)rt_nil_check(F->f_1886)).name_;
f_define_397(F->up, F->z_1890, (*(P169)rt_nil_check(F->e_911)).line_);
} else if (((*(P169)rt_nil_check(F->f_1886)).ival_ == ((rt_int)11LL))) {
if ((F->a_1887 == NULL)) {
F->a_1887 = (*(P169)rt_nil_check(F->f_1886)).b_;
}
if (((F->a_1887 == NULL) || ((*(P169)rt_nil_check(F->a_1887)).kind_ != ((rt_int)5LL)))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat(rt_str("a subprogram is required for generic parameter ", 47), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_1886)).name_))));
}
f_build_subprogram_505(F->up, (*(P169)rt_nil_check(F->f_1886)).a_, &F->fs_1891);
F->y_1889 = F->up->table_114.p[rt_index(f_hash_367(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1887)).name_))), F->up->table_114.lo, F->up->table_114.hi) - F->up->table_114.lo];
while (((F->y_1889 != NULL) && (!(((rt_str_eq((*(P135)rt_nil_check((*(P112)rt_nil_check(F->y_1889)).name_)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1887)).name_))) && (((*(P112)rt_nil_check(F->y_1889)).kind_ == ((rt_int)3LL)) || ((*(P112)rt_nil_check(F->y_1889)).kind_ == ((rt_int)4LL)))) && f_same_signature_394(F->up, (*(P112)rt_nil_check(F->y_1889)).params_, (*(P112)rt_nil_check(F->fs_1891)).params_)) && f_same_382(F->up, (*(P112)rt_nil_check(F->y_1889)).result_, (*(P112)rt_nil_check(F->fs_1891)).result_))))) {
F->y_1889 = (*(P112)rt_nil_check(F->y_1889)).chain_;
}
L_end_1901: ;
if ((F->y_1889 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no subprogram ", 14), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->a_1887)).name_))), rt_str(" matches generic parameter ", 27)), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_1886)).name_))));
}
f_copy_sym_718(F->up, F->y_1889, &F->z_1890);
(*(P112)rt_nil_check(F->z_1890)).name_ = (*(P169)rt_nil_check(F->f_1886)).name_;
f_define_397(F->up, F->z_1890, (*(P169)rt_nil_check(F->e_911)).line_);
} else {
if ((F->a_1887 == NULL)) {
F->a_1887 = (*(P169)rt_nil_check(F->f_1886)).b_;
}
if ((F->a_1887 == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat(rt_str("no actual for generic parameter ", 32), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_1886)).name_))));
}
f_resolve_432(F->up, (*(P169)rt_nil_check(F->f_1886)).a_, &F->t_1893, &F->c_1895);
f_gexpr_615(F->up, F->a_1887, F->t_1893, &F->vt_1894, &F->v_1896);
f_check_type_411(F->up, F->vt_1894, F->t_1893, (*(P169)rt_nil_check(F->e_911)).line_);
F->z_1890 = f_new_sym_402(F->up, ((rt_int)2LL), (*(P169)rt_nil_check(F->f_1886)).name_);
f_storage_495(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->f_1886)).name_)), F->t_1893, &F->acc_1897);
f_copy_code_480(F->up, F->t_1893, (*(P135)rt_nil_check(F->v_1896)), &F->x_1898);
f_emit_228(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P135)rt_nil_check(F->acc_1897)), rt_str(" = ", 3)), (*(P135)rt_nil_check(F->x_1898))), 59));
(*(P112)rt_nil_check(F->z_1890)).t_ = F->t_1893;
(*(P112)rt_nil_check(F->z_1890)).c_ = F->c_1895;
(*(P112)rt_nil_check(F->z_1890)).ro_ = 1;
if (((*(P117)rt_nil_check(F->t_1893)).kind_ == ((rt_int)1LL))) {
f_manifest_428(F->up, F->a_1887, &(*(P112)rt_nil_check(F->z_1890)).mvalue_, &F->ok_1899);
(*(P112)rt_nil_check(F->z_1890)).hasmv_ = F->ok_1899;
}
f_bind_498(F->up, F->z_1890, F->acc_1897);
f_define_397(F->up, F->z_1890, (*(P169)rt_nil_check(F->e_911)).line_);
}
F->f_1886 = (*(P169)rt_nil_check(F->f_1886)).next_;
}
L_end_1900: ;
if (((*(P169)rt_nil_check(F->gd_1884)).c_ != NULL)) {
f_restore_generic_context_902(F->up, (*(P169)rt_nil_check(F->gd_1884)).c_, (*(P169)rt_nil_check(F->e_911)).line_);
}
if ((((*(P169)rt_nil_check(F->pat_1885)).kind_ == ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->pat_1885)).kind_ == ((rt_int)45LL)))) {
if (((*(P169)rt_nil_check(F->pat_1885)).ival_ == ((rt_int)1LL))) {
if (((*(P169)rt_nil_check(F->gd_1884)).c_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic ", 20), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_911)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
F->pat_1885 = (*(P169)rt_nil_check(F->gd_1884)).c_;
}
f_copy_node_910(F->up, F->pat_1885, (*(P169)rt_nil_check(F->e_911)).name_, &F->cn_1888);
f_build_subprogram_505(F->up, F->cn_1888, &F->y_1889);
f_define_397(F->up, F->y_1889, (*(P169)rt_nil_check(F->e_911)).line_);
f_subprogram_body_520(F->up, F->cn_1888, F->y_1889);
} else if (((*(P169)rt_nil_check(F->pat_1885)).kind_ == ((rt_int)48LL))) {
f_copy_node_910(F->up, F->pat_1885, (*(P169)rt_nil_check(F->e_911)).name_, &F->cn_1888);
f_package_spec_723(F->up, F->cn_1888);
F->y_1889 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_911)).name_)));
if (((*(P169)rt_nil_check(F->gd_1884)).c_ != NULL)) {
f_copy_node_910(F->up, (*(P169)rt_nil_check(F->gd_1884)).c_, (*(P169)rt_nil_check(F->e_911)).name_, &F->cn_1888);
f_package_body_728(F->up, F->cn_1888);
}
} else {
f_copy_node_910(F->up, F->pat_1885, (*(P169)rt_nil_check(F->e_911)).name_, &F->cn_1888);
f_task_spec_815(F->up, F->cn_1888);
F->y_1889 = f_lookup_369(F->up, (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_911)).name_)));
if (((*(P169)rt_nil_check(F->gd_1884)).c_ == NULL)) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->e_911)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic task ", 25), (*(P135)rt_nil_check((*(P169)rt_nil_check(F->e_911)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
f_copy_node_910(F->up, (*(P169)rt_nil_check(F->gd_1884)).c_, (*(P169)rt_nil_check(F->e_911)).name_, &F->cn_1888);
f_task_body_819(F->up, F->cn_1888);
}
f_close_scope_399(F->up);
f_define_397(F->up, F->y_1889, (*(P169)rt_nil_check(F->e_911)).line_);
ret_:

  return;
}

static void f_predef_type_917(struct f_greenc_1fr *up_, rstr name_913, P117 t_914, rstr lo_915, rstr hi_916) {
  struct f_predef_type_917fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_913 = rt_str_copy(name_913);
F->t_914 = t_914;
F->lo_915 = rt_str_copy(lo_915);
F->hi_916 = rt_str_copy(hi_916);
F->y_1902 = NULL;
F->y_1902 = f_new_sym_402(F->up, ((rt_int)5LL), f_mk_201(F->up, F->name_913));
(*(P112)rt_nil_check(F->y_1902)).t_ = F->t_914;
if (((F->lo_915).len > ((rt_int)0LL))) {
(*(P112)rt_nil_check(F->y_1902)).c_ = f_new_cons_405(F->up);
(*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1902)).c_)).lo_ = f_mk_201(F->up, F->lo_915);
(*(P173)rt_nil_check((*(P112)rt_nil_check(F->y_1902)).c_)).hi_ = f_mk_201(F->up, F->hi_916);
}
f_define_397(F->up, F->y_1902, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_921(struct f_greenc_1fr *up_, rstr name_918, P117 t_919, rstr code_text_920) {
  struct f_predef_const_921fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_918 = rt_str_copy(name_918);
F->t_919 = t_919;
F->code_text_920 = rt_str_copy(code_text_920);
F->y_1903 = NULL;
F->y_1903 = f_new_sym_402(F->up, ((rt_int)2LL), f_mk_201(F->up, F->name_918));
(*(P112)rt_nil_check(F->y_1903)).t_ = F->t_919;
(*(P112)rt_nil_check(F->y_1903)).ro_ = 1;
(*(P112)rt_nil_check(F->y_1903)).access_path_ = f_mk_201(F->up, F->code_text_920);
f_define_397(F->up, F->y_1903, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_923(struct f_greenc_1fr *up_, rstr name_922) {
  struct f_predef_exc_923fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_922 = rt_str_copy(name_922);
F->y_1904 = NULL;
F->y_1904 = f_new_sym_402(F->up, ((rt_int)6LL), f_mk_201(F->up, F->name_922));
(*(P112)rt_nil_check(F->y_1904)).cname_ = f_mk_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_219(F->up)), F->name_922), f_q_219(F->up)), 41));
f_define_397(F->up, F->y_1904, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_927(struct f_greenc_1fr *up_, rstr name_924, P117 t_925, rt_int v_926) {
  struct f_predef_lit_927fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_924 = rt_str_copy(name_924);
F->t_925 = t_925;
F->v_926 = v_926;
F->y_1905 = NULL;
F->y_1905 = f_new_sym_402(F->up, ((rt_int)7LL), f_mk_201(F->up, F->name_924));
(*(P112)rt_nil_check(F->y_1905)).t_ = F->t_925;
(*(P112)rt_nil_check(F->y_1905)).result_ = F->t_925;
(*(P112)rt_nil_check(F->y_1905)).mvalue_ = F->v_926;
(*(P112)rt_nil_check(F->y_1905)).hasmv_ = 1;
f_define_397(F->up, F->y_1905, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_928(struct f_greenc_1fr *up_) {
  struct f_predefine_928fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_1906 = rt_str_copy(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_str("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_1907 = ((rt_int)1LL);
F->code_no_1908 = ((rt_int)0LL);
f_predef_type_917(F->up, rt_str("INTEGER", 7), F->up->ty_int_151, rt_str("", 0), rt_str("", 0));
f_predef_type_917(F->up, rt_str("SHORT_INTEGER", 13), F->up->ty_short_162, rt_str("", 0), rt_str("", 0));
f_predef_type_917(F->up, rt_str("LONG_INTEGER", 12), F->up->ty_long_163, rt_str("", 0), rt_str("", 0));
f_predef_type_917(F->up, rt_str("NATURAL", 7), F->up->ty_int_151, rt_str("1", 1), rt_str("INT64_MAX", 9));
f_predef_type_917(F->up, rt_str("PRIORITY", 8), F->up->ty_int_151, rt_str("0", 1), rt_str("255", 3));
f_predef_type_917(F->up, rt_str("BOOLEAN", 7), F->up->ty_bool_152, rt_str("0", 1), rt_str("1", 1));
f_predef_type_917(F->up, rt_str("CHARACTER", 9), F->up->ty_char_154, rt_str("0", 1), rt_str("127", 3));
f_predef_type_917(F->up, rt_str("STRING", 6), F->up->ty_string_155, rt_str("", 0), rt_str("", 0));
f_predef_type_917(F->up, rt_str("FLOAT", 5), F->up->ty_float_153, rt_str("", 0), rt_str("", 0));
f_predef_type_917(F->up, rt_str("SHORT_FLOAT", 11), F->up->ty_sfloat_164, rt_str("", 0), rt_str("", 0));
f_predef_type_917(F->up, rt_str("LONG_FLOAT", 10), F->up->ty_lfloat_165, rt_str("", 0), rt_str("", 0));
f_predef_type_917(F->up, rt_str("TIME", 4), F->up->ty_time_166, rt_str("", 0), rt_str("", 0));
f_predef_lit_927(F->up, rt_str("FALSE", 5), F->up->ty_bool_152, ((rt_int)0LL));
f_predef_lit_927(F->up, rt_str("TRUE", 4), F->up->ty_bool_152, ((rt_int)1LL));
{ rt_int lo1911 = ((rt_int)1LL), hi1912 = (F->control_1906).len;
for (rt_int it1913 = lo1911; it1913 <= hi1912; it1913++) {
F->i_1910 = it1913;
if ((rt_str_get(F->control_1906, F->i_1910) == 32)) {
f_predef_const_921(F->up, rt_str_slice(F->control_1906, F->start_1907, rt_sub(F->i_1910, ((rt_int)1LL))), F->up->ty_char_154, rt_str_of_int(F->code_no_1908));
F->code_no_1908 = rt_add(F->code_no_1908, ((rt_int)1LL));
F->start_1907 = rt_add(F->i_1910, ((rt_int)1LL));
}
}
}
L_end_1909: ;
f_predef_const_921(F->up, rt_str("DEL", 3), F->up->ty_char_154, rt_str("127", 3));
f_predef_const_921(F->up, rt_str("EXCLAM", 6), F->up->ty_char_154, rt_str("33", 2));
f_predef_const_921(F->up, rt_str("DOLLAR", 6), F->up->ty_char_154, rt_str("36", 2));
f_predef_const_921(F->up, rt_str("QUESTION", 8), F->up->ty_char_154, rt_str("63", 2));
f_predef_const_921(F->up, rt_str("AT_SIGN", 7), F->up->ty_char_154, rt_str("64", 2));
f_predef_const_921(F->up, rt_str("L_BRACKET", 9), F->up->ty_char_154, rt_str("91", 2));
f_predef_const_921(F->up, rt_str("BACK_SLASH", 10), F->up->ty_char_154, rt_str("92", 2));
f_predef_const_921(F->up, rt_str("R_BRACKET", 9), F->up->ty_char_154, rt_str("93", 2));
f_predef_const_921(F->up, rt_str("CIRCUMFLEX", 10), F->up->ty_char_154, rt_str("94", 2));
f_predef_const_921(F->up, rt_str("GRAVE", 5), F->up->ty_char_154, rt_str("96", 2));
f_predef_const_921(F->up, rt_str("L_BRACE", 7), F->up->ty_char_154, rt_str("123", 3));
f_predef_const_921(F->up, rt_str("R_BRACE", 7), F->up->ty_char_154, rt_str("125", 3));
f_predef_const_921(F->up, rt_str("TILDE", 5), F->up->ty_char_154, rt_str("126", 3));
{ rt_int lo1916 = ((rt_int)0LL), hi1917 = ((rt_int)25LL);
for (rt_int it1918 = lo1916; it1918 <= hi1917; it1918++) {
F->i_1915 = it1918;
f_predef_const_921(F->up, rt_str_catc(rt_str("LC_", 3), rt_range((rt_add(((rt_int)66LL), F->i_1915) - 1), 0, 127)), F->up->ty_char_154, rt_str_of_int(rt_add(((rt_int)97LL), F->i_1915)));
}
}
L_end_1914: ;
f_predef_const_921(F->up, rt_str("NEWLINE", 7), F->up->ty_string_155, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_q_219(F->up)), rt_str("\\n", 2)), f_q_219(F->up)), rt_str(", 1)", 4)));
f_predef_const_921(F->up, rt_str("SECONDS", 7), F->up->ty_time_166, rt_str("((double)RT_SECONDS)", 20));
f_predef_exc_923(F->up, rt_str("ACCESS_ERROR", 12));
f_predef_exc_923(F->up, rt_str("ASSERT_ERROR", 12));
f_predef_exc_923(F->up, rt_str("DISCRIMINANT_ERROR", 18));
f_predef_exc_923(F->up, rt_str("DIVIDE_ERROR", 12));
f_predef_exc_923(F->up, rt_str("FAILURE", 7));
f_predef_exc_923(F->up, rt_str("INDEX_ERROR", 11));
f_predef_exc_923(F->up, rt_str("INITIATE_ERROR", 14));
f_predef_exc_923(F->up, rt_str("NO_VALUE_ERROR", 14));
f_predef_exc_923(F->up, rt_str("OVERFLOW", 8));
f_predef_exc_923(F->up, rt_str("OVERLAP_ERROR", 13));
f_predef_exc_923(F->up, rt_str("RANGE_ERROR", 11));
f_predef_exc_923(F->up, rt_str("SELECT_ERROR", 12));
f_predef_exc_923(F->up, rt_str("STORAGE_OVERFLOW", 16));
f_predef_exc_923(F->up, rt_str("TASKING_ERROR", 13));
f_predef_exc_923(F->up, rt_str("UNDERFLOW", 9));
f_predef_exc_923(F->up, rt_str("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_930(struct f_greenc_1fr *up_, P169 u_929) {
  struct f_translate_930fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_929 = u_929;
F->p_1919 = NULL;
F->p_1919 = F->u_929;
F->y_1920 = NULL;
f_open_scope_398(F->up);
while ((F->p_1919 != NULL)) {
if (((*(P169)rt_nil_check(F->p_1919)).next_ == NULL)) {
if ((((*(P169)rt_nil_check(F->p_1919)).kind_ != ((rt_int)44LL)) || ((*(P169)rt_nil_check(F->p_1919)).a_ != NULL))) {
f_fail_222(F->up, (*(P169)rt_nil_check(F->p_1919)).line_, rt_str("the main program is a procedure without parameters", 50));
}
f_build_subprogram_505(F->up, F->p_1919, &F->y_1920);
f_define_397(F->up, F->y_1920, (*(P169)rt_nil_check(F->p_1919)).line_);
f_subprogram_body_520(F->up, F->p_1919, F->y_1920);
F->up->main_name_195 = (*(P112)rt_nil_check(F->y_1920)).cname_;
} else {
f_decl_element_509(F->up, F->p_1919);
}
F->p_1919 = (*(P169)rt_nil_check(F->p_1919)).next_;
}
L_end_1921: ;
ret_:

  return;
}

static void f_print_program_931(struct f_greenc_1fr *up_) {
  struct f_print_program_931fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_489(F->up);
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_219(F->up)), rt_str("paleo.h", 7)), f_q_219(F->up)));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("#include <math.h>", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_230(F->up, F->up->out_types_123);
f_print_buffer_230(F->up, F->up->out_frames_124);
f_print_buffer_230(F->up, F->up->out_helpers_125);
f_print_buffer_230(F->up, F->up->out_protos_126);
f_print_buffer_230(F->up, F->up->out_globals_127);
f_print_buffer_230(F->up, F->up->out_funcs_128);
rt_g_put(rt_str("int main(int argc, char **argv) {", 33));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_init(argc, argv);", 22));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_set_lang(1);", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_230(F->up, F->up->out_excs_130);
f_print_buffer_230(F->up, F->up->out_init_129);
rt_g_put(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P135)rt_nil_check(F->up->main_name_195))), rt_str("();", 3)));
rt_g_put(rt_str("\n", 1));
f_print_buffer_230(F->up, F->up->out_awaits_183);
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
F->t_fixed_91 = ((rt_int)16LL);
F->y_var_92 = ((rt_int)1LL);
F->y_const_93 = ((rt_int)2LL);
F->y_func_94 = ((rt_int)3LL);
F->y_proc_95 = ((rt_int)4LL);
F->y_type_96 = ((rt_int)5LL);
F->y_exc_97 = ((rt_int)6LL);
F->y_enumlit_98 = ((rt_int)7LL);
F->y_package_99 = ((rt_int)8LL);
F->y_task_100 = ((rt_int)9LL);
F->y_entry_101 = ((rt_int)10LL);
F->y_generic_102 = ((rt_int)11LL);
F->toks_107.lo = ((rt_int)1LL); F->toks_107.hi = ((rt_int)1000000LL); F->toks_107.lo2 = 1; F->toks_107.hi2 = 1;
F->toks_107.p = rt_alloc(sizeof(P105) * (size_t)RT_CNT(F->toks_107));
F->ntoks_108 = ((rt_int)0LL);
F->tpos_109 = ((rt_int)1LL);
F->src_line_110 = ((rt_int)0LL);
F->table_114.lo = ((rt_int)0LL); F->table_114.hi = ((rt_int)4092LL); F->table_114.lo2 = 1; F->table_114.hi2 = 1;
F->table_114.p = rt_alloc(sizeof(P112) * (size_t)RT_CNT(F->table_114));
F->depth_115 = ((rt_int)0LL);
F->scope_stack_116 = NULL;
F->all_types_119 = NULL;
F->serial_120 = ((rt_int)0LL);
F->out_types_123 = NULL;
F->out_frames_124 = NULL;
F->out_helpers_125 = NULL;
F->out_protos_126 = NULL;
F->out_globals_127 = NULL;
F->out_funcs_128 = NULL;
F->out_init_129 = NULL;
F->out_excs_130 = NULL;
F->code_131 = NULL;
F->fields_buf_132 = NULL;
F->in_func_133 = 0;
F->cur_level_134 = ((rt_int)0LL);
F->st_field_136 = NULL;
F->func_sym_137 = NULL;
F->exits_140 = NULL;
F->generic_contexts_143 = NULL;
F->accept_exits_144 = NULL;
F->frames_145 = ((rt_int)0LL);
F->handlers_148 = NULL;
F->cleanups_149 = NULL;
F->trial_150 = ((rt_int)0LL);
F->ty_int_151 = NULL;
F->ty_bool_152 = NULL;
F->ty_float_153 = NULL;
F->ty_char_154 = NULL;
F->ty_string_155 = NULL;
F->ty_void_156 = NULL;
F->ty_nil_157 = NULL;
F->ty_univ_158 = NULL;
F->ty_act_159 = NULL;
F->ty_tdecl_160 = NULL;
F->ty_entry_161 = NULL;
F->ty_short_162 = NULL;
F->ty_long_163 = NULL;
F->ty_sfloat_164 = NULL;
F->ty_lfloat_165 = NULL;
F->ty_time_166 = NULL;
F->ty_ufixed_167 = NULL;
F->completing_168 = NULL;
F->anon_node_171 = NULL;
F->anon_typ_172 = NULL;
F->anon_cons_175 = NULL;
F->cur_task_176 = NULL;
F->accept_depth_177 = ((rt_int)0LL);
F->famarg_done_178 = 0;
F->fam_ix_179 = NULL;
F->call_task_ix_180 = NULL;
F->saw_interface_181 = 0;
F->defer_entry_structs_182 = 0;
F->out_awaits_183 = NULL;
F->no_cons_184 = NULL;
F->units_185 = NULL;
F->pkg_stack_186 = NULL;
F->cur_pkg_187 = NULL;
F->prefix_hint_188 = NULL;
F->call_want_189 = NULL;
F->pure_sym_190 = NULL;
F->pure_depth_191 = ((rt_int)0LL);
F->vrp_ok_192 = 0;
F->in_lv_path_193 = 0;
F->last_deref_194 = 0;
F->main_name_195 = NULL;
F->conf_system_196 = NULL;
F->conf_storage_unit_197 = ((rt_int)8LL);
F->conf_memory_size_198 = ((rt_int)1048576LL);
F->conf_optimize_199 = NULL;
F->out_types_123 = f_new_buffer_223(F);
F->out_frames_124 = f_new_buffer_223(F);
F->out_helpers_125 = f_new_buffer_223(F);
F->out_protos_126 = f_new_buffer_223(F);
F->out_globals_127 = f_new_buffer_223(F);
F->out_funcs_128 = f_new_buffer_223(F);
F->out_init_129 = f_new_buffer_223(F);
F->out_excs_130 = f_new_buffer_223(F);
F->code_131 = F->out_init_129;
F->no_cons_184 = f_new_cons_405(F);
F->ty_int_151 = f_new_typ_404(F, ((rt_int)1LL));
F->ty_bool_152 = f_new_typ_404(F, ((rt_int)2LL));
F->ty_float_153 = f_new_typ_404(F, ((rt_int)3LL));
F->ty_char_154 = f_new_typ_404(F, ((rt_int)11LL));
F->ty_string_155 = f_new_typ_404(F, ((rt_int)5LL));
F->ty_void_156 = f_new_typ_404(F, ((rt_int)9LL));
F->ty_nil_157 = f_new_typ_404(F, ((rt_int)10LL));
F->ty_act_159 = f_new_typ_404(F, ((rt_int)13LL));
F->ty_tdecl_160 = f_new_typ_404(F, ((rt_int)14LL));
F->ty_entry_161 = f_new_typ_404(F, ((rt_int)15LL));
(*(P117)rt_nil_check(F->ty_int_151)).name_ = f_mk_201(F, rt_str("INTEGER", 7));
(*(P117)rt_nil_check(F->ty_float_153)).name_ = f_mk_201(F, rt_str("FLOAT", 5));
(*(P117)rt_nil_check(F->ty_float_153)).ndigits_ = ((rt_int)15LL);
F->ty_short_162 = f_new_typ_404(F, ((rt_int)1LL));
(*(P117)rt_nil_check(F->ty_short_162)).name_ = f_mk_201(F, rt_str("SHORT_INTEGER", 13));
F->ty_long_163 = f_new_typ_404(F, ((rt_int)1LL));
(*(P117)rt_nil_check(F->ty_long_163)).name_ = f_mk_201(F, rt_str("LONG_INTEGER", 12));
F->ty_sfloat_164 = f_new_typ_404(F, ((rt_int)3LL));
(*(P117)rt_nil_check(F->ty_sfloat_164)).name_ = f_mk_201(F, rt_str("SHORT_FLOAT", 11));
(*(P117)rt_nil_check(F->ty_sfloat_164)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_165 = f_new_typ_404(F, ((rt_int)3LL));
(*(P117)rt_nil_check(F->ty_lfloat_165)).name_ = f_mk_201(F, rt_str("LONG_FLOAT", 10));
(*(P117)rt_nil_check(F->ty_lfloat_165)).ndigits_ = ((rt_int)15LL);
F->ty_time_166 = f_new_typ_404(F, ((rt_int)3LL));
(*(P117)rt_nil_check(F->ty_time_166)).name_ = f_mk_201(F, rt_str("TIME", 4));
(*(P117)rt_nil_check(F->ty_time_166)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_167 = f_new_typ_404(F, ((rt_int)16LL));
(*(P117)rt_nil_check(F->ty_ufixed_167)).name_ = f_mk_201(F, rt_str("universal fixed", 15));
F->out_awaits_183 = f_new_buffer_223(F);
f_predefine_928(F);
f_read_source_264(F);
f_compilation_365(F, &F->units_185);
if ((F->units_185 == NULL)) {
f_fail_222(F, ((rt_int)1LL), rt_str("the compilation is empty", 24));
}
f_translate_930(F, F->units_185);
f_print_program_931(F);
ret_:

  return;
}

static void as_R1206(R1206 *d, R1206 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
  d->dflt_ = s.dflt_;
}
static R1206 cp_R1206(R1206 s) {
  R1206 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  d.dflt_ = s.dflt_;
  return d;
}
static int eq_R1206(R1206 a, R1206 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_);
}
static void as_R1195(R1195 *d, R1195 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1195 cp_R1195(R1195 s) {
  R1195 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1195(R1195 a, R1195 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
}
static void as_R174(R174 *d, R174 s) {
  d->lo_ = s.lo_;
  d->hi_ = s.hi_;
  d->slen_ = s.slen_;
  d->mlo_ = s.mlo_;
  d->mhi_ = s.mhi_;
  d->hasm_ = s.hasm_;
  d->lo2_ = s.lo2_;
  d->hi2_ = s.hi2_;
  d->acc_ = s.acc_;
}
static R174 cp_R174(R174 s) {
  R174 d = s;
  d.lo_ = s.lo_;
  d.hi_ = s.hi_;
  d.slen_ = s.slen_;
  d.mlo_ = s.mlo_;
  d.mhi_ = s.mhi_;
  d.hasm_ = s.hasm_;
  d.lo2_ = s.lo2_;
  d.hi2_ = s.hi2_;
  d.acc_ = s.acc_;
  return d;
}
static int eq_R174(R174 a, R174 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_) && (a.acc_ == b.acc_);
}
static void as_R170(R170 *d, R170 s) {
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
static R170 cp_R170(R170 s) {
  R170 d = s;
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
static int eq_R170(R170 a, R170 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R147(R147 *d, R147 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R147 cp_R147(R147 s) {
  R147 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R147(R147 a, R147 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R142(R142 *d, R142 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R142 cp_R142(R142 s) {
  R142 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R142(R142 a, R142 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R139(R139 *d, R139 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R139 cp_R139(R139 s) {
  R139 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R139(R139 a, R139 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R122(R122 *d, R122 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R122 cp_R122(R122 s) {
  R122 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R122(R122 a, R122 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R118(R118 *d, R118 s) {
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
static R118 cp_R118(R118 s) {
  R118 d = s;
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
static int eq_R118(R118 a, R118 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_);
}
static void as_R113(R113 *d, R113 s) {
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
static R113 cp_R113(R113 s) {
  R113 d = s;
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
static int eq_R113(R113 a, R113 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_);
}
static void as_A111(A111 *d, A111 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A111 cp_A111(A111 s) {
  A111 d = s; d.p = rt_alloc(sizeof(P112) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A111(A111 a, A111 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R106(R106 *d, R106 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R106 cp_R106(R106 s) {
  R106 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R106(R106 a, R106 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A104(A104 *d, A104 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A104 cp_A104(A104 s) {
  A104 d = s; d.p = rt_alloc(sizeof(P105) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A104(A104 a, A104 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(1);
  ex_compile_error_103 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
