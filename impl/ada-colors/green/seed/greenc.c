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
struct R164 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P133 name_; P133 tag_; P163 a_; P163 b_; P163 c_; P163 d_; P163 e_; P163 next_; };
typedef struct R1042 R1042;
typedef struct R1042 *P1041;
struct R111 { int dummy_; rt_int kind_; P133 name_; P115 t_; P170 c_; P133 access_path_; P133 cname_; int ro_; rt_int mvalue_; int hasmv_; P163 decl_; P1041 params_; P115 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P110 members_; P110 mnext_; P110 chain_; P110 stack_; };
typedef struct R1053 R1053;
typedef struct R1053 *P1052;
struct R116 { int dummy_; rt_int kind_; P133 name_; P163 lits_; P115 elem_; P115 idx_; P170 elemcons_; P170 tcons_; P1052 fields_; P115 target_; P163 decl_; P133 cname_; int forward_; int defined_; int priv_; P115 next_; P115 idx2_; };
struct R171 { int dummy_; P133 lo_; P133 hi_; P133 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P133 lo2_; P133 hi2_; };
struct R1053 { int dummy_; P133 name_; P115 t_; P170 c_; P1052 next_; P163 dflt_; };
struct R1042 { int dummy_; P133 name_; rt_int mode_; P115 t_; P170 c_; P133 cfield_; P163 dflt_; P1041 next_; };
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
 rstr r_815;
 rt_int i_817;
};
struct f_c_field_198fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_197;
 rstr result_;
};
struct f_q_199fr { int dummy;
 struct f_greenc_1fr *up;
 rstr result_;
};
struct f_fail_202fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_200;
 rstr msg_201;
};
struct f_new_buffer_203fr { int dummy;
 struct f_greenc_1fr *up;
 P119 result_;
};
struct f_put_to_206fr { int dummy;
 struct f_greenc_1fr *up;
 P119 b_204;
 rstr s_205;
 P144 l_823;
};
struct f_emit_208fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_207;
};
struct f_print_buffer_210fr { int dummy;
 struct f_greenc_1fr *up;
 P119 b_209;
 P144 l_826;
};
struct f_splice_213fr { int dummy;
 struct f_greenc_1fr *up;
 P119 a_211;
 P119 b_212;
};
struct f_is_reserved_215fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_214;
 int result_;
};
struct f_add_token_219fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_216;
 rstr s_217;
 rt_int ival_218;
};
struct f_digit_value_221fr { int dummy;
 struct f_greenc_1fr *up;
 int c_220;
 rt_int result_;
};
struct f_lex_line_223fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_222;
 rt_int i_831;
 rt_int j_832;
 rt_int n_833;
 int c_834;
 rt_int v_835;
 rstr buf_836;
 rt_int bl_837;
 rt_int base_842;
 rstr two_849;
};
struct f_read_source_224fr { int dummy;
 struct f_greenc_1fr *up;
 rstr buf_850;
 rt_int bl_851;
 int c_852;
};
struct f_nn_227fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_225;
 rt_int line_226;
 P163 result_;
};
struct f_append_231fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *head_228;
 P163 *tail_229;
 P163 x_230;
};
struct f_list_len_233fr { int dummy;
 struct f_greenc_1fr *up;
 P163 l_232;
 rt_int result_;
 rt_int n_859;
 P163 p_860;
};
struct f_cur_line_234fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_236fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_235;
 int result_;
};
struct f_at_op_238fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_237;
 int result_;
};
struct f_at_kind_240fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_239;
 int result_;
};
struct f_kind_at_242fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_241;
 rt_int result_;
};
struct f_text_at_244fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_243;
 rstr result_;
};
struct f_perror_246fr { int dummy;
 struct f_greenc_1fr *up;
 rstr msg_245;
};
struct f_skip_247fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_249fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_248;
};
struct f_expect_op_251fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_250;
};
struct f_expect_id_253fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *res_252;
};
struct f_name_node_255fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_254;
 P163 x_862;
};
struct f_id_list_257fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_256;
 P163 head_863;
 P163 tail_864;
 P163 x_865;
};
struct f_binop_262fr { int dummy;
 struct f_greenc_1fr *up;
 P133 op_258;
 P163 l_259;
 P163 r_260;
 rt_int line_261;
 P163 result_;
 P163 x_867;
};
struct f_expr_264fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_263;
 P163 l_868;
 P163 r_869;
 P133 op_870;
 rt_int line_871;
};
struct f_is_rel_266fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_265;
 int result_;
};
struct f_relation_268fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_267;
 P163 l_873;
 P163 r_874;
 P163 lo_875;
 P163 hi_876;
 P163 t_877;
 P133 op_878;
 rt_int line_879;
 int neg_880;
};
struct f_simple_expr_270fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_269;
 P163 l_881;
 P163 r_882;
 P133 op_883;
 rt_int line_884;
};
struct f_term_272fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_271;
 P163 l_886;
 P163 r_887;
 P133 op_888;
 rt_int line_889;
};
struct f_factor_274fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_273;
 P163 l_891;
 P163 r_892;
 P133 op_893;
 rt_int line_894;
};
struct f_primary_276fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_275;
 P163 x_895;
 rt_int line_896;
};
struct f_agg_or_paren_278fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_277;
 rt_int line_897;
 P163 items_898;
 P163 itail_899;
 P163 it_900;
 P163 first_901;
 P163 keys_902;
 P163 ktail_903;
 P163 lab_904;
 P163 x_905;
 int more_906;
};
struct f_name_p_280fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_279;
 P163 p_909;
 P163 x_910;
 P163 args_911;
 P163 atail_912;
 P163 lo_913;
 P163 r_914;
 rt_int line_915;
 int more_916;
 P133 formal_920;
 rt_int mark_921;
};
struct f_subtype_ind_282fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_281;
 P163 x_922;
 P163 r_923;
 P163 args_924;
 P163 atail_925;
 P163 lo_926;
 rt_int line_927;
 int more_928;
};
struct f_type_spec_284fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_283;
 P163 x_931;
};
struct f_type_def_286fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_285;
 P163 x_932;
 P163 lits_933;
 P163 ltail_934;
 P163 l_935;
 P163 idx_936;
 P163 itail_937;
 P163 r_938;
 P163 comps_939;
 P163 ctail_940;
 P163 names_941;
 P163 st_942;
 P163 def_943;
 P163 cm_944;
 rt_int line_945;
 int more_946;
};
struct f_skip_pragma_287fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_skip_visibility_288fr { int dummy;
 struct f_greenc_1fr *up;
 P163 names_952;
};
struct f_skip_representation_289fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_291fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_290;
 P163 head_956;
 P163 tail_957;
 P163 x_958;
 P163 names_959;
};
struct f_object_decl_293fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_292;
 P163 head_961;
 P163 tail_962;
 P163 names_963;
 P163 st_964;
 P163 init_965;
 P163 x_966;
 rt_int line_967;
 int is_const_968;
};
struct f_type_decl_295fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_294;
 P163 x_971;
 rt_int line_972;
};
struct f_formal_part_297fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_296;
 P163 head_973;
 P163 tail_974;
 P163 names_975;
 P163 st_976;
 P163 def_977;
 P163 p_978;
 rt_int mode_979;
 int more_980;
};
struct f_designator_299fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *res_298;
};
struct f_subprogram_301fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_300;
 P163 x_983;
 rt_int line_984;
 int is_proc_985;
};
struct f_body_part_303fr { int dummy;
 struct f_greenc_1fr *up;
 P163 x_302;
};
struct f_parse_handlers_305fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_304;
 P163 head_986;
 P163 tail_987;
 P163 h_988;
 P163 names_989;
 P163 ntail_990;
 P163 n_991;
};
struct f_package_p_307fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_306;
 P163 x_995;
 rt_int line_996;
};
struct f_at_statements_end_308fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_310fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_309;
 P163 head_997;
 P163 tail_998;
 P163 x_999;
};
struct f_statement_312fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_311;
 P163 x_1001;
 P163 t_1002;
 rt_int line_1003;
 P133 label_1004;
};
struct f_task_statement_314fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_313;
};
struct f_if_stmt_316fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_315;
 P163 x_1006;
 P163 arm_1007;
 P163 head_1008;
 P163 tail_1009;
 int go_1010;
};
struct f_case_stmt_318fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_317;
 P163 x_1012;
 P163 arm_1013;
 P163 head_1014;
 P163 tail_1015;
 P163 labs_1016;
 P163 ltail_1017;
 P163 l_1018;
 int others_arm_1019;
};
struct f_loop_stmt_320fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_319;
 P163 x_1022;
 P163 r_1023;
 rt_int line_1024;
};
struct f_compilation_322fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_321;
 P163 head_1025;
 P163 tail_1026;
 P163 x_1027;
};
struct f_hash_324fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_323;
 rt_int result_;
 rt_int h_1029;
 rt_int i_1031;
};
struct f_lookup_326fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_325;
 P110 result_;
 P110 y_1035;
};
struct f_same_task_329fr { int dummy;
 struct f_greenc_1fr *up;
 P110 a_327;
 P110 b_328;
 int result_;
};
struct f_lookup_entry_332fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_330;
 P110 owner_331;
 P110 result_;
 P110 y_1037;
};
struct f_lookup_decl_334fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_333;
 P110 result_;
 P110 y_1039;
};
struct f_overloadable_336fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_335;
 int result_;
};
struct f_same_339fr { int dummy;
 struct f_greenc_1fr *up;
 P115 a_337;
 P115 b_338;
 int result_;
};
struct f_same_signature_342fr { int dummy;
 struct f_greenc_1fr *up;
 P1041 a_340;
 P1041 b_341;
 int result_;
 P1041 x_1043;
 P1041 y_1044;
};
struct f_define_345fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_343;
 rt_int line_344;
 rt_int h_1046;
 P110 z_1047;
};
struct f_open_scope_346fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_347fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_350fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_348;
 P133 name_349;
 P110 result_;
};
struct f_new_typ_352fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_351;
 P115 result_;
};
struct f_new_cons_353fr { int dummy;
 struct f_greenc_1fr *up;
 P170 result_;
};
struct f_kind_name_355fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_354;
 rstr result_;
};
struct f_check_type_359fr { int dummy;
 struct f_greenc_1fr *up;
 P115 got_356;
 P115 want_357;
 rt_int line_358;
};
struct f_field_count_361fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_360;
 rt_int result_;
 rt_int n_1059;
 P1052 f_1060;
};
struct f_ctype_364fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_362;
 P133 *r_363;
 P133 s_1062;
};
struct f_field_decls_367fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_365;
 P133 *r_366;
 P1052 f_1064;
 P133 s_1065;
 P133 ct_1066;
};
struct f_declare_ctype_369fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_368;
 P133 ct_1068;
 P133 s_1069;
 P115 target_1070;
};
struct f_lit_index_372fr { int dummy;
 struct f_greenc_1fr *up;
 P163 lits_370;
 rstr name_371;
 rt_int result_;
 rt_int i_1071;
 P163 l_1072;
};
struct f_manifest_376fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_373;
 rt_int *v_374;
 int *ok_375;
 rt_int a_1074;
 rt_int b_1075;
 int ok2_1076;
 P110 y_1077;
};
struct f_resolve_380fr { int dummy;
 struct f_greenc_1fr *up;
 P163 st_377;
 P115 *t_378;
 P170 *c_379;
 P110 y_1078;
 P115 dummy_1079;
 P133 code_1080;
 int ok_1081;
 P163 r_1082;
};
struct f_type_definition_385fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_381;
 P133 name_382;
 P115 *t_383;
 P170 *c_384;
 P115 dummy_1083;
 P115 it_1084;
 P170 ic_1085;
 P163 l_1086;
 P163 comp_1087;
 P1052 f_1088;
 P1052 tail_1089;
 int ok_1090;
 rt_int n_1091;
 P110 y_1092;
};
struct f_finish_ptr_387fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_386;
 P170 c_1098;
};
struct f_init_storage_391fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_388;
 P115 t_389;
 P170 c_390;
 P133 ct_1099;
 P133 i_1100;
 P133 v_1101;
 P133 x_1102;
 P115 vt_1103;
 P1052 f_1104;
};
struct f_composite_393fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_392;
 int result_;
};
struct f_assign_code_399fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_394;
 P115 t_395;
 rstr v_396;
 P170 c_397;
 P133 *r_398;
 P133 ct_1106;
};
struct f_copy_code_403fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_400;
 rstr v_401;
 P133 *r_402;
 P133 ct_1107;
};
struct f_eq_code_408fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_404;
 rstr a_405;
 rstr b_406;
 P133 *r_407;
 P133 ct_1108;
};
struct f_seen_name_411fr { int dummy;
 struct f_greenc_1fr *up;
 P144 l_409;
 rstr s_410;
 int result_;
 P144 p_1109;
};
struct f_emit_helpers_412fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_1111;
 P144 done_1112;
 P144 l_1113;
};
struct f_helper_bodies_414fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_413;
 P133 c_1117;
 P119 b_1118;
 P133 ct_1119;
 P133 x_1120;
 P133 y_1121;
 P133 conds_1122;
 P1052 f_1123;
};
struct f_storage_418fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_415;
 P115 t_416;
 P133 *access_code_417;
 P133 ct_1126;
 P133 g_1127;
};
struct f_bind_421fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_419;
 P133 access_code_420;
};
struct f_declare_subprograms_423fr { int dummy;
 struct f_greenc_1fr *up;
 P163 from_422;
 P163 e_1128;
};
struct f_declare_one_425fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_424;
 P110 y_1130;
 P110 z_1131;
};
struct f_build_subprogram_428fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_426;
 P110 *y_427;
 P163 p_1134;
 P1041 pm_1135;
 P1041 tail_1136;
 P170 rc_1137;
 rt_int k_1138;
};
struct f_decl_elements_430fr { int dummy;
 struct f_greenc_1fr *up;
 P163 decls_429;
 P163 e_1142;
 int declared_1143;
};
struct f_decl_element_432fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_431;
 P110 y_1145;
 P110 z_1146;
 P115 t_1147;
 P115 vt_1148;
 P170 c_1149;
 P133 acc_1150;
 P133 v_1151;
 P133 x_1152;
 int ok_1153;
};
struct f_other_decl_434fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_433;
};
struct f_subprogram_body_437fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_435;
 P110 y_436;
 P119 saved_code_1155;
 P119 saved_fields_1156;
 int saved_in_1157;
 P110 saved_sym_1158;
 P136 saved_exits_1159;
 rt_int saved_frames_1160;
 P144 saved_handlers_1161;
 P144 saved_cleanups_1162;
 P110 saved_pure_1163;
 P133 aw_1164;
 rt_int saved_pdepth_1165;
 P133 args_1166;
 P133 head_1167;
 P133 frame_1168;
 P133 parent_1169;
 P133 ct_1170;
 P133 x_1171;
 P1041 pm_1172;
 P110 p_1173;
};
struct f_gen_statements_439fr { int dummy;
 struct f_greenc_1fr *up;
 P163 stmts_438;
 P163 s_1176;
};
struct f_pop_frames_441fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_440;
 rt_int i_1178;
 P144 c_1179;
};
struct f_push_cleanup_443fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_442;
};
struct f_pop_cleanup_444fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_448fr { int dummy;
 struct f_greenc_1fr *up;
 P163 stmts_445;
 P163 hs_446;
 rt_int line_447;
 P133 f_1183;
 P133 x_1184;
 P163 h_1185;
 P163 n_1186;
 int first_1187;
 int has_others_1188;
 P133 conds_1189;
};
struct f_exc_id_452fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_449;
 rt_int line_450;
 P133 *r_451;
 P110 y_1194;
};
struct f_gen_statement_454fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_453;
 P115 t_1195;
 P115 vt_1196;
 P170 c_1197;
 P133 lv_1198;
 P133 v_1199;
 P133 x_1200;
 int ro_1201;
};
struct f_slice_assign_456fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_455;
 P133 lv_1203;
 P133 lo_1204;
 P133 hi_1205;
 P133 v_1206;
 P115 t_1207;
 P115 vt_1208;
 P170 c_1209;
 int ro_1210;
};
struct f_gen_call_458fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_457;
 P163 c_1211;
 P115 t_1212;
 P133 v_1213;
};
struct f_gen_if_460fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_459;
 P163 a_1214;
 int first_1215;
 P115 t_1216;
 P133 v_1217;
};
struct f_gen_case_462fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_461;
 P115 st_1219;
 P115 vt_1220;
 int first_1221;
 P163 a_1222;
 P163 lab_1223;
 P133 sel_1224;
 P133 tmp_1225;
 P133 ct_1226;
 P133 conds_1227;
 P133 v_1228;
 P133 lo_1229;
 P133 hi_1230;
};
struct f_push_exit_466fr { int dummy;
 struct f_greenc_1fr *up;
 P133 match_463;
 int is_loop_464;
 P133 *label_465;
};
struct f_gen_loop_468fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_467;
 P115 t_1235;
 P115 vt_1236;
 P170 c_1237;
 P133 label_1238;
 P133 cond_1239;
 P133 acc_1240;
 P133 lov_1241;
 P133 hiv_1242;
 P133 it_1243;
 P110 y_1244;
 P163 r_1245;
};
struct f_gen_block_470fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_469;
 P133 label_1246;
 P133 aw_1247;
};
struct f_gen_exit_472fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_471;
 P136 x_1248;
 P115 t_1249;
 P133 v_1250;
};
struct f_gen_return_474fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_473;
 P115 vt_1252;
 P133 v_1253;
};
struct f_access_of_477fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_475;
 P133 *r_476;
 P133 p_1254;
 rt_int i_1256;
};
struct f_link_to_480fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_478;
 P133 *r_479;
 rt_int i_1261;
};
struct f_c_ident_482fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_481;
 rstr result_;
};
struct f_deref_486fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_483;
 P115 t_484;
 P133 *r_485;
 P133 ct_1265;
};
struct f_is_object_488fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_487;
 int result_;
 P110 y_1266;
};
struct f_lvalue_494fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_489;
 P133 *code_out_490;
 P115 *t_491;
 P170 *c_492;
 int *ro_493;
 P110 y_1267;
 P133 base_1268;
 P115 bt_1269;
 P170 bc_1270;
};
struct f_select_on_502fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_495;
 P115 bt_496;
 P163 e_497;
 int *ro_498;
 P133 *code_out_499;
 P115 *t_500;
 P170 *c_501;
 P1052 f_1271;
 P133 d_1272;
};
struct f_index_on_511fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_503;
 P115 bt_504;
 P163 e_505;
 int *ro_506;
 int lv_507;
 P133 *code_out_508;
 P115 *t_509;
 P170 *c_510;
 P163 a_1274;
 P115 it_1275;
 P133 i_1276;
 P133 lo_1277;
 P133 hi_1278;
 P133 d_1279;
};
struct f_is_char_lit_513fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_512;
 int result_;
};
struct f_is_enum_lit_515fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_514;
 int result_;
 P110 y_1280;
};
struct f_c_string_517fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_516;
 rstr result_;
 rt_int n_1281;
 rt_int i_1283;
 rstr r_1288;
 rt_int j_1289;
 rt_int i_1291;
};
struct f_gexpr_522fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_518;
 P115 want_519;
 P115 *t_520;
 P133 *r_521;
 P110 y_1295;
 P115 bt_1296;
 P170 c_1297;
 int ro_1298;
 P133 base_1299;
 P133 a_1300;
 P163 nm_1301;
 int saved_lv_1302;
};
struct f_gexpr_1_527fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_523;
 P115 want_524;
 P115 *t_525;
 P133 *r_526;
 P110 y_1303;
 P115 bt_1304;
 P170 c_1305;
 int ro_1306;
 P133 base_1307;
 P133 a_1308;
 P163 nm_1309;
};
struct f_char_literal_532fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_528;
 P115 want_529;
 P115 *t_530;
 P133 *r_531;
 rt_int i_1311;
};
struct f_gen_name_537fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_533;
 P115 want_534;
 P115 *t_535;
 P133 *r_536;
 P110 y_1312;
 P110 z_1313;
 P163 call_1314;
};
struct f_gen_unop_542fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_538;
 P115 want_539;
 P115 *t_540;
 P133 *r_541;
 P133 a_1316;
 int done_1317;
};
struct f_gen_binop_547fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_543;
 P115 want_544;
 P115 *t_545;
 P133 *r_546;
 rstr op_1318;
 P115 ta_1319;
 P115 tb_1320;
 P115 hint_1321;
 P115 ct_1322;
 P133 a_1323;
 P133 b_1324;
 P133 x_1325;
 P133 dummy_1326;
 int done_1327;
};
struct f_conversion_552fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_548;
 P110 y_549;
 P115 *t_550;
 P133 *r_551;
 P115 aty_1328;
 P133 a_1329;
};
struct f_gen_attr_557fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_553;
 P115 want_554;
 P115 *t_555;
 P133 *r_556;
 rstr a_1330;
 P110 y_1331;
 P115 tt_1332;
 P115 aty_1333;
 P133 v_1334;
 P133 d_1335;
 P170 c_1336;
 rt_int n_1337;
 int ro_1338;
};
struct f_allocator_562fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_558;
 P115 want_559;
 P115 *t_560;
 P133 *r_561;
 P110 y_1339;
 P115 target_1340;
 P115 vt_1341;
 P133 ct_1342;
 P133 pt_1343;
 P133 cell_1344;
 P133 v_1345;
 P133 x_1346;
};
struct f_aggregate_567fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_563;
 P115 want_564;
 P115 *t_565;
 P133 *r_566;
 P163 it_1347;
 P1052 f_1348;
 P115 vt_1349;
 P133 ct_1350;
 P133 tmp_1351;
 P133 v_1352;
 P133 x_1353;
 P133 parts_1354;
 P133 et_1355;
 P133 lo_1356;
 P133 hi_1357;
 P133 key_1358;
 P133 fill_1359;
 rt_int n_1360;
 P163 lab_1361;
};
struct f_actual_for_571fr { int dummy;
 struct f_greenc_1fr *up;
 P163 args_568;
 P1041 pm_569;
 P1041 first_570;
 P163 result_;
 P163 a_1367;
 P1041 p_1368;
};
struct f_gcall_576fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_572;
 int is_stmt_573;
 P115 *t_574;
 P133 *r_575;
 P163 fn_1371;
 P163 nm_1372;
 P110 y_1373;
 P133 args_1374;
 P133 lv_1375;
 P133 v_1376;
 P133 ct_1377;
 P133 x_1378;
 P163 a_1379;
 P1041 pm_1380;
 P115 lt_1381;
 P115 vt_1382;
 P170 lc_1383;
 int ro_1384;
};
struct f_gcall_with_581fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_577;
 P110 y_578;
 P115 *t_579;
 P133 *r_580;
 P133 args_1385;
 P133 lv_1386;
 P133 v_1387;
 P133 x1_1388;
 P133 x2_1389;
 P163 a_1390;
 P1041 pm_1391;
 P115 lt_1392;
 P115 vt_1393;
 P170 lc_1394;
 int ro_1395;
};
struct f_builtin_588fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_582;
 P163 args_583;
 rt_int line_584;
 int is_stmt_585;
 P115 *t_586;
 P133 *r_587;
 P115 aty_1397;
 P115 lt_1398;
 P133 a_1399;
 P133 w_1400;
 P133 lv_1401;
 P170 lc_1402;
 int ro_1403;
};
struct f_is_package_590fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_589;
 int result_;
 P110 y_1404;
};
struct f_member_of_594fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_591;
 rstr name_592;
 rt_int line_593;
 P110 result_;
 P110 y_1405;
 P110 m_1406;
};
struct f_inside_package_596fr { int dummy;
 struct f_greenc_1fr *up;
 P163 p_595;
 int result_;
 P144 l_1408;
};
struct f_copy_sym_599fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_597;
 P110 *z_598;
};
struct f_complete_private_602fr { int dummy;
 struct f_greenc_1fr *up;
 P115 ph_600;
 P115 full_601;
 P133 n_1412;
 P163 p_1413;
};
struct f_package_spec_604fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_603;
 P110 y_1414;
 P110 m_1415;
 P110 z_1416;
 P163 saved_1417;
 P110 first_private_1418;
};
struct f_hidden_from_607fr { int dummy;
 struct f_greenc_1fr *up;
 P110 m_605;
 P110 first_private_606;
 int result_;
 P110 p_1422;
};
struct f_package_body_609fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_608;
 P110 y_1424;
 P110 m_1425;
 P110 z_1426;
 P163 saved_1427;
};
struct f_use_clause_611fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_610;
 P163 n_1433;
 P110 y_1434;
 P110 m_1435;
 P110 z_1436;
 P110 old_1437;
};
struct f_fits_616fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_612;
 P163 args_613;
 P115 want_614;
 int *ok_615;
 P1041 pm_1440;
 P163 a_1441;
 P115 t_1442;
 P170 c_1443;
 P133 v_1444;
 int ro_1445;
 P119 saved_1446;
 rt_int used_1447;
};
struct f_is_builtin_618fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_617;
 int result_;
};
struct f_resolve_overload_625fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_619;
 P163 args_620;
 int is_stmt_621;
 P115 want_622;
 rt_int line_623;
 P110 *y_624;
 P110 z_1452;
 P110 first_1453;
 rt_int n_1454;
 int ok_1455;
 rt_int pass_1457;
};
struct f_resolve_member_overload_633fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_626;
 rstr name_627;
 P163 args_628;
 int is_stmt_629;
 P115 want_630;
 rt_int line_631;
 P110 *y_632;
 P110 pk_1462;
 P110 z_1463;
 rt_int n_1464;
 int ok_1465;
 rt_int pass_1467;
};
struct f_user_operator_639fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_634;
 P115 want_635;
 P115 *t_636;
 P133 *r_637;
 int *done_638;
 P133 op_1472;
 int negate_1473;
 P110 y_1474;
 P163 call_1475;
 P163 fname_1476;
 P163 l_1477;
 P163 rt_1478;
 int ok_1479;
};
struct f_task_p_641fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_640;
 P163 x_1481;
 rt_int line_1482;
};
struct f_entry_p_643fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_642;
 P163 x_1483;
};
struct f_accept_p_645fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_644;
 P163 x_1484;
};
struct f_delay_p_647fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_646;
 P163 x_1485;
};
struct f_designators_649fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_648;
 P163 head_1486;
 P163 tail_1487;
 P163 n_1488;
};
struct f_parse_task_statement_651fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_650;
 P163 x_1490;
 P163 alt_1491;
 P163 head_1492;
 P163 tail_1493;
 rt_int line_1494;
};
struct f_path_at_655fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_652;
 rstr field_653;
 P133 *r_654;
 rt_int i_1497;
};
struct f_is_task_name_657fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_656;
 int result_;
 P110 y_1501;
};
struct f_task_of_661fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_658;
 P110 *y_659;
 P163 *ix_660;
 P163 n_1502;
};
struct f_own_index_663fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *r_662;
 P110 y_1503;
};
struct f_member_668fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_664;
 rstr arr_665;
 rstr i_666;
 P133 *r_667;
 P133 lo_1504;
 P133 hi_1505;
};
struct f_act_path_671fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_669;
 P133 *r_670;
 P133 i_1506;
};
struct f_act_path_i_675fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_672;
 rstr i_673;
 P133 *r_674;
};
struct f_entry_path_679fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_676;
 rstr i_677;
 P133 *r_678;
 P133 own_1507;
};
struct f_declare_slot_682fr { int dummy;
 struct f_greenc_1fr *up;
 rstr ctype_name_680;
 rstr field_681;
};
struct f_task_decl_684fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_683;
};
struct f_family_arg_struct_685fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_689fr { int dummy;
 struct f_greenc_1fr *up;
 P163 b_686;
 P110 y_687;
 P133 x_688;
 P133 lo_1508;
 P133 hi_1509;
 P133 v_1510;
 P115 vt_1511;
 P170 c_1512;
};
struct f_entry_family_slot_694fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_690;
 rstr base_691;
 rstr i_692;
 P133 *r_693;
 P133 lo_1513;
 P133 hi_1514;
};
struct f_task_spec_696fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_695;
 int has_procs_1515;
 int saved_defer_1516;
 P133 fields_1517;
 P133 ct_1518;
 P1041 pm_1519;
 P133 fp_1520;
 P133 flo_1521;
 P133 fhi_1522;
 P110 y_1523;
 P110 m_1524;
 P110 z_1525;
 P110 saved_1526;
 P133 d_1527;
 P133 v_1528;
 P133 p_1529;
 P133 p2_1530;
 P115 vt_1531;
 P163 r_1532;
};
struct f_entry_decl_698fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_697;
 P110 y_1536;
 P163 p_1537;
 P1041 pm_1538;
 P1041 tail_1539;
 P133 fields_1540;
 P133 ct_1541;
 P133 x_1542;
 P133 lo_1543;
 P133 hi_1544;
};
struct f_task_body_700fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_699;
 P110 y_1548;
 P110 b_1549;
 P110 m_1550;
 P110 z_1551;
 P133 upp_1552;
 P110 saved_1553;
};
struct f_task_awaits_703fr { int dummy;
 struct f_greenc_1fr *up;
 P163 decls_701;
 P133 *aw_702;
 P163 e_1557;
 P110 y_1558;
 P133 p_1559;
};
struct f_task_failure_705fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_704;
 P110 y_1561;
 P133 a_1562;
 P133 i_1563;
 P115 it_1564;
};
struct f_entry_sym_709fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_706;
 P110 *y_707;
 P163 *ix_708;
 P110 t_1565;
};
struct f_other_call_714fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_710;
 int is_stmt_711;
 P115 *t_712;
 P133 *r_713;
 P110 y_1566;
 P1041 pm_1567;
 P163 a_1568;
 P133 parts_1569;
 P133 v_1570;
 P133 lv_1571;
 P133 ent_1572;
 P133 act_1573;
 P133 i_1574;
 P115 vt_1575;
 P115 lt_1576;
 P170 lc_1577;
 int ro_1578;
 P163 ix_1579;
 P163 fix_1580;
 P163 args_node_1581;
};
struct f_other_attr_719fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_715;
 P110 y_716;
 P115 *t_717;
 P133 *r_718;
 rstr a_1583;
 P133 p_1584;
};
struct f_member_attr_723fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_720;
 P115 *t_721;
 P133 *r_722;
 P110 y_1585;
 P163 ix_1586;
 P133 i_1587;
 P133 p_1588;
 P115 vt_1589;
};
struct f_task_builtin_729fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_724;
 P163 args_725;
 rt_int line_726;
 P115 *t_727;
 P133 *r_728;
 P115 vt_1590;
 P133 v_1591;
};
struct f_gen_accept_731fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_730;
 P110 y_1592;
 P136 saved_ax_1593;
 P133 ent_1594;
 P133 ep_1595;
 P133 xf_1596;
 P133 x_1597;
 P1041 pm_1598;
 P163 f_1599;
 P110 p_1600;
};
struct f_member_slot_735fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_732;
 P163 s_733;
 P133 *ent_734;
 P115 vt_1602;
 P133 v_1603;
};
struct f_gen_delay_ticks_738fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_736;
 P133 *r_737;
 P115 vt_1604;
 P133 v_1605;
};
struct f_gen_select_740fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_739;
 P163 alt_1606;
 rt_int n_1607;
 rt_int i_1608;
 int has_delay_1609;
 int has_accept_1610;
 P133 al_1611;
 P133 w_1612;
 P133 g_1613;
 P133 ent_1614;
 P133 ticks_1615;
 P115 vt_1616;
 P110 y_1617;
};
struct f_family_range_745fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_741;
 P163 ix_742;
 P133 *lo_743;
 P133 *hi_744;
 P115 vt_1621;
};
struct f_task_statement_gen_747fr { int dummy;
 struct f_greenc_1fr *up;
 P163 s_746;
 P163 n_1622;
 P163 ix_1623;
 P110 y_1624;
 P133 a_1625;
 P133 d_1626;
 P133 l_1627;
 P133 ticks_1628;
 P133 lo_1629;
 P133 hi_1630;
};
struct f_root_name_749fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_748;
 P163 result_;
};
struct f_check_pure_target_752fr { int dummy;
 struct f_greenc_1fr *up;
 P163 target_750;
 rt_int line_751;
 P163 n_1634;
 P110 y_1635;
};
struct f_assigns_nonlocal_755fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_753;
 rstr name_754;
 int result_;
};
struct f_declares_758fr { int dummy;
 struct f_greenc_1fr *up;
 P163 d_756;
 rstr name_757;
 int result_;
 P163 p_1636;
 P163 e_1637;
};
struct f_scan_handlers_762fr { int dummy;
 struct f_greenc_1fr *up;
 P163 h_759;
 P163 d_760;
 rstr name_761;
 int result_;
 P163 p_1640;
};
struct f_scan_assigns_766fr { int dummy;
 struct f_greenc_1fr *up;
 P163 stmts_763;
 P163 d_764;
 rstr name_765;
 int result_;
 P163 s_1642;
 P163 a_1643;
 P163 r_1644;
};
struct f_check_call_rules_769fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_767;
 P110 y_768;
 P110 z_1648;
 P110 s_1649;
};
struct f_generic_p_771fr { int dummy;
 struct f_greenc_1fr *up;
 P163 *res_770;
 P163 x_1651;
 P163 p_1652;
 P163 head_1653;
 P163 tail_1654;
 P163 names_1655;
 P163 st_1656;
 P163 def_1657;
 P163 sub_1658;
 P133 def_name_text_1659;
 int more_1660;
};
struct f_instantiation_774fr { int dummy;
 struct f_greenc_1fr *up;
 P163 x_772;
 P163 *res_773;
 P163 i_1663;
 P163 head_1664;
 P163 tail_1665;
 P163 a_1666;
 P133 formal_1667;
 rt_int mark_1668;
 int more_1669;
};
struct f_generic_decl_776fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_775;
 P110 y_1671;
};
struct f_is_generic_name_778fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_777;
 int result_;
 P110 y_1672;
};
struct f_attach_generic_body_780fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_779;
 P110 y_1673;
};
struct f_restore_generic_context_783fr { int dummy;
 struct f_greenc_1fr *up;
 P163 body_node_781;
 rt_int line_782;
 P139 ctx_1676;
 P110 m_1677;
 P110 z_1678;
 int seen_1679;
};
struct f_gactual_787fr { int dummy;
 struct f_greenc_1fr *up;
 P163 args_784;
 rt_int nth_785;
 rstr name_786;
 P163 result_;
 P163 a_1683;
 rt_int i_1684;
};
struct f_copy_node_791fr { int dummy;
 struct f_greenc_1fr *up;
 P163 n_788;
 P133 name_789;
 P163 *r_790;
};
struct f_instantiate_793fr { int dummy;
 struct f_greenc_1fr *up;
 P163 e_792;
 P110 g_1686;
 P163 gd_1687;
 P163 pat_1688;
 P163 f_1689;
 P163 a_1690;
 P163 cn_1691;
 P110 y_1692;
 P110 z_1693;
 P110 fs_1694;
 rt_int nth_1695;
 P115 t_1696;
 P115 vt_1697;
 P170 c_1698;
 P133 v_1699;
 P133 acc_1700;
 P133 x_1701;
 int ok_1702;
};
struct f_predef_type_798fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_794;
 P115 t_795;
 rstr lo_796;
 rstr hi_797;
 P110 y_1705;
};
struct f_predef_const_802fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_799;
 P115 t_800;
 rstr code_text_801;
 P110 y_1706;
};
struct f_predef_exc_804fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_803;
 P110 y_1707;
};
struct f_predef_lit_808fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_805;
 P115 t_806;
 rt_int v_807;
 P110 y_1708;
};
struct f_predefine_809fr { int dummy;
 struct f_greenc_1fr *up;
 rstr control_1709;
 rt_int start_1710;
 rt_int code_no_1711;
 rt_int i_1713;
 rt_int i_1718;
};
struct f_translate_811fr { int dummy;
 struct f_greenc_1fr *up;
 P163 u_810;
 P163 p_1722;
 P110 y_1723;
};
struct f_print_program_812fr { int dummy;
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
static void as_R1053(R1053 *d, R1053 s);
static R1053 cp_R1053(R1053 s);
static int eq_R1053(R1053 a, R1053 b);
static void as_R1042(R1042 *d, R1042 s);
static R1042 cp_R1042(R1042 s);
static int eq_R1042(R1042 a, R1042 b);
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
static rstr f_c_field_198(struct f_greenc_1fr *up_, rstr s_197);
static rstr f_q_199(struct f_greenc_1fr *up_);
static void f_fail_202(struct f_greenc_1fr *up_, rt_int line_200, rstr msg_201);
static P119 f_new_buffer_203(struct f_greenc_1fr *up_);
static void f_put_to_206(struct f_greenc_1fr *up_, P119 b_204, rstr s_205);
static void f_emit_208(struct f_greenc_1fr *up_, rstr s_207);
static void f_print_buffer_210(struct f_greenc_1fr *up_, P119 b_209);
static void f_splice_213(struct f_greenc_1fr *up_, P119 a_211, P119 b_212);
static int f_is_reserved_215(struct f_greenc_1fr *up_, rstr w_214);
static void f_add_token_219(struct f_greenc_1fr *up_, rt_int kind_216, rstr s_217, rt_int ival_218);
static rt_int f_digit_value_221(struct f_greenc_1fr *up_, int c_220);
static void f_lex_line_223(struct f_greenc_1fr *up_, rstr line_222);
static void f_read_source_224(struct f_greenc_1fr *up_);
static P163 f_nn_227(struct f_greenc_1fr *up_, rt_int kind_225, rt_int line_226);
static void f_append_231(struct f_greenc_1fr *up_, P163 *head_228, P163 *tail_229, P163 x_230);
static rt_int f_list_len_233(struct f_greenc_1fr *up_, P163 l_232);
static rt_int f_cur_line_234(struct f_greenc_1fr *up_);
static int f_at_kw_236(struct f_greenc_1fr *up_, rstr w_235);
static int f_at_op_238(struct f_greenc_1fr *up_, rstr w_237);
static int f_at_kind_240(struct f_greenc_1fr *up_, rt_int k_239);
static rt_int f_kind_at_242(struct f_greenc_1fr *up_, rt_int k_241);
static rstr f_text_at_244(struct f_greenc_1fr *up_, rt_int k_243);
static void f_perror_246(struct f_greenc_1fr *up_, rstr msg_245);
static void f_skip_247(struct f_greenc_1fr *up_);
static void f_expect_kw_249(struct f_greenc_1fr *up_, rstr w_248);
static void f_expect_op_251(struct f_greenc_1fr *up_, rstr w_250);
static void f_expect_id_253(struct f_greenc_1fr *up_, P133 *res_252);
static void f_name_node_255(struct f_greenc_1fr *up_, P163 *res_254);
static void f_id_list_257(struct f_greenc_1fr *up_, P163 *res_256);
static P163 f_binop_262(struct f_greenc_1fr *up_, P133 op_258, P163 l_259, P163 r_260, rt_int line_261);
static void f_expr_264(struct f_greenc_1fr *up_, P163 *res_263);
static int f_is_rel_266(struct f_greenc_1fr *up_, rstr s_265);
static void f_relation_268(struct f_greenc_1fr *up_, P163 *res_267);
static void f_simple_expr_270(struct f_greenc_1fr *up_, P163 *res_269);
static void f_term_272(struct f_greenc_1fr *up_, P163 *res_271);
static void f_factor_274(struct f_greenc_1fr *up_, P163 *res_273);
static void f_primary_276(struct f_greenc_1fr *up_, P163 *res_275);
static void f_agg_or_paren_278(struct f_greenc_1fr *up_, P163 *res_277);
static void f_name_p_280(struct f_greenc_1fr *up_, P163 *res_279);
static void f_subtype_ind_282(struct f_greenc_1fr *up_, P163 *res_281);
static void f_type_spec_284(struct f_greenc_1fr *up_, P163 *res_283);
static void f_type_def_286(struct f_greenc_1fr *up_, P163 *res_285);
static void f_skip_pragma_287(struct f_greenc_1fr *up_);
static void f_skip_visibility_288(struct f_greenc_1fr *up_);
static void f_skip_representation_289(struct f_greenc_1fr *up_);
static void f_decl_part_291(struct f_greenc_1fr *up_, P163 *res_290);
static void f_object_decl_293(struct f_greenc_1fr *up_, P163 *res_292);
static void f_type_decl_295(struct f_greenc_1fr *up_, P163 *res_294);
static void f_formal_part_297(struct f_greenc_1fr *up_, P163 *res_296);
static void f_designator_299(struct f_greenc_1fr *up_, P133 *res_298);
static void f_subprogram_301(struct f_greenc_1fr *up_, P163 *res_300);
static void f_body_part_303(struct f_greenc_1fr *up_, P163 x_302);
static void f_parse_handlers_305(struct f_greenc_1fr *up_, P163 *res_304);
static void f_package_p_307(struct f_greenc_1fr *up_, P163 *res_306);
static int f_at_statements_end_308(struct f_greenc_1fr *up_);
static void f_statements_310(struct f_greenc_1fr *up_, P163 *res_309);
static void f_statement_312(struct f_greenc_1fr *up_, P163 *res_311);
static void f_task_statement_314(struct f_greenc_1fr *up_, P163 *res_313);
static void f_if_stmt_316(struct f_greenc_1fr *up_, P163 *res_315);
static void f_case_stmt_318(struct f_greenc_1fr *up_, P163 *res_317);
static void f_loop_stmt_320(struct f_greenc_1fr *up_, P163 *res_319);
static void f_compilation_322(struct f_greenc_1fr *up_, P163 *res_321);
static rt_int f_hash_324(struct f_greenc_1fr *up_, rstr s_323);
static P110 f_lookup_326(struct f_greenc_1fr *up_, rstr name_325);
static int f_same_task_329(struct f_greenc_1fr *up_, P110 a_327, P110 b_328);
static P110 f_lookup_entry_332(struct f_greenc_1fr *up_, rstr name_330, P110 owner_331);
static P110 f_lookup_decl_334(struct f_greenc_1fr *up_, P163 d_333);
static int f_overloadable_336(struct f_greenc_1fr *up_, P110 y_335);
static int f_same_339(struct f_greenc_1fr *up_, P115 a_337, P115 b_338);
static int f_same_signature_342(struct f_greenc_1fr *up_, P1041 a_340, P1041 b_341);
static void f_define_345(struct f_greenc_1fr *up_, P110 y_343, rt_int line_344);
static void f_open_scope_346(struct f_greenc_1fr *up_);
static void f_close_scope_347(struct f_greenc_1fr *up_);
static P110 f_new_sym_350(struct f_greenc_1fr *up_, rt_int kind_348, P133 name_349);
static P115 f_new_typ_352(struct f_greenc_1fr *up_, rt_int kind_351);
static P170 f_new_cons_353(struct f_greenc_1fr *up_);
static rstr f_kind_name_355(struct f_greenc_1fr *up_, P115 t_354);
static void f_check_type_359(struct f_greenc_1fr *up_, P115 got_356, P115 want_357, rt_int line_358);
static rt_int f_field_count_361(struct f_greenc_1fr *up_, P115 t_360);
static void f_ctype_364(struct f_greenc_1fr *up_, P115 t_362, P133 *r_363);
static void f_field_decls_367(struct f_greenc_1fr *up_, P115 t_365, P133 *r_366);
static void f_declare_ctype_369(struct f_greenc_1fr *up_, P115 t_368);
static rt_int f_lit_index_372(struct f_greenc_1fr *up_, P163 lits_370, rstr name_371);
static void f_manifest_376(struct f_greenc_1fr *up_, P163 e_373, rt_int *v_374, int *ok_375);
static void f_resolve_380(struct f_greenc_1fr *up_, P163 st_377, P115 *t_378, P170 *c_379);
static void f_type_definition_385(struct f_greenc_1fr *up_, P163 d_381, P133 name_382, P115 *t_383, P170 *c_384);
static void f_finish_ptr_387(struct f_greenc_1fr *up_, P115 t_386);
static void f_init_storage_391(struct f_greenc_1fr *up_, rstr lval_388, P115 t_389, P170 c_390);
static int f_composite_393(struct f_greenc_1fr *up_, P115 t_392);
static void f_assign_code_399(struct f_greenc_1fr *up_, rstr lval_394, P115 t_395, rstr v_396, P170 c_397, P133 *r_398);
static void f_copy_code_403(struct f_greenc_1fr *up_, P115 t_400, rstr v_401, P133 *r_402);
static void f_eq_code_408(struct f_greenc_1fr *up_, P115 t_404, rstr a_405, rstr b_406, P133 *r_407);
static int f_seen_name_411(struct f_greenc_1fr *up_, P144 l_409, rstr s_410);
static void f_emit_helpers_412(struct f_greenc_1fr *up_);
static void f_helper_bodies_414(struct f_greenc_1fr *up_, P115 t_413);
static void f_storage_418(struct f_greenc_1fr *up_, rstr name_415, P115 t_416, P133 *access_code_417);
static void f_bind_421(struct f_greenc_1fr *up_, P110 y_419, P133 access_code_420);
static void f_declare_subprograms_423(struct f_greenc_1fr *up_, P163 from_422);
static void f_declare_one_425(struct f_greenc_1fr *up_, P163 e_424);
static void f_build_subprogram_428(struct f_greenc_1fr *up_, P163 d_426, P110 *y_427);
static void f_decl_elements_430(struct f_greenc_1fr *up_, P163 decls_429);
static void f_decl_element_432(struct f_greenc_1fr *up_, P163 e_431);
static void f_other_decl_434(struct f_greenc_1fr *up_, P163 e_433);
static void f_subprogram_body_437(struct f_greenc_1fr *up_, P163 d_435, P110 y_436);
static void f_gen_statements_439(struct f_greenc_1fr *up_, P163 stmts_438);
static void f_pop_frames_441(struct f_greenc_1fr *up_, rt_int upto_440);
static void f_push_cleanup_443(struct f_greenc_1fr *up_, rstr s_442);
static void f_pop_cleanup_444(struct f_greenc_1fr *up_);
static void f_guarded_448(struct f_greenc_1fr *up_, P163 stmts_445, P163 hs_446, rt_int line_447);
static void f_exc_id_452(struct f_greenc_1fr *up_, rstr name_449, rt_int line_450, P133 *r_451);
static void f_gen_statement_454(struct f_greenc_1fr *up_, P163 s_453);
static void f_slice_assign_456(struct f_greenc_1fr *up_, P163 s_455);
static void f_gen_call_458(struct f_greenc_1fr *up_, P163 s_457);
static void f_gen_if_460(struct f_greenc_1fr *up_, P163 s_459);
static void f_gen_case_462(struct f_greenc_1fr *up_, P163 s_461);
static void f_push_exit_466(struct f_greenc_1fr *up_, P133 match_463, int is_loop_464, P133 *label_465);
static void f_gen_loop_468(struct f_greenc_1fr *up_, P163 s_467);
static void f_gen_block_470(struct f_greenc_1fr *up_, P163 s_469);
static void f_gen_exit_472(struct f_greenc_1fr *up_, P163 s_471);
static void f_gen_return_474(struct f_greenc_1fr *up_, P163 s_473);
static void f_access_of_477(struct f_greenc_1fr *up_, P110 y_475, P133 *r_476);
static void f_link_to_480(struct f_greenc_1fr *up_, rt_int l_478, P133 *r_479);
static rstr f_c_ident_482(struct f_greenc_1fr *up_, rstr s_481);
static void f_deref_486(struct f_greenc_1fr *up_, rstr base_483, P115 t_484, P133 *r_485);
static int f_is_object_488(struct f_greenc_1fr *up_, P163 e_487);
static void f_lvalue_494(struct f_greenc_1fr *up_, P163 e_489, P133 *code_out_490, P115 *t_491, P170 *c_492, int *ro_493);
static void f_select_on_502(struct f_greenc_1fr *up_, rstr base_495, P115 bt_496, P163 e_497, int *ro_498, P133 *code_out_499, P115 *t_500, P170 *c_501);
static void f_index_on_511(struct f_greenc_1fr *up_, rstr base_503, P115 bt_504, P163 e_505, int *ro_506, int lv_507, P133 *code_out_508, P115 *t_509, P170 *c_510);
static int f_is_char_lit_513(struct f_greenc_1fr *up_, P163 e_512);
static int f_is_enum_lit_515(struct f_greenc_1fr *up_, P163 e_514);
static rstr f_c_string_517(struct f_greenc_1fr *up_, rstr s_516);
static void f_gexpr_522(struct f_greenc_1fr *up_, P163 e_518, P115 want_519, P115 *t_520, P133 *r_521);
static void f_gexpr_1_527(struct f_greenc_1fr *up_, P163 e_523, P115 want_524, P115 *t_525, P133 *r_526);
static void f_char_literal_532(struct f_greenc_1fr *up_, P163 e_528, P115 want_529, P115 *t_530, P133 *r_531);
static void f_gen_name_537(struct f_greenc_1fr *up_, P163 e_533, P115 want_534, P115 *t_535, P133 *r_536);
static void f_gen_unop_542(struct f_greenc_1fr *up_, P163 e_538, P115 want_539, P115 *t_540, P133 *r_541);
static void f_gen_binop_547(struct f_greenc_1fr *up_, P163 e_543, P115 want_544, P115 *t_545, P133 *r_546);
static void f_conversion_552(struct f_greenc_1fr *up_, P163 e_548, P110 y_549, P115 *t_550, P133 *r_551);
static void f_gen_attr_557(struct f_greenc_1fr *up_, P163 e_553, P115 want_554, P115 *t_555, P133 *r_556);
static void f_allocator_562(struct f_greenc_1fr *up_, P163 e_558, P115 want_559, P115 *t_560, P133 *r_561);
static void f_aggregate_567(struct f_greenc_1fr *up_, P163 e_563, P115 want_564, P115 *t_565, P133 *r_566);
static P163 f_actual_for_571(struct f_greenc_1fr *up_, P163 args_568, P1041 pm_569, P1041 first_570);
static void f_gcall_576(struct f_greenc_1fr *up_, P163 e_572, int is_stmt_573, P115 *t_574, P133 *r_575);
static void f_gcall_with_581(struct f_greenc_1fr *up_, P163 e_577, P110 y_578, P115 *t_579, P133 *r_580);
static void f_builtin_588(struct f_greenc_1fr *up_, rstr name_582, P163 args_583, rt_int line_584, int is_stmt_585, P115 *t_586, P133 *r_587);
static int f_is_package_590(struct f_greenc_1fr *up_, P163 e_589);
static P110 f_member_of_594(struct f_greenc_1fr *up_, rstr p_591, rstr name_592, rt_int line_593);
static int f_inside_package_596(struct f_greenc_1fr *up_, P163 p_595);
static void f_copy_sym_599(struct f_greenc_1fr *up_, P110 y_597, P110 *z_598);
static void f_complete_private_602(struct f_greenc_1fr *up_, P115 ph_600, P115 full_601);
static void f_package_spec_604(struct f_greenc_1fr *up_, P163 e_603);
static int f_hidden_from_607(struct f_greenc_1fr *up_, P110 m_605, P110 first_private_606);
static void f_package_body_609(struct f_greenc_1fr *up_, P163 e_608);
static void f_use_clause_611(struct f_greenc_1fr *up_, P163 e_610);
static void f_fits_616(struct f_greenc_1fr *up_, P110 y_612, P163 args_613, P115 want_614, int *ok_615);
static int f_is_builtin_618(struct f_greenc_1fr *up_, rstr n_617);
static void f_resolve_overload_625(struct f_greenc_1fr *up_, rstr name_619, P163 args_620, int is_stmt_621, P115 want_622, rt_int line_623, P110 *y_624);
static void f_resolve_member_overload_633(struct f_greenc_1fr *up_, rstr p_626, rstr name_627, P163 args_628, int is_stmt_629, P115 want_630, rt_int line_631, P110 *y_632);
static void f_user_operator_639(struct f_greenc_1fr *up_, P163 e_634, P115 want_635, P115 *t_636, P133 *r_637, int *done_638);
static void f_task_p_641(struct f_greenc_1fr *up_, P163 *res_640);
static void f_entry_p_643(struct f_greenc_1fr *up_, P163 *res_642);
static void f_accept_p_645(struct f_greenc_1fr *up_, P163 *res_644);
static void f_delay_p_647(struct f_greenc_1fr *up_, P163 *res_646);
static void f_designators_649(struct f_greenc_1fr *up_, P163 *res_648);
static void f_parse_task_statement_651(struct f_greenc_1fr *up_, P163 *res_650);
static void f_path_at_655(struct f_greenc_1fr *up_, rt_int level_652, rstr field_653, P133 *r_654);
static int f_is_task_name_657(struct f_greenc_1fr *up_, rstr n_656);
static void f_task_of_661(struct f_greenc_1fr *up_, P163 e_658, P110 *y_659, P163 *ix_660);
static void f_own_index_663(struct f_greenc_1fr *up_, P133 *r_662);
static void f_member_668(struct f_greenc_1fr *up_, P110 y_664, rstr arr_665, rstr i_666, P133 *r_667);
static void f_act_path_671(struct f_greenc_1fr *up_, P110 y_669, P133 *r_670);
static void f_act_path_i_675(struct f_greenc_1fr *up_, P110 y_672, rstr i_673, P133 *r_674);
static void f_entry_path_679(struct f_greenc_1fr *up_, P110 y_676, rstr i_677, P133 *r_678);
static void f_declare_slot_682(struct f_greenc_1fr *up_, rstr ctype_name_680, rstr field_681);
static void f_task_decl_684(struct f_greenc_1fr *up_, P163 e_683);
static void f_family_arg_struct_685(struct f_greenc_1fr *up_);
static void f_family_bounds_689(struct f_greenc_1fr *up_, P163 b_686, P110 y_687, P133 x_688);
static void f_entry_family_slot_694(struct f_greenc_1fr *up_, P110 y_690, rstr base_691, rstr i_692, P133 *r_693);
static void f_task_spec_696(struct f_greenc_1fr *up_, P163 e_695);
static void f_entry_decl_698(struct f_greenc_1fr *up_, P163 e_697);
static void f_task_body_700(struct f_greenc_1fr *up_, P163 e_699);
static void f_task_awaits_703(struct f_greenc_1fr *up_, P163 decls_701, P133 *aw_702);
static void f_task_failure_705(struct f_greenc_1fr *up_, P163 s_704);
static void f_entry_sym_709(struct f_greenc_1fr *up_, P163 e_706, P110 *y_707, P163 *ix_708);
static void f_other_call_714(struct f_greenc_1fr *up_, P163 e_710, int is_stmt_711, P115 *t_712, P133 *r_713);
static void f_other_attr_719(struct f_greenc_1fr *up_, P163 e_715, P110 y_716, P115 *t_717, P133 *r_718);
static void f_member_attr_723(struct f_greenc_1fr *up_, P163 e_720, P115 *t_721, P133 *r_722);
static void f_task_builtin_729(struct f_greenc_1fr *up_, rstr name_724, P163 args_725, rt_int line_726, P115 *t_727, P133 *r_728);
static void f_gen_accept_731(struct f_greenc_1fr *up_, P163 s_730);
static void f_member_slot_735(struct f_greenc_1fr *up_, P110 y_732, P163 s_733, P133 *ent_734);
static void f_gen_delay_ticks_738(struct f_greenc_1fr *up_, P163 e_736, P133 *r_737);
static void f_gen_select_740(struct f_greenc_1fr *up_, P163 s_739);
static void f_family_range_745(struct f_greenc_1fr *up_, P110 y_741, P163 ix_742, P133 *lo_743, P133 *hi_744);
static void f_task_statement_gen_747(struct f_greenc_1fr *up_, P163 s_746);
static P163 f_root_name_749(struct f_greenc_1fr *up_, P163 e_748);
static void f_check_pure_target_752(struct f_greenc_1fr *up_, P163 target_750, rt_int line_751);
static int f_assigns_nonlocal_755(struct f_greenc_1fr *up_, P163 d_753, rstr name_754);
static int f_declares_758(struct f_greenc_1fr *up_, P163 d_756, rstr name_757);
static int f_scan_handlers_762(struct f_greenc_1fr *up_, P163 h_759, P163 d_760, rstr name_761);
static int f_scan_assigns_766(struct f_greenc_1fr *up_, P163 stmts_763, P163 d_764, rstr name_765);
static void f_check_call_rules_769(struct f_greenc_1fr *up_, P163 e_767, P110 y_768);
static void f_generic_p_771(struct f_greenc_1fr *up_, P163 *res_770);
static void f_instantiation_774(struct f_greenc_1fr *up_, P163 x_772, P163 *res_773);
static void f_generic_decl_776(struct f_greenc_1fr *up_, P163 e_775);
static int f_is_generic_name_778(struct f_greenc_1fr *up_, rstr n_777);
static void f_attach_generic_body_780(struct f_greenc_1fr *up_, P163 e_779);
static void f_restore_generic_context_783(struct f_greenc_1fr *up_, P163 body_node_781, rt_int line_782);
static P163 f_gactual_787(struct f_greenc_1fr *up_, P163 args_784, rt_int nth_785, rstr name_786);
static void f_copy_node_791(struct f_greenc_1fr *up_, P163 n_788, P133 name_789, P163 *r_790);
static void f_instantiate_793(struct f_greenc_1fr *up_, P163 e_792);
static void f_predef_type_798(struct f_greenc_1fr *up_, rstr name_794, P115 t_795, rstr lo_796, rstr hi_797);
static void f_predef_const_802(struct f_greenc_1fr *up_, rstr name_799, P115 t_800, rstr code_text_801);
static void f_predef_exc_804(struct f_greenc_1fr *up_, rstr name_803);
static void f_predef_lit_808(struct f_greenc_1fr *up_, rstr name_805, P115 t_806, rt_int v_807);
static void f_predefine_809(struct f_greenc_1fr *up_);
static void f_translate_811(struct f_greenc_1fr *up_, P163 u_810);
static void f_print_program_812(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_101;
static P133 f_mk_185(struct f_greenc_1fr *up_, rstr s_184) {
  struct f_mk_185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_184 = rt_str_copy(s_184);
F->result_ = ({ rstr *cell813 = rt_alloc(sizeof(rstr)); *cell813 = rt_str_copy(F->s_184); (P133)cell813; });
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
(*F->res_187) = ({ rstr *cell814 = rt_alloc(sizeof(rstr)); *cell814 = rt_str_copy(rt_str_cat(F->base_186, rt_str_of_int(F->up->serial_118))); (P133)cell814; });
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
F->result_ = rt_range(rt_sub(((rt_int)(F->c_193) + 1), ((rt_int)32LL)) - 1, 0, 127);
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
F->r_815 = rt_str_copy(F->s_195);
{ rt_int lo818 = ((rt_int)1LL), hi819 = (F->s_195).len;
for (rt_int it820 = lo818; it820 <= hi819; it820++) {
F->i_817 = it820;
if (((rt_str_get(F->r_815, F->i_817) >= 65) && (rt_str_get(F->r_815, F->i_817) <= 90))) {
(*rt_str_at(&F->r_815, F->i_817)) = rt_range(rt_add(((rt_int)(rt_str_get(F->r_815, F->i_817)) + 1), ((rt_int)32LL)) - 1, 0, 127);
}
}
}
L_end_816: ;
F->result_ = F->r_815;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_field_198(struct f_greenc_1fr *up_, rstr s_197) {
  struct f_c_field_198fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_197 = rt_str_copy(s_197);
F->result_ = rt_str_catc(f_lower_s_196(F->up, F->s_197), 95);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_q_199(struct f_greenc_1fr *up_) {
  struct f_q_199fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_str("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_202(struct f_greenc_1fr *up_, rt_int line_200, rstr msg_201) {
  struct f_fail_202fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_200 = line_200;
F->msg_201 = rt_str_copy(msg_201);
if ((F->up->trial_148 == ((rt_int)0LL))) {
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("greenc: line ", 13), rt_str_of_int(F->line_200)), rt_str(": ", 2)), F->msg_201));
rt_g_put(rt_str("\n", 1));
}
rt_raise(ex_compile_error_101);
ret_:

  return;
}

static P119 f_new_buffer_203(struct f_greenc_1fr *up_) {
  struct f_new_buffer_203fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R120 *cell821 = rt_alloc(sizeof(R120)); *cell821 = cp_R120(({ R120 ag822; ag822.head_ = NULL; ag822.tail_ = NULL; ag822; })); (P119)cell821; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_206(struct f_greenc_1fr *up_, P119 b_204, rstr s_205) {
  struct f_put_to_206fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_204 = b_204;
F->s_205 = rt_str_copy(s_205);
F->l_823 = NULL;
F->l_823 = ({ R145 *cell824 = rt_alloc(sizeof(R145)); *cell824 = cp_R145(({ R145 ag825; ag825.s_ = NULL; ag825.next_ = NULL; ag825; })); (P144)cell824; });
(*(P144)rt_nil_check(F->l_823)).s_ = f_mk_185(F->up, F->s_205);
if (((*(P119)rt_nil_check(F->b_204)).tail_ == NULL)) {
(*(P119)rt_nil_check(F->b_204)).head_ = F->l_823;
} else {
(*(P144)rt_nil_check((*(P119)rt_nil_check(F->b_204)).tail_)).next_ = F->l_823;
}
(*(P119)rt_nil_check(F->b_204)).tail_ = F->l_823;
ret_:

  return;
}

static void f_emit_208(struct f_greenc_1fr *up_, rstr s_207) {
  struct f_emit_208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_207 = rt_str_copy(s_207);
f_put_to_206(F->up, F->up->code_129, F->s_207);
ret_:

  return;
}

static void f_print_buffer_210(struct f_greenc_1fr *up_, P119 b_209) {
  struct f_print_buffer_210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_209 = b_209;
F->l_826 = NULL;
F->l_826 = (*(P119)rt_nil_check(F->b_209)).head_;
while ((F->l_826 != NULL)) {
rt_g_put((*(P133)rt_nil_check((*(P144)rt_nil_check(F->l_826)).s_)));
rt_g_put(rt_str("\n", 1));
F->l_826 = (*(P144)rt_nil_check(F->l_826)).next_;
}
L_end_827: ;
ret_:

  return;
}

static void f_splice_213(struct f_greenc_1fr *up_, P119 a_211, P119 b_212) {
  struct f_splice_213fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_211 = a_211;
F->b_212 = b_212;
if (((*(P119)rt_nil_check(F->b_212)).head_ == NULL)) {
goto ret_;
}
if (((*(P119)rt_nil_check(F->a_211)).tail_ == NULL)) {
(*(P119)rt_nil_check(F->a_211)).head_ = (*(P119)rt_nil_check(F->b_212)).head_;
} else {
(*(P144)rt_nil_check((*(P119)rt_nil_check(F->a_211)).tail_)).next_ = (*(P119)rt_nil_check(F->b_212)).head_;
}
(*(P119)rt_nil_check(F->a_211)).tail_ = (*(P119)rt_nil_check(F->b_212)).tail_;
(*(P119)rt_nil_check(F->b_212)).head_ = NULL;
(*(P119)rt_nil_check(F->b_212)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_215(struct f_greenc_1fr *up_, rstr w_214) {
  struct f_is_reserved_215fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_214 = rt_str_copy(w_214);
{ rt_int sel828 = (F->w_214).len;
if (0 || sel828 == ((rt_int)2LL)) {
F->result_ = ((((((rt_str_eq(F->w_214, rt_str("AT", 2)) || rt_str_eq(F->w_214, rt_str("DO", 2))) || rt_str_eq(F->w_214, rt_str("IF", 2))) || rt_str_eq(F->w_214, rt_str("IN", 2))) || rt_str_eq(F->w_214, rt_str("IS", 2))) || rt_str_eq(F->w_214, rt_str("OF", 2))) || rt_str_eq(F->w_214, rt_str("OR", 2)));
goto ret_;
} else if (0 || sel828 == ((rt_int)3LL)) {
F->result_ = (((((((((rt_str_eq(F->w_214, rt_str("ALL", 3)) || rt_str_eq(F->w_214, rt_str("AND", 3))) || rt_str_eq(F->w_214, rt_str("END", 3))) || rt_str_eq(F->w_214, rt_str("FOR", 3))) || rt_str_eq(F->w_214, rt_str("MOD", 3))) || rt_str_eq(F->w_214, rt_str("NEW", 3))) || rt_str_eq(F->w_214, rt_str("NOT", 3))) || rt_str_eq(F->w_214, rt_str("OUT", 3))) || rt_str_eq(F->w_214, rt_str("USE", 3))) || rt_str_eq(F->w_214, rt_str("XOR", 3)));
goto ret_;
} else if (0 || sel828 == ((rt_int)4LL)) {
F->result_ = ((((((((((rt_str_eq(F->w_214, rt_str("BODY", 4)) || rt_str_eq(F->w_214, rt_str("CASE", 4))) || rt_str_eq(F->w_214, rt_str("ELSE", 4))) || rt_str_eq(F->w_214, rt_str("EXIT", 4))) || rt_str_eq(F->w_214, rt_str("GOTO", 4))) || rt_str_eq(F->w_214, rt_str("LOOP", 4))) || rt_str_eq(F->w_214, rt_str("NULL", 4))) || rt_str_eq(F->w_214, rt_str("TASK", 4))) || rt_str_eq(F->w_214, rt_str("THEN", 4))) || rt_str_eq(F->w_214, rt_str("TYPE", 4))) || rt_str_eq(F->w_214, rt_str("WHEN", 4)));
goto ret_;
} else if (0 || sel828 == ((rt_int)5LL)) {
F->result_ = (((((((((rt_str_eq(F->w_214, rt_str("ABORT", 5)) || rt_str_eq(F->w_214, rt_str("ARRAY", 5))) || rt_str_eq(F->w_214, rt_str("BEGIN", 5))) || rt_str_eq(F->w_214, rt_str("DELAY", 5))) || rt_str_eq(F->w_214, rt_str("DELTA", 5))) || rt_str_eq(F->w_214, rt_str("ELSIF", 5))) || rt_str_eq(F->w_214, rt_str("ENTRY", 5))) || rt_str_eq(F->w_214, rt_str("RAISE", 5))) || rt_str_eq(F->w_214, rt_str("RANGE", 5))) || rt_str_eq(F->w_214, rt_str("WHILE", 5)));
goto ret_;
} else if (0 || sel828 == ((rt_int)6LL)) {
F->result_ = ((((((((rt_str_eq(F->w_214, rt_str("ACCEPT", 6)) || rt_str_eq(F->w_214, rt_str("ACCESS", 6))) || rt_str_eq(F->w_214, rt_str("ASSERT", 6))) || rt_str_eq(F->w_214, rt_str("DIGITS", 6))) || rt_str_eq(F->w_214, rt_str("OTHERS", 6))) || rt_str_eq(F->w_214, rt_str("PRAGMA", 6))) || rt_str_eq(F->w_214, rt_str("RECORD", 6))) || rt_str_eq(F->w_214, rt_str("RETURN", 6))) || rt_str_eq(F->w_214, rt_str("SELECT", 6)));
goto ret_;
} else if (0 || sel828 == ((rt_int)7LL)) {
F->result_ = (((((((rt_str_eq(F->w_214, rt_str("DECLARE", 7)) || rt_str_eq(F->w_214, rt_str("GENERIC", 7))) || rt_str_eq(F->w_214, rt_str("PACKAGE", 7))) || rt_str_eq(F->w_214, rt_str("PACKING", 7))) || rt_str_eq(F->w_214, rt_str("PRIVATE", 7))) || rt_str_eq(F->w_214, rt_str("RENAMES", 7))) || rt_str_eq(F->w_214, rt_str("REVERSE", 7))) || rt_str_eq(F->w_214, rt_str("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel828 == ((rt_int)8LL)) {
F->result_ = (((rt_str_eq(F->w_214, rt_str("CONSTANT", 8)) || rt_str_eq(F->w_214, rt_str("FUNCTION", 8))) || rt_str_eq(F->w_214, rt_str("INITIATE", 8))) || rt_str_eq(F->w_214, rt_str("SEPARATE", 8)));
goto ret_;
} else if (0 || sel828 == ((rt_int)9LL)) {
F->result_ = (rt_str_eq(F->w_214, rt_str("EXCEPTION", 9)) || rt_str_eq(F->w_214, rt_str("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel828 == ((rt_int)10LL)) {
F->result_ = rt_str_eq(F->w_214, rt_str("RESTRICTED", 10));
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

static void f_add_token_219(struct f_greenc_1fr *up_, rt_int kind_216, rstr s_217, rt_int ival_218) {
  struct f_add_token_219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_216 = kind_216;
F->s_217 = rt_str_copy(s_217);
F->ival_218 = ival_218;
F->up->ntoks_106 = rt_add(F->up->ntoks_106, ((rt_int)1LL));
F->up->toks_105.p[rt_index(F->up->ntoks_106, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo] = ({ R104 *cell829 = rt_alloc(sizeof(R104)); *cell829 = cp_R104(({ R104 ag830; ag830.kind_ = F->kind_216; ag830.line_ = F->up->src_line_108; ag830.ival_ = F->ival_218; ag830.s_ = NULL; ag830; })); (P103)cell829; });
(*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->ntoks_106, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_ = f_mk_185(F->up, F->s_217);
ret_:

  return;
}

static rt_int f_digit_value_221(struct f_greenc_1fr *up_, int c_220) {
  struct f_digit_value_221fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_220 = c_220;
if (f_is_digit_192(F->up, F->c_220)) {
F->result_ = rt_sub(((rt_int)(F->c_220) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_194(F->up, F->c_220)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lex_line_223(struct f_greenc_1fr *up_, rstr line_222) {
  struct f_lex_line_223fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_222 = rt_str_copy(line_222);
F->i_831 = ((rt_int)1LL);
F->j_832 = ((rt_int)0LL);
F->n_833 = (F->line_222).len;
F->buf_836 = rt_str_new((((rt_int)1000LL) - ((rt_int)1LL) + 1));
while ((F->i_831 <= F->n_833)) {
F->c_834 = rt_range(rt_str_get(F->line_222, F->i_831), 0, 127);
if (((((F->c_834 == 32) || (F->c_834 == 9)) || (F->c_834 == 13)) || (F->c_834 == 12))) {
F->i_831 = rt_add(F->i_831, ((rt_int)1LL));
} else if ((((F->c_834 == 45) && (F->i_831 < F->n_833)) && (rt_str_get(F->line_222, rt_add(F->i_831, ((rt_int)1LL))) == 45))) {
F->i_831 = rt_add(F->n_833, ((rt_int)1LL));
} else if (f_is_letter_190(F->up, F->c_834)) {
F->j_832 = F->i_831;
F->bl_837 = ((rt_int)0LL);
while (((F->j_832 <= F->n_833) && ((f_is_letter_190(F->up, rt_str_get(F->line_222, F->j_832)) || f_is_digit_192(F->up, rt_str_get(F->line_222, F->j_832))) || (rt_str_get(F->line_222, F->j_832) == 95)))) {
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = f_upper_194(F->up, rt_str_get(F->line_222, F->j_832));
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
L_end_839: ;
if (f_is_reserved_215(F->up, rt_str_slice(F->buf_836, ((rt_int)1LL), F->bl_837))) {
f_add_token_219(F->up, ((rt_int)2LL), rt_str_slice(F->buf_836, ((rt_int)1LL), F->bl_837), ((rt_int)0LL));
} else {
f_add_token_219(F->up, ((rt_int)1LL), rt_str_slice(F->buf_836, ((rt_int)1LL), F->bl_837), ((rt_int)0LL));
}
F->i_831 = F->j_832;
} else if (f_is_digit_192(F->up, F->c_834)) {
F->j_832 = F->i_831;
F->v_835 = ((rt_int)0LL);
F->bl_837 = ((rt_int)0LL);
while (((F->j_832 <= F->n_833) && (f_is_digit_192(F->up, rt_str_get(F->line_222, F->j_832)) || (rt_str_get(F->line_222, F->j_832) == 95)))) {
if ((rt_str_get(F->line_222, F->j_832) != 95)) {
F->v_835 = rt_add(rt_mul(F->v_835, ((rt_int)10LL)), f_digit_value_221(F->up, rt_str_get(F->line_222, F->j_832)));
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = rt_str_get(F->line_222, F->j_832);
}
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
L_end_840: ;
if (((F->j_832 <= F->n_833) && (rt_str_get(F->line_222, F->j_832) == 35))) {
{
F->base_842 = F->v_835;
F->v_835 = ((rt_int)0LL);
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
while (((F->j_832 <= F->n_833) && ((f_is_letter_190(F->up, rt_str_get(F->line_222, F->j_832)) || f_is_digit_192(F->up, rt_str_get(F->line_222, F->j_832))) || (rt_str_get(F->line_222, F->j_832) == 95)))) {
if ((rt_str_get(F->line_222, F->j_832) != 95)) {
if ((f_digit_value_221(F->up, rt_str_get(F->line_222, F->j_832)) >= F->base_842)) {
f_fail_202(F->up, F->up->src_line_108, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str("digit ", 6), rt_str_get(F->line_222, F->j_832)), rt_str(" is not valid in base ", 22)), rt_str_of_int(F->base_842)), rt_str(" (RM79 2.4)", 11)));
}
F->v_835 = rt_add(rt_mul(F->v_835, F->base_842), f_digit_value_221(F->up, rt_str_get(F->line_222, F->j_832)));
}
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
L_end_843: ;

}
L_end_841: ;
f_add_token_219(F->up, ((rt_int)4LL), rt_str_of_int(F->v_835), F->v_835);
} else if (((F->j_832 < F->n_833) && ((rt_str_get(F->line_222, F->j_832) == 46) && f_is_digit_192(F->up, rt_str_get(F->line_222, rt_add(F->j_832, ((rt_int)1LL))))))) {
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = 46;
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
while (((F->j_832 <= F->n_833) && (f_is_digit_192(F->up, rt_str_get(F->line_222, F->j_832)) || (rt_str_get(F->line_222, F->j_832) == 95)))) {
if ((rt_str_get(F->line_222, F->j_832) != 95)) {
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = rt_str_get(F->line_222, F->j_832);
}
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
L_end_844: ;
if (((F->j_832 <= F->n_833) && ((rt_str_get(F->line_222, F->j_832) == 69) || (rt_str_get(F->line_222, F->j_832) == 101)))) {
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = 69;
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
while (((F->j_832 <= F->n_833) && ((f_is_digit_192(F->up, rt_str_get(F->line_222, F->j_832)) || (rt_str_get(F->line_222, F->j_832) == 43)) || (rt_str_get(F->line_222, F->j_832) == 45)))) {
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = rt_str_get(F->line_222, F->j_832);
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
L_end_845: ;
}
f_add_token_219(F->up, ((rt_int)5LL), rt_str_slice(F->buf_836, ((rt_int)1LL), F->bl_837), ((rt_int)0LL));
} else if (((F->j_832 < F->n_833) && (((rt_str_get(F->line_222, F->j_832) == 69) || (rt_str_get(F->line_222, F->j_832) == 101)) && f_is_digit_192(F->up, rt_str_get(F->line_222, rt_add(F->j_832, ((rt_int)1LL))))))) {
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = 69;
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
while (((F->j_832 <= F->n_833) && f_is_digit_192(F->up, rt_str_get(F->line_222, F->j_832)))) {
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = rt_str_get(F->line_222, F->j_832);
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
L_end_846: ;
f_add_token_219(F->up, ((rt_int)5LL), rt_str_slice(F->buf_836, ((rt_int)1LL), F->bl_837), ((rt_int)0LL));
} else {
f_add_token_219(F->up, ((rt_int)4LL), rt_str_slice(F->buf_836, ((rt_int)1LL), F->bl_837), F->v_835);
}
F->i_831 = F->j_832;
} else if ((F->c_834 == 34)) {
F->j_832 = rt_add(F->i_831, ((rt_int)1LL));
F->bl_837 = ((rt_int)0LL);
for (;;) {
if ((F->j_832 > F->n_833)) {
f_fail_202(F->up, F->up->src_line_108, rt_str("unterminated string", 19));
}
if ((rt_str_get(F->line_222, F->j_832) == 34)) {
if (((F->j_832 == F->n_833) || (rt_str_get(F->line_222, rt_add(F->j_832, ((rt_int)1LL))) != 34))) {
goto L_end_847;
}
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
F->bl_837 = rt_add(F->bl_837, ((rt_int)1LL));
(*rt_str_at(&F->buf_836, F->bl_837)) = rt_str_get(F->line_222, F->j_832);
F->j_832 = rt_add(F->j_832, ((rt_int)1LL));
}
L_end_847: ;
f_add_token_219(F->up, ((rt_int)6LL), rt_str_slice(F->buf_836, ((rt_int)1LL), F->bl_837), ((rt_int)0LL));
F->i_831 = rt_add(F->j_832, ((rt_int)1LL));
} else {
{
F->two_849 = rt_str_new((((rt_int)3LL) - ((rt_int)1LL) + 1));
rt_str_assign(&F->two_849, rt_str("   ", 3));
(*rt_str_at(&F->two_849, ((rt_int)1LL))) = F->c_834;
if ((F->i_831 < F->n_833)) {
(*rt_str_at(&F->two_849, ((rt_int)2LL))) = rt_str_get(F->line_222, rt_add(F->i_831, ((rt_int)1LL)));
}
if ((rt_add(F->i_831, ((rt_int)1LL)) < F->n_833)) {
(*rt_str_at(&F->two_849, ((rt_int)3LL))) = rt_str_get(F->line_222, rt_add(F->i_831, ((rt_int)2LL)));
}
if (rt_str_eq(F->two_849, rt_str(":=:", 3))) {
f_add_token_219(F->up, ((rt_int)3LL), rt_str(":=:", 3), ((rt_int)0LL));
F->i_831 = rt_add(F->i_831, ((rt_int)3LL));
} else if ((((((((((rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str(":=", 2)) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=:", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=>", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str("..", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str("**", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str("/=", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<=", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">=", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<<", 2))) || rt_str_eq(rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">>", 2)))) {
f_add_token_219(F->up, ((rt_int)3LL), rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)2LL)), ((rt_int)0LL));
F->i_831 = rt_add(F->i_831, ((rt_int)2LL));
} else if (((((((((((((((((F->c_834 == 38) || (F->c_834 == 39)) || (F->c_834 == 40)) || (F->c_834 == 41)) || (F->c_834 == 42)) || (F->c_834 == 43)) || (F->c_834 == 44)) || (F->c_834 == 45)) || (F->c_834 == 46)) || (F->c_834 == 47)) || (F->c_834 == 58)) || (F->c_834 == 59)) || (F->c_834 == 60)) || (F->c_834 == 61)) || (F->c_834 == 62)) || (F->c_834 == 124))) {
f_add_token_219(F->up, ((rt_int)3LL), rt_str_slice(F->two_849, ((rt_int)1LL), ((rt_int)1LL)), ((rt_int)0LL));
F->i_831 = rt_add(F->i_831, ((rt_int)1LL));
} else {
f_fail_202(F->up, F->up->src_line_108, rt_str("unexpected character", 20));
}

}
L_end_848: ;
}
}
L_end_838: ;
ret_:

  return;
}

static void f_read_source_224(struct f_greenc_1fr *up_) {
  struct f_read_source_224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_850 = rt_str_new((((rt_int)10000LL) - ((rt_int)1LL) + 1));
F->bl_851 = ((rt_int)0LL);
{ rt_frame xf853;
if (RT_TRY(xf853)) {
for (;;) {
(F->c_852 = rt_g_getc());
if ((F->c_852 == 10)) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_223(F->up, rt_str_slice(F->buf_850, ((rt_int)1LL), F->bl_851));
F->bl_851 = ((rt_int)0LL);
} else {
F->bl_851 = rt_add(F->bl_851, ((rt_int)1LL));
(*rt_str_at(&F->buf_850, F->bl_851)) = F->c_852;
}
}
L_end_855: ;
RT_POP(xf853);
} else {
RT_POP(xf853);
int x854 = rt_xcur;
if (rt_g_aborted()) rt_raise(x854);
if (0 || x854 == rt_exc("END_OF_FILE")) {
if ((F->bl_851 > ((rt_int)0LL))) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_223(F->up, rt_str_slice(F->buf_850, ((rt_int)1LL), F->bl_851));
}
f_add_token_219(F->up, ((rt_int)0LL), rt_str("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x854);
}
}
}
ret_:

  return;
}

static P163 f_nn_227(struct f_greenc_1fr *up_, rt_int kind_225, rt_int line_226) {
  struct f_nn_227fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_225 = kind_225;
F->line_226 = line_226;
F->result_ = ({ R164 *cell856 = rt_alloc(sizeof(R164)); *cell856 = cp_R164(({ R164 ag857; ag857.kind_ = F->kind_225; ag857.line_ = F->line_226; ag857.ival_ = ((rt_int)0LL); ag857.flag_ = ((rt_int)0LL); ag857.name_ = NULL; ag857.tag_ = NULL; ag857.a_ = NULL; ag857.b_ = NULL; ag857.c_ = NULL; ag857.d_ = NULL; ag857.e_ = NULL; ag857.next_ = NULL; ag857; })); (P163)cell856; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_231(struct f_greenc_1fr *up_, P163 *head_228, P163 *tail_229, P163 x_230) {
  struct f_append_231fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_228 = head_228;
F->tail_229 = tail_229;
F->x_230 = x_230;
if ((F->x_230 == NULL)) {
goto ret_;
}
if (((*F->head_228) == NULL)) {
(*F->head_228) = F->x_230;
} else {
(*(P163)rt_nil_check((*F->tail_229))).next_ = F->x_230;
}
(*F->tail_229) = F->x_230;
while (((*(P163)rt_nil_check((*F->tail_229))).next_ != NULL)) {
(*F->tail_229) = (*(P163)rt_nil_check((*F->tail_229))).next_;
}
L_end_858: ;
ret_:

  return;
}

static rt_int f_list_len_233(struct f_greenc_1fr *up_, P163 l_232) {
  struct f_list_len_233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_232 = l_232;
F->n_859 = ((rt_int)0LL);
F->p_860 = NULL;
F->p_860 = F->l_232;
while ((F->p_860 != NULL)) {
F->n_859 = rt_add(F->n_859, ((rt_int)1LL));
F->p_860 = (*(P163)rt_nil_check(F->p_860)).next_;
}
L_end_861: ;
F->result_ = F->n_859;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_234(struct f_greenc_1fr *up_) {
  struct f_cur_line_234fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_236(struct f_greenc_1fr *up_, rstr w_235) {
  struct f_at_kw_236fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_235 = rt_str_copy(w_235);
F->result_ = (((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == ((rt_int)2LL)) && rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), F->w_235));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_238(struct f_greenc_1fr *up_, rstr w_237) {
  struct f_at_op_238fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_237 = rt_str_copy(w_237);
F->result_ = (((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == ((rt_int)3LL)) && rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), F->w_237));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_240(struct f_greenc_1fr *up_, rt_int k_239) {
  struct f_at_kind_240fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_239 = k_239;
F->result_ = ((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == F->k_239);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_242(struct f_greenc_1fr *up_, rt_int k_241) {
  struct f_kind_at_242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_241 = k_241;
if ((rt_add(F->up->tpos_107, F->k_241) > F->up->ntoks_106)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_add(F->up->tpos_107, F->k_241), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_text_at_244(struct f_greenc_1fr *up_, rt_int k_243) {
  struct f_text_at_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_243 = k_243;
if ((rt_add(F->up->tpos_107, F->k_243) > F->up->ntoks_106)) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_add(F->up->tpos_107, F->k_243), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_246(struct f_greenc_1fr *up_, rstr msg_245) {
  struct f_perror_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_245 = rt_str_copy(msg_245);
f_fail_202(F->up, (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).line_, rt_str_catc(rt_str_cat(rt_str_cat(F->msg_245, rt_str(" (at ", 5)), (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))), 41));
ret_:

  return;
}

static void f_skip_247(struct f_greenc_1fr *up_) {
  struct f_skip_247fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_249(struct f_greenc_1fr *up_, rstr w_248) {
  struct f_expect_kw_249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_248 = rt_str_copy(w_248);
if ((!f_at_kw_236(F->up, F->w_248))) {
f_perror_246(F->up, rt_str_cat(rt_str("expected ", 9), F->w_248));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_251(struct f_greenc_1fr *up_, rstr w_250) {
  struct f_expect_op_251fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_250 = rt_str_copy(w_250);
if ((!f_at_op_238(F->up, F->w_250))) {
f_perror_246(F->up, rt_str_cat(rt_str("expected ", 9), F->w_250));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_253(struct f_greenc_1fr *up_, P133 *res_252) {
  struct f_expect_id_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_252 = res_252;
if ((!f_at_kind_240(F->up, ((rt_int)1LL)))) {
f_perror_246(F->up, rt_str("expected an identifier", 22));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
(*F->res_252) = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_sub(F->up->tpos_107, ((rt_int)1LL)), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_255(struct f_greenc_1fr *up_, P163 *res_254) {
  struct f_name_node_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_254 = res_254;
F->x_862 = NULL;
F->x_862 = f_nn_227(F->up, ((rt_int)5LL), f_cur_line_234(F->up));
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_862)).name_);
(*F->res_254) = F->x_862;
goto ret_;
ret_:

  return;
}

static void f_id_list_257(struct f_greenc_1fr *up_, P163 *res_256) {
  struct f_id_list_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_256 = res_256;
F->head_863 = NULL;
F->tail_864 = NULL;
F->x_865 = NULL;
f_name_node_255(F->up, &F->x_865);
f_append_231(F->up, &F->head_863, &F->tail_864, F->x_865);
while (f_at_op_238(F->up, rt_str(",", 1))) {
f_skip_247(F->up);
f_name_node_255(F->up, &F->x_865);
f_append_231(F->up, &F->head_863, &F->tail_864, F->x_865);
}
L_end_866: ;
(*F->res_256) = F->head_863;
goto ret_;
ret_:

  return;
}

static P163 f_binop_262(struct f_greenc_1fr *up_, P133 op_258, P163 l_259, P163 r_260, rt_int line_261) {
  struct f_binop_262fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_258 = op_258;
F->l_259 = l_259;
F->r_260 = r_260;
F->line_261 = line_261;
F->x_867 = NULL;
F->x_867 = f_nn_227(F->up, ((rt_int)7LL), F->line_261);
(*(P163)rt_nil_check(F->x_867)).name_ = F->op_258;
(*(P163)rt_nil_check(F->x_867)).a_ = F->l_259;
(*(P163)rt_nil_check(F->x_867)).b_ = F->r_260;
F->result_ = F->x_867;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_264(struct f_greenc_1fr *up_, P163 *res_263) {
  struct f_expr_264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_263 = res_263;
F->l_868 = NULL;
F->r_869 = NULL;
F->op_870 = NULL;
f_relation_268(F->up, &F->l_868);
while (((f_at_kw_236(F->up, rt_str("AND", 3)) || f_at_kw_236(F->up, rt_str("OR", 2))) || f_at_kw_236(F->up, rt_str("XOR", 3)))) {
F->op_870 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
F->line_871 = f_cur_line_234(F->up);
f_skip_247(F->up);
if ((rt_str_eq((*(P133)rt_nil_check(F->op_870)), rt_str("AND", 3)) && f_at_kw_236(F->up, rt_str("THEN", 4)))) {
f_skip_247(F->up);
} else if ((rt_str_eq((*(P133)rt_nil_check(F->op_870)), rt_str("OR", 2)) && f_at_kw_236(F->up, rt_str("ELSE", 4)))) {
f_skip_247(F->up);
}
f_relation_268(F->up, &F->r_869);
F->l_868 = f_binop_262(F->up, F->op_870, F->l_868, F->r_869, F->line_871);
}
L_end_872: ;
(*F->res_263) = F->l_868;
goto ret_;
ret_:

  return;
}

static int f_is_rel_266(struct f_greenc_1fr *up_, rstr s_265) {
  struct f_is_rel_266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_265 = rt_str_copy(s_265);
F->result_ = (((((rt_str_eq(F->s_265, rt_str("=", 1)) || rt_str_eq(F->s_265, rt_str("/=", 2))) || rt_str_eq(F->s_265, rt_str("<", 1))) || rt_str_eq(F->s_265, rt_str("<=", 2))) || rt_str_eq(F->s_265, rt_str(">", 1))) || rt_str_eq(F->s_265, rt_str(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_268(struct f_greenc_1fr *up_, P163 *res_267) {
  struct f_relation_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_267 = res_267;
F->l_873 = NULL;
F->r_874 = NULL;
F->lo_875 = NULL;
F->hi_876 = NULL;
F->t_877 = NULL;
F->op_878 = NULL;
F->line_879 = f_cur_line_234(F->up);
F->neg_880 = 0;
f_simple_expr_270(F->up, &F->l_873);
if ((f_at_kind_240(F->up, ((rt_int)3LL)) && f_is_rel_266(F->up, (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))))) {
F->op_878 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
f_simple_expr_270(F->up, &F->r_874);
F->l_873 = f_binop_262(F->up, F->op_878, F->l_873, F->r_874, F->line_879);
(*F->res_267) = F->l_873;
goto ret_;
}
if (((f_at_kw_236(F->up, rt_str("NOT", 3)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("IN", 2)))) {
f_skip_247(F->up);
F->neg_880 = 1;
}
if (f_at_kw_236(F->up, rt_str("IN", 2))) {
f_skip_247(F->up);
f_simple_expr_270(F->up, &F->lo_875);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &F->hi_876);
F->t_877 = f_nn_227(F->up, ((rt_int)14LL), F->line_879);
(*(P163)rt_nil_check(F->t_877)).a_ = F->lo_875;
(*(P163)rt_nil_check(F->t_877)).b_ = F->hi_876;
F->op_878 = f_mk_185(F->up, rt_str("IN", 2));
F->l_873 = f_binop_262(F->up, F->op_878, F->l_873, F->t_877, F->line_879);
if (F->neg_880) {
F->t_877 = f_nn_227(F->up, ((rt_int)6LL), F->line_879);
(*(P163)rt_nil_check(F->t_877)).name_ = f_mk_185(F->up, rt_str("NOT", 3));
(*(P163)rt_nil_check(F->t_877)).a_ = F->l_873;
(*F->res_267) = F->t_877;
goto ret_;
}
}
(*F->res_267) = F->l_873;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_270(struct f_greenc_1fr *up_, P163 *res_269) {
  struct f_simple_expr_270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_269 = res_269;
F->l_881 = NULL;
F->r_882 = NULL;
F->op_883 = NULL;
F->line_884 = f_cur_line_234(F->up);
if (((f_at_op_238(F->up, rt_str("+", 1)) || f_at_op_238(F->up, rt_str("-", 1))) || f_at_kw_236(F->up, rt_str("NOT", 3)))) {
F->op_883 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
f_term_272(F->up, &F->r_882);
F->l_881 = f_nn_227(F->up, ((rt_int)6LL), F->line_884);
(*(P163)rt_nil_check(F->l_881)).name_ = F->op_883;
(*(P163)rt_nil_check(F->l_881)).a_ = F->r_882;
} else {
f_term_272(F->up, &F->l_881);
}
while (((f_at_op_238(F->up, rt_str("+", 1)) || f_at_op_238(F->up, rt_str("-", 1))) || f_at_op_238(F->up, rt_str("&", 1)))) {
F->op_883 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
f_term_272(F->up, &F->r_882);
F->l_881 = f_binop_262(F->up, F->op_883, F->l_881, F->r_882, F->line_884);
}
L_end_885: ;
(*F->res_269) = F->l_881;
goto ret_;
ret_:

  return;
}

static void f_term_272(struct f_greenc_1fr *up_, P163 *res_271) {
  struct f_term_272fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_271 = res_271;
F->l_886 = NULL;
F->r_887 = NULL;
F->op_888 = NULL;
F->line_889 = f_cur_line_234(F->up);
f_factor_274(F->up, &F->l_886);
while (((f_at_op_238(F->up, rt_str("*", 1)) || f_at_op_238(F->up, rt_str("/", 1))) || f_at_kw_236(F->up, rt_str("MOD", 3)))) {
F->op_888 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
f_factor_274(F->up, &F->r_887);
F->l_886 = f_binop_262(F->up, F->op_888, F->l_886, F->r_887, F->line_889);
}
L_end_890: ;
(*F->res_271) = F->l_886;
goto ret_;
ret_:

  return;
}

static void f_factor_274(struct f_greenc_1fr *up_, P163 *res_273) {
  struct f_factor_274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_273 = res_273;
F->l_891 = NULL;
F->r_892 = NULL;
F->op_893 = NULL;
F->line_894 = f_cur_line_234(F->up);
f_primary_276(F->up, &F->l_891);
if (f_at_op_238(F->up, rt_str("**", 2))) {
F->op_893 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
f_primary_276(F->up, &F->r_892);
F->l_891 = f_binop_262(F->up, F->op_893, F->l_891, F->r_892, F->line_894);
}
(*F->res_273) = F->l_891;
goto ret_;
ret_:

  return;
}

static void f_primary_276(struct f_greenc_1fr *up_, P163 *res_275) {
  struct f_primary_276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_275 = res_275;
F->x_895 = NULL;
F->line_896 = f_cur_line_234(F->up);
if (f_at_kind_240(F->up, ((rt_int)4LL))) {
F->x_895 = f_nn_227(F->up, ((rt_int)1LL), F->line_896);
(*(P163)rt_nil_check(F->x_895)).ival_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).ival_;
(*(P163)rt_nil_check(F->x_895)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
(*F->res_275) = F->x_895;
goto ret_;
}
if (f_at_kind_240(F->up, ((rt_int)5LL))) {
F->x_895 = f_nn_227(F->up, ((rt_int)2LL), F->line_896);
(*(P163)rt_nil_check(F->x_895)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
(*F->res_275) = F->x_895;
goto ret_;
}
if (f_at_kind_240(F->up, ((rt_int)6LL))) {
F->x_895 = f_nn_227(F->up, ((rt_int)3LL), F->line_896);
(*(P163)rt_nil_check(F->x_895)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
(*F->res_275) = F->x_895;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("NULL", 4))) {
f_skip_247(F->up);
F->x_895 = f_nn_227(F->up, ((rt_int)4LL), F->line_896);
(*F->res_275) = F->x_895;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("NEW", 3))) {
f_skip_247(F->up);
F->x_895 = f_nn_227(F->up, ((rt_int)11LL), F->line_896);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_895)).name_);
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_agg_or_paren_278(F->up, &(*(P163)rt_nil_check(F->x_895)).a_);
}
(*F->res_275) = F->x_895;
goto ret_;
}
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_agg_or_paren_278(F->up, &F->x_895);
(*F->res_275) = F->x_895;
goto ret_;
}
if (f_at_kind_240(F->up, ((rt_int)1LL))) {
f_name_p_280(F->up, &F->x_895);
(*F->res_275) = F->x_895;
goto ret_;
}
f_perror_246(F->up, rt_str("expected an expression", 22));
(*F->res_275) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_278(struct f_greenc_1fr *up_, P163 *res_277) {
  struct f_agg_or_paren_278fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_277 = res_277;
F->line_897 = f_cur_line_234(F->up);
F->items_898 = NULL;
F->itail_899 = NULL;
F->it_900 = NULL;
F->first_901 = NULL;
F->keys_902 = NULL;
F->ktail_903 = NULL;
F->lab_904 = NULL;
F->x_905 = NULL;
F->more_906 = 1;
f_expect_op_251(F->up, rt_str("(", 1));
while (F->more_906) {
F->it_900 = f_nn_227(F->up, ((rt_int)13LL), F->line_897);
if (f_at_kw_236(F->up, rt_str("OTHERS", 6))) {
f_skip_247(F->up);
f_expect_op_251(F->up, rt_str("=>", 2));
F->lab_904 = f_nn_227(F->up, ((rt_int)61LL), F->line_897);
(*(P163)rt_nil_check(F->lab_904)).flag_ = ((rt_int)1LL);
(*(P163)rt_nil_check(F->it_900)).a_ = F->lab_904;
f_expr_264(F->up, &(*(P163)rt_nil_check(F->it_900)).b_);
} else {
f_expr_264(F->up, &F->first_901);
if (((f_at_op_238(F->up, rt_str("..", 2)) || f_at_op_238(F->up, rt_str("|", 1))) || f_at_op_238(F->up, rt_str("=>", 2)))) {
F->keys_902 = NULL;
F->ktail_903 = NULL;
for (;;) {
F->lab_904 = f_nn_227(F->up, ((rt_int)61LL), F->line_897);
(*(P163)rt_nil_check(F->lab_904)).a_ = F->first_901;
if (f_at_op_238(F->up, rt_str("..", 2))) {
f_skip_247(F->up);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->lab_904)).b_);
}
f_append_231(F->up, &F->keys_902, &F->ktail_903, F->lab_904);
if ((!f_at_op_238(F->up, rt_str("|", 1)))) {
goto L_end_908;
}
f_skip_247(F->up);
f_simple_expr_270(F->up, &F->first_901);
}
L_end_908: ;
f_expect_op_251(F->up, rt_str("=>", 2));
(*(P163)rt_nil_check(F->it_900)).a_ = F->keys_902;
f_expr_264(F->up, &(*(P163)rt_nil_check(F->it_900)).b_);
} else {
(*(P163)rt_nil_check(F->it_900)).b_ = F->first_901;
}
}
f_append_231(F->up, &F->items_898, &F->itail_899, F->it_900);
F->more_906 = f_at_op_238(F->up, rt_str(",", 1));
if (F->more_906) {
f_skip_247(F->up);
}
}
L_end_907: ;
f_expect_op_251(F->up, rt_str(")", 1));
if ((((*(P163)rt_nil_check(F->items_898)).next_ == NULL) && ((*(P163)rt_nil_check(F->items_898)).a_ == NULL))) {
F->x_905 = f_nn_227(F->up, ((rt_int)15LL), F->line_897);
(*(P163)rt_nil_check(F->x_905)).a_ = (*(P163)rt_nil_check(F->items_898)).b_;
(*F->res_277) = F->x_905;
goto ret_;
}
F->x_905 = f_nn_227(F->up, ((rt_int)12LL), F->line_897);
(*(P163)rt_nil_check(F->x_905)).a_ = F->items_898;
(*F->res_277) = F->x_905;
goto ret_;
ret_:

  return;
}

static void f_name_p_280(struct f_greenc_1fr *up_, P163 *res_279) {
  struct f_name_p_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_279 = res_279;
F->p_909 = NULL;
F->x_910 = NULL;
F->args_911 = NULL;
F->atail_912 = NULL;
F->lo_913 = NULL;
F->r_914 = NULL;
F->line_915 = f_cur_line_234(F->up);
f_name_node_255(F->up, &F->p_909);
for (;;) {
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
F->args_911 = NULL;
F->atail_912 = NULL;
if ((!f_at_op_238(F->up, rt_str(")", 1)))) {
F->more_916 = 1;
while (F->more_916) {
{
F->formal_920 = NULL;
F->mark_921 = ((rt_int)0LL);
if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) || rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("=>", 2))))) {
F->formal_920 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
if (rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(":=", 2))) {
F->mark_921 = ((rt_int)1LL);
} else if (rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("=:", 2))) {
F->mark_921 = ((rt_int)2LL);
} else if (rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) {
F->mark_921 = ((rt_int)3LL);
} else {
F->mark_921 = ((rt_int)4LL);
}
f_skip_247(F->up);
f_skip_247(F->up);
}
f_expr_264(F->up, &F->lo_913);
if (f_at_op_238(F->up, rt_str("..", 2))) {
f_skip_247(F->up);
F->r_914 = f_nn_227(F->up, ((rt_int)14LL), F->line_915);
(*(P163)rt_nil_check(F->r_914)).a_ = F->lo_913;
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->r_914)).b_);
F->lo_913 = F->r_914;
}
(*(P163)rt_nil_check(F->lo_913)).tag_ = F->formal_920;
(*(P163)rt_nil_check(F->lo_913)).flag_ = F->mark_921;
f_append_231(F->up, &F->args_911, &F->atail_912, F->lo_913);

}
L_end_919: ;
F->more_916 = f_at_op_238(F->up, rt_str(",", 1));
if (F->more_916) {
f_skip_247(F->up);
}
}
L_end_918: ;
}
f_expect_op_251(F->up, rt_str(")", 1));
F->x_910 = f_nn_227(F->up, ((rt_int)8LL), F->line_915);
(*(P163)rt_nil_check(F->x_910)).a_ = F->p_909;
(*(P163)rt_nil_check(F->x_910)).b_ = F->args_911;
F->p_909 = F->x_910;
} else if (f_at_op_238(F->up, rt_str(".", 1))) {
f_skip_247(F->up);
F->x_910 = f_nn_227(F->up, ((rt_int)9LL), F->line_915);
(*(P163)rt_nil_check(F->x_910)).a_ = F->p_909;
if (f_at_kw_236(F->up, rt_str("ALL", 3))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_910)).name_ = f_mk_185(F->up, rt_str("ALL", 3));
} else {
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_910)).name_);
}
F->p_909 = F->x_910;
} else if (f_at_op_238(F->up, rt_str("'", 1))) {
f_skip_247(F->up);
F->x_910 = f_nn_227(F->up, ((rt_int)10LL), F->line_915);
(*(P163)rt_nil_check(F->x_910)).a_ = F->p_909;
(*(P163)rt_nil_check(F->x_910)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_910)).b_);
f_expect_op_251(F->up, rt_str(")", 1));
}
F->p_909 = F->x_910;
} else {
(*F->res_279) = F->p_909;
goto ret_;
}
}
L_end_917: ;
ret_:

  return;
}

static void f_subtype_ind_282(struct f_greenc_1fr *up_, P163 *res_281) {
  struct f_subtype_ind_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_281 = res_281;
F->x_922 = NULL;
F->r_923 = NULL;
F->args_924 = NULL;
F->atail_925 = NULL;
F->lo_926 = NULL;
F->line_927 = f_cur_line_234(F->up);
F->more_928 = 1;
F->x_922 = f_nn_227(F->up, ((rt_int)80LL), F->line_927);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_922)).name_);
while (f_at_op_238(F->up, rt_str(".", 1))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_922)).tag_ = (*(P163)rt_nil_check(F->x_922)).name_;
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_922)).name_);
}
L_end_929: ;
if (f_at_kw_236(F->up, rt_str("RANGE", 5))) {
f_skip_247(F->up);
F->r_923 = f_nn_227(F->up, ((rt_int)14LL), F->line_927);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->r_923)).a_);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->r_923)).b_);
(*(P163)rt_nil_check(F->x_922)).a_ = F->r_923;
(*(P163)rt_nil_check(F->x_922)).flag_ = ((rt_int)1LL);
} else if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
while (F->more_928) {
f_expr_264(F->up, &F->lo_926);
if (f_at_op_238(F->up, rt_str("..", 2))) {
f_skip_247(F->up);
F->r_923 = f_nn_227(F->up, ((rt_int)14LL), F->line_927);
(*(P163)rt_nil_check(F->r_923)).a_ = F->lo_926;
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->r_923)).b_);
F->lo_926 = F->r_923;
}
f_append_231(F->up, &F->args_924, &F->atail_925, F->lo_926);
F->more_928 = f_at_op_238(F->up, rt_str(",", 1));
if (F->more_928) {
f_skip_247(F->up);
}
}
L_end_930: ;
f_expect_op_251(F->up, rt_str(")", 1));
(*(P163)rt_nil_check(F->x_922)).a_ = F->args_924;
(*(P163)rt_nil_check(F->x_922)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_236(F->up, rt_str("DIGITS", 6)) || f_at_kw_236(F->up, rt_str("DELTA", 5)))) {
f_skip_247(F->up);
f_simple_expr_270(F->up, &F->r_923);
if (f_at_kw_236(F->up, rt_str("RANGE", 5))) {
f_skip_247(F->up);
f_simple_expr_270(F->up, &F->r_923);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &F->r_923);
}
}
(*F->res_281) = F->x_922;
goto ret_;
ret_:

  return;
}

static void f_type_spec_284(struct f_greenc_1fr *up_, P163 *res_283) {
  struct f_type_spec_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_283 = res_283;
F->x_931 = NULL;
if (((((f_at_op_238(F->up, rt_str("(", 1)) || f_at_kw_236(F->up, rt_str("ARRAY", 5))) || f_at_kw_236(F->up, rt_str("RECORD", 6))) || f_at_kw_236(F->up, rt_str("ACCESS", 6))) || f_at_kw_236(F->up, rt_str("RANGE", 5)))) {
f_type_def_286(F->up, &F->x_931);
} else {
f_subtype_ind_282(F->up, &F->x_931);
}
(*F->res_283) = F->x_931;
goto ret_;
ret_:

  return;
}

static void f_type_def_286(struct f_greenc_1fr *up_, P163 *res_285) {
  struct f_type_def_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_285 = res_285;
F->x_932 = NULL;
F->lits_933 = NULL;
F->ltail_934 = NULL;
F->l_935 = NULL;
F->idx_936 = NULL;
F->itail_937 = NULL;
F->r_938 = NULL;
F->comps_939 = NULL;
F->ctail_940 = NULL;
F->names_941 = NULL;
F->st_942 = NULL;
F->def_943 = NULL;
F->cm_944 = NULL;
F->line_945 = f_cur_line_234(F->up);
F->more_946 = 1;
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
F->x_932 = f_nn_227(F->up, ((rt_int)70LL), F->line_945);
while (F->more_946) {
if (f_at_kind_240(F->up, ((rt_int)6LL))) {
F->l_935 = f_nn_227(F->up, ((rt_int)3LL), F->line_945);
(*(P163)rt_nil_check(F->l_935)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_247(F->up);
} else {
f_name_node_255(F->up, &F->l_935);
}
f_append_231(F->up, &F->lits_933, &F->ltail_934, F->l_935);
F->more_946 = f_at_op_238(F->up, rt_str(",", 1));
if (F->more_946) {
f_skip_247(F->up);
}
}
L_end_947: ;
f_expect_op_251(F->up, rt_str(")", 1));
(*(P163)rt_nil_check(F->x_932)).a_ = F->lits_933;
(*F->res_285) = F->x_932;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("RANGE", 5))) {
f_skip_247(F->up);
F->x_932 = f_nn_227(F->up, ((rt_int)71LL), F->line_945);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->x_932)).a_);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->x_932)).b_);
(*F->res_285) = F->x_932;
goto ret_;
}
if ((f_at_kw_236(F->up, rt_str("DIGITS", 6)) || f_at_kw_236(F->up, rt_str("DELTA", 5)))) {
f_skip_247(F->up);
F->x_932 = f_nn_227(F->up, ((rt_int)72LL), F->line_945);
f_simple_expr_270(F->up, &F->r_938);
if (f_at_kw_236(F->up, rt_str("RANGE", 5))) {
f_skip_247(F->up);
f_simple_expr_270(F->up, &F->r_938);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &F->r_938);
}
(*F->res_285) = F->x_932;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("ARRAY", 5))) {
f_skip_247(F->up);
F->x_932 = f_nn_227(F->up, ((rt_int)73LL), F->line_945);
f_expect_op_251(F->up, rt_str("(", 1));
while (F->more_946) {
if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(",", 1)) || rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(")", 1))))) {
F->l_935 = f_nn_227(F->up, ((rt_int)80LL), F->line_945);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->l_935)).name_);
(*(P163)rt_nil_check(F->x_932)).flag_ = ((rt_int)1LL);
} else {
F->l_935 = f_nn_227(F->up, ((rt_int)14LL), F->line_945);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->l_935)).a_);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->l_935)).b_);
}
f_append_231(F->up, &F->idx_936, &F->itail_937, F->l_935);
F->more_946 = f_at_op_238(F->up, rt_str(",", 1));
if (F->more_946) {
f_skip_247(F->up);
}
}
L_end_948: ;
f_expect_op_251(F->up, rt_str(")", 1));
f_expect_kw_249(F->up, rt_str("OF", 2));
(*(P163)rt_nil_check(F->x_932)).a_ = F->idx_936;
f_type_spec_284(F->up, &(*(P163)rt_nil_check(F->x_932)).b_);
(*F->res_285) = F->x_932;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("RECORD", 6))) {
f_skip_247(F->up);
F->x_932 = f_nn_227(F->up, ((rt_int)74LL), F->line_945);
while ((!f_at_kw_236(F->up, rt_str("END", 3)))) {
if (f_at_kw_236(F->up, rt_str("NULL", 4))) {
f_skip_247(F->up);
f_expect_op_251(F->up, rt_str(";", 1));
} else {
f_id_list_257(F->up, &F->names_941);
f_expect_op_251(F->up, rt_str(":", 1));
if (f_at_kw_236(F->up, rt_str("CONSTANT", 8))) {
f_skip_247(F->up);
}
f_type_spec_284(F->up, &F->st_942);
F->def_943 = NULL;
if (f_at_op_238(F->up, rt_str(":=", 2))) {
f_skip_247(F->up);
f_expr_264(F->up, &F->def_943);
}
f_expect_op_251(F->up, rt_str(";", 1));
while ((F->names_941 != NULL)) {
F->cm_944 = f_nn_227(F->up, ((rt_int)63LL), (*(P163)rt_nil_check(F->names_941)).line_);
(*(P163)rt_nil_check(F->cm_944)).name_ = (*(P163)rt_nil_check(F->names_941)).name_;
(*(P163)rt_nil_check(F->cm_944)).a_ = F->st_942;
(*(P163)rt_nil_check(F->cm_944)).b_ = F->def_943;
f_append_231(F->up, &F->comps_939, &F->ctail_940, F->cm_944);
F->names_941 = (*(P163)rt_nil_check(F->names_941)).next_;
}
L_end_950: ;
}
}
L_end_949: ;
f_expect_kw_249(F->up, rt_str("END", 3));
f_expect_kw_249(F->up, rt_str("RECORD", 6));
(*(P163)rt_nil_check(F->x_932)).a_ = F->comps_939;
(*F->res_285) = F->x_932;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("ACCESS", 6))) {
f_skip_247(F->up);
F->x_932 = f_nn_227(F->up, ((rt_int)75LL), F->line_945);
f_type_spec_284(F->up, &(*(P163)rt_nil_check(F->x_932)).a_);
(*F->res_285) = F->x_932;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("NEW", 3))) {
f_skip_247(F->up);
F->x_932 = f_nn_227(F->up, ((rt_int)76LL), F->line_945);
f_subtype_ind_282(F->up, &(*(P163)rt_nil_check(F->x_932)).a_);
(*F->res_285) = F->x_932;
goto ret_;
}
f_perror_246(F->up, rt_str("expected a type definition", 26));
(*F->res_285) = NULL;
goto ret_;
ret_:

  return;
}

static void f_skip_pragma_287(struct f_greenc_1fr *up_) {
  struct f_skip_pragma_287fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_op_238(F->up, rt_str(";", 1)))) {
f_skip_247(F->up);
}
L_end_951: ;
f_skip_247(F->up);
ret_:

  return;
}

static void f_skip_visibility_288(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_952 = NULL;
f_skip_247(F->up);
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
f_id_list_257(F->up, &F->names_952);
f_expect_op_251(F->up, rt_str(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_289(struct f_greenc_1fr *up_) {
  struct f_skip_representation_289fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_236(F->up, rt_str("USE", 3)))) {
f_skip_247(F->up);
}
L_end_953: ;
f_skip_247(F->up);
if (f_at_kw_236(F->up, rt_str("RECORD", 6))) {
while ((!((f_at_kw_236(F->up, rt_str("END", 3)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("RECORD", 6))))) {
f_skip_247(F->up);
}
L_end_954: ;
f_skip_247(F->up);
f_skip_247(F->up);
}
while ((!f_at_op_238(F->up, rt_str(";", 1)))) {
f_skip_247(F->up);
}
L_end_955: ;
f_skip_247(F->up);
ret_:

  return;
}

static void f_decl_part_291(struct f_greenc_1fr *up_, P163 *res_290) {
  struct f_decl_part_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_290 = res_290;
F->head_956 = NULL;
F->tail_957 = NULL;
F->x_958 = NULL;
F->names_959 = NULL;
for (;;) {
if (f_at_kw_236(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_287(F->up);
} else if (f_at_kw_236(F->up, rt_str("USE", 3))) {
f_skip_247(F->up);
F->x_958 = f_nn_227(F->up, ((rt_int)55LL), f_cur_line_234(F->up));
f_id_list_257(F->up, &(*(P163)rt_nil_check(F->x_958)).a_);
f_expect_op_251(F->up, rt_str(";", 1));
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else if (f_at_kw_236(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_288(F->up);
} else if (f_at_kw_236(F->up, rt_str("FOR", 3))) {
f_skip_representation_289(F->up);
} else if ((f_at_kw_236(F->up, rt_str("TYPE", 4)) || f_at_kw_236(F->up, rt_str("SUBTYPE", 7)))) {
f_type_decl_295(F->up, &F->x_958);
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else if ((f_at_kw_236(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_236(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_301(F->up, &F->x_958);
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else if (f_at_kw_236(F->up, rt_str("PACKAGE", 7))) {
f_package_p_307(F->up, &F->x_958);
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else if (f_at_kw_236(F->up, rt_str("TASK", 4))) {
f_task_p_641(F->up, &F->x_958);
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else if (f_at_kw_236(F->up, rt_str("GENERIC", 7))) {
f_generic_p_771(F->up, &F->x_958);
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else if (f_at_kw_236(F->up, rt_str("ENTRY", 5))) {
f_entry_p_643(F->up, &F->x_958);
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(",", 1))))) {
f_object_decl_293(F->up, &F->x_958);
f_append_231(F->up, &F->head_956, &F->tail_957, F->x_958);
} else {
(*F->res_290) = F->head_956;
goto ret_;
}
}
L_end_960: ;
ret_:

  return;
}

static void f_object_decl_293(struct f_greenc_1fr *up_, P163 *res_292) {
  struct f_object_decl_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_292 = res_292;
F->head_961 = NULL;
F->tail_962 = NULL;
F->names_963 = NULL;
F->st_964 = NULL;
F->init_965 = NULL;
F->x_966 = NULL;
F->line_967 = f_cur_line_234(F->up);
F->is_const_968 = 0;
f_id_list_257(F->up, &F->names_963);
f_expect_op_251(F->up, rt_str(":", 1));
if (f_at_kw_236(F->up, rt_str("EXCEPTION", 9))) {
f_skip_247(F->up);
if (f_at_kw_236(F->up, rt_str("RENAMES", 7))) {
f_skip_247(F->up);
F->x_966 = f_nn_227(F->up, ((rt_int)46LL), F->line_967);
(*(P163)rt_nil_check(F->x_966)).name_ = (*(P163)rt_nil_check(F->names_963)).name_;
f_name_p_280(F->up, &(*(P163)rt_nil_check(F->x_966)).a_);
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_292) = F->x_966;
goto ret_;
}
f_expect_op_251(F->up, rt_str(";", 1));
while ((F->names_963 != NULL)) {
F->x_966 = f_nn_227(F->up, ((rt_int)46LL), F->line_967);
(*(P163)rt_nil_check(F->x_966)).name_ = (*(P163)rt_nil_check(F->names_963)).name_;
f_append_231(F->up, &F->head_961, &F->tail_962, F->x_966);
F->names_963 = (*(P163)rt_nil_check(F->names_963)).next_;
}
L_end_969: ;
(*F->res_292) = F->head_961;
goto ret_;
}
if (f_at_kw_236(F->up, rt_str("CONSTANT", 8))) {
f_skip_247(F->up);
F->is_const_968 = 1;
}
f_type_spec_284(F->up, &F->st_964);
if ((f_at_kw_236(F->up, rt_str("RENAMES", 7)) && (!F->is_const_968))) {
f_skip_247(F->up);
F->x_966 = f_nn_227(F->up, ((rt_int)40LL), F->line_967);
(*(P163)rt_nil_check(F->x_966)).name_ = (*(P163)rt_nil_check(F->names_963)).name_;
(*(P163)rt_nil_check(F->x_966)).a_ = F->st_964;
(*(P163)rt_nil_check(F->x_966)).flag_ = ((rt_int)2LL);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_966)).b_);
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_292) = F->x_966;
goto ret_;
}
if (f_at_op_238(F->up, rt_str(":=", 2))) {
f_skip_247(F->up);
f_expr_264(F->up, &F->init_965);
}
f_expect_op_251(F->up, rt_str(";", 1));
while ((F->names_963 != NULL)) {
if (F->is_const_968) {
F->x_966 = f_nn_227(F->up, ((rt_int)41LL), F->line_967);
} else {
F->x_966 = f_nn_227(F->up, ((rt_int)40LL), F->line_967);
}
(*(P163)rt_nil_check(F->x_966)).name_ = (*(P163)rt_nil_check(F->names_963)).name_;
(*(P163)rt_nil_check(F->x_966)).a_ = F->st_964;
(*(P163)rt_nil_check(F->x_966)).b_ = F->init_965;
if ((!(F->is_const_968 && (F->init_965 == NULL)))) {
f_append_231(F->up, &F->head_961, &F->tail_962, F->x_966);
}
F->names_963 = (*(P163)rt_nil_check(F->names_963)).next_;
}
L_end_970: ;
(*F->res_292) = F->head_961;
goto ret_;
ret_:

  return;
}

static void f_type_decl_295(struct f_greenc_1fr *up_, P163 *res_294) {
  struct f_type_decl_295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_294 = res_294;
F->x_971 = NULL;
F->line_972 = f_cur_line_234(F->up);
if (f_at_kw_236(F->up, rt_str("SUBTYPE", 7))) {
f_skip_247(F->up);
F->x_971 = f_nn_227(F->up, ((rt_int)43LL), F->line_972);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_971)).name_);
f_expect_kw_249(F->up, rt_str("IS", 2));
f_subtype_ind_282(F->up, &(*(P163)rt_nil_check(F->x_971)).a_);
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_294) = F->x_971;
goto ret_;
}
f_expect_kw_249(F->up, rt_str("TYPE", 4));
F->x_971 = f_nn_227(F->up, ((rt_int)42LL), F->line_972);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_971)).name_);
if (f_at_op_238(F->up, rt_str(";", 1))) {
f_skip_247(F->up);
(*F->res_294) = NULL;
goto ret_;
}
f_expect_kw_249(F->up, rt_str("IS", 2));
if (f_at_kw_236(F->up, rt_str("PRIVATE", 7))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_971)).a_ = f_nn_227(F->up, ((rt_int)77LL), F->line_972);
} else {
f_type_def_286(F->up, &(*(P163)rt_nil_check(F->x_971)).a_);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_294) = F->x_971;
goto ret_;
ret_:

  return;
}

static void f_formal_part_297(struct f_greenc_1fr *up_, P163 *res_296) {
  struct f_formal_part_297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_296 = res_296;
F->head_973 = NULL;
F->tail_974 = NULL;
F->names_975 = NULL;
F->st_976 = NULL;
F->def_977 = NULL;
F->p_978 = NULL;
F->more_980 = 1;
f_expect_op_251(F->up, rt_str("(", 1));
while (F->more_980) {
f_id_list_257(F->up, &F->names_975);
f_expect_op_251(F->up, rt_str(":", 1));
F->mode_979 = ((rt_int)1LL);
if (f_at_kw_236(F->up, rt_str("IN", 2))) {
f_skip_247(F->up);
if (f_at_kw_236(F->up, rt_str("OUT", 3))) {
f_skip_247(F->up);
F->mode_979 = ((rt_int)2LL);
}
} else if (f_at_kw_236(F->up, rt_str("OUT", 3))) {
f_skip_247(F->up);
F->mode_979 = ((rt_int)3LL);
}
f_subtype_ind_282(F->up, &F->st_976);
F->def_977 = NULL;
if (f_at_op_238(F->up, rt_str(":=", 2))) {
f_skip_247(F->up);
f_expr_264(F->up, &F->def_977);
}
while ((F->names_975 != NULL)) {
F->p_978 = f_nn_227(F->up, ((rt_int)47LL), (*(P163)rt_nil_check(F->names_975)).line_);
(*(P163)rt_nil_check(F->p_978)).name_ = (*(P163)rt_nil_check(F->names_975)).name_;
(*(P163)rt_nil_check(F->p_978)).ival_ = F->mode_979;
(*(P163)rt_nil_check(F->p_978)).a_ = F->st_976;
(*(P163)rt_nil_check(F->p_978)).b_ = F->def_977;
f_append_231(F->up, &F->head_973, &F->tail_974, F->p_978);
F->names_975 = (*(P163)rt_nil_check(F->names_975)).next_;
}
L_end_982: ;
F->more_980 = f_at_op_238(F->up, rt_str(";", 1));
if (F->more_980) {
f_skip_247(F->up);
}
}
L_end_981: ;
f_expect_op_251(F->up, rt_str(")", 1));
(*F->res_296) = F->head_973;
goto ret_;
ret_:

  return;
}

static void f_designator_299(struct f_greenc_1fr *up_, P133 *res_298) {
  struct f_designator_299fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_298 = res_298;
if (f_at_kind_240(F->up, ((rt_int)6LL))) {
f_skip_247(F->up);
(*F->res_298) = f_mk_185(F->up, (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_sub(F->up->tpos_107, ((rt_int)1LL)), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)));
goto ret_;
}
f_expect_id_253(F->up, &(*F->res_298));
goto ret_;
ret_:

  return;
}

static void f_subprogram_301(struct f_greenc_1fr *up_, P163 *res_300) {
  struct f_subprogram_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_300 = res_300;
F->x_983 = NULL;
F->line_984 = f_cur_line_234(F->up);
F->is_proc_985 = f_at_kw_236(F->up, rt_str("PROCEDURE", 9));
f_skip_247(F->up);
if (F->is_proc_985) {
F->x_983 = f_nn_227(F->up, ((rt_int)44LL), F->line_984);
} else {
F->x_983 = f_nn_227(F->up, ((rt_int)45LL), F->line_984);
}
f_designator_299(F->up, &(*(P163)rt_nil_check(F->x_983)).name_);
if (((f_at_kw_236(F->up, rt_str("IS", 2)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_774(F->up, F->x_983, &(*F->res_300));
goto ret_;
}
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_formal_part_297(F->up, &(*(P163)rt_nil_check(F->x_983)).a_);
}
if (f_at_kw_236(F->up, rt_str("RETURN", 6))) {
f_skip_247(F->up);
f_subtype_ind_282(F->up, &(*(P163)rt_nil_check(F->x_983)).b_);
if (F->is_proc_985) {
(*(P163)rt_nil_check(F->x_983)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_985)) {
f_perror_246(F->up, rt_str("a function needs a RETURN clause", 32));
}
if (f_at_op_238(F->up, rt_str(";", 1))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_983)).ival_ = ((rt_int)1LL);
(*F->res_300) = F->x_983;
goto ret_;
}
f_expect_kw_249(F->up, rt_str("IS", 2));
if (f_at_kw_236(F->up, rt_str("SEPARATE", 8))) {
f_perror_246(F->up, rt_str("separate bodies are not handled", 31));
}
f_body_part_303(F->up, F->x_983);
if ((f_at_kind_240(F->up, ((rt_int)1LL)) || f_at_kind_240(F->up, ((rt_int)6LL)))) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->x_983)).name_))))) {
f_perror_246(F->up, rt_str_cat(rt_str("the name after END does not match ", 34), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->x_983)).name_))));
}
f_skip_247(F->up);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_300) = F->x_983;
goto ret_;
ret_:

  return;
}

static void f_body_part_303(struct f_greenc_1fr *up_, P163 x_302) {
  struct f_body_part_303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_302 = x_302;
f_decl_part_291(F->up, &(*(P163)rt_nil_check(F->x_302)).c_);
if (f_at_kw_236(F->up, rt_str("BEGIN", 5))) {
f_skip_247(F->up);
F->up->saw_interface_167 = 0;
f_statements_310(F->up, &(*(P163)rt_nil_check(F->x_302)).d_);
if ((F->up->saw_interface_167 && ((*(P163)rt_nil_check(F->x_302)).d_ == NULL))) {
(*(P163)rt_nil_check(F->x_302)).tag_ = f_mk_185(F->up, rt_str("INTERFACE", 9));
}
F->up->saw_interface_167 = 0;
}
if (f_at_kw_236(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_305(F->up, &(*(P163)rt_nil_check(F->x_302)).e_);
}
f_expect_kw_249(F->up, rt_str("END", 3));
ret_:

  return;
}

static void f_parse_handlers_305(struct f_greenc_1fr *up_, P163 *res_304) {
  struct f_parse_handlers_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_304 = res_304;
F->head_986 = NULL;
F->tail_987 = NULL;
F->h_988 = NULL;
F->names_989 = NULL;
F->ntail_990 = NULL;
F->n_991 = NULL;
f_expect_kw_249(F->up, rt_str("EXCEPTION", 9));
while (f_at_kw_236(F->up, rt_str("WHEN", 4))) {
f_skip_247(F->up);
F->h_988 = f_nn_227(F->up, ((rt_int)62LL), f_cur_line_234(F->up));
F->names_989 = NULL;
F->ntail_990 = NULL;
for (;;) {
if (f_at_kw_236(F->up, rt_str("OTHERS", 6))) {
f_skip_247(F->up);
F->n_991 = f_nn_227(F->up, ((rt_int)5LL), f_cur_line_234(F->up));
(*(P163)rt_nil_check(F->n_991)).name_ = f_mk_185(F->up, rt_str("OTHERS", 6));
} else {
f_name_node_255(F->up, &F->n_991);
while (f_at_op_238(F->up, rt_str(".", 1))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->n_991)).tag_ = (*(P163)rt_nil_check(F->n_991)).name_;
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->n_991)).name_);
}
L_end_994: ;
}
f_append_231(F->up, &F->names_989, &F->ntail_990, F->n_991);
if ((!f_at_op_238(F->up, rt_str("|", 1)))) {
goto L_end_993;
}
f_skip_247(F->up);
}
L_end_993: ;
f_expect_op_251(F->up, rt_str("=>", 2));
(*(P163)rt_nil_check(F->h_988)).a_ = F->names_989;
f_statements_310(F->up, &(*(P163)rt_nil_check(F->h_988)).b_);
f_append_231(F->up, &F->head_986, &F->tail_987, F->h_988);
}
L_end_992: ;
(*F->res_304) = F->head_986;
goto ret_;
ret_:

  return;
}

static void f_package_p_307(struct f_greenc_1fr *up_, P163 *res_306) {
  struct f_package_p_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_306 = res_306;
F->x_995 = NULL;
F->line_996 = f_cur_line_234(F->up);
f_expect_kw_249(F->up, rt_str("PACKAGE", 7));
if (f_at_kw_236(F->up, rt_str("BODY", 4))) {
f_skip_247(F->up);
F->x_995 = f_nn_227(F->up, ((rt_int)49LL), F->line_996);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_995)).name_);
f_expect_kw_249(F->up, rt_str("IS", 2));
f_body_part_303(F->up, F->x_995);
} else {
F->x_995 = f_nn_227(F->up, ((rt_int)48LL), F->line_996);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_995)).name_);
if (((f_at_kw_236(F->up, rt_str("IS", 2)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_774(F->up, F->x_995, &(*F->res_306));
goto ret_;
}
f_expect_kw_249(F->up, rt_str("IS", 2));
f_decl_part_291(F->up, &(*(P163)rt_nil_check(F->x_995)).c_);
if (f_at_kw_236(F->up, rt_str("PRIVATE", 7))) {
f_skip_247(F->up);
f_decl_part_291(F->up, &(*(P163)rt_nil_check(F->x_995)).d_);
}
f_expect_kw_249(F->up, rt_str("END", 3));
}
if (f_at_kind_240(F->up, ((rt_int)1LL))) {
f_skip_247(F->up);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_306) = F->x_995;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_308(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_236(F->up, rt_str("END", 3)) || f_at_kw_236(F->up, rt_str("ELSE", 4))) || f_at_kw_236(F->up, rt_str("ELSIF", 5))) || f_at_kw_236(F->up, rt_str("WHEN", 4))) || f_at_kw_236(F->up, rt_str("EXCEPTION", 9))) || f_at_kw_236(F->up, rt_str("OR", 2))) || f_at_kind_240(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_310(struct f_greenc_1fr *up_, P163 *res_309) {
  struct f_statements_310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_309 = res_309;
F->head_997 = NULL;
F->tail_998 = NULL;
F->x_999 = NULL;
while ((!f_at_statements_end_308(F->up))) {
if (f_at_kw_236(F->up, rt_str("PRAGMA", 6))) {
if (((f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("INTERFACE", 9)))) {
F->up->saw_interface_167 = 1;
}
f_skip_pragma_287(F->up);
} else {
f_statement_312(F->up, &F->x_999);
f_append_231(F->up, &F->head_997, &F->tail_998, F->x_999);
}
}
L_end_1000: ;
(*F->res_309) = F->head_997;
goto ret_;
ret_:

  return;
}

static void f_statement_312(struct f_greenc_1fr *up_, P163 *res_311) {
  struct f_statement_312fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_311 = res_311;
F->x_1001 = NULL;
F->t_1002 = NULL;
F->line_1003 = f_cur_line_234(F->up);
F->label_1004 = NULL;
if (f_at_op_238(F->up, rt_str("<<", 2))) {
f_skip_247(F->up);
f_expect_id_253(F->up, &F->label_1004);
f_expect_op_251(F->up, rt_str(">>", 2));
}
if (f_at_kw_236(F->up, rt_str("NULL", 4))) {
f_skip_247(F->up);
f_expect_op_251(F->up, rt_str(";", 1));
F->x_1001 = f_nn_227(F->up, ((rt_int)31LL), F->line_1003);
(*F->res_311) = F->x_1001;
goto ret_;
} else if (f_at_kw_236(F->up, rt_str("IF", 2))) {
f_if_stmt_316(F->up, &F->x_1001);
(*F->res_311) = F->x_1001;
goto ret_;
} else if (f_at_kw_236(F->up, rt_str("CASE", 4))) {
f_case_stmt_318(F->up, &F->x_1001);
(*F->res_311) = F->x_1001;
goto ret_;
} else if (((f_at_kw_236(F->up, rt_str("FOR", 3)) || f_at_kw_236(F->up, rt_str("WHILE", 5))) || f_at_kw_236(F->up, rt_str("LOOP", 4)))) {
f_loop_stmt_320(F->up, &F->x_1001);
(*(P163)rt_nil_check(F->x_1001)).tag_ = F->label_1004;
if (f_at_kind_240(F->up, ((rt_int)1LL))) {
if (((F->label_1004 == NULL) || (!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check(F->label_1004)))))) {
f_perror_246(F->up, rt_str("the name after END LOOP does not match the label", 48));
}
f_skip_247(F->up);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_311) = F->x_1001;
goto ret_;
} else if ((f_at_kw_236(F->up, rt_str("DECLARE", 7)) || f_at_kw_236(F->up, rt_str("BEGIN", 5)))) {
F->x_1001 = f_nn_227(F->up, ((rt_int)25LL), F->line_1003);
(*(P163)rt_nil_check(F->x_1001)).tag_ = F->label_1004;
if (f_at_kw_236(F->up, rt_str("DECLARE", 7))) {
f_skip_247(F->up);
f_decl_part_291(F->up, &(*(P163)rt_nil_check(F->x_1001)).a_);
}
f_expect_kw_249(F->up, rt_str("BEGIN", 5));
f_statements_310(F->up, &(*(P163)rt_nil_check(F->x_1001)).b_);
if (f_at_kw_236(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_305(F->up, &(*(P163)rt_nil_check(F->x_1001)).c_);
}
f_expect_kw_249(F->up, rt_str("END", 3));
if (f_at_kind_240(F->up, ((rt_int)1LL))) {
f_skip_247(F->up);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_311) = F->x_1001;
goto ret_;
} else if (f_at_kw_236(F->up, rt_str("EXIT", 4))) {
f_skip_247(F->up);
F->x_1001 = f_nn_227(F->up, ((rt_int)26LL), F->line_1003);
if (f_at_kind_240(F->up, ((rt_int)1LL))) {
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1001)).name_);
}
if (f_at_kw_236(F->up, rt_str("WHEN", 4))) {
f_skip_247(F->up);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1001)).a_);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_311) = F->x_1001;
goto ret_;
} else if (f_at_kw_236(F->up, rt_str("RETURN", 6))) {
f_skip_247(F->up);
F->x_1001 = f_nn_227(F->up, ((rt_int)27LL), F->line_1003);
if ((!f_at_op_238(F->up, rt_str(";", 1)))) {
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1001)).a_);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_311) = F->x_1001;
goto ret_;
} else if (f_at_kw_236(F->up, rt_str("RAISE", 5))) {
f_skip_247(F->up);
if (f_at_op_238(F->up, rt_str(";", 1))) {
f_skip_247(F->up);
F->x_1001 = f_nn_227(F->up, ((rt_int)29LL), F->line_1003);
(*F->res_311) = F->x_1001;
goto ret_;
}
F->x_1001 = f_nn_227(F->up, ((rt_int)28LL), F->line_1003);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1001)).name_);
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1001)).a_);
f_expect_op_251(F->up, rt_str(")", 1));
}
while (f_at_op_238(F->up, rt_str(".", 1))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_1001)).tag_ = (*(P163)rt_nil_check(F->x_1001)).name_;
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1001)).name_);
}
L_end_1005: ;
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_311) = F->x_1001;
goto ret_;
} else if (f_at_kw_236(F->up, rt_str("ASSERT", 6))) {
f_skip_247(F->up);
F->x_1001 = f_nn_227(F->up, ((rt_int)30LL), F->line_1003);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1001)).a_);
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_311) = F->x_1001;
goto ret_;
} else if (f_at_kw_236(F->up, rt_str("GOTO", 4))) {
f_perror_246(F->up, rt_str("goto is not handled", 19));
}
f_task_statement_314(F->up, &F->x_1001);
if ((F->x_1001 != NULL)) {
(*F->res_311) = F->x_1001;
goto ret_;
}
f_name_p_280(F->up, &F->t_1002);
if (f_at_op_238(F->up, rt_str(":=", 2))) {
f_skip_247(F->up);
F->x_1001 = f_nn_227(F->up, ((rt_int)20LL), F->line_1003);
(*(P163)rt_nil_check(F->x_1001)).a_ = F->t_1002;
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1001)).b_);
} else {
F->x_1001 = f_nn_227(F->up, ((rt_int)21LL), F->line_1003);
(*(P163)rt_nil_check(F->x_1001)).a_ = F->t_1002;
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_311) = F->x_1001;
goto ret_;
ret_:

  return;
}

static void f_task_statement_314(struct f_greenc_1fr *up_, P163 *res_313) {
  struct f_task_statement_314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_313 = res_313;
f_parse_task_statement_651(F->up, &(*F->res_313));
ret_:

  return;
}

static void f_if_stmt_316(struct f_greenc_1fr *up_, P163 *res_315) {
  struct f_if_stmt_316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_315 = res_315;
F->x_1006 = NULL;
F->arm_1007 = NULL;
F->head_1008 = NULL;
F->tail_1009 = NULL;
F->go_1010 = 1;
F->x_1006 = f_nn_227(F->up, ((rt_int)22LL), f_cur_line_234(F->up));
f_skip_247(F->up);
F->arm_1007 = f_nn_227(F->up, ((rt_int)60LL), f_cur_line_234(F->up));
f_expr_264(F->up, &(*(P163)rt_nil_check(F->arm_1007)).a_);
f_expect_kw_249(F->up, rt_str("THEN", 4));
f_statements_310(F->up, &(*(P163)rt_nil_check(F->arm_1007)).b_);
f_append_231(F->up, &F->head_1008, &F->tail_1009, F->arm_1007);
while (F->go_1010) {
if (f_at_kw_236(F->up, rt_str("ELSIF", 5))) {
f_skip_247(F->up);
F->arm_1007 = f_nn_227(F->up, ((rt_int)60LL), f_cur_line_234(F->up));
f_expr_264(F->up, &(*(P163)rt_nil_check(F->arm_1007)).a_);
f_expect_kw_249(F->up, rt_str("THEN", 4));
f_statements_310(F->up, &(*(P163)rt_nil_check(F->arm_1007)).b_);
f_append_231(F->up, &F->head_1008, &F->tail_1009, F->arm_1007);
} else if (f_at_kw_236(F->up, rt_str("ELSE", 4))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_1006)).flag_ = ((rt_int)1LL);
f_statements_310(F->up, &(*(P163)rt_nil_check(F->x_1006)).b_);
} else {
F->go_1010 = 0;
}
}
L_end_1011: ;
f_expect_kw_249(F->up, rt_str("END", 3));
f_expect_kw_249(F->up, rt_str("IF", 2));
f_expect_op_251(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->x_1006)).a_ = F->head_1008;
(*F->res_315) = F->x_1006;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_318(struct f_greenc_1fr *up_, P163 *res_317) {
  struct f_case_stmt_318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_317 = res_317;
F->x_1012 = NULL;
F->arm_1013 = NULL;
F->head_1014 = NULL;
F->tail_1015 = NULL;
F->labs_1016 = NULL;
F->ltail_1017 = NULL;
F->l_1018 = NULL;
F->x_1012 = f_nn_227(F->up, ((rt_int)23LL), f_cur_line_234(F->up));
f_skip_247(F->up);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1012)).a_);
f_expect_kw_249(F->up, rt_str("OF", 2));
while (f_at_kw_236(F->up, rt_str("WHEN", 4))) {
f_skip_247(F->up);
F->labs_1016 = NULL;
F->ltail_1017 = NULL;
F->others_arm_1019 = 0;
for (;;) {
if (f_at_kw_236(F->up, rt_str("OTHERS", 6))) {
f_skip_247(F->up);
F->others_arm_1019 = 1;
} else {
F->l_1018 = f_nn_227(F->up, ((rt_int)61LL), f_cur_line_234(F->up));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->l_1018)).a_);
if (f_at_op_238(F->up, rt_str("..", 2))) {
f_skip_247(F->up);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->l_1018)).b_);
}
f_append_231(F->up, &F->labs_1016, &F->ltail_1017, F->l_1018);
}
if ((!f_at_op_238(F->up, rt_str("|", 1)))) {
goto L_end_1021;
}
f_skip_247(F->up);
}
L_end_1021: ;
f_expect_op_251(F->up, rt_str("=>", 2));
if (F->others_arm_1019) {
(*(P163)rt_nil_check(F->x_1012)).flag_ = ((rt_int)1LL);
f_statements_310(F->up, &(*(P163)rt_nil_check(F->x_1012)).c_);
} else {
F->arm_1013 = f_nn_227(F->up, ((rt_int)60LL), f_cur_line_234(F->up));
(*(P163)rt_nil_check(F->arm_1013)).a_ = F->labs_1016;
f_statements_310(F->up, &(*(P163)rt_nil_check(F->arm_1013)).b_);
f_append_231(F->up, &F->head_1014, &F->tail_1015, F->arm_1013);
}
}
L_end_1020: ;
f_expect_kw_249(F->up, rt_str("END", 3));
f_expect_kw_249(F->up, rt_str("CASE", 4));
f_expect_op_251(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->x_1012)).b_ = F->head_1014;
(*F->res_317) = F->x_1012;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_320(struct f_greenc_1fr *up_, P163 *res_319) {
  struct f_loop_stmt_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_319 = res_319;
F->x_1022 = NULL;
F->r_1023 = NULL;
F->line_1024 = f_cur_line_234(F->up);
F->x_1022 = f_nn_227(F->up, ((rt_int)24LL), F->line_1024);
if (f_at_kw_236(F->up, rt_str("FOR", 3))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_1022)).flag_ = ((rt_int)2LL);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1022)).name_);
f_expect_kw_249(F->up, rt_str("IN", 2));
if (f_at_kw_236(F->up, rt_str("REVERSE", 7))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_1022)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("LOOP", 4)))) {
f_subtype_ind_282(F->up, &(*(P163)rt_nil_check(F->x_1022)).a_);
} else {
F->r_1023 = f_nn_227(F->up, ((rt_int)14LL), F->line_1024);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->r_1023)).a_);
if (f_at_op_238(F->up, rt_str("..", 2))) {
f_skip_247(F->up);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->r_1023)).b_);
(*(P163)rt_nil_check(F->x_1022)).a_ = F->r_1023;
} else {
(*(P163)rt_nil_check(F->x_1022)).a_ = (*(P163)rt_nil_check(F->r_1023)).a_;
}
}
} else if (f_at_kw_236(F->up, rt_str("WHILE", 5))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_1022)).flag_ = ((rt_int)1LL);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1022)).a_);
}
f_expect_kw_249(F->up, rt_str("LOOP", 4));
f_statements_310(F->up, &(*(P163)rt_nil_check(F->x_1022)).b_);
f_expect_kw_249(F->up, rt_str("END", 3));
f_expect_kw_249(F->up, rt_str("LOOP", 4));
(*F->res_319) = F->x_1022;
goto ret_;
ret_:

  return;
}

static void f_compilation_322(struct f_greenc_1fr *up_, P163 *res_321) {
  struct f_compilation_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_321 = res_321;
F->head_1025 = NULL;
F->tail_1026 = NULL;
F->x_1027 = NULL;
while ((!f_at_kind_240(F->up, ((rt_int)0LL)))) {
if (f_at_kw_236(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_287(F->up);
} else {
if (f_at_kw_236(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_288(F->up);
}
if ((f_at_kw_236(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_236(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_301(F->up, &F->x_1027);
} else if (f_at_kw_236(F->up, rt_str("PACKAGE", 7))) {
f_package_p_307(F->up, &F->x_1027);
} else if (f_at_kw_236(F->up, rt_str("TASK", 4))) {
f_task_p_641(F->up, &F->x_1027);
} else if (f_at_kw_236(F->up, rt_str("GENERIC", 7))) {
f_generic_p_771(F->up, &F->x_1027);
} else {
f_perror_246(F->up, rt_str("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_231(F->up, &F->head_1025, &F->tail_1026, F->x_1027);
}
}
L_end_1028: ;
(*F->res_321) = F->head_1025;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_324(struct f_greenc_1fr *up_, rstr s_323) {
  struct f_hash_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_323 = rt_str_copy(s_323);
F->h_1029 = ((rt_int)0LL);
{ rt_int lo1032 = ((rt_int)1LL), hi1033 = (F->s_323).len;
for (rt_int it1034 = lo1032; it1034 <= hi1033; it1034++) {
F->i_1031 = it1034;
F->h_1029 = rt_rem(rt_add(rt_mul(F->h_1029, ((rt_int)31LL)), ((rt_int)(rt_str_get(F->s_323, F->i_1031)) + 1)), ((rt_int)4093LL));
}
}
L_end_1030: ;
F->result_ = F->h_1029;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_326(struct f_greenc_1fr *up_, rstr name_325) {
  struct f_lookup_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_325 = rt_str_copy(name_325);
F->y_1035 = NULL;
F->y_1035 = F->up->table_112.p[rt_index(f_hash_324(F->up, F->name_325), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1035 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1035)).name_)), F->name_325)) {
F->result_ = F->y_1035;
goto ret_;
}
F->y_1035 = (*(P110)rt_nil_check(F->y_1035)).chain_;
}
L_end_1036: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_329(struct f_greenc_1fr *up_, P110 a_327, P110 b_328) {
  struct f_same_task_329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_327 = a_327;
F->b_328 = b_328;
if ((F->a_327 == F->b_328)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_327 == NULL) || (F->b_328 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->a_327)).cname_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_328)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_entry_332(struct f_greenc_1fr *up_, rstr name_330, P110 owner_331) {
  struct f_lookup_entry_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_330 = rt_str_copy(name_330);
F->owner_331 = owner_331;
F->y_1037 = NULL;
F->y_1037 = F->up->table_112.p[rt_index(f_hash_324(F->up, F->name_330), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1037 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1037)).name_)), F->name_330) && ((*(P110)rt_nil_check(F->y_1037)).kind_ == ((rt_int)10LL))) && f_same_task_329(F->up, (*(P110)rt_nil_check(F->y_1037)).members_, F->owner_331))) {
F->result_ = F->y_1037;
goto ret_;
}
F->y_1037 = (*(P110)rt_nil_check(F->y_1037)).chain_;
}
L_end_1038: ;
F->result_ = f_lookup_326(F->up, F->name_330);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_decl_334(struct f_greenc_1fr *up_, P163 d_333) {
  struct f_lookup_decl_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_333 = d_333;
F->y_1039 = NULL;
F->y_1039 = F->up->table_112.p[rt_index(f_hash_324(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_333)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1039 != NULL)) {
if (((*(P110)rt_nil_check(F->y_1039)).decl_ == F->d_333)) {
F->result_ = F->y_1039;
goto ret_;
}
F->y_1039 = (*(P110)rt_nil_check(F->y_1039)).chain_;
}
L_end_1040: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_336(struct f_greenc_1fr *up_, P110 y_335) {
  struct f_overloadable_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_335 = y_335;
F->result_ = (((((*(P110)rt_nil_check(F->y_335)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_335)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_335)).kind_ == ((rt_int)7LL))) || ((*(P110)rt_nil_check(F->y_335)).kind_ == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_339(struct f_greenc_1fr *up_, P115 a_337, P115 b_338) {
  struct f_same_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_337 = a_337;
F->b_338 = b_338;
if ((F->a_337 == F->b_338)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_337 == NULL) || (F->b_338 == NULL)) || ((*(P115)rt_nil_check(F->a_337)).kind_ != (*(P115)rt_nil_check(F->b_338)).kind_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((((((*(P115)rt_nil_check(F->a_337)).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check(F->a_337)).kind_ == ((rt_int)2LL))) || ((*(P115)rt_nil_check(F->a_337)).kind_ == ((rt_int)3LL))) || ((*(P115)rt_nil_check(F->a_337)).kind_ == ((rt_int)11LL))) || ((*(P115)rt_nil_check(F->a_337)).kind_ == ((rt_int)5LL))) || ((*(P115)rt_nil_check(F->a_337)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_342(struct f_greenc_1fr *up_, P1041 a_340, P1041 b_341) {
  struct f_same_signature_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_340 = a_340;
F->b_341 = b_341;
F->x_1043 = NULL;
F->x_1043 = F->a_340;
F->y_1044 = NULL;
F->y_1044 = F->b_341;
while (((F->x_1043 != NULL) && (F->y_1044 != NULL))) {
if (((!f_same_339(F->up, (*(P1041)rt_nil_check(F->x_1043)).t_, (*(P1041)rt_nil_check(F->y_1044)).t_)) || ((*(P1041)rt_nil_check(F->x_1043)).mode_ != (*(P1041)rt_nil_check(F->y_1044)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1043 = (*(P1041)rt_nil_check(F->x_1043)).next_;
F->y_1044 = (*(P1041)rt_nil_check(F->y_1044)).next_;
}
L_end_1045: ;
F->result_ = ((F->x_1043 == NULL) && (F->y_1044 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_345(struct f_greenc_1fr *up_, P110 y_343, rt_int line_344) {
  struct f_define_345fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_343 = y_343;
F->line_344 = line_344;
F->h_1046 = f_hash_324(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_343)).name_)));
F->z_1047 = NULL;
F->z_1047 = F->up->table_112.p[rt_index(F->h_1046, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1047 != NULL)) {
if (((((*(P110)rt_nil_check(F->z_1047)).depth_ == F->up->depth_113) && rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1047)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_343)).name_)))) && (!((f_overloadable_336(F->up, F->y_343) && f_overloadable_336(F->up, F->z_1047)) && ((((*(P110)rt_nil_check(F->y_343)).kind_ != (*(P110)rt_nil_check(F->z_1047)).kind_) || (!f_same_signature_342(F->up, (*(P110)rt_nil_check(F->y_343)).params_, (*(P110)rt_nil_check(F->z_1047)).params_))) || (!f_same_339(F->up, (*(P110)rt_nil_check(F->y_343)).result_, (*(P110)rt_nil_check(F->z_1047)).result_))))))) {
f_fail_202(F->up, F->line_344, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_343)).name_)), rt_str(" is already declared in this declarative part", 45)));
}
F->z_1047 = (*(P110)rt_nil_check(F->z_1047)).chain_;
}
L_end_1048: ;
(*(P110)rt_nil_check(F->y_343)).depth_ = F->up->depth_113;
(*(P110)rt_nil_check(F->y_343)).chain_ = F->up->table_112.p[rt_index(F->h_1046, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->up->table_112.p[rt_index(F->h_1046, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = F->y_343;
(*(P110)rt_nil_check(F->y_343)).stack_ = F->up->scope_stack_114;
F->up->scope_stack_114 = F->y_343;
ret_:

  return;
}

static void f_open_scope_346(struct f_greenc_1fr *up_) {
  struct f_open_scope_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_113 = rt_add(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_347(struct f_greenc_1fr *up_) {
  struct f_close_scope_347fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_114 != NULL) && ((*(P110)rt_nil_check(F->up->scope_stack_114)).depth_ == F->up->depth_113))) {
F->up->table_112.p[rt_index(f_hash_324(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->scope_stack_114)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = (*(P110)rt_nil_check(F->up->scope_stack_114)).chain_;
F->up->scope_stack_114 = (*(P110)rt_nil_check(F->up->scope_stack_114)).stack_;
}
L_end_1049: ;
F->up->depth_113 = rt_sub(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static P110 f_new_sym_350(struct f_greenc_1fr *up_, rt_int kind_348, P133 name_349) {
  struct f_new_sym_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_348 = kind_348;
F->name_349 = name_349;
F->result_ = ({ R111 *cell1050 = rt_alloc(sizeof(R111)); *cell1050 = cp_R111(({ R111 ag1051; ag1051.kind_ = F->kind_348; ag1051.name_ = F->name_349; ag1051.t_ = NULL; ag1051.c_ = NULL; ag1051.access_path_ = NULL; ag1051.cname_ = NULL; ag1051.ro_ = 0; ag1051.mvalue_ = ((rt_int)0LL); ag1051.hasmv_ = 0; ag1051.decl_ = NULL; ag1051.params_ = NULL; ag1051.result_ = NULL; ag1051.depth_ = ((rt_int)0LL); ag1051.level_ = ((rt_int)0LL); ag1051.byref_ = 0; ag1051.vrp_ = 0; ag1051.hidden_ = 0; ag1051.from_use_ = 0; ag1051.members_ = NULL; ag1051.mnext_ = NULL; ag1051.chain_ = NULL; ag1051.stack_ = NULL; ag1051; })); (P110)cell1050; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P115 f_new_typ_352(struct f_greenc_1fr *up_, rt_int kind_351) {
  struct f_new_typ_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_351 = kind_351;
F->result_ = ({ R116 *cell1054 = rt_alloc(sizeof(R116)); *cell1054 = cp_R116(({ R116 ag1055; ag1055.kind_ = F->kind_351; ag1055.name_ = NULL; ag1055.lits_ = NULL; ag1055.elem_ = NULL; ag1055.idx_ = NULL; ag1055.elemcons_ = NULL; ag1055.tcons_ = NULL; ag1055.fields_ = NULL; ag1055.target_ = NULL; ag1055.decl_ = NULL; ag1055.cname_ = NULL; ag1055.forward_ = 0; ag1055.defined_ = 0; ag1055.priv_ = 0; ag1055.next_ = NULL; ag1055.idx2_ = NULL; ag1055; })); (P115)cell1054; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P170 f_new_cons_353(struct f_greenc_1fr *up_) {
  struct f_new_cons_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R171 *cell1056 = rt_alloc(sizeof(R171)); *cell1056 = cp_R171(({ R171 ag1057; ag1057.lo_ = NULL; ag1057.hi_ = NULL; ag1057.slen_ = NULL; ag1057.mlo_ = ((rt_int)0LL); ag1057.mhi_ = ((rt_int)0LL); ag1057.hasm_ = 0; ag1057.lo2_ = NULL; ag1057.hi2_ = NULL; ag1057; })); (P170)cell1056; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_kind_name_355(struct f_greenc_1fr *up_, P115 t_354) {
  struct f_kind_name_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_354 = t_354;
if (((*(P115)rt_nil_check(F->t_354)).name_ != NULL)) {
F->result_ = (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_354)).name_));
goto ret_;
}
{ rt_int sel1058 = (*(P115)rt_nil_check(F->t_354)).kind_;
if (0 || sel1058 == ((rt_int)1LL)) {
F->result_ = rt_str("INTEGER", 7);
goto ret_;
} else if (0 || sel1058 == ((rt_int)2LL)) {
F->result_ = rt_str("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1058 == ((rt_int)3LL)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || sel1058 == ((rt_int)5LL)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || sel1058 == ((rt_int)10LL)) {
F->result_ = rt_str("null", 4);
goto ret_;
} else if (0 || sel1058 == ((rt_int)11LL)) {
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

static void f_check_type_359(struct f_greenc_1fr *up_, P115 got_356, P115 want_357, rt_int line_358) {
  struct f_check_type_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_356 = got_356;
F->want_357 = want_357;
F->line_358 = line_358;
if ((F->want_357 == NULL)) {
goto ret_;
}
if ((((*(P115)rt_nil_check(F->got_356)).kind_ == ((rt_int)10LL)) && ((*(P115)rt_nil_check(F->want_357)).kind_ == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_339(F->up, F->got_356, F->want_357))) {
f_fail_202(F->up, F->line_358, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_355(F->up, F->got_356)), rt_str(" where ", 7)), f_kind_name_355(F->up, F->want_357)), rt_str(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_361(struct f_greenc_1fr *up_, P115 t_360) {
  struct f_field_count_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_360 = t_360;
F->n_1059 = ((rt_int)0LL);
F->f_1060 = NULL;
F->f_1060 = (*(P115)rt_nil_check(F->t_360)).fields_;
while ((F->f_1060 != NULL)) {
F->n_1059 = rt_add(F->n_1059, ((rt_int)1LL));
F->f_1060 = (*(P1052)rt_nil_check(F->f_1060)).next_;
}
L_end_1061: ;
F->result_ = F->n_1059;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_364(struct f_greenc_1fr *up_, P115 t_362, P133 *r_363) {
  struct f_ctype_364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_362 = t_362;
F->r_363 = r_363;
F->s_1062 = NULL;
{ rt_int sel1063 = (*(P115)rt_nil_check(F->t_362)).kind_;
if (0 || sel1063 == ((rt_int)1LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("rt_int", 6));
} else if (0 || sel1063 == ((rt_int)2LL) || sel1063 == ((rt_int)4LL) || sel1063 == ((rt_int)11LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("int", 3));
} else if (0 || sel1063 == ((rt_int)3LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("double", 6));
} else if (0 || sel1063 == ((rt_int)5LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("rstr", 4));
} else if (0 || sel1063 == ((rt_int)9LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("void", 4));
} else if (0 || sel1063 == ((rt_int)13LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("rt_act", 6));
} else if (0 || sel1063 == ((rt_int)14LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("rt_taskdecl", 11));
} else if (0 || sel1063 == ((rt_int)15LL)) {
(*F->r_363) = f_mk_185(F->up, rt_str("rt_entry", 8));
} else {
if (((*(P115)rt_nil_check(F->t_362)).cname_ == NULL)) {
f_declare_ctype_369(F->up, F->t_362);
} else if (((((*(P115)rt_nil_check(F->t_362)).kind_ == ((rt_int)7LL)) && (*(P115)rt_nil_check(F->t_362)).forward_) && (!(*(P115)rt_nil_check(F->t_362)).defined_))) {
(*(P115)rt_nil_check(F->t_362)).defined_ = 1;
f_field_decls_367(F->up, F->t_362, &F->s_1062);
f_put_to_206(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_362)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1062))), rt_str(" };", 3)));
}
(*F->r_363) = (*(P115)rt_nil_check(F->t_362)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_367(struct f_greenc_1fr *up_, P115 t_365, P133 *r_366) {
  struct f_field_decls_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_365 = t_365;
F->r_366 = r_366;
F->f_1064 = NULL;
F->f_1064 = (*(P115)rt_nil_check(F->t_365)).fields_;
F->s_1065 = NULL;
F->ct_1066 = NULL;
F->s_1065 = f_mk_185(F->up, rt_str(" int dummy_;", 12));
while ((F->f_1064 != NULL)) {
f_ctype_364(F->up, (*(P1052)rt_nil_check(F->f_1064)).t_, &F->ct_1066);
F->s_1065 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->s_1065)), 32), (*(P133)rt_nil_check(F->ct_1066))), 32), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1064)).name_)))), 59));
F->f_1064 = (*(P1052)rt_nil_check(F->f_1064)).next_;
}
L_end_1067: ;
(*F->r_366) = F->s_1065;
ret_:

  return;
}

static void f_declare_ctype_369(struct f_greenc_1fr *up_, P115 t_368) {
  struct f_declare_ctype_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_368 = t_368;
F->ct_1068 = NULL;
F->s_1069 = NULL;
F->target_1070 = NULL;
if (((*(P115)rt_nil_check(F->t_368)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_387(F->up, F->t_368);
}
if (((*(P115)rt_nil_check(F->t_368)).kind_ == ((rt_int)6LL))) {
f_new_name_188(F->up, rt_str("A", 1), &(*(P115)rt_nil_check(F->t_368)).cname_);
} else if (((*(P115)rt_nil_check(F->t_368)).kind_ == ((rt_int)7LL))) {
f_new_name_188(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->t_368)).cname_);
} else {
f_new_name_188(F->up, rt_str("P", 1), &(*(P115)rt_nil_check(F->t_368)).cname_);
}
(*(P115)rt_nil_check(F->t_368)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->t_368;
if (((*(P115)rt_nil_check(F->t_368)).kind_ == ((rt_int)8LL))) {
F->target_1070 = (*(P115)rt_nil_check(F->t_368)).target_;
if ((F->target_1070 == NULL)) {
f_fail_202(F->up, ((rt_int)0LL), rt_str_cat(rt_str_cat(rt_str("the designated type of ", 23), f_kind_name_355(F->up, F->t_368)), rt_str(" is never declared", 18)));
}
if (((*(P115)rt_nil_check(F->target_1070)).kind_ == ((rt_int)7LL))) {
if (((*(P115)rt_nil_check(F->target_1070)).cname_ == NULL)) {
f_new_name_188(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->target_1070)).cname_);
(*(P115)rt_nil_check(F->target_1070)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->target_1070;
f_put_to_206(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1070)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1070)).cname_))), 59));
(*(P115)rt_nil_check(F->target_1070)).forward_ = 1;
}
f_put_to_206(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1070)).cname_))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), 59));
} else {
f_ctype_364(F->up, F->target_1070, &F->ct_1068);
f_put_to_206(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), (*(P133)rt_nil_check(F->ct_1068))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), 59));
}
} else if (((*(P115)rt_nil_check(F->t_368)).kind_ == ((rt_int)6LL))) {
f_ctype_364(F->up, (*(P115)rt_nil_check(F->t_368)).elem_, &F->ct_1068);
f_put_to_206(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), 59));
f_put_to_206(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P133)rt_nil_check(F->ct_1068))), rt_str(" *p; };", 7)));
} else {
f_put_to_206(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), 59));
(*(P115)rt_nil_check(F->t_368)).defined_ = 1;
f_field_decls_367(F->up, F->t_368, &F->s_1069);
f_put_to_206(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_368)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1069))), rt_str(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_372(struct f_greenc_1fr *up_, P163 lits_370, rstr name_371) {
  struct f_lit_index_372fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_370 = lits_370;
F->name_371 = rt_str_copy(name_371);
F->i_1071 = ((rt_int)0LL);
F->l_1072 = NULL;
F->l_1072 = F->lits_370;
while ((F->l_1072 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->l_1072)).name_)), F->name_371)) {
F->result_ = F->i_1071;
goto ret_;
}
F->i_1071 = rt_add(F->i_1071, ((rt_int)1LL));
F->l_1072 = (*(P163)rt_nil_check(F->l_1072)).next_;
}
L_end_1073: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_376(struct f_greenc_1fr *up_, P163 e_373, rt_int *v_374, int *ok_375) {
  struct f_manifest_376fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_373 = e_373;
F->v_374 = v_374;
F->ok_375 = ok_375;
F->y_1077 = NULL;
(*F->ok_375) = 0;
(*F->v_374) = ((rt_int)0LL);
if (((*(P163)rt_nil_check(F->e_373)).kind_ == ((rt_int)1LL))) {
(*F->ok_375) = 1;
(*F->v_374) = (*(P163)rt_nil_check(F->e_373)).ival_;
} else if (((*(P163)rt_nil_check(F->e_373)).kind_ == ((rt_int)15LL))) {
f_manifest_376(F->up, (*(P163)rt_nil_check(F->e_373)).a_, &(*F->v_374), &(*F->ok_375));
} else if ((((*(P163)rt_nil_check(F->e_373)).kind_ == ((rt_int)6LL)) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_373)).name_)), rt_str("-", 1)))) {
f_manifest_376(F->up, (*(P163)rt_nil_check(F->e_373)).a_, &F->a_1074, &(*F->ok_375));
(*F->v_374) = rt_neg(F->a_1074);
} else if ((((*(P163)rt_nil_check(F->e_373)).kind_ == ((rt_int)7LL)) && ((rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_373)).name_)), rt_str("+", 1)) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_373)).name_)), rt_str("-", 1))) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_373)).name_)), rt_str("*", 1))))) {
f_manifest_376(F->up, (*(P163)rt_nil_check(F->e_373)).a_, &F->a_1074, &(*F->ok_375));
f_manifest_376(F->up, (*(P163)rt_nil_check(F->e_373)).b_, &F->b_1075, &F->ok2_1076);
(*F->ok_375) = ((*F->ok_375) && F->ok2_1076);
if ((*F->ok_375)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_373)).name_)), rt_str("+", 1))) {
(*F->v_374) = rt_add(F->a_1074, F->b_1075);
} else if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_373)).name_)), rt_str("-", 1))) {
(*F->v_374) = rt_sub(F->a_1074, F->b_1075);
} else {
(*F->v_374) = rt_mul(F->a_1074, F->b_1075);
}
}
} else if (((*(P163)rt_nil_check(F->e_373)).kind_ == ((rt_int)5LL))) {
F->y_1077 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_373)).name_)));
if ((((F->y_1077 != NULL) && ((*(P110)rt_nil_check(F->y_1077)).kind_ == ((rt_int)2LL))) && (*(P110)rt_nil_check(F->y_1077)).hasmv_)) {
(*F->ok_375) = 1;
(*F->v_374) = (*(P110)rt_nil_check(F->y_1077)).mvalue_;
}
}
ret_:

  return;
}

static void f_resolve_380(struct f_greenc_1fr *up_, P163 st_377, P115 *t_378, P170 *c_379) {
  struct f_resolve_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_377 = st_377;
F->t_378 = t_378;
F->c_379 = c_379;
F->y_1078 = NULL;
F->dummy_1079 = NULL;
F->code_1080 = NULL;
F->r_1082 = NULL;
(*F->c_379) = f_new_cons_353(F->up);
if (((*(P163)rt_nil_check(F->st_377)).kind_ != ((rt_int)80LL))) {
f_type_definition_385(F->up, F->st_377, NULL, &(*F->t_378), &(*F->c_379));
goto ret_;
}
if (((*(P163)rt_nil_check(F->st_377)).tag_ != NULL)) {
F->y_1078 = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_377)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_377)).name_)), (*(P163)rt_nil_check(F->st_377)).line_);
} else {
F->y_1078 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_377)).name_)));
}
if (((F->y_1078 == NULL) || ((*(P110)rt_nil_check(F->y_1078)).kind_ != ((rt_int)5LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->st_377)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_377)).name_)), rt_str(" is not a type", 14)));
}
(*F->t_378) = (*(P110)rt_nil_check(F->y_1078)).t_;
if (((*(P110)rt_nil_check(F->y_1078)).c_ != NULL)) {
(*(P170)rt_nil_check((*F->c_379))).lo_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).lo_;
(*(P170)rt_nil_check((*F->c_379))).hi_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).hi_;
(*(P170)rt_nil_check((*F->c_379))).slen_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).slen_;
(*(P170)rt_nil_check((*F->c_379))).mlo_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).mlo_;
(*(P170)rt_nil_check((*F->c_379))).mhi_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).mhi_;
(*(P170)rt_nil_check((*F->c_379))).hasm_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).hasm_;
(*(P170)rt_nil_check((*F->c_379))).lo2_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).lo2_;
(*(P170)rt_nil_check((*F->c_379))).hi2_ = (*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1078)).c_)).hi2_;
}
if (((*F->t_378) == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->st_377)).line_, rt_str_cat(rt_str_cat(rt_str("the type ", 9), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->st_377)).name_))), rt_str(" is used before its full declaration", 36)));
}
if (((*(P163)rt_nil_check(F->st_377)).flag_ == ((rt_int)1LL))) {
F->r_1082 = (*(P163)rt_nil_check(F->st_377)).a_;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1082)).a_, (*F->t_378), &F->dummy_1079, &(*(P170)rt_nil_check((*F->c_379))).lo_);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1082)).b_, (*F->t_378), &F->dummy_1079, &(*(P170)rt_nil_check((*F->c_379))).hi_);
f_manifest_376(F->up, (*(P163)rt_nil_check(F->r_1082)).a_, &(*(P170)rt_nil_check((*F->c_379))).mlo_, &F->ok_1081);
(*(P170)rt_nil_check((*F->c_379))).hasm_ = F->ok_1081;
f_manifest_376(F->up, (*(P163)rt_nil_check(F->r_1082)).b_, &(*(P170)rt_nil_check((*F->c_379))).mhi_, &F->ok_1081);
(*(P170)rt_nil_check((*F->c_379))).hasm_ = ((*(P170)rt_nil_check((*F->c_379))).hasm_ && F->ok_1081);
} else if (((*(P163)rt_nil_check(F->st_377)).flag_ == ((rt_int)2LL))) {
F->r_1082 = (*(P163)rt_nil_check(F->st_377)).a_;
if (((*(P163)rt_nil_check(F->r_1082)).kind_ != ((rt_int)14LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->st_377)).line_, rt_str("an index constraint is a discrete range", 39));
}
if (((*(P115)rt_nil_check((*F->t_378))).kind_ == ((rt_int)5LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1082)).a_, F->up->ty_int_149, &F->dummy_1079, &F->code_1080);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1082)).b_, F->up->ty_int_149, &F->dummy_1079, &(*(P170)rt_nil_check((*F->c_379))).slen_);
(*(P170)rt_nil_check((*F->c_379))).slen_ = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check((*(P170)rt_nil_check((*F->c_379))).slen_))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->code_1080))), rt_str(" + 1)", 5)));
} else if (((*(P115)rt_nil_check((*F->t_378))).kind_ == ((rt_int)6LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1082)).a_, (*(P115)rt_nil_check((*F->t_378))).idx_, &F->dummy_1079, &(*(P170)rt_nil_check((*F->c_379))).lo_);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1082)).b_, (*(P115)rt_nil_check((*F->t_378))).idx_, &F->dummy_1079, &(*(P170)rt_nil_check((*F->c_379))).hi_);
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->st_377)).line_, rt_str("this type takes no index constraint", 35));
}
}
ret_:

  return;
}

static void f_type_definition_385(struct f_greenc_1fr *up_, P163 d_381, P133 name_382, P115 *t_383, P170 *c_384) {
  struct f_type_definition_385fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_381 = d_381;
F->name_382 = name_382;
F->t_383 = t_383;
F->c_384 = c_384;
F->dummy_1083 = NULL;
F->it_1084 = NULL;
F->ic_1085 = NULL;
F->l_1086 = NULL;
F->comp_1087 = NULL;
F->f_1088 = NULL;
F->tail_1089 = NULL;
F->y_1092 = NULL;
(*F->c_384) = f_new_cons_353(F->up);
{ rt_int sel1093 = (*(P163)rt_nil_check(F->d_381)).kind_;
if (0 || sel1093 == ((rt_int)70LL)) {
(*F->t_383) = f_new_typ_352(F->up, ((rt_int)4LL));
(*(P115)rt_nil_check((*F->t_383))).lits_ = (*(P163)rt_nil_check(F->d_381)).a_;
(*(P115)rt_nil_check((*F->t_383))).name_ = F->name_382;
F->l_1086 = (*(P163)rt_nil_check(F->d_381)).a_;
F->n_1091 = ((rt_int)0LL);
while ((F->l_1086 != NULL)) {
if (((*(P163)rt_nil_check(F->l_1086)).kind_ == ((rt_int)5LL))) {
F->y_1092 = f_new_sym_350(F->up, ((rt_int)7LL), (*(P163)rt_nil_check(F->l_1086)).name_);
(*(P110)rt_nil_check(F->y_1092)).t_ = (*F->t_383);
(*(P110)rt_nil_check(F->y_1092)).result_ = (*F->t_383);
(*(P110)rt_nil_check(F->y_1092)).mvalue_ = F->n_1091;
(*(P110)rt_nil_check(F->y_1092)).hasmv_ = 1;
f_define_345(F->up, F->y_1092, (*(P163)rt_nil_check(F->l_1086)).line_);
}
F->n_1091 = rt_add(F->n_1091, ((rt_int)1LL));
F->l_1086 = (*(P163)rt_nil_check(F->l_1086)).next_;
}
L_end_1094: ;
(*(P170)rt_nil_check((*F->c_384))).lo_ = f_mk_185(F->up, rt_str("0", 1));
(*(P170)rt_nil_check((*F->c_384))).hi_ = f_mk_185(F->up, rt_str_of_int(rt_sub(F->n_1091, ((rt_int)1LL))));
} else if (0 || sel1093 == ((rt_int)71LL)) {
(*F->t_383) = F->up->ty_int_149;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->d_381)).a_, F->up->ty_int_149, &F->dummy_1083, &(*(P170)rt_nil_check((*F->c_384))).lo_);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->d_381)).b_, F->up->ty_int_149, &F->dummy_1083, &(*(P170)rt_nil_check((*F->c_384))).hi_);
f_manifest_376(F->up, (*(P163)rt_nil_check(F->d_381)).a_, &(*(P170)rt_nil_check((*F->c_384))).mlo_, &F->ok_1090);
(*(P170)rt_nil_check((*F->c_384))).hasm_ = F->ok_1090;
f_manifest_376(F->up, (*(P163)rt_nil_check(F->d_381)).b_, &(*(P170)rt_nil_check((*F->c_384))).mhi_, &F->ok_1090);
(*(P170)rt_nil_check((*F->c_384))).hasm_ = ((*(P170)rt_nil_check((*F->c_384))).hasm_ && F->ok_1090);
} else if (0 || sel1093 == ((rt_int)72LL)) {
(*F->t_383) = F->up->ty_float_151;
} else if (0 || sel1093 == ((rt_int)73LL)) {
if ((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_381)).a_)).next_ != NULL) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_381)).a_)).next_)).next_ != NULL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->d_381)).line_, rt_str("arrays of more than two dimensions are not handled yet", 54));
}
(*F->t_383) = f_new_typ_352(F->up, ((rt_int)6LL));
(*(P115)rt_nil_check((*F->t_383))).name_ = F->name_382;
f_resolve_380(F->up, (*(P163)rt_nil_check(F->d_381)).b_, &(*(P115)rt_nil_check((*F->t_383))).elem_, &(*(P115)rt_nil_check((*F->t_383))).elemcons_);
F->l_1086 = (*(P163)rt_nil_check(F->d_381)).a_;
if (((*(P163)rt_nil_check(F->l_1086)).kind_ == ((rt_int)14LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->l_1086)).a_, NULL, &(*(P115)rt_nil_check((*F->t_383))).idx_, &(*(P170)rt_nil_check((*F->c_384))).lo_);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->l_1086)).b_, (*(P115)rt_nil_check((*F->t_383))).idx_, &F->dummy_1083, &(*(P170)rt_nil_check((*F->c_384))).hi_);
} else {
f_resolve_380(F->up, F->l_1086, &(*(P115)rt_nil_check((*F->t_383))).idx_, &F->ic_1085);
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_383))).idx_)).kind_ == ((rt_int)4LL)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_383))).idx_)).kind_ == ((rt_int)11LL))) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_383))).idx_)).kind_ == ((rt_int)2LL)))) {
(*(P170)rt_nil_check((*F->c_384))).lo_ = (*(P170)rt_nil_check(F->ic_1085)).lo_;
(*(P170)rt_nil_check((*F->c_384))).hi_ = (*(P170)rt_nil_check(F->ic_1085)).hi_;
} else if (((*(P170)rt_nil_check(F->ic_1085)).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_383))).tcons_ = f_new_cons_353(F->up);
(*(P170)rt_nil_check((*(P115)rt_nil_check((*F->t_383))).tcons_)).lo_ = (*(P170)rt_nil_check(F->ic_1085)).lo_;
}
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_381)).a_)).next_ != NULL)) {
F->l_1086 = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->d_381)).a_)).next_;
if (((*(P163)rt_nil_check(F->l_1086)).kind_ == ((rt_int)14LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->l_1086)).a_, NULL, &(*(P115)rt_nil_check((*F->t_383))).idx2_, &(*(P170)rt_nil_check((*F->c_384))).lo2_);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->l_1086)).b_, (*(P115)rt_nil_check((*F->t_383))).idx2_, &F->dummy_1083, &(*(P170)rt_nil_check((*F->c_384))).hi2_);
} else {
f_resolve_380(F->up, F->l_1086, &(*(P115)rt_nil_check((*F->t_383))).idx2_, &F->ic_1085);
(*(P170)rt_nil_check((*F->c_384))).lo2_ = (*(P170)rt_nil_check(F->ic_1085)).lo_;
(*(P170)rt_nil_check((*F->c_384))).hi2_ = (*(P170)rt_nil_check(F->ic_1085)).hi_;
}
if ((((*(P170)rt_nil_check((*F->c_384))).lo_ == NULL) || ((*(P170)rt_nil_check((*F->c_384))).lo2_ == NULL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->d_381)).line_, rt_str("a two-dimensional array needs the bounds of both indexes here", 61));
}
}
if (((*(P170)rt_nil_check((*F->c_384))).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_383))).tcons_ = (*F->c_384);
}
} else if (0 || sel1093 == ((rt_int)74LL)) {
(*F->t_383) = f_new_typ_352(F->up, ((rt_int)7LL));
(*(P115)rt_nil_check((*F->t_383))).name_ = F->name_382;
F->comp_1087 = (*(P163)rt_nil_check(F->d_381)).a_;
while ((F->comp_1087 != NULL)) {
F->f_1088 = ({ R1053 *cell1096 = rt_alloc(sizeof(R1053)); *cell1096 = cp_R1053(({ R1053 ag1097; ag1097.name_ = (*(P163)rt_nil_check(F->comp_1087)).name_; ag1097.t_ = NULL; ag1097.c_ = NULL; ag1097.next_ = NULL; ag1097.dflt_ = (*(P163)rt_nil_check(F->comp_1087)).b_; ag1097; })); (P1052)cell1096; });
f_resolve_380(F->up, (*(P163)rt_nil_check(F->comp_1087)).a_, &(*(P1052)rt_nil_check(F->f_1088)).t_, &(*(P1052)rt_nil_check(F->f_1088)).c_);
if ((F->tail_1089 == NULL)) {
(*(P115)rt_nil_check((*F->t_383))).fields_ = F->f_1088;
} else {
(*(P1052)rt_nil_check(F->tail_1089)).next_ = F->f_1088;
}
F->tail_1089 = F->f_1088;
F->comp_1087 = (*(P163)rt_nil_check(F->comp_1087)).next_;
}
L_end_1095: ;
} else if (0 || sel1093 == ((rt_int)75LL)) {
(*F->t_383) = f_new_typ_352(F->up, ((rt_int)8LL));
(*(P115)rt_nil_check((*F->t_383))).name_ = F->name_382;
(*(P115)rt_nil_check((*F->t_383))).decl_ = (*(P163)rt_nil_check(F->d_381)).a_;
} else if (0 || sel1093 == ((rt_int)76LL)) {
f_resolve_380(F->up, (*(P163)rt_nil_check(F->d_381)).a_, &(*F->t_383), &(*F->c_384));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->d_381)).line_, rt_str("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_finish_ptr_387(struct f_greenc_1fr *up_, P115 t_386) {
  struct f_finish_ptr_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_386 = t_386;
F->c_1098 = NULL;
if ((((*(P115)rt_nil_check(F->t_386)).target_ == NULL) && ((*(P115)rt_nil_check(F->t_386)).decl_ != NULL))) {
f_resolve_380(F->up, (*(P115)rt_nil_check(F->t_386)).decl_, &(*(P115)rt_nil_check(F->t_386)).target_, &F->c_1098);
}
ret_:

  return;
}

static void f_init_storage_391(struct f_greenc_1fr *up_, rstr lval_388, P115 t_389, P170 c_390) {
  struct f_init_storage_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_388 = rt_str_copy(lval_388);
F->t_389 = t_389;
F->c_390 = c_390;
F->ct_1099 = NULL;
F->i_1100 = NULL;
F->v_1101 = NULL;
F->x_1102 = NULL;
F->vt_1103 = NULL;
F->f_1104 = NULL;
if (((*(P115)rt_nil_check(F->t_389)).kind_ == ((rt_int)8LL))) {
f_emit_208(F->up, rt_str_cat(F->lval_388, rt_str(" = NULL;", 8)));
} else if (((*(P115)rt_nil_check(F->t_389)).kind_ == ((rt_int)5LL))) {
if (((*(P170)rt_nil_check(F->c_390)).slen_ == NULL)) {
f_fail_202(F->up, ((rt_int)0LL), rt_str("a STRING object needs an index constraint or an initial value", 61));
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(F->lval_388, rt_str(" = rt_str_new(", 14)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_390)).slen_))), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_389)).kind_ == ((rt_int)6LL))) {
if (((*(P170)rt_nil_check(F->c_390)).lo_ == NULL)) {
f_fail_202(F->up, ((rt_int)0LL), rt_str("an array object needs an index constraint", 41));
}
f_ctype_364(F->up, (*(P115)rt_nil_check(F->t_389)).elem_, &F->ct_1099);
if (((*(P170)rt_nil_check(F->c_390)).lo2_ != NULL)) {
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_388, rt_str(".lo = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_390)).lo_))), rt_str("; ", 2)), F->lval_388), rt_str(".hi = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_390)).hi_))), rt_str("; ", 2)), F->lval_388), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_390)).lo2_))), rt_str("; ", 2)), F->lval_388), rt_str(".hi2 = ", 7)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_390)).hi2_))), 59));
} else {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_388, rt_str(".lo = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_390)).lo_))), rt_str("; ", 2)), F->lval_388), rt_str(".hi = ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_390)).hi_))), rt_str("; ", 2)), F->lval_388), rt_str(".lo2 = 1; ", 10)), F->lval_388), rt_str(".hi2 = 1;", 9)));
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_388, rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->ct_1099))), rt_str(") * (size_t)RT_CNT(", 19)), F->lval_388), rt_str("));", 3)));
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_389)).elem_)).kind_ == ((rt_int)5LL)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_389)).elem_)).kind_ == ((rt_int)6LL))) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_389)).elem_)).kind_ == ((rt_int)7LL)))) {
f_new_name_188(F->up, rt_str("i", 1), &F->i_1100);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->i_1100))), rt_str(" = 0; ", 6)), (*(P133)rt_nil_check(F->i_1100))), rt_str(" < RT_CNT(", 10)), F->lval_388), rt_str("); ", 3)), (*(P133)rt_nil_check(F->i_1100))), rt_str("++) {", 5)));
f_init_storage_391(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_388, rt_str(".p[", 3)), (*(P133)rt_nil_check(F->i_1100))), 93), (*(P115)rt_nil_check(F->t_389)).elem_, (*(P115)rt_nil_check(F->t_389)).elemcons_);
f_emit_208(F->up, rt_str("}", 1));
}
} else if (((*(P115)rt_nil_check(F->t_389)).kind_ == ((rt_int)7LL))) {
F->f_1104 = (*(P115)rt_nil_check(F->t_389)).fields_;
while ((F->f_1104 != NULL)) {
f_init_storage_391(F->up, rt_str_cat(rt_str_catc(F->lval_388, 46), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1104)).name_)))), (*(P1052)rt_nil_check(F->f_1104)).t_, (*(P1052)rt_nil_check(F->f_1104)).c_);
if (((*(P1052)rt_nil_check(F->f_1104)).dflt_ != NULL)) {
f_gexpr_522(F->up, (*(P1052)rt_nil_check(F->f_1104)).dflt_, (*(P1052)rt_nil_check(F->f_1104)).t_, &F->vt_1103, &F->v_1101);
f_check_type_359(F->up, F->vt_1103, (*(P1052)rt_nil_check(F->f_1104)).t_, ((rt_int)0LL));
f_assign_code_399(F->up, rt_str_cat(rt_str_catc(F->lval_388, 46), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1104)).name_)))), (*(P1052)rt_nil_check(F->f_1104)).t_, (*(P133)rt_nil_check(F->v_1101)), (*(P1052)rt_nil_check(F->f_1104)).c_, &F->x_1102);
f_emit_208(F->up, (*(P133)rt_nil_check(F->x_1102)));
}
F->f_1104 = (*(P1052)rt_nil_check(F->f_1104)).next_;
}
L_end_1105: ;
}
ret_:

  return;
}

static int f_composite_393(struct f_greenc_1fr *up_, P115 t_392) {
  struct f_composite_393fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_392 = t_392;
F->result_ = (((*(P115)rt_nil_check(F->t_392)).kind_ == ((rt_int)6LL)) || ((*(P115)rt_nil_check(F->t_392)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_399(struct f_greenc_1fr *up_, rstr lval_394, P115 t_395, rstr v_396, P170 c_397, P133 *r_398) {
  struct f_assign_code_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_394 = rt_str_copy(lval_394);
F->t_395 = t_395;
F->v_396 = rt_str_copy(v_396);
F->c_397 = c_397;
F->r_398 = r_398;
F->ct_1106 = NULL;
if (f_composite_393(F->up, F->t_395)) {
f_ctype_364(F->up, F->t_395, &F->ct_1106);
(*F->r_398) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_395)).cname_))), rt_str("(&", 2)), F->lval_394), rt_str(", ", 2)), F->v_396), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_395)).kind_ == ((rt_int)5LL))) {
(*F->r_398) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), F->lval_394), rt_str(", ", 2)), F->v_396), rt_str(");", 2)));
} else if (((((((*(P115)rt_nil_check(F->t_395)).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check(F->t_395)).kind_ == ((rt_int)4LL))) || ((*(P115)rt_nil_check(F->t_395)).kind_ == ((rt_int)11LL))) && (F->c_397 != NULL)) && ((*(P170)rt_nil_check(F->c_397)).lo_ != NULL))) {
(*F->r_398) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_394, rt_str(" = rt_range(", 12)), F->v_396), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_397)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_397)).hi_))), rt_str(");", 2)));
} else {
(*F->r_398) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_394, rt_str(" = ", 3)), F->v_396), 59));
}
ret_:

  return;
}

static void f_copy_code_403(struct f_greenc_1fr *up_, P115 t_400, rstr v_401, P133 *r_402) {
  struct f_copy_code_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_400 = t_400;
F->v_401 = rt_str_copy(v_401);
F->r_402 = r_402;
F->ct_1107 = NULL;
if (f_composite_393(F->up, F->t_400)) {
f_ctype_364(F->up, F->t_400, &F->ct_1107);
(*F->r_402) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("cp_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_400)).cname_))), 40), F->v_401), 41));
} else if (((*(P115)rt_nil_check(F->t_400)).kind_ == ((rt_int)5LL))) {
(*F->r_402) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_copy(", 12), F->v_401), 41));
} else {
(*F->r_402) = f_mk_185(F->up, F->v_401);
}
ret_:

  return;
}

static void f_eq_code_408(struct f_greenc_1fr *up_, P115 t_404, rstr a_405, rstr b_406, P133 *r_407) {
  struct f_eq_code_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_404 = t_404;
F->a_405 = rt_str_copy(a_405);
F->b_406 = rt_str_copy(b_406);
F->r_407 = r_407;
F->ct_1108 = NULL;
if (f_composite_393(F->up, F->t_404)) {
f_ctype_364(F->up, F->t_404, &F->ct_1108);
(*F->r_407) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("eq_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_404)).cname_))), 40), F->a_405), rt_str(", ", 2)), F->b_406), 41));
} else if (((*(P115)rt_nil_check(F->t_404)).kind_ == ((rt_int)5LL))) {
(*F->r_407) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_405), rt_str(", ", 2)), F->b_406), 41));
} else {
(*F->r_407) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_405), rt_str(" == ", 4)), F->b_406), 41));
}
ret_:

  return;
}

static int f_seen_name_411(struct f_greenc_1fr *up_, P144 l_409, rstr s_410) {
  struct f_seen_name_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_409 = l_409;
F->s_410 = rt_str_copy(s_410);
F->p_1109 = NULL;
F->p_1109 = F->l_409;
while ((F->p_1109 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P144)rt_nil_check(F->p_1109)).s_)), F->s_410)) {
F->result_ = 1;
goto ret_;
}
F->p_1109 = (*(P144)rt_nil_check(F->p_1109)).next_;
}
L_end_1110: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_412(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1111 = NULL;
F->t_1111 = F->up->all_types_117;
F->done_1112 = NULL;
F->l_1113 = NULL;
while ((F->t_1111 != NULL)) {
if ((f_composite_393(F->up, F->t_1111) && (!f_seen_name_411(F->up, F->done_1112, (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_)))))) {
F->l_1113 = ({ R145 *cell1115 = rt_alloc(sizeof(R145)); *cell1115 = cp_R145(({ R145 ag1116; ag1116.s_ = (*(P115)rt_nil_check(F->t_1111)).cname_; ag1116.next_ = F->done_1112; ag1116; })); (P144)cell1115; });
F->done_1112 = F->l_1113;
f_put_to_206(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), rt_str(" s);", 4)));
f_put_to_206(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), rt_str(" cp_", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), rt_str(" s);", 4)));
f_put_to_206(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), rt_str(" a, ", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1111)).cname_))), rt_str(" b);", 4)));
f_helper_bodies_414(F->up, F->t_1111);
}
F->t_1111 = (*(P115)rt_nil_check(F->t_1111)).next_;
}
L_end_1114: ;
ret_:

  return;
}

static void f_helper_bodies_414(struct f_greenc_1fr *up_, P115 t_413) {
  struct f_helper_bodies_414fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_413 = t_413;
F->c_1117 = NULL;
F->c_1117 = (*(P115)rt_nil_check(F->t_413)).cname_;
F->b_1118 = NULL;
F->b_1118 = F->up->out_funcs_126;
F->ct_1119 = NULL;
F->x_1120 = NULL;
F->y_1121 = NULL;
F->conds_1122 = NULL;
F->f_1123 = NULL;
if (((*(P115)rt_nil_check(F->t_413)).kind_ == ((rt_int)6LL))) {
f_ctype_364(F->up, (*(P115)rt_nil_check(F->t_413)).elem_, &F->ct_1119);
f_assign_code_399(F->up, rt_str("d->p[i]", 7), (*(P115)rt_nil_check(F->t_413)).elem_, rt_str("s.p[i]", 6), NULL, &F->x_1120);
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1117))), 40), (*(P133)rt_nil_check(F->c_1117))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1117))), rt_str(" s) {", 5)));
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_199(F->up)), rt_str("array length", 12)), f_q_199(F->up)), rt_str(");", 2)));
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), (*(P133)rt_nil_check(F->x_1120))), rt_str(" }", 2)));
f_put_to_206(F->up, F->b_1118, rt_str("}", 1));
f_copy_code_403(F->up, (*(P115)rt_nil_check(F->t_413)).elem_, rt_str("s.p[i]", 6), &F->x_1120);
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1117))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1117))), 40), (*(P133)rt_nil_check(F->c_1117))), rt_str(" s) {", 5)));
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1117))), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P133)rt_nil_check(F->ct_1119))), rt_str(") * (size_t)RT_CNT(s));", 23)));
f_put_to_206(F->up, F->b_1118, rt_str_catc(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), (*(P133)rt_nil_check(F->x_1120))), 59));
f_put_to_206(F->up, F->b_1118, rt_str("  return d;", 11));
f_put_to_206(F->up, F->b_1118, rt_str("}", 1));
f_eq_code_408(F->up, (*(P115)rt_nil_check(F->t_413)).elem_, rt_str("a.p[i]", 6), rt_str("b.p[i]", 6), &F->x_1120);
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1117))), 40), (*(P133)rt_nil_check(F->c_1117))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1117))), rt_str(" b) {", 5)));
f_put_to_206(F->up, F->b_1118, rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43));
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), (*(P133)rt_nil_check(F->x_1120))), rt_str(")) return 0;", 12)));
f_put_to_206(F->up, F->b_1118, rt_str("  return 1;", 11));
f_put_to_206(F->up, F->b_1118, rt_str("}", 1));
} else {
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1117))), 40), (*(P133)rt_nil_check(F->c_1117))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1117))), rt_str(" s) {", 5)));
F->f_1123 = (*(P115)rt_nil_check(F->t_413)).fields_;
while ((F->f_1123 != NULL)) {
f_assign_code_399(F->up, rt_str_cat(rt_str("d->", 3), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1123)).name_)))), (*(P1052)rt_nil_check(F->f_1123)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1123)).name_)))), NULL, &F->x_1120);
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->x_1120))));
F->f_1123 = (*(P1052)rt_nil_check(F->f_1123)).next_;
}
L_end_1124: ;
f_put_to_206(F->up, F->b_1118, rt_str("}", 1));
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1117))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1117))), 40), (*(P133)rt_nil_check(F->c_1117))), rt_str(" s) {", 5)));
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1117))), rt_str(" d = s;", 7)));
F->conds_1122 = f_mk_185(F->up, rt_str("1", 1));
F->f_1123 = (*(P115)rt_nil_check(F->t_413)).fields_;
while ((F->f_1123 != NULL)) {
f_copy_code_403(F->up, (*(P1052)rt_nil_check(F->f_1123)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1123)).name_)))), &F->x_1120);
f_put_to_206(F->up, F->b_1118, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1123)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1120))), 59));
f_eq_code_408(F->up, (*(P1052)rt_nil_check(F->f_1123)).t_, rt_str_cat(rt_str("a.", 2), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1123)).name_)))), rt_str_cat(rt_str("b.", 2), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1123)).name_)))), &F->y_1121);
F->conds_1122 = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1122)), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->y_1121))));
F->f_1123 = (*(P1052)rt_nil_check(F->f_1123)).next_;
}
L_end_1125: ;
f_put_to_206(F->up, F->b_1118, rt_str("  return d;", 11));
f_put_to_206(F->up, F->b_1118, rt_str("}", 1));
f_put_to_206(F->up, F->b_1118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1117))), 40), (*(P133)rt_nil_check(F->c_1117))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1117))), rt_str(" b) {", 5)));
f_put_to_206(F->up, F->b_1118, rt_str_catc(rt_str_cat(rt_str("  return ", 9), (*(P133)rt_nil_check(F->conds_1122))), 59));
f_put_to_206(F->up, F->b_1118, rt_str("}", 1));
}
ret_:

  return;
}

static void f_storage_418(struct f_greenc_1fr *up_, rstr name_415, P115 t_416, P133 *access_code_417) {
  struct f_storage_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_415 = rt_str_copy(name_415);
F->t_416 = t_416;
F->access_code_417 = access_code_417;
F->ct_1126 = NULL;
F->g_1127 = NULL;
f_ctype_364(F->up, F->t_416, &F->ct_1126);
if ((!F->up->in_func_131)) {
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("g_", 2), f_lower_s_196(F->up, F->name_415)), 95), &F->g_1127);
f_put_to_206(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1126))), 32), (*(P133)rt_nil_check(F->g_1127))), 59));
F->up->st_field_134 = F->g_1127;
(*F->access_code_417) = F->g_1127;
} else {
f_new_name_188(F->up, rt_str_catc(f_lower_s_196(F->up, F->name_415), 95), &F->g_1127);
f_put_to_206(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1126))), 32), (*(P133)rt_nil_check(F->g_1127))), 59));
F->up->st_field_134 = F->g_1127;
(*F->access_code_417) = f_mk_185(F->up, rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check(F->g_1127))));
}
ret_:

  return;
}

static void f_bind_421(struct f_greenc_1fr *up_, P110 y_419, P133 access_code_420) {
  struct f_bind_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_419 = y_419;
F->access_code_420 = access_code_420;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_419)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->y_419)).access_path_ = F->up->st_field_134;
} else {
(*(P110)rt_nil_check(F->y_419)).level_ = ((rt_int)0LL);
(*(P110)rt_nil_check(F->y_419)).access_path_ = F->access_code_420;
}
ret_:

  return;
}

static void f_declare_subprograms_423(struct f_greenc_1fr *up_, P163 from_422) {
  struct f_declare_subprograms_423fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_422 = from_422;
F->e_1128 = NULL;
F->e_1128 = F->from_422;
while ((F->e_1128 != NULL)) {
if (((((*(P163)rt_nil_check(F->e_1128)).kind_ == ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->e_1128)).kind_ == ((rt_int)45LL))) && ((*(P163)rt_nil_check(F->e_1128)).ival_ == ((rt_int)0LL)))) {
f_declare_one_425(F->up, F->e_1128);
}
F->e_1128 = (*(P163)rt_nil_check(F->e_1128)).next_;
}
L_end_1129: ;
ret_:

  return;
}

static void f_declare_one_425(struct f_greenc_1fr *up_, P163 e_424) {
  struct f_declare_one_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_424 = e_424;
F->y_1130 = NULL;
F->z_1131 = NULL;
if (f_is_generic_name_778(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_424)).name_)))) {
goto ret_;
}
f_build_subprogram_428(F->up, F->e_424, &F->y_1130);
F->z_1131 = F->up->table_112.p[rt_index(f_hash_324(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1130)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1131 != NULL)) {
if (((((((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1131)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1130)).name_))) && (((*(P110)rt_nil_check(F->z_1131)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1131)).kind_ == ((rt_int)4LL)))) && ((*(P110)rt_nil_check(F->z_1131)).decl_ != NULL)) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->z_1131)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->z_1131)).depth_ == F->up->depth_113)) && f_same_signature_342(F->up, (*(P110)rt_nil_check(F->z_1131)).params_, (*(P110)rt_nil_check(F->y_1130)).params_)) && f_same_339(F->up, (*(P110)rt_nil_check(F->z_1131)).result_, (*(P110)rt_nil_check(F->y_1130)).result_))) {
(*(P110)rt_nil_check(F->z_1131)).decl_ = F->e_424;
goto ret_;
}
F->z_1131 = (*(P110)rt_nil_check(F->z_1131)).chain_;
}
L_end_1132: ;
if ((F->up->cur_task_160 != NULL)) {
F->z_1131 = (*(P110)rt_nil_check(F->up->cur_task_160)).members_;
while ((F->z_1131 != NULL)) {
if ((((((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1131)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1130)).name_))) && (((*(P110)rt_nil_check(F->z_1131)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1131)).kind_ == ((rt_int)4LL)))) && ((*(P110)rt_nil_check(F->z_1131)).decl_ != NULL)) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->z_1131)).decl_)).ival_ == ((rt_int)1LL))) && f_same_signature_342(F->up, (*(P110)rt_nil_check(F->z_1131)).params_, (*(P110)rt_nil_check(F->y_1130)).params_)) && f_same_339(F->up, (*(P110)rt_nil_check(F->z_1131)).result_, (*(P110)rt_nil_check(F->y_1130)).result_))) {
(*(P110)rt_nil_check(F->y_1130)).cname_ = (*(P110)rt_nil_check(F->z_1131)).cname_;
(*(P110)rt_nil_check(F->z_1131)).decl_ = F->e_424;
goto L_end_1133;
}
F->z_1131 = (*(P110)rt_nil_check(F->z_1131)).mnext_;
}
L_end_1133: ;
}
f_define_345(F->up, F->y_1130, (*(P163)rt_nil_check(F->e_424)).line_);
ret_:

  return;
}

static void f_build_subprogram_428(struct f_greenc_1fr *up_, P163 d_426, P110 *y_427) {
  struct f_build_subprogram_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_426 = d_426;
F->y_427 = y_427;
F->p_1134 = NULL;
F->p_1134 = (*(P163)rt_nil_check(F->d_426)).a_;
F->pm_1135 = NULL;
F->tail_1136 = NULL;
F->rc_1137 = NULL;
F->k_1138 = ((rt_int)4LL);
if (((*(P163)rt_nil_check(F->d_426)).kind_ == ((rt_int)45LL))) {
F->k_1138 = ((rt_int)3LL);
}
(*F->y_427) = f_new_sym_350(F->up, F->k_1138, (*(P163)rt_nil_check(F->d_426)).name_);
while ((F->p_1134 != NULL)) {
F->pm_1135 = ({ R1042 *cell1140 = rt_alloc(sizeof(R1042)); *cell1140 = cp_R1042(({ R1042 ag1141; ag1141.name_ = (*(P163)rt_nil_check(F->p_1134)).name_; ag1141.mode_ = (*(P163)rt_nil_check(F->p_1134)).ival_; ag1141.t_ = NULL; ag1141.c_ = NULL; ag1141.cfield_ = NULL; ag1141.dflt_ = (*(P163)rt_nil_check(F->p_1134)).b_; ag1141.next_ = NULL; ag1141; })); (P1041)cell1140; });
f_resolve_380(F->up, (*(P163)rt_nil_check(F->p_1134)).a_, &(*(P1041)rt_nil_check(F->pm_1135)).t_, &(*(P1041)rt_nil_check(F->pm_1135)).c_);
f_new_name_188(F->up, rt_str_catc(f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_1134)).name_))), 95), &(*(P1041)rt_nil_check(F->pm_1135)).cfield_);
if ((((*(P163)rt_nil_check(F->d_426)).kind_ == ((rt_int)45LL)) && ((*(P1041)rt_nil_check(F->pm_1135)).mode_ != ((rt_int)1LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->p_1134)).line_, rt_str("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P163)rt_nil_check(F->d_426)).flag_ == ((rt_int)1LL)) && ((*(P1041)rt_nil_check(F->pm_1135)).mode_ != ((rt_int)1LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->p_1134)).line_, rt_str("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1136 == NULL)) {
(*(P110)rt_nil_check((*F->y_427))).params_ = F->pm_1135;
} else {
(*(P1041)rt_nil_check(F->tail_1136)).next_ = F->pm_1135;
}
F->tail_1136 = F->pm_1135;
F->p_1134 = (*(P163)rt_nil_check(F->p_1134)).next_;
}
L_end_1139: ;
(*(P110)rt_nil_check((*F->y_427))).result_ = F->up->ty_void_154;
if (((*(P163)rt_nil_check(F->d_426)).b_ != NULL)) {
f_resolve_380(F->up, (*(P163)rt_nil_check(F->d_426)).b_, &(*(P110)rt_nil_check((*F->y_427))).result_, &F->rc_1137);
}
(*(P110)rt_nil_check((*F->y_427))).vrp_ = ((*(P163)rt_nil_check(F->d_426)).flag_ == ((rt_int)1LL));
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("f_", 2), f_c_ident_482(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_426)).name_)))), 95), &(*(P110)rt_nil_check((*F->y_427))).cname_);
(*(P110)rt_nil_check((*F->y_427))).decl_ = F->d_426;
(*(P110)rt_nil_check((*F->y_427))).level_ = F->up->cur_level_132;
ret_:

  return;
}

static void f_decl_elements_430(struct f_greenc_1fr *up_, P163 decls_429) {
  struct f_decl_elements_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_429 = decls_429;
F->e_1142 = NULL;
F->e_1142 = F->decls_429;
F->declared_1143 = 0;
while ((F->e_1142 != NULL)) {
if ((((((*(P163)rt_nil_check(F->e_1142)).kind_ == ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->e_1142)).kind_ == ((rt_int)45LL))) && ((*(P163)rt_nil_check(F->e_1142)).ival_ != ((rt_int)1LL))) && (!F->declared_1143))) {
f_declare_subprograms_423(F->up, F->e_1142);
F->declared_1143 = 1;
}
f_decl_element_432(F->up, F->e_1142);
F->e_1142 = (*(P163)rt_nil_check(F->e_1142)).next_;
}
L_end_1144: ;
ret_:

  return;
}

static void f_decl_element_432(struct f_greenc_1fr *up_, P163 e_431) {
  struct f_decl_element_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_431 = e_431;
F->y_1145 = NULL;
F->z_1146 = NULL;
F->t_1147 = NULL;
F->vt_1148 = NULL;
F->c_1149 = NULL;
F->acc_1150 = NULL;
F->v_1151 = NULL;
F->x_1152 = NULL;
{ rt_int sel1154 = (*(P163)rt_nil_check(F->e_431)).kind_;
if (0 || sel1154 == ((rt_int)42LL)) {
F->y_1145 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_)));
if ((((((((F->y_1145 != NULL) && ((*(P110)rt_nil_check(F->y_1145)).kind_ == ((rt_int)5LL))) && ((*(P110)rt_nil_check(F->y_1145)).depth_ == F->up->depth_113)) && ((*(P110)rt_nil_check(F->y_1145)).t_ != NULL)) && (*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1145)).t_)).priv_) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1145)).t_)).kind_ == ((rt_int)9LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).kind_ != ((rt_int)77LL)))) {
f_type_definition_385(F->up, (*(P163)rt_nil_check(F->e_431)).a_, (*(P163)rt_nil_check(F->e_431)).name_, &F->t_1147, &F->c_1149);
f_complete_private_602(F->up, (*(P110)rt_nil_check(F->y_1145)).t_, F->t_1147);
(*(P110)rt_nil_check(F->y_1145)).c_ = F->c_1149;
} else {
F->y_1145 = f_new_sym_350(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_431)).name_);
(*(P110)rt_nil_check(F->y_1145)).decl_ = F->e_431;
f_define_345(F->up, F->y_1145, (*(P163)rt_nil_check(F->e_431)).line_);
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).kind_ == ((rt_int)77LL))) {
(*(P110)rt_nil_check(F->y_1145)).t_ = f_new_typ_352(F->up, ((rt_int)9LL));
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1145)).t_)).name_ = (*(P163)rt_nil_check(F->e_431)).name_;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1145)).t_)).priv_ = 1;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1145)).t_)).decl_ = F->up->cur_pkg_175;
} else {
f_type_definition_385(F->up, (*(P163)rt_nil_check(F->e_431)).a_, (*(P163)rt_nil_check(F->e_431)).name_, &(*(P110)rt_nil_check(F->y_1145)).t_, &(*(P110)rt_nil_check(F->y_1145)).c_);
}
}
} else if (0 || sel1154 == ((rt_int)43LL)) {
F->y_1145 = f_new_sym_350(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_431)).name_);
f_resolve_380(F->up, (*(P163)rt_nil_check(F->e_431)).a_, &(*(P110)rt_nil_check(F->y_1145)).t_, &(*(P110)rt_nil_check(F->y_1145)).c_);
f_define_345(F->up, F->y_1145, (*(P163)rt_nil_check(F->e_431)).line_);
} else if (0 || sel1154 == ((rt_int)40LL)) {
f_resolve_380(F->up, (*(P163)rt_nil_check(F->e_431)).a_, &F->t_1147, &F->c_1149);
F->y_1145 = f_new_sym_350(F->up, ((rt_int)1LL), (*(P163)rt_nil_check(F->e_431)).name_);
if (((*(P163)rt_nil_check(F->e_431)).flag_ == ((rt_int)2LL))) {
f_lvalue_494(F->up, (*(P163)rt_nil_check(F->e_431)).b_, &F->v_1151, &F->vt_1148, &F->c_1149, &(*(P110)rt_nil_check(F->y_1145)).ro_);
f_check_type_359(F->up, F->vt_1148, F->t_1147, (*(P163)rt_nil_check(F->e_431)).line_);
f_ctype_364(F->up, F->t_1147, &F->acc_1150);
f_new_name_188(F->up, rt_str_catc(f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_))), 95), &F->x_1152);
if (F->up->in_func_131) {
f_put_to_206(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->acc_1150))), rt_str(" *", 2)), (*(P133)rt_nil_check(F->x_1152))), 59));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check(F->x_1152))), rt_str(" = &(", 5)), (*(P133)rt_nil_check(F->v_1151))), rt_str(");", 2)));
(*(P110)rt_nil_check(F->y_1145)).byref_ = 1;
(*(P110)rt_nil_check(F->y_1145)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->y_1145)).access_path_ = F->x_1152;
} else {
f_put_to_206(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->acc_1150))), rt_str(" *g_", 4)), (*(P133)rt_nil_check(F->x_1152))), 59));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("g_", 2), (*(P133)rt_nil_check(F->x_1152))), rt_str(" = &(", 5)), (*(P133)rt_nil_check(F->v_1151))), rt_str(");", 2)));
(*(P110)rt_nil_check(F->y_1145)).level_ = ((rt_int)0LL);
(*(P110)rt_nil_check(F->y_1145)).access_path_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(*g_", 4), (*(P133)rt_nil_check(F->x_1152))), 41));
}
(*(P110)rt_nil_check(F->y_1145)).t_ = F->vt_1148;
(*(P110)rt_nil_check(F->y_1145)).c_ = F->c_1149;
f_define_345(F->up, F->y_1145, (*(P163)rt_nil_check(F->e_431)).line_);
goto ret_;
}
if (((((*(P115)rt_nil_check(F->t_1147)).kind_ == ((rt_int)5LL)) && ((*(P170)rt_nil_check(F->c_1149)).slen_ == NULL)) && ((*(P163)rt_nil_check(F->e_431)).b_ != NULL))) {
F->up->vrp_ok_180 = 1;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_431)).b_, F->t_1147, &F->vt_1148, &F->v_1151);
F->up->vrp_ok_180 = 0;
f_check_type_359(F->up, F->vt_1148, F->t_1147, (*(P163)rt_nil_check(F->e_431)).line_);
f_storage_418(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_)), F->t_1147, &F->acc_1150);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1150)), rt_str(" = rt_str_copy(", 15)), (*(P133)rt_nil_check(F->v_1151))), rt_str(");", 2)));
} else {
f_storage_418(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_)), F->t_1147, &F->acc_1150);
f_init_storage_391(F->up, (*(P133)rt_nil_check(F->acc_1150)), F->t_1147, F->c_1149);
if (((*(P163)rt_nil_check(F->e_431)).b_ != NULL)) {
F->up->vrp_ok_180 = 1;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_431)).b_, F->t_1147, &F->vt_1148, &F->v_1151);
F->up->vrp_ok_180 = 0;
f_check_type_359(F->up, F->vt_1148, F->t_1147, (*(P163)rt_nil_check(F->e_431)).line_);
f_assign_code_399(F->up, (*(P133)rt_nil_check(F->acc_1150)), F->t_1147, (*(P133)rt_nil_check(F->v_1151)), F->c_1149, &F->x_1152);
f_emit_208(F->up, (*(P133)rt_nil_check(F->x_1152)));
}
}
(*(P110)rt_nil_check(F->y_1145)).t_ = F->t_1147;
(*(P110)rt_nil_check(F->y_1145)).c_ = F->c_1149;
f_bind_421(F->up, F->y_1145, F->acc_1150);
f_define_345(F->up, F->y_1145, (*(P163)rt_nil_check(F->e_431)).line_);
} else if (0 || sel1154 == ((rt_int)41LL)) {
f_resolve_380(F->up, (*(P163)rt_nil_check(F->e_431)).a_, &F->t_1147, &F->c_1149);
F->y_1145 = f_new_sym_350(F->up, ((rt_int)2LL), (*(P163)rt_nil_check(F->e_431)).name_);
F->up->vrp_ok_180 = 1;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_431)).b_, F->t_1147, &F->vt_1148, &F->v_1151);
F->up->vrp_ok_180 = 0;
f_check_type_359(F->up, F->vt_1148, F->t_1147, (*(P163)rt_nil_check(F->e_431)).line_);
if (((*(P115)rt_nil_check(F->t_1147)).kind_ == ((rt_int)1LL))) {
f_manifest_376(F->up, (*(P163)rt_nil_check(F->e_431)).b_, &(*(P110)rt_nil_check(F->y_1145)).mvalue_, &F->ok_1153);
(*(P110)rt_nil_check(F->y_1145)).hasmv_ = F->ok_1153;
}
f_storage_418(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_)), F->t_1147, &F->acc_1150);
f_copy_code_403(F->up, F->t_1147, (*(P133)rt_nil_check(F->v_1151)), &F->x_1152);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1150)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1152))), 59));
(*(P110)rt_nil_check(F->y_1145)).t_ = F->t_1147;
(*(P110)rt_nil_check(F->y_1145)).c_ = F->c_1149;
(*(P110)rt_nil_check(F->y_1145)).ro_ = 1;
f_bind_421(F->up, F->y_1145, F->acc_1150);
f_define_345(F->up, F->y_1145, (*(P163)rt_nil_check(F->e_431)).line_);
} else if (0 || sel1154 == ((rt_int)46LL)) {
if (((*(P163)rt_nil_check(F->e_431)).a_ != NULL)) {
if ((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_590(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).a_))) {
F->y_1145 = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).name_)), (*(P163)rt_nil_check(F->e_431)).line_);
} else if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1145 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_431)).a_)).name_)));
} else {
F->y_1145 = NULL;
}
if (((F->y_1145 == NULL) || ((*(P110)rt_nil_check(F->y_1145)).kind_ != ((rt_int)6LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_431)).line_, rt_str("an exception is renamed only as an exception", 44));
}
f_copy_sym_599(F->up, F->y_1145, &F->z_1146);
(*(P110)rt_nil_check(F->z_1146)).name_ = (*(P163)rt_nil_check(F->e_431)).name_;
f_define_345(F->up, F->z_1146, (*(P163)rt_nil_check(F->e_431)).line_);
goto ret_;
}
F->y_1145 = f_new_sym_350(F->up, ((rt_int)6LL), (*(P163)rt_nil_check(F->e_431)).name_);
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("ex_", 3), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1145)).cname_);
f_put_to_206(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str("static int ", 11), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1145)).cname_))), 59));
f_put_to_206(F->up, F->up->out_excs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1145)).cname_))), rt_str(" = rt_exc(", 10)), f_q_199(F->up)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_))), f_q_199(F->up)), rt_str(");", 2)));
f_define_345(F->up, F->y_1145, (*(P163)rt_nil_check(F->e_431)).line_);
} else if (0 || sel1154 == ((rt_int)44LL) || sel1154 == ((rt_int)45LL)) {
if (f_is_generic_name_778(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_431)).name_)))) {
f_attach_generic_body_780(F->up, F->e_431);
} else if (((*(P163)rt_nil_check(F->e_431)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_428(F->up, F->e_431, &F->y_1145);
f_define_345(F->up, F->y_1145, (*(P163)rt_nil_check(F->e_431)).line_);
} else {
f_subprogram_body_437(F->up, F->e_431, f_lookup_decl_334(F->up, F->e_431));
}
} else if (0 || sel1154 == ((rt_int)55LL)) {
f_use_clause_611(F->up, F->e_431);
} else {
f_other_decl_434(F->up, F->e_431);
}
}
ret_:

  return;
}

static void f_other_decl_434(struct f_greenc_1fr *up_, P163 e_433) {
  struct f_other_decl_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_433 = e_433;
if (((*(P163)rt_nil_check(F->e_433)).kind_ == ((rt_int)48LL))) {
f_package_spec_604(F->up, F->e_433);
} else if (((*(P163)rt_nil_check(F->e_433)).kind_ == ((rt_int)49LL))) {
f_package_body_609(F->up, F->e_433);
} else {
f_task_decl_684(F->up, F->e_433);
}
ret_:

  return;
}

static void f_subprogram_body_437(struct f_greenc_1fr *up_, P163 d_435, P110 y_436) {
  struct f_subprogram_body_437fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_435 = d_435;
F->y_436 = y_436;
F->saved_code_1155 = NULL;
F->saved_code_1155 = F->up->code_129;
F->saved_fields_1156 = NULL;
F->saved_fields_1156 = F->up->fields_buf_130;
F->saved_in_1157 = F->up->in_func_131;
F->saved_sym_1158 = NULL;
F->saved_sym_1158 = F->up->func_sym_135;
F->saved_exits_1159 = NULL;
F->saved_exits_1159 = F->up->exits_138;
F->saved_frames_1160 = F->up->frames_143;
F->saved_handlers_1161 = NULL;
F->saved_handlers_1161 = F->up->handlers_146;
F->saved_cleanups_1162 = NULL;
F->saved_cleanups_1162 = F->up->cleanups_147;
F->saved_pure_1163 = NULL;
F->saved_pure_1163 = F->up->pure_sym_178;
F->aw_1164 = NULL;
F->saved_pdepth_1165 = F->up->pure_depth_179;
F->args_1166 = NULL;
F->head_1167 = NULL;
F->frame_1168 = NULL;
F->parent_1169 = NULL;
F->ct_1170 = NULL;
F->x_1171 = NULL;
F->pm_1172 = NULL;
F->pm_1172 = (*(P110)rt_nil_check(F->y_436)).params_;
F->p_1173 = NULL;
F->frame_1168 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_436)).cname_)), rt_str("fr", 2)));
if (F->up->in_func_131) {
F->parent_1169 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).cname_)), rt_str("fr", 2)));
}
F->up->code_129 = f_new_buffer_203(F->up);
F->up->fields_buf_130 = f_new_buffer_203(F->up);
F->up->in_func_131 = 1;
F->up->func_sym_135 = F->y_436;
F->up->exits_138 = NULL;
F->up->frames_143 = ((rt_int)0LL);
F->up->handlers_146 = NULL;
F->up->cleanups_147 = NULL;
F->up->cur_level_132 = rt_add(F->up->cur_level_132, ((rt_int)1LL));
F->args_1166 = f_mk_185(F->up, rt_str("", 0));
f_open_scope_346(F->up);
if ((((*(P110)rt_nil_check(F->y_436)).kind_ == ((rt_int)3LL)) && (!(*(P110)rt_nil_check(F->y_436)).vrp_))) {
F->up->pure_sym_178 = F->y_436;
F->up->pure_depth_179 = F->up->depth_113;
}
if ((F->parent_1169 != NULL)) {
f_put_to_206(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P133)rt_nil_check(F->parent_1169))), rt_str(" *up;", 5)));
F->args_1166 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->parent_1169))), rt_str(" *up_", 5)));
f_emit_208(F->up, rt_str("F->up = up_;", 12));
}
while ((F->pm_1172 != NULL)) {
f_ctype_364(F->up, (*(P1041)rt_nil_check(F->pm_1172)).t_, &F->ct_1170);
if ((((*(P133)rt_nil_check(F->args_1166))).len > ((rt_int)0LL))) {
F->args_1166 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1166)), rt_str(", ", 2)));
}
if (((*(P1041)rt_nil_check(F->pm_1172)).mode_ == ((rt_int)1LL))) {
F->p_1173 = f_new_sym_350(F->up, ((rt_int)2LL), (*(P1041)rt_nil_check(F->pm_1172)).name_);
(*(P110)rt_nil_check(F->p_1173)).ro_ = 1;
f_put_to_206(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1170))), 32), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))), 59));
F->args_1166 = f_mk_185(F->up, rt_str_cat(rt_str_catc(rt_str_cat((*(P133)rt_nil_check(F->args_1166)), (*(P133)rt_nil_check(F->ct_1170))), 32), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))));
f_copy_code_403(F->up, (*(P1041)rt_nil_check(F->pm_1172)).t_, (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_)), &F->x_1171);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1171))), 59));
} else {
F->p_1173 = f_new_sym_350(F->up, ((rt_int)1LL), (*(P1041)rt_nil_check(F->pm_1172)).name_);
(*(P110)rt_nil_check(F->p_1173)).byref_ = 1;
f_put_to_206(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1170))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))), 59));
F->args_1166 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->args_1166)), (*(P133)rt_nil_check(F->ct_1170))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))));
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))), 59));
}
(*(P110)rt_nil_check(F->p_1173)).access_path_ = (*(P1041)rt_nil_check(F->pm_1172)).cfield_;
(*(P110)rt_nil_check(F->p_1173)).t_ = (*(P1041)rt_nil_check(F->pm_1172)).t_;
(*(P110)rt_nil_check(F->p_1173)).c_ = (*(P1041)rt_nil_check(F->pm_1172)).c_;
(*(P110)rt_nil_check(F->p_1173)).level_ = F->up->cur_level_132;
f_define_345(F->up, F->p_1173, (*(P163)rt_nil_check(F->d_435)).line_);
F->pm_1172 = (*(P1041)rt_nil_check(F->pm_1172)).next_;
}
L_end_1174: ;
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_436)).result_)).kind_ != ((rt_int)9LL))) {
f_ctype_364(F->up, (*(P110)rt_nil_check(F->y_436)).result_, &F->ct_1170);
f_put_to_206(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1170))), rt_str(" result_;", 9)));
}
f_decl_elements_430(F->up, (*(P163)rt_nil_check(F->d_435)).c_);
if (((((*(P163)rt_nil_check(F->d_435)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_435)).tag_)), rt_str("INTERFACE", 9))) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_436)).result_)).kind_ == ((rt_int)9LL)))) {
F->x_1171 = f_mk_185(F->up, rt_str("", 0));
F->pm_1172 = (*(P110)rt_nil_check(F->y_436)).params_;
while ((F->pm_1172 != NULL)) {
if ((((*(P133)rt_nil_check(F->x_1171))).len > ((rt_int)0LL))) {
F->x_1171 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->x_1171)), rt_str(", ", 2)));
}
F->x_1171 = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_1171)), rt_str("F->", 3)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1172)).cfield_))));
F->pm_1172 = (*(P1041)rt_nil_check(F->pm_1172)).next_;
}
L_end_1175: ;
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("rt_g_", 5), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->d_435)).name_)))), 40), (*(P133)rt_nil_check(F->x_1171))), rt_str(");", 2)));
} else {
f_guarded_448(F->up, (*(P163)rt_nil_check(F->d_435)).d_, (*(P163)rt_nil_check(F->d_435)).e_, (*(P163)rt_nil_check(F->d_435)).line_);
}
f_task_awaits_703(F->up, (*(P163)rt_nil_check(F->d_435)).c_, &F->aw_1164);
f_close_scope_347(F->up);
F->up->cur_level_132 = rt_sub(F->up->cur_level_132, ((rt_int)1LL));
if ((((*(P133)rt_nil_check(F->args_1166))).len == ((rt_int)0LL))) {
F->args_1166 = f_mk_185(F->up, rt_str("void", 4));
}
f_ctype_364(F->up, (*(P110)rt_nil_check(F->y_436)).result_, &F->ct_1170);
F->head_1167 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1170))), 32), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_436)).cname_))), 40), (*(P133)rt_nil_check(F->args_1166))), 41));
f_put_to_206(F->up, F->up->out_protos_124, rt_str_catc((*(P133)rt_nil_check(F->head_1167)), 59));
f_put_to_206(F->up, F->up->out_frames_122, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->frame_1168))), rt_str(" { int dummy;", 13)));
f_splice_213(F->up, F->up->out_frames_122, F->up->fields_buf_130);
f_put_to_206(F->up, F->up->out_frames_122, rt_str("};", 2));
f_put_to_206(F->up, F->up->out_funcs_126, rt_str_cat((*(P133)rt_nil_check(F->head_1167)), rt_str(" {", 2)));
f_put_to_206(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P133)rt_nil_check(F->frame_1168))), rt_str(" *F = rt_alloc(sizeof *F);", 26)));
if ((((*(P110)rt_nil_check(F->y_436)).kind_ == ((rt_int)4LL)) && ((*(P110)rt_nil_check(F->y_436)).access_path_ != NULL))) {
f_put_to_206(F->up, F->up->out_funcs_126, rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_436)).access_path_))));
}
f_splice_213(F->up, F->up->out_funcs_126, F->up->code_129);
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_436)).result_)).kind_ != ((rt_int)9LL))) {
f_put_to_206(F->up, F->up->out_funcs_126, rt_str("  rt_raise(RT_X_INIT);", 22));
f_put_to_206(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_206(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1164)));
f_put_to_206(F->up, F->up->out_funcs_126, rt_str("  return F->result_;", 20));
} else {
f_put_to_206(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_206(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1164)));
f_put_to_206(F->up, F->up->out_funcs_126, rt_str("  return;", 9));
}
f_put_to_206(F->up, F->up->out_funcs_126, rt_str("}", 1));
f_put_to_206(F->up, F->up->out_funcs_126, rt_str("", 0));
F->up->code_129 = F->saved_code_1155;
F->up->fields_buf_130 = F->saved_fields_1156;
F->up->in_func_131 = F->saved_in_1157;
F->up->func_sym_135 = F->saved_sym_1158;
F->up->exits_138 = F->saved_exits_1159;
F->up->frames_143 = F->saved_frames_1160;
F->up->handlers_146 = F->saved_handlers_1161;
F->up->cleanups_147 = F->saved_cleanups_1162;
F->up->pure_sym_178 = F->saved_pure_1163;
F->up->pure_depth_179 = F->saved_pdepth_1165;
ret_:

  return;
}

static void f_gen_statements_439(struct f_greenc_1fr *up_, P163 stmts_438) {
  struct f_gen_statements_439fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_438 = stmts_438;
F->s_1176 = NULL;
F->s_1176 = F->stmts_438;
while ((F->s_1176 != NULL)) {
f_gen_statement_454(F->up, F->s_1176);
F->s_1176 = (*(P163)rt_nil_check(F->s_1176)).next_;
}
L_end_1177: ;
ret_:

  return;
}

static void f_pop_frames_441(struct f_greenc_1fr *up_, rt_int upto_440) {
  struct f_pop_frames_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_440 = upto_440;
F->i_1178 = F->up->frames_143;
F->c_1179 = NULL;
F->c_1179 = F->up->cleanups_147;
while ((F->i_1178 > F->upto_440)) {
f_emit_208(F->up, (*(P133)rt_nil_check((*(P144)rt_nil_check(F->c_1179)).s_)));
F->c_1179 = (*(P144)rt_nil_check(F->c_1179)).next_;
F->i_1178 = rt_sub(F->i_1178, ((rt_int)1LL));
}
L_end_1180: ;
ret_:

  return;
}

static void f_push_cleanup_443(struct f_greenc_1fr *up_, rstr s_442) {
  struct f_push_cleanup_443fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_442 = rt_str_copy(s_442);
F->up->cleanups_147 = ({ R145 *cell1181 = rt_alloc(sizeof(R145)); *cell1181 = cp_R145(({ R145 ag1182; ag1182.s_ = NULL; ag1182.next_ = F->up->cleanups_147; ag1182; })); (P144)cell1181; });
(*(P144)rt_nil_check(F->up->cleanups_147)).s_ = f_mk_185(F->up, F->s_442);
F->up->frames_143 = rt_add(F->up->frames_143, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_444(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_147 = (*(P144)rt_nil_check(F->up->cleanups_147)).next_;
F->up->frames_143 = rt_sub(F->up->frames_143, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_448(struct f_greenc_1fr *up_, P163 stmts_445, P163 hs_446, rt_int line_447) {
  struct f_guarded_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_445 = stmts_445;
F->hs_446 = hs_446;
F->line_447 = line_447;
F->f_1183 = NULL;
F->x_1184 = NULL;
F->h_1185 = NULL;
F->n_1186 = NULL;
F->first_1187 = 1;
F->has_others_1188 = 0;
F->conds_1189 = NULL;
if ((F->hs_446 == NULL)) {
f_gen_statements_439(F->up, F->stmts_445);
goto ret_;
}
f_new_name_188(F->up, rt_str("xf", 2), &F->f_1183);
f_new_name_188(F->up, rt_str("x", 1), &F->x_1184);
f_push_cleanup_443(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1183))), rt_str(");", 2)));
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str("{ rt_frame ", 11), (*(P133)rt_nil_check(F->f_1183))), 59));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->f_1183))), rt_str(")) {", 4)));
f_gen_statements_439(F->up, F->stmts_445);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1183))), rt_str(");", 2)));
f_emit_208(F->up, rt_str("} else {", 8));
f_pop_cleanup_444(F->up);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1183))), rt_str(");", 2)));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->x_1184))), rt_str(" = rt_xcur;", 11)));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (rt_g_aborted()) rt_raise(", 29), (*(P133)rt_nil_check(F->x_1184))), rt_str(");", 2)));
F->up->handlers_146 = ({ R145 *cell1190 = rt_alloc(sizeof(R145)); *cell1190 = cp_R145(({ R145 ag1191; ag1191.s_ = F->x_1184; ag1191.next_ = F->up->handlers_146; ag1191; })); (P144)cell1190; });
F->h_1185 = F->hs_446;
while ((F->h_1185 != NULL)) {
F->n_1186 = (*(P163)rt_nil_check(F->h_1185)).a_;
F->conds_1189 = f_mk_185(F->up, rt_str("0", 1));
while ((F->n_1186 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1186)).name_)), rt_str("OTHERS", 6))) {
F->has_others_1188 = 1;
F->conds_1189 = f_mk_185(F->up, rt_str("1", 1));
} else {
F->up->prefix_hint_176 = (*(P163)rt_nil_check(F->n_1186)).tag_;
f_exc_id_452(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1186)).name_)), (*(P163)rt_nil_check(F->h_1185)).line_, &F->f_1183);
F->conds_1189 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1189)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->x_1184))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->f_1183))));
}
F->n_1186 = (*(P163)rt_nil_check(F->n_1186)).next_;
}
L_end_1193: ;
if (F->first_1187) {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1189))), rt_str(") {", 3)));
} else {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1189))), rt_str(") {", 3)));
}
F->first_1187 = 0;
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->h_1185)).b_);
F->h_1185 = (*(P163)rt_nil_check(F->h_1185)).next_;
}
L_end_1192: ;
if ((!F->has_others_1188)) {
f_emit_208(F->up, rt_str("} else {", 8));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1184))), rt_str(");", 2)));
}
f_emit_208(F->up, rt_str("}", 1));
F->up->handlers_146 = (*(P144)rt_nil_check(F->up->handlers_146)).next_;
f_emit_208(F->up, rt_str("}", 1));
f_emit_208(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_exc_id_452(struct f_greenc_1fr *up_, rstr name_449, rt_int line_450, P133 *r_451) {
  struct f_exc_id_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_449 = rt_str_copy(name_449);
F->line_450 = line_450;
F->r_451 = r_451;
F->y_1194 = NULL;
F->y_1194 = f_lookup_326(F->up, F->name_449);
if ((F->up->prefix_hint_176 != NULL)) {
F->y_1194 = f_member_of_594(F->up, (*(P133)rt_nil_check(F->up->prefix_hint_176)), F->name_449, F->line_450);
F->up->prefix_hint_176 = NULL;
}
if (((F->y_1194 == NULL) || ((*(P110)rt_nil_check(F->y_1194)).kind_ != ((rt_int)6LL)))) {
f_fail_202(F->up, F->line_450, rt_str_cat(F->name_449, rt_str(" is not an exception", 20)));
}
(*F->r_451) = (*(P110)rt_nil_check(F->y_1194)).cname_;
ret_:

  return;
}

static void f_gen_statement_454(struct f_greenc_1fr *up_, P163 s_453) {
  struct f_gen_statement_454fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_453 = s_453;
F->t_1195 = NULL;
F->vt_1196 = NULL;
F->c_1197 = NULL;
F->lv_1198 = NULL;
F->v_1199 = NULL;
F->x_1200 = NULL;
{ rt_int sel1202 = (*(P163)rt_nil_check(F->s_453)).kind_;
if (0 || sel1202 == ((rt_int)20LL)) {
if (((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_453)).a_)).kind_ == ((rt_int)8LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_453)).a_)).b_ != NULL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_453)).a_)).b_)).kind_ == ((rt_int)14LL)))) {
f_slice_assign_456(F->up, F->s_453);
goto ret_;
}
F->up->in_lv_path_181 = 1;
F->up->last_deref_182 = 0;
f_lvalue_494(F->up, (*(P163)rt_nil_check(F->s_453)).a_, &F->lv_1198, &F->t_1195, &F->c_1197, &F->ro_1201);
F->up->in_lv_path_181 = 0;
if (F->ro_1201) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_453)).line_, rt_str("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_752(F->up, (*(P163)rt_nil_check(F->s_453)).a_, (*(P163)rt_nil_check(F->s_453)).line_);
F->up->vrp_ok_180 = 1;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_453)).b_, F->t_1195, &F->vt_1196, &F->v_1199);
F->up->vrp_ok_180 = 0;
f_check_type_359(F->up, F->vt_1196, F->t_1195, (*(P163)rt_nil_check(F->s_453)).line_);
f_assign_code_399(F->up, (*(P133)rt_nil_check(F->lv_1198)), F->t_1195, (*(P133)rt_nil_check(F->v_1199)), F->c_1197, &F->x_1200);
f_emit_208(F->up, (*(P133)rt_nil_check(F->x_1200)));
} else if (0 || sel1202 == ((rt_int)21LL)) {
F->up->vrp_ok_180 = 1;
f_gen_call_458(F->up, F->s_453);
F->up->vrp_ok_180 = 0;
} else if (0 || sel1202 == ((rt_int)22LL)) {
f_gen_if_460(F->up, F->s_453);
} else if (0 || sel1202 == ((rt_int)23LL)) {
f_gen_case_462(F->up, F->s_453);
} else if (0 || sel1202 == ((rt_int)24LL)) {
f_gen_loop_468(F->up, F->s_453);
} else if (0 || sel1202 == ((rt_int)25LL)) {
f_gen_block_470(F->up, F->s_453);
} else if (0 || sel1202 == ((rt_int)26LL)) {
f_gen_exit_472(F->up, F->s_453);
} else if (0 || sel1202 == ((rt_int)27LL)) {
f_gen_return_474(F->up, F->s_453);
} else if (0 || sel1202 == ((rt_int)28LL)) {
if (((((*(P163)rt_nil_check(F->s_453)).tag_ != NULL) && f_is_task_name_657(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_453)).tag_)))) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_453)).name_)), rt_str("FAILURE", 7)))) {
f_task_failure_705(F->up, F->s_453);
} else {
F->up->prefix_hint_176 = (*(P163)rt_nil_check(F->s_453)).tag_;
f_exc_id_452(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_453)).name_)), (*(P163)rt_nil_check(F->s_453)).line_, &F->x_1200);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1200))), rt_str(");", 2)));
}
} else if (0 || sel1202 == ((rt_int)29LL)) {
if ((F->up->handlers_146 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_453)).line_, rt_str("raise; outside an exception handler", 35));
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check((*(P144)rt_nil_check(F->up->handlers_146)).s_))), rt_str(");", 2)));
} else if (0 || sel1202 == ((rt_int)30LL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_453)).a_, F->up->ty_bool_150, &F->vt_1196, &F->v_1199);
f_check_type_359(F->up, F->vt_1196, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_453)).line_);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (!(", 6), (*(P133)rt_nil_check(F->v_1199))), rt_str(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1202 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_747(F->up, F->s_453);
}
}
ret_:

  return;
}

static void f_slice_assign_456(struct f_greenc_1fr *up_, P163 s_455) {
  struct f_slice_assign_456fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_455 = s_455;
F->lv_1203 = NULL;
F->lo_1204 = NULL;
F->hi_1205 = NULL;
F->v_1206 = NULL;
F->t_1207 = NULL;
F->vt_1208 = NULL;
F->c_1209 = NULL;
F->up->in_lv_path_181 = 1;
F->up->last_deref_182 = 0;
f_lvalue_494(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_455)).a_)).a_, &F->lv_1203, &F->t_1207, &F->c_1209, &F->ro_1210);
F->up->in_lv_path_181 = 0;
if ((F->ro_1210 || ((*(P115)rt_nil_check(F->t_1207)).kind_ != ((rt_int)5LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_455)).line_, rt_str("assignment to a slice needs a STRING variable", 45));
}
f_check_pure_target_752(F->up, (*(P163)rt_nil_check(F->s_455)).a_, (*(P163)rt_nil_check(F->s_455)).line_);
f_gexpr_522(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_455)).a_)).b_)).a_, F->up->ty_int_149, &F->vt_1208, &F->lo_1204);
f_gexpr_522(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->s_455)).a_)).b_)).b_, F->up->ty_int_149, &F->vt_1208, &F->hi_1205);
F->up->vrp_ok_180 = 1;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_455)).b_, F->up->ty_string_153, &F->vt_1208, &F->v_1206);
F->up->vrp_ok_180 = 0;
f_check_type_359(F->up, F->vt_1208, F->up->ty_string_153, (*(P163)rt_nil_check(F->s_455)).line_);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P133)rt_nil_check(F->lv_1203))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1204))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1205))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->v_1206))), rt_str(");", 2)));
ret_:

  return;
}

static void f_gen_call_458(struct f_greenc_1fr *up_, P163 s_457) {
  struct f_gen_call_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_457 = s_457;
F->c_1211 = NULL;
F->c_1211 = (*(P163)rt_nil_check(F->s_457)).a_;
F->t_1212 = NULL;
F->v_1213 = NULL;
if ((((*(P163)rt_nil_check(F->c_1211)).kind_ == ((rt_int)5LL)) || ((*(P163)rt_nil_check(F->c_1211)).kind_ == ((rt_int)9LL)))) {
F->c_1211 = f_nn_227(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->s_457)).line_);
(*(P163)rt_nil_check(F->c_1211)).a_ = (*(P163)rt_nil_check(F->s_457)).a_;
}
if (((*(P163)rt_nil_check(F->c_1211)).kind_ != ((rt_int)8LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_457)).line_, rt_str("not a procedure call", 20));
}
f_gcall_576(F->up, F->c_1211, 1, &F->t_1212, &F->v_1213);
f_emit_208(F->up, rt_str_catc((*(P133)rt_nil_check(F->v_1213)), 59));
ret_:

  return;
}

static void f_gen_if_460(struct f_greenc_1fr *up_, P163 s_459) {
  struct f_gen_if_460fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_459 = s_459;
F->a_1214 = NULL;
F->a_1214 = (*(P163)rt_nil_check(F->s_459)).a_;
F->first_1215 = 1;
F->t_1216 = NULL;
F->v_1217 = NULL;
while ((F->a_1214 != NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->a_1214)).a_, F->up->ty_bool_150, &F->t_1216, &F->v_1217);
f_check_type_359(F->up, F->t_1216, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_459)).line_);
if (F->first_1215) {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1217))), rt_str(") {", 3)));
} else {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->v_1217))), rt_str(") {", 3)));
}
F->first_1215 = 0;
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->a_1214)).b_);
F->a_1214 = (*(P163)rt_nil_check(F->a_1214)).next_;
}
L_end_1218: ;
if (((*(P163)rt_nil_check(F->s_459)).flag_ == ((rt_int)1LL))) {
f_emit_208(F->up, rt_str("} else {", 8));
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->s_459)).b_);
}
f_emit_208(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_gen_case_462(struct f_greenc_1fr *up_, P163 s_461) {
  struct f_gen_case_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_461 = s_461;
F->st_1219 = NULL;
F->vt_1220 = NULL;
F->first_1221 = 1;
F->a_1222 = NULL;
F->a_1222 = (*(P163)rt_nil_check(F->s_461)).b_;
F->lab_1223 = NULL;
F->sel_1224 = NULL;
F->tmp_1225 = NULL;
F->ct_1226 = NULL;
F->conds_1227 = NULL;
F->v_1228 = NULL;
F->lo_1229 = NULL;
F->hi_1230 = NULL;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_461)).a_, NULL, &F->st_1219, &F->sel_1224);
f_new_name_188(F->up, rt_str("sel", 3), &F->tmp_1225);
f_ctype_364(F->up, F->st_1219, &F->ct_1226);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ ", 2), (*(P133)rt_nil_check(F->ct_1226))), 32), (*(P133)rt_nil_check(F->tmp_1225))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->sel_1224))), 59));
while ((F->a_1222 != NULL)) {
F->lab_1223 = (*(P163)rt_nil_check(F->a_1222)).a_;
F->conds_1227 = f_mk_185(F->up, rt_str("0", 1));
while ((F->lab_1223 != NULL)) {
if (((*(P163)rt_nil_check(F->lab_1223)).b_ == NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->lab_1223)).a_, F->st_1219, &F->vt_1220, &F->v_1228);
f_check_type_359(F->up, F->vt_1220, F->st_1219, (*(P163)rt_nil_check(F->s_461)).line_);
F->conds_1227 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1227)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->tmp_1225))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->v_1228))));
} else {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->lab_1223)).a_, F->st_1219, &F->vt_1220, &F->lo_1229);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->lab_1223)).b_, F->st_1219, &F->vt_1220, &F->hi_1230);
F->conds_1227 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1227)), rt_str(" || (", 5)), (*(P133)rt_nil_check(F->tmp_1225))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1229))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->tmp_1225))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hi_1230))), 41));
}
F->lab_1223 = (*(P163)rt_nil_check(F->lab_1223)).next_;
}
L_end_1232: ;
if (F->first_1221) {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1227))), rt_str(") {", 3)));
} else {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1227))), rt_str(") {", 3)));
}
F->first_1221 = 0;
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->a_1222)).b_);
F->a_1222 = (*(P163)rt_nil_check(F->a_1222)).next_;
}
L_end_1231: ;
if (F->first_1221) {
f_emit_208(F->up, rt_str("{", 1));
} else {
f_emit_208(F->up, rt_str("} else {", 8));
}
if (((*(P163)rt_nil_check(F->s_461)).flag_ == ((rt_int)1LL))) {
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->s_461)).c_);
} else {
f_emit_208(F->up, rt_str("rt_raise(RT_X_CASE);", 20));
}
f_emit_208(F->up, rt_str("}", 1));
f_emit_208(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_push_exit_466(struct f_greenc_1fr *up_, P133 match_463, int is_loop_464, P133 *label_465) {
  struct f_push_exit_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_463 = match_463;
F->is_loop_464 = is_loop_464;
F->label_465 = label_465;
f_new_name_188(F->up, rt_str("L_end_", 6), &(*F->label_465));
F->up->exits_138 = ({ R137 *cell1233 = rt_alloc(sizeof(R137)); *cell1233 = cp_R137(({ R137 ag1234; ag1234.match_ = F->match_463; ag1234.label_ = (*F->label_465); ag1234.depth_ = F->up->frames_143; ag1234.is_loop_ = F->is_loop_464; ag1234.next_ = F->up->exits_138; ag1234; })); (P136)cell1233; });
ret_:

  return;
}

static void f_gen_loop_468(struct f_greenc_1fr *up_, P163 s_467) {
  struct f_gen_loop_468fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_467 = s_467;
F->t_1235 = NULL;
F->vt_1236 = NULL;
F->c_1237 = NULL;
F->label_1238 = NULL;
F->cond_1239 = NULL;
F->acc_1240 = NULL;
F->lov_1241 = NULL;
F->hiv_1242 = NULL;
F->it_1243 = NULL;
F->y_1244 = NULL;
F->r_1245 = NULL;
f_push_exit_466(F->up, (*(P163)rt_nil_check(F->s_467)).tag_, 1, &F->label_1238);
if (((*(P163)rt_nil_check(F->s_467)).flag_ == ((rt_int)0LL))) {
f_emit_208(F->up, rt_str("for (;;) {", 10));
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->s_467)).b_);
f_emit_208(F->up, rt_str("}", 1));
} else if (((*(P163)rt_nil_check(F->s_467)).flag_ == ((rt_int)1LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_467)).a_, F->up->ty_bool_150, &F->vt_1236, &F->cond_1239);
f_check_type_359(F->up, F->vt_1236, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_467)).line_);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("while (", 7), (*(P133)rt_nil_check(F->cond_1239))), rt_str(") {", 3)));
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->s_467)).b_);
f_emit_208(F->up, rt_str("}", 1));
} else {
F->r_1245 = (*(P163)rt_nil_check(F->s_467)).a_;
F->c_1237 = f_new_cons_353(F->up);
if (((*(P163)rt_nil_check(F->r_1245)).kind_ == ((rt_int)14LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1245)).a_, NULL, &F->t_1235, &(*(P170)rt_nil_check(F->c_1237)).lo_);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1245)).b_, F->t_1235, &F->vt_1236, &(*(P170)rt_nil_check(F->c_1237)).hi_);
f_check_type_359(F->up, F->vt_1236, F->t_1235, (*(P163)rt_nil_check(F->s_467)).line_);
} else {
f_resolve_380(F->up, F->r_1245, &F->t_1235, &F->c_1237);
if (((*(P170)rt_nil_check(F->c_1237)).lo_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_467)).line_, rt_str("a FOR loop needs a discrete range", 33));
}
}
f_storage_418(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_467)).name_)), F->t_1235, &F->acc_1240);
f_new_name_188(F->up, rt_str("lo", 2), &F->lov_1241);
f_new_name_188(F->up, rt_str("hi", 2), &F->hiv_1242);
f_new_name_188(F->up, rt_str("it", 2), &F->it_1243);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), (*(P133)rt_nil_check(F->lov_1241))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1237)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hiv_1242))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1237)).hi_))), 59));
if (((*(P163)rt_nil_check(F->s_467)).ival_ == ((rt_int)1LL))) {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1243))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->hiv_1242))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1243))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lov_1241))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1243))), rt_str("--) {", 5)));
} else {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1243))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->lov_1241))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1243))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hiv_1242))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1243))), rt_str("++) {", 5)));
}
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1240)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->it_1243))), 59));
f_open_scope_346(F->up);
F->y_1244 = f_new_sym_350(F->up, ((rt_int)2LL), (*(P163)rt_nil_check(F->s_467)).name_);
(*(P110)rt_nil_check(F->y_1244)).t_ = F->t_1235;
(*(P110)rt_nil_check(F->y_1244)).ro_ = 1;
f_bind_421(F->up, F->y_1244, F->acc_1240);
f_define_345(F->up, F->y_1244, (*(P163)rt_nil_check(F->s_467)).line_);
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->s_467)).b_);
f_close_scope_347(F->up);
f_emit_208(F->up, rt_str("}", 1));
f_emit_208(F->up, rt_str("}", 1));
}
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_208(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1238)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_470(struct f_greenc_1fr *up_, P163 s_469) {
  struct f_gen_block_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_469 = s_469;
F->label_1246 = NULL;
F->aw_1247 = NULL;
f_push_exit_466(F->up, (*(P163)rt_nil_check(F->s_469)).tag_, 0, &F->label_1246);
f_emit_208(F->up, rt_str("{", 1));
f_open_scope_346(F->up);
f_decl_elements_430(F->up, (*(P163)rt_nil_check(F->s_469)).a_);
f_guarded_448(F->up, (*(P163)rt_nil_check(F->s_469)).b_, (*(P163)rt_nil_check(F->s_469)).c_, (*(P163)rt_nil_check(F->s_469)).line_);
f_task_awaits_703(F->up, (*(P163)rt_nil_check(F->s_469)).a_, &F->aw_1247);
f_emit_208(F->up, (*(P133)rt_nil_check(F->aw_1247)));
f_close_scope_347(F->up);
f_emit_208(F->up, rt_str("}", 1));
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_208(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1246)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_472(struct f_greenc_1fr *up_, P163 s_471) {
  struct f_gen_exit_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_471 = s_471;
F->x_1248 = NULL;
F->x_1248 = F->up->exits_138;
F->t_1249 = NULL;
F->v_1250 = NULL;
while ((F->x_1248 != NULL)) {
if (((F->up->accept_depth_161 > ((rt_int)0LL)) && (F->x_1248 == F->up->accept_exits_142))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_471)).line_, rt_str("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((((*(P163)rt_nil_check(F->s_471)).name_ == NULL) && (*(P136)rt_nil_check(F->x_1248)).is_loop_) || ((((*(P163)rt_nil_check(F->s_471)).name_ != NULL) && ((*(P136)rt_nil_check(F->x_1248)).match_ != NULL)) && rt_str_eq((*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1248)).match_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_471)).name_)))))) {
if (((*(P163)rt_nil_check(F->s_471)).a_ != NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_471)).a_, F->up->ty_bool_150, &F->t_1249, &F->v_1250);
f_check_type_359(F->up, F->t_1249, F->up->ty_bool_150, (*(P163)rt_nil_check(F->s_471)).line_);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1250))), rt_str(") {", 3)));
}
f_pop_frames_441(F->up, (*(P136)rt_nil_check(F->x_1248)).depth_);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str("goto ", 5), (*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1248)).label_))), 59));
if (((*(P163)rt_nil_check(F->s_471)).a_ != NULL)) {
f_emit_208(F->up, rt_str("}", 1));
}
goto ret_;
}
F->x_1248 = (*(P136)rt_nil_check(F->x_1248)).next_;
}
L_end_1251: ;
if (((*(P163)rt_nil_check(F->s_471)).name_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_471)).line_, rt_str("exit outside a loop", 19));
}
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_471)).line_, rt_str_cat(rt_str_cat(rt_str("exit ", 5), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_471)).name_))), rt_str(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_474(struct f_greenc_1fr *up_, P163 s_473) {
  struct f_gen_return_474fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_473 = s_473;
F->vt_1252 = NULL;
F->v_1253 = NULL;
if ((!F->up->in_func_131)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_473)).line_, rt_str("return outside a subprogram", 27));
}
if ((F->up->accept_depth_161 > ((rt_int)0LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_473)).line_, rt_str("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).result_)).kind_ == ((rt_int)9LL))) {
if (((*(P163)rt_nil_check(F->s_473)).a_ != NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_473)).line_, rt_str("a procedure returns no value", 28));
}
f_pop_frames_441(F->up, ((rt_int)0LL));
f_emit_208(F->up, rt_str("goto ret_;", 10));
goto ret_;
}
if (((*(P163)rt_nil_check(F->s_473)).a_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_473)).line_, rt_str("return needs a value here", 25));
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_473)).a_, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, &F->vt_1252, &F->v_1253);
f_check_type_359(F->up, F->vt_1252, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, (*(P163)rt_nil_check(F->s_473)).line_);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str("F->result_ = ", 13), (*(P133)rt_nil_check(F->v_1253))), 59));
f_pop_frames_441(F->up, ((rt_int)0LL));
f_emit_208(F->up, rt_str("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_477(struct f_greenc_1fr *up_, P110 y_475, P133 *r_476) {
  struct f_access_of_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_475 = y_475;
F->r_476 = r_476;
F->p_1254 = NULL;
if (((*(P110)rt_nil_check(F->y_475)).level_ <= ((rt_int)0LL))) {
(*F->r_476) = (*(P110)rt_nil_check(F->y_475)).access_path_;
goto ret_;
}
F->p_1254 = f_mk_185(F->up, rt_str("F", 1));
{ rt_int lo1257 = ((rt_int)1LL), hi1258 = rt_sub(F->up->cur_level_132, (*(P110)rt_nil_check(F->y_475)).level_);
for (rt_int it1259 = lo1257; it1259 <= hi1258; it1259++) {
F->i_1256 = it1259;
F->p_1254 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->p_1254)), rt_str("->up", 4)));
}
}
L_end_1255: ;
if ((*(P110)rt_nil_check(F->y_475)).byref_) {
(*F->r_476) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->p_1254))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_475)).access_path_))), 41));
} else {
(*F->r_476) = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1254)), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_475)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_480(struct f_greenc_1fr *up_, rt_int l_478, P133 *r_479) {
  struct f_link_to_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_478 = l_478;
F->r_479 = r_479;
(*F->r_479) = f_mk_185(F->up, rt_str("F", 1));
{ rt_int lo1262 = ((rt_int)1LL), hi1263 = rt_sub(F->up->cur_level_132, F->l_478);
for (rt_int it1264 = lo1262; it1264 <= hi1263; it1264++) {
F->i_1261 = it1264;
(*F->r_479) = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_479))), rt_str("->up", 4)));
}
}
L_end_1260: ;
ret_:

  return;
}

static rstr f_c_ident_482(struct f_greenc_1fr *up_, rstr s_481) {
  struct f_c_ident_482fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_481 = rt_str_copy(s_481);
if (rt_str_eq(F->s_481, rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("MOD", 3))) {
F->result_ = rt_str("op_mod", 6);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("AND", 3))) {
F->result_ = rt_str("op_and", 6);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("OR", 2))) {
F->result_ = rt_str("op_or", 5);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("XOR", 3))) {
F->result_ = rt_str("op_xor", 6);
goto ret_;
} else if (rt_str_eq(F->s_481, rt_str("NOT", 3))) {
F->result_ = rt_str("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_196(F->up, F->s_481);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_486(struct f_greenc_1fr *up_, rstr base_483, P115 t_484, P133 *r_485) {
  struct f_deref_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_483 = rt_str_copy(base_483);
F->t_484 = t_484;
F->r_485 = r_485;
F->ct_1265 = NULL;
if (F->up->in_lv_path_181) {
F->up->last_deref_182 = 1;
}
f_ctype_364(F->up, F->t_484, &F->ct_1265);
(*F->r_485) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), (*(P133)rt_nil_check(F->ct_1265))), rt_str(")rt_nil_check(", 14)), F->base_483), rt_str("))", 2)));
ret_:

  return;
}

static int f_is_object_488(struct f_greenc_1fr *up_, P163 e_487) {
  struct f_is_object_488fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_487 = e_487;
F->y_1266 = NULL;
if (((*(P163)rt_nil_check(F->e_487)).kind_ == ((rt_int)5LL))) {
F->y_1266 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_487)).name_)));
F->result_ = ((F->y_1266 != NULL) && (((*(P110)rt_nil_check(F->y_1266)).kind_ == ((rt_int)1LL)) || ((*(P110)rt_nil_check(F->y_1266)).kind_ == ((rt_int)2LL))));
goto ret_;
} else if (((*(P163)rt_nil_check(F->e_487)).kind_ == ((rt_int)9LL))) {
F->result_ = f_is_object_488(F->up, (*(P163)rt_nil_check(F->e_487)).a_);
goto ret_;
} else if (((*(P163)rt_nil_check(F->e_487)).kind_ == ((rt_int)8LL))) {
if ((((*(P163)rt_nil_check(F->e_487)).b_ != NULL) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_487)).b_)).kind_ == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_488(F->up, (*(P163)rt_nil_check(F->e_487)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_494(struct f_greenc_1fr *up_, P163 e_489, P133 *code_out_490, P115 *t_491, P170 *c_492, int *ro_493) {
  struct f_lvalue_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_489 = e_489;
F->code_out_490 = code_out_490;
F->t_491 = t_491;
F->c_492 = c_492;
F->ro_493 = ro_493;
F->y_1267 = NULL;
F->base_1268 = NULL;
F->bt_1269 = NULL;
F->bc_1270 = NULL;
if ((((*(P163)rt_nil_check(F->e_489)).kind_ == ((rt_int)5LL)) || (((*(P163)rt_nil_check(F->e_489)).kind_ == ((rt_int)9LL)) && f_is_package_590(F->up, (*(P163)rt_nil_check(F->e_489)).a_)))) {
if (((*(P163)rt_nil_check(F->e_489)).kind_ == ((rt_int)9LL))) {
F->y_1267 = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_489)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_489)).name_)), (*(P163)rt_nil_check(F->e_489)).line_);
} else {
F->y_1267 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_489)).name_)));
}
if ((F->y_1267 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_489)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_489)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1267)).kind_ != ((rt_int)1LL)) && ((*(P110)rt_nil_check(F->y_1267)).kind_ != ((rt_int)2LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_489)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_489)).name_)), rt_str(" is not an object", 17)));
}
f_access_of_477(F->up, F->y_1267, &(*F->code_out_490));
(*F->t_491) = (*(P110)rt_nil_check(F->y_1267)).t_;
(*F->c_492) = (*(P110)rt_nil_check(F->y_1267)).c_;
(*F->ro_493) = (*(P110)rt_nil_check(F->y_1267)).ro_;
} else if (((*(P163)rt_nil_check(F->e_489)).kind_ == ((rt_int)15LL))) {
f_lvalue_494(F->up, (*(P163)rt_nil_check(F->e_489)).a_, &(*F->code_out_490), &(*F->t_491), &(*F->c_492), &(*F->ro_493));
} else if (((*(P163)rt_nil_check(F->e_489)).kind_ == ((rt_int)9LL))) {
f_lvalue_494(F->up, (*(P163)rt_nil_check(F->e_489)).a_, &F->base_1268, &F->bt_1269, &F->bc_1270, &(*F->ro_493));
f_select_on_502(F->up, (*(P133)rt_nil_check(F->base_1268)), F->bt_1269, F->e_489, &(*F->ro_493), &(*F->code_out_490), &(*F->t_491), &(*F->c_492));
} else if (((*(P163)rt_nil_check(F->e_489)).kind_ == ((rt_int)8LL))) {
f_lvalue_494(F->up, (*(P163)rt_nil_check(F->e_489)).a_, &F->base_1268, &F->bt_1269, &F->bc_1270, &(*F->ro_493));
f_index_on_511(F->up, (*(P133)rt_nil_check(F->base_1268)), F->bt_1269, F->e_489, &(*F->ro_493), 1, &(*F->code_out_490), &(*F->t_491), &(*F->c_492));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_489)).line_, rt_str("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_502(struct f_greenc_1fr *up_, rstr base_495, P115 bt_496, P163 e_497, int *ro_498, P133 *code_out_499, P115 *t_500, P170 *c_501) {
  struct f_select_on_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_495 = rt_str_copy(base_495);
F->bt_496 = bt_496;
F->e_497 = e_497;
F->ro_498 = ro_498;
F->code_out_499 = code_out_499;
F->t_500 = t_500;
F->c_501 = c_501;
F->f_1271 = NULL;
F->d_1272 = NULL;
(*F->c_501) = F->up->no_cons_172;
if (((*(P115)rt_nil_check(F->bt_496)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_387(F->up, F->bt_496);
f_deref_486(F->up, F->base_495, F->bt_496, &F->d_1272);
(*F->ro_498) = 0;
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_497)).name_)), rt_str("ALL", 3))) {
(*F->code_out_499) = F->d_1272;
(*F->t_500) = (*(P115)rt_nil_check(F->bt_496)).target_;
goto ret_;
}
f_select_on_502(F->up, (*(P133)rt_nil_check(F->d_1272)), (*(P115)rt_nil_check(F->bt_496)).target_, F->e_497, &(*F->ro_498), &(*F->code_out_499), &(*F->t_500), &(*F->c_501));
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_496)).kind_ == ((rt_int)7LL))) {
if (((*(P115)rt_nil_check(F->bt_496)).priv_ && (!f_inside_package_596(F->up, (*(P115)rt_nil_check(F->bt_496)).decl_)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_497)).line_, rt_str_cat(rt_str_cat(rt_str("the components of private type ", 31), f_kind_name_355(F->up, F->bt_496)), rt_str(" are not visible here (RM79 7.4)", 32)));
}
F->f_1271 = (*(P115)rt_nil_check(F->bt_496)).fields_;
while ((F->f_1271 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1271)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_497)).name_)))) {
(*F->c_501) = (*(P1052)rt_nil_check(F->f_1271)).c_;
(*F->code_out_499) = f_mk_185(F->up, rt_str_cat(rt_str_catc(F->base_495, 46), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_497)).name_)))));
(*F->t_500) = (*(P1052)rt_nil_check(F->f_1271)).t_;
goto ret_;
}
F->f_1271 = (*(P1052)rt_nil_check(F->f_1271)).next_;
}
L_end_1273: ;
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_497)).line_, rt_str_cat(rt_str_cat(f_kind_name_355(F->up, F->bt_496), rt_str(" has no component ", 18)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_497)).name_))));
}
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_497)).line_, rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_497)).name_))), rt_str(" here", 5)));
ret_:

  return;
}

static void f_index_on_511(struct f_greenc_1fr *up_, rstr base_503, P115 bt_504, P163 e_505, int *ro_506, int lv_507, P133 *code_out_508, P115 *t_509, P170 *c_510) {
  struct f_index_on_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_503 = rt_str_copy(base_503);
F->bt_504 = bt_504;
F->e_505 = e_505;
F->ro_506 = ro_506;
F->lv_507 = lv_507;
F->code_out_508 = code_out_508;
F->t_509 = t_509;
F->c_510 = c_510;
F->a_1274 = NULL;
F->a_1274 = (*(P163)rt_nil_check(F->e_505)).b_;
F->it_1275 = NULL;
F->i_1276 = NULL;
F->lo_1277 = NULL;
F->hi_1278 = NULL;
F->d_1279 = NULL;
(*F->c_510) = F->up->no_cons_172;
if (((*(P115)rt_nil_check(F->bt_504)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_387(F->up, F->bt_504);
f_deref_486(F->up, F->base_503, F->bt_504, &F->d_1279);
(*F->ro_506) = 0;
f_index_on_511(F->up, (*(P133)rt_nil_check(F->d_1279)), (*(P115)rt_nil_check(F->bt_504)).target_, F->e_505, &(*F->ro_506), F->lv_507, &(*F->code_out_508), &(*F->t_509), &(*F->c_510));
goto ret_;
}
if ((((f_list_len_233(F->up, F->a_1274) == ((rt_int)2LL)) && ((*(P115)rt_nil_check(F->bt_504)).kind_ == ((rt_int)6LL))) && ((*(P115)rt_nil_check(F->bt_504)).idx2_ != NULL))) {
f_gexpr_522(F->up, F->a_1274, (*(P115)rt_nil_check(F->bt_504)).idx_, &F->it_1275, &F->i_1276);
f_check_type_359(F->up, F->it_1275, (*(P115)rt_nil_check(F->bt_504)).idx_, (*(P163)rt_nil_check(F->e_505)).line_);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->a_1274)).next_, (*(P115)rt_nil_check(F->bt_504)).idx2_, &F->it_1275, &F->d_1279);
f_check_type_359(F->up, F->it_1275, (*(P115)rt_nil_check(F->bt_504)).idx2_, (*(P163)rt_nil_check(F->e_505)).line_);
(*F->code_out_508) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_503, rt_str(".p[(rt_index(", 13)), (*(P133)rt_nil_check(F->i_1276))), rt_str(", ", 2)), F->base_503), rt_str(".lo, ", 5)), F->base_503), rt_str(".hi) - ", 7)), F->base_503), rt_str(".lo) * (", 8)), F->base_503), rt_str(".hi2 - ", 7)), F->base_503), rt_str(".lo2 + 1) + rt_index(", 21)), (*(P133)rt_nil_check(F->d_1279))), rt_str(", ", 2)), F->base_503), rt_str(".lo2, ", 6)), F->base_503), rt_str(".hi2) - ", 8)), F->base_503), rt_str(".lo2]", 5)));
(*F->t_509) = (*(P115)rt_nil_check(F->bt_504)).elem_;
(*F->c_510) = (*(P115)rt_nil_check(F->bt_504)).elemcons_;
goto ret_;
}
if ((f_list_len_233(F->up, F->a_1274) != ((rt_int)1LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_505)).line_, rt_str("one index expected", 18));
}
if (((*(P115)rt_nil_check(F->bt_504)).kind_ == ((rt_int)5LL))) {
if (((*(P163)rt_nil_check(F->a_1274)).kind_ == ((rt_int)14LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->a_1274)).a_, F->up->ty_int_149, &F->it_1275, &F->lo_1277);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->a_1274)).b_, F->up->ty_int_149, &F->it_1275, &F->hi_1278);
(*F->code_out_508) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), F->base_503), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1277))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1278))), 41));
(*F->t_509) = F->up->ty_string_153;
(*F->ro_506) = 1;
goto ret_;
}
f_gexpr_522(F->up, F->a_1274, F->up->ty_int_149, &F->it_1275, &F->i_1276);
(*F->t_509) = F->up->ty_char_152;
if (F->lv_507) {
(*F->code_out_508) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), F->base_503), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1276))), rt_str("))", 2)));
} else {
(*F->code_out_508) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), F->base_503), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1276))), 41));
(*F->ro_506) = 1;
}
goto ret_;
}
if ((((*(P115)rt_nil_check(F->bt_504)).kind_ == ((rt_int)6LL)) && ((*(P163)rt_nil_check(F->a_1274)).kind_ == ((rt_int)14LL)))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->a_1274)).a_, (*(P115)rt_nil_check(F->bt_504)).idx_, &F->it_1275, &F->lo_1277);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->a_1274)).b_, (*(P115)rt_nil_check(F->bt_504)).idx_, &F->it_1275, &F->hi_1278);
f_ctype_364(F->up, F->bt_504, &F->d_1279);
(*F->code_out_508) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->d_1279))), rt_str(" s_ = ", 6)), F->base_503), rt_str("; rt_int l_ = ", 14)), (*(P133)rt_nil_check(F->lo_1277))), rt_str(", h_ = ", 7)), (*(P133)rt_nil_check(F->hi_1278))), rt_str("; if (l_ <= h_) { rt_index(l_, s_.lo, s_.hi); rt_index(h_, s_.lo, s_.hi); }", 75)), rt_str(" s_.p += l_ - s_.lo; s_.lo = l_; s_.hi = h_; s_; })", 51)));
(*F->t_509) = F->bt_504;
(*F->ro_506) = 1;
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_504)).kind_ == ((rt_int)6LL))) {
f_gexpr_522(F->up, F->a_1274, (*(P115)rt_nil_check(F->bt_504)).idx_, &F->it_1275, &F->i_1276);
f_check_type_359(F->up, F->it_1275, (*(P115)rt_nil_check(F->bt_504)).idx_, (*(P163)rt_nil_check(F->e_505)).line_);
(*F->code_out_508) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_503, rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->i_1276))), rt_str(", ", 2)), F->base_503), rt_str(".lo, ", 5)), F->base_503), rt_str(".hi) - ", 7)), F->base_503), rt_str(".lo]", 4)));
(*F->t_509) = (*(P115)rt_nil_check(F->bt_504)).elem_;
(*F->c_510) = (*(P115)rt_nil_check(F->bt_504)).elemcons_;
goto ret_;
}
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_505)).line_, rt_str("cannot index this", 17));
ret_:

  return;
}

static int f_is_char_lit_513(struct f_greenc_1fr *up_, P163 e_512) {
  struct f_is_char_lit_513fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_512 = e_512;
F->result_ = (((*(P163)rt_nil_check(F->e_512)).kind_ == ((rt_int)3LL)) && (((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_512)).name_))).len == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_515(struct f_greenc_1fr *up_, P163 e_514) {
  struct f_is_enum_lit_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_514 = e_514;
F->y_1280 = NULL;
if (((*(P163)rt_nil_check(F->e_514)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1280 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_514)).name_)));
F->result_ = ((F->y_1280 != NULL) && ((*(P110)rt_nil_check(F->y_1280)).kind_ == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_string_517(struct f_greenc_1fr *up_, rstr s_516) {
  struct f_c_string_517fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_516 = rt_str_copy(s_516);
F->n_1281 = ((rt_int)0LL);
{ rt_int lo1284 = ((rt_int)1LL), hi1285 = (F->s_516).len;
for (rt_int it1286 = lo1284; it1286 <= hi1285; it1286++) {
F->i_1283 = it1286;
if ((((rt_str_get(F->s_516, F->i_1283) == 34) || (rt_str_get(F->s_516, F->i_1283) == 92)) || (rt_str_get(F->s_516, F->i_1283) == 63))) {
F->n_1281 = rt_add(F->n_1281, ((rt_int)1LL));
}
}
}
L_end_1282: ;
{
F->r_1288 = rt_str_new((rt_add(rt_add((F->s_516).len, F->n_1281), ((rt_int)2LL)) - ((rt_int)1LL) + 1));
F->j_1289 = ((rt_int)1LL);
(*rt_str_at(&F->r_1288, ((rt_int)1LL))) = 34;
{ rt_int lo1292 = ((rt_int)1LL), hi1293 = (F->s_516).len;
for (rt_int it1294 = lo1292; it1294 <= hi1293; it1294++) {
F->i_1291 = it1294;
F->j_1289 = rt_add(F->j_1289, ((rt_int)1LL));
if ((((rt_str_get(F->s_516, F->i_1291) == 34) || (rt_str_get(F->s_516, F->i_1291) == 92)) || (rt_str_get(F->s_516, F->i_1291) == 63))) {
(*rt_str_at(&F->r_1288, F->j_1289)) = 92;
F->j_1289 = rt_add(F->j_1289, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1288, F->j_1289)) = rt_str_get(F->s_516, F->i_1291);
}
}
L_end_1290: ;
(*rt_str_at(&F->r_1288, rt_add(F->j_1289, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1288;
goto ret_;

}
L_end_1287: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gexpr_522(struct f_greenc_1fr *up_, P163 e_518, P115 want_519, P115 *t_520, P133 *r_521) {
  struct f_gexpr_522fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_518 = e_518;
F->want_519 = want_519;
F->t_520 = t_520;
F->r_521 = r_521;
F->y_1295 = NULL;
F->bt_1296 = NULL;
F->c_1297 = NULL;
F->base_1299 = NULL;
F->a_1300 = NULL;
F->nm_1301 = NULL;
F->saved_lv_1302 = F->up->in_lv_path_181;
F->up->in_lv_path_181 = 0;
f_gexpr_1_527(F->up, F->e_518, F->want_519, &(*F->t_520), &(*F->r_521));
F->up->in_lv_path_181 = F->saved_lv_1302;
ret_:

  return;
}

static void f_gexpr_1_527(struct f_greenc_1fr *up_, P163 e_523, P115 want_524, P115 *t_525, P133 *r_526) {
  struct f_gexpr_1_527fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_523 = e_523;
F->want_524 = want_524;
F->t_525 = t_525;
F->r_526 = r_526;
F->y_1303 = NULL;
F->bt_1304 = NULL;
F->c_1305 = NULL;
F->base_1307 = NULL;
F->a_1308 = NULL;
F->nm_1309 = NULL;
(*F->t_525) = F->up->ty_int_149;
{ rt_int sel1310 = (*(P163)rt_nil_check(F->e_523)).kind_;
if (0 || sel1310 == ((rt_int)1LL)) {
(*F->r_526) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P163)rt_nil_check(F->e_523)).ival_)), rt_str("LL)", 3)));
} else if (0 || sel1310 == ((rt_int)2LL)) {
(*F->t_525) = F->up->ty_float_151;
(*F->r_526) = (*(P163)rt_nil_check(F->e_523)).name_;
} else if (0 || sel1310 == ((rt_int)3LL)) {
if (((f_is_char_lit_513(F->up, F->e_523) && (F->want_524 != NULL)) && (((*(P115)rt_nil_check(F->want_524)).kind_ == ((rt_int)11LL)) || ((*(P115)rt_nil_check(F->want_524)).kind_ == ((rt_int)4LL))))) {
f_char_literal_532(F->up, F->e_523, F->want_524, &(*F->t_525), &(*F->r_526));
} else {
(*F->t_525) = F->up->ty_string_153;
(*F->r_526) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_517(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_523)).name_)))), rt_str(", ", 2)), rt_str_of_int(((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_523)).name_))).len)), 41));
}
} else if (0 || sel1310 == ((rt_int)4LL)) {
(*F->t_525) = F->up->ty_nil_155;
(*F->r_526) = f_mk_185(F->up, rt_str("NULL", 4));
} else if (0 || sel1310 == ((rt_int)15LL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_523)).a_, F->want_524, &(*F->t_525), &(*F->r_526));
} else if (0 || sel1310 == ((rt_int)5LL)) {
f_gen_name_537(F->up, F->e_523, F->want_524, &(*F->t_525), &(*F->r_526));
} else if (0 || sel1310 == ((rt_int)6LL)) {
f_gen_unop_542(F->up, F->e_523, F->want_524, &(*F->t_525), &(*F->r_526));
} else if (0 || sel1310 == ((rt_int)7LL)) {
f_gen_binop_547(F->up, F->e_523, F->want_524, &(*F->t_525), &(*F->r_526));
} else if (0 || sel1310 == ((rt_int)8LL)) {
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1303 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).name_)));
if (((F->y_1303 == NULL) || ((((*(P110)rt_nil_check(F->y_1303)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1303)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_1303)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_177 = F->want_524;
f_gcall_576(F->up, F->e_523, 0, &(*F->t_525), &(*F->r_526));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1303)).kind_ == ((rt_int)5LL))) {
f_conversion_552(F->up, F->e_523, F->y_1303, &(*F->t_525), &(*F->r_526));
goto ret_;
}
} else if ((((((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).kind_ == ((rt_int)9LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_657(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).a_)).a_)).name_)))) && (f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).name_)), (*(P163)rt_nil_check(F->e_523)).line_) != NULL)) && ((*(P110)rt_nil_check(f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).name_)), (*(P163)rt_nil_check(F->e_523)).line_))).kind_ == ((rt_int)3LL)))) {
F->up->call_want_177 = F->want_524;
f_gcall_576(F->up, F->e_523, 0, &(*F->t_525), &(*F->r_526));
goto ret_;
} else if ((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).kind_ == ((rt_int)9LL)) && f_is_package_590(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).a_))) {
F->y_1303 = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).name_)), (*(P163)rt_nil_check(F->e_523)).line_);
if (((F->y_1303 != NULL) && ((((*(P110)rt_nil_check(F->y_1303)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1303)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_1303)).kind_ == ((rt_int)10LL))))) {
F->up->call_want_177 = F->want_524;
f_gcall_576(F->up, F->e_523, 0, &(*F->t_525), &(*F->r_526));
goto ret_;
}
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_523)).a_, NULL, &F->bt_1304, &F->base_1307);
F->ro_1306 = 1;
f_index_on_511(F->up, (*(P133)rt_nil_check(F->base_1307)), F->bt_1304, F->e_523, &F->ro_1306, 0, &(*F->r_526), &(*F->t_525), &F->c_1305);
} else if (0 || sel1310 == ((rt_int)9LL)) {
if (f_is_package_590(F->up, (*(P163)rt_nil_check(F->e_523)).a_)) {
F->nm_1309 = f_nn_227(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_523)).line_);
(*(P163)rt_nil_check(F->nm_1309)).name_ = (*(P163)rt_nil_check(F->e_523)).name_;
(*(P163)rt_nil_check(F->nm_1309)).tag_ = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_523)).a_)).name_;
f_gen_name_537(F->up, F->nm_1309, F->want_524, &(*F->t_525), &(*F->r_526));
goto ret_;
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_523)).a_, NULL, &F->bt_1304, &F->base_1307);
F->ro_1306 = 1;
f_select_on_502(F->up, (*(P133)rt_nil_check(F->base_1307)), F->bt_1304, F->e_523, &F->ro_1306, &(*F->r_526), &(*F->t_525), &F->c_1305);
} else if (0 || sel1310 == ((rt_int)10LL)) {
f_gen_attr_557(F->up, F->e_523, F->want_524, &(*F->t_525), &(*F->r_526));
} else if (0 || sel1310 == ((rt_int)11LL)) {
f_allocator_562(F->up, F->e_523, F->want_524, &(*F->t_525), &(*F->r_526));
} else if (0 || sel1310 == ((rt_int)12LL)) {
f_aggregate_567(F->up, F->e_523, F->want_524, &(*F->t_525), &(*F->r_526));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_523)).line_, rt_str("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_char_literal_532(struct f_greenc_1fr *up_, P163 e_528, P115 want_529, P115 *t_530, P133 *r_531) {
  struct f_char_literal_532fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_528 = e_528;
F->want_529 = want_529;
F->t_530 = t_530;
F->r_531 = r_531;
if (((*(P115)rt_nil_check(F->want_529)).kind_ == ((rt_int)11LL))) {
(*F->t_530) = F->up->ty_char_152;
(*F->r_531) = f_mk_185(F->up, rt_str_of_int(rt_sub(((rt_int)(rt_str_get((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_528)).name_)), ((rt_int)1LL))) + 1), ((rt_int)1LL))));
goto ret_;
}
F->i_1311 = f_lit_index_372(F->up, (*(P115)rt_nil_check(F->want_529)).lits_, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_528)).name_)));
if ((F->i_1311 < ((rt_int)0LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_528)).line_, rt_str_cat(rt_str_cat(rt_str_ccat(34, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_528)).name_))), rt_str("\" is not a literal of ", 22)), f_kind_name_355(F->up, F->want_529)));
}
(*F->t_530) = F->want_529;
(*F->r_531) = f_mk_185(F->up, rt_str_of_int(F->i_1311));
ret_:

  return;
}

static void f_gen_name_537(struct f_greenc_1fr *up_, P163 e_533, P115 want_534, P115 *t_535, P133 *r_536) {
  struct f_gen_name_537fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_533 = e_533;
F->want_534 = want_534;
F->t_535 = t_535;
F->r_536 = r_536;
F->y_1312 = NULL;
F->y_1312 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_)));
F->z_1313 = NULL;
F->call_1314 = NULL;
if (((*(P163)rt_nil_check(F->e_533)).tag_ != NULL)) {
F->y_1312 = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_)), (*(P163)rt_nil_check(F->e_533)).line_);
}
if ((F->y_1312 == NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_)), rt_str("PUT", 3)) || rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_)), rt_str("GET", 3)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_533)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_)), rt_str(" needs an item", 14)));
}
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_533)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1312)).kind_ == ((rt_int)2LL)) && (*(P110)rt_nil_check(F->y_1312)).hasmv_)) {
(*F->t_535) = (*(P110)rt_nil_check(F->y_1312)).t_;
(*F->r_536) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P110)rt_nil_check(F->y_1312)).mvalue_)), rt_str("LL)", 3)));
goto ret_;
}
if ((((*(P110)rt_nil_check(F->y_1312)).kind_ == ((rt_int)1LL)) || ((*(P110)rt_nil_check(F->y_1312)).kind_ == ((rt_int)2LL)))) {
(*F->t_535) = (*(P110)rt_nil_check(F->y_1312)).t_;
f_access_of_477(F->up, F->y_1312, &(*F->r_536));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1312)).kind_ == ((rt_int)7LL))) {
F->z_1313 = F->y_1312;
if ((F->want_534 != NULL)) {
while ((F->z_1313 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1313)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_))) && ((*(P110)rt_nil_check(F->z_1313)).kind_ == ((rt_int)7LL))) && f_same_339(F->up, (*(P110)rt_nil_check(F->z_1313)).t_, F->want_534))) {
goto L_end_1315;
}
F->z_1313 = (*(P110)rt_nil_check(F->z_1313)).chain_;
}
L_end_1315: ;
if ((F->z_1313 == NULL)) {
F->z_1313 = F->y_1312;
}
}
(*F->t_535) = (*(P110)rt_nil_check(F->z_1313)).t_;
(*F->r_536) = f_mk_185(F->up, rt_str_of_int((*(P110)rt_nil_check(F->z_1313)).mvalue_));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1312)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1312)).kind_ == ((rt_int)4LL))) || ((*(P110)rt_nil_check(F->y_1312)).kind_ == ((rt_int)10LL)))) {
F->call_1314 = f_nn_227(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->e_533)).line_);
(*(P163)rt_nil_check(F->call_1314)).a_ = F->e_533;
F->up->call_want_177 = F->want_534;
f_gcall_576(F->up, F->call_1314, 0, &(*F->t_535), &(*F->r_536));
goto ret_;
}
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_533)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_533)).name_)), rt_str(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_542(struct f_greenc_1fr *up_, P163 e_538, P115 want_539, P115 *t_540, P133 *r_541) {
  struct f_gen_unop_542fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_538 = e_538;
F->want_539 = want_539;
F->t_540 = t_540;
F->r_541 = r_541;
F->a_1316 = NULL;
f_user_operator_639(F->up, F->e_538, F->want_539, &(*F->t_540), &(*F->r_541), &F->done_1317);
if (F->done_1317) {
goto ret_;
}
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_538)).name_)), rt_str("NOT", 3))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_538)).a_, F->up->ty_bool_150, &(*F->t_540), &F->a_1316);
f_check_type_359(F->up, (*F->t_540), F->up->ty_bool_150, (*(P163)rt_nil_check(F->e_538)).line_);
(*F->r_541) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->a_1316))), 41));
goto ret_;
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_538)).a_, F->want_539, &(*F->t_540), &F->a_1316);
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_538)).name_)), rt_str("+", 1))) {
(*F->r_541) = F->a_1316;
} else if (((*(P115)rt_nil_check((*F->t_540))).kind_ == ((rt_int)3LL))) {
(*F->r_541) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(-", 2), (*(P133)rt_nil_check(F->a_1316))), 41));
} else {
f_check_type_359(F->up, (*F->t_540), F->up->ty_int_149, (*(P163)rt_nil_check(F->e_538)).line_);
(*F->r_541) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_neg(", 7), (*(P133)rt_nil_check(F->a_1316))), 41));
}
ret_:

  return;
}

static void f_gen_binop_547(struct f_greenc_1fr *up_, P163 e_543, P115 want_544, P115 *t_545, P133 *r_546) {
  struct f_gen_binop_547fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_543 = e_543;
F->want_544 = want_544;
F->t_545 = t_545;
F->r_546 = r_546;
F->op_1318 = rt_str_copy((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_543)).name_)));
F->ta_1319 = NULL;
F->tb_1320 = NULL;
F->hint_1321 = NULL;
F->ct_1322 = NULL;
F->a_1323 = NULL;
F->b_1324 = NULL;
F->x_1325 = NULL;
F->dummy_1326 = NULL;
(*F->t_545) = F->up->ty_bool_150;
f_user_operator_639(F->up, F->e_543, F->want_544, &(*F->t_545), &(*F->r_546), &F->done_1327);
if (F->done_1327) {
goto ret_;
}
if (((rt_str_eq(F->op_1318, rt_str("AND", 3)) || rt_str_eq(F->op_1318, rt_str("OR", 2))) || rt_str_eq(F->op_1318, rt_str("XOR", 3)))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).a_, F->up->ty_bool_150, &F->ta_1319, &F->a_1323);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).b_, F->up->ty_bool_150, &F->tb_1320, &F->b_1324);
f_check_type_359(F->up, F->ta_1319, F->up->ty_bool_150, (*(P163)rt_nil_check(F->e_543)).line_);
f_check_type_359(F->up, F->tb_1320, F->up->ty_bool_150, (*(P163)rt_nil_check(F->e_543)).line_);
if (rt_str_eq(F->op_1318, rt_str("AND", 3))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1323))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("OR", 2))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1323))), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1323))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1324))), 41));
}
goto ret_;
}
if (rt_str_eq(F->op_1318, rt_str("IN", 2))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).a_, NULL, &F->ta_1319, &F->a_1323);
f_gexpr_522(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_543)).b_)).a_, F->ta_1319, &F->tb_1320, &F->b_1324);
f_gexpr_522(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_543)).b_)).b_, F->ta_1319, &F->tb_1320, &F->x_1325);
(*F->r_546) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int m_ = ", 15), (*(P133)rt_nil_check(F->a_1323))), rt_str("; m_ >= ", 8)), (*(P133)rt_nil_check(F->b_1324))), rt_str(" && m_ <= ", 10)), (*(P133)rt_nil_check(F->x_1325))), rt_str("; })", 4)));
goto ret_;
}
if (rt_str_eq(F->op_1318, rt_str("&", 1))) {
if (f_is_char_lit_513(F->up, (*(P163)rt_nil_check(F->e_543)).a_)) {
F->hint_1321 = F->up->ty_char_152;
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).a_, F->hint_1321, &F->ta_1319, &F->a_1323);
F->hint_1321 = NULL;
if (f_is_char_lit_513(F->up, (*(P163)rt_nil_check(F->e_543)).b_)) {
F->hint_1321 = F->up->ty_char_152;
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).b_, F->hint_1321, &F->tb_1320, &F->b_1324);
(*F->t_545) = F->up->ty_string_153;
if ((((*(P115)rt_nil_check(F->ta_1319)).kind_ == ((rt_int)5LL)) && ((*(P115)rt_nil_check(F->tb_1320)).kind_ == ((rt_int)5LL)))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1319)).kind_ == ((rt_int)5LL)) && ((*(P115)rt_nil_check(F->tb_1320)).kind_ == ((rt_int)11LL)))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1319)).kind_ == ((rt_int)11LL)) && ((*(P115)rt_nil_check(F->tb_1320)).kind_ == ((rt_int)5LL)))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1319)).kind_ == ((rt_int)11LL)) && ((*(P115)rt_nil_check(F->tb_1320)).kind_ == ((rt_int)11LL)))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_543)).line_, rt_str("& catenates strings and characters", 34));
}
goto ret_;
}
if (f_is_rel_266(F->up, F->op_1318)) {
if ((((f_is_char_lit_513(F->up, (*(P163)rt_nil_check(F->e_543)).a_) || f_is_enum_lit_515(F->up, (*(P163)rt_nil_check(F->e_543)).a_)) || ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_543)).a_)).kind_ == ((rt_int)4LL))) || ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_543)).a_)).kind_ == ((rt_int)1LL)))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).b_, NULL, &F->hint_1321, &F->dummy_1326);
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).a_, F->hint_1321, &F->ta_1319, &F->a_1323);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).b_, F->ta_1319, &F->tb_1320, &F->b_1324);
F->ct_1322 = F->ta_1319;
if ((((*(P115)rt_nil_check(F->ta_1319)).kind_ != ((rt_int)10LL)) && ((*(P115)rt_nil_check(F->tb_1320)).kind_ != ((rt_int)10LL)))) {
f_check_type_359(F->up, F->tb_1320, F->ta_1319, (*(P163)rt_nil_check(F->e_543)).line_);
}
if (((*(P115)rt_nil_check(F->ta_1319)).kind_ == ((rt_int)10LL))) {
F->ct_1322 = F->tb_1320;
}
if (((*(P115)rt_nil_check(F->ct_1322)).kind_ == ((rt_int)5LL))) {
if (rt_str_eq(F->op_1318, rt_str("=", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("/=", 2))) {
(*F->r_546) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), rt_str("))", 2)));
} else if (rt_str_eq(F->op_1318, rt_str("<", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("<=", 2))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str(">", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->b_1324))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1323))), 41));
} else {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->b_1324))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1323))), 41));
}
goto ret_;
}
if (f_composite_393(F->up, F->ct_1322)) {
f_eq_code_408(F->up, F->ct_1322, (*(P133)rt_nil_check(F->a_1323)), (*(P133)rt_nil_check(F->b_1324)), &F->x_1325);
if (rt_str_eq(F->op_1318, rt_str("=", 1))) {
(*F->r_546) = F->x_1325;
} else if (rt_str_eq(F->op_1318, rt_str("/=", 2))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->x_1325))), 41));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_543)).line_, rt_str("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (rt_str_eq(F->op_1318, rt_str("=", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1323))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("/=", 2))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1323))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1323))), 32), F->op_1318), 32), (*(P133)rt_nil_check(F->b_1324))), 41));
}
goto ret_;
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).a_, F->want_544, &F->ta_1319, &F->a_1323);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_543)).b_, F->ta_1319, &F->tb_1320, &F->b_1324);
if ((((*(P115)rt_nil_check(F->ta_1319)).kind_ == ((rt_int)3LL)) || ((*(P115)rt_nil_check(F->tb_1320)).kind_ == ((rt_int)3LL)))) {
(*F->t_545) = F->up->ty_float_151;
if (((rt_str_eq(F->op_1318, rt_str("+", 1)) || rt_str_eq(F->op_1318, rt_str("-", 1))) || rt_str_eq(F->op_1318, rt_str("*", 1)))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1323))), 32), F->op_1318), 32), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("/", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("**", 2))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_543)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1318), rt_str(" is not defined for FLOAT", 25)));
}
goto ret_;
}
f_check_type_359(F->up, F->ta_1319, F->up->ty_int_149, (*(P163)rt_nil_check(F->e_543)).line_);
f_check_type_359(F->up, F->tb_1320, F->up->ty_int_149, (*(P163)rt_nil_check(F->e_543)).line_);
(*F->t_545) = F->up->ty_int_149;
if (rt_str_eq(F->op_1318, rt_str("+", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("-", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("*", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("/", 1))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_quot(", 8), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("MOD", 3))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_rem(", 7), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else if (rt_str_eq(F->op_1318, rt_str("**", 2))) {
(*F->r_546) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), (*(P133)rt_nil_check(F->a_1323))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1324))), 41));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_543)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1318), rt_str(" is not defined for INTEGER", 27)));
}
ret_:

  return;
}

static void f_conversion_552(struct f_greenc_1fr *up_, P163 e_548, P110 y_549, P115 *t_550, P133 *r_551) {
  struct f_conversion_552fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_548 = e_548;
F->y_549 = y_549;
F->t_550 = t_550;
F->r_551 = r_551;
F->aty_1328 = NULL;
F->a_1329 = NULL;
if ((f_list_len_233(F->up, (*(P163)rt_nil_check(F->e_548)).b_) != ((rt_int)1LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_548)).line_, rt_str("a conversion takes one expression", 33));
}
(*F->t_550) = (*(P110)rt_nil_check(F->y_549)).t_;
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_548)).b_, (*F->t_550), &F->aty_1328, &F->a_1329);
if ((((*(P115)rt_nil_check((*F->t_550))).kind_ == ((rt_int)1LL)) && ((*(P115)rt_nil_check(F->aty_1328)).kind_ == ((rt_int)3LL)))) {
(*F->r_551) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)llround(", 17), (*(P133)rt_nil_check(F->a_1329))), rt_str("))", 2)));
} else if ((((*(P115)rt_nil_check((*F->t_550))).kind_ == ((rt_int)3LL)) && ((*(P115)rt_nil_check(F->aty_1328)).kind_ == ((rt_int)1LL)))) {
(*F->r_551) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((double)(", 10), (*(P133)rt_nil_check(F->a_1329))), rt_str("))", 2)));
} else {
f_check_type_359(F->up, F->aty_1328, (*F->t_550), (*(P163)rt_nil_check(F->e_548)).line_);
if (((((((*(P115)rt_nil_check((*F->t_550))).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check((*F->t_550))).kind_ == ((rt_int)4LL))) || ((*(P115)rt_nil_check((*F->t_550))).kind_ == ((rt_int)11LL))) && ((*(P110)rt_nil_check(F->y_549)).c_ != NULL)) && ((*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_549)).c_)).lo_ != NULL))) {
(*F->r_551) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->a_1329))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_549)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_549)).c_)).hi_))), 41));
} else {
(*F->r_551) = F->a_1329;
}
}
ret_:

  return;
}

static void f_gen_attr_557(struct f_greenc_1fr *up_, P163 e_553, P115 want_554, P115 *t_555, P133 *r_556) {
  struct f_gen_attr_557fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_553 = e_553;
F->want_554 = want_554;
F->t_555 = t_555;
F->r_556 = r_556;
F->a_1330 = rt_str_copy((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_553)).name_)));
F->y_1331 = NULL;
F->tt_1332 = NULL;
F->aty_1333 = NULL;
F->v_1334 = NULL;
F->d_1335 = NULL;
F->c_1336 = NULL;
if (((((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).kind_ == ((rt_int)8LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_657(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).a_)).name_))))) {
f_member_attr_723(F->up, F->e_553, &(*F->t_555), &(*F->r_556));
goto ret_;
}
if (rt_str_eq(F->a_1330, rt_str("ADDRESS", 7))) {
f_lvalue_494(F->up, (*(P163)rt_nil_check(F->e_553)).a_, &F->v_1334, &F->aty_1333, &F->c_1336, &F->ro_1338);
(*F->t_555) = F->up->ty_int_149;
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(intptr_t)&(", 21), (*(P133)rt_nil_check(F->v_1334))), rt_str("))", 2)));
goto ret_;
}
if (((rt_str_eq(F->a_1330, rt_str("COUNT", 5)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->y_1331 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).a_)).name_)));
if ((((F->y_1331 != NULL) && ((*(P110)rt_nil_check(F->y_1331)).kind_ == ((rt_int)10LL))) && ((*(P110)rt_nil_check(F->y_1331)).c_ != NULL))) {
if ((!f_same_task_329(F->up, (*(P110)rt_nil_check(F->y_1331)).members_, F->up->cur_task_160))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_553)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_679(F->up, F->y_1331, rt_str("", 0), &F->v_1334);
f_gexpr_522(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).b_, NULL, &F->aty_1333, &F->d_1335);
f_entry_family_slot_694(F->up, F->y_1331, (*(P133)rt_nil_check(F->v_1334)), (*(P133)rt_nil_check(F->d_1335)), &F->v_1334);
(*F->t_555) = F->up->ty_int_149;
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P133)rt_nil_check(F->v_1334))), 41));
goto ret_;
}
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).kind_ == ((rt_int)5LL))) {
F->y_1331 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).name_)));
if ((((F->y_1331 == NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).name_)), rt_str("SYSTEM", 6))) && rt_str_eq(F->a_1330, rt_str("CLOCK", 5)))) {
(*F->t_555) = F->up->ty_float_151;
(*F->r_556) = f_mk_185(F->up, rt_str("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_1331 == NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_553)).a_)).name_)), rt_str("SYSTEM", 6))) && (rt_str_eq(F->a_1330, rt_str("MAX_PRIORITY", 12)) || rt_str_eq(F->a_1330, rt_str("MIN_PRIORITY", 12))))) {
(*F->t_555) = F->up->ty_int_149;
if (rt_str_eq(F->a_1330, rt_str("MAX_PRIORITY", 12))) {
(*F->r_556) = f_mk_185(F->up, rt_str("((rt_int)255)", 13));
} else {
(*F->r_556) = f_mk_185(F->up, rt_str("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_1331 != NULL) && ((*(P110)rt_nil_check(F->y_1331)).kind_ == ((rt_int)5LL)))) {
F->tt_1332 = (*(P110)rt_nil_check(F->y_1331)).t_;
F->c_1336 = (*(P110)rt_nil_check(F->y_1331)).c_;
if (rt_str_eq(F->a_1330, rt_str("SIZE", 4))) {
f_ctype_364(F->up, F->tt_1332, &F->d_1335);
(*F->t_555) = F->up->ty_int_149;
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(sizeof(", 17), (*(P133)rt_nil_check(F->d_1335))), rt_str(") * 8))", 7)));
goto ret_;
}
if (rt_str_eq(F->a_1330, rt_str("ORD", 3))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_553)).b_, F->tt_1332, &F->aty_1333, &F->v_1334);
f_check_type_359(F->up, F->aty_1333, F->tt_1332, (*(P163)rt_nil_check(F->e_553)).line_);
(*F->t_555) = F->up->ty_int_149;
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (*(P133)rt_nil_check(F->v_1334))), rt_str(") + 1)", 6)));
goto ret_;
} else if ((rt_str_eq(F->a_1330, rt_str("VAL", 3)) && ((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)1LL)))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_553)).b_, F->up->ty_string_153, &F->aty_1333, &F->v_1334);
(*F->t_555) = F->up->ty_int_149;
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_int_of_str(", 14), (*(P133)rt_nil_check(F->v_1334))), 41));
goto ret_;
} else if (rt_str_eq(F->a_1330, rt_str("VAL", 3))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_553)).b_, F->up->ty_int_149, &F->aty_1333, &F->v_1334);
(*F->t_555) = F->tt_1332;
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1334))), rt_str(" - 1, ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1336)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1336)).hi_))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1330, rt_str("REP", 3)) && ((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)1LL)))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_553)).b_, F->up->ty_int_149, &F->aty_1333, &F->v_1334);
(*F->t_555) = F->up->ty_string_153;
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_of_int(", 14), (*(P133)rt_nil_check(F->v_1334))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1330, rt_str("REP", 3)) && ((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)3LL)))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_553)).b_, F->up->ty_float_151, &F->aty_1333, &F->v_1334);
(*F->t_555) = F->up->ty_string_153;
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_image_float(", 17), (*(P133)rt_nil_check(F->v_1334))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1330, rt_str("SUCC", 4)) || rt_str_eq(F->a_1330, rt_str("PRED", 4)))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_553)).b_, F->tt_1332, &F->aty_1333, &F->v_1334);
(*F->t_555) = F->tt_1332;
if (((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1330, rt_str("SUCC", 4))) {
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->v_1334))), rt_str(", 1)", 4)));
} else {
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->v_1334))), rt_str(", 1)", 4)));
}
} else if (rt_str_eq(F->a_1330, rt_str("SUCC", 4))) {
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1334))), rt_str(" + 1, ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1336)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1336)).hi_))), 41));
} else {
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1334))), rt_str(" - 1, ", 6)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1336)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1336)).hi_))), 41));
}
goto ret_;
} else if ((rt_str_eq(F->a_1330, rt_str("FIRST", 5)) || rt_str_eq(F->a_1330, rt_str("LAST", 4)))) {
(*F->t_555) = F->tt_1332;
if (((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)6LL))) {
(*F->t_555) = (*(P115)rt_nil_check(F->tt_1332)).idx_;
}
if (((F->c_1336 != NULL) && ((*(P170)rt_nil_check(F->c_1336)).lo_ != NULL))) {
if (rt_str_eq(F->a_1330, rt_str("FIRST", 5))) {
(*F->r_556) = (*(P170)rt_nil_check(F->c_1336)).lo_;
} else {
(*F->r_556) = (*(P170)rt_nil_check(F->c_1336)).hi_;
}
} else if (((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)1LL))) {
if (rt_str_eq(F->a_1330, rt_str("FIRST", 5))) {
(*F->r_556) = f_mk_185(F->up, rt_str("INT64_MIN", 9));
} else {
(*F->r_556) = f_mk_185(F->up, rt_str("INT64_MAX", 9));
}
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_553)).line_, rt_str_cat(rt_str("this type has no ", 17), F->a_1330));
}
goto ret_;
}
f_other_attr_719(F->up, F->e_553, F->y_1331, &(*F->t_555), &(*F->r_556));
goto ret_;
}
if (((F->y_1331 != NULL) && (((*(P110)rt_nil_check(F->y_1331)).kind_ != ((rt_int)1LL)) && ((*(P110)rt_nil_check(F->y_1331)).kind_ != ((rt_int)2LL))))) {
f_other_attr_719(F->up, F->e_553, F->y_1331, &(*F->t_555), &(*F->r_556));
goto ret_;
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_553)).a_, NULL, &F->tt_1332, &F->v_1334);
if (((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)8LL))) {
f_finish_ptr_387(F->up, F->tt_1332);
f_deref_486(F->up, (*(P133)rt_nil_check(F->v_1334)), F->tt_1332, &F->d_1335);
F->v_1334 = F->d_1335;
F->tt_1332 = (*(P115)rt_nil_check(F->tt_1332)).target_;
}
(*F->t_555) = F->up->ty_int_149;
if (((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)5LL))) {
if ((rt_str_eq(F->a_1330, rt_str("LENGTH", 6)) || rt_str_eq(F->a_1330, rt_str("LAST", 4)))) {
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1334))), rt_str(").len", 5)));
goto ret_;
} else if (rt_str_eq(F->a_1330, rt_str("FIRST", 5))) {
(*F->r_556) = f_mk_185(F->up, rt_str("((rt_int)1)", 11));
goto ret_;
}
} else if (((*(P115)rt_nil_check(F->tt_1332)).kind_ == ((rt_int)6LL))) {
(*F->t_555) = (*(P115)rt_nil_check(F->tt_1332)).idx_;
if (rt_str_eq(F->a_1330, rt_str("FIRST", 5))) {
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1334))), rt_str(").lo", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1330, rt_str("LAST", 4))) {
(*F->r_556) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1334))), rt_str(").hi", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1330, rt_str("LENGTH", 6))) {
(*F->t_555) = F->up->ty_int_149;
(*F->r_556) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("RT_CNT(", 7), (*(P133)rt_nil_check(F->v_1334))), 41));
goto ret_;
}
}
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_553)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1330), rt_str(" is not handled here", 20)));
ret_:

  return;
}

static void f_allocator_562(struct f_greenc_1fr *up_, P163 e_558, P115 want_559, P115 *t_560, P133 *r_561) {
  struct f_allocator_562fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_558 = e_558;
F->want_559 = want_559;
F->t_560 = t_560;
F->r_561 = r_561;
F->y_1339 = NULL;
F->y_1339 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_558)).name_)));
F->target_1340 = NULL;
F->vt_1341 = NULL;
F->ct_1342 = NULL;
F->pt_1343 = NULL;
F->cell_1344 = NULL;
F->v_1345 = NULL;
F->x_1346 = NULL;
if (((F->want_559 == NULL) || ((*(P115)rt_nil_check(F->want_559)).kind_ != ((rt_int)8LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_558)).line_, rt_str("the access type of this allocator is not known here", 51));
}
if (((F->y_1339 == NULL) || ((*(P110)rt_nil_check(F->y_1339)).kind_ != ((rt_int)5LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_558)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_558)).name_)), rt_str(" is not a type", 14)));
}
f_finish_ptr_387(F->up, F->want_559);
F->target_1340 = (*(P115)rt_nil_check(F->want_559)).target_;
if ((!f_same_339(F->up, (*(P110)rt_nil_check(F->y_1339)).t_, F->want_559))) {
f_check_type_359(F->up, (*(P110)rt_nil_check(F->y_1339)).t_, F->target_1340, (*(P163)rt_nil_check(F->e_558)).line_);
}
f_ctype_364(F->up, F->target_1340, &F->ct_1342);
f_ctype_364(F->up, F->want_559, &F->pt_1343);
f_new_name_188(F->up, rt_str("cell", 4), &F->cell_1344);
if (((*(P163)rt_nil_check(F->e_558)).a_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_558)).line_, rt_str("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_178 != NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_558)).line_, rt_str("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_558)).a_)).kind_ == ((rt_int)12LL))) {
f_aggregate_567(F->up, (*(P163)rt_nil_check(F->e_558)).a_, F->target_1340, &F->vt_1341, &F->v_1345);
} else {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->e_558)).a_, F->target_1340, &F->vt_1341, &F->v_1345);
}
f_check_type_359(F->up, F->vt_1341, F->target_1340, (*(P163)rt_nil_check(F->e_558)).line_);
f_copy_code_403(F->up, F->target_1340, (*(P133)rt_nil_check(F->v_1345)), &F->x_1346);
(*F->t_560) = F->want_559;
(*F->r_561) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1342))), rt_str(" *", 2)), (*(P133)rt_nil_check(F->cell_1344))), rt_str(" = rt_alloc(sizeof(", 19)), (*(P133)rt_nil_check(F->ct_1342))), rt_str(")); *", 5)), (*(P133)rt_nil_check(F->cell_1344))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1346))), rt_str("; (", 3)), (*(P133)rt_nil_check(F->pt_1343))), 41), (*(P133)rt_nil_check(F->cell_1344))), rt_str("; })", 4)));
ret_:

  return;
}

static void f_aggregate_567(struct f_greenc_1fr *up_, P163 e_563, P115 want_564, P115 *t_565, P133 *r_566) {
  struct f_aggregate_567fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_563 = e_563;
F->want_564 = want_564;
F->t_565 = t_565;
F->r_566 = r_566;
F->it_1347 = NULL;
F->it_1347 = (*(P163)rt_nil_check(F->e_563)).a_;
F->f_1348 = NULL;
F->vt_1349 = NULL;
F->ct_1350 = NULL;
F->tmp_1351 = NULL;
F->v_1352 = NULL;
F->x_1353 = NULL;
F->parts_1354 = NULL;
F->et_1355 = NULL;
F->lo_1356 = NULL;
F->hi_1357 = NULL;
F->key_1358 = NULL;
F->fill_1359 = NULL;
F->fill_1359 = f_mk_185(F->up, rt_str("", 0));
F->lab_1361 = NULL;
if ((F->want_564 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_563)).line_, rt_str("the type of this aggregate is not known here", 44));
}
(*F->t_565) = F->want_564;
f_ctype_364(F->up, F->want_564, &F->ct_1350);
f_new_name_188(F->up, rt_str("ag", 2), &F->tmp_1351);
if (((*(P115)rt_nil_check(F->want_564)).kind_ == ((rt_int)7LL))) {
F->parts_1354 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1350))), 32), (*(P133)rt_nil_check(F->tmp_1351))), 59));
if ((f_list_len_233(F->up, F->it_1347) != f_field_count_361(F->up, F->want_564))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_563)).line_, rt_str_cat(rt_str("an aggregate gives every component of ", 38), f_kind_name_355(F->up, F->want_564)));
}
F->f_1348 = (*(P115)rt_nil_check(F->want_564)).fields_;
while ((F->it_1347 != NULL)) {
if (((*(P163)rt_nil_check(F->it_1347)).a_ != NULL)) {
F->f_1348 = (*(P115)rt_nil_check(F->want_564)).fields_;
while (((F->f_1348 != NULL) && (!(((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1347)).a_)).a_)).kind_ == ((rt_int)5LL)) && rt_str_eq((*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1348)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1347)).a_)).a_)).name_))))))) {
F->f_1348 = (*(P1052)rt_nil_check(F->f_1348)).next_;
}
L_end_1363: ;
if ((F->f_1348 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_563)).line_, rt_str("no such component in the aggregate", 34));
}
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->it_1347)).b_, (*(P1052)rt_nil_check(F->f_1348)).t_, &F->vt_1349, &F->v_1352);
f_check_type_359(F->up, F->vt_1349, (*(P1052)rt_nil_check(F->f_1348)).t_, (*(P163)rt_nil_check(F->e_563)).line_);
f_copy_code_403(F->up, (*(P1052)rt_nil_check(F->f_1348)).t_, (*(P133)rt_nil_check(F->v_1352)), &F->x_1353);
F->parts_1354 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1354)), 32), (*(P133)rt_nil_check(F->tmp_1351))), 46), f_c_field_198(F->up, (*(P133)rt_nil_check((*(P1052)rt_nil_check(F->f_1348)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1353))), 59));
F->it_1347 = (*(P163)rt_nil_check(F->it_1347)).next_;
if ((F->f_1348 != NULL)) {
F->f_1348 = (*(P1052)rt_nil_check(F->f_1348)).next_;
}
}
L_end_1362: ;
(*F->r_566) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1354)), 32), (*(P133)rt_nil_check(F->tmp_1351))), rt_str("; })", 4)));
goto ret_;
}
if (((*(P115)rt_nil_check(F->want_564)).kind_ != ((rt_int)6LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_563)).line_, rt_str("an aggregate builds a record or an array", 40));
}
f_ctype_364(F->up, (*(P115)rt_nil_check(F->want_564)).elem_, &F->et_1355);
if (((*(P163)rt_nil_check(F->it_1347)).a_ == NULL)) {
if ((((*(P115)rt_nil_check(F->want_564)).tcons_ != NULL) && ((*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_564)).tcons_)).lo_ != NULL))) {
F->lo_1356 = (*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_564)).tcons_)).lo_;
} else {
F->lo_1356 = f_mk_185(F->up, rt_str("1", 1));
}
F->n_1360 = f_list_len_233(F->up, F->it_1347);
F->parts_1354 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1350))), 32), (*(P133)rt_nil_check(F->tmp_1351))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1356))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->lo_1356))), rt_str(" + ", 3)), rt_str_of_int(rt_sub(F->n_1360, ((rt_int)1LL)))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1355))), rt_str(") * ", 4)), rt_str_of_int(rt_add(F->n_1360, ((rt_int)1LL)))), rt_str(");", 2)));
F->n_1360 = ((rt_int)0LL);
while ((F->it_1347 != NULL)) {
if (((*(P163)rt_nil_check(F->it_1347)).a_ != NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_563)).line_, rt_str("named associations follow the positional ones", 45));
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->it_1347)).b_, (*(P115)rt_nil_check(F->want_564)).elem_, &F->vt_1349, &F->v_1352);
f_check_type_359(F->up, F->vt_1349, (*(P115)rt_nil_check(F->want_564)).elem_, (*(P163)rt_nil_check(F->e_563)).line_);
f_copy_code_403(F->up, (*(P115)rt_nil_check(F->want_564)).elem_, (*(P133)rt_nil_check(F->v_1352)), &F->x_1353);
F->parts_1354 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1354)), 32), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".p[", 3)), rt_str_of_int(F->n_1360)), rt_str("] = ", 4)), (*(P133)rt_nil_check(F->x_1353))), 59));
F->n_1360 = rt_add(F->n_1360, ((rt_int)1LL));
F->it_1347 = (*(P163)rt_nil_check(F->it_1347)).next_;
}
L_end_1364: ;
(*F->r_566) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1354)), 32), (*(P133)rt_nil_check(F->tmp_1351))), rt_str("; })", 4)));
goto ret_;
}
if ((((*(P115)rt_nil_check(F->want_564)).tcons_ != NULL) && ((*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_564)).tcons_)).hi_ != NULL))) {
F->lo_1356 = (*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_564)).tcons_)).lo_;
F->hi_1357 = (*(P170)rt_nil_check((*(P115)rt_nil_check(F->want_564)).tcons_)).hi_;
} else if (((((*(P163)rt_nil_check(F->it_1347)).next_ == NULL) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1347)).a_)).flag_ != ((rt_int)1LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1347)).a_)).b_ != NULL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1347)).a_)).a_, (*(P115)rt_nil_check(F->want_564)).idx_, &F->vt_1349, &F->lo_1356);
f_gexpr_522(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->it_1347)).a_)).b_, (*(P115)rt_nil_check(F->want_564)).idx_, &F->vt_1349, &F->hi_1357);
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_563)).line_, rt_str("the bounds of this aggregate are not known", 42));
}
F->parts_1354 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1350))), 32), (*(P133)rt_nil_check(F->tmp_1351))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1356))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->hi_1357))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1355))), rt_str(") * (size_t)(RT_CNT(", 20)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(") + 1));", 8)));
F->n_1360 = ((*(P133)rt_nil_check(F->parts_1354))).len;
while ((F->it_1347 != NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->it_1347)).b_, (*(P115)rt_nil_check(F->want_564)).elem_, &F->vt_1349, &F->v_1352);
f_check_type_359(F->up, F->vt_1349, (*(P115)rt_nil_check(F->want_564)).elem_, (*(P163)rt_nil_check(F->e_563)).line_);
f_copy_code_403(F->up, (*(P115)rt_nil_check(F->want_564)).elem_, (*(P133)rt_nil_check(F->v_1352)), &F->x_1353);
F->lab_1361 = (*(P163)rt_nil_check(F->it_1347)).a_;
while ((F->lab_1361 != NULL)) {
if (((*(P163)rt_nil_check(F->lab_1361)).flag_ == ((rt_int)1LL))) {
F->fill_1359 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int k_ = 0; k_ < RT_CNT(", 33), (*(P133)rt_nil_check(F->tmp_1351))), rt_str("); k_++) ", 9)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".p[k_] = ", 9)), (*(P133)rt_nil_check(F->x_1353))), 59));
} else if (((*(P163)rt_nil_check(F->lab_1361)).b_ != NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->lab_1361)).a_, (*(P115)rt_nil_check(F->want_564)).idx_, &F->vt_1349, &F->key_1358);
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->lab_1361)).b_, (*(P115)rt_nil_check(F->want_564)).idx_, &F->vt_1349, &F->hi_1357);
F->parts_1354 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1354)), rt_str(" for (rt_int k_ = ", 18)), (*(P133)rt_nil_check(F->key_1358))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1357))), rt_str("; k_++) ", 8)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".p[rt_index(k_, ", 16)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1353))), 59));
} else {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->lab_1361)).a_, (*(P115)rt_nil_check(F->want_564)).idx_, &F->vt_1349, &F->key_1358);
F->parts_1354 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1354)), 32), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->key_1358))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1351))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1353))), 59));
}
F->lab_1361 = (*(P163)rt_nil_check(F->lab_1361)).next_;
}
L_end_1366: ;
F->it_1347 = (*(P163)rt_nil_check(F->it_1347)).next_;
}
L_end_1365: ;
(*F->r_566) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_slice((*(P133)rt_nil_check(F->parts_1354)), ((rt_int)1LL), F->n_1360), (*(P133)rt_nil_check(F->fill_1359))), rt_str_slice((*(P133)rt_nil_check(F->parts_1354)), rt_add(F->n_1360, ((rt_int)1LL)), ((*(P133)rt_nil_check(F->parts_1354))).len)), 32), (*(P133)rt_nil_check(F->tmp_1351))), rt_str("; })", 4)));
ret_:

  return;
}

static P163 f_actual_for_571(struct f_greenc_1fr *up_, P163 args_568, P1041 pm_569, P1041 first_570) {
  struct f_actual_for_571fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_568 = args_568;
F->pm_569 = pm_569;
F->first_570 = first_570;
F->a_1367 = NULL;
F->a_1367 = F->args_568;
F->p_1368 = NULL;
F->p_1368 = F->first_570;
while (((F->a_1367 != NULL) && ((*(P163)rt_nil_check(F->a_1367)).tag_ == NULL))) {
if ((F->p_1368 == F->pm_569)) {
F->result_ = F->a_1367;
goto ret_;
}
F->p_1368 = (*(P1041)rt_nil_check(F->p_1368)).next_;
F->a_1367 = (*(P163)rt_nil_check(F->a_1367)).next_;
}
L_end_1369: ;
while ((F->a_1367 != NULL)) {
if ((((*(P163)rt_nil_check(F->a_1367)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1367)).tag_)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_569)).name_))))) {
F->result_ = F->a_1367;
goto ret_;
}
F->a_1367 = (*(P163)rt_nil_check(F->a_1367)).next_;
}
L_end_1370: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_576(struct f_greenc_1fr *up_, P163 e_572, int is_stmt_573, P115 *t_574, P133 *r_575) {
  struct f_gcall_576fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_572 = e_572;
F->is_stmt_573 = is_stmt_573;
F->t_574 = t_574;
F->r_575 = r_575;
F->fn_1371 = NULL;
F->fn_1371 = (*(P163)rt_nil_check(F->e_572)).a_;
F->nm_1372 = NULL;
F->y_1373 = NULL;
F->args_1374 = NULL;
F->lv_1375 = NULL;
F->v_1376 = NULL;
F->ct_1377 = NULL;
F->x_1378 = NULL;
F->a_1379 = NULL;
F->pm_1380 = NULL;
F->lt_1381 = NULL;
F->vt_1382 = NULL;
F->lc_1383 = NULL;
if ((((*(P163)rt_nil_check(F->fn_1371)).kind_ == ((rt_int)9LL)) && f_is_package_590(F->up, (*(P163)rt_nil_check(F->fn_1371)).a_))) {
F->nm_1372 = f_nn_227(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->fn_1371)).line_);
(*(P163)rt_nil_check(F->nm_1372)).name_ = (*(P163)rt_nil_check(F->fn_1371)).name_;
(*(P163)rt_nil_check(F->nm_1372)).tag_ = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).a_)).name_;
F->fn_1371 = F->nm_1372;
} else if ((((((*(P163)rt_nil_check(F->fn_1371)).kind_ == ((rt_int)9LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).a_)).a_)).kind_ == ((rt_int)5LL))) && f_is_task_name_657(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).a_)).a_)).name_))))) {
F->y_1373 = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), (*(P163)rt_nil_check(F->fn_1371)).line_);
if (((F->y_1373 != NULL) && (((*(P110)rt_nil_check(F->y_1373)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1373)).kind_ == ((rt_int)4LL))))) {
f_resolve_member_overload_633(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), (*(P163)rt_nil_check(F->e_572)).b_, F->is_stmt_573, F->up->call_want_177, (*(P163)rt_nil_check(F->e_572)).line_, &F->y_1373);
F->up->call_task_ix_166 = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).a_)).b_;
if ((F->is_stmt_573 && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1373)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_572)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_581(F->up, F->e_572, F->y_1373, &(*F->t_574), &(*F->r_575));
goto ret_;
}
}
if (((*(P163)rt_nil_check(F->fn_1371)).kind_ != ((rt_int)5LL))) {
f_other_call_714(F->up, F->e_572, F->is_stmt_573, &(*F->t_574), &(*F->r_575));
goto ret_;
}
F->y_1373 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)));
if (((*(P163)rt_nil_check(F->fn_1371)).tag_ != NULL)) {
F->y_1373 = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), (*(P163)rt_nil_check(F->fn_1371)).line_);
}
if ((F->y_1373 == NULL)) {
f_builtin_588(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), (*(P163)rt_nil_check(F->e_572)).b_, (*(P163)rt_nil_check(F->e_572)).line_, F->is_stmt_573, &(*F->t_574), &(*F->r_575));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1373)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1373)).kind_ == ((rt_int)4LL))) && ((*(P163)rt_nil_check(F->fn_1371)).tag_ == NULL))) {
f_resolve_overload_625(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), (*(P163)rt_nil_check(F->e_572)).b_, F->is_stmt_573, F->up->call_want_177, (*(P163)rt_nil_check(F->e_572)).line_, &F->y_1373);
if ((F->y_1373 == NULL)) {
f_builtin_588(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), (*(P163)rt_nil_check(F->e_572)).b_, (*(P163)rt_nil_check(F->e_572)).line_, F->is_stmt_573, &(*F->t_574), &(*F->r_575));
goto ret_;
}
} else if ((((*(P110)rt_nil_check(F->y_1373)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1373)).kind_ == ((rt_int)4LL)))) {
f_resolve_member_overload_633(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), (*(P163)rt_nil_check(F->e_572)).b_, F->is_stmt_573, F->up->call_want_177, (*(P163)rt_nil_check(F->e_572)).line_, &F->y_1373);
}
if (((*(P110)rt_nil_check(F->y_1373)).kind_ == ((rt_int)10LL))) {
f_other_call_714(F->up, F->e_572, F->is_stmt_573, &(*F->t_574), &(*F->r_575));
goto ret_;
}
if ((((*(P110)rt_nil_check(F->y_1373)).kind_ != ((rt_int)3LL)) && ((*(P110)rt_nil_check(F->y_1373)).kind_ != ((rt_int)4LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_572)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), rt_str(" cannot be called", 17)));
}
if ((F->is_stmt_573 && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1373)).result_)).kind_ != ((rt_int)9LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_572)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_573) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1373)).result_)).kind_ == ((rt_int)9LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_572)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->fn_1371)).name_)), rt_str(" is a procedure, not a function", 31)));
}
f_gcall_with_581(F->up, F->e_572, F->y_1373, &(*F->t_574), &(*F->r_575));
ret_:

  return;
}

static void f_gcall_with_581(struct f_greenc_1fr *up_, P163 e_577, P110 y_578, P115 *t_579, P133 *r_580) {
  struct f_gcall_with_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_577 = e_577;
F->y_578 = y_578;
F->t_579 = t_579;
F->r_580 = r_580;
F->args_1385 = NULL;
F->lv_1386 = NULL;
F->v_1387 = NULL;
F->x1_1388 = NULL;
F->x2_1389 = NULL;
F->a_1390 = NULL;
F->pm_1391 = NULL;
F->lt_1392 = NULL;
F->vt_1393 = NULL;
F->lc_1394 = NULL;
f_check_call_rules_769(F->up, F->e_577, F->y_578);
F->args_1385 = f_mk_185(F->up, rt_str("", 0));
if (((((((*(P110)rt_nil_check(F->y_578)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_578)).kind_ == ((rt_int)4LL))) && ((*(P110)rt_nil_check(F->y_578)).access_path_ != NULL)) && ((*(P110)rt_nil_check(F->y_578)).members_ != NULL)) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_166 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_577)).line_, rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_578)).name_)), rt_str(" needs the member of the family: F(I).", 38)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_578)).name_))));
}
f_gexpr_522(F->up, F->up->call_task_ix_166, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).t_, &F->vt_1393, &F->v_1387);
F->up->call_task_ix_166 = NULL;
f_path_at_655(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_578)).access_path_)), &F->lv_1386);
f_path_at_655(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).cname_)), rt_str("lo", 2)), &F->x1_1388);
f_path_at_655(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).cname_)), rt_str("hi", 2)), &F->x2_1389);
F->lv_1386 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lv_1386)), rt_str("[rt_index(", 10)), (*(P133)rt_nil_check(F->v_1387))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->x1_1388))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->x2_1389))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->x1_1388))), 93));
F->args_1385 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1386))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->lv_1386))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((((*(P110)rt_nil_check(F->y_578)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_578)).kind_ == ((rt_int)4LL))) && ((*(P110)rt_nil_check(F->y_578)).access_path_ != NULL))) {
f_path_at_655(F->up, (*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_578)).members_)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_578)).access_path_)), &F->lv_1386);
F->args_1385 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1386))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->lv_1386))), rt_str(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if (((*(P110)rt_nil_check(F->y_578)).level_ > ((rt_int)0LL))) {
f_link_to_480(F->up, (*(P110)rt_nil_check(F->y_578)).level_, &F->args_1385);
}
F->pm_1391 = (*(P110)rt_nil_check(F->y_578)).params_;
while ((F->pm_1391 != NULL)) {
F->a_1390 = f_actual_for_571(F->up, (*(P163)rt_nil_check(F->e_577)).b_, F->pm_1391, (*(P110)rt_nil_check(F->y_578)).params_);
if ((((*(P133)rt_nil_check(F->args_1385))).len > ((rt_int)0LL))) {
F->args_1385 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1385)), rt_str(", ", 2)));
}
if ((F->a_1390 == NULL)) {
if ((((*(P1041)rt_nil_check(F->pm_1391)).dflt_ == NULL) || ((*(P1041)rt_nil_check(F->pm_1391)).mode_ != ((rt_int)1LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_577)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).name_))));
}
f_gexpr_522(F->up, (*(P1041)rt_nil_check(F->pm_1391)).dflt_, (*(P1041)rt_nil_check(F->pm_1391)).t_, &F->vt_1393, &F->v_1387);
F->args_1385 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1385)), (*(P133)rt_nil_check(F->v_1387))));
} else {
if (((((*(P163)rt_nil_check(F->a_1390)).flag_ != ((rt_int)0LL)) && ((*(P163)rt_nil_check(F->a_1390)).flag_ != ((rt_int)4LL))) && ((*(P163)rt_nil_check(F->a_1390)).flag_ != (*(P1041)rt_nil_check(F->pm_1391)).mode_))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_577)).line_, rt_str_cat(rt_str_cat(rt_str("the association of ", 19), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).name_))), rt_str(" does not match its mode", 24)));
}
if (((*(P1041)rt_nil_check(F->pm_1391)).mode_ == ((rt_int)1LL))) {
f_gexpr_522(F->up, F->a_1390, (*(P1041)rt_nil_check(F->pm_1391)).t_, &F->vt_1393, &F->v_1387);
f_check_type_359(F->up, F->vt_1393, (*(P1041)rt_nil_check(F->pm_1391)).t_, (*(P163)rt_nil_check(F->e_577)).line_);
if (((((*(P1041)rt_nil_check(F->pm_1391)).c_ != NULL) && ((*(P170)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).c_)).lo_ != NULL)) && (((*(P115)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).t_)).kind_ == ((rt_int)1LL)) || ((*(P115)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).t_)).kind_ == ((rt_int)4LL))))) {
F->v_1387 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1387))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P170)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).c_)).hi_))), 41));
}
F->args_1385 = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1385)), (*(P133)rt_nil_check(F->v_1387))));
} else {
f_lvalue_494(F->up, F->a_1390, &F->lv_1386, &F->lt_1392, &F->lc_1394, &F->ro_1395);
if (F->ro_1395) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_577)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1391)).name_)), rt_str(" needs a variable", 17)));
}
f_check_pure_target_752(F->up, F->a_1390, (*(P163)rt_nil_check(F->e_577)).line_);
f_check_type_359(F->up, F->lt_1392, (*(P1041)rt_nil_check(F->pm_1391)).t_, (*(P163)rt_nil_check(F->e_577)).line_);
F->args_1385 = f_mk_185(F->up, rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->args_1385)), 38), (*(P133)rt_nil_check(F->lv_1386))));
}
}
F->pm_1391 = (*(P1041)rt_nil_check(F->pm_1391)).next_;
}
L_end_1396: ;
if (((f_list_len_233(F->up, (*(P163)rt_nil_check(F->e_577)).b_) > ((rt_int)0LL)) && ((*(P110)rt_nil_check(F->y_578)).params_ == NULL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_577)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_578)).name_)), rt_str(" takes no parameters", 20)));
}
(*F->t_579) = (*(P110)rt_nil_check(F->y_578)).result_;
(*F->r_580) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_578)).cname_)), 40), (*(P133)rt_nil_check(F->args_1385))), 41));
ret_:

  return;
}

static void f_builtin_588(struct f_greenc_1fr *up_, rstr name_582, P163 args_583, rt_int line_584, int is_stmt_585, P115 *t_586, P133 *r_587) {
  struct f_builtin_588fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_582 = rt_str_copy(name_582);
F->args_583 = args_583;
F->line_584 = line_584;
F->is_stmt_585 = is_stmt_585;
F->t_586 = t_586;
F->r_587 = r_587;
F->aty_1397 = NULL;
F->lt_1398 = NULL;
F->a_1399 = NULL;
F->w_1400 = NULL;
F->lv_1401 = NULL;
F->lc_1402 = NULL;
(*F->t_586) = F->up->ty_void_154;
if (((F->up->pure_sym_178 != NULL) && (rt_str_eq(F->name_582, rt_str("PUT", 3)) || rt_str_eq(F->name_582, rt_str("GET", 3))))) {
f_fail_202(F->up, F->line_584, rt_str_cat(rt_str_cat(rt_str("a function cannot do input-output: ", 35), F->name_582), rt_str(" has side effects (RM79 6.5)", 28)));
}
if (rt_str_eq(F->name_582, rt_str("PUT", 3))) {
if ((F->args_583 == NULL)) {
f_fail_202(F->up, F->line_584, rt_str("PUT needs an item", 17));
}
f_gexpr_522(F->up, F->args_583, NULL, &F->aty_1397, &F->a_1399);
F->w_1400 = f_mk_185(F->up, rt_str("0", 1));
if (((*(P163)rt_nil_check(F->args_583)).next_ != NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->args_583)).next_, F->up->ty_int_149, &F->lt_1398, &F->w_1400);
}
if (((*(P115)rt_nil_check(F->aty_1397)).kind_ == ((rt_int)5LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_put(", 9), (*(P133)rt_nil_check(F->a_1399))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1397)).kind_ == ((rt_int)11LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_putc(", 10), (*(P133)rt_nil_check(F->a_1399))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1397)).kind_ == ((rt_int)1LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_int(", 13), (*(P133)rt_nil_check(F->a_1399))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1400))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1397)).kind_ == ((rt_int)2LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_bool(", 14), (*(P133)rt_nil_check(F->a_1399))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1400))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1397)).kind_ == ((rt_int)3LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_float(", 15), (*(P133)rt_nil_check(F->a_1399))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1400))), rt_str(", 0)", 4)));
} else {
f_fail_202(F->up, F->line_584, rt_str("PUT of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_582, rt_str("GET", 3))) {
f_lvalue_494(F->up, F->args_583, &F->lv_1401, &F->lt_1398, &F->lc_1402, &F->ro_1403);
if (((*(P115)rt_nil_check(F->lt_1398)).kind_ == ((rt_int)11LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1401))), rt_str(" = rt_g_getc())", 15)));
} else if (((*(P115)rt_nil_check(F->lt_1398)).kind_ == ((rt_int)1LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1401))), rt_str(" = rt_g_get_int())", 18)));
} else if (((*(P115)rt_nil_check(F->lt_1398)).kind_ == ((rt_int)3LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1401))), rt_str(" = rt_g_get_float())", 20)));
} else {
f_fail_202(F->up, F->line_584, rt_str("GET of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_582, rt_str("ABS", 3))) {
f_gexpr_522(F->up, F->args_583, NULL, &(*F->t_586), &F->a_1399);
if (((*(P115)rt_nil_check((*F->t_586))).kind_ == ((rt_int)1LL))) {
(*F->r_587) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_abs(", 7), (*(P133)rt_nil_check(F->a_1399))), 41));
} else {
(*F->r_587) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("fabs(", 5), (*(P133)rt_nil_check(F->a_1399))), 41));
}
} else {
f_task_builtin_729(F->up, F->name_582, F->args_583, F->line_584, &(*F->t_586), &(*F->r_587));
}
ret_:

  return;
}

static int f_is_package_590(struct f_greenc_1fr *up_, P163 e_589) {
  struct f_is_package_590fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_589 = e_589;
F->y_1404 = NULL;
if (((*(P163)rt_nil_check(F->e_589)).kind_ != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_1404 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_589)).name_)));
F->result_ = ((F->y_1404 != NULL) && (((*(P110)rt_nil_check(F->y_1404)).kind_ == ((rt_int)8LL)) || ((*(P110)rt_nil_check(F->y_1404)).kind_ == ((rt_int)9LL))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_member_of_594(struct f_greenc_1fr *up_, rstr p_591, rstr name_592, rt_int line_593) {
  struct f_member_of_594fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_591 = rt_str_copy(p_591);
F->name_592 = rt_str_copy(name_592);
F->line_593 = line_593;
F->y_1405 = NULL;
F->y_1405 = f_lookup_326(F->up, F->p_591);
F->m_1406 = NULL;
if (((F->y_1405 == NULL) || (((*(P110)rt_nil_check(F->y_1405)).kind_ != ((rt_int)8LL)) && ((*(P110)rt_nil_check(F->y_1405)).kind_ != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_1406 = (*(P110)rt_nil_check(F->y_1405)).members_;
while ((F->m_1406 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1406)).name_)), F->name_592) && (!(*(P110)rt_nil_check(F->m_1406)).hidden_))) {
F->result_ = F->m_1406;
goto ret_;
}
F->m_1406 = (*(P110)rt_nil_check(F->m_1406)).mnext_;
}
L_end_1407: ;
if (((*(P110)rt_nil_check(F->y_1405)).kind_ == ((rt_int)9LL))) {
F->m_1406 = f_lookup_entry_332(F->up, F->name_592, F->y_1405);
if ((((F->m_1406 != NULL) && ((*(P110)rt_nil_check(F->m_1406)).kind_ == ((rt_int)10LL))) && f_same_task_329(F->up, (*(P110)rt_nil_check(F->m_1406)).members_, F->y_1405))) {
F->result_ = F->m_1406;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_596(struct f_greenc_1fr *up_, P163 p_595) {
  struct f_inside_package_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_595 = p_595;
F->l_1408 = NULL;
F->l_1408 = F->up->pkg_stack_174;
if ((F->p_595 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_1408 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P144)rt_nil_check(F->l_1408)).s_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_595)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_1408 = (*(P144)rt_nil_check(F->l_1408)).next_;
}
L_end_1409: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_599(struct f_greenc_1fr *up_, P110 y_597, P110 *z_598) {
  struct f_copy_sym_599fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_597 = y_597;
F->z_598 = z_598;
(*F->z_598) = ({ R111 *cell1410 = rt_alloc(sizeof(R111)); *cell1410 = cp_R111(({ R111 ag1411; ag1411.kind_ = (*(P110)rt_nil_check(F->y_597)).kind_; ag1411.name_ = (*(P110)rt_nil_check(F->y_597)).name_; ag1411.t_ = (*(P110)rt_nil_check(F->y_597)).t_; ag1411.c_ = (*(P110)rt_nil_check(F->y_597)).c_; ag1411.access_path_ = (*(P110)rt_nil_check(F->y_597)).access_path_; ag1411.cname_ = (*(P110)rt_nil_check(F->y_597)).cname_; ag1411.ro_ = (*(P110)rt_nil_check(F->y_597)).ro_; ag1411.mvalue_ = (*(P110)rt_nil_check(F->y_597)).mvalue_; ag1411.hasmv_ = (*(P110)rt_nil_check(F->y_597)).hasmv_; ag1411.decl_ = (*(P110)rt_nil_check(F->y_597)).decl_; ag1411.params_ = (*(P110)rt_nil_check(F->y_597)).params_; ag1411.result_ = (*(P110)rt_nil_check(F->y_597)).result_; ag1411.depth_ = ((rt_int)0LL); ag1411.level_ = (*(P110)rt_nil_check(F->y_597)).level_; ag1411.byref_ = (*(P110)rt_nil_check(F->y_597)).byref_; ag1411.vrp_ = (*(P110)rt_nil_check(F->y_597)).vrp_; ag1411.hidden_ = (*(P110)rt_nil_check(F->y_597)).hidden_; ag1411.from_use_ = 0; ag1411.members_ = (*(P110)rt_nil_check(F->y_597)).members_; ag1411.mnext_ = NULL; ag1411.chain_ = NULL; ag1411.stack_ = NULL; ag1411; })); (P110)cell1410; });
ret_:

  return;
}

static void f_complete_private_602(struct f_greenc_1fr *up_, P115 ph_600, P115 full_601) {
  struct f_complete_private_602fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_600 = ph_600;
F->full_601 = full_601;
F->n_1412 = NULL;
F->n_1412 = (*(P115)rt_nil_check(F->ph_600)).name_;
F->p_1413 = NULL;
F->p_1413 = (*(P115)rt_nil_check(F->ph_600)).decl_;
as_R116(&(*(P115)rt_nil_check(F->ph_600)), (*(P115)rt_nil_check(F->full_601)));
(*(P115)rt_nil_check(F->ph_600)).name_ = F->n_1412;
(*(P115)rt_nil_check(F->ph_600)).priv_ = 1;
(*(P115)rt_nil_check(F->ph_600)).decl_ = F->p_1413;
ret_:

  return;
}

static void f_package_spec_604(struct f_greenc_1fr *up_, P163 e_603) {
  struct f_package_spec_604fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_603 = e_603;
F->y_1414 = NULL;
F->m_1415 = NULL;
F->z_1416 = NULL;
F->saved_1417 = NULL;
F->saved_1417 = F->up->cur_pkg_175;
F->first_private_1418 = NULL;
F->y_1414 = f_new_sym_350(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->e_603)).name_);
(*(P110)rt_nil_check(F->y_1414)).decl_ = F->e_603;
F->up->pkg_stack_174 = ({ R145 *cell1419 = rt_alloc(sizeof(R145)); *cell1419 = cp_R145(({ R145 ag1420; ag1420.s_ = (*(P163)rt_nil_check(F->e_603)).name_; ag1420.next_ = F->up->pkg_stack_174; ag1420; })); (P144)cell1419; });
F->up->cur_pkg_175 = F->e_603;
f_open_scope_346(F->up);
f_decl_elements_430(F->up, (*(P163)rt_nil_check(F->e_603)).c_);
F->first_private_1418 = F->up->scope_stack_114;
f_decl_elements_430(F->up, (*(P163)rt_nil_check(F->e_603)).d_);
F->m_1415 = F->up->scope_stack_114;
while (((F->m_1415 != NULL) && ((*(P110)rt_nil_check(F->m_1415)).depth_ == F->up->depth_113))) {
f_copy_sym_599(F->up, F->m_1415, &F->z_1416);
(*(P110)rt_nil_check(F->z_1416)).hidden_ = (f_hidden_from_607(F->up, F->m_1415, F->first_private_1418) || (*(P110)rt_nil_check(F->m_1415)).from_use_);
(*(P110)rt_nil_check(F->z_1416)).mnext_ = (*(P110)rt_nil_check(F->y_1414)).members_;
(*(P110)rt_nil_check(F->y_1414)).members_ = F->z_1416;
F->m_1415 = (*(P110)rt_nil_check(F->m_1415)).stack_;
}
L_end_1421: ;
f_close_scope_347(F->up);
F->up->pkg_stack_174 = (*(P144)rt_nil_check(F->up->pkg_stack_174)).next_;
F->up->cur_pkg_175 = F->saved_1417;
f_define_345(F->up, F->y_1414, (*(P163)rt_nil_check(F->e_603)).line_);
ret_:

  return;
}

static int f_hidden_from_607(struct f_greenc_1fr *up_, P110 m_605, P110 first_private_606) {
  struct f_hidden_from_607fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_605 = m_605;
F->first_private_606 = first_private_606;
F->p_1422 = NULL;
F->p_1422 = F->up->scope_stack_114;
while ((F->p_1422 != NULL)) {
if ((F->p_1422 == F->first_private_606)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_1422 == F->m_605)) {
F->result_ = 1;
goto ret_;
}
F->p_1422 = (*(P110)rt_nil_check(F->p_1422)).stack_;
}
L_end_1423: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_609(struct f_greenc_1fr *up_, P163 e_608) {
  struct f_package_body_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_608 = e_608;
F->y_1424 = NULL;
F->y_1424 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_608)).name_)));
F->m_1425 = NULL;
F->z_1426 = NULL;
F->saved_1427 = NULL;
F->saved_1427 = F->up->cur_pkg_175;
if (((F->y_1424 != NULL) && ((*(P110)rt_nil_check(F->y_1424)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_780(F->up, F->e_608);
goto ret_;
}
if (((F->y_1424 == NULL) || ((*(P110)rt_nil_check(F->y_1424)).kind_ != ((rt_int)8LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_608)).line_, rt_str_cat(rt_str_cat(rt_str("package body ", 13), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_608)).name_))), rt_str(" has no specification", 21)));
}
F->up->pkg_stack_174 = ({ R145 *cell1428 = rt_alloc(sizeof(R145)); *cell1428 = cp_R145(({ R145 ag1429; ag1429.s_ = (*(P163)rt_nil_check(F->e_608)).name_; ag1429.next_ = F->up->pkg_stack_174; ag1429; })); (P144)cell1428; });
F->up->cur_pkg_175 = (*(P110)rt_nil_check(F->y_1424)).decl_;
f_open_scope_346(F->up);
F->m_1425 = (*(P110)rt_nil_check(F->y_1424)).members_;
while ((F->m_1425 != NULL)) {
f_copy_sym_599(F->up, F->m_1425, &F->z_1426);
(*(P110)rt_nil_check(F->z_1426)).hidden_ = 0;
f_define_345(F->up, F->z_1426, (*(P163)rt_nil_check(F->e_608)).line_);
F->m_1425 = (*(P110)rt_nil_check(F->m_1425)).mnext_;
}
L_end_1430: ;
f_decl_elements_430(F->up, (*(P163)rt_nil_check(F->e_608)).c_);
F->m_1425 = (*(P110)rt_nil_check(F->y_1424)).members_;
while ((F->m_1425 != NULL)) {
if (((((*(P110)rt_nil_check(F->m_1425)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->m_1425)).kind_ == ((rt_int)4LL))) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->m_1425)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_1426 = F->up->table_112.p[rt_index(f_hash_324(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1425)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1426 != NULL)) {
if (((*(P110)rt_nil_check(F->z_1426)).cname_ == (*(P110)rt_nil_check(F->m_1425)).cname_)) {
(*(P110)rt_nil_check(F->m_1425)).decl_ = (*(P110)rt_nil_check(F->z_1426)).decl_;
}
F->z_1426 = (*(P110)rt_nil_check(F->z_1426)).chain_;
}
L_end_1432: ;
if (((*(P163)rt_nil_check((*(P110)rt_nil_check(F->m_1425)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_608)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no body for ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1425)).name_))), rt_str(" in package body ", 17)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_608)).name_))));
}
}
F->m_1425 = (*(P110)rt_nil_check(F->m_1425)).mnext_;
}
L_end_1431: ;
f_guarded_448(F->up, (*(P163)rt_nil_check(F->e_608)).d_, (*(P163)rt_nil_check(F->e_608)).e_, (*(P163)rt_nil_check(F->e_608)).line_);
f_close_scope_347(F->up);
F->up->pkg_stack_174 = (*(P144)rt_nil_check(F->up->pkg_stack_174)).next_;
F->up->cur_pkg_175 = F->saved_1427;
ret_:

  return;
}

static void f_use_clause_611(struct f_greenc_1fr *up_, P163 e_610) {
  struct f_use_clause_611fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_610 = e_610;
F->n_1433 = NULL;
F->n_1433 = (*(P163)rt_nil_check(F->e_610)).a_;
F->y_1434 = NULL;
F->m_1435 = NULL;
F->z_1436 = NULL;
F->old_1437 = NULL;
while ((F->n_1433 != NULL)) {
F->y_1434 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1433)).name_)));
if ((F->y_1434 == NULL)) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1433)).name_)), rt_str("TEXT_IO", 7)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->n_1433)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1433)).name_)), rt_str(" is not a package", 17)));
}
} else if ((((*(P110)rt_nil_check(F->y_1434)).kind_ != ((rt_int)8LL)) && ((*(P110)rt_nil_check(F->y_1434)).kind_ != ((rt_int)9LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->n_1433)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1433)).name_)), rt_str(" is not a package or a task", 27)));
} else {
F->m_1435 = (*(P110)rt_nil_check(F->y_1434)).members_;
while ((F->m_1435 != NULL)) {
F->old_1437 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1435)).name_)));
if (((!(*(P110)rt_nil_check(F->m_1435)).hidden_) && ((F->old_1437 == NULL) || ((((*(P110)rt_nil_check(F->old_1437)).depth_ < F->up->depth_113) && ((*(P110)rt_nil_check(F->old_1437)).kind_ != ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->old_1437)).kind_ != ((rt_int)2LL)))))) {
f_copy_sym_599(F->up, F->m_1435, &F->z_1436);
(*(P110)rt_nil_check(F->z_1436)).from_use_ = 1;
f_define_345(F->up, F->z_1436, (*(P163)rt_nil_check(F->n_1433)).line_);
}
F->m_1435 = (*(P110)rt_nil_check(F->m_1435)).mnext_;
}
L_end_1439: ;
}
F->n_1433 = (*(P163)rt_nil_check(F->n_1433)).next_;
}
L_end_1438: ;
ret_:

  return;
}

static void f_fits_616(struct f_greenc_1fr *up_, P110 y_612, P163 args_613, P115 want_614, int *ok_615) {
  struct f_fits_616fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_612 = y_612;
F->args_613 = args_613;
F->want_614 = want_614;
F->ok_615 = ok_615;
F->pm_1440 = NULL;
F->pm_1440 = (*(P110)rt_nil_check(F->y_612)).params_;
F->a_1441 = NULL;
F->t_1442 = NULL;
F->c_1443 = NULL;
F->v_1444 = NULL;
F->saved_1446 = NULL;
F->saved_1446 = F->up->code_129;
F->used_1447 = ((rt_int)0LL);
(*F->ok_615) = 1;
F->up->trial_148 = rt_add(F->up->trial_148, ((rt_int)1LL));
F->up->code_129 = f_new_buffer_203(F->up);
{
{ rt_frame xf1449;
if (RT_TRY(xf1449)) {
while (((*F->ok_615) && (F->pm_1440 != NULL))) {
F->a_1441 = f_actual_for_571(F->up, F->args_613, F->pm_1440, (*(P110)rt_nil_check(F->y_612)).params_);
if ((F->a_1441 == NULL)) {
(*F->ok_615) = ((*(P1041)rt_nil_check(F->pm_1440)).dflt_ != NULL);
} else {
F->used_1447 = rt_add(F->used_1447, ((rt_int)1LL));
if (((((*(P163)rt_nil_check(F->a_1441)).flag_ != ((rt_int)0LL)) && ((*(P163)rt_nil_check(F->a_1441)).flag_ != ((rt_int)4LL))) && ((*(P163)rt_nil_check(F->a_1441)).flag_ != (*(P1041)rt_nil_check(F->pm_1440)).mode_))) {
(*F->ok_615) = 0;
} else if (((*(P1041)rt_nil_check(F->pm_1440)).mode_ == ((rt_int)1LL))) {
f_gexpr_522(F->up, F->a_1441, (*(P1041)rt_nil_check(F->pm_1440)).t_, &F->t_1442, &F->v_1444);
(*F->ok_615) = (f_same_339(F->up, F->t_1442, (*(P1041)rt_nil_check(F->pm_1440)).t_) || (((*(P115)rt_nil_check(F->t_1442)).kind_ == ((rt_int)10LL)) && ((*(P115)rt_nil_check((*(P1041)rt_nil_check(F->pm_1440)).t_)).kind_ == ((rt_int)8LL))));
} else {
f_lvalue_494(F->up, F->a_1441, &F->v_1444, &F->t_1442, &F->c_1443, &F->ro_1445);
(*F->ok_615) = f_same_339(F->up, F->t_1442, (*(P1041)rt_nil_check(F->pm_1440)).t_);
}
}
F->pm_1440 = (*(P1041)rt_nil_check(F->pm_1440)).next_;
}
L_end_1451: ;
if ((F->used_1447 != f_list_len_233(F->up, F->args_613))) {
(*F->ok_615) = 0;
}
if ((((*F->ok_615) && (F->want_614 != NULL)) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_612)).result_)).kind_ != ((rt_int)9LL)))) {
(*F->ok_615) = (f_same_339(F->up, (*(P110)rt_nil_check(F->y_612)).result_, F->want_614) || ((*(P115)rt_nil_check(F->want_614)).kind_ == ((rt_int)9LL)));
}
RT_POP(xf1449);
} else {
RT_POP(xf1449);
int x1450 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1450);
if (0 || x1450 == ex_compile_error_101) {
(*F->ok_615) = 0;
} else {
rt_raise(x1450);
}
}
}

}
L_end_1448: ;
F->up->trial_148 = rt_sub(F->up->trial_148, ((rt_int)1LL));
F->up->code_129 = F->saved_1446;
ret_:

  return;
}

static int f_is_builtin_618(struct f_greenc_1fr *up_, rstr n_617) {
  struct f_is_builtin_618fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_617 = rt_str_copy(n_617);
F->result_ = (((rt_str_eq(F->n_617, rt_str("PUT", 3)) || rt_str_eq(F->n_617, rt_str("GET", 3))) || rt_str_eq(F->n_617, rt_str("ABS", 3))) || rt_str_eq(F->n_617, rt_str("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_625(struct f_greenc_1fr *up_, rstr name_619, P163 args_620, int is_stmt_621, P115 want_622, rt_int line_623, P110 *y_624) {
  struct f_resolve_overload_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_619 = rt_str_copy(name_619);
F->args_620 = args_620;
F->is_stmt_621 = is_stmt_621;
F->want_622 = want_622;
F->line_623 = line_623;
F->y_624 = y_624;
F->z_1452 = NULL;
F->z_1452 = F->up->table_112.p[rt_index(f_hash_324(F->up, F->name_619), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->first_1453 = NULL;
F->n_1454 = ((rt_int)0LL);
{ rt_int lo1458 = ((rt_int)1LL), hi1459 = ((rt_int)2LL);
for (rt_int it1460 = lo1458; it1460 <= hi1459; it1460++) {
F->pass_1457 = it1460;
F->z_1452 = F->up->table_112.p[rt_index(f_hash_324(F->up, F->name_619), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->n_1454 = ((rt_int)0LL);
while ((F->z_1452 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1452)).name_)), F->name_619) && (((*(P110)rt_nil_check(F->z_1452)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1452)).kind_ == ((rt_int)4LL))))) {
F->n_1454 = rt_add(F->n_1454, ((rt_int)1LL));
if ((F->first_1453 == NULL)) {
F->first_1453 = F->z_1452;
}
if ((((*(P115)rt_nil_check((*(P110)rt_nil_check(F->z_1452)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_621)) {
if ((F->pass_1457 == ((rt_int)1LL))) {
f_fits_616(F->up, F->z_1452, F->args_620, F->want_622, &F->ok_1455);
} else {
f_fits_616(F->up, F->z_1452, F->args_620, NULL, &F->ok_1455);
}
if (F->ok_1455) {
(*F->y_624) = F->z_1452;
goto ret_;
}
}
}
F->z_1452 = (*(P110)rt_nil_check(F->z_1452)).chain_;
}
L_end_1461: ;
}
}
L_end_1456: ;
if (f_is_builtin_618(F->up, F->name_619)) {
(*F->y_624) = NULL;
goto ret_;
}
if ((F->n_1454 > ((rt_int)1LL))) {
f_fail_202(F->up, F->line_623, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_619), rt_str(" fits these actual parameters", 29)));
}
(*F->y_624) = F->first_1453;
ret_:

  return;
}

static void f_resolve_member_overload_633(struct f_greenc_1fr *up_, rstr p_626, rstr name_627, P163 args_628, int is_stmt_629, P115 want_630, rt_int line_631, P110 *y_632) {
  struct f_resolve_member_overload_633fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_626 = rt_str_copy(p_626);
F->name_627 = rt_str_copy(name_627);
F->args_628 = args_628;
F->is_stmt_629 = is_stmt_629;
F->want_630 = want_630;
F->line_631 = line_631;
F->y_632 = y_632;
F->pk_1462 = NULL;
F->pk_1462 = f_lookup_326(F->up, F->p_626);
F->z_1463 = NULL;
F->n_1464 = ((rt_int)0LL);
if ((F->pk_1462 == NULL)) {
goto ret_;
}
{ rt_int lo1468 = ((rt_int)1LL), hi1469 = ((rt_int)2LL);
for (rt_int it1470 = lo1468; it1470 <= hi1469; it1470++) {
F->pass_1467 = it1470;
F->z_1463 = (*(P110)rt_nil_check(F->pk_1462)).members_;
F->n_1464 = ((rt_int)0LL);
while ((F->z_1463 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1463)).name_)), F->name_627) && (((*(P110)rt_nil_check(F->z_1463)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->z_1463)).kind_ == ((rt_int)4LL)))) && (!(*(P110)rt_nil_check(F->z_1463)).hidden_))) {
F->n_1464 = rt_add(F->n_1464, ((rt_int)1LL));
if ((((*(P115)rt_nil_check((*(P110)rt_nil_check(F->z_1463)).result_)).kind_ == ((rt_int)9LL)) == F->is_stmt_629)) {
if ((F->pass_1467 == ((rt_int)1LL))) {
f_fits_616(F->up, F->z_1463, F->args_628, F->want_630, &F->ok_1465);
} else {
f_fits_616(F->up, F->z_1463, F->args_628, NULL, &F->ok_1465);
}
if (F->ok_1465) {
(*F->y_632) = F->z_1463;
goto ret_;
}
}
}
F->z_1463 = (*(P110)rt_nil_check(F->z_1463)).mnext_;
}
L_end_1471: ;
}
}
L_end_1466: ;
if ((F->n_1464 > ((rt_int)1LL))) {
f_fail_202(F->up, F->line_631, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_627), rt_str(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_639(struct f_greenc_1fr *up_, P163 e_634, P115 want_635, P115 *t_636, P133 *r_637, int *done_638) {
  struct f_user_operator_639fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_634 = e_634;
F->want_635 = want_635;
F->t_636 = t_636;
F->r_637 = r_637;
F->done_638 = done_638;
F->op_1472 = NULL;
F->op_1472 = (*(P163)rt_nil_check(F->e_634)).name_;
F->negate_1473 = 0;
F->y_1474 = NULL;
F->call_1475 = NULL;
F->fname_1476 = NULL;
F->l_1477 = NULL;
F->rt_1478 = NULL;
(*F->done_638) = 0;
if (rt_str_eq((*(P133)rt_nil_check(F->op_1472)), rt_str("/=", 2))) {
F->op_1472 = f_mk_185(F->up, rt_str("=", 1));
F->negate_1473 = 1;
}
if ((f_lookup_326(F->up, (*(P133)rt_nil_check(F->op_1472))) == NULL)) {
goto ret_;
}
F->l_1477 = f_nn_227(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_634)).a_)).kind_, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_634)).a_)).line_);
as_R164(&(*(P163)rt_nil_check(F->l_1477)), (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_634)).a_)));
(*(P163)rt_nil_check(F->l_1477)).next_ = NULL;
(*(P163)rt_nil_check(F->l_1477)).tag_ = NULL;
(*(P163)rt_nil_check(F->l_1477)).flag_ = ((rt_int)0LL);
if (((*(P163)rt_nil_check(F->e_634)).kind_ == ((rt_int)7LL))) {
F->rt_1478 = f_nn_227(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_634)).b_)).kind_, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_634)).b_)).line_);
as_R164(&(*(P163)rt_nil_check(F->rt_1478)), (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_634)).b_)));
(*(P163)rt_nil_check(F->rt_1478)).next_ = NULL;
(*(P163)rt_nil_check(F->rt_1478)).tag_ = NULL;
(*(P163)rt_nil_check(F->rt_1478)).flag_ = ((rt_int)0LL);
(*(P163)rt_nil_check(F->l_1477)).next_ = F->rt_1478;
}
F->y_1474 = F->up->table_112.p[rt_index(f_hash_324(F->up, (*(P133)rt_nil_check(F->op_1472))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1474 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1474)).name_)), (*(P133)rt_nil_check(F->op_1472))) && ((*(P110)rt_nil_check(F->y_1474)).kind_ == ((rt_int)3LL)))) {
f_fits_616(F->up, F->y_1474, F->l_1477, NULL, &F->ok_1479);
if (F->ok_1479) {
F->fname_1476 = f_nn_227(F->up, ((rt_int)5LL), (*(P163)rt_nil_check(F->e_634)).line_);
(*(P163)rt_nil_check(F->fname_1476)).name_ = F->op_1472;
F->call_1475 = f_nn_227(F->up, ((rt_int)8LL), (*(P163)rt_nil_check(F->e_634)).line_);
(*(P163)rt_nil_check(F->call_1475)).a_ = F->fname_1476;
(*(P163)rt_nil_check(F->call_1475)).b_ = F->l_1477;
F->up->call_want_177 = NULL;
f_gcall_with_581(F->up, F->call_1475, F->y_1474, &(*F->t_636), &(*F->r_637));
if (F->negate_1473) {
(*F->r_637) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check((*F->r_637)))), 41));
}
(*F->done_638) = 1;
goto ret_;
}
}
F->y_1474 = (*(P110)rt_nil_check(F->y_1474)).chain_;
}
L_end_1480: ;
ret_:

  return;
}

static void f_task_p_641(struct f_greenc_1fr *up_, P163 *res_640) {
  struct f_task_p_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_640 = res_640;
F->x_1481 = NULL;
F->line_1482 = f_cur_line_234(F->up);
f_expect_kw_249(F->up, rt_str("TASK", 4));
if (f_at_kw_236(F->up, rt_str("BODY", 4))) {
f_skip_247(F->up);
F->x_1481 = f_nn_227(F->up, ((rt_int)51LL), F->line_1482);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1481)).name_);
f_expect_kw_249(F->up, rt_str("IS", 2));
f_body_part_303(F->up, F->x_1481);
} else {
F->x_1481 = f_nn_227(F->up, ((rt_int)50LL), F->line_1482);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1481)).name_);
if (((f_at_kw_236(F->up, rt_str("IS", 2)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_774(F->up, F->x_1481, &(*F->res_640));
goto ret_;
}
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("RANGE", 5)))) {
f_subtype_ind_282(F->up, &(*(P163)rt_nil_check(F->x_1481)).a_);
} else {
(*(P163)rt_nil_check(F->x_1481)).a_ = f_nn_227(F->up, ((rt_int)14LL), F->line_1482);
f_simple_expr_270(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1481)).a_)).a_);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1481)).a_)).b_);
}
f_expect_op_251(F->up, rt_str(")", 1));
}
if (f_at_kw_236(F->up, rt_str("IS", 2))) {
f_skip_247(F->up);
f_decl_part_291(F->up, &(*(P163)rt_nil_check(F->x_1481)).c_);
if (f_at_kw_236(F->up, rt_str("PRIVATE", 7))) {
f_skip_247(F->up);
f_decl_part_291(F->up, &(*(P163)rt_nil_check(F->x_1481)).d_);
}
f_expect_kw_249(F->up, rt_str("END", 3));
}
}
if (f_at_kind_240(F->up, ((rt_int)1LL))) {
f_skip_247(F->up);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_640) = F->x_1481;
ret_:

  return;
}

static void f_entry_p_643(struct f_greenc_1fr *up_, P163 *res_642) {
  struct f_entry_p_643fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_642 = res_642;
F->x_1483 = NULL;
f_expect_kw_249(F->up, rt_str("ENTRY", 5));
F->x_1483 = f_nn_227(F->up, ((rt_int)52LL), f_cur_line_234(F->up));
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1483)).name_);
if ((f_at_op_238(F->up, rt_str("(", 1)) && (!((f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_244(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_244(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_247(F->up);
if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(")", 1)))) {
f_subtype_ind_282(F->up, &(*(P163)rt_nil_check(F->x_1483)).b_);
} else {
(*(P163)rt_nil_check(F->x_1483)).b_ = f_nn_227(F->up, ((rt_int)14LL), f_cur_line_234(F->up));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1483)).b_)).a_);
f_expect_op_251(F->up, rt_str("..", 2));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1483)).b_)).b_);
}
f_expect_op_251(F->up, rt_str(")", 1));
}
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_formal_part_297(F->up, &(*(P163)rt_nil_check(F->x_1483)).a_);
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_642) = F->x_1483;
ret_:

  return;
}

static void f_accept_p_645(struct f_greenc_1fr *up_, P163 *res_644) {
  struct f_accept_p_645fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_644 = res_644;
F->x_1484 = NULL;
f_expect_kw_249(F->up, rt_str("ACCEPT", 6));
F->x_1484 = f_nn_227(F->up, ((rt_int)34LL), f_cur_line_234(F->up));
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->x_1484)).name_);
if ((f_at_op_238(F->up, rt_str("(", 1)) && (!((f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (rt_str_eq(f_text_at_244(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_244(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_247(F->up);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->x_1484)).c_);
f_expect_op_251(F->up, rt_str(")", 1));
}
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_formal_part_297(F->up, &(*(P163)rt_nil_check(F->x_1484)).a_);
}
if (f_at_kw_236(F->up, rt_str("DO", 2))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_1484)).flag_ = ((rt_int)1LL);
f_statements_310(F->up, &(*(P163)rt_nil_check(F->x_1484)).b_);
f_expect_kw_249(F->up, rt_str("END", 3));
if (f_at_kind_240(F->up, ((rt_int)1LL))) {
f_skip_247(F->up);
}
}
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_644) = F->x_1484;
ret_:

  return;
}

static void f_delay_p_647(struct f_greenc_1fr *up_, P163 *res_646) {
  struct f_delay_p_647fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_646 = res_646;
F->x_1485 = NULL;
f_expect_kw_249(F->up, rt_str("DELAY", 5));
F->x_1485 = f_nn_227(F->up, ((rt_int)32LL), f_cur_line_234(F->up));
f_simple_expr_270(F->up, &(*(P163)rt_nil_check(F->x_1485)).a_);
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_646) = F->x_1485;
ret_:

  return;
}

static void f_designators_649(struct f_greenc_1fr *up_, P163 *res_648) {
  struct f_designators_649fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_648 = res_648;
F->head_1486 = NULL;
F->tail_1487 = NULL;
F->n_1488 = NULL;
for (;;) {
f_name_p_280(F->up, &F->n_1488);
f_append_231(F->up, &F->head_1486, &F->tail_1487, F->n_1488);
if ((!f_at_op_238(F->up, rt_str(",", 1)))) {
goto L_end_1489;
}
f_skip_247(F->up);
}
L_end_1489: ;
f_expect_op_251(F->up, rt_str(";", 1));
(*F->res_648) = F->head_1486;
ret_:

  return;
}

static void f_parse_task_statement_651(struct f_greenc_1fr *up_, P163 *res_650) {
  struct f_parse_task_statement_651fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_650 = res_650;
F->x_1490 = NULL;
F->alt_1491 = NULL;
F->head_1492 = NULL;
F->tail_1493 = NULL;
F->line_1494 = f_cur_line_234(F->up);
(*F->res_650) = NULL;
if (f_at_kw_236(F->up, rt_str("INITIATE", 8))) {
f_skip_247(F->up);
F->x_1490 = f_nn_227(F->up, ((rt_int)33LL), F->line_1494);
f_designators_649(F->up, &(*(P163)rt_nil_check(F->x_1490)).a_);
(*F->res_650) = F->x_1490;
} else if (f_at_kw_236(F->up, rt_str("ABORT", 5))) {
f_skip_247(F->up);
F->x_1490 = f_nn_227(F->up, ((rt_int)36LL), F->line_1494);
f_designators_649(F->up, &(*(P163)rt_nil_check(F->x_1490)).a_);
(*F->res_650) = F->x_1490;
} else if (f_at_kw_236(F->up, rt_str("DELAY", 5))) {
f_delay_p_647(F->up, &(*F->res_650));
} else if (f_at_kw_236(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_645(F->up, &(*F->res_650));
} else if (f_at_kw_236(F->up, rt_str("SELECT", 6))) {
f_skip_247(F->up);
F->x_1490 = f_nn_227(F->up, ((rt_int)35LL), F->line_1494);
for (;;) {
F->alt_1491 = f_nn_227(F->up, ((rt_int)64LL), f_cur_line_234(F->up));
if (f_at_kw_236(F->up, rt_str("WHEN", 4))) {
f_skip_247(F->up);
f_expr_264(F->up, &(*(P163)rt_nil_check(F->alt_1491)).a_);
f_expect_op_251(F->up, rt_str("=>", 2));
}
if (f_at_kw_236(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_645(F->up, &(*(P163)rt_nil_check(F->alt_1491)).b_);
} else if (f_at_kw_236(F->up, rt_str("DELAY", 5))) {
f_delay_p_647(F->up, &(*(P163)rt_nil_check(F->alt_1491)).b_);
} else {
f_perror_246(F->up, rt_str("a select alternative starts with accept or delay", 48));
}
f_statements_310(F->up, &(*(P163)rt_nil_check(F->alt_1491)).c_);
f_append_231(F->up, &F->head_1492, &F->tail_1493, F->alt_1491);
if ((!f_at_kw_236(F->up, rt_str("OR", 2)))) {
goto L_end_1495;
}
f_skip_247(F->up);
}
L_end_1495: ;
if (f_at_kw_236(F->up, rt_str("ELSE", 4))) {
f_skip_247(F->up);
(*(P163)rt_nil_check(F->x_1490)).flag_ = ((rt_int)1LL);
f_statements_310(F->up, &(*(P163)rt_nil_check(F->x_1490)).b_);
}
f_expect_kw_249(F->up, rt_str("END", 3));
f_expect_kw_249(F->up, rt_str("SELECT", 6));
f_expect_op_251(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->x_1490)).a_ = F->head_1492;
(*F->res_650) = F->x_1490;
}
ret_:

  return;
}

static void f_path_at_655(struct f_greenc_1fr *up_, rt_int level_652, rstr field_653, P133 *r_654) {
  struct f_path_at_655fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_652 = level_652;
F->field_653 = rt_str_copy(field_653);
F->r_654 = r_654;
if ((F->level_652 <= ((rt_int)0LL))) {
(*F->r_654) = f_mk_185(F->up, F->field_653);
goto ret_;
}
(*F->r_654) = f_mk_185(F->up, rt_str("F", 1));
{ rt_int lo1498 = ((rt_int)1LL), hi1499 = rt_sub(F->up->cur_level_132, F->level_652);
for (rt_int it1500 = lo1498; it1500 <= hi1499; it1500++) {
F->i_1497 = it1500;
(*F->r_654) = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_654))), rt_str("->up", 4)));
}
}
L_end_1496: ;
(*F->r_654) = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->r_654))), rt_str("->", 2)), F->field_653));
ret_:

  return;
}

static int f_is_task_name_657(struct f_greenc_1fr *up_, rstr n_656) {
  struct f_is_task_name_657fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_656 = rt_str_copy(n_656);
F->y_1501 = NULL;
F->y_1501 = f_lookup_326(F->up, F->n_656);
F->result_ = ((F->y_1501 != NULL) && ((*(P110)rt_nil_check(F->y_1501)).kind_ == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_661(struct f_greenc_1fr *up_, P163 e_658, P110 *y_659, P163 *ix_660) {
  struct f_task_of_661fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_658 = e_658;
F->y_659 = y_659;
F->ix_660 = ix_660;
F->n_1502 = NULL;
F->n_1502 = F->e_658;
(*F->ix_660) = NULL;
if (((*(P163)rt_nil_check(F->e_658)).kind_ == ((rt_int)8LL))) {
F->n_1502 = (*(P163)rt_nil_check(F->e_658)).a_;
(*F->ix_660) = (*(P163)rt_nil_check(F->e_658)).b_;
}
if (((*(P163)rt_nil_check(F->n_1502)).kind_ != ((rt_int)5LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_658)).line_, rt_str("a task name is required", 23));
}
(*F->y_659) = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1502)).name_)));
if ((((*F->y_659) == NULL) || ((*(P110)rt_nil_check((*F->y_659))).kind_ != ((rt_int)9LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_658)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1502)).name_)), rt_str(" is not a task", 14)));
}
if ((((*F->ix_660) != NULL) && ((*(P110)rt_nil_check((*F->y_659))).c_ == NULL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_658)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1502)).name_)), rt_str(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_663(struct f_greenc_1fr *up_, P133 *r_662) {
  struct f_own_index_663fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_662 = r_662;
F->y_1503 = NULL;
F->y_1503 = f_lookup_326(F->up, rt_str("INDEX_", 6));
if ((F->y_1503 == NULL)) {
f_fail_202(F->up, ((rt_int)0LL), rt_str("not inside the body of a task family", 36));
}
f_access_of_477(F->up, F->y_1503, &(*F->r_662));
ret_:

  return;
}

static void f_member_668(struct f_greenc_1fr *up_, P110 y_664, rstr arr_665, rstr i_666, P133 *r_667) {
  struct f_member_668fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_664 = y_664;
F->arr_665 = rt_str_copy(arr_665);
F->i_666 = rt_str_copy(i_666);
F->r_667 = r_667;
F->lo_1504 = NULL;
F->hi_1505 = NULL;
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_664)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_664)).cname_)), rt_str("lo", 2)), &F->lo_1504);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_664)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_664)).cname_)), rt_str("hi", 2)), &F->hi_1505);
(*F->r_667) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->arr_665, rt_str("[rt_index(", 10)), F->i_666), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1504))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1505))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1504))), 93));
ret_:

  return;
}

static void f_act_path_671(struct f_greenc_1fr *up_, P110 y_669, P133 *r_670) {
  struct f_act_path_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_669 = y_669;
F->r_670 = r_670;
F->i_1506 = NULL;
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_669)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_669)).cname_)), rt_str("act", 3)), &(*F->r_670));
if (((*(P110)rt_nil_check(F->y_669)).c_ != NULL)) {
f_own_index_663(F->up, &F->i_1506);
f_member_668(F->up, F->y_669, (*(P133)rt_nil_check((*F->r_670))), (*(P133)rt_nil_check(F->i_1506)), &(*F->r_670));
}
ret_:

  return;
}

static void f_act_path_i_675(struct f_greenc_1fr *up_, P110 y_672, rstr i_673, P133 *r_674) {
  struct f_act_path_i_675fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_672 = y_672;
F->i_673 = rt_str_copy(i_673);
F->r_674 = r_674;
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_672)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_672)).cname_)), rt_str("act", 3)), &(*F->r_674));
f_member_668(F->up, F->y_672, (*(P133)rt_nil_check((*F->r_674))), F->i_673, &(*F->r_674));
ret_:

  return;
}

static void f_entry_path_679(struct f_greenc_1fr *up_, P110 y_676, rstr i_677, P133 *r_678) {
  struct f_entry_path_679fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_676 = y_676;
F->i_677 = rt_str_copy(i_677);
F->r_678 = r_678;
F->own_1507 = NULL;
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_676)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_676)).access_path_)), &(*F->r_678));
if (((((*(P110)rt_nil_check(F->y_676)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_676)).members_)).c_ != NULL)) && (!(*(P110)rt_nil_check(F->y_676)).ro_))) {
if (((F->i_677).len == ((rt_int)0LL))) {
f_own_index_663(F->up, &F->own_1507);
f_member_668(F->up, (*(P110)rt_nil_check(F->y_676)).members_, (*(P133)rt_nil_check((*F->r_678))), (*(P133)rt_nil_check(F->own_1507)), &(*F->r_678));
} else {
f_member_668(F->up, (*(P110)rt_nil_check(F->y_676)).members_, (*(P133)rt_nil_check((*F->r_678))), F->i_677, &(*F->r_678));
}
}
ret_:

  return;
}

static void f_declare_slot_682(struct f_greenc_1fr *up_, rstr ctype_name_680, rstr field_681) {
  struct f_declare_slot_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_680 = rt_str_copy(ctype_name_680);
F->field_681 = rt_str_copy(field_681);
if (F->up->in_func_131) {
f_put_to_206(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, F->ctype_name_680), 32), F->field_681), 59));
} else {
f_put_to_206(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), F->ctype_name_680), 32), F->field_681), 59));
}
ret_:

  return;
}

static void f_task_decl_684(struct f_greenc_1fr *up_, P163 e_683) {
  struct f_task_decl_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_683 = e_683;
if (((*(P163)rt_nil_check(F->e_683)).kind_ == ((rt_int)50LL))) {
f_task_spec_696(F->up, F->e_683);
} else if (((*(P163)rt_nil_check(F->e_683)).kind_ == ((rt_int)51LL))) {
f_task_body_700(F->up, F->e_683);
} else if (((*(P163)rt_nil_check(F->e_683)).kind_ == ((rt_int)52LL))) {
f_entry_decl_698(F->up, F->e_683);
} else {
f_generic_decl_776(F->up, F->e_683);
}
ret_:

  return;
}

static void f_family_arg_struct_685(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_685fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_162)) {
F->up->famarg_done_162 = 1;
f_put_to_206(F->up, F->up->out_types_121, rt_str("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_689(struct f_greenc_1fr *up_, P163 b_686, P110 y_687, P133 x_688) {
  struct f_family_bounds_689fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_686 = b_686;
F->y_687 = y_687;
F->x_688 = x_688;
F->lo_1508 = NULL;
F->hi_1509 = NULL;
F->v_1510 = NULL;
F->vt_1511 = NULL;
F->c_1512 = NULL;
(*(P110)rt_nil_check(F->y_687)).c_ = f_new_cons_353(F->up);
f_declare_slot_682(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_687)).access_path_)));
f_declare_slot_682(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_687)).cname_)), rt_str("flo", 3)));
f_declare_slot_682(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_687)).cname_)), rt_str("fhi", 3)));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_687)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_687)).cname_)), rt_str("flo", 3)), &F->lo_1508);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_687)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_687)).cname_)), rt_str("fhi", 3)), &F->hi_1509);
if (((*(P163)rt_nil_check(F->b_686)).kind_ == ((rt_int)14LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->b_686)).a_, NULL, &F->vt_1511, &F->v_1510);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1508)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1510))), 59));
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->b_686)).b_, F->vt_1511, &F->vt_1511, &F->v_1510);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->hi_1509)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1510))), 59));
} else {
f_resolve_380(F->up, F->b_686, &F->vt_1511, &F->c_1512);
if (((*(P170)rt_nil_check(F->c_1512)).lo_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->b_686)).line_, rt_str("an entry family needs a discrete range", 38));
}
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1508)), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1512)).lo_))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->hi_1509))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P170)rt_nil_check(F->c_1512)).hi_))), 59));
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_688)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1509))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1508))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1509))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1508))), rt_str(" + 1 : 1));", 11)));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1509))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1508))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_688))), rt_str("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_694(struct f_greenc_1fr *up_, P110 y_690, rstr base_691, rstr i_692, P133 *r_693) {
  struct f_entry_family_slot_694fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_690 = y_690;
F->base_691 = rt_str_copy(base_691);
F->i_692 = rt_str_copy(i_692);
F->r_693 = r_693;
F->lo_1513 = NULL;
F->hi_1514 = NULL;
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_690)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_690)).cname_)), rt_str("flo", 3)), &F->lo_1513);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_690)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_690)).cname_)), rt_str("fhi", 3)), &F->hi_1514);
(*F->r_693) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_691, rt_str("[rt_index(", 10)), F->i_692), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1513))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1514))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1513))), 93));
ret_:

  return;
}

static void f_task_spec_696(struct f_greenc_1fr *up_, P163 e_695) {
  struct f_task_spec_696fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_695 = e_695;
F->has_procs_1515 = 0;
F->fields_1517 = NULL;
F->ct_1518 = NULL;
F->pm_1519 = NULL;
F->fp_1520 = NULL;
F->flo_1521 = NULL;
F->fhi_1522 = NULL;
F->y_1523 = NULL;
F->m_1524 = NULL;
F->z_1525 = NULL;
F->saved_1526 = NULL;
F->saved_1526 = F->up->cur_task_160;
F->d_1527 = NULL;
F->v_1528 = NULL;
F->p_1529 = NULL;
F->p2_1530 = NULL;
F->vt_1531 = NULL;
F->r_1532 = NULL;
F->y_1523 = f_new_sym_350(F->up, ((rt_int)9LL), (*(P163)rt_nil_check(F->e_695)).name_);
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("t_", 2), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_695)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1523)).cname_);
(*(P110)rt_nil_check(F->y_1523)).decl_ = F->e_695;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1523)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1523)).access_path_ = (*(P110)rt_nil_check(F->y_1523)).cname_;
f_declare_slot_682(F->up, rt_str("rt_taskdecl", 11), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("decl", 4)));
if (((*(P163)rt_nil_check(F->e_695)).a_ != NULL)) {
F->r_1532 = (*(P163)rt_nil_check(F->e_695)).a_;
if (((*(P163)rt_nil_check(F->r_1532)).kind_ == ((rt_int)80LL))) {
F->r_1532 = (*(P163)rt_nil_check(F->r_1532)).a_;
}
(*(P110)rt_nil_check(F->y_1523)).c_ = f_new_cons_353(F->up);
f_declare_slot_682(F->up, rt_str("rt_act *", 8), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("act", 3)));
f_declare_slot_682(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("lo", 2)));
f_declare_slot_682(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("hi", 2)));
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1532)).a_, F->up->ty_int_149, &F->vt_1531, &F->v_1528);
(*(P110)rt_nil_check(F->y_1523)).t_ = F->vt_1531;
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1523)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("lo", 2)), &F->p_1529);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1529)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1528))), 59));
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->r_1532)).b_, F->up->ty_int_149, &F->vt_1531, &F->v_1528);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1523)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("hi", 2)), &F->p2_1530);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p2_1530)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1528))), 59));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1523)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("act", 3)), &F->v_1528);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->v_1528)), rt_str(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P133)rt_nil_check(F->p2_1530))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->p_1529))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->p2_1530))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->p_1529))), rt_str(" + 1 : 1));", 11)));
f_family_arg_struct_685(F->up);
} else {
f_declare_slot_682(F->up, rt_str("rt_act", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("act", 3)));
}
f_put_to_206(F->up, F->up->out_protos_124, rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_))), rt_str("run(void *a);", 13)));
if ((!F->up->in_func_131)) {
f_put_to_206(F->up, F->up->out_awaits_169, rt_str_cat(rt_str_cat(rt_str("  rt_await_decl(&", 17), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_))), rt_str("decl);", 6)));
}
f_open_scope_346(F->up);
F->up->cur_task_160 = F->y_1523;
F->saved_defer_1516 = F->up->defer_entry_structs_168;
F->up->defer_entry_structs_168 = 1;
f_decl_elements_430(F->up, (*(P163)rt_nil_check(F->e_695)).c_);
f_decl_elements_430(F->up, (*(P163)rt_nil_check(F->e_695)).d_);
F->up->defer_entry_structs_168 = F->saved_defer_1516;
F->m_1524 = F->up->scope_stack_114;
while (((F->m_1524 != NULL) && ((*(P110)rt_nil_check(F->m_1524)).depth_ == F->up->depth_113))) {
if ((((*(P110)rt_nil_check(F->m_1524)).kind_ == ((rt_int)10LL)) && (!(*(P110)rt_nil_check(F->m_1524)).from_use_))) {
F->fields_1517 = f_mk_185(F->up, rt_str(" int dummy_;", 12));
F->pm_1519 = (*(P110)rt_nil_check(F->m_1524)).params_;
while ((F->pm_1519 != NULL)) {
f_ctype_364(F->up, (*(P1041)rt_nil_check(F->pm_1519)).t_, &F->ct_1518);
if (((*(P1041)rt_nil_check(F->pm_1519)).mode_ == ((rt_int)1LL))) {
F->fields_1517 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1517)), 32), (*(P133)rt_nil_check(F->ct_1518))), 32), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1519)).cfield_))), 59));
} else {
F->fields_1517 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1517)), 32), (*(P133)rt_nil_check(F->ct_1518))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1519)).cfield_))), 59));
}
F->pm_1519 = (*(P1041)rt_nil_check(F->pm_1519)).next_;
}
L_end_1534: ;
f_put_to_206(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1524)).cname_))), rt_str("p {", 3)), (*(P133)rt_nil_check(F->fields_1517))), rt_str(" };", 3)));
}
F->m_1524 = (*(P110)rt_nil_check(F->m_1524)).stack_;
}
L_end_1533: ;
F->m_1524 = F->up->scope_stack_114;
while (((F->m_1524 != NULL) && ((*(P110)rt_nil_check(F->m_1524)).depth_ == F->up->depth_113))) {
if (((((*(P110)rt_nil_check(F->m_1524)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->m_1524)).kind_ == ((rt_int)4LL))) && (!(*(P110)rt_nil_check(F->m_1524)).from_use_))) {
if (((!F->has_procs_1515) && ((*(P110)rt_nil_check(F->y_1523)).c_ != NULL))) {
f_declare_slot_682(F->up, rt_str("void **", 7), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("frames", 6)));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1523)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("frames", 6)), &F->fp_1520);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1523)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("lo", 2)), &F->flo_1521);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1523)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("hi", 2)), &F->fhi_1522);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->fp_1520)), rt_str(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P133)rt_nil_check(F->fhi_1522))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->flo_1521))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->fhi_1522))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->flo_1521))), rt_str(" + 1 : 1));", 11)));
F->has_procs_1515 = 1;
} else if ((!F->has_procs_1515)) {
f_declare_slot_682(F->up, rt_str("void *", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("frame", 5)));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1523)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("frame", 5)), &F->fp_1520);
f_emit_208(F->up, rt_str_cat((*(P133)rt_nil_check(F->fp_1520)), rt_str(" = NULL;", 8)));
F->has_procs_1515 = 1;
}
if (((*(P110)rt_nil_check(F->y_1523)).c_ != NULL)) {
(*(P110)rt_nil_check(F->m_1524)).access_path_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("frames", 6)));
} else {
(*(P110)rt_nil_check(F->m_1524)).access_path_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1523)).cname_)), rt_str("frame", 5)));
}
(*(P110)rt_nil_check(F->m_1524)).members_ = F->y_1523;
}
f_copy_sym_599(F->up, F->m_1524, &F->z_1525);
(*(P110)rt_nil_check(F->z_1525)).hidden_ = (*(P110)rt_nil_check(F->m_1524)).from_use_;
(*(P110)rt_nil_check(F->z_1525)).mnext_ = (*(P110)rt_nil_check(F->y_1523)).members_;
(*(P110)rt_nil_check(F->y_1523)).members_ = F->z_1525;
F->m_1524 = (*(P110)rt_nil_check(F->m_1524)).stack_;
}
L_end_1535: ;
f_close_scope_347(F->up);
F->up->cur_task_160 = F->saved_1526;
f_define_345(F->up, F->y_1523, (*(P163)rt_nil_check(F->e_695)).line_);
ret_:

  return;
}

static void f_entry_decl_698(struct f_greenc_1fr *up_, P163 e_697) {
  struct f_entry_decl_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_697 = e_697;
F->y_1536 = NULL;
F->p_1537 = NULL;
F->p_1537 = (*(P163)rt_nil_check(F->e_697)).a_;
F->pm_1538 = NULL;
F->tail_1539 = NULL;
F->fields_1540 = NULL;
F->ct_1541 = NULL;
F->x_1542 = NULL;
F->lo_1543 = NULL;
F->hi_1544 = NULL;
if ((F->up->cur_task_160 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_697)).line_, rt_str("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_1536 = f_new_sym_350(F->up, ((rt_int)10LL), (*(P163)rt_nil_check(F->e_697)).name_);
f_new_name_188(F->up, rt_str_catc(rt_str_cat(rt_str("e_", 2), f_lower_s_196(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_697)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1536)).cname_);
F->fields_1540 = f_mk_185(F->up, rt_str(" int dummy_;", 12));
while ((F->p_1537 != NULL)) {
F->pm_1538 = ({ R1042 *cell1546 = rt_alloc(sizeof(R1042)); *cell1546 = cp_R1042(({ R1042 ag1547; ag1547.name_ = (*(P163)rt_nil_check(F->p_1537)).name_; ag1547.mode_ = (*(P163)rt_nil_check(F->p_1537)).ival_; ag1547.t_ = NULL; ag1547.c_ = NULL; ag1547.cfield_ = NULL; ag1547.dflt_ = NULL; ag1547.next_ = NULL; ag1547; })); (P1041)cell1546; });
f_resolve_380(F->up, (*(P163)rt_nil_check(F->p_1537)).a_, &(*(P1041)rt_nil_check(F->pm_1538)).t_, &(*(P1041)rt_nil_check(F->pm_1538)).c_);
(*(P1041)rt_nil_check(F->pm_1538)).cfield_ = f_mk_185(F->up, f_c_field_198(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_1537)).name_))));
f_ctype_364(F->up, (*(P1041)rt_nil_check(F->pm_1538)).t_, &F->ct_1541);
if (((*(P1041)rt_nil_check(F->pm_1538)).mode_ == ((rt_int)1LL))) {
F->fields_1540 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1540)), 32), (*(P133)rt_nil_check(F->ct_1541))), 32), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1538)).cfield_))), 59));
} else {
F->fields_1540 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1540)), 32), (*(P133)rt_nil_check(F->ct_1541))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1538)).cfield_))), 59));
}
if ((F->tail_1539 == NULL)) {
(*(P110)rt_nil_check(F->y_1536)).params_ = F->pm_1538;
} else {
(*(P1041)rt_nil_check(F->tail_1539)).next_ = F->pm_1538;
}
F->tail_1539 = F->pm_1538;
F->p_1537 = (*(P163)rt_nil_check(F->p_1537)).next_;
}
L_end_1545: ;
if ((!F->up->defer_entry_structs_168)) {
f_put_to_206(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1536)).cname_))), rt_str("p {", 3)), (*(P133)rt_nil_check(F->fields_1540))), rt_str(" };", 3)));
}
(*(P110)rt_nil_check(F->y_1536)).result_ = F->up->ty_void_154;
(*(P110)rt_nil_check(F->y_1536)).decl_ = F->e_697;
(*(P110)rt_nil_check(F->y_1536)).members_ = F->up->cur_task_160;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1536)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1536)).access_path_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1536)).cname_)), rt_str("ent", 3)));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1536)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1536)).access_path_)), &F->x_1542);
(*(P110)rt_nil_check(F->y_1536)).ro_ = ((((*(P110)rt_nil_check(F->up->cur_task_160)).c_ != NULL) && F->up->in_func_131) && (F->up->cur_level_132 > (*(P110)rt_nil_check(F->up->cur_task_160)).level_));
if (((*(P163)rt_nil_check(F->e_697)).b_ != NULL)) {
if ((((*(P110)rt_nil_check(F->up->cur_task_160)).c_ != NULL) && (!(*(P110)rt_nil_check(F->y_1536)).ro_))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_697)).line_, rt_str("an entry family in a task family is not handled", 47));
}
f_family_bounds_689(F->up, (*(P163)rt_nil_check(F->e_697)).b_, F->y_1536, F->x_1542);
} else if ((((*(P110)rt_nil_check(F->up->cur_task_160)).c_ != NULL) && (!(*(P110)rt_nil_check(F->y_1536)).ro_))) {
f_declare_slot_682(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1536)).access_path_)));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->up->cur_task_160)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_160)).cname_)), rt_str("lo", 2)), &F->lo_1543);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->up->cur_task_160)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_160)).cname_)), rt_str("hi", 2)), &F->hi_1544);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_1542)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1544))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1543))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1544))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1543))), rt_str(" + 1 : 1));", 11)));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1544))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1543))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_1542))), rt_str("[k_]);", 6)));
} else {
f_declare_slot_682(F->up, rt_str("rt_entry", 8), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1536)).access_path_)));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("rt_entry_init(&", 15), (*(P133)rt_nil_check(F->x_1542))), rt_str(");", 2)));
}
f_define_345(F->up, F->y_1536, (*(P163)rt_nil_check(F->e_697)).line_);
ret_:

  return;
}

static void f_task_body_700(struct f_greenc_1fr *up_, P163 e_699) {
  struct f_task_body_700fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_699 = e_699;
F->y_1548 = NULL;
F->y_1548 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_699)).name_)));
F->b_1549 = NULL;
F->m_1550 = NULL;
F->z_1551 = NULL;
F->upp_1552 = NULL;
F->saved_1553 = NULL;
F->saved_1553 = F->up->cur_task_160;
if (((F->y_1548 != NULL) && ((*(P110)rt_nil_check(F->y_1548)).kind_ == ((rt_int)11LL)))) {
f_attach_generic_body_780(F->up, F->e_699);
goto ret_;
}
if (((F->y_1548 == NULL) || ((*(P110)rt_nil_check(F->y_1548)).kind_ != ((rt_int)9LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_699)).line_, rt_str_cat(rt_str_cat(rt_str("task body ", 10), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_699)).name_))), rt_str(" has no task specification", 26)));
}
F->b_1549 = f_new_sym_350(F->up, ((rt_int)4LL), (*(P163)rt_nil_check(F->e_699)).name_);
(*(P110)rt_nil_check(F->b_1549)).cname_ = f_mk_185(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1548)).cname_)), rt_str("body", 4)));
(*(P110)rt_nil_check(F->b_1549)).result_ = F->up->ty_void_154;
(*(P110)rt_nil_check(F->b_1549)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->b_1549)).decl_ = F->e_699;
if (((*(P110)rt_nil_check(F->y_1548)).c_ != NULL)) {
(*(P110)rt_nil_check(F->b_1549)).params_ = ({ R1042 *cell1554 = rt_alloc(sizeof(R1042)); *cell1554 = cp_R1042(({ R1042 ag1555; ag1555.name_ = f_mk_185(F->up, rt_str("INDEX_", 6)); ag1555.mode_ = ((rt_int)1LL); ag1555.t_ = F->up->ty_int_149; ag1555.c_ = NULL; ag1555.cfield_ = f_mk_185(F->up, rt_str("index_", 6)); ag1555.dflt_ = NULL; ag1555.next_ = NULL; ag1555; })); (P1041)cell1554; });
}
f_open_scope_346(F->up);
F->m_1550 = (*(P110)rt_nil_check(F->y_1548)).members_;
while ((F->m_1550 != NULL)) {
f_copy_sym_599(F->up, F->m_1550, &F->z_1551);
f_define_345(F->up, F->z_1551, (*(P163)rt_nil_check(F->e_699)).line_);
if ((((((*(P110)rt_nil_check(F->m_1550)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->m_1550)).kind_ == ((rt_int)4LL))) && ((*(P110)rt_nil_check(F->m_1550)).access_path_ != NULL)) && f_same_task_329(F->up, (*(P110)rt_nil_check(F->m_1550)).members_, F->y_1548))) {
if (((*(P110)rt_nil_check(F->y_1548)).level_ > ((rt_int)0LL))) {
F->upp_1552 = f_mk_185(F->up, rt_str("up_->", 5));
} else {
F->upp_1552 = f_mk_185(F->up, rt_str("", 0));
}
if (((*(P110)rt_nil_check(F->y_1548)).c_ != NULL)) {
(*(P110)rt_nil_check(F->b_1549)).access_path_ = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->upp_1552)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1550)).access_path_))), rt_str("[index_ - ", 10)), (*(P133)rt_nil_check(F->upp_1552))), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1548)).cname_))), rt_str("lo] = F;", 8)));
} else {
(*(P110)rt_nil_check(F->b_1549)).access_path_ = f_mk_185(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->upp_1552)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1550)).access_path_))), rt_str(" = F;", 5)));
}
}
F->m_1550 = (*(P110)rt_nil_check(F->m_1550)).mnext_;
}
L_end_1556: ;
F->up->cur_task_160 = F->y_1548;
f_subprogram_body_437(F->up, F->e_699, F->b_1549);
F->up->cur_task_160 = F->saved_1553;
f_close_scope_347(F->up);
if ((((*(P110)rt_nil_check(F->y_1548)).c_ != NULL) && ((*(P110)rt_nil_check(F->b_1549)).level_ > ((rt_int)0LL)))) {
f_put_to_206(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1548)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1549)).cname_))), rt_str("(g->up, g->i); }", 16)));
} else if (((*(P110)rt_nil_check(F->y_1548)).c_ != NULL)) {
f_put_to_206(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1548)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1549)).cname_))), rt_str("(g->i); }", 9)));
} else if (((*(P110)rt_nil_check(F->b_1549)).level_ > ((rt_int)0LL))) {
f_put_to_206(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1548)).cname_))), rt_str("run(void *a) { ", 15)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1549)).cname_))), rt_str("(a); }", 6)));
} else {
f_put_to_206(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1548)).cname_))), rt_str("run(void *a) { (void)a; ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1549)).cname_))), rt_str("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_703(struct f_greenc_1fr *up_, P163 decls_701, P133 *aw_702) {
  struct f_task_awaits_703fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_701 = decls_701;
F->aw_702 = aw_702;
F->e_1557 = NULL;
F->e_1557 = F->decls_701;
F->y_1558 = NULL;
F->p_1559 = NULL;
(*F->aw_702) = f_mk_185(F->up, rt_str("", 0));
while ((F->e_1557 != NULL)) {
if ((((*(P163)rt_nil_check(F->e_1557)).kind_ == ((rt_int)50LL)) || (((*(P163)rt_nil_check(F->e_1557)).kind_ == ((rt_int)53LL)) && ((*(P163)rt_nil_check(F->e_1557)).ival_ == ((rt_int)50LL))))) {
F->y_1558 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_1557)).name_)));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1558)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1558)).cname_)), rt_str("decl", 4)), &F->p_1559);
(*F->aw_702) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->aw_702))), rt_str(" rt_await_decl(&", 16)), (*(P133)rt_nil_check(F->p_1559))), rt_str(");", 2)));
}
F->e_1557 = (*(P163)rt_nil_check(F->e_1557)).next_;
}
L_end_1560: ;
ret_:

  return;
}

static void f_task_failure_705(struct f_greenc_1fr *up_, P163 s_704) {
  struct f_task_failure_705fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_704 = s_704;
F->y_1561 = NULL;
F->y_1561 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_704)).tag_)));
F->a_1562 = NULL;
F->i_1563 = NULL;
F->it_1564 = NULL;
if (((*(P163)rt_nil_check(F->s_704)).a_ != NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_704)).a_, (*(P110)rt_nil_check(F->y_1561)).t_, &F->it_1564, &F->i_1563);
f_act_path_i_675(F->up, F->y_1561, (*(P133)rt_nil_check(F->i_1563)), &F->a_1562);
} else {
f_act_path_671(F->up, F->y_1561, &F->a_1562);
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("rt_exterminate(&", 16), (*(P133)rt_nil_check(F->a_1562))), rt_str(");", 2)));
ret_:

  return;
}

static void f_entry_sym_709(struct f_greenc_1fr *up_, P163 e_706, P110 *y_707, P163 *ix_708) {
  struct f_entry_sym_709fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_706 = e_706;
F->y_707 = y_707;
F->ix_708 = ix_708;
F->t_1565 = NULL;
(*F->ix_708) = NULL;
F->up->fam_ix_165 = NULL;
if (((*(P163)rt_nil_check(F->e_706)).kind_ == ((rt_int)8LL))) {
f_entry_sym_709(F->up, (*(P163)rt_nil_check(F->e_706)).a_, &(*F->y_707), &(*F->ix_708));
if (((*(P110)rt_nil_check((*F->y_707))).c_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_706)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*F->y_707))).name_)), rt_str(" is not an entry family", 23)));
}
F->up->fam_ix_165 = (*(P163)rt_nil_check(F->e_706)).b_;
goto ret_;
}
if (((((*(P163)rt_nil_check(F->e_706)).kind_ == ((rt_int)9LL)) && ((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_706)).a_)).kind_ == ((rt_int)8LL))) && ((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_706)).a_)).a_)).kind_ == ((rt_int)5LL)))) {
F->t_1565 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_706)).a_)).a_)).name_)));
if ((((F->t_1565 == NULL) || ((*(P110)rt_nil_check(F->t_1565)).kind_ != ((rt_int)9LL))) || ((*(P110)rt_nil_check(F->t_1565)).c_ == NULL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_706)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_706)).a_)).a_)).name_)), rt_str(" is not a task family", 21)));
}
(*F->y_707) = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_706)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_706)).name_)), (*(P163)rt_nil_check(F->e_706)).line_);
(*F->ix_708) = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_706)).a_)).b_;
if ((((*F->y_707) == NULL) || ((*(P110)rt_nil_check((*F->y_707))).kind_ != ((rt_int)10LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_706)).line_, rt_str("not an entry", 12));
}
goto ret_;
}
if (((*(P163)rt_nil_check(F->e_706)).kind_ == ((rt_int)5LL))) {
(*F->y_707) = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_706)).name_)));
if (((*(P163)rt_nil_check(F->e_706)).tag_ != NULL)) {
(*F->y_707) = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_706)).tag_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_706)).name_)), (*(P163)rt_nil_check(F->e_706)).line_);
}
} else if ((((*(P163)rt_nil_check(F->e_706)).kind_ == ((rt_int)9LL)) && f_is_package_590(F->up, (*(P163)rt_nil_check(F->e_706)).a_))) {
(*F->y_707) = f_member_of_594(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->e_706)).a_)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_706)).name_)), (*(P163)rt_nil_check(F->e_706)).line_);
} else {
(*F->y_707) = NULL;
}
if ((((*F->y_707) == NULL) || ((*(P110)rt_nil_check((*F->y_707))).kind_ != ((rt_int)10LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_706)).line_, rt_str("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_714(struct f_greenc_1fr *up_, P163 e_710, int is_stmt_711, P115 *t_712, P133 *r_713) {
  struct f_other_call_714fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_710 = e_710;
F->is_stmt_711 = is_stmt_711;
F->t_712 = t_712;
F->r_713 = r_713;
F->y_1566 = NULL;
F->pm_1567 = NULL;
F->a_1568 = NULL;
F->parts_1569 = NULL;
F->v_1570 = NULL;
F->lv_1571 = NULL;
F->ent_1572 = NULL;
F->act_1573 = NULL;
F->i_1574 = NULL;
F->vt_1575 = NULL;
F->lt_1576 = NULL;
F->lc_1577 = NULL;
F->ix_1579 = NULL;
F->fix_1580 = NULL;
F->args_node_1581 = NULL;
f_entry_sym_709(F->up, (*(P163)rt_nil_check(F->e_710)).a_, &F->y_1566, &F->ix_1579);
F->fix_1580 = F->up->fam_ix_165;
F->args_node_1581 = (*(P163)rt_nil_check(F->e_710)).b_;
if ((((*(P110)rt_nil_check(F->y_1566)).c_ != NULL) && (F->fix_1580 == NULL))) {
F->fix_1580 = (*(P163)rt_nil_check(F->e_710)).b_;
F->args_node_1581 = NULL;
}
F->i_1574 = f_mk_185(F->up, rt_str("", 0));
if ((F->ix_1579 != NULL)) {
f_gexpr_522(F->up, F->ix_1579, F->up->ty_int_149, &F->vt_1575, &F->i_1574);
} else if (((((*(P110)rt_nil_check(F->y_1566)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1566)).members_)).c_ != NULL)) && ((*(P110)rt_nil_check(F->y_1566)).members_ != F->up->cur_task_160))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_710)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a member of family ", 19), (*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1566)).members_)).name_))), rt_str(" must be named: F(I).", 21)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1566)).name_))));
}
if ((!F->is_stmt_711)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_710)).line_, rt_str("an entry call is a statement", 28));
}
if ((F->up->pure_sym_178 != NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_710)).line_, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_679(F->up, F->y_1566, (*(P133)rt_nil_check(F->i_1574)), &F->ent_1572);
if (((*(P110)rt_nil_check(F->y_1566)).c_ != NULL)) {
if ((F->fix_1580 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_710)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1566)).name_)), rt_str(" is an entry family: name a member, ", 36)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1566)).name_))), rt_str("(I)", 3)));
}
f_gexpr_522(F->up, F->fix_1580, NULL, &F->vt_1575, &F->v_1570);
f_entry_family_slot_694(F->up, F->y_1566, (*(P133)rt_nil_check(F->ent_1572)), (*(P133)rt_nil_check(F->v_1570)), &F->ent_1572);
}
F->parts_1569 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str("({ struct ", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1566)).cname_))), rt_str("p p_;", 5)));
F->pm_1567 = (*(P110)rt_nil_check(F->y_1566)).params_;
while ((F->pm_1567 != NULL)) {
F->a_1568 = f_actual_for_571(F->up, F->args_node_1581, F->pm_1567, (*(P110)rt_nil_check(F->y_1566)).params_);
if ((F->a_1568 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_710)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1567)).name_))));
}
if (((*(P1041)rt_nil_check(F->pm_1567)).mode_ == ((rt_int)1LL))) {
f_gexpr_522(F->up, F->a_1568, (*(P1041)rt_nil_check(F->pm_1567)).t_, &F->vt_1575, &F->v_1570);
f_check_type_359(F->up, F->vt_1575, (*(P1041)rt_nil_check(F->pm_1567)).t_, (*(P163)rt_nil_check(F->e_710)).line_);
F->parts_1569 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1569)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1567)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1570))), 59));
} else {
f_lvalue_494(F->up, F->a_1568, &F->lv_1571, &F->lt_1576, &F->lc_1577, &F->ro_1578);
if (F->ro_1578) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_710)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1567)).name_)), rt_str(" needs a variable", 17)));
}
f_check_type_359(F->up, F->lt_1576, (*(P1041)rt_nil_check(F->pm_1567)).t_, (*(P163)rt_nil_check(F->e_710)).line_);
F->parts_1569 = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1569)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1567)).cfield_))), rt_str(" = &", 4)), (*(P133)rt_nil_check(F->lv_1571))), 59));
}
F->pm_1567 = (*(P1041)rt_nil_check(F->pm_1567)).next_;
}
L_end_1582: ;
if ((((*(P110)rt_nil_check(F->y_1566)).members_ != NULL) && ((*(P110)rt_nil_check(F->y_1566)).members_ != F->up->cur_task_160))) {
if ((F->ix_1579 != NULL)) {
f_act_path_i_675(F->up, (*(P110)rt_nil_check(F->y_1566)).members_, (*(P133)rt_nil_check(F->i_1574)), &F->act_1573);
} else {
f_act_path_671(F->up, (*(P110)rt_nil_check(F->y_1566)).members_, &F->act_1573);
}
F->parts_1569 = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1569)), rt_str(" if (!rt_is_active(&", 20)), (*(P133)rt_nil_check(F->act_1573))), rt_str(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_712) = F->up->ty_void_154;
(*F->r_713) = f_mk_185(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1569)), rt_str(" rt_entry_call(&", 16)), (*(P133)rt_nil_check(F->ent_1572))), rt_str(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_719(struct f_greenc_1fr *up_, P163 e_715, P110 y_716, P115 *t_717, P133 *r_718) {
  struct f_other_attr_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_715 = e_715;
F->y_716 = y_716;
F->t_717 = t_717;
F->r_718 = r_718;
F->a_1583 = rt_str_copy((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_715)).name_)));
F->p_1584 = NULL;
if ((((*(P110)rt_nil_check(F->y_716)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1583, rt_str("INDEX", 5)))) {
if (((*(P110)rt_nil_check(F->y_716)).c_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_715)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_716)).name_)), rt_str(" is not a task family", 21)));
}
f_own_index_663(F->up, &F->p_1584);
(*F->t_717) = F->up->ty_int_149;
if (((*(P110)rt_nil_check(F->y_716)).t_ != NULL)) {
(*F->t_717) = (*(P110)rt_nil_check(F->y_716)).t_;
}
(*F->r_718) = F->p_1584;
} else if ((((*(P110)rt_nil_check(F->y_716)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1583, rt_str("ACTIVE", 6)))) {
f_act_path_671(F->up, F->y_716, &F->p_1584);
(*F->t_717) = F->up->ty_bool_150;
(*F->r_718) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1584))), 41));
} else if ((((*(P110)rt_nil_check(F->y_716)).kind_ == ((rt_int)9LL)) && rt_str_eq(F->a_1583, rt_str("PRIORITY", 8)))) {
f_act_path_671(F->up, F->y_716, &F->p_1584);
(*F->t_717) = F->up->ty_int_149;
(*F->r_718) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1584))), 41));
} else if ((((*(P110)rt_nil_check(F->y_716)).kind_ == ((rt_int)10LL)) && rt_str_eq(F->a_1583, rt_str("COUNT", 5)))) {
if (((*(P110)rt_nil_check(F->y_716)).members_ != F->up->cur_task_160)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_715)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_679(F->up, F->y_716, rt_str("", 0), &F->p_1584);
(*F->t_717) = F->up->ty_int_149;
(*F->r_718) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P133)rt_nil_check(F->p_1584))), 41));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_715)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1583), rt_str(" is not handled here", 20)));
(*F->t_717) = F->up->ty_int_149;
(*F->r_718) = NULL;
}
ret_:

  return;
}

static void f_member_attr_723(struct f_greenc_1fr *up_, P163 e_720, P115 *t_721, P133 *r_722) {
  struct f_member_attr_723fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_720 = e_720;
F->t_721 = t_721;
F->r_722 = r_722;
F->y_1585 = NULL;
F->ix_1586 = NULL;
F->i_1587 = NULL;
F->p_1588 = NULL;
F->vt_1589 = NULL;
f_task_of_661(F->up, (*(P163)rt_nil_check(F->e_720)).a_, &F->y_1585, &F->ix_1586);
f_gexpr_522(F->up, F->ix_1586, F->up->ty_int_149, &F->vt_1589, &F->i_1587);
f_act_path_i_675(F->up, F->y_1585, (*(P133)rt_nil_check(F->i_1587)), &F->p_1588);
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_720)).name_)), rt_str("ACTIVE", 6))) {
(*F->t_721) = F->up->ty_bool_150;
(*F->r_722) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1588))), 41));
} else if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_720)).name_)), rt_str("PRIORITY", 8))) {
(*F->t_721) = F->up->ty_int_149;
(*F->r_722) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1588))), 41));
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_720)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_720)).name_))), rt_str(" is not handled for a family member", 35)));
(*F->t_721) = F->up->ty_int_149;
(*F->r_722) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_729(struct f_greenc_1fr *up_, rstr name_724, P163 args_725, rt_int line_726, P115 *t_727, P133 *r_728) {
  struct f_task_builtin_729fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_724 = rt_str_copy(name_724);
F->args_725 = args_725;
F->line_726 = line_726;
F->t_727 = t_727;
F->r_728 = r_728;
F->vt_1590 = NULL;
F->v_1591 = NULL;
(*F->t_727) = F->up->ty_void_154;
if (rt_str_eq(F->name_724, rt_str("SET_PRIORITY", 12))) {
f_gexpr_522(F->up, F->args_725, F->up->ty_int_149, &F->vt_1590, &F->v_1591);
(*F->r_728) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("rt_set_priority(rt_me(), ", 25), (*(P133)rt_nil_check(F->v_1591))), 41));
} else {
f_fail_202(F->up, F->line_726, rt_str_cat(F->name_724, rt_str(" is not declared", 16)));
(*F->r_728) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_731(struct f_greenc_1fr *up_, P163 s_730) {
  struct f_gen_accept_731fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_730 = s_730;
F->y_1592 = NULL;
F->y_1592 = f_lookup_entry_332(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_730)).name_)), F->up->cur_task_160);
F->saved_ax_1593 = NULL;
F->ent_1594 = NULL;
F->ep_1595 = NULL;
F->xf_1596 = NULL;
F->x_1597 = NULL;
F->pm_1598 = NULL;
F->f_1599 = NULL;
F->f_1599 = (*(P163)rt_nil_check(F->s_730)).a_;
F->p_1600 = NULL;
if (((F->y_1592 == NULL) || ((*(P110)rt_nil_check(F->y_1592)).kind_ != ((rt_int)10LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_730)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->s_730)).name_)), rt_str(" is not an entry", 16)));
}
if ((!f_same_task_329(F->up, (*(P110)rt_nil_check(F->y_1592)).members_, F->up->cur_task_160))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_730)).line_, rt_str("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_679(F->up, F->y_1592, rt_str("", 0), &F->ent_1594);
f_member_slot_735(F->up, F->y_1592, F->s_730, &F->ent_1594);
if (((*(P163)rt_nil_check(F->s_730)).flag_ == ((rt_int)0LL))) {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_accept_begin(&", 19), (*(P133)rt_nil_check(F->ent_1594))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1594))), rt_str(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_188(F->up, rt_str("ep", 2), &F->ep_1595);
f_new_name_188(F->up, rt_str("xf", 2), &F->xf_1596);
f_new_name_188(F->up, rt_str("x", 1), &F->x_1597);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1592)).cname_))), rt_str("p *", 3)), (*(P133)rt_nil_check(F->ep_1595))), rt_str(" = rt_accept_begin(&", 20)), (*(P133)rt_nil_check(F->ent_1594))), rt_str(");", 2)));
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str("rt_frame ", 9), (*(P133)rt_nil_check(F->xf_1596))), 59));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->xf_1596))), rt_str(")) {", 4)));
f_push_cleanup_443(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1596))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1594))), rt_str(", 0, 0);", 8)));
f_open_scope_346(F->up);
F->pm_1598 = (*(P110)rt_nil_check(F->y_1592)).params_;
while ((F->pm_1598 != NULL)) {
if (((*(P1041)rt_nil_check(F->pm_1598)).mode_ == ((rt_int)1LL))) {
F->p_1600 = f_new_sym_350(F->up, ((rt_int)2LL), (*(P1041)rt_nil_check(F->pm_1598)).name_);
(*(P110)rt_nil_check(F->p_1600)).ro_ = 1;
(*(P110)rt_nil_check(F->p_1600)).access_path_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->ep_1595))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1598)).cfield_))), 41));
} else {
F->p_1600 = f_new_sym_350(F->up, ((rt_int)1LL), (*(P1041)rt_nil_check(F->pm_1598)).name_);
(*(P110)rt_nil_check(F->p_1600)).access_path_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->ep_1595))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1041)rt_nil_check(F->pm_1598)).cfield_))), 41));
}
if ((F->f_1599 != NULL)) {
(*(P110)rt_nil_check(F->p_1600)).name_ = (*(P163)rt_nil_check(F->f_1599)).name_;
F->f_1599 = (*(P163)rt_nil_check(F->f_1599)).next_;
}
(*(P110)rt_nil_check(F->p_1600)).t_ = (*(P1041)rt_nil_check(F->pm_1598)).t_;
(*(P110)rt_nil_check(F->p_1600)).c_ = (*(P1041)rt_nil_check(F->pm_1598)).c_;
f_define_345(F->up, F->p_1600, (*(P163)rt_nil_check(F->s_730)).line_);
F->pm_1598 = (*(P1041)rt_nil_check(F->pm_1598)).next_;
}
L_end_1601: ;
F->up->accept_depth_161 = rt_add(F->up->accept_depth_161, ((rt_int)1LL));
F->saved_ax_1593 = F->up->accept_exits_142;
F->up->accept_exits_142 = F->up->exits_138;
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->s_730)).b_);
F->up->accept_exits_142 = F->saved_ax_1593;
F->up->accept_depth_161 = rt_sub(F->up->accept_depth_161, ((rt_int)1LL));
f_close_scope_347(F->up);
f_pop_cleanup_444(F->up);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1596))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1594))), rt_str(", 0, 0);", 8)));
f_emit_208(F->up, rt_str("} else {", 8));
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1596))), rt_str("); int ", 7)), (*(P133)rt_nil_check(F->x_1597))), rt_str(" = rt_xcur; rt_accept_end(&", 27)), (*(P133)rt_nil_check(F->ent_1594))), rt_str(", 1, ", 5)), (*(P133)rt_nil_check(F->x_1597))), rt_str("); rt_raise(", 12)), (*(P133)rt_nil_check(F->x_1597))), rt_str(");", 2)));
f_emit_208(F->up, rt_str("}", 1));
f_emit_208(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_member_slot_735(struct f_greenc_1fr *up_, P110 y_732, P163 s_733, P133 *ent_734) {
  struct f_member_slot_735fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_732 = y_732;
F->s_733 = s_733;
F->ent_734 = ent_734;
F->vt_1602 = NULL;
F->v_1603 = NULL;
if (((*(P110)rt_nil_check(F->y_732)).c_ != NULL)) {
if (((*(P163)rt_nil_check(F->s_733)).c_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_733)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_732)).name_)), rt_str(" is an entry family: accept ", 28)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_732)).name_))), rt_str("(I)", 3)));
}
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->s_733)).c_, NULL, &F->vt_1602, &F->v_1603);
f_entry_family_slot_694(F->up, F->y_732, (*(P133)rt_nil_check((*F->ent_734))), (*(P133)rt_nil_check(F->v_1603)), &(*F->ent_734));
} else if (((*(P163)rt_nil_check(F->s_733)).c_ != NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_733)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_732)).name_)), rt_str(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_738(struct f_greenc_1fr *up_, P163 e_736, P133 *r_737) {
  struct f_gen_delay_ticks_738fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_736 = e_736;
F->r_737 = r_737;
F->vt_1604 = NULL;
F->v_1605 = NULL;
f_gexpr_522(F->up, F->e_736, F->up->ty_float_151, &F->vt_1604, &F->v_1605);
f_check_type_359(F->up, F->vt_1604, F->up->ty_float_151, (*(P163)rt_nil_check(F->e_736)).line_);
(*F->r_737) = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str("(rt_int)llround(", 16), (*(P133)rt_nil_check(F->v_1605))), 41));
ret_:

  return;
}

static void f_gen_select_740(struct f_greenc_1fr *up_, P163 s_739) {
  struct f_gen_select_740fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_739 = s_739;
F->alt_1606 = NULL;
F->alt_1606 = (*(P163)rt_nil_check(F->s_739)).a_;
F->n_1607 = ((rt_int)0LL);
F->has_delay_1609 = 0;
F->has_accept_1610 = 0;
F->al_1611 = NULL;
F->w_1612 = NULL;
F->g_1613 = NULL;
F->ent_1614 = NULL;
F->ticks_1615 = NULL;
F->vt_1616 = NULL;
F->y_1617 = NULL;
f_new_name_188(F->up, rt_str("al", 2), &F->al_1611);
f_new_name_188(F->up, rt_str("w", 1), &F->w_1612);
while ((F->alt_1606 != NULL)) {
F->n_1607 = rt_add(F->n_1607, ((rt_int)1LL));
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1606)).b_)).kind_ == ((rt_int)32LL))) {
F->has_delay_1609 = 1;
} else {
F->has_accept_1610 = 1;
}
F->alt_1606 = (*(P163)rt_nil_check(F->alt_1606)).next_;
}
L_end_1618: ;
if ((((*(P163)rt_nil_check(F->s_739)).flag_ == ((rt_int)1LL)) && F->has_delay_1609)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_739)).line_, rt_str("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_1610)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_739)).line_, rt_str("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ rt_alt ", 9), (*(P133)rt_nil_check(F->al_1611))), 91), rt_str_of_int(rt_add(F->n_1607, ((rt_int)1LL)))), rt_str("]; int open_ = 0;", 17)));
F->alt_1606 = (*(P163)rt_nil_check(F->s_739)).a_;
F->i_1608 = ((rt_int)0LL);
while ((F->alt_1606 != NULL)) {
F->g_1613 = f_mk_185(F->up, rt_str("1", 1));
if (((*(P163)rt_nil_check(F->alt_1606)).a_ != NULL)) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->alt_1606)).a_, F->up->ty_bool_150, &F->vt_1616, &F->g_1613);
f_check_type_359(F->up, F->vt_1616, F->up->ty_bool_150, (*(P163)rt_nil_check(F->alt_1606)).line_);
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1606)).b_)).kind_ == ((rt_int)34LL))) {
F->y_1617 = f_lookup_entry_332(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1606)).b_)).name_)), F->up->cur_task_160);
if (((F->y_1617 == NULL) || ((*(P110)rt_nil_check(F->y_1617)).kind_ != ((rt_int)10LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->alt_1606)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1606)).b_)).name_)), rt_str(" is not an entry", 16)));
}
f_entry_path_679(F->up, F->y_1617, rt_str("", 0), &F->ent_1614);
f_member_slot_735(F->up, F->y_1617, (*(P163)rt_nil_check(F->alt_1606)).b_, &F->ent_1614);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1611)), 91), rt_str_of_int(F->i_1608)), rt_str("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P133)rt_nil_check(F->g_1613))), rt_str("), &", 4)), (*(P133)rt_nil_check(F->ent_1614))), rt_str(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_738(F->up, (*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1606)).b_)).a_, &F->ticks_1615);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1611)), 91), rt_str_of_int(F->i_1608)), rt_str("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P133)rt_nil_check(F->g_1613))), rt_str("), NULL, NULL, ", 15)), (*(P133)rt_nil_check(F->ticks_1615))), rt_str("};", 2)));
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("open_ |= ", 9), (*(P133)rt_nil_check(F->al_1611))), 91), rt_str_of_int(F->i_1608)), rt_str("].open;", 7)));
F->i_1608 = rt_add(F->i_1608, ((rt_int)1LL));
F->alt_1606 = (*(P163)rt_nil_check(F->alt_1606)).next_;
}
L_end_1619: ;
if (((*(P163)rt_nil_check(F->s_739)).flag_ == ((rt_int)1LL))) {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1611)), 91), rt_str_of_int(F->n_1607)), rt_str("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_1607 = rt_add(F->n_1607, ((rt_int)1LL));
} else {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!open_) rt_raise(rt_exc(", 28), f_q_199(F->up)), rt_str("SELECT_ERROR", 12)), f_q_199(F->up)), rt_str("));", 3)));
}
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->w_1612))), rt_str(" = rt_wait(", 11)), rt_str_of_int(F->n_1607)), rt_str(", ", 2)), (*(P133)rt_nil_check(F->al_1611))), rt_str(");", 2)));
F->alt_1606 = (*(P163)rt_nil_check(F->s_739)).a_;
F->i_1608 = ((rt_int)0LL);
while ((F->alt_1606 != NULL)) {
if ((F->i_1608 == ((rt_int)0LL))) {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->w_1612))), rt_str(" == 0) {", 8)));
} else {
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->w_1612))), rt_str(" == ", 4)), rt_str_of_int(F->i_1608)), rt_str(") {", 3)));
}
if (((*(P163)rt_nil_check((*(P163)rt_nil_check(F->alt_1606)).b_)).kind_ == ((rt_int)34LL))) {
f_gen_accept_731(F->up, (*(P163)rt_nil_check(F->alt_1606)).b_);
}
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->alt_1606)).c_);
F->i_1608 = rt_add(F->i_1608, ((rt_int)1LL));
F->alt_1606 = (*(P163)rt_nil_check(F->alt_1606)).next_;
}
L_end_1620: ;
if (((*(P163)rt_nil_check(F->s_739)).flag_ == ((rt_int)1LL))) {
f_emit_208(F->up, rt_str("} else {", 8));
f_gen_statements_439(F->up, (*(P163)rt_nil_check(F->s_739)).b_);
}
f_emit_208(F->up, rt_str("}", 1));
f_emit_208(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_family_range_745(struct f_greenc_1fr *up_, P110 y_741, P163 ix_742, P133 *lo_743, P133 *hi_744) {
  struct f_family_range_745fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_741 = y_741;
F->ix_742 = ix_742;
F->lo_743 = lo_743;
F->hi_744 = hi_744;
F->vt_1621 = NULL;
if ((F->ix_742 == NULL)) {
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_741)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_741)).cname_)), rt_str("lo", 2)), &(*F->lo_743));
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_741)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_741)).cname_)), rt_str("hi", 2)), &(*F->hi_744));
} else if (((*(P163)rt_nil_check(F->ix_742)).kind_ == ((rt_int)14LL))) {
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->ix_742)).a_, F->up->ty_int_149, &F->vt_1621, &(*F->lo_743));
f_gexpr_522(F->up, (*(P163)rt_nil_check(F->ix_742)).b_, F->up->ty_int_149, &F->vt_1621, &(*F->hi_744));
} else {
f_gexpr_522(F->up, F->ix_742, F->up->ty_int_149, &F->vt_1621, &(*F->lo_743));
(*F->hi_744) = (*F->lo_743);
}
ret_:

  return;
}

static void f_task_statement_gen_747(struct f_greenc_1fr *up_, P163 s_746) {
  struct f_task_statement_gen_747fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_746 = s_746;
F->n_1622 = NULL;
F->ix_1623 = NULL;
F->y_1624 = NULL;
F->a_1625 = NULL;
F->d_1626 = NULL;
F->l_1627 = NULL;
F->ticks_1628 = NULL;
F->lo_1629 = NULL;
F->hi_1630 = NULL;
{ rt_int sel1631 = (*(P163)rt_nil_check(F->s_746)).kind_;
if (0 || sel1631 == ((rt_int)32LL)) {
f_gen_delay_ticks_738(F->up, (*(P163)rt_nil_check(F->s_746)).a_, &F->ticks_1628);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), (*(P133)rt_nil_check(F->ticks_1628))), rt_str(");", 2)));
} else if (0 || sel1631 == ((rt_int)33LL)) {
if ((F->up->accept_depth_161 > ((rt_int)0LL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_746)).line_, rt_str("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_1622 = (*(P163)rt_nil_check(F->s_746)).a_;
while ((F->n_1622 != NULL)) {
f_task_of_661(F->up, F->n_1622, &F->y_1624, &F->ix_1623);
f_path_at_655(F->up, (*(P110)rt_nil_check(F->y_1624)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1624)).cname_)), rt_str("decl", 4)), &F->d_1626);
if (((*(P110)rt_nil_check(F->y_1624)).level_ > ((rt_int)0LL))) {
f_link_to_480(F->up, (*(P110)rt_nil_check(F->y_1624)).level_, &F->l_1627);
} else {
F->l_1627 = f_mk_185(F->up, rt_str("NULL", 4));
}
if (((*(P110)rt_nil_check(F->y_1624)).c_ == NULL)) {
f_act_path_671(F->up, F->y_1624, &F->a_1625);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(&", 11), (*(P133)rt_nil_check(F->a_1625))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1626))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1624)).cname_))), rt_str("run, ", 5)), (*(P133)rt_nil_check(F->l_1627))), rt_str(");", 2)));
} else {
f_family_range_745(F->up, F->y_1624, F->ix_1623, &F->lo_1629, &F->hi_1630);
f_act_path_i_675(F->up, F->y_1624, rt_str("k_", 2), &F->a_1625);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1629))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1630))), rt_str("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P133)rt_nil_check(F->l_1627))), rt_str("; g_->i = k_; rt_create(&", 25)), (*(P133)rt_nil_check(F->a_1625))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1626))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1624)).cname_))), rt_str("run, g_); }", 11)));
}
F->n_1622 = (*(P163)rt_nil_check(F->n_1622)).next_;
}
L_end_1632: ;
} else if (0 || sel1631 == ((rt_int)34LL)) {
f_gen_accept_731(F->up, F->s_746);
} else if (0 || sel1631 == ((rt_int)35LL)) {
f_gen_select_740(F->up, F->s_746);
} else if (0 || sel1631 == ((rt_int)36LL)) {
F->n_1622 = (*(P163)rt_nil_check(F->s_746)).a_;
while ((F->n_1622 != NULL)) {
f_task_of_661(F->up, F->n_1622, &F->y_1624, &F->ix_1623);
if (((*(P110)rt_nil_check(F->y_1624)).c_ == NULL)) {
f_act_path_671(F->up, F->y_1624, &F->a_1625);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str("rt_g_abort(&", 12), (*(P133)rt_nil_check(F->a_1625))), rt_str(");", 2)));
} else {
f_family_range_745(F->up, F->y_1624, F->ix_1623, &F->lo_1629, &F->hi_1630);
f_act_path_i_675(F->up, F->y_1624, rt_str("k_", 2), &F->a_1625);
f_emit_208(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1629))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1630))), rt_str("; k_++) rt_g_abort(&", 20)), (*(P133)rt_nil_check(F->a_1625))), rt_str(");", 2)));
}
F->n_1622 = (*(P163)rt_nil_check(F->n_1622)).next_;
}
L_end_1633: ;
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->s_746)).line_, rt_str("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P163 f_root_name_749(struct f_greenc_1fr *up_, P163 e_748) {
  struct f_root_name_749fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_748 = e_748;
if (((*(P163)rt_nil_check(F->e_748)).kind_ == ((rt_int)5LL))) {
F->result_ = F->e_748;
goto ret_;
} else if (((((*(P163)rt_nil_check(F->e_748)).kind_ == ((rt_int)9LL)) || ((*(P163)rt_nil_check(F->e_748)).kind_ == ((rt_int)8LL))) || ((*(P163)rt_nil_check(F->e_748)).kind_ == ((rt_int)15LL)))) {
F->result_ = f_root_name_749(F->up, (*(P163)rt_nil_check(F->e_748)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_752(struct f_greenc_1fr *up_, P163 target_750, rt_int line_751) {
  struct f_check_pure_target_752fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_750 = target_750;
F->line_751 = line_751;
F->n_1634 = NULL;
F->y_1635 = NULL;
if ((F->up->pure_sym_178 == NULL)) {
goto ret_;
}
if (F->up->last_deref_182) {
f_fail_202(F->up, F->line_751, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_1634 = f_root_name_749(F->up, F->target_750);
if ((F->n_1634 != NULL)) {
F->y_1635 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1634)).name_)));
if ((((F->y_1635 != NULL) && ((*(P110)rt_nil_check(F->y_1635)).kind_ == ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->y_1635)).depth_ < F->up->pure_depth_179))) {
f_fail_202(F->up, F->line_751, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not assign to ", 19)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->n_1634)).name_))), rt_str(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_755(struct f_greenc_1fr *up_, P163 d_753, rstr name_754) {
  struct f_assigns_nonlocal_755fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_753 = d_753;
F->name_754 = rt_str_copy(name_754);
F->result_ = (f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->d_753)).d_, F->d_753, F->name_754) || f_scan_handlers_762(F->up, (*(P163)rt_nil_check(F->d_753)).e_, F->d_753, F->name_754));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_758(struct f_greenc_1fr *up_, P163 d_756, rstr name_757) {
  struct f_declares_758fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_756 = d_756;
F->name_757 = rt_str_copy(name_757);
F->p_1636 = NULL;
F->p_1636 = (*(P163)rt_nil_check(F->d_756)).a_;
F->e_1637 = NULL;
F->e_1637 = (*(P163)rt_nil_check(F->d_756)).c_;
while ((F->p_1636 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->p_1636)).name_)), F->name_757)) {
F->result_ = 1;
goto ret_;
}
F->p_1636 = (*(P163)rt_nil_check(F->p_1636)).next_;
}
L_end_1638: ;
while ((F->e_1637 != NULL)) {
if ((((*(P163)rt_nil_check(F->e_1637)).name_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_1637)).name_)), F->name_757))) {
F->result_ = 1;
goto ret_;
}
F->e_1637 = (*(P163)rt_nil_check(F->e_1637)).next_;
}
L_end_1639: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_762(struct f_greenc_1fr *up_, P163 h_759, P163 d_760, rstr name_761) {
  struct f_scan_handlers_762fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_759 = h_759;
F->d_760 = d_760;
F->name_761 = rt_str_copy(name_761);
F->p_1640 = NULL;
F->p_1640 = F->h_759;
while ((F->p_1640 != NULL)) {
if (f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->p_1640)).b_, F->d_760, F->name_761)) {
F->result_ = 1;
goto ret_;
}
F->p_1640 = (*(P163)rt_nil_check(F->p_1640)).next_;
}
L_end_1641: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_766(struct f_greenc_1fr *up_, P163 stmts_763, P163 d_764, rstr name_765) {
  struct f_scan_assigns_766fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_763 = stmts_763;
F->d_764 = d_764;
F->name_765 = rt_str_copy(name_765);
F->s_1642 = NULL;
F->s_1642 = F->stmts_763;
F->a_1643 = NULL;
F->r_1644 = NULL;
while ((F->s_1642 != NULL)) {
if (((*(P163)rt_nil_check(F->s_1642)).kind_ == ((rt_int)20LL))) {
F->r_1644 = f_root_name_749(F->up, (*(P163)rt_nil_check(F->s_1642)).a_);
if ((((F->r_1644 != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->r_1644)).name_)), F->name_765)) && (!f_declares_758(F->up, F->d_764, F->name_765)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1642)).kind_ == ((rt_int)22LL))) {
F->a_1643 = (*(P163)rt_nil_check(F->s_1642)).a_;
while ((F->a_1643 != NULL)) {
if (f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->a_1643)).b_, F->d_764, F->name_765)) {
F->result_ = 1;
goto ret_;
}
F->a_1643 = (*(P163)rt_nil_check(F->a_1643)).next_;
}
L_end_1646: ;
if (f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->s_1642)).b_, F->d_764, F->name_765)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1642)).kind_ == ((rt_int)23LL))) {
F->a_1643 = (*(P163)rt_nil_check(F->s_1642)).b_;
while ((F->a_1643 != NULL)) {
if (f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->a_1643)).b_, F->d_764, F->name_765)) {
F->result_ = 1;
goto ret_;
}
F->a_1643 = (*(P163)rt_nil_check(F->a_1643)).next_;
}
L_end_1647: ;
if (f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->s_1642)).c_, F->d_764, F->name_765)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1642)).kind_ == ((rt_int)24LL))) {
if (f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->s_1642)).b_, F->d_764, F->name_765)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P163)rt_nil_check(F->s_1642)).kind_ == ((rt_int)25LL))) {
if ((f_scan_assigns_766(F->up, (*(P163)rt_nil_check(F->s_1642)).b_, F->d_764, F->name_765) || f_scan_handlers_762(F->up, (*(P163)rt_nil_check(F->s_1642)).c_, F->d_764, F->name_765))) {
F->result_ = 1;
goto ret_;
}
}
F->s_1642 = (*(P163)rt_nil_check(F->s_1642)).next_;
}
L_end_1645: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_769(struct f_greenc_1fr *up_, P163 e_767, P110 y_768) {
  struct f_check_call_rules_769fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_767 = e_767;
F->y_768 = y_768;
F->z_1648 = NULL;
F->s_1649 = NULL;
if ((((F->up->pure_sym_178 != NULL) && (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_768)).result_)).kind_ == ((rt_int)9LL)) || (*(P110)rt_nil_check(F->y_768)).vrp_)) && ((*(P110)rt_nil_check(F->y_768)).depth_ < F->up->pure_depth_179))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_767)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_178)).name_))), rt_str(" may not call procedure ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_768)).name_))), rt_str(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P110)rt_nil_check(F->y_768)).vrp_) || (F->up->trial_148 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_180)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_767)).line_, rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_768)).name_))), rt_str(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_1649 = F->up->scope_stack_114;
while ((F->s_1649 != NULL)) {
if ((((((*(P110)rt_nil_check(F->s_1649)).kind_ == ((rt_int)1LL)) && ((*(P110)rt_nil_check(F->s_1649)).depth_ <= (*(P110)rt_nil_check(F->y_768)).depth_)) && (f_lookup_326(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1649)).name_))) == F->s_1649)) && f_assigns_nonlocal_755(F->up, (*(P110)rt_nil_check(F->y_768)).decl_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1649)).name_))))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_767)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_768)).name_))), rt_str(" assigns ", 9)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1649)).name_))), rt_str(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_1649 = (*(P110)rt_nil_check(F->s_1649)).stack_;
}
L_end_1650: ;
ret_:

  return;
}

static void f_generic_p_771(struct f_greenc_1fr *up_, P163 *res_770) {
  struct f_generic_p_771fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_770 = res_770;
F->x_1651 = NULL;
F->p_1652 = NULL;
F->head_1653 = NULL;
F->tail_1654 = NULL;
F->names_1655 = NULL;
F->st_1656 = NULL;
F->def_1657 = NULL;
F->sub_1658 = NULL;
F->def_name_text_1659 = NULL;
F->more_1660 = 1;
f_expect_kw_249(F->up, rt_str("GENERIC", 7));
F->x_1651 = f_nn_227(F->up, ((rt_int)54LL), f_cur_line_234(F->up));
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
while (F->more_1660) {
if (f_at_kw_236(F->up, rt_str("RESTRICTED", 10))) {
f_skip_247(F->up);
}
if (f_at_kw_236(F->up, rt_str("TYPE", 4))) {
f_skip_247(F->up);
F->p_1652 = f_nn_227(F->up, ((rt_int)47LL), f_cur_line_234(F->up));
(*(P163)rt_nil_check(F->p_1652)).ival_ = ((rt_int)10LL);
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->p_1652)).name_);
f_append_231(F->up, &F->head_1653, &F->tail_1654, F->p_1652);
} else if ((f_at_kw_236(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_236(F->up, rt_str("FUNCTION", 8)))) {
F->p_1652 = f_nn_227(F->up, ((rt_int)47LL), f_cur_line_234(F->up));
(*(P163)rt_nil_check(F->p_1652)).ival_ = ((rt_int)11LL);
if (f_at_kw_236(F->up, rt_str("PROCEDURE", 9))) {
F->sub_1658 = f_nn_227(F->up, ((rt_int)44LL), f_cur_line_234(F->up));
} else {
F->sub_1658 = f_nn_227(F->up, ((rt_int)45LL), f_cur_line_234(F->up));
}
f_skip_247(F->up);
f_designator_299(F->up, &(*(P163)rt_nil_check(F->sub_1658)).name_);
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_formal_part_297(F->up, &(*(P163)rt_nil_check(F->sub_1658)).a_);
}
if (f_at_kw_236(F->up, rt_str("RETURN", 6))) {
f_skip_247(F->up);
f_subtype_ind_282(F->up, &(*(P163)rt_nil_check(F->sub_1658)).b_);
}
(*(P163)rt_nil_check(F->sub_1658)).ival_ = ((rt_int)1LL);
(*(P163)rt_nil_check(F->p_1652)).name_ = (*(P163)rt_nil_check(F->sub_1658)).name_;
(*(P163)rt_nil_check(F->p_1652)).a_ = F->sub_1658;
if (f_at_kw_236(F->up, rt_str("IS", 2))) {
f_skip_247(F->up);
if (f_at_kind_240(F->up, ((rt_int)6LL))) {
f_designator_299(F->up, &F->def_name_text_1659);
(*(P163)rt_nil_check(F->p_1652)).b_ = f_nn_227(F->up, ((rt_int)5LL), f_cur_line_234(F->up));
(*(P163)rt_nil_check((*(P163)rt_nil_check(F->p_1652)).b_)).name_ = F->def_name_text_1659;
} else {
f_name_p_280(F->up, &(*(P163)rt_nil_check(F->p_1652)).b_);
}
}
f_append_231(F->up, &F->head_1653, &F->tail_1654, F->p_1652);
} else {
f_id_list_257(F->up, &F->names_1655);
f_expect_op_251(F->up, rt_str(":", 1));
if (f_at_kw_236(F->up, rt_str("IN", 2))) {
f_skip_247(F->up);
}
f_subtype_ind_282(F->up, &F->st_1656);
F->def_1657 = NULL;
if (f_at_op_238(F->up, rt_str(":=", 2))) {
f_skip_247(F->up);
f_expr_264(F->up, &F->def_1657);
}
while ((F->names_1655 != NULL)) {
F->p_1652 = f_nn_227(F->up, ((rt_int)47LL), (*(P163)rt_nil_check(F->names_1655)).line_);
(*(P163)rt_nil_check(F->p_1652)).ival_ = ((rt_int)1LL);
(*(P163)rt_nil_check(F->p_1652)).name_ = (*(P163)rt_nil_check(F->names_1655)).name_;
(*(P163)rt_nil_check(F->p_1652)).a_ = F->st_1656;
(*(P163)rt_nil_check(F->p_1652)).b_ = F->def_1657;
f_append_231(F->up, &F->head_1653, &F->tail_1654, F->p_1652);
F->names_1655 = (*(P163)rt_nil_check(F->names_1655)).next_;
}
L_end_1662: ;
}
F->more_1660 = f_at_op_238(F->up, rt_str(";", 1));
if (F->more_1660) {
f_skip_247(F->up);
}
}
L_end_1661: ;
f_expect_op_251(F->up, rt_str(")", 1));
}
if ((f_at_kw_236(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_236(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_301(F->up, &(*(P163)rt_nil_check(F->x_1651)).b_);
} else if (f_at_kw_236(F->up, rt_str("PACKAGE", 7))) {
f_package_p_307(F->up, &(*(P163)rt_nil_check(F->x_1651)).b_);
} else if (f_at_kw_236(F->up, rt_str("TASK", 4))) {
f_task_p_641(F->up, &(*(P163)rt_nil_check(F->x_1651)).b_);
} else {
f_perror_246(F->up, rt_str("a generic unit is a subprogram, a package or a task", 51));
}
(*(P163)rt_nil_check(F->x_1651)).a_ = F->head_1653;
(*(P163)rt_nil_check(F->x_1651)).name_ = (*(P163)rt_nil_check((*(P163)rt_nil_check(F->x_1651)).b_)).name_;
(*F->res_770) = F->x_1651;
ret_:

  return;
}

static void f_instantiation_774(struct f_greenc_1fr *up_, P163 x_772, P163 *res_773) {
  struct f_instantiation_774fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_772 = x_772;
F->res_773 = res_773;
F->i_1663 = NULL;
F->head_1664 = NULL;
F->tail_1665 = NULL;
F->a_1666 = NULL;
F->formal_1667 = NULL;
F->more_1669 = 1;
f_expect_kw_249(F->up, rt_str("IS", 2));
f_expect_kw_249(F->up, rt_str("NEW", 3));
F->i_1663 = f_nn_227(F->up, ((rt_int)53LL), (*(P163)rt_nil_check(F->x_772)).line_);
(*(P163)rt_nil_check(F->i_1663)).name_ = (*(P163)rt_nil_check(F->x_772)).name_;
(*(P163)rt_nil_check(F->i_1663)).ival_ = (*(P163)rt_nil_check(F->x_772)).kind_;
f_expect_id_253(F->up, &(*(P163)rt_nil_check(F->i_1663)).tag_);
if (f_at_op_238(F->up, rt_str("(", 1))) {
f_skip_247(F->up);
while (F->more_1669) {
F->formal_1667 = NULL;
F->mark_1668 = ((rt_int)0LL);
if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("IS", 2)))) {
f_expect_id_253(F->up, &F->formal_1667);
f_skip_247(F->up);
F->mark_1668 = ((rt_int)5LL);
} else if (((f_at_kind_240(F->up, ((rt_int)1LL)) && (f_kind_at_242(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_244(F->up, ((rt_int)1LL)), rt_str(":=:", 3))))) {
f_expect_id_253(F->up, &F->formal_1667);
f_skip_247(F->up);
F->mark_1668 = ((rt_int)1LL);
}
if ((f_at_kind_240(F->up, ((rt_int)6LL)) && (F->mark_1668 == ((rt_int)5LL)))) {
F->a_1666 = f_nn_227(F->up, ((rt_int)5LL), f_cur_line_234(F->up));
f_designator_299(F->up, &(*(P163)rt_nil_check(F->a_1666)).name_);
} else {
f_expr_264(F->up, &F->a_1666);
}
(*(P163)rt_nil_check(F->a_1666)).tag_ = F->formal_1667;
(*(P163)rt_nil_check(F->a_1666)).flag_ = F->mark_1668;
f_append_231(F->up, &F->head_1664, &F->tail_1665, F->a_1666);
F->more_1669 = f_at_op_238(F->up, rt_str(",", 1));
if (F->more_1669) {
f_skip_247(F->up);
}
}
L_end_1670: ;
f_expect_op_251(F->up, rt_str(")", 1));
}
f_expect_op_251(F->up, rt_str(";", 1));
(*(P163)rt_nil_check(F->i_1663)).a_ = F->head_1664;
(*F->res_773) = F->i_1663;
ret_:

  return;
}

static void f_generic_decl_776(struct f_greenc_1fr *up_, P163 e_775) {
  struct f_generic_decl_776fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_775 = e_775;
F->y_1671 = NULL;
if (((*(P163)rt_nil_check(F->e_775)).kind_ == ((rt_int)54LL))) {
F->y_1671 = f_new_sym_350(F->up, ((rt_int)11LL), (*(P163)rt_nil_check(F->e_775)).name_);
(*(P110)rt_nil_check(F->y_1671)).decl_ = F->e_775;
f_define_345(F->up, F->y_1671, (*(P163)rt_nil_check(F->e_775)).line_);
} else if (((*(P163)rt_nil_check(F->e_775)).kind_ == ((rt_int)53LL))) {
f_instantiate_793(F->up, F->e_775);
} else {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_775)).line_, rt_str("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_778(struct f_greenc_1fr *up_, rstr n_777) {
  struct f_is_generic_name_778fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_777 = rt_str_copy(n_777);
F->y_1672 = NULL;
F->y_1672 = f_lookup_326(F->up, F->n_777);
F->result_ = ((F->y_1672 != NULL) && ((*(P110)rt_nil_check(F->y_1672)).kind_ == ((rt_int)11LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_780(struct f_greenc_1fr *up_, P163 e_779) {
  struct f_attach_generic_body_780fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_779 = e_779;
F->y_1673 = NULL;
F->y_1673 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_779)).name_)));
(*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1673)).decl_)).c_ = F->e_779;
F->up->generic_contexts_141 = ({ R140 *cell1674 = rt_alloc(sizeof(R140)); *cell1674 = cp_R140(({ R140 ag1675; ag1675.body_node_ = F->e_779; ag1675.visible_ = F->up->scope_stack_114; ag1675.next_ = F->up->generic_contexts_141; ag1675; })); (P139)cell1674; });
ret_:

  return;
}

static void f_restore_generic_context_783(struct f_greenc_1fr *up_, P163 body_node_781, rt_int line_782) {
  struct f_restore_generic_context_783fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_781 = body_node_781;
F->line_782 = line_782;
F->ctx_1676 = NULL;
F->ctx_1676 = F->up->generic_contexts_141;
F->m_1677 = NULL;
F->z_1678 = NULL;
while (((F->ctx_1676 != NULL) && ((*(P139)rt_nil_check(F->ctx_1676)).body_node_ != F->body_node_781))) {
F->ctx_1676 = (*(P139)rt_nil_check(F->ctx_1676)).next_;
}
L_end_1680: ;
if ((F->ctx_1676 == NULL)) {
goto ret_;
}
F->m_1677 = (*(P139)rt_nil_check(F->ctx_1676)).visible_;
while ((F->m_1677 != NULL)) {
if ((((*(P110)rt_nil_check(F->m_1677)).level_ <= ((rt_int)0LL)) && ((*(P110)rt_nil_check(F->m_1677)).kind_ != ((rt_int)11LL)))) {
F->z_1678 = F->up->table_112.p[rt_index(f_hash_324(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1677)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->seen_1679 = 0;
while ((F->z_1678 != NULL)) {
if ((((*(P110)rt_nil_check(F->z_1678)).depth_ == F->up->depth_113) && rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1678)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1677)).name_))))) {
F->seen_1679 = 1;
}
F->z_1678 = (*(P110)rt_nil_check(F->z_1678)).chain_;
}
L_end_1682: ;
if ((!F->seen_1679)) {
f_copy_sym_599(F->up, F->m_1677, &F->z_1678);
f_define_345(F->up, F->z_1678, F->line_782);
}
}
F->m_1677 = (*(P110)rt_nil_check(F->m_1677)).stack_;
}
L_end_1681: ;
ret_:

  return;
}

static P163 f_gactual_787(struct f_greenc_1fr *up_, P163 args_784, rt_int nth_785, rstr name_786) {
  struct f_gactual_787fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_784 = args_784;
F->nth_785 = nth_785;
F->name_786 = rt_str_copy(name_786);
F->a_1683 = NULL;
F->a_1683 = F->args_784;
F->i_1684 = ((rt_int)1LL);
while ((F->a_1683 != NULL)) {
if ((((*(P163)rt_nil_check(F->a_1683)).tag_ == NULL) && (F->i_1684 == F->nth_785))) {
F->result_ = F->a_1683;
goto ret_;
}
if ((((*(P163)rt_nil_check(F->a_1683)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1683)).tag_)), F->name_786))) {
F->result_ = F->a_1683;
goto ret_;
}
if (((*(P163)rt_nil_check(F->a_1683)).tag_ == NULL)) {
F->i_1684 = rt_add(F->i_1684, ((rt_int)1LL));
}
F->a_1683 = (*(P163)rt_nil_check(F->a_1683)).next_;
}
L_end_1685: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_791(struct f_greenc_1fr *up_, P163 n_788, P133 name_789, P163 *r_790) {
  struct f_copy_node_791fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_788 = n_788;
F->name_789 = name_789;
F->r_790 = r_790;
(*F->r_790) = f_nn_227(F->up, (*(P163)rt_nil_check(F->n_788)).kind_, (*(P163)rt_nil_check(F->n_788)).line_);
as_R164(&(*(P163)rt_nil_check((*F->r_790))), (*(P163)rt_nil_check(F->n_788)));
(*(P163)rt_nil_check((*F->r_790))).name_ = F->name_789;
(*(P163)rt_nil_check((*F->r_790))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_793(struct f_greenc_1fr *up_, P163 e_792) {
  struct f_instantiate_793fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_792 = e_792;
F->g_1686 = NULL;
F->g_1686 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_792)).tag_)));
F->gd_1687 = NULL;
F->pat_1688 = NULL;
F->f_1689 = NULL;
F->a_1690 = NULL;
F->cn_1691 = NULL;
F->y_1692 = NULL;
F->z_1693 = NULL;
F->fs_1694 = NULL;
F->nth_1695 = ((rt_int)1LL);
F->t_1696 = NULL;
F->vt_1697 = NULL;
F->c_1698 = NULL;
F->v_1699 = NULL;
F->acc_1700 = NULL;
F->x_1701 = NULL;
if (((F->g_1686 == NULL) || ((*(P110)rt_nil_check(F->g_1686)).kind_ != ((rt_int)11LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_792)).tag_)), rt_str(" is not a generic unit", 22)));
}
F->gd_1687 = (*(P110)rt_nil_check(F->g_1686)).decl_;
F->pat_1688 = (*(P163)rt_nil_check(F->gd_1687)).b_;
f_open_scope_346(F->up);
F->f_1689 = (*(P163)rt_nil_check(F->gd_1687)).a_;
while ((F->f_1689 != NULL)) {
F->a_1690 = f_gactual_787(F->up, (*(P163)rt_nil_check(F->e_792)).a_, F->nth_1695, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1689)).name_)));
F->nth_1695 = rt_add(F->nth_1695, ((rt_int)1LL));
if (((*(P163)rt_nil_check(F->f_1689)).ival_ == ((rt_int)10LL))) {
if (((F->a_1690 == NULL) || ((*(P163)rt_nil_check(F->a_1690)).kind_ != ((rt_int)5LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat(rt_str("a type is required for generic parameter ", 41), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1689)).name_))));
}
F->y_1692 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1690)).name_)));
if (((F->y_1692 == NULL) || ((*(P110)rt_nil_check(F->y_1692)).kind_ != ((rt_int)5LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat((*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1690)).name_)), rt_str(" is not a type", 14)));
}
f_copy_sym_599(F->up, F->y_1692, &F->z_1693);
(*(P110)rt_nil_check(F->z_1693)).name_ = (*(P163)rt_nil_check(F->f_1689)).name_;
f_define_345(F->up, F->z_1693, (*(P163)rt_nil_check(F->e_792)).line_);
} else if (((*(P163)rt_nil_check(F->f_1689)).ival_ == ((rt_int)11LL))) {
if ((F->a_1690 == NULL)) {
F->a_1690 = (*(P163)rt_nil_check(F->f_1689)).b_;
}
if (((F->a_1690 == NULL) || ((*(P163)rt_nil_check(F->a_1690)).kind_ != ((rt_int)5LL)))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat(rt_str("a subprogram is required for generic parameter ", 47), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1689)).name_))));
}
f_build_subprogram_428(F->up, (*(P163)rt_nil_check(F->f_1689)).a_, &F->fs_1694);
F->y_1692 = F->up->table_112.p[rt_index(f_hash_324(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1690)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while (((F->y_1692 != NULL) && (!(((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1692)).name_)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1690)).name_))) && (((*(P110)rt_nil_check(F->y_1692)).kind_ == ((rt_int)3LL)) || ((*(P110)rt_nil_check(F->y_1692)).kind_ == ((rt_int)4LL)))) && f_same_signature_342(F->up, (*(P110)rt_nil_check(F->y_1692)).params_, (*(P110)rt_nil_check(F->fs_1694)).params_)) && f_same_339(F->up, (*(P110)rt_nil_check(F->y_1692)).result_, (*(P110)rt_nil_check(F->fs_1694)).result_))))) {
F->y_1692 = (*(P110)rt_nil_check(F->y_1692)).chain_;
}
L_end_1704: ;
if ((F->y_1692 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no subprogram ", 14), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->a_1690)).name_))), rt_str(" matches generic parameter ", 27)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1689)).name_))));
}
f_copy_sym_599(F->up, F->y_1692, &F->z_1693);
(*(P110)rt_nil_check(F->z_1693)).name_ = (*(P163)rt_nil_check(F->f_1689)).name_;
f_define_345(F->up, F->z_1693, (*(P163)rt_nil_check(F->e_792)).line_);
} else {
if ((F->a_1690 == NULL)) {
F->a_1690 = (*(P163)rt_nil_check(F->f_1689)).b_;
}
if ((F->a_1690 == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat(rt_str("no actual for generic parameter ", 32), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1689)).name_))));
}
f_resolve_380(F->up, (*(P163)rt_nil_check(F->f_1689)).a_, &F->t_1696, &F->c_1698);
f_gexpr_522(F->up, F->a_1690, F->t_1696, &F->vt_1697, &F->v_1699);
f_check_type_359(F->up, F->vt_1697, F->t_1696, (*(P163)rt_nil_check(F->e_792)).line_);
F->z_1693 = f_new_sym_350(F->up, ((rt_int)2LL), (*(P163)rt_nil_check(F->f_1689)).name_);
f_storage_418(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->f_1689)).name_)), F->t_1696, &F->acc_1700);
f_copy_code_403(F->up, F->t_1696, (*(P133)rt_nil_check(F->v_1699)), &F->x_1701);
f_emit_208(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1700)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1701))), 59));
(*(P110)rt_nil_check(F->z_1693)).t_ = F->t_1696;
(*(P110)rt_nil_check(F->z_1693)).c_ = F->c_1698;
(*(P110)rt_nil_check(F->z_1693)).ro_ = 1;
if (((*(P115)rt_nil_check(F->t_1696)).kind_ == ((rt_int)1LL))) {
f_manifest_376(F->up, F->a_1690, &(*(P110)rt_nil_check(F->z_1693)).mvalue_, &F->ok_1702);
(*(P110)rt_nil_check(F->z_1693)).hasmv_ = F->ok_1702;
}
f_bind_421(F->up, F->z_1693, F->acc_1700);
f_define_345(F->up, F->z_1693, (*(P163)rt_nil_check(F->e_792)).line_);
}
F->f_1689 = (*(P163)rt_nil_check(F->f_1689)).next_;
}
L_end_1703: ;
if (((*(P163)rt_nil_check(F->gd_1687)).c_ != NULL)) {
f_restore_generic_context_783(F->up, (*(P163)rt_nil_check(F->gd_1687)).c_, (*(P163)rt_nil_check(F->e_792)).line_);
}
if ((((*(P163)rt_nil_check(F->pat_1688)).kind_ == ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->pat_1688)).kind_ == ((rt_int)45LL)))) {
if (((*(P163)rt_nil_check(F->pat_1688)).ival_ == ((rt_int)1LL))) {
if (((*(P163)rt_nil_check(F->gd_1687)).c_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic ", 20), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_792)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
F->pat_1688 = (*(P163)rt_nil_check(F->gd_1687)).c_;
}
f_copy_node_791(F->up, F->pat_1688, (*(P163)rt_nil_check(F->e_792)).name_, &F->cn_1691);
f_build_subprogram_428(F->up, F->cn_1691, &F->y_1692);
f_define_345(F->up, F->y_1692, (*(P163)rt_nil_check(F->e_792)).line_);
f_subprogram_body_437(F->up, F->cn_1691, F->y_1692);
} else if (((*(P163)rt_nil_check(F->pat_1688)).kind_ == ((rt_int)48LL))) {
f_copy_node_791(F->up, F->pat_1688, (*(P163)rt_nil_check(F->e_792)).name_, &F->cn_1691);
f_package_spec_604(F->up, F->cn_1691);
F->y_1692 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_792)).name_)));
if (((*(P163)rt_nil_check(F->gd_1687)).c_ != NULL)) {
f_copy_node_791(F->up, (*(P163)rt_nil_check(F->gd_1687)).c_, (*(P163)rt_nil_check(F->e_792)).name_, &F->cn_1691);
f_package_body_609(F->up, F->cn_1691);
}
} else {
f_copy_node_791(F->up, F->pat_1688, (*(P163)rt_nil_check(F->e_792)).name_, &F->cn_1691);
f_task_spec_696(F->up, F->cn_1691);
F->y_1692 = f_lookup_326(F->up, (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_792)).name_)));
if (((*(P163)rt_nil_check(F->gd_1687)).c_ == NULL)) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->e_792)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic task ", 25), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->e_792)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
f_copy_node_791(F->up, (*(P163)rt_nil_check(F->gd_1687)).c_, (*(P163)rt_nil_check(F->e_792)).name_, &F->cn_1691);
f_task_body_700(F->up, F->cn_1691);
}
f_close_scope_347(F->up);
f_define_345(F->up, F->y_1692, (*(P163)rt_nil_check(F->e_792)).line_);
ret_:

  return;
}

static void f_predef_type_798(struct f_greenc_1fr *up_, rstr name_794, P115 t_795, rstr lo_796, rstr hi_797) {
  struct f_predef_type_798fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_794 = rt_str_copy(name_794);
F->t_795 = t_795;
F->lo_796 = rt_str_copy(lo_796);
F->hi_797 = rt_str_copy(hi_797);
F->y_1705 = NULL;
F->y_1705 = f_new_sym_350(F->up, ((rt_int)5LL), f_mk_185(F->up, F->name_794));
(*(P110)rt_nil_check(F->y_1705)).t_ = F->t_795;
if (((F->lo_796).len > ((rt_int)0LL))) {
(*(P110)rt_nil_check(F->y_1705)).c_ = f_new_cons_353(F->up);
(*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1705)).c_)).lo_ = f_mk_185(F->up, F->lo_796);
(*(P170)rt_nil_check((*(P110)rt_nil_check(F->y_1705)).c_)).hi_ = f_mk_185(F->up, F->hi_797);
}
f_define_345(F->up, F->y_1705, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_802(struct f_greenc_1fr *up_, rstr name_799, P115 t_800, rstr code_text_801) {
  struct f_predef_const_802fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_799 = rt_str_copy(name_799);
F->t_800 = t_800;
F->code_text_801 = rt_str_copy(code_text_801);
F->y_1706 = NULL;
F->y_1706 = f_new_sym_350(F->up, ((rt_int)2LL), f_mk_185(F->up, F->name_799));
(*(P110)rt_nil_check(F->y_1706)).t_ = F->t_800;
(*(P110)rt_nil_check(F->y_1706)).ro_ = 1;
(*(P110)rt_nil_check(F->y_1706)).access_path_ = f_mk_185(F->up, F->code_text_801);
f_define_345(F->up, F->y_1706, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_804(struct f_greenc_1fr *up_, rstr name_803) {
  struct f_predef_exc_804fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_803 = rt_str_copy(name_803);
F->y_1707 = NULL;
F->y_1707 = f_new_sym_350(F->up, ((rt_int)6LL), f_mk_185(F->up, F->name_803));
(*(P110)rt_nil_check(F->y_1707)).cname_ = f_mk_185(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_199(F->up)), F->name_803), f_q_199(F->up)), 41));
f_define_345(F->up, F->y_1707, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_808(struct f_greenc_1fr *up_, rstr name_805, P115 t_806, rt_int v_807) {
  struct f_predef_lit_808fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_805 = rt_str_copy(name_805);
F->t_806 = t_806;
F->v_807 = v_807;
F->y_1708 = NULL;
F->y_1708 = f_new_sym_350(F->up, ((rt_int)7LL), f_mk_185(F->up, F->name_805));
(*(P110)rt_nil_check(F->y_1708)).t_ = F->t_806;
(*(P110)rt_nil_check(F->y_1708)).result_ = F->t_806;
(*(P110)rt_nil_check(F->y_1708)).mvalue_ = F->v_807;
(*(P110)rt_nil_check(F->y_1708)).hasmv_ = 1;
f_define_345(F->up, F->y_1708, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_809(struct f_greenc_1fr *up_) {
  struct f_predefine_809fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_1709 = rt_str_copy(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_str("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_1710 = ((rt_int)1LL);
F->code_no_1711 = ((rt_int)0LL);
f_predef_type_798(F->up, rt_str("INTEGER", 7), F->up->ty_int_149, rt_str("", 0), rt_str("", 0));
f_predef_type_798(F->up, rt_str("SHORT_INTEGER", 13), F->up->ty_int_149, rt_str("", 0), rt_str("", 0));
f_predef_type_798(F->up, rt_str("LONG_INTEGER", 12), F->up->ty_int_149, rt_str("", 0), rt_str("", 0));
f_predef_type_798(F->up, rt_str("NATURAL", 7), F->up->ty_int_149, rt_str("1", 1), rt_str("INT64_MAX", 9));
f_predef_type_798(F->up, rt_str("PRIORITY", 8), F->up->ty_int_149, rt_str("0", 1), rt_str("255", 3));
f_predef_type_798(F->up, rt_str("BOOLEAN", 7), F->up->ty_bool_150, rt_str("0", 1), rt_str("1", 1));
f_predef_type_798(F->up, rt_str("CHARACTER", 9), F->up->ty_char_152, rt_str("0", 1), rt_str("127", 3));
f_predef_type_798(F->up, rt_str("STRING", 6), F->up->ty_string_153, rt_str("", 0), rt_str("", 0));
f_predef_type_798(F->up, rt_str("FLOAT", 5), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_type_798(F->up, rt_str("SHORT_FLOAT", 11), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_type_798(F->up, rt_str("LONG_FLOAT", 10), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_type_798(F->up, rt_str("TIME", 4), F->up->ty_float_151, rt_str("", 0), rt_str("", 0));
f_predef_lit_808(F->up, rt_str("FALSE", 5), F->up->ty_bool_150, ((rt_int)0LL));
f_predef_lit_808(F->up, rt_str("TRUE", 4), F->up->ty_bool_150, ((rt_int)1LL));
{ rt_int lo1714 = ((rt_int)1LL), hi1715 = (F->control_1709).len;
for (rt_int it1716 = lo1714; it1716 <= hi1715; it1716++) {
F->i_1713 = it1716;
if ((rt_str_get(F->control_1709, F->i_1713) == 32)) {
f_predef_const_802(F->up, rt_str_slice(F->control_1709, F->start_1710, rt_sub(F->i_1713, ((rt_int)1LL))), F->up->ty_char_152, rt_str_of_int(F->code_no_1711));
F->code_no_1711 = rt_add(F->code_no_1711, ((rt_int)1LL));
F->start_1710 = rt_add(F->i_1713, ((rt_int)1LL));
}
}
}
L_end_1712: ;
f_predef_const_802(F->up, rt_str("DEL", 3), F->up->ty_char_152, rt_str("127", 3));
f_predef_const_802(F->up, rt_str("EXCLAM", 6), F->up->ty_char_152, rt_str("33", 2));
f_predef_const_802(F->up, rt_str("DOLLAR", 6), F->up->ty_char_152, rt_str("36", 2));
f_predef_const_802(F->up, rt_str("QUESTION", 8), F->up->ty_char_152, rt_str("63", 2));
f_predef_const_802(F->up, rt_str("AT_SIGN", 7), F->up->ty_char_152, rt_str("64", 2));
f_predef_const_802(F->up, rt_str("L_BRACKET", 9), F->up->ty_char_152, rt_str("91", 2));
f_predef_const_802(F->up, rt_str("BACK_SLASH", 10), F->up->ty_char_152, rt_str("92", 2));
f_predef_const_802(F->up, rt_str("R_BRACKET", 9), F->up->ty_char_152, rt_str("93", 2));
f_predef_const_802(F->up, rt_str("CIRCUMFLEX", 10), F->up->ty_char_152, rt_str("94", 2));
f_predef_const_802(F->up, rt_str("GRAVE", 5), F->up->ty_char_152, rt_str("96", 2));
f_predef_const_802(F->up, rt_str("L_BRACE", 7), F->up->ty_char_152, rt_str("123", 3));
f_predef_const_802(F->up, rt_str("R_BRACE", 7), F->up->ty_char_152, rt_str("125", 3));
f_predef_const_802(F->up, rt_str("TILDE", 5), F->up->ty_char_152, rt_str("126", 3));
{ rt_int lo1719 = ((rt_int)0LL), hi1720 = ((rt_int)25LL);
for (rt_int it1721 = lo1719; it1721 <= hi1720; it1721++) {
F->i_1718 = it1721;
f_predef_const_802(F->up, rt_str_catc(rt_str("LC_", 3), rt_range(rt_add(((rt_int)66LL), F->i_1718) - 1, 0, 127)), F->up->ty_char_152, rt_str_of_int(rt_add(((rt_int)97LL), F->i_1718)));
}
}
L_end_1717: ;
f_predef_const_802(F->up, rt_str("NEWLINE", 7), F->up->ty_string_153, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_q_199(F->up)), rt_str("\\n", 2)), f_q_199(F->up)), rt_str(", 1)", 4)));
f_predef_const_802(F->up, rt_str("SECONDS", 7), F->up->ty_float_151, rt_str("((double)RT_SECONDS)", 20));
f_predef_exc_804(F->up, rt_str("ACCESS_ERROR", 12));
f_predef_exc_804(F->up, rt_str("ASSERT_ERROR", 12));
f_predef_exc_804(F->up, rt_str("DISCRIMINANT_ERROR", 18));
f_predef_exc_804(F->up, rt_str("DIVIDE_ERROR", 12));
f_predef_exc_804(F->up, rt_str("FAILURE", 7));
f_predef_exc_804(F->up, rt_str("INDEX_ERROR", 11));
f_predef_exc_804(F->up, rt_str("INITIATE_ERROR", 14));
f_predef_exc_804(F->up, rt_str("NO_VALUE_ERROR", 14));
f_predef_exc_804(F->up, rt_str("OVERFLOW", 8));
f_predef_exc_804(F->up, rt_str("OVERLAP_ERROR", 13));
f_predef_exc_804(F->up, rt_str("RANGE_ERROR", 11));
f_predef_exc_804(F->up, rt_str("SELECT_ERROR", 12));
f_predef_exc_804(F->up, rt_str("STORAGE_OVERFLOW", 16));
f_predef_exc_804(F->up, rt_str("TASKING_ERROR", 13));
f_predef_exc_804(F->up, rt_str("UNDERFLOW", 9));
f_predef_exc_804(F->up, rt_str("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_811(struct f_greenc_1fr *up_, P163 u_810) {
  struct f_translate_811fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_810 = u_810;
F->p_1722 = NULL;
F->p_1722 = F->u_810;
F->y_1723 = NULL;
f_open_scope_346(F->up);
while ((F->p_1722 != NULL)) {
if (((*(P163)rt_nil_check(F->p_1722)).next_ == NULL)) {
if ((((*(P163)rt_nil_check(F->p_1722)).kind_ != ((rt_int)44LL)) || ((*(P163)rt_nil_check(F->p_1722)).a_ != NULL))) {
f_fail_202(F->up, (*(P163)rt_nil_check(F->p_1722)).line_, rt_str("the main program is a procedure without parameters", 50));
}
f_build_subprogram_428(F->up, F->p_1722, &F->y_1723);
f_define_345(F->up, F->y_1723, (*(P163)rt_nil_check(F->p_1722)).line_);
f_subprogram_body_437(F->up, F->p_1722, F->y_1723);
F->up->main_name_183 = (*(P110)rt_nil_check(F->y_1723)).cname_;
} else {
f_decl_element_432(F->up, F->p_1722);
}
F->p_1722 = (*(P163)rt_nil_check(F->p_1722)).next_;
}
L_end_1724: ;
ret_:

  return;
}

static void f_print_program_812(struct f_greenc_1fr *up_) {
  struct f_print_program_812fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_412(F->up);
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_199(F->up)), rt_str("paleo.h", 7)), f_q_199(F->up)));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("#include <math.h>", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_210(F->up, F->up->out_types_121);
f_print_buffer_210(F->up, F->up->out_frames_122);
f_print_buffer_210(F->up, F->up->out_helpers_123);
f_print_buffer_210(F->up, F->up->out_protos_124);
f_print_buffer_210(F->up, F->up->out_globals_125);
f_print_buffer_210(F->up, F->up->out_funcs_126);
rt_g_put(rt_str("int main(int argc, char **argv) {", 33));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_init(argc, argv);", 22));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_set_lang(1);", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_210(F->up, F->up->out_excs_128);
f_print_buffer_210(F->up, F->up->out_init_127);
rt_g_put(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->up->main_name_183))), rt_str("();", 3)));
rt_g_put(rt_str("\n", 1));
f_print_buffer_210(F->up, F->up->out_awaits_169);
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
F->out_types_121 = f_new_buffer_203(F);
F->out_frames_122 = f_new_buffer_203(F);
F->out_helpers_123 = f_new_buffer_203(F);
F->out_protos_124 = f_new_buffer_203(F);
F->out_globals_125 = f_new_buffer_203(F);
F->out_funcs_126 = f_new_buffer_203(F);
F->out_init_127 = f_new_buffer_203(F);
F->out_excs_128 = f_new_buffer_203(F);
F->code_129 = F->out_init_127;
F->no_cons_172 = f_new_cons_353(F);
F->ty_int_149 = f_new_typ_352(F, ((rt_int)1LL));
F->ty_bool_150 = f_new_typ_352(F, ((rt_int)2LL));
F->ty_float_151 = f_new_typ_352(F, ((rt_int)3LL));
F->ty_char_152 = f_new_typ_352(F, ((rt_int)11LL));
F->ty_string_153 = f_new_typ_352(F, ((rt_int)5LL));
F->ty_void_154 = f_new_typ_352(F, ((rt_int)9LL));
F->ty_nil_155 = f_new_typ_352(F, ((rt_int)10LL));
F->ty_act_157 = f_new_typ_352(F, ((rt_int)13LL));
F->ty_tdecl_158 = f_new_typ_352(F, ((rt_int)14LL));
F->ty_entry_159 = f_new_typ_352(F, ((rt_int)15LL));
F->out_awaits_169 = f_new_buffer_203(F);
f_predefine_809(F);
f_read_source_224(F);
f_compilation_322(F, &F->units_173);
if ((F->units_173 == NULL)) {
f_fail_202(F, ((rt_int)1LL), rt_str("the compilation is empty", 24));
}
f_translate_811(F, F->units_173);
f_print_program_812(F);
ret_:

  return;
}

static void as_R1053(R1053 *d, R1053 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
  d->dflt_ = s.dflt_;
}
static R1053 cp_R1053(R1053 s) {
  R1053 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  d.dflt_ = s.dflt_;
  return d;
}
static int eq_R1053(R1053 a, R1053 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_);
}
static void as_R1042(R1042 *d, R1042 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1042 cp_R1042(R1042 s) {
  R1042 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1042(R1042 a, R1042 b) {
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
  return d;
}
static int eq_R164(R164 a, R164 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_);
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
  return d;
}
static int eq_R116(R116 a, R116 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_);
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
