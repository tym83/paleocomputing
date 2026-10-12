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
typedef struct R141 R141;
typedef struct R141 *P140;
typedef struct R160 R160;
typedef struct R160 *P159;
typedef struct R164 R164;
typedef struct R164 *P163;
struct R120 { int dummy_; P140 head_; P140 tail_; };
struct R141 { int dummy_; P133 s_; P140 next_; };
struct R104 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P133 s_; };
struct R160 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P133 name_; P133 tag_; P159 a_; P159 b_; P159 c_; P159 d_; P159 e_; P159 next_; };
typedef struct R1024 R1024;
typedef struct R1024 *P1023;
struct R111 { int dummy_; rt_int kind_; P133 name_; P115 t_; P163 c_; P133 access_path_; P133 cname_; int ro_; rt_int mvalue_; int hasmv_; P159 decl_; P1023 params_; P115 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; P110 members_; P110 mnext_; P110 chain_; P110 stack_; };
typedef struct R1035 R1035;
typedef struct R1035 *P1034;
struct R116 { int dummy_; rt_int kind_; P133 name_; P159 lits_; P115 elem_; P115 idx_; P163 elemcons_; P163 tcons_; P1034 fields_; P115 target_; P159 decl_; P133 cname_; int forward_; int defined_; int priv_; P115 next_; };
struct R164 { int dummy_; P133 lo_; P133 hi_; P133 slen_; rt_int mlo_; rt_int mhi_; int hasm_; };
struct R1035 { int dummy_; P133 name_; P115 t_; P163 c_; P1034 next_; };
struct R1024 { int dummy_; P133 name_; rt_int mode_; P115 t_; P163 c_; P133 cfield_; P159 dflt_; P1023 next_; };
struct R137 { int dummy_; P133 match_; P133 label_; rt_int depth_; int is_loop_; P136 next_; };
struct f_mk_178fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_177;
 P133 result_;
};
struct f_new_name_181fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_179;
 P133 *res_180;
};
struct f_is_letter_183fr { int dummy;
 struct f_greenc_1fr *up;
 int c_182;
 int result_;
};
struct f_is_digit_185fr { int dummy;
 struct f_greenc_1fr *up;
 int c_184;
 int result_;
};
struct f_upper_187fr { int dummy;
 struct f_greenc_1fr *up;
 int c_186;
 int result_;
};
struct f_lower_s_189fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_188;
 rstr result_;
 rstr r_797;
 rt_int i_799;
};
struct f_c_field_191fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_190;
 rstr result_;
};
struct f_q_192fr { int dummy;
 struct f_greenc_1fr *up;
 rstr result_;
};
struct f_fail_195fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_193;
 rstr msg_194;
};
struct f_new_buffer_196fr { int dummy;
 struct f_greenc_1fr *up;
 P119 result_;
};
struct f_put_to_199fr { int dummy;
 struct f_greenc_1fr *up;
 P119 b_197;
 rstr s_198;
 P140 l_805;
};
struct f_emit_201fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_200;
};
struct f_print_buffer_203fr { int dummy;
 struct f_greenc_1fr *up;
 P119 b_202;
 P140 l_808;
};
struct f_splice_206fr { int dummy;
 struct f_greenc_1fr *up;
 P119 a_204;
 P119 b_205;
};
struct f_is_reserved_208fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_207;
 int result_;
};
struct f_add_token_212fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_209;
 rstr s_210;
 rt_int ival_211;
};
struct f_digit_value_214fr { int dummy;
 struct f_greenc_1fr *up;
 int c_213;
 rt_int result_;
};
struct f_lex_line_216fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_215;
 rt_int i_813;
 rt_int j_814;
 rt_int n_815;
 int c_816;
 rt_int v_817;
 rstr buf_818;
 rt_int bl_819;
 rt_int base_824;
 rstr two_831;
};
struct f_read_source_217fr { int dummy;
 struct f_greenc_1fr *up;
 rstr buf_832;
 rt_int bl_833;
 int c_834;
};
struct f_nn_220fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_218;
 rt_int line_219;
 P159 result_;
};
struct f_append_224fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *head_221;
 P159 *tail_222;
 P159 x_223;
};
struct f_list_len_226fr { int dummy;
 struct f_greenc_1fr *up;
 P159 l_225;
 rt_int result_;
 rt_int n_841;
 P159 p_842;
};
struct f_cur_line_227fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_229fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_228;
 int result_;
};
struct f_at_op_231fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_230;
 int result_;
};
struct f_at_kind_233fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_232;
 int result_;
};
struct f_kind_at_235fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_234;
 rt_int result_;
};
struct f_text_at_237fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_236;
 rstr result_;
};
struct f_perror_239fr { int dummy;
 struct f_greenc_1fr *up;
 rstr msg_238;
};
struct f_skip_240fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_242fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_241;
};
struct f_expect_op_244fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_243;
};
struct f_expect_id_246fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *res_245;
};
struct f_name_node_248fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_247;
 P159 x_844;
};
struct f_id_list_250fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_249;
 P159 head_845;
 P159 tail_846;
 P159 x_847;
};
struct f_binop_255fr { int dummy;
 struct f_greenc_1fr *up;
 P133 op_251;
 P159 l_252;
 P159 r_253;
 rt_int line_254;
 P159 result_;
 P159 x_849;
};
struct f_expr_257fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_256;
 P159 l_850;
 P159 r_851;
 P133 op_852;
 rt_int line_853;
};
struct f_is_rel_259fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_258;
 int result_;
};
struct f_relation_261fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_260;
 P159 l_855;
 P159 r_856;
 P159 lo_857;
 P159 hi_858;
 P159 t_859;
 P133 op_860;
 rt_int line_861;
 int neg_862;
};
struct f_simple_expr_263fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_262;
 P159 l_863;
 P159 r_864;
 P133 op_865;
 rt_int line_866;
};
struct f_term_265fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_264;
 P159 l_868;
 P159 r_869;
 P133 op_870;
 rt_int line_871;
};
struct f_factor_267fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_266;
 P159 l_873;
 P159 r_874;
 P133 op_875;
 rt_int line_876;
};
struct f_primary_269fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_268;
 P159 x_877;
 rt_int line_878;
};
struct f_agg_or_paren_271fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_270;
 rt_int line_879;
 P159 items_880;
 P159 itail_881;
 P159 it_882;
 P159 first_883;
 P159 keys_884;
 P159 ktail_885;
 P159 lab_886;
 P159 x_887;
 int more_888;
};
struct f_name_p_273fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_272;
 P159 p_891;
 P159 x_892;
 P159 args_893;
 P159 atail_894;
 P159 lo_895;
 P159 r_896;
 rt_int line_897;
 int more_898;
 P133 formal_902;
 rt_int mark_903;
};
struct f_subtype_ind_275fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_274;
 P159 x_904;
 P159 r_905;
 P159 args_906;
 P159 atail_907;
 P159 lo_908;
 rt_int line_909;
 int more_910;
};
struct f_type_spec_277fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_276;
 P159 x_913;
};
struct f_type_def_279fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_278;
 P159 x_914;
 P159 lits_915;
 P159 ltail_916;
 P159 l_917;
 P159 idx_918;
 P159 itail_919;
 P159 r_920;
 P159 comps_921;
 P159 ctail_922;
 P159 names_923;
 P159 st_924;
 P159 def_925;
 P159 cm_926;
 rt_int line_927;
 int more_928;
};
struct f_skip_pragma_280fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_skip_visibility_281fr { int dummy;
 struct f_greenc_1fr *up;
 P159 names_934;
};
struct f_skip_representation_282fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_284fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_283;
 P159 head_938;
 P159 tail_939;
 P159 x_940;
 P159 names_941;
};
struct f_object_decl_286fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_285;
 P159 head_943;
 P159 tail_944;
 P159 names_945;
 P159 st_946;
 P159 init_947;
 P159 x_948;
 rt_int line_949;
 int is_const_950;
};
struct f_type_decl_288fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_287;
 P159 x_953;
 rt_int line_954;
};
struct f_formal_part_290fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_289;
 P159 head_955;
 P159 tail_956;
 P159 names_957;
 P159 st_958;
 P159 def_959;
 P159 p_960;
 rt_int mode_961;
 int more_962;
};
struct f_designator_292fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *res_291;
};
struct f_subprogram_294fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_293;
 P159 x_965;
 rt_int line_966;
 int is_proc_967;
};
struct f_body_part_296fr { int dummy;
 struct f_greenc_1fr *up;
 P159 x_295;
};
struct f_parse_handlers_298fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_297;
 P159 head_968;
 P159 tail_969;
 P159 h_970;
 P159 names_971;
 P159 ntail_972;
 P159 n_973;
};
struct f_package_p_300fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_299;
 P159 x_977;
 rt_int line_978;
};
struct f_at_statements_end_301fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_303fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_302;
 P159 head_979;
 P159 tail_980;
 P159 x_981;
};
struct f_statement_305fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_304;
 P159 x_983;
 P159 t_984;
 rt_int line_985;
 P133 label_986;
};
struct f_task_statement_307fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_306;
};
struct f_if_stmt_309fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_308;
 P159 x_988;
 P159 arm_989;
 P159 head_990;
 P159 tail_991;
 int go_992;
};
struct f_case_stmt_311fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_310;
 P159 x_994;
 P159 arm_995;
 P159 head_996;
 P159 tail_997;
 P159 labs_998;
 P159 ltail_999;
 P159 l_1000;
 int others_arm_1001;
};
struct f_loop_stmt_313fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_312;
 P159 x_1004;
 P159 r_1005;
 rt_int line_1006;
};
struct f_compilation_315fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_314;
 P159 head_1007;
 P159 tail_1008;
 P159 x_1009;
};
struct f_hash_317fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_316;
 rt_int result_;
 rt_int h_1011;
 rt_int i_1013;
};
struct f_lookup_319fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_318;
 P110 result_;
 P110 y_1017;
};
struct f_same_task_322fr { int dummy;
 struct f_greenc_1fr *up;
 P110 a_320;
 P110 b_321;
 int result_;
};
struct f_lookup_entry_325fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_323;
 P110 owner_324;
 P110 result_;
 P110 y_1019;
};
struct f_lookup_decl_327fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_326;
 P110 result_;
 P110 y_1021;
};
struct f_overloadable_329fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_328;
 int result_;
};
struct f_same_332fr { int dummy;
 struct f_greenc_1fr *up;
 P115 a_330;
 P115 b_331;
 int result_;
};
struct f_same_signature_335fr { int dummy;
 struct f_greenc_1fr *up;
 P1023 a_333;
 P1023 b_334;
 int result_;
 P1023 x_1025;
 P1023 y_1026;
};
struct f_define_338fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_336;
 rt_int line_337;
 rt_int h_1028;
 P110 z_1029;
};
struct f_open_scope_339fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_340fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_343fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_341;
 P133 name_342;
 P110 result_;
};
struct f_new_typ_345fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_344;
 P115 result_;
};
struct f_new_cons_346fr { int dummy;
 struct f_greenc_1fr *up;
 P163 result_;
};
struct f_kind_name_348fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_347;
 rstr result_;
};
struct f_check_type_352fr { int dummy;
 struct f_greenc_1fr *up;
 P115 got_349;
 P115 want_350;
 rt_int line_351;
};
struct f_field_count_354fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_353;
 rt_int result_;
 rt_int n_1041;
 P1034 f_1042;
};
struct f_ctype_357fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_355;
 P133 *r_356;
 P133 s_1044;
};
struct f_field_decls_360fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_358;
 P133 *r_359;
 P1034 f_1046;
 P133 s_1047;
 P133 ct_1048;
};
struct f_declare_ctype_362fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_361;
 P133 ct_1050;
 P133 s_1051;
 P115 target_1052;
};
struct f_lit_index_365fr { int dummy;
 struct f_greenc_1fr *up;
 P159 lits_363;
 rstr name_364;
 rt_int result_;
 rt_int i_1053;
 P159 l_1054;
};
struct f_manifest_369fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_366;
 rt_int *v_367;
 int *ok_368;
 rt_int a_1056;
 rt_int b_1057;
 int ok2_1058;
 P110 y_1059;
};
struct f_resolve_373fr { int dummy;
 struct f_greenc_1fr *up;
 P159 st_370;
 P115 *t_371;
 P163 *c_372;
 P110 y_1060;
 P115 dummy_1061;
 P133 code_1062;
 int ok_1063;
 P159 r_1064;
};
struct f_type_definition_378fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_374;
 P133 name_375;
 P115 *t_376;
 P163 *c_377;
 P115 dummy_1065;
 P115 it_1066;
 P163 ic_1067;
 P159 l_1068;
 P159 comp_1069;
 P1034 f_1070;
 P1034 tail_1071;
 int ok_1072;
 rt_int n_1073;
 P110 y_1074;
};
struct f_finish_ptr_380fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_379;
 P163 c_1080;
};
struct f_init_storage_384fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_381;
 P115 t_382;
 P163 c_383;
 P133 ct_1081;
 P133 i_1082;
 P1034 f_1083;
};
struct f_composite_386fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_385;
 int result_;
};
struct f_assign_code_392fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_387;
 P115 t_388;
 rstr v_389;
 P163 c_390;
 P133 *r_391;
 P133 ct_1085;
};
struct f_copy_code_396fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_393;
 rstr v_394;
 P133 *r_395;
 P133 ct_1086;
};
struct f_eq_code_401fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_397;
 rstr a_398;
 rstr b_399;
 P133 *r_400;
 P133 ct_1087;
};
struct f_seen_name_404fr { int dummy;
 struct f_greenc_1fr *up;
 P140 l_402;
 rstr s_403;
 int result_;
 P140 p_1088;
};
struct f_emit_helpers_405fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_1090;
 P140 done_1091;
 P140 l_1092;
};
struct f_helper_bodies_407fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_406;
 P133 c_1096;
 P119 b_1097;
 P133 ct_1098;
 P133 x_1099;
 P133 y_1100;
 P133 conds_1101;
 P1034 f_1102;
};
struct f_storage_411fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_408;
 P115 t_409;
 P133 *access_code_410;
 P133 ct_1105;
 P133 g_1106;
};
struct f_bind_414fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_412;
 P133 access_code_413;
};
struct f_declare_subprograms_416fr { int dummy;
 struct f_greenc_1fr *up;
 P159 from_415;
 P159 e_1107;
};
struct f_declare_one_418fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_417;
 P110 y_1109;
 P110 z_1110;
};
struct f_build_subprogram_421fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_419;
 P110 *y_420;
 P159 p_1112;
 P1023 pm_1113;
 P1023 tail_1114;
 P163 rc_1115;
 rt_int k_1116;
};
struct f_decl_elements_423fr { int dummy;
 struct f_greenc_1fr *up;
 P159 decls_422;
 P159 e_1120;
 int declared_1121;
};
struct f_decl_element_425fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_424;
 P110 y_1123;
 P115 t_1124;
 P115 vt_1125;
 P163 c_1126;
 P133 acc_1127;
 P133 v_1128;
 P133 x_1129;
 int ok_1130;
};
struct f_other_decl_427fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_426;
};
struct f_subprogram_body_430fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_428;
 P110 y_429;
 P119 saved_code_1132;
 P119 saved_fields_1133;
 int saved_in_1134;
 P110 saved_sym_1135;
 P136 saved_exits_1136;
 rt_int saved_frames_1137;
 P140 saved_handlers_1138;
 P140 saved_cleanups_1139;
 P110 saved_pure_1140;
 P133 aw_1141;
 rt_int saved_pdepth_1142;
 P133 args_1143;
 P133 head_1144;
 P133 frame_1145;
 P133 parent_1146;
 P133 ct_1147;
 P133 x_1148;
 P1023 pm_1149;
 P110 p_1150;
};
struct f_gen_statements_432fr { int dummy;
 struct f_greenc_1fr *up;
 P159 stmts_431;
 P159 s_1152;
};
struct f_pop_frames_434fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_433;
 rt_int i_1154;
 P140 c_1155;
};
struct f_push_cleanup_436fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_435;
};
struct f_pop_cleanup_437fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_441fr { int dummy;
 struct f_greenc_1fr *up;
 P159 stmts_438;
 P159 hs_439;
 rt_int line_440;
 P133 f_1159;
 P133 x_1160;
 P159 h_1161;
 P159 n_1162;
 int first_1163;
 int has_others_1164;
 P133 conds_1165;
};
struct f_exc_id_445fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_442;
 rt_int line_443;
 P133 *r_444;
 P110 y_1170;
};
struct f_gen_statement_447fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_446;
 P115 t_1171;
 P115 vt_1172;
 P163 c_1173;
 P133 lv_1174;
 P133 v_1175;
 P133 x_1176;
 int ro_1177;
};
struct f_slice_assign_449fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_448;
 P133 lv_1179;
 P133 lo_1180;
 P133 hi_1181;
 P133 v_1182;
 P115 t_1183;
 P115 vt_1184;
 P163 c_1185;
 int ro_1186;
};
struct f_gen_call_451fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_450;
 P159 c_1187;
 P115 t_1188;
 P133 v_1189;
};
struct f_gen_if_453fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_452;
 P159 a_1190;
 int first_1191;
 P115 t_1192;
 P133 v_1193;
};
struct f_gen_case_455fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_454;
 P115 st_1195;
 P115 vt_1196;
 int first_1197;
 P159 a_1198;
 P159 lab_1199;
 P133 sel_1200;
 P133 tmp_1201;
 P133 ct_1202;
 P133 conds_1203;
 P133 v_1204;
 P133 lo_1205;
 P133 hi_1206;
};
struct f_push_exit_459fr { int dummy;
 struct f_greenc_1fr *up;
 P133 match_456;
 int is_loop_457;
 P133 *label_458;
};
struct f_gen_loop_461fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_460;
 P115 t_1211;
 P115 vt_1212;
 P163 c_1213;
 P133 label_1214;
 P133 cond_1215;
 P133 acc_1216;
 P133 lov_1217;
 P133 hiv_1218;
 P133 it_1219;
 P110 y_1220;
 P159 r_1221;
};
struct f_gen_block_463fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_462;
 P133 label_1222;
 P133 aw_1223;
};
struct f_gen_exit_465fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_464;
 P136 x_1224;
 P115 t_1225;
 P133 v_1226;
};
struct f_gen_return_467fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_466;
 P115 vt_1228;
 P133 v_1229;
};
struct f_access_of_470fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_468;
 P133 *r_469;
 P133 p_1230;
 rt_int i_1232;
};
struct f_link_to_473fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_471;
 P133 *r_472;
 rt_int i_1237;
};
struct f_c_ident_475fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_474;
 rstr result_;
};
struct f_deref_479fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_476;
 P115 t_477;
 P133 *r_478;
 P133 ct_1241;
};
struct f_is_object_481fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_480;
 int result_;
 P110 y_1242;
};
struct f_lvalue_487fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_482;
 P133 *code_out_483;
 P115 *t_484;
 P163 *c_485;
 int *ro_486;
 P110 y_1243;
 P133 base_1244;
 P115 bt_1245;
 P163 bc_1246;
};
struct f_select_on_495fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_488;
 P115 bt_489;
 P159 e_490;
 int *ro_491;
 P133 *code_out_492;
 P115 *t_493;
 P163 *c_494;
 P1034 f_1247;
 P133 d_1248;
};
struct f_index_on_504fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_496;
 P115 bt_497;
 P159 e_498;
 int *ro_499;
 int lv_500;
 P133 *code_out_501;
 P115 *t_502;
 P163 *c_503;
 P159 a_1250;
 P115 it_1251;
 P133 i_1252;
 P133 lo_1253;
 P133 hi_1254;
 P133 d_1255;
};
struct f_is_char_lit_506fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_505;
 int result_;
};
struct f_is_enum_lit_508fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_507;
 int result_;
 P110 y_1256;
};
struct f_c_string_510fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_509;
 rstr result_;
 rt_int n_1257;
 rt_int i_1259;
 rstr r_1264;
 rt_int j_1265;
 rt_int i_1267;
};
struct f_gexpr_515fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_511;
 P115 want_512;
 P115 *t_513;
 P133 *r_514;
 P110 y_1271;
 P115 bt_1272;
 P163 c_1273;
 int ro_1274;
 P133 base_1275;
 P133 a_1276;
 P159 nm_1277;
 int saved_lv_1278;
};
struct f_gexpr_1_520fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_516;
 P115 want_517;
 P115 *t_518;
 P133 *r_519;
 P110 y_1279;
 P115 bt_1280;
 P163 c_1281;
 int ro_1282;
 P133 base_1283;
 P133 a_1284;
 P159 nm_1285;
};
struct f_char_literal_525fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_521;
 P115 want_522;
 P115 *t_523;
 P133 *r_524;
 rt_int i_1287;
};
struct f_gen_name_530fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_526;
 P115 want_527;
 P115 *t_528;
 P133 *r_529;
 P110 y_1288;
 P110 z_1289;
 P159 call_1290;
};
struct f_gen_unop_535fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_531;
 P115 want_532;
 P115 *t_533;
 P133 *r_534;
 P133 a_1292;
 int done_1293;
};
struct f_gen_binop_540fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_536;
 P115 want_537;
 P115 *t_538;
 P133 *r_539;
 rstr op_1294;
 P115 ta_1295;
 P115 tb_1296;
 P115 hint_1297;
 P115 ct_1298;
 P133 a_1299;
 P133 b_1300;
 P133 x_1301;
 P133 dummy_1302;
 int done_1303;
};
struct f_conversion_545fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_541;
 P110 y_542;
 P115 *t_543;
 P133 *r_544;
 P115 aty_1304;
 P133 a_1305;
};
struct f_gen_attr_550fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_546;
 P115 want_547;
 P115 *t_548;
 P133 *r_549;
 rstr a_1306;
 P110 y_1307;
 P115 tt_1308;
 P115 aty_1309;
 P133 v_1310;
 P133 d_1311;
 P163 c_1312;
 rt_int n_1313;
};
struct f_allocator_555fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_551;
 P115 want_552;
 P115 *t_553;
 P133 *r_554;
 P110 y_1314;
 P115 target_1315;
 P115 vt_1316;
 P133 ct_1317;
 P133 pt_1318;
 P133 cell_1319;
 P133 v_1320;
 P133 x_1321;
};
struct f_aggregate_560fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_556;
 P115 want_557;
 P115 *t_558;
 P133 *r_559;
 P159 it_1322;
 P1034 f_1323;
 P115 vt_1324;
 P133 ct_1325;
 P133 tmp_1326;
 P133 v_1327;
 P133 x_1328;
 P133 parts_1329;
 P133 et_1330;
 P133 lo_1331;
 P133 hi_1332;
 P133 key_1333;
 rt_int n_1334;
 P159 lab_1335;
};
struct f_actual_for_564fr { int dummy;
 struct f_greenc_1fr *up;
 P159 args_561;
 P1023 pm_562;
 P1023 first_563;
 P159 result_;
 P159 a_1341;
 P1023 p_1342;
};
struct f_gcall_569fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_565;
 int is_stmt_566;
 P115 *t_567;
 P133 *r_568;
 P159 fn_1345;
 P159 nm_1346;
 P110 y_1347;
 P133 args_1348;
 P133 lv_1349;
 P133 v_1350;
 P133 ct_1351;
 P133 x_1352;
 P159 a_1353;
 P1023 pm_1354;
 P115 lt_1355;
 P115 vt_1356;
 P163 lc_1357;
 int ro_1358;
};
struct f_gcall_with_574fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_570;
 P110 y_571;
 P115 *t_572;
 P133 *r_573;
 P133 args_1359;
 P133 lv_1360;
 P133 v_1361;
 P159 a_1362;
 P1023 pm_1363;
 P115 lt_1364;
 P115 vt_1365;
 P163 lc_1366;
 int ro_1367;
};
struct f_builtin_581fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_575;
 P159 args_576;
 rt_int line_577;
 int is_stmt_578;
 P115 *t_579;
 P133 *r_580;
 P115 aty_1369;
 P115 lt_1370;
 P133 a_1371;
 P133 w_1372;
 P133 lv_1373;
 P163 lc_1374;
 int ro_1375;
};
struct f_is_package_583fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_582;
 int result_;
 P110 y_1376;
};
struct f_member_of_587fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_584;
 rstr name_585;
 rt_int line_586;
 P110 result_;
 P110 y_1377;
 P110 m_1378;
};
struct f_inside_package_589fr { int dummy;
 struct f_greenc_1fr *up;
 P159 p_588;
 int result_;
 P140 l_1380;
};
struct f_copy_sym_592fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_590;
 P110 *z_591;
};
struct f_complete_private_595fr { int dummy;
 struct f_greenc_1fr *up;
 P115 ph_593;
 P115 full_594;
 P133 n_1384;
 P159 p_1385;
};
struct f_package_spec_597fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_596;
 P110 y_1386;
 P110 m_1387;
 P110 z_1388;
 P159 saved_1389;
 P110 first_private_1390;
};
struct f_hidden_from_600fr { int dummy;
 struct f_greenc_1fr *up;
 P110 m_598;
 P110 first_private_599;
 int result_;
 P110 p_1394;
};
struct f_package_body_602fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_601;
 P110 y_1396;
 P110 m_1397;
 P110 z_1398;
 P159 saved_1399;
};
struct f_use_clause_604fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_603;
 P159 n_1405;
 P110 y_1406;
 P110 m_1407;
 P110 z_1408;
 P110 old_1409;
};
struct f_fits_609fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_605;
 P159 args_606;
 P115 want_607;
 int *ok_608;
 P1023 pm_1412;
 P159 a_1413;
 P115 t_1414;
 P163 c_1415;
 P133 v_1416;
 int ro_1417;
 P119 saved_1418;
 rt_int used_1419;
};
struct f_is_builtin_611fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_610;
 int result_;
};
struct f_resolve_overload_618fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_612;
 P159 args_613;
 int is_stmt_614;
 P115 want_615;
 rt_int line_616;
 P110 *y_617;
 P110 z_1424;
 P110 first_1425;
 rt_int n_1426;
 int ok_1427;
 rt_int pass_1429;
};
struct f_user_operator_624fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_619;
 P115 want_620;
 P115 *t_621;
 P133 *r_622;
 int *done_623;
 P133 op_1434;
 int negate_1435;
 P110 y_1436;
 P159 call_1437;
 P159 fname_1438;
 P159 l_1439;
 P159 rt_1440;
 int ok_1441;
};
struct f_task_p_626fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_625;
 P159 x_1443;
 rt_int line_1444;
};
struct f_entry_p_628fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_627;
 P159 x_1445;
};
struct f_accept_p_630fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_629;
 P159 x_1446;
};
struct f_delay_p_632fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_631;
 P159 x_1447;
};
struct f_designators_634fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_633;
 P159 head_1448;
 P159 tail_1449;
 P159 n_1450;
};
struct f_parse_task_statement_636fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_635;
 P159 x_1452;
 P159 alt_1453;
 P159 head_1454;
 P159 tail_1455;
 rt_int line_1456;
};
struct f_path_at_640fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_637;
 rstr field_638;
 P133 *r_639;
 rt_int i_1459;
};
struct f_is_task_name_642fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_641;
 int result_;
 P110 y_1463;
};
struct f_task_of_646fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_643;
 P110 *y_644;
 P159 *ix_645;
 P159 n_1464;
};
struct f_own_index_648fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *r_647;
 P110 y_1465;
};
struct f_member_653fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_649;
 rstr arr_650;
 rstr i_651;
 P133 *r_652;
 P133 lo_1466;
 P133 hi_1467;
};
struct f_act_path_656fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_654;
 P133 *r_655;
 P133 i_1468;
};
struct f_act_path_i_660fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_657;
 rstr i_658;
 P133 *r_659;
};
struct f_entry_path_664fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_661;
 rstr i_662;
 P133 *r_663;
 P133 own_1469;
};
struct f_declare_slot_667fr { int dummy;
 struct f_greenc_1fr *up;
 rstr ctype_name_665;
 rstr field_666;
};
struct f_task_decl_669fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_668;
};
struct f_family_arg_struct_670fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_674fr { int dummy;
 struct f_greenc_1fr *up;
 P159 b_671;
 P110 y_672;
 P133 x_673;
 P133 lo_1470;
 P133 hi_1471;
 P133 v_1472;
 P115 vt_1473;
 P163 c_1474;
};
struct f_entry_family_slot_679fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_675;
 rstr base_676;
 rstr i_677;
 P133 *r_678;
 P133 lo_1475;
 P133 hi_1476;
};
struct f_task_spec_681fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_680;
 P110 y_1477;
 P110 m_1478;
 P110 z_1479;
 P110 saved_1480;
 P133 d_1481;
 P133 v_1482;
 P133 p_1483;
 P133 p2_1484;
 P115 vt_1485;
 P159 r_1486;
};
struct f_entry_decl_683fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_682;
 P110 y_1488;
 P159 p_1489;
 P1023 pm_1490;
 P1023 tail_1491;
 P133 fields_1492;
 P133 ct_1493;
 P133 x_1494;
 P133 lo_1495;
 P133 hi_1496;
};
struct f_task_body_685fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_684;
 P110 y_1500;
 P110 b_1501;
 P110 m_1502;
 P110 z_1503;
 P110 saved_1504;
};
struct f_task_awaits_688fr { int dummy;
 struct f_greenc_1fr *up;
 P159 decls_686;
 P133 *aw_687;
 P159 e_1508;
 P110 y_1509;
 P133 p_1510;
};
struct f_task_failure_690fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_689;
 P110 y_1512;
 P133 a_1513;
};
struct f_entry_sym_694fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_691;
 P110 *y_692;
 P159 *ix_693;
 P110 t_1514;
};
struct f_other_call_699fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_695;
 int is_stmt_696;
 P115 *t_697;
 P133 *r_698;
 P110 y_1515;
 P1023 pm_1516;
 P159 a_1517;
 P133 parts_1518;
 P133 v_1519;
 P133 lv_1520;
 P133 ent_1521;
 P133 act_1522;
 P133 i_1523;
 P115 vt_1524;
 P115 lt_1525;
 P163 lc_1526;
 int ro_1527;
 P159 ix_1528;
 P159 fix_1529;
 P159 args_node_1530;
};
struct f_other_attr_704fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_700;
 P110 y_701;
 P115 *t_702;
 P133 *r_703;
 rstr a_1532;
 P133 p_1533;
};
struct f_member_attr_708fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_705;
 P115 *t_706;
 P133 *r_707;
 P110 y_1534;
 P159 ix_1535;
 P133 i_1536;
 P133 p_1537;
 P115 vt_1538;
};
struct f_task_builtin_714fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_709;
 P159 args_710;
 rt_int line_711;
 P115 *t_712;
 P133 *r_713;
 P115 vt_1539;
 P133 v_1540;
};
struct f_gen_accept_716fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_715;
 P110 y_1541;
 P133 ent_1542;
 P133 ep_1543;
 P133 xf_1544;
 P133 x_1545;
 P1023 pm_1546;
 P159 f_1547;
 P110 p_1548;
};
struct f_member_slot_720fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_717;
 P159 s_718;
 P133 *ent_719;
 P115 vt_1550;
 P133 v_1551;
};
struct f_gen_delay_ticks_723fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_721;
 P133 *r_722;
 P115 vt_1552;
 P133 v_1553;
};
struct f_gen_select_725fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_724;
 P159 alt_1554;
 rt_int n_1555;
 rt_int i_1556;
 int has_delay_1557;
 int has_accept_1558;
 P133 al_1559;
 P133 w_1560;
 P133 g_1561;
 P133 ent_1562;
 P133 ticks_1563;
 P115 vt_1564;
 P110 y_1565;
};
struct f_family_range_730fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_726;
 P159 ix_727;
 P133 *lo_728;
 P133 *hi_729;
 P115 vt_1569;
};
struct f_task_statement_gen_732fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_731;
 P159 n_1570;
 P159 ix_1571;
 P110 y_1572;
 P133 a_1573;
 P133 d_1574;
 P133 l_1575;
 P133 ticks_1576;
 P133 lo_1577;
 P133 hi_1578;
};
struct f_root_name_734fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_733;
 P159 result_;
};
struct f_check_pure_target_737fr { int dummy;
 struct f_greenc_1fr *up;
 P159 target_735;
 rt_int line_736;
 P159 n_1582;
 P110 y_1583;
};
struct f_assigns_nonlocal_740fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_738;
 rstr name_739;
 int result_;
};
struct f_declares_743fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_741;
 rstr name_742;
 int result_;
 P159 p_1584;
 P159 e_1585;
};
struct f_scan_handlers_747fr { int dummy;
 struct f_greenc_1fr *up;
 P159 h_744;
 P159 d_745;
 rstr name_746;
 int result_;
 P159 p_1588;
};
struct f_scan_assigns_751fr { int dummy;
 struct f_greenc_1fr *up;
 P159 stmts_748;
 P159 d_749;
 rstr name_750;
 int result_;
 P159 s_1590;
 P159 a_1591;
 P159 r_1592;
};
struct f_check_call_rules_754fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_752;
 P110 y_753;
 P110 z_1596;
 P110 s_1597;
};
struct f_generic_p_756fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_755;
 P159 x_1599;
 P159 p_1600;
 P159 head_1601;
 P159 tail_1602;
 P159 names_1603;
 P159 st_1604;
 P159 def_1605;
 P159 sub_1606;
 P133 def_name_text_1607;
 int more_1608;
};
struct f_instantiation_759fr { int dummy;
 struct f_greenc_1fr *up;
 P159 x_757;
 P159 *res_758;
 P159 i_1611;
 P159 head_1612;
 P159 tail_1613;
 P159 a_1614;
 P133 formal_1615;
 rt_int mark_1616;
 int more_1617;
};
struct f_generic_decl_761fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_760;
 P110 y_1619;
};
struct f_is_generic_name_763fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_762;
 int result_;
 P110 y_1620;
};
struct f_attach_generic_body_765fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_764;
 P110 y_1621;
};
struct f_gactual_769fr { int dummy;
 struct f_greenc_1fr *up;
 P159 args_766;
 rt_int nth_767;
 rstr name_768;
 P159 result_;
 P159 a_1622;
 rt_int i_1623;
};
struct f_copy_node_773fr { int dummy;
 struct f_greenc_1fr *up;
 P159 n_770;
 P133 name_771;
 P159 *r_772;
};
struct f_instantiate_775fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_774;
 P110 g_1625;
 P159 gd_1626;
 P159 pat_1627;
 P159 f_1628;
 P159 a_1629;
 P159 cn_1630;
 P110 y_1631;
 P110 z_1632;
 P110 fs_1633;
 rt_int nth_1634;
 P115 t_1635;
 P115 vt_1636;
 P163 c_1637;
 P133 v_1638;
 P133 acc_1639;
 P133 x_1640;
 int ok_1641;
};
struct f_predef_type_780fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_776;
 P115 t_777;
 rstr lo_778;
 rstr hi_779;
 P110 y_1644;
};
struct f_predef_const_784fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_781;
 P115 t_782;
 rstr code_text_783;
 P110 y_1645;
};
struct f_predef_exc_786fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_785;
 P110 y_1646;
};
struct f_predef_lit_790fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_787;
 P115 t_788;
 rt_int v_789;
 P110 y_1647;
};
struct f_predefine_791fr { int dummy;
 struct f_greenc_1fr *up;
 rstr control_1648;
 rt_int start_1649;
 rt_int code_no_1650;
 rt_int i_1652;
 rt_int i_1657;
};
struct f_translate_793fr { int dummy;
 struct f_greenc_1fr *up;
 P159 u_792;
 P159 p_1661;
 P110 y_1662;
};
struct f_print_program_794fr { int dummy;
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
 rt_int frames_139;
 P140 handlers_142;
 P140 cleanups_143;
 rt_int trial_144;
 P115 ty_int_145;
 P115 ty_bool_146;
 P115 ty_float_147;
 P115 ty_char_148;
 P115 ty_string_149;
 P115 ty_void_150;
 P115 ty_nil_151;
 P115 ty_univ_152;
 P115 ty_act_153;
 P115 ty_tdecl_154;
 P115 ty_entry_155;
 P110 cur_task_156;
 rt_int accept_depth_157;
 int famarg_done_158;
 P159 fam_ix_161;
 P119 out_awaits_162;
 P163 no_cons_165;
 P159 units_166;
 P140 pkg_stack_167;
 P159 cur_pkg_168;
 P133 prefix_hint_169;
 P115 call_want_170;
 P110 pure_sym_171;
 rt_int pure_depth_172;
 int vrp_ok_173;
 int in_lv_path_174;
 int last_deref_175;
 P133 main_name_176;
};
static void as_R1035(R1035 *d, R1035 s);
static R1035 cp_R1035(R1035 s);
static int eq_R1035(R1035 a, R1035 b);
static void as_R1024(R1024 *d, R1024 s);
static R1024 cp_R1024(R1024 s);
static int eq_R1024(R1024 a, R1024 b);
static void as_R164(R164 *d, R164 s);
static R164 cp_R164(R164 s);
static int eq_R164(R164 a, R164 b);
static void as_R160(R160 *d, R160 s);
static R160 cp_R160(R160 s);
static int eq_R160(R160 a, R160 b);
static void as_R141(R141 *d, R141 s);
static R141 cp_R141(R141 s);
static int eq_R141(R141 a, R141 b);
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
static P133 f_mk_178(struct f_greenc_1fr *up_, rstr s_177);
static void f_new_name_181(struct f_greenc_1fr *up_, rstr base_179, P133 *res_180);
static int f_is_letter_183(struct f_greenc_1fr *up_, int c_182);
static int f_is_digit_185(struct f_greenc_1fr *up_, int c_184);
static int f_upper_187(struct f_greenc_1fr *up_, int c_186);
static rstr f_lower_s_189(struct f_greenc_1fr *up_, rstr s_188);
static rstr f_c_field_191(struct f_greenc_1fr *up_, rstr s_190);
static rstr f_q_192(struct f_greenc_1fr *up_);
static void f_fail_195(struct f_greenc_1fr *up_, rt_int line_193, rstr msg_194);
static P119 f_new_buffer_196(struct f_greenc_1fr *up_);
static void f_put_to_199(struct f_greenc_1fr *up_, P119 b_197, rstr s_198);
static void f_emit_201(struct f_greenc_1fr *up_, rstr s_200);
static void f_print_buffer_203(struct f_greenc_1fr *up_, P119 b_202);
static void f_splice_206(struct f_greenc_1fr *up_, P119 a_204, P119 b_205);
static int f_is_reserved_208(struct f_greenc_1fr *up_, rstr w_207);
static void f_add_token_212(struct f_greenc_1fr *up_, rt_int kind_209, rstr s_210, rt_int ival_211);
static rt_int f_digit_value_214(struct f_greenc_1fr *up_, int c_213);
static void f_lex_line_216(struct f_greenc_1fr *up_, rstr line_215);
static void f_read_source_217(struct f_greenc_1fr *up_);
static P159 f_nn_220(struct f_greenc_1fr *up_, rt_int kind_218, rt_int line_219);
static void f_append_224(struct f_greenc_1fr *up_, P159 *head_221, P159 *tail_222, P159 x_223);
static rt_int f_list_len_226(struct f_greenc_1fr *up_, P159 l_225);
static rt_int f_cur_line_227(struct f_greenc_1fr *up_);
static int f_at_kw_229(struct f_greenc_1fr *up_, rstr w_228);
static int f_at_op_231(struct f_greenc_1fr *up_, rstr w_230);
static int f_at_kind_233(struct f_greenc_1fr *up_, rt_int k_232);
static rt_int f_kind_at_235(struct f_greenc_1fr *up_, rt_int k_234);
static rstr f_text_at_237(struct f_greenc_1fr *up_, rt_int k_236);
static void f_perror_239(struct f_greenc_1fr *up_, rstr msg_238);
static void f_skip_240(struct f_greenc_1fr *up_);
static void f_expect_kw_242(struct f_greenc_1fr *up_, rstr w_241);
static void f_expect_op_244(struct f_greenc_1fr *up_, rstr w_243);
static void f_expect_id_246(struct f_greenc_1fr *up_, P133 *res_245);
static void f_name_node_248(struct f_greenc_1fr *up_, P159 *res_247);
static void f_id_list_250(struct f_greenc_1fr *up_, P159 *res_249);
static P159 f_binop_255(struct f_greenc_1fr *up_, P133 op_251, P159 l_252, P159 r_253, rt_int line_254);
static void f_expr_257(struct f_greenc_1fr *up_, P159 *res_256);
static int f_is_rel_259(struct f_greenc_1fr *up_, rstr s_258);
static void f_relation_261(struct f_greenc_1fr *up_, P159 *res_260);
static void f_simple_expr_263(struct f_greenc_1fr *up_, P159 *res_262);
static void f_term_265(struct f_greenc_1fr *up_, P159 *res_264);
static void f_factor_267(struct f_greenc_1fr *up_, P159 *res_266);
static void f_primary_269(struct f_greenc_1fr *up_, P159 *res_268);
static void f_agg_or_paren_271(struct f_greenc_1fr *up_, P159 *res_270);
static void f_name_p_273(struct f_greenc_1fr *up_, P159 *res_272);
static void f_subtype_ind_275(struct f_greenc_1fr *up_, P159 *res_274);
static void f_type_spec_277(struct f_greenc_1fr *up_, P159 *res_276);
static void f_type_def_279(struct f_greenc_1fr *up_, P159 *res_278);
static void f_skip_pragma_280(struct f_greenc_1fr *up_);
static void f_skip_visibility_281(struct f_greenc_1fr *up_);
static void f_skip_representation_282(struct f_greenc_1fr *up_);
static void f_decl_part_284(struct f_greenc_1fr *up_, P159 *res_283);
static void f_object_decl_286(struct f_greenc_1fr *up_, P159 *res_285);
static void f_type_decl_288(struct f_greenc_1fr *up_, P159 *res_287);
static void f_formal_part_290(struct f_greenc_1fr *up_, P159 *res_289);
static void f_designator_292(struct f_greenc_1fr *up_, P133 *res_291);
static void f_subprogram_294(struct f_greenc_1fr *up_, P159 *res_293);
static void f_body_part_296(struct f_greenc_1fr *up_, P159 x_295);
static void f_parse_handlers_298(struct f_greenc_1fr *up_, P159 *res_297);
static void f_package_p_300(struct f_greenc_1fr *up_, P159 *res_299);
static int f_at_statements_end_301(struct f_greenc_1fr *up_);
static void f_statements_303(struct f_greenc_1fr *up_, P159 *res_302);
static void f_statement_305(struct f_greenc_1fr *up_, P159 *res_304);
static void f_task_statement_307(struct f_greenc_1fr *up_, P159 *res_306);
static void f_if_stmt_309(struct f_greenc_1fr *up_, P159 *res_308);
static void f_case_stmt_311(struct f_greenc_1fr *up_, P159 *res_310);
static void f_loop_stmt_313(struct f_greenc_1fr *up_, P159 *res_312);
static void f_compilation_315(struct f_greenc_1fr *up_, P159 *res_314);
static rt_int f_hash_317(struct f_greenc_1fr *up_, rstr s_316);
static P110 f_lookup_319(struct f_greenc_1fr *up_, rstr name_318);
static int f_same_task_322(struct f_greenc_1fr *up_, P110 a_320, P110 b_321);
static P110 f_lookup_entry_325(struct f_greenc_1fr *up_, rstr name_323, P110 owner_324);
static P110 f_lookup_decl_327(struct f_greenc_1fr *up_, P159 d_326);
static int f_overloadable_329(struct f_greenc_1fr *up_, P110 y_328);
static int f_same_332(struct f_greenc_1fr *up_, P115 a_330, P115 b_331);
static int f_same_signature_335(struct f_greenc_1fr *up_, P1023 a_333, P1023 b_334);
static void f_define_338(struct f_greenc_1fr *up_, P110 y_336, rt_int line_337);
static void f_open_scope_339(struct f_greenc_1fr *up_);
static void f_close_scope_340(struct f_greenc_1fr *up_);
static P110 f_new_sym_343(struct f_greenc_1fr *up_, rt_int kind_341, P133 name_342);
static P115 f_new_typ_345(struct f_greenc_1fr *up_, rt_int kind_344);
static P163 f_new_cons_346(struct f_greenc_1fr *up_);
static rstr f_kind_name_348(struct f_greenc_1fr *up_, P115 t_347);
static void f_check_type_352(struct f_greenc_1fr *up_, P115 got_349, P115 want_350, rt_int line_351);
static rt_int f_field_count_354(struct f_greenc_1fr *up_, P115 t_353);
static void f_ctype_357(struct f_greenc_1fr *up_, P115 t_355, P133 *r_356);
static void f_field_decls_360(struct f_greenc_1fr *up_, P115 t_358, P133 *r_359);
static void f_declare_ctype_362(struct f_greenc_1fr *up_, P115 t_361);
static rt_int f_lit_index_365(struct f_greenc_1fr *up_, P159 lits_363, rstr name_364);
static void f_manifest_369(struct f_greenc_1fr *up_, P159 e_366, rt_int *v_367, int *ok_368);
static void f_resolve_373(struct f_greenc_1fr *up_, P159 st_370, P115 *t_371, P163 *c_372);
static void f_type_definition_378(struct f_greenc_1fr *up_, P159 d_374, P133 name_375, P115 *t_376, P163 *c_377);
static void f_finish_ptr_380(struct f_greenc_1fr *up_, P115 t_379);
static void f_init_storage_384(struct f_greenc_1fr *up_, rstr lval_381, P115 t_382, P163 c_383);
static int f_composite_386(struct f_greenc_1fr *up_, P115 t_385);
static void f_assign_code_392(struct f_greenc_1fr *up_, rstr lval_387, P115 t_388, rstr v_389, P163 c_390, P133 *r_391);
static void f_copy_code_396(struct f_greenc_1fr *up_, P115 t_393, rstr v_394, P133 *r_395);
static void f_eq_code_401(struct f_greenc_1fr *up_, P115 t_397, rstr a_398, rstr b_399, P133 *r_400);
static int f_seen_name_404(struct f_greenc_1fr *up_, P140 l_402, rstr s_403);
static void f_emit_helpers_405(struct f_greenc_1fr *up_);
static void f_helper_bodies_407(struct f_greenc_1fr *up_, P115 t_406);
static void f_storage_411(struct f_greenc_1fr *up_, rstr name_408, P115 t_409, P133 *access_code_410);
static void f_bind_414(struct f_greenc_1fr *up_, P110 y_412, P133 access_code_413);
static void f_declare_subprograms_416(struct f_greenc_1fr *up_, P159 from_415);
static void f_declare_one_418(struct f_greenc_1fr *up_, P159 e_417);
static void f_build_subprogram_421(struct f_greenc_1fr *up_, P159 d_419, P110 *y_420);
static void f_decl_elements_423(struct f_greenc_1fr *up_, P159 decls_422);
static void f_decl_element_425(struct f_greenc_1fr *up_, P159 e_424);
static void f_other_decl_427(struct f_greenc_1fr *up_, P159 e_426);
static void f_subprogram_body_430(struct f_greenc_1fr *up_, P159 d_428, P110 y_429);
static void f_gen_statements_432(struct f_greenc_1fr *up_, P159 stmts_431);
static void f_pop_frames_434(struct f_greenc_1fr *up_, rt_int upto_433);
static void f_push_cleanup_436(struct f_greenc_1fr *up_, rstr s_435);
static void f_pop_cleanup_437(struct f_greenc_1fr *up_);
static void f_guarded_441(struct f_greenc_1fr *up_, P159 stmts_438, P159 hs_439, rt_int line_440);
static void f_exc_id_445(struct f_greenc_1fr *up_, rstr name_442, rt_int line_443, P133 *r_444);
static void f_gen_statement_447(struct f_greenc_1fr *up_, P159 s_446);
static void f_slice_assign_449(struct f_greenc_1fr *up_, P159 s_448);
static void f_gen_call_451(struct f_greenc_1fr *up_, P159 s_450);
static void f_gen_if_453(struct f_greenc_1fr *up_, P159 s_452);
static void f_gen_case_455(struct f_greenc_1fr *up_, P159 s_454);
static void f_push_exit_459(struct f_greenc_1fr *up_, P133 match_456, int is_loop_457, P133 *label_458);
static void f_gen_loop_461(struct f_greenc_1fr *up_, P159 s_460);
static void f_gen_block_463(struct f_greenc_1fr *up_, P159 s_462);
static void f_gen_exit_465(struct f_greenc_1fr *up_, P159 s_464);
static void f_gen_return_467(struct f_greenc_1fr *up_, P159 s_466);
static void f_access_of_470(struct f_greenc_1fr *up_, P110 y_468, P133 *r_469);
static void f_link_to_473(struct f_greenc_1fr *up_, rt_int l_471, P133 *r_472);
static rstr f_c_ident_475(struct f_greenc_1fr *up_, rstr s_474);
static void f_deref_479(struct f_greenc_1fr *up_, rstr base_476, P115 t_477, P133 *r_478);
static int f_is_object_481(struct f_greenc_1fr *up_, P159 e_480);
static void f_lvalue_487(struct f_greenc_1fr *up_, P159 e_482, P133 *code_out_483, P115 *t_484, P163 *c_485, int *ro_486);
static void f_select_on_495(struct f_greenc_1fr *up_, rstr base_488, P115 bt_489, P159 e_490, int *ro_491, P133 *code_out_492, P115 *t_493, P163 *c_494);
static void f_index_on_504(struct f_greenc_1fr *up_, rstr base_496, P115 bt_497, P159 e_498, int *ro_499, int lv_500, P133 *code_out_501, P115 *t_502, P163 *c_503);
static int f_is_char_lit_506(struct f_greenc_1fr *up_, P159 e_505);
static int f_is_enum_lit_508(struct f_greenc_1fr *up_, P159 e_507);
static rstr f_c_string_510(struct f_greenc_1fr *up_, rstr s_509);
static void f_gexpr_515(struct f_greenc_1fr *up_, P159 e_511, P115 want_512, P115 *t_513, P133 *r_514);
static void f_gexpr_1_520(struct f_greenc_1fr *up_, P159 e_516, P115 want_517, P115 *t_518, P133 *r_519);
static void f_char_literal_525(struct f_greenc_1fr *up_, P159 e_521, P115 want_522, P115 *t_523, P133 *r_524);
static void f_gen_name_530(struct f_greenc_1fr *up_, P159 e_526, P115 want_527, P115 *t_528, P133 *r_529);
static void f_gen_unop_535(struct f_greenc_1fr *up_, P159 e_531, P115 want_532, P115 *t_533, P133 *r_534);
static void f_gen_binop_540(struct f_greenc_1fr *up_, P159 e_536, P115 want_537, P115 *t_538, P133 *r_539);
static void f_conversion_545(struct f_greenc_1fr *up_, P159 e_541, P110 y_542, P115 *t_543, P133 *r_544);
static void f_gen_attr_550(struct f_greenc_1fr *up_, P159 e_546, P115 want_547, P115 *t_548, P133 *r_549);
static void f_allocator_555(struct f_greenc_1fr *up_, P159 e_551, P115 want_552, P115 *t_553, P133 *r_554);
static void f_aggregate_560(struct f_greenc_1fr *up_, P159 e_556, P115 want_557, P115 *t_558, P133 *r_559);
static P159 f_actual_for_564(struct f_greenc_1fr *up_, P159 args_561, P1023 pm_562, P1023 first_563);
static void f_gcall_569(struct f_greenc_1fr *up_, P159 e_565, int is_stmt_566, P115 *t_567, P133 *r_568);
static void f_gcall_with_574(struct f_greenc_1fr *up_, P159 e_570, P110 y_571, P115 *t_572, P133 *r_573);
static void f_builtin_581(struct f_greenc_1fr *up_, rstr name_575, P159 args_576, rt_int line_577, int is_stmt_578, P115 *t_579, P133 *r_580);
static int f_is_package_583(struct f_greenc_1fr *up_, P159 e_582);
static P110 f_member_of_587(struct f_greenc_1fr *up_, rstr p_584, rstr name_585, rt_int line_586);
static int f_inside_package_589(struct f_greenc_1fr *up_, P159 p_588);
static void f_copy_sym_592(struct f_greenc_1fr *up_, P110 y_590, P110 *z_591);
static void f_complete_private_595(struct f_greenc_1fr *up_, P115 ph_593, P115 full_594);
static void f_package_spec_597(struct f_greenc_1fr *up_, P159 e_596);
static int f_hidden_from_600(struct f_greenc_1fr *up_, P110 m_598, P110 first_private_599);
static void f_package_body_602(struct f_greenc_1fr *up_, P159 e_601);
static void f_use_clause_604(struct f_greenc_1fr *up_, P159 e_603);
static void f_fits_609(struct f_greenc_1fr *up_, P110 y_605, P159 args_606, P115 want_607, int *ok_608);
static int f_is_builtin_611(struct f_greenc_1fr *up_, rstr n_610);
static void f_resolve_overload_618(struct f_greenc_1fr *up_, rstr name_612, P159 args_613, int is_stmt_614, P115 want_615, rt_int line_616, P110 *y_617);
static void f_user_operator_624(struct f_greenc_1fr *up_, P159 e_619, P115 want_620, P115 *t_621, P133 *r_622, int *done_623);
static void f_task_p_626(struct f_greenc_1fr *up_, P159 *res_625);
static void f_entry_p_628(struct f_greenc_1fr *up_, P159 *res_627);
static void f_accept_p_630(struct f_greenc_1fr *up_, P159 *res_629);
static void f_delay_p_632(struct f_greenc_1fr *up_, P159 *res_631);
static void f_designators_634(struct f_greenc_1fr *up_, P159 *res_633);
static void f_parse_task_statement_636(struct f_greenc_1fr *up_, P159 *res_635);
static void f_path_at_640(struct f_greenc_1fr *up_, rt_int level_637, rstr field_638, P133 *r_639);
static int f_is_task_name_642(struct f_greenc_1fr *up_, rstr n_641);
static void f_task_of_646(struct f_greenc_1fr *up_, P159 e_643, P110 *y_644, P159 *ix_645);
static void f_own_index_648(struct f_greenc_1fr *up_, P133 *r_647);
static void f_member_653(struct f_greenc_1fr *up_, P110 y_649, rstr arr_650, rstr i_651, P133 *r_652);
static void f_act_path_656(struct f_greenc_1fr *up_, P110 y_654, P133 *r_655);
static void f_act_path_i_660(struct f_greenc_1fr *up_, P110 y_657, rstr i_658, P133 *r_659);
static void f_entry_path_664(struct f_greenc_1fr *up_, P110 y_661, rstr i_662, P133 *r_663);
static void f_declare_slot_667(struct f_greenc_1fr *up_, rstr ctype_name_665, rstr field_666);
static void f_task_decl_669(struct f_greenc_1fr *up_, P159 e_668);
static void f_family_arg_struct_670(struct f_greenc_1fr *up_);
static void f_family_bounds_674(struct f_greenc_1fr *up_, P159 b_671, P110 y_672, P133 x_673);
static void f_entry_family_slot_679(struct f_greenc_1fr *up_, P110 y_675, rstr base_676, rstr i_677, P133 *r_678);
static void f_task_spec_681(struct f_greenc_1fr *up_, P159 e_680);
static void f_entry_decl_683(struct f_greenc_1fr *up_, P159 e_682);
static void f_task_body_685(struct f_greenc_1fr *up_, P159 e_684);
static void f_task_awaits_688(struct f_greenc_1fr *up_, P159 decls_686, P133 *aw_687);
static void f_task_failure_690(struct f_greenc_1fr *up_, P159 s_689);
static void f_entry_sym_694(struct f_greenc_1fr *up_, P159 e_691, P110 *y_692, P159 *ix_693);
static void f_other_call_699(struct f_greenc_1fr *up_, P159 e_695, int is_stmt_696, P115 *t_697, P133 *r_698);
static void f_other_attr_704(struct f_greenc_1fr *up_, P159 e_700, P110 y_701, P115 *t_702, P133 *r_703);
static void f_member_attr_708(struct f_greenc_1fr *up_, P159 e_705, P115 *t_706, P133 *r_707);
static void f_task_builtin_714(struct f_greenc_1fr *up_, rstr name_709, P159 args_710, rt_int line_711, P115 *t_712, P133 *r_713);
static void f_gen_accept_716(struct f_greenc_1fr *up_, P159 s_715);
static void f_member_slot_720(struct f_greenc_1fr *up_, P110 y_717, P159 s_718, P133 *ent_719);
static void f_gen_delay_ticks_723(struct f_greenc_1fr *up_, P159 e_721, P133 *r_722);
static void f_gen_select_725(struct f_greenc_1fr *up_, P159 s_724);
static void f_family_range_730(struct f_greenc_1fr *up_, P110 y_726, P159 ix_727, P133 *lo_728, P133 *hi_729);
static void f_task_statement_gen_732(struct f_greenc_1fr *up_, P159 s_731);
static P159 f_root_name_734(struct f_greenc_1fr *up_, P159 e_733);
static void f_check_pure_target_737(struct f_greenc_1fr *up_, P159 target_735, rt_int line_736);
static int f_assigns_nonlocal_740(struct f_greenc_1fr *up_, P159 d_738, rstr name_739);
static int f_declares_743(struct f_greenc_1fr *up_, P159 d_741, rstr name_742);
static int f_scan_handlers_747(struct f_greenc_1fr *up_, P159 h_744, P159 d_745, rstr name_746);
static int f_scan_assigns_751(struct f_greenc_1fr *up_, P159 stmts_748, P159 d_749, rstr name_750);
static void f_check_call_rules_754(struct f_greenc_1fr *up_, P159 e_752, P110 y_753);
static void f_generic_p_756(struct f_greenc_1fr *up_, P159 *res_755);
static void f_instantiation_759(struct f_greenc_1fr *up_, P159 x_757, P159 *res_758);
static void f_generic_decl_761(struct f_greenc_1fr *up_, P159 e_760);
static int f_is_generic_name_763(struct f_greenc_1fr *up_, rstr n_762);
static void f_attach_generic_body_765(struct f_greenc_1fr *up_, P159 e_764);
static P159 f_gactual_769(struct f_greenc_1fr *up_, P159 args_766, rt_int nth_767, rstr name_768);
static void f_copy_node_773(struct f_greenc_1fr *up_, P159 n_770, P133 name_771, P159 *r_772);
static void f_instantiate_775(struct f_greenc_1fr *up_, P159 e_774);
static void f_predef_type_780(struct f_greenc_1fr *up_, rstr name_776, P115 t_777, rstr lo_778, rstr hi_779);
static void f_predef_const_784(struct f_greenc_1fr *up_, rstr name_781, P115 t_782, rstr code_text_783);
static void f_predef_exc_786(struct f_greenc_1fr *up_, rstr name_785);
static void f_predef_lit_790(struct f_greenc_1fr *up_, rstr name_787, P115 t_788, rt_int v_789);
static void f_predefine_791(struct f_greenc_1fr *up_);
static void f_translate_793(struct f_greenc_1fr *up_, P159 u_792);
static void f_print_program_794(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_101;
static P133 f_mk_178(struct f_greenc_1fr *up_, rstr s_177) {
  struct f_mk_178fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_177 = rt_str_copy(s_177);
F->result_ = ({ rstr *cell795 = rt_alloc(sizeof(rstr)); *cell795 = rt_str_copy(F->s_177); (P133)cell795; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_181(struct f_greenc_1fr *up_, rstr base_179, P133 *res_180) {
  struct f_new_name_181fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_179 = rt_str_copy(base_179);
F->res_180 = res_180;
F->up->serial_118 = rt_add(F->up->serial_118, ((rt_int)1LL));
(*F->res_180) = ({ rstr *cell796 = rt_alloc(sizeof(rstr)); *cell796 = rt_str_copy(rt_str_cat(F->base_179, rt_str_of_int(F->up->serial_118))); (P133)cell796; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_183(struct f_greenc_1fr *up_, int c_182) {
  struct f_is_letter_183fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_182 = c_182;
F->result_ = (((F->c_182 >= 65) && (F->c_182 <= 90)) || ((F->c_182 >= 97) && (F->c_182 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_185(struct f_greenc_1fr *up_, int c_184) {
  struct f_is_digit_185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_184 = c_184;
F->result_ = ((F->c_184 >= 48) && (F->c_184 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_187(struct f_greenc_1fr *up_, int c_186) {
  struct f_upper_187fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_186 = c_186;
if (((F->c_186 >= 97) && (F->c_186 <= 122))) {
F->result_ = rt_range(rt_sub(((rt_int)(F->c_186) + 1), ((rt_int)32LL)) - 1, 0, 127);
goto ret_;
}
F->result_ = F->c_186;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_lower_s_189(struct f_greenc_1fr *up_, rstr s_188) {
  struct f_lower_s_189fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_188 = rt_str_copy(s_188);
F->r_797 = rt_str_copy(F->s_188);
{ rt_int lo800 = ((rt_int)1LL), hi801 = (F->s_188).len;
for (rt_int it802 = lo800; it802 <= hi801; it802++) {
F->i_799 = it802;
if (((rt_str_get(F->r_797, F->i_799) >= 65) && (rt_str_get(F->r_797, F->i_799) <= 90))) {
(*rt_str_at(&F->r_797, F->i_799)) = rt_range(rt_add(((rt_int)(rt_str_get(F->r_797, F->i_799)) + 1), ((rt_int)32LL)) - 1, 0, 127);
}
}
}
L_end_798: ;
F->result_ = F->r_797;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_field_191(struct f_greenc_1fr *up_, rstr s_190) {
  struct f_c_field_191fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_190 = rt_str_copy(s_190);
F->result_ = rt_str_catc(f_lower_s_189(F->up, F->s_190), 95);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_q_192(struct f_greenc_1fr *up_) {
  struct f_q_192fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_str("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_195(struct f_greenc_1fr *up_, rt_int line_193, rstr msg_194) {
  struct f_fail_195fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_193 = line_193;
F->msg_194 = rt_str_copy(msg_194);
if ((F->up->trial_144 == ((rt_int)0LL))) {
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("greenc: line ", 13), rt_str_of_int(F->line_193)), rt_str(": ", 2)), F->msg_194));
rt_g_put(rt_str("\n", 1));
}
rt_raise(ex_compile_error_101);
ret_:

  return;
}

static P119 f_new_buffer_196(struct f_greenc_1fr *up_) {
  struct f_new_buffer_196fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R120 *cell803 = rt_alloc(sizeof(R120)); *cell803 = cp_R120(({ R120 ag804; ag804.head_ = NULL; ag804.tail_ = NULL; ag804; })); (P119)cell803; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_199(struct f_greenc_1fr *up_, P119 b_197, rstr s_198) {
  struct f_put_to_199fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_197 = b_197;
F->s_198 = rt_str_copy(s_198);
F->l_805 = NULL;
F->l_805 = ({ R141 *cell806 = rt_alloc(sizeof(R141)); *cell806 = cp_R141(({ R141 ag807; ag807.s_ = NULL; ag807.next_ = NULL; ag807; })); (P140)cell806; });
(*(P140)rt_nil_check(F->l_805)).s_ = f_mk_178(F->up, F->s_198);
if (((*(P119)rt_nil_check(F->b_197)).tail_ == NULL)) {
(*(P119)rt_nil_check(F->b_197)).head_ = F->l_805;
} else {
(*(P140)rt_nil_check((*(P119)rt_nil_check(F->b_197)).tail_)).next_ = F->l_805;
}
(*(P119)rt_nil_check(F->b_197)).tail_ = F->l_805;
ret_:

  return;
}

static void f_emit_201(struct f_greenc_1fr *up_, rstr s_200) {
  struct f_emit_201fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_200 = rt_str_copy(s_200);
f_put_to_199(F->up, F->up->code_129, F->s_200);
ret_:

  return;
}

static void f_print_buffer_203(struct f_greenc_1fr *up_, P119 b_202) {
  struct f_print_buffer_203fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_202 = b_202;
F->l_808 = NULL;
F->l_808 = (*(P119)rt_nil_check(F->b_202)).head_;
while ((F->l_808 != NULL)) {
rt_g_put((*(P133)rt_nil_check((*(P140)rt_nil_check(F->l_808)).s_)));
rt_g_put(rt_str("\n", 1));
F->l_808 = (*(P140)rt_nil_check(F->l_808)).next_;
}
L_end_809: ;
ret_:

  return;
}

static void f_splice_206(struct f_greenc_1fr *up_, P119 a_204, P119 b_205) {
  struct f_splice_206fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_204 = a_204;
F->b_205 = b_205;
if (((*(P119)rt_nil_check(F->b_205)).head_ == NULL)) {
goto ret_;
}
if (((*(P119)rt_nil_check(F->a_204)).tail_ == NULL)) {
(*(P119)rt_nil_check(F->a_204)).head_ = (*(P119)rt_nil_check(F->b_205)).head_;
} else {
(*(P140)rt_nil_check((*(P119)rt_nil_check(F->a_204)).tail_)).next_ = (*(P119)rt_nil_check(F->b_205)).head_;
}
(*(P119)rt_nil_check(F->a_204)).tail_ = (*(P119)rt_nil_check(F->b_205)).tail_;
(*(P119)rt_nil_check(F->b_205)).head_ = NULL;
(*(P119)rt_nil_check(F->b_205)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_208(struct f_greenc_1fr *up_, rstr w_207) {
  struct f_is_reserved_208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_207 = rt_str_copy(w_207);
{ rt_int sel810 = (F->w_207).len;
if (0 || sel810 == ((rt_int)2LL)) {
F->result_ = ((((((rt_str_eq(F->w_207, rt_str("AT", 2)) || rt_str_eq(F->w_207, rt_str("DO", 2))) || rt_str_eq(F->w_207, rt_str("IF", 2))) || rt_str_eq(F->w_207, rt_str("IN", 2))) || rt_str_eq(F->w_207, rt_str("IS", 2))) || rt_str_eq(F->w_207, rt_str("OF", 2))) || rt_str_eq(F->w_207, rt_str("OR", 2)));
goto ret_;
} else if (0 || sel810 == ((rt_int)3LL)) {
F->result_ = (((((((((rt_str_eq(F->w_207, rt_str("ALL", 3)) || rt_str_eq(F->w_207, rt_str("AND", 3))) || rt_str_eq(F->w_207, rt_str("END", 3))) || rt_str_eq(F->w_207, rt_str("FOR", 3))) || rt_str_eq(F->w_207, rt_str("MOD", 3))) || rt_str_eq(F->w_207, rt_str("NEW", 3))) || rt_str_eq(F->w_207, rt_str("NOT", 3))) || rt_str_eq(F->w_207, rt_str("OUT", 3))) || rt_str_eq(F->w_207, rt_str("USE", 3))) || rt_str_eq(F->w_207, rt_str("XOR", 3)));
goto ret_;
} else if (0 || sel810 == ((rt_int)4LL)) {
F->result_ = ((((((((((rt_str_eq(F->w_207, rt_str("BODY", 4)) || rt_str_eq(F->w_207, rt_str("CASE", 4))) || rt_str_eq(F->w_207, rt_str("ELSE", 4))) || rt_str_eq(F->w_207, rt_str("EXIT", 4))) || rt_str_eq(F->w_207, rt_str("GOTO", 4))) || rt_str_eq(F->w_207, rt_str("LOOP", 4))) || rt_str_eq(F->w_207, rt_str("NULL", 4))) || rt_str_eq(F->w_207, rt_str("TASK", 4))) || rt_str_eq(F->w_207, rt_str("THEN", 4))) || rt_str_eq(F->w_207, rt_str("TYPE", 4))) || rt_str_eq(F->w_207, rt_str("WHEN", 4)));
goto ret_;
} else if (0 || sel810 == ((rt_int)5LL)) {
F->result_ = (((((((((rt_str_eq(F->w_207, rt_str("ABORT", 5)) || rt_str_eq(F->w_207, rt_str("ARRAY", 5))) || rt_str_eq(F->w_207, rt_str("BEGIN", 5))) || rt_str_eq(F->w_207, rt_str("DELAY", 5))) || rt_str_eq(F->w_207, rt_str("DELTA", 5))) || rt_str_eq(F->w_207, rt_str("ELSIF", 5))) || rt_str_eq(F->w_207, rt_str("ENTRY", 5))) || rt_str_eq(F->w_207, rt_str("RAISE", 5))) || rt_str_eq(F->w_207, rt_str("RANGE", 5))) || rt_str_eq(F->w_207, rt_str("WHILE", 5)));
goto ret_;
} else if (0 || sel810 == ((rt_int)6LL)) {
F->result_ = ((((((((rt_str_eq(F->w_207, rt_str("ACCEPT", 6)) || rt_str_eq(F->w_207, rt_str("ACCESS", 6))) || rt_str_eq(F->w_207, rt_str("ASSERT", 6))) || rt_str_eq(F->w_207, rt_str("DIGITS", 6))) || rt_str_eq(F->w_207, rt_str("OTHERS", 6))) || rt_str_eq(F->w_207, rt_str("PRAGMA", 6))) || rt_str_eq(F->w_207, rt_str("RECORD", 6))) || rt_str_eq(F->w_207, rt_str("RETURN", 6))) || rt_str_eq(F->w_207, rt_str("SELECT", 6)));
goto ret_;
} else if (0 || sel810 == ((rt_int)7LL)) {
F->result_ = (((((((rt_str_eq(F->w_207, rt_str("DECLARE", 7)) || rt_str_eq(F->w_207, rt_str("GENERIC", 7))) || rt_str_eq(F->w_207, rt_str("PACKAGE", 7))) || rt_str_eq(F->w_207, rt_str("PACKING", 7))) || rt_str_eq(F->w_207, rt_str("PRIVATE", 7))) || rt_str_eq(F->w_207, rt_str("RENAMES", 7))) || rt_str_eq(F->w_207, rt_str("REVERSE", 7))) || rt_str_eq(F->w_207, rt_str("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel810 == ((rt_int)8LL)) {
F->result_ = (((rt_str_eq(F->w_207, rt_str("CONSTANT", 8)) || rt_str_eq(F->w_207, rt_str("FUNCTION", 8))) || rt_str_eq(F->w_207, rt_str("INITIATE", 8))) || rt_str_eq(F->w_207, rt_str("SEPARATE", 8)));
goto ret_;
} else if (0 || sel810 == ((rt_int)9LL)) {
F->result_ = (rt_str_eq(F->w_207, rt_str("EXCEPTION", 9)) || rt_str_eq(F->w_207, rt_str("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel810 == ((rt_int)10LL)) {
F->result_ = rt_str_eq(F->w_207, rt_str("RESTRICTED", 10));
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

static void f_add_token_212(struct f_greenc_1fr *up_, rt_int kind_209, rstr s_210, rt_int ival_211) {
  struct f_add_token_212fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_209 = kind_209;
F->s_210 = rt_str_copy(s_210);
F->ival_211 = ival_211;
F->up->ntoks_106 = rt_add(F->up->ntoks_106, ((rt_int)1LL));
F->up->toks_105.p[rt_index(F->up->ntoks_106, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo] = ({ R104 *cell811 = rt_alloc(sizeof(R104)); *cell811 = cp_R104(({ R104 ag812; ag812.kind_ = F->kind_209; ag812.line_ = F->up->src_line_108; ag812.ival_ = F->ival_211; ag812.s_ = NULL; ag812; })); (P103)cell811; });
(*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->ntoks_106, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_ = f_mk_178(F->up, F->s_210);
ret_:

  return;
}

static rt_int f_digit_value_214(struct f_greenc_1fr *up_, int c_213) {
  struct f_digit_value_214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_213 = c_213;
if (f_is_digit_185(F->up, F->c_213)) {
F->result_ = rt_sub(((rt_int)(F->c_213) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_187(F->up, F->c_213)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lex_line_216(struct f_greenc_1fr *up_, rstr line_215) {
  struct f_lex_line_216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_215 = rt_str_copy(line_215);
F->i_813 = ((rt_int)1LL);
F->j_814 = ((rt_int)0LL);
F->n_815 = (F->line_215).len;
F->buf_818 = rt_str_new((((rt_int)1000LL) - ((rt_int)1LL) + 1));
while ((F->i_813 <= F->n_815)) {
F->c_816 = rt_range(rt_str_get(F->line_215, F->i_813), 0, 127);
if (((((F->c_816 == 32) || (F->c_816 == 9)) || (F->c_816 == 13)) || (F->c_816 == 12))) {
F->i_813 = rt_add(F->i_813, ((rt_int)1LL));
} else if ((((F->c_816 == 45) && (F->i_813 < F->n_815)) && (rt_str_get(F->line_215, rt_add(F->i_813, ((rt_int)1LL))) == 45))) {
F->i_813 = rt_add(F->n_815, ((rt_int)1LL));
} else if (f_is_letter_183(F->up, F->c_816)) {
F->j_814 = F->i_813;
F->bl_819 = ((rt_int)0LL);
while (((F->j_814 <= F->n_815) && ((f_is_letter_183(F->up, rt_str_get(F->line_215, F->j_814)) || f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_814))) || (rt_str_get(F->line_215, F->j_814) == 95)))) {
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = f_upper_187(F->up, rt_str_get(F->line_215, F->j_814));
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
L_end_821: ;
if (f_is_reserved_208(F->up, rt_str_slice(F->buf_818, ((rt_int)1LL), F->bl_819))) {
f_add_token_212(F->up, F->up->k_kw_4, rt_str_slice(F->buf_818, ((rt_int)1LL), F->bl_819), ((rt_int)0LL));
} else {
f_add_token_212(F->up, F->up->k_id_3, rt_str_slice(F->buf_818, ((rt_int)1LL), F->bl_819), ((rt_int)0LL));
}
F->i_813 = F->j_814;
} else if (f_is_digit_185(F->up, F->c_816)) {
F->j_814 = F->i_813;
F->v_817 = ((rt_int)0LL);
F->bl_819 = ((rt_int)0LL);
while (((F->j_814 <= F->n_815) && (f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_814)) || (rt_str_get(F->line_215, F->j_814) == 95)))) {
if ((rt_str_get(F->line_215, F->j_814) != 95)) {
F->v_817 = rt_add(rt_mul(F->v_817, ((rt_int)10LL)), f_digit_value_214(F->up, rt_str_get(F->line_215, F->j_814)));
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = rt_str_get(F->line_215, F->j_814);
}
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
L_end_822: ;
if (((F->j_814 <= F->n_815) && (rt_str_get(F->line_215, F->j_814) == 35))) {
{
F->base_824 = F->v_817;
F->v_817 = ((rt_int)0LL);
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
while (((F->j_814 <= F->n_815) && ((f_is_letter_183(F->up, rt_str_get(F->line_215, F->j_814)) || f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_814))) || (rt_str_get(F->line_215, F->j_814) == 95)))) {
if ((rt_str_get(F->line_215, F->j_814) != 95)) {
if ((f_digit_value_214(F->up, rt_str_get(F->line_215, F->j_814)) >= F->base_824)) {
f_fail_195(F->up, F->up->src_line_108, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str("digit ", 6), rt_str_get(F->line_215, F->j_814)), rt_str(" is not valid in base ", 22)), rt_str_of_int(F->base_824)), rt_str(" (RM79 2.4)", 11)));
}
F->v_817 = rt_add(rt_mul(F->v_817, F->base_824), f_digit_value_214(F->up, rt_str_get(F->line_215, F->j_814)));
}
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
L_end_825: ;

}
L_end_823: ;
f_add_token_212(F->up, F->up->k_int_6, rt_str_of_int(F->v_817), F->v_817);
} else if (((F->j_814 < F->n_815) && ((rt_str_get(F->line_215, F->j_814) == 46) && f_is_digit_185(F->up, rt_str_get(F->line_215, rt_add(F->j_814, ((rt_int)1LL))))))) {
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = 46;
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
while (((F->j_814 <= F->n_815) && (f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_814)) || (rt_str_get(F->line_215, F->j_814) == 95)))) {
if ((rt_str_get(F->line_215, F->j_814) != 95)) {
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = rt_str_get(F->line_215, F->j_814);
}
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
L_end_826: ;
if (((F->j_814 <= F->n_815) && ((rt_str_get(F->line_215, F->j_814) == 69) || (rt_str_get(F->line_215, F->j_814) == 101)))) {
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = 69;
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
while (((F->j_814 <= F->n_815) && ((f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_814)) || (rt_str_get(F->line_215, F->j_814) == 43)) || (rt_str_get(F->line_215, F->j_814) == 45)))) {
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = rt_str_get(F->line_215, F->j_814);
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
L_end_827: ;
}
f_add_token_212(F->up, F->up->k_float_7, rt_str_slice(F->buf_818, ((rt_int)1LL), F->bl_819), ((rt_int)0LL));
} else if (((F->j_814 < F->n_815) && (((rt_str_get(F->line_215, F->j_814) == 69) || (rt_str_get(F->line_215, F->j_814) == 101)) && f_is_digit_185(F->up, rt_str_get(F->line_215, rt_add(F->j_814, ((rt_int)1LL))))))) {
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = 69;
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
while (((F->j_814 <= F->n_815) && f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_814)))) {
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = rt_str_get(F->line_215, F->j_814);
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
L_end_828: ;
f_add_token_212(F->up, F->up->k_float_7, rt_str_slice(F->buf_818, ((rt_int)1LL), F->bl_819), ((rt_int)0LL));
} else {
f_add_token_212(F->up, F->up->k_int_6, rt_str_slice(F->buf_818, ((rt_int)1LL), F->bl_819), F->v_817);
}
F->i_813 = F->j_814;
} else if ((F->c_816 == 34)) {
F->j_814 = rt_add(F->i_813, ((rt_int)1LL));
F->bl_819 = ((rt_int)0LL);
for (;;) {
if ((F->j_814 > F->n_815)) {
f_fail_195(F->up, F->up->src_line_108, rt_str("unterminated string", 19));
}
if ((rt_str_get(F->line_215, F->j_814) == 34)) {
if (((F->j_814 == F->n_815) || (rt_str_get(F->line_215, rt_add(F->j_814, ((rt_int)1LL))) != 34))) {
goto L_end_829;
}
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
F->bl_819 = rt_add(F->bl_819, ((rt_int)1LL));
(*rt_str_at(&F->buf_818, F->bl_819)) = rt_str_get(F->line_215, F->j_814);
F->j_814 = rt_add(F->j_814, ((rt_int)1LL));
}
L_end_829: ;
f_add_token_212(F->up, F->up->k_str_8, rt_str_slice(F->buf_818, ((rt_int)1LL), F->bl_819), ((rt_int)0LL));
F->i_813 = rt_add(F->j_814, ((rt_int)1LL));
} else {
{
F->two_831 = rt_str_new((((rt_int)3LL) - ((rt_int)1LL) + 1));
rt_str_assign(&F->two_831, rt_str("   ", 3));
(*rt_str_at(&F->two_831, ((rt_int)1LL))) = F->c_816;
if ((F->i_813 < F->n_815)) {
(*rt_str_at(&F->two_831, ((rt_int)2LL))) = rt_str_get(F->line_215, rt_add(F->i_813, ((rt_int)1LL)));
}
if ((rt_add(F->i_813, ((rt_int)1LL)) < F->n_815)) {
(*rt_str_at(&F->two_831, ((rt_int)3LL))) = rt_str_get(F->line_215, rt_add(F->i_813, ((rt_int)2LL)));
}
if (rt_str_eq(F->two_831, rt_str(":=:", 3))) {
f_add_token_212(F->up, F->up->k_op_5, rt_str(":=:", 3), ((rt_int)0LL));
F->i_813 = rt_add(F->i_813, ((rt_int)3LL));
} else if ((((((((((rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str(":=", 2)) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=:", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=>", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str("..", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str("**", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str("/=", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<=", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">=", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<<", 2))) || rt_str_eq(rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">>", 2)))) {
f_add_token_212(F->up, F->up->k_op_5, rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)2LL)), ((rt_int)0LL));
F->i_813 = rt_add(F->i_813, ((rt_int)2LL));
} else if (((((((((((((((((F->c_816 == 38) || (F->c_816 == 39)) || (F->c_816 == 40)) || (F->c_816 == 41)) || (F->c_816 == 42)) || (F->c_816 == 43)) || (F->c_816 == 44)) || (F->c_816 == 45)) || (F->c_816 == 46)) || (F->c_816 == 47)) || (F->c_816 == 58)) || (F->c_816 == 59)) || (F->c_816 == 60)) || (F->c_816 == 61)) || (F->c_816 == 62)) || (F->c_816 == 124))) {
f_add_token_212(F->up, F->up->k_op_5, rt_str_slice(F->two_831, ((rt_int)1LL), ((rt_int)1LL)), ((rt_int)0LL));
F->i_813 = rt_add(F->i_813, ((rt_int)1LL));
} else {
f_fail_195(F->up, F->up->src_line_108, rt_str("unexpected character", 20));
}

}
L_end_830: ;
}
}
L_end_820: ;
ret_:

  return;
}

static void f_read_source_217(struct f_greenc_1fr *up_) {
  struct f_read_source_217fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_832 = rt_str_new((((rt_int)10000LL) - ((rt_int)1LL) + 1));
F->bl_833 = ((rt_int)0LL);
{ rt_frame xf835;
if (RT_TRY(xf835)) {
for (;;) {
(F->c_834 = rt_g_getc());
if ((F->c_834 == 10)) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_216(F->up, rt_str_slice(F->buf_832, ((rt_int)1LL), F->bl_833));
F->bl_833 = ((rt_int)0LL);
} else {
F->bl_833 = rt_add(F->bl_833, ((rt_int)1LL));
(*rt_str_at(&F->buf_832, F->bl_833)) = F->c_834;
}
}
L_end_837: ;
RT_POP(xf835);
} else {
RT_POP(xf835);
int x836 = rt_xcur;
if (rt_g_aborted()) rt_raise(x836);
if (0 || x836 == rt_exc("END_OF_FILE")) {
if ((F->bl_833 > ((rt_int)0LL))) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_216(F->up, rt_str_slice(F->buf_832, ((rt_int)1LL), F->bl_833));
}
f_add_token_212(F->up, F->up->k_eof_2, rt_str("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x836);
}
}
}
ret_:

  return;
}

static P159 f_nn_220(struct f_greenc_1fr *up_, rt_int kind_218, rt_int line_219) {
  struct f_nn_220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_218 = kind_218;
F->line_219 = line_219;
F->result_ = ({ R160 *cell838 = rt_alloc(sizeof(R160)); *cell838 = cp_R160(({ R160 ag839; ag839.kind_ = F->kind_218; ag839.line_ = F->line_219; ag839.ival_ = ((rt_int)0LL); ag839.flag_ = ((rt_int)0LL); ag839.name_ = NULL; ag839.tag_ = NULL; ag839.a_ = NULL; ag839.b_ = NULL; ag839.c_ = NULL; ag839.d_ = NULL; ag839.e_ = NULL; ag839.next_ = NULL; ag839; })); (P159)cell838; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_224(struct f_greenc_1fr *up_, P159 *head_221, P159 *tail_222, P159 x_223) {
  struct f_append_224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_221 = head_221;
F->tail_222 = tail_222;
F->x_223 = x_223;
if ((F->x_223 == NULL)) {
goto ret_;
}
if (((*F->head_221) == NULL)) {
(*F->head_221) = F->x_223;
} else {
(*(P159)rt_nil_check((*F->tail_222))).next_ = F->x_223;
}
(*F->tail_222) = F->x_223;
while (((*(P159)rt_nil_check((*F->tail_222))).next_ != NULL)) {
(*F->tail_222) = (*(P159)rt_nil_check((*F->tail_222))).next_;
}
L_end_840: ;
ret_:

  return;
}

static rt_int f_list_len_226(struct f_greenc_1fr *up_, P159 l_225) {
  struct f_list_len_226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_225 = l_225;
F->n_841 = ((rt_int)0LL);
F->p_842 = NULL;
F->p_842 = F->l_225;
while ((F->p_842 != NULL)) {
F->n_841 = rt_add(F->n_841, ((rt_int)1LL));
F->p_842 = (*(P159)rt_nil_check(F->p_842)).next_;
}
L_end_843: ;
F->result_ = F->n_841;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_227(struct f_greenc_1fr *up_) {
  struct f_cur_line_227fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_229(struct f_greenc_1fr *up_, rstr w_228) {
  struct f_at_kw_229fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_228 = rt_str_copy(w_228);
F->result_ = (((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == F->up->k_kw_4) && rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), F->w_228));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_231(struct f_greenc_1fr *up_, rstr w_230) {
  struct f_at_op_231fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_230 = rt_str_copy(w_230);
F->result_ = (((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == F->up->k_op_5) && rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), F->w_230));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_233(struct f_greenc_1fr *up_, rt_int k_232) {
  struct f_at_kind_233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_232 = k_232;
F->result_ = ((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_ == F->k_232);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_235(struct f_greenc_1fr *up_, rt_int k_234) {
  struct f_kind_at_235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_234 = k_234;
if ((rt_add(F->up->tpos_107, F->k_234) > F->up->ntoks_106)) {
F->result_ = F->up->k_eof_2;
goto ret_;
}
F->result_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_add(F->up->tpos_107, F->k_234), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_text_at_237(struct f_greenc_1fr *up_, rt_int k_236) {
  struct f_text_at_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_236 = k_236;
if ((rt_add(F->up->tpos_107, F->k_236) > F->up->ntoks_106)) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_add(F->up->tpos_107, F->k_236), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_239(struct f_greenc_1fr *up_, rstr msg_238) {
  struct f_perror_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_238 = rt_str_copy(msg_238);
f_fail_195(F->up, (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).line_, rt_str_catc(rt_str_cat(rt_str_cat(F->msg_238, rt_str(" (at ", 5)), (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))), 41));
ret_:

  return;
}

static void f_skip_240(struct f_greenc_1fr *up_) {
  struct f_skip_240fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_242(struct f_greenc_1fr *up_, rstr w_241) {
  struct f_expect_kw_242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_241 = rt_str_copy(w_241);
if ((!f_at_kw_229(F->up, F->w_241))) {
f_perror_239(F->up, rt_str_cat(rt_str("expected ", 9), F->w_241));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_244(struct f_greenc_1fr *up_, rstr w_243) {
  struct f_expect_op_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_243 = rt_str_copy(w_243);
if ((!f_at_op_231(F->up, F->w_243))) {
f_perror_239(F->up, rt_str_cat(rt_str("expected ", 9), F->w_243));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_246(struct f_greenc_1fr *up_, P133 *res_245) {
  struct f_expect_id_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_245 = res_245;
if ((!f_at_kind_233(F->up, F->up->k_id_3))) {
f_perror_239(F->up, rt_str("expected an identifier", 22));
}
F->up->tpos_107 = rt_add(F->up->tpos_107, ((rt_int)1LL));
(*F->res_245) = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_sub(F->up->tpos_107, ((rt_int)1LL)), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_248(struct f_greenc_1fr *up_, P159 *res_247) {
  struct f_name_node_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_247 = res_247;
F->x_844 = NULL;
F->x_844 = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_844)).name_);
(*F->res_247) = F->x_844;
goto ret_;
ret_:

  return;
}

static void f_id_list_250(struct f_greenc_1fr *up_, P159 *res_249) {
  struct f_id_list_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_249 = res_249;
F->head_845 = NULL;
F->tail_846 = NULL;
F->x_847 = NULL;
f_name_node_248(F->up, &F->x_847);
f_append_224(F->up, &F->head_845, &F->tail_846, F->x_847);
while (f_at_op_231(F->up, rt_str(",", 1))) {
f_skip_240(F->up);
f_name_node_248(F->up, &F->x_847);
f_append_224(F->up, &F->head_845, &F->tail_846, F->x_847);
}
L_end_848: ;
(*F->res_249) = F->head_845;
goto ret_;
ret_:

  return;
}

static P159 f_binop_255(struct f_greenc_1fr *up_, P133 op_251, P159 l_252, P159 r_253, rt_int line_254) {
  struct f_binop_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_251 = op_251;
F->l_252 = l_252;
F->r_253 = r_253;
F->line_254 = line_254;
F->x_849 = NULL;
F->x_849 = f_nn_220(F->up, F->up->n_binop_15, F->line_254);
(*(P159)rt_nil_check(F->x_849)).name_ = F->op_251;
(*(P159)rt_nil_check(F->x_849)).a_ = F->l_252;
(*(P159)rt_nil_check(F->x_849)).b_ = F->r_253;
F->result_ = F->x_849;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_257(struct f_greenc_1fr *up_, P159 *res_256) {
  struct f_expr_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_256 = res_256;
F->l_850 = NULL;
F->r_851 = NULL;
F->op_852 = NULL;
f_relation_261(F->up, &F->l_850);
while (((f_at_kw_229(F->up, rt_str("AND", 3)) || f_at_kw_229(F->up, rt_str("OR", 2))) || f_at_kw_229(F->up, rt_str("XOR", 3)))) {
F->op_852 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
F->line_853 = f_cur_line_227(F->up);
f_skip_240(F->up);
if ((rt_str_eq((*(P133)rt_nil_check(F->op_852)), rt_str("AND", 3)) && f_at_kw_229(F->up, rt_str("THEN", 4)))) {
f_skip_240(F->up);
} else if ((rt_str_eq((*(P133)rt_nil_check(F->op_852)), rt_str("OR", 2)) && f_at_kw_229(F->up, rt_str("ELSE", 4)))) {
f_skip_240(F->up);
}
f_relation_261(F->up, &F->r_851);
F->l_850 = f_binop_255(F->up, F->op_852, F->l_850, F->r_851, F->line_853);
}
L_end_854: ;
(*F->res_256) = F->l_850;
goto ret_;
ret_:

  return;
}

static int f_is_rel_259(struct f_greenc_1fr *up_, rstr s_258) {
  struct f_is_rel_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_258 = rt_str_copy(s_258);
F->result_ = (((((rt_str_eq(F->s_258, rt_str("=", 1)) || rt_str_eq(F->s_258, rt_str("/=", 2))) || rt_str_eq(F->s_258, rt_str("<", 1))) || rt_str_eq(F->s_258, rt_str("<=", 2))) || rt_str_eq(F->s_258, rt_str(">", 1))) || rt_str_eq(F->s_258, rt_str(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_261(struct f_greenc_1fr *up_, P159 *res_260) {
  struct f_relation_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_260 = res_260;
F->l_855 = NULL;
F->r_856 = NULL;
F->lo_857 = NULL;
F->hi_858 = NULL;
F->t_859 = NULL;
F->op_860 = NULL;
F->line_861 = f_cur_line_227(F->up);
F->neg_862 = 0;
f_simple_expr_263(F->up, &F->l_855);
if ((f_at_kind_233(F->up, F->up->k_op_5) && f_is_rel_259(F->up, (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))))) {
F->op_860 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_856);
F->l_855 = f_binop_255(F->up, F->op_860, F->l_855, F->r_856, F->line_861);
(*F->res_260) = F->l_855;
goto ret_;
}
if (((f_at_kw_229(F->up, rt_str("NOT", 3)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("IN", 2)))) {
f_skip_240(F->up);
F->neg_862 = 1;
}
if (f_at_kw_229(F->up, rt_str("IN", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->lo_857);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &F->hi_858);
F->t_859 = f_nn_220(F->up, F->up->n_range_22, F->line_861);
(*(P159)rt_nil_check(F->t_859)).a_ = F->lo_857;
(*(P159)rt_nil_check(F->t_859)).b_ = F->hi_858;
F->op_860 = f_mk_178(F->up, rt_str("IN", 2));
F->l_855 = f_binop_255(F->up, F->op_860, F->l_855, F->t_859, F->line_861);
if (F->neg_862) {
F->t_859 = f_nn_220(F->up, F->up->n_unop_14, F->line_861);
(*(P159)rt_nil_check(F->t_859)).name_ = f_mk_178(F->up, rt_str("NOT", 3));
(*(P159)rt_nil_check(F->t_859)).a_ = F->l_855;
(*F->res_260) = F->t_859;
goto ret_;
}
}
(*F->res_260) = F->l_855;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_263(struct f_greenc_1fr *up_, P159 *res_262) {
  struct f_simple_expr_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_262 = res_262;
F->l_863 = NULL;
F->r_864 = NULL;
F->op_865 = NULL;
F->line_866 = f_cur_line_227(F->up);
if (((f_at_op_231(F->up, rt_str("+", 1)) || f_at_op_231(F->up, rt_str("-", 1))) || f_at_kw_229(F->up, rt_str("NOT", 3)))) {
F->op_865 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_term_265(F->up, &F->r_864);
F->l_863 = f_nn_220(F->up, F->up->n_unop_14, F->line_866);
(*(P159)rt_nil_check(F->l_863)).name_ = F->op_865;
(*(P159)rt_nil_check(F->l_863)).a_ = F->r_864;
} else {
f_term_265(F->up, &F->l_863);
}
while (((f_at_op_231(F->up, rt_str("+", 1)) || f_at_op_231(F->up, rt_str("-", 1))) || f_at_op_231(F->up, rt_str("&", 1)))) {
F->op_865 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_term_265(F->up, &F->r_864);
F->l_863 = f_binop_255(F->up, F->op_865, F->l_863, F->r_864, F->line_866);
}
L_end_867: ;
(*F->res_262) = F->l_863;
goto ret_;
ret_:

  return;
}

static void f_term_265(struct f_greenc_1fr *up_, P159 *res_264) {
  struct f_term_265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_264 = res_264;
F->l_868 = NULL;
F->r_869 = NULL;
F->op_870 = NULL;
F->line_871 = f_cur_line_227(F->up);
f_factor_267(F->up, &F->l_868);
while (((f_at_op_231(F->up, rt_str("*", 1)) || f_at_op_231(F->up, rt_str("/", 1))) || f_at_kw_229(F->up, rt_str("MOD", 3)))) {
F->op_870 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_factor_267(F->up, &F->r_869);
F->l_868 = f_binop_255(F->up, F->op_870, F->l_868, F->r_869, F->line_871);
}
L_end_872: ;
(*F->res_264) = F->l_868;
goto ret_;
ret_:

  return;
}

static void f_factor_267(struct f_greenc_1fr *up_, P159 *res_266) {
  struct f_factor_267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_266 = res_266;
F->l_873 = NULL;
F->r_874 = NULL;
F->op_875 = NULL;
F->line_876 = f_cur_line_227(F->up);
f_primary_269(F->up, &F->l_873);
if (f_at_op_231(F->up, rt_str("**", 2))) {
F->op_875 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_primary_269(F->up, &F->r_874);
F->l_873 = f_binop_255(F->up, F->op_875, F->l_873, F->r_874, F->line_876);
}
(*F->res_266) = F->l_873;
goto ret_;
ret_:

  return;
}

static void f_primary_269(struct f_greenc_1fr *up_, P159 *res_268) {
  struct f_primary_269fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_268 = res_268;
F->x_877 = NULL;
F->line_878 = f_cur_line_227(F->up);
if (f_at_kind_233(F->up, F->up->k_int_6)) {
F->x_877 = f_nn_220(F->up, F->up->n_int_9, F->line_878);
(*(P159)rt_nil_check(F->x_877)).ival_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).ival_;
(*(P159)rt_nil_check(F->x_877)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
(*F->res_268) = F->x_877;
goto ret_;
}
if (f_at_kind_233(F->up, F->up->k_float_7)) {
F->x_877 = f_nn_220(F->up, F->up->n_float_10, F->line_878);
(*(P159)rt_nil_check(F->x_877)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
(*F->res_268) = F->x_877;
goto ret_;
}
if (f_at_kind_233(F->up, F->up->k_str_8)) {
F->x_877 = f_nn_220(F->up, F->up->n_str_11, F->line_878);
(*(P159)rt_nil_check(F->x_877)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
(*F->res_268) = F->x_877;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("NULL", 4))) {
f_skip_240(F->up);
F->x_877 = f_nn_220(F->up, F->up->n_nil_12, F->line_878);
(*F->res_268) = F->x_877;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("NEW", 3))) {
f_skip_240(F->up);
F->x_877 = f_nn_220(F->up, F->up->n_new_19, F->line_878);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_877)).name_);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_agg_or_paren_271(F->up, &(*(P159)rt_nil_check(F->x_877)).a_);
}
(*F->res_268) = F->x_877;
goto ret_;
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_agg_or_paren_271(F->up, &F->x_877);
(*F->res_268) = F->x_877;
goto ret_;
}
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_name_p_273(F->up, &F->x_877);
(*F->res_268) = F->x_877;
goto ret_;
}
f_perror_239(F->up, rt_str("expected an expression", 22));
(*F->res_268) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_271(struct f_greenc_1fr *up_, P159 *res_270) {
  struct f_agg_or_paren_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_270 = res_270;
F->line_879 = f_cur_line_227(F->up);
F->items_880 = NULL;
F->itail_881 = NULL;
F->it_882 = NULL;
F->first_883 = NULL;
F->keys_884 = NULL;
F->ktail_885 = NULL;
F->lab_886 = NULL;
F->x_887 = NULL;
F->more_888 = 1;
f_expect_op_244(F->up, rt_str("(", 1));
while (F->more_888) {
F->it_882 = f_nn_220(F->up, F->up->n_citem_21, F->line_879);
if (f_at_kw_229(F->up, rt_str("OTHERS", 6))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str("=>", 2));
F->lab_886 = f_nn_220(F->up, F->up->n_label_59, F->line_879);
(*(P159)rt_nil_check(F->lab_886)).flag_ = ((rt_int)1LL);
(*(P159)rt_nil_check(F->it_882)).a_ = F->lab_886;
f_expr_257(F->up, &(*(P159)rt_nil_check(F->it_882)).b_);
} else {
f_expr_257(F->up, &F->first_883);
if (((f_at_op_231(F->up, rt_str("..", 2)) || f_at_op_231(F->up, rt_str("|", 1))) || f_at_op_231(F->up, rt_str("=>", 2)))) {
F->keys_884 = NULL;
F->ktail_885 = NULL;
for (;;) {
F->lab_886 = f_nn_220(F->up, F->up->n_label_59, F->line_879);
(*(P159)rt_nil_check(F->lab_886)).a_ = F->first_883;
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->lab_886)).b_);
}
f_append_224(F->up, &F->keys_884, &F->ktail_885, F->lab_886);
if ((!f_at_op_231(F->up, rt_str("|", 1)))) {
goto L_end_890;
}
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->first_883);
}
L_end_890: ;
f_expect_op_244(F->up, rt_str("=>", 2));
(*(P159)rt_nil_check(F->it_882)).a_ = F->keys_884;
f_expr_257(F->up, &(*(P159)rt_nil_check(F->it_882)).b_);
} else {
(*(P159)rt_nil_check(F->it_882)).b_ = F->first_883;
}
}
f_append_224(F->up, &F->items_880, &F->itail_881, F->it_882);
F->more_888 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_888) {
f_skip_240(F->up);
}
}
L_end_889: ;
f_expect_op_244(F->up, rt_str(")", 1));
if ((((*(P159)rt_nil_check(F->items_880)).next_ == NULL) && ((*(P159)rt_nil_check(F->items_880)).a_ == NULL))) {
F->x_887 = f_nn_220(F->up, F->up->n_paren_23, F->line_879);
(*(P159)rt_nil_check(F->x_887)).a_ = (*(P159)rt_nil_check(F->items_880)).b_;
(*F->res_270) = F->x_887;
goto ret_;
}
F->x_887 = f_nn_220(F->up, F->up->n_agg_20, F->line_879);
(*(P159)rt_nil_check(F->x_887)).a_ = F->items_880;
(*F->res_270) = F->x_887;
goto ret_;
ret_:

  return;
}

static void f_name_p_273(struct f_greenc_1fr *up_, P159 *res_272) {
  struct f_name_p_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_272 = res_272;
F->p_891 = NULL;
F->x_892 = NULL;
F->args_893 = NULL;
F->atail_894 = NULL;
F->lo_895 = NULL;
F->r_896 = NULL;
F->line_897 = f_cur_line_227(F->up);
f_name_node_248(F->up, &F->p_891);
for (;;) {
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
F->args_893 = NULL;
F->atail_894 = NULL;
if ((!f_at_op_231(F->up, rt_str(")", 1)))) {
F->more_898 = 1;
while (F->more_898) {
{
F->formal_902 = NULL;
F->mark_903 = ((rt_int)0LL);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (((rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=>", 2))))) {
F->formal_902 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
if (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=", 2))) {
F->mark_903 = ((rt_int)1LL);
} else if (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=:", 2))) {
F->mark_903 = ((rt_int)2LL);
} else if (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) {
F->mark_903 = ((rt_int)3LL);
} else {
F->mark_903 = ((rt_int)4LL);
}
f_skip_240(F->up);
f_skip_240(F->up);
}
f_expr_257(F->up, &F->lo_895);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
F->r_896 = f_nn_220(F->up, F->up->n_range_22, F->line_897);
(*(P159)rt_nil_check(F->r_896)).a_ = F->lo_895;
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_896)).b_);
F->lo_895 = F->r_896;
}
(*(P159)rt_nil_check(F->lo_895)).tag_ = F->formal_902;
(*(P159)rt_nil_check(F->lo_895)).flag_ = F->mark_903;
f_append_224(F->up, &F->args_893, &F->atail_894, F->lo_895);

}
L_end_901: ;
F->more_898 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_898) {
f_skip_240(F->up);
}
}
L_end_900: ;
}
f_expect_op_244(F->up, rt_str(")", 1));
F->x_892 = f_nn_220(F->up, F->up->n_apply_16, F->line_897);
(*(P159)rt_nil_check(F->x_892)).a_ = F->p_891;
(*(P159)rt_nil_check(F->x_892)).b_ = F->args_893;
F->p_891 = F->x_892;
} else if (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
F->x_892 = f_nn_220(F->up, F->up->n_select_17, F->line_897);
(*(P159)rt_nil_check(F->x_892)).a_ = F->p_891;
if (f_at_kw_229(F->up, rt_str("ALL", 3))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_892)).name_ = f_mk_178(F->up, rt_str("ALL", 3));
} else {
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_892)).name_);
}
F->p_891 = F->x_892;
} else if (f_at_op_231(F->up, rt_str("'", 1))) {
f_skip_240(F->up);
F->x_892 = f_nn_220(F->up, F->up->n_attr_18, F->line_897);
(*(P159)rt_nil_check(F->x_892)).a_ = F->p_891;
(*(P159)rt_nil_check(F->x_892)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_892)).b_);
f_expect_op_244(F->up, rt_str(")", 1));
}
F->p_891 = F->x_892;
} else {
(*F->res_272) = F->p_891;
goto ret_;
}
}
L_end_899: ;
ret_:

  return;
}

static void f_subtype_ind_275(struct f_greenc_1fr *up_, P159 *res_274) {
  struct f_subtype_ind_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_274 = res_274;
F->x_904 = NULL;
F->r_905 = NULL;
F->args_906 = NULL;
F->atail_907 = NULL;
F->lo_908 = NULL;
F->line_909 = f_cur_line_227(F->up);
F->more_910 = 1;
F->x_904 = f_nn_220(F->up, F->up->s_mark_71, F->line_909);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_904)).name_);
while (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_904)).tag_ = (*(P159)rt_nil_check(F->x_904)).name_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_904)).name_);
}
L_end_911: ;
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
F->r_905 = f_nn_220(F->up, F->up->n_range_22, F->line_909);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_905)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_905)).b_);
(*(P159)rt_nil_check(F->x_904)).a_ = F->r_905;
(*(P159)rt_nil_check(F->x_904)).flag_ = ((rt_int)1LL);
} else if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
while (F->more_910) {
f_expr_257(F->up, &F->lo_908);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
F->r_905 = f_nn_220(F->up, F->up->n_range_22, F->line_909);
(*(P159)rt_nil_check(F->r_905)).a_ = F->lo_908;
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_905)).b_);
F->lo_908 = F->r_905;
}
f_append_224(F->up, &F->args_906, &F->atail_907, F->lo_908);
F->more_910 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_910) {
f_skip_240(F->up);
}
}
L_end_912: ;
f_expect_op_244(F->up, rt_str(")", 1));
(*(P159)rt_nil_check(F->x_904)).a_ = F->args_906;
(*(P159)rt_nil_check(F->x_904)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_229(F->up, rt_str("DIGITS", 6)) || f_at_kw_229(F->up, rt_str("DELTA", 5)))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_905);
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_905);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &F->r_905);
}
}
(*F->res_274) = F->x_904;
goto ret_;
ret_:

  return;
}

static void f_type_spec_277(struct f_greenc_1fr *up_, P159 *res_276) {
  struct f_type_spec_277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_276 = res_276;
F->x_913 = NULL;
if (((((f_at_op_231(F->up, rt_str("(", 1)) || f_at_kw_229(F->up, rt_str("ARRAY", 5))) || f_at_kw_229(F->up, rt_str("RECORD", 6))) || f_at_kw_229(F->up, rt_str("ACCESS", 6))) || f_at_kw_229(F->up, rt_str("RANGE", 5)))) {
f_type_def_279(F->up, &F->x_913);
} else {
f_subtype_ind_275(F->up, &F->x_913);
}
(*F->res_276) = F->x_913;
goto ret_;
ret_:

  return;
}

static void f_type_def_279(struct f_greenc_1fr *up_, P159 *res_278) {
  struct f_type_def_279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_278 = res_278;
F->x_914 = NULL;
F->lits_915 = NULL;
F->ltail_916 = NULL;
F->l_917 = NULL;
F->idx_918 = NULL;
F->itail_919 = NULL;
F->r_920 = NULL;
F->comps_921 = NULL;
F->ctail_922 = NULL;
F->names_923 = NULL;
F->st_924 = NULL;
F->def_925 = NULL;
F->cm_926 = NULL;
F->line_927 = f_cur_line_227(F->up);
F->more_928 = 1;
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
F->x_914 = f_nn_220(F->up, F->up->d_enum_63, F->line_927);
while (F->more_928) {
if (f_at_kind_233(F->up, F->up->k_str_8)) {
F->l_917 = f_nn_220(F->up, F->up->n_str_11, F->line_927);
(*(P159)rt_nil_check(F->l_917)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
} else {
f_name_node_248(F->up, &F->l_917);
}
f_append_224(F->up, &F->lits_915, &F->ltail_916, F->l_917);
F->more_928 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_928) {
f_skip_240(F->up);
}
}
L_end_929: ;
f_expect_op_244(F->up, rt_str(")", 1));
(*(P159)rt_nil_check(F->x_914)).a_ = F->lits_915;
(*F->res_278) = F->x_914;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
F->x_914 = f_nn_220(F->up, F->up->d_range_64, F->line_927);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->x_914)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->x_914)).b_);
(*F->res_278) = F->x_914;
goto ret_;
}
if ((f_at_kw_229(F->up, rt_str("DIGITS", 6)) || f_at_kw_229(F->up, rt_str("DELTA", 5)))) {
f_skip_240(F->up);
F->x_914 = f_nn_220(F->up, F->up->d_float_65, F->line_927);
f_simple_expr_263(F->up, &F->r_920);
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_920);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &F->r_920);
}
(*F->res_278) = F->x_914;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("ARRAY", 5))) {
f_skip_240(F->up);
F->x_914 = f_nn_220(F->up, F->up->d_array_66, F->line_927);
f_expect_op_244(F->up, rt_str("(", 1));
while (F->more_928) {
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(",", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(")", 1))))) {
F->l_917 = f_nn_220(F->up, F->up->s_mark_71, F->line_927);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->l_917)).name_);
(*(P159)rt_nil_check(F->x_914)).flag_ = ((rt_int)1LL);
} else {
F->l_917 = f_nn_220(F->up, F->up->n_range_22, F->line_927);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_917)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_917)).b_);
}
f_append_224(F->up, &F->idx_918, &F->itail_919, F->l_917);
F->more_928 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_928) {
f_skip_240(F->up);
}
}
L_end_930: ;
f_expect_op_244(F->up, rt_str(")", 1));
f_expect_kw_242(F->up, rt_str("OF", 2));
(*(P159)rt_nil_check(F->x_914)).a_ = F->idx_918;
f_type_spec_277(F->up, &(*(P159)rt_nil_check(F->x_914)).b_);
(*F->res_278) = F->x_914;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("RECORD", 6))) {
f_skip_240(F->up);
F->x_914 = f_nn_220(F->up, F->up->d_record_67, F->line_927);
while ((!f_at_kw_229(F->up, rt_str("END", 3)))) {
if (f_at_kw_229(F->up, rt_str("NULL", 4))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str(";", 1));
} else {
f_id_list_250(F->up, &F->names_923);
f_expect_op_244(F->up, rt_str(":", 1));
if (f_at_kw_229(F->up, rt_str("CONSTANT", 8))) {
f_skip_240(F->up);
}
f_type_spec_277(F->up, &F->st_924);
F->def_925 = NULL;
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->def_925);
}
f_expect_op_244(F->up, rt_str(";", 1));
while ((F->names_923 != NULL)) {
F->cm_926 = f_nn_220(F->up, F->up->n_comp_61, (*(P159)rt_nil_check(F->names_923)).line_);
(*(P159)rt_nil_check(F->cm_926)).name_ = (*(P159)rt_nil_check(F->names_923)).name_;
(*(P159)rt_nil_check(F->cm_926)).a_ = F->st_924;
(*(P159)rt_nil_check(F->cm_926)).b_ = F->def_925;
f_append_224(F->up, &F->comps_921, &F->ctail_922, F->cm_926);
F->names_923 = (*(P159)rt_nil_check(F->names_923)).next_;
}
L_end_932: ;
}
}
L_end_931: ;
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("RECORD", 6));
(*(P159)rt_nil_check(F->x_914)).a_ = F->comps_921;
(*F->res_278) = F->x_914;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("ACCESS", 6))) {
f_skip_240(F->up);
F->x_914 = f_nn_220(F->up, F->up->d_access_68, F->line_927);
f_type_spec_277(F->up, &(*(P159)rt_nil_check(F->x_914)).a_);
(*F->res_278) = F->x_914;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("NEW", 3))) {
f_skip_240(F->up);
F->x_914 = f_nn_220(F->up, F->up->d_derived_69, F->line_927);
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_914)).a_);
(*F->res_278) = F->x_914;
goto ret_;
}
f_perror_239(F->up, rt_str("expected a type definition", 26));
(*F->res_278) = NULL;
goto ret_;
ret_:

  return;
}

static void f_skip_pragma_280(struct f_greenc_1fr *up_) {
  struct f_skip_pragma_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_op_231(F->up, rt_str(";", 1)))) {
f_skip_240(F->up);
}
L_end_933: ;
f_skip_240(F->up);
ret_:

  return;
}

static void f_skip_visibility_281(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_934 = NULL;
f_skip_240(F->up);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
f_id_list_250(F->up, &F->names_934);
f_expect_op_244(F->up, rt_str(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_282(struct f_greenc_1fr *up_) {
  struct f_skip_representation_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_229(F->up, rt_str("USE", 3)))) {
f_skip_240(F->up);
}
L_end_935: ;
f_skip_240(F->up);
if (f_at_kw_229(F->up, rt_str("RECORD", 6))) {
while ((!((f_at_kw_229(F->up, rt_str("END", 3)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("RECORD", 6))))) {
f_skip_240(F->up);
}
L_end_936: ;
f_skip_240(F->up);
f_skip_240(F->up);
}
while ((!f_at_op_231(F->up, rt_str(";", 1)))) {
f_skip_240(F->up);
}
L_end_937: ;
f_skip_240(F->up);
ret_:

  return;
}

static void f_decl_part_284(struct f_greenc_1fr *up_, P159 *res_283) {
  struct f_decl_part_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_283 = res_283;
F->head_938 = NULL;
F->tail_939 = NULL;
F->x_940 = NULL;
F->names_941 = NULL;
for (;;) {
if (f_at_kw_229(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_280(F->up);
} else if (f_at_kw_229(F->up, rt_str("USE", 3))) {
f_skip_240(F->up);
F->x_940 = f_nn_220(F->up, F->up->n_use_57, f_cur_line_227(F->up));
f_id_list_250(F->up, &(*(P159)rt_nil_check(F->x_940)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else if (f_at_kw_229(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_281(F->up);
} else if (f_at_kw_229(F->up, rt_str("FOR", 3))) {
f_skip_representation_282(F->up);
} else if ((f_at_kw_229(F->up, rt_str("TYPE", 4)) || f_at_kw_229(F->up, rt_str("SUBTYPE", 7)))) {
f_type_decl_288(F->up, &F->x_940);
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_294(F->up, &F->x_940);
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else if (f_at_kw_229(F->up, rt_str("PACKAGE", 7))) {
f_package_p_300(F->up, &F->x_940);
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else if (f_at_kw_229(F->up, rt_str("TASK", 4))) {
f_task_p_626(F->up, &F->x_940);
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else if (f_at_kw_229(F->up, rt_str("GENERIC", 7))) {
f_generic_p_756(F->up, &F->x_940);
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else if (f_at_kw_229(F->up, rt_str("ENTRY", 5))) {
f_entry_p_628(F->up, &F->x_940);
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(",", 1))))) {
f_object_decl_286(F->up, &F->x_940);
f_append_224(F->up, &F->head_938, &F->tail_939, F->x_940);
} else {
(*F->res_283) = F->head_938;
goto ret_;
}
}
L_end_942: ;
ret_:

  return;
}

static void f_object_decl_286(struct f_greenc_1fr *up_, P159 *res_285) {
  struct f_object_decl_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_285 = res_285;
F->head_943 = NULL;
F->tail_944 = NULL;
F->names_945 = NULL;
F->st_946 = NULL;
F->init_947 = NULL;
F->x_948 = NULL;
F->line_949 = f_cur_line_227(F->up);
F->is_const_950 = 0;
f_id_list_250(F->up, &F->names_945);
f_expect_op_244(F->up, rt_str(":", 1));
if (f_at_kw_229(F->up, rt_str("EXCEPTION", 9))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str(";", 1));
while ((F->names_945 != NULL)) {
F->x_948 = f_nn_220(F->up, F->up->n_exc_48, F->line_949);
(*(P159)rt_nil_check(F->x_948)).name_ = (*(P159)rt_nil_check(F->names_945)).name_;
f_append_224(F->up, &F->head_943, &F->tail_944, F->x_948);
F->names_945 = (*(P159)rt_nil_check(F->names_945)).next_;
}
L_end_951: ;
(*F->res_285) = F->head_943;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("CONSTANT", 8))) {
f_skip_240(F->up);
F->is_const_950 = 1;
}
f_type_spec_277(F->up, &F->st_946);
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->init_947);
}
f_expect_op_244(F->up, rt_str(";", 1));
while ((F->names_945 != NULL)) {
if (F->is_const_950) {
F->x_948 = f_nn_220(F->up, F->up->n_const_43, F->line_949);
} else {
F->x_948 = f_nn_220(F->up, F->up->n_var_42, F->line_949);
}
(*(P159)rt_nil_check(F->x_948)).name_ = (*(P159)rt_nil_check(F->names_945)).name_;
(*(P159)rt_nil_check(F->x_948)).a_ = F->st_946;
(*(P159)rt_nil_check(F->x_948)).b_ = F->init_947;
if ((!(F->is_const_950 && (F->init_947 == NULL)))) {
f_append_224(F->up, &F->head_943, &F->tail_944, F->x_948);
}
F->names_945 = (*(P159)rt_nil_check(F->names_945)).next_;
}
L_end_952: ;
(*F->res_285) = F->head_943;
goto ret_;
ret_:

  return;
}

static void f_type_decl_288(struct f_greenc_1fr *up_, P159 *res_287) {
  struct f_type_decl_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_287 = res_287;
F->x_953 = NULL;
F->line_954 = f_cur_line_227(F->up);
if (f_at_kw_229(F->up, rt_str("SUBTYPE", 7))) {
f_skip_240(F->up);
F->x_953 = f_nn_220(F->up, F->up->n_subtype_45, F->line_954);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_953)).name_);
f_expect_kw_242(F->up, rt_str("IS", 2));
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_953)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_287) = F->x_953;
goto ret_;
}
f_expect_kw_242(F->up, rt_str("TYPE", 4));
F->x_953 = f_nn_220(F->up, F->up->n_type_44, F->line_954);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_953)).name_);
if (f_at_op_231(F->up, rt_str(";", 1))) {
f_skip_240(F->up);
(*F->res_287) = NULL;
goto ret_;
}
f_expect_kw_242(F->up, rt_str("IS", 2));
if (f_at_kw_229(F->up, rt_str("PRIVATE", 7))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_953)).a_ = f_nn_220(F->up, F->up->d_private_70, F->line_954);
} else {
f_type_def_279(F->up, &(*(P159)rt_nil_check(F->x_953)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_287) = F->x_953;
goto ret_;
ret_:

  return;
}

static void f_formal_part_290(struct f_greenc_1fr *up_, P159 *res_289) {
  struct f_formal_part_290fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_289 = res_289;
F->head_955 = NULL;
F->tail_956 = NULL;
F->names_957 = NULL;
F->st_958 = NULL;
F->def_959 = NULL;
F->p_960 = NULL;
F->more_962 = 1;
f_expect_op_244(F->up, rt_str("(", 1));
while (F->more_962) {
f_id_list_250(F->up, &F->names_957);
f_expect_op_244(F->up, rt_str(":", 1));
F->mode_961 = F->up->m_in_72;
if (f_at_kw_229(F->up, rt_str("IN", 2))) {
f_skip_240(F->up);
if (f_at_kw_229(F->up, rt_str("OUT", 3))) {
f_skip_240(F->up);
F->mode_961 = F->up->m_inout_73;
}
} else if (f_at_kw_229(F->up, rt_str("OUT", 3))) {
f_skip_240(F->up);
F->mode_961 = F->up->m_out_74;
}
f_subtype_ind_275(F->up, &F->st_958);
F->def_959 = NULL;
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->def_959);
}
while ((F->names_957 != NULL)) {
F->p_960 = f_nn_220(F->up, F->up->n_param_49, (*(P159)rt_nil_check(F->names_957)).line_);
(*(P159)rt_nil_check(F->p_960)).name_ = (*(P159)rt_nil_check(F->names_957)).name_;
(*(P159)rt_nil_check(F->p_960)).ival_ = F->mode_961;
(*(P159)rt_nil_check(F->p_960)).a_ = F->st_958;
(*(P159)rt_nil_check(F->p_960)).b_ = F->def_959;
f_append_224(F->up, &F->head_955, &F->tail_956, F->p_960);
F->names_957 = (*(P159)rt_nil_check(F->names_957)).next_;
}
L_end_964: ;
F->more_962 = f_at_op_231(F->up, rt_str(";", 1));
if (F->more_962) {
f_skip_240(F->up);
}
}
L_end_963: ;
f_expect_op_244(F->up, rt_str(")", 1));
(*F->res_289) = F->head_955;
goto ret_;
ret_:

  return;
}

static void f_designator_292(struct f_greenc_1fr *up_, P133 *res_291) {
  struct f_designator_292fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_291 = res_291;
if (f_at_kind_233(F->up, F->up->k_str_8)) {
f_skip_240(F->up);
(*F->res_291) = f_mk_178(F->up, (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(rt_sub(F->up->tpos_107, ((rt_int)1LL)), F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)));
goto ret_;
}
f_expect_id_246(F->up, &(*F->res_291));
goto ret_;
ret_:

  return;
}

static void f_subprogram_294(struct f_greenc_1fr *up_, P159 *res_293) {
  struct f_subprogram_294fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_293 = res_293;
F->x_965 = NULL;
F->line_966 = f_cur_line_227(F->up);
F->is_proc_967 = f_at_kw_229(F->up, rt_str("PROCEDURE", 9));
f_skip_240(F->up);
if (F->is_proc_967) {
F->x_965 = f_nn_220(F->up, F->up->n_proc_46, F->line_966);
} else {
F->x_965 = f_nn_220(F->up, F->up->n_func_47, F->line_966);
}
f_designator_292(F->up, &(*(P159)rt_nil_check(F->x_965)).name_);
if (((f_at_kw_229(F->up, rt_str("IS", 2)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_759(F->up, F->x_965, &(*F->res_293));
goto ret_;
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->x_965)).a_);
}
if (f_at_kw_229(F->up, rt_str("RETURN", 6))) {
f_skip_240(F->up);
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_965)).b_);
if (F->is_proc_967) {
(*(P159)rt_nil_check(F->x_965)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_967)) {
f_perror_239(F->up, rt_str("a function needs a RETURN clause", 32));
}
if (f_at_op_231(F->up, rt_str(";", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_965)).ival_ = ((rt_int)1LL);
(*F->res_293) = F->x_965;
goto ret_;
}
f_expect_kw_242(F->up, rt_str("IS", 2));
if (f_at_kw_229(F->up, rt_str("SEPARATE", 8))) {
f_perror_239(F->up, rt_str("separate bodies are not handled", 31));
}
f_body_part_296(F->up, F->x_965);
if ((f_at_kind_233(F->up, F->up->k_id_3) || f_at_kind_233(F->up, F->up->k_str_8))) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->x_965)).name_))))) {
f_perror_239(F->up, rt_str_cat(rt_str("the name after END does not match ", 34), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->x_965)).name_))));
}
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_293) = F->x_965;
goto ret_;
ret_:

  return;
}

static void f_body_part_296(struct f_greenc_1fr *up_, P159 x_295) {
  struct f_body_part_296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_295 = x_295;
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_295)).c_);
if (f_at_kw_229(F->up, rt_str("BEGIN", 5))) {
f_skip_240(F->up);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_295)).d_);
}
if (f_at_kw_229(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_298(F->up, &(*(P159)rt_nil_check(F->x_295)).e_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
ret_:

  return;
}

static void f_parse_handlers_298(struct f_greenc_1fr *up_, P159 *res_297) {
  struct f_parse_handlers_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_297 = res_297;
F->head_968 = NULL;
F->tail_969 = NULL;
F->h_970 = NULL;
F->names_971 = NULL;
F->ntail_972 = NULL;
F->n_973 = NULL;
f_expect_kw_242(F->up, rt_str("EXCEPTION", 9));
while (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
F->h_970 = f_nn_220(F->up, F->up->n_handler_60, f_cur_line_227(F->up));
F->names_971 = NULL;
F->ntail_972 = NULL;
for (;;) {
if (f_at_kw_229(F->up, rt_str("OTHERS", 6))) {
f_skip_240(F->up);
F->n_973 = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->n_973)).name_ = f_mk_178(F->up, rt_str("OTHERS", 6));
} else {
f_name_node_248(F->up, &F->n_973);
while (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->n_973)).tag_ = (*(P159)rt_nil_check(F->n_973)).name_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->n_973)).name_);
}
L_end_976: ;
}
f_append_224(F->up, &F->names_971, &F->ntail_972, F->n_973);
if ((!f_at_op_231(F->up, rt_str("|", 1)))) {
goto L_end_975;
}
f_skip_240(F->up);
}
L_end_975: ;
f_expect_op_244(F->up, rt_str("=>", 2));
(*(P159)rt_nil_check(F->h_970)).a_ = F->names_971;
f_statements_303(F->up, &(*(P159)rt_nil_check(F->h_970)).b_);
f_append_224(F->up, &F->head_968, &F->tail_969, F->h_970);
}
L_end_974: ;
(*F->res_297) = F->head_968;
goto ret_;
ret_:

  return;
}

static void f_package_p_300(struct f_greenc_1fr *up_, P159 *res_299) {
  struct f_package_p_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_299 = res_299;
F->x_977 = NULL;
F->line_978 = f_cur_line_227(F->up);
f_expect_kw_242(F->up, rt_str("PACKAGE", 7));
if (f_at_kw_229(F->up, rt_str("BODY", 4))) {
f_skip_240(F->up);
F->x_977 = f_nn_220(F->up, F->up->n_pkgbody_51, F->line_978);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_977)).name_);
f_expect_kw_242(F->up, rt_str("IS", 2));
f_body_part_296(F->up, F->x_977);
} else {
F->x_977 = f_nn_220(F->up, F->up->n_pkgspec_50, F->line_978);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_977)).name_);
if (((f_at_kw_229(F->up, rt_str("IS", 2)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_759(F->up, F->x_977, &(*F->res_299));
goto ret_;
}
f_expect_kw_242(F->up, rt_str("IS", 2));
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_977)).c_);
if (f_at_kw_229(F->up, rt_str("PRIVATE", 7))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_977)).d_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
}
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_299) = F->x_977;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_301(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_229(F->up, rt_str("END", 3)) || f_at_kw_229(F->up, rt_str("ELSE", 4))) || f_at_kw_229(F->up, rt_str("ELSIF", 5))) || f_at_kw_229(F->up, rt_str("WHEN", 4))) || f_at_kw_229(F->up, rt_str("EXCEPTION", 9))) || f_at_kw_229(F->up, rt_str("OR", 2))) || f_at_kind_233(F->up, F->up->k_eof_2));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_303(struct f_greenc_1fr *up_, P159 *res_302) {
  struct f_statements_303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_302 = res_302;
F->head_979 = NULL;
F->tail_980 = NULL;
F->x_981 = NULL;
while ((!f_at_statements_end_301(F->up))) {
if (f_at_kw_229(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_280(F->up);
} else {
f_statement_305(F->up, &F->x_981);
f_append_224(F->up, &F->head_979, &F->tail_980, F->x_981);
}
}
L_end_982: ;
(*F->res_302) = F->head_979;
goto ret_;
ret_:

  return;
}

static void f_statement_305(struct f_greenc_1fr *up_, P159 *res_304) {
  struct f_statement_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_304 = res_304;
F->x_983 = NULL;
F->t_984 = NULL;
F->line_985 = f_cur_line_227(F->up);
F->label_986 = NULL;
if (f_at_op_231(F->up, rt_str("<<", 2))) {
f_skip_240(F->up);
f_expect_id_246(F->up, &F->label_986);
f_expect_op_244(F->up, rt_str(">>", 2));
}
if (f_at_kw_229(F->up, rt_str("NULL", 4))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str(";", 1));
F->x_983 = f_nn_220(F->up, F->up->n_null_36, F->line_985);
(*F->res_304) = F->x_983;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("IF", 2))) {
f_if_stmt_309(F->up, &F->x_983);
(*F->res_304) = F->x_983;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("CASE", 4))) {
f_case_stmt_311(F->up, &F->x_983);
(*F->res_304) = F->x_983;
goto ret_;
} else if (((f_at_kw_229(F->up, rt_str("FOR", 3)) || f_at_kw_229(F->up, rt_str("WHILE", 5))) || f_at_kw_229(F->up, rt_str("LOOP", 4)))) {
f_loop_stmt_313(F->up, &F->x_983);
(*(P159)rt_nil_check(F->x_983)).tag_ = F->label_986;
if (f_at_kind_233(F->up, F->up->k_id_3)) {
if (((F->label_986 == NULL) || (!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check(F->label_986)))))) {
f_perror_239(F->up, rt_str("the name after END LOOP does not match the label", 48));
}
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_983;
goto ret_;
} else if ((f_at_kw_229(F->up, rt_str("DECLARE", 7)) || f_at_kw_229(F->up, rt_str("BEGIN", 5)))) {
F->x_983 = f_nn_220(F->up, F->up->n_block_30, F->line_985);
(*(P159)rt_nil_check(F->x_983)).tag_ = F->label_986;
if (f_at_kw_229(F->up, rt_str("DECLARE", 7))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_983)).a_);
}
f_expect_kw_242(F->up, rt_str("BEGIN", 5));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_983)).b_);
if (f_at_kw_229(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_298(F->up, &(*(P159)rt_nil_check(F->x_983)).c_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_983;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("EXIT", 4))) {
f_skip_240(F->up);
F->x_983 = f_nn_220(F->up, F->up->n_exit_31, F->line_985);
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_983)).name_);
}
if (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_983)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_983;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("RETURN", 6))) {
f_skip_240(F->up);
F->x_983 = f_nn_220(F->up, F->up->n_return_32, F->line_985);
if ((!f_at_op_231(F->up, rt_str(";", 1)))) {
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_983)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_983;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("RAISE", 5))) {
f_skip_240(F->up);
if (f_at_op_231(F->up, rt_str(";", 1))) {
f_skip_240(F->up);
F->x_983 = f_nn_220(F->up, F->up->n_reraise_34, F->line_985);
(*F->res_304) = F->x_983;
goto ret_;
}
F->x_983 = f_nn_220(F->up, F->up->n_raise_33, F->line_985);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_983)).name_);
while (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_983)).tag_ = (*(P159)rt_nil_check(F->x_983)).name_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_983)).name_);
}
L_end_987: ;
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_983;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("ASSERT", 6))) {
f_skip_240(F->up);
F->x_983 = f_nn_220(F->up, F->up->n_assert_35, F->line_985);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_983)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_983;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("GOTO", 4))) {
f_perror_239(F->up, rt_str("goto is not handled", 19));
}
f_task_statement_307(F->up, &F->x_983);
if ((F->x_983 != NULL)) {
(*F->res_304) = F->x_983;
goto ret_;
}
f_name_p_273(F->up, &F->t_984);
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
F->x_983 = f_nn_220(F->up, F->up->n_assign_25, F->line_985);
(*(P159)rt_nil_check(F->x_983)).a_ = F->t_984;
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_983)).b_);
} else {
F->x_983 = f_nn_220(F->up, F->up->n_call_26, F->line_985);
(*(P159)rt_nil_check(F->x_983)).a_ = F->t_984;
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_983;
goto ret_;
ret_:

  return;
}

static void f_task_statement_307(struct f_greenc_1fr *up_, P159 *res_306) {
  struct f_task_statement_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_306 = res_306;
f_parse_task_statement_636(F->up, &(*F->res_306));
ret_:

  return;
}

static void f_if_stmt_309(struct f_greenc_1fr *up_, P159 *res_308) {
  struct f_if_stmt_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_308 = res_308;
F->x_988 = NULL;
F->arm_989 = NULL;
F->head_990 = NULL;
F->tail_991 = NULL;
F->go_992 = 1;
F->x_988 = f_nn_220(F->up, F->up->n_if_27, f_cur_line_227(F->up));
f_skip_240(F->up);
F->arm_989 = f_nn_220(F->up, F->up->n_arm_58, f_cur_line_227(F->up));
f_expr_257(F->up, &(*(P159)rt_nil_check(F->arm_989)).a_);
f_expect_kw_242(F->up, rt_str("THEN", 4));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->arm_989)).b_);
f_append_224(F->up, &F->head_990, &F->tail_991, F->arm_989);
while (F->go_992) {
if (f_at_kw_229(F->up, rt_str("ELSIF", 5))) {
f_skip_240(F->up);
F->arm_989 = f_nn_220(F->up, F->up->n_arm_58, f_cur_line_227(F->up));
f_expr_257(F->up, &(*(P159)rt_nil_check(F->arm_989)).a_);
f_expect_kw_242(F->up, rt_str("THEN", 4));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->arm_989)).b_);
f_append_224(F->up, &F->head_990, &F->tail_991, F->arm_989);
} else if (f_at_kw_229(F->up, rt_str("ELSE", 4))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_988)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_988)).b_);
} else {
F->go_992 = 0;
}
}
L_end_993: ;
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("IF", 2));
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->x_988)).a_ = F->head_990;
(*F->res_308) = F->x_988;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_311(struct f_greenc_1fr *up_, P159 *res_310) {
  struct f_case_stmt_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_310 = res_310;
F->x_994 = NULL;
F->arm_995 = NULL;
F->head_996 = NULL;
F->tail_997 = NULL;
F->labs_998 = NULL;
F->ltail_999 = NULL;
F->l_1000 = NULL;
F->x_994 = f_nn_220(F->up, F->up->n_case_28, f_cur_line_227(F->up));
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_994)).a_);
f_expect_kw_242(F->up, rt_str("OF", 2));
while (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
F->labs_998 = NULL;
F->ltail_999 = NULL;
F->others_arm_1001 = 0;
for (;;) {
if (f_at_kw_229(F->up, rt_str("OTHERS", 6))) {
f_skip_240(F->up);
F->others_arm_1001 = 1;
} else {
F->l_1000 = f_nn_220(F->up, F->up->n_label_59, f_cur_line_227(F->up));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_1000)).a_);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_1000)).b_);
}
f_append_224(F->up, &F->labs_998, &F->ltail_999, F->l_1000);
}
if ((!f_at_op_231(F->up, rt_str("|", 1)))) {
goto L_end_1003;
}
f_skip_240(F->up);
}
L_end_1003: ;
f_expect_op_244(F->up, rt_str("=>", 2));
if (F->others_arm_1001) {
(*(P159)rt_nil_check(F->x_994)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_994)).c_);
} else {
F->arm_995 = f_nn_220(F->up, F->up->n_arm_58, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->arm_995)).a_ = F->labs_998;
f_statements_303(F->up, &(*(P159)rt_nil_check(F->arm_995)).b_);
f_append_224(F->up, &F->head_996, &F->tail_997, F->arm_995);
}
}
L_end_1002: ;
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("CASE", 4));
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->x_994)).b_ = F->head_996;
(*F->res_310) = F->x_994;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_313(struct f_greenc_1fr *up_, P159 *res_312) {
  struct f_loop_stmt_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_312 = res_312;
F->x_1004 = NULL;
F->r_1005 = NULL;
F->line_1006 = f_cur_line_227(F->up);
F->x_1004 = f_nn_220(F->up, F->up->n_loop_29, F->line_1006);
if (f_at_kw_229(F->up, rt_str("FOR", 3))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_1004)).flag_ = ((rt_int)2LL);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1004)).name_);
f_expect_kw_242(F->up, rt_str("IN", 2));
if (f_at_kw_229(F->up, rt_str("REVERSE", 7))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_1004)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("LOOP", 4)))) {
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_1004)).a_);
} else {
F->r_1005 = f_nn_220(F->up, F->up->n_range_22, F->line_1006);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_1005)).a_);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_1005)).b_);
(*(P159)rt_nil_check(F->x_1004)).a_ = F->r_1005;
} else {
(*(P159)rt_nil_check(F->x_1004)).a_ = (*(P159)rt_nil_check(F->r_1005)).a_;
}
}
} else if (f_at_kw_229(F->up, rt_str("WHILE", 5))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_1004)).flag_ = ((rt_int)1LL);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_1004)).a_);
}
f_expect_kw_242(F->up, rt_str("LOOP", 4));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_1004)).b_);
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("LOOP", 4));
(*F->res_312) = F->x_1004;
goto ret_;
ret_:

  return;
}

static void f_compilation_315(struct f_greenc_1fr *up_, P159 *res_314) {
  struct f_compilation_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_314 = res_314;
F->head_1007 = NULL;
F->tail_1008 = NULL;
F->x_1009 = NULL;
while ((!f_at_kind_233(F->up, F->up->k_eof_2))) {
if (f_at_kw_229(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_280(F->up);
} else {
if (f_at_kw_229(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_281(F->up);
}
if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_294(F->up, &F->x_1009);
} else if (f_at_kw_229(F->up, rt_str("PACKAGE", 7))) {
f_package_p_300(F->up, &F->x_1009);
} else if (f_at_kw_229(F->up, rt_str("TASK", 4))) {
f_task_p_626(F->up, &F->x_1009);
} else if (f_at_kw_229(F->up, rt_str("GENERIC", 7))) {
f_generic_p_756(F->up, &F->x_1009);
} else {
f_perror_239(F->up, rt_str("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_224(F->up, &F->head_1007, &F->tail_1008, F->x_1009);
}
}
L_end_1010: ;
(*F->res_314) = F->head_1007;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_317(struct f_greenc_1fr *up_, rstr s_316) {
  struct f_hash_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_316 = rt_str_copy(s_316);
F->h_1011 = ((rt_int)0LL);
{ rt_int lo1014 = ((rt_int)1LL), hi1015 = (F->s_316).len;
for (rt_int it1016 = lo1014; it1016 <= hi1015; it1016++) {
F->i_1013 = it1016;
F->h_1011 = rt_rem(rt_add(rt_mul(F->h_1011, ((rt_int)31LL)), ((rt_int)(rt_str_get(F->s_316, F->i_1013)) + 1)), ((rt_int)4093LL));
}
}
L_end_1012: ;
F->result_ = F->h_1011;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_319(struct f_greenc_1fr *up_, rstr name_318) {
  struct f_lookup_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_318 = rt_str_copy(name_318);
F->y_1017 = NULL;
F->y_1017 = F->up->table_112.p[rt_index(f_hash_317(F->up, F->name_318), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1017 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1017)).name_)), F->name_318)) {
F->result_ = F->y_1017;
goto ret_;
}
F->y_1017 = (*(P110)rt_nil_check(F->y_1017)).chain_;
}
L_end_1018: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_322(struct f_greenc_1fr *up_, P110 a_320, P110 b_321) {
  struct f_same_task_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_320 = a_320;
F->b_321 = b_321;
if ((F->a_320 == F->b_321)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_320 == NULL) || (F->b_321 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->a_320)).cname_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_321)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_entry_325(struct f_greenc_1fr *up_, rstr name_323, P110 owner_324) {
  struct f_lookup_entry_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_323 = rt_str_copy(name_323);
F->owner_324 = owner_324;
F->y_1019 = NULL;
F->y_1019 = F->up->table_112.p[rt_index(f_hash_317(F->up, F->name_323), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1019 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1019)).name_)), F->name_323) && ((*(P110)rt_nil_check(F->y_1019)).kind_ == F->up->y_entry_99)) && f_same_task_322(F->up, (*(P110)rt_nil_check(F->y_1019)).members_, F->owner_324))) {
F->result_ = F->y_1019;
goto ret_;
}
F->y_1019 = (*(P110)rt_nil_check(F->y_1019)).chain_;
}
L_end_1020: ;
F->result_ = f_lookup_319(F->up, F->name_323);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_decl_327(struct f_greenc_1fr *up_, P159 d_326) {
  struct f_lookup_decl_327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_326 = d_326;
F->y_1021 = NULL;
F->y_1021 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->d_326)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1021 != NULL)) {
if (((*(P110)rt_nil_check(F->y_1021)).decl_ == F->d_326)) {
F->result_ = F->y_1021;
goto ret_;
}
F->y_1021 = (*(P110)rt_nil_check(F->y_1021)).chain_;
}
L_end_1022: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_329(struct f_greenc_1fr *up_, P110 y_328) {
  struct f_overloadable_329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_328 = y_328;
F->result_ = (((((*(P110)rt_nil_check(F->y_328)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_328)).kind_ == F->up->y_proc_93)) || ((*(P110)rt_nil_check(F->y_328)).kind_ == F->up->y_enumlit_96)) || ((*(P110)rt_nil_check(F->y_328)).kind_ == F->up->y_entry_99));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_332(struct f_greenc_1fr *up_, P115 a_330, P115 b_331) {
  struct f_same_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_330 = a_330;
F->b_331 = b_331;
if ((F->a_330 == F->b_331)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_330 == NULL) || (F->b_331 == NULL)) || ((*(P115)rt_nil_check(F->a_330)).kind_ != (*(P115)rt_nil_check(F->b_331)).kind_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((((((*(P115)rt_nil_check(F->a_330)).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check(F->a_330)).kind_ == F->up->t_bool_76)) || ((*(P115)rt_nil_check(F->a_330)).kind_ == F->up->t_float_77)) || ((*(P115)rt_nil_check(F->a_330)).kind_ == F->up->t_char_85)) || ((*(P115)rt_nil_check(F->a_330)).kind_ == F->up->t_string_79)) || ((*(P115)rt_nil_check(F->a_330)).kind_ == F->up->t_void_83));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_335(struct f_greenc_1fr *up_, P1023 a_333, P1023 b_334) {
  struct f_same_signature_335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_333 = a_333;
F->b_334 = b_334;
F->x_1025 = NULL;
F->x_1025 = F->a_333;
F->y_1026 = NULL;
F->y_1026 = F->b_334;
while (((F->x_1025 != NULL) && (F->y_1026 != NULL))) {
if (((!f_same_332(F->up, (*(P1023)rt_nil_check(F->x_1025)).t_, (*(P1023)rt_nil_check(F->y_1026)).t_)) || ((*(P1023)rt_nil_check(F->x_1025)).mode_ != (*(P1023)rt_nil_check(F->y_1026)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1025 = (*(P1023)rt_nil_check(F->x_1025)).next_;
F->y_1026 = (*(P1023)rt_nil_check(F->y_1026)).next_;
}
L_end_1027: ;
F->result_ = ((F->x_1025 == NULL) && (F->y_1026 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_338(struct f_greenc_1fr *up_, P110 y_336, rt_int line_337) {
  struct f_define_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_336 = y_336;
F->line_337 = line_337;
F->h_1028 = f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_336)).name_)));
F->z_1029 = NULL;
F->z_1029 = F->up->table_112.p[rt_index(F->h_1028, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1029 != NULL)) {
if (((((*(P110)rt_nil_check(F->z_1029)).depth_ == F->up->depth_113) && rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1029)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_336)).name_)))) && (!((f_overloadable_329(F->up, F->y_336) && f_overloadable_329(F->up, F->z_1029)) && ((((*(P110)rt_nil_check(F->y_336)).kind_ != (*(P110)rt_nil_check(F->z_1029)).kind_) || (!f_same_signature_335(F->up, (*(P110)rt_nil_check(F->y_336)).params_, (*(P110)rt_nil_check(F->z_1029)).params_))) || (!f_same_332(F->up, (*(P110)rt_nil_check(F->y_336)).result_, (*(P110)rt_nil_check(F->z_1029)).result_))))))) {
f_fail_195(F->up, F->line_337, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_336)).name_)), rt_str(" is already declared in this declarative part", 45)));
}
F->z_1029 = (*(P110)rt_nil_check(F->z_1029)).chain_;
}
L_end_1030: ;
(*(P110)rt_nil_check(F->y_336)).depth_ = F->up->depth_113;
(*(P110)rt_nil_check(F->y_336)).chain_ = F->up->table_112.p[rt_index(F->h_1028, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->up->table_112.p[rt_index(F->h_1028, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = F->y_336;
(*(P110)rt_nil_check(F->y_336)).stack_ = F->up->scope_stack_114;
F->up->scope_stack_114 = F->y_336;
ret_:

  return;
}

static void f_open_scope_339(struct f_greenc_1fr *up_) {
  struct f_open_scope_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_113 = rt_add(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_340(struct f_greenc_1fr *up_) {
  struct f_close_scope_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_114 != NULL) && ((*(P110)rt_nil_check(F->up->scope_stack_114)).depth_ == F->up->depth_113))) {
F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->scope_stack_114)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = (*(P110)rt_nil_check(F->up->scope_stack_114)).chain_;
F->up->scope_stack_114 = (*(P110)rt_nil_check(F->up->scope_stack_114)).stack_;
}
L_end_1031: ;
F->up->depth_113 = rt_sub(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static P110 f_new_sym_343(struct f_greenc_1fr *up_, rt_int kind_341, P133 name_342) {
  struct f_new_sym_343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_341 = kind_341;
F->name_342 = name_342;
F->result_ = ({ R111 *cell1032 = rt_alloc(sizeof(R111)); *cell1032 = cp_R111(({ R111 ag1033; ag1033.kind_ = F->kind_341; ag1033.name_ = F->name_342; ag1033.t_ = NULL; ag1033.c_ = NULL; ag1033.access_path_ = NULL; ag1033.cname_ = NULL; ag1033.ro_ = 0; ag1033.mvalue_ = ((rt_int)0LL); ag1033.hasmv_ = 0; ag1033.decl_ = NULL; ag1033.params_ = NULL; ag1033.result_ = NULL; ag1033.depth_ = ((rt_int)0LL); ag1033.level_ = ((rt_int)0LL); ag1033.byref_ = 0; ag1033.vrp_ = 0; ag1033.hidden_ = 0; ag1033.members_ = NULL; ag1033.mnext_ = NULL; ag1033.chain_ = NULL; ag1033.stack_ = NULL; ag1033; })); (P110)cell1032; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P115 f_new_typ_345(struct f_greenc_1fr *up_, rt_int kind_344) {
  struct f_new_typ_345fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_344 = kind_344;
F->result_ = ({ R116 *cell1036 = rt_alloc(sizeof(R116)); *cell1036 = cp_R116(({ R116 ag1037; ag1037.kind_ = F->kind_344; ag1037.name_ = NULL; ag1037.lits_ = NULL; ag1037.elem_ = NULL; ag1037.idx_ = NULL; ag1037.elemcons_ = NULL; ag1037.tcons_ = NULL; ag1037.fields_ = NULL; ag1037.target_ = NULL; ag1037.decl_ = NULL; ag1037.cname_ = NULL; ag1037.forward_ = 0; ag1037.defined_ = 0; ag1037.priv_ = 0; ag1037.next_ = NULL; ag1037; })); (P115)cell1036; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P163 f_new_cons_346(struct f_greenc_1fr *up_) {
  struct f_new_cons_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R164 *cell1038 = rt_alloc(sizeof(R164)); *cell1038 = cp_R164(({ R164 ag1039; ag1039.lo_ = NULL; ag1039.hi_ = NULL; ag1039.slen_ = NULL; ag1039.mlo_ = ((rt_int)0LL); ag1039.mhi_ = ((rt_int)0LL); ag1039.hasm_ = 0; ag1039; })); (P163)cell1038; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_kind_name_348(struct f_greenc_1fr *up_, P115 t_347) {
  struct f_kind_name_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_347 = t_347;
if (((*(P115)rt_nil_check(F->t_347)).name_ != NULL)) {
F->result_ = (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_347)).name_));
goto ret_;
}
{ rt_int sel1040 = (*(P115)rt_nil_check(F->t_347)).kind_;
if (0 || sel1040 == ((rt_int)1LL)) {
F->result_ = rt_str("INTEGER", 7);
goto ret_;
} else if (0 || sel1040 == ((rt_int)2LL)) {
F->result_ = rt_str("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1040 == ((rt_int)3LL)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || sel1040 == ((rt_int)5LL)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || sel1040 == ((rt_int)10LL)) {
F->result_ = rt_str("null", 4);
goto ret_;
} else if (0 || sel1040 == ((rt_int)11LL)) {
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

static void f_check_type_352(struct f_greenc_1fr *up_, P115 got_349, P115 want_350, rt_int line_351) {
  struct f_check_type_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_349 = got_349;
F->want_350 = want_350;
F->line_351 = line_351;
if ((F->want_350 == NULL)) {
goto ret_;
}
if ((((*(P115)rt_nil_check(F->got_349)).kind_ == F->up->t_nil_84) && ((*(P115)rt_nil_check(F->want_350)).kind_ == F->up->t_ptr_82))) {
goto ret_;
}
if ((!f_same_332(F->up, F->got_349, F->want_350))) {
f_fail_195(F->up, F->line_351, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_348(F->up, F->got_349)), rt_str(" where ", 7)), f_kind_name_348(F->up, F->want_350)), rt_str(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_354(struct f_greenc_1fr *up_, P115 t_353) {
  struct f_field_count_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_353 = t_353;
F->n_1041 = ((rt_int)0LL);
F->f_1042 = NULL;
F->f_1042 = (*(P115)rt_nil_check(F->t_353)).fields_;
while ((F->f_1042 != NULL)) {
F->n_1041 = rt_add(F->n_1041, ((rt_int)1LL));
F->f_1042 = (*(P1034)rt_nil_check(F->f_1042)).next_;
}
L_end_1043: ;
F->result_ = F->n_1041;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_357(struct f_greenc_1fr *up_, P115 t_355, P133 *r_356) {
  struct f_ctype_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_355 = t_355;
F->r_356 = r_356;
F->s_1044 = NULL;
{ rt_int sel1045 = (*(P115)rt_nil_check(F->t_355)).kind_;
if (0 || sel1045 == ((rt_int)1LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("rt_int", 6));
} else if (0 || sel1045 == ((rt_int)2LL) || sel1045 == ((rt_int)4LL) || sel1045 == ((rt_int)11LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("int", 3));
} else if (0 || sel1045 == ((rt_int)3LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("double", 6));
} else if (0 || sel1045 == ((rt_int)5LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("rstr", 4));
} else if (0 || sel1045 == ((rt_int)9LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("void", 4));
} else if (0 || sel1045 == ((rt_int)13LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("rt_act", 6));
} else if (0 || sel1045 == ((rt_int)14LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("rt_taskdecl", 11));
} else if (0 || sel1045 == ((rt_int)15LL)) {
(*F->r_356) = f_mk_178(F->up, rt_str("rt_entry", 8));
} else {
if (((*(P115)rt_nil_check(F->t_355)).cname_ == NULL)) {
f_declare_ctype_362(F->up, F->t_355);
} else if (((((*(P115)rt_nil_check(F->t_355)).kind_ == F->up->t_record_81) && (*(P115)rt_nil_check(F->t_355)).forward_) && (!(*(P115)rt_nil_check(F->t_355)).defined_))) {
(*(P115)rt_nil_check(F->t_355)).defined_ = 1;
f_field_decls_360(F->up, F->t_355, &F->s_1044);
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1044))), rt_str(" };", 3)));
}
(*F->r_356) = (*(P115)rt_nil_check(F->t_355)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_360(struct f_greenc_1fr *up_, P115 t_358, P133 *r_359) {
  struct f_field_decls_360fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_358 = t_358;
F->r_359 = r_359;
F->f_1046 = NULL;
F->f_1046 = (*(P115)rt_nil_check(F->t_358)).fields_;
F->s_1047 = NULL;
F->ct_1048 = NULL;
F->s_1047 = f_mk_178(F->up, rt_str(" int dummy_;", 12));
while ((F->f_1046 != NULL)) {
f_ctype_357(F->up, (*(P1034)rt_nil_check(F->f_1046)).t_, &F->ct_1048);
F->s_1047 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->s_1047)), 32), (*(P133)rt_nil_check(F->ct_1048))), 32), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1046)).name_)))), 59));
F->f_1046 = (*(P1034)rt_nil_check(F->f_1046)).next_;
}
L_end_1049: ;
(*F->r_359) = F->s_1047;
ret_:

  return;
}

static void f_declare_ctype_362(struct f_greenc_1fr *up_, P115 t_361) {
  struct f_declare_ctype_362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_361 = t_361;
F->ct_1050 = NULL;
F->s_1051 = NULL;
F->target_1052 = NULL;
if (((*(P115)rt_nil_check(F->t_361)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_380(F->up, F->t_361);
}
if (((*(P115)rt_nil_check(F->t_361)).kind_ == F->up->t_array_80)) {
f_new_name_181(F->up, rt_str("A", 1), &(*(P115)rt_nil_check(F->t_361)).cname_);
} else if (((*(P115)rt_nil_check(F->t_361)).kind_ == F->up->t_record_81)) {
f_new_name_181(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->t_361)).cname_);
} else {
f_new_name_181(F->up, rt_str("P", 1), &(*(P115)rt_nil_check(F->t_361)).cname_);
}
(*(P115)rt_nil_check(F->t_361)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->t_361;
if (((*(P115)rt_nil_check(F->t_361)).kind_ == F->up->t_ptr_82)) {
F->target_1052 = (*(P115)rt_nil_check(F->t_361)).target_;
if ((F->target_1052 == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str_cat(rt_str_cat(rt_str("the designated type of ", 23), f_kind_name_348(F->up, F->t_361)), rt_str(" is never declared", 18)));
}
if (((*(P115)rt_nil_check(F->target_1052)).kind_ == F->up->t_record_81)) {
if (((*(P115)rt_nil_check(F->target_1052)).cname_ == NULL)) {
f_new_name_181(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->target_1052)).cname_);
(*(P115)rt_nil_check(F->target_1052)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->target_1052;
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1052)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1052)).cname_))), 59));
(*(P115)rt_nil_check(F->target_1052)).forward_ = 1;
}
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1052)).cname_))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), 59));
} else {
f_ctype_357(F->up, F->target_1052, &F->ct_1050);
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), (*(P133)rt_nil_check(F->ct_1050))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), 59));
}
} else if (((*(P115)rt_nil_check(F->t_361)).kind_ == F->up->t_array_80)) {
f_ctype_357(F->up, (*(P115)rt_nil_check(F->t_361)).elem_, &F->ct_1050);
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), 59));
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P133)rt_nil_check(F->ct_1050))), rt_str(" *p; };", 7)));
} else {
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), 59));
(*(P115)rt_nil_check(F->t_361)).defined_ = 1;
f_field_decls_360(F->up, F->t_361, &F->s_1051);
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_361)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1051))), rt_str(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_365(struct f_greenc_1fr *up_, P159 lits_363, rstr name_364) {
  struct f_lit_index_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_363 = lits_363;
F->name_364 = rt_str_copy(name_364);
F->i_1053 = ((rt_int)0LL);
F->l_1054 = NULL;
F->l_1054 = F->lits_363;
while ((F->l_1054 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->l_1054)).name_)), F->name_364)) {
F->result_ = F->i_1053;
goto ret_;
}
F->i_1053 = rt_add(F->i_1053, ((rt_int)1LL));
F->l_1054 = (*(P159)rt_nil_check(F->l_1054)).next_;
}
L_end_1055: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_369(struct f_greenc_1fr *up_, P159 e_366, rt_int *v_367, int *ok_368) {
  struct f_manifest_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_366 = e_366;
F->v_367 = v_367;
F->ok_368 = ok_368;
F->y_1059 = NULL;
(*F->ok_368) = 0;
(*F->v_367) = ((rt_int)0LL);
if (((*(P159)rt_nil_check(F->e_366)).kind_ == F->up->n_int_9)) {
(*F->ok_368) = 1;
(*F->v_367) = (*(P159)rt_nil_check(F->e_366)).ival_;
} else if (((*(P159)rt_nil_check(F->e_366)).kind_ == F->up->n_paren_23)) {
f_manifest_369(F->up, (*(P159)rt_nil_check(F->e_366)).a_, &(*F->v_367), &(*F->ok_368));
} else if ((((*(P159)rt_nil_check(F->e_366)).kind_ == F->up->n_unop_14) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_366)).name_)), rt_str("-", 1)))) {
f_manifest_369(F->up, (*(P159)rt_nil_check(F->e_366)).a_, &F->a_1056, &(*F->ok_368));
(*F->v_367) = rt_neg(F->a_1056);
} else if ((((*(P159)rt_nil_check(F->e_366)).kind_ == F->up->n_binop_15) && ((rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_366)).name_)), rt_str("+", 1)) || rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_366)).name_)), rt_str("-", 1))) || rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_366)).name_)), rt_str("*", 1))))) {
f_manifest_369(F->up, (*(P159)rt_nil_check(F->e_366)).a_, &F->a_1056, &(*F->ok_368));
f_manifest_369(F->up, (*(P159)rt_nil_check(F->e_366)).b_, &F->b_1057, &F->ok2_1058);
(*F->ok_368) = ((*F->ok_368) && F->ok2_1058);
if ((*F->ok_368)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_366)).name_)), rt_str("+", 1))) {
(*F->v_367) = rt_add(F->a_1056, F->b_1057);
} else if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_366)).name_)), rt_str("-", 1))) {
(*F->v_367) = rt_sub(F->a_1056, F->b_1057);
} else {
(*F->v_367) = rt_mul(F->a_1056, F->b_1057);
}
}
} else if (((*(P159)rt_nil_check(F->e_366)).kind_ == F->up->n_name_13)) {
F->y_1059 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_366)).name_)));
if ((((F->y_1059 != NULL) && ((*(P110)rt_nil_check(F->y_1059)).kind_ == F->up->y_const_91)) && (*(P110)rt_nil_check(F->y_1059)).hasmv_)) {
(*F->ok_368) = 1;
(*F->v_367) = (*(P110)rt_nil_check(F->y_1059)).mvalue_;
}
}
ret_:

  return;
}

static void f_resolve_373(struct f_greenc_1fr *up_, P159 st_370, P115 *t_371, P163 *c_372) {
  struct f_resolve_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_370 = st_370;
F->t_371 = t_371;
F->c_372 = c_372;
F->y_1060 = NULL;
F->dummy_1061 = NULL;
F->code_1062 = NULL;
F->r_1064 = NULL;
(*F->c_372) = f_new_cons_346(F->up);
if (((*(P159)rt_nil_check(F->st_370)).kind_ != F->up->s_mark_71)) {
f_type_definition_378(F->up, F->st_370, NULL, &(*F->t_371), &(*F->c_372));
goto ret_;
}
if (((*(P159)rt_nil_check(F->st_370)).tag_ != NULL)) {
F->y_1060 = f_member_of_587(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_370)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_370)).name_)), (*(P159)rt_nil_check(F->st_370)).line_);
} else {
F->y_1060 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_370)).name_)));
}
if (((F->y_1060 == NULL) || ((*(P110)rt_nil_check(F->y_1060)).kind_ != F->up->y_type_94))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_370)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_370)).name_)), rt_str(" is not a type", 14)));
}
(*F->t_371) = (*(P110)rt_nil_check(F->y_1060)).t_;
if (((*(P110)rt_nil_check(F->y_1060)).c_ != NULL)) {
(*(P163)rt_nil_check((*F->c_372))).lo_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1060)).c_)).lo_;
(*(P163)rt_nil_check((*F->c_372))).hi_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1060)).c_)).hi_;
(*(P163)rt_nil_check((*F->c_372))).slen_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1060)).c_)).slen_;
(*(P163)rt_nil_check((*F->c_372))).mlo_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1060)).c_)).mlo_;
(*(P163)rt_nil_check((*F->c_372))).mhi_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1060)).c_)).mhi_;
(*(P163)rt_nil_check((*F->c_372))).hasm_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1060)).c_)).hasm_;
}
if (((*F->t_371) == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_370)).line_, rt_str_cat(rt_str_cat(rt_str("the type ", 9), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_370)).name_))), rt_str(" is used before its full declaration", 36)));
}
if (((*(P159)rt_nil_check(F->st_370)).flag_ == ((rt_int)1LL))) {
F->r_1064 = (*(P159)rt_nil_check(F->st_370)).a_;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1064)).a_, (*F->t_371), &F->dummy_1061, &(*(P163)rt_nil_check((*F->c_372))).lo_);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1064)).b_, (*F->t_371), &F->dummy_1061, &(*(P163)rt_nil_check((*F->c_372))).hi_);
f_manifest_369(F->up, (*(P159)rt_nil_check(F->r_1064)).a_, &(*(P163)rt_nil_check((*F->c_372))).mlo_, &F->ok_1063);
(*(P163)rt_nil_check((*F->c_372))).hasm_ = F->ok_1063;
f_manifest_369(F->up, (*(P159)rt_nil_check(F->r_1064)).b_, &(*(P163)rt_nil_check((*F->c_372))).mhi_, &F->ok_1063);
(*(P163)rt_nil_check((*F->c_372))).hasm_ = ((*(P163)rt_nil_check((*F->c_372))).hasm_ && F->ok_1063);
} else if (((*(P159)rt_nil_check(F->st_370)).flag_ == ((rt_int)2LL))) {
F->r_1064 = (*(P159)rt_nil_check(F->st_370)).a_;
if (((*(P159)rt_nil_check(F->r_1064)).kind_ != F->up->n_range_22)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_370)).line_, rt_str("an index constraint is a discrete range", 39));
}
if (((*(P115)rt_nil_check((*F->t_371))).kind_ == F->up->t_string_79)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1064)).a_, F->up->ty_int_145, &F->dummy_1061, &F->code_1062);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1064)).b_, F->up->ty_int_145, &F->dummy_1061, &(*(P163)rt_nil_check((*F->c_372))).slen_);
(*(P163)rt_nil_check((*F->c_372))).slen_ = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check((*(P163)rt_nil_check((*F->c_372))).slen_))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->code_1062))), rt_str(" + 1)", 5)));
} else if (((*(P115)rt_nil_check((*F->t_371))).kind_ == F->up->t_array_80)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1064)).a_, (*(P115)rt_nil_check((*F->t_371))).idx_, &F->dummy_1061, &(*(P163)rt_nil_check((*F->c_372))).lo_);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1064)).b_, (*(P115)rt_nil_check((*F->t_371))).idx_, &F->dummy_1061, &(*(P163)rt_nil_check((*F->c_372))).hi_);
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_370)).line_, rt_str("this type takes no index constraint", 35));
}
}
ret_:

  return;
}

static void f_type_definition_378(struct f_greenc_1fr *up_, P159 d_374, P133 name_375, P115 *t_376, P163 *c_377) {
  struct f_type_definition_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_374 = d_374;
F->name_375 = name_375;
F->t_376 = t_376;
F->c_377 = c_377;
F->dummy_1065 = NULL;
F->it_1066 = NULL;
F->ic_1067 = NULL;
F->l_1068 = NULL;
F->comp_1069 = NULL;
F->f_1070 = NULL;
F->tail_1071 = NULL;
F->y_1074 = NULL;
(*F->c_377) = f_new_cons_346(F->up);
{ rt_int sel1075 = (*(P159)rt_nil_check(F->d_374)).kind_;
if (0 || sel1075 == ((rt_int)70LL)) {
(*F->t_376) = f_new_typ_345(F->up, F->up->t_enum_78);
(*(P115)rt_nil_check((*F->t_376))).lits_ = (*(P159)rt_nil_check(F->d_374)).a_;
(*(P115)rt_nil_check((*F->t_376))).name_ = F->name_375;
F->l_1068 = (*(P159)rt_nil_check(F->d_374)).a_;
F->n_1073 = ((rt_int)0LL);
while ((F->l_1068 != NULL)) {
if (((*(P159)rt_nil_check(F->l_1068)).kind_ == F->up->n_name_13)) {
F->y_1074 = f_new_sym_343(F->up, F->up->y_enumlit_96, (*(P159)rt_nil_check(F->l_1068)).name_);
(*(P110)rt_nil_check(F->y_1074)).t_ = (*F->t_376);
(*(P110)rt_nil_check(F->y_1074)).result_ = (*F->t_376);
(*(P110)rt_nil_check(F->y_1074)).mvalue_ = F->n_1073;
(*(P110)rt_nil_check(F->y_1074)).hasmv_ = 1;
f_define_338(F->up, F->y_1074, (*(P159)rt_nil_check(F->l_1068)).line_);
}
F->n_1073 = rt_add(F->n_1073, ((rt_int)1LL));
F->l_1068 = (*(P159)rt_nil_check(F->l_1068)).next_;
}
L_end_1076: ;
(*(P163)rt_nil_check((*F->c_377))).lo_ = f_mk_178(F->up, rt_str("0", 1));
(*(P163)rt_nil_check((*F->c_377))).hi_ = f_mk_178(F->up, rt_str_of_int(rt_sub(F->n_1073, ((rt_int)1LL))));
} else if (0 || sel1075 == ((rt_int)71LL)) {
(*F->t_376) = F->up->ty_int_145;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->d_374)).a_, F->up->ty_int_145, &F->dummy_1065, &(*(P163)rt_nil_check((*F->c_377))).lo_);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->d_374)).b_, F->up->ty_int_145, &F->dummy_1065, &(*(P163)rt_nil_check((*F->c_377))).hi_);
f_manifest_369(F->up, (*(P159)rt_nil_check(F->d_374)).a_, &(*(P163)rt_nil_check((*F->c_377))).mlo_, &F->ok_1072);
(*(P163)rt_nil_check((*F->c_377))).hasm_ = F->ok_1072;
f_manifest_369(F->up, (*(P159)rt_nil_check(F->d_374)).b_, &(*(P163)rt_nil_check((*F->c_377))).mhi_, &F->ok_1072);
(*(P163)rt_nil_check((*F->c_377))).hasm_ = ((*(P163)rt_nil_check((*F->c_377))).hasm_ && F->ok_1072);
} else if (0 || sel1075 == ((rt_int)72LL)) {
(*F->t_376) = F->up->ty_float_147;
} else if (0 || sel1075 == ((rt_int)73LL)) {
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->d_374)).a_)).next_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->d_374)).line_, rt_str("arrays of more than one dimension are not handled yet", 53));
}
(*F->t_376) = f_new_typ_345(F->up, F->up->t_array_80);
(*(P115)rt_nil_check((*F->t_376))).name_ = F->name_375;
f_resolve_373(F->up, (*(P159)rt_nil_check(F->d_374)).b_, &(*(P115)rt_nil_check((*F->t_376))).elem_, &(*(P115)rt_nil_check((*F->t_376))).elemcons_);
F->l_1068 = (*(P159)rt_nil_check(F->d_374)).a_;
if (((*(P159)rt_nil_check(F->l_1068)).kind_ == F->up->n_range_22)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->l_1068)).a_, NULL, &(*(P115)rt_nil_check((*F->t_376))).idx_, &(*(P163)rt_nil_check((*F->c_377))).lo_);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->l_1068)).b_, (*(P115)rt_nil_check((*F->t_376))).idx_, &F->dummy_1065, &(*(P163)rt_nil_check((*F->c_377))).hi_);
} else {
f_resolve_373(F->up, F->l_1068, &(*(P115)rt_nil_check((*F->t_376))).idx_, &F->ic_1067);
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_376))).idx_)).kind_ == F->up->t_enum_78) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_376))).idx_)).kind_ == F->up->t_char_85)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_376))).idx_)).kind_ == F->up->t_bool_76))) {
(*(P163)rt_nil_check((*F->c_377))).lo_ = (*(P163)rt_nil_check(F->ic_1067)).lo_;
(*(P163)rt_nil_check((*F->c_377))).hi_ = (*(P163)rt_nil_check(F->ic_1067)).hi_;
} else if (((*(P163)rt_nil_check(F->ic_1067)).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_376))).tcons_ = f_new_cons_346(F->up);
(*(P163)rt_nil_check((*(P115)rt_nil_check((*F->t_376))).tcons_)).lo_ = (*(P163)rt_nil_check(F->ic_1067)).lo_;
}
}
if (((*(P163)rt_nil_check((*F->c_377))).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_376))).tcons_ = (*F->c_377);
}
} else if (0 || sel1075 == ((rt_int)74LL)) {
(*F->t_376) = f_new_typ_345(F->up, F->up->t_record_81);
(*(P115)rt_nil_check((*F->t_376))).name_ = F->name_375;
F->comp_1069 = (*(P159)rt_nil_check(F->d_374)).a_;
while ((F->comp_1069 != NULL)) {
F->f_1070 = ({ R1035 *cell1078 = rt_alloc(sizeof(R1035)); *cell1078 = cp_R1035(({ R1035 ag1079; ag1079.name_ = (*(P159)rt_nil_check(F->comp_1069)).name_; ag1079.t_ = NULL; ag1079.c_ = NULL; ag1079.next_ = NULL; ag1079; })); (P1034)cell1078; });
f_resolve_373(F->up, (*(P159)rt_nil_check(F->comp_1069)).a_, &(*(P1034)rt_nil_check(F->f_1070)).t_, &(*(P1034)rt_nil_check(F->f_1070)).c_);
if ((F->tail_1071 == NULL)) {
(*(P115)rt_nil_check((*F->t_376))).fields_ = F->f_1070;
} else {
(*(P1034)rt_nil_check(F->tail_1071)).next_ = F->f_1070;
}
F->tail_1071 = F->f_1070;
F->comp_1069 = (*(P159)rt_nil_check(F->comp_1069)).next_;
}
L_end_1077: ;
} else if (0 || sel1075 == ((rt_int)75LL)) {
(*F->t_376) = f_new_typ_345(F->up, F->up->t_ptr_82);
(*(P115)rt_nil_check((*F->t_376))).name_ = F->name_375;
(*(P115)rt_nil_check((*F->t_376))).decl_ = (*(P159)rt_nil_check(F->d_374)).a_;
} else if (0 || sel1075 == ((rt_int)76LL)) {
f_resolve_373(F->up, (*(P159)rt_nil_check(F->d_374)).a_, &(*F->t_376), &(*F->c_377));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->d_374)).line_, rt_str("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_finish_ptr_380(struct f_greenc_1fr *up_, P115 t_379) {
  struct f_finish_ptr_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_379 = t_379;
F->c_1080 = NULL;
if ((((*(P115)rt_nil_check(F->t_379)).target_ == NULL) && ((*(P115)rt_nil_check(F->t_379)).decl_ != NULL))) {
f_resolve_373(F->up, (*(P115)rt_nil_check(F->t_379)).decl_, &(*(P115)rt_nil_check(F->t_379)).target_, &F->c_1080);
}
ret_:

  return;
}

static void f_init_storage_384(struct f_greenc_1fr *up_, rstr lval_381, P115 t_382, P163 c_383) {
  struct f_init_storage_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_381 = rt_str_copy(lval_381);
F->t_382 = t_382;
F->c_383 = c_383;
F->ct_1081 = NULL;
F->i_1082 = NULL;
F->f_1083 = NULL;
if (((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_ptr_82)) {
f_emit_201(F->up, rt_str_cat(F->lval_381, rt_str(" = NULL;", 8)));
} else if (((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_string_79)) {
if (((*(P163)rt_nil_check(F->c_383)).slen_ == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str("a STRING object needs an index constraint or an initial value", 61));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(F->lval_381, rt_str(" = rt_str_new(", 14)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_383)).slen_))), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_array_80)) {
if (((*(P163)rt_nil_check(F->c_383)).lo_ == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str("an array object needs an index constraint", 41));
}
f_ctype_357(F->up, (*(P115)rt_nil_check(F->t_382)).elem_, &F->ct_1081);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_381, rt_str(".lo = ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_383)).lo_))), rt_str("; ", 2)), F->lval_381), rt_str(".hi = ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_383)).hi_))), rt_str("; ", 2)), F->lval_381), rt_str(".lo2 = 1; ", 10)), F->lval_381), rt_str(".hi2 = 1;", 9)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_381, rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->ct_1081))), rt_str(") * (size_t)RT_CNT(", 19)), F->lval_381), rt_str("));", 3)));
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_382)).elem_)).kind_ == F->up->t_string_79) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_382)).elem_)).kind_ == F->up->t_array_80)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_382)).elem_)).kind_ == F->up->t_record_81))) {
f_new_name_181(F->up, rt_str("i", 1), &F->i_1082);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->i_1082))), rt_str(" = 0; ", 6)), (*(P133)rt_nil_check(F->i_1082))), rt_str(" < RT_CNT(", 10)), F->lval_381), rt_str("); ", 3)), (*(P133)rt_nil_check(F->i_1082))), rt_str("++) {", 5)));
f_init_storage_384(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_381, rt_str(".p[", 3)), (*(P133)rt_nil_check(F->i_1082))), 93), (*(P115)rt_nil_check(F->t_382)).elem_, (*(P115)rt_nil_check(F->t_382)).elemcons_);
f_emit_201(F->up, rt_str("}", 1));
}
} else if (((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_record_81)) {
F->f_1083 = (*(P115)rt_nil_check(F->t_382)).fields_;
while ((F->f_1083 != NULL)) {
f_init_storage_384(F->up, rt_str_cat(rt_str_catc(F->lval_381, 46), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1083)).name_)))), (*(P1034)rt_nil_check(F->f_1083)).t_, (*(P1034)rt_nil_check(F->f_1083)).c_);
F->f_1083 = (*(P1034)rt_nil_check(F->f_1083)).next_;
}
L_end_1084: ;
}
ret_:

  return;
}

static int f_composite_386(struct f_greenc_1fr *up_, P115 t_385) {
  struct f_composite_386fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_385 = t_385;
F->result_ = (((*(P115)rt_nil_check(F->t_385)).kind_ == F->up->t_array_80) || ((*(P115)rt_nil_check(F->t_385)).kind_ == F->up->t_record_81));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_392(struct f_greenc_1fr *up_, rstr lval_387, P115 t_388, rstr v_389, P163 c_390, P133 *r_391) {
  struct f_assign_code_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_387 = rt_str_copy(lval_387);
F->t_388 = t_388;
F->v_389 = rt_str_copy(v_389);
F->c_390 = c_390;
F->r_391 = r_391;
F->ct_1085 = NULL;
if (f_composite_386(F->up, F->t_388)) {
f_ctype_357(F->up, F->t_388, &F->ct_1085);
(*F->r_391) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_388)).cname_))), rt_str("(&", 2)), F->lval_387), rt_str(", ", 2)), F->v_389), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_388)).kind_ == F->up->t_string_79)) {
(*F->r_391) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), F->lval_387), rt_str(", ", 2)), F->v_389), rt_str(");", 2)));
} else if (((((((*(P115)rt_nil_check(F->t_388)).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check(F->t_388)).kind_ == F->up->t_enum_78)) || ((*(P115)rt_nil_check(F->t_388)).kind_ == F->up->t_char_85)) && (F->c_390 != NULL)) && ((*(P163)rt_nil_check(F->c_390)).lo_ != NULL))) {
(*F->r_391) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_387, rt_str(" = rt_range(", 12)), F->v_389), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_390)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_390)).hi_))), rt_str(");", 2)));
} else {
(*F->r_391) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_387, rt_str(" = ", 3)), F->v_389), 59));
}
ret_:

  return;
}

static void f_copy_code_396(struct f_greenc_1fr *up_, P115 t_393, rstr v_394, P133 *r_395) {
  struct f_copy_code_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_393 = t_393;
F->v_394 = rt_str_copy(v_394);
F->r_395 = r_395;
F->ct_1086 = NULL;
if (f_composite_386(F->up, F->t_393)) {
f_ctype_357(F->up, F->t_393, &F->ct_1086);
(*F->r_395) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("cp_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_393)).cname_))), 40), F->v_394), 41));
} else if (((*(P115)rt_nil_check(F->t_393)).kind_ == F->up->t_string_79)) {
(*F->r_395) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_copy(", 12), F->v_394), 41));
} else {
(*F->r_395) = f_mk_178(F->up, F->v_394);
}
ret_:

  return;
}

static void f_eq_code_401(struct f_greenc_1fr *up_, P115 t_397, rstr a_398, rstr b_399, P133 *r_400) {
  struct f_eq_code_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_397 = t_397;
F->a_398 = rt_str_copy(a_398);
F->b_399 = rt_str_copy(b_399);
F->r_400 = r_400;
F->ct_1087 = NULL;
if (f_composite_386(F->up, F->t_397)) {
f_ctype_357(F->up, F->t_397, &F->ct_1087);
(*F->r_400) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("eq_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_397)).cname_))), 40), F->a_398), rt_str(", ", 2)), F->b_399), 41));
} else if (((*(P115)rt_nil_check(F->t_397)).kind_ == F->up->t_string_79)) {
(*F->r_400) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_398), rt_str(", ", 2)), F->b_399), 41));
} else {
(*F->r_400) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_398), rt_str(" == ", 4)), F->b_399), 41));
}
ret_:

  return;
}

static int f_seen_name_404(struct f_greenc_1fr *up_, P140 l_402, rstr s_403) {
  struct f_seen_name_404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_402 = l_402;
F->s_403 = rt_str_copy(s_403);
F->p_1088 = NULL;
F->p_1088 = F->l_402;
while ((F->p_1088 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P140)rt_nil_check(F->p_1088)).s_)), F->s_403)) {
F->result_ = 1;
goto ret_;
}
F->p_1088 = (*(P140)rt_nil_check(F->p_1088)).next_;
}
L_end_1089: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_405(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1090 = NULL;
F->t_1090 = F->up->all_types_117;
F->done_1091 = NULL;
F->l_1092 = NULL;
while ((F->t_1090 != NULL)) {
if ((f_composite_386(F->up, F->t_1090) && (!f_seen_name_404(F->up, F->done_1091, (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_)))))) {
F->l_1092 = ({ R141 *cell1094 = rt_alloc(sizeof(R141)); *cell1094 = cp_R141(({ R141 ag1095; ag1095.s_ = (*(P115)rt_nil_check(F->t_1090)).cname_; ag1095.next_ = F->done_1091; ag1095; })); (P140)cell1094; });
F->done_1091 = F->l_1092;
f_put_to_199(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), rt_str(" s);", 4)));
f_put_to_199(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), rt_str(" cp_", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), rt_str(" s);", 4)));
f_put_to_199(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), rt_str(" a, ", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1090)).cname_))), rt_str(" b);", 4)));
f_helper_bodies_407(F->up, F->t_1090);
}
F->t_1090 = (*(P115)rt_nil_check(F->t_1090)).next_;
}
L_end_1093: ;
ret_:

  return;
}

static void f_helper_bodies_407(struct f_greenc_1fr *up_, P115 t_406) {
  struct f_helper_bodies_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_406 = t_406;
F->c_1096 = NULL;
F->c_1096 = (*(P115)rt_nil_check(F->t_406)).cname_;
F->b_1097 = NULL;
F->b_1097 = F->up->out_funcs_126;
F->ct_1098 = NULL;
F->x_1099 = NULL;
F->y_1100 = NULL;
F->conds_1101 = NULL;
F->f_1102 = NULL;
if (((*(P115)rt_nil_check(F->t_406)).kind_ == F->up->t_array_80)) {
f_ctype_357(F->up, (*(P115)rt_nil_check(F->t_406)).elem_, &F->ct_1098);
f_assign_code_392(F->up, rt_str("d->p[i]", 7), (*(P115)rt_nil_check(F->t_406)).elem_, rt_str("s.p[i]", 6), NULL, &F->x_1099);
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1096))), 40), (*(P133)rt_nil_check(F->c_1096))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1096))), rt_str(" s) {", 5)));
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_192(F->up)), rt_str("array length", 12)), f_q_192(F->up)), rt_str(");", 2)));
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), (*(P133)rt_nil_check(F->x_1099))), rt_str(" }", 2)));
f_put_to_199(F->up, F->b_1097, rt_str("}", 1));
f_copy_code_396(F->up, (*(P115)rt_nil_check(F->t_406)).elem_, rt_str("s.p[i]", 6), &F->x_1099);
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1096))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1096))), 40), (*(P133)rt_nil_check(F->c_1096))), rt_str(" s) {", 5)));
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1096))), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P133)rt_nil_check(F->ct_1098))), rt_str(") * (size_t)RT_CNT(s));", 23)));
f_put_to_199(F->up, F->b_1097, rt_str_catc(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), (*(P133)rt_nil_check(F->x_1099))), 59));
f_put_to_199(F->up, F->b_1097, rt_str("  return d;", 11));
f_put_to_199(F->up, F->b_1097, rt_str("}", 1));
f_eq_code_401(F->up, (*(P115)rt_nil_check(F->t_406)).elem_, rt_str("a.p[i]", 6), rt_str("b.p[i]", 6), &F->x_1099);
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1096))), 40), (*(P133)rt_nil_check(F->c_1096))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1096))), rt_str(" b) {", 5)));
f_put_to_199(F->up, F->b_1097, rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43));
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), (*(P133)rt_nil_check(F->x_1099))), rt_str(")) return 0;", 12)));
f_put_to_199(F->up, F->b_1097, rt_str("  return 1;", 11));
f_put_to_199(F->up, F->b_1097, rt_str("}", 1));
} else {
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1096))), 40), (*(P133)rt_nil_check(F->c_1096))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1096))), rt_str(" s) {", 5)));
F->f_1102 = (*(P115)rt_nil_check(F->t_406)).fields_;
while ((F->f_1102 != NULL)) {
f_assign_code_392(F->up, rt_str_cat(rt_str("d->", 3), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1102)).name_)))), (*(P1034)rt_nil_check(F->f_1102)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1102)).name_)))), NULL, &F->x_1099);
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->x_1099))));
F->f_1102 = (*(P1034)rt_nil_check(F->f_1102)).next_;
}
L_end_1103: ;
f_put_to_199(F->up, F->b_1097, rt_str("}", 1));
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1096))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1096))), 40), (*(P133)rt_nil_check(F->c_1096))), rt_str(" s) {", 5)));
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1096))), rt_str(" d = s;", 7)));
F->conds_1101 = f_mk_178(F->up, rt_str("1", 1));
F->f_1102 = (*(P115)rt_nil_check(F->t_406)).fields_;
while ((F->f_1102 != NULL)) {
f_copy_code_396(F->up, (*(P1034)rt_nil_check(F->f_1102)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1102)).name_)))), &F->x_1099);
f_put_to_199(F->up, F->b_1097, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1102)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1099))), 59));
f_eq_code_401(F->up, (*(P1034)rt_nil_check(F->f_1102)).t_, rt_str_cat(rt_str("a.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1102)).name_)))), rt_str_cat(rt_str("b.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1102)).name_)))), &F->y_1100);
F->conds_1101 = f_mk_178(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1101)), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->y_1100))));
F->f_1102 = (*(P1034)rt_nil_check(F->f_1102)).next_;
}
L_end_1104: ;
f_put_to_199(F->up, F->b_1097, rt_str("  return d;", 11));
f_put_to_199(F->up, F->b_1097, rt_str("}", 1));
f_put_to_199(F->up, F->b_1097, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1096))), 40), (*(P133)rt_nil_check(F->c_1096))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1096))), rt_str(" b) {", 5)));
f_put_to_199(F->up, F->b_1097, rt_str_catc(rt_str_cat(rt_str("  return ", 9), (*(P133)rt_nil_check(F->conds_1101))), 59));
f_put_to_199(F->up, F->b_1097, rt_str("}", 1));
}
ret_:

  return;
}

static void f_storage_411(struct f_greenc_1fr *up_, rstr name_408, P115 t_409, P133 *access_code_410) {
  struct f_storage_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_408 = rt_str_copy(name_408);
F->t_409 = t_409;
F->access_code_410 = access_code_410;
F->ct_1105 = NULL;
F->g_1106 = NULL;
f_ctype_357(F->up, F->t_409, &F->ct_1105);
if ((!F->up->in_func_131)) {
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("g_", 2), f_lower_s_189(F->up, F->name_408)), 95), &F->g_1106);
f_put_to_199(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1105))), 32), (*(P133)rt_nil_check(F->g_1106))), 59));
F->up->st_field_134 = F->g_1106;
(*F->access_code_410) = F->g_1106;
} else {
f_new_name_181(F->up, rt_str_catc(f_lower_s_189(F->up, F->name_408), 95), &F->g_1106);
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1105))), 32), (*(P133)rt_nil_check(F->g_1106))), 59));
F->up->st_field_134 = F->g_1106;
(*F->access_code_410) = f_mk_178(F->up, rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check(F->g_1106))));
}
ret_:

  return;
}

static void f_bind_414(struct f_greenc_1fr *up_, P110 y_412, P133 access_code_413) {
  struct f_bind_414fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_412 = y_412;
F->access_code_413 = access_code_413;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_412)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->y_412)).access_path_ = F->up->st_field_134;
} else {
(*(P110)rt_nil_check(F->y_412)).level_ = ((rt_int)0LL);
(*(P110)rt_nil_check(F->y_412)).access_path_ = F->access_code_413;
}
ret_:

  return;
}

static void f_declare_subprograms_416(struct f_greenc_1fr *up_, P159 from_415) {
  struct f_declare_subprograms_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_415 = from_415;
F->e_1107 = NULL;
F->e_1107 = F->from_415;
while ((F->e_1107 != NULL)) {
if (((((*(P159)rt_nil_check(F->e_1107)).kind_ == F->up->n_proc_46) || ((*(P159)rt_nil_check(F->e_1107)).kind_ == F->up->n_func_47)) && ((*(P159)rt_nil_check(F->e_1107)).ival_ == ((rt_int)0LL)))) {
f_declare_one_418(F->up, F->e_1107);
}
F->e_1107 = (*(P159)rt_nil_check(F->e_1107)).next_;
}
L_end_1108: ;
ret_:

  return;
}

static void f_declare_one_418(struct f_greenc_1fr *up_, P159 e_417) {
  struct f_declare_one_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_417 = e_417;
F->y_1109 = NULL;
F->z_1110 = NULL;
if (f_is_generic_name_763(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_417)).name_)))) {
goto ret_;
}
f_build_subprogram_421(F->up, F->e_417, &F->y_1109);
F->z_1110 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1109)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1110 != NULL)) {
if (((((((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1110)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1109)).name_))) && (((*(P110)rt_nil_check(F->z_1110)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->z_1110)).kind_ == F->up->y_proc_93))) && ((*(P110)rt_nil_check(F->z_1110)).decl_ != NULL)) && ((*(P159)rt_nil_check((*(P110)rt_nil_check(F->z_1110)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->z_1110)).depth_ == F->up->depth_113)) && f_same_signature_335(F->up, (*(P110)rt_nil_check(F->z_1110)).params_, (*(P110)rt_nil_check(F->y_1109)).params_)) && f_same_332(F->up, (*(P110)rt_nil_check(F->z_1110)).result_, (*(P110)rt_nil_check(F->y_1109)).result_))) {
(*(P110)rt_nil_check(F->z_1110)).decl_ = F->e_417;
goto ret_;
}
F->z_1110 = (*(P110)rt_nil_check(F->z_1110)).chain_;
}
L_end_1111: ;
f_define_338(F->up, F->y_1109, (*(P159)rt_nil_check(F->e_417)).line_);
ret_:

  return;
}

static void f_build_subprogram_421(struct f_greenc_1fr *up_, P159 d_419, P110 *y_420) {
  struct f_build_subprogram_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_419 = d_419;
F->y_420 = y_420;
F->p_1112 = NULL;
F->p_1112 = (*(P159)rt_nil_check(F->d_419)).a_;
F->pm_1113 = NULL;
F->tail_1114 = NULL;
F->rc_1115 = NULL;
F->k_1116 = F->up->y_proc_93;
if (((*(P159)rt_nil_check(F->d_419)).kind_ == F->up->n_func_47)) {
F->k_1116 = F->up->y_func_92;
}
(*F->y_420) = f_new_sym_343(F->up, F->k_1116, (*(P159)rt_nil_check(F->d_419)).name_);
while ((F->p_1112 != NULL)) {
F->pm_1113 = ({ R1024 *cell1118 = rt_alloc(sizeof(R1024)); *cell1118 = cp_R1024(({ R1024 ag1119; ag1119.name_ = (*(P159)rt_nil_check(F->p_1112)).name_; ag1119.mode_ = (*(P159)rt_nil_check(F->p_1112)).ival_; ag1119.t_ = NULL; ag1119.c_ = NULL; ag1119.cfield_ = NULL; ag1119.dflt_ = (*(P159)rt_nil_check(F->p_1112)).b_; ag1119.next_ = NULL; ag1119; })); (P1023)cell1118; });
f_resolve_373(F->up, (*(P159)rt_nil_check(F->p_1112)).a_, &(*(P1023)rt_nil_check(F->pm_1113)).t_, &(*(P1023)rt_nil_check(F->pm_1113)).c_);
f_new_name_181(F->up, rt_str_catc(f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_1112)).name_))), 95), &(*(P1023)rt_nil_check(F->pm_1113)).cfield_);
if ((((*(P159)rt_nil_check(F->d_419)).kind_ == F->up->n_func_47) && ((*(P1023)rt_nil_check(F->pm_1113)).mode_ != F->up->m_in_72))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->p_1112)).line_, rt_str("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P159)rt_nil_check(F->d_419)).flag_ == ((rt_int)1LL)) && ((*(P1023)rt_nil_check(F->pm_1113)).mode_ != F->up->m_in_72))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->p_1112)).line_, rt_str("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1114 == NULL)) {
(*(P110)rt_nil_check((*F->y_420))).params_ = F->pm_1113;
} else {
(*(P1023)rt_nil_check(F->tail_1114)).next_ = F->pm_1113;
}
F->tail_1114 = F->pm_1113;
F->p_1112 = (*(P159)rt_nil_check(F->p_1112)).next_;
}
L_end_1117: ;
(*(P110)rt_nil_check((*F->y_420))).result_ = F->up->ty_void_150;
if (((*(P159)rt_nil_check(F->d_419)).b_ != NULL)) {
f_resolve_373(F->up, (*(P159)rt_nil_check(F->d_419)).b_, &(*(P110)rt_nil_check((*F->y_420))).result_, &F->rc_1115);
}
(*(P110)rt_nil_check((*F->y_420))).vrp_ = ((*(P159)rt_nil_check(F->d_419)).flag_ == ((rt_int)1LL));
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("f_", 2), f_c_ident_475(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->d_419)).name_)))), 95), &(*(P110)rt_nil_check((*F->y_420))).cname_);
(*(P110)rt_nil_check((*F->y_420))).decl_ = F->d_419;
(*(P110)rt_nil_check((*F->y_420))).level_ = F->up->cur_level_132;
ret_:

  return;
}

static void f_decl_elements_423(struct f_greenc_1fr *up_, P159 decls_422) {
  struct f_decl_elements_423fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_422 = decls_422;
F->e_1120 = NULL;
F->e_1120 = F->decls_422;
F->declared_1121 = 0;
while ((F->e_1120 != NULL)) {
if (((((*(P159)rt_nil_check(F->e_1120)).kind_ == F->up->n_proc_46) || ((*(P159)rt_nil_check(F->e_1120)).kind_ == F->up->n_func_47)) && (!F->declared_1121))) {
f_declare_subprograms_416(F->up, F->e_1120);
F->declared_1121 = 1;
}
f_decl_element_425(F->up, F->e_1120);
F->e_1120 = (*(P159)rt_nil_check(F->e_1120)).next_;
}
L_end_1122: ;
ret_:

  return;
}

static void f_decl_element_425(struct f_greenc_1fr *up_, P159 e_424) {
  struct f_decl_element_425fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_424 = e_424;
F->y_1123 = NULL;
F->t_1124 = NULL;
F->vt_1125 = NULL;
F->c_1126 = NULL;
F->acc_1127 = NULL;
F->v_1128 = NULL;
F->x_1129 = NULL;
{ rt_int sel1131 = (*(P159)rt_nil_check(F->e_424)).kind_;
if (0 || sel1131 == ((rt_int)42LL)) {
F->y_1123 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_424)).name_)));
if ((((((((F->y_1123 != NULL) && ((*(P110)rt_nil_check(F->y_1123)).kind_ == F->up->y_type_94)) && ((*(P110)rt_nil_check(F->y_1123)).depth_ == F->up->depth_113)) && ((*(P110)rt_nil_check(F->y_1123)).t_ != NULL)) && (*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1123)).t_)).priv_) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1123)).t_)).kind_ == F->up->t_void_83)) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_424)).a_)).kind_ != F->up->d_private_70))) {
f_type_definition_378(F->up, (*(P159)rt_nil_check(F->e_424)).a_, (*(P159)rt_nil_check(F->e_424)).name_, &F->t_1124, &F->c_1126);
f_complete_private_595(F->up, (*(P110)rt_nil_check(F->y_1123)).t_, F->t_1124);
(*(P110)rt_nil_check(F->y_1123)).c_ = F->c_1126;
} else {
F->y_1123 = f_new_sym_343(F->up, F->up->y_type_94, (*(P159)rt_nil_check(F->e_424)).name_);
(*(P110)rt_nil_check(F->y_1123)).decl_ = F->e_424;
f_define_338(F->up, F->y_1123, (*(P159)rt_nil_check(F->e_424)).line_);
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_424)).a_)).kind_ == F->up->d_private_70)) {
(*(P110)rt_nil_check(F->y_1123)).t_ = f_new_typ_345(F->up, F->up->t_void_83);
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1123)).t_)).name_ = (*(P159)rt_nil_check(F->e_424)).name_;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1123)).t_)).priv_ = 1;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1123)).t_)).decl_ = F->up->cur_pkg_168;
} else {
f_type_definition_378(F->up, (*(P159)rt_nil_check(F->e_424)).a_, (*(P159)rt_nil_check(F->e_424)).name_, &(*(P110)rt_nil_check(F->y_1123)).t_, &(*(P110)rt_nil_check(F->y_1123)).c_);
}
}
} else if (0 || sel1131 == ((rt_int)43LL)) {
F->y_1123 = f_new_sym_343(F->up, F->up->y_type_94, (*(P159)rt_nil_check(F->e_424)).name_);
f_resolve_373(F->up, (*(P159)rt_nil_check(F->e_424)).a_, &(*(P110)rt_nil_check(F->y_1123)).t_, &(*(P110)rt_nil_check(F->y_1123)).c_);
f_define_338(F->up, F->y_1123, (*(P159)rt_nil_check(F->e_424)).line_);
} else if (0 || sel1131 == ((rt_int)40LL)) {
f_resolve_373(F->up, (*(P159)rt_nil_check(F->e_424)).a_, &F->t_1124, &F->c_1126);
F->y_1123 = f_new_sym_343(F->up, F->up->y_var_90, (*(P159)rt_nil_check(F->e_424)).name_);
if (((((*(P115)rt_nil_check(F->t_1124)).kind_ == F->up->t_string_79) && ((*(P163)rt_nil_check(F->c_1126)).slen_ == NULL)) && ((*(P159)rt_nil_check(F->e_424)).b_ != NULL))) {
F->up->vrp_ok_173 = 1;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_424)).b_, F->t_1124, &F->vt_1125, &F->v_1128);
F->up->vrp_ok_173 = 0;
f_check_type_352(F->up, F->vt_1125, F->t_1124, (*(P159)rt_nil_check(F->e_424)).line_);
f_storage_411(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_424)).name_)), F->t_1124, &F->acc_1127);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1127)), rt_str(" = rt_str_copy(", 15)), (*(P133)rt_nil_check(F->v_1128))), rt_str(");", 2)));
} else {
f_storage_411(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_424)).name_)), F->t_1124, &F->acc_1127);
f_init_storage_384(F->up, (*(P133)rt_nil_check(F->acc_1127)), F->t_1124, F->c_1126);
if (((*(P159)rt_nil_check(F->e_424)).b_ != NULL)) {
F->up->vrp_ok_173 = 1;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_424)).b_, F->t_1124, &F->vt_1125, &F->v_1128);
F->up->vrp_ok_173 = 0;
f_check_type_352(F->up, F->vt_1125, F->t_1124, (*(P159)rt_nil_check(F->e_424)).line_);
f_assign_code_392(F->up, (*(P133)rt_nil_check(F->acc_1127)), F->t_1124, (*(P133)rt_nil_check(F->v_1128)), F->c_1126, &F->x_1129);
f_emit_201(F->up, (*(P133)rt_nil_check(F->x_1129)));
}
}
(*(P110)rt_nil_check(F->y_1123)).t_ = F->t_1124;
(*(P110)rt_nil_check(F->y_1123)).c_ = F->c_1126;
f_bind_414(F->up, F->y_1123, F->acc_1127);
f_define_338(F->up, F->y_1123, (*(P159)rt_nil_check(F->e_424)).line_);
} else if (0 || sel1131 == ((rt_int)41LL)) {
f_resolve_373(F->up, (*(P159)rt_nil_check(F->e_424)).a_, &F->t_1124, &F->c_1126);
F->y_1123 = f_new_sym_343(F->up, F->up->y_const_91, (*(P159)rt_nil_check(F->e_424)).name_);
F->up->vrp_ok_173 = 1;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_424)).b_, F->t_1124, &F->vt_1125, &F->v_1128);
F->up->vrp_ok_173 = 0;
f_check_type_352(F->up, F->vt_1125, F->t_1124, (*(P159)rt_nil_check(F->e_424)).line_);
if (((*(P115)rt_nil_check(F->t_1124)).kind_ == F->up->t_int_75)) {
f_manifest_369(F->up, (*(P159)rt_nil_check(F->e_424)).b_, &(*(P110)rt_nil_check(F->y_1123)).mvalue_, &F->ok_1130);
(*(P110)rt_nil_check(F->y_1123)).hasmv_ = F->ok_1130;
}
f_storage_411(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_424)).name_)), F->t_1124, &F->acc_1127);
f_copy_code_396(F->up, F->t_1124, (*(P133)rt_nil_check(F->v_1128)), &F->x_1129);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1127)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1129))), 59));
(*(P110)rt_nil_check(F->y_1123)).t_ = F->t_1124;
(*(P110)rt_nil_check(F->y_1123)).c_ = F->c_1126;
(*(P110)rt_nil_check(F->y_1123)).ro_ = 1;
f_bind_414(F->up, F->y_1123, F->acc_1127);
f_define_338(F->up, F->y_1123, (*(P159)rt_nil_check(F->e_424)).line_);
} else if (0 || sel1131 == ((rt_int)46LL)) {
F->y_1123 = f_new_sym_343(F->up, F->up->y_exc_95, (*(P159)rt_nil_check(F->e_424)).name_);
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("ex_", 3), f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_424)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1123)).cname_);
f_put_to_199(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str("static int ", 11), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1123)).cname_))), 59));
f_put_to_199(F->up, F->up->out_excs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1123)).cname_))), rt_str(" = rt_exc(", 10)), f_q_192(F->up)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_424)).name_))), f_q_192(F->up)), rt_str(");", 2)));
f_define_338(F->up, F->y_1123, (*(P159)rt_nil_check(F->e_424)).line_);
} else if (0 || sel1131 == ((rt_int)44LL) || sel1131 == ((rt_int)45LL)) {
if (f_is_generic_name_763(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_424)).name_)))) {
f_attach_generic_body_765(F->up, F->e_424);
} else if (((*(P159)rt_nil_check(F->e_424)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_421(F->up, F->e_424, &F->y_1123);
f_define_338(F->up, F->y_1123, (*(P159)rt_nil_check(F->e_424)).line_);
} else {
f_subprogram_body_430(F->up, F->e_424, f_lookup_decl_327(F->up, F->e_424));
}
} else if (0 || sel1131 == ((rt_int)55LL)) {
f_use_clause_604(F->up, F->e_424);
} else {
f_other_decl_427(F->up, F->e_424);
}
}
ret_:

  return;
}

static void f_other_decl_427(struct f_greenc_1fr *up_, P159 e_426) {
  struct f_other_decl_427fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_426 = e_426;
if (((*(P159)rt_nil_check(F->e_426)).kind_ == F->up->n_pkgspec_50)) {
f_package_spec_597(F->up, F->e_426);
} else if (((*(P159)rt_nil_check(F->e_426)).kind_ == F->up->n_pkgbody_51)) {
f_package_body_602(F->up, F->e_426);
} else {
f_task_decl_669(F->up, F->e_426);
}
ret_:

  return;
}

static void f_subprogram_body_430(struct f_greenc_1fr *up_, P159 d_428, P110 y_429) {
  struct f_subprogram_body_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_428 = d_428;
F->y_429 = y_429;
F->saved_code_1132 = NULL;
F->saved_code_1132 = F->up->code_129;
F->saved_fields_1133 = NULL;
F->saved_fields_1133 = F->up->fields_buf_130;
F->saved_in_1134 = F->up->in_func_131;
F->saved_sym_1135 = NULL;
F->saved_sym_1135 = F->up->func_sym_135;
F->saved_exits_1136 = NULL;
F->saved_exits_1136 = F->up->exits_138;
F->saved_frames_1137 = F->up->frames_139;
F->saved_handlers_1138 = NULL;
F->saved_handlers_1138 = F->up->handlers_142;
F->saved_cleanups_1139 = NULL;
F->saved_cleanups_1139 = F->up->cleanups_143;
F->saved_pure_1140 = NULL;
F->saved_pure_1140 = F->up->pure_sym_171;
F->aw_1141 = NULL;
F->saved_pdepth_1142 = F->up->pure_depth_172;
F->args_1143 = NULL;
F->head_1144 = NULL;
F->frame_1145 = NULL;
F->parent_1146 = NULL;
F->ct_1147 = NULL;
F->x_1148 = NULL;
F->pm_1149 = NULL;
F->pm_1149 = (*(P110)rt_nil_check(F->y_429)).params_;
F->p_1150 = NULL;
F->frame_1145 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_429)).cname_)), rt_str("fr", 2)));
if (F->up->in_func_131) {
F->parent_1146 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).cname_)), rt_str("fr", 2)));
}
F->up->code_129 = f_new_buffer_196(F->up);
F->up->fields_buf_130 = f_new_buffer_196(F->up);
F->up->in_func_131 = 1;
F->up->func_sym_135 = F->y_429;
F->up->exits_138 = NULL;
F->up->frames_139 = ((rt_int)0LL);
F->up->handlers_142 = NULL;
F->up->cleanups_143 = NULL;
F->up->cur_level_132 = rt_add(F->up->cur_level_132, ((rt_int)1LL));
F->args_1143 = f_mk_178(F->up, rt_str("", 0));
f_open_scope_339(F->up);
if ((((*(P110)rt_nil_check(F->y_429)).kind_ == F->up->y_func_92) && (!(*(P110)rt_nil_check(F->y_429)).vrp_))) {
F->up->pure_sym_171 = F->y_429;
F->up->pure_depth_172 = F->up->depth_113;
}
if ((F->parent_1146 != NULL)) {
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P133)rt_nil_check(F->parent_1146))), rt_str(" *up;", 5)));
F->args_1143 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->parent_1146))), rt_str(" *up_", 5)));
f_emit_201(F->up, rt_str("F->up = up_;", 12));
}
while ((F->pm_1149 != NULL)) {
f_ctype_357(F->up, (*(P1023)rt_nil_check(F->pm_1149)).t_, &F->ct_1147);
if ((((*(P133)rt_nil_check(F->args_1143))).len > ((rt_int)0LL))) {
F->args_1143 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1143)), rt_str(", ", 2)));
}
if (((*(P1023)rt_nil_check(F->pm_1149)).mode_ == F->up->m_in_72)) {
F->p_1150 = f_new_sym_343(F->up, F->up->y_const_91, (*(P1023)rt_nil_check(F->pm_1149)).name_);
(*(P110)rt_nil_check(F->p_1150)).ro_ = 1;
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1147))), 32), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_))), 59));
F->args_1143 = f_mk_178(F->up, rt_str_cat(rt_str_catc(rt_str_cat((*(P133)rt_nil_check(F->args_1143)), (*(P133)rt_nil_check(F->ct_1147))), 32), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_))));
f_copy_code_396(F->up, (*(P1023)rt_nil_check(F->pm_1149)).t_, (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_)), &F->x_1148);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1148))), 59));
} else {
F->p_1150 = f_new_sym_343(F->up, F->up->y_var_90, (*(P1023)rt_nil_check(F->pm_1149)).name_);
(*(P110)rt_nil_check(F->p_1150)).byref_ = 1;
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1147))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_))), 59));
F->args_1143 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->args_1143)), (*(P133)rt_nil_check(F->ct_1147))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_))));
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1149)).cfield_))), 59));
}
(*(P110)rt_nil_check(F->p_1150)).access_path_ = (*(P1023)rt_nil_check(F->pm_1149)).cfield_;
(*(P110)rt_nil_check(F->p_1150)).t_ = (*(P1023)rt_nil_check(F->pm_1149)).t_;
(*(P110)rt_nil_check(F->p_1150)).c_ = (*(P1023)rt_nil_check(F->pm_1149)).c_;
(*(P110)rt_nil_check(F->p_1150)).level_ = F->up->cur_level_132;
f_define_338(F->up, F->p_1150, (*(P159)rt_nil_check(F->d_428)).line_);
F->pm_1149 = (*(P1023)rt_nil_check(F->pm_1149)).next_;
}
L_end_1151: ;
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_429)).result_)).kind_ != F->up->t_void_83)) {
f_ctype_357(F->up, (*(P110)rt_nil_check(F->y_429)).result_, &F->ct_1147);
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1147))), rt_str(" result_;", 9)));
}
f_decl_elements_423(F->up, (*(P159)rt_nil_check(F->d_428)).c_);
f_guarded_441(F->up, (*(P159)rt_nil_check(F->d_428)).d_, (*(P159)rt_nil_check(F->d_428)).e_, (*(P159)rt_nil_check(F->d_428)).line_);
f_task_awaits_688(F->up, (*(P159)rt_nil_check(F->d_428)).c_, &F->aw_1141);
f_close_scope_340(F->up);
F->up->cur_level_132 = rt_sub(F->up->cur_level_132, ((rt_int)1LL));
if ((((*(P133)rt_nil_check(F->args_1143))).len == ((rt_int)0LL))) {
F->args_1143 = f_mk_178(F->up, rt_str("void", 4));
}
f_ctype_357(F->up, (*(P110)rt_nil_check(F->y_429)).result_, &F->ct_1147);
F->head_1144 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1147))), 32), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_429)).cname_))), 40), (*(P133)rt_nil_check(F->args_1143))), 41));
f_put_to_199(F->up, F->up->out_protos_124, rt_str_catc((*(P133)rt_nil_check(F->head_1144)), 59));
f_put_to_199(F->up, F->up->out_frames_122, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->frame_1145))), rt_str(" { int dummy;", 13)));
f_splice_206(F->up, F->up->out_frames_122, F->up->fields_buf_130);
f_put_to_199(F->up, F->up->out_frames_122, rt_str("};", 2));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat((*(P133)rt_nil_check(F->head_1144)), rt_str(" {", 2)));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P133)rt_nil_check(F->frame_1145))), rt_str(" *F = rt_alloc(sizeof *F);", 26)));
f_splice_206(F->up, F->up->out_funcs_126, F->up->code_129);
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_429)).result_)).kind_ != F->up->t_void_83)) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("  rt_raise(RT_X_INIT);", 22));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_199(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1141)));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("  return F->result_;", 20));
} else {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_199(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1141)));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("  return;", 9));
}
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("}", 1));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("", 0));
F->up->code_129 = F->saved_code_1132;
F->up->fields_buf_130 = F->saved_fields_1133;
F->up->in_func_131 = F->saved_in_1134;
F->up->func_sym_135 = F->saved_sym_1135;
F->up->exits_138 = F->saved_exits_1136;
F->up->frames_139 = F->saved_frames_1137;
F->up->handlers_142 = F->saved_handlers_1138;
F->up->cleanups_143 = F->saved_cleanups_1139;
F->up->pure_sym_171 = F->saved_pure_1140;
F->up->pure_depth_172 = F->saved_pdepth_1142;
ret_:

  return;
}

static void f_gen_statements_432(struct f_greenc_1fr *up_, P159 stmts_431) {
  struct f_gen_statements_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_431 = stmts_431;
F->s_1152 = NULL;
F->s_1152 = F->stmts_431;
while ((F->s_1152 != NULL)) {
f_gen_statement_447(F->up, F->s_1152);
F->s_1152 = (*(P159)rt_nil_check(F->s_1152)).next_;
}
L_end_1153: ;
ret_:

  return;
}

static void f_pop_frames_434(struct f_greenc_1fr *up_, rt_int upto_433) {
  struct f_pop_frames_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_433 = upto_433;
F->i_1154 = F->up->frames_139;
F->c_1155 = NULL;
F->c_1155 = F->up->cleanups_143;
while ((F->i_1154 > F->upto_433)) {
f_emit_201(F->up, (*(P133)rt_nil_check((*(P140)rt_nil_check(F->c_1155)).s_)));
F->c_1155 = (*(P140)rt_nil_check(F->c_1155)).next_;
F->i_1154 = rt_sub(F->i_1154, ((rt_int)1LL));
}
L_end_1156: ;
ret_:

  return;
}

static void f_push_cleanup_436(struct f_greenc_1fr *up_, rstr s_435) {
  struct f_push_cleanup_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_435 = rt_str_copy(s_435);
F->up->cleanups_143 = ({ R141 *cell1157 = rt_alloc(sizeof(R141)); *cell1157 = cp_R141(({ R141 ag1158; ag1158.s_ = NULL; ag1158.next_ = F->up->cleanups_143; ag1158; })); (P140)cell1157; });
(*(P140)rt_nil_check(F->up->cleanups_143)).s_ = f_mk_178(F->up, F->s_435);
F->up->frames_139 = rt_add(F->up->frames_139, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_437(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_437fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_143 = (*(P140)rt_nil_check(F->up->cleanups_143)).next_;
F->up->frames_139 = rt_sub(F->up->frames_139, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_441(struct f_greenc_1fr *up_, P159 stmts_438, P159 hs_439, rt_int line_440) {
  struct f_guarded_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_438 = stmts_438;
F->hs_439 = hs_439;
F->line_440 = line_440;
F->f_1159 = NULL;
F->x_1160 = NULL;
F->h_1161 = NULL;
F->n_1162 = NULL;
F->first_1163 = 1;
F->has_others_1164 = 0;
F->conds_1165 = NULL;
if ((F->hs_439 == NULL)) {
f_gen_statements_432(F->up, F->stmts_438);
goto ret_;
}
f_new_name_181(F->up, rt_str("xf", 2), &F->f_1159);
f_new_name_181(F->up, rt_str("x", 1), &F->x_1160);
f_push_cleanup_436(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1159))), rt_str(");", 2)));
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("{ rt_frame ", 11), (*(P133)rt_nil_check(F->f_1159))), 59));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->f_1159))), rt_str(")) {", 4)));
f_gen_statements_432(F->up, F->stmts_438);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1159))), rt_str(");", 2)));
f_emit_201(F->up, rt_str("} else {", 8));
f_pop_cleanup_437(F->up);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1159))), rt_str(");", 2)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->x_1160))), rt_str(" = rt_xcur;", 11)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (rt_g_aborted()) rt_raise(", 29), (*(P133)rt_nil_check(F->x_1160))), rt_str(");", 2)));
F->up->handlers_142 = ({ R141 *cell1166 = rt_alloc(sizeof(R141)); *cell1166 = cp_R141(({ R141 ag1167; ag1167.s_ = F->x_1160; ag1167.next_ = F->up->handlers_142; ag1167; })); (P140)cell1166; });
F->h_1161 = F->hs_439;
while ((F->h_1161 != NULL)) {
F->n_1162 = (*(P159)rt_nil_check(F->h_1161)).a_;
F->conds_1165 = f_mk_178(F->up, rt_str("0", 1));
while ((F->n_1162 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1162)).name_)), rt_str("OTHERS", 6))) {
F->has_others_1164 = 1;
F->conds_1165 = f_mk_178(F->up, rt_str("1", 1));
} else {
F->up->prefix_hint_169 = (*(P159)rt_nil_check(F->n_1162)).tag_;
f_exc_id_445(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1162)).name_)), (*(P159)rt_nil_check(F->h_1161)).line_, &F->f_1159);
F->conds_1165 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1165)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->x_1160))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->f_1159))));
}
F->n_1162 = (*(P159)rt_nil_check(F->n_1162)).next_;
}
L_end_1169: ;
if (F->first_1163) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1165))), rt_str(") {", 3)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1165))), rt_str(") {", 3)));
}
F->first_1163 = 0;
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->h_1161)).b_);
F->h_1161 = (*(P159)rt_nil_check(F->h_1161)).next_;
}
L_end_1168: ;
if ((!F->has_others_1164)) {
f_emit_201(F->up, rt_str("} else {", 8));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1160))), rt_str(");", 2)));
}
f_emit_201(F->up, rt_str("}", 1));
F->up->handlers_142 = (*(P140)rt_nil_check(F->up->handlers_142)).next_;
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_exc_id_445(struct f_greenc_1fr *up_, rstr name_442, rt_int line_443, P133 *r_444) {
  struct f_exc_id_445fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_442 = rt_str_copy(name_442);
F->line_443 = line_443;
F->r_444 = r_444;
F->y_1170 = NULL;
F->y_1170 = f_lookup_319(F->up, F->name_442);
if ((F->up->prefix_hint_169 != NULL)) {
F->y_1170 = f_member_of_587(F->up, (*(P133)rt_nil_check(F->up->prefix_hint_169)), F->name_442, F->line_443);
F->up->prefix_hint_169 = NULL;
}
if (((F->y_1170 == NULL) || ((*(P110)rt_nil_check(F->y_1170)).kind_ != F->up->y_exc_95))) {
f_fail_195(F->up, F->line_443, rt_str_cat(F->name_442, rt_str(" is not an exception", 20)));
}
(*F->r_444) = (*(P110)rt_nil_check(F->y_1170)).cname_;
ret_:

  return;
}

static void f_gen_statement_447(struct f_greenc_1fr *up_, P159 s_446) {
  struct f_gen_statement_447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_446 = s_446;
F->t_1171 = NULL;
F->vt_1172 = NULL;
F->c_1173 = NULL;
F->lv_1174 = NULL;
F->v_1175 = NULL;
F->x_1176 = NULL;
{ rt_int sel1178 = (*(P159)rt_nil_check(F->s_446)).kind_;
if (0 || sel1178 == ((rt_int)20LL)) {
if (((((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_446)).a_)).kind_ == F->up->n_apply_16) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_446)).a_)).b_ != NULL)) && ((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_446)).a_)).b_)).kind_ == F->up->n_range_22))) {
f_slice_assign_449(F->up, F->s_446);
goto ret_;
}
F->up->in_lv_path_174 = 1;
F->up->last_deref_175 = 0;
f_lvalue_487(F->up, (*(P159)rt_nil_check(F->s_446)).a_, &F->lv_1174, &F->t_1171, &F->c_1173, &F->ro_1177);
F->up->in_lv_path_174 = 0;
if (F->ro_1177) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_446)).line_, rt_str("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_737(F->up, (*(P159)rt_nil_check(F->s_446)).a_, (*(P159)rt_nil_check(F->s_446)).line_);
F->up->vrp_ok_173 = 1;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_446)).b_, F->t_1171, &F->vt_1172, &F->v_1175);
F->up->vrp_ok_173 = 0;
f_check_type_352(F->up, F->vt_1172, F->t_1171, (*(P159)rt_nil_check(F->s_446)).line_);
f_assign_code_392(F->up, (*(P133)rt_nil_check(F->lv_1174)), F->t_1171, (*(P133)rt_nil_check(F->v_1175)), F->c_1173, &F->x_1176);
f_emit_201(F->up, (*(P133)rt_nil_check(F->x_1176)));
} else if (0 || sel1178 == ((rt_int)21LL)) {
F->up->vrp_ok_173 = 1;
f_gen_call_451(F->up, F->s_446);
F->up->vrp_ok_173 = 0;
} else if (0 || sel1178 == ((rt_int)22LL)) {
f_gen_if_453(F->up, F->s_446);
} else if (0 || sel1178 == ((rt_int)23LL)) {
f_gen_case_455(F->up, F->s_446);
} else if (0 || sel1178 == ((rt_int)24LL)) {
f_gen_loop_461(F->up, F->s_446);
} else if (0 || sel1178 == ((rt_int)25LL)) {
f_gen_block_463(F->up, F->s_446);
} else if (0 || sel1178 == ((rt_int)26LL)) {
f_gen_exit_465(F->up, F->s_446);
} else if (0 || sel1178 == ((rt_int)27LL)) {
f_gen_return_467(F->up, F->s_446);
} else if (0 || sel1178 == ((rt_int)28LL)) {
if (((((*(P159)rt_nil_check(F->s_446)).tag_ != NULL) && f_is_task_name_642(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_446)).tag_)))) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_446)).name_)), rt_str("FAILURE", 7)))) {
f_task_failure_690(F->up, F->s_446);
} else {
F->up->prefix_hint_169 = (*(P159)rt_nil_check(F->s_446)).tag_;
f_exc_id_445(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_446)).name_)), (*(P159)rt_nil_check(F->s_446)).line_, &F->x_1176);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1176))), rt_str(");", 2)));
}
} else if (0 || sel1178 == ((rt_int)29LL)) {
if ((F->up->handlers_142 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_446)).line_, rt_str("raise; outside an exception handler", 35));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check((*(P140)rt_nil_check(F->up->handlers_142)).s_))), rt_str(");", 2)));
} else if (0 || sel1178 == ((rt_int)30LL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_446)).a_, F->up->ty_bool_146, &F->vt_1172, &F->v_1175);
f_check_type_352(F->up, F->vt_1172, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_446)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (!(", 6), (*(P133)rt_nil_check(F->v_1175))), rt_str(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1178 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_732(F->up, F->s_446);
}
}
ret_:

  return;
}

static void f_slice_assign_449(struct f_greenc_1fr *up_, P159 s_448) {
  struct f_slice_assign_449fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_448 = s_448;
F->lv_1179 = NULL;
F->lo_1180 = NULL;
F->hi_1181 = NULL;
F->v_1182 = NULL;
F->t_1183 = NULL;
F->vt_1184 = NULL;
F->c_1185 = NULL;
F->up->in_lv_path_174 = 1;
F->up->last_deref_175 = 0;
f_lvalue_487(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_448)).a_)).a_, &F->lv_1179, &F->t_1183, &F->c_1185, &F->ro_1186);
F->up->in_lv_path_174 = 0;
if ((F->ro_1186 || ((*(P115)rt_nil_check(F->t_1183)).kind_ != F->up->t_string_79))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_448)).line_, rt_str("assignment to a slice needs a STRING variable", 45));
}
f_check_pure_target_737(F->up, (*(P159)rt_nil_check(F->s_448)).a_, (*(P159)rt_nil_check(F->s_448)).line_);
f_gexpr_515(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_448)).a_)).b_)).a_, F->up->ty_int_145, &F->vt_1184, &F->lo_1180);
f_gexpr_515(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_448)).a_)).b_)).b_, F->up->ty_int_145, &F->vt_1184, &F->hi_1181);
F->up->vrp_ok_173 = 1;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_448)).b_, F->up->ty_string_149, &F->vt_1184, &F->v_1182);
F->up->vrp_ok_173 = 0;
f_check_type_352(F->up, F->vt_1184, F->up->ty_string_149, (*(P159)rt_nil_check(F->s_448)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P133)rt_nil_check(F->lv_1179))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1180))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1181))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->v_1182))), rt_str(");", 2)));
ret_:

  return;
}

static void f_gen_call_451(struct f_greenc_1fr *up_, P159 s_450) {
  struct f_gen_call_451fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_450 = s_450;
F->c_1187 = NULL;
F->c_1187 = (*(P159)rt_nil_check(F->s_450)).a_;
F->t_1188 = NULL;
F->v_1189 = NULL;
if ((((*(P159)rt_nil_check(F->c_1187)).kind_ == F->up->n_name_13) || ((*(P159)rt_nil_check(F->c_1187)).kind_ == F->up->n_select_17))) {
F->c_1187 = f_nn_220(F->up, F->up->n_apply_16, (*(P159)rt_nil_check(F->s_450)).line_);
(*(P159)rt_nil_check(F->c_1187)).a_ = (*(P159)rt_nil_check(F->s_450)).a_;
}
if (((*(P159)rt_nil_check(F->c_1187)).kind_ != F->up->n_apply_16)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_450)).line_, rt_str("not a procedure call", 20));
}
f_gcall_569(F->up, F->c_1187, 1, &F->t_1188, &F->v_1189);
f_emit_201(F->up, rt_str_catc((*(P133)rt_nil_check(F->v_1189)), 59));
ret_:

  return;
}

static void f_gen_if_453(struct f_greenc_1fr *up_, P159 s_452) {
  struct f_gen_if_453fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_452 = s_452;
F->a_1190 = NULL;
F->a_1190 = (*(P159)rt_nil_check(F->s_452)).a_;
F->first_1191 = 1;
F->t_1192 = NULL;
F->v_1193 = NULL;
while ((F->a_1190 != NULL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->a_1190)).a_, F->up->ty_bool_146, &F->t_1192, &F->v_1193);
f_check_type_352(F->up, F->t_1192, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_452)).line_);
if (F->first_1191) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1193))), rt_str(") {", 3)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->v_1193))), rt_str(") {", 3)));
}
F->first_1191 = 0;
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->a_1190)).b_);
F->a_1190 = (*(P159)rt_nil_check(F->a_1190)).next_;
}
L_end_1194: ;
if (((*(P159)rt_nil_check(F->s_452)).flag_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str("} else {", 8));
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->s_452)).b_);
}
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_gen_case_455(struct f_greenc_1fr *up_, P159 s_454) {
  struct f_gen_case_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_454 = s_454;
F->st_1195 = NULL;
F->vt_1196 = NULL;
F->first_1197 = 1;
F->a_1198 = NULL;
F->a_1198 = (*(P159)rt_nil_check(F->s_454)).b_;
F->lab_1199 = NULL;
F->sel_1200 = NULL;
F->tmp_1201 = NULL;
F->ct_1202 = NULL;
F->conds_1203 = NULL;
F->v_1204 = NULL;
F->lo_1205 = NULL;
F->hi_1206 = NULL;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_454)).a_, NULL, &F->st_1195, &F->sel_1200);
f_new_name_181(F->up, rt_str("sel", 3), &F->tmp_1201);
f_ctype_357(F->up, F->st_1195, &F->ct_1202);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ ", 2), (*(P133)rt_nil_check(F->ct_1202))), 32), (*(P133)rt_nil_check(F->tmp_1201))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->sel_1200))), 59));
while ((F->a_1198 != NULL)) {
F->lab_1199 = (*(P159)rt_nil_check(F->a_1198)).a_;
F->conds_1203 = f_mk_178(F->up, rt_str("0", 1));
while ((F->lab_1199 != NULL)) {
if (((*(P159)rt_nil_check(F->lab_1199)).b_ == NULL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->lab_1199)).a_, F->st_1195, &F->vt_1196, &F->v_1204);
f_check_type_352(F->up, F->vt_1196, F->st_1195, (*(P159)rt_nil_check(F->s_454)).line_);
F->conds_1203 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1203)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->tmp_1201))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->v_1204))));
} else {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->lab_1199)).a_, F->st_1195, &F->vt_1196, &F->lo_1205);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->lab_1199)).b_, F->st_1195, &F->vt_1196, &F->hi_1206);
F->conds_1203 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1203)), rt_str(" || (", 5)), (*(P133)rt_nil_check(F->tmp_1201))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1205))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->tmp_1201))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hi_1206))), 41));
}
F->lab_1199 = (*(P159)rt_nil_check(F->lab_1199)).next_;
}
L_end_1208: ;
if (F->first_1197) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1203))), rt_str(") {", 3)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1203))), rt_str(") {", 3)));
}
F->first_1197 = 0;
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->a_1198)).b_);
F->a_1198 = (*(P159)rt_nil_check(F->a_1198)).next_;
}
L_end_1207: ;
if (F->first_1197) {
f_emit_201(F->up, rt_str("{", 1));
} else {
f_emit_201(F->up, rt_str("} else {", 8));
}
if (((*(P159)rt_nil_check(F->s_454)).flag_ == ((rt_int)1LL))) {
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->s_454)).c_);
} else {
f_emit_201(F->up, rt_str("rt_raise(RT_X_CASE);", 20));
}
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_push_exit_459(struct f_greenc_1fr *up_, P133 match_456, int is_loop_457, P133 *label_458) {
  struct f_push_exit_459fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_456 = match_456;
F->is_loop_457 = is_loop_457;
F->label_458 = label_458;
f_new_name_181(F->up, rt_str("L_end_", 6), &(*F->label_458));
F->up->exits_138 = ({ R137 *cell1209 = rt_alloc(sizeof(R137)); *cell1209 = cp_R137(({ R137 ag1210; ag1210.match_ = F->match_456; ag1210.label_ = (*F->label_458); ag1210.depth_ = F->up->frames_139; ag1210.is_loop_ = F->is_loop_457; ag1210.next_ = F->up->exits_138; ag1210; })); (P136)cell1209; });
ret_:

  return;
}

static void f_gen_loop_461(struct f_greenc_1fr *up_, P159 s_460) {
  struct f_gen_loop_461fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_460 = s_460;
F->t_1211 = NULL;
F->vt_1212 = NULL;
F->c_1213 = NULL;
F->label_1214 = NULL;
F->cond_1215 = NULL;
F->acc_1216 = NULL;
F->lov_1217 = NULL;
F->hiv_1218 = NULL;
F->it_1219 = NULL;
F->y_1220 = NULL;
F->r_1221 = NULL;
f_push_exit_459(F->up, (*(P159)rt_nil_check(F->s_460)).tag_, 1, &F->label_1214);
if (((*(P159)rt_nil_check(F->s_460)).flag_ == ((rt_int)0LL))) {
f_emit_201(F->up, rt_str("for (;;) {", 10));
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->s_460)).b_);
f_emit_201(F->up, rt_str("}", 1));
} else if (((*(P159)rt_nil_check(F->s_460)).flag_ == ((rt_int)1LL))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_460)).a_, F->up->ty_bool_146, &F->vt_1212, &F->cond_1215);
f_check_type_352(F->up, F->vt_1212, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_460)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("while (", 7), (*(P133)rt_nil_check(F->cond_1215))), rt_str(") {", 3)));
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->s_460)).b_);
f_emit_201(F->up, rt_str("}", 1));
} else {
F->r_1221 = (*(P159)rt_nil_check(F->s_460)).a_;
F->c_1213 = f_new_cons_346(F->up);
if (((*(P159)rt_nil_check(F->r_1221)).kind_ == F->up->n_range_22)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1221)).a_, NULL, &F->t_1211, &(*(P163)rt_nil_check(F->c_1213)).lo_);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1221)).b_, F->t_1211, &F->vt_1212, &(*(P163)rt_nil_check(F->c_1213)).hi_);
f_check_type_352(F->up, F->vt_1212, F->t_1211, (*(P159)rt_nil_check(F->s_460)).line_);
} else {
f_resolve_373(F->up, F->r_1221, &F->t_1211, &F->c_1213);
if (((*(P163)rt_nil_check(F->c_1213)).lo_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_460)).line_, rt_str("a FOR loop needs a discrete range", 33));
}
}
f_storage_411(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_460)).name_)), F->t_1211, &F->acc_1216);
f_new_name_181(F->up, rt_str("lo", 2), &F->lov_1217);
f_new_name_181(F->up, rt_str("hi", 2), &F->hiv_1218);
f_new_name_181(F->up, rt_str("it", 2), &F->it_1219);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), (*(P133)rt_nil_check(F->lov_1217))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1213)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hiv_1218))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1213)).hi_))), 59));
if (((*(P159)rt_nil_check(F->s_460)).ival_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1219))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->hiv_1218))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1219))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lov_1217))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1219))), rt_str("--) {", 5)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1219))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->lov_1217))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1219))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hiv_1218))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1219))), rt_str("++) {", 5)));
}
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1216)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->it_1219))), 59));
f_open_scope_339(F->up);
F->y_1220 = f_new_sym_343(F->up, F->up->y_const_91, (*(P159)rt_nil_check(F->s_460)).name_);
(*(P110)rt_nil_check(F->y_1220)).t_ = F->t_1211;
(*(P110)rt_nil_check(F->y_1220)).ro_ = 1;
f_bind_414(F->up, F->y_1220, F->acc_1216);
f_define_338(F->up, F->y_1220, (*(P159)rt_nil_check(F->s_460)).line_);
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->s_460)).b_);
f_close_scope_340(F->up);
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
}
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_201(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1214)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_463(struct f_greenc_1fr *up_, P159 s_462) {
  struct f_gen_block_463fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_462 = s_462;
F->label_1222 = NULL;
F->aw_1223 = NULL;
f_push_exit_459(F->up, (*(P159)rt_nil_check(F->s_462)).tag_, 0, &F->label_1222);
f_emit_201(F->up, rt_str("{", 1));
f_open_scope_339(F->up);
f_decl_elements_423(F->up, (*(P159)rt_nil_check(F->s_462)).a_);
f_guarded_441(F->up, (*(P159)rt_nil_check(F->s_462)).b_, (*(P159)rt_nil_check(F->s_462)).c_, (*(P159)rt_nil_check(F->s_462)).line_);
f_task_awaits_688(F->up, (*(P159)rt_nil_check(F->s_462)).a_, &F->aw_1223);
f_emit_201(F->up, (*(P133)rt_nil_check(F->aw_1223)));
f_close_scope_340(F->up);
f_emit_201(F->up, rt_str("}", 1));
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_201(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1222)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_465(struct f_greenc_1fr *up_, P159 s_464) {
  struct f_gen_exit_465fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_464 = s_464;
F->x_1224 = NULL;
F->x_1224 = F->up->exits_138;
F->t_1225 = NULL;
F->v_1226 = NULL;
while ((F->x_1224 != NULL)) {
if (((((*(P159)rt_nil_check(F->s_464)).name_ == NULL) && (*(P136)rt_nil_check(F->x_1224)).is_loop_) || ((((*(P159)rt_nil_check(F->s_464)).name_ != NULL) && ((*(P136)rt_nil_check(F->x_1224)).match_ != NULL)) && rt_str_eq((*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1224)).match_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_464)).name_)))))) {
if (((*(P159)rt_nil_check(F->s_464)).a_ != NULL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_464)).a_, F->up->ty_bool_146, &F->t_1225, &F->v_1226);
f_check_type_352(F->up, F->t_1225, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_464)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1226))), rt_str(") {", 3)));
}
f_pop_frames_434(F->up, (*(P136)rt_nil_check(F->x_1224)).depth_);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("goto ", 5), (*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1224)).label_))), 59));
if (((*(P159)rt_nil_check(F->s_464)).a_ != NULL)) {
f_emit_201(F->up, rt_str("}", 1));
}
goto ret_;
}
F->x_1224 = (*(P136)rt_nil_check(F->x_1224)).next_;
}
L_end_1227: ;
if (((*(P159)rt_nil_check(F->s_464)).name_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_464)).line_, rt_str("exit outside a loop", 19));
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_464)).line_, rt_str_cat(rt_str_cat(rt_str("exit ", 5), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_464)).name_))), rt_str(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_467(struct f_greenc_1fr *up_, P159 s_466) {
  struct f_gen_return_467fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_466 = s_466;
F->vt_1228 = NULL;
F->v_1229 = NULL;
if ((!F->up->in_func_131)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_466)).line_, rt_str("return outside a subprogram", 27));
}
if ((F->up->accept_depth_157 > ((rt_int)0LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_466)).line_, rt_str("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).result_)).kind_ == F->up->t_void_83)) {
if (((*(P159)rt_nil_check(F->s_466)).a_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_466)).line_, rt_str("a procedure returns no value", 28));
}
f_pop_frames_434(F->up, ((rt_int)0LL));
f_emit_201(F->up, rt_str("goto ret_;", 10));
goto ret_;
}
if (((*(P159)rt_nil_check(F->s_466)).a_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_466)).line_, rt_str("return needs a value here", 25));
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_466)).a_, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, &F->vt_1228, &F->v_1229);
f_check_type_352(F->up, F->vt_1228, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, (*(P159)rt_nil_check(F->s_466)).line_);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("F->result_ = ", 13), (*(P133)rt_nil_check(F->v_1229))), 59));
f_pop_frames_434(F->up, ((rt_int)0LL));
f_emit_201(F->up, rt_str("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_470(struct f_greenc_1fr *up_, P110 y_468, P133 *r_469) {
  struct f_access_of_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_468 = y_468;
F->r_469 = r_469;
F->p_1230 = NULL;
if (((*(P110)rt_nil_check(F->y_468)).level_ <= ((rt_int)0LL))) {
(*F->r_469) = (*(P110)rt_nil_check(F->y_468)).access_path_;
goto ret_;
}
F->p_1230 = f_mk_178(F->up, rt_str("F", 1));
{ rt_int lo1233 = ((rt_int)1LL), hi1234 = rt_sub(F->up->cur_level_132, (*(P110)rt_nil_check(F->y_468)).level_);
for (rt_int it1235 = lo1233; it1235 <= hi1234; it1235++) {
F->i_1232 = it1235;
F->p_1230 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->p_1230)), rt_str("->up", 4)));
}
}
L_end_1231: ;
if ((*(P110)rt_nil_check(F->y_468)).byref_) {
(*F->r_469) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->p_1230))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_468)).access_path_))), 41));
} else {
(*F->r_469) = f_mk_178(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1230)), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_468)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_473(struct f_greenc_1fr *up_, rt_int l_471, P133 *r_472) {
  struct f_link_to_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_471 = l_471;
F->r_472 = r_472;
(*F->r_472) = f_mk_178(F->up, rt_str("F", 1));
{ rt_int lo1238 = ((rt_int)1LL), hi1239 = rt_sub(F->up->cur_level_132, F->l_471);
for (rt_int it1240 = lo1238; it1240 <= hi1239; it1240++) {
F->i_1237 = it1240;
(*F->r_472) = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_472))), rt_str("->up", 4)));
}
}
L_end_1236: ;
ret_:

  return;
}

static rstr f_c_ident_475(struct f_greenc_1fr *up_, rstr s_474) {
  struct f_c_ident_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_474 = rt_str_copy(s_474);
if (rt_str_eq(F->s_474, rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("MOD", 3))) {
F->result_ = rt_str("op_mod", 6);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("AND", 3))) {
F->result_ = rt_str("op_and", 6);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("OR", 2))) {
F->result_ = rt_str("op_or", 5);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("XOR", 3))) {
F->result_ = rt_str("op_xor", 6);
goto ret_;
} else if (rt_str_eq(F->s_474, rt_str("NOT", 3))) {
F->result_ = rt_str("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_189(F->up, F->s_474);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_479(struct f_greenc_1fr *up_, rstr base_476, P115 t_477, P133 *r_478) {
  struct f_deref_479fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_476 = rt_str_copy(base_476);
F->t_477 = t_477;
F->r_478 = r_478;
F->ct_1241 = NULL;
if (F->up->in_lv_path_174) {
F->up->last_deref_175 = 1;
}
f_ctype_357(F->up, F->t_477, &F->ct_1241);
(*F->r_478) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), (*(P133)rt_nil_check(F->ct_1241))), rt_str(")rt_nil_check(", 14)), F->base_476), rt_str("))", 2)));
ret_:

  return;
}

static int f_is_object_481(struct f_greenc_1fr *up_, P159 e_480) {
  struct f_is_object_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_480 = e_480;
F->y_1242 = NULL;
if (((*(P159)rt_nil_check(F->e_480)).kind_ == F->up->n_name_13)) {
F->y_1242 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_480)).name_)));
F->result_ = ((F->y_1242 != NULL) && (((*(P110)rt_nil_check(F->y_1242)).kind_ == F->up->y_var_90) || ((*(P110)rt_nil_check(F->y_1242)).kind_ == F->up->y_const_91)));
goto ret_;
} else if (((*(P159)rt_nil_check(F->e_480)).kind_ == F->up->n_select_17)) {
F->result_ = f_is_object_481(F->up, (*(P159)rt_nil_check(F->e_480)).a_);
goto ret_;
} else if (((*(P159)rt_nil_check(F->e_480)).kind_ == F->up->n_apply_16)) {
if ((((*(P159)rt_nil_check(F->e_480)).b_ != NULL) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_480)).b_)).kind_ == F->up->n_range_22))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_481(F->up, (*(P159)rt_nil_check(F->e_480)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_487(struct f_greenc_1fr *up_, P159 e_482, P133 *code_out_483, P115 *t_484, P163 *c_485, int *ro_486) {
  struct f_lvalue_487fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_482 = e_482;
F->code_out_483 = code_out_483;
F->t_484 = t_484;
F->c_485 = c_485;
F->ro_486 = ro_486;
F->y_1243 = NULL;
F->base_1244 = NULL;
F->bt_1245 = NULL;
F->bc_1246 = NULL;
if (((*(P159)rt_nil_check(F->e_482)).kind_ == F->up->n_name_13)) {
F->y_1243 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_482)).name_)));
if ((F->y_1243 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_482)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_482)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1243)).kind_ != F->up->y_var_90) && ((*(P110)rt_nil_check(F->y_1243)).kind_ != F->up->y_const_91))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_482)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_482)).name_)), rt_str(" is not an object", 17)));
}
f_access_of_470(F->up, F->y_1243, &(*F->code_out_483));
(*F->t_484) = (*(P110)rt_nil_check(F->y_1243)).t_;
(*F->c_485) = (*(P110)rt_nil_check(F->y_1243)).c_;
(*F->ro_486) = (*(P110)rt_nil_check(F->y_1243)).ro_;
} else if (((*(P159)rt_nil_check(F->e_482)).kind_ == F->up->n_paren_23)) {
f_lvalue_487(F->up, (*(P159)rt_nil_check(F->e_482)).a_, &(*F->code_out_483), &(*F->t_484), &(*F->c_485), &(*F->ro_486));
} else if (((*(P159)rt_nil_check(F->e_482)).kind_ == F->up->n_select_17)) {
f_lvalue_487(F->up, (*(P159)rt_nil_check(F->e_482)).a_, &F->base_1244, &F->bt_1245, &F->bc_1246, &(*F->ro_486));
f_select_on_495(F->up, (*(P133)rt_nil_check(F->base_1244)), F->bt_1245, F->e_482, &(*F->ro_486), &(*F->code_out_483), &(*F->t_484), &(*F->c_485));
} else if (((*(P159)rt_nil_check(F->e_482)).kind_ == F->up->n_apply_16)) {
f_lvalue_487(F->up, (*(P159)rt_nil_check(F->e_482)).a_, &F->base_1244, &F->bt_1245, &F->bc_1246, &(*F->ro_486));
f_index_on_504(F->up, (*(P133)rt_nil_check(F->base_1244)), F->bt_1245, F->e_482, &(*F->ro_486), 1, &(*F->code_out_483), &(*F->t_484), &(*F->c_485));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_482)).line_, rt_str("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_495(struct f_greenc_1fr *up_, rstr base_488, P115 bt_489, P159 e_490, int *ro_491, P133 *code_out_492, P115 *t_493, P163 *c_494) {
  struct f_select_on_495fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_488 = rt_str_copy(base_488);
F->bt_489 = bt_489;
F->e_490 = e_490;
F->ro_491 = ro_491;
F->code_out_492 = code_out_492;
F->t_493 = t_493;
F->c_494 = c_494;
F->f_1247 = NULL;
F->d_1248 = NULL;
(*F->c_494) = F->up->no_cons_165;
if (((*(P115)rt_nil_check(F->bt_489)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_380(F->up, F->bt_489);
f_deref_479(F->up, F->base_488, F->bt_489, &F->d_1248);
(*F->ro_491) = 0;
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_490)).name_)), rt_str("ALL", 3))) {
(*F->code_out_492) = F->d_1248;
(*F->t_493) = (*(P115)rt_nil_check(F->bt_489)).target_;
goto ret_;
}
f_select_on_495(F->up, (*(P133)rt_nil_check(F->d_1248)), (*(P115)rt_nil_check(F->bt_489)).target_, F->e_490, &(*F->ro_491), &(*F->code_out_492), &(*F->t_493), &(*F->c_494));
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_489)).kind_ == F->up->t_record_81)) {
if (((*(P115)rt_nil_check(F->bt_489)).priv_ && (!f_inside_package_589(F->up, (*(P115)rt_nil_check(F->bt_489)).decl_)))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_490)).line_, rt_str_cat(rt_str_cat(rt_str("the components of private type ", 31), f_kind_name_348(F->up, F->bt_489)), rt_str(" are not visible here (RM79 7.4)", 32)));
}
F->f_1247 = (*(P115)rt_nil_check(F->bt_489)).fields_;
while ((F->f_1247 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1247)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_490)).name_)))) {
(*F->c_494) = (*(P1034)rt_nil_check(F->f_1247)).c_;
(*F->code_out_492) = f_mk_178(F->up, rt_str_cat(rt_str_catc(F->base_488, 46), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_490)).name_)))));
(*F->t_493) = (*(P1034)rt_nil_check(F->f_1247)).t_;
goto ret_;
}
F->f_1247 = (*(P1034)rt_nil_check(F->f_1247)).next_;
}
L_end_1249: ;
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_490)).line_, rt_str_cat(rt_str_cat(f_kind_name_348(F->up, F->bt_489), rt_str(" has no component ", 18)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_490)).name_))));
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_490)).line_, rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_490)).name_))), rt_str(" here", 5)));
ret_:

  return;
}

static void f_index_on_504(struct f_greenc_1fr *up_, rstr base_496, P115 bt_497, P159 e_498, int *ro_499, int lv_500, P133 *code_out_501, P115 *t_502, P163 *c_503) {
  struct f_index_on_504fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_496 = rt_str_copy(base_496);
F->bt_497 = bt_497;
F->e_498 = e_498;
F->ro_499 = ro_499;
F->lv_500 = lv_500;
F->code_out_501 = code_out_501;
F->t_502 = t_502;
F->c_503 = c_503;
F->a_1250 = NULL;
F->a_1250 = (*(P159)rt_nil_check(F->e_498)).b_;
F->it_1251 = NULL;
F->i_1252 = NULL;
F->lo_1253 = NULL;
F->hi_1254 = NULL;
F->d_1255 = NULL;
(*F->c_503) = F->up->no_cons_165;
if (((*(P115)rt_nil_check(F->bt_497)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_380(F->up, F->bt_497);
f_deref_479(F->up, F->base_496, F->bt_497, &F->d_1255);
(*F->ro_499) = 0;
f_index_on_504(F->up, (*(P133)rt_nil_check(F->d_1255)), (*(P115)rt_nil_check(F->bt_497)).target_, F->e_498, &(*F->ro_499), F->lv_500, &(*F->code_out_501), &(*F->t_502), &(*F->c_503));
goto ret_;
}
if ((f_list_len_226(F->up, F->a_1250) != ((rt_int)1LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_498)).line_, rt_str("one index expected", 18));
}
if (((*(P115)rt_nil_check(F->bt_497)).kind_ == F->up->t_string_79)) {
if (((*(P159)rt_nil_check(F->a_1250)).kind_ == F->up->n_range_22)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->a_1250)).a_, F->up->ty_int_145, &F->it_1251, &F->lo_1253);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->a_1250)).b_, F->up->ty_int_145, &F->it_1251, &F->hi_1254);
(*F->code_out_501) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), F->base_496), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1253))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1254))), 41));
(*F->t_502) = F->up->ty_string_149;
(*F->ro_499) = 1;
goto ret_;
}
f_gexpr_515(F->up, F->a_1250, F->up->ty_int_145, &F->it_1251, &F->i_1252);
(*F->t_502) = F->up->ty_char_148;
if (F->lv_500) {
(*F->code_out_501) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), F->base_496), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1252))), rt_str("))", 2)));
} else {
(*F->code_out_501) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), F->base_496), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1252))), 41));
(*F->ro_499) = 1;
}
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_497)).kind_ == F->up->t_array_80)) {
f_gexpr_515(F->up, F->a_1250, (*(P115)rt_nil_check(F->bt_497)).idx_, &F->it_1251, &F->i_1252);
f_check_type_352(F->up, F->it_1251, (*(P115)rt_nil_check(F->bt_497)).idx_, (*(P159)rt_nil_check(F->e_498)).line_);
(*F->code_out_501) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_496, rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->i_1252))), rt_str(", ", 2)), F->base_496), rt_str(".lo, ", 5)), F->base_496), rt_str(".hi) - ", 7)), F->base_496), rt_str(".lo]", 4)));
(*F->t_502) = (*(P115)rt_nil_check(F->bt_497)).elem_;
(*F->c_503) = (*(P115)rt_nil_check(F->bt_497)).elemcons_;
goto ret_;
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_498)).line_, rt_str("cannot index this", 17));
ret_:

  return;
}

static int f_is_char_lit_506(struct f_greenc_1fr *up_, P159 e_505) {
  struct f_is_char_lit_506fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_505 = e_505;
F->result_ = (((*(P159)rt_nil_check(F->e_505)).kind_ == F->up->n_str_11) && (((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_505)).name_))).len == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_508(struct f_greenc_1fr *up_, P159 e_507) {
  struct f_is_enum_lit_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_507 = e_507;
F->y_1256 = NULL;
if (((*(P159)rt_nil_check(F->e_507)).kind_ != F->up->n_name_13)) {
F->result_ = 0;
goto ret_;
}
F->y_1256 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_507)).name_)));
F->result_ = ((F->y_1256 != NULL) && ((*(P110)rt_nil_check(F->y_1256)).kind_ == F->up->y_enumlit_96));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_string_510(struct f_greenc_1fr *up_, rstr s_509) {
  struct f_c_string_510fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_509 = rt_str_copy(s_509);
F->n_1257 = ((rt_int)0LL);
{ rt_int lo1260 = ((rt_int)1LL), hi1261 = (F->s_509).len;
for (rt_int it1262 = lo1260; it1262 <= hi1261; it1262++) {
F->i_1259 = it1262;
if ((((rt_str_get(F->s_509, F->i_1259) == 34) || (rt_str_get(F->s_509, F->i_1259) == 92)) || (rt_str_get(F->s_509, F->i_1259) == 63))) {
F->n_1257 = rt_add(F->n_1257, ((rt_int)1LL));
}
}
}
L_end_1258: ;
{
F->r_1264 = rt_str_new((rt_add(rt_add((F->s_509).len, F->n_1257), ((rt_int)2LL)) - ((rt_int)1LL) + 1));
F->j_1265 = ((rt_int)1LL);
(*rt_str_at(&F->r_1264, ((rt_int)1LL))) = 34;
{ rt_int lo1268 = ((rt_int)1LL), hi1269 = (F->s_509).len;
for (rt_int it1270 = lo1268; it1270 <= hi1269; it1270++) {
F->i_1267 = it1270;
F->j_1265 = rt_add(F->j_1265, ((rt_int)1LL));
if ((((rt_str_get(F->s_509, F->i_1267) == 34) || (rt_str_get(F->s_509, F->i_1267) == 92)) || (rt_str_get(F->s_509, F->i_1267) == 63))) {
(*rt_str_at(&F->r_1264, F->j_1265)) = 92;
F->j_1265 = rt_add(F->j_1265, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1264, F->j_1265)) = rt_str_get(F->s_509, F->i_1267);
}
}
L_end_1266: ;
(*rt_str_at(&F->r_1264, rt_add(F->j_1265, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1264;
goto ret_;

}
L_end_1263: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gexpr_515(struct f_greenc_1fr *up_, P159 e_511, P115 want_512, P115 *t_513, P133 *r_514) {
  struct f_gexpr_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_511 = e_511;
F->want_512 = want_512;
F->t_513 = t_513;
F->r_514 = r_514;
F->y_1271 = NULL;
F->bt_1272 = NULL;
F->c_1273 = NULL;
F->base_1275 = NULL;
F->a_1276 = NULL;
F->nm_1277 = NULL;
F->saved_lv_1278 = F->up->in_lv_path_174;
F->up->in_lv_path_174 = 0;
f_gexpr_1_520(F->up, F->e_511, F->want_512, &(*F->t_513), &(*F->r_514));
F->up->in_lv_path_174 = F->saved_lv_1278;
ret_:

  return;
}

static void f_gexpr_1_520(struct f_greenc_1fr *up_, P159 e_516, P115 want_517, P115 *t_518, P133 *r_519) {
  struct f_gexpr_1_520fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_516 = e_516;
F->want_517 = want_517;
F->t_518 = t_518;
F->r_519 = r_519;
F->y_1279 = NULL;
F->bt_1280 = NULL;
F->c_1281 = NULL;
F->base_1283 = NULL;
F->a_1284 = NULL;
F->nm_1285 = NULL;
(*F->t_518) = F->up->ty_int_145;
{ rt_int sel1286 = (*(P159)rt_nil_check(F->e_516)).kind_;
if (0 || sel1286 == ((rt_int)1LL)) {
(*F->r_519) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P159)rt_nil_check(F->e_516)).ival_)), rt_str("LL)", 3)));
} else if (0 || sel1286 == ((rt_int)2LL)) {
(*F->t_518) = F->up->ty_float_147;
(*F->r_519) = (*(P159)rt_nil_check(F->e_516)).name_;
} else if (0 || sel1286 == ((rt_int)3LL)) {
if (((f_is_char_lit_506(F->up, F->e_516) && (F->want_517 != NULL)) && (((*(P115)rt_nil_check(F->want_517)).kind_ == F->up->t_char_85) || ((*(P115)rt_nil_check(F->want_517)).kind_ == F->up->t_enum_78)))) {
f_char_literal_525(F->up, F->e_516, F->want_517, &(*F->t_518), &(*F->r_519));
} else {
(*F->t_518) = F->up->ty_string_149;
(*F->r_519) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_510(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_516)).name_)))), rt_str(", ", 2)), rt_str_of_int(((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_516)).name_))).len)), 41));
}
} else if (0 || sel1286 == ((rt_int)4LL)) {
(*F->t_518) = F->up->ty_nil_151;
(*F->r_519) = f_mk_178(F->up, rt_str("NULL", 4));
} else if (0 || sel1286 == ((rt_int)15LL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_516)).a_, F->want_517, &(*F->t_518), &(*F->r_519));
} else if (0 || sel1286 == ((rt_int)5LL)) {
f_gen_name_530(F->up, F->e_516, F->want_517, &(*F->t_518), &(*F->r_519));
} else if (0 || sel1286 == ((rt_int)6LL)) {
f_gen_unop_535(F->up, F->e_516, F->want_517, &(*F->t_518), &(*F->r_519));
} else if (0 || sel1286 == ((rt_int)7LL)) {
f_gen_binop_540(F->up, F->e_516, F->want_517, &(*F->t_518), &(*F->r_519));
} else if (0 || sel1286 == ((rt_int)8LL)) {
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_516)).a_)).kind_ == F->up->n_name_13)) {
F->y_1279 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_516)).a_)).name_)));
if (((F->y_1279 == NULL) || ((((*(P110)rt_nil_check(F->y_1279)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1279)).kind_ == F->up->y_proc_93)) || ((*(P110)rt_nil_check(F->y_1279)).kind_ == F->up->y_entry_99)))) {
F->up->call_want_170 = F->want_517;
f_gcall_569(F->up, F->e_516, 0, &(*F->t_518), &(*F->r_519));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1279)).kind_ == F->up->y_type_94)) {
f_conversion_545(F->up, F->e_516, F->y_1279, &(*F->t_518), &(*F->r_519));
goto ret_;
}
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_516)).a_, NULL, &F->bt_1280, &F->base_1283);
F->ro_1282 = 1;
f_index_on_504(F->up, (*(P133)rt_nil_check(F->base_1283)), F->bt_1280, F->e_516, &F->ro_1282, 0, &(*F->r_519), &(*F->t_518), &F->c_1281);
} else if (0 || sel1286 == ((rt_int)9LL)) {
if (f_is_package_583(F->up, (*(P159)rt_nil_check(F->e_516)).a_)) {
F->nm_1285 = f_nn_220(F->up, F->up->n_name_13, (*(P159)rt_nil_check(F->e_516)).line_);
(*(P159)rt_nil_check(F->nm_1285)).name_ = (*(P159)rt_nil_check(F->e_516)).name_;
(*(P159)rt_nil_check(F->nm_1285)).tag_ = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_516)).a_)).name_;
f_gen_name_530(F->up, F->nm_1285, F->want_517, &(*F->t_518), &(*F->r_519));
goto ret_;
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_516)).a_, NULL, &F->bt_1280, &F->base_1283);
F->ro_1282 = 1;
f_select_on_495(F->up, (*(P133)rt_nil_check(F->base_1283)), F->bt_1280, F->e_516, &F->ro_1282, &(*F->r_519), &(*F->t_518), &F->c_1281);
} else if (0 || sel1286 == ((rt_int)10LL)) {
f_gen_attr_550(F->up, F->e_516, F->want_517, &(*F->t_518), &(*F->r_519));
} else if (0 || sel1286 == ((rt_int)11LL)) {
f_allocator_555(F->up, F->e_516, F->want_517, &(*F->t_518), &(*F->r_519));
} else if (0 || sel1286 == ((rt_int)12LL)) {
f_aggregate_560(F->up, F->e_516, F->want_517, &(*F->t_518), &(*F->r_519));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_516)).line_, rt_str("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_char_literal_525(struct f_greenc_1fr *up_, P159 e_521, P115 want_522, P115 *t_523, P133 *r_524) {
  struct f_char_literal_525fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_521 = e_521;
F->want_522 = want_522;
F->t_523 = t_523;
F->r_524 = r_524;
if (((*(P115)rt_nil_check(F->want_522)).kind_ == F->up->t_char_85)) {
(*F->t_523) = F->up->ty_char_148;
(*F->r_524) = f_mk_178(F->up, rt_str_of_int(rt_sub(((rt_int)(rt_str_get((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_521)).name_)), ((rt_int)1LL))) + 1), ((rt_int)1LL))));
goto ret_;
}
F->i_1287 = f_lit_index_365(F->up, (*(P115)rt_nil_check(F->want_522)).lits_, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_521)).name_)));
if ((F->i_1287 < ((rt_int)0LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_521)).line_, rt_str_cat(rt_str_cat(rt_str_ccat(34, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_521)).name_))), rt_str("\" is not a literal of ", 22)), f_kind_name_348(F->up, F->want_522)));
}
(*F->t_523) = F->want_522;
(*F->r_524) = f_mk_178(F->up, rt_str_of_int(F->i_1287));
ret_:

  return;
}

static void f_gen_name_530(struct f_greenc_1fr *up_, P159 e_526, P115 want_527, P115 *t_528, P133 *r_529) {
  struct f_gen_name_530fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_526 = e_526;
F->want_527 = want_527;
F->t_528 = t_528;
F->r_529 = r_529;
F->y_1288 = NULL;
F->y_1288 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_)));
F->z_1289 = NULL;
F->call_1290 = NULL;
if (((*(P159)rt_nil_check(F->e_526)).tag_ != NULL)) {
F->y_1288 = f_member_of_587(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_)), (*(P159)rt_nil_check(F->e_526)).line_);
}
if ((F->y_1288 == NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_)), rt_str("PUT", 3)) || rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_)), rt_str("GET", 3)))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_526)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_)), rt_str(" needs an item", 14)));
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_526)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1288)).kind_ == F->up->y_var_90) || ((*(P110)rt_nil_check(F->y_1288)).kind_ == F->up->y_const_91))) {
(*F->t_528) = (*(P110)rt_nil_check(F->y_1288)).t_;
f_access_of_470(F->up, F->y_1288, &(*F->r_529));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1288)).kind_ == F->up->y_enumlit_96)) {
F->z_1289 = F->y_1288;
if ((F->want_527 != NULL)) {
while ((F->z_1289 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1289)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_))) && ((*(P110)rt_nil_check(F->z_1289)).kind_ == F->up->y_enumlit_96)) && f_same_332(F->up, (*(P110)rt_nil_check(F->z_1289)).t_, F->want_527))) {
goto L_end_1291;
}
F->z_1289 = (*(P110)rt_nil_check(F->z_1289)).chain_;
}
L_end_1291: ;
if ((F->z_1289 == NULL)) {
F->z_1289 = F->y_1288;
}
}
(*F->t_528) = (*(P110)rt_nil_check(F->z_1289)).t_;
(*F->r_529) = f_mk_178(F->up, rt_str_of_int((*(P110)rt_nil_check(F->z_1289)).mvalue_));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1288)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1288)).kind_ == F->up->y_proc_93)) || ((*(P110)rt_nil_check(F->y_1288)).kind_ == F->up->y_entry_99))) {
F->call_1290 = f_nn_220(F->up, F->up->n_apply_16, (*(P159)rt_nil_check(F->e_526)).line_);
(*(P159)rt_nil_check(F->call_1290)).a_ = F->e_526;
F->up->call_want_170 = F->want_527;
f_gcall_569(F->up, F->call_1290, 0, &(*F->t_528), &(*F->r_529));
goto ret_;
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_526)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_526)).name_)), rt_str(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_535(struct f_greenc_1fr *up_, P159 e_531, P115 want_532, P115 *t_533, P133 *r_534) {
  struct f_gen_unop_535fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_531 = e_531;
F->want_532 = want_532;
F->t_533 = t_533;
F->r_534 = r_534;
F->a_1292 = NULL;
f_user_operator_624(F->up, F->e_531, F->want_532, &(*F->t_533), &(*F->r_534), &F->done_1293);
if (F->done_1293) {
goto ret_;
}
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_531)).name_)), rt_str("NOT", 3))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_531)).a_, F->up->ty_bool_146, &(*F->t_533), &F->a_1292);
f_check_type_352(F->up, (*F->t_533), F->up->ty_bool_146, (*(P159)rt_nil_check(F->e_531)).line_);
(*F->r_534) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->a_1292))), 41));
goto ret_;
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_531)).a_, F->want_532, &(*F->t_533), &F->a_1292);
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_531)).name_)), rt_str("+", 1))) {
(*F->r_534) = F->a_1292;
} else if (((*(P115)rt_nil_check((*F->t_533))).kind_ == F->up->t_float_77)) {
(*F->r_534) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(-", 2), (*(P133)rt_nil_check(F->a_1292))), 41));
} else {
f_check_type_352(F->up, (*F->t_533), F->up->ty_int_145, (*(P159)rt_nil_check(F->e_531)).line_);
(*F->r_534) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_neg(", 7), (*(P133)rt_nil_check(F->a_1292))), 41));
}
ret_:

  return;
}

static void f_gen_binop_540(struct f_greenc_1fr *up_, P159 e_536, P115 want_537, P115 *t_538, P133 *r_539) {
  struct f_gen_binop_540fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_536 = e_536;
F->want_537 = want_537;
F->t_538 = t_538;
F->r_539 = r_539;
F->op_1294 = rt_str_copy((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_536)).name_)));
F->ta_1295 = NULL;
F->tb_1296 = NULL;
F->hint_1297 = NULL;
F->ct_1298 = NULL;
F->a_1299 = NULL;
F->b_1300 = NULL;
F->x_1301 = NULL;
F->dummy_1302 = NULL;
(*F->t_538) = F->up->ty_bool_146;
f_user_operator_624(F->up, F->e_536, F->want_537, &(*F->t_538), &(*F->r_539), &F->done_1303);
if (F->done_1303) {
goto ret_;
}
if (((rt_str_eq(F->op_1294, rt_str("AND", 3)) || rt_str_eq(F->op_1294, rt_str("OR", 2))) || rt_str_eq(F->op_1294, rt_str("XOR", 3)))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).a_, F->up->ty_bool_146, &F->ta_1295, &F->a_1299);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).b_, F->up->ty_bool_146, &F->tb_1296, &F->b_1300);
f_check_type_352(F->up, F->ta_1295, F->up->ty_bool_146, (*(P159)rt_nil_check(F->e_536)).line_);
f_check_type_352(F->up, F->tb_1296, F->up->ty_bool_146, (*(P159)rt_nil_check(F->e_536)).line_);
if (rt_str_eq(F->op_1294, rt_str("AND", 3))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1299))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("OR", 2))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1299))), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1299))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1300))), 41));
}
goto ret_;
}
if (rt_str_eq(F->op_1294, rt_str("IN", 2))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).a_, NULL, &F->ta_1295, &F->a_1299);
f_gexpr_515(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_536)).b_)).a_, F->ta_1295, &F->tb_1296, &F->b_1300);
f_gexpr_515(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_536)).b_)).b_, F->ta_1295, &F->tb_1296, &F->x_1301);
(*F->r_539) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int m_ = ", 15), (*(P133)rt_nil_check(F->a_1299))), rt_str("; m_ >= ", 8)), (*(P133)rt_nil_check(F->b_1300))), rt_str(" && m_ <= ", 10)), (*(P133)rt_nil_check(F->x_1301))), rt_str("; })", 4)));
goto ret_;
}
if (rt_str_eq(F->op_1294, rt_str("&", 1))) {
if (f_is_char_lit_506(F->up, (*(P159)rt_nil_check(F->e_536)).a_)) {
F->hint_1297 = F->up->ty_char_148;
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).a_, F->hint_1297, &F->ta_1295, &F->a_1299);
F->hint_1297 = NULL;
if (f_is_char_lit_506(F->up, (*(P159)rt_nil_check(F->e_536)).b_)) {
F->hint_1297 = F->up->ty_char_148;
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).b_, F->hint_1297, &F->tb_1296, &F->b_1300);
(*F->t_538) = F->up->ty_string_149;
if ((((*(P115)rt_nil_check(F->ta_1295)).kind_ == F->up->t_string_79) && ((*(P115)rt_nil_check(F->tb_1296)).kind_ == F->up->t_string_79))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1295)).kind_ == F->up->t_string_79) && ((*(P115)rt_nil_check(F->tb_1296)).kind_ == F->up->t_char_85))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1295)).kind_ == F->up->t_char_85) && ((*(P115)rt_nil_check(F->tb_1296)).kind_ == F->up->t_string_79))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1295)).kind_ == F->up->t_char_85) && ((*(P115)rt_nil_check(F->tb_1296)).kind_ == F->up->t_char_85))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_536)).line_, rt_str("& catenates strings and characters", 34));
}
goto ret_;
}
if (f_is_rel_259(F->up, F->op_1294)) {
if ((((f_is_char_lit_506(F->up, (*(P159)rt_nil_check(F->e_536)).a_) || f_is_enum_lit_508(F->up, (*(P159)rt_nil_check(F->e_536)).a_)) || ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_536)).a_)).kind_ == F->up->n_nil_12)) || ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_536)).a_)).kind_ == F->up->n_int_9))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).b_, NULL, &F->hint_1297, &F->dummy_1302);
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).a_, F->hint_1297, &F->ta_1295, &F->a_1299);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).b_, F->ta_1295, &F->tb_1296, &F->b_1300);
F->ct_1298 = F->ta_1295;
if ((((*(P115)rt_nil_check(F->ta_1295)).kind_ != F->up->t_nil_84) && ((*(P115)rt_nil_check(F->tb_1296)).kind_ != F->up->t_nil_84))) {
f_check_type_352(F->up, F->tb_1296, F->ta_1295, (*(P159)rt_nil_check(F->e_536)).line_);
}
if (((*(P115)rt_nil_check(F->ta_1295)).kind_ == F->up->t_nil_84)) {
F->ct_1298 = F->tb_1296;
}
if (((*(P115)rt_nil_check(F->ct_1298)).kind_ == F->up->t_string_79)) {
if (rt_str_eq(F->op_1294, rt_str("=", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("/=", 2))) {
(*F->r_539) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), rt_str("))", 2)));
} else if (rt_str_eq(F->op_1294, rt_str("<", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("<=", 2))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str(">", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->b_1300))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1299))), 41));
} else {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->b_1300))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1299))), 41));
}
goto ret_;
}
if (f_composite_386(F->up, F->ct_1298)) {
f_eq_code_401(F->up, F->ct_1298, (*(P133)rt_nil_check(F->a_1299)), (*(P133)rt_nil_check(F->b_1300)), &F->x_1301);
if (rt_str_eq(F->op_1294, rt_str("=", 1))) {
(*F->r_539) = F->x_1301;
} else if (rt_str_eq(F->op_1294, rt_str("/=", 2))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->x_1301))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_536)).line_, rt_str("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (rt_str_eq(F->op_1294, rt_str("=", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1299))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("/=", 2))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1299))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1299))), 32), F->op_1294), 32), (*(P133)rt_nil_check(F->b_1300))), 41));
}
goto ret_;
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).a_, F->want_537, &F->ta_1295, &F->a_1299);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_536)).b_, F->ta_1295, &F->tb_1296, &F->b_1300);
if ((((*(P115)rt_nil_check(F->ta_1295)).kind_ == F->up->t_float_77) || ((*(P115)rt_nil_check(F->tb_1296)).kind_ == F->up->t_float_77))) {
(*F->t_538) = F->up->ty_float_147;
if (((rt_str_eq(F->op_1294, rt_str("+", 1)) || rt_str_eq(F->op_1294, rt_str("-", 1))) || rt_str_eq(F->op_1294, rt_str("*", 1)))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1299))), 32), F->op_1294), 32), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("/", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("**", 2))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_536)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1294), rt_str(" is not defined for FLOAT", 25)));
}
goto ret_;
}
f_check_type_352(F->up, F->ta_1295, F->up->ty_int_145, (*(P159)rt_nil_check(F->e_536)).line_);
f_check_type_352(F->up, F->tb_1296, F->up->ty_int_145, (*(P159)rt_nil_check(F->e_536)).line_);
(*F->t_538) = F->up->ty_int_145;
if (rt_str_eq(F->op_1294, rt_str("+", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("-", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("*", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("/", 1))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_quot(", 8), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("MOD", 3))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_rem(", 7), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else if (rt_str_eq(F->op_1294, rt_str("**", 2))) {
(*F->r_539) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), (*(P133)rt_nil_check(F->a_1299))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1300))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_536)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1294), rt_str(" is not defined for INTEGER", 27)));
}
ret_:

  return;
}

static void f_conversion_545(struct f_greenc_1fr *up_, P159 e_541, P110 y_542, P115 *t_543, P133 *r_544) {
  struct f_conversion_545fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_541 = e_541;
F->y_542 = y_542;
F->t_543 = t_543;
F->r_544 = r_544;
F->aty_1304 = NULL;
F->a_1305 = NULL;
if ((f_list_len_226(F->up, (*(P159)rt_nil_check(F->e_541)).b_) != ((rt_int)1LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_541)).line_, rt_str("a conversion takes one expression", 33));
}
(*F->t_543) = (*(P110)rt_nil_check(F->y_542)).t_;
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_541)).b_, (*F->t_543), &F->aty_1304, &F->a_1305);
if ((((*(P115)rt_nil_check((*F->t_543))).kind_ == F->up->t_int_75) && ((*(P115)rt_nil_check(F->aty_1304)).kind_ == F->up->t_float_77))) {
(*F->r_544) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)llround(", 17), (*(P133)rt_nil_check(F->a_1305))), rt_str("))", 2)));
} else if ((((*(P115)rt_nil_check((*F->t_543))).kind_ == F->up->t_float_77) && ((*(P115)rt_nil_check(F->aty_1304)).kind_ == F->up->t_int_75))) {
(*F->r_544) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((double)(", 10), (*(P133)rt_nil_check(F->a_1305))), rt_str("))", 2)));
} else {
f_check_type_352(F->up, F->aty_1304, (*F->t_543), (*(P159)rt_nil_check(F->e_541)).line_);
if (((((((*(P115)rt_nil_check((*F->t_543))).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check((*F->t_543))).kind_ == F->up->t_enum_78)) || ((*(P115)rt_nil_check((*F->t_543))).kind_ == F->up->t_char_85)) && ((*(P110)rt_nil_check(F->y_542)).c_ != NULL)) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_542)).c_)).lo_ != NULL))) {
(*F->r_544) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->a_1305))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_542)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_542)).c_)).hi_))), 41));
} else {
(*F->r_544) = F->a_1305;
}
}
ret_:

  return;
}

static void f_gen_attr_550(struct f_greenc_1fr *up_, P159 e_546, P115 want_547, P115 *t_548, P133 *r_549) {
  struct f_gen_attr_550fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_546 = e_546;
F->want_547 = want_547;
F->t_548 = t_548;
F->r_549 = r_549;
F->a_1306 = rt_str_copy((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_546)).name_)));
F->y_1307 = NULL;
F->tt_1308 = NULL;
F->aty_1309 = NULL;
F->v_1310 = NULL;
F->d_1311 = NULL;
F->c_1312 = NULL;
if (((((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_546)).a_)).kind_ == F->up->n_apply_16) && ((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_546)).a_)).a_)).kind_ == F->up->n_name_13)) && f_is_task_name_642(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_546)).a_)).a_)).name_))))) {
f_member_attr_708(F->up, F->e_546, &(*F->t_548), &(*F->r_549));
goto ret_;
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_546)).a_)).kind_ == F->up->n_name_13)) {
F->y_1307 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_546)).a_)).name_)));
if ((((F->y_1307 == NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_546)).a_)).name_)), rt_str("SYSTEM", 6))) && rt_str_eq(F->a_1306, rt_str("CLOCK", 5)))) {
(*F->t_548) = F->up->ty_float_147;
(*F->r_549) = f_mk_178(F->up, rt_str("((double)rt_time())", 19));
goto ret_;
}
}
if (((F->y_1307 != NULL) && ((*(P110)rt_nil_check(F->y_1307)).kind_ == F->up->y_type_94))) {
F->tt_1308 = (*(P110)rt_nil_check(F->y_1307)).t_;
F->c_1312 = (*(P110)rt_nil_check(F->y_1307)).c_;
if (rt_str_eq(F->a_1306, rt_str("ORD", 3))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_546)).b_, F->tt_1308, &F->aty_1309, &F->v_1310);
f_check_type_352(F->up, F->aty_1309, F->tt_1308, (*(P159)rt_nil_check(F->e_546)).line_);
(*F->t_548) = F->up->ty_int_145;
(*F->r_549) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (*(P133)rt_nil_check(F->v_1310))), rt_str(") + 1)", 6)));
goto ret_;
} else if ((rt_str_eq(F->a_1306, rt_str("VAL", 3)) && ((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_int_75))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_546)).b_, F->up->ty_string_149, &F->aty_1309, &F->v_1310);
(*F->t_548) = F->up->ty_int_145;
(*F->r_549) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_int_of_str(", 14), (*(P133)rt_nil_check(F->v_1310))), 41));
goto ret_;
} else if (rt_str_eq(F->a_1306, rt_str("VAL", 3))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_546)).b_, F->up->ty_int_145, &F->aty_1309, &F->v_1310);
(*F->t_548) = F->tt_1308;
(*F->r_549) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1310))), rt_str(" - 1, ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1312)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1312)).hi_))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1306, rt_str("REP", 3)) && ((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_int_75))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_546)).b_, F->up->ty_int_145, &F->aty_1309, &F->v_1310);
(*F->t_548) = F->up->ty_string_149;
(*F->r_549) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_of_int(", 14), (*(P133)rt_nil_check(F->v_1310))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1306, rt_str("REP", 3)) && ((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_float_77))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_546)).b_, F->up->ty_float_147, &F->aty_1309, &F->v_1310);
(*F->t_548) = F->up->ty_string_149;
(*F->r_549) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_image_float(", 17), (*(P133)rt_nil_check(F->v_1310))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1306, rt_str("SUCC", 4)) || rt_str_eq(F->a_1306, rt_str("PRED", 4)))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_546)).b_, F->tt_1308, &F->aty_1309, &F->v_1310);
(*F->t_548) = F->tt_1308;
if (((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_int_75)) {
if (rt_str_eq(F->a_1306, rt_str("SUCC", 4))) {
(*F->r_549) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->v_1310))), rt_str(", 1)", 4)));
} else {
(*F->r_549) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->v_1310))), rt_str(", 1)", 4)));
}
} else if (rt_str_eq(F->a_1306, rt_str("SUCC", 4))) {
(*F->r_549) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1310))), rt_str(" + 1, ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1312)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1312)).hi_))), 41));
} else {
(*F->r_549) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1310))), rt_str(" - 1, ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1312)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1312)).hi_))), 41));
}
goto ret_;
} else if ((rt_str_eq(F->a_1306, rt_str("FIRST", 5)) || rt_str_eq(F->a_1306, rt_str("LAST", 4)))) {
(*F->t_548) = F->tt_1308;
if (((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_array_80)) {
(*F->t_548) = (*(P115)rt_nil_check(F->tt_1308)).idx_;
}
if (((F->c_1312 != NULL) && ((*(P163)rt_nil_check(F->c_1312)).lo_ != NULL))) {
if (rt_str_eq(F->a_1306, rt_str("FIRST", 5))) {
(*F->r_549) = (*(P163)rt_nil_check(F->c_1312)).lo_;
} else {
(*F->r_549) = (*(P163)rt_nil_check(F->c_1312)).hi_;
}
} else if (((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_int_75)) {
if (rt_str_eq(F->a_1306, rt_str("FIRST", 5))) {
(*F->r_549) = f_mk_178(F->up, rt_str("INT64_MIN", 9));
} else {
(*F->r_549) = f_mk_178(F->up, rt_str("INT64_MAX", 9));
}
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_546)).line_, rt_str_cat(rt_str("this type has no ", 17), F->a_1306));
}
goto ret_;
}
f_other_attr_704(F->up, F->e_546, F->y_1307, &(*F->t_548), &(*F->r_549));
goto ret_;
}
if (((F->y_1307 != NULL) && (((*(P110)rt_nil_check(F->y_1307)).kind_ != F->up->y_var_90) && ((*(P110)rt_nil_check(F->y_1307)).kind_ != F->up->y_const_91)))) {
f_other_attr_704(F->up, F->e_546, F->y_1307, &(*F->t_548), &(*F->r_549));
goto ret_;
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_546)).a_, NULL, &F->tt_1308, &F->v_1310);
if (((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_380(F->up, F->tt_1308);
f_deref_479(F->up, (*(P133)rt_nil_check(F->v_1310)), F->tt_1308, &F->d_1311);
F->v_1310 = F->d_1311;
F->tt_1308 = (*(P115)rt_nil_check(F->tt_1308)).target_;
}
(*F->t_548) = F->up->ty_int_145;
if (((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_string_79)) {
if ((rt_str_eq(F->a_1306, rt_str("LENGTH", 6)) || rt_str_eq(F->a_1306, rt_str("LAST", 4)))) {
(*F->r_549) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1310))), rt_str(").len", 5)));
goto ret_;
} else if (rt_str_eq(F->a_1306, rt_str("FIRST", 5))) {
(*F->r_549) = f_mk_178(F->up, rt_str("((rt_int)1)", 11));
goto ret_;
}
} else if (((*(P115)rt_nil_check(F->tt_1308)).kind_ == F->up->t_array_80)) {
(*F->t_548) = (*(P115)rt_nil_check(F->tt_1308)).idx_;
if (rt_str_eq(F->a_1306, rt_str("FIRST", 5))) {
(*F->r_549) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1310))), rt_str(").lo", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1306, rt_str("LAST", 4))) {
(*F->r_549) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1310))), rt_str(").hi", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1306, rt_str("LENGTH", 6))) {
(*F->t_548) = F->up->ty_int_145;
(*F->r_549) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("RT_CNT(", 7), (*(P133)rt_nil_check(F->v_1310))), 41));
goto ret_;
}
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_546)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1306), rt_str(" is not handled here", 20)));
ret_:

  return;
}

static void f_allocator_555(struct f_greenc_1fr *up_, P159 e_551, P115 want_552, P115 *t_553, P133 *r_554) {
  struct f_allocator_555fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_551 = e_551;
F->want_552 = want_552;
F->t_553 = t_553;
F->r_554 = r_554;
F->y_1314 = NULL;
F->y_1314 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_551)).name_)));
F->target_1315 = NULL;
F->vt_1316 = NULL;
F->ct_1317 = NULL;
F->pt_1318 = NULL;
F->cell_1319 = NULL;
F->v_1320 = NULL;
F->x_1321 = NULL;
if (((F->want_552 == NULL) || ((*(P115)rt_nil_check(F->want_552)).kind_ != F->up->t_ptr_82))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_551)).line_, rt_str("the access type of this allocator is not known here", 51));
}
if (((F->y_1314 == NULL) || ((*(P110)rt_nil_check(F->y_1314)).kind_ != F->up->y_type_94))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_551)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_551)).name_)), rt_str(" is not a type", 14)));
}
f_finish_ptr_380(F->up, F->want_552);
F->target_1315 = (*(P115)rt_nil_check(F->want_552)).target_;
f_check_type_352(F->up, (*(P110)rt_nil_check(F->y_1314)).t_, F->target_1315, (*(P159)rt_nil_check(F->e_551)).line_);
f_ctype_357(F->up, F->target_1315, &F->ct_1317);
f_ctype_357(F->up, F->want_552, &F->pt_1318);
f_new_name_181(F->up, rt_str("cell", 4), &F->cell_1319);
if (((*(P159)rt_nil_check(F->e_551)).a_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_551)).line_, rt_str("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_171 != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_551)).line_, rt_str("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_551)).a_)).kind_ == F->up->n_agg_20)) {
f_aggregate_560(F->up, (*(P159)rt_nil_check(F->e_551)).a_, F->target_1315, &F->vt_1316, &F->v_1320);
} else {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->e_551)).a_, F->target_1315, &F->vt_1316, &F->v_1320);
}
f_check_type_352(F->up, F->vt_1316, F->target_1315, (*(P159)rt_nil_check(F->e_551)).line_);
f_copy_code_396(F->up, F->target_1315, (*(P133)rt_nil_check(F->v_1320)), &F->x_1321);
(*F->t_553) = F->want_552;
(*F->r_554) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1317))), rt_str(" *", 2)), (*(P133)rt_nil_check(F->cell_1319))), rt_str(" = rt_alloc(sizeof(", 19)), (*(P133)rt_nil_check(F->ct_1317))), rt_str(")); *", 5)), (*(P133)rt_nil_check(F->cell_1319))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1321))), rt_str("; (", 3)), (*(P133)rt_nil_check(F->pt_1318))), 41), (*(P133)rt_nil_check(F->cell_1319))), rt_str("; })", 4)));
ret_:

  return;
}

static void f_aggregate_560(struct f_greenc_1fr *up_, P159 e_556, P115 want_557, P115 *t_558, P133 *r_559) {
  struct f_aggregate_560fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_556 = e_556;
F->want_557 = want_557;
F->t_558 = t_558;
F->r_559 = r_559;
F->it_1322 = NULL;
F->it_1322 = (*(P159)rt_nil_check(F->e_556)).a_;
F->f_1323 = NULL;
F->vt_1324 = NULL;
F->ct_1325 = NULL;
F->tmp_1326 = NULL;
F->v_1327 = NULL;
F->x_1328 = NULL;
F->parts_1329 = NULL;
F->et_1330 = NULL;
F->lo_1331 = NULL;
F->hi_1332 = NULL;
F->key_1333 = NULL;
F->lab_1335 = NULL;
if ((F->want_557 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_556)).line_, rt_str("the type of this aggregate is not known here", 44));
}
(*F->t_558) = F->want_557;
f_ctype_357(F->up, F->want_557, &F->ct_1325);
f_new_name_181(F->up, rt_str("ag", 2), &F->tmp_1326);
if (((*(P115)rt_nil_check(F->want_557)).kind_ == F->up->t_record_81)) {
F->parts_1329 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1325))), 32), (*(P133)rt_nil_check(F->tmp_1326))), 59));
if ((f_list_len_226(F->up, F->it_1322) != f_field_count_354(F->up, F->want_557))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_556)).line_, rt_str_cat(rt_str("an aggregate gives every component of ", 38), f_kind_name_348(F->up, F->want_557)));
}
F->f_1323 = (*(P115)rt_nil_check(F->want_557)).fields_;
while ((F->it_1322 != NULL)) {
if (((*(P159)rt_nil_check(F->it_1322)).a_ != NULL)) {
F->f_1323 = (*(P115)rt_nil_check(F->want_557)).fields_;
while (((F->f_1323 != NULL) && (!(((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1322)).a_)).a_)).kind_ == F->up->n_name_13) && rt_str_eq((*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1323)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1322)).a_)).a_)).name_))))))) {
F->f_1323 = (*(P1034)rt_nil_check(F->f_1323)).next_;
}
L_end_1337: ;
if ((F->f_1323 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_556)).line_, rt_str("no such component in the aggregate", 34));
}
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->it_1322)).b_, (*(P1034)rt_nil_check(F->f_1323)).t_, &F->vt_1324, &F->v_1327);
f_check_type_352(F->up, F->vt_1324, (*(P1034)rt_nil_check(F->f_1323)).t_, (*(P159)rt_nil_check(F->e_556)).line_);
f_copy_code_396(F->up, (*(P1034)rt_nil_check(F->f_1323)).t_, (*(P133)rt_nil_check(F->v_1327)), &F->x_1328);
F->parts_1329 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1329)), 32), (*(P133)rt_nil_check(F->tmp_1326))), 46), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1034)rt_nil_check(F->f_1323)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1328))), 59));
F->it_1322 = (*(P159)rt_nil_check(F->it_1322)).next_;
if ((F->f_1323 != NULL)) {
F->f_1323 = (*(P1034)rt_nil_check(F->f_1323)).next_;
}
}
L_end_1336: ;
(*F->r_559) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1329)), 32), (*(P133)rt_nil_check(F->tmp_1326))), rt_str("; })", 4)));
goto ret_;
}
if (((*(P115)rt_nil_check(F->want_557)).kind_ != F->up->t_array_80)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_556)).line_, rt_str("an aggregate builds a record or an array", 40));
}
f_ctype_357(F->up, (*(P115)rt_nil_check(F->want_557)).elem_, &F->et_1330);
if (((*(P159)rt_nil_check(F->it_1322)).a_ == NULL)) {
if ((((*(P115)rt_nil_check(F->want_557)).tcons_ != NULL) && ((*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_557)).tcons_)).lo_ != NULL))) {
F->lo_1331 = (*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_557)).tcons_)).lo_;
} else {
F->lo_1331 = f_mk_178(F->up, rt_str("1", 1));
}
F->n_1334 = f_list_len_226(F->up, F->it_1322);
F->parts_1329 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1325))), 32), (*(P133)rt_nil_check(F->tmp_1326))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1331))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->lo_1331))), rt_str(" + ", 3)), rt_str_of_int(rt_sub(F->n_1334, ((rt_int)1LL)))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1330))), rt_str(") * ", 4)), rt_str_of_int(rt_add(F->n_1334, ((rt_int)1LL)))), rt_str(");", 2)));
F->n_1334 = ((rt_int)0LL);
while ((F->it_1322 != NULL)) {
if (((*(P159)rt_nil_check(F->it_1322)).a_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_556)).line_, rt_str("named associations follow the positional ones", 45));
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->it_1322)).b_, (*(P115)rt_nil_check(F->want_557)).elem_, &F->vt_1324, &F->v_1327);
f_check_type_352(F->up, F->vt_1324, (*(P115)rt_nil_check(F->want_557)).elem_, (*(P159)rt_nil_check(F->e_556)).line_);
f_copy_code_396(F->up, (*(P115)rt_nil_check(F->want_557)).elem_, (*(P133)rt_nil_check(F->v_1327)), &F->x_1328);
F->parts_1329 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1329)), 32), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".p[", 3)), rt_str_of_int(F->n_1334)), rt_str("] = ", 4)), (*(P133)rt_nil_check(F->x_1328))), 59));
F->n_1334 = rt_add(F->n_1334, ((rt_int)1LL));
F->it_1322 = (*(P159)rt_nil_check(F->it_1322)).next_;
}
L_end_1338: ;
(*F->r_559) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1329)), 32), (*(P133)rt_nil_check(F->tmp_1326))), rt_str("; })", 4)));
goto ret_;
}
if ((((*(P115)rt_nil_check(F->want_557)).tcons_ != NULL) && ((*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_557)).tcons_)).hi_ != NULL))) {
F->lo_1331 = (*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_557)).tcons_)).lo_;
F->hi_1332 = (*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_557)).tcons_)).hi_;
} else if (((((*(P159)rt_nil_check(F->it_1322)).next_ == NULL) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1322)).a_)).flag_ != ((rt_int)1LL))) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1322)).a_)).b_ != NULL))) {
f_gexpr_515(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1322)).a_)).a_, (*(P115)rt_nil_check(F->want_557)).idx_, &F->vt_1324, &F->lo_1331);
f_gexpr_515(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1322)).a_)).b_, (*(P115)rt_nil_check(F->want_557)).idx_, &F->vt_1324, &F->hi_1332);
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_556)).line_, rt_str("the bounds of this aggregate are not known", 42));
}
F->parts_1329 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1325))), 32), (*(P133)rt_nil_check(F->tmp_1326))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1331))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->hi_1332))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1330))), rt_str(") * (size_t)(RT_CNT(", 20)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(") + 1));", 8)));
while ((F->it_1322 != NULL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->it_1322)).b_, (*(P115)rt_nil_check(F->want_557)).elem_, &F->vt_1324, &F->v_1327);
f_check_type_352(F->up, F->vt_1324, (*(P115)rt_nil_check(F->want_557)).elem_, (*(P159)rt_nil_check(F->e_556)).line_);
f_copy_code_396(F->up, (*(P115)rt_nil_check(F->want_557)).elem_, (*(P133)rt_nil_check(F->v_1327)), &F->x_1328);
F->lab_1335 = (*(P159)rt_nil_check(F->it_1322)).a_;
while ((F->lab_1335 != NULL)) {
if (((*(P159)rt_nil_check(F->lab_1335)).flag_ == ((rt_int)1LL))) {
F->parts_1329 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1329)), rt_str(" for (rt_int k_ = 0; k_ < RT_CNT(", 33)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str("); k_++) ", 9)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".p[k_] = ", 9)), (*(P133)rt_nil_check(F->x_1328))), 59));
} else if (((*(P159)rt_nil_check(F->lab_1335)).b_ != NULL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->lab_1335)).a_, (*(P115)rt_nil_check(F->want_557)).idx_, &F->vt_1324, &F->key_1333);
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->lab_1335)).b_, (*(P115)rt_nil_check(F->want_557)).idx_, &F->vt_1324, &F->hi_1332);
F->parts_1329 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1329)), rt_str(" for (rt_int k_ = ", 18)), (*(P133)rt_nil_check(F->key_1333))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1332))), rt_str("; k_++) ", 8)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".p[rt_index(k_, ", 16)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1328))), 59));
} else {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->lab_1335)).a_, (*(P115)rt_nil_check(F->want_557)).idx_, &F->vt_1324, &F->key_1333);
F->parts_1329 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1329)), 32), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->key_1333))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1326))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1328))), 59));
}
F->lab_1335 = (*(P159)rt_nil_check(F->lab_1335)).next_;
}
L_end_1340: ;
F->it_1322 = (*(P159)rt_nil_check(F->it_1322)).next_;
}
L_end_1339: ;
(*F->r_559) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1329)), 32), (*(P133)rt_nil_check(F->tmp_1326))), rt_str("; })", 4)));
ret_:

  return;
}

static P159 f_actual_for_564(struct f_greenc_1fr *up_, P159 args_561, P1023 pm_562, P1023 first_563) {
  struct f_actual_for_564fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_561 = args_561;
F->pm_562 = pm_562;
F->first_563 = first_563;
F->a_1341 = NULL;
F->a_1341 = F->args_561;
F->p_1342 = NULL;
F->p_1342 = F->first_563;
while (((F->a_1341 != NULL) && ((*(P159)rt_nil_check(F->a_1341)).tag_ == NULL))) {
if ((F->p_1342 == F->pm_562)) {
F->result_ = F->a_1341;
goto ret_;
}
F->p_1342 = (*(P1023)rt_nil_check(F->p_1342)).next_;
F->a_1341 = (*(P159)rt_nil_check(F->a_1341)).next_;
}
L_end_1343: ;
while ((F->a_1341 != NULL)) {
if ((((*(P159)rt_nil_check(F->a_1341)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1341)).tag_)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_562)).name_))))) {
F->result_ = F->a_1341;
goto ret_;
}
F->a_1341 = (*(P159)rt_nil_check(F->a_1341)).next_;
}
L_end_1344: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_569(struct f_greenc_1fr *up_, P159 e_565, int is_stmt_566, P115 *t_567, P133 *r_568) {
  struct f_gcall_569fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_565 = e_565;
F->is_stmt_566 = is_stmt_566;
F->t_567 = t_567;
F->r_568 = r_568;
F->fn_1345 = NULL;
F->fn_1345 = (*(P159)rt_nil_check(F->e_565)).a_;
F->nm_1346 = NULL;
F->y_1347 = NULL;
F->args_1348 = NULL;
F->lv_1349 = NULL;
F->v_1350 = NULL;
F->ct_1351 = NULL;
F->x_1352 = NULL;
F->a_1353 = NULL;
F->pm_1354 = NULL;
F->lt_1355 = NULL;
F->vt_1356 = NULL;
F->lc_1357 = NULL;
if ((((*(P159)rt_nil_check(F->fn_1345)).kind_ == F->up->n_select_17) && f_is_package_583(F->up, (*(P159)rt_nil_check(F->fn_1345)).a_))) {
F->nm_1346 = f_nn_220(F->up, F->up->n_name_13, (*(P159)rt_nil_check(F->fn_1345)).line_);
(*(P159)rt_nil_check(F->nm_1346)).name_ = (*(P159)rt_nil_check(F->fn_1345)).name_;
(*(P159)rt_nil_check(F->nm_1346)).tag_ = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).a_)).name_;
F->fn_1345 = F->nm_1346;
}
if (((*(P159)rt_nil_check(F->fn_1345)).kind_ != F->up->n_name_13)) {
f_other_call_699(F->up, F->e_565, F->is_stmt_566, &(*F->t_567), &(*F->r_568));
goto ret_;
}
F->y_1347 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)));
if (((*(P159)rt_nil_check(F->fn_1345)).tag_ != NULL)) {
F->y_1347 = f_member_of_587(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)), (*(P159)rt_nil_check(F->fn_1345)).line_);
}
if ((F->y_1347 == NULL)) {
f_builtin_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)), (*(P159)rt_nil_check(F->e_565)).b_, (*(P159)rt_nil_check(F->e_565)).line_, F->is_stmt_566, &(*F->t_567), &(*F->r_568));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1347)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1347)).kind_ == F->up->y_proc_93)) && ((*(P159)rt_nil_check(F->fn_1345)).tag_ == NULL))) {
f_resolve_overload_618(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)), (*(P159)rt_nil_check(F->e_565)).b_, F->is_stmt_566, F->up->call_want_170, (*(P159)rt_nil_check(F->e_565)).line_, &F->y_1347);
if ((F->y_1347 == NULL)) {
f_builtin_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)), (*(P159)rt_nil_check(F->e_565)).b_, (*(P159)rt_nil_check(F->e_565)).line_, F->is_stmt_566, &(*F->t_567), &(*F->r_568));
goto ret_;
}
}
if (((*(P110)rt_nil_check(F->y_1347)).kind_ == F->up->y_entry_99)) {
f_other_call_699(F->up, F->e_565, F->is_stmt_566, &(*F->t_567), &(*F->r_568));
goto ret_;
}
if ((((*(P110)rt_nil_check(F->y_1347)).kind_ != F->up->y_func_92) && ((*(P110)rt_nil_check(F->y_1347)).kind_ != F->up->y_proc_93))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_565)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)), rt_str(" cannot be called", 17)));
}
if ((F->is_stmt_566 && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1347)).result_)).kind_ != F->up->t_void_83))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_565)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_566) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1347)).result_)).kind_ == F->up->t_void_83))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_565)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1345)).name_)), rt_str(" is a procedure, not a function", 31)));
}
f_gcall_with_574(F->up, F->e_565, F->y_1347, &(*F->t_567), &(*F->r_568));
ret_:

  return;
}

static void f_gcall_with_574(struct f_greenc_1fr *up_, P159 e_570, P110 y_571, P115 *t_572, P133 *r_573) {
  struct f_gcall_with_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_570 = e_570;
F->y_571 = y_571;
F->t_572 = t_572;
F->r_573 = r_573;
F->args_1359 = NULL;
F->lv_1360 = NULL;
F->v_1361 = NULL;
F->a_1362 = NULL;
F->pm_1363 = NULL;
F->lt_1364 = NULL;
F->vt_1365 = NULL;
F->lc_1366 = NULL;
f_check_call_rules_754(F->up, F->e_570, F->y_571);
F->args_1359 = f_mk_178(F->up, rt_str("", 0));
if (((*(P110)rt_nil_check(F->y_571)).level_ > ((rt_int)0LL))) {
f_link_to_473(F->up, (*(P110)rt_nil_check(F->y_571)).level_, &F->args_1359);
}
F->pm_1363 = (*(P110)rt_nil_check(F->y_571)).params_;
while ((F->pm_1363 != NULL)) {
F->a_1362 = f_actual_for_564(F->up, (*(P159)rt_nil_check(F->e_570)).b_, F->pm_1363, (*(P110)rt_nil_check(F->y_571)).params_);
if ((((*(P133)rt_nil_check(F->args_1359))).len > ((rt_int)0LL))) {
F->args_1359 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1359)), rt_str(", ", 2)));
}
if ((F->a_1362 == NULL)) {
if ((((*(P1023)rt_nil_check(F->pm_1363)).dflt_ == NULL) || ((*(P1023)rt_nil_check(F->pm_1363)).mode_ != F->up->m_in_72))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_570)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).name_))));
}
f_gexpr_515(F->up, (*(P1023)rt_nil_check(F->pm_1363)).dflt_, (*(P1023)rt_nil_check(F->pm_1363)).t_, &F->vt_1365, &F->v_1361);
F->args_1359 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1359)), (*(P133)rt_nil_check(F->v_1361))));
} else {
if (((((*(P159)rt_nil_check(F->a_1362)).flag_ != ((rt_int)0LL)) && ((*(P159)rt_nil_check(F->a_1362)).flag_ != ((rt_int)4LL))) && ((*(P159)rt_nil_check(F->a_1362)).flag_ != (*(P1023)rt_nil_check(F->pm_1363)).mode_))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_570)).line_, rt_str_cat(rt_str_cat(rt_str("the association of ", 19), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).name_))), rt_str(" does not match its mode", 24)));
}
if (((*(P1023)rt_nil_check(F->pm_1363)).mode_ == F->up->m_in_72)) {
f_gexpr_515(F->up, F->a_1362, (*(P1023)rt_nil_check(F->pm_1363)).t_, &F->vt_1365, &F->v_1361);
f_check_type_352(F->up, F->vt_1365, (*(P1023)rt_nil_check(F->pm_1363)).t_, (*(P159)rt_nil_check(F->e_570)).line_);
if (((((*(P1023)rt_nil_check(F->pm_1363)).c_ != NULL) && ((*(P163)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).c_)).lo_ != NULL)) && (((*(P115)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).t_)).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).t_)).kind_ == F->up->t_enum_78)))) {
F->v_1361 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1361))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).c_)).hi_))), 41));
}
F->args_1359 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1359)), (*(P133)rt_nil_check(F->v_1361))));
} else {
f_lvalue_487(F->up, F->a_1362, &F->lv_1360, &F->lt_1364, &F->lc_1366, &F->ro_1367);
if (F->ro_1367) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_570)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1363)).name_)), rt_str(" needs a variable", 17)));
}
f_check_pure_target_737(F->up, F->a_1362, (*(P159)rt_nil_check(F->e_570)).line_);
f_check_type_352(F->up, F->lt_1364, (*(P1023)rt_nil_check(F->pm_1363)).t_, (*(P159)rt_nil_check(F->e_570)).line_);
F->args_1359 = f_mk_178(F->up, rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->args_1359)), 38), (*(P133)rt_nil_check(F->lv_1360))));
}
}
F->pm_1363 = (*(P1023)rt_nil_check(F->pm_1363)).next_;
}
L_end_1368: ;
if (((f_list_len_226(F->up, (*(P159)rt_nil_check(F->e_570)).b_) > ((rt_int)0LL)) && ((*(P110)rt_nil_check(F->y_571)).params_ == NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_570)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_571)).name_)), rt_str(" takes no parameters", 20)));
}
(*F->t_572) = (*(P110)rt_nil_check(F->y_571)).result_;
(*F->r_573) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_571)).cname_)), 40), (*(P133)rt_nil_check(F->args_1359))), 41));
ret_:

  return;
}

static void f_builtin_581(struct f_greenc_1fr *up_, rstr name_575, P159 args_576, rt_int line_577, int is_stmt_578, P115 *t_579, P133 *r_580) {
  struct f_builtin_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_575 = rt_str_copy(name_575);
F->args_576 = args_576;
F->line_577 = line_577;
F->is_stmt_578 = is_stmt_578;
F->t_579 = t_579;
F->r_580 = r_580;
F->aty_1369 = NULL;
F->lt_1370 = NULL;
F->a_1371 = NULL;
F->w_1372 = NULL;
F->lv_1373 = NULL;
F->lc_1374 = NULL;
(*F->t_579) = F->up->ty_void_150;
if (((F->up->pure_sym_171 != NULL) && (rt_str_eq(F->name_575, rt_str("PUT", 3)) || rt_str_eq(F->name_575, rt_str("GET", 3))))) {
f_fail_195(F->up, F->line_577, rt_str_cat(rt_str_cat(rt_str("a function cannot do input-output: ", 35), F->name_575), rt_str(" has side effects (RM79 6.5)", 28)));
}
if (rt_str_eq(F->name_575, rt_str("PUT", 3))) {
if ((F->args_576 == NULL)) {
f_fail_195(F->up, F->line_577, rt_str("PUT needs an item", 17));
}
f_gexpr_515(F->up, F->args_576, NULL, &F->aty_1369, &F->a_1371);
F->w_1372 = f_mk_178(F->up, rt_str("0", 1));
if (((*(P159)rt_nil_check(F->args_576)).next_ != NULL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->args_576)).next_, F->up->ty_int_145, &F->lt_1370, &F->w_1372);
}
if (((*(P115)rt_nil_check(F->aty_1369)).kind_ == F->up->t_string_79)) {
(*F->r_580) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_put(", 9), (*(P133)rt_nil_check(F->a_1371))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1369)).kind_ == F->up->t_char_85)) {
(*F->r_580) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_putc(", 10), (*(P133)rt_nil_check(F->a_1371))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1369)).kind_ == F->up->t_int_75)) {
(*F->r_580) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_int(", 13), (*(P133)rt_nil_check(F->a_1371))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1372))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1369)).kind_ == F->up->t_bool_76)) {
(*F->r_580) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_bool(", 14), (*(P133)rt_nil_check(F->a_1371))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1372))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1369)).kind_ == F->up->t_float_77)) {
(*F->r_580) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_float(", 15), (*(P133)rt_nil_check(F->a_1371))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1372))), rt_str(", 0)", 4)));
} else {
f_fail_195(F->up, F->line_577, rt_str("PUT of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_575, rt_str("GET", 3))) {
f_lvalue_487(F->up, F->args_576, &F->lv_1373, &F->lt_1370, &F->lc_1374, &F->ro_1375);
if (((*(P115)rt_nil_check(F->lt_1370)).kind_ == F->up->t_char_85)) {
(*F->r_580) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1373))), rt_str(" = rt_g_getc())", 15)));
} else if (((*(P115)rt_nil_check(F->lt_1370)).kind_ == F->up->t_int_75)) {
(*F->r_580) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1373))), rt_str(" = rt_g_get_int())", 18)));
} else if (((*(P115)rt_nil_check(F->lt_1370)).kind_ == F->up->t_float_77)) {
(*F->r_580) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1373))), rt_str(" = rt_g_get_float())", 20)));
} else {
f_fail_195(F->up, F->line_577, rt_str("GET of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_575, rt_str("ABS", 3))) {
f_gexpr_515(F->up, F->args_576, NULL, &(*F->t_579), &F->a_1371);
if (((*(P115)rt_nil_check((*F->t_579))).kind_ == F->up->t_int_75)) {
(*F->r_580) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_abs(", 7), (*(P133)rt_nil_check(F->a_1371))), 41));
} else {
(*F->r_580) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("fabs(", 5), (*(P133)rt_nil_check(F->a_1371))), 41));
}
} else {
f_task_builtin_714(F->up, F->name_575, F->args_576, F->line_577, &(*F->t_579), &(*F->r_580));
}
ret_:

  return;
}

static int f_is_package_583(struct f_greenc_1fr *up_, P159 e_582) {
  struct f_is_package_583fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_582 = e_582;
F->y_1376 = NULL;
if (((*(P159)rt_nil_check(F->e_582)).kind_ != F->up->n_name_13)) {
F->result_ = 0;
goto ret_;
}
F->y_1376 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_582)).name_)));
F->result_ = ((F->y_1376 != NULL) && (((*(P110)rt_nil_check(F->y_1376)).kind_ == F->up->y_package_97) || ((*(P110)rt_nil_check(F->y_1376)).kind_ == F->up->y_task_98)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_member_of_587(struct f_greenc_1fr *up_, rstr p_584, rstr name_585, rt_int line_586) {
  struct f_member_of_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_584 = rt_str_copy(p_584);
F->name_585 = rt_str_copy(name_585);
F->line_586 = line_586;
F->y_1377 = NULL;
F->y_1377 = f_lookup_319(F->up, F->p_584);
F->m_1378 = NULL;
if (((F->y_1377 == NULL) || (((*(P110)rt_nil_check(F->y_1377)).kind_ != F->up->y_package_97) && ((*(P110)rt_nil_check(F->y_1377)).kind_ != F->up->y_task_98)))) {
F->result_ = NULL;
goto ret_;
}
F->m_1378 = (*(P110)rt_nil_check(F->y_1377)).members_;
while ((F->m_1378 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1378)).name_)), F->name_585) && (!(*(P110)rt_nil_check(F->m_1378)).hidden_))) {
F->result_ = F->m_1378;
goto ret_;
}
F->m_1378 = (*(P110)rt_nil_check(F->m_1378)).mnext_;
}
L_end_1379: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_589(struct f_greenc_1fr *up_, P159 p_588) {
  struct f_inside_package_589fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_588 = p_588;
F->l_1380 = NULL;
F->l_1380 = F->up->pkg_stack_167;
if ((F->p_588 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_1380 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P140)rt_nil_check(F->l_1380)).s_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_588)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_1380 = (*(P140)rt_nil_check(F->l_1380)).next_;
}
L_end_1381: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_592(struct f_greenc_1fr *up_, P110 y_590, P110 *z_591) {
  struct f_copy_sym_592fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_590 = y_590;
F->z_591 = z_591;
(*F->z_591) = ({ R111 *cell1382 = rt_alloc(sizeof(R111)); *cell1382 = cp_R111(({ R111 ag1383; ag1383.kind_ = (*(P110)rt_nil_check(F->y_590)).kind_; ag1383.name_ = (*(P110)rt_nil_check(F->y_590)).name_; ag1383.t_ = (*(P110)rt_nil_check(F->y_590)).t_; ag1383.c_ = (*(P110)rt_nil_check(F->y_590)).c_; ag1383.access_path_ = (*(P110)rt_nil_check(F->y_590)).access_path_; ag1383.cname_ = (*(P110)rt_nil_check(F->y_590)).cname_; ag1383.ro_ = (*(P110)rt_nil_check(F->y_590)).ro_; ag1383.mvalue_ = (*(P110)rt_nil_check(F->y_590)).mvalue_; ag1383.hasmv_ = (*(P110)rt_nil_check(F->y_590)).hasmv_; ag1383.decl_ = (*(P110)rt_nil_check(F->y_590)).decl_; ag1383.params_ = (*(P110)rt_nil_check(F->y_590)).params_; ag1383.result_ = (*(P110)rt_nil_check(F->y_590)).result_; ag1383.depth_ = ((rt_int)0LL); ag1383.level_ = (*(P110)rt_nil_check(F->y_590)).level_; ag1383.byref_ = (*(P110)rt_nil_check(F->y_590)).byref_; ag1383.vrp_ = (*(P110)rt_nil_check(F->y_590)).vrp_; ag1383.hidden_ = (*(P110)rt_nil_check(F->y_590)).hidden_; ag1383.members_ = (*(P110)rt_nil_check(F->y_590)).members_; ag1383.mnext_ = NULL; ag1383.chain_ = NULL; ag1383.stack_ = NULL; ag1383; })); (P110)cell1382; });
ret_:

  return;
}

static void f_complete_private_595(struct f_greenc_1fr *up_, P115 ph_593, P115 full_594) {
  struct f_complete_private_595fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_593 = ph_593;
F->full_594 = full_594;
F->n_1384 = NULL;
F->n_1384 = (*(P115)rt_nil_check(F->ph_593)).name_;
F->p_1385 = NULL;
F->p_1385 = (*(P115)rt_nil_check(F->ph_593)).decl_;
as_R116(&(*(P115)rt_nil_check(F->ph_593)), (*(P115)rt_nil_check(F->full_594)));
(*(P115)rt_nil_check(F->ph_593)).name_ = F->n_1384;
(*(P115)rt_nil_check(F->ph_593)).priv_ = 1;
(*(P115)rt_nil_check(F->ph_593)).decl_ = F->p_1385;
ret_:

  return;
}

static void f_package_spec_597(struct f_greenc_1fr *up_, P159 e_596) {
  struct f_package_spec_597fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_596 = e_596;
F->y_1386 = NULL;
F->m_1387 = NULL;
F->z_1388 = NULL;
F->saved_1389 = NULL;
F->saved_1389 = F->up->cur_pkg_168;
F->first_private_1390 = NULL;
F->y_1386 = f_new_sym_343(F->up, F->up->y_package_97, (*(P159)rt_nil_check(F->e_596)).name_);
(*(P110)rt_nil_check(F->y_1386)).decl_ = F->e_596;
F->up->pkg_stack_167 = ({ R141 *cell1391 = rt_alloc(sizeof(R141)); *cell1391 = cp_R141(({ R141 ag1392; ag1392.s_ = (*(P159)rt_nil_check(F->e_596)).name_; ag1392.next_ = F->up->pkg_stack_167; ag1392; })); (P140)cell1391; });
F->up->cur_pkg_168 = F->e_596;
f_open_scope_339(F->up);
f_decl_elements_423(F->up, (*(P159)rt_nil_check(F->e_596)).c_);
F->first_private_1390 = F->up->scope_stack_114;
f_decl_elements_423(F->up, (*(P159)rt_nil_check(F->e_596)).d_);
F->m_1387 = F->up->scope_stack_114;
while (((F->m_1387 != NULL) && ((*(P110)rt_nil_check(F->m_1387)).depth_ == F->up->depth_113))) {
f_copy_sym_592(F->up, F->m_1387, &F->z_1388);
(*(P110)rt_nil_check(F->z_1388)).hidden_ = f_hidden_from_600(F->up, F->m_1387, F->first_private_1390);
(*(P110)rt_nil_check(F->z_1388)).mnext_ = (*(P110)rt_nil_check(F->y_1386)).members_;
(*(P110)rt_nil_check(F->y_1386)).members_ = F->z_1388;
F->m_1387 = (*(P110)rt_nil_check(F->m_1387)).stack_;
}
L_end_1393: ;
f_close_scope_340(F->up);
F->up->pkg_stack_167 = (*(P140)rt_nil_check(F->up->pkg_stack_167)).next_;
F->up->cur_pkg_168 = F->saved_1389;
f_define_338(F->up, F->y_1386, (*(P159)rt_nil_check(F->e_596)).line_);
ret_:

  return;
}

static int f_hidden_from_600(struct f_greenc_1fr *up_, P110 m_598, P110 first_private_599) {
  struct f_hidden_from_600fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_598 = m_598;
F->first_private_599 = first_private_599;
F->p_1394 = NULL;
F->p_1394 = F->up->scope_stack_114;
while ((F->p_1394 != NULL)) {
if ((F->p_1394 == F->first_private_599)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_1394 == F->m_598)) {
F->result_ = 1;
goto ret_;
}
F->p_1394 = (*(P110)rt_nil_check(F->p_1394)).stack_;
}
L_end_1395: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_602(struct f_greenc_1fr *up_, P159 e_601) {
  struct f_package_body_602fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_601 = e_601;
F->y_1396 = NULL;
F->y_1396 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_601)).name_)));
F->m_1397 = NULL;
F->z_1398 = NULL;
F->saved_1399 = NULL;
F->saved_1399 = F->up->cur_pkg_168;
if (((F->y_1396 != NULL) && ((*(P110)rt_nil_check(F->y_1396)).kind_ == F->up->y_generic_100))) {
f_attach_generic_body_765(F->up, F->e_601);
goto ret_;
}
if (((F->y_1396 == NULL) || ((*(P110)rt_nil_check(F->y_1396)).kind_ != F->up->y_package_97))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_601)).line_, rt_str_cat(rt_str_cat(rt_str("package body ", 13), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_601)).name_))), rt_str(" has no specification", 21)));
}
F->up->pkg_stack_167 = ({ R141 *cell1400 = rt_alloc(sizeof(R141)); *cell1400 = cp_R141(({ R141 ag1401; ag1401.s_ = (*(P159)rt_nil_check(F->e_601)).name_; ag1401.next_ = F->up->pkg_stack_167; ag1401; })); (P140)cell1400; });
F->up->cur_pkg_168 = (*(P110)rt_nil_check(F->y_1396)).decl_;
f_open_scope_339(F->up);
F->m_1397 = (*(P110)rt_nil_check(F->y_1396)).members_;
while ((F->m_1397 != NULL)) {
f_copy_sym_592(F->up, F->m_1397, &F->z_1398);
(*(P110)rt_nil_check(F->z_1398)).hidden_ = 0;
f_define_338(F->up, F->z_1398, (*(P159)rt_nil_check(F->e_601)).line_);
F->m_1397 = (*(P110)rt_nil_check(F->m_1397)).mnext_;
}
L_end_1402: ;
f_decl_elements_423(F->up, (*(P159)rt_nil_check(F->e_601)).c_);
F->m_1397 = (*(P110)rt_nil_check(F->y_1396)).members_;
while ((F->m_1397 != NULL)) {
if (((((*(P110)rt_nil_check(F->m_1397)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->m_1397)).kind_ == F->up->y_proc_93)) && ((*(P159)rt_nil_check((*(P110)rt_nil_check(F->m_1397)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_1398 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1397)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1398 != NULL)) {
if (((*(P110)rt_nil_check(F->z_1398)).cname_ == (*(P110)rt_nil_check(F->m_1397)).cname_)) {
(*(P110)rt_nil_check(F->m_1397)).decl_ = (*(P110)rt_nil_check(F->z_1398)).decl_;
}
F->z_1398 = (*(P110)rt_nil_check(F->z_1398)).chain_;
}
L_end_1404: ;
if (((*(P159)rt_nil_check((*(P110)rt_nil_check(F->m_1397)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_601)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no body for ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1397)).name_))), rt_str(" in package body ", 17)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_601)).name_))));
}
}
F->m_1397 = (*(P110)rt_nil_check(F->m_1397)).mnext_;
}
L_end_1403: ;
f_guarded_441(F->up, (*(P159)rt_nil_check(F->e_601)).d_, (*(P159)rt_nil_check(F->e_601)).e_, (*(P159)rt_nil_check(F->e_601)).line_);
f_close_scope_340(F->up);
F->up->pkg_stack_167 = (*(P140)rt_nil_check(F->up->pkg_stack_167)).next_;
F->up->cur_pkg_168 = F->saved_1399;
ret_:

  return;
}

static void f_use_clause_604(struct f_greenc_1fr *up_, P159 e_603) {
  struct f_use_clause_604fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_603 = e_603;
F->n_1405 = NULL;
F->n_1405 = (*(P159)rt_nil_check(F->e_603)).a_;
F->y_1406 = NULL;
F->m_1407 = NULL;
F->z_1408 = NULL;
F->old_1409 = NULL;
while ((F->n_1405 != NULL)) {
F->y_1406 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1405)).name_)));
if ((F->y_1406 == NULL)) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1405)).name_)), rt_str("TEXT_IO", 7)))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->n_1405)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1405)).name_)), rt_str(" is not a package", 17)));
}
} else if (((*(P110)rt_nil_check(F->y_1406)).kind_ != F->up->y_package_97)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->n_1405)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1405)).name_)), rt_str(" is not a package", 17)));
} else {
F->m_1407 = (*(P110)rt_nil_check(F->y_1406)).members_;
while ((F->m_1407 != NULL)) {
F->old_1409 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1407)).name_)));
if (((!(*(P110)rt_nil_check(F->m_1407)).hidden_) && ((F->old_1409 == NULL) || ((((*(P110)rt_nil_check(F->old_1409)).depth_ < F->up->depth_113) && ((*(P110)rt_nil_check(F->old_1409)).kind_ != F->up->y_var_90)) && ((*(P110)rt_nil_check(F->old_1409)).kind_ != F->up->y_const_91))))) {
f_copy_sym_592(F->up, F->m_1407, &F->z_1408);
f_define_338(F->up, F->z_1408, (*(P159)rt_nil_check(F->n_1405)).line_);
}
F->m_1407 = (*(P110)rt_nil_check(F->m_1407)).mnext_;
}
L_end_1411: ;
}
F->n_1405 = (*(P159)rt_nil_check(F->n_1405)).next_;
}
L_end_1410: ;
ret_:

  return;
}

static void f_fits_609(struct f_greenc_1fr *up_, P110 y_605, P159 args_606, P115 want_607, int *ok_608) {
  struct f_fits_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_605 = y_605;
F->args_606 = args_606;
F->want_607 = want_607;
F->ok_608 = ok_608;
F->pm_1412 = NULL;
F->pm_1412 = (*(P110)rt_nil_check(F->y_605)).params_;
F->a_1413 = NULL;
F->t_1414 = NULL;
F->c_1415 = NULL;
F->v_1416 = NULL;
F->saved_1418 = NULL;
F->saved_1418 = F->up->code_129;
F->used_1419 = ((rt_int)0LL);
(*F->ok_608) = 1;
F->up->trial_144 = rt_add(F->up->trial_144, ((rt_int)1LL));
F->up->code_129 = f_new_buffer_196(F->up);
{
{ rt_frame xf1421;
if (RT_TRY(xf1421)) {
while (((*F->ok_608) && (F->pm_1412 != NULL))) {
F->a_1413 = f_actual_for_564(F->up, F->args_606, F->pm_1412, (*(P110)rt_nil_check(F->y_605)).params_);
if ((F->a_1413 == NULL)) {
(*F->ok_608) = ((*(P1023)rt_nil_check(F->pm_1412)).dflt_ != NULL);
} else {
F->used_1419 = rt_add(F->used_1419, ((rt_int)1LL));
if (((((*(P159)rt_nil_check(F->a_1413)).flag_ != ((rt_int)0LL)) && ((*(P159)rt_nil_check(F->a_1413)).flag_ != ((rt_int)4LL))) && ((*(P159)rt_nil_check(F->a_1413)).flag_ != (*(P1023)rt_nil_check(F->pm_1412)).mode_))) {
(*F->ok_608) = 0;
} else if (((*(P1023)rt_nil_check(F->pm_1412)).mode_ == F->up->m_in_72)) {
f_gexpr_515(F->up, F->a_1413, (*(P1023)rt_nil_check(F->pm_1412)).t_, &F->t_1414, &F->v_1416);
(*F->ok_608) = (f_same_332(F->up, F->t_1414, (*(P1023)rt_nil_check(F->pm_1412)).t_) || (((*(P115)rt_nil_check(F->t_1414)).kind_ == F->up->t_nil_84) && ((*(P115)rt_nil_check((*(P1023)rt_nil_check(F->pm_1412)).t_)).kind_ == F->up->t_ptr_82)));
} else {
f_lvalue_487(F->up, F->a_1413, &F->v_1416, &F->t_1414, &F->c_1415, &F->ro_1417);
(*F->ok_608) = f_same_332(F->up, F->t_1414, (*(P1023)rt_nil_check(F->pm_1412)).t_);
}
}
F->pm_1412 = (*(P1023)rt_nil_check(F->pm_1412)).next_;
}
L_end_1423: ;
if ((F->used_1419 != f_list_len_226(F->up, F->args_606))) {
(*F->ok_608) = 0;
}
if ((((*F->ok_608) && (F->want_607 != NULL)) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_605)).result_)).kind_ != F->up->t_void_83))) {
(*F->ok_608) = (f_same_332(F->up, (*(P110)rt_nil_check(F->y_605)).result_, F->want_607) || ((*(P115)rt_nil_check(F->want_607)).kind_ == F->up->t_void_83));
}
RT_POP(xf1421);
} else {
RT_POP(xf1421);
int x1422 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1422);
if (0 || x1422 == ex_compile_error_101) {
(*F->ok_608) = 0;
} else {
rt_raise(x1422);
}
}
}

}
L_end_1420: ;
F->up->trial_144 = rt_sub(F->up->trial_144, ((rt_int)1LL));
F->up->code_129 = F->saved_1418;
ret_:

  return;
}

static int f_is_builtin_611(struct f_greenc_1fr *up_, rstr n_610) {
  struct f_is_builtin_611fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_610 = rt_str_copy(n_610);
F->result_ = (((rt_str_eq(F->n_610, rt_str("PUT", 3)) || rt_str_eq(F->n_610, rt_str("GET", 3))) || rt_str_eq(F->n_610, rt_str("ABS", 3))) || rt_str_eq(F->n_610, rt_str("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_618(struct f_greenc_1fr *up_, rstr name_612, P159 args_613, int is_stmt_614, P115 want_615, rt_int line_616, P110 *y_617) {
  struct f_resolve_overload_618fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_612 = rt_str_copy(name_612);
F->args_613 = args_613;
F->is_stmt_614 = is_stmt_614;
F->want_615 = want_615;
F->line_616 = line_616;
F->y_617 = y_617;
F->z_1424 = NULL;
F->z_1424 = F->up->table_112.p[rt_index(f_hash_317(F->up, F->name_612), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->first_1425 = NULL;
F->n_1426 = ((rt_int)0LL);
{ rt_int lo1430 = ((rt_int)1LL), hi1431 = ((rt_int)2LL);
for (rt_int it1432 = lo1430; it1432 <= hi1431; it1432++) {
F->pass_1429 = it1432;
F->z_1424 = F->up->table_112.p[rt_index(f_hash_317(F->up, F->name_612), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->n_1426 = ((rt_int)0LL);
while ((F->z_1424 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1424)).name_)), F->name_612) && (((*(P110)rt_nil_check(F->z_1424)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->z_1424)).kind_ == F->up->y_proc_93)))) {
F->n_1426 = rt_add(F->n_1426, ((rt_int)1LL));
if ((F->first_1425 == NULL)) {
F->first_1425 = F->z_1424;
}
if ((((*(P115)rt_nil_check((*(P110)rt_nil_check(F->z_1424)).result_)).kind_ == F->up->t_void_83) == F->is_stmt_614)) {
if ((F->pass_1429 == ((rt_int)1LL))) {
f_fits_609(F->up, F->z_1424, F->args_613, F->want_615, &F->ok_1427);
} else {
f_fits_609(F->up, F->z_1424, F->args_613, NULL, &F->ok_1427);
}
if (F->ok_1427) {
(*F->y_617) = F->z_1424;
goto ret_;
}
}
}
F->z_1424 = (*(P110)rt_nil_check(F->z_1424)).chain_;
}
L_end_1433: ;
}
}
L_end_1428: ;
if (f_is_builtin_611(F->up, F->name_612)) {
(*F->y_617) = NULL;
goto ret_;
}
if ((F->n_1426 > ((rt_int)1LL))) {
f_fail_195(F->up, F->line_616, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_612), rt_str(" fits these actual parameters", 29)));
}
(*F->y_617) = F->first_1425;
ret_:

  return;
}

static void f_user_operator_624(struct f_greenc_1fr *up_, P159 e_619, P115 want_620, P115 *t_621, P133 *r_622, int *done_623) {
  struct f_user_operator_624fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_619 = e_619;
F->want_620 = want_620;
F->t_621 = t_621;
F->r_622 = r_622;
F->done_623 = done_623;
F->op_1434 = NULL;
F->op_1434 = (*(P159)rt_nil_check(F->e_619)).name_;
F->negate_1435 = 0;
F->y_1436 = NULL;
F->call_1437 = NULL;
F->fname_1438 = NULL;
F->l_1439 = NULL;
F->rt_1440 = NULL;
(*F->done_623) = 0;
if (rt_str_eq((*(P133)rt_nil_check(F->op_1434)), rt_str("/=", 2))) {
F->op_1434 = f_mk_178(F->up, rt_str("=", 1));
F->negate_1435 = 1;
}
if ((f_lookup_319(F->up, (*(P133)rt_nil_check(F->op_1434))) == NULL)) {
goto ret_;
}
F->l_1439 = f_nn_220(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_619)).a_)).kind_, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_619)).a_)).line_);
as_R160(&(*(P159)rt_nil_check(F->l_1439)), (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_619)).a_)));
(*(P159)rt_nil_check(F->l_1439)).next_ = NULL;
(*(P159)rt_nil_check(F->l_1439)).tag_ = NULL;
(*(P159)rt_nil_check(F->l_1439)).flag_ = ((rt_int)0LL);
if (((*(P159)rt_nil_check(F->e_619)).kind_ == F->up->n_binop_15)) {
F->rt_1440 = f_nn_220(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_619)).b_)).kind_, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_619)).b_)).line_);
as_R160(&(*(P159)rt_nil_check(F->rt_1440)), (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_619)).b_)));
(*(P159)rt_nil_check(F->rt_1440)).next_ = NULL;
(*(P159)rt_nil_check(F->rt_1440)).tag_ = NULL;
(*(P159)rt_nil_check(F->rt_1440)).flag_ = ((rt_int)0LL);
(*(P159)rt_nil_check(F->l_1439)).next_ = F->rt_1440;
}
F->y_1436 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check(F->op_1434))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1436 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1436)).name_)), (*(P133)rt_nil_check(F->op_1434))) && ((*(P110)rt_nil_check(F->y_1436)).kind_ == F->up->y_func_92))) {
f_fits_609(F->up, F->y_1436, F->l_1439, NULL, &F->ok_1441);
if (F->ok_1441) {
F->fname_1438 = f_nn_220(F->up, F->up->n_name_13, (*(P159)rt_nil_check(F->e_619)).line_);
(*(P159)rt_nil_check(F->fname_1438)).name_ = F->op_1434;
F->call_1437 = f_nn_220(F->up, F->up->n_apply_16, (*(P159)rt_nil_check(F->e_619)).line_);
(*(P159)rt_nil_check(F->call_1437)).a_ = F->fname_1438;
(*(P159)rt_nil_check(F->call_1437)).b_ = F->l_1439;
F->up->call_want_170 = NULL;
f_gcall_with_574(F->up, F->call_1437, F->y_1436, &(*F->t_621), &(*F->r_622));
if (F->negate_1435) {
(*F->r_622) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check((*F->r_622)))), 41));
}
(*F->done_623) = 1;
goto ret_;
}
}
F->y_1436 = (*(P110)rt_nil_check(F->y_1436)).chain_;
}
L_end_1442: ;
ret_:

  return;
}

static void f_task_p_626(struct f_greenc_1fr *up_, P159 *res_625) {
  struct f_task_p_626fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_625 = res_625;
F->x_1443 = NULL;
F->line_1444 = f_cur_line_227(F->up);
f_expect_kw_242(F->up, rt_str("TASK", 4));
if (f_at_kw_229(F->up, rt_str("BODY", 4))) {
f_skip_240(F->up);
F->x_1443 = f_nn_220(F->up, F->up->n_taskbody_53, F->line_1444);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1443)).name_);
f_expect_kw_242(F->up, rt_str("IS", 2));
f_body_part_296(F->up, F->x_1443);
} else {
F->x_1443 = f_nn_220(F->up, F->up->n_taskspec_52, F->line_1444);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1443)).name_);
if (((f_at_kw_229(F->up, rt_str("IS", 2)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_759(F->up, F->x_1443, &(*F->res_625));
goto ret_;
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("RANGE", 5)))) {
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_1443)).a_);
} else {
(*(P159)rt_nil_check(F->x_1443)).a_ = f_nn_220(F->up, F->up->n_range_22, F->line_1444);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1443)).a_)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1443)).a_)).b_);
}
f_expect_op_244(F->up, rt_str(")", 1));
}
if (f_at_kw_229(F->up, rt_str("IS", 2))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_1443)).c_);
if (f_at_kw_229(F->up, rt_str("PRIVATE", 7))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_1443)).d_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
}
}
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_625) = F->x_1443;
ret_:

  return;
}

static void f_entry_p_628(struct f_greenc_1fr *up_, P159 *res_627) {
  struct f_entry_p_628fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_627 = res_627;
F->x_1445 = NULL;
f_expect_kw_242(F->up, rt_str("ENTRY", 5));
F->x_1445 = f_nn_220(F->up, F->up->n_entry_54, f_cur_line_227(F->up));
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1445)).name_);
if ((f_at_op_231(F->up, rt_str("(", 1)) && (!((f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_id_3) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_240(F->up);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(")", 1)))) {
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_1445)).b_);
} else {
(*(P159)rt_nil_check(F->x_1445)).b_ = f_nn_220(F->up, F->up->n_range_22, f_cur_line_227(F->up));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1445)).b_)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1445)).b_)).b_);
}
f_expect_op_244(F->up, rt_str(")", 1));
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->x_1445)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_627) = F->x_1445;
ret_:

  return;
}

static void f_accept_p_630(struct f_greenc_1fr *up_, P159 *res_629) {
  struct f_accept_p_630fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_629 = res_629;
F->x_1446 = NULL;
f_expect_kw_242(F->up, rt_str("ACCEPT", 6));
F->x_1446 = f_nn_220(F->up, F->up->n_accept_39, f_cur_line_227(F->up));
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1446)).name_);
if ((f_at_op_231(F->up, rt_str("(", 1)) && (!((f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_id_3) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_1446)).c_);
f_expect_op_244(F->up, rt_str(")", 1));
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->x_1446)).a_);
}
if (f_at_kw_229(F->up, rt_str("DO", 2))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_1446)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_1446)).b_);
f_expect_kw_242(F->up, rt_str("END", 3));
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_629) = F->x_1446;
ret_:

  return;
}

static void f_delay_p_632(struct f_greenc_1fr *up_, P159 *res_631) {
  struct f_delay_p_632fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_631 = res_631;
F->x_1447 = NULL;
f_expect_kw_242(F->up, rt_str("DELAY", 5));
F->x_1447 = f_nn_220(F->up, F->up->n_delay_37, f_cur_line_227(F->up));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->x_1447)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_631) = F->x_1447;
ret_:

  return;
}

static void f_designators_634(struct f_greenc_1fr *up_, P159 *res_633) {
  struct f_designators_634fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_633 = res_633;
F->head_1448 = NULL;
F->tail_1449 = NULL;
F->n_1450 = NULL;
for (;;) {
f_name_p_273(F->up, &F->n_1450);
f_append_224(F->up, &F->head_1448, &F->tail_1449, F->n_1450);
if ((!f_at_op_231(F->up, rt_str(",", 1)))) {
goto L_end_1451;
}
f_skip_240(F->up);
}
L_end_1451: ;
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_633) = F->head_1448;
ret_:

  return;
}

static void f_parse_task_statement_636(struct f_greenc_1fr *up_, P159 *res_635) {
  struct f_parse_task_statement_636fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_635 = res_635;
F->x_1452 = NULL;
F->alt_1453 = NULL;
F->head_1454 = NULL;
F->tail_1455 = NULL;
F->line_1456 = f_cur_line_227(F->up);
(*F->res_635) = NULL;
if (f_at_kw_229(F->up, rt_str("INITIATE", 8))) {
f_skip_240(F->up);
F->x_1452 = f_nn_220(F->up, F->up->n_initiate_38, F->line_1456);
f_designators_634(F->up, &(*(P159)rt_nil_check(F->x_1452)).a_);
(*F->res_635) = F->x_1452;
} else if (f_at_kw_229(F->up, rt_str("ABORT", 5))) {
f_skip_240(F->up);
F->x_1452 = f_nn_220(F->up, F->up->n_abort_41, F->line_1456);
f_designators_634(F->up, &(*(P159)rt_nil_check(F->x_1452)).a_);
(*F->res_635) = F->x_1452;
} else if (f_at_kw_229(F->up, rt_str("DELAY", 5))) {
f_delay_p_632(F->up, &(*F->res_635));
} else if (f_at_kw_229(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_630(F->up, &(*F->res_635));
} else if (f_at_kw_229(F->up, rt_str("SELECT", 6))) {
f_skip_240(F->up);
F->x_1452 = f_nn_220(F->up, F->up->n_selects_40, F->line_1456);
for (;;) {
F->alt_1453 = f_nn_220(F->up, F->up->n_alt_62, f_cur_line_227(F->up));
if (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->alt_1453)).a_);
f_expect_op_244(F->up, rt_str("=>", 2));
}
if (f_at_kw_229(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_630(F->up, &(*(P159)rt_nil_check(F->alt_1453)).b_);
} else if (f_at_kw_229(F->up, rt_str("DELAY", 5))) {
f_delay_p_632(F->up, &(*(P159)rt_nil_check(F->alt_1453)).b_);
} else {
f_perror_239(F->up, rt_str("a select alternative starts with accept or delay", 48));
}
f_statements_303(F->up, &(*(P159)rt_nil_check(F->alt_1453)).c_);
f_append_224(F->up, &F->head_1454, &F->tail_1455, F->alt_1453);
if ((!f_at_kw_229(F->up, rt_str("OR", 2)))) {
goto L_end_1457;
}
f_skip_240(F->up);
}
L_end_1457: ;
if (f_at_kw_229(F->up, rt_str("ELSE", 4))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_1452)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_1452)).b_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("SELECT", 6));
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->x_1452)).a_ = F->head_1454;
(*F->res_635) = F->x_1452;
}
ret_:

  return;
}

static void f_path_at_640(struct f_greenc_1fr *up_, rt_int level_637, rstr field_638, P133 *r_639) {
  struct f_path_at_640fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_637 = level_637;
F->field_638 = rt_str_copy(field_638);
F->r_639 = r_639;
if ((F->level_637 <= ((rt_int)0LL))) {
(*F->r_639) = f_mk_178(F->up, F->field_638);
goto ret_;
}
(*F->r_639) = f_mk_178(F->up, rt_str("F", 1));
{ rt_int lo1460 = ((rt_int)1LL), hi1461 = rt_sub(F->up->cur_level_132, F->level_637);
for (rt_int it1462 = lo1460; it1462 <= hi1461; it1462++) {
F->i_1459 = it1462;
(*F->r_639) = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_639))), rt_str("->up", 4)));
}
}
L_end_1458: ;
(*F->r_639) = f_mk_178(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->r_639))), rt_str("->", 2)), F->field_638));
ret_:

  return;
}

static int f_is_task_name_642(struct f_greenc_1fr *up_, rstr n_641) {
  struct f_is_task_name_642fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_641 = rt_str_copy(n_641);
F->y_1463 = NULL;
F->y_1463 = f_lookup_319(F->up, F->n_641);
F->result_ = ((F->y_1463 != NULL) && ((*(P110)rt_nil_check(F->y_1463)).kind_ == F->up->y_task_98));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_646(struct f_greenc_1fr *up_, P159 e_643, P110 *y_644, P159 *ix_645) {
  struct f_task_of_646fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_643 = e_643;
F->y_644 = y_644;
F->ix_645 = ix_645;
F->n_1464 = NULL;
F->n_1464 = F->e_643;
(*F->ix_645) = NULL;
if (((*(P159)rt_nil_check(F->e_643)).kind_ == F->up->n_apply_16)) {
F->n_1464 = (*(P159)rt_nil_check(F->e_643)).a_;
(*F->ix_645) = (*(P159)rt_nil_check(F->e_643)).b_;
}
if (((*(P159)rt_nil_check(F->n_1464)).kind_ != F->up->n_name_13)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_643)).line_, rt_str("a task name is required", 23));
}
(*F->y_644) = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1464)).name_)));
if ((((*F->y_644) == NULL) || ((*(P110)rt_nil_check((*F->y_644))).kind_ != F->up->y_task_98))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_643)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1464)).name_)), rt_str(" is not a task", 14)));
}
if ((((*F->ix_645) != NULL) && ((*(P110)rt_nil_check((*F->y_644))).c_ == NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_643)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1464)).name_)), rt_str(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_648(struct f_greenc_1fr *up_, P133 *r_647) {
  struct f_own_index_648fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_647 = r_647;
F->y_1465 = NULL;
F->y_1465 = f_lookup_319(F->up, rt_str("INDEX_", 6));
if ((F->y_1465 == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str("not inside the body of a task family", 36));
}
f_access_of_470(F->up, F->y_1465, &(*F->r_647));
ret_:

  return;
}

static void f_member_653(struct f_greenc_1fr *up_, P110 y_649, rstr arr_650, rstr i_651, P133 *r_652) {
  struct f_member_653fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_649 = y_649;
F->arr_650 = rt_str_copy(arr_650);
F->i_651 = rt_str_copy(i_651);
F->r_652 = r_652;
F->lo_1466 = NULL;
F->hi_1467 = NULL;
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_649)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_649)).cname_)), rt_str("lo", 2)), &F->lo_1466);
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_649)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_649)).cname_)), rt_str("hi", 2)), &F->hi_1467);
(*F->r_652) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->arr_650, rt_str("[rt_index(", 10)), F->i_651), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1466))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1467))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1466))), 93));
ret_:

  return;
}

static void f_act_path_656(struct f_greenc_1fr *up_, P110 y_654, P133 *r_655) {
  struct f_act_path_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_654 = y_654;
F->r_655 = r_655;
F->i_1468 = NULL;
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_654)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_654)).cname_)), rt_str("act", 3)), &(*F->r_655));
if (((*(P110)rt_nil_check(F->y_654)).c_ != NULL)) {
f_own_index_648(F->up, &F->i_1468);
f_member_653(F->up, F->y_654, (*(P133)rt_nil_check((*F->r_655))), (*(P133)rt_nil_check(F->i_1468)), &(*F->r_655));
}
ret_:

  return;
}

static void f_act_path_i_660(struct f_greenc_1fr *up_, P110 y_657, rstr i_658, P133 *r_659) {
  struct f_act_path_i_660fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_657 = y_657;
F->i_658 = rt_str_copy(i_658);
F->r_659 = r_659;
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_657)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_657)).cname_)), rt_str("act", 3)), &(*F->r_659));
f_member_653(F->up, F->y_657, (*(P133)rt_nil_check((*F->r_659))), F->i_658, &(*F->r_659));
ret_:

  return;
}

static void f_entry_path_664(struct f_greenc_1fr *up_, P110 y_661, rstr i_662, P133 *r_663) {
  struct f_entry_path_664fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_661 = y_661;
F->i_662 = rt_str_copy(i_662);
F->r_663 = r_663;
F->own_1469 = NULL;
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_661)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_661)).access_path_)), &(*F->r_663));
if ((((*(P110)rt_nil_check(F->y_661)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_661)).members_)).c_ != NULL))) {
if (((F->i_662).len == ((rt_int)0LL))) {
f_own_index_648(F->up, &F->own_1469);
f_member_653(F->up, (*(P110)rt_nil_check(F->y_661)).members_, (*(P133)rt_nil_check((*F->r_663))), (*(P133)rt_nil_check(F->own_1469)), &(*F->r_663));
} else {
f_member_653(F->up, (*(P110)rt_nil_check(F->y_661)).members_, (*(P133)rt_nil_check((*F->r_663))), F->i_662, &(*F->r_663));
}
}
ret_:

  return;
}

static void f_declare_slot_667(struct f_greenc_1fr *up_, rstr ctype_name_665, rstr field_666) {
  struct f_declare_slot_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_665 = rt_str_copy(ctype_name_665);
F->field_666 = rt_str_copy(field_666);
if (F->up->in_func_131) {
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, F->ctype_name_665), 32), F->field_666), 59));
} else {
f_put_to_199(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), F->ctype_name_665), 32), F->field_666), 59));
}
ret_:

  return;
}

static void f_task_decl_669(struct f_greenc_1fr *up_, P159 e_668) {
  struct f_task_decl_669fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_668 = e_668;
if (((*(P159)rt_nil_check(F->e_668)).kind_ == F->up->n_taskspec_52)) {
f_task_spec_681(F->up, F->e_668);
} else if (((*(P159)rt_nil_check(F->e_668)).kind_ == F->up->n_taskbody_53)) {
f_task_body_685(F->up, F->e_668);
} else if (((*(P159)rt_nil_check(F->e_668)).kind_ == F->up->n_entry_54)) {
f_entry_decl_683(F->up, F->e_668);
} else {
f_generic_decl_761(F->up, F->e_668);
}
ret_:

  return;
}

static void f_family_arg_struct_670(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_670fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_158)) {
F->up->famarg_done_158 = 1;
f_put_to_199(F->up, F->up->out_types_121, rt_str("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_674(struct f_greenc_1fr *up_, P159 b_671, P110 y_672, P133 x_673) {
  struct f_family_bounds_674fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_671 = b_671;
F->y_672 = y_672;
F->x_673 = x_673;
F->lo_1470 = NULL;
F->hi_1471 = NULL;
F->v_1472 = NULL;
F->vt_1473 = NULL;
F->c_1474 = NULL;
(*(P110)rt_nil_check(F->y_672)).c_ = f_new_cons_346(F->up);
f_declare_slot_667(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_672)).access_path_)));
f_declare_slot_667(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_672)).cname_)), rt_str("flo", 3)));
f_declare_slot_667(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_672)).cname_)), rt_str("fhi", 3)));
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_672)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_672)).cname_)), rt_str("flo", 3)), &F->lo_1470);
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_672)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_672)).cname_)), rt_str("fhi", 3)), &F->hi_1471);
if (((*(P159)rt_nil_check(F->b_671)).kind_ == F->up->n_range_22)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->b_671)).a_, NULL, &F->vt_1473, &F->v_1472);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1470)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1472))), 59));
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->b_671)).b_, F->vt_1473, &F->vt_1473, &F->v_1472);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->hi_1471)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1472))), 59));
} else {
f_resolve_373(F->up, F->b_671, &F->vt_1473, &F->c_1474);
if (((*(P163)rt_nil_check(F->c_1474)).lo_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->b_671)).line_, rt_str("an entry family needs a discrete range", 38));
}
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1470)), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1474)).lo_))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->hi_1471))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1474)).hi_))), 59));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_673)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1471))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1470))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1471))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1470))), rt_str(" + 1 : 1));", 11)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1471))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1470))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_673))), rt_str("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_679(struct f_greenc_1fr *up_, P110 y_675, rstr base_676, rstr i_677, P133 *r_678) {
  struct f_entry_family_slot_679fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_675 = y_675;
F->base_676 = rt_str_copy(base_676);
F->i_677 = rt_str_copy(i_677);
F->r_678 = r_678;
F->lo_1475 = NULL;
F->hi_1476 = NULL;
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_675)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_675)).cname_)), rt_str("flo", 3)), &F->lo_1475);
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_675)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_675)).cname_)), rt_str("fhi", 3)), &F->hi_1476);
(*F->r_678) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_676, rt_str("[rt_index(", 10)), F->i_677), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1475))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1476))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1475))), 93));
ret_:

  return;
}

static void f_task_spec_681(struct f_greenc_1fr *up_, P159 e_680) {
  struct f_task_spec_681fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_680 = e_680;
F->y_1477 = NULL;
F->m_1478 = NULL;
F->z_1479 = NULL;
F->saved_1480 = NULL;
F->saved_1480 = F->up->cur_task_156;
F->d_1481 = NULL;
F->v_1482 = NULL;
F->p_1483 = NULL;
F->p2_1484 = NULL;
F->vt_1485 = NULL;
F->r_1486 = NULL;
F->y_1477 = f_new_sym_343(F->up, F->up->y_task_98, (*(P159)rt_nil_check(F->e_680)).name_);
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("t_", 2), f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_680)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1477)).cname_);
(*(P110)rt_nil_check(F->y_1477)).decl_ = F->e_680;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1477)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1477)).access_path_ = (*(P110)rt_nil_check(F->y_1477)).cname_;
f_declare_slot_667(F->up, rt_str("rt_taskdecl", 11), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("decl", 4)));
if (((*(P159)rt_nil_check(F->e_680)).a_ != NULL)) {
F->r_1486 = (*(P159)rt_nil_check(F->e_680)).a_;
if (((*(P159)rt_nil_check(F->r_1486)).kind_ == F->up->s_mark_71)) {
F->r_1486 = (*(P159)rt_nil_check(F->r_1486)).a_;
}
(*(P110)rt_nil_check(F->y_1477)).c_ = f_new_cons_346(F->up);
f_declare_slot_667(F->up, rt_str("rt_act *", 8), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("act", 3)));
f_declare_slot_667(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("lo", 2)));
f_declare_slot_667(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("hi", 2)));
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1486)).a_, F->up->ty_int_145, &F->vt_1485, &F->v_1482);
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_1477)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("lo", 2)), &F->p_1483);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1483)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1482))), 59));
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->r_1486)).b_, F->up->ty_int_145, &F->vt_1485, &F->v_1482);
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_1477)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("hi", 2)), &F->p2_1484);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p2_1484)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1482))), 59));
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_1477)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("act", 3)), &F->v_1482);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->v_1482)), rt_str(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P133)rt_nil_check(F->p2_1484))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->p_1483))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->p2_1484))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->p_1483))), rt_str(" + 1 : 1));", 11)));
f_family_arg_struct_670(F->up);
} else {
f_declare_slot_667(F->up, rt_str("rt_act", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_)), rt_str("act", 3)));
}
f_put_to_199(F->up, F->up->out_protos_124, rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_))), rt_str("run(void *a);", 13)));
if ((!F->up->in_func_131)) {
f_put_to_199(F->up, F->up->out_awaits_162, rt_str_cat(rt_str_cat(rt_str("  rt_await_decl(&", 17), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1477)).cname_))), rt_str("decl);", 6)));
}
f_open_scope_339(F->up);
F->up->cur_task_156 = F->y_1477;
f_decl_elements_423(F->up, (*(P159)rt_nil_check(F->e_680)).c_);
f_decl_elements_423(F->up, (*(P159)rt_nil_check(F->e_680)).d_);
F->m_1478 = F->up->scope_stack_114;
while (((F->m_1478 != NULL) && ((*(P110)rt_nil_check(F->m_1478)).depth_ == F->up->depth_113))) {
if ((((*(P110)rt_nil_check(F->m_1478)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->m_1478)).kind_ == F->up->y_proc_93))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_680)).line_, rt_str("procedures in the visible part of a task are not handled", 56));
}
f_copy_sym_592(F->up, F->m_1478, &F->z_1479);
(*(P110)rt_nil_check(F->z_1479)).mnext_ = (*(P110)rt_nil_check(F->y_1477)).members_;
(*(P110)rt_nil_check(F->y_1477)).members_ = F->z_1479;
F->m_1478 = (*(P110)rt_nil_check(F->m_1478)).stack_;
}
L_end_1487: ;
f_close_scope_340(F->up);
F->up->cur_task_156 = F->saved_1480;
f_define_338(F->up, F->y_1477, (*(P159)rt_nil_check(F->e_680)).line_);
ret_:

  return;
}

static void f_entry_decl_683(struct f_greenc_1fr *up_, P159 e_682) {
  struct f_entry_decl_683fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_682 = e_682;
F->y_1488 = NULL;
F->p_1489 = NULL;
F->p_1489 = (*(P159)rt_nil_check(F->e_682)).a_;
F->pm_1490 = NULL;
F->tail_1491 = NULL;
F->fields_1492 = NULL;
F->ct_1493 = NULL;
F->x_1494 = NULL;
F->lo_1495 = NULL;
F->hi_1496 = NULL;
if ((F->up->cur_task_156 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_682)).line_, rt_str("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_1488 = f_new_sym_343(F->up, F->up->y_entry_99, (*(P159)rt_nil_check(F->e_682)).name_);
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("e_", 2), f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_682)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1488)).cname_);
F->fields_1492 = f_mk_178(F->up, rt_str(" int dummy_;", 12));
while ((F->p_1489 != NULL)) {
F->pm_1490 = ({ R1024 *cell1498 = rt_alloc(sizeof(R1024)); *cell1498 = cp_R1024(({ R1024 ag1499; ag1499.name_ = (*(P159)rt_nil_check(F->p_1489)).name_; ag1499.mode_ = (*(P159)rt_nil_check(F->p_1489)).ival_; ag1499.t_ = NULL; ag1499.c_ = NULL; ag1499.cfield_ = NULL; ag1499.dflt_ = NULL; ag1499.next_ = NULL; ag1499; })); (P1023)cell1498; });
f_resolve_373(F->up, (*(P159)rt_nil_check(F->p_1489)).a_, &(*(P1023)rt_nil_check(F->pm_1490)).t_, &(*(P1023)rt_nil_check(F->pm_1490)).c_);
(*(P1023)rt_nil_check(F->pm_1490)).cfield_ = f_mk_178(F->up, f_c_field_191(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_1489)).name_))));
f_ctype_357(F->up, (*(P1023)rt_nil_check(F->pm_1490)).t_, &F->ct_1493);
if (((*(P1023)rt_nil_check(F->pm_1490)).mode_ == F->up->m_in_72)) {
F->fields_1492 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1492)), 32), (*(P133)rt_nil_check(F->ct_1493))), 32), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1490)).cfield_))), 59));
} else {
F->fields_1492 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1492)), 32), (*(P133)rt_nil_check(F->ct_1493))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1490)).cfield_))), 59));
}
if ((F->tail_1491 == NULL)) {
(*(P110)rt_nil_check(F->y_1488)).params_ = F->pm_1490;
} else {
(*(P1023)rt_nil_check(F->tail_1491)).next_ = F->pm_1490;
}
F->tail_1491 = F->pm_1490;
F->p_1489 = (*(P159)rt_nil_check(F->p_1489)).next_;
}
L_end_1497: ;
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1488)).cname_))), rt_str("p {", 3)), (*(P133)rt_nil_check(F->fields_1492))), rt_str(" };", 3)));
(*(P110)rt_nil_check(F->y_1488)).result_ = F->up->ty_void_150;
(*(P110)rt_nil_check(F->y_1488)).decl_ = F->e_682;
(*(P110)rt_nil_check(F->y_1488)).members_ = F->up->cur_task_156;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1488)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1488)).access_path_ = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1488)).cname_)), rt_str("ent", 3)));
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_1488)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1488)).access_path_)), &F->x_1494);
if (((*(P159)rt_nil_check(F->e_682)).b_ != NULL)) {
if (((*(P110)rt_nil_check(F->up->cur_task_156)).c_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_682)).line_, rt_str("an entry family in a task family is not handled", 47));
}
f_family_bounds_674(F->up, (*(P159)rt_nil_check(F->e_682)).b_, F->y_1488, F->x_1494);
} else if (((*(P110)rt_nil_check(F->up->cur_task_156)).c_ != NULL)) {
f_declare_slot_667(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1488)).access_path_)));
f_path_at_640(F->up, (*(P110)rt_nil_check(F->up->cur_task_156)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_156)).cname_)), rt_str("lo", 2)), &F->lo_1495);
f_path_at_640(F->up, (*(P110)rt_nil_check(F->up->cur_task_156)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_156)).cname_)), rt_str("hi", 2)), &F->hi_1496);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_1494)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1496))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1495))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1496))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1495))), rt_str(" + 1 : 1));", 11)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1496))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1495))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_1494))), rt_str("[k_]);", 6)));
} else {
f_declare_slot_667(F->up, rt_str("rt_entry", 8), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1488)).access_path_)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_entry_init(&", 15), (*(P133)rt_nil_check(F->x_1494))), rt_str(");", 2)));
}
f_define_338(F->up, F->y_1488, (*(P159)rt_nil_check(F->e_682)).line_);
ret_:

  return;
}

static void f_task_body_685(struct f_greenc_1fr *up_, P159 e_684) {
  struct f_task_body_685fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_684 = e_684;
F->y_1500 = NULL;
F->y_1500 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_684)).name_)));
F->b_1501 = NULL;
F->m_1502 = NULL;
F->z_1503 = NULL;
F->saved_1504 = NULL;
F->saved_1504 = F->up->cur_task_156;
if (((F->y_1500 != NULL) && ((*(P110)rt_nil_check(F->y_1500)).kind_ == F->up->y_generic_100))) {
f_attach_generic_body_765(F->up, F->e_684);
goto ret_;
}
if (((F->y_1500 == NULL) || ((*(P110)rt_nil_check(F->y_1500)).kind_ != F->up->y_task_98))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_684)).line_, rt_str_cat(rt_str_cat(rt_str("task body ", 10), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_684)).name_))), rt_str(" has no task specification", 26)));
}
F->b_1501 = f_new_sym_343(F->up, F->up->y_proc_93, (*(P159)rt_nil_check(F->e_684)).name_);
(*(P110)rt_nil_check(F->b_1501)).cname_ = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1500)).cname_)), rt_str("body", 4)));
(*(P110)rt_nil_check(F->b_1501)).result_ = F->up->ty_void_150;
(*(P110)rt_nil_check(F->b_1501)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->b_1501)).decl_ = F->e_684;
if (((*(P110)rt_nil_check(F->y_1500)).c_ != NULL)) {
(*(P110)rt_nil_check(F->b_1501)).params_ = ({ R1024 *cell1505 = rt_alloc(sizeof(R1024)); *cell1505 = cp_R1024(({ R1024 ag1506; ag1506.name_ = f_mk_178(F->up, rt_str("INDEX_", 6)); ag1506.mode_ = F->up->m_in_72; ag1506.t_ = F->up->ty_int_145; ag1506.c_ = NULL; ag1506.cfield_ = f_mk_178(F->up, rt_str("index_", 6)); ag1506.dflt_ = NULL; ag1506.next_ = NULL; ag1506; })); (P1023)cell1505; });
}
f_open_scope_339(F->up);
F->m_1502 = (*(P110)rt_nil_check(F->y_1500)).members_;
while ((F->m_1502 != NULL)) {
f_copy_sym_592(F->up, F->m_1502, &F->z_1503);
f_define_338(F->up, F->z_1503, (*(P159)rt_nil_check(F->e_684)).line_);
F->m_1502 = (*(P110)rt_nil_check(F->m_1502)).mnext_;
}
L_end_1507: ;
F->up->cur_task_156 = F->y_1500;
f_subprogram_body_430(F->up, F->e_684, F->b_1501);
F->up->cur_task_156 = F->saved_1504;
f_close_scope_340(F->up);
if ((((*(P110)rt_nil_check(F->y_1500)).c_ != NULL) && ((*(P110)rt_nil_check(F->b_1501)).level_ > ((rt_int)0LL)))) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1500)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1501)).cname_))), rt_str("(g->up, g->i); }", 16)));
} else if (((*(P110)rt_nil_check(F->y_1500)).c_ != NULL)) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1500)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1501)).cname_))), rt_str("(g->i); }", 9)));
} else if (((*(P110)rt_nil_check(F->b_1501)).level_ > ((rt_int)0LL))) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1500)).cname_))), rt_str("run(void *a) { ", 15)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1501)).cname_))), rt_str("(a); }", 6)));
} else {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1500)).cname_))), rt_str("run(void *a) { (void)a; ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1501)).cname_))), rt_str("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_688(struct f_greenc_1fr *up_, P159 decls_686, P133 *aw_687) {
  struct f_task_awaits_688fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_686 = decls_686;
F->aw_687 = aw_687;
F->e_1508 = NULL;
F->e_1508 = F->decls_686;
F->y_1509 = NULL;
F->p_1510 = NULL;
(*F->aw_687) = f_mk_178(F->up, rt_str("", 0));
while ((F->e_1508 != NULL)) {
if ((((*(P159)rt_nil_check(F->e_1508)).kind_ == F->up->n_taskspec_52) || (((*(P159)rt_nil_check(F->e_1508)).kind_ == F->up->n_inst_55) && ((*(P159)rt_nil_check(F->e_1508)).ival_ == F->up->n_taskspec_52)))) {
F->y_1509 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_1508)).name_)));
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_1509)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1509)).cname_)), rt_str("decl", 4)), &F->p_1510);
(*F->aw_687) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->aw_687))), rt_str(" rt_await_decl(&", 16)), (*(P133)rt_nil_check(F->p_1510))), rt_str(");", 2)));
}
F->e_1508 = (*(P159)rt_nil_check(F->e_1508)).next_;
}
L_end_1511: ;
ret_:

  return;
}

static void f_task_failure_690(struct f_greenc_1fr *up_, P159 s_689) {
  struct f_task_failure_690fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_689 = s_689;
F->y_1512 = NULL;
F->y_1512 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_689)).tag_)));
F->a_1513 = NULL;
f_act_path_656(F->up, F->y_1512, &F->a_1513);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_exterminate(&", 16), (*(P133)rt_nil_check(F->a_1513))), rt_str(");", 2)));
ret_:

  return;
}

static void f_entry_sym_694(struct f_greenc_1fr *up_, P159 e_691, P110 *y_692, P159 *ix_693) {
  struct f_entry_sym_694fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_691 = e_691;
F->y_692 = y_692;
F->ix_693 = ix_693;
F->t_1514 = NULL;
(*F->ix_693) = NULL;
F->up->fam_ix_161 = NULL;
if (((*(P159)rt_nil_check(F->e_691)).kind_ == F->up->n_apply_16)) {
f_entry_sym_694(F->up, (*(P159)rt_nil_check(F->e_691)).a_, &(*F->y_692), &(*F->ix_693));
if (((*(P110)rt_nil_check((*F->y_692))).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_691)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*F->y_692))).name_)), rt_str(" is not an entry family", 23)));
}
F->up->fam_ix_161 = (*(P159)rt_nil_check(F->e_691)).b_;
goto ret_;
}
if (((((*(P159)rt_nil_check(F->e_691)).kind_ == F->up->n_select_17) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_691)).a_)).kind_ == F->up->n_apply_16)) && ((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_691)).a_)).a_)).kind_ == F->up->n_name_13))) {
F->t_1514 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_691)).a_)).a_)).name_)));
if ((((F->t_1514 == NULL) || ((*(P110)rt_nil_check(F->t_1514)).kind_ != F->up->y_task_98)) || ((*(P110)rt_nil_check(F->t_1514)).c_ == NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_691)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_691)).a_)).a_)).name_)), rt_str(" is not a task family", 21)));
}
(*F->y_692) = f_member_of_587(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_691)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_691)).name_)), (*(P159)rt_nil_check(F->e_691)).line_);
(*F->ix_693) = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_691)).a_)).b_;
if ((((*F->y_692) == NULL) || ((*(P110)rt_nil_check((*F->y_692))).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_691)).line_, rt_str("not an entry", 12));
}
goto ret_;
}
if (((*(P159)rt_nil_check(F->e_691)).kind_ == F->up->n_name_13)) {
(*F->y_692) = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_691)).name_)));
if (((*(P159)rt_nil_check(F->e_691)).tag_ != NULL)) {
(*F->y_692) = f_member_of_587(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_691)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_691)).name_)), (*(P159)rt_nil_check(F->e_691)).line_);
}
} else if ((((*(P159)rt_nil_check(F->e_691)).kind_ == F->up->n_select_17) && f_is_package_583(F->up, (*(P159)rt_nil_check(F->e_691)).a_))) {
(*F->y_692) = f_member_of_587(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_691)).a_)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_691)).name_)), (*(P159)rt_nil_check(F->e_691)).line_);
} else {
(*F->y_692) = NULL;
}
if ((((*F->y_692) == NULL) || ((*(P110)rt_nil_check((*F->y_692))).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_691)).line_, rt_str("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_699(struct f_greenc_1fr *up_, P159 e_695, int is_stmt_696, P115 *t_697, P133 *r_698) {
  struct f_other_call_699fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_695 = e_695;
F->is_stmt_696 = is_stmt_696;
F->t_697 = t_697;
F->r_698 = r_698;
F->y_1515 = NULL;
F->pm_1516 = NULL;
F->a_1517 = NULL;
F->parts_1518 = NULL;
F->v_1519 = NULL;
F->lv_1520 = NULL;
F->ent_1521 = NULL;
F->act_1522 = NULL;
F->i_1523 = NULL;
F->vt_1524 = NULL;
F->lt_1525 = NULL;
F->lc_1526 = NULL;
F->ix_1528 = NULL;
F->fix_1529 = NULL;
F->args_node_1530 = NULL;
f_entry_sym_694(F->up, (*(P159)rt_nil_check(F->e_695)).a_, &F->y_1515, &F->ix_1528);
F->fix_1529 = F->up->fam_ix_161;
F->args_node_1530 = (*(P159)rt_nil_check(F->e_695)).b_;
if ((((*(P110)rt_nil_check(F->y_1515)).c_ != NULL) && (F->fix_1529 == NULL))) {
F->fix_1529 = (*(P159)rt_nil_check(F->e_695)).b_;
F->args_node_1530 = NULL;
}
F->i_1523 = f_mk_178(F->up, rt_str("", 0));
if ((F->ix_1528 != NULL)) {
f_gexpr_515(F->up, F->ix_1528, F->up->ty_int_145, &F->vt_1524, &F->i_1523);
} else if (((((*(P110)rt_nil_check(F->y_1515)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1515)).members_)).c_ != NULL)) && ((*(P110)rt_nil_check(F->y_1515)).members_ != F->up->cur_task_156))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_695)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a member of family ", 19), (*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1515)).members_)).name_))), rt_str(" must be named: F(I).", 21)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1515)).name_))));
}
if ((!F->is_stmt_696)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_695)).line_, rt_str("an entry call is a statement", 28));
}
if ((F->up->pure_sym_171 != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_695)).line_, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_664(F->up, F->y_1515, (*(P133)rt_nil_check(F->i_1523)), &F->ent_1521);
if (((*(P110)rt_nil_check(F->y_1515)).c_ != NULL)) {
if ((F->fix_1529 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_695)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1515)).name_)), rt_str(" is an entry family: name a member, ", 36)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1515)).name_))), rt_str("(I)", 3)));
}
f_gexpr_515(F->up, F->fix_1529, NULL, &F->vt_1524, &F->v_1519);
f_entry_family_slot_679(F->up, F->y_1515, (*(P133)rt_nil_check(F->ent_1521)), (*(P133)rt_nil_check(F->v_1519)), &F->ent_1521);
}
F->parts_1518 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("({ struct ", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1515)).cname_))), rt_str("p p_;", 5)));
F->pm_1516 = (*(P110)rt_nil_check(F->y_1515)).params_;
while ((F->pm_1516 != NULL)) {
F->a_1517 = f_actual_for_564(F->up, F->args_node_1530, F->pm_1516, (*(P110)rt_nil_check(F->y_1515)).params_);
if ((F->a_1517 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_695)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1516)).name_))));
}
if (((*(P1023)rt_nil_check(F->pm_1516)).mode_ == F->up->m_in_72)) {
f_gexpr_515(F->up, F->a_1517, (*(P1023)rt_nil_check(F->pm_1516)).t_, &F->vt_1524, &F->v_1519);
f_check_type_352(F->up, F->vt_1524, (*(P1023)rt_nil_check(F->pm_1516)).t_, (*(P159)rt_nil_check(F->e_695)).line_);
F->parts_1518 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1518)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1516)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1519))), 59));
} else {
f_lvalue_487(F->up, F->a_1517, &F->lv_1520, &F->lt_1525, &F->lc_1526, &F->ro_1527);
if (F->ro_1527) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_695)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1516)).name_)), rt_str(" needs a variable", 17)));
}
f_check_type_352(F->up, F->lt_1525, (*(P1023)rt_nil_check(F->pm_1516)).t_, (*(P159)rt_nil_check(F->e_695)).line_);
F->parts_1518 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1518)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1516)).cfield_))), rt_str(" = &", 4)), (*(P133)rt_nil_check(F->lv_1520))), 59));
}
F->pm_1516 = (*(P1023)rt_nil_check(F->pm_1516)).next_;
}
L_end_1531: ;
if ((((*(P110)rt_nil_check(F->y_1515)).members_ != NULL) && ((*(P110)rt_nil_check(F->y_1515)).members_ != F->up->cur_task_156))) {
if ((F->ix_1528 != NULL)) {
f_act_path_i_660(F->up, (*(P110)rt_nil_check(F->y_1515)).members_, (*(P133)rt_nil_check(F->i_1523)), &F->act_1522);
} else {
f_act_path_656(F->up, (*(P110)rt_nil_check(F->y_1515)).members_, &F->act_1522);
}
F->parts_1518 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1518)), rt_str(" if (!rt_is_active(&", 20)), (*(P133)rt_nil_check(F->act_1522))), rt_str(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_697) = F->up->ty_void_150;
(*F->r_698) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1518)), rt_str(" rt_entry_call(&", 16)), (*(P133)rt_nil_check(F->ent_1521))), rt_str(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_704(struct f_greenc_1fr *up_, P159 e_700, P110 y_701, P115 *t_702, P133 *r_703) {
  struct f_other_attr_704fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_700 = e_700;
F->y_701 = y_701;
F->t_702 = t_702;
F->r_703 = r_703;
F->a_1532 = rt_str_copy((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_700)).name_)));
F->p_1533 = NULL;
if ((((*(P110)rt_nil_check(F->y_701)).kind_ == F->up->y_task_98) && rt_str_eq(F->a_1532, rt_str("INDEX", 5)))) {
if (((*(P110)rt_nil_check(F->y_701)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_700)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_701)).name_)), rt_str(" is not a task family", 21)));
}
f_own_index_648(F->up, &F->p_1533);
(*F->t_702) = F->up->ty_int_145;
(*F->r_703) = F->p_1533;
} else if ((((*(P110)rt_nil_check(F->y_701)).kind_ == F->up->y_task_98) && rt_str_eq(F->a_1532, rt_str("ACTIVE", 6)))) {
f_act_path_656(F->up, F->y_701, &F->p_1533);
(*F->t_702) = F->up->ty_bool_146;
(*F->r_703) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1533))), 41));
} else if ((((*(P110)rt_nil_check(F->y_701)).kind_ == F->up->y_task_98) && rt_str_eq(F->a_1532, rt_str("PRIORITY", 8)))) {
f_act_path_656(F->up, F->y_701, &F->p_1533);
(*F->t_702) = F->up->ty_int_145;
(*F->r_703) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1533))), 41));
} else if ((((*(P110)rt_nil_check(F->y_701)).kind_ == F->up->y_entry_99) && rt_str_eq(F->a_1532, rt_str("COUNT", 5)))) {
if (((*(P110)rt_nil_check(F->y_701)).members_ != F->up->cur_task_156)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_700)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_664(F->up, F->y_701, rt_str("", 0), &F->p_1533);
(*F->t_702) = F->up->ty_int_145;
(*F->r_703) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P133)rt_nil_check(F->p_1533))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_700)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1532), rt_str(" is not handled here", 20)));
(*F->t_702) = F->up->ty_int_145;
(*F->r_703) = NULL;
}
ret_:

  return;
}

static void f_member_attr_708(struct f_greenc_1fr *up_, P159 e_705, P115 *t_706, P133 *r_707) {
  struct f_member_attr_708fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_705 = e_705;
F->t_706 = t_706;
F->r_707 = r_707;
F->y_1534 = NULL;
F->ix_1535 = NULL;
F->i_1536 = NULL;
F->p_1537 = NULL;
F->vt_1538 = NULL;
f_task_of_646(F->up, (*(P159)rt_nil_check(F->e_705)).a_, &F->y_1534, &F->ix_1535);
f_gexpr_515(F->up, F->ix_1535, F->up->ty_int_145, &F->vt_1538, &F->i_1536);
f_act_path_i_660(F->up, F->y_1534, (*(P133)rt_nil_check(F->i_1536)), &F->p_1537);
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_705)).name_)), rt_str("ACTIVE", 6))) {
(*F->t_706) = F->up->ty_bool_146;
(*F->r_707) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1537))), 41));
} else if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_705)).name_)), rt_str("PRIORITY", 8))) {
(*F->t_706) = F->up->ty_int_145;
(*F->r_707) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1537))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_705)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_705)).name_))), rt_str(" is not handled for a family member", 35)));
(*F->t_706) = F->up->ty_int_145;
(*F->r_707) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_714(struct f_greenc_1fr *up_, rstr name_709, P159 args_710, rt_int line_711, P115 *t_712, P133 *r_713) {
  struct f_task_builtin_714fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_709 = rt_str_copy(name_709);
F->args_710 = args_710;
F->line_711 = line_711;
F->t_712 = t_712;
F->r_713 = r_713;
F->vt_1539 = NULL;
F->v_1540 = NULL;
(*F->t_712) = F->up->ty_void_150;
if (rt_str_eq(F->name_709, rt_str("SET_PRIORITY", 12))) {
f_gexpr_515(F->up, F->args_710, F->up->ty_int_145, &F->vt_1539, &F->v_1540);
(*F->r_713) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_set_priority(rt_me(), ", 25), (*(P133)rt_nil_check(F->v_1540))), 41));
} else {
f_fail_195(F->up, F->line_711, rt_str_cat(F->name_709, rt_str(" is not declared", 16)));
(*F->r_713) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_716(struct f_greenc_1fr *up_, P159 s_715) {
  struct f_gen_accept_716fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_715 = s_715;
F->y_1541 = NULL;
F->y_1541 = f_lookup_entry_325(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_715)).name_)), F->up->cur_task_156);
F->ent_1542 = NULL;
F->ep_1543 = NULL;
F->xf_1544 = NULL;
F->x_1545 = NULL;
F->pm_1546 = NULL;
F->f_1547 = NULL;
F->f_1547 = (*(P159)rt_nil_check(F->s_715)).a_;
F->p_1548 = NULL;
if (((F->y_1541 == NULL) || ((*(P110)rt_nil_check(F->y_1541)).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_715)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_715)).name_)), rt_str(" is not an entry", 16)));
}
if ((!f_same_task_322(F->up, (*(P110)rt_nil_check(F->y_1541)).members_, F->up->cur_task_156))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_715)).line_, rt_str("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_664(F->up, F->y_1541, rt_str("", 0), &F->ent_1542);
f_member_slot_720(F->up, F->y_1541, F->s_715, &F->ent_1542);
if (((*(P159)rt_nil_check(F->s_715)).flag_ == ((rt_int)0LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_accept_begin(&", 19), (*(P133)rt_nil_check(F->ent_1542))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1542))), rt_str(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_181(F->up, rt_str("ep", 2), &F->ep_1543);
f_new_name_181(F->up, rt_str("xf", 2), &F->xf_1544);
f_new_name_181(F->up, rt_str("x", 1), &F->x_1545);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1541)).cname_))), rt_str("p *", 3)), (*(P133)rt_nil_check(F->ep_1543))), rt_str(" = rt_accept_begin(&", 20)), (*(P133)rt_nil_check(F->ent_1542))), rt_str(");", 2)));
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_frame ", 9), (*(P133)rt_nil_check(F->xf_1544))), 59));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->xf_1544))), rt_str(")) {", 4)));
f_push_cleanup_436(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1544))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1542))), rt_str(", 0, 0);", 8)));
f_open_scope_339(F->up);
F->pm_1546 = (*(P110)rt_nil_check(F->y_1541)).params_;
while ((F->pm_1546 != NULL)) {
if (((*(P1023)rt_nil_check(F->pm_1546)).mode_ == F->up->m_in_72)) {
F->p_1548 = f_new_sym_343(F->up, F->up->y_const_91, (*(P1023)rt_nil_check(F->pm_1546)).name_);
(*(P110)rt_nil_check(F->p_1548)).ro_ = 1;
(*(P110)rt_nil_check(F->p_1548)).access_path_ = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->ep_1543))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1546)).cfield_))), 41));
} else {
F->p_1548 = f_new_sym_343(F->up, F->up->y_var_90, (*(P1023)rt_nil_check(F->pm_1546)).name_);
(*(P110)rt_nil_check(F->p_1548)).access_path_ = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->ep_1543))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1023)rt_nil_check(F->pm_1546)).cfield_))), 41));
}
if ((F->f_1547 != NULL)) {
(*(P110)rt_nil_check(F->p_1548)).name_ = (*(P159)rt_nil_check(F->f_1547)).name_;
F->f_1547 = (*(P159)rt_nil_check(F->f_1547)).next_;
}
(*(P110)rt_nil_check(F->p_1548)).t_ = (*(P1023)rt_nil_check(F->pm_1546)).t_;
(*(P110)rt_nil_check(F->p_1548)).c_ = (*(P1023)rt_nil_check(F->pm_1546)).c_;
f_define_338(F->up, F->p_1548, (*(P159)rt_nil_check(F->s_715)).line_);
F->pm_1546 = (*(P1023)rt_nil_check(F->pm_1546)).next_;
}
L_end_1549: ;
F->up->accept_depth_157 = rt_add(F->up->accept_depth_157, ((rt_int)1LL));
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->s_715)).b_);
F->up->accept_depth_157 = rt_sub(F->up->accept_depth_157, ((rt_int)1LL));
f_close_scope_340(F->up);
f_pop_cleanup_437(F->up);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1544))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1542))), rt_str(", 0, 0);", 8)));
f_emit_201(F->up, rt_str("} else {", 8));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1544))), rt_str("); int ", 7)), (*(P133)rt_nil_check(F->x_1545))), rt_str(" = rt_xcur; rt_accept_end(&", 27)), (*(P133)rt_nil_check(F->ent_1542))), rt_str(", 1, ", 5)), (*(P133)rt_nil_check(F->x_1545))), rt_str("); rt_raise(", 12)), (*(P133)rt_nil_check(F->x_1545))), rt_str(");", 2)));
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_member_slot_720(struct f_greenc_1fr *up_, P110 y_717, P159 s_718, P133 *ent_719) {
  struct f_member_slot_720fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_717 = y_717;
F->s_718 = s_718;
F->ent_719 = ent_719;
F->vt_1550 = NULL;
F->v_1551 = NULL;
if (((*(P110)rt_nil_check(F->y_717)).c_ != NULL)) {
if (((*(P159)rt_nil_check(F->s_718)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_718)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_717)).name_)), rt_str(" is an entry family: accept ", 28)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_717)).name_))), rt_str("(I)", 3)));
}
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->s_718)).c_, NULL, &F->vt_1550, &F->v_1551);
f_entry_family_slot_679(F->up, F->y_717, (*(P133)rt_nil_check((*F->ent_719))), (*(P133)rt_nil_check(F->v_1551)), &(*F->ent_719));
} else if (((*(P159)rt_nil_check(F->s_718)).c_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_718)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_717)).name_)), rt_str(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_723(struct f_greenc_1fr *up_, P159 e_721, P133 *r_722) {
  struct f_gen_delay_ticks_723fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_721 = e_721;
F->r_722 = r_722;
F->vt_1552 = NULL;
F->v_1553 = NULL;
f_gexpr_515(F->up, F->e_721, F->up->ty_float_147, &F->vt_1552, &F->v_1553);
f_check_type_352(F->up, F->vt_1552, F->up->ty_float_147, (*(P159)rt_nil_check(F->e_721)).line_);
(*F->r_722) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(rt_int)llround(", 16), (*(P133)rt_nil_check(F->v_1553))), 41));
ret_:

  return;
}

static void f_gen_select_725(struct f_greenc_1fr *up_, P159 s_724) {
  struct f_gen_select_725fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_724 = s_724;
F->alt_1554 = NULL;
F->alt_1554 = (*(P159)rt_nil_check(F->s_724)).a_;
F->n_1555 = ((rt_int)0LL);
F->has_delay_1557 = 0;
F->has_accept_1558 = 0;
F->al_1559 = NULL;
F->w_1560 = NULL;
F->g_1561 = NULL;
F->ent_1562 = NULL;
F->ticks_1563 = NULL;
F->vt_1564 = NULL;
F->y_1565 = NULL;
f_new_name_181(F->up, rt_str("al", 2), &F->al_1559);
f_new_name_181(F->up, rt_str("w", 1), &F->w_1560);
while ((F->alt_1554 != NULL)) {
F->n_1555 = rt_add(F->n_1555, ((rt_int)1LL));
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1554)).b_)).kind_ == F->up->n_delay_37)) {
F->has_delay_1557 = 1;
} else {
F->has_accept_1558 = 1;
}
F->alt_1554 = (*(P159)rt_nil_check(F->alt_1554)).next_;
}
L_end_1566: ;
if ((((*(P159)rt_nil_check(F->s_724)).flag_ == ((rt_int)1LL)) && F->has_delay_1557)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_724)).line_, rt_str("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_1558)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_724)).line_, rt_str("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ rt_alt ", 9), (*(P133)rt_nil_check(F->al_1559))), 91), rt_str_of_int(rt_add(F->n_1555, ((rt_int)1LL)))), rt_str("]; int open_ = 0;", 17)));
F->alt_1554 = (*(P159)rt_nil_check(F->s_724)).a_;
F->i_1556 = ((rt_int)0LL);
while ((F->alt_1554 != NULL)) {
F->g_1561 = f_mk_178(F->up, rt_str("1", 1));
if (((*(P159)rt_nil_check(F->alt_1554)).a_ != NULL)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->alt_1554)).a_, F->up->ty_bool_146, &F->vt_1564, &F->g_1561);
f_check_type_352(F->up, F->vt_1564, F->up->ty_bool_146, (*(P159)rt_nil_check(F->alt_1554)).line_);
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1554)).b_)).kind_ == F->up->n_accept_39)) {
F->y_1565 = f_lookup_entry_325(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1554)).b_)).name_)), F->up->cur_task_156);
if (((F->y_1565 == NULL) || ((*(P110)rt_nil_check(F->y_1565)).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->alt_1554)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1554)).b_)).name_)), rt_str(" is not an entry", 16)));
}
f_entry_path_664(F->up, F->y_1565, rt_str("", 0), &F->ent_1562);
f_member_slot_720(F->up, F->y_1565, (*(P159)rt_nil_check(F->alt_1554)).b_, &F->ent_1562);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1559)), 91), rt_str_of_int(F->i_1556)), rt_str("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P133)rt_nil_check(F->g_1561))), rt_str("), &", 4)), (*(P133)rt_nil_check(F->ent_1562))), rt_str(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_723(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1554)).b_)).a_, &F->ticks_1563);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1559)), 91), rt_str_of_int(F->i_1556)), rt_str("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P133)rt_nil_check(F->g_1561))), rt_str("), NULL, NULL, ", 15)), (*(P133)rt_nil_check(F->ticks_1563))), rt_str("};", 2)));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("open_ |= ", 9), (*(P133)rt_nil_check(F->al_1559))), 91), rt_str_of_int(F->i_1556)), rt_str("].open;", 7)));
F->i_1556 = rt_add(F->i_1556, ((rt_int)1LL));
F->alt_1554 = (*(P159)rt_nil_check(F->alt_1554)).next_;
}
L_end_1567: ;
if (((*(P159)rt_nil_check(F->s_724)).flag_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1559)), 91), rt_str_of_int(F->n_1555)), rt_str("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_1555 = rt_add(F->n_1555, ((rt_int)1LL));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!open_) rt_raise(rt_exc(", 28), f_q_192(F->up)), rt_str("SELECT_ERROR", 12)), f_q_192(F->up)), rt_str("));", 3)));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->w_1560))), rt_str(" = rt_wait(", 11)), rt_str_of_int(F->n_1555)), rt_str(", ", 2)), (*(P133)rt_nil_check(F->al_1559))), rt_str(");", 2)));
F->alt_1554 = (*(P159)rt_nil_check(F->s_724)).a_;
F->i_1556 = ((rt_int)0LL);
while ((F->alt_1554 != NULL)) {
if ((F->i_1556 == ((rt_int)0LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->w_1560))), rt_str(" == 0) {", 8)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->w_1560))), rt_str(" == ", 4)), rt_str_of_int(F->i_1556)), rt_str(") {", 3)));
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1554)).b_)).kind_ == F->up->n_accept_39)) {
f_gen_accept_716(F->up, (*(P159)rt_nil_check(F->alt_1554)).b_);
}
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->alt_1554)).c_);
F->i_1556 = rt_add(F->i_1556, ((rt_int)1LL));
F->alt_1554 = (*(P159)rt_nil_check(F->alt_1554)).next_;
}
L_end_1568: ;
if (((*(P159)rt_nil_check(F->s_724)).flag_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str("} else {", 8));
f_gen_statements_432(F->up, (*(P159)rt_nil_check(F->s_724)).b_);
}
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_family_range_730(struct f_greenc_1fr *up_, P110 y_726, P159 ix_727, P133 *lo_728, P133 *hi_729) {
  struct f_family_range_730fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_726 = y_726;
F->ix_727 = ix_727;
F->lo_728 = lo_728;
F->hi_729 = hi_729;
F->vt_1569 = NULL;
if ((F->ix_727 == NULL)) {
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_726)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_726)).cname_)), rt_str("lo", 2)), &(*F->lo_728));
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_726)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_726)).cname_)), rt_str("hi", 2)), &(*F->hi_729));
} else if (((*(P159)rt_nil_check(F->ix_727)).kind_ == F->up->n_range_22)) {
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->ix_727)).a_, F->up->ty_int_145, &F->vt_1569, &(*F->lo_728));
f_gexpr_515(F->up, (*(P159)rt_nil_check(F->ix_727)).b_, F->up->ty_int_145, &F->vt_1569, &(*F->hi_729));
} else {
f_gexpr_515(F->up, F->ix_727, F->up->ty_int_145, &F->vt_1569, &(*F->lo_728));
(*F->hi_729) = (*F->lo_728);
}
ret_:

  return;
}

static void f_task_statement_gen_732(struct f_greenc_1fr *up_, P159 s_731) {
  struct f_task_statement_gen_732fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_731 = s_731;
F->n_1570 = NULL;
F->ix_1571 = NULL;
F->y_1572 = NULL;
F->a_1573 = NULL;
F->d_1574 = NULL;
F->l_1575 = NULL;
F->ticks_1576 = NULL;
F->lo_1577 = NULL;
F->hi_1578 = NULL;
{ rt_int sel1579 = (*(P159)rt_nil_check(F->s_731)).kind_;
if (0 || sel1579 == ((rt_int)32LL)) {
f_gen_delay_ticks_723(F->up, (*(P159)rt_nil_check(F->s_731)).a_, &F->ticks_1576);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), (*(P133)rt_nil_check(F->ticks_1576))), rt_str(");", 2)));
} else if (0 || sel1579 == ((rt_int)33LL)) {
if ((F->up->accept_depth_157 > ((rt_int)0LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_731)).line_, rt_str("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_1570 = (*(P159)rt_nil_check(F->s_731)).a_;
while ((F->n_1570 != NULL)) {
f_task_of_646(F->up, F->n_1570, &F->y_1572, &F->ix_1571);
f_path_at_640(F->up, (*(P110)rt_nil_check(F->y_1572)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1572)).cname_)), rt_str("decl", 4)), &F->d_1574);
if (((*(P110)rt_nil_check(F->y_1572)).level_ > ((rt_int)0LL))) {
f_link_to_473(F->up, (*(P110)rt_nil_check(F->y_1572)).level_, &F->l_1575);
} else {
F->l_1575 = f_mk_178(F->up, rt_str("NULL", 4));
}
if (((*(P110)rt_nil_check(F->y_1572)).c_ == NULL)) {
f_act_path_656(F->up, F->y_1572, &F->a_1573);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(&", 11), (*(P133)rt_nil_check(F->a_1573))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1574))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1572)).cname_))), rt_str("run, ", 5)), (*(P133)rt_nil_check(F->l_1575))), rt_str(");", 2)));
} else {
f_family_range_730(F->up, F->y_1572, F->ix_1571, &F->lo_1577, &F->hi_1578);
f_act_path_i_660(F->up, F->y_1572, rt_str("k_", 2), &F->a_1573);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1577))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1578))), rt_str("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P133)rt_nil_check(F->l_1575))), rt_str("; g_->i = k_; rt_create(&", 25)), (*(P133)rt_nil_check(F->a_1573))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1574))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1572)).cname_))), rt_str("run, g_); }", 11)));
}
F->n_1570 = (*(P159)rt_nil_check(F->n_1570)).next_;
}
L_end_1580: ;
} else if (0 || sel1579 == ((rt_int)34LL)) {
f_gen_accept_716(F->up, F->s_731);
} else if (0 || sel1579 == ((rt_int)35LL)) {
f_gen_select_725(F->up, F->s_731);
} else if (0 || sel1579 == ((rt_int)36LL)) {
F->n_1570 = (*(P159)rt_nil_check(F->s_731)).a_;
while ((F->n_1570 != NULL)) {
f_task_of_646(F->up, F->n_1570, &F->y_1572, &F->ix_1571);
if (((*(P110)rt_nil_check(F->y_1572)).c_ == NULL)) {
f_act_path_656(F->up, F->y_1572, &F->a_1573);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_g_abort(&", 12), (*(P133)rt_nil_check(F->a_1573))), rt_str(");", 2)));
} else {
f_family_range_730(F->up, F->y_1572, F->ix_1571, &F->lo_1577, &F->hi_1578);
f_act_path_i_660(F->up, F->y_1572, rt_str("k_", 2), &F->a_1573);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1577))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1578))), rt_str("; k_++) rt_g_abort(&", 20)), (*(P133)rt_nil_check(F->a_1573))), rt_str(");", 2)));
}
F->n_1570 = (*(P159)rt_nil_check(F->n_1570)).next_;
}
L_end_1581: ;
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_731)).line_, rt_str("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P159 f_root_name_734(struct f_greenc_1fr *up_, P159 e_733) {
  struct f_root_name_734fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_733 = e_733;
if (((*(P159)rt_nil_check(F->e_733)).kind_ == F->up->n_name_13)) {
F->result_ = F->e_733;
goto ret_;
} else if (((((*(P159)rt_nil_check(F->e_733)).kind_ == F->up->n_select_17) || ((*(P159)rt_nil_check(F->e_733)).kind_ == F->up->n_apply_16)) || ((*(P159)rt_nil_check(F->e_733)).kind_ == F->up->n_paren_23))) {
F->result_ = f_root_name_734(F->up, (*(P159)rt_nil_check(F->e_733)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_737(struct f_greenc_1fr *up_, P159 target_735, rt_int line_736) {
  struct f_check_pure_target_737fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_735 = target_735;
F->line_736 = line_736;
F->n_1582 = NULL;
F->y_1583 = NULL;
if ((F->up->pure_sym_171 == NULL)) {
goto ret_;
}
if (F->up->last_deref_175) {
f_fail_195(F->up, F->line_736, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_1582 = f_root_name_734(F->up, F->target_735);
if ((F->n_1582 != NULL)) {
F->y_1583 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1582)).name_)));
if ((((F->y_1583 != NULL) && ((*(P110)rt_nil_check(F->y_1583)).kind_ == F->up->y_var_90)) && ((*(P110)rt_nil_check(F->y_1583)).depth_ < F->up->pure_depth_172))) {
f_fail_195(F->up, F->line_736, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not assign to ", 19)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1582)).name_))), rt_str(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_740(struct f_greenc_1fr *up_, P159 d_738, rstr name_739) {
  struct f_assigns_nonlocal_740fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_738 = d_738;
F->name_739 = rt_str_copy(name_739);
F->result_ = (f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->d_738)).d_, F->d_738, F->name_739) || f_scan_handlers_747(F->up, (*(P159)rt_nil_check(F->d_738)).e_, F->d_738, F->name_739));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_743(struct f_greenc_1fr *up_, P159 d_741, rstr name_742) {
  struct f_declares_743fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_741 = d_741;
F->name_742 = rt_str_copy(name_742);
F->p_1584 = NULL;
F->p_1584 = (*(P159)rt_nil_check(F->d_741)).a_;
F->e_1585 = NULL;
F->e_1585 = (*(P159)rt_nil_check(F->d_741)).c_;
while ((F->p_1584 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_1584)).name_)), F->name_742)) {
F->result_ = 1;
goto ret_;
}
F->p_1584 = (*(P159)rt_nil_check(F->p_1584)).next_;
}
L_end_1586: ;
while ((F->e_1585 != NULL)) {
if ((((*(P159)rt_nil_check(F->e_1585)).name_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_1585)).name_)), F->name_742))) {
F->result_ = 1;
goto ret_;
}
F->e_1585 = (*(P159)rt_nil_check(F->e_1585)).next_;
}
L_end_1587: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_747(struct f_greenc_1fr *up_, P159 h_744, P159 d_745, rstr name_746) {
  struct f_scan_handlers_747fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_744 = h_744;
F->d_745 = d_745;
F->name_746 = rt_str_copy(name_746);
F->p_1588 = NULL;
F->p_1588 = F->h_744;
while ((F->p_1588 != NULL)) {
if (f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->p_1588)).b_, F->d_745, F->name_746)) {
F->result_ = 1;
goto ret_;
}
F->p_1588 = (*(P159)rt_nil_check(F->p_1588)).next_;
}
L_end_1589: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_751(struct f_greenc_1fr *up_, P159 stmts_748, P159 d_749, rstr name_750) {
  struct f_scan_assigns_751fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_748 = stmts_748;
F->d_749 = d_749;
F->name_750 = rt_str_copy(name_750);
F->s_1590 = NULL;
F->s_1590 = F->stmts_748;
F->a_1591 = NULL;
F->r_1592 = NULL;
while ((F->s_1590 != NULL)) {
if (((*(P159)rt_nil_check(F->s_1590)).kind_ == F->up->n_assign_25)) {
F->r_1592 = f_root_name_734(F->up, (*(P159)rt_nil_check(F->s_1590)).a_);
if ((((F->r_1592 != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->r_1592)).name_)), F->name_750)) && (!f_declares_743(F->up, F->d_749, F->name_750)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1590)).kind_ == F->up->n_if_27)) {
F->a_1591 = (*(P159)rt_nil_check(F->s_1590)).a_;
while ((F->a_1591 != NULL)) {
if (f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->a_1591)).b_, F->d_749, F->name_750)) {
F->result_ = 1;
goto ret_;
}
F->a_1591 = (*(P159)rt_nil_check(F->a_1591)).next_;
}
L_end_1594: ;
if (f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->s_1590)).b_, F->d_749, F->name_750)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1590)).kind_ == F->up->n_case_28)) {
F->a_1591 = (*(P159)rt_nil_check(F->s_1590)).b_;
while ((F->a_1591 != NULL)) {
if (f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->a_1591)).b_, F->d_749, F->name_750)) {
F->result_ = 1;
goto ret_;
}
F->a_1591 = (*(P159)rt_nil_check(F->a_1591)).next_;
}
L_end_1595: ;
if (f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->s_1590)).c_, F->d_749, F->name_750)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1590)).kind_ == F->up->n_loop_29)) {
if (f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->s_1590)).b_, F->d_749, F->name_750)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1590)).kind_ == F->up->n_block_30)) {
if ((f_scan_assigns_751(F->up, (*(P159)rt_nil_check(F->s_1590)).b_, F->d_749, F->name_750) || f_scan_handlers_747(F->up, (*(P159)rt_nil_check(F->s_1590)).c_, F->d_749, F->name_750))) {
F->result_ = 1;
goto ret_;
}
}
F->s_1590 = (*(P159)rt_nil_check(F->s_1590)).next_;
}
L_end_1593: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_754(struct f_greenc_1fr *up_, P159 e_752, P110 y_753) {
  struct f_check_call_rules_754fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_752 = e_752;
F->y_753 = y_753;
F->z_1596 = NULL;
F->s_1597 = NULL;
if ((((F->up->pure_sym_171 != NULL) && (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_753)).result_)).kind_ == F->up->t_void_83) || (*(P110)rt_nil_check(F->y_753)).vrp_)) && ((*(P110)rt_nil_check(F->y_753)).depth_ < F->up->pure_depth_172))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_752)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not call procedure ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_753)).name_))), rt_str(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P110)rt_nil_check(F->y_753)).vrp_) || (F->up->trial_144 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_173)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_752)).line_, rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_753)).name_))), rt_str(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_1597 = F->up->scope_stack_114;
while ((F->s_1597 != NULL)) {
if ((((((*(P110)rt_nil_check(F->s_1597)).kind_ == F->up->y_var_90) && ((*(P110)rt_nil_check(F->s_1597)).depth_ <= (*(P110)rt_nil_check(F->y_753)).depth_)) && (f_lookup_319(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1597)).name_))) == F->s_1597)) && f_assigns_nonlocal_740(F->up, (*(P110)rt_nil_check(F->y_753)).decl_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1597)).name_))))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_752)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_753)).name_))), rt_str(" assigns ", 9)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1597)).name_))), rt_str(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_1597 = (*(P110)rt_nil_check(F->s_1597)).stack_;
}
L_end_1598: ;
ret_:

  return;
}

static void f_generic_p_756(struct f_greenc_1fr *up_, P159 *res_755) {
  struct f_generic_p_756fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_755 = res_755;
F->x_1599 = NULL;
F->p_1600 = NULL;
F->head_1601 = NULL;
F->tail_1602 = NULL;
F->names_1603 = NULL;
F->st_1604 = NULL;
F->def_1605 = NULL;
F->sub_1606 = NULL;
F->def_name_text_1607 = NULL;
F->more_1608 = 1;
f_expect_kw_242(F->up, rt_str("GENERIC", 7));
F->x_1599 = f_nn_220(F->up, F->up->n_generic_56, f_cur_line_227(F->up));
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
while (F->more_1608) {
if (f_at_kw_229(F->up, rt_str("RESTRICTED", 10))) {
f_skip_240(F->up);
}
if (f_at_kw_229(F->up, rt_str("TYPE", 4))) {
f_skip_240(F->up);
F->p_1600 = f_nn_220(F->up, F->up->n_param_49, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->p_1600)).ival_ = ((rt_int)10LL);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->p_1600)).name_);
f_append_224(F->up, &F->head_1601, &F->tail_1602, F->p_1600);
} else if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
F->p_1600 = f_nn_220(F->up, F->up->n_param_49, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->p_1600)).ival_ = ((rt_int)11LL);
if (f_at_kw_229(F->up, rt_str("PROCEDURE", 9))) {
F->sub_1606 = f_nn_220(F->up, F->up->n_proc_46, f_cur_line_227(F->up));
} else {
F->sub_1606 = f_nn_220(F->up, F->up->n_func_47, f_cur_line_227(F->up));
}
f_skip_240(F->up);
f_designator_292(F->up, &(*(P159)rt_nil_check(F->sub_1606)).name_);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->sub_1606)).a_);
}
if (f_at_kw_229(F->up, rt_str("RETURN", 6))) {
f_skip_240(F->up);
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->sub_1606)).b_);
}
(*(P159)rt_nil_check(F->sub_1606)).ival_ = ((rt_int)1LL);
(*(P159)rt_nil_check(F->p_1600)).name_ = (*(P159)rt_nil_check(F->sub_1606)).name_;
(*(P159)rt_nil_check(F->p_1600)).a_ = F->sub_1606;
if (f_at_kw_229(F->up, rt_str("IS", 2))) {
f_skip_240(F->up);
if (f_at_kind_233(F->up, F->up->k_str_8)) {
f_designator_292(F->up, &F->def_name_text_1607);
(*(P159)rt_nil_check(F->p_1600)).b_ = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
(*(P159)rt_nil_check((*(P159)rt_nil_check(F->p_1600)).b_)).name_ = F->def_name_text_1607;
} else {
f_name_p_273(F->up, &(*(P159)rt_nil_check(F->p_1600)).b_);
}
}
f_append_224(F->up, &F->head_1601, &F->tail_1602, F->p_1600);
} else {
f_id_list_250(F->up, &F->names_1603);
f_expect_op_244(F->up, rt_str(":", 1));
if (f_at_kw_229(F->up, rt_str("IN", 2))) {
f_skip_240(F->up);
}
f_subtype_ind_275(F->up, &F->st_1604);
F->def_1605 = NULL;
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->def_1605);
}
while ((F->names_1603 != NULL)) {
F->p_1600 = f_nn_220(F->up, F->up->n_param_49, (*(P159)rt_nil_check(F->names_1603)).line_);
(*(P159)rt_nil_check(F->p_1600)).ival_ = ((rt_int)1LL);
(*(P159)rt_nil_check(F->p_1600)).name_ = (*(P159)rt_nil_check(F->names_1603)).name_;
(*(P159)rt_nil_check(F->p_1600)).a_ = F->st_1604;
(*(P159)rt_nil_check(F->p_1600)).b_ = F->def_1605;
f_append_224(F->up, &F->head_1601, &F->tail_1602, F->p_1600);
F->names_1603 = (*(P159)rt_nil_check(F->names_1603)).next_;
}
L_end_1610: ;
}
F->more_1608 = f_at_op_231(F->up, rt_str(";", 1));
if (F->more_1608) {
f_skip_240(F->up);
}
}
L_end_1609: ;
f_expect_op_244(F->up, rt_str(")", 1));
}
if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_294(F->up, &(*(P159)rt_nil_check(F->x_1599)).b_);
} else if (f_at_kw_229(F->up, rt_str("PACKAGE", 7))) {
f_package_p_300(F->up, &(*(P159)rt_nil_check(F->x_1599)).b_);
} else if (f_at_kw_229(F->up, rt_str("TASK", 4))) {
f_task_p_626(F->up, &(*(P159)rt_nil_check(F->x_1599)).b_);
} else {
f_perror_239(F->up, rt_str("a generic unit is a subprogram, a package or a task", 51));
}
(*(P159)rt_nil_check(F->x_1599)).a_ = F->head_1601;
(*(P159)rt_nil_check(F->x_1599)).name_ = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1599)).b_)).name_;
(*F->res_755) = F->x_1599;
ret_:

  return;
}

static void f_instantiation_759(struct f_greenc_1fr *up_, P159 x_757, P159 *res_758) {
  struct f_instantiation_759fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_757 = x_757;
F->res_758 = res_758;
F->i_1611 = NULL;
F->head_1612 = NULL;
F->tail_1613 = NULL;
F->a_1614 = NULL;
F->formal_1615 = NULL;
F->more_1617 = 1;
f_expect_kw_242(F->up, rt_str("IS", 2));
f_expect_kw_242(F->up, rt_str("NEW", 3));
F->i_1611 = f_nn_220(F->up, F->up->n_inst_55, (*(P159)rt_nil_check(F->x_757)).line_);
(*(P159)rt_nil_check(F->i_1611)).name_ = (*(P159)rt_nil_check(F->x_757)).name_;
(*(P159)rt_nil_check(F->i_1611)).ival_ = (*(P159)rt_nil_check(F->x_757)).kind_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->i_1611)).tag_);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
while (F->more_1617) {
F->formal_1615 = NULL;
F->mark_1616 = ((rt_int)0LL);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("IS", 2)))) {
f_expect_id_246(F->up, &F->formal_1615);
f_skip_240(F->up);
F->mark_1616 = ((rt_int)5LL);
} else if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && ((rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=:", 3))))) {
f_expect_id_246(F->up, &F->formal_1615);
f_skip_240(F->up);
F->mark_1616 = ((rt_int)1LL);
}
if ((f_at_kind_233(F->up, F->up->k_str_8) && (F->mark_1616 == ((rt_int)5LL)))) {
F->a_1614 = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
f_designator_292(F->up, &(*(P159)rt_nil_check(F->a_1614)).name_);
} else {
f_expr_257(F->up, &F->a_1614);
}
(*(P159)rt_nil_check(F->a_1614)).tag_ = F->formal_1615;
(*(P159)rt_nil_check(F->a_1614)).flag_ = F->mark_1616;
f_append_224(F->up, &F->head_1612, &F->tail_1613, F->a_1614);
F->more_1617 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_1617) {
f_skip_240(F->up);
}
}
L_end_1618: ;
f_expect_op_244(F->up, rt_str(")", 1));
}
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->i_1611)).a_ = F->head_1612;
(*F->res_758) = F->i_1611;
ret_:

  return;
}

static void f_generic_decl_761(struct f_greenc_1fr *up_, P159 e_760) {
  struct f_generic_decl_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_760 = e_760;
F->y_1619 = NULL;
if (((*(P159)rt_nil_check(F->e_760)).kind_ == F->up->n_generic_56)) {
F->y_1619 = f_new_sym_343(F->up, F->up->y_generic_100, (*(P159)rt_nil_check(F->e_760)).name_);
(*(P110)rt_nil_check(F->y_1619)).decl_ = F->e_760;
f_define_338(F->up, F->y_1619, (*(P159)rt_nil_check(F->e_760)).line_);
} else if (((*(P159)rt_nil_check(F->e_760)).kind_ == F->up->n_inst_55)) {
f_instantiate_775(F->up, F->e_760);
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_760)).line_, rt_str("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_763(struct f_greenc_1fr *up_, rstr n_762) {
  struct f_is_generic_name_763fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_762 = rt_str_copy(n_762);
F->y_1620 = NULL;
F->y_1620 = f_lookup_319(F->up, F->n_762);
F->result_ = ((F->y_1620 != NULL) && ((*(P110)rt_nil_check(F->y_1620)).kind_ == F->up->y_generic_100));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_765(struct f_greenc_1fr *up_, P159 e_764) {
  struct f_attach_generic_body_765fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_764 = e_764;
F->y_1621 = NULL;
F->y_1621 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_764)).name_)));
(*(P159)rt_nil_check((*(P110)rt_nil_check(F->y_1621)).decl_)).c_ = F->e_764;
ret_:

  return;
}

static P159 f_gactual_769(struct f_greenc_1fr *up_, P159 args_766, rt_int nth_767, rstr name_768) {
  struct f_gactual_769fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_766 = args_766;
F->nth_767 = nth_767;
F->name_768 = rt_str_copy(name_768);
F->a_1622 = NULL;
F->a_1622 = F->args_766;
F->i_1623 = ((rt_int)1LL);
while ((F->a_1622 != NULL)) {
if ((((*(P159)rt_nil_check(F->a_1622)).tag_ == NULL) && (F->i_1623 == F->nth_767))) {
F->result_ = F->a_1622;
goto ret_;
}
if ((((*(P159)rt_nil_check(F->a_1622)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1622)).tag_)), F->name_768))) {
F->result_ = F->a_1622;
goto ret_;
}
if (((*(P159)rt_nil_check(F->a_1622)).tag_ == NULL)) {
F->i_1623 = rt_add(F->i_1623, ((rt_int)1LL));
}
F->a_1622 = (*(P159)rt_nil_check(F->a_1622)).next_;
}
L_end_1624: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_773(struct f_greenc_1fr *up_, P159 n_770, P133 name_771, P159 *r_772) {
  struct f_copy_node_773fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_770 = n_770;
F->name_771 = name_771;
F->r_772 = r_772;
(*F->r_772) = f_nn_220(F->up, (*(P159)rt_nil_check(F->n_770)).kind_, (*(P159)rt_nil_check(F->n_770)).line_);
as_R160(&(*(P159)rt_nil_check((*F->r_772))), (*(P159)rt_nil_check(F->n_770)));
(*(P159)rt_nil_check((*F->r_772))).name_ = F->name_771;
(*(P159)rt_nil_check((*F->r_772))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_775(struct f_greenc_1fr *up_, P159 e_774) {
  struct f_instantiate_775fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_774 = e_774;
F->g_1625 = NULL;
F->g_1625 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_774)).tag_)));
F->gd_1626 = NULL;
F->pat_1627 = NULL;
F->f_1628 = NULL;
F->a_1629 = NULL;
F->cn_1630 = NULL;
F->y_1631 = NULL;
F->z_1632 = NULL;
F->fs_1633 = NULL;
F->nth_1634 = ((rt_int)1LL);
F->t_1635 = NULL;
F->vt_1636 = NULL;
F->c_1637 = NULL;
F->v_1638 = NULL;
F->acc_1639 = NULL;
F->x_1640 = NULL;
if (((F->g_1625 == NULL) || ((*(P110)rt_nil_check(F->g_1625)).kind_ != F->up->y_generic_100))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_774)).tag_)), rt_str(" is not a generic unit", 22)));
}
F->gd_1626 = (*(P110)rt_nil_check(F->g_1625)).decl_;
F->pat_1627 = (*(P159)rt_nil_check(F->gd_1626)).b_;
f_open_scope_339(F->up);
F->f_1628 = (*(P159)rt_nil_check(F->gd_1626)).a_;
while ((F->f_1628 != NULL)) {
F->a_1629 = f_gactual_769(F->up, (*(P159)rt_nil_check(F->e_774)).a_, F->nth_1634, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1628)).name_)));
F->nth_1634 = rt_add(F->nth_1634, ((rt_int)1LL));
if (((*(P159)rt_nil_check(F->f_1628)).ival_ == ((rt_int)10LL))) {
if (((F->a_1629 == NULL) || ((*(P159)rt_nil_check(F->a_1629)).kind_ != F->up->n_name_13))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat(rt_str("a type is required for generic parameter ", 41), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1628)).name_))));
}
F->y_1631 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1629)).name_)));
if (((F->y_1631 == NULL) || ((*(P110)rt_nil_check(F->y_1631)).kind_ != F->up->y_type_94))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1629)).name_)), rt_str(" is not a type", 14)));
}
f_copy_sym_592(F->up, F->y_1631, &F->z_1632);
(*(P110)rt_nil_check(F->z_1632)).name_ = (*(P159)rt_nil_check(F->f_1628)).name_;
f_define_338(F->up, F->z_1632, (*(P159)rt_nil_check(F->e_774)).line_);
} else if (((*(P159)rt_nil_check(F->f_1628)).ival_ == ((rt_int)11LL))) {
if ((F->a_1629 == NULL)) {
F->a_1629 = (*(P159)rt_nil_check(F->f_1628)).b_;
}
if (((F->a_1629 == NULL) || ((*(P159)rt_nil_check(F->a_1629)).kind_ != F->up->n_name_13))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat(rt_str("a subprogram is required for generic parameter ", 47), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1628)).name_))));
}
f_build_subprogram_421(F->up, (*(P159)rt_nil_check(F->f_1628)).a_, &F->fs_1633);
F->y_1631 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1629)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while (((F->y_1631 != NULL) && (!(((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1631)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1629)).name_))) && (((*(P110)rt_nil_check(F->y_1631)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1631)).kind_ == F->up->y_proc_93))) && f_same_signature_335(F->up, (*(P110)rt_nil_check(F->y_1631)).params_, (*(P110)rt_nil_check(F->fs_1633)).params_)) && f_same_332(F->up, (*(P110)rt_nil_check(F->y_1631)).result_, (*(P110)rt_nil_check(F->fs_1633)).result_))))) {
F->y_1631 = (*(P110)rt_nil_check(F->y_1631)).chain_;
}
L_end_1643: ;
if ((F->y_1631 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no subprogram ", 14), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1629)).name_))), rt_str(" matches generic parameter ", 27)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1628)).name_))));
}
f_copy_sym_592(F->up, F->y_1631, &F->z_1632);
(*(P110)rt_nil_check(F->z_1632)).name_ = (*(P159)rt_nil_check(F->f_1628)).name_;
f_define_338(F->up, F->z_1632, (*(P159)rt_nil_check(F->e_774)).line_);
} else {
if ((F->a_1629 == NULL)) {
F->a_1629 = (*(P159)rt_nil_check(F->f_1628)).b_;
}
if ((F->a_1629 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat(rt_str("no actual for generic parameter ", 32), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1628)).name_))));
}
f_resolve_373(F->up, (*(P159)rt_nil_check(F->f_1628)).a_, &F->t_1635, &F->c_1637);
f_gexpr_515(F->up, F->a_1629, F->t_1635, &F->vt_1636, &F->v_1638);
f_check_type_352(F->up, F->vt_1636, F->t_1635, (*(P159)rt_nil_check(F->e_774)).line_);
F->z_1632 = f_new_sym_343(F->up, F->up->y_const_91, (*(P159)rt_nil_check(F->f_1628)).name_);
f_storage_411(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1628)).name_)), F->t_1635, &F->acc_1639);
f_copy_code_396(F->up, F->t_1635, (*(P133)rt_nil_check(F->v_1638)), &F->x_1640);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1639)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1640))), 59));
(*(P110)rt_nil_check(F->z_1632)).t_ = F->t_1635;
(*(P110)rt_nil_check(F->z_1632)).c_ = F->c_1637;
(*(P110)rt_nil_check(F->z_1632)).ro_ = 1;
if (((*(P115)rt_nil_check(F->t_1635)).kind_ == F->up->t_int_75)) {
f_manifest_369(F->up, F->a_1629, &(*(P110)rt_nil_check(F->z_1632)).mvalue_, &F->ok_1641);
(*(P110)rt_nil_check(F->z_1632)).hasmv_ = F->ok_1641;
}
f_bind_414(F->up, F->z_1632, F->acc_1639);
f_define_338(F->up, F->z_1632, (*(P159)rt_nil_check(F->e_774)).line_);
}
F->f_1628 = (*(P159)rt_nil_check(F->f_1628)).next_;
}
L_end_1642: ;
if ((((*(P159)rt_nil_check(F->pat_1627)).kind_ == F->up->n_proc_46) || ((*(P159)rt_nil_check(F->pat_1627)).kind_ == F->up->n_func_47))) {
if (((*(P159)rt_nil_check(F->pat_1627)).ival_ == ((rt_int)1LL))) {
if (((*(P159)rt_nil_check(F->gd_1626)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic ", 20), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_774)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
F->pat_1627 = (*(P159)rt_nil_check(F->gd_1626)).c_;
}
f_copy_node_773(F->up, F->pat_1627, (*(P159)rt_nil_check(F->e_774)).name_, &F->cn_1630);
f_build_subprogram_421(F->up, F->cn_1630, &F->y_1631);
f_define_338(F->up, F->y_1631, (*(P159)rt_nil_check(F->e_774)).line_);
f_subprogram_body_430(F->up, F->cn_1630, F->y_1631);
} else if (((*(P159)rt_nil_check(F->pat_1627)).kind_ == F->up->n_pkgspec_50)) {
f_copy_node_773(F->up, F->pat_1627, (*(P159)rt_nil_check(F->e_774)).name_, &F->cn_1630);
f_package_spec_597(F->up, F->cn_1630);
F->y_1631 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_774)).name_)));
if (((*(P159)rt_nil_check(F->gd_1626)).c_ != NULL)) {
f_copy_node_773(F->up, (*(P159)rt_nil_check(F->gd_1626)).c_, (*(P159)rt_nil_check(F->e_774)).name_, &F->cn_1630);
f_package_body_602(F->up, F->cn_1630);
}
} else {
f_copy_node_773(F->up, F->pat_1627, (*(P159)rt_nil_check(F->e_774)).name_, &F->cn_1630);
f_task_spec_681(F->up, F->cn_1630);
F->y_1631 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_774)).name_)));
if (((*(P159)rt_nil_check(F->gd_1626)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_774)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic task ", 25), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_774)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
f_copy_node_773(F->up, (*(P159)rt_nil_check(F->gd_1626)).c_, (*(P159)rt_nil_check(F->e_774)).name_, &F->cn_1630);
f_task_body_685(F->up, F->cn_1630);
}
f_close_scope_340(F->up);
f_define_338(F->up, F->y_1631, (*(P159)rt_nil_check(F->e_774)).line_);
ret_:

  return;
}

static void f_predef_type_780(struct f_greenc_1fr *up_, rstr name_776, P115 t_777, rstr lo_778, rstr hi_779) {
  struct f_predef_type_780fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_776 = rt_str_copy(name_776);
F->t_777 = t_777;
F->lo_778 = rt_str_copy(lo_778);
F->hi_779 = rt_str_copy(hi_779);
F->y_1644 = NULL;
F->y_1644 = f_new_sym_343(F->up, F->up->y_type_94, f_mk_178(F->up, F->name_776));
(*(P110)rt_nil_check(F->y_1644)).t_ = F->t_777;
if (((F->lo_778).len > ((rt_int)0LL))) {
(*(P110)rt_nil_check(F->y_1644)).c_ = f_new_cons_346(F->up);
(*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1644)).c_)).lo_ = f_mk_178(F->up, F->lo_778);
(*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1644)).c_)).hi_ = f_mk_178(F->up, F->hi_779);
}
f_define_338(F->up, F->y_1644, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_784(struct f_greenc_1fr *up_, rstr name_781, P115 t_782, rstr code_text_783) {
  struct f_predef_const_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_781 = rt_str_copy(name_781);
F->t_782 = t_782;
F->code_text_783 = rt_str_copy(code_text_783);
F->y_1645 = NULL;
F->y_1645 = f_new_sym_343(F->up, F->up->y_const_91, f_mk_178(F->up, F->name_781));
(*(P110)rt_nil_check(F->y_1645)).t_ = F->t_782;
(*(P110)rt_nil_check(F->y_1645)).ro_ = 1;
(*(P110)rt_nil_check(F->y_1645)).access_path_ = f_mk_178(F->up, F->code_text_783);
f_define_338(F->up, F->y_1645, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_786(struct f_greenc_1fr *up_, rstr name_785) {
  struct f_predef_exc_786fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_785 = rt_str_copy(name_785);
F->y_1646 = NULL;
F->y_1646 = f_new_sym_343(F->up, F->up->y_exc_95, f_mk_178(F->up, F->name_785));
(*(P110)rt_nil_check(F->y_1646)).cname_ = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_192(F->up)), F->name_785), f_q_192(F->up)), 41));
f_define_338(F->up, F->y_1646, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_790(struct f_greenc_1fr *up_, rstr name_787, P115 t_788, rt_int v_789) {
  struct f_predef_lit_790fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_787 = rt_str_copy(name_787);
F->t_788 = t_788;
F->v_789 = v_789;
F->y_1647 = NULL;
F->y_1647 = f_new_sym_343(F->up, F->up->y_enumlit_96, f_mk_178(F->up, F->name_787));
(*(P110)rt_nil_check(F->y_1647)).t_ = F->t_788;
(*(P110)rt_nil_check(F->y_1647)).result_ = F->t_788;
(*(P110)rt_nil_check(F->y_1647)).mvalue_ = F->v_789;
(*(P110)rt_nil_check(F->y_1647)).hasmv_ = 1;
f_define_338(F->up, F->y_1647, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_791(struct f_greenc_1fr *up_) {
  struct f_predefine_791fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_1648 = rt_str_copy(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_str("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_1649 = ((rt_int)1LL);
F->code_no_1650 = ((rt_int)0LL);
f_predef_type_780(F->up, rt_str("INTEGER", 7), F->up->ty_int_145, rt_str("", 0), rt_str("", 0));
f_predef_type_780(F->up, rt_str("SHORT_INTEGER", 13), F->up->ty_int_145, rt_str("", 0), rt_str("", 0));
f_predef_type_780(F->up, rt_str("LONG_INTEGER", 12), F->up->ty_int_145, rt_str("", 0), rt_str("", 0));
f_predef_type_780(F->up, rt_str("NATURAL", 7), F->up->ty_int_145, rt_str("1", 1), rt_str("INT64_MAX", 9));
f_predef_type_780(F->up, rt_str("PRIORITY", 8), F->up->ty_int_145, rt_str("0", 1), rt_str("255", 3));
f_predef_type_780(F->up, rt_str("BOOLEAN", 7), F->up->ty_bool_146, rt_str("0", 1), rt_str("1", 1));
f_predef_type_780(F->up, rt_str("CHARACTER", 9), F->up->ty_char_148, rt_str("0", 1), rt_str("127", 3));
f_predef_type_780(F->up, rt_str("STRING", 6), F->up->ty_string_149, rt_str("", 0), rt_str("", 0));
f_predef_type_780(F->up, rt_str("FLOAT", 5), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_type_780(F->up, rt_str("SHORT_FLOAT", 11), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_type_780(F->up, rt_str("LONG_FLOAT", 10), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_type_780(F->up, rt_str("TIME", 4), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_lit_790(F->up, rt_str("FALSE", 5), F->up->ty_bool_146, ((rt_int)0LL));
f_predef_lit_790(F->up, rt_str("TRUE", 4), F->up->ty_bool_146, ((rt_int)1LL));
{ rt_int lo1653 = ((rt_int)1LL), hi1654 = (F->control_1648).len;
for (rt_int it1655 = lo1653; it1655 <= hi1654; it1655++) {
F->i_1652 = it1655;
if ((rt_str_get(F->control_1648, F->i_1652) == 32)) {
f_predef_const_784(F->up, rt_str_slice(F->control_1648, F->start_1649, rt_sub(F->i_1652, ((rt_int)1LL))), F->up->ty_char_148, rt_str_of_int(F->code_no_1650));
F->code_no_1650 = rt_add(F->code_no_1650, ((rt_int)1LL));
F->start_1649 = rt_add(F->i_1652, ((rt_int)1LL));
}
}
}
L_end_1651: ;
f_predef_const_784(F->up, rt_str("DEL", 3), F->up->ty_char_148, rt_str("127", 3));
f_predef_const_784(F->up, rt_str("EXCLAM", 6), F->up->ty_char_148, rt_str("33", 2));
f_predef_const_784(F->up, rt_str("DOLLAR", 6), F->up->ty_char_148, rt_str("36", 2));
f_predef_const_784(F->up, rt_str("QUESTION", 8), F->up->ty_char_148, rt_str("63", 2));
f_predef_const_784(F->up, rt_str("AT_SIGN", 7), F->up->ty_char_148, rt_str("64", 2));
f_predef_const_784(F->up, rt_str("L_BRACKET", 9), F->up->ty_char_148, rt_str("91", 2));
f_predef_const_784(F->up, rt_str("BACK_SLASH", 10), F->up->ty_char_148, rt_str("92", 2));
f_predef_const_784(F->up, rt_str("R_BRACKET", 9), F->up->ty_char_148, rt_str("93", 2));
f_predef_const_784(F->up, rt_str("CIRCUMFLEX", 10), F->up->ty_char_148, rt_str("94", 2));
f_predef_const_784(F->up, rt_str("GRAVE", 5), F->up->ty_char_148, rt_str("96", 2));
f_predef_const_784(F->up, rt_str("L_BRACE", 7), F->up->ty_char_148, rt_str("123", 3));
f_predef_const_784(F->up, rt_str("R_BRACE", 7), F->up->ty_char_148, rt_str("125", 3));
f_predef_const_784(F->up, rt_str("TILDE", 5), F->up->ty_char_148, rt_str("126", 3));
{ rt_int lo1658 = ((rt_int)0LL), hi1659 = ((rt_int)25LL);
for (rt_int it1660 = lo1658; it1660 <= hi1659; it1660++) {
F->i_1657 = it1660;
f_predef_const_784(F->up, rt_str_catc(rt_str("LC_", 3), rt_range(rt_add(((rt_int)66LL), F->i_1657) - 1, 0, 127)), F->up->ty_char_148, rt_str_of_int(rt_add(((rt_int)97LL), F->i_1657)));
}
}
L_end_1656: ;
f_predef_const_784(F->up, rt_str("NEWLINE", 7), F->up->ty_string_149, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_q_192(F->up)), rt_str("\\n", 2)), f_q_192(F->up)), rt_str(", 1)", 4)));
f_predef_const_784(F->up, rt_str("SECONDS", 7), F->up->ty_float_147, rt_str("((double)RT_SECONDS)", 20));
f_predef_exc_786(F->up, rt_str("ACCESS_ERROR", 12));
f_predef_exc_786(F->up, rt_str("ASSERT_ERROR", 12));
f_predef_exc_786(F->up, rt_str("DISCRIMINANT_ERROR", 18));
f_predef_exc_786(F->up, rt_str("DIVIDE_ERROR", 12));
f_predef_exc_786(F->up, rt_str("FAILURE", 7));
f_predef_exc_786(F->up, rt_str("INDEX_ERROR", 11));
f_predef_exc_786(F->up, rt_str("INITIATE_ERROR", 14));
f_predef_exc_786(F->up, rt_str("NO_VALUE_ERROR", 14));
f_predef_exc_786(F->up, rt_str("OVERFLOW", 8));
f_predef_exc_786(F->up, rt_str("OVERLAP_ERROR", 13));
f_predef_exc_786(F->up, rt_str("RANGE_ERROR", 11));
f_predef_exc_786(F->up, rt_str("SELECT_ERROR", 12));
f_predef_exc_786(F->up, rt_str("STORAGE_OVERFLOW", 16));
f_predef_exc_786(F->up, rt_str("TASKING_ERROR", 13));
f_predef_exc_786(F->up, rt_str("UNDERFLOW", 9));
f_predef_exc_786(F->up, rt_str("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_793(struct f_greenc_1fr *up_, P159 u_792) {
  struct f_translate_793fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_792 = u_792;
F->p_1661 = NULL;
F->p_1661 = F->u_792;
F->y_1662 = NULL;
f_open_scope_339(F->up);
while ((F->p_1661 != NULL)) {
if (((*(P159)rt_nil_check(F->p_1661)).next_ == NULL)) {
if ((((*(P159)rt_nil_check(F->p_1661)).kind_ != F->up->n_proc_46) || ((*(P159)rt_nil_check(F->p_1661)).a_ != NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->p_1661)).line_, rt_str("the main program is a procedure without parameters", 50));
}
f_build_subprogram_421(F->up, F->p_1661, &F->y_1662);
f_define_338(F->up, F->y_1662, (*(P159)rt_nil_check(F->p_1661)).line_);
f_subprogram_body_430(F->up, F->p_1661, F->y_1662);
F->up->main_name_176 = (*(P110)rt_nil_check(F->y_1662)).cname_;
} else {
f_decl_element_425(F->up, F->p_1661);
}
F->p_1661 = (*(P159)rt_nil_check(F->p_1661)).next_;
}
L_end_1663: ;
ret_:

  return;
}

static void f_print_program_794(struct f_greenc_1fr *up_) {
  struct f_print_program_794fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_405(F->up);
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_192(F->up)), rt_str("paleo.h", 7)), f_q_192(F->up)));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("#include <math.h>", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_203(F->up, F->up->out_types_121);
f_print_buffer_203(F->up, F->up->out_frames_122);
f_print_buffer_203(F->up, F->up->out_helpers_123);
f_print_buffer_203(F->up, F->up->out_protos_124);
f_print_buffer_203(F->up, F->up->out_globals_125);
f_print_buffer_203(F->up, F->up->out_funcs_126);
rt_g_put(rt_str("int main(int argc, char **argv) {", 33));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_init(argc, argv);", 22));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_set_lang(1);", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_203(F->up, F->up->out_excs_128);
f_print_buffer_203(F->up, F->up->out_init_127);
rt_g_put(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->up->main_name_176))), rt_str("();", 3)));
rt_g_put(rt_str("\n", 1));
f_print_buffer_203(F->up, F->up->out_awaits_162);
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
F->frames_139 = ((rt_int)0LL);
F->handlers_142 = NULL;
F->cleanups_143 = NULL;
F->trial_144 = ((rt_int)0LL);
F->ty_int_145 = NULL;
F->ty_bool_146 = NULL;
F->ty_float_147 = NULL;
F->ty_char_148 = NULL;
F->ty_string_149 = NULL;
F->ty_void_150 = NULL;
F->ty_nil_151 = NULL;
F->ty_univ_152 = NULL;
F->ty_act_153 = NULL;
F->ty_tdecl_154 = NULL;
F->ty_entry_155 = NULL;
F->cur_task_156 = NULL;
F->accept_depth_157 = ((rt_int)0LL);
F->famarg_done_158 = 0;
F->fam_ix_161 = NULL;
F->out_awaits_162 = NULL;
F->no_cons_165 = NULL;
F->units_166 = NULL;
F->pkg_stack_167 = NULL;
F->cur_pkg_168 = NULL;
F->prefix_hint_169 = NULL;
F->call_want_170 = NULL;
F->pure_sym_171 = NULL;
F->pure_depth_172 = ((rt_int)0LL);
F->vrp_ok_173 = 0;
F->in_lv_path_174 = 0;
F->last_deref_175 = 0;
F->main_name_176 = NULL;
F->out_types_121 = f_new_buffer_196(F);
F->out_frames_122 = f_new_buffer_196(F);
F->out_helpers_123 = f_new_buffer_196(F);
F->out_protos_124 = f_new_buffer_196(F);
F->out_globals_125 = f_new_buffer_196(F);
F->out_funcs_126 = f_new_buffer_196(F);
F->out_init_127 = f_new_buffer_196(F);
F->out_excs_128 = f_new_buffer_196(F);
F->code_129 = F->out_init_127;
F->no_cons_165 = f_new_cons_346(F);
F->ty_int_145 = f_new_typ_345(F, F->t_int_75);
F->ty_bool_146 = f_new_typ_345(F, F->t_bool_76);
F->ty_float_147 = f_new_typ_345(F, F->t_float_77);
F->ty_char_148 = f_new_typ_345(F, F->t_char_85);
F->ty_string_149 = f_new_typ_345(F, F->t_string_79);
F->ty_void_150 = f_new_typ_345(F, F->t_void_83);
F->ty_nil_151 = f_new_typ_345(F, F->t_nil_84);
F->ty_act_153 = f_new_typ_345(F, F->t_act_87);
F->ty_tdecl_154 = f_new_typ_345(F, F->t_tdecl_88);
F->ty_entry_155 = f_new_typ_345(F, F->t_entry_89);
F->out_awaits_162 = f_new_buffer_196(F);
f_predefine_791(F);
f_read_source_217(F);
f_compilation_315(F, &F->units_166);
if ((F->units_166 == NULL)) {
f_fail_195(F, ((rt_int)1LL), rt_str("the compilation is empty", 24));
}
f_translate_793(F, F->units_166);
f_print_program_794(F);
ret_:

  return;
}

static void as_R1035(R1035 *d, R1035 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
}
static R1035 cp_R1035(R1035 s) {
  R1035 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1035(R1035 a, R1035 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_);
}
static void as_R1024(R1024 *d, R1024 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1024 cp_R1024(R1024 s) {
  R1024 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1024(R1024 a, R1024 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
}
static void as_R164(R164 *d, R164 s) {
  d->lo_ = s.lo_;
  d->hi_ = s.hi_;
  d->slen_ = s.slen_;
  d->mlo_ = s.mlo_;
  d->mhi_ = s.mhi_;
  d->hasm_ = s.hasm_;
}
static R164 cp_R164(R164 s) {
  R164 d = s;
  d.lo_ = s.lo_;
  d.hi_ = s.hi_;
  d.slen_ = s.slen_;
  d.mlo_ = s.mlo_;
  d.mhi_ = s.mhi_;
  d.hasm_ = s.hasm_;
  return d;
}
static int eq_R164(R164 a, R164 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_);
}
static void as_R160(R160 *d, R160 s) {
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
static R160 cp_R160(R160 s) {
  R160 d = s;
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
static int eq_R160(R160 a, R160 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_);
}
static void as_R141(R141 *d, R141 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R141 cp_R141(R141 s) {
  R141 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R141(R141 a, R141 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
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
  return d;
}
static int eq_R116(R116 a, R116 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_);
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
  d.members_ = s.members_;
  d.mnext_ = s.mnext_;
  d.chain_ = s.chain_;
  d.stack_ = s.stack_;
  return d;
}
static int eq_R111(R111 a, R111 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_);
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
