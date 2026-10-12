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
typedef struct R1016 R1016;
typedef struct R1016 *P1015;
struct R111 { int dummy_; rt_int kind_; P133 name_; P115 t_; P163 c_; P133 access_path_; P133 cname_; int ro_; rt_int mvalue_; int hasmv_; P159 decl_; P1015 params_; P115 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; P110 members_; P110 mnext_; P110 chain_; P110 stack_; };
typedef struct R1027 R1027;
typedef struct R1027 *P1026;
struct R116 { int dummy_; rt_int kind_; P133 name_; P159 lits_; P115 elem_; P115 idx_; P163 elemcons_; P163 tcons_; P1026 fields_; P115 target_; P159 decl_; P133 cname_; int forward_; int defined_; int priv_; P115 next_; };
struct R164 { int dummy_; P133 lo_; P133 hi_; P133 slen_; rt_int mlo_; rt_int mhi_; int hasm_; };
struct R1027 { int dummy_; P133 name_; P115 t_; P163 c_; P1026 next_; };
struct R1016 { int dummy_; P133 name_; rt_int mode_; P115 t_; P163 c_; P133 cfield_; P159 dflt_; P1015 next_; };
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
 rstr r_791;
 rt_int i_793;
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
 P140 l_799;
};
struct f_emit_201fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_200;
};
struct f_print_buffer_203fr { int dummy;
 struct f_greenc_1fr *up;
 P119 b_202;
 P140 l_802;
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
 rt_int i_807;
 rt_int j_808;
 rt_int n_809;
 int c_810;
 rt_int v_811;
 rstr buf_812;
 rt_int bl_813;
 rt_int base_818;
 rstr two_825;
};
struct f_read_source_217fr { int dummy;
 struct f_greenc_1fr *up;
 rstr buf_826;
 rt_int bl_827;
 int c_828;
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
 rt_int n_835;
 P159 p_836;
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
 P159 x_838;
};
struct f_id_list_250fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_249;
 P159 head_839;
 P159 tail_840;
 P159 x_841;
};
struct f_binop_255fr { int dummy;
 struct f_greenc_1fr *up;
 P133 op_251;
 P159 l_252;
 P159 r_253;
 rt_int line_254;
 P159 result_;
 P159 x_843;
};
struct f_expr_257fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_256;
 P159 l_844;
 P159 r_845;
 P133 op_846;
 rt_int line_847;
};
struct f_is_rel_259fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_258;
 int result_;
};
struct f_relation_261fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_260;
 P159 l_849;
 P159 r_850;
 P159 lo_851;
 P159 hi_852;
 P159 t_853;
 P133 op_854;
 rt_int line_855;
 int neg_856;
};
struct f_simple_expr_263fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_262;
 P159 l_857;
 P159 r_858;
 P133 op_859;
 rt_int line_860;
};
struct f_term_265fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_264;
 P159 l_862;
 P159 r_863;
 P133 op_864;
 rt_int line_865;
};
struct f_factor_267fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_266;
 P159 l_867;
 P159 r_868;
 P133 op_869;
 rt_int line_870;
};
struct f_primary_269fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_268;
 P159 x_871;
 rt_int line_872;
};
struct f_agg_or_paren_271fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_270;
 rt_int line_873;
 P159 items_874;
 P159 itail_875;
 P159 it_876;
 P159 first_877;
 P159 keys_878;
 P159 ktail_879;
 P159 lab_880;
 P159 x_881;
 int more_882;
};
struct f_name_p_273fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_272;
 P159 p_885;
 P159 x_886;
 P159 args_887;
 P159 atail_888;
 P159 lo_889;
 P159 r_890;
 rt_int line_891;
 int more_892;
 P133 formal_896;
 rt_int mark_897;
};
struct f_subtype_ind_275fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_274;
 P159 x_898;
 P159 r_899;
 P159 args_900;
 P159 atail_901;
 P159 lo_902;
 rt_int line_903;
 int more_904;
};
struct f_type_spec_277fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_276;
 P159 x_907;
};
struct f_type_def_279fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_278;
 P159 x_908;
 P159 lits_909;
 P159 ltail_910;
 P159 l_911;
 P159 idx_912;
 P159 itail_913;
 P159 r_914;
 P159 comps_915;
 P159 ctail_916;
 P159 names_917;
 P159 st_918;
 P159 def_919;
 P159 cm_920;
 rt_int line_921;
 int more_922;
};
struct f_skip_pragma_280fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_skip_visibility_281fr { int dummy;
 struct f_greenc_1fr *up;
 P159 names_928;
};
struct f_skip_representation_282fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_284fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_283;
 P159 head_932;
 P159 tail_933;
 P159 x_934;
 P159 names_935;
};
struct f_object_decl_286fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_285;
 P159 head_937;
 P159 tail_938;
 P159 names_939;
 P159 st_940;
 P159 init_941;
 P159 x_942;
 rt_int line_943;
 int is_const_944;
};
struct f_type_decl_288fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_287;
 P159 x_947;
 rt_int line_948;
};
struct f_formal_part_290fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_289;
 P159 head_949;
 P159 tail_950;
 P159 names_951;
 P159 st_952;
 P159 def_953;
 P159 p_954;
 rt_int mode_955;
 int more_956;
};
struct f_designator_292fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *res_291;
};
struct f_subprogram_294fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_293;
 P159 x_959;
 rt_int line_960;
 int is_proc_961;
};
struct f_body_part_296fr { int dummy;
 struct f_greenc_1fr *up;
 P159 x_295;
};
struct f_parse_handlers_298fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_297;
 P159 head_962;
 P159 tail_963;
 P159 h_964;
 P159 names_965;
 P159 ntail_966;
 P159 n_967;
};
struct f_package_p_300fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_299;
 P159 x_971;
 rt_int line_972;
};
struct f_at_statements_end_301fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_303fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_302;
 P159 head_973;
 P159 tail_974;
 P159 x_975;
};
struct f_statement_305fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_304;
 P159 x_977;
 P159 t_978;
 rt_int line_979;
 P133 label_980;
};
struct f_task_statement_307fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_306;
};
struct f_if_stmt_309fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_308;
 P159 x_982;
 P159 arm_983;
 P159 head_984;
 P159 tail_985;
 int go_986;
};
struct f_case_stmt_311fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_310;
 P159 x_988;
 P159 arm_989;
 P159 head_990;
 P159 tail_991;
 P159 labs_992;
 P159 ltail_993;
 P159 l_994;
 int others_arm_995;
};
struct f_loop_stmt_313fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_312;
 P159 x_998;
 P159 r_999;
 rt_int line_1000;
};
struct f_compilation_315fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_314;
 P159 head_1001;
 P159 tail_1002;
 P159 x_1003;
};
struct f_hash_317fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_316;
 rt_int result_;
 rt_int h_1005;
 rt_int i_1007;
};
struct f_lookup_319fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_318;
 P110 result_;
 P110 y_1011;
};
struct f_lookup_decl_321fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_320;
 P110 result_;
 P110 y_1013;
};
struct f_overloadable_323fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_322;
 int result_;
};
struct f_same_326fr { int dummy;
 struct f_greenc_1fr *up;
 P115 a_324;
 P115 b_325;
 int result_;
};
struct f_same_signature_329fr { int dummy;
 struct f_greenc_1fr *up;
 P1015 a_327;
 P1015 b_328;
 int result_;
 P1015 x_1017;
 P1015 y_1018;
};
struct f_define_332fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_330;
 rt_int line_331;
 rt_int h_1020;
 P110 z_1021;
};
struct f_open_scope_333fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_334fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_337fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_335;
 P133 name_336;
 P110 result_;
};
struct f_new_typ_339fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_338;
 P115 result_;
};
struct f_new_cons_340fr { int dummy;
 struct f_greenc_1fr *up;
 P163 result_;
};
struct f_kind_name_342fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_341;
 rstr result_;
};
struct f_check_type_346fr { int dummy;
 struct f_greenc_1fr *up;
 P115 got_343;
 P115 want_344;
 rt_int line_345;
};
struct f_field_count_348fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_347;
 rt_int result_;
 rt_int n_1033;
 P1026 f_1034;
};
struct f_ctype_351fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_349;
 P133 *r_350;
 P133 s_1036;
};
struct f_field_decls_354fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_352;
 P133 *r_353;
 P1026 f_1038;
 P133 s_1039;
 P133 ct_1040;
};
struct f_declare_ctype_356fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_355;
 P133 ct_1042;
 P133 s_1043;
 P115 target_1044;
};
struct f_lit_index_359fr { int dummy;
 struct f_greenc_1fr *up;
 P159 lits_357;
 rstr name_358;
 rt_int result_;
 rt_int i_1045;
 P159 l_1046;
};
struct f_manifest_363fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_360;
 rt_int *v_361;
 int *ok_362;
 rt_int a_1048;
 rt_int b_1049;
 int ok2_1050;
 P110 y_1051;
};
struct f_resolve_367fr { int dummy;
 struct f_greenc_1fr *up;
 P159 st_364;
 P115 *t_365;
 P163 *c_366;
 P110 y_1052;
 P115 dummy_1053;
 P133 code_1054;
 int ok_1055;
 P159 r_1056;
};
struct f_type_definition_372fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_368;
 P133 name_369;
 P115 *t_370;
 P163 *c_371;
 P115 dummy_1057;
 P115 it_1058;
 P163 ic_1059;
 P159 l_1060;
 P159 comp_1061;
 P1026 f_1062;
 P1026 tail_1063;
 int ok_1064;
 rt_int n_1065;
 P110 y_1066;
};
struct f_finish_ptr_374fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_373;
 P163 c_1072;
};
struct f_init_storage_378fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_375;
 P115 t_376;
 P163 c_377;
 P133 ct_1073;
 P133 i_1074;
 P1026 f_1075;
};
struct f_composite_380fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_379;
 int result_;
};
struct f_assign_code_386fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_381;
 P115 t_382;
 rstr v_383;
 P163 c_384;
 P133 *r_385;
 P133 ct_1077;
};
struct f_copy_code_390fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_387;
 rstr v_388;
 P133 *r_389;
 P133 ct_1078;
};
struct f_eq_code_395fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_391;
 rstr a_392;
 rstr b_393;
 P133 *r_394;
 P133 ct_1079;
};
struct f_seen_name_398fr { int dummy;
 struct f_greenc_1fr *up;
 P140 l_396;
 rstr s_397;
 int result_;
 P140 p_1080;
};
struct f_emit_helpers_399fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_1082;
 P140 done_1083;
 P140 l_1084;
};
struct f_helper_bodies_401fr { int dummy;
 struct f_greenc_1fr *up;
 P115 t_400;
 P133 c_1088;
 P119 b_1089;
 P133 ct_1090;
 P133 x_1091;
 P133 y_1092;
 P133 conds_1093;
 P1026 f_1094;
};
struct f_storage_405fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_402;
 P115 t_403;
 P133 *access_code_404;
 P133 ct_1097;
 P133 g_1098;
};
struct f_bind_408fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_406;
 P133 access_code_407;
};
struct f_declare_subprograms_410fr { int dummy;
 struct f_greenc_1fr *up;
 P159 from_409;
 P159 e_1099;
};
struct f_declare_one_412fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_411;
 P110 y_1101;
 P110 z_1102;
};
struct f_build_subprogram_415fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_413;
 P110 *y_414;
 P159 p_1104;
 P1015 pm_1105;
 P1015 tail_1106;
 P163 rc_1107;
 rt_int k_1108;
};
struct f_decl_elements_417fr { int dummy;
 struct f_greenc_1fr *up;
 P159 decls_416;
 P159 e_1112;
 int declared_1113;
};
struct f_decl_element_419fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_418;
 P110 y_1115;
 P115 t_1116;
 P115 vt_1117;
 P163 c_1118;
 P133 acc_1119;
 P133 v_1120;
 P133 x_1121;
 int ok_1122;
};
struct f_other_decl_421fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_420;
};
struct f_subprogram_body_424fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_422;
 P110 y_423;
 P119 saved_code_1124;
 P119 saved_fields_1125;
 int saved_in_1126;
 P110 saved_sym_1127;
 P136 saved_exits_1128;
 rt_int saved_frames_1129;
 P140 saved_handlers_1130;
 P140 saved_cleanups_1131;
 P110 saved_pure_1132;
 P133 aw_1133;
 rt_int saved_pdepth_1134;
 P133 args_1135;
 P133 head_1136;
 P133 frame_1137;
 P133 parent_1138;
 P133 ct_1139;
 P133 x_1140;
 P1015 pm_1141;
 P110 p_1142;
};
struct f_gen_statements_426fr { int dummy;
 struct f_greenc_1fr *up;
 P159 stmts_425;
 P159 s_1144;
};
struct f_pop_frames_428fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_427;
 rt_int i_1146;
 P140 c_1147;
};
struct f_push_cleanup_430fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_429;
};
struct f_pop_cleanup_431fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_435fr { int dummy;
 struct f_greenc_1fr *up;
 P159 stmts_432;
 P159 hs_433;
 rt_int line_434;
 P133 f_1151;
 P133 x_1152;
 P159 h_1153;
 P159 n_1154;
 int first_1155;
 int has_others_1156;
 P133 conds_1157;
};
struct f_exc_id_439fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_436;
 rt_int line_437;
 P133 *r_438;
 P110 y_1162;
};
struct f_gen_statement_441fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_440;
 P115 t_1163;
 P115 vt_1164;
 P163 c_1165;
 P133 lv_1166;
 P133 v_1167;
 P133 x_1168;
 int ro_1169;
};
struct f_slice_assign_443fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_442;
 P133 lv_1171;
 P133 lo_1172;
 P133 hi_1173;
 P133 v_1174;
 P115 t_1175;
 P115 vt_1176;
 P163 c_1177;
 int ro_1178;
};
struct f_gen_call_445fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_444;
 P159 c_1179;
 P115 t_1180;
 P133 v_1181;
};
struct f_gen_if_447fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_446;
 P159 a_1182;
 int first_1183;
 P115 t_1184;
 P133 v_1185;
};
struct f_gen_case_449fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_448;
 P115 st_1187;
 P115 vt_1188;
 int first_1189;
 P159 a_1190;
 P159 lab_1191;
 P133 sel_1192;
 P133 tmp_1193;
 P133 ct_1194;
 P133 conds_1195;
 P133 v_1196;
 P133 lo_1197;
 P133 hi_1198;
};
struct f_push_exit_453fr { int dummy;
 struct f_greenc_1fr *up;
 P133 match_450;
 int is_loop_451;
 P133 *label_452;
};
struct f_gen_loop_455fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_454;
 P115 t_1203;
 P115 vt_1204;
 P163 c_1205;
 P133 label_1206;
 P133 cond_1207;
 P133 acc_1208;
 P133 lov_1209;
 P133 hiv_1210;
 P133 it_1211;
 P110 y_1212;
 P159 r_1213;
};
struct f_gen_block_457fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_456;
 P133 label_1214;
 P133 aw_1215;
};
struct f_gen_exit_459fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_458;
 P136 x_1216;
 P115 t_1217;
 P133 v_1218;
};
struct f_gen_return_461fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_460;
 P115 vt_1220;
 P133 v_1221;
};
struct f_access_of_464fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_462;
 P133 *r_463;
 P133 p_1222;
 rt_int i_1224;
};
struct f_link_to_467fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_465;
 P133 *r_466;
 rt_int i_1229;
};
struct f_c_ident_469fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_468;
 rstr result_;
};
struct f_deref_473fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_470;
 P115 t_471;
 P133 *r_472;
 P133 ct_1233;
};
struct f_is_object_475fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_474;
 int result_;
 P110 y_1234;
};
struct f_lvalue_481fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_476;
 P133 *code_out_477;
 P115 *t_478;
 P163 *c_479;
 int *ro_480;
 P110 y_1235;
 P133 base_1236;
 P115 bt_1237;
 P163 bc_1238;
};
struct f_select_on_489fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_482;
 P115 bt_483;
 P159 e_484;
 int *ro_485;
 P133 *code_out_486;
 P115 *t_487;
 P163 *c_488;
 P1026 f_1239;
 P133 d_1240;
};
struct f_index_on_498fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_490;
 P115 bt_491;
 P159 e_492;
 int *ro_493;
 int lv_494;
 P133 *code_out_495;
 P115 *t_496;
 P163 *c_497;
 P159 a_1242;
 P115 it_1243;
 P133 i_1244;
 P133 lo_1245;
 P133 hi_1246;
 P133 d_1247;
};
struct f_is_char_lit_500fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_499;
 int result_;
};
struct f_is_enum_lit_502fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_501;
 int result_;
 P110 y_1248;
};
struct f_c_string_504fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_503;
 rstr result_;
 rt_int n_1249;
 rt_int i_1251;
 rstr r_1256;
 rt_int j_1257;
 rt_int i_1259;
};
struct f_gexpr_509fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_505;
 P115 want_506;
 P115 *t_507;
 P133 *r_508;
 P110 y_1263;
 P115 bt_1264;
 P163 c_1265;
 int ro_1266;
 P133 base_1267;
 P133 a_1268;
 P159 nm_1269;
 int saved_lv_1270;
};
struct f_gexpr_1_514fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_510;
 P115 want_511;
 P115 *t_512;
 P133 *r_513;
 P110 y_1271;
 P115 bt_1272;
 P163 c_1273;
 int ro_1274;
 P133 base_1275;
 P133 a_1276;
 P159 nm_1277;
};
struct f_char_literal_519fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_515;
 P115 want_516;
 P115 *t_517;
 P133 *r_518;
 rt_int i_1279;
};
struct f_gen_name_524fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_520;
 P115 want_521;
 P115 *t_522;
 P133 *r_523;
 P110 y_1280;
 P110 z_1281;
 P159 call_1282;
};
struct f_gen_unop_529fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_525;
 P115 want_526;
 P115 *t_527;
 P133 *r_528;
 P133 a_1284;
 int done_1285;
};
struct f_gen_binop_534fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_530;
 P115 want_531;
 P115 *t_532;
 P133 *r_533;
 rstr op_1286;
 P115 ta_1287;
 P115 tb_1288;
 P115 hint_1289;
 P115 ct_1290;
 P133 a_1291;
 P133 b_1292;
 P133 x_1293;
 P133 dummy_1294;
 int done_1295;
};
struct f_conversion_539fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_535;
 P110 y_536;
 P115 *t_537;
 P133 *r_538;
 P115 aty_1296;
 P133 a_1297;
};
struct f_gen_attr_544fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_540;
 P115 want_541;
 P115 *t_542;
 P133 *r_543;
 rstr a_1298;
 P110 y_1299;
 P115 tt_1300;
 P115 aty_1301;
 P133 v_1302;
 P133 d_1303;
 P163 c_1304;
 rt_int n_1305;
};
struct f_allocator_549fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_545;
 P115 want_546;
 P115 *t_547;
 P133 *r_548;
 P110 y_1306;
 P115 target_1307;
 P115 vt_1308;
 P133 ct_1309;
 P133 pt_1310;
 P133 cell_1311;
 P133 v_1312;
 P133 x_1313;
};
struct f_aggregate_554fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_550;
 P115 want_551;
 P115 *t_552;
 P133 *r_553;
 P159 it_1314;
 P1026 f_1315;
 P115 vt_1316;
 P133 ct_1317;
 P133 tmp_1318;
 P133 v_1319;
 P133 x_1320;
 P133 parts_1321;
 P133 et_1322;
 P133 lo_1323;
 P133 hi_1324;
 P133 key_1325;
 rt_int n_1326;
 P159 lab_1327;
};
struct f_actual_for_558fr { int dummy;
 struct f_greenc_1fr *up;
 P159 args_555;
 P1015 pm_556;
 P1015 first_557;
 P159 result_;
 P159 a_1333;
 P1015 p_1334;
};
struct f_gcall_563fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_559;
 int is_stmt_560;
 P115 *t_561;
 P133 *r_562;
 P159 fn_1337;
 P159 nm_1338;
 P110 y_1339;
 P133 args_1340;
 P133 lv_1341;
 P133 v_1342;
 P133 ct_1343;
 P133 x_1344;
 P159 a_1345;
 P1015 pm_1346;
 P115 lt_1347;
 P115 vt_1348;
 P163 lc_1349;
 int ro_1350;
};
struct f_gcall_with_568fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_564;
 P110 y_565;
 P115 *t_566;
 P133 *r_567;
 P133 args_1351;
 P133 lv_1352;
 P133 v_1353;
 P159 a_1354;
 P1015 pm_1355;
 P115 lt_1356;
 P115 vt_1357;
 P163 lc_1358;
 int ro_1359;
};
struct f_builtin_575fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_569;
 P159 args_570;
 rt_int line_571;
 int is_stmt_572;
 P115 *t_573;
 P133 *r_574;
 P115 aty_1361;
 P115 lt_1362;
 P133 a_1363;
 P133 w_1364;
 P133 lv_1365;
 P163 lc_1366;
 int ro_1367;
};
struct f_is_package_577fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_576;
 int result_;
 P110 y_1368;
};
struct f_member_of_581fr { int dummy;
 struct f_greenc_1fr *up;
 rstr p_578;
 rstr name_579;
 rt_int line_580;
 P110 result_;
 P110 y_1369;
 P110 m_1370;
};
struct f_inside_package_583fr { int dummy;
 struct f_greenc_1fr *up;
 P159 p_582;
 int result_;
 P140 l_1372;
};
struct f_copy_sym_586fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_584;
 P110 *z_585;
};
struct f_complete_private_589fr { int dummy;
 struct f_greenc_1fr *up;
 P115 ph_587;
 P115 full_588;
 P133 n_1376;
 P159 p_1377;
};
struct f_package_spec_591fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_590;
 P110 y_1378;
 P110 m_1379;
 P110 z_1380;
 P159 saved_1381;
 P110 first_private_1382;
};
struct f_hidden_from_594fr { int dummy;
 struct f_greenc_1fr *up;
 P110 m_592;
 P110 first_private_593;
 int result_;
 P110 p_1386;
};
struct f_package_body_596fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_595;
 P110 y_1388;
 P110 m_1389;
 P110 z_1390;
 P159 saved_1391;
};
struct f_use_clause_598fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_597;
 P159 n_1397;
 P110 y_1398;
 P110 m_1399;
 P110 z_1400;
 P110 old_1401;
};
struct f_fits_603fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_599;
 P159 args_600;
 P115 want_601;
 int *ok_602;
 P1015 pm_1404;
 P159 a_1405;
 P115 t_1406;
 P163 c_1407;
 P133 v_1408;
 int ro_1409;
 P119 saved_1410;
 rt_int used_1411;
};
struct f_is_builtin_605fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_604;
 int result_;
};
struct f_resolve_overload_612fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_606;
 P159 args_607;
 int is_stmt_608;
 P115 want_609;
 rt_int line_610;
 P110 *y_611;
 P110 z_1416;
 P110 first_1417;
 rt_int n_1418;
 int ok_1419;
 rt_int pass_1421;
};
struct f_user_operator_618fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_613;
 P115 want_614;
 P115 *t_615;
 P133 *r_616;
 int *done_617;
 P133 op_1426;
 int negate_1427;
 P110 y_1428;
 P159 call_1429;
 P159 fname_1430;
 P159 l_1431;
 P159 rt_1432;
 int ok_1433;
};
struct f_task_p_620fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_619;
 P159 x_1435;
 rt_int line_1436;
};
struct f_entry_p_622fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_621;
 P159 x_1437;
};
struct f_accept_p_624fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_623;
 P159 x_1438;
};
struct f_delay_p_626fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_625;
 P159 x_1439;
};
struct f_designators_628fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_627;
 P159 head_1440;
 P159 tail_1441;
 P159 n_1442;
};
struct f_parse_task_statement_630fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_629;
 P159 x_1444;
 P159 alt_1445;
 P159 head_1446;
 P159 tail_1447;
 rt_int line_1448;
};
struct f_path_at_634fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_631;
 rstr field_632;
 P133 *r_633;
 rt_int i_1451;
};
struct f_is_task_name_636fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_635;
 int result_;
 P110 y_1455;
};
struct f_task_of_640fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_637;
 P110 *y_638;
 P159 *ix_639;
 P159 n_1456;
};
struct f_own_index_642fr { int dummy;
 struct f_greenc_1fr *up;
 P133 *r_641;
 P110 y_1457;
};
struct f_member_647fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_643;
 rstr arr_644;
 rstr i_645;
 P133 *r_646;
 P133 lo_1458;
 P133 hi_1459;
};
struct f_act_path_650fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_648;
 P133 *r_649;
 P133 i_1460;
};
struct f_act_path_i_654fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_651;
 rstr i_652;
 P133 *r_653;
};
struct f_entry_path_658fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_655;
 rstr i_656;
 P133 *r_657;
 P133 own_1461;
};
struct f_declare_slot_661fr { int dummy;
 struct f_greenc_1fr *up;
 rstr ctype_name_659;
 rstr field_660;
};
struct f_task_decl_663fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_662;
};
struct f_family_arg_struct_664fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_668fr { int dummy;
 struct f_greenc_1fr *up;
 P159 b_665;
 P110 y_666;
 P133 x_667;
 P133 lo_1462;
 P133 hi_1463;
 P133 v_1464;
 P115 vt_1465;
 P163 c_1466;
};
struct f_entry_family_slot_673fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_669;
 rstr base_670;
 rstr i_671;
 P133 *r_672;
 P133 lo_1467;
 P133 hi_1468;
};
struct f_task_spec_675fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_674;
 P110 y_1469;
 P110 m_1470;
 P110 z_1471;
 P110 saved_1472;
 P133 d_1473;
 P133 v_1474;
 P133 p_1475;
 P133 p2_1476;
 P115 vt_1477;
 P159 r_1478;
};
struct f_entry_decl_677fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_676;
 P110 y_1480;
 P159 p_1481;
 P1015 pm_1482;
 P1015 tail_1483;
 P133 fields_1484;
 P133 ct_1485;
 P133 x_1486;
 P133 lo_1487;
 P133 hi_1488;
};
struct f_task_body_679fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_678;
 P110 y_1492;
 P110 b_1493;
 P110 m_1494;
 P110 z_1495;
 P110 saved_1496;
};
struct f_task_awaits_682fr { int dummy;
 struct f_greenc_1fr *up;
 P159 decls_680;
 P133 *aw_681;
 P159 e_1500;
 P110 y_1501;
 P133 p_1502;
};
struct f_task_failure_684fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_683;
 P110 y_1504;
 P133 a_1505;
};
struct f_entry_sym_688fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_685;
 P110 *y_686;
 P159 *ix_687;
 P110 t_1506;
};
struct f_other_call_693fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_689;
 int is_stmt_690;
 P115 *t_691;
 P133 *r_692;
 P110 y_1507;
 P1015 pm_1508;
 P159 a_1509;
 P133 parts_1510;
 P133 v_1511;
 P133 lv_1512;
 P133 ent_1513;
 P133 act_1514;
 P133 i_1515;
 P115 vt_1516;
 P115 lt_1517;
 P163 lc_1518;
 int ro_1519;
 P159 ix_1520;
 P159 fix_1521;
 P159 args_node_1522;
};
struct f_other_attr_698fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_694;
 P110 y_695;
 P115 *t_696;
 P133 *r_697;
 rstr a_1524;
 P133 p_1525;
};
struct f_member_attr_702fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_699;
 P115 *t_700;
 P133 *r_701;
 P110 y_1526;
 P159 ix_1527;
 P133 i_1528;
 P133 p_1529;
 P115 vt_1530;
};
struct f_task_builtin_708fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_703;
 P159 args_704;
 rt_int line_705;
 P115 *t_706;
 P133 *r_707;
 P115 vt_1531;
 P133 v_1532;
};
struct f_gen_accept_710fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_709;
 P110 y_1533;
 P133 ent_1534;
 P133 ep_1535;
 P133 xf_1536;
 P133 x_1537;
 P1015 pm_1538;
 P159 f_1539;
 P110 p_1540;
};
struct f_member_slot_714fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_711;
 P159 s_712;
 P133 *ent_713;
 P115 vt_1542;
 P133 v_1543;
};
struct f_gen_delay_ticks_717fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_715;
 P133 *r_716;
 P115 vt_1544;
 P133 v_1545;
};
struct f_gen_select_719fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_718;
 P159 alt_1546;
 rt_int n_1547;
 rt_int i_1548;
 int has_delay_1549;
 int has_accept_1550;
 P133 al_1551;
 P133 w_1552;
 P133 g_1553;
 P133 ent_1554;
 P133 ticks_1555;
 P115 vt_1556;
 P110 y_1557;
};
struct f_family_range_724fr { int dummy;
 struct f_greenc_1fr *up;
 P110 y_720;
 P159 ix_721;
 P133 *lo_722;
 P133 *hi_723;
 P115 vt_1561;
};
struct f_task_statement_gen_726fr { int dummy;
 struct f_greenc_1fr *up;
 P159 s_725;
 P159 n_1562;
 P159 ix_1563;
 P110 y_1564;
 P133 a_1565;
 P133 d_1566;
 P133 l_1567;
 P133 ticks_1568;
 P133 lo_1569;
 P133 hi_1570;
};
struct f_root_name_728fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_727;
 P159 result_;
};
struct f_check_pure_target_731fr { int dummy;
 struct f_greenc_1fr *up;
 P159 target_729;
 rt_int line_730;
 P159 n_1574;
 P110 y_1575;
};
struct f_assigns_nonlocal_734fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_732;
 rstr name_733;
 int result_;
};
struct f_declares_737fr { int dummy;
 struct f_greenc_1fr *up;
 P159 d_735;
 rstr name_736;
 int result_;
 P159 p_1576;
 P159 e_1577;
};
struct f_scan_handlers_741fr { int dummy;
 struct f_greenc_1fr *up;
 P159 h_738;
 P159 d_739;
 rstr name_740;
 int result_;
 P159 p_1580;
};
struct f_scan_assigns_745fr { int dummy;
 struct f_greenc_1fr *up;
 P159 stmts_742;
 P159 d_743;
 rstr name_744;
 int result_;
 P159 s_1582;
 P159 a_1583;
 P159 r_1584;
};
struct f_check_call_rules_748fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_746;
 P110 y_747;
 P110 z_1588;
 P110 s_1589;
};
struct f_generic_p_750fr { int dummy;
 struct f_greenc_1fr *up;
 P159 *res_749;
 P159 x_1591;
 P159 p_1592;
 P159 head_1593;
 P159 tail_1594;
 P159 names_1595;
 P159 st_1596;
 P159 def_1597;
 P159 sub_1598;
 P133 def_name_text_1599;
 int more_1600;
};
struct f_instantiation_753fr { int dummy;
 struct f_greenc_1fr *up;
 P159 x_751;
 P159 *res_752;
 P159 i_1603;
 P159 head_1604;
 P159 tail_1605;
 P159 a_1606;
 P133 formal_1607;
 rt_int mark_1608;
 int more_1609;
};
struct f_generic_decl_755fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_754;
 P110 y_1611;
};
struct f_is_generic_name_757fr { int dummy;
 struct f_greenc_1fr *up;
 rstr n_756;
 int result_;
 P110 y_1612;
};
struct f_attach_generic_body_759fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_758;
 P110 y_1613;
};
struct f_gactual_763fr { int dummy;
 struct f_greenc_1fr *up;
 P159 args_760;
 rt_int nth_761;
 rstr name_762;
 P159 result_;
 P159 a_1614;
 rt_int i_1615;
};
struct f_copy_node_767fr { int dummy;
 struct f_greenc_1fr *up;
 P159 n_764;
 P133 name_765;
 P159 *r_766;
};
struct f_instantiate_769fr { int dummy;
 struct f_greenc_1fr *up;
 P159 e_768;
 P110 g_1617;
 P159 gd_1618;
 P159 pat_1619;
 P159 f_1620;
 P159 a_1621;
 P159 cn_1622;
 P110 y_1623;
 P110 z_1624;
 P110 fs_1625;
 rt_int nth_1626;
 P115 t_1627;
 P115 vt_1628;
 P163 c_1629;
 P133 v_1630;
 P133 acc_1631;
 P133 x_1632;
 int ok_1633;
};
struct f_predef_type_774fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_770;
 P115 t_771;
 rstr lo_772;
 rstr hi_773;
 P110 y_1636;
};
struct f_predef_const_778fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_775;
 P115 t_776;
 rstr code_text_777;
 P110 y_1637;
};
struct f_predef_exc_780fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_779;
 P110 y_1638;
};
struct f_predef_lit_784fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_781;
 P115 t_782;
 rt_int v_783;
 P110 y_1639;
};
struct f_predefine_785fr { int dummy;
 struct f_greenc_1fr *up;
 rstr control_1640;
 rt_int start_1641;
 rt_int code_no_1642;
 rt_int i_1644;
 rt_int i_1649;
};
struct f_translate_787fr { int dummy;
 struct f_greenc_1fr *up;
 P159 u_786;
 P159 p_1653;
 P110 y_1654;
};
struct f_print_program_788fr { int dummy;
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
static void as_R1027(R1027 *d, R1027 s);
static R1027 cp_R1027(R1027 s);
static int eq_R1027(R1027 a, R1027 b);
static void as_R1016(R1016 *d, R1016 s);
static R1016 cp_R1016(R1016 s);
static int eq_R1016(R1016 a, R1016 b);
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
static P110 f_lookup_decl_321(struct f_greenc_1fr *up_, P159 d_320);
static int f_overloadable_323(struct f_greenc_1fr *up_, P110 y_322);
static int f_same_326(struct f_greenc_1fr *up_, P115 a_324, P115 b_325);
static int f_same_signature_329(struct f_greenc_1fr *up_, P1015 a_327, P1015 b_328);
static void f_define_332(struct f_greenc_1fr *up_, P110 y_330, rt_int line_331);
static void f_open_scope_333(struct f_greenc_1fr *up_);
static void f_close_scope_334(struct f_greenc_1fr *up_);
static P110 f_new_sym_337(struct f_greenc_1fr *up_, rt_int kind_335, P133 name_336);
static P115 f_new_typ_339(struct f_greenc_1fr *up_, rt_int kind_338);
static P163 f_new_cons_340(struct f_greenc_1fr *up_);
static rstr f_kind_name_342(struct f_greenc_1fr *up_, P115 t_341);
static void f_check_type_346(struct f_greenc_1fr *up_, P115 got_343, P115 want_344, rt_int line_345);
static rt_int f_field_count_348(struct f_greenc_1fr *up_, P115 t_347);
static void f_ctype_351(struct f_greenc_1fr *up_, P115 t_349, P133 *r_350);
static void f_field_decls_354(struct f_greenc_1fr *up_, P115 t_352, P133 *r_353);
static void f_declare_ctype_356(struct f_greenc_1fr *up_, P115 t_355);
static rt_int f_lit_index_359(struct f_greenc_1fr *up_, P159 lits_357, rstr name_358);
static void f_manifest_363(struct f_greenc_1fr *up_, P159 e_360, rt_int *v_361, int *ok_362);
static void f_resolve_367(struct f_greenc_1fr *up_, P159 st_364, P115 *t_365, P163 *c_366);
static void f_type_definition_372(struct f_greenc_1fr *up_, P159 d_368, P133 name_369, P115 *t_370, P163 *c_371);
static void f_finish_ptr_374(struct f_greenc_1fr *up_, P115 t_373);
static void f_init_storage_378(struct f_greenc_1fr *up_, rstr lval_375, P115 t_376, P163 c_377);
static int f_composite_380(struct f_greenc_1fr *up_, P115 t_379);
static void f_assign_code_386(struct f_greenc_1fr *up_, rstr lval_381, P115 t_382, rstr v_383, P163 c_384, P133 *r_385);
static void f_copy_code_390(struct f_greenc_1fr *up_, P115 t_387, rstr v_388, P133 *r_389);
static void f_eq_code_395(struct f_greenc_1fr *up_, P115 t_391, rstr a_392, rstr b_393, P133 *r_394);
static int f_seen_name_398(struct f_greenc_1fr *up_, P140 l_396, rstr s_397);
static void f_emit_helpers_399(struct f_greenc_1fr *up_);
static void f_helper_bodies_401(struct f_greenc_1fr *up_, P115 t_400);
static void f_storage_405(struct f_greenc_1fr *up_, rstr name_402, P115 t_403, P133 *access_code_404);
static void f_bind_408(struct f_greenc_1fr *up_, P110 y_406, P133 access_code_407);
static void f_declare_subprograms_410(struct f_greenc_1fr *up_, P159 from_409);
static void f_declare_one_412(struct f_greenc_1fr *up_, P159 e_411);
static void f_build_subprogram_415(struct f_greenc_1fr *up_, P159 d_413, P110 *y_414);
static void f_decl_elements_417(struct f_greenc_1fr *up_, P159 decls_416);
static void f_decl_element_419(struct f_greenc_1fr *up_, P159 e_418);
static void f_other_decl_421(struct f_greenc_1fr *up_, P159 e_420);
static void f_subprogram_body_424(struct f_greenc_1fr *up_, P159 d_422, P110 y_423);
static void f_gen_statements_426(struct f_greenc_1fr *up_, P159 stmts_425);
static void f_pop_frames_428(struct f_greenc_1fr *up_, rt_int upto_427);
static void f_push_cleanup_430(struct f_greenc_1fr *up_, rstr s_429);
static void f_pop_cleanup_431(struct f_greenc_1fr *up_);
static void f_guarded_435(struct f_greenc_1fr *up_, P159 stmts_432, P159 hs_433, rt_int line_434);
static void f_exc_id_439(struct f_greenc_1fr *up_, rstr name_436, rt_int line_437, P133 *r_438);
static void f_gen_statement_441(struct f_greenc_1fr *up_, P159 s_440);
static void f_slice_assign_443(struct f_greenc_1fr *up_, P159 s_442);
static void f_gen_call_445(struct f_greenc_1fr *up_, P159 s_444);
static void f_gen_if_447(struct f_greenc_1fr *up_, P159 s_446);
static void f_gen_case_449(struct f_greenc_1fr *up_, P159 s_448);
static void f_push_exit_453(struct f_greenc_1fr *up_, P133 match_450, int is_loop_451, P133 *label_452);
static void f_gen_loop_455(struct f_greenc_1fr *up_, P159 s_454);
static void f_gen_block_457(struct f_greenc_1fr *up_, P159 s_456);
static void f_gen_exit_459(struct f_greenc_1fr *up_, P159 s_458);
static void f_gen_return_461(struct f_greenc_1fr *up_, P159 s_460);
static void f_access_of_464(struct f_greenc_1fr *up_, P110 y_462, P133 *r_463);
static void f_link_to_467(struct f_greenc_1fr *up_, rt_int l_465, P133 *r_466);
static rstr f_c_ident_469(struct f_greenc_1fr *up_, rstr s_468);
static void f_deref_473(struct f_greenc_1fr *up_, rstr base_470, P115 t_471, P133 *r_472);
static int f_is_object_475(struct f_greenc_1fr *up_, P159 e_474);
static void f_lvalue_481(struct f_greenc_1fr *up_, P159 e_476, P133 *code_out_477, P115 *t_478, P163 *c_479, int *ro_480);
static void f_select_on_489(struct f_greenc_1fr *up_, rstr base_482, P115 bt_483, P159 e_484, int *ro_485, P133 *code_out_486, P115 *t_487, P163 *c_488);
static void f_index_on_498(struct f_greenc_1fr *up_, rstr base_490, P115 bt_491, P159 e_492, int *ro_493, int lv_494, P133 *code_out_495, P115 *t_496, P163 *c_497);
static int f_is_char_lit_500(struct f_greenc_1fr *up_, P159 e_499);
static int f_is_enum_lit_502(struct f_greenc_1fr *up_, P159 e_501);
static rstr f_c_string_504(struct f_greenc_1fr *up_, rstr s_503);
static void f_gexpr_509(struct f_greenc_1fr *up_, P159 e_505, P115 want_506, P115 *t_507, P133 *r_508);
static void f_gexpr_1_514(struct f_greenc_1fr *up_, P159 e_510, P115 want_511, P115 *t_512, P133 *r_513);
static void f_char_literal_519(struct f_greenc_1fr *up_, P159 e_515, P115 want_516, P115 *t_517, P133 *r_518);
static void f_gen_name_524(struct f_greenc_1fr *up_, P159 e_520, P115 want_521, P115 *t_522, P133 *r_523);
static void f_gen_unop_529(struct f_greenc_1fr *up_, P159 e_525, P115 want_526, P115 *t_527, P133 *r_528);
static void f_gen_binop_534(struct f_greenc_1fr *up_, P159 e_530, P115 want_531, P115 *t_532, P133 *r_533);
static void f_conversion_539(struct f_greenc_1fr *up_, P159 e_535, P110 y_536, P115 *t_537, P133 *r_538);
static void f_gen_attr_544(struct f_greenc_1fr *up_, P159 e_540, P115 want_541, P115 *t_542, P133 *r_543);
static void f_allocator_549(struct f_greenc_1fr *up_, P159 e_545, P115 want_546, P115 *t_547, P133 *r_548);
static void f_aggregate_554(struct f_greenc_1fr *up_, P159 e_550, P115 want_551, P115 *t_552, P133 *r_553);
static P159 f_actual_for_558(struct f_greenc_1fr *up_, P159 args_555, P1015 pm_556, P1015 first_557);
static void f_gcall_563(struct f_greenc_1fr *up_, P159 e_559, int is_stmt_560, P115 *t_561, P133 *r_562);
static void f_gcall_with_568(struct f_greenc_1fr *up_, P159 e_564, P110 y_565, P115 *t_566, P133 *r_567);
static void f_builtin_575(struct f_greenc_1fr *up_, rstr name_569, P159 args_570, rt_int line_571, int is_stmt_572, P115 *t_573, P133 *r_574);
static int f_is_package_577(struct f_greenc_1fr *up_, P159 e_576);
static P110 f_member_of_581(struct f_greenc_1fr *up_, rstr p_578, rstr name_579, rt_int line_580);
static int f_inside_package_583(struct f_greenc_1fr *up_, P159 p_582);
static void f_copy_sym_586(struct f_greenc_1fr *up_, P110 y_584, P110 *z_585);
static void f_complete_private_589(struct f_greenc_1fr *up_, P115 ph_587, P115 full_588);
static void f_package_spec_591(struct f_greenc_1fr *up_, P159 e_590);
static int f_hidden_from_594(struct f_greenc_1fr *up_, P110 m_592, P110 first_private_593);
static void f_package_body_596(struct f_greenc_1fr *up_, P159 e_595);
static void f_use_clause_598(struct f_greenc_1fr *up_, P159 e_597);
static void f_fits_603(struct f_greenc_1fr *up_, P110 y_599, P159 args_600, P115 want_601, int *ok_602);
static int f_is_builtin_605(struct f_greenc_1fr *up_, rstr n_604);
static void f_resolve_overload_612(struct f_greenc_1fr *up_, rstr name_606, P159 args_607, int is_stmt_608, P115 want_609, rt_int line_610, P110 *y_611);
static void f_user_operator_618(struct f_greenc_1fr *up_, P159 e_613, P115 want_614, P115 *t_615, P133 *r_616, int *done_617);
static void f_task_p_620(struct f_greenc_1fr *up_, P159 *res_619);
static void f_entry_p_622(struct f_greenc_1fr *up_, P159 *res_621);
static void f_accept_p_624(struct f_greenc_1fr *up_, P159 *res_623);
static void f_delay_p_626(struct f_greenc_1fr *up_, P159 *res_625);
static void f_designators_628(struct f_greenc_1fr *up_, P159 *res_627);
static void f_parse_task_statement_630(struct f_greenc_1fr *up_, P159 *res_629);
static void f_path_at_634(struct f_greenc_1fr *up_, rt_int level_631, rstr field_632, P133 *r_633);
static int f_is_task_name_636(struct f_greenc_1fr *up_, rstr n_635);
static void f_task_of_640(struct f_greenc_1fr *up_, P159 e_637, P110 *y_638, P159 *ix_639);
static void f_own_index_642(struct f_greenc_1fr *up_, P133 *r_641);
static void f_member_647(struct f_greenc_1fr *up_, P110 y_643, rstr arr_644, rstr i_645, P133 *r_646);
static void f_act_path_650(struct f_greenc_1fr *up_, P110 y_648, P133 *r_649);
static void f_act_path_i_654(struct f_greenc_1fr *up_, P110 y_651, rstr i_652, P133 *r_653);
static void f_entry_path_658(struct f_greenc_1fr *up_, P110 y_655, rstr i_656, P133 *r_657);
static void f_declare_slot_661(struct f_greenc_1fr *up_, rstr ctype_name_659, rstr field_660);
static void f_task_decl_663(struct f_greenc_1fr *up_, P159 e_662);
static void f_family_arg_struct_664(struct f_greenc_1fr *up_);
static void f_family_bounds_668(struct f_greenc_1fr *up_, P159 b_665, P110 y_666, P133 x_667);
static void f_entry_family_slot_673(struct f_greenc_1fr *up_, P110 y_669, rstr base_670, rstr i_671, P133 *r_672);
static void f_task_spec_675(struct f_greenc_1fr *up_, P159 e_674);
static void f_entry_decl_677(struct f_greenc_1fr *up_, P159 e_676);
static void f_task_body_679(struct f_greenc_1fr *up_, P159 e_678);
static void f_task_awaits_682(struct f_greenc_1fr *up_, P159 decls_680, P133 *aw_681);
static void f_task_failure_684(struct f_greenc_1fr *up_, P159 s_683);
static void f_entry_sym_688(struct f_greenc_1fr *up_, P159 e_685, P110 *y_686, P159 *ix_687);
static void f_other_call_693(struct f_greenc_1fr *up_, P159 e_689, int is_stmt_690, P115 *t_691, P133 *r_692);
static void f_other_attr_698(struct f_greenc_1fr *up_, P159 e_694, P110 y_695, P115 *t_696, P133 *r_697);
static void f_member_attr_702(struct f_greenc_1fr *up_, P159 e_699, P115 *t_700, P133 *r_701);
static void f_task_builtin_708(struct f_greenc_1fr *up_, rstr name_703, P159 args_704, rt_int line_705, P115 *t_706, P133 *r_707);
static void f_gen_accept_710(struct f_greenc_1fr *up_, P159 s_709);
static void f_member_slot_714(struct f_greenc_1fr *up_, P110 y_711, P159 s_712, P133 *ent_713);
static void f_gen_delay_ticks_717(struct f_greenc_1fr *up_, P159 e_715, P133 *r_716);
static void f_gen_select_719(struct f_greenc_1fr *up_, P159 s_718);
static void f_family_range_724(struct f_greenc_1fr *up_, P110 y_720, P159 ix_721, P133 *lo_722, P133 *hi_723);
static void f_task_statement_gen_726(struct f_greenc_1fr *up_, P159 s_725);
static P159 f_root_name_728(struct f_greenc_1fr *up_, P159 e_727);
static void f_check_pure_target_731(struct f_greenc_1fr *up_, P159 target_729, rt_int line_730);
static int f_assigns_nonlocal_734(struct f_greenc_1fr *up_, P159 d_732, rstr name_733);
static int f_declares_737(struct f_greenc_1fr *up_, P159 d_735, rstr name_736);
static int f_scan_handlers_741(struct f_greenc_1fr *up_, P159 h_738, P159 d_739, rstr name_740);
static int f_scan_assigns_745(struct f_greenc_1fr *up_, P159 stmts_742, P159 d_743, rstr name_744);
static void f_check_call_rules_748(struct f_greenc_1fr *up_, P159 e_746, P110 y_747);
static void f_generic_p_750(struct f_greenc_1fr *up_, P159 *res_749);
static void f_instantiation_753(struct f_greenc_1fr *up_, P159 x_751, P159 *res_752);
static void f_generic_decl_755(struct f_greenc_1fr *up_, P159 e_754);
static int f_is_generic_name_757(struct f_greenc_1fr *up_, rstr n_756);
static void f_attach_generic_body_759(struct f_greenc_1fr *up_, P159 e_758);
static P159 f_gactual_763(struct f_greenc_1fr *up_, P159 args_760, rt_int nth_761, rstr name_762);
static void f_copy_node_767(struct f_greenc_1fr *up_, P159 n_764, P133 name_765, P159 *r_766);
static void f_instantiate_769(struct f_greenc_1fr *up_, P159 e_768);
static void f_predef_type_774(struct f_greenc_1fr *up_, rstr name_770, P115 t_771, rstr lo_772, rstr hi_773);
static void f_predef_const_778(struct f_greenc_1fr *up_, rstr name_775, P115 t_776, rstr code_text_777);
static void f_predef_exc_780(struct f_greenc_1fr *up_, rstr name_779);
static void f_predef_lit_784(struct f_greenc_1fr *up_, rstr name_781, P115 t_782, rt_int v_783);
static void f_predefine_785(struct f_greenc_1fr *up_);
static void f_translate_787(struct f_greenc_1fr *up_, P159 u_786);
static void f_print_program_788(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_101;
static P133 f_mk_178(struct f_greenc_1fr *up_, rstr s_177) {
  struct f_mk_178fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_177 = rt_str_copy(s_177);
F->result_ = ({ rstr *cell789 = rt_alloc(sizeof(rstr)); *cell789 = rt_str_copy(F->s_177); (P133)cell789; });
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
(*F->res_180) = ({ rstr *cell790 = rt_alloc(sizeof(rstr)); *cell790 = rt_str_copy(rt_str_cat(F->base_179, rt_str_of_int(F->up->serial_118))); (P133)cell790; });
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
F->r_791 = rt_str_copy(F->s_188);
{ rt_int lo794 = ((rt_int)1LL), hi795 = (F->s_188).len;
for (rt_int it796 = lo794; it796 <= hi795; it796++) {
F->i_793 = it796;
if (((rt_str_get(F->r_791, F->i_793) >= 65) && (rt_str_get(F->r_791, F->i_793) <= 90))) {
(*rt_str_at(&F->r_791, F->i_793)) = rt_range(rt_add(((rt_int)(rt_str_get(F->r_791, F->i_793)) + 1), ((rt_int)32LL)) - 1, 0, 127);
}
}
}
L_end_792: ;
F->result_ = F->r_791;
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
F->result_ = ({ R120 *cell797 = rt_alloc(sizeof(R120)); *cell797 = cp_R120(({ R120 ag798; ag798.head_ = NULL; ag798.tail_ = NULL; ag798; })); (P119)cell797; });
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
F->l_799 = NULL;
F->l_799 = ({ R141 *cell800 = rt_alloc(sizeof(R141)); *cell800 = cp_R141(({ R141 ag801; ag801.s_ = NULL; ag801.next_ = NULL; ag801; })); (P140)cell800; });
(*(P140)rt_nil_check(F->l_799)).s_ = f_mk_178(F->up, F->s_198);
if (((*(P119)rt_nil_check(F->b_197)).tail_ == NULL)) {
(*(P119)rt_nil_check(F->b_197)).head_ = F->l_799;
} else {
(*(P140)rt_nil_check((*(P119)rt_nil_check(F->b_197)).tail_)).next_ = F->l_799;
}
(*(P119)rt_nil_check(F->b_197)).tail_ = F->l_799;
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
F->l_802 = NULL;
F->l_802 = (*(P119)rt_nil_check(F->b_202)).head_;
while ((F->l_802 != NULL)) {
rt_g_put((*(P133)rt_nil_check((*(P140)rt_nil_check(F->l_802)).s_)));
rt_g_put(rt_str("\n", 1));
F->l_802 = (*(P140)rt_nil_check(F->l_802)).next_;
}
L_end_803: ;
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
{ rt_int sel804 = (F->w_207).len;
if (0 || sel804 == ((rt_int)2LL)) {
F->result_ = ((((((rt_str_eq(F->w_207, rt_str("AT", 2)) || rt_str_eq(F->w_207, rt_str("DO", 2))) || rt_str_eq(F->w_207, rt_str("IF", 2))) || rt_str_eq(F->w_207, rt_str("IN", 2))) || rt_str_eq(F->w_207, rt_str("IS", 2))) || rt_str_eq(F->w_207, rt_str("OF", 2))) || rt_str_eq(F->w_207, rt_str("OR", 2)));
goto ret_;
} else if (0 || sel804 == ((rt_int)3LL)) {
F->result_ = (((((((((rt_str_eq(F->w_207, rt_str("ALL", 3)) || rt_str_eq(F->w_207, rt_str("AND", 3))) || rt_str_eq(F->w_207, rt_str("END", 3))) || rt_str_eq(F->w_207, rt_str("FOR", 3))) || rt_str_eq(F->w_207, rt_str("MOD", 3))) || rt_str_eq(F->w_207, rt_str("NEW", 3))) || rt_str_eq(F->w_207, rt_str("NOT", 3))) || rt_str_eq(F->w_207, rt_str("OUT", 3))) || rt_str_eq(F->w_207, rt_str("USE", 3))) || rt_str_eq(F->w_207, rt_str("XOR", 3)));
goto ret_;
} else if (0 || sel804 == ((rt_int)4LL)) {
F->result_ = ((((((((((rt_str_eq(F->w_207, rt_str("BODY", 4)) || rt_str_eq(F->w_207, rt_str("CASE", 4))) || rt_str_eq(F->w_207, rt_str("ELSE", 4))) || rt_str_eq(F->w_207, rt_str("EXIT", 4))) || rt_str_eq(F->w_207, rt_str("GOTO", 4))) || rt_str_eq(F->w_207, rt_str("LOOP", 4))) || rt_str_eq(F->w_207, rt_str("NULL", 4))) || rt_str_eq(F->w_207, rt_str("TASK", 4))) || rt_str_eq(F->w_207, rt_str("THEN", 4))) || rt_str_eq(F->w_207, rt_str("TYPE", 4))) || rt_str_eq(F->w_207, rt_str("WHEN", 4)));
goto ret_;
} else if (0 || sel804 == ((rt_int)5LL)) {
F->result_ = (((((((((rt_str_eq(F->w_207, rt_str("ABORT", 5)) || rt_str_eq(F->w_207, rt_str("ARRAY", 5))) || rt_str_eq(F->w_207, rt_str("BEGIN", 5))) || rt_str_eq(F->w_207, rt_str("DELAY", 5))) || rt_str_eq(F->w_207, rt_str("DELTA", 5))) || rt_str_eq(F->w_207, rt_str("ELSIF", 5))) || rt_str_eq(F->w_207, rt_str("ENTRY", 5))) || rt_str_eq(F->w_207, rt_str("RAISE", 5))) || rt_str_eq(F->w_207, rt_str("RANGE", 5))) || rt_str_eq(F->w_207, rt_str("WHILE", 5)));
goto ret_;
} else if (0 || sel804 == ((rt_int)6LL)) {
F->result_ = ((((((((rt_str_eq(F->w_207, rt_str("ACCEPT", 6)) || rt_str_eq(F->w_207, rt_str("ACCESS", 6))) || rt_str_eq(F->w_207, rt_str("ASSERT", 6))) || rt_str_eq(F->w_207, rt_str("DIGITS", 6))) || rt_str_eq(F->w_207, rt_str("OTHERS", 6))) || rt_str_eq(F->w_207, rt_str("PRAGMA", 6))) || rt_str_eq(F->w_207, rt_str("RECORD", 6))) || rt_str_eq(F->w_207, rt_str("RETURN", 6))) || rt_str_eq(F->w_207, rt_str("SELECT", 6)));
goto ret_;
} else if (0 || sel804 == ((rt_int)7LL)) {
F->result_ = (((((((rt_str_eq(F->w_207, rt_str("DECLARE", 7)) || rt_str_eq(F->w_207, rt_str("GENERIC", 7))) || rt_str_eq(F->w_207, rt_str("PACKAGE", 7))) || rt_str_eq(F->w_207, rt_str("PACKING", 7))) || rt_str_eq(F->w_207, rt_str("PRIVATE", 7))) || rt_str_eq(F->w_207, rt_str("RENAMES", 7))) || rt_str_eq(F->w_207, rt_str("REVERSE", 7))) || rt_str_eq(F->w_207, rt_str("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel804 == ((rt_int)8LL)) {
F->result_ = (((rt_str_eq(F->w_207, rt_str("CONSTANT", 8)) || rt_str_eq(F->w_207, rt_str("FUNCTION", 8))) || rt_str_eq(F->w_207, rt_str("INITIATE", 8))) || rt_str_eq(F->w_207, rt_str("SEPARATE", 8)));
goto ret_;
} else if (0 || sel804 == ((rt_int)9LL)) {
F->result_ = (rt_str_eq(F->w_207, rt_str("EXCEPTION", 9)) || rt_str_eq(F->w_207, rt_str("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel804 == ((rt_int)10LL)) {
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
F->up->toks_105.p[rt_index(F->up->ntoks_106, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo] = ({ R104 *cell805 = rt_alloc(sizeof(R104)); *cell805 = cp_R104(({ R104 ag806; ag806.kind_ = F->kind_209; ag806.line_ = F->up->src_line_108; ag806.ival_ = F->ival_211; ag806.s_ = NULL; ag806; })); (P103)cell805; });
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
F->i_807 = ((rt_int)1LL);
F->j_808 = ((rt_int)0LL);
F->n_809 = (F->line_215).len;
F->buf_812 = rt_str_new((((rt_int)1000LL) - ((rt_int)1LL) + 1));
while ((F->i_807 <= F->n_809)) {
F->c_810 = rt_range(rt_str_get(F->line_215, F->i_807), 0, 127);
if (((((F->c_810 == 32) || (F->c_810 == 9)) || (F->c_810 == 13)) || (F->c_810 == 12))) {
F->i_807 = rt_add(F->i_807, ((rt_int)1LL));
} else if ((((F->c_810 == 45) && (F->i_807 < F->n_809)) && (rt_str_get(F->line_215, rt_add(F->i_807, ((rt_int)1LL))) == 45))) {
F->i_807 = rt_add(F->n_809, ((rt_int)1LL));
} else if (f_is_letter_183(F->up, F->c_810)) {
F->j_808 = F->i_807;
F->bl_813 = ((rt_int)0LL);
while (((F->j_808 <= F->n_809) && ((f_is_letter_183(F->up, rt_str_get(F->line_215, F->j_808)) || f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_808))) || (rt_str_get(F->line_215, F->j_808) == 95)))) {
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = f_upper_187(F->up, rt_str_get(F->line_215, F->j_808));
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
L_end_815: ;
if (f_is_reserved_208(F->up, rt_str_slice(F->buf_812, ((rt_int)1LL), F->bl_813))) {
f_add_token_212(F->up, F->up->k_kw_4, rt_str_slice(F->buf_812, ((rt_int)1LL), F->bl_813), ((rt_int)0LL));
} else {
f_add_token_212(F->up, F->up->k_id_3, rt_str_slice(F->buf_812, ((rt_int)1LL), F->bl_813), ((rt_int)0LL));
}
F->i_807 = F->j_808;
} else if (f_is_digit_185(F->up, F->c_810)) {
F->j_808 = F->i_807;
F->v_811 = ((rt_int)0LL);
F->bl_813 = ((rt_int)0LL);
while (((F->j_808 <= F->n_809) && (f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_808)) || (rt_str_get(F->line_215, F->j_808) == 95)))) {
if ((rt_str_get(F->line_215, F->j_808) != 95)) {
F->v_811 = rt_add(rt_mul(F->v_811, ((rt_int)10LL)), f_digit_value_214(F->up, rt_str_get(F->line_215, F->j_808)));
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = rt_str_get(F->line_215, F->j_808);
}
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
L_end_816: ;
if (((F->j_808 <= F->n_809) && (rt_str_get(F->line_215, F->j_808) == 35))) {
{
F->base_818 = F->v_811;
F->v_811 = ((rt_int)0LL);
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
while (((F->j_808 <= F->n_809) && ((f_is_letter_183(F->up, rt_str_get(F->line_215, F->j_808)) || f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_808))) || (rt_str_get(F->line_215, F->j_808) == 95)))) {
if ((rt_str_get(F->line_215, F->j_808) != 95)) {
if ((f_digit_value_214(F->up, rt_str_get(F->line_215, F->j_808)) >= F->base_818)) {
f_fail_195(F->up, F->up->src_line_108, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str("digit ", 6), rt_str_get(F->line_215, F->j_808)), rt_str(" is not valid in base ", 22)), rt_str_of_int(F->base_818)), rt_str(" (RM79 2.4)", 11)));
}
F->v_811 = rt_add(rt_mul(F->v_811, F->base_818), f_digit_value_214(F->up, rt_str_get(F->line_215, F->j_808)));
}
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
L_end_819: ;

}
L_end_817: ;
f_add_token_212(F->up, F->up->k_int_6, rt_str_of_int(F->v_811), F->v_811);
} else if (((F->j_808 < F->n_809) && ((rt_str_get(F->line_215, F->j_808) == 46) && f_is_digit_185(F->up, rt_str_get(F->line_215, rt_add(F->j_808, ((rt_int)1LL))))))) {
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = 46;
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
while (((F->j_808 <= F->n_809) && (f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_808)) || (rt_str_get(F->line_215, F->j_808) == 95)))) {
if ((rt_str_get(F->line_215, F->j_808) != 95)) {
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = rt_str_get(F->line_215, F->j_808);
}
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
L_end_820: ;
if (((F->j_808 <= F->n_809) && ((rt_str_get(F->line_215, F->j_808) == 69) || (rt_str_get(F->line_215, F->j_808) == 101)))) {
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = 69;
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
while (((F->j_808 <= F->n_809) && ((f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_808)) || (rt_str_get(F->line_215, F->j_808) == 43)) || (rt_str_get(F->line_215, F->j_808) == 45)))) {
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = rt_str_get(F->line_215, F->j_808);
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
L_end_821: ;
}
f_add_token_212(F->up, F->up->k_float_7, rt_str_slice(F->buf_812, ((rt_int)1LL), F->bl_813), ((rt_int)0LL));
} else if (((F->j_808 < F->n_809) && (((rt_str_get(F->line_215, F->j_808) == 69) || (rt_str_get(F->line_215, F->j_808) == 101)) && f_is_digit_185(F->up, rt_str_get(F->line_215, rt_add(F->j_808, ((rt_int)1LL))))))) {
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = 69;
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
while (((F->j_808 <= F->n_809) && f_is_digit_185(F->up, rt_str_get(F->line_215, F->j_808)))) {
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = rt_str_get(F->line_215, F->j_808);
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
L_end_822: ;
f_add_token_212(F->up, F->up->k_float_7, rt_str_slice(F->buf_812, ((rt_int)1LL), F->bl_813), ((rt_int)0LL));
} else {
f_add_token_212(F->up, F->up->k_int_6, rt_str_slice(F->buf_812, ((rt_int)1LL), F->bl_813), F->v_811);
}
F->i_807 = F->j_808;
} else if ((F->c_810 == 34)) {
F->j_808 = rt_add(F->i_807, ((rt_int)1LL));
F->bl_813 = ((rt_int)0LL);
for (;;) {
if ((F->j_808 > F->n_809)) {
f_fail_195(F->up, F->up->src_line_108, rt_str("unterminated string", 19));
}
if ((rt_str_get(F->line_215, F->j_808) == 34)) {
if (((F->j_808 == F->n_809) || (rt_str_get(F->line_215, rt_add(F->j_808, ((rt_int)1LL))) != 34))) {
goto L_end_823;
}
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
F->bl_813 = rt_add(F->bl_813, ((rt_int)1LL));
(*rt_str_at(&F->buf_812, F->bl_813)) = rt_str_get(F->line_215, F->j_808);
F->j_808 = rt_add(F->j_808, ((rt_int)1LL));
}
L_end_823: ;
f_add_token_212(F->up, F->up->k_str_8, rt_str_slice(F->buf_812, ((rt_int)1LL), F->bl_813), ((rt_int)0LL));
F->i_807 = rt_add(F->j_808, ((rt_int)1LL));
} else {
{
F->two_825 = rt_str_new((((rt_int)3LL) - ((rt_int)1LL) + 1));
rt_str_assign(&F->two_825, rt_str("   ", 3));
(*rt_str_at(&F->two_825, ((rt_int)1LL))) = F->c_810;
if ((F->i_807 < F->n_809)) {
(*rt_str_at(&F->two_825, ((rt_int)2LL))) = rt_str_get(F->line_215, rt_add(F->i_807, ((rt_int)1LL)));
}
if ((rt_add(F->i_807, ((rt_int)1LL)) < F->n_809)) {
(*rt_str_at(&F->two_825, ((rt_int)3LL))) = rt_str_get(F->line_215, rt_add(F->i_807, ((rt_int)2LL)));
}
if (rt_str_eq(F->two_825, rt_str(":=:", 3))) {
f_add_token_212(F->up, F->up->k_op_5, rt_str(":=:", 3), ((rt_int)0LL));
F->i_807 = rt_add(F->i_807, ((rt_int)3LL));
} else if ((((((((((rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str(":=", 2)) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=:", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=>", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str("..", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str("**", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str("/=", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<=", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">=", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<<", 2))) || rt_str_eq(rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">>", 2)))) {
f_add_token_212(F->up, F->up->k_op_5, rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)2LL)), ((rt_int)0LL));
F->i_807 = rt_add(F->i_807, ((rt_int)2LL));
} else if (((((((((((((((((F->c_810 == 38) || (F->c_810 == 39)) || (F->c_810 == 40)) || (F->c_810 == 41)) || (F->c_810 == 42)) || (F->c_810 == 43)) || (F->c_810 == 44)) || (F->c_810 == 45)) || (F->c_810 == 46)) || (F->c_810 == 47)) || (F->c_810 == 58)) || (F->c_810 == 59)) || (F->c_810 == 60)) || (F->c_810 == 61)) || (F->c_810 == 62)) || (F->c_810 == 124))) {
f_add_token_212(F->up, F->up->k_op_5, rt_str_slice(F->two_825, ((rt_int)1LL), ((rt_int)1LL)), ((rt_int)0LL));
F->i_807 = rt_add(F->i_807, ((rt_int)1LL));
} else {
f_fail_195(F->up, F->up->src_line_108, rt_str("unexpected character", 20));
}

}
L_end_824: ;
}
}
L_end_814: ;
ret_:

  return;
}

static void f_read_source_217(struct f_greenc_1fr *up_) {
  struct f_read_source_217fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_826 = rt_str_new((((rt_int)10000LL) - ((rt_int)1LL) + 1));
F->bl_827 = ((rt_int)0LL);
{ rt_frame xf829;
if (RT_TRY(xf829)) {
for (;;) {
(F->c_828 = rt_g_getc());
if ((F->c_828 == 10)) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_216(F->up, rt_str_slice(F->buf_826, ((rt_int)1LL), F->bl_827));
F->bl_827 = ((rt_int)0LL);
} else {
F->bl_827 = rt_add(F->bl_827, ((rt_int)1LL));
(*rt_str_at(&F->buf_826, F->bl_827)) = F->c_828;
}
}
L_end_831: ;
RT_POP(xf829);
} else {
RT_POP(xf829);
int x830 = rt_xcur;
if (rt_g_aborted()) rt_raise(x830);
if (0 || x830 == rt_exc("END_OF_FILE")) {
if ((F->bl_827 > ((rt_int)0LL))) {
F->up->src_line_108 = rt_add(F->up->src_line_108, ((rt_int)1LL));
f_lex_line_216(F->up, rt_str_slice(F->buf_826, ((rt_int)1LL), F->bl_827));
}
f_add_token_212(F->up, F->up->k_eof_2, rt_str("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x830);
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
F->result_ = ({ R160 *cell832 = rt_alloc(sizeof(R160)); *cell832 = cp_R160(({ R160 ag833; ag833.kind_ = F->kind_218; ag833.line_ = F->line_219; ag833.ival_ = ((rt_int)0LL); ag833.flag_ = ((rt_int)0LL); ag833.name_ = NULL; ag833.tag_ = NULL; ag833.a_ = NULL; ag833.b_ = NULL; ag833.c_ = NULL; ag833.d_ = NULL; ag833.e_ = NULL; ag833.next_ = NULL; ag833; })); (P159)cell832; });
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
L_end_834: ;
ret_:

  return;
}

static rt_int f_list_len_226(struct f_greenc_1fr *up_, P159 l_225) {
  struct f_list_len_226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_225 = l_225;
F->n_835 = ((rt_int)0LL);
F->p_836 = NULL;
F->p_836 = F->l_225;
while ((F->p_836 != NULL)) {
F->n_835 = rt_add(F->n_835, ((rt_int)1LL));
F->p_836 = (*(P159)rt_nil_check(F->p_836)).next_;
}
L_end_837: ;
F->result_ = F->n_835;
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
F->x_838 = NULL;
F->x_838 = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_838)).name_);
(*F->res_247) = F->x_838;
goto ret_;
ret_:

  return;
}

static void f_id_list_250(struct f_greenc_1fr *up_, P159 *res_249) {
  struct f_id_list_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_249 = res_249;
F->head_839 = NULL;
F->tail_840 = NULL;
F->x_841 = NULL;
f_name_node_248(F->up, &F->x_841);
f_append_224(F->up, &F->head_839, &F->tail_840, F->x_841);
while (f_at_op_231(F->up, rt_str(",", 1))) {
f_skip_240(F->up);
f_name_node_248(F->up, &F->x_841);
f_append_224(F->up, &F->head_839, &F->tail_840, F->x_841);
}
L_end_842: ;
(*F->res_249) = F->head_839;
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
F->x_843 = NULL;
F->x_843 = f_nn_220(F->up, F->up->n_binop_15, F->line_254);
(*(P159)rt_nil_check(F->x_843)).name_ = F->op_251;
(*(P159)rt_nil_check(F->x_843)).a_ = F->l_252;
(*(P159)rt_nil_check(F->x_843)).b_ = F->r_253;
F->result_ = F->x_843;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_257(struct f_greenc_1fr *up_, P159 *res_256) {
  struct f_expr_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_256 = res_256;
F->l_844 = NULL;
F->r_845 = NULL;
F->op_846 = NULL;
f_relation_261(F->up, &F->l_844);
while (((f_at_kw_229(F->up, rt_str("AND", 3)) || f_at_kw_229(F->up, rt_str("OR", 2))) || f_at_kw_229(F->up, rt_str("XOR", 3)))) {
F->op_846 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
F->line_847 = f_cur_line_227(F->up);
f_skip_240(F->up);
if ((rt_str_eq((*(P133)rt_nil_check(F->op_846)), rt_str("AND", 3)) && f_at_kw_229(F->up, rt_str("THEN", 4)))) {
f_skip_240(F->up);
} else if ((rt_str_eq((*(P133)rt_nil_check(F->op_846)), rt_str("OR", 2)) && f_at_kw_229(F->up, rt_str("ELSE", 4)))) {
f_skip_240(F->up);
}
f_relation_261(F->up, &F->r_845);
F->l_844 = f_binop_255(F->up, F->op_846, F->l_844, F->r_845, F->line_847);
}
L_end_848: ;
(*F->res_256) = F->l_844;
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
F->l_849 = NULL;
F->r_850 = NULL;
F->lo_851 = NULL;
F->hi_852 = NULL;
F->t_853 = NULL;
F->op_854 = NULL;
F->line_855 = f_cur_line_227(F->up);
F->neg_856 = 0;
f_simple_expr_263(F->up, &F->l_849);
if ((f_at_kind_233(F->up, F->up->k_op_5) && f_is_rel_259(F->up, (*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_))))) {
F->op_854 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_850);
F->l_849 = f_binop_255(F->up, F->op_854, F->l_849, F->r_850, F->line_855);
(*F->res_260) = F->l_849;
goto ret_;
}
if (((f_at_kw_229(F->up, rt_str("NOT", 3)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("IN", 2)))) {
f_skip_240(F->up);
F->neg_856 = 1;
}
if (f_at_kw_229(F->up, rt_str("IN", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->lo_851);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &F->hi_852);
F->t_853 = f_nn_220(F->up, F->up->n_range_22, F->line_855);
(*(P159)rt_nil_check(F->t_853)).a_ = F->lo_851;
(*(P159)rt_nil_check(F->t_853)).b_ = F->hi_852;
F->op_854 = f_mk_178(F->up, rt_str("IN", 2));
F->l_849 = f_binop_255(F->up, F->op_854, F->l_849, F->t_853, F->line_855);
if (F->neg_856) {
F->t_853 = f_nn_220(F->up, F->up->n_unop_14, F->line_855);
(*(P159)rt_nil_check(F->t_853)).name_ = f_mk_178(F->up, rt_str("NOT", 3));
(*(P159)rt_nil_check(F->t_853)).a_ = F->l_849;
(*F->res_260) = F->t_853;
goto ret_;
}
}
(*F->res_260) = F->l_849;
goto ret_;
ret_:

  return;
}

static void f_simple_expr_263(struct f_greenc_1fr *up_, P159 *res_262) {
  struct f_simple_expr_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_262 = res_262;
F->l_857 = NULL;
F->r_858 = NULL;
F->op_859 = NULL;
F->line_860 = f_cur_line_227(F->up);
if (((f_at_op_231(F->up, rt_str("+", 1)) || f_at_op_231(F->up, rt_str("-", 1))) || f_at_kw_229(F->up, rt_str("NOT", 3)))) {
F->op_859 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_term_265(F->up, &F->r_858);
F->l_857 = f_nn_220(F->up, F->up->n_unop_14, F->line_860);
(*(P159)rt_nil_check(F->l_857)).name_ = F->op_859;
(*(P159)rt_nil_check(F->l_857)).a_ = F->r_858;
} else {
f_term_265(F->up, &F->l_857);
}
while (((f_at_op_231(F->up, rt_str("+", 1)) || f_at_op_231(F->up, rt_str("-", 1))) || f_at_op_231(F->up, rt_str("&", 1)))) {
F->op_859 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_term_265(F->up, &F->r_858);
F->l_857 = f_binop_255(F->up, F->op_859, F->l_857, F->r_858, F->line_860);
}
L_end_861: ;
(*F->res_262) = F->l_857;
goto ret_;
ret_:

  return;
}

static void f_term_265(struct f_greenc_1fr *up_, P159 *res_264) {
  struct f_term_265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_264 = res_264;
F->l_862 = NULL;
F->r_863 = NULL;
F->op_864 = NULL;
F->line_865 = f_cur_line_227(F->up);
f_factor_267(F->up, &F->l_862);
while (((f_at_op_231(F->up, rt_str("*", 1)) || f_at_op_231(F->up, rt_str("/", 1))) || f_at_kw_229(F->up, rt_str("MOD", 3)))) {
F->op_864 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_factor_267(F->up, &F->r_863);
F->l_862 = f_binop_255(F->up, F->op_864, F->l_862, F->r_863, F->line_865);
}
L_end_866: ;
(*F->res_264) = F->l_862;
goto ret_;
ret_:

  return;
}

static void f_factor_267(struct f_greenc_1fr *up_, P159 *res_266) {
  struct f_factor_267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_266 = res_266;
F->l_867 = NULL;
F->r_868 = NULL;
F->op_869 = NULL;
F->line_870 = f_cur_line_227(F->up);
f_primary_269(F->up, &F->l_867);
if (f_at_op_231(F->up, rt_str("**", 2))) {
F->op_869 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
f_primary_269(F->up, &F->r_868);
F->l_867 = f_binop_255(F->up, F->op_869, F->l_867, F->r_868, F->line_870);
}
(*F->res_266) = F->l_867;
goto ret_;
ret_:

  return;
}

static void f_primary_269(struct f_greenc_1fr *up_, P159 *res_268) {
  struct f_primary_269fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_268 = res_268;
F->x_871 = NULL;
F->line_872 = f_cur_line_227(F->up);
if (f_at_kind_233(F->up, F->up->k_int_6)) {
F->x_871 = f_nn_220(F->up, F->up->n_int_9, F->line_872);
(*(P159)rt_nil_check(F->x_871)).ival_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).ival_;
(*(P159)rt_nil_check(F->x_871)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
(*F->res_268) = F->x_871;
goto ret_;
}
if (f_at_kind_233(F->up, F->up->k_float_7)) {
F->x_871 = f_nn_220(F->up, F->up->n_float_10, F->line_872);
(*(P159)rt_nil_check(F->x_871)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
(*F->res_268) = F->x_871;
goto ret_;
}
if (f_at_kind_233(F->up, F->up->k_str_8)) {
F->x_871 = f_nn_220(F->up, F->up->n_str_11, F->line_872);
(*(P159)rt_nil_check(F->x_871)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
(*F->res_268) = F->x_871;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("NULL", 4))) {
f_skip_240(F->up);
F->x_871 = f_nn_220(F->up, F->up->n_nil_12, F->line_872);
(*F->res_268) = F->x_871;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("NEW", 3))) {
f_skip_240(F->up);
F->x_871 = f_nn_220(F->up, F->up->n_new_19, F->line_872);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_871)).name_);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_agg_or_paren_271(F->up, &(*(P159)rt_nil_check(F->x_871)).a_);
}
(*F->res_268) = F->x_871;
goto ret_;
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_agg_or_paren_271(F->up, &F->x_871);
(*F->res_268) = F->x_871;
goto ret_;
}
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_name_p_273(F->up, &F->x_871);
(*F->res_268) = F->x_871;
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
F->line_873 = f_cur_line_227(F->up);
F->items_874 = NULL;
F->itail_875 = NULL;
F->it_876 = NULL;
F->first_877 = NULL;
F->keys_878 = NULL;
F->ktail_879 = NULL;
F->lab_880 = NULL;
F->x_881 = NULL;
F->more_882 = 1;
f_expect_op_244(F->up, rt_str("(", 1));
while (F->more_882) {
F->it_876 = f_nn_220(F->up, F->up->n_citem_21, F->line_873);
if (f_at_kw_229(F->up, rt_str("OTHERS", 6))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str("=>", 2));
F->lab_880 = f_nn_220(F->up, F->up->n_label_59, F->line_873);
(*(P159)rt_nil_check(F->lab_880)).flag_ = ((rt_int)1LL);
(*(P159)rt_nil_check(F->it_876)).a_ = F->lab_880;
f_expr_257(F->up, &(*(P159)rt_nil_check(F->it_876)).b_);
} else {
f_expr_257(F->up, &F->first_877);
if (((f_at_op_231(F->up, rt_str("..", 2)) || f_at_op_231(F->up, rt_str("|", 1))) || f_at_op_231(F->up, rt_str("=>", 2)))) {
F->keys_878 = NULL;
F->ktail_879 = NULL;
for (;;) {
F->lab_880 = f_nn_220(F->up, F->up->n_label_59, F->line_873);
(*(P159)rt_nil_check(F->lab_880)).a_ = F->first_877;
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->lab_880)).b_);
}
f_append_224(F->up, &F->keys_878, &F->ktail_879, F->lab_880);
if ((!f_at_op_231(F->up, rt_str("|", 1)))) {
goto L_end_884;
}
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->first_877);
}
L_end_884: ;
f_expect_op_244(F->up, rt_str("=>", 2));
(*(P159)rt_nil_check(F->it_876)).a_ = F->keys_878;
f_expr_257(F->up, &(*(P159)rt_nil_check(F->it_876)).b_);
} else {
(*(P159)rt_nil_check(F->it_876)).b_ = F->first_877;
}
}
f_append_224(F->up, &F->items_874, &F->itail_875, F->it_876);
F->more_882 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_882) {
f_skip_240(F->up);
}
}
L_end_883: ;
f_expect_op_244(F->up, rt_str(")", 1));
if ((((*(P159)rt_nil_check(F->items_874)).next_ == NULL) && ((*(P159)rt_nil_check(F->items_874)).a_ == NULL))) {
F->x_881 = f_nn_220(F->up, F->up->n_paren_23, F->line_873);
(*(P159)rt_nil_check(F->x_881)).a_ = (*(P159)rt_nil_check(F->items_874)).b_;
(*F->res_270) = F->x_881;
goto ret_;
}
F->x_881 = f_nn_220(F->up, F->up->n_agg_20, F->line_873);
(*(P159)rt_nil_check(F->x_881)).a_ = F->items_874;
(*F->res_270) = F->x_881;
goto ret_;
ret_:

  return;
}

static void f_name_p_273(struct f_greenc_1fr *up_, P159 *res_272) {
  struct f_name_p_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_272 = res_272;
F->p_885 = NULL;
F->x_886 = NULL;
F->args_887 = NULL;
F->atail_888 = NULL;
F->lo_889 = NULL;
F->r_890 = NULL;
F->line_891 = f_cur_line_227(F->up);
f_name_node_248(F->up, &F->p_885);
for (;;) {
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
F->args_887 = NULL;
F->atail_888 = NULL;
if ((!f_at_op_231(F->up, rt_str(")", 1)))) {
F->more_892 = 1;
while (F->more_892) {
{
F->formal_896 = NULL;
F->mark_897 = ((rt_int)0LL);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (((rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=>", 2))))) {
F->formal_896 = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
if (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=", 2))) {
F->mark_897 = ((rt_int)1LL);
} else if (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=:", 2))) {
F->mark_897 = ((rt_int)2LL);
} else if (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) {
F->mark_897 = ((rt_int)3LL);
} else {
F->mark_897 = ((rt_int)4LL);
}
f_skip_240(F->up);
f_skip_240(F->up);
}
f_expr_257(F->up, &F->lo_889);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
F->r_890 = f_nn_220(F->up, F->up->n_range_22, F->line_891);
(*(P159)rt_nil_check(F->r_890)).a_ = F->lo_889;
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_890)).b_);
F->lo_889 = F->r_890;
}
(*(P159)rt_nil_check(F->lo_889)).tag_ = F->formal_896;
(*(P159)rt_nil_check(F->lo_889)).flag_ = F->mark_897;
f_append_224(F->up, &F->args_887, &F->atail_888, F->lo_889);

}
L_end_895: ;
F->more_892 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_892) {
f_skip_240(F->up);
}
}
L_end_894: ;
}
f_expect_op_244(F->up, rt_str(")", 1));
F->x_886 = f_nn_220(F->up, F->up->n_apply_16, F->line_891);
(*(P159)rt_nil_check(F->x_886)).a_ = F->p_885;
(*(P159)rt_nil_check(F->x_886)).b_ = F->args_887;
F->p_885 = F->x_886;
} else if (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
F->x_886 = f_nn_220(F->up, F->up->n_select_17, F->line_891);
(*(P159)rt_nil_check(F->x_886)).a_ = F->p_885;
if (f_at_kw_229(F->up, rt_str("ALL", 3))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_886)).name_ = f_mk_178(F->up, rt_str("ALL", 3));
} else {
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_886)).name_);
}
F->p_885 = F->x_886;
} else if (f_at_op_231(F->up, rt_str("'", 1))) {
f_skip_240(F->up);
F->x_886 = f_nn_220(F->up, F->up->n_attr_18, F->line_891);
(*(P159)rt_nil_check(F->x_886)).a_ = F->p_885;
(*(P159)rt_nil_check(F->x_886)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_886)).b_);
f_expect_op_244(F->up, rt_str(")", 1));
}
F->p_885 = F->x_886;
} else {
(*F->res_272) = F->p_885;
goto ret_;
}
}
L_end_893: ;
ret_:

  return;
}

static void f_subtype_ind_275(struct f_greenc_1fr *up_, P159 *res_274) {
  struct f_subtype_ind_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_274 = res_274;
F->x_898 = NULL;
F->r_899 = NULL;
F->args_900 = NULL;
F->atail_901 = NULL;
F->lo_902 = NULL;
F->line_903 = f_cur_line_227(F->up);
F->more_904 = 1;
F->x_898 = f_nn_220(F->up, F->up->s_mark_71, F->line_903);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_898)).name_);
while (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_898)).tag_ = (*(P159)rt_nil_check(F->x_898)).name_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_898)).name_);
}
L_end_905: ;
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
F->r_899 = f_nn_220(F->up, F->up->n_range_22, F->line_903);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_899)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_899)).b_);
(*(P159)rt_nil_check(F->x_898)).a_ = F->r_899;
(*(P159)rt_nil_check(F->x_898)).flag_ = ((rt_int)1LL);
} else if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
while (F->more_904) {
f_expr_257(F->up, &F->lo_902);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
F->r_899 = f_nn_220(F->up, F->up->n_range_22, F->line_903);
(*(P159)rt_nil_check(F->r_899)).a_ = F->lo_902;
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_899)).b_);
F->lo_902 = F->r_899;
}
f_append_224(F->up, &F->args_900, &F->atail_901, F->lo_902);
F->more_904 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_904) {
f_skip_240(F->up);
}
}
L_end_906: ;
f_expect_op_244(F->up, rt_str(")", 1));
(*(P159)rt_nil_check(F->x_898)).a_ = F->args_900;
(*(P159)rt_nil_check(F->x_898)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_229(F->up, rt_str("DIGITS", 6)) || f_at_kw_229(F->up, rt_str("DELTA", 5)))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_899);
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_899);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &F->r_899);
}
}
(*F->res_274) = F->x_898;
goto ret_;
ret_:

  return;
}

static void f_type_spec_277(struct f_greenc_1fr *up_, P159 *res_276) {
  struct f_type_spec_277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_276 = res_276;
F->x_907 = NULL;
if (((((f_at_op_231(F->up, rt_str("(", 1)) || f_at_kw_229(F->up, rt_str("ARRAY", 5))) || f_at_kw_229(F->up, rt_str("RECORD", 6))) || f_at_kw_229(F->up, rt_str("ACCESS", 6))) || f_at_kw_229(F->up, rt_str("RANGE", 5)))) {
f_type_def_279(F->up, &F->x_907);
} else {
f_subtype_ind_275(F->up, &F->x_907);
}
(*F->res_276) = F->x_907;
goto ret_;
ret_:

  return;
}

static void f_type_def_279(struct f_greenc_1fr *up_, P159 *res_278) {
  struct f_type_def_279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_278 = res_278;
F->x_908 = NULL;
F->lits_909 = NULL;
F->ltail_910 = NULL;
F->l_911 = NULL;
F->idx_912 = NULL;
F->itail_913 = NULL;
F->r_914 = NULL;
F->comps_915 = NULL;
F->ctail_916 = NULL;
F->names_917 = NULL;
F->st_918 = NULL;
F->def_919 = NULL;
F->cm_920 = NULL;
F->line_921 = f_cur_line_227(F->up);
F->more_922 = 1;
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
F->x_908 = f_nn_220(F->up, F->up->d_enum_63, F->line_921);
while (F->more_922) {
if (f_at_kind_233(F->up, F->up->k_str_8)) {
F->l_911 = f_nn_220(F->up, F->up->n_str_11, F->line_921);
(*(P159)rt_nil_check(F->l_911)).name_ = (*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_;
f_skip_240(F->up);
} else {
f_name_node_248(F->up, &F->l_911);
}
f_append_224(F->up, &F->lits_909, &F->ltail_910, F->l_911);
F->more_922 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_922) {
f_skip_240(F->up);
}
}
L_end_923: ;
f_expect_op_244(F->up, rt_str(")", 1));
(*(P159)rt_nil_check(F->x_908)).a_ = F->lits_909;
(*F->res_278) = F->x_908;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
F->x_908 = f_nn_220(F->up, F->up->d_range_64, F->line_921);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->x_908)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->x_908)).b_);
(*F->res_278) = F->x_908;
goto ret_;
}
if ((f_at_kw_229(F->up, rt_str("DIGITS", 6)) || f_at_kw_229(F->up, rt_str("DELTA", 5)))) {
f_skip_240(F->up);
F->x_908 = f_nn_220(F->up, F->up->d_float_65, F->line_921);
f_simple_expr_263(F->up, &F->r_914);
if (f_at_kw_229(F->up, rt_str("RANGE", 5))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &F->r_914);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &F->r_914);
}
(*F->res_278) = F->x_908;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("ARRAY", 5))) {
f_skip_240(F->up);
F->x_908 = f_nn_220(F->up, F->up->d_array_66, F->line_921);
f_expect_op_244(F->up, rt_str("(", 1));
while (F->more_922) {
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(",", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(")", 1))))) {
F->l_911 = f_nn_220(F->up, F->up->s_mark_71, F->line_921);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->l_911)).name_);
(*(P159)rt_nil_check(F->x_908)).flag_ = ((rt_int)1LL);
} else {
F->l_911 = f_nn_220(F->up, F->up->n_range_22, F->line_921);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_911)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_911)).b_);
}
f_append_224(F->up, &F->idx_912, &F->itail_913, F->l_911);
F->more_922 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_922) {
f_skip_240(F->up);
}
}
L_end_924: ;
f_expect_op_244(F->up, rt_str(")", 1));
f_expect_kw_242(F->up, rt_str("OF", 2));
(*(P159)rt_nil_check(F->x_908)).a_ = F->idx_912;
f_type_spec_277(F->up, &(*(P159)rt_nil_check(F->x_908)).b_);
(*F->res_278) = F->x_908;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("RECORD", 6))) {
f_skip_240(F->up);
F->x_908 = f_nn_220(F->up, F->up->d_record_67, F->line_921);
while ((!f_at_kw_229(F->up, rt_str("END", 3)))) {
if (f_at_kw_229(F->up, rt_str("NULL", 4))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str(";", 1));
} else {
f_id_list_250(F->up, &F->names_917);
f_expect_op_244(F->up, rt_str(":", 1));
if (f_at_kw_229(F->up, rt_str("CONSTANT", 8))) {
f_skip_240(F->up);
}
f_type_spec_277(F->up, &F->st_918);
F->def_919 = NULL;
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->def_919);
}
f_expect_op_244(F->up, rt_str(";", 1));
while ((F->names_917 != NULL)) {
F->cm_920 = f_nn_220(F->up, F->up->n_comp_61, (*(P159)rt_nil_check(F->names_917)).line_);
(*(P159)rt_nil_check(F->cm_920)).name_ = (*(P159)rt_nil_check(F->names_917)).name_;
(*(P159)rt_nil_check(F->cm_920)).a_ = F->st_918;
(*(P159)rt_nil_check(F->cm_920)).b_ = F->def_919;
f_append_224(F->up, &F->comps_915, &F->ctail_916, F->cm_920);
F->names_917 = (*(P159)rt_nil_check(F->names_917)).next_;
}
L_end_926: ;
}
}
L_end_925: ;
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("RECORD", 6));
(*(P159)rt_nil_check(F->x_908)).a_ = F->comps_915;
(*F->res_278) = F->x_908;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("ACCESS", 6))) {
f_skip_240(F->up);
F->x_908 = f_nn_220(F->up, F->up->d_access_68, F->line_921);
f_type_spec_277(F->up, &(*(P159)rt_nil_check(F->x_908)).a_);
(*F->res_278) = F->x_908;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("NEW", 3))) {
f_skip_240(F->up);
F->x_908 = f_nn_220(F->up, F->up->d_derived_69, F->line_921);
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_908)).a_);
(*F->res_278) = F->x_908;
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
L_end_927: ;
f_skip_240(F->up);
ret_:

  return;
}

static void f_skip_visibility_281(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_928 = NULL;
f_skip_240(F->up);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
f_id_list_250(F->up, &F->names_928);
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
L_end_929: ;
f_skip_240(F->up);
if (f_at_kw_229(F->up, rt_str("RECORD", 6))) {
while ((!((f_at_kw_229(F->up, rt_str("END", 3)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("RECORD", 6))))) {
f_skip_240(F->up);
}
L_end_930: ;
f_skip_240(F->up);
f_skip_240(F->up);
}
while ((!f_at_op_231(F->up, rt_str(";", 1)))) {
f_skip_240(F->up);
}
L_end_931: ;
f_skip_240(F->up);
ret_:

  return;
}

static void f_decl_part_284(struct f_greenc_1fr *up_, P159 *res_283) {
  struct f_decl_part_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_283 = res_283;
F->head_932 = NULL;
F->tail_933 = NULL;
F->x_934 = NULL;
F->names_935 = NULL;
for (;;) {
if (f_at_kw_229(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_280(F->up);
} else if (f_at_kw_229(F->up, rt_str("USE", 3))) {
f_skip_240(F->up);
F->x_934 = f_nn_220(F->up, F->up->n_use_57, f_cur_line_227(F->up));
f_id_list_250(F->up, &(*(P159)rt_nil_check(F->x_934)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else if (f_at_kw_229(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_281(F->up);
} else if (f_at_kw_229(F->up, rt_str("FOR", 3))) {
f_skip_representation_282(F->up);
} else if ((f_at_kw_229(F->up, rt_str("TYPE", 4)) || f_at_kw_229(F->up, rt_str("SUBTYPE", 7)))) {
f_type_decl_288(F->up, &F->x_934);
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_294(F->up, &F->x_934);
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else if (f_at_kw_229(F->up, rt_str("PACKAGE", 7))) {
f_package_p_300(F->up, &F->x_934);
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else if (f_at_kw_229(F->up, rt_str("TASK", 4))) {
f_task_p_620(F->up, &F->x_934);
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else if (f_at_kw_229(F->up, rt_str("GENERIC", 7))) {
f_generic_p_750(F->up, &F->x_934);
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else if (f_at_kw_229(F->up, rt_str("ENTRY", 5))) {
f_entry_p_622(F->up, &F->x_934);
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(",", 1))))) {
f_object_decl_286(F->up, &F->x_934);
f_append_224(F->up, &F->head_932, &F->tail_933, F->x_934);
} else {
(*F->res_283) = F->head_932;
goto ret_;
}
}
L_end_936: ;
ret_:

  return;
}

static void f_object_decl_286(struct f_greenc_1fr *up_, P159 *res_285) {
  struct f_object_decl_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_285 = res_285;
F->head_937 = NULL;
F->tail_938 = NULL;
F->names_939 = NULL;
F->st_940 = NULL;
F->init_941 = NULL;
F->x_942 = NULL;
F->line_943 = f_cur_line_227(F->up);
F->is_const_944 = 0;
f_id_list_250(F->up, &F->names_939);
f_expect_op_244(F->up, rt_str(":", 1));
if (f_at_kw_229(F->up, rt_str("EXCEPTION", 9))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str(";", 1));
while ((F->names_939 != NULL)) {
F->x_942 = f_nn_220(F->up, F->up->n_exc_48, F->line_943);
(*(P159)rt_nil_check(F->x_942)).name_ = (*(P159)rt_nil_check(F->names_939)).name_;
f_append_224(F->up, &F->head_937, &F->tail_938, F->x_942);
F->names_939 = (*(P159)rt_nil_check(F->names_939)).next_;
}
L_end_945: ;
(*F->res_285) = F->head_937;
goto ret_;
}
if (f_at_kw_229(F->up, rt_str("CONSTANT", 8))) {
f_skip_240(F->up);
F->is_const_944 = 1;
}
f_type_spec_277(F->up, &F->st_940);
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->init_941);
}
f_expect_op_244(F->up, rt_str(";", 1));
while ((F->names_939 != NULL)) {
if (F->is_const_944) {
F->x_942 = f_nn_220(F->up, F->up->n_const_43, F->line_943);
} else {
F->x_942 = f_nn_220(F->up, F->up->n_var_42, F->line_943);
}
(*(P159)rt_nil_check(F->x_942)).name_ = (*(P159)rt_nil_check(F->names_939)).name_;
(*(P159)rt_nil_check(F->x_942)).a_ = F->st_940;
(*(P159)rt_nil_check(F->x_942)).b_ = F->init_941;
if ((!(F->is_const_944 && (F->init_941 == NULL)))) {
f_append_224(F->up, &F->head_937, &F->tail_938, F->x_942);
}
F->names_939 = (*(P159)rt_nil_check(F->names_939)).next_;
}
L_end_946: ;
(*F->res_285) = F->head_937;
goto ret_;
ret_:

  return;
}

static void f_type_decl_288(struct f_greenc_1fr *up_, P159 *res_287) {
  struct f_type_decl_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_287 = res_287;
F->x_947 = NULL;
F->line_948 = f_cur_line_227(F->up);
if (f_at_kw_229(F->up, rt_str("SUBTYPE", 7))) {
f_skip_240(F->up);
F->x_947 = f_nn_220(F->up, F->up->n_subtype_45, F->line_948);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_947)).name_);
f_expect_kw_242(F->up, rt_str("IS", 2));
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_947)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_287) = F->x_947;
goto ret_;
}
f_expect_kw_242(F->up, rt_str("TYPE", 4));
F->x_947 = f_nn_220(F->up, F->up->n_type_44, F->line_948);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_947)).name_);
if (f_at_op_231(F->up, rt_str(";", 1))) {
f_skip_240(F->up);
(*F->res_287) = NULL;
goto ret_;
}
f_expect_kw_242(F->up, rt_str("IS", 2));
if (f_at_kw_229(F->up, rt_str("PRIVATE", 7))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_947)).a_ = f_nn_220(F->up, F->up->d_private_70, F->line_948);
} else {
f_type_def_279(F->up, &(*(P159)rt_nil_check(F->x_947)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_287) = F->x_947;
goto ret_;
ret_:

  return;
}

static void f_formal_part_290(struct f_greenc_1fr *up_, P159 *res_289) {
  struct f_formal_part_290fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_289 = res_289;
F->head_949 = NULL;
F->tail_950 = NULL;
F->names_951 = NULL;
F->st_952 = NULL;
F->def_953 = NULL;
F->p_954 = NULL;
F->more_956 = 1;
f_expect_op_244(F->up, rt_str("(", 1));
while (F->more_956) {
f_id_list_250(F->up, &F->names_951);
f_expect_op_244(F->up, rt_str(":", 1));
F->mode_955 = F->up->m_in_72;
if (f_at_kw_229(F->up, rt_str("IN", 2))) {
f_skip_240(F->up);
if (f_at_kw_229(F->up, rt_str("OUT", 3))) {
f_skip_240(F->up);
F->mode_955 = F->up->m_inout_73;
}
} else if (f_at_kw_229(F->up, rt_str("OUT", 3))) {
f_skip_240(F->up);
F->mode_955 = F->up->m_out_74;
}
f_subtype_ind_275(F->up, &F->st_952);
F->def_953 = NULL;
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->def_953);
}
while ((F->names_951 != NULL)) {
F->p_954 = f_nn_220(F->up, F->up->n_param_49, (*(P159)rt_nil_check(F->names_951)).line_);
(*(P159)rt_nil_check(F->p_954)).name_ = (*(P159)rt_nil_check(F->names_951)).name_;
(*(P159)rt_nil_check(F->p_954)).ival_ = F->mode_955;
(*(P159)rt_nil_check(F->p_954)).a_ = F->st_952;
(*(P159)rt_nil_check(F->p_954)).b_ = F->def_953;
f_append_224(F->up, &F->head_949, &F->tail_950, F->p_954);
F->names_951 = (*(P159)rt_nil_check(F->names_951)).next_;
}
L_end_958: ;
F->more_956 = f_at_op_231(F->up, rt_str(";", 1));
if (F->more_956) {
f_skip_240(F->up);
}
}
L_end_957: ;
f_expect_op_244(F->up, rt_str(")", 1));
(*F->res_289) = F->head_949;
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
F->x_959 = NULL;
F->line_960 = f_cur_line_227(F->up);
F->is_proc_961 = f_at_kw_229(F->up, rt_str("PROCEDURE", 9));
f_skip_240(F->up);
if (F->is_proc_961) {
F->x_959 = f_nn_220(F->up, F->up->n_proc_46, F->line_960);
} else {
F->x_959 = f_nn_220(F->up, F->up->n_func_47, F->line_960);
}
f_designator_292(F->up, &(*(P159)rt_nil_check(F->x_959)).name_);
if (((f_at_kw_229(F->up, rt_str("IS", 2)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_753(F->up, F->x_959, &(*F->res_293));
goto ret_;
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->x_959)).a_);
}
if (f_at_kw_229(F->up, rt_str("RETURN", 6))) {
f_skip_240(F->up);
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_959)).b_);
if (F->is_proc_961) {
(*(P159)rt_nil_check(F->x_959)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_961)) {
f_perror_239(F->up, rt_str("a function needs a RETURN clause", 32));
}
if (f_at_op_231(F->up, rt_str(";", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_959)).ival_ = ((rt_int)1LL);
(*F->res_293) = F->x_959;
goto ret_;
}
f_expect_kw_242(F->up, rt_str("IS", 2));
if (f_at_kw_229(F->up, rt_str("SEPARATE", 8))) {
f_perror_239(F->up, rt_str("separate bodies are not handled", 31));
}
f_body_part_296(F->up, F->x_959);
if ((f_at_kind_233(F->up, F->up->k_id_3) || f_at_kind_233(F->up, F->up->k_str_8))) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->x_959)).name_))))) {
f_perror_239(F->up, rt_str_cat(rt_str("the name after END does not match ", 34), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->x_959)).name_))));
}
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_293) = F->x_959;
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
F->head_962 = NULL;
F->tail_963 = NULL;
F->h_964 = NULL;
F->names_965 = NULL;
F->ntail_966 = NULL;
F->n_967 = NULL;
f_expect_kw_242(F->up, rt_str("EXCEPTION", 9));
while (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
F->h_964 = f_nn_220(F->up, F->up->n_handler_60, f_cur_line_227(F->up));
F->names_965 = NULL;
F->ntail_966 = NULL;
for (;;) {
if (f_at_kw_229(F->up, rt_str("OTHERS", 6))) {
f_skip_240(F->up);
F->n_967 = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->n_967)).name_ = f_mk_178(F->up, rt_str("OTHERS", 6));
} else {
f_name_node_248(F->up, &F->n_967);
while (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->n_967)).tag_ = (*(P159)rt_nil_check(F->n_967)).name_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->n_967)).name_);
}
L_end_970: ;
}
f_append_224(F->up, &F->names_965, &F->ntail_966, F->n_967);
if ((!f_at_op_231(F->up, rt_str("|", 1)))) {
goto L_end_969;
}
f_skip_240(F->up);
}
L_end_969: ;
f_expect_op_244(F->up, rt_str("=>", 2));
(*(P159)rt_nil_check(F->h_964)).a_ = F->names_965;
f_statements_303(F->up, &(*(P159)rt_nil_check(F->h_964)).b_);
f_append_224(F->up, &F->head_962, &F->tail_963, F->h_964);
}
L_end_968: ;
(*F->res_297) = F->head_962;
goto ret_;
ret_:

  return;
}

static void f_package_p_300(struct f_greenc_1fr *up_, P159 *res_299) {
  struct f_package_p_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_299 = res_299;
F->x_971 = NULL;
F->line_972 = f_cur_line_227(F->up);
f_expect_kw_242(F->up, rt_str("PACKAGE", 7));
if (f_at_kw_229(F->up, rt_str("BODY", 4))) {
f_skip_240(F->up);
F->x_971 = f_nn_220(F->up, F->up->n_pkgbody_51, F->line_972);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_971)).name_);
f_expect_kw_242(F->up, rt_str("IS", 2));
f_body_part_296(F->up, F->x_971);
} else {
F->x_971 = f_nn_220(F->up, F->up->n_pkgspec_50, F->line_972);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_971)).name_);
if (((f_at_kw_229(F->up, rt_str("IS", 2)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_753(F->up, F->x_971, &(*F->res_299));
goto ret_;
}
f_expect_kw_242(F->up, rt_str("IS", 2));
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_971)).c_);
if (f_at_kw_229(F->up, rt_str("PRIVATE", 7))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_971)).d_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
}
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_299) = F->x_971;
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
F->head_973 = NULL;
F->tail_974 = NULL;
F->x_975 = NULL;
while ((!f_at_statements_end_301(F->up))) {
if (f_at_kw_229(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_280(F->up);
} else {
f_statement_305(F->up, &F->x_975);
f_append_224(F->up, &F->head_973, &F->tail_974, F->x_975);
}
}
L_end_976: ;
(*F->res_302) = F->head_973;
goto ret_;
ret_:

  return;
}

static void f_statement_305(struct f_greenc_1fr *up_, P159 *res_304) {
  struct f_statement_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_304 = res_304;
F->x_977 = NULL;
F->t_978 = NULL;
F->line_979 = f_cur_line_227(F->up);
F->label_980 = NULL;
if (f_at_op_231(F->up, rt_str("<<", 2))) {
f_skip_240(F->up);
f_expect_id_246(F->up, &F->label_980);
f_expect_op_244(F->up, rt_str(">>", 2));
}
if (f_at_kw_229(F->up, rt_str("NULL", 4))) {
f_skip_240(F->up);
f_expect_op_244(F->up, rt_str(";", 1));
F->x_977 = f_nn_220(F->up, F->up->n_null_36, F->line_979);
(*F->res_304) = F->x_977;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("IF", 2))) {
f_if_stmt_309(F->up, &F->x_977);
(*F->res_304) = F->x_977;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("CASE", 4))) {
f_case_stmt_311(F->up, &F->x_977);
(*F->res_304) = F->x_977;
goto ret_;
} else if (((f_at_kw_229(F->up, rt_str("FOR", 3)) || f_at_kw_229(F->up, rt_str("WHILE", 5))) || f_at_kw_229(F->up, rt_str("LOOP", 4)))) {
f_loop_stmt_313(F->up, &F->x_977);
(*(P159)rt_nil_check(F->x_977)).tag_ = F->label_980;
if (f_at_kind_233(F->up, F->up->k_id_3)) {
if (((F->label_980 == NULL) || (!rt_str_eq((*(P133)rt_nil_check((*(P103)rt_nil_check(F->up->toks_105.p[rt_index(F->up->tpos_107, F->up->toks_105.lo, F->up->toks_105.hi) - F->up->toks_105.lo])).s_)), (*(P133)rt_nil_check(F->label_980)))))) {
f_perror_239(F->up, rt_str("the name after END LOOP does not match the label", 48));
}
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_977;
goto ret_;
} else if ((f_at_kw_229(F->up, rt_str("DECLARE", 7)) || f_at_kw_229(F->up, rt_str("BEGIN", 5)))) {
F->x_977 = f_nn_220(F->up, F->up->n_block_30, F->line_979);
(*(P159)rt_nil_check(F->x_977)).tag_ = F->label_980;
if (f_at_kw_229(F->up, rt_str("DECLARE", 7))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_977)).a_);
}
f_expect_kw_242(F->up, rt_str("BEGIN", 5));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_977)).b_);
if (f_at_kw_229(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_298(F->up, &(*(P159)rt_nil_check(F->x_977)).c_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_977;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("EXIT", 4))) {
f_skip_240(F->up);
F->x_977 = f_nn_220(F->up, F->up->n_exit_31, F->line_979);
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_977)).name_);
}
if (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_977)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_977;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("RETURN", 6))) {
f_skip_240(F->up);
F->x_977 = f_nn_220(F->up, F->up->n_return_32, F->line_979);
if ((!f_at_op_231(F->up, rt_str(";", 1)))) {
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_977)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_977;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("RAISE", 5))) {
f_skip_240(F->up);
if (f_at_op_231(F->up, rt_str(";", 1))) {
f_skip_240(F->up);
F->x_977 = f_nn_220(F->up, F->up->n_reraise_34, F->line_979);
(*F->res_304) = F->x_977;
goto ret_;
}
F->x_977 = f_nn_220(F->up, F->up->n_raise_33, F->line_979);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_977)).name_);
while (f_at_op_231(F->up, rt_str(".", 1))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_977)).tag_ = (*(P159)rt_nil_check(F->x_977)).name_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_977)).name_);
}
L_end_981: ;
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_977;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("ASSERT", 6))) {
f_skip_240(F->up);
F->x_977 = f_nn_220(F->up, F->up->n_assert_35, F->line_979);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_977)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_977;
goto ret_;
} else if (f_at_kw_229(F->up, rt_str("GOTO", 4))) {
f_perror_239(F->up, rt_str("goto is not handled", 19));
}
f_task_statement_307(F->up, &F->x_977);
if ((F->x_977 != NULL)) {
(*F->res_304) = F->x_977;
goto ret_;
}
f_name_p_273(F->up, &F->t_978);
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
F->x_977 = f_nn_220(F->up, F->up->n_assign_25, F->line_979);
(*(P159)rt_nil_check(F->x_977)).a_ = F->t_978;
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_977)).b_);
} else {
F->x_977 = f_nn_220(F->up, F->up->n_call_26, F->line_979);
(*(P159)rt_nil_check(F->x_977)).a_ = F->t_978;
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_304) = F->x_977;
goto ret_;
ret_:

  return;
}

static void f_task_statement_307(struct f_greenc_1fr *up_, P159 *res_306) {
  struct f_task_statement_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_306 = res_306;
f_parse_task_statement_630(F->up, &(*F->res_306));
ret_:

  return;
}

static void f_if_stmt_309(struct f_greenc_1fr *up_, P159 *res_308) {
  struct f_if_stmt_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_308 = res_308;
F->x_982 = NULL;
F->arm_983 = NULL;
F->head_984 = NULL;
F->tail_985 = NULL;
F->go_986 = 1;
F->x_982 = f_nn_220(F->up, F->up->n_if_27, f_cur_line_227(F->up));
f_skip_240(F->up);
F->arm_983 = f_nn_220(F->up, F->up->n_arm_58, f_cur_line_227(F->up));
f_expr_257(F->up, &(*(P159)rt_nil_check(F->arm_983)).a_);
f_expect_kw_242(F->up, rt_str("THEN", 4));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->arm_983)).b_);
f_append_224(F->up, &F->head_984, &F->tail_985, F->arm_983);
while (F->go_986) {
if (f_at_kw_229(F->up, rt_str("ELSIF", 5))) {
f_skip_240(F->up);
F->arm_983 = f_nn_220(F->up, F->up->n_arm_58, f_cur_line_227(F->up));
f_expr_257(F->up, &(*(P159)rt_nil_check(F->arm_983)).a_);
f_expect_kw_242(F->up, rt_str("THEN", 4));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->arm_983)).b_);
f_append_224(F->up, &F->head_984, &F->tail_985, F->arm_983);
} else if (f_at_kw_229(F->up, rt_str("ELSE", 4))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_982)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_982)).b_);
} else {
F->go_986 = 0;
}
}
L_end_987: ;
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("IF", 2));
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->x_982)).a_ = F->head_984;
(*F->res_308) = F->x_982;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_311(struct f_greenc_1fr *up_, P159 *res_310) {
  struct f_case_stmt_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_310 = res_310;
F->x_988 = NULL;
F->arm_989 = NULL;
F->head_990 = NULL;
F->tail_991 = NULL;
F->labs_992 = NULL;
F->ltail_993 = NULL;
F->l_994 = NULL;
F->x_988 = f_nn_220(F->up, F->up->n_case_28, f_cur_line_227(F->up));
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_988)).a_);
f_expect_kw_242(F->up, rt_str("OF", 2));
while (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
F->labs_992 = NULL;
F->ltail_993 = NULL;
F->others_arm_995 = 0;
for (;;) {
if (f_at_kw_229(F->up, rt_str("OTHERS", 6))) {
f_skip_240(F->up);
F->others_arm_995 = 1;
} else {
F->l_994 = f_nn_220(F->up, F->up->n_label_59, f_cur_line_227(F->up));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_994)).a_);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->l_994)).b_);
}
f_append_224(F->up, &F->labs_992, &F->ltail_993, F->l_994);
}
if ((!f_at_op_231(F->up, rt_str("|", 1)))) {
goto L_end_997;
}
f_skip_240(F->up);
}
L_end_997: ;
f_expect_op_244(F->up, rt_str("=>", 2));
if (F->others_arm_995) {
(*(P159)rt_nil_check(F->x_988)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_988)).c_);
} else {
F->arm_989 = f_nn_220(F->up, F->up->n_arm_58, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->arm_989)).a_ = F->labs_992;
f_statements_303(F->up, &(*(P159)rt_nil_check(F->arm_989)).b_);
f_append_224(F->up, &F->head_990, &F->tail_991, F->arm_989);
}
}
L_end_996: ;
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("CASE", 4));
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->x_988)).b_ = F->head_990;
(*F->res_310) = F->x_988;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_313(struct f_greenc_1fr *up_, P159 *res_312) {
  struct f_loop_stmt_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_312 = res_312;
F->x_998 = NULL;
F->r_999 = NULL;
F->line_1000 = f_cur_line_227(F->up);
F->x_998 = f_nn_220(F->up, F->up->n_loop_29, F->line_1000);
if (f_at_kw_229(F->up, rt_str("FOR", 3))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_998)).flag_ = ((rt_int)2LL);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_998)).name_);
f_expect_kw_242(F->up, rt_str("IN", 2));
if (f_at_kw_229(F->up, rt_str("REVERSE", 7))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_998)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("LOOP", 4)))) {
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_998)).a_);
} else {
F->r_999 = f_nn_220(F->up, F->up->n_range_22, F->line_1000);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_999)).a_);
if (f_at_op_231(F->up, rt_str("..", 2))) {
f_skip_240(F->up);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->r_999)).b_);
(*(P159)rt_nil_check(F->x_998)).a_ = F->r_999;
} else {
(*(P159)rt_nil_check(F->x_998)).a_ = (*(P159)rt_nil_check(F->r_999)).a_;
}
}
} else if (f_at_kw_229(F->up, rt_str("WHILE", 5))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_998)).flag_ = ((rt_int)1LL);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_998)).a_);
}
f_expect_kw_242(F->up, rt_str("LOOP", 4));
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_998)).b_);
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("LOOP", 4));
(*F->res_312) = F->x_998;
goto ret_;
ret_:

  return;
}

static void f_compilation_315(struct f_greenc_1fr *up_, P159 *res_314) {
  struct f_compilation_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_314 = res_314;
F->head_1001 = NULL;
F->tail_1002 = NULL;
F->x_1003 = NULL;
while ((!f_at_kind_233(F->up, F->up->k_eof_2))) {
if (f_at_kw_229(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_280(F->up);
} else {
if (f_at_kw_229(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_281(F->up);
}
if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_294(F->up, &F->x_1003);
} else if (f_at_kw_229(F->up, rt_str("PACKAGE", 7))) {
f_package_p_300(F->up, &F->x_1003);
} else if (f_at_kw_229(F->up, rt_str("TASK", 4))) {
f_task_p_620(F->up, &F->x_1003);
} else if (f_at_kw_229(F->up, rt_str("GENERIC", 7))) {
f_generic_p_750(F->up, &F->x_1003);
} else {
f_perror_239(F->up, rt_str("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_224(F->up, &F->head_1001, &F->tail_1002, F->x_1003);
}
}
L_end_1004: ;
(*F->res_314) = F->head_1001;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_317(struct f_greenc_1fr *up_, rstr s_316) {
  struct f_hash_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_316 = rt_str_copy(s_316);
F->h_1005 = ((rt_int)0LL);
{ rt_int lo1008 = ((rt_int)1LL), hi1009 = (F->s_316).len;
for (rt_int it1010 = lo1008; it1010 <= hi1009; it1010++) {
F->i_1007 = it1010;
F->h_1005 = rt_rem(rt_add(rt_mul(F->h_1005, ((rt_int)31LL)), ((rt_int)(rt_str_get(F->s_316, F->i_1007)) + 1)), ((rt_int)4093LL));
}
}
L_end_1006: ;
F->result_ = F->h_1005;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_319(struct f_greenc_1fr *up_, rstr name_318) {
  struct f_lookup_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_318 = rt_str_copy(name_318);
F->y_1011 = NULL;
F->y_1011 = F->up->table_112.p[rt_index(f_hash_317(F->up, F->name_318), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1011 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1011)).name_)), F->name_318)) {
F->result_ = F->y_1011;
goto ret_;
}
F->y_1011 = (*(P110)rt_nil_check(F->y_1011)).chain_;
}
L_end_1012: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_lookup_decl_321(struct f_greenc_1fr *up_, P159 d_320) {
  struct f_lookup_decl_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_320 = d_320;
F->y_1013 = NULL;
F->y_1013 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->d_320)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1013 != NULL)) {
if (((*(P110)rt_nil_check(F->y_1013)).decl_ == F->d_320)) {
F->result_ = F->y_1013;
goto ret_;
}
F->y_1013 = (*(P110)rt_nil_check(F->y_1013)).chain_;
}
L_end_1014: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_323(struct f_greenc_1fr *up_, P110 y_322) {
  struct f_overloadable_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_322 = y_322;
F->result_ = (((((*(P110)rt_nil_check(F->y_322)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_322)).kind_ == F->up->y_proc_93)) || ((*(P110)rt_nil_check(F->y_322)).kind_ == F->up->y_enumlit_96)) || ((*(P110)rt_nil_check(F->y_322)).kind_ == F->up->y_entry_99));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_326(struct f_greenc_1fr *up_, P115 a_324, P115 b_325) {
  struct f_same_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_324 = a_324;
F->b_325 = b_325;
if ((F->a_324 == F->b_325)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_324 == NULL) || (F->b_325 == NULL)) || ((*(P115)rt_nil_check(F->a_324)).kind_ != (*(P115)rt_nil_check(F->b_325)).kind_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((((((*(P115)rt_nil_check(F->a_324)).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check(F->a_324)).kind_ == F->up->t_bool_76)) || ((*(P115)rt_nil_check(F->a_324)).kind_ == F->up->t_float_77)) || ((*(P115)rt_nil_check(F->a_324)).kind_ == F->up->t_char_85)) || ((*(P115)rt_nil_check(F->a_324)).kind_ == F->up->t_string_79)) || ((*(P115)rt_nil_check(F->a_324)).kind_ == F->up->t_void_83));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_329(struct f_greenc_1fr *up_, P1015 a_327, P1015 b_328) {
  struct f_same_signature_329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_327 = a_327;
F->b_328 = b_328;
F->x_1017 = NULL;
F->x_1017 = F->a_327;
F->y_1018 = NULL;
F->y_1018 = F->b_328;
while (((F->x_1017 != NULL) && (F->y_1018 != NULL))) {
if (((!f_same_326(F->up, (*(P1015)rt_nil_check(F->x_1017)).t_, (*(P1015)rt_nil_check(F->y_1018)).t_)) || ((*(P1015)rt_nil_check(F->x_1017)).mode_ != (*(P1015)rt_nil_check(F->y_1018)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_1017 = (*(P1015)rt_nil_check(F->x_1017)).next_;
F->y_1018 = (*(P1015)rt_nil_check(F->y_1018)).next_;
}
L_end_1019: ;
F->result_ = ((F->x_1017 == NULL) && (F->y_1018 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_332(struct f_greenc_1fr *up_, P110 y_330, rt_int line_331) {
  struct f_define_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_330 = y_330;
F->line_331 = line_331;
F->h_1020 = f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_330)).name_)));
F->z_1021 = NULL;
F->z_1021 = F->up->table_112.p[rt_index(F->h_1020, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1021 != NULL)) {
if (((((*(P110)rt_nil_check(F->z_1021)).depth_ == F->up->depth_113) && rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1021)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_330)).name_)))) && (!((f_overloadable_323(F->up, F->y_330) && f_overloadable_323(F->up, F->z_1021)) && ((((*(P110)rt_nil_check(F->y_330)).kind_ != (*(P110)rt_nil_check(F->z_1021)).kind_) || (!f_same_signature_329(F->up, (*(P110)rt_nil_check(F->y_330)).params_, (*(P110)rt_nil_check(F->z_1021)).params_))) || (!f_same_326(F->up, (*(P110)rt_nil_check(F->y_330)).result_, (*(P110)rt_nil_check(F->z_1021)).result_))))))) {
f_fail_195(F->up, F->line_331, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_330)).name_)), rt_str(" is already declared in this declarative part", 45)));
}
F->z_1021 = (*(P110)rt_nil_check(F->z_1021)).chain_;
}
L_end_1022: ;
(*(P110)rt_nil_check(F->y_330)).depth_ = F->up->depth_113;
(*(P110)rt_nil_check(F->y_330)).chain_ = F->up->table_112.p[rt_index(F->h_1020, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->up->table_112.p[rt_index(F->h_1020, F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = F->y_330;
(*(P110)rt_nil_check(F->y_330)).stack_ = F->up->scope_stack_114;
F->up->scope_stack_114 = F->y_330;
ret_:

  return;
}

static void f_open_scope_333(struct f_greenc_1fr *up_) {
  struct f_open_scope_333fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_113 = rt_add(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_334(struct f_greenc_1fr *up_) {
  struct f_close_scope_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_114 != NULL) && ((*(P110)rt_nil_check(F->up->scope_stack_114)).depth_ == F->up->depth_113))) {
F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->scope_stack_114)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo] = (*(P110)rt_nil_check(F->up->scope_stack_114)).chain_;
F->up->scope_stack_114 = (*(P110)rt_nil_check(F->up->scope_stack_114)).stack_;
}
L_end_1023: ;
F->up->depth_113 = rt_sub(F->up->depth_113, ((rt_int)1LL));
ret_:

  return;
}

static P110 f_new_sym_337(struct f_greenc_1fr *up_, rt_int kind_335, P133 name_336) {
  struct f_new_sym_337fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_335 = kind_335;
F->name_336 = name_336;
F->result_ = ({ R111 *cell1024 = rt_alloc(sizeof(R111)); *cell1024 = cp_R111(({ R111 ag1025; ag1025.kind_ = F->kind_335; ag1025.name_ = F->name_336; ag1025.t_ = NULL; ag1025.c_ = NULL; ag1025.access_path_ = NULL; ag1025.cname_ = NULL; ag1025.ro_ = 0; ag1025.mvalue_ = ((rt_int)0LL); ag1025.hasmv_ = 0; ag1025.decl_ = NULL; ag1025.params_ = NULL; ag1025.result_ = NULL; ag1025.depth_ = ((rt_int)0LL); ag1025.level_ = ((rt_int)0LL); ag1025.byref_ = 0; ag1025.vrp_ = 0; ag1025.hidden_ = 0; ag1025.members_ = NULL; ag1025.mnext_ = NULL; ag1025.chain_ = NULL; ag1025.stack_ = NULL; ag1025; })); (P110)cell1024; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P115 f_new_typ_339(struct f_greenc_1fr *up_, rt_int kind_338) {
  struct f_new_typ_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_338 = kind_338;
F->result_ = ({ R116 *cell1028 = rt_alloc(sizeof(R116)); *cell1028 = cp_R116(({ R116 ag1029; ag1029.kind_ = F->kind_338; ag1029.name_ = NULL; ag1029.lits_ = NULL; ag1029.elem_ = NULL; ag1029.idx_ = NULL; ag1029.elemcons_ = NULL; ag1029.tcons_ = NULL; ag1029.fields_ = NULL; ag1029.target_ = NULL; ag1029.decl_ = NULL; ag1029.cname_ = NULL; ag1029.forward_ = 0; ag1029.defined_ = 0; ag1029.priv_ = 0; ag1029.next_ = NULL; ag1029; })); (P115)cell1028; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P163 f_new_cons_340(struct f_greenc_1fr *up_) {
  struct f_new_cons_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R164 *cell1030 = rt_alloc(sizeof(R164)); *cell1030 = cp_R164(({ R164 ag1031; ag1031.lo_ = NULL; ag1031.hi_ = NULL; ag1031.slen_ = NULL; ag1031.mlo_ = ((rt_int)0LL); ag1031.mhi_ = ((rt_int)0LL); ag1031.hasm_ = 0; ag1031; })); (P163)cell1030; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_kind_name_342(struct f_greenc_1fr *up_, P115 t_341) {
  struct f_kind_name_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_341 = t_341;
if (((*(P115)rt_nil_check(F->t_341)).name_ != NULL)) {
F->result_ = (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_341)).name_));
goto ret_;
}
{ rt_int sel1032 = (*(P115)rt_nil_check(F->t_341)).kind_;
if (0 || sel1032 == ((rt_int)1LL)) {
F->result_ = rt_str("INTEGER", 7);
goto ret_;
} else if (0 || sel1032 == ((rt_int)2LL)) {
F->result_ = rt_str("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1032 == ((rt_int)3LL)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || sel1032 == ((rt_int)5LL)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || sel1032 == ((rt_int)10LL)) {
F->result_ = rt_str("null", 4);
goto ret_;
} else if (0 || sel1032 == ((rt_int)11LL)) {
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

static void f_check_type_346(struct f_greenc_1fr *up_, P115 got_343, P115 want_344, rt_int line_345) {
  struct f_check_type_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_343 = got_343;
F->want_344 = want_344;
F->line_345 = line_345;
if ((F->want_344 == NULL)) {
goto ret_;
}
if ((((*(P115)rt_nil_check(F->got_343)).kind_ == F->up->t_nil_84) && ((*(P115)rt_nil_check(F->want_344)).kind_ == F->up->t_ptr_82))) {
goto ret_;
}
if ((!f_same_326(F->up, F->got_343, F->want_344))) {
f_fail_195(F->up, F->line_345, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_342(F->up, F->got_343)), rt_str(" where ", 7)), f_kind_name_342(F->up, F->want_344)), rt_str(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_348(struct f_greenc_1fr *up_, P115 t_347) {
  struct f_field_count_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_347 = t_347;
F->n_1033 = ((rt_int)0LL);
F->f_1034 = NULL;
F->f_1034 = (*(P115)rt_nil_check(F->t_347)).fields_;
while ((F->f_1034 != NULL)) {
F->n_1033 = rt_add(F->n_1033, ((rt_int)1LL));
F->f_1034 = (*(P1026)rt_nil_check(F->f_1034)).next_;
}
L_end_1035: ;
F->result_ = F->n_1033;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_351(struct f_greenc_1fr *up_, P115 t_349, P133 *r_350) {
  struct f_ctype_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_349 = t_349;
F->r_350 = r_350;
F->s_1036 = NULL;
{ rt_int sel1037 = (*(P115)rt_nil_check(F->t_349)).kind_;
if (0 || sel1037 == ((rt_int)1LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("rt_int", 6));
} else if (0 || sel1037 == ((rt_int)2LL) || sel1037 == ((rt_int)4LL) || sel1037 == ((rt_int)11LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("int", 3));
} else if (0 || sel1037 == ((rt_int)3LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("double", 6));
} else if (0 || sel1037 == ((rt_int)5LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("rstr", 4));
} else if (0 || sel1037 == ((rt_int)9LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("void", 4));
} else if (0 || sel1037 == ((rt_int)13LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("rt_act", 6));
} else if (0 || sel1037 == ((rt_int)14LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("rt_taskdecl", 11));
} else if (0 || sel1037 == ((rt_int)15LL)) {
(*F->r_350) = f_mk_178(F->up, rt_str("rt_entry", 8));
} else {
if (((*(P115)rt_nil_check(F->t_349)).cname_ == NULL)) {
f_declare_ctype_356(F->up, F->t_349);
} else if (((((*(P115)rt_nil_check(F->t_349)).kind_ == F->up->t_record_81) && (*(P115)rt_nil_check(F->t_349)).forward_) && (!(*(P115)rt_nil_check(F->t_349)).defined_))) {
(*(P115)rt_nil_check(F->t_349)).defined_ = 1;
f_field_decls_354(F->up, F->t_349, &F->s_1036);
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_349)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1036))), rt_str(" };", 3)));
}
(*F->r_350) = (*(P115)rt_nil_check(F->t_349)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_354(struct f_greenc_1fr *up_, P115 t_352, P133 *r_353) {
  struct f_field_decls_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_352 = t_352;
F->r_353 = r_353;
F->f_1038 = NULL;
F->f_1038 = (*(P115)rt_nil_check(F->t_352)).fields_;
F->s_1039 = NULL;
F->ct_1040 = NULL;
F->s_1039 = f_mk_178(F->up, rt_str(" int dummy_;", 12));
while ((F->f_1038 != NULL)) {
f_ctype_351(F->up, (*(P1026)rt_nil_check(F->f_1038)).t_, &F->ct_1040);
F->s_1039 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->s_1039)), 32), (*(P133)rt_nil_check(F->ct_1040))), 32), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1038)).name_)))), 59));
F->f_1038 = (*(P1026)rt_nil_check(F->f_1038)).next_;
}
L_end_1041: ;
(*F->r_353) = F->s_1039;
ret_:

  return;
}

static void f_declare_ctype_356(struct f_greenc_1fr *up_, P115 t_355) {
  struct f_declare_ctype_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_355 = t_355;
F->ct_1042 = NULL;
F->s_1043 = NULL;
F->target_1044 = NULL;
if (((*(P115)rt_nil_check(F->t_355)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_374(F->up, F->t_355);
}
if (((*(P115)rt_nil_check(F->t_355)).kind_ == F->up->t_array_80)) {
f_new_name_181(F->up, rt_str("A", 1), &(*(P115)rt_nil_check(F->t_355)).cname_);
} else if (((*(P115)rt_nil_check(F->t_355)).kind_ == F->up->t_record_81)) {
f_new_name_181(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->t_355)).cname_);
} else {
f_new_name_181(F->up, rt_str("P", 1), &(*(P115)rt_nil_check(F->t_355)).cname_);
}
(*(P115)rt_nil_check(F->t_355)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->t_355;
if (((*(P115)rt_nil_check(F->t_355)).kind_ == F->up->t_ptr_82)) {
F->target_1044 = (*(P115)rt_nil_check(F->t_355)).target_;
if ((F->target_1044 == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str_cat(rt_str_cat(rt_str("the designated type of ", 23), f_kind_name_342(F->up, F->t_355)), rt_str(" is never declared", 18)));
}
if (((*(P115)rt_nil_check(F->target_1044)).kind_ == F->up->t_record_81)) {
if (((*(P115)rt_nil_check(F->target_1044)).cname_ == NULL)) {
f_new_name_181(F->up, rt_str("R", 1), &(*(P115)rt_nil_check(F->target_1044)).cname_);
(*(P115)rt_nil_check(F->target_1044)).next_ = F->up->all_types_117;
F->up->all_types_117 = F->target_1044;
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1044)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1044)).cname_))), 59));
(*(P115)rt_nil_check(F->target_1044)).forward_ = 1;
}
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->target_1044)).cname_))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), 59));
} else {
f_ctype_351(F->up, F->target_1044, &F->ct_1042);
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), (*(P133)rt_nil_check(F->ct_1042))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), 59));
}
} else if (((*(P115)rt_nil_check(F->t_355)).kind_ == F->up->t_array_80)) {
f_ctype_351(F->up, (*(P115)rt_nil_check(F->t_355)).elem_, &F->ct_1042);
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), 59));
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P133)rt_nil_check(F->ct_1042))), rt_str(" *p; };", 7)));
} else {
f_put_to_199(F->up, F->up->out_types_121, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), 32), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), 59));
(*(P115)rt_nil_check(F->t_355)).defined_ = 1;
f_field_decls_354(F->up, F->t_355, &F->s_1043);
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_355)).cname_))), rt_str(" {", 2)), (*(P133)rt_nil_check(F->s_1043))), rt_str(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_359(struct f_greenc_1fr *up_, P159 lits_357, rstr name_358) {
  struct f_lit_index_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_357 = lits_357;
F->name_358 = rt_str_copy(name_358);
F->i_1045 = ((rt_int)0LL);
F->l_1046 = NULL;
F->l_1046 = F->lits_357;
while ((F->l_1046 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->l_1046)).name_)), F->name_358)) {
F->result_ = F->i_1045;
goto ret_;
}
F->i_1045 = rt_add(F->i_1045, ((rt_int)1LL));
F->l_1046 = (*(P159)rt_nil_check(F->l_1046)).next_;
}
L_end_1047: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_363(struct f_greenc_1fr *up_, P159 e_360, rt_int *v_361, int *ok_362) {
  struct f_manifest_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_360 = e_360;
F->v_361 = v_361;
F->ok_362 = ok_362;
F->y_1051 = NULL;
(*F->ok_362) = 0;
(*F->v_361) = ((rt_int)0LL);
if (((*(P159)rt_nil_check(F->e_360)).kind_ == F->up->n_int_9)) {
(*F->ok_362) = 1;
(*F->v_361) = (*(P159)rt_nil_check(F->e_360)).ival_;
} else if (((*(P159)rt_nil_check(F->e_360)).kind_ == F->up->n_paren_23)) {
f_manifest_363(F->up, (*(P159)rt_nil_check(F->e_360)).a_, &(*F->v_361), &(*F->ok_362));
} else if ((((*(P159)rt_nil_check(F->e_360)).kind_ == F->up->n_unop_14) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_360)).name_)), rt_str("-", 1)))) {
f_manifest_363(F->up, (*(P159)rt_nil_check(F->e_360)).a_, &F->a_1048, &(*F->ok_362));
(*F->v_361) = rt_neg(F->a_1048);
} else if ((((*(P159)rt_nil_check(F->e_360)).kind_ == F->up->n_binop_15) && ((rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_360)).name_)), rt_str("+", 1)) || rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_360)).name_)), rt_str("-", 1))) || rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_360)).name_)), rt_str("*", 1))))) {
f_manifest_363(F->up, (*(P159)rt_nil_check(F->e_360)).a_, &F->a_1048, &(*F->ok_362));
f_manifest_363(F->up, (*(P159)rt_nil_check(F->e_360)).b_, &F->b_1049, &F->ok2_1050);
(*F->ok_362) = ((*F->ok_362) && F->ok2_1050);
if ((*F->ok_362)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_360)).name_)), rt_str("+", 1))) {
(*F->v_361) = rt_add(F->a_1048, F->b_1049);
} else if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_360)).name_)), rt_str("-", 1))) {
(*F->v_361) = rt_sub(F->a_1048, F->b_1049);
} else {
(*F->v_361) = rt_mul(F->a_1048, F->b_1049);
}
}
} else if (((*(P159)rt_nil_check(F->e_360)).kind_ == F->up->n_name_13)) {
F->y_1051 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_360)).name_)));
if ((((F->y_1051 != NULL) && ((*(P110)rt_nil_check(F->y_1051)).kind_ == F->up->y_const_91)) && (*(P110)rt_nil_check(F->y_1051)).hasmv_)) {
(*F->ok_362) = 1;
(*F->v_361) = (*(P110)rt_nil_check(F->y_1051)).mvalue_;
}
}
ret_:

  return;
}

static void f_resolve_367(struct f_greenc_1fr *up_, P159 st_364, P115 *t_365, P163 *c_366) {
  struct f_resolve_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_364 = st_364;
F->t_365 = t_365;
F->c_366 = c_366;
F->y_1052 = NULL;
F->dummy_1053 = NULL;
F->code_1054 = NULL;
F->r_1056 = NULL;
(*F->c_366) = f_new_cons_340(F->up);
if (((*(P159)rt_nil_check(F->st_364)).kind_ != F->up->s_mark_71)) {
f_type_definition_372(F->up, F->st_364, NULL, &(*F->t_365), &(*F->c_366));
goto ret_;
}
if (((*(P159)rt_nil_check(F->st_364)).tag_ != NULL)) {
F->y_1052 = f_member_of_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_364)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_364)).name_)), (*(P159)rt_nil_check(F->st_364)).line_);
} else {
F->y_1052 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_364)).name_)));
}
if (((F->y_1052 == NULL) || ((*(P110)rt_nil_check(F->y_1052)).kind_ != F->up->y_type_94))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_364)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_364)).name_)), rt_str(" is not a type", 14)));
}
(*F->t_365) = (*(P110)rt_nil_check(F->y_1052)).t_;
if (((*(P110)rt_nil_check(F->y_1052)).c_ != NULL)) {
(*(P163)rt_nil_check((*F->c_366))).lo_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1052)).c_)).lo_;
(*(P163)rt_nil_check((*F->c_366))).hi_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1052)).c_)).hi_;
(*(P163)rt_nil_check((*F->c_366))).slen_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1052)).c_)).slen_;
(*(P163)rt_nil_check((*F->c_366))).mlo_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1052)).c_)).mlo_;
(*(P163)rt_nil_check((*F->c_366))).mhi_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1052)).c_)).mhi_;
(*(P163)rt_nil_check((*F->c_366))).hasm_ = (*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1052)).c_)).hasm_;
}
if (((*F->t_365) == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_364)).line_, rt_str_cat(rt_str_cat(rt_str("the type ", 9), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->st_364)).name_))), rt_str(" is used before its full declaration", 36)));
}
if (((*(P159)rt_nil_check(F->st_364)).flag_ == ((rt_int)1LL))) {
F->r_1056 = (*(P159)rt_nil_check(F->st_364)).a_;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1056)).a_, (*F->t_365), &F->dummy_1053, &(*(P163)rt_nil_check((*F->c_366))).lo_);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1056)).b_, (*F->t_365), &F->dummy_1053, &(*(P163)rt_nil_check((*F->c_366))).hi_);
f_manifest_363(F->up, (*(P159)rt_nil_check(F->r_1056)).a_, &(*(P163)rt_nil_check((*F->c_366))).mlo_, &F->ok_1055);
(*(P163)rt_nil_check((*F->c_366))).hasm_ = F->ok_1055;
f_manifest_363(F->up, (*(P159)rt_nil_check(F->r_1056)).b_, &(*(P163)rt_nil_check((*F->c_366))).mhi_, &F->ok_1055);
(*(P163)rt_nil_check((*F->c_366))).hasm_ = ((*(P163)rt_nil_check((*F->c_366))).hasm_ && F->ok_1055);
} else if (((*(P159)rt_nil_check(F->st_364)).flag_ == ((rt_int)2LL))) {
F->r_1056 = (*(P159)rt_nil_check(F->st_364)).a_;
if (((*(P159)rt_nil_check(F->r_1056)).kind_ != F->up->n_range_22)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_364)).line_, rt_str("an index constraint is a discrete range", 39));
}
if (((*(P115)rt_nil_check((*F->t_365))).kind_ == F->up->t_string_79)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1056)).a_, F->up->ty_int_145, &F->dummy_1053, &F->code_1054);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1056)).b_, F->up->ty_int_145, &F->dummy_1053, &(*(P163)rt_nil_check((*F->c_366))).slen_);
(*(P163)rt_nil_check((*F->c_366))).slen_ = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check((*(P163)rt_nil_check((*F->c_366))).slen_))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->code_1054))), rt_str(" + 1)", 5)));
} else if (((*(P115)rt_nil_check((*F->t_365))).kind_ == F->up->t_array_80)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1056)).a_, (*(P115)rt_nil_check((*F->t_365))).idx_, &F->dummy_1053, &(*(P163)rt_nil_check((*F->c_366))).lo_);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1056)).b_, (*(P115)rt_nil_check((*F->t_365))).idx_, &F->dummy_1053, &(*(P163)rt_nil_check((*F->c_366))).hi_);
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->st_364)).line_, rt_str("this type takes no index constraint", 35));
}
}
ret_:

  return;
}

static void f_type_definition_372(struct f_greenc_1fr *up_, P159 d_368, P133 name_369, P115 *t_370, P163 *c_371) {
  struct f_type_definition_372fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_368 = d_368;
F->name_369 = name_369;
F->t_370 = t_370;
F->c_371 = c_371;
F->dummy_1057 = NULL;
F->it_1058 = NULL;
F->ic_1059 = NULL;
F->l_1060 = NULL;
F->comp_1061 = NULL;
F->f_1062 = NULL;
F->tail_1063 = NULL;
F->y_1066 = NULL;
(*F->c_371) = f_new_cons_340(F->up);
{ rt_int sel1067 = (*(P159)rt_nil_check(F->d_368)).kind_;
if (0 || sel1067 == ((rt_int)70LL)) {
(*F->t_370) = f_new_typ_339(F->up, F->up->t_enum_78);
(*(P115)rt_nil_check((*F->t_370))).lits_ = (*(P159)rt_nil_check(F->d_368)).a_;
(*(P115)rt_nil_check((*F->t_370))).name_ = F->name_369;
F->l_1060 = (*(P159)rt_nil_check(F->d_368)).a_;
F->n_1065 = ((rt_int)0LL);
while ((F->l_1060 != NULL)) {
if (((*(P159)rt_nil_check(F->l_1060)).kind_ == F->up->n_name_13)) {
F->y_1066 = f_new_sym_337(F->up, F->up->y_enumlit_96, (*(P159)rt_nil_check(F->l_1060)).name_);
(*(P110)rt_nil_check(F->y_1066)).t_ = (*F->t_370);
(*(P110)rt_nil_check(F->y_1066)).result_ = (*F->t_370);
(*(P110)rt_nil_check(F->y_1066)).mvalue_ = F->n_1065;
(*(P110)rt_nil_check(F->y_1066)).hasmv_ = 1;
f_define_332(F->up, F->y_1066, (*(P159)rt_nil_check(F->l_1060)).line_);
}
F->n_1065 = rt_add(F->n_1065, ((rt_int)1LL));
F->l_1060 = (*(P159)rt_nil_check(F->l_1060)).next_;
}
L_end_1068: ;
(*(P163)rt_nil_check((*F->c_371))).lo_ = f_mk_178(F->up, rt_str("0", 1));
(*(P163)rt_nil_check((*F->c_371))).hi_ = f_mk_178(F->up, rt_str_of_int(rt_sub(F->n_1065, ((rt_int)1LL))));
} else if (0 || sel1067 == ((rt_int)71LL)) {
(*F->t_370) = F->up->ty_int_145;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->d_368)).a_, F->up->ty_int_145, &F->dummy_1057, &(*(P163)rt_nil_check((*F->c_371))).lo_);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->d_368)).b_, F->up->ty_int_145, &F->dummy_1057, &(*(P163)rt_nil_check((*F->c_371))).hi_);
f_manifest_363(F->up, (*(P159)rt_nil_check(F->d_368)).a_, &(*(P163)rt_nil_check((*F->c_371))).mlo_, &F->ok_1064);
(*(P163)rt_nil_check((*F->c_371))).hasm_ = F->ok_1064;
f_manifest_363(F->up, (*(P159)rt_nil_check(F->d_368)).b_, &(*(P163)rt_nil_check((*F->c_371))).mhi_, &F->ok_1064);
(*(P163)rt_nil_check((*F->c_371))).hasm_ = ((*(P163)rt_nil_check((*F->c_371))).hasm_ && F->ok_1064);
} else if (0 || sel1067 == ((rt_int)72LL)) {
(*F->t_370) = F->up->ty_float_147;
} else if (0 || sel1067 == ((rt_int)73LL)) {
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->d_368)).a_)).next_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->d_368)).line_, rt_str("arrays of more than one dimension are not handled yet", 53));
}
(*F->t_370) = f_new_typ_339(F->up, F->up->t_array_80);
(*(P115)rt_nil_check((*F->t_370))).name_ = F->name_369;
f_resolve_367(F->up, (*(P159)rt_nil_check(F->d_368)).b_, &(*(P115)rt_nil_check((*F->t_370))).elem_, &(*(P115)rt_nil_check((*F->t_370))).elemcons_);
F->l_1060 = (*(P159)rt_nil_check(F->d_368)).a_;
if (((*(P159)rt_nil_check(F->l_1060)).kind_ == F->up->n_range_22)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->l_1060)).a_, NULL, &(*(P115)rt_nil_check((*F->t_370))).idx_, &(*(P163)rt_nil_check((*F->c_371))).lo_);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->l_1060)).b_, (*(P115)rt_nil_check((*F->t_370))).idx_, &F->dummy_1057, &(*(P163)rt_nil_check((*F->c_371))).hi_);
} else {
f_resolve_367(F->up, F->l_1060, &(*(P115)rt_nil_check((*F->t_370))).idx_, &F->ic_1059);
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_370))).idx_)).kind_ == F->up->t_enum_78) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_370))).idx_)).kind_ == F->up->t_char_85)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check((*F->t_370))).idx_)).kind_ == F->up->t_bool_76))) {
(*(P163)rt_nil_check((*F->c_371))).lo_ = (*(P163)rt_nil_check(F->ic_1059)).lo_;
(*(P163)rt_nil_check((*F->c_371))).hi_ = (*(P163)rt_nil_check(F->ic_1059)).hi_;
} else if (((*(P163)rt_nil_check(F->ic_1059)).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_370))).tcons_ = f_new_cons_340(F->up);
(*(P163)rt_nil_check((*(P115)rt_nil_check((*F->t_370))).tcons_)).lo_ = (*(P163)rt_nil_check(F->ic_1059)).lo_;
}
}
if (((*(P163)rt_nil_check((*F->c_371))).lo_ != NULL)) {
(*(P115)rt_nil_check((*F->t_370))).tcons_ = (*F->c_371);
}
} else if (0 || sel1067 == ((rt_int)74LL)) {
(*F->t_370) = f_new_typ_339(F->up, F->up->t_record_81);
(*(P115)rt_nil_check((*F->t_370))).name_ = F->name_369;
F->comp_1061 = (*(P159)rt_nil_check(F->d_368)).a_;
while ((F->comp_1061 != NULL)) {
F->f_1062 = ({ R1027 *cell1070 = rt_alloc(sizeof(R1027)); *cell1070 = cp_R1027(({ R1027 ag1071; ag1071.name_ = (*(P159)rt_nil_check(F->comp_1061)).name_; ag1071.t_ = NULL; ag1071.c_ = NULL; ag1071.next_ = NULL; ag1071; })); (P1026)cell1070; });
f_resolve_367(F->up, (*(P159)rt_nil_check(F->comp_1061)).a_, &(*(P1026)rt_nil_check(F->f_1062)).t_, &(*(P1026)rt_nil_check(F->f_1062)).c_);
if ((F->tail_1063 == NULL)) {
(*(P115)rt_nil_check((*F->t_370))).fields_ = F->f_1062;
} else {
(*(P1026)rt_nil_check(F->tail_1063)).next_ = F->f_1062;
}
F->tail_1063 = F->f_1062;
F->comp_1061 = (*(P159)rt_nil_check(F->comp_1061)).next_;
}
L_end_1069: ;
} else if (0 || sel1067 == ((rt_int)75LL)) {
(*F->t_370) = f_new_typ_339(F->up, F->up->t_ptr_82);
(*(P115)rt_nil_check((*F->t_370))).name_ = F->name_369;
(*(P115)rt_nil_check((*F->t_370))).decl_ = (*(P159)rt_nil_check(F->d_368)).a_;
} else if (0 || sel1067 == ((rt_int)76LL)) {
f_resolve_367(F->up, (*(P159)rt_nil_check(F->d_368)).a_, &(*F->t_370), &(*F->c_371));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->d_368)).line_, rt_str("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_finish_ptr_374(struct f_greenc_1fr *up_, P115 t_373) {
  struct f_finish_ptr_374fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_373 = t_373;
F->c_1072 = NULL;
if ((((*(P115)rt_nil_check(F->t_373)).target_ == NULL) && ((*(P115)rt_nil_check(F->t_373)).decl_ != NULL))) {
f_resolve_367(F->up, (*(P115)rt_nil_check(F->t_373)).decl_, &(*(P115)rt_nil_check(F->t_373)).target_, &F->c_1072);
}
ret_:

  return;
}

static void f_init_storage_378(struct f_greenc_1fr *up_, rstr lval_375, P115 t_376, P163 c_377) {
  struct f_init_storage_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_375 = rt_str_copy(lval_375);
F->t_376 = t_376;
F->c_377 = c_377;
F->ct_1073 = NULL;
F->i_1074 = NULL;
F->f_1075 = NULL;
if (((*(P115)rt_nil_check(F->t_376)).kind_ == F->up->t_ptr_82)) {
f_emit_201(F->up, rt_str_cat(F->lval_375, rt_str(" = NULL;", 8)));
} else if (((*(P115)rt_nil_check(F->t_376)).kind_ == F->up->t_string_79)) {
if (((*(P163)rt_nil_check(F->c_377)).slen_ == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str("a STRING object needs an index constraint or an initial value", 61));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(F->lval_375, rt_str(" = rt_str_new(", 14)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_377)).slen_))), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_376)).kind_ == F->up->t_array_80)) {
if (((*(P163)rt_nil_check(F->c_377)).lo_ == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str("an array object needs an index constraint", 41));
}
f_ctype_351(F->up, (*(P115)rt_nil_check(F->t_376)).elem_, &F->ct_1073);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_375, rt_str(".lo = ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_377)).lo_))), rt_str("; ", 2)), F->lval_375), rt_str(".hi = ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_377)).hi_))), rt_str("; ", 2)), F->lval_375), rt_str(".lo2 = 1; ", 10)), F->lval_375), rt_str(".hi2 = 1;", 9)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_375, rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->ct_1073))), rt_str(") * (size_t)RT_CNT(", 19)), F->lval_375), rt_str("));", 3)));
if (((((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_376)).elem_)).kind_ == F->up->t_string_79) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_376)).elem_)).kind_ == F->up->t_array_80)) || ((*(P115)rt_nil_check((*(P115)rt_nil_check(F->t_376)).elem_)).kind_ == F->up->t_record_81))) {
f_new_name_181(F->up, rt_str("i", 1), &F->i_1074);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->i_1074))), rt_str(" = 0; ", 6)), (*(P133)rt_nil_check(F->i_1074))), rt_str(" < RT_CNT(", 10)), F->lval_375), rt_str("); ", 3)), (*(P133)rt_nil_check(F->i_1074))), rt_str("++) {", 5)));
f_init_storage_378(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_375, rt_str(".p[", 3)), (*(P133)rt_nil_check(F->i_1074))), 93), (*(P115)rt_nil_check(F->t_376)).elem_, (*(P115)rt_nil_check(F->t_376)).elemcons_);
f_emit_201(F->up, rt_str("}", 1));
}
} else if (((*(P115)rt_nil_check(F->t_376)).kind_ == F->up->t_record_81)) {
F->f_1075 = (*(P115)rt_nil_check(F->t_376)).fields_;
while ((F->f_1075 != NULL)) {
f_init_storage_378(F->up, rt_str_cat(rt_str_catc(F->lval_375, 46), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1075)).name_)))), (*(P1026)rt_nil_check(F->f_1075)).t_, (*(P1026)rt_nil_check(F->f_1075)).c_);
F->f_1075 = (*(P1026)rt_nil_check(F->f_1075)).next_;
}
L_end_1076: ;
}
ret_:

  return;
}

static int f_composite_380(struct f_greenc_1fr *up_, P115 t_379) {
  struct f_composite_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_379 = t_379;
F->result_ = (((*(P115)rt_nil_check(F->t_379)).kind_ == F->up->t_array_80) || ((*(P115)rt_nil_check(F->t_379)).kind_ == F->up->t_record_81));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_386(struct f_greenc_1fr *up_, rstr lval_381, P115 t_382, rstr v_383, P163 c_384, P133 *r_385) {
  struct f_assign_code_386fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_381 = rt_str_copy(lval_381);
F->t_382 = t_382;
F->v_383 = rt_str_copy(v_383);
F->c_384 = c_384;
F->r_385 = r_385;
F->ct_1077 = NULL;
if (f_composite_380(F->up, F->t_382)) {
f_ctype_351(F->up, F->t_382, &F->ct_1077);
(*F->r_385) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_382)).cname_))), rt_str("(&", 2)), F->lval_381), rt_str(", ", 2)), F->v_383), rt_str(");", 2)));
} else if (((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_string_79)) {
(*F->r_385) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), F->lval_381), rt_str(", ", 2)), F->v_383), rt_str(");", 2)));
} else if (((((((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_enum_78)) || ((*(P115)rt_nil_check(F->t_382)).kind_ == F->up->t_char_85)) && (F->c_384 != NULL)) && ((*(P163)rt_nil_check(F->c_384)).lo_ != NULL))) {
(*F->r_385) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_381, rt_str(" = rt_range(", 12)), F->v_383), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_384)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_384)).hi_))), rt_str(");", 2)));
} else {
(*F->r_385) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_381, rt_str(" = ", 3)), F->v_383), 59));
}
ret_:

  return;
}

static void f_copy_code_390(struct f_greenc_1fr *up_, P115 t_387, rstr v_388, P133 *r_389) {
  struct f_copy_code_390fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_387 = t_387;
F->v_388 = rt_str_copy(v_388);
F->r_389 = r_389;
F->ct_1078 = NULL;
if (f_composite_380(F->up, F->t_387)) {
f_ctype_351(F->up, F->t_387, &F->ct_1078);
(*F->r_389) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("cp_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_387)).cname_))), 40), F->v_388), 41));
} else if (((*(P115)rt_nil_check(F->t_387)).kind_ == F->up->t_string_79)) {
(*F->r_389) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_copy(", 12), F->v_388), 41));
} else {
(*F->r_389) = f_mk_178(F->up, F->v_388);
}
ret_:

  return;
}

static void f_eq_code_395(struct f_greenc_1fr *up_, P115 t_391, rstr a_392, rstr b_393, P133 *r_394) {
  struct f_eq_code_395fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_391 = t_391;
F->a_392 = rt_str_copy(a_392);
F->b_393 = rt_str_copy(b_393);
F->r_394 = r_394;
F->ct_1079 = NULL;
if (f_composite_380(F->up, F->t_391)) {
f_ctype_351(F->up, F->t_391, &F->ct_1079);
(*F->r_394) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("eq_", 3), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_391)).cname_))), 40), F->a_392), rt_str(", ", 2)), F->b_393), 41));
} else if (((*(P115)rt_nil_check(F->t_391)).kind_ == F->up->t_string_79)) {
(*F->r_394) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_392), rt_str(", ", 2)), F->b_393), 41));
} else {
(*F->r_394) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_392), rt_str(" == ", 4)), F->b_393), 41));
}
ret_:

  return;
}

static int f_seen_name_398(struct f_greenc_1fr *up_, P140 l_396, rstr s_397) {
  struct f_seen_name_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_396 = l_396;
F->s_397 = rt_str_copy(s_397);
F->p_1080 = NULL;
F->p_1080 = F->l_396;
while ((F->p_1080 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P140)rt_nil_check(F->p_1080)).s_)), F->s_397)) {
F->result_ = 1;
goto ret_;
}
F->p_1080 = (*(P140)rt_nil_check(F->p_1080)).next_;
}
L_end_1081: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_399(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1082 = NULL;
F->t_1082 = F->up->all_types_117;
F->done_1083 = NULL;
F->l_1084 = NULL;
while ((F->t_1082 != NULL)) {
if ((f_composite_380(F->up, F->t_1082) && (!f_seen_name_398(F->up, F->done_1083, (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_)))))) {
F->l_1084 = ({ R141 *cell1086 = rt_alloc(sizeof(R141)); *cell1086 = cp_R141(({ R141 ag1087; ag1087.s_ = (*(P115)rt_nil_check(F->t_1082)).cname_; ag1087.next_ = F->done_1083; ag1087; })); (P140)cell1086; });
F->done_1083 = F->l_1084;
f_put_to_199(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), rt_str(" s);", 4)));
f_put_to_199(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), rt_str(" cp_", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), rt_str(" s);", 4)));
f_put_to_199(F->up, F->up->out_helpers_123, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), 40), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), rt_str(" a, ", 4)), (*(P133)rt_nil_check((*(P115)rt_nil_check(F->t_1082)).cname_))), rt_str(" b);", 4)));
f_helper_bodies_401(F->up, F->t_1082);
}
F->t_1082 = (*(P115)rt_nil_check(F->t_1082)).next_;
}
L_end_1085: ;
ret_:

  return;
}

static void f_helper_bodies_401(struct f_greenc_1fr *up_, P115 t_400) {
  struct f_helper_bodies_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_400 = t_400;
F->c_1088 = NULL;
F->c_1088 = (*(P115)rt_nil_check(F->t_400)).cname_;
F->b_1089 = NULL;
F->b_1089 = F->up->out_funcs_126;
F->ct_1090 = NULL;
F->x_1091 = NULL;
F->y_1092 = NULL;
F->conds_1093 = NULL;
F->f_1094 = NULL;
if (((*(P115)rt_nil_check(F->t_400)).kind_ == F->up->t_array_80)) {
f_ctype_351(F->up, (*(P115)rt_nil_check(F->t_400)).elem_, &F->ct_1090);
f_assign_code_386(F->up, rt_str("d->p[i]", 7), (*(P115)rt_nil_check(F->t_400)).elem_, rt_str("s.p[i]", 6), NULL, &F->x_1091);
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1088))), 40), (*(P133)rt_nil_check(F->c_1088))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1088))), rt_str(" s) {", 5)));
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_192(F->up)), rt_str("array length", 12)), f_q_192(F->up)), rt_str(");", 2)));
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), (*(P133)rt_nil_check(F->x_1091))), rt_str(" }", 2)));
f_put_to_199(F->up, F->b_1089, rt_str("}", 1));
f_copy_code_390(F->up, (*(P115)rt_nil_check(F->t_400)).elem_, rt_str("s.p[i]", 6), &F->x_1091);
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1088))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1088))), 40), (*(P133)rt_nil_check(F->c_1088))), rt_str(" s) {", 5)));
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1088))), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P133)rt_nil_check(F->ct_1090))), rt_str(") * (size_t)RT_CNT(s));", 23)));
f_put_to_199(F->up, F->b_1089, rt_str_catc(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), (*(P133)rt_nil_check(F->x_1091))), 59));
f_put_to_199(F->up, F->b_1089, rt_str("  return d;", 11));
f_put_to_199(F->up, F->b_1089, rt_str("}", 1));
f_eq_code_395(F->up, (*(P115)rt_nil_check(F->t_400)).elem_, rt_str("a.p[i]", 6), rt_str("b.p[i]", 6), &F->x_1091);
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1088))), 40), (*(P133)rt_nil_check(F->c_1088))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1088))), rt_str(" b) {", 5)));
f_put_to_199(F->up, F->b_1089, rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43));
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), (*(P133)rt_nil_check(F->x_1091))), rt_str(")) return 0;", 12)));
f_put_to_199(F->up, F->b_1089, rt_str("  return 1;", 11));
f_put_to_199(F->up, F->b_1089, rt_str("}", 1));
} else {
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P133)rt_nil_check(F->c_1088))), 40), (*(P133)rt_nil_check(F->c_1088))), rt_str(" *d, ", 5)), (*(P133)rt_nil_check(F->c_1088))), rt_str(" s) {", 5)));
F->f_1094 = (*(P115)rt_nil_check(F->t_400)).fields_;
while ((F->f_1094 != NULL)) {
f_assign_code_386(F->up, rt_str_cat(rt_str("d->", 3), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1094)).name_)))), (*(P1026)rt_nil_check(F->f_1094)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1094)).name_)))), NULL, &F->x_1091);
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->x_1091))));
F->f_1094 = (*(P1026)rt_nil_check(F->f_1094)).next_;
}
L_end_1095: ;
f_put_to_199(F->up, F->b_1089, rt_str("}", 1));
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->c_1088))), rt_str(" cp_", 4)), (*(P133)rt_nil_check(F->c_1088))), 40), (*(P133)rt_nil_check(F->c_1088))), rt_str(" s) {", 5)));
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check(F->c_1088))), rt_str(" d = s;", 7)));
F->conds_1093 = f_mk_178(F->up, rt_str("1", 1));
F->f_1094 = (*(P115)rt_nil_check(F->t_400)).fields_;
while ((F->f_1094 != NULL)) {
f_copy_code_390(F->up, (*(P1026)rt_nil_check(F->f_1094)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1094)).name_)))), &F->x_1091);
f_put_to_199(F->up, F->b_1089, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1094)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1091))), 59));
f_eq_code_395(F->up, (*(P1026)rt_nil_check(F->f_1094)).t_, rt_str_cat(rt_str("a.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1094)).name_)))), rt_str_cat(rt_str("b.", 2), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1094)).name_)))), &F->y_1092);
F->conds_1093 = f_mk_178(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1093)), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->y_1092))));
F->f_1094 = (*(P1026)rt_nil_check(F->f_1094)).next_;
}
L_end_1096: ;
f_put_to_199(F->up, F->b_1089, rt_str("  return d;", 11));
f_put_to_199(F->up, F->b_1089, rt_str("}", 1));
f_put_to_199(F->up, F->b_1089, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P133)rt_nil_check(F->c_1088))), 40), (*(P133)rt_nil_check(F->c_1088))), rt_str(" a, ", 4)), (*(P133)rt_nil_check(F->c_1088))), rt_str(" b) {", 5)));
f_put_to_199(F->up, F->b_1089, rt_str_catc(rt_str_cat(rt_str("  return ", 9), (*(P133)rt_nil_check(F->conds_1093))), 59));
f_put_to_199(F->up, F->b_1089, rt_str("}", 1));
}
ret_:

  return;
}

static void f_storage_405(struct f_greenc_1fr *up_, rstr name_402, P115 t_403, P133 *access_code_404) {
  struct f_storage_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_402 = rt_str_copy(name_402);
F->t_403 = t_403;
F->access_code_404 = access_code_404;
F->ct_1097 = NULL;
F->g_1098 = NULL;
f_ctype_351(F->up, F->t_403, &F->ct_1097);
if ((!F->up->in_func_131)) {
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("g_", 2), f_lower_s_189(F->up, F->name_402)), 95), &F->g_1098);
f_put_to_199(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1097))), 32), (*(P133)rt_nil_check(F->g_1098))), 59));
F->up->st_field_134 = F->g_1098;
(*F->access_code_404) = F->g_1098;
} else {
f_new_name_181(F->up, rt_str_catc(f_lower_s_189(F->up, F->name_402), 95), &F->g_1098);
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1097))), 32), (*(P133)rt_nil_check(F->g_1098))), 59));
F->up->st_field_134 = F->g_1098;
(*F->access_code_404) = f_mk_178(F->up, rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check(F->g_1098))));
}
ret_:

  return;
}

static void f_bind_408(struct f_greenc_1fr *up_, P110 y_406, P133 access_code_407) {
  struct f_bind_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_406 = y_406;
F->access_code_407 = access_code_407;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_406)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->y_406)).access_path_ = F->up->st_field_134;
} else {
(*(P110)rt_nil_check(F->y_406)).level_ = ((rt_int)0LL);
(*(P110)rt_nil_check(F->y_406)).access_path_ = F->access_code_407;
}
ret_:

  return;
}

static void f_declare_subprograms_410(struct f_greenc_1fr *up_, P159 from_409) {
  struct f_declare_subprograms_410fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_409 = from_409;
F->e_1099 = NULL;
F->e_1099 = F->from_409;
while ((F->e_1099 != NULL)) {
if (((((*(P159)rt_nil_check(F->e_1099)).kind_ == F->up->n_proc_46) || ((*(P159)rt_nil_check(F->e_1099)).kind_ == F->up->n_func_47)) && ((*(P159)rt_nil_check(F->e_1099)).ival_ == ((rt_int)0LL)))) {
f_declare_one_412(F->up, F->e_1099);
}
F->e_1099 = (*(P159)rt_nil_check(F->e_1099)).next_;
}
L_end_1100: ;
ret_:

  return;
}

static void f_declare_one_412(struct f_greenc_1fr *up_, P159 e_411) {
  struct f_declare_one_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_411 = e_411;
F->y_1101 = NULL;
F->z_1102 = NULL;
if (f_is_generic_name_757(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_411)).name_)))) {
goto ret_;
}
f_build_subprogram_415(F->up, F->e_411, &F->y_1101);
F->z_1102 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1101)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1102 != NULL)) {
if (((((((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1102)).name_)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1101)).name_))) && (((*(P110)rt_nil_check(F->z_1102)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->z_1102)).kind_ == F->up->y_proc_93))) && ((*(P110)rt_nil_check(F->z_1102)).decl_ != NULL)) && ((*(P159)rt_nil_check((*(P110)rt_nil_check(F->z_1102)).decl_)).ival_ == ((rt_int)1LL))) && ((*(P110)rt_nil_check(F->z_1102)).depth_ == F->up->depth_113)) && f_same_signature_329(F->up, (*(P110)rt_nil_check(F->z_1102)).params_, (*(P110)rt_nil_check(F->y_1101)).params_)) && f_same_326(F->up, (*(P110)rt_nil_check(F->z_1102)).result_, (*(P110)rt_nil_check(F->y_1101)).result_))) {
(*(P110)rt_nil_check(F->z_1102)).decl_ = F->e_411;
goto ret_;
}
F->z_1102 = (*(P110)rt_nil_check(F->z_1102)).chain_;
}
L_end_1103: ;
f_define_332(F->up, F->y_1101, (*(P159)rt_nil_check(F->e_411)).line_);
ret_:

  return;
}

static void f_build_subprogram_415(struct f_greenc_1fr *up_, P159 d_413, P110 *y_414) {
  struct f_build_subprogram_415fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_413 = d_413;
F->y_414 = y_414;
F->p_1104 = NULL;
F->p_1104 = (*(P159)rt_nil_check(F->d_413)).a_;
F->pm_1105 = NULL;
F->tail_1106 = NULL;
F->rc_1107 = NULL;
F->k_1108 = F->up->y_proc_93;
if (((*(P159)rt_nil_check(F->d_413)).kind_ == F->up->n_func_47)) {
F->k_1108 = F->up->y_func_92;
}
(*F->y_414) = f_new_sym_337(F->up, F->k_1108, (*(P159)rt_nil_check(F->d_413)).name_);
while ((F->p_1104 != NULL)) {
F->pm_1105 = ({ R1016 *cell1110 = rt_alloc(sizeof(R1016)); *cell1110 = cp_R1016(({ R1016 ag1111; ag1111.name_ = (*(P159)rt_nil_check(F->p_1104)).name_; ag1111.mode_ = (*(P159)rt_nil_check(F->p_1104)).ival_; ag1111.t_ = NULL; ag1111.c_ = NULL; ag1111.cfield_ = NULL; ag1111.dflt_ = (*(P159)rt_nil_check(F->p_1104)).b_; ag1111.next_ = NULL; ag1111; })); (P1015)cell1110; });
f_resolve_367(F->up, (*(P159)rt_nil_check(F->p_1104)).a_, &(*(P1015)rt_nil_check(F->pm_1105)).t_, &(*(P1015)rt_nil_check(F->pm_1105)).c_);
f_new_name_181(F->up, rt_str_catc(f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_1104)).name_))), 95), &(*(P1015)rt_nil_check(F->pm_1105)).cfield_);
if ((((*(P159)rt_nil_check(F->d_413)).kind_ == F->up->n_func_47) && ((*(P1015)rt_nil_check(F->pm_1105)).mode_ != F->up->m_in_72))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->p_1104)).line_, rt_str("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P159)rt_nil_check(F->d_413)).flag_ == ((rt_int)1LL)) && ((*(P1015)rt_nil_check(F->pm_1105)).mode_ != F->up->m_in_72))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->p_1104)).line_, rt_str("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_1106 == NULL)) {
(*(P110)rt_nil_check((*F->y_414))).params_ = F->pm_1105;
} else {
(*(P1015)rt_nil_check(F->tail_1106)).next_ = F->pm_1105;
}
F->tail_1106 = F->pm_1105;
F->p_1104 = (*(P159)rt_nil_check(F->p_1104)).next_;
}
L_end_1109: ;
(*(P110)rt_nil_check((*F->y_414))).result_ = F->up->ty_void_150;
if (((*(P159)rt_nil_check(F->d_413)).b_ != NULL)) {
f_resolve_367(F->up, (*(P159)rt_nil_check(F->d_413)).b_, &(*(P110)rt_nil_check((*F->y_414))).result_, &F->rc_1107);
}
(*(P110)rt_nil_check((*F->y_414))).vrp_ = ((*(P159)rt_nil_check(F->d_413)).flag_ == ((rt_int)1LL));
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("f_", 2), f_c_ident_469(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->d_413)).name_)))), 95), &(*(P110)rt_nil_check((*F->y_414))).cname_);
(*(P110)rt_nil_check((*F->y_414))).decl_ = F->d_413;
(*(P110)rt_nil_check((*F->y_414))).level_ = F->up->cur_level_132;
ret_:

  return;
}

static void f_decl_elements_417(struct f_greenc_1fr *up_, P159 decls_416) {
  struct f_decl_elements_417fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_416 = decls_416;
F->e_1112 = NULL;
F->e_1112 = F->decls_416;
F->declared_1113 = 0;
while ((F->e_1112 != NULL)) {
if (((((*(P159)rt_nil_check(F->e_1112)).kind_ == F->up->n_proc_46) || ((*(P159)rt_nil_check(F->e_1112)).kind_ == F->up->n_func_47)) && (!F->declared_1113))) {
f_declare_subprograms_410(F->up, F->e_1112);
F->declared_1113 = 1;
}
f_decl_element_419(F->up, F->e_1112);
F->e_1112 = (*(P159)rt_nil_check(F->e_1112)).next_;
}
L_end_1114: ;
ret_:

  return;
}

static void f_decl_element_419(struct f_greenc_1fr *up_, P159 e_418) {
  struct f_decl_element_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_418 = e_418;
F->y_1115 = NULL;
F->t_1116 = NULL;
F->vt_1117 = NULL;
F->c_1118 = NULL;
F->acc_1119 = NULL;
F->v_1120 = NULL;
F->x_1121 = NULL;
{ rt_int sel1123 = (*(P159)rt_nil_check(F->e_418)).kind_;
if (0 || sel1123 == ((rt_int)42LL)) {
F->y_1115 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_418)).name_)));
if ((((((((F->y_1115 != NULL) && ((*(P110)rt_nil_check(F->y_1115)).kind_ == F->up->y_type_94)) && ((*(P110)rt_nil_check(F->y_1115)).depth_ == F->up->depth_113)) && ((*(P110)rt_nil_check(F->y_1115)).t_ != NULL)) && (*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1115)).t_)).priv_) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1115)).t_)).kind_ == F->up->t_void_83)) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_418)).a_)).kind_ != F->up->d_private_70))) {
f_type_definition_372(F->up, (*(P159)rt_nil_check(F->e_418)).a_, (*(P159)rt_nil_check(F->e_418)).name_, &F->t_1116, &F->c_1118);
f_complete_private_589(F->up, (*(P110)rt_nil_check(F->y_1115)).t_, F->t_1116);
(*(P110)rt_nil_check(F->y_1115)).c_ = F->c_1118;
} else {
F->y_1115 = f_new_sym_337(F->up, F->up->y_type_94, (*(P159)rt_nil_check(F->e_418)).name_);
(*(P110)rt_nil_check(F->y_1115)).decl_ = F->e_418;
f_define_332(F->up, F->y_1115, (*(P159)rt_nil_check(F->e_418)).line_);
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_418)).a_)).kind_ == F->up->d_private_70)) {
(*(P110)rt_nil_check(F->y_1115)).t_ = f_new_typ_339(F->up, F->up->t_void_83);
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1115)).t_)).name_ = (*(P159)rt_nil_check(F->e_418)).name_;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1115)).t_)).priv_ = 1;
(*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1115)).t_)).decl_ = F->up->cur_pkg_168;
} else {
f_type_definition_372(F->up, (*(P159)rt_nil_check(F->e_418)).a_, (*(P159)rt_nil_check(F->e_418)).name_, &(*(P110)rt_nil_check(F->y_1115)).t_, &(*(P110)rt_nil_check(F->y_1115)).c_);
}
}
} else if (0 || sel1123 == ((rt_int)43LL)) {
F->y_1115 = f_new_sym_337(F->up, F->up->y_type_94, (*(P159)rt_nil_check(F->e_418)).name_);
f_resolve_367(F->up, (*(P159)rt_nil_check(F->e_418)).a_, &(*(P110)rt_nil_check(F->y_1115)).t_, &(*(P110)rt_nil_check(F->y_1115)).c_);
f_define_332(F->up, F->y_1115, (*(P159)rt_nil_check(F->e_418)).line_);
} else if (0 || sel1123 == ((rt_int)40LL)) {
f_resolve_367(F->up, (*(P159)rt_nil_check(F->e_418)).a_, &F->t_1116, &F->c_1118);
F->y_1115 = f_new_sym_337(F->up, F->up->y_var_90, (*(P159)rt_nil_check(F->e_418)).name_);
if (((((*(P115)rt_nil_check(F->t_1116)).kind_ == F->up->t_string_79) && ((*(P163)rt_nil_check(F->c_1118)).slen_ == NULL)) && ((*(P159)rt_nil_check(F->e_418)).b_ != NULL))) {
F->up->vrp_ok_173 = 1;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_418)).b_, F->t_1116, &F->vt_1117, &F->v_1120);
F->up->vrp_ok_173 = 0;
f_check_type_346(F->up, F->vt_1117, F->t_1116, (*(P159)rt_nil_check(F->e_418)).line_);
f_storage_405(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_418)).name_)), F->t_1116, &F->acc_1119);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1119)), rt_str(" = rt_str_copy(", 15)), (*(P133)rt_nil_check(F->v_1120))), rt_str(");", 2)));
} else {
f_storage_405(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_418)).name_)), F->t_1116, &F->acc_1119);
f_init_storage_378(F->up, (*(P133)rt_nil_check(F->acc_1119)), F->t_1116, F->c_1118);
if (((*(P159)rt_nil_check(F->e_418)).b_ != NULL)) {
F->up->vrp_ok_173 = 1;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_418)).b_, F->t_1116, &F->vt_1117, &F->v_1120);
F->up->vrp_ok_173 = 0;
f_check_type_346(F->up, F->vt_1117, F->t_1116, (*(P159)rt_nil_check(F->e_418)).line_);
f_assign_code_386(F->up, (*(P133)rt_nil_check(F->acc_1119)), F->t_1116, (*(P133)rt_nil_check(F->v_1120)), F->c_1118, &F->x_1121);
f_emit_201(F->up, (*(P133)rt_nil_check(F->x_1121)));
}
}
(*(P110)rt_nil_check(F->y_1115)).t_ = F->t_1116;
(*(P110)rt_nil_check(F->y_1115)).c_ = F->c_1118;
f_bind_408(F->up, F->y_1115, F->acc_1119);
f_define_332(F->up, F->y_1115, (*(P159)rt_nil_check(F->e_418)).line_);
} else if (0 || sel1123 == ((rt_int)41LL)) {
f_resolve_367(F->up, (*(P159)rt_nil_check(F->e_418)).a_, &F->t_1116, &F->c_1118);
F->y_1115 = f_new_sym_337(F->up, F->up->y_const_91, (*(P159)rt_nil_check(F->e_418)).name_);
F->up->vrp_ok_173 = 1;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_418)).b_, F->t_1116, &F->vt_1117, &F->v_1120);
F->up->vrp_ok_173 = 0;
f_check_type_346(F->up, F->vt_1117, F->t_1116, (*(P159)rt_nil_check(F->e_418)).line_);
if (((*(P115)rt_nil_check(F->t_1116)).kind_ == F->up->t_int_75)) {
f_manifest_363(F->up, (*(P159)rt_nil_check(F->e_418)).b_, &(*(P110)rt_nil_check(F->y_1115)).mvalue_, &F->ok_1122);
(*(P110)rt_nil_check(F->y_1115)).hasmv_ = F->ok_1122;
}
f_storage_405(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_418)).name_)), F->t_1116, &F->acc_1119);
f_copy_code_390(F->up, F->t_1116, (*(P133)rt_nil_check(F->v_1120)), &F->x_1121);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1119)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1121))), 59));
(*(P110)rt_nil_check(F->y_1115)).t_ = F->t_1116;
(*(P110)rt_nil_check(F->y_1115)).c_ = F->c_1118;
(*(P110)rt_nil_check(F->y_1115)).ro_ = 1;
f_bind_408(F->up, F->y_1115, F->acc_1119);
f_define_332(F->up, F->y_1115, (*(P159)rt_nil_check(F->e_418)).line_);
} else if (0 || sel1123 == ((rt_int)46LL)) {
F->y_1115 = f_new_sym_337(F->up, F->up->y_exc_95, (*(P159)rt_nil_check(F->e_418)).name_);
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("ex_", 3), f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_418)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1115)).cname_);
f_put_to_199(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str("static int ", 11), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1115)).cname_))), 59));
f_put_to_199(F->up, F->up->out_excs_128, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1115)).cname_))), rt_str(" = rt_exc(", 10)), f_q_192(F->up)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_418)).name_))), f_q_192(F->up)), rt_str(");", 2)));
f_define_332(F->up, F->y_1115, (*(P159)rt_nil_check(F->e_418)).line_);
} else if (0 || sel1123 == ((rt_int)44LL) || sel1123 == ((rt_int)45LL)) {
if (f_is_generic_name_757(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_418)).name_)))) {
f_attach_generic_body_759(F->up, F->e_418);
} else if (((*(P159)rt_nil_check(F->e_418)).ival_ == ((rt_int)1LL))) {
f_build_subprogram_415(F->up, F->e_418, &F->y_1115);
f_define_332(F->up, F->y_1115, (*(P159)rt_nil_check(F->e_418)).line_);
} else {
f_subprogram_body_424(F->up, F->e_418, f_lookup_decl_321(F->up, F->e_418));
}
} else if (0 || sel1123 == ((rt_int)55LL)) {
f_use_clause_598(F->up, F->e_418);
} else {
f_other_decl_421(F->up, F->e_418);
}
}
ret_:

  return;
}

static void f_other_decl_421(struct f_greenc_1fr *up_, P159 e_420) {
  struct f_other_decl_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_420 = e_420;
if (((*(P159)rt_nil_check(F->e_420)).kind_ == F->up->n_pkgspec_50)) {
f_package_spec_591(F->up, F->e_420);
} else if (((*(P159)rt_nil_check(F->e_420)).kind_ == F->up->n_pkgbody_51)) {
f_package_body_596(F->up, F->e_420);
} else {
f_task_decl_663(F->up, F->e_420);
}
ret_:

  return;
}

static void f_subprogram_body_424(struct f_greenc_1fr *up_, P159 d_422, P110 y_423) {
  struct f_subprogram_body_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_422 = d_422;
F->y_423 = y_423;
F->saved_code_1124 = NULL;
F->saved_code_1124 = F->up->code_129;
F->saved_fields_1125 = NULL;
F->saved_fields_1125 = F->up->fields_buf_130;
F->saved_in_1126 = F->up->in_func_131;
F->saved_sym_1127 = NULL;
F->saved_sym_1127 = F->up->func_sym_135;
F->saved_exits_1128 = NULL;
F->saved_exits_1128 = F->up->exits_138;
F->saved_frames_1129 = F->up->frames_139;
F->saved_handlers_1130 = NULL;
F->saved_handlers_1130 = F->up->handlers_142;
F->saved_cleanups_1131 = NULL;
F->saved_cleanups_1131 = F->up->cleanups_143;
F->saved_pure_1132 = NULL;
F->saved_pure_1132 = F->up->pure_sym_171;
F->aw_1133 = NULL;
F->saved_pdepth_1134 = F->up->pure_depth_172;
F->args_1135 = NULL;
F->head_1136 = NULL;
F->frame_1137 = NULL;
F->parent_1138 = NULL;
F->ct_1139 = NULL;
F->x_1140 = NULL;
F->pm_1141 = NULL;
F->pm_1141 = (*(P110)rt_nil_check(F->y_423)).params_;
F->p_1142 = NULL;
F->frame_1137 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_423)).cname_)), rt_str("fr", 2)));
if (F->up->in_func_131) {
F->parent_1138 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).cname_)), rt_str("fr", 2)));
}
F->up->code_129 = f_new_buffer_196(F->up);
F->up->fields_buf_130 = f_new_buffer_196(F->up);
F->up->in_func_131 = 1;
F->up->func_sym_135 = F->y_423;
F->up->exits_138 = NULL;
F->up->frames_139 = ((rt_int)0LL);
F->up->handlers_142 = NULL;
F->up->cleanups_143 = NULL;
F->up->cur_level_132 = rt_add(F->up->cur_level_132, ((rt_int)1LL));
F->args_1135 = f_mk_178(F->up, rt_str("", 0));
f_open_scope_333(F->up);
if ((((*(P110)rt_nil_check(F->y_423)).kind_ == F->up->y_func_92) && (!(*(P110)rt_nil_check(F->y_423)).vrp_))) {
F->up->pure_sym_171 = F->y_423;
F->up->pure_depth_172 = F->up->depth_113;
}
if ((F->parent_1138 != NULL)) {
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P133)rt_nil_check(F->parent_1138))), rt_str(" *up;", 5)));
F->args_1135 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->parent_1138))), rt_str(" *up_", 5)));
f_emit_201(F->up, rt_str("F->up = up_;", 12));
}
while ((F->pm_1141 != NULL)) {
f_ctype_351(F->up, (*(P1015)rt_nil_check(F->pm_1141)).t_, &F->ct_1139);
if ((((*(P133)rt_nil_check(F->args_1135))).len > ((rt_int)0LL))) {
F->args_1135 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1135)), rt_str(", ", 2)));
}
if (((*(P1015)rt_nil_check(F->pm_1141)).mode_ == F->up->m_in_72)) {
F->p_1142 = f_new_sym_337(F->up, F->up->y_const_91, (*(P1015)rt_nil_check(F->pm_1141)).name_);
(*(P110)rt_nil_check(F->p_1142)).ro_ = 1;
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1139))), 32), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_))), 59));
F->args_1135 = f_mk_178(F->up, rt_str_cat(rt_str_catc(rt_str_cat((*(P133)rt_nil_check(F->args_1135)), (*(P133)rt_nil_check(F->ct_1139))), 32), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_))));
f_copy_code_390(F->up, (*(P1015)rt_nil_check(F->pm_1141)).t_, (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_)), &F->x_1140);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1140))), 59));
} else {
F->p_1142 = f_new_sym_337(F->up, F->up->y_var_90, (*(P1015)rt_nil_check(F->pm_1141)).name_);
(*(P110)rt_nil_check(F->p_1142)).byref_ = 1;
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1139))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_))), 59));
F->args_1135 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->args_1135)), (*(P133)rt_nil_check(F->ct_1139))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_))));
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1141)).cfield_))), 59));
}
(*(P110)rt_nil_check(F->p_1142)).access_path_ = (*(P1015)rt_nil_check(F->pm_1141)).cfield_;
(*(P110)rt_nil_check(F->p_1142)).t_ = (*(P1015)rt_nil_check(F->pm_1141)).t_;
(*(P110)rt_nil_check(F->p_1142)).c_ = (*(P1015)rt_nil_check(F->pm_1141)).c_;
(*(P110)rt_nil_check(F->p_1142)).level_ = F->up->cur_level_132;
f_define_332(F->up, F->p_1142, (*(P159)rt_nil_check(F->d_422)).line_);
F->pm_1141 = (*(P1015)rt_nil_check(F->pm_1141)).next_;
}
L_end_1143: ;
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_423)).result_)).kind_ != F->up->t_void_83)) {
f_ctype_351(F->up, (*(P110)rt_nil_check(F->y_423)).result_, &F->ct_1139);
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_cat(rt_str_ccat(32, (*(P133)rt_nil_check(F->ct_1139))), rt_str(" result_;", 9)));
}
f_decl_elements_417(F->up, (*(P159)rt_nil_check(F->d_422)).c_);
f_guarded_435(F->up, (*(P159)rt_nil_check(F->d_422)).d_, (*(P159)rt_nil_check(F->d_422)).e_, (*(P159)rt_nil_check(F->d_422)).line_);
f_task_awaits_682(F->up, (*(P159)rt_nil_check(F->d_422)).c_, &F->aw_1133);
f_close_scope_334(F->up);
F->up->cur_level_132 = rt_sub(F->up->cur_level_132, ((rt_int)1LL));
if ((((*(P133)rt_nil_check(F->args_1135))).len == ((rt_int)0LL))) {
F->args_1135 = f_mk_178(F->up, rt_str("void", 4));
}
f_ctype_351(F->up, (*(P110)rt_nil_check(F->y_423)).result_, &F->ct_1139);
F->head_1136 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P133)rt_nil_check(F->ct_1139))), 32), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_423)).cname_))), 40), (*(P133)rt_nil_check(F->args_1135))), 41));
f_put_to_199(F->up, F->up->out_protos_124, rt_str_catc((*(P133)rt_nil_check(F->head_1136)), 59));
f_put_to_199(F->up, F->up->out_frames_122, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check(F->frame_1137))), rt_str(" { int dummy;", 13)));
f_splice_206(F->up, F->up->out_frames_122, F->up->fields_buf_130);
f_put_to_199(F->up, F->up->out_frames_122, rt_str("};", 2));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat((*(P133)rt_nil_check(F->head_1136)), rt_str(" {", 2)));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P133)rt_nil_check(F->frame_1137))), rt_str(" *F = rt_alloc(sizeof *F);", 26)));
f_splice_206(F->up, F->up->out_funcs_126, F->up->code_129);
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_423)).result_)).kind_ != F->up->t_void_83)) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("  rt_raise(RT_X_INIT);", 22));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_199(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1133)));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("  return F->result_;", 20));
} else {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("ret_:", 5));
f_put_to_199(F->up, F->up->out_funcs_126, (*(P133)rt_nil_check(F->aw_1133)));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("  return;", 9));
}
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("}", 1));
f_put_to_199(F->up, F->up->out_funcs_126, rt_str("", 0));
F->up->code_129 = F->saved_code_1124;
F->up->fields_buf_130 = F->saved_fields_1125;
F->up->in_func_131 = F->saved_in_1126;
F->up->func_sym_135 = F->saved_sym_1127;
F->up->exits_138 = F->saved_exits_1128;
F->up->frames_139 = F->saved_frames_1129;
F->up->handlers_142 = F->saved_handlers_1130;
F->up->cleanups_143 = F->saved_cleanups_1131;
F->up->pure_sym_171 = F->saved_pure_1132;
F->up->pure_depth_172 = F->saved_pdepth_1134;
ret_:

  return;
}

static void f_gen_statements_426(struct f_greenc_1fr *up_, P159 stmts_425) {
  struct f_gen_statements_426fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_425 = stmts_425;
F->s_1144 = NULL;
F->s_1144 = F->stmts_425;
while ((F->s_1144 != NULL)) {
f_gen_statement_441(F->up, F->s_1144);
F->s_1144 = (*(P159)rt_nil_check(F->s_1144)).next_;
}
L_end_1145: ;
ret_:

  return;
}

static void f_pop_frames_428(struct f_greenc_1fr *up_, rt_int upto_427) {
  struct f_pop_frames_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_427 = upto_427;
F->i_1146 = F->up->frames_139;
F->c_1147 = NULL;
F->c_1147 = F->up->cleanups_143;
while ((F->i_1146 > F->upto_427)) {
f_emit_201(F->up, (*(P133)rt_nil_check((*(P140)rt_nil_check(F->c_1147)).s_)));
F->c_1147 = (*(P140)rt_nil_check(F->c_1147)).next_;
F->i_1146 = rt_sub(F->i_1146, ((rt_int)1LL));
}
L_end_1148: ;
ret_:

  return;
}

static void f_push_cleanup_430(struct f_greenc_1fr *up_, rstr s_429) {
  struct f_push_cleanup_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_429 = rt_str_copy(s_429);
F->up->cleanups_143 = ({ R141 *cell1149 = rt_alloc(sizeof(R141)); *cell1149 = cp_R141(({ R141 ag1150; ag1150.s_ = NULL; ag1150.next_ = F->up->cleanups_143; ag1150; })); (P140)cell1149; });
(*(P140)rt_nil_check(F->up->cleanups_143)).s_ = f_mk_178(F->up, F->s_429);
F->up->frames_139 = rt_add(F->up->frames_139, ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_431(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_143 = (*(P140)rt_nil_check(F->up->cleanups_143)).next_;
F->up->frames_139 = rt_sub(F->up->frames_139, ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_435(struct f_greenc_1fr *up_, P159 stmts_432, P159 hs_433, rt_int line_434) {
  struct f_guarded_435fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_432 = stmts_432;
F->hs_433 = hs_433;
F->line_434 = line_434;
F->f_1151 = NULL;
F->x_1152 = NULL;
F->h_1153 = NULL;
F->n_1154 = NULL;
F->first_1155 = 1;
F->has_others_1156 = 0;
F->conds_1157 = NULL;
if ((F->hs_433 == NULL)) {
f_gen_statements_426(F->up, F->stmts_432);
goto ret_;
}
f_new_name_181(F->up, rt_str("xf", 2), &F->f_1151);
f_new_name_181(F->up, rt_str("x", 1), &F->x_1152);
f_push_cleanup_430(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1151))), rt_str(");", 2)));
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("{ rt_frame ", 11), (*(P133)rt_nil_check(F->f_1151))), 59));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->f_1151))), rt_str(")) {", 4)));
f_gen_statements_426(F->up, F->stmts_432);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1151))), rt_str(");", 2)));
f_emit_201(F->up, rt_str("} else {", 8));
f_pop_cleanup_431(F->up);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->f_1151))), rt_str(");", 2)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->x_1152))), rt_str(" = rt_xcur;", 11)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (rt_g_aborted()) rt_raise(", 29), (*(P133)rt_nil_check(F->x_1152))), rt_str(");", 2)));
F->up->handlers_142 = ({ R141 *cell1158 = rt_alloc(sizeof(R141)); *cell1158 = cp_R141(({ R141 ag1159; ag1159.s_ = F->x_1152; ag1159.next_ = F->up->handlers_142; ag1159; })); (P140)cell1158; });
F->h_1153 = F->hs_433;
while ((F->h_1153 != NULL)) {
F->n_1154 = (*(P159)rt_nil_check(F->h_1153)).a_;
F->conds_1157 = f_mk_178(F->up, rt_str("0", 1));
while ((F->n_1154 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1154)).name_)), rt_str("OTHERS", 6))) {
F->has_others_1156 = 1;
F->conds_1157 = f_mk_178(F->up, rt_str("1", 1));
} else {
F->up->prefix_hint_169 = (*(P159)rt_nil_check(F->n_1154)).tag_;
f_exc_id_439(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1154)).name_)), (*(P159)rt_nil_check(F->h_1153)).line_, &F->f_1151);
F->conds_1157 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1157)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->x_1152))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->f_1151))));
}
F->n_1154 = (*(P159)rt_nil_check(F->n_1154)).next_;
}
L_end_1161: ;
if (F->first_1155) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1157))), rt_str(") {", 3)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1157))), rt_str(") {", 3)));
}
F->first_1155 = 0;
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->h_1153)).b_);
F->h_1153 = (*(P159)rt_nil_check(F->h_1153)).next_;
}
L_end_1160: ;
if ((!F->has_others_1156)) {
f_emit_201(F->up, rt_str("} else {", 8));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1152))), rt_str(");", 2)));
}
f_emit_201(F->up, rt_str("}", 1));
F->up->handlers_142 = (*(P140)rt_nil_check(F->up->handlers_142)).next_;
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_exc_id_439(struct f_greenc_1fr *up_, rstr name_436, rt_int line_437, P133 *r_438) {
  struct f_exc_id_439fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_436 = rt_str_copy(name_436);
F->line_437 = line_437;
F->r_438 = r_438;
F->y_1162 = NULL;
F->y_1162 = f_lookup_319(F->up, F->name_436);
if ((F->up->prefix_hint_169 != NULL)) {
F->y_1162 = f_member_of_581(F->up, (*(P133)rt_nil_check(F->up->prefix_hint_169)), F->name_436, F->line_437);
F->up->prefix_hint_169 = NULL;
}
if (((F->y_1162 == NULL) || ((*(P110)rt_nil_check(F->y_1162)).kind_ != F->up->y_exc_95))) {
f_fail_195(F->up, F->line_437, rt_str_cat(F->name_436, rt_str(" is not an exception", 20)));
}
(*F->r_438) = (*(P110)rt_nil_check(F->y_1162)).cname_;
ret_:

  return;
}

static void f_gen_statement_441(struct f_greenc_1fr *up_, P159 s_440) {
  struct f_gen_statement_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_440 = s_440;
F->t_1163 = NULL;
F->vt_1164 = NULL;
F->c_1165 = NULL;
F->lv_1166 = NULL;
F->v_1167 = NULL;
F->x_1168 = NULL;
{ rt_int sel1170 = (*(P159)rt_nil_check(F->s_440)).kind_;
if (0 || sel1170 == ((rt_int)20LL)) {
if (((((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_440)).a_)).kind_ == F->up->n_apply_16) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_440)).a_)).b_ != NULL)) && ((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_440)).a_)).b_)).kind_ == F->up->n_range_22))) {
f_slice_assign_443(F->up, F->s_440);
goto ret_;
}
F->up->in_lv_path_174 = 1;
F->up->last_deref_175 = 0;
f_lvalue_481(F->up, (*(P159)rt_nil_check(F->s_440)).a_, &F->lv_1166, &F->t_1163, &F->c_1165, &F->ro_1169);
F->up->in_lv_path_174 = 0;
if (F->ro_1169) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_440)).line_, rt_str("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_731(F->up, (*(P159)rt_nil_check(F->s_440)).a_, (*(P159)rt_nil_check(F->s_440)).line_);
F->up->vrp_ok_173 = 1;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_440)).b_, F->t_1163, &F->vt_1164, &F->v_1167);
F->up->vrp_ok_173 = 0;
f_check_type_346(F->up, F->vt_1164, F->t_1163, (*(P159)rt_nil_check(F->s_440)).line_);
f_assign_code_386(F->up, (*(P133)rt_nil_check(F->lv_1166)), F->t_1163, (*(P133)rt_nil_check(F->v_1167)), F->c_1165, &F->x_1168);
f_emit_201(F->up, (*(P133)rt_nil_check(F->x_1168)));
} else if (0 || sel1170 == ((rt_int)21LL)) {
F->up->vrp_ok_173 = 1;
f_gen_call_445(F->up, F->s_440);
F->up->vrp_ok_173 = 0;
} else if (0 || sel1170 == ((rt_int)22LL)) {
f_gen_if_447(F->up, F->s_440);
} else if (0 || sel1170 == ((rt_int)23LL)) {
f_gen_case_449(F->up, F->s_440);
} else if (0 || sel1170 == ((rt_int)24LL)) {
f_gen_loop_455(F->up, F->s_440);
} else if (0 || sel1170 == ((rt_int)25LL)) {
f_gen_block_457(F->up, F->s_440);
} else if (0 || sel1170 == ((rt_int)26LL)) {
f_gen_exit_459(F->up, F->s_440);
} else if (0 || sel1170 == ((rt_int)27LL)) {
f_gen_return_461(F->up, F->s_440);
} else if (0 || sel1170 == ((rt_int)28LL)) {
if (((((*(P159)rt_nil_check(F->s_440)).tag_ != NULL) && f_is_task_name_636(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_440)).tag_)))) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_440)).name_)), rt_str("FAILURE", 7)))) {
f_task_failure_684(F->up, F->s_440);
} else {
F->up->prefix_hint_169 = (*(P159)rt_nil_check(F->s_440)).tag_;
f_exc_id_439(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_440)).name_)), (*(P159)rt_nil_check(F->s_440)).line_, &F->x_1168);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check(F->x_1168))), rt_str(");", 2)));
}
} else if (0 || sel1170 == ((rt_int)29LL)) {
if ((F->up->handlers_142 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_440)).line_, rt_str("raise; outside an exception handler", 35));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P133)rt_nil_check((*(P140)rt_nil_check(F->up->handlers_142)).s_))), rt_str(");", 2)));
} else if (0 || sel1170 == ((rt_int)30LL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_440)).a_, F->up->ty_bool_146, &F->vt_1164, &F->v_1167);
f_check_type_346(F->up, F->vt_1164, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_440)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (!(", 6), (*(P133)rt_nil_check(F->v_1167))), rt_str(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel1170 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_726(F->up, F->s_440);
}
}
ret_:

  return;
}

static void f_slice_assign_443(struct f_greenc_1fr *up_, P159 s_442) {
  struct f_slice_assign_443fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_442 = s_442;
F->lv_1171 = NULL;
F->lo_1172 = NULL;
F->hi_1173 = NULL;
F->v_1174 = NULL;
F->t_1175 = NULL;
F->vt_1176 = NULL;
F->c_1177 = NULL;
F->up->in_lv_path_174 = 1;
F->up->last_deref_175 = 0;
f_lvalue_481(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_442)).a_)).a_, &F->lv_1171, &F->t_1175, &F->c_1177, &F->ro_1178);
F->up->in_lv_path_174 = 0;
if ((F->ro_1178 || ((*(P115)rt_nil_check(F->t_1175)).kind_ != F->up->t_string_79))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_442)).line_, rt_str("assignment to a slice needs a STRING variable", 45));
}
f_check_pure_target_731(F->up, (*(P159)rt_nil_check(F->s_442)).a_, (*(P159)rt_nil_check(F->s_442)).line_);
f_gexpr_509(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_442)).a_)).b_)).a_, F->up->ty_int_145, &F->vt_1176, &F->lo_1172);
f_gexpr_509(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->s_442)).a_)).b_)).b_, F->up->ty_int_145, &F->vt_1176, &F->hi_1173);
F->up->vrp_ok_173 = 1;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_442)).b_, F->up->ty_string_149, &F->vt_1176, &F->v_1174);
F->up->vrp_ok_173 = 0;
f_check_type_346(F->up, F->vt_1176, F->up->ty_string_149, (*(P159)rt_nil_check(F->s_442)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P133)rt_nil_check(F->lv_1171))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1172))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1173))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->v_1174))), rt_str(");", 2)));
ret_:

  return;
}

static void f_gen_call_445(struct f_greenc_1fr *up_, P159 s_444) {
  struct f_gen_call_445fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_444 = s_444;
F->c_1179 = NULL;
F->c_1179 = (*(P159)rt_nil_check(F->s_444)).a_;
F->t_1180 = NULL;
F->v_1181 = NULL;
if ((((*(P159)rt_nil_check(F->c_1179)).kind_ == F->up->n_name_13) || ((*(P159)rt_nil_check(F->c_1179)).kind_ == F->up->n_select_17))) {
F->c_1179 = f_nn_220(F->up, F->up->n_apply_16, (*(P159)rt_nil_check(F->s_444)).line_);
(*(P159)rt_nil_check(F->c_1179)).a_ = (*(P159)rt_nil_check(F->s_444)).a_;
}
if (((*(P159)rt_nil_check(F->c_1179)).kind_ != F->up->n_apply_16)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_444)).line_, rt_str("not a procedure call", 20));
}
f_gcall_563(F->up, F->c_1179, 1, &F->t_1180, &F->v_1181);
f_emit_201(F->up, rt_str_catc((*(P133)rt_nil_check(F->v_1181)), 59));
ret_:

  return;
}

static void f_gen_if_447(struct f_greenc_1fr *up_, P159 s_446) {
  struct f_gen_if_447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_446 = s_446;
F->a_1182 = NULL;
F->a_1182 = (*(P159)rt_nil_check(F->s_446)).a_;
F->first_1183 = 1;
F->t_1184 = NULL;
F->v_1185 = NULL;
while ((F->a_1182 != NULL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->a_1182)).a_, F->up->ty_bool_146, &F->t_1184, &F->v_1185);
f_check_type_346(F->up, F->t_1184, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_446)).line_);
if (F->first_1183) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1185))), rt_str(") {", 3)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->v_1185))), rt_str(") {", 3)));
}
F->first_1183 = 0;
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->a_1182)).b_);
F->a_1182 = (*(P159)rt_nil_check(F->a_1182)).next_;
}
L_end_1186: ;
if (((*(P159)rt_nil_check(F->s_446)).flag_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str("} else {", 8));
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->s_446)).b_);
}
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_gen_case_449(struct f_greenc_1fr *up_, P159 s_448) {
  struct f_gen_case_449fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_448 = s_448;
F->st_1187 = NULL;
F->vt_1188 = NULL;
F->first_1189 = 1;
F->a_1190 = NULL;
F->a_1190 = (*(P159)rt_nil_check(F->s_448)).b_;
F->lab_1191 = NULL;
F->sel_1192 = NULL;
F->tmp_1193 = NULL;
F->ct_1194 = NULL;
F->conds_1195 = NULL;
F->v_1196 = NULL;
F->lo_1197 = NULL;
F->hi_1198 = NULL;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_448)).a_, NULL, &F->st_1187, &F->sel_1192);
f_new_name_181(F->up, rt_str("sel", 3), &F->tmp_1193);
f_ctype_351(F->up, F->st_1187, &F->ct_1194);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ ", 2), (*(P133)rt_nil_check(F->ct_1194))), 32), (*(P133)rt_nil_check(F->tmp_1193))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->sel_1192))), 59));
while ((F->a_1190 != NULL)) {
F->lab_1191 = (*(P159)rt_nil_check(F->a_1190)).a_;
F->conds_1195 = f_mk_178(F->up, rt_str("0", 1));
while ((F->lab_1191 != NULL)) {
if (((*(P159)rt_nil_check(F->lab_1191)).b_ == NULL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->lab_1191)).a_, F->st_1187, &F->vt_1188, &F->v_1196);
f_check_type_346(F->up, F->vt_1188, F->st_1187, (*(P159)rt_nil_check(F->s_448)).line_);
F->conds_1195 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1195)), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->tmp_1193))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->v_1196))));
} else {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->lab_1191)).a_, F->st_1187, &F->vt_1188, &F->lo_1197);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->lab_1191)).b_, F->st_1187, &F->vt_1188, &F->hi_1198);
F->conds_1195 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->conds_1195)), rt_str(" || (", 5)), (*(P133)rt_nil_check(F->tmp_1193))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1197))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->tmp_1193))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hi_1198))), 41));
}
F->lab_1191 = (*(P159)rt_nil_check(F->lab_1191)).next_;
}
L_end_1200: ;
if (F->first_1189) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->conds_1195))), rt_str(") {", 3)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->conds_1195))), rt_str(") {", 3)));
}
F->first_1189 = 0;
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->a_1190)).b_);
F->a_1190 = (*(P159)rt_nil_check(F->a_1190)).next_;
}
L_end_1199: ;
if (F->first_1189) {
f_emit_201(F->up, rt_str("{", 1));
} else {
f_emit_201(F->up, rt_str("} else {", 8));
}
if (((*(P159)rt_nil_check(F->s_448)).flag_ == ((rt_int)1LL))) {
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->s_448)).c_);
} else {
f_emit_201(F->up, rt_str("rt_raise(RT_X_CASE);", 20));
}
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_push_exit_453(struct f_greenc_1fr *up_, P133 match_450, int is_loop_451, P133 *label_452) {
  struct f_push_exit_453fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_450 = match_450;
F->is_loop_451 = is_loop_451;
F->label_452 = label_452;
f_new_name_181(F->up, rt_str("L_end_", 6), &(*F->label_452));
F->up->exits_138 = ({ R137 *cell1201 = rt_alloc(sizeof(R137)); *cell1201 = cp_R137(({ R137 ag1202; ag1202.match_ = F->match_450; ag1202.label_ = (*F->label_452); ag1202.depth_ = F->up->frames_139; ag1202.is_loop_ = F->is_loop_451; ag1202.next_ = F->up->exits_138; ag1202; })); (P136)cell1201; });
ret_:

  return;
}

static void f_gen_loop_455(struct f_greenc_1fr *up_, P159 s_454) {
  struct f_gen_loop_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_454 = s_454;
F->t_1203 = NULL;
F->vt_1204 = NULL;
F->c_1205 = NULL;
F->label_1206 = NULL;
F->cond_1207 = NULL;
F->acc_1208 = NULL;
F->lov_1209 = NULL;
F->hiv_1210 = NULL;
F->it_1211 = NULL;
F->y_1212 = NULL;
F->r_1213 = NULL;
f_push_exit_453(F->up, (*(P159)rt_nil_check(F->s_454)).tag_, 1, &F->label_1206);
if (((*(P159)rt_nil_check(F->s_454)).flag_ == ((rt_int)0LL))) {
f_emit_201(F->up, rt_str("for (;;) {", 10));
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->s_454)).b_);
f_emit_201(F->up, rt_str("}", 1));
} else if (((*(P159)rt_nil_check(F->s_454)).flag_ == ((rt_int)1LL))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_454)).a_, F->up->ty_bool_146, &F->vt_1204, &F->cond_1207);
f_check_type_346(F->up, F->vt_1204, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_454)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("while (", 7), (*(P133)rt_nil_check(F->cond_1207))), rt_str(") {", 3)));
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->s_454)).b_);
f_emit_201(F->up, rt_str("}", 1));
} else {
F->r_1213 = (*(P159)rt_nil_check(F->s_454)).a_;
F->c_1205 = f_new_cons_340(F->up);
if (((*(P159)rt_nil_check(F->r_1213)).kind_ == F->up->n_range_22)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1213)).a_, NULL, &F->t_1203, &(*(P163)rt_nil_check(F->c_1205)).lo_);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1213)).b_, F->t_1203, &F->vt_1204, &(*(P163)rt_nil_check(F->c_1205)).hi_);
f_check_type_346(F->up, F->vt_1204, F->t_1203, (*(P159)rt_nil_check(F->s_454)).line_);
} else {
f_resolve_367(F->up, F->r_1213, &F->t_1203, &F->c_1205);
if (((*(P163)rt_nil_check(F->c_1205)).lo_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_454)).line_, rt_str("a FOR loop needs a discrete range", 33));
}
}
f_storage_405(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_454)).name_)), F->t_1203, &F->acc_1208);
f_new_name_181(F->up, rt_str("lo", 2), &F->lov_1209);
f_new_name_181(F->up, rt_str("hi", 2), &F->hiv_1210);
f_new_name_181(F->up, rt_str("it", 2), &F->it_1211);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), (*(P133)rt_nil_check(F->lov_1209))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1205)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hiv_1210))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1205)).hi_))), 59));
if (((*(P159)rt_nil_check(F->s_454)).ival_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1211))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->hiv_1210))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1211))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lov_1209))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1211))), rt_str("--) {", 5)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P133)rt_nil_check(F->it_1211))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->lov_1209))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1211))), rt_str(" <= ", 4)), (*(P133)rt_nil_check(F->hiv_1210))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->it_1211))), rt_str("++) {", 5)));
}
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1208)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->it_1211))), 59));
f_open_scope_333(F->up);
F->y_1212 = f_new_sym_337(F->up, F->up->y_const_91, (*(P159)rt_nil_check(F->s_454)).name_);
(*(P110)rt_nil_check(F->y_1212)).t_ = F->t_1203;
(*(P110)rt_nil_check(F->y_1212)).ro_ = 1;
f_bind_408(F->up, F->y_1212, F->acc_1208);
f_define_332(F->up, F->y_1212, (*(P159)rt_nil_check(F->s_454)).line_);
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->s_454)).b_);
f_close_scope_334(F->up);
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
}
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_201(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1206)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_457(struct f_greenc_1fr *up_, P159 s_456) {
  struct f_gen_block_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_456 = s_456;
F->label_1214 = NULL;
F->aw_1215 = NULL;
f_push_exit_453(F->up, (*(P159)rt_nil_check(F->s_456)).tag_, 0, &F->label_1214);
f_emit_201(F->up, rt_str("{", 1));
f_open_scope_333(F->up);
f_decl_elements_417(F->up, (*(P159)rt_nil_check(F->s_456)).a_);
f_guarded_435(F->up, (*(P159)rt_nil_check(F->s_456)).b_, (*(P159)rt_nil_check(F->s_456)).c_, (*(P159)rt_nil_check(F->s_456)).line_);
f_task_awaits_682(F->up, (*(P159)rt_nil_check(F->s_456)).a_, &F->aw_1215);
f_emit_201(F->up, (*(P133)rt_nil_check(F->aw_1215)));
f_close_scope_334(F->up);
f_emit_201(F->up, rt_str("}", 1));
F->up->exits_138 = (*(P136)rt_nil_check(F->up->exits_138)).next_;
f_emit_201(F->up, rt_str_cat((*(P133)rt_nil_check(F->label_1214)), rt_str(": ;", 3)));
ret_:

  return;
}

static void f_gen_exit_459(struct f_greenc_1fr *up_, P159 s_458) {
  struct f_gen_exit_459fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_458 = s_458;
F->x_1216 = NULL;
F->x_1216 = F->up->exits_138;
F->t_1217 = NULL;
F->v_1218 = NULL;
while ((F->x_1216 != NULL)) {
if (((((*(P159)rt_nil_check(F->s_458)).name_ == NULL) && (*(P136)rt_nil_check(F->x_1216)).is_loop_) || ((((*(P159)rt_nil_check(F->s_458)).name_ != NULL) && ((*(P136)rt_nil_check(F->x_1216)).match_ != NULL)) && rt_str_eq((*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1216)).match_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_458)).name_)))))) {
if (((*(P159)rt_nil_check(F->s_458)).a_ != NULL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_458)).a_, F->up->ty_bool_146, &F->t_1217, &F->v_1218);
f_check_type_346(F->up, F->t_1217, F->up->ty_bool_146, (*(P159)rt_nil_check(F->s_458)).line_);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->v_1218))), rt_str(") {", 3)));
}
f_pop_frames_428(F->up, (*(P136)rt_nil_check(F->x_1216)).depth_);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("goto ", 5), (*(P133)rt_nil_check((*(P136)rt_nil_check(F->x_1216)).label_))), 59));
if (((*(P159)rt_nil_check(F->s_458)).a_ != NULL)) {
f_emit_201(F->up, rt_str("}", 1));
}
goto ret_;
}
F->x_1216 = (*(P136)rt_nil_check(F->x_1216)).next_;
}
L_end_1219: ;
if (((*(P159)rt_nil_check(F->s_458)).name_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_458)).line_, rt_str("exit outside a loop", 19));
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_458)).line_, rt_str_cat(rt_str_cat(rt_str("exit ", 5), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_458)).name_))), rt_str(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_461(struct f_greenc_1fr *up_, P159 s_460) {
  struct f_gen_return_461fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_460 = s_460;
F->vt_1220 = NULL;
F->v_1221 = NULL;
if ((!F->up->in_func_131)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_460)).line_, rt_str("return outside a subprogram", 27));
}
if ((F->up->accept_depth_157 > ((rt_int)0LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_460)).line_, rt_str("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->up->func_sym_135)).result_)).kind_ == F->up->t_void_83)) {
if (((*(P159)rt_nil_check(F->s_460)).a_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_460)).line_, rt_str("a procedure returns no value", 28));
}
f_pop_frames_428(F->up, ((rt_int)0LL));
f_emit_201(F->up, rt_str("goto ret_;", 10));
goto ret_;
}
if (((*(P159)rt_nil_check(F->s_460)).a_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_460)).line_, rt_str("return needs a value here", 25));
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_460)).a_, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, &F->vt_1220, &F->v_1221);
f_check_type_346(F->up, F->vt_1220, (*(P110)rt_nil_check(F->up->func_sym_135)).result_, (*(P159)rt_nil_check(F->s_460)).line_);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("F->result_ = ", 13), (*(P133)rt_nil_check(F->v_1221))), 59));
f_pop_frames_428(F->up, ((rt_int)0LL));
f_emit_201(F->up, rt_str("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_464(struct f_greenc_1fr *up_, P110 y_462, P133 *r_463) {
  struct f_access_of_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_462 = y_462;
F->r_463 = r_463;
F->p_1222 = NULL;
if (((*(P110)rt_nil_check(F->y_462)).level_ <= ((rt_int)0LL))) {
(*F->r_463) = (*(P110)rt_nil_check(F->y_462)).access_path_;
goto ret_;
}
F->p_1222 = f_mk_178(F->up, rt_str("F", 1));
{ rt_int lo1225 = ((rt_int)1LL), hi1226 = rt_sub(F->up->cur_level_132, (*(P110)rt_nil_check(F->y_462)).level_);
for (rt_int it1227 = lo1225; it1227 <= hi1226; it1227++) {
F->i_1224 = it1227;
F->p_1222 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->p_1222)), rt_str("->up", 4)));
}
}
L_end_1223: ;
if ((*(P110)rt_nil_check(F->y_462)).byref_) {
(*F->r_463) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->p_1222))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_462)).access_path_))), 41));
} else {
(*F->r_463) = f_mk_178(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1222)), rt_str("->", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_462)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_467(struct f_greenc_1fr *up_, rt_int l_465, P133 *r_466) {
  struct f_link_to_467fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_465 = l_465;
F->r_466 = r_466;
(*F->r_466) = f_mk_178(F->up, rt_str("F", 1));
{ rt_int lo1230 = ((rt_int)1LL), hi1231 = rt_sub(F->up->cur_level_132, F->l_465);
for (rt_int it1232 = lo1230; it1232 <= hi1231; it1232++) {
F->i_1229 = it1232;
(*F->r_466) = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_466))), rt_str("->up", 4)));
}
}
L_end_1228: ;
ret_:

  return;
}

static rstr f_c_ident_469(struct f_greenc_1fr *up_, rstr s_468) {
  struct f_c_ident_469fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_468 = rt_str_copy(s_468);
if (rt_str_eq(F->s_468, rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("MOD", 3))) {
F->result_ = rt_str("op_mod", 6);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("AND", 3))) {
F->result_ = rt_str("op_and", 6);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("OR", 2))) {
F->result_ = rt_str("op_or", 5);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("XOR", 3))) {
F->result_ = rt_str("op_xor", 6);
goto ret_;
} else if (rt_str_eq(F->s_468, rt_str("NOT", 3))) {
F->result_ = rt_str("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_189(F->up, F->s_468);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_473(struct f_greenc_1fr *up_, rstr base_470, P115 t_471, P133 *r_472) {
  struct f_deref_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_470 = rt_str_copy(base_470);
F->t_471 = t_471;
F->r_472 = r_472;
F->ct_1233 = NULL;
if (F->up->in_lv_path_174) {
F->up->last_deref_175 = 1;
}
f_ctype_351(F->up, F->t_471, &F->ct_1233);
(*F->r_472) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), (*(P133)rt_nil_check(F->ct_1233))), rt_str(")rt_nil_check(", 14)), F->base_470), rt_str("))", 2)));
ret_:

  return;
}

static int f_is_object_475(struct f_greenc_1fr *up_, P159 e_474) {
  struct f_is_object_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_474 = e_474;
F->y_1234 = NULL;
if (((*(P159)rt_nil_check(F->e_474)).kind_ == F->up->n_name_13)) {
F->y_1234 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_474)).name_)));
F->result_ = ((F->y_1234 != NULL) && (((*(P110)rt_nil_check(F->y_1234)).kind_ == F->up->y_var_90) || ((*(P110)rt_nil_check(F->y_1234)).kind_ == F->up->y_const_91)));
goto ret_;
} else if (((*(P159)rt_nil_check(F->e_474)).kind_ == F->up->n_select_17)) {
F->result_ = f_is_object_475(F->up, (*(P159)rt_nil_check(F->e_474)).a_);
goto ret_;
} else if (((*(P159)rt_nil_check(F->e_474)).kind_ == F->up->n_apply_16)) {
if ((((*(P159)rt_nil_check(F->e_474)).b_ != NULL) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_474)).b_)).kind_ == F->up->n_range_22))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_475(F->up, (*(P159)rt_nil_check(F->e_474)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_481(struct f_greenc_1fr *up_, P159 e_476, P133 *code_out_477, P115 *t_478, P163 *c_479, int *ro_480) {
  struct f_lvalue_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_476 = e_476;
F->code_out_477 = code_out_477;
F->t_478 = t_478;
F->c_479 = c_479;
F->ro_480 = ro_480;
F->y_1235 = NULL;
F->base_1236 = NULL;
F->bt_1237 = NULL;
F->bc_1238 = NULL;
if (((*(P159)rt_nil_check(F->e_476)).kind_ == F->up->n_name_13)) {
F->y_1235 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_476)).name_)));
if ((F->y_1235 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_476)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_476)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1235)).kind_ != F->up->y_var_90) && ((*(P110)rt_nil_check(F->y_1235)).kind_ != F->up->y_const_91))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_476)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_476)).name_)), rt_str(" is not an object", 17)));
}
f_access_of_464(F->up, F->y_1235, &(*F->code_out_477));
(*F->t_478) = (*(P110)rt_nil_check(F->y_1235)).t_;
(*F->c_479) = (*(P110)rt_nil_check(F->y_1235)).c_;
(*F->ro_480) = (*(P110)rt_nil_check(F->y_1235)).ro_;
} else if (((*(P159)rt_nil_check(F->e_476)).kind_ == F->up->n_paren_23)) {
f_lvalue_481(F->up, (*(P159)rt_nil_check(F->e_476)).a_, &(*F->code_out_477), &(*F->t_478), &(*F->c_479), &(*F->ro_480));
} else if (((*(P159)rt_nil_check(F->e_476)).kind_ == F->up->n_select_17)) {
f_lvalue_481(F->up, (*(P159)rt_nil_check(F->e_476)).a_, &F->base_1236, &F->bt_1237, &F->bc_1238, &(*F->ro_480));
f_select_on_489(F->up, (*(P133)rt_nil_check(F->base_1236)), F->bt_1237, F->e_476, &(*F->ro_480), &(*F->code_out_477), &(*F->t_478), &(*F->c_479));
} else if (((*(P159)rt_nil_check(F->e_476)).kind_ == F->up->n_apply_16)) {
f_lvalue_481(F->up, (*(P159)rt_nil_check(F->e_476)).a_, &F->base_1236, &F->bt_1237, &F->bc_1238, &(*F->ro_480));
f_index_on_498(F->up, (*(P133)rt_nil_check(F->base_1236)), F->bt_1237, F->e_476, &(*F->ro_480), 1, &(*F->code_out_477), &(*F->t_478), &(*F->c_479));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_476)).line_, rt_str("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_489(struct f_greenc_1fr *up_, rstr base_482, P115 bt_483, P159 e_484, int *ro_485, P133 *code_out_486, P115 *t_487, P163 *c_488) {
  struct f_select_on_489fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_482 = rt_str_copy(base_482);
F->bt_483 = bt_483;
F->e_484 = e_484;
F->ro_485 = ro_485;
F->code_out_486 = code_out_486;
F->t_487 = t_487;
F->c_488 = c_488;
F->f_1239 = NULL;
F->d_1240 = NULL;
(*F->c_488) = F->up->no_cons_165;
if (((*(P115)rt_nil_check(F->bt_483)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_374(F->up, F->bt_483);
f_deref_473(F->up, F->base_482, F->bt_483, &F->d_1240);
(*F->ro_485) = 0;
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_484)).name_)), rt_str("ALL", 3))) {
(*F->code_out_486) = F->d_1240;
(*F->t_487) = (*(P115)rt_nil_check(F->bt_483)).target_;
goto ret_;
}
f_select_on_489(F->up, (*(P133)rt_nil_check(F->d_1240)), (*(P115)rt_nil_check(F->bt_483)).target_, F->e_484, &(*F->ro_485), &(*F->code_out_486), &(*F->t_487), &(*F->c_488));
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_483)).kind_ == F->up->t_record_81)) {
if (((*(P115)rt_nil_check(F->bt_483)).priv_ && (!f_inside_package_583(F->up, (*(P115)rt_nil_check(F->bt_483)).decl_)))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_484)).line_, rt_str_cat(rt_str_cat(rt_str("the components of private type ", 31), f_kind_name_342(F->up, F->bt_483)), rt_str(" are not visible here (RM79 7.4)", 32)));
}
F->f_1239 = (*(P115)rt_nil_check(F->bt_483)).fields_;
while ((F->f_1239 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1239)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_484)).name_)))) {
(*F->c_488) = (*(P1026)rt_nil_check(F->f_1239)).c_;
(*F->code_out_486) = f_mk_178(F->up, rt_str_cat(rt_str_catc(F->base_482, 46), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_484)).name_)))));
(*F->t_487) = (*(P1026)rt_nil_check(F->f_1239)).t_;
goto ret_;
}
F->f_1239 = (*(P1026)rt_nil_check(F->f_1239)).next_;
}
L_end_1241: ;
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_484)).line_, rt_str_cat(rt_str_cat(f_kind_name_342(F->up, F->bt_483), rt_str(" has no component ", 18)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_484)).name_))));
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_484)).line_, rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_484)).name_))), rt_str(" here", 5)));
ret_:

  return;
}

static void f_index_on_498(struct f_greenc_1fr *up_, rstr base_490, P115 bt_491, P159 e_492, int *ro_493, int lv_494, P133 *code_out_495, P115 *t_496, P163 *c_497) {
  struct f_index_on_498fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_490 = rt_str_copy(base_490);
F->bt_491 = bt_491;
F->e_492 = e_492;
F->ro_493 = ro_493;
F->lv_494 = lv_494;
F->code_out_495 = code_out_495;
F->t_496 = t_496;
F->c_497 = c_497;
F->a_1242 = NULL;
F->a_1242 = (*(P159)rt_nil_check(F->e_492)).b_;
F->it_1243 = NULL;
F->i_1244 = NULL;
F->lo_1245 = NULL;
F->hi_1246 = NULL;
F->d_1247 = NULL;
(*F->c_497) = F->up->no_cons_165;
if (((*(P115)rt_nil_check(F->bt_491)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_374(F->up, F->bt_491);
f_deref_473(F->up, F->base_490, F->bt_491, &F->d_1247);
(*F->ro_493) = 0;
f_index_on_498(F->up, (*(P133)rt_nil_check(F->d_1247)), (*(P115)rt_nil_check(F->bt_491)).target_, F->e_492, &(*F->ro_493), F->lv_494, &(*F->code_out_495), &(*F->t_496), &(*F->c_497));
goto ret_;
}
if ((f_list_len_226(F->up, F->a_1242) != ((rt_int)1LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_492)).line_, rt_str("one index expected", 18));
}
if (((*(P115)rt_nil_check(F->bt_491)).kind_ == F->up->t_string_79)) {
if (((*(P159)rt_nil_check(F->a_1242)).kind_ == F->up->n_range_22)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->a_1242)).a_, F->up->ty_int_145, &F->it_1243, &F->lo_1245);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->a_1242)).b_, F->up->ty_int_145, &F->it_1243, &F->hi_1246);
(*F->code_out_495) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), F->base_490), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1245))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1246))), 41));
(*F->t_496) = F->up->ty_string_149;
(*F->ro_493) = 1;
goto ret_;
}
f_gexpr_509(F->up, F->a_1242, F->up->ty_int_145, &F->it_1243, &F->i_1244);
(*F->t_496) = F->up->ty_char_148;
if (F->lv_494) {
(*F->code_out_495) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), F->base_490), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1244))), rt_str("))", 2)));
} else {
(*F->code_out_495) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), F->base_490), rt_str(", ", 2)), (*(P133)rt_nil_check(F->i_1244))), 41));
(*F->ro_493) = 1;
}
goto ret_;
}
if (((*(P115)rt_nil_check(F->bt_491)).kind_ == F->up->t_array_80)) {
f_gexpr_509(F->up, F->a_1242, (*(P115)rt_nil_check(F->bt_491)).idx_, &F->it_1243, &F->i_1244);
f_check_type_346(F->up, F->it_1243, (*(P115)rt_nil_check(F->bt_491)).idx_, (*(P159)rt_nil_check(F->e_492)).line_);
(*F->code_out_495) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_490, rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->i_1244))), rt_str(", ", 2)), F->base_490), rt_str(".lo, ", 5)), F->base_490), rt_str(".hi) - ", 7)), F->base_490), rt_str(".lo]", 4)));
(*F->t_496) = (*(P115)rt_nil_check(F->bt_491)).elem_;
(*F->c_497) = (*(P115)rt_nil_check(F->bt_491)).elemcons_;
goto ret_;
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_492)).line_, rt_str("cannot index this", 17));
ret_:

  return;
}

static int f_is_char_lit_500(struct f_greenc_1fr *up_, P159 e_499) {
  struct f_is_char_lit_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_499 = e_499;
F->result_ = (((*(P159)rt_nil_check(F->e_499)).kind_ == F->up->n_str_11) && (((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_499)).name_))).len == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_502(struct f_greenc_1fr *up_, P159 e_501) {
  struct f_is_enum_lit_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_501 = e_501;
F->y_1248 = NULL;
if (((*(P159)rt_nil_check(F->e_501)).kind_ != F->up->n_name_13)) {
F->result_ = 0;
goto ret_;
}
F->y_1248 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_501)).name_)));
F->result_ = ((F->y_1248 != NULL) && ((*(P110)rt_nil_check(F->y_1248)).kind_ == F->up->y_enumlit_96));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rstr f_c_string_504(struct f_greenc_1fr *up_, rstr s_503) {
  struct f_c_string_504fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_503 = rt_str_copy(s_503);
F->n_1249 = ((rt_int)0LL);
{ rt_int lo1252 = ((rt_int)1LL), hi1253 = (F->s_503).len;
for (rt_int it1254 = lo1252; it1254 <= hi1253; it1254++) {
F->i_1251 = it1254;
if ((((rt_str_get(F->s_503, F->i_1251) == 34) || (rt_str_get(F->s_503, F->i_1251) == 92)) || (rt_str_get(F->s_503, F->i_1251) == 63))) {
F->n_1249 = rt_add(F->n_1249, ((rt_int)1LL));
}
}
}
L_end_1250: ;
{
F->r_1256 = rt_str_new((rt_add(rt_add((F->s_503).len, F->n_1249), ((rt_int)2LL)) - ((rt_int)1LL) + 1));
F->j_1257 = ((rt_int)1LL);
(*rt_str_at(&F->r_1256, ((rt_int)1LL))) = 34;
{ rt_int lo1260 = ((rt_int)1LL), hi1261 = (F->s_503).len;
for (rt_int it1262 = lo1260; it1262 <= hi1261; it1262++) {
F->i_1259 = it1262;
F->j_1257 = rt_add(F->j_1257, ((rt_int)1LL));
if ((((rt_str_get(F->s_503, F->i_1259) == 34) || (rt_str_get(F->s_503, F->i_1259) == 92)) || (rt_str_get(F->s_503, F->i_1259) == 63))) {
(*rt_str_at(&F->r_1256, F->j_1257)) = 92;
F->j_1257 = rt_add(F->j_1257, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1256, F->j_1257)) = rt_str_get(F->s_503, F->i_1259);
}
}
L_end_1258: ;
(*rt_str_at(&F->r_1256, rt_add(F->j_1257, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1256;
goto ret_;

}
L_end_1255: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gexpr_509(struct f_greenc_1fr *up_, P159 e_505, P115 want_506, P115 *t_507, P133 *r_508) {
  struct f_gexpr_509fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_505 = e_505;
F->want_506 = want_506;
F->t_507 = t_507;
F->r_508 = r_508;
F->y_1263 = NULL;
F->bt_1264 = NULL;
F->c_1265 = NULL;
F->base_1267 = NULL;
F->a_1268 = NULL;
F->nm_1269 = NULL;
F->saved_lv_1270 = F->up->in_lv_path_174;
F->up->in_lv_path_174 = 0;
f_gexpr_1_514(F->up, F->e_505, F->want_506, &(*F->t_507), &(*F->r_508));
F->up->in_lv_path_174 = F->saved_lv_1270;
ret_:

  return;
}

static void f_gexpr_1_514(struct f_greenc_1fr *up_, P159 e_510, P115 want_511, P115 *t_512, P133 *r_513) {
  struct f_gexpr_1_514fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_510 = e_510;
F->want_511 = want_511;
F->t_512 = t_512;
F->r_513 = r_513;
F->y_1271 = NULL;
F->bt_1272 = NULL;
F->c_1273 = NULL;
F->base_1275 = NULL;
F->a_1276 = NULL;
F->nm_1277 = NULL;
(*F->t_512) = F->up->ty_int_145;
{ rt_int sel1278 = (*(P159)rt_nil_check(F->e_510)).kind_;
if (0 || sel1278 == ((rt_int)1LL)) {
(*F->r_513) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P159)rt_nil_check(F->e_510)).ival_)), rt_str("LL)", 3)));
} else if (0 || sel1278 == ((rt_int)2LL)) {
(*F->t_512) = F->up->ty_float_147;
(*F->r_513) = (*(P159)rt_nil_check(F->e_510)).name_;
} else if (0 || sel1278 == ((rt_int)3LL)) {
if (((f_is_char_lit_500(F->up, F->e_510) && (F->want_511 != NULL)) && (((*(P115)rt_nil_check(F->want_511)).kind_ == F->up->t_char_85) || ((*(P115)rt_nil_check(F->want_511)).kind_ == F->up->t_enum_78)))) {
f_char_literal_519(F->up, F->e_510, F->want_511, &(*F->t_512), &(*F->r_513));
} else {
(*F->t_512) = F->up->ty_string_149;
(*F->r_513) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_504(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_510)).name_)))), rt_str(", ", 2)), rt_str_of_int(((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_510)).name_))).len)), 41));
}
} else if (0 || sel1278 == ((rt_int)4LL)) {
(*F->t_512) = F->up->ty_nil_151;
(*F->r_513) = f_mk_178(F->up, rt_str("NULL", 4));
} else if (0 || sel1278 == ((rt_int)15LL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_510)).a_, F->want_511, &(*F->t_512), &(*F->r_513));
} else if (0 || sel1278 == ((rt_int)5LL)) {
f_gen_name_524(F->up, F->e_510, F->want_511, &(*F->t_512), &(*F->r_513));
} else if (0 || sel1278 == ((rt_int)6LL)) {
f_gen_unop_529(F->up, F->e_510, F->want_511, &(*F->t_512), &(*F->r_513));
} else if (0 || sel1278 == ((rt_int)7LL)) {
f_gen_binop_534(F->up, F->e_510, F->want_511, &(*F->t_512), &(*F->r_513));
} else if (0 || sel1278 == ((rt_int)8LL)) {
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_510)).a_)).kind_ == F->up->n_name_13)) {
F->y_1271 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_510)).a_)).name_)));
if (((F->y_1271 == NULL) || ((((*(P110)rt_nil_check(F->y_1271)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1271)).kind_ == F->up->y_proc_93)) || ((*(P110)rt_nil_check(F->y_1271)).kind_ == F->up->y_entry_99)))) {
F->up->call_want_170 = F->want_511;
f_gcall_563(F->up, F->e_510, 0, &(*F->t_512), &(*F->r_513));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1271)).kind_ == F->up->y_type_94)) {
f_conversion_539(F->up, F->e_510, F->y_1271, &(*F->t_512), &(*F->r_513));
goto ret_;
}
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_510)).a_, NULL, &F->bt_1272, &F->base_1275);
F->ro_1274 = 1;
f_index_on_498(F->up, (*(P133)rt_nil_check(F->base_1275)), F->bt_1272, F->e_510, &F->ro_1274, 0, &(*F->r_513), &(*F->t_512), &F->c_1273);
} else if (0 || sel1278 == ((rt_int)9LL)) {
if (f_is_package_577(F->up, (*(P159)rt_nil_check(F->e_510)).a_)) {
F->nm_1277 = f_nn_220(F->up, F->up->n_name_13, (*(P159)rt_nil_check(F->e_510)).line_);
(*(P159)rt_nil_check(F->nm_1277)).name_ = (*(P159)rt_nil_check(F->e_510)).name_;
(*(P159)rt_nil_check(F->nm_1277)).tag_ = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_510)).a_)).name_;
f_gen_name_524(F->up, F->nm_1277, F->want_511, &(*F->t_512), &(*F->r_513));
goto ret_;
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_510)).a_, NULL, &F->bt_1272, &F->base_1275);
F->ro_1274 = 1;
f_select_on_489(F->up, (*(P133)rt_nil_check(F->base_1275)), F->bt_1272, F->e_510, &F->ro_1274, &(*F->r_513), &(*F->t_512), &F->c_1273);
} else if (0 || sel1278 == ((rt_int)10LL)) {
f_gen_attr_544(F->up, F->e_510, F->want_511, &(*F->t_512), &(*F->r_513));
} else if (0 || sel1278 == ((rt_int)11LL)) {
f_allocator_549(F->up, F->e_510, F->want_511, &(*F->t_512), &(*F->r_513));
} else if (0 || sel1278 == ((rt_int)12LL)) {
f_aggregate_554(F->up, F->e_510, F->want_511, &(*F->t_512), &(*F->r_513));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_510)).line_, rt_str("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_char_literal_519(struct f_greenc_1fr *up_, P159 e_515, P115 want_516, P115 *t_517, P133 *r_518) {
  struct f_char_literal_519fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_515 = e_515;
F->want_516 = want_516;
F->t_517 = t_517;
F->r_518 = r_518;
if (((*(P115)rt_nil_check(F->want_516)).kind_ == F->up->t_char_85)) {
(*F->t_517) = F->up->ty_char_148;
(*F->r_518) = f_mk_178(F->up, rt_str_of_int(rt_sub(((rt_int)(rt_str_get((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_515)).name_)), ((rt_int)1LL))) + 1), ((rt_int)1LL))));
goto ret_;
}
F->i_1279 = f_lit_index_359(F->up, (*(P115)rt_nil_check(F->want_516)).lits_, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_515)).name_)));
if ((F->i_1279 < ((rt_int)0LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_515)).line_, rt_str_cat(rt_str_cat(rt_str_ccat(34, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_515)).name_))), rt_str("\" is not a literal of ", 22)), f_kind_name_342(F->up, F->want_516)));
}
(*F->t_517) = F->want_516;
(*F->r_518) = f_mk_178(F->up, rt_str_of_int(F->i_1279));
ret_:

  return;
}

static void f_gen_name_524(struct f_greenc_1fr *up_, P159 e_520, P115 want_521, P115 *t_522, P133 *r_523) {
  struct f_gen_name_524fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_520 = e_520;
F->want_521 = want_521;
F->t_522 = t_522;
F->r_523 = r_523;
F->y_1280 = NULL;
F->y_1280 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_)));
F->z_1281 = NULL;
F->call_1282 = NULL;
if (((*(P159)rt_nil_check(F->e_520)).tag_ != NULL)) {
F->y_1280 = f_member_of_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_)), (*(P159)rt_nil_check(F->e_520)).line_);
}
if ((F->y_1280 == NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_)), rt_str("PUT", 3)) || rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_)), rt_str("GET", 3)))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_520)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_)), rt_str(" needs an item", 14)));
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_520)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P110)rt_nil_check(F->y_1280)).kind_ == F->up->y_var_90) || ((*(P110)rt_nil_check(F->y_1280)).kind_ == F->up->y_const_91))) {
(*F->t_522) = (*(P110)rt_nil_check(F->y_1280)).t_;
f_access_of_464(F->up, F->y_1280, &(*F->r_523));
goto ret_;
}
if (((*(P110)rt_nil_check(F->y_1280)).kind_ == F->up->y_enumlit_96)) {
F->z_1281 = F->y_1280;
if ((F->want_521 != NULL)) {
while ((F->z_1281 != NULL)) {
if (((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1281)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_))) && ((*(P110)rt_nil_check(F->z_1281)).kind_ == F->up->y_enumlit_96)) && f_same_326(F->up, (*(P110)rt_nil_check(F->z_1281)).t_, F->want_521))) {
goto L_end_1283;
}
F->z_1281 = (*(P110)rt_nil_check(F->z_1281)).chain_;
}
L_end_1283: ;
if ((F->z_1281 == NULL)) {
F->z_1281 = F->y_1280;
}
}
(*F->t_522) = (*(P110)rt_nil_check(F->z_1281)).t_;
(*F->r_523) = f_mk_178(F->up, rt_str_of_int((*(P110)rt_nil_check(F->z_1281)).mvalue_));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1280)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1280)).kind_ == F->up->y_proc_93)) || ((*(P110)rt_nil_check(F->y_1280)).kind_ == F->up->y_entry_99))) {
F->call_1282 = f_nn_220(F->up, F->up->n_apply_16, (*(P159)rt_nil_check(F->e_520)).line_);
(*(P159)rt_nil_check(F->call_1282)).a_ = F->e_520;
F->up->call_want_170 = F->want_521;
f_gcall_563(F->up, F->call_1282, 0, &(*F->t_522), &(*F->r_523));
goto ret_;
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_520)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_520)).name_)), rt_str(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_529(struct f_greenc_1fr *up_, P159 e_525, P115 want_526, P115 *t_527, P133 *r_528) {
  struct f_gen_unop_529fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_525 = e_525;
F->want_526 = want_526;
F->t_527 = t_527;
F->r_528 = r_528;
F->a_1284 = NULL;
f_user_operator_618(F->up, F->e_525, F->want_526, &(*F->t_527), &(*F->r_528), &F->done_1285);
if (F->done_1285) {
goto ret_;
}
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_525)).name_)), rt_str("NOT", 3))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_525)).a_, F->up->ty_bool_146, &(*F->t_527), &F->a_1284);
f_check_type_346(F->up, (*F->t_527), F->up->ty_bool_146, (*(P159)rt_nil_check(F->e_525)).line_);
(*F->r_528) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->a_1284))), 41));
goto ret_;
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_525)).a_, F->want_526, &(*F->t_527), &F->a_1284);
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_525)).name_)), rt_str("+", 1))) {
(*F->r_528) = F->a_1284;
} else if (((*(P115)rt_nil_check((*F->t_527))).kind_ == F->up->t_float_77)) {
(*F->r_528) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(-", 2), (*(P133)rt_nil_check(F->a_1284))), 41));
} else {
f_check_type_346(F->up, (*F->t_527), F->up->ty_int_145, (*(P159)rt_nil_check(F->e_525)).line_);
(*F->r_528) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_neg(", 7), (*(P133)rt_nil_check(F->a_1284))), 41));
}
ret_:

  return;
}

static void f_gen_binop_534(struct f_greenc_1fr *up_, P159 e_530, P115 want_531, P115 *t_532, P133 *r_533) {
  struct f_gen_binop_534fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_530 = e_530;
F->want_531 = want_531;
F->t_532 = t_532;
F->r_533 = r_533;
F->op_1286 = rt_str_copy((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_530)).name_)));
F->ta_1287 = NULL;
F->tb_1288 = NULL;
F->hint_1289 = NULL;
F->ct_1290 = NULL;
F->a_1291 = NULL;
F->b_1292 = NULL;
F->x_1293 = NULL;
F->dummy_1294 = NULL;
(*F->t_532) = F->up->ty_bool_146;
f_user_operator_618(F->up, F->e_530, F->want_531, &(*F->t_532), &(*F->r_533), &F->done_1295);
if (F->done_1295) {
goto ret_;
}
if (((rt_str_eq(F->op_1286, rt_str("AND", 3)) || rt_str_eq(F->op_1286, rt_str("OR", 2))) || rt_str_eq(F->op_1286, rt_str("XOR", 3)))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).a_, F->up->ty_bool_146, &F->ta_1287, &F->a_1291);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).b_, F->up->ty_bool_146, &F->tb_1288, &F->b_1292);
f_check_type_346(F->up, F->ta_1287, F->up->ty_bool_146, (*(P159)rt_nil_check(F->e_530)).line_);
f_check_type_346(F->up, F->tb_1288, F->up->ty_bool_146, (*(P159)rt_nil_check(F->e_530)).line_);
if (rt_str_eq(F->op_1286, rt_str("AND", 3))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1291))), rt_str(" && ", 4)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("OR", 2))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1291))), rt_str(" || ", 4)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1291))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1292))), 41));
}
goto ret_;
}
if (rt_str_eq(F->op_1286, rt_str("IN", 2))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).a_, NULL, &F->ta_1287, &F->a_1291);
f_gexpr_509(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_530)).b_)).a_, F->ta_1287, &F->tb_1288, &F->b_1292);
f_gexpr_509(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_530)).b_)).b_, F->ta_1287, &F->tb_1288, &F->x_1293);
(*F->r_533) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int m_ = ", 15), (*(P133)rt_nil_check(F->a_1291))), rt_str("; m_ >= ", 8)), (*(P133)rt_nil_check(F->b_1292))), rt_str(" && m_ <= ", 10)), (*(P133)rt_nil_check(F->x_1293))), rt_str("; })", 4)));
goto ret_;
}
if (rt_str_eq(F->op_1286, rt_str("&", 1))) {
if (f_is_char_lit_500(F->up, (*(P159)rt_nil_check(F->e_530)).a_)) {
F->hint_1289 = F->up->ty_char_148;
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).a_, F->hint_1289, &F->ta_1287, &F->a_1291);
F->hint_1289 = NULL;
if (f_is_char_lit_500(F->up, (*(P159)rt_nil_check(F->e_530)).b_)) {
F->hint_1289 = F->up->ty_char_148;
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).b_, F->hint_1289, &F->tb_1288, &F->b_1292);
(*F->t_532) = F->up->ty_string_149;
if ((((*(P115)rt_nil_check(F->ta_1287)).kind_ == F->up->t_string_79) && ((*(P115)rt_nil_check(F->tb_1288)).kind_ == F->up->t_string_79))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1287)).kind_ == F->up->t_string_79) && ((*(P115)rt_nil_check(F->tb_1288)).kind_ == F->up->t_char_85))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1287)).kind_ == F->up->t_char_85) && ((*(P115)rt_nil_check(F->tb_1288)).kind_ == F->up->t_string_79))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if ((((*(P115)rt_nil_check(F->ta_1287)).kind_ == F->up->t_char_85) && ((*(P115)rt_nil_check(F->tb_1288)).kind_ == F->up->t_char_85))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_530)).line_, rt_str("& catenates strings and characters", 34));
}
goto ret_;
}
if (f_is_rel_259(F->up, F->op_1286)) {
if ((((f_is_char_lit_500(F->up, (*(P159)rt_nil_check(F->e_530)).a_) || f_is_enum_lit_502(F->up, (*(P159)rt_nil_check(F->e_530)).a_)) || ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_530)).a_)).kind_ == F->up->n_nil_12)) || ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_530)).a_)).kind_ == F->up->n_int_9))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).b_, NULL, &F->hint_1289, &F->dummy_1294);
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).a_, F->hint_1289, &F->ta_1287, &F->a_1291);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).b_, F->ta_1287, &F->tb_1288, &F->b_1292);
F->ct_1290 = F->ta_1287;
if ((((*(P115)rt_nil_check(F->ta_1287)).kind_ != F->up->t_nil_84) && ((*(P115)rt_nil_check(F->tb_1288)).kind_ != F->up->t_nil_84))) {
f_check_type_346(F->up, F->tb_1288, F->ta_1287, (*(P159)rt_nil_check(F->e_530)).line_);
}
if (((*(P115)rt_nil_check(F->ta_1287)).kind_ == F->up->t_nil_84)) {
F->ct_1290 = F->tb_1288;
}
if (((*(P115)rt_nil_check(F->ct_1290)).kind_ == F->up->t_string_79)) {
if (rt_str_eq(F->op_1286, rt_str("=", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("/=", 2))) {
(*F->r_533) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), rt_str("))", 2)));
} else if (rt_str_eq(F->op_1286, rt_str("<", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("<=", 2))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str(">", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P133)rt_nil_check(F->b_1292))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1291))), 41));
} else {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P133)rt_nil_check(F->b_1292))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->a_1291))), 41));
}
goto ret_;
}
if (f_composite_380(F->up, F->ct_1290)) {
f_eq_code_395(F->up, F->ct_1290, (*(P133)rt_nil_check(F->a_1291)), (*(P133)rt_nil_check(F->b_1292)), &F->x_1293);
if (rt_str_eq(F->op_1286, rt_str("=", 1))) {
(*F->r_533) = F->x_1293;
} else if (rt_str_eq(F->op_1286, rt_str("/=", 2))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check(F->x_1293))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_530)).line_, rt_str("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (rt_str_eq(F->op_1286, rt_str("=", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1291))), rt_str(" == ", 4)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("/=", 2))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1291))), rt_str(" != ", 4)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1291))), 32), F->op_1286), 32), (*(P133)rt_nil_check(F->b_1292))), 41));
}
goto ret_;
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).a_, F->want_531, &F->ta_1287, &F->a_1291);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_530)).b_, F->ta_1287, &F->tb_1288, &F->b_1292);
if ((((*(P115)rt_nil_check(F->ta_1287)).kind_ == F->up->t_float_77) || ((*(P115)rt_nil_check(F->tb_1288)).kind_ == F->up->t_float_77))) {
(*F->t_532) = F->up->ty_float_147;
if (((rt_str_eq(F->op_1286, rt_str("+", 1)) || rt_str_eq(F->op_1286, rt_str("-", 1))) || rt_str_eq(F->op_1286, rt_str("*", 1)))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P133)rt_nil_check(F->a_1291))), 32), F->op_1286), 32), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("/", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("**", 2))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_530)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1286), rt_str(" is not defined for FLOAT", 25)));
}
goto ret_;
}
f_check_type_346(F->up, F->ta_1287, F->up->ty_int_145, (*(P159)rt_nil_check(F->e_530)).line_);
f_check_type_346(F->up, F->tb_1288, F->up->ty_int_145, (*(P159)rt_nil_check(F->e_530)).line_);
(*F->t_532) = F->up->ty_int_145;
if (rt_str_eq(F->op_1286, rt_str("+", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("-", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("*", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("/", 1))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_quot(", 8), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("MOD", 3))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_rem(", 7), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else if (rt_str_eq(F->op_1286, rt_str("**", 2))) {
(*F->r_533) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), (*(P133)rt_nil_check(F->a_1291))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->b_1292))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_530)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1286), rt_str(" is not defined for INTEGER", 27)));
}
ret_:

  return;
}

static void f_conversion_539(struct f_greenc_1fr *up_, P159 e_535, P110 y_536, P115 *t_537, P133 *r_538) {
  struct f_conversion_539fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_535 = e_535;
F->y_536 = y_536;
F->t_537 = t_537;
F->r_538 = r_538;
F->aty_1296 = NULL;
F->a_1297 = NULL;
if ((f_list_len_226(F->up, (*(P159)rt_nil_check(F->e_535)).b_) != ((rt_int)1LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_535)).line_, rt_str("a conversion takes one expression", 33));
}
(*F->t_537) = (*(P110)rt_nil_check(F->y_536)).t_;
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_535)).b_, (*F->t_537), &F->aty_1296, &F->a_1297);
if ((((*(P115)rt_nil_check((*F->t_537))).kind_ == F->up->t_int_75) && ((*(P115)rt_nil_check(F->aty_1296)).kind_ == F->up->t_float_77))) {
(*F->r_538) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)llround(", 17), (*(P133)rt_nil_check(F->a_1297))), rt_str("))", 2)));
} else if ((((*(P115)rt_nil_check((*F->t_537))).kind_ == F->up->t_float_77) && ((*(P115)rt_nil_check(F->aty_1296)).kind_ == F->up->t_int_75))) {
(*F->r_538) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((double)(", 10), (*(P133)rt_nil_check(F->a_1297))), rt_str("))", 2)));
} else {
f_check_type_346(F->up, F->aty_1296, (*F->t_537), (*(P159)rt_nil_check(F->e_535)).line_);
if (((((((*(P115)rt_nil_check((*F->t_537))).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check((*F->t_537))).kind_ == F->up->t_enum_78)) || ((*(P115)rt_nil_check((*F->t_537))).kind_ == F->up->t_char_85)) && ((*(P110)rt_nil_check(F->y_536)).c_ != NULL)) && ((*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_536)).c_)).lo_ != NULL))) {
(*F->r_538) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->a_1297))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_536)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_536)).c_)).hi_))), 41));
} else {
(*F->r_538) = F->a_1297;
}
}
ret_:

  return;
}

static void f_gen_attr_544(struct f_greenc_1fr *up_, P159 e_540, P115 want_541, P115 *t_542, P133 *r_543) {
  struct f_gen_attr_544fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_540 = e_540;
F->want_541 = want_541;
F->t_542 = t_542;
F->r_543 = r_543;
F->a_1298 = rt_str_copy((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_540)).name_)));
F->y_1299 = NULL;
F->tt_1300 = NULL;
F->aty_1301 = NULL;
F->v_1302 = NULL;
F->d_1303 = NULL;
F->c_1304 = NULL;
if (((((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_540)).a_)).kind_ == F->up->n_apply_16) && ((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_540)).a_)).a_)).kind_ == F->up->n_name_13)) && f_is_task_name_636(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_540)).a_)).a_)).name_))))) {
f_member_attr_702(F->up, F->e_540, &(*F->t_542), &(*F->r_543));
goto ret_;
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_540)).a_)).kind_ == F->up->n_name_13)) {
F->y_1299 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_540)).a_)).name_)));
if ((((F->y_1299 == NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_540)).a_)).name_)), rt_str("SYSTEM", 6))) && rt_str_eq(F->a_1298, rt_str("CLOCK", 5)))) {
(*F->t_542) = F->up->ty_float_147;
(*F->r_543) = f_mk_178(F->up, rt_str("((double)rt_time())", 19));
goto ret_;
}
}
if (((F->y_1299 != NULL) && ((*(P110)rt_nil_check(F->y_1299)).kind_ == F->up->y_type_94))) {
F->tt_1300 = (*(P110)rt_nil_check(F->y_1299)).t_;
F->c_1304 = (*(P110)rt_nil_check(F->y_1299)).c_;
if (rt_str_eq(F->a_1298, rt_str("ORD", 3))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_540)).b_, F->tt_1300, &F->aty_1301, &F->v_1302);
f_check_type_346(F->up, F->aty_1301, F->tt_1300, (*(P159)rt_nil_check(F->e_540)).line_);
(*F->t_542) = F->up->ty_int_145;
(*F->r_543) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (*(P133)rt_nil_check(F->v_1302))), rt_str(") + 1)", 6)));
goto ret_;
} else if ((rt_str_eq(F->a_1298, rt_str("VAL", 3)) && ((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_int_75))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_540)).b_, F->up->ty_string_149, &F->aty_1301, &F->v_1302);
(*F->t_542) = F->up->ty_int_145;
(*F->r_543) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_int_of_str(", 14), (*(P133)rt_nil_check(F->v_1302))), 41));
goto ret_;
} else if (rt_str_eq(F->a_1298, rt_str("VAL", 3))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_540)).b_, F->up->ty_int_145, &F->aty_1301, &F->v_1302);
(*F->t_542) = F->tt_1300;
(*F->r_543) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1302))), rt_str(" - 1, ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1304)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1304)).hi_))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1298, rt_str("REP", 3)) && ((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_int_75))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_540)).b_, F->up->ty_int_145, &F->aty_1301, &F->v_1302);
(*F->t_542) = F->up->ty_string_149;
(*F->r_543) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_of_int(", 14), (*(P133)rt_nil_check(F->v_1302))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1298, rt_str("REP", 3)) && ((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_float_77))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_540)).b_, F->up->ty_float_147, &F->aty_1301, &F->v_1302);
(*F->t_542) = F->up->ty_string_149;
(*F->r_543) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_image_float(", 17), (*(P133)rt_nil_check(F->v_1302))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1298, rt_str("SUCC", 4)) || rt_str_eq(F->a_1298, rt_str("PRED", 4)))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_540)).b_, F->tt_1300, &F->aty_1301, &F->v_1302);
(*F->t_542) = F->tt_1300;
if (((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_int_75)) {
if (rt_str_eq(F->a_1298, rt_str("SUCC", 4))) {
(*F->r_543) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P133)rt_nil_check(F->v_1302))), rt_str(", 1)", 4)));
} else {
(*F->r_543) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P133)rt_nil_check(F->v_1302))), rt_str(", 1)", 4)));
}
} else if (rt_str_eq(F->a_1298, rt_str("SUCC", 4))) {
(*F->r_543) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1302))), rt_str(" + 1, ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1304)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1304)).hi_))), 41));
} else {
(*F->r_543) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1302))), rt_str(" - 1, ", 6)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1304)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1304)).hi_))), 41));
}
goto ret_;
} else if ((rt_str_eq(F->a_1298, rt_str("FIRST", 5)) || rt_str_eq(F->a_1298, rt_str("LAST", 4)))) {
(*F->t_542) = F->tt_1300;
if (((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_array_80)) {
(*F->t_542) = (*(P115)rt_nil_check(F->tt_1300)).idx_;
}
if (((F->c_1304 != NULL) && ((*(P163)rt_nil_check(F->c_1304)).lo_ != NULL))) {
if (rt_str_eq(F->a_1298, rt_str("FIRST", 5))) {
(*F->r_543) = (*(P163)rt_nil_check(F->c_1304)).lo_;
} else {
(*F->r_543) = (*(P163)rt_nil_check(F->c_1304)).hi_;
}
} else if (((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_int_75)) {
if (rt_str_eq(F->a_1298, rt_str("FIRST", 5))) {
(*F->r_543) = f_mk_178(F->up, rt_str("INT64_MIN", 9));
} else {
(*F->r_543) = f_mk_178(F->up, rt_str("INT64_MAX", 9));
}
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_540)).line_, rt_str_cat(rt_str("this type has no ", 17), F->a_1298));
}
goto ret_;
}
f_other_attr_698(F->up, F->e_540, F->y_1299, &(*F->t_542), &(*F->r_543));
goto ret_;
}
if (((F->y_1299 != NULL) && (((*(P110)rt_nil_check(F->y_1299)).kind_ != F->up->y_var_90) && ((*(P110)rt_nil_check(F->y_1299)).kind_ != F->up->y_const_91)))) {
f_other_attr_698(F->up, F->e_540, F->y_1299, &(*F->t_542), &(*F->r_543));
goto ret_;
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_540)).a_, NULL, &F->tt_1300, &F->v_1302);
if (((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_374(F->up, F->tt_1300);
f_deref_473(F->up, (*(P133)rt_nil_check(F->v_1302)), F->tt_1300, &F->d_1303);
F->v_1302 = F->d_1303;
F->tt_1300 = (*(P115)rt_nil_check(F->tt_1300)).target_;
}
(*F->t_542) = F->up->ty_int_145;
if (((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_string_79)) {
if ((rt_str_eq(F->a_1298, rt_str("LENGTH", 6)) || rt_str_eq(F->a_1298, rt_str("LAST", 4)))) {
(*F->r_543) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1302))), rt_str(").len", 5)));
goto ret_;
} else if (rt_str_eq(F->a_1298, rt_str("FIRST", 5))) {
(*F->r_543) = f_mk_178(F->up, rt_str("((rt_int)1)", 11));
goto ret_;
}
} else if (((*(P115)rt_nil_check(F->tt_1300)).kind_ == F->up->t_array_80)) {
(*F->t_542) = (*(P115)rt_nil_check(F->tt_1300)).idx_;
if (rt_str_eq(F->a_1298, rt_str("FIRST", 5))) {
(*F->r_543) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1302))), rt_str(").lo", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1298, rt_str("LAST", 4))) {
(*F->r_543) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->v_1302))), rt_str(").hi", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1298, rt_str("LENGTH", 6))) {
(*F->t_542) = F->up->ty_int_145;
(*F->r_543) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("RT_CNT(", 7), (*(P133)rt_nil_check(F->v_1302))), 41));
goto ret_;
}
}
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_540)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1298), rt_str(" is not handled here", 20)));
ret_:

  return;
}

static void f_allocator_549(struct f_greenc_1fr *up_, P159 e_545, P115 want_546, P115 *t_547, P133 *r_548) {
  struct f_allocator_549fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_545 = e_545;
F->want_546 = want_546;
F->t_547 = t_547;
F->r_548 = r_548;
F->y_1306 = NULL;
F->y_1306 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_545)).name_)));
F->target_1307 = NULL;
F->vt_1308 = NULL;
F->ct_1309 = NULL;
F->pt_1310 = NULL;
F->cell_1311 = NULL;
F->v_1312 = NULL;
F->x_1313 = NULL;
if (((F->want_546 == NULL) || ((*(P115)rt_nil_check(F->want_546)).kind_ != F->up->t_ptr_82))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_545)).line_, rt_str("the access type of this allocator is not known here", 51));
}
if (((F->y_1306 == NULL) || ((*(P110)rt_nil_check(F->y_1306)).kind_ != F->up->y_type_94))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_545)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_545)).name_)), rt_str(" is not a type", 14)));
}
f_finish_ptr_374(F->up, F->want_546);
F->target_1307 = (*(P115)rt_nil_check(F->want_546)).target_;
f_check_type_346(F->up, (*(P110)rt_nil_check(F->y_1306)).t_, F->target_1307, (*(P159)rt_nil_check(F->e_545)).line_);
f_ctype_351(F->up, F->target_1307, &F->ct_1309);
f_ctype_351(F->up, F->want_546, &F->pt_1310);
f_new_name_181(F->up, rt_str("cell", 4), &F->cell_1311);
if (((*(P159)rt_nil_check(F->e_545)).a_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_545)).line_, rt_str("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_171 != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_545)).line_, rt_str("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_545)).a_)).kind_ == F->up->n_agg_20)) {
f_aggregate_554(F->up, (*(P159)rt_nil_check(F->e_545)).a_, F->target_1307, &F->vt_1308, &F->v_1312);
} else {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->e_545)).a_, F->target_1307, &F->vt_1308, &F->v_1312);
}
f_check_type_346(F->up, F->vt_1308, F->target_1307, (*(P159)rt_nil_check(F->e_545)).line_);
f_copy_code_390(F->up, F->target_1307, (*(P133)rt_nil_check(F->v_1312)), &F->x_1313);
(*F->t_547) = F->want_546;
(*F->r_548) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1309))), rt_str(" *", 2)), (*(P133)rt_nil_check(F->cell_1311))), rt_str(" = rt_alloc(sizeof(", 19)), (*(P133)rt_nil_check(F->ct_1309))), rt_str(")); *", 5)), (*(P133)rt_nil_check(F->cell_1311))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1313))), rt_str("; (", 3)), (*(P133)rt_nil_check(F->pt_1310))), 41), (*(P133)rt_nil_check(F->cell_1311))), rt_str("; })", 4)));
ret_:

  return;
}

static void f_aggregate_554(struct f_greenc_1fr *up_, P159 e_550, P115 want_551, P115 *t_552, P133 *r_553) {
  struct f_aggregate_554fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_550 = e_550;
F->want_551 = want_551;
F->t_552 = t_552;
F->r_553 = r_553;
F->it_1314 = NULL;
F->it_1314 = (*(P159)rt_nil_check(F->e_550)).a_;
F->f_1315 = NULL;
F->vt_1316 = NULL;
F->ct_1317 = NULL;
F->tmp_1318 = NULL;
F->v_1319 = NULL;
F->x_1320 = NULL;
F->parts_1321 = NULL;
F->et_1322 = NULL;
F->lo_1323 = NULL;
F->hi_1324 = NULL;
F->key_1325 = NULL;
F->lab_1327 = NULL;
if ((F->want_551 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_550)).line_, rt_str("the type of this aggregate is not known here", 44));
}
(*F->t_552) = F->want_551;
f_ctype_351(F->up, F->want_551, &F->ct_1317);
f_new_name_181(F->up, rt_str("ag", 2), &F->tmp_1318);
if (((*(P115)rt_nil_check(F->want_551)).kind_ == F->up->t_record_81)) {
F->parts_1321 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1317))), 32), (*(P133)rt_nil_check(F->tmp_1318))), 59));
if ((f_list_len_226(F->up, F->it_1314) != f_field_count_348(F->up, F->want_551))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_550)).line_, rt_str_cat(rt_str("an aggregate gives every component of ", 38), f_kind_name_342(F->up, F->want_551)));
}
F->f_1315 = (*(P115)rt_nil_check(F->want_551)).fields_;
while ((F->it_1314 != NULL)) {
if (((*(P159)rt_nil_check(F->it_1314)).a_ != NULL)) {
F->f_1315 = (*(P115)rt_nil_check(F->want_551)).fields_;
while (((F->f_1315 != NULL) && (!(((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1314)).a_)).a_)).kind_ == F->up->n_name_13) && rt_str_eq((*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1315)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1314)).a_)).a_)).name_))))))) {
F->f_1315 = (*(P1026)rt_nil_check(F->f_1315)).next_;
}
L_end_1329: ;
if ((F->f_1315 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_550)).line_, rt_str("no such component in the aggregate", 34));
}
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->it_1314)).b_, (*(P1026)rt_nil_check(F->f_1315)).t_, &F->vt_1316, &F->v_1319);
f_check_type_346(F->up, F->vt_1316, (*(P1026)rt_nil_check(F->f_1315)).t_, (*(P159)rt_nil_check(F->e_550)).line_);
f_copy_code_390(F->up, (*(P1026)rt_nil_check(F->f_1315)).t_, (*(P133)rt_nil_check(F->v_1319)), &F->x_1320);
F->parts_1321 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1321)), 32), (*(P133)rt_nil_check(F->tmp_1318))), 46), f_c_field_191(F->up, (*(P133)rt_nil_check((*(P1026)rt_nil_check(F->f_1315)).name_)))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1320))), 59));
F->it_1314 = (*(P159)rt_nil_check(F->it_1314)).next_;
if ((F->f_1315 != NULL)) {
F->f_1315 = (*(P1026)rt_nil_check(F->f_1315)).next_;
}
}
L_end_1328: ;
(*F->r_553) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1321)), 32), (*(P133)rt_nil_check(F->tmp_1318))), rt_str("; })", 4)));
goto ret_;
}
if (((*(P115)rt_nil_check(F->want_551)).kind_ != F->up->t_array_80)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_550)).line_, rt_str("an aggregate builds a record or an array", 40));
}
f_ctype_351(F->up, (*(P115)rt_nil_check(F->want_551)).elem_, &F->et_1322);
if (((*(P159)rt_nil_check(F->it_1314)).a_ == NULL)) {
if ((((*(P115)rt_nil_check(F->want_551)).tcons_ != NULL) && ((*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_551)).tcons_)).lo_ != NULL))) {
F->lo_1323 = (*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_551)).tcons_)).lo_;
} else {
F->lo_1323 = f_mk_178(F->up, rt_str("1", 1));
}
F->n_1326 = f_list_len_226(F->up, F->it_1314);
F->parts_1321 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1317))), 32), (*(P133)rt_nil_check(F->tmp_1318))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1323))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->lo_1323))), rt_str(" + ", 3)), rt_str_of_int(rt_sub(F->n_1326, ((rt_int)1LL)))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1322))), rt_str(") * ", 4)), rt_str_of_int(rt_add(F->n_1326, ((rt_int)1LL)))), rt_str(");", 2)));
F->n_1326 = ((rt_int)0LL);
while ((F->it_1314 != NULL)) {
if (((*(P159)rt_nil_check(F->it_1314)).a_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_550)).line_, rt_str("named associations follow the positional ones", 45));
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->it_1314)).b_, (*(P115)rt_nil_check(F->want_551)).elem_, &F->vt_1316, &F->v_1319);
f_check_type_346(F->up, F->vt_1316, (*(P115)rt_nil_check(F->want_551)).elem_, (*(P159)rt_nil_check(F->e_550)).line_);
f_copy_code_390(F->up, (*(P115)rt_nil_check(F->want_551)).elem_, (*(P133)rt_nil_check(F->v_1319)), &F->x_1320);
F->parts_1321 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1321)), 32), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".p[", 3)), rt_str_of_int(F->n_1326)), rt_str("] = ", 4)), (*(P133)rt_nil_check(F->x_1320))), 59));
F->n_1326 = rt_add(F->n_1326, ((rt_int)1LL));
F->it_1314 = (*(P159)rt_nil_check(F->it_1314)).next_;
}
L_end_1330: ;
(*F->r_553) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1321)), 32), (*(P133)rt_nil_check(F->tmp_1318))), rt_str("; })", 4)));
goto ret_;
}
if ((((*(P115)rt_nil_check(F->want_551)).tcons_ != NULL) && ((*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_551)).tcons_)).hi_ != NULL))) {
F->lo_1323 = (*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_551)).tcons_)).lo_;
F->hi_1324 = (*(P163)rt_nil_check((*(P115)rt_nil_check(F->want_551)).tcons_)).hi_;
} else if (((((*(P159)rt_nil_check(F->it_1314)).next_ == NULL) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1314)).a_)).flag_ != ((rt_int)1LL))) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1314)).a_)).b_ != NULL))) {
f_gexpr_509(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1314)).a_)).a_, (*(P115)rt_nil_check(F->want_551)).idx_, &F->vt_1316, &F->lo_1323);
f_gexpr_509(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->it_1314)).a_)).b_, (*(P115)rt_nil_check(F->want_551)).idx_, &F->vt_1316, &F->hi_1324);
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_550)).line_, rt_str("the bounds of this aggregate are not known", 42));
}
F->parts_1321 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P133)rt_nil_check(F->ct_1317))), 32), (*(P133)rt_nil_check(F->tmp_1318))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo = ", 6)), (*(P133)rt_nil_check(F->lo_1323))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".hi = ", 6)), (*(P133)rt_nil_check(F->hi_1324))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo2 = ", 7)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".hi2 = 1; ", 10)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P133)rt_nil_check(F->et_1322))), rt_str(") * (size_t)(RT_CNT(", 20)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(") + 1));", 8)));
while ((F->it_1314 != NULL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->it_1314)).b_, (*(P115)rt_nil_check(F->want_551)).elem_, &F->vt_1316, &F->v_1319);
f_check_type_346(F->up, F->vt_1316, (*(P115)rt_nil_check(F->want_551)).elem_, (*(P159)rt_nil_check(F->e_550)).line_);
f_copy_code_390(F->up, (*(P115)rt_nil_check(F->want_551)).elem_, (*(P133)rt_nil_check(F->v_1319)), &F->x_1320);
F->lab_1327 = (*(P159)rt_nil_check(F->it_1314)).a_;
while ((F->lab_1327 != NULL)) {
if (((*(P159)rt_nil_check(F->lab_1327)).flag_ == ((rt_int)1LL))) {
F->parts_1321 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1321)), rt_str(" for (rt_int k_ = 0; k_ < RT_CNT(", 33)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str("); k_++) ", 9)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".p[k_] = ", 9)), (*(P133)rt_nil_check(F->x_1320))), 59));
} else if (((*(P159)rt_nil_check(F->lab_1327)).b_ != NULL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->lab_1327)).a_, (*(P115)rt_nil_check(F->want_551)).idx_, &F->vt_1316, &F->key_1325);
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->lab_1327)).b_, (*(P115)rt_nil_check(F->want_551)).idx_, &F->vt_1316, &F->hi_1324);
F->parts_1321 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1321)), rt_str(" for (rt_int k_ = ", 18)), (*(P133)rt_nil_check(F->key_1325))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1324))), rt_str("; k_++) ", 8)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".p[rt_index(k_, ", 16)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1320))), 59));
} else {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->lab_1327)).a_, (*(P115)rt_nil_check(F->want_551)).idx_, &F->vt_1316, &F->key_1325);
F->parts_1321 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1321)), 32), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".p[rt_index(", 12)), (*(P133)rt_nil_check(F->key_1325))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo, ", 5)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".hi) - ", 7)), (*(P133)rt_nil_check(F->tmp_1318))), rt_str(".lo] = ", 7)), (*(P133)rt_nil_check(F->x_1320))), 59));
}
F->lab_1327 = (*(P159)rt_nil_check(F->lab_1327)).next_;
}
L_end_1332: ;
F->it_1314 = (*(P159)rt_nil_check(F->it_1314)).next_;
}
L_end_1331: ;
(*F->r_553) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->parts_1321)), 32), (*(P133)rt_nil_check(F->tmp_1318))), rt_str("; })", 4)));
ret_:

  return;
}

static P159 f_actual_for_558(struct f_greenc_1fr *up_, P159 args_555, P1015 pm_556, P1015 first_557) {
  struct f_actual_for_558fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_555 = args_555;
F->pm_556 = pm_556;
F->first_557 = first_557;
F->a_1333 = NULL;
F->a_1333 = F->args_555;
F->p_1334 = NULL;
F->p_1334 = F->first_557;
while (((F->a_1333 != NULL) && ((*(P159)rt_nil_check(F->a_1333)).tag_ == NULL))) {
if ((F->p_1334 == F->pm_556)) {
F->result_ = F->a_1333;
goto ret_;
}
F->p_1334 = (*(P1015)rt_nil_check(F->p_1334)).next_;
F->a_1333 = (*(P159)rt_nil_check(F->a_1333)).next_;
}
L_end_1335: ;
while ((F->a_1333 != NULL)) {
if ((((*(P159)rt_nil_check(F->a_1333)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1333)).tag_)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_556)).name_))))) {
F->result_ = F->a_1333;
goto ret_;
}
F->a_1333 = (*(P159)rt_nil_check(F->a_1333)).next_;
}
L_end_1336: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_563(struct f_greenc_1fr *up_, P159 e_559, int is_stmt_560, P115 *t_561, P133 *r_562) {
  struct f_gcall_563fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_559 = e_559;
F->is_stmt_560 = is_stmt_560;
F->t_561 = t_561;
F->r_562 = r_562;
F->fn_1337 = NULL;
F->fn_1337 = (*(P159)rt_nil_check(F->e_559)).a_;
F->nm_1338 = NULL;
F->y_1339 = NULL;
F->args_1340 = NULL;
F->lv_1341 = NULL;
F->v_1342 = NULL;
F->ct_1343 = NULL;
F->x_1344 = NULL;
F->a_1345 = NULL;
F->pm_1346 = NULL;
F->lt_1347 = NULL;
F->vt_1348 = NULL;
F->lc_1349 = NULL;
if ((((*(P159)rt_nil_check(F->fn_1337)).kind_ == F->up->n_select_17) && f_is_package_577(F->up, (*(P159)rt_nil_check(F->fn_1337)).a_))) {
F->nm_1338 = f_nn_220(F->up, F->up->n_name_13, (*(P159)rt_nil_check(F->fn_1337)).line_);
(*(P159)rt_nil_check(F->nm_1338)).name_ = (*(P159)rt_nil_check(F->fn_1337)).name_;
(*(P159)rt_nil_check(F->nm_1338)).tag_ = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).a_)).name_;
F->fn_1337 = F->nm_1338;
}
if (((*(P159)rt_nil_check(F->fn_1337)).kind_ != F->up->n_name_13)) {
f_other_call_693(F->up, F->e_559, F->is_stmt_560, &(*F->t_561), &(*F->r_562));
goto ret_;
}
F->y_1339 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)));
if (((*(P159)rt_nil_check(F->fn_1337)).tag_ != NULL)) {
F->y_1339 = f_member_of_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)), (*(P159)rt_nil_check(F->fn_1337)).line_);
}
if ((F->y_1339 == NULL)) {
f_builtin_575(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)), (*(P159)rt_nil_check(F->e_559)).b_, (*(P159)rt_nil_check(F->e_559)).line_, F->is_stmt_560, &(*F->t_561), &(*F->r_562));
goto ret_;
}
if (((((*(P110)rt_nil_check(F->y_1339)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1339)).kind_ == F->up->y_proc_93)) && ((*(P159)rt_nil_check(F->fn_1337)).tag_ == NULL))) {
f_resolve_overload_612(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)), (*(P159)rt_nil_check(F->e_559)).b_, F->is_stmt_560, F->up->call_want_170, (*(P159)rt_nil_check(F->e_559)).line_, &F->y_1339);
if ((F->y_1339 == NULL)) {
f_builtin_575(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)), (*(P159)rt_nil_check(F->e_559)).b_, (*(P159)rt_nil_check(F->e_559)).line_, F->is_stmt_560, &(*F->t_561), &(*F->r_562));
goto ret_;
}
}
if (((*(P110)rt_nil_check(F->y_1339)).kind_ == F->up->y_entry_99)) {
f_other_call_693(F->up, F->e_559, F->is_stmt_560, &(*F->t_561), &(*F->r_562));
goto ret_;
}
if ((((*(P110)rt_nil_check(F->y_1339)).kind_ != F->up->y_func_92) && ((*(P110)rt_nil_check(F->y_1339)).kind_ != F->up->y_proc_93))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_559)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)), rt_str(" cannot be called", 17)));
}
if ((F->is_stmt_560 && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1339)).result_)).kind_ != F->up->t_void_83))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_559)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_560) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_1339)).result_)).kind_ == F->up->t_void_83))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_559)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->fn_1337)).name_)), rt_str(" is a procedure, not a function", 31)));
}
f_gcall_with_568(F->up, F->e_559, F->y_1339, &(*F->t_561), &(*F->r_562));
ret_:

  return;
}

static void f_gcall_with_568(struct f_greenc_1fr *up_, P159 e_564, P110 y_565, P115 *t_566, P133 *r_567) {
  struct f_gcall_with_568fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_564 = e_564;
F->y_565 = y_565;
F->t_566 = t_566;
F->r_567 = r_567;
F->args_1351 = NULL;
F->lv_1352 = NULL;
F->v_1353 = NULL;
F->a_1354 = NULL;
F->pm_1355 = NULL;
F->lt_1356 = NULL;
F->vt_1357 = NULL;
F->lc_1358 = NULL;
f_check_call_rules_748(F->up, F->e_564, F->y_565);
F->args_1351 = f_mk_178(F->up, rt_str("", 0));
if (((*(P110)rt_nil_check(F->y_565)).level_ > ((rt_int)0LL))) {
f_link_to_467(F->up, (*(P110)rt_nil_check(F->y_565)).level_, &F->args_1351);
}
F->pm_1355 = (*(P110)rt_nil_check(F->y_565)).params_;
while ((F->pm_1355 != NULL)) {
F->a_1354 = f_actual_for_558(F->up, (*(P159)rt_nil_check(F->e_564)).b_, F->pm_1355, (*(P110)rt_nil_check(F->y_565)).params_);
if ((((*(P133)rt_nil_check(F->args_1351))).len > ((rt_int)0LL))) {
F->args_1351 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1351)), rt_str(", ", 2)));
}
if ((F->a_1354 == NULL)) {
if ((((*(P1015)rt_nil_check(F->pm_1355)).dflt_ == NULL) || ((*(P1015)rt_nil_check(F->pm_1355)).mode_ != F->up->m_in_72))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_564)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).name_))));
}
f_gexpr_509(F->up, (*(P1015)rt_nil_check(F->pm_1355)).dflt_, (*(P1015)rt_nil_check(F->pm_1355)).t_, &F->vt_1357, &F->v_1353);
F->args_1351 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1351)), (*(P133)rt_nil_check(F->v_1353))));
} else {
if (((((*(P159)rt_nil_check(F->a_1354)).flag_ != ((rt_int)0LL)) && ((*(P159)rt_nil_check(F->a_1354)).flag_ != ((rt_int)4LL))) && ((*(P159)rt_nil_check(F->a_1354)).flag_ != (*(P1015)rt_nil_check(F->pm_1355)).mode_))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_564)).line_, rt_str_cat(rt_str_cat(rt_str("the association of ", 19), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).name_))), rt_str(" does not match its mode", 24)));
}
if (((*(P1015)rt_nil_check(F->pm_1355)).mode_ == F->up->m_in_72)) {
f_gexpr_509(F->up, F->a_1354, (*(P1015)rt_nil_check(F->pm_1355)).t_, &F->vt_1357, &F->v_1353);
f_check_type_346(F->up, F->vt_1357, (*(P1015)rt_nil_check(F->pm_1355)).t_, (*(P159)rt_nil_check(F->e_564)).line_);
if (((((*(P1015)rt_nil_check(F->pm_1355)).c_ != NULL) && ((*(P163)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).c_)).lo_ != NULL)) && (((*(P115)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).t_)).kind_ == F->up->t_int_75) || ((*(P115)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).t_)).kind_ == F->up->t_enum_78)))) {
F->v_1353 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P133)rt_nil_check(F->v_1353))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).c_)).lo_))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P163)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).c_)).hi_))), 41));
}
F->args_1351 = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check(F->args_1351)), (*(P133)rt_nil_check(F->v_1353))));
} else {
f_lvalue_481(F->up, F->a_1354, &F->lv_1352, &F->lt_1356, &F->lc_1358, &F->ro_1359);
if (F->ro_1359) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_564)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1355)).name_)), rt_str(" needs a variable", 17)));
}
f_check_pure_target_731(F->up, F->a_1354, (*(P159)rt_nil_check(F->e_564)).line_);
f_check_type_346(F->up, F->lt_1356, (*(P1015)rt_nil_check(F->pm_1355)).t_, (*(P159)rt_nil_check(F->e_564)).line_);
F->args_1351 = f_mk_178(F->up, rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->args_1351)), 38), (*(P133)rt_nil_check(F->lv_1352))));
}
}
F->pm_1355 = (*(P1015)rt_nil_check(F->pm_1355)).next_;
}
L_end_1360: ;
if (((f_list_len_226(F->up, (*(P159)rt_nil_check(F->e_564)).b_) > ((rt_int)0LL)) && ((*(P110)rt_nil_check(F->y_565)).params_ == NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_564)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_565)).name_)), rt_str(" takes no parameters", 20)));
}
(*F->t_566) = (*(P110)rt_nil_check(F->y_565)).result_;
(*F->r_567) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_565)).cname_)), 40), (*(P133)rt_nil_check(F->args_1351))), 41));
ret_:

  return;
}

static void f_builtin_575(struct f_greenc_1fr *up_, rstr name_569, P159 args_570, rt_int line_571, int is_stmt_572, P115 *t_573, P133 *r_574) {
  struct f_builtin_575fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_569 = rt_str_copy(name_569);
F->args_570 = args_570;
F->line_571 = line_571;
F->is_stmt_572 = is_stmt_572;
F->t_573 = t_573;
F->r_574 = r_574;
F->aty_1361 = NULL;
F->lt_1362 = NULL;
F->a_1363 = NULL;
F->w_1364 = NULL;
F->lv_1365 = NULL;
F->lc_1366 = NULL;
(*F->t_573) = F->up->ty_void_150;
if (((F->up->pure_sym_171 != NULL) && (rt_str_eq(F->name_569, rt_str("PUT", 3)) || rt_str_eq(F->name_569, rt_str("GET", 3))))) {
f_fail_195(F->up, F->line_571, rt_str_cat(rt_str_cat(rt_str("a function cannot do input-output: ", 35), F->name_569), rt_str(" has side effects (RM79 6.5)", 28)));
}
if (rt_str_eq(F->name_569, rt_str("PUT", 3))) {
if ((F->args_570 == NULL)) {
f_fail_195(F->up, F->line_571, rt_str("PUT needs an item", 17));
}
f_gexpr_509(F->up, F->args_570, NULL, &F->aty_1361, &F->a_1363);
F->w_1364 = f_mk_178(F->up, rt_str("0", 1));
if (((*(P159)rt_nil_check(F->args_570)).next_ != NULL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->args_570)).next_, F->up->ty_int_145, &F->lt_1362, &F->w_1364);
}
if (((*(P115)rt_nil_check(F->aty_1361)).kind_ == F->up->t_string_79)) {
(*F->r_574) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_put(", 9), (*(P133)rt_nil_check(F->a_1363))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1361)).kind_ == F->up->t_char_85)) {
(*F->r_574) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_putc(", 10), (*(P133)rt_nil_check(F->a_1363))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1361)).kind_ == F->up->t_int_75)) {
(*F->r_574) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_int(", 13), (*(P133)rt_nil_check(F->a_1363))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1364))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1361)).kind_ == F->up->t_bool_76)) {
(*F->r_574) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_bool(", 14), (*(P133)rt_nil_check(F->a_1363))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1364))), 41));
} else if (((*(P115)rt_nil_check(F->aty_1361)).kind_ == F->up->t_float_77)) {
(*F->r_574) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_float(", 15), (*(P133)rt_nil_check(F->a_1363))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->w_1364))), rt_str(", 0)", 4)));
} else {
f_fail_195(F->up, F->line_571, rt_str("PUT of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_569, rt_str("GET", 3))) {
f_lvalue_481(F->up, F->args_570, &F->lv_1365, &F->lt_1362, &F->lc_1366, &F->ro_1367);
if (((*(P115)rt_nil_check(F->lt_1362)).kind_ == F->up->t_char_85)) {
(*F->r_574) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1365))), rt_str(" = rt_g_getc())", 15)));
} else if (((*(P115)rt_nil_check(F->lt_1362)).kind_ == F->up->t_int_75)) {
(*F->r_574) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1365))), rt_str(" = rt_g_get_int())", 18)));
} else if (((*(P115)rt_nil_check(F->lt_1362)).kind_ == F->up->t_float_77)) {
(*F->r_574) = f_mk_178(F->up, rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->lv_1365))), rt_str(" = rt_g_get_float())", 20)));
} else {
f_fail_195(F->up, F->line_571, rt_str("GET of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_569, rt_str("ABS", 3))) {
f_gexpr_509(F->up, F->args_570, NULL, &(*F->t_573), &F->a_1363);
if (((*(P115)rt_nil_check((*F->t_573))).kind_ == F->up->t_int_75)) {
(*F->r_574) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_abs(", 7), (*(P133)rt_nil_check(F->a_1363))), 41));
} else {
(*F->r_574) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("fabs(", 5), (*(P133)rt_nil_check(F->a_1363))), 41));
}
} else {
f_task_builtin_708(F->up, F->name_569, F->args_570, F->line_571, &(*F->t_573), &(*F->r_574));
}
ret_:

  return;
}

static int f_is_package_577(struct f_greenc_1fr *up_, P159 e_576) {
  struct f_is_package_577fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_576 = e_576;
F->y_1368 = NULL;
if (((*(P159)rt_nil_check(F->e_576)).kind_ != F->up->n_name_13)) {
F->result_ = 0;
goto ret_;
}
F->y_1368 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_576)).name_)));
F->result_ = ((F->y_1368 != NULL) && (((*(P110)rt_nil_check(F->y_1368)).kind_ == F->up->y_package_97) || ((*(P110)rt_nil_check(F->y_1368)).kind_ == F->up->y_task_98)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P110 f_member_of_581(struct f_greenc_1fr *up_, rstr p_578, rstr name_579, rt_int line_580) {
  struct f_member_of_581fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_578 = rt_str_copy(p_578);
F->name_579 = rt_str_copy(name_579);
F->line_580 = line_580;
F->y_1369 = NULL;
F->y_1369 = f_lookup_319(F->up, F->p_578);
F->m_1370 = NULL;
if (((F->y_1369 == NULL) || (((*(P110)rt_nil_check(F->y_1369)).kind_ != F->up->y_package_97) && ((*(P110)rt_nil_check(F->y_1369)).kind_ != F->up->y_task_98)))) {
F->result_ = NULL;
goto ret_;
}
F->m_1370 = (*(P110)rt_nil_check(F->y_1369)).members_;
while ((F->m_1370 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1370)).name_)), F->name_579) && (!(*(P110)rt_nil_check(F->m_1370)).hidden_))) {
F->result_ = F->m_1370;
goto ret_;
}
F->m_1370 = (*(P110)rt_nil_check(F->m_1370)).mnext_;
}
L_end_1371: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_583(struct f_greenc_1fr *up_, P159 p_582) {
  struct f_inside_package_583fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_582 = p_582;
F->l_1372 = NULL;
F->l_1372 = F->up->pkg_stack_167;
if ((F->p_582 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_1372 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P140)rt_nil_check(F->l_1372)).s_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_582)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_1372 = (*(P140)rt_nil_check(F->l_1372)).next_;
}
L_end_1373: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_586(struct f_greenc_1fr *up_, P110 y_584, P110 *z_585) {
  struct f_copy_sym_586fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_584 = y_584;
F->z_585 = z_585;
(*F->z_585) = ({ R111 *cell1374 = rt_alloc(sizeof(R111)); *cell1374 = cp_R111(({ R111 ag1375; ag1375.kind_ = (*(P110)rt_nil_check(F->y_584)).kind_; ag1375.name_ = (*(P110)rt_nil_check(F->y_584)).name_; ag1375.t_ = (*(P110)rt_nil_check(F->y_584)).t_; ag1375.c_ = (*(P110)rt_nil_check(F->y_584)).c_; ag1375.access_path_ = (*(P110)rt_nil_check(F->y_584)).access_path_; ag1375.cname_ = (*(P110)rt_nil_check(F->y_584)).cname_; ag1375.ro_ = (*(P110)rt_nil_check(F->y_584)).ro_; ag1375.mvalue_ = (*(P110)rt_nil_check(F->y_584)).mvalue_; ag1375.hasmv_ = (*(P110)rt_nil_check(F->y_584)).hasmv_; ag1375.decl_ = (*(P110)rt_nil_check(F->y_584)).decl_; ag1375.params_ = (*(P110)rt_nil_check(F->y_584)).params_; ag1375.result_ = (*(P110)rt_nil_check(F->y_584)).result_; ag1375.depth_ = ((rt_int)0LL); ag1375.level_ = (*(P110)rt_nil_check(F->y_584)).level_; ag1375.byref_ = (*(P110)rt_nil_check(F->y_584)).byref_; ag1375.vrp_ = (*(P110)rt_nil_check(F->y_584)).vrp_; ag1375.hidden_ = (*(P110)rt_nil_check(F->y_584)).hidden_; ag1375.members_ = (*(P110)rt_nil_check(F->y_584)).members_; ag1375.mnext_ = NULL; ag1375.chain_ = NULL; ag1375.stack_ = NULL; ag1375; })); (P110)cell1374; });
ret_:

  return;
}

static void f_complete_private_589(struct f_greenc_1fr *up_, P115 ph_587, P115 full_588) {
  struct f_complete_private_589fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_587 = ph_587;
F->full_588 = full_588;
F->n_1376 = NULL;
F->n_1376 = (*(P115)rt_nil_check(F->ph_587)).name_;
F->p_1377 = NULL;
F->p_1377 = (*(P115)rt_nil_check(F->ph_587)).decl_;
as_R116(&(*(P115)rt_nil_check(F->ph_587)), (*(P115)rt_nil_check(F->full_588)));
(*(P115)rt_nil_check(F->ph_587)).name_ = F->n_1376;
(*(P115)rt_nil_check(F->ph_587)).priv_ = 1;
(*(P115)rt_nil_check(F->ph_587)).decl_ = F->p_1377;
ret_:

  return;
}

static void f_package_spec_591(struct f_greenc_1fr *up_, P159 e_590) {
  struct f_package_spec_591fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_590 = e_590;
F->y_1378 = NULL;
F->m_1379 = NULL;
F->z_1380 = NULL;
F->saved_1381 = NULL;
F->saved_1381 = F->up->cur_pkg_168;
F->first_private_1382 = NULL;
F->y_1378 = f_new_sym_337(F->up, F->up->y_package_97, (*(P159)rt_nil_check(F->e_590)).name_);
(*(P110)rt_nil_check(F->y_1378)).decl_ = F->e_590;
F->up->pkg_stack_167 = ({ R141 *cell1383 = rt_alloc(sizeof(R141)); *cell1383 = cp_R141(({ R141 ag1384; ag1384.s_ = (*(P159)rt_nil_check(F->e_590)).name_; ag1384.next_ = F->up->pkg_stack_167; ag1384; })); (P140)cell1383; });
F->up->cur_pkg_168 = F->e_590;
f_open_scope_333(F->up);
f_decl_elements_417(F->up, (*(P159)rt_nil_check(F->e_590)).c_);
F->first_private_1382 = F->up->scope_stack_114;
f_decl_elements_417(F->up, (*(P159)rt_nil_check(F->e_590)).d_);
F->m_1379 = F->up->scope_stack_114;
while (((F->m_1379 != NULL) && ((*(P110)rt_nil_check(F->m_1379)).depth_ == F->up->depth_113))) {
f_copy_sym_586(F->up, F->m_1379, &F->z_1380);
(*(P110)rt_nil_check(F->z_1380)).hidden_ = f_hidden_from_594(F->up, F->m_1379, F->first_private_1382);
(*(P110)rt_nil_check(F->z_1380)).mnext_ = (*(P110)rt_nil_check(F->y_1378)).members_;
(*(P110)rt_nil_check(F->y_1378)).members_ = F->z_1380;
F->m_1379 = (*(P110)rt_nil_check(F->m_1379)).stack_;
}
L_end_1385: ;
f_close_scope_334(F->up);
F->up->pkg_stack_167 = (*(P140)rt_nil_check(F->up->pkg_stack_167)).next_;
F->up->cur_pkg_168 = F->saved_1381;
f_define_332(F->up, F->y_1378, (*(P159)rt_nil_check(F->e_590)).line_);
ret_:

  return;
}

static int f_hidden_from_594(struct f_greenc_1fr *up_, P110 m_592, P110 first_private_593) {
  struct f_hidden_from_594fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_592 = m_592;
F->first_private_593 = first_private_593;
F->p_1386 = NULL;
F->p_1386 = F->up->scope_stack_114;
while ((F->p_1386 != NULL)) {
if ((F->p_1386 == F->first_private_593)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_1386 == F->m_592)) {
F->result_ = 1;
goto ret_;
}
F->p_1386 = (*(P110)rt_nil_check(F->p_1386)).stack_;
}
L_end_1387: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_596(struct f_greenc_1fr *up_, P159 e_595) {
  struct f_package_body_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_595 = e_595;
F->y_1388 = NULL;
F->y_1388 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_595)).name_)));
F->m_1389 = NULL;
F->z_1390 = NULL;
F->saved_1391 = NULL;
F->saved_1391 = F->up->cur_pkg_168;
if (((F->y_1388 != NULL) && ((*(P110)rt_nil_check(F->y_1388)).kind_ == F->up->y_generic_100))) {
f_attach_generic_body_759(F->up, F->e_595);
goto ret_;
}
if (((F->y_1388 == NULL) || ((*(P110)rt_nil_check(F->y_1388)).kind_ != F->up->y_package_97))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_595)).line_, rt_str_cat(rt_str_cat(rt_str("package body ", 13), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_595)).name_))), rt_str(" has no specification", 21)));
}
F->up->pkg_stack_167 = ({ R141 *cell1392 = rt_alloc(sizeof(R141)); *cell1392 = cp_R141(({ R141 ag1393; ag1393.s_ = (*(P159)rt_nil_check(F->e_595)).name_; ag1393.next_ = F->up->pkg_stack_167; ag1393; })); (P140)cell1392; });
F->up->cur_pkg_168 = (*(P110)rt_nil_check(F->y_1388)).decl_;
f_open_scope_333(F->up);
F->m_1389 = (*(P110)rt_nil_check(F->y_1388)).members_;
while ((F->m_1389 != NULL)) {
f_copy_sym_586(F->up, F->m_1389, &F->z_1390);
(*(P110)rt_nil_check(F->z_1390)).hidden_ = 0;
f_define_332(F->up, F->z_1390, (*(P159)rt_nil_check(F->e_595)).line_);
F->m_1389 = (*(P110)rt_nil_check(F->m_1389)).mnext_;
}
L_end_1394: ;
f_decl_elements_417(F->up, (*(P159)rt_nil_check(F->e_595)).c_);
F->m_1389 = (*(P110)rt_nil_check(F->y_1388)).members_;
while ((F->m_1389 != NULL)) {
if (((((*(P110)rt_nil_check(F->m_1389)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->m_1389)).kind_ == F->up->y_proc_93)) && ((*(P159)rt_nil_check((*(P110)rt_nil_check(F->m_1389)).decl_)).ival_ == ((rt_int)1LL)))) {
F->z_1390 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1389)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->z_1390 != NULL)) {
if (((*(P110)rt_nil_check(F->z_1390)).cname_ == (*(P110)rt_nil_check(F->m_1389)).cname_)) {
(*(P110)rt_nil_check(F->m_1389)).decl_ = (*(P110)rt_nil_check(F->z_1390)).decl_;
}
F->z_1390 = (*(P110)rt_nil_check(F->z_1390)).chain_;
}
L_end_1396: ;
if (((*(P159)rt_nil_check((*(P110)rt_nil_check(F->m_1389)).decl_)).ival_ == ((rt_int)1LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_595)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no body for ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1389)).name_))), rt_str(" in package body ", 17)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_595)).name_))));
}
}
F->m_1389 = (*(P110)rt_nil_check(F->m_1389)).mnext_;
}
L_end_1395: ;
f_guarded_435(F->up, (*(P159)rt_nil_check(F->e_595)).d_, (*(P159)rt_nil_check(F->e_595)).e_, (*(P159)rt_nil_check(F->e_595)).line_);
f_close_scope_334(F->up);
F->up->pkg_stack_167 = (*(P140)rt_nil_check(F->up->pkg_stack_167)).next_;
F->up->cur_pkg_168 = F->saved_1391;
ret_:

  return;
}

static void f_use_clause_598(struct f_greenc_1fr *up_, P159 e_597) {
  struct f_use_clause_598fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_597 = e_597;
F->n_1397 = NULL;
F->n_1397 = (*(P159)rt_nil_check(F->e_597)).a_;
F->y_1398 = NULL;
F->m_1399 = NULL;
F->z_1400 = NULL;
F->old_1401 = NULL;
while ((F->n_1397 != NULL)) {
F->y_1398 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1397)).name_)));
if ((F->y_1398 == NULL)) {
if ((!rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1397)).name_)), rt_str("TEXT_IO", 7)))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->n_1397)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1397)).name_)), rt_str(" is not a package", 17)));
}
} else if (((*(P110)rt_nil_check(F->y_1398)).kind_ != F->up->y_package_97)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->n_1397)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1397)).name_)), rt_str(" is not a package", 17)));
} else {
F->m_1399 = (*(P110)rt_nil_check(F->y_1398)).members_;
while ((F->m_1399 != NULL)) {
F->old_1401 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->m_1399)).name_)));
if (((!(*(P110)rt_nil_check(F->m_1399)).hidden_) && ((F->old_1401 == NULL) || ((((*(P110)rt_nil_check(F->old_1401)).depth_ < F->up->depth_113) && ((*(P110)rt_nil_check(F->old_1401)).kind_ != F->up->y_var_90)) && ((*(P110)rt_nil_check(F->old_1401)).kind_ != F->up->y_const_91))))) {
f_copy_sym_586(F->up, F->m_1399, &F->z_1400);
f_define_332(F->up, F->z_1400, (*(P159)rt_nil_check(F->n_1397)).line_);
}
F->m_1399 = (*(P110)rt_nil_check(F->m_1399)).mnext_;
}
L_end_1403: ;
}
F->n_1397 = (*(P159)rt_nil_check(F->n_1397)).next_;
}
L_end_1402: ;
ret_:

  return;
}

static void f_fits_603(struct f_greenc_1fr *up_, P110 y_599, P159 args_600, P115 want_601, int *ok_602) {
  struct f_fits_603fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_599 = y_599;
F->args_600 = args_600;
F->want_601 = want_601;
F->ok_602 = ok_602;
F->pm_1404 = NULL;
F->pm_1404 = (*(P110)rt_nil_check(F->y_599)).params_;
F->a_1405 = NULL;
F->t_1406 = NULL;
F->c_1407 = NULL;
F->v_1408 = NULL;
F->saved_1410 = NULL;
F->saved_1410 = F->up->code_129;
F->used_1411 = ((rt_int)0LL);
(*F->ok_602) = 1;
F->up->trial_144 = rt_add(F->up->trial_144, ((rt_int)1LL));
F->up->code_129 = f_new_buffer_196(F->up);
{
{ rt_frame xf1413;
if (RT_TRY(xf1413)) {
while (((*F->ok_602) && (F->pm_1404 != NULL))) {
F->a_1405 = f_actual_for_558(F->up, F->args_600, F->pm_1404, (*(P110)rt_nil_check(F->y_599)).params_);
if ((F->a_1405 == NULL)) {
(*F->ok_602) = ((*(P1015)rt_nil_check(F->pm_1404)).dflt_ != NULL);
} else {
F->used_1411 = rt_add(F->used_1411, ((rt_int)1LL));
if (((((*(P159)rt_nil_check(F->a_1405)).flag_ != ((rt_int)0LL)) && ((*(P159)rt_nil_check(F->a_1405)).flag_ != ((rt_int)4LL))) && ((*(P159)rt_nil_check(F->a_1405)).flag_ != (*(P1015)rt_nil_check(F->pm_1404)).mode_))) {
(*F->ok_602) = 0;
} else if (((*(P1015)rt_nil_check(F->pm_1404)).mode_ == F->up->m_in_72)) {
f_gexpr_509(F->up, F->a_1405, (*(P1015)rt_nil_check(F->pm_1404)).t_, &F->t_1406, &F->v_1408);
(*F->ok_602) = (f_same_326(F->up, F->t_1406, (*(P1015)rt_nil_check(F->pm_1404)).t_) || (((*(P115)rt_nil_check(F->t_1406)).kind_ == F->up->t_nil_84) && ((*(P115)rt_nil_check((*(P1015)rt_nil_check(F->pm_1404)).t_)).kind_ == F->up->t_ptr_82)));
} else {
f_lvalue_481(F->up, F->a_1405, &F->v_1408, &F->t_1406, &F->c_1407, &F->ro_1409);
(*F->ok_602) = f_same_326(F->up, F->t_1406, (*(P1015)rt_nil_check(F->pm_1404)).t_);
}
}
F->pm_1404 = (*(P1015)rt_nil_check(F->pm_1404)).next_;
}
L_end_1415: ;
if ((F->used_1411 != f_list_len_226(F->up, F->args_600))) {
(*F->ok_602) = 0;
}
if ((((*F->ok_602) && (F->want_601 != NULL)) && ((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_599)).result_)).kind_ != F->up->t_void_83))) {
(*F->ok_602) = (f_same_326(F->up, (*(P110)rt_nil_check(F->y_599)).result_, F->want_601) || ((*(P115)rt_nil_check(F->want_601)).kind_ == F->up->t_void_83));
}
RT_POP(xf1413);
} else {
RT_POP(xf1413);
int x1414 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1414);
if (0 || x1414 == ex_compile_error_101) {
(*F->ok_602) = 0;
} else {
rt_raise(x1414);
}
}
}

}
L_end_1412: ;
F->up->trial_144 = rt_sub(F->up->trial_144, ((rt_int)1LL));
F->up->code_129 = F->saved_1410;
ret_:

  return;
}

static int f_is_builtin_605(struct f_greenc_1fr *up_, rstr n_604) {
  struct f_is_builtin_605fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_604 = rt_str_copy(n_604);
F->result_ = (((rt_str_eq(F->n_604, rt_str("PUT", 3)) || rt_str_eq(F->n_604, rt_str("GET", 3))) || rt_str_eq(F->n_604, rt_str("ABS", 3))) || rt_str_eq(F->n_604, rt_str("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_612(struct f_greenc_1fr *up_, rstr name_606, P159 args_607, int is_stmt_608, P115 want_609, rt_int line_610, P110 *y_611) {
  struct f_resolve_overload_612fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_606 = rt_str_copy(name_606);
F->args_607 = args_607;
F->is_stmt_608 = is_stmt_608;
F->want_609 = want_609;
F->line_610 = line_610;
F->y_611 = y_611;
F->z_1416 = NULL;
F->z_1416 = F->up->table_112.p[rt_index(f_hash_317(F->up, F->name_606), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->first_1417 = NULL;
F->n_1418 = ((rt_int)0LL);
{ rt_int lo1422 = ((rt_int)1LL), hi1423 = ((rt_int)2LL);
for (rt_int it1424 = lo1422; it1424 <= hi1423; it1424++) {
F->pass_1421 = it1424;
F->z_1416 = F->up->table_112.p[rt_index(f_hash_317(F->up, F->name_606), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
F->n_1418 = ((rt_int)0LL);
while ((F->z_1416 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->z_1416)).name_)), F->name_606) && (((*(P110)rt_nil_check(F->z_1416)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->z_1416)).kind_ == F->up->y_proc_93)))) {
F->n_1418 = rt_add(F->n_1418, ((rt_int)1LL));
if ((F->first_1417 == NULL)) {
F->first_1417 = F->z_1416;
}
if ((((*(P115)rt_nil_check((*(P110)rt_nil_check(F->z_1416)).result_)).kind_ == F->up->t_void_83) == F->is_stmt_608)) {
if ((F->pass_1421 == ((rt_int)1LL))) {
f_fits_603(F->up, F->z_1416, F->args_607, F->want_609, &F->ok_1419);
} else {
f_fits_603(F->up, F->z_1416, F->args_607, NULL, &F->ok_1419);
}
if (F->ok_1419) {
(*F->y_611) = F->z_1416;
goto ret_;
}
}
}
F->z_1416 = (*(P110)rt_nil_check(F->z_1416)).chain_;
}
L_end_1425: ;
}
}
L_end_1420: ;
if (f_is_builtin_605(F->up, F->name_606)) {
(*F->y_611) = NULL;
goto ret_;
}
if ((F->n_1418 > ((rt_int)1LL))) {
f_fail_195(F->up, F->line_610, rt_str_cat(rt_str_cat(rt_str("no declaration of ", 18), F->name_606), rt_str(" fits these actual parameters", 29)));
}
(*F->y_611) = F->first_1417;
ret_:

  return;
}

static void f_user_operator_618(struct f_greenc_1fr *up_, P159 e_613, P115 want_614, P115 *t_615, P133 *r_616, int *done_617) {
  struct f_user_operator_618fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_613 = e_613;
F->want_614 = want_614;
F->t_615 = t_615;
F->r_616 = r_616;
F->done_617 = done_617;
F->op_1426 = NULL;
F->op_1426 = (*(P159)rt_nil_check(F->e_613)).name_;
F->negate_1427 = 0;
F->y_1428 = NULL;
F->call_1429 = NULL;
F->fname_1430 = NULL;
F->l_1431 = NULL;
F->rt_1432 = NULL;
(*F->done_617) = 0;
if (rt_str_eq((*(P133)rt_nil_check(F->op_1426)), rt_str("/=", 2))) {
F->op_1426 = f_mk_178(F->up, rt_str("=", 1));
F->negate_1427 = 1;
}
if ((f_lookup_319(F->up, (*(P133)rt_nil_check(F->op_1426))) == NULL)) {
goto ret_;
}
F->l_1431 = f_nn_220(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_613)).a_)).kind_, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_613)).a_)).line_);
as_R160(&(*(P159)rt_nil_check(F->l_1431)), (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_613)).a_)));
(*(P159)rt_nil_check(F->l_1431)).next_ = NULL;
(*(P159)rt_nil_check(F->l_1431)).tag_ = NULL;
(*(P159)rt_nil_check(F->l_1431)).flag_ = ((rt_int)0LL);
if (((*(P159)rt_nil_check(F->e_613)).kind_ == F->up->n_binop_15)) {
F->rt_1432 = f_nn_220(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_613)).b_)).kind_, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_613)).b_)).line_);
as_R160(&(*(P159)rt_nil_check(F->rt_1432)), (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_613)).b_)));
(*(P159)rt_nil_check(F->rt_1432)).next_ = NULL;
(*(P159)rt_nil_check(F->rt_1432)).tag_ = NULL;
(*(P159)rt_nil_check(F->rt_1432)).flag_ = ((rt_int)0LL);
(*(P159)rt_nil_check(F->l_1431)).next_ = F->rt_1432;
}
F->y_1428 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check(F->op_1426))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while ((F->y_1428 != NULL)) {
if ((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1428)).name_)), (*(P133)rt_nil_check(F->op_1426))) && ((*(P110)rt_nil_check(F->y_1428)).kind_ == F->up->y_func_92))) {
f_fits_603(F->up, F->y_1428, F->l_1431, NULL, &F->ok_1433);
if (F->ok_1433) {
F->fname_1430 = f_nn_220(F->up, F->up->n_name_13, (*(P159)rt_nil_check(F->e_613)).line_);
(*(P159)rt_nil_check(F->fname_1430)).name_ = F->op_1426;
F->call_1429 = f_nn_220(F->up, F->up->n_apply_16, (*(P159)rt_nil_check(F->e_613)).line_);
(*(P159)rt_nil_check(F->call_1429)).a_ = F->fname_1430;
(*(P159)rt_nil_check(F->call_1429)).b_ = F->l_1431;
F->up->call_want_170 = NULL;
f_gcall_with_568(F->up, F->call_1429, F->y_1428, &(*F->t_615), &(*F->r_616));
if (F->negate_1427) {
(*F->r_616) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P133)rt_nil_check((*F->r_616)))), 41));
}
(*F->done_617) = 1;
goto ret_;
}
}
F->y_1428 = (*(P110)rt_nil_check(F->y_1428)).chain_;
}
L_end_1434: ;
ret_:

  return;
}

static void f_task_p_620(struct f_greenc_1fr *up_, P159 *res_619) {
  struct f_task_p_620fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_619 = res_619;
F->x_1435 = NULL;
F->line_1436 = f_cur_line_227(F->up);
f_expect_kw_242(F->up, rt_str("TASK", 4));
if (f_at_kw_229(F->up, rt_str("BODY", 4))) {
f_skip_240(F->up);
F->x_1435 = f_nn_220(F->up, F->up->n_taskbody_53, F->line_1436);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1435)).name_);
f_expect_kw_242(F->up, rt_str("IS", 2));
f_body_part_296(F->up, F->x_1435);
} else {
F->x_1435 = f_nn_220(F->up, F->up->n_taskspec_52, F->line_1436);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1435)).name_);
if (((f_at_kw_229(F->up, rt_str("IS", 2)) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("NEW", 3)))) {
f_instantiation_753(F->up, F->x_1435, &(*F->res_619));
goto ret_;
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("RANGE", 5)))) {
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_1435)).a_);
} else {
(*(P159)rt_nil_check(F->x_1435)).a_ = f_nn_220(F->up, F->up->n_range_22, F->line_1436);
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1435)).a_)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1435)).a_)).b_);
}
f_expect_op_244(F->up, rt_str(")", 1));
}
if (f_at_kw_229(F->up, rt_str("IS", 2))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_1435)).c_);
if (f_at_kw_229(F->up, rt_str("PRIVATE", 7))) {
f_skip_240(F->up);
f_decl_part_284(F->up, &(*(P159)rt_nil_check(F->x_1435)).d_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
}
}
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_619) = F->x_1435;
ret_:

  return;
}

static void f_entry_p_622(struct f_greenc_1fr *up_, P159 *res_621) {
  struct f_entry_p_622fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_621 = res_621;
F->x_1437 = NULL;
f_expect_kw_242(F->up, rt_str("ENTRY", 5));
F->x_1437 = f_nn_220(F->up, F->up->n_entry_54, f_cur_line_227(F->up));
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1437)).name_);
if ((f_at_op_231(F->up, rt_str("(", 1)) && (!((f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_id_3) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_240(F->up);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(")", 1)))) {
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->x_1437)).b_);
} else {
(*(P159)rt_nil_check(F->x_1437)).b_ = f_nn_220(F->up, F->up->n_range_22, f_cur_line_227(F->up));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1437)).b_)).a_);
f_expect_op_244(F->up, rt_str("..", 2));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1437)).b_)).b_);
}
f_expect_op_244(F->up, rt_str(")", 1));
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->x_1437)).a_);
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_621) = F->x_1437;
ret_:

  return;
}

static void f_accept_p_624(struct f_greenc_1fr *up_, P159 *res_623) {
  struct f_accept_p_624fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_623 = res_623;
F->x_1438 = NULL;
f_expect_kw_242(F->up, rt_str("ACCEPT", 6));
F->x_1438 = f_nn_220(F->up, F->up->n_accept_39, f_cur_line_227(F->up));
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->x_1438)).name_);
if ((f_at_op_231(F->up, rt_str("(", 1)) && (!((f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_id_3) && (rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)2LL)), rt_str(",", 1))))))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->x_1438)).c_);
f_expect_op_244(F->up, rt_str(")", 1));
}
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->x_1438)).a_);
}
if (f_at_kw_229(F->up, rt_str("DO", 2))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_1438)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_1438)).b_);
f_expect_kw_242(F->up, rt_str("END", 3));
if (f_at_kind_233(F->up, F->up->k_id_3)) {
f_skip_240(F->up);
}
}
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_623) = F->x_1438;
ret_:

  return;
}

static void f_delay_p_626(struct f_greenc_1fr *up_, P159 *res_625) {
  struct f_delay_p_626fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_625 = res_625;
F->x_1439 = NULL;
f_expect_kw_242(F->up, rt_str("DELAY", 5));
F->x_1439 = f_nn_220(F->up, F->up->n_delay_37, f_cur_line_227(F->up));
f_simple_expr_263(F->up, &(*(P159)rt_nil_check(F->x_1439)).a_);
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_625) = F->x_1439;
ret_:

  return;
}

static void f_designators_628(struct f_greenc_1fr *up_, P159 *res_627) {
  struct f_designators_628fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_627 = res_627;
F->head_1440 = NULL;
F->tail_1441 = NULL;
F->n_1442 = NULL;
for (;;) {
f_name_p_273(F->up, &F->n_1442);
f_append_224(F->up, &F->head_1440, &F->tail_1441, F->n_1442);
if ((!f_at_op_231(F->up, rt_str(",", 1)))) {
goto L_end_1443;
}
f_skip_240(F->up);
}
L_end_1443: ;
f_expect_op_244(F->up, rt_str(";", 1));
(*F->res_627) = F->head_1440;
ret_:

  return;
}

static void f_parse_task_statement_630(struct f_greenc_1fr *up_, P159 *res_629) {
  struct f_parse_task_statement_630fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_629 = res_629;
F->x_1444 = NULL;
F->alt_1445 = NULL;
F->head_1446 = NULL;
F->tail_1447 = NULL;
F->line_1448 = f_cur_line_227(F->up);
(*F->res_629) = NULL;
if (f_at_kw_229(F->up, rt_str("INITIATE", 8))) {
f_skip_240(F->up);
F->x_1444 = f_nn_220(F->up, F->up->n_initiate_38, F->line_1448);
f_designators_628(F->up, &(*(P159)rt_nil_check(F->x_1444)).a_);
(*F->res_629) = F->x_1444;
} else if (f_at_kw_229(F->up, rt_str("ABORT", 5))) {
f_skip_240(F->up);
F->x_1444 = f_nn_220(F->up, F->up->n_abort_41, F->line_1448);
f_designators_628(F->up, &(*(P159)rt_nil_check(F->x_1444)).a_);
(*F->res_629) = F->x_1444;
} else if (f_at_kw_229(F->up, rt_str("DELAY", 5))) {
f_delay_p_626(F->up, &(*F->res_629));
} else if (f_at_kw_229(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_624(F->up, &(*F->res_629));
} else if (f_at_kw_229(F->up, rt_str("SELECT", 6))) {
f_skip_240(F->up);
F->x_1444 = f_nn_220(F->up, F->up->n_selects_40, F->line_1448);
for (;;) {
F->alt_1445 = f_nn_220(F->up, F->up->n_alt_62, f_cur_line_227(F->up));
if (f_at_kw_229(F->up, rt_str("WHEN", 4))) {
f_skip_240(F->up);
f_expr_257(F->up, &(*(P159)rt_nil_check(F->alt_1445)).a_);
f_expect_op_244(F->up, rt_str("=>", 2));
}
if (f_at_kw_229(F->up, rt_str("ACCEPT", 6))) {
f_accept_p_624(F->up, &(*(P159)rt_nil_check(F->alt_1445)).b_);
} else if (f_at_kw_229(F->up, rt_str("DELAY", 5))) {
f_delay_p_626(F->up, &(*(P159)rt_nil_check(F->alt_1445)).b_);
} else {
f_perror_239(F->up, rt_str("a select alternative starts with accept or delay", 48));
}
f_statements_303(F->up, &(*(P159)rt_nil_check(F->alt_1445)).c_);
f_append_224(F->up, &F->head_1446, &F->tail_1447, F->alt_1445);
if ((!f_at_kw_229(F->up, rt_str("OR", 2)))) {
goto L_end_1449;
}
f_skip_240(F->up);
}
L_end_1449: ;
if (f_at_kw_229(F->up, rt_str("ELSE", 4))) {
f_skip_240(F->up);
(*(P159)rt_nil_check(F->x_1444)).flag_ = ((rt_int)1LL);
f_statements_303(F->up, &(*(P159)rt_nil_check(F->x_1444)).b_);
}
f_expect_kw_242(F->up, rt_str("END", 3));
f_expect_kw_242(F->up, rt_str("SELECT", 6));
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->x_1444)).a_ = F->head_1446;
(*F->res_629) = F->x_1444;
}
ret_:

  return;
}

static void f_path_at_634(struct f_greenc_1fr *up_, rt_int level_631, rstr field_632, P133 *r_633) {
  struct f_path_at_634fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_631 = level_631;
F->field_632 = rt_str_copy(field_632);
F->r_633 = r_633;
if ((F->level_631 <= ((rt_int)0LL))) {
(*F->r_633) = f_mk_178(F->up, F->field_632);
goto ret_;
}
(*F->r_633) = f_mk_178(F->up, rt_str("F", 1));
{ rt_int lo1452 = ((rt_int)1LL), hi1453 = rt_sub(F->up->cur_level_132, F->level_631);
for (rt_int it1454 = lo1452; it1454 <= hi1453; it1454++) {
F->i_1451 = it1454;
(*F->r_633) = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*F->r_633))), rt_str("->up", 4)));
}
}
L_end_1450: ;
(*F->r_633) = f_mk_178(F->up, rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->r_633))), rt_str("->", 2)), F->field_632));
ret_:

  return;
}

static int f_is_task_name_636(struct f_greenc_1fr *up_, rstr n_635) {
  struct f_is_task_name_636fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_635 = rt_str_copy(n_635);
F->y_1455 = NULL;
F->y_1455 = f_lookup_319(F->up, F->n_635);
F->result_ = ((F->y_1455 != NULL) && ((*(P110)rt_nil_check(F->y_1455)).kind_ == F->up->y_task_98));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_640(struct f_greenc_1fr *up_, P159 e_637, P110 *y_638, P159 *ix_639) {
  struct f_task_of_640fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_637 = e_637;
F->y_638 = y_638;
F->ix_639 = ix_639;
F->n_1456 = NULL;
F->n_1456 = F->e_637;
(*F->ix_639) = NULL;
if (((*(P159)rt_nil_check(F->e_637)).kind_ == F->up->n_apply_16)) {
F->n_1456 = (*(P159)rt_nil_check(F->e_637)).a_;
(*F->ix_639) = (*(P159)rt_nil_check(F->e_637)).b_;
}
if (((*(P159)rt_nil_check(F->n_1456)).kind_ != F->up->n_name_13)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_637)).line_, rt_str("a task name is required", 23));
}
(*F->y_638) = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1456)).name_)));
if ((((*F->y_638) == NULL) || ((*(P110)rt_nil_check((*F->y_638))).kind_ != F->up->y_task_98))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_637)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1456)).name_)), rt_str(" is not a task", 14)));
}
if ((((*F->ix_639) != NULL) && ((*(P110)rt_nil_check((*F->y_638))).c_ == NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_637)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1456)).name_)), rt_str(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_642(struct f_greenc_1fr *up_, P133 *r_641) {
  struct f_own_index_642fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_641 = r_641;
F->y_1457 = NULL;
F->y_1457 = f_lookup_319(F->up, rt_str("INDEX_", 6));
if ((F->y_1457 == NULL)) {
f_fail_195(F->up, ((rt_int)0LL), rt_str("not inside the body of a task family", 36));
}
f_access_of_464(F->up, F->y_1457, &(*F->r_641));
ret_:

  return;
}

static void f_member_647(struct f_greenc_1fr *up_, P110 y_643, rstr arr_644, rstr i_645, P133 *r_646) {
  struct f_member_647fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_643 = y_643;
F->arr_644 = rt_str_copy(arr_644);
F->i_645 = rt_str_copy(i_645);
F->r_646 = r_646;
F->lo_1458 = NULL;
F->hi_1459 = NULL;
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_643)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_643)).cname_)), rt_str("lo", 2)), &F->lo_1458);
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_643)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_643)).cname_)), rt_str("hi", 2)), &F->hi_1459);
(*F->r_646) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->arr_644, rt_str("[rt_index(", 10)), F->i_645), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1458))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1459))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1458))), 93));
ret_:

  return;
}

static void f_act_path_650(struct f_greenc_1fr *up_, P110 y_648, P133 *r_649) {
  struct f_act_path_650fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_648 = y_648;
F->r_649 = r_649;
F->i_1460 = NULL;
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_648)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_648)).cname_)), rt_str("act", 3)), &(*F->r_649));
if (((*(P110)rt_nil_check(F->y_648)).c_ != NULL)) {
f_own_index_642(F->up, &F->i_1460);
f_member_647(F->up, F->y_648, (*(P133)rt_nil_check((*F->r_649))), (*(P133)rt_nil_check(F->i_1460)), &(*F->r_649));
}
ret_:

  return;
}

static void f_act_path_i_654(struct f_greenc_1fr *up_, P110 y_651, rstr i_652, P133 *r_653) {
  struct f_act_path_i_654fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_651 = y_651;
F->i_652 = rt_str_copy(i_652);
F->r_653 = r_653;
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_651)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_651)).cname_)), rt_str("act", 3)), &(*F->r_653));
f_member_647(F->up, F->y_651, (*(P133)rt_nil_check((*F->r_653))), F->i_652, &(*F->r_653));
ret_:

  return;
}

static void f_entry_path_658(struct f_greenc_1fr *up_, P110 y_655, rstr i_656, P133 *r_657) {
  struct f_entry_path_658fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_655 = y_655;
F->i_656 = rt_str_copy(i_656);
F->r_657 = r_657;
F->own_1461 = NULL;
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_655)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_655)).access_path_)), &(*F->r_657));
if ((((*(P110)rt_nil_check(F->y_655)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_655)).members_)).c_ != NULL))) {
if (((F->i_656).len == ((rt_int)0LL))) {
f_own_index_642(F->up, &F->own_1461);
f_member_647(F->up, (*(P110)rt_nil_check(F->y_655)).members_, (*(P133)rt_nil_check((*F->r_657))), (*(P133)rt_nil_check(F->own_1461)), &(*F->r_657));
} else {
f_member_647(F->up, (*(P110)rt_nil_check(F->y_655)).members_, (*(P133)rt_nil_check((*F->r_657))), F->i_656, &(*F->r_657));
}
}
ret_:

  return;
}

static void f_declare_slot_661(struct f_greenc_1fr *up_, rstr ctype_name_659, rstr field_660) {
  struct f_declare_slot_661fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_659 = rt_str_copy(ctype_name_659);
F->field_660 = rt_str_copy(field_660);
if (F->up->in_func_131) {
f_put_to_199(F->up, F->up->fields_buf_130, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, F->ctype_name_659), 32), F->field_660), 59));
} else {
f_put_to_199(F->up, F->up->out_globals_125, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), F->ctype_name_659), 32), F->field_660), 59));
}
ret_:

  return;
}

static void f_task_decl_663(struct f_greenc_1fr *up_, P159 e_662) {
  struct f_task_decl_663fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_662 = e_662;
if (((*(P159)rt_nil_check(F->e_662)).kind_ == F->up->n_taskspec_52)) {
f_task_spec_675(F->up, F->e_662);
} else if (((*(P159)rt_nil_check(F->e_662)).kind_ == F->up->n_taskbody_53)) {
f_task_body_679(F->up, F->e_662);
} else if (((*(P159)rt_nil_check(F->e_662)).kind_ == F->up->n_entry_54)) {
f_entry_decl_677(F->up, F->e_662);
} else {
f_generic_decl_755(F->up, F->e_662);
}
ret_:

  return;
}

static void f_family_arg_struct_664(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_664fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!F->up->famarg_done_158)) {
F->up->famarg_done_158 = 1;
f_put_to_199(F->up, F->up->out_types_121, rt_str("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_668(struct f_greenc_1fr *up_, P159 b_665, P110 y_666, P133 x_667) {
  struct f_family_bounds_668fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_665 = b_665;
F->y_666 = y_666;
F->x_667 = x_667;
F->lo_1462 = NULL;
F->hi_1463 = NULL;
F->v_1464 = NULL;
F->vt_1465 = NULL;
F->c_1466 = NULL;
(*(P110)rt_nil_check(F->y_666)).c_ = f_new_cons_340(F->up);
f_declare_slot_661(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_666)).access_path_)));
f_declare_slot_661(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_666)).cname_)), rt_str("flo", 3)));
f_declare_slot_661(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_666)).cname_)), rt_str("fhi", 3)));
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_666)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_666)).cname_)), rt_str("flo", 3)), &F->lo_1462);
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_666)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_666)).cname_)), rt_str("fhi", 3)), &F->hi_1463);
if (((*(P159)rt_nil_check(F->b_665)).kind_ == F->up->n_range_22)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->b_665)).a_, NULL, &F->vt_1465, &F->v_1464);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1462)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1464))), 59));
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->b_665)).b_, F->vt_1465, &F->vt_1465, &F->v_1464);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->hi_1463)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1464))), 59));
} else {
f_resolve_367(F->up, F->b_665, &F->vt_1465, &F->c_1466);
if (((*(P163)rt_nil_check(F->c_1466)).lo_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->b_665)).line_, rt_str("an entry family needs a discrete range", 38));
}
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->lo_1462)), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1466)).lo_))), rt_str("; ", 2)), (*(P133)rt_nil_check(F->hi_1463))), rt_str(" = ", 3)), (*(P133)rt_nil_check((*(P163)rt_nil_check(F->c_1466)).hi_))), 59));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_667)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1463))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1462))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1463))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1462))), rt_str(" + 1 : 1));", 11)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1463))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1462))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_667))), rt_str("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_673(struct f_greenc_1fr *up_, P110 y_669, rstr base_670, rstr i_671, P133 *r_672) {
  struct f_entry_family_slot_673fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_669 = y_669;
F->base_670 = rt_str_copy(base_670);
F->i_671 = rt_str_copy(i_671);
F->r_672 = r_672;
F->lo_1467 = NULL;
F->hi_1468 = NULL;
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_669)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_669)).cname_)), rt_str("flo", 3)), &F->lo_1467);
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_669)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_669)).cname_)), rt_str("fhi", 3)), &F->hi_1468);
(*F->r_672) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_670, rt_str("[rt_index(", 10)), F->i_671), rt_str(", ", 2)), (*(P133)rt_nil_check(F->lo_1467))), rt_str(", ", 2)), (*(P133)rt_nil_check(F->hi_1468))), rt_str(") - ", 4)), (*(P133)rt_nil_check(F->lo_1467))), 93));
ret_:

  return;
}

static void f_task_spec_675(struct f_greenc_1fr *up_, P159 e_674) {
  struct f_task_spec_675fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_674 = e_674;
F->y_1469 = NULL;
F->m_1470 = NULL;
F->z_1471 = NULL;
F->saved_1472 = NULL;
F->saved_1472 = F->up->cur_task_156;
F->d_1473 = NULL;
F->v_1474 = NULL;
F->p_1475 = NULL;
F->p2_1476 = NULL;
F->vt_1477 = NULL;
F->r_1478 = NULL;
F->y_1469 = f_new_sym_337(F->up, F->up->y_task_98, (*(P159)rt_nil_check(F->e_674)).name_);
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("t_", 2), f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_674)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1469)).cname_);
(*(P110)rt_nil_check(F->y_1469)).decl_ = F->e_674;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1469)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1469)).access_path_ = (*(P110)rt_nil_check(F->y_1469)).cname_;
f_declare_slot_661(F->up, rt_str("rt_taskdecl", 11), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("decl", 4)));
if (((*(P159)rt_nil_check(F->e_674)).a_ != NULL)) {
F->r_1478 = (*(P159)rt_nil_check(F->e_674)).a_;
if (((*(P159)rt_nil_check(F->r_1478)).kind_ == F->up->s_mark_71)) {
F->r_1478 = (*(P159)rt_nil_check(F->r_1478)).a_;
}
(*(P110)rt_nil_check(F->y_1469)).c_ = f_new_cons_340(F->up);
f_declare_slot_661(F->up, rt_str("rt_act *", 8), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("act", 3)));
f_declare_slot_661(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("lo", 2)));
f_declare_slot_661(F->up, rt_str("rt_int", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("hi", 2)));
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1478)).a_, F->up->ty_int_145, &F->vt_1477, &F->v_1474);
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_1469)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("lo", 2)), &F->p_1475);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p_1475)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1474))), 59));
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->r_1478)).b_, F->up->ty_int_145, &F->vt_1477, &F->v_1474);
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_1469)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("hi", 2)), &F->p2_1476);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->p2_1476)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1474))), 59));
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_1469)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("act", 3)), &F->v_1474);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->v_1474)), rt_str(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P133)rt_nil_check(F->p2_1476))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->p_1475))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->p2_1476))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->p_1475))), rt_str(" + 1 : 1));", 11)));
f_family_arg_struct_664(F->up);
} else {
f_declare_slot_661(F->up, rt_str("rt_act", 6), rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_)), rt_str("act", 3)));
}
f_put_to_199(F->up, F->up->out_protos_124, rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_))), rt_str("run(void *a);", 13)));
if ((!F->up->in_func_131)) {
f_put_to_199(F->up, F->up->out_awaits_162, rt_str_cat(rt_str_cat(rt_str("  rt_await_decl(&", 17), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1469)).cname_))), rt_str("decl);", 6)));
}
f_open_scope_333(F->up);
F->up->cur_task_156 = F->y_1469;
f_decl_elements_417(F->up, (*(P159)rt_nil_check(F->e_674)).c_);
f_decl_elements_417(F->up, (*(P159)rt_nil_check(F->e_674)).d_);
F->m_1470 = F->up->scope_stack_114;
while (((F->m_1470 != NULL) && ((*(P110)rt_nil_check(F->m_1470)).depth_ == F->up->depth_113))) {
if ((((*(P110)rt_nil_check(F->m_1470)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->m_1470)).kind_ == F->up->y_proc_93))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_674)).line_, rt_str("procedures in the visible part of a task are not handled", 56));
}
f_copy_sym_586(F->up, F->m_1470, &F->z_1471);
(*(P110)rt_nil_check(F->z_1471)).mnext_ = (*(P110)rt_nil_check(F->y_1469)).members_;
(*(P110)rt_nil_check(F->y_1469)).members_ = F->z_1471;
F->m_1470 = (*(P110)rt_nil_check(F->m_1470)).stack_;
}
L_end_1479: ;
f_close_scope_334(F->up);
F->up->cur_task_156 = F->saved_1472;
f_define_332(F->up, F->y_1469, (*(P159)rt_nil_check(F->e_674)).line_);
ret_:

  return;
}

static void f_entry_decl_677(struct f_greenc_1fr *up_, P159 e_676) {
  struct f_entry_decl_677fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_676 = e_676;
F->y_1480 = NULL;
F->p_1481 = NULL;
F->p_1481 = (*(P159)rt_nil_check(F->e_676)).a_;
F->pm_1482 = NULL;
F->tail_1483 = NULL;
F->fields_1484 = NULL;
F->ct_1485 = NULL;
F->x_1486 = NULL;
F->lo_1487 = NULL;
F->hi_1488 = NULL;
if ((F->up->cur_task_156 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_676)).line_, rt_str("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_1480 = f_new_sym_337(F->up, F->up->y_entry_99, (*(P159)rt_nil_check(F->e_676)).name_);
f_new_name_181(F->up, rt_str_catc(rt_str_cat(rt_str("e_", 2), f_lower_s_189(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_676)).name_)))), 95), &(*(P110)rt_nil_check(F->y_1480)).cname_);
F->fields_1484 = f_mk_178(F->up, rt_str(" int dummy_;", 12));
while ((F->p_1481 != NULL)) {
F->pm_1482 = ({ R1016 *cell1490 = rt_alloc(sizeof(R1016)); *cell1490 = cp_R1016(({ R1016 ag1491; ag1491.name_ = (*(P159)rt_nil_check(F->p_1481)).name_; ag1491.mode_ = (*(P159)rt_nil_check(F->p_1481)).ival_; ag1491.t_ = NULL; ag1491.c_ = NULL; ag1491.cfield_ = NULL; ag1491.dflt_ = NULL; ag1491.next_ = NULL; ag1491; })); (P1015)cell1490; });
f_resolve_367(F->up, (*(P159)rt_nil_check(F->p_1481)).a_, &(*(P1015)rt_nil_check(F->pm_1482)).t_, &(*(P1015)rt_nil_check(F->pm_1482)).c_);
(*(P1015)rt_nil_check(F->pm_1482)).cfield_ = f_mk_178(F->up, f_c_field_191(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_1481)).name_))));
f_ctype_351(F->up, (*(P1015)rt_nil_check(F->pm_1482)).t_, &F->ct_1485);
if (((*(P1015)rt_nil_check(F->pm_1482)).mode_ == F->up->m_in_72)) {
F->fields_1484 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1484)), 32), (*(P133)rt_nil_check(F->ct_1485))), 32), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1482)).cfield_))), 59));
} else {
F->fields_1484 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->fields_1484)), 32), (*(P133)rt_nil_check(F->ct_1485))), rt_str(" *", 2)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1482)).cfield_))), 59));
}
if ((F->tail_1483 == NULL)) {
(*(P110)rt_nil_check(F->y_1480)).params_ = F->pm_1482;
} else {
(*(P1015)rt_nil_check(F->tail_1483)).next_ = F->pm_1482;
}
F->tail_1483 = F->pm_1482;
F->p_1481 = (*(P159)rt_nil_check(F->p_1481)).next_;
}
L_end_1489: ;
f_put_to_199(F->up, F->up->out_types_121, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1480)).cname_))), rt_str("p {", 3)), (*(P133)rt_nil_check(F->fields_1484))), rt_str(" };", 3)));
(*(P110)rt_nil_check(F->y_1480)).result_ = F->up->ty_void_150;
(*(P110)rt_nil_check(F->y_1480)).decl_ = F->e_676;
(*(P110)rt_nil_check(F->y_1480)).members_ = F->up->cur_task_156;
if (F->up->in_func_131) {
(*(P110)rt_nil_check(F->y_1480)).level_ = F->up->cur_level_132;
}
(*(P110)rt_nil_check(F->y_1480)).access_path_ = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1480)).cname_)), rt_str("ent", 3)));
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_1480)).level_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1480)).access_path_)), &F->x_1486);
if (((*(P159)rt_nil_check(F->e_676)).b_ != NULL)) {
if (((*(P110)rt_nil_check(F->up->cur_task_156)).c_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_676)).line_, rt_str("an entry family in a task family is not handled", 47));
}
f_family_bounds_668(F->up, (*(P159)rt_nil_check(F->e_676)).b_, F->y_1480, F->x_1486);
} else if (((*(P110)rt_nil_check(F->up->cur_task_156)).c_ != NULL)) {
f_declare_slot_661(F->up, rt_str("rt_entry *", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1480)).access_path_)));
f_path_at_634(F->up, (*(P110)rt_nil_check(F->up->cur_task_156)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_156)).cname_)), rt_str("lo", 2)), &F->lo_1487);
f_path_at_634(F->up, (*(P110)rt_nil_check(F->up->cur_task_156)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->cur_task_156)).cname_)), rt_str("hi", 2)), &F->hi_1488);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->x_1486)), rt_str(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P133)rt_nil_check(F->hi_1488))), rt_str(" >= ", 4)), (*(P133)rt_nil_check(F->lo_1487))), rt_str(" \? ", 3)), (*(P133)rt_nil_check(F->hi_1488))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1487))), rt_str(" + 1 : 1));", 11)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = 0; k_ <= ", 26), (*(P133)rt_nil_check(F->hi_1488))), rt_str(" - ", 3)), (*(P133)rt_nil_check(F->lo_1487))), rt_str("; k_++) rt_entry_init(&", 23)), (*(P133)rt_nil_check(F->x_1486))), rt_str("[k_]);", 6)));
} else {
f_declare_slot_661(F->up, rt_str("rt_entry", 8), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1480)).access_path_)));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_entry_init(&", 15), (*(P133)rt_nil_check(F->x_1486))), rt_str(");", 2)));
}
f_define_332(F->up, F->y_1480, (*(P159)rt_nil_check(F->e_676)).line_);
ret_:

  return;
}

static void f_task_body_679(struct f_greenc_1fr *up_, P159 e_678) {
  struct f_task_body_679fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_678 = e_678;
F->y_1492 = NULL;
F->y_1492 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_678)).name_)));
F->b_1493 = NULL;
F->m_1494 = NULL;
F->z_1495 = NULL;
F->saved_1496 = NULL;
F->saved_1496 = F->up->cur_task_156;
if (((F->y_1492 != NULL) && ((*(P110)rt_nil_check(F->y_1492)).kind_ == F->up->y_generic_100))) {
f_attach_generic_body_759(F->up, F->e_678);
goto ret_;
}
if (((F->y_1492 == NULL) || ((*(P110)rt_nil_check(F->y_1492)).kind_ != F->up->y_task_98))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_678)).line_, rt_str_cat(rt_str_cat(rt_str("task body ", 10), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_678)).name_))), rt_str(" has no task specification", 26)));
}
F->b_1493 = f_new_sym_337(F->up, F->up->y_proc_93, (*(P159)rt_nil_check(F->e_678)).name_);
(*(P110)rt_nil_check(F->b_1493)).cname_ = f_mk_178(F->up, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1492)).cname_)), rt_str("body", 4)));
(*(P110)rt_nil_check(F->b_1493)).result_ = F->up->ty_void_150;
(*(P110)rt_nil_check(F->b_1493)).level_ = F->up->cur_level_132;
(*(P110)rt_nil_check(F->b_1493)).decl_ = F->e_678;
if (((*(P110)rt_nil_check(F->y_1492)).c_ != NULL)) {
(*(P110)rt_nil_check(F->b_1493)).params_ = ({ R1016 *cell1497 = rt_alloc(sizeof(R1016)); *cell1497 = cp_R1016(({ R1016 ag1498; ag1498.name_ = f_mk_178(F->up, rt_str("INDEX_", 6)); ag1498.mode_ = F->up->m_in_72; ag1498.t_ = F->up->ty_int_145; ag1498.c_ = NULL; ag1498.cfield_ = f_mk_178(F->up, rt_str("index_", 6)); ag1498.dflt_ = NULL; ag1498.next_ = NULL; ag1498; })); (P1015)cell1497; });
}
f_open_scope_333(F->up);
F->m_1494 = (*(P110)rt_nil_check(F->y_1492)).members_;
while ((F->m_1494 != NULL)) {
f_copy_sym_586(F->up, F->m_1494, &F->z_1495);
f_define_332(F->up, F->z_1495, (*(P159)rt_nil_check(F->e_678)).line_);
F->m_1494 = (*(P110)rt_nil_check(F->m_1494)).mnext_;
}
L_end_1499: ;
F->up->cur_task_156 = F->y_1492;
f_subprogram_body_424(F->up, F->e_678, F->b_1493);
F->up->cur_task_156 = F->saved_1496;
f_close_scope_334(F->up);
if ((((*(P110)rt_nil_check(F->y_1492)).c_ != NULL) && ((*(P110)rt_nil_check(F->b_1493)).level_ > ((rt_int)0LL)))) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1492)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1493)).cname_))), rt_str("(g->up, g->i); }", 16)));
} else if (((*(P110)rt_nil_check(F->y_1492)).c_ != NULL)) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1492)).cname_))), rt_str("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1493)).cname_))), rt_str("(g->i); }", 9)));
} else if (((*(P110)rt_nil_check(F->b_1493)).level_ > ((rt_int)0LL))) {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1492)).cname_))), rt_str("run(void *a) { ", 15)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1493)).cname_))), rt_str("(a); }", 6)));
} else {
f_put_to_199(F->up, F->up->out_funcs_126, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1492)).cname_))), rt_str("run(void *a) { (void)a; ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->b_1493)).cname_))), rt_str("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_682(struct f_greenc_1fr *up_, P159 decls_680, P133 *aw_681) {
  struct f_task_awaits_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_680 = decls_680;
F->aw_681 = aw_681;
F->e_1500 = NULL;
F->e_1500 = F->decls_680;
F->y_1501 = NULL;
F->p_1502 = NULL;
(*F->aw_681) = f_mk_178(F->up, rt_str("", 0));
while ((F->e_1500 != NULL)) {
if ((((*(P159)rt_nil_check(F->e_1500)).kind_ == F->up->n_taskspec_52) || (((*(P159)rt_nil_check(F->e_1500)).kind_ == F->up->n_inst_55) && ((*(P159)rt_nil_check(F->e_1500)).ival_ == F->up->n_taskspec_52)))) {
F->y_1501 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_1500)).name_)));
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_1501)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1501)).cname_)), rt_str("decl", 4)), &F->p_1502);
(*F->aw_681) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*F->aw_681))), rt_str(" rt_await_decl(&", 16)), (*(P133)rt_nil_check(F->p_1502))), rt_str(");", 2)));
}
F->e_1500 = (*(P159)rt_nil_check(F->e_1500)).next_;
}
L_end_1503: ;
ret_:

  return;
}

static void f_task_failure_684(struct f_greenc_1fr *up_, P159 s_683) {
  struct f_task_failure_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_683 = s_683;
F->y_1504 = NULL;
F->y_1504 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_683)).tag_)));
F->a_1505 = NULL;
f_act_path_650(F->up, F->y_1504, &F->a_1505);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_exterminate(&", 16), (*(P133)rt_nil_check(F->a_1505))), rt_str(");", 2)));
ret_:

  return;
}

static void f_entry_sym_688(struct f_greenc_1fr *up_, P159 e_685, P110 *y_686, P159 *ix_687) {
  struct f_entry_sym_688fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_685 = e_685;
F->y_686 = y_686;
F->ix_687 = ix_687;
F->t_1506 = NULL;
(*F->ix_687) = NULL;
F->up->fam_ix_161 = NULL;
if (((*(P159)rt_nil_check(F->e_685)).kind_ == F->up->n_apply_16)) {
f_entry_sym_688(F->up, (*(P159)rt_nil_check(F->e_685)).a_, &(*F->y_686), &(*F->ix_687));
if (((*(P110)rt_nil_check((*F->y_686))).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_685)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check((*F->y_686))).name_)), rt_str(" is not an entry family", 23)));
}
F->up->fam_ix_161 = (*(P159)rt_nil_check(F->e_685)).b_;
goto ret_;
}
if (((((*(P159)rt_nil_check(F->e_685)).kind_ == F->up->n_select_17) && ((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_685)).a_)).kind_ == F->up->n_apply_16)) && ((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_685)).a_)).a_)).kind_ == F->up->n_name_13))) {
F->t_1506 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_685)).a_)).a_)).name_)));
if ((((F->t_1506 == NULL) || ((*(P110)rt_nil_check(F->t_1506)).kind_ != F->up->y_task_98)) || ((*(P110)rt_nil_check(F->t_1506)).c_ == NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_685)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_685)).a_)).a_)).name_)), rt_str(" is not a task family", 21)));
}
(*F->y_686) = f_member_of_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_685)).a_)).a_)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_685)).name_)), (*(P159)rt_nil_check(F->e_685)).line_);
(*F->ix_687) = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_685)).a_)).b_;
if ((((*F->y_686) == NULL) || ((*(P110)rt_nil_check((*F->y_686))).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_685)).line_, rt_str("not an entry", 12));
}
goto ret_;
}
if (((*(P159)rt_nil_check(F->e_685)).kind_ == F->up->n_name_13)) {
(*F->y_686) = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_685)).name_)));
if (((*(P159)rt_nil_check(F->e_685)).tag_ != NULL)) {
(*F->y_686) = f_member_of_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_685)).tag_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_685)).name_)), (*(P159)rt_nil_check(F->e_685)).line_);
}
} else if ((((*(P159)rt_nil_check(F->e_685)).kind_ == F->up->n_select_17) && f_is_package_577(F->up, (*(P159)rt_nil_check(F->e_685)).a_))) {
(*F->y_686) = f_member_of_581(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->e_685)).a_)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_685)).name_)), (*(P159)rt_nil_check(F->e_685)).line_);
} else {
(*F->y_686) = NULL;
}
if ((((*F->y_686) == NULL) || ((*(P110)rt_nil_check((*F->y_686))).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_685)).line_, rt_str("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_693(struct f_greenc_1fr *up_, P159 e_689, int is_stmt_690, P115 *t_691, P133 *r_692) {
  struct f_other_call_693fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_689 = e_689;
F->is_stmt_690 = is_stmt_690;
F->t_691 = t_691;
F->r_692 = r_692;
F->y_1507 = NULL;
F->pm_1508 = NULL;
F->a_1509 = NULL;
F->parts_1510 = NULL;
F->v_1511 = NULL;
F->lv_1512 = NULL;
F->ent_1513 = NULL;
F->act_1514 = NULL;
F->i_1515 = NULL;
F->vt_1516 = NULL;
F->lt_1517 = NULL;
F->lc_1518 = NULL;
F->ix_1520 = NULL;
F->fix_1521 = NULL;
F->args_node_1522 = NULL;
f_entry_sym_688(F->up, (*(P159)rt_nil_check(F->e_689)).a_, &F->y_1507, &F->ix_1520);
F->fix_1521 = F->up->fam_ix_161;
F->args_node_1522 = (*(P159)rt_nil_check(F->e_689)).b_;
if ((((*(P110)rt_nil_check(F->y_1507)).c_ != NULL) && (F->fix_1521 == NULL))) {
F->fix_1521 = (*(P159)rt_nil_check(F->e_689)).b_;
F->args_node_1522 = NULL;
}
F->i_1515 = f_mk_178(F->up, rt_str("", 0));
if ((F->ix_1520 != NULL)) {
f_gexpr_509(F->up, F->ix_1520, F->up->ty_int_145, &F->vt_1516, &F->i_1515);
} else if (((((*(P110)rt_nil_check(F->y_1507)).members_ != NULL) && ((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1507)).members_)).c_ != NULL)) && ((*(P110)rt_nil_check(F->y_1507)).members_ != F->up->cur_task_156))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_689)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a member of family ", 19), (*(P133)rt_nil_check((*(P110)rt_nil_check((*(P110)rt_nil_check(F->y_1507)).members_)).name_))), rt_str(" must be named: F(I).", 21)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1507)).name_))));
}
if ((!F->is_stmt_690)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_689)).line_, rt_str("an entry call is a statement", 28));
}
if ((F->up->pure_sym_171 != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_689)).line_, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_658(F->up, F->y_1507, (*(P133)rt_nil_check(F->i_1515)), &F->ent_1513);
if (((*(P110)rt_nil_check(F->y_1507)).c_ != NULL)) {
if ((F->fix_1521 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_689)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1507)).name_)), rt_str(" is an entry family: name a member, ", 36)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1507)).name_))), rt_str("(I)", 3)));
}
f_gexpr_509(F->up, F->fix_1521, NULL, &F->vt_1516, &F->v_1511);
f_entry_family_slot_673(F->up, F->y_1507, (*(P133)rt_nil_check(F->ent_1513)), (*(P133)rt_nil_check(F->v_1511)), &F->ent_1513);
}
F->parts_1510 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str("({ struct ", 10), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1507)).cname_))), rt_str("p p_;", 5)));
F->pm_1508 = (*(P110)rt_nil_check(F->y_1507)).params_;
while ((F->pm_1508 != NULL)) {
F->a_1509 = f_actual_for_558(F->up, F->args_node_1522, F->pm_1508, (*(P110)rt_nil_check(F->y_1507)).params_);
if ((F->a_1509 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_689)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1508)).name_))));
}
if (((*(P1015)rt_nil_check(F->pm_1508)).mode_ == F->up->m_in_72)) {
f_gexpr_509(F->up, F->a_1509, (*(P1015)rt_nil_check(F->pm_1508)).t_, &F->vt_1516, &F->v_1511);
f_check_type_346(F->up, F->vt_1516, (*(P1015)rt_nil_check(F->pm_1508)).t_, (*(P159)rt_nil_check(F->e_689)).line_);
F->parts_1510 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1510)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1508)).cfield_))), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->v_1511))), 59));
} else {
f_lvalue_481(F->up, F->a_1509, &F->lv_1512, &F->lt_1517, &F->lc_1518, &F->ro_1519);
if (F->ro_1519) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_689)).line_, rt_str_cat((*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1508)).name_)), rt_str(" needs a variable", 17)));
}
f_check_type_346(F->up, F->lt_1517, (*(P1015)rt_nil_check(F->pm_1508)).t_, (*(P159)rt_nil_check(F->e_689)).line_);
F->parts_1510 = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1510)), rt_str(" p_.", 4)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1508)).cfield_))), rt_str(" = &", 4)), (*(P133)rt_nil_check(F->lv_1512))), 59));
}
F->pm_1508 = (*(P1015)rt_nil_check(F->pm_1508)).next_;
}
L_end_1523: ;
if ((((*(P110)rt_nil_check(F->y_1507)).members_ != NULL) && ((*(P110)rt_nil_check(F->y_1507)).members_ != F->up->cur_task_156))) {
if ((F->ix_1520 != NULL)) {
f_act_path_i_654(F->up, (*(P110)rt_nil_check(F->y_1507)).members_, (*(P133)rt_nil_check(F->i_1515)), &F->act_1514);
} else {
f_act_path_650(F->up, (*(P110)rt_nil_check(F->y_1507)).members_, &F->act_1514);
}
F->parts_1510 = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1510)), rt_str(" if (!rt_is_active(&", 20)), (*(P133)rt_nil_check(F->act_1514))), rt_str(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_691) = F->up->ty_void_150;
(*F->r_692) = f_mk_178(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->parts_1510)), rt_str(" rt_entry_call(&", 16)), (*(P133)rt_nil_check(F->ent_1513))), rt_str(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_698(struct f_greenc_1fr *up_, P159 e_694, P110 y_695, P115 *t_696, P133 *r_697) {
  struct f_other_attr_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_694 = e_694;
F->y_695 = y_695;
F->t_696 = t_696;
F->r_697 = r_697;
F->a_1524 = rt_str_copy((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_694)).name_)));
F->p_1525 = NULL;
if ((((*(P110)rt_nil_check(F->y_695)).kind_ == F->up->y_task_98) && rt_str_eq(F->a_1524, rt_str("INDEX", 5)))) {
if (((*(P110)rt_nil_check(F->y_695)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_694)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_695)).name_)), rt_str(" is not a task family", 21)));
}
f_own_index_642(F->up, &F->p_1525);
(*F->t_696) = F->up->ty_int_145;
(*F->r_697) = F->p_1525;
} else if ((((*(P110)rt_nil_check(F->y_695)).kind_ == F->up->y_task_98) && rt_str_eq(F->a_1524, rt_str("ACTIVE", 6)))) {
f_act_path_650(F->up, F->y_695, &F->p_1525);
(*F->t_696) = F->up->ty_bool_146;
(*F->r_697) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1525))), 41));
} else if ((((*(P110)rt_nil_check(F->y_695)).kind_ == F->up->y_task_98) && rt_str_eq(F->a_1524, rt_str("PRIORITY", 8)))) {
f_act_path_650(F->up, F->y_695, &F->p_1525);
(*F->t_696) = F->up->ty_int_145;
(*F->r_697) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1525))), 41));
} else if ((((*(P110)rt_nil_check(F->y_695)).kind_ == F->up->y_entry_99) && rt_str_eq(F->a_1524, rt_str("COUNT", 5)))) {
if (((*(P110)rt_nil_check(F->y_695)).members_ != F->up->cur_task_156)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_694)).line_, rt_str("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_658(F->up, F->y_695, rt_str("", 0), &F->p_1525);
(*F->t_696) = F->up->ty_int_145;
(*F->r_697) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_entry_count(&", 16), (*(P133)rt_nil_check(F->p_1525))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_694)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1524), rt_str(" is not handled here", 20)));
(*F->t_696) = F->up->ty_int_145;
(*F->r_697) = NULL;
}
ret_:

  return;
}

static void f_member_attr_702(struct f_greenc_1fr *up_, P159 e_699, P115 *t_700, P133 *r_701) {
  struct f_member_attr_702fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_699 = e_699;
F->t_700 = t_700;
F->r_701 = r_701;
F->y_1526 = NULL;
F->ix_1527 = NULL;
F->i_1528 = NULL;
F->p_1529 = NULL;
F->vt_1530 = NULL;
f_task_of_640(F->up, (*(P159)rt_nil_check(F->e_699)).a_, &F->y_1526, &F->ix_1527);
f_gexpr_509(F->up, F->ix_1527, F->up->ty_int_145, &F->vt_1530, &F->i_1528);
f_act_path_i_654(F->up, F->y_1526, (*(P133)rt_nil_check(F->i_1528)), &F->p_1529);
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_699)).name_)), rt_str("ACTIVE", 6))) {
(*F->t_700) = F->up->ty_bool_146;
(*F->r_701) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_is_active(&", 14), (*(P133)rt_nil_check(F->p_1529))), 41));
} else if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_699)).name_)), rt_str("PRIORITY", 8))) {
(*F->t_700) = F->up->ty_int_145;
(*F->r_701) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_priority(&", 13), (*(P133)rt_nil_check(F->p_1529))), 41));
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_699)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_699)).name_))), rt_str(" is not handled for a family member", 35)));
(*F->t_700) = F->up->ty_int_145;
(*F->r_701) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_708(struct f_greenc_1fr *up_, rstr name_703, P159 args_704, rt_int line_705, P115 *t_706, P133 *r_707) {
  struct f_task_builtin_708fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_703 = rt_str_copy(name_703);
F->args_704 = args_704;
F->line_705 = line_705;
F->t_706 = t_706;
F->r_707 = r_707;
F->vt_1531 = NULL;
F->v_1532 = NULL;
(*F->t_706) = F->up->ty_void_150;
if (rt_str_eq(F->name_703, rt_str("SET_PRIORITY", 12))) {
f_gexpr_509(F->up, F->args_704, F->up->ty_int_145, &F->vt_1531, &F->v_1532);
(*F->r_707) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("rt_set_priority(rt_me(), ", 25), (*(P133)rt_nil_check(F->v_1532))), 41));
} else {
f_fail_195(F->up, F->line_705, rt_str_cat(F->name_703, rt_str(" is not declared", 16)));
(*F->r_707) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_710(struct f_greenc_1fr *up_, P159 s_709) {
  struct f_gen_accept_710fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_709 = s_709;
F->y_1533 = NULL;
F->y_1533 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_709)).name_)));
F->ent_1534 = NULL;
F->ep_1535 = NULL;
F->xf_1536 = NULL;
F->x_1537 = NULL;
F->pm_1538 = NULL;
F->f_1539 = NULL;
F->f_1539 = (*(P159)rt_nil_check(F->s_709)).a_;
F->p_1540 = NULL;
if (((F->y_1533 == NULL) || ((*(P110)rt_nil_check(F->y_1533)).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_709)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->s_709)).name_)), rt_str(" is not an entry", 16)));
}
if (((*(P110)rt_nil_check(F->y_1533)).members_ != F->up->cur_task_156)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_709)).line_, rt_str("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_658(F->up, F->y_1533, rt_str("", 0), &F->ent_1534);
f_member_slot_714(F->up, F->y_1533, F->s_709, &F->ent_1534);
if (((*(P159)rt_nil_check(F->s_709)).flag_ == ((rt_int)0LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_accept_begin(&", 19), (*(P133)rt_nil_check(F->ent_1534))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1534))), rt_str(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_181(F->up, rt_str("ep", 2), &F->ep_1535);
f_new_name_181(F->up, rt_str("xf", 2), &F->xf_1536);
f_new_name_181(F->up, rt_str("x", 1), &F->x_1537);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1533)).cname_))), rt_str("p *", 3)), (*(P133)rt_nil_check(F->ep_1535))), rt_str(" = rt_accept_begin(&", 20)), (*(P133)rt_nil_check(F->ent_1534))), rt_str(");", 2)));
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str("rt_frame ", 9), (*(P133)rt_nil_check(F->xf_1536))), 59));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P133)rt_nil_check(F->xf_1536))), rt_str(")) {", 4)));
f_push_cleanup_430(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1536))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1534))), rt_str(", 0, 0);", 8)));
f_open_scope_333(F->up);
F->pm_1538 = (*(P110)rt_nil_check(F->y_1533)).params_;
while ((F->pm_1538 != NULL)) {
if (((*(P1015)rt_nil_check(F->pm_1538)).mode_ == F->up->m_in_72)) {
F->p_1540 = f_new_sym_337(F->up, F->up->y_const_91, (*(P1015)rt_nil_check(F->pm_1538)).name_);
(*(P110)rt_nil_check(F->p_1540)).ro_ = 1;
(*(P110)rt_nil_check(F->p_1540)).access_path_ = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P133)rt_nil_check(F->ep_1535))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1538)).cfield_))), 41));
} else {
F->p_1540 = f_new_sym_337(F->up, F->up->y_var_90, (*(P1015)rt_nil_check(F->pm_1538)).name_);
(*(P110)rt_nil_check(F->p_1540)).access_path_ = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P133)rt_nil_check(F->ep_1535))), rt_str("->", 2)), (*(P133)rt_nil_check((*(P1015)rt_nil_check(F->pm_1538)).cfield_))), 41));
}
if ((F->f_1539 != NULL)) {
(*(P110)rt_nil_check(F->p_1540)).name_ = (*(P159)rt_nil_check(F->f_1539)).name_;
F->f_1539 = (*(P159)rt_nil_check(F->f_1539)).next_;
}
(*(P110)rt_nil_check(F->p_1540)).t_ = (*(P1015)rt_nil_check(F->pm_1538)).t_;
(*(P110)rt_nil_check(F->p_1540)).c_ = (*(P1015)rt_nil_check(F->pm_1538)).c_;
f_define_332(F->up, F->p_1540, (*(P159)rt_nil_check(F->s_709)).line_);
F->pm_1538 = (*(P1015)rt_nil_check(F->pm_1538)).next_;
}
L_end_1541: ;
F->up->accept_depth_157 = rt_add(F->up->accept_depth_157, ((rt_int)1LL));
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->s_709)).b_);
F->up->accept_depth_157 = rt_sub(F->up->accept_depth_157, ((rt_int)1LL));
f_close_scope_334(F->up);
f_pop_cleanup_431(F->up);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1536))), rt_str("); rt_accept_end(&", 18)), (*(P133)rt_nil_check(F->ent_1534))), rt_str(", 0, 0);", 8)));
f_emit_201(F->up, rt_str("} else {", 8));
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P133)rt_nil_check(F->xf_1536))), rt_str("); int ", 7)), (*(P133)rt_nil_check(F->x_1537))), rt_str(" = rt_xcur; rt_accept_end(&", 27)), (*(P133)rt_nil_check(F->ent_1534))), rt_str(", 1, ", 5)), (*(P133)rt_nil_check(F->x_1537))), rt_str("); rt_raise(", 12)), (*(P133)rt_nil_check(F->x_1537))), rt_str(");", 2)));
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_member_slot_714(struct f_greenc_1fr *up_, P110 y_711, P159 s_712, P133 *ent_713) {
  struct f_member_slot_714fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_711 = y_711;
F->s_712 = s_712;
F->ent_713 = ent_713;
F->vt_1542 = NULL;
F->v_1543 = NULL;
if (((*(P110)rt_nil_check(F->y_711)).c_ != NULL)) {
if (((*(P159)rt_nil_check(F->s_712)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_712)).line_, rt_str_cat(rt_str_cat(rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_711)).name_)), rt_str(" is an entry family: accept ", 28)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_711)).name_))), rt_str("(I)", 3)));
}
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->s_712)).c_, NULL, &F->vt_1542, &F->v_1543);
f_entry_family_slot_673(F->up, F->y_711, (*(P133)rt_nil_check((*F->ent_713))), (*(P133)rt_nil_check(F->v_1543)), &(*F->ent_713));
} else if (((*(P159)rt_nil_check(F->s_712)).c_ != NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_712)).line_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_711)).name_)), rt_str(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_717(struct f_greenc_1fr *up_, P159 e_715, P133 *r_716) {
  struct f_gen_delay_ticks_717fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_715 = e_715;
F->r_716 = r_716;
F->vt_1544 = NULL;
F->v_1545 = NULL;
f_gexpr_509(F->up, F->e_715, F->up->ty_float_147, &F->vt_1544, &F->v_1545);
f_check_type_346(F->up, F->vt_1544, F->up->ty_float_147, (*(P159)rt_nil_check(F->e_715)).line_);
(*F->r_716) = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str("(rt_int)llround(", 16), (*(P133)rt_nil_check(F->v_1545))), 41));
ret_:

  return;
}

static void f_gen_select_719(struct f_greenc_1fr *up_, P159 s_718) {
  struct f_gen_select_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_718 = s_718;
F->alt_1546 = NULL;
F->alt_1546 = (*(P159)rt_nil_check(F->s_718)).a_;
F->n_1547 = ((rt_int)0LL);
F->has_delay_1549 = 0;
F->has_accept_1550 = 0;
F->al_1551 = NULL;
F->w_1552 = NULL;
F->g_1553 = NULL;
F->ent_1554 = NULL;
F->ticks_1555 = NULL;
F->vt_1556 = NULL;
F->y_1557 = NULL;
f_new_name_181(F->up, rt_str("al", 2), &F->al_1551);
f_new_name_181(F->up, rt_str("w", 1), &F->w_1552);
while ((F->alt_1546 != NULL)) {
F->n_1547 = rt_add(F->n_1547, ((rt_int)1LL));
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1546)).b_)).kind_ == F->up->n_delay_37)) {
F->has_delay_1549 = 1;
} else {
F->has_accept_1550 = 1;
}
F->alt_1546 = (*(P159)rt_nil_check(F->alt_1546)).next_;
}
L_end_1558: ;
if ((((*(P159)rt_nil_check(F->s_718)).flag_ == ((rt_int)1LL)) && F->has_delay_1549)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_718)).line_, rt_str("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!F->has_accept_1550)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_718)).line_, rt_str("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ rt_alt ", 9), (*(P133)rt_nil_check(F->al_1551))), 91), rt_str_of_int(rt_add(F->n_1547, ((rt_int)1LL)))), rt_str("]; int open_ = 0;", 17)));
F->alt_1546 = (*(P159)rt_nil_check(F->s_718)).a_;
F->i_1548 = ((rt_int)0LL);
while ((F->alt_1546 != NULL)) {
F->g_1553 = f_mk_178(F->up, rt_str("1", 1));
if (((*(P159)rt_nil_check(F->alt_1546)).a_ != NULL)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->alt_1546)).a_, F->up->ty_bool_146, &F->vt_1556, &F->g_1553);
f_check_type_346(F->up, F->vt_1556, F->up->ty_bool_146, (*(P159)rt_nil_check(F->alt_1546)).line_);
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1546)).b_)).kind_ == F->up->n_accept_39)) {
F->y_1557 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1546)).b_)).name_)));
if (((F->y_1557 == NULL) || ((*(P110)rt_nil_check(F->y_1557)).kind_ != F->up->y_entry_99))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->alt_1546)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1546)).b_)).name_)), rt_str(" is not an entry", 16)));
}
f_entry_path_658(F->up, F->y_1557, rt_str("", 0), &F->ent_1554);
f_member_slot_714(F->up, F->y_1557, (*(P159)rt_nil_check(F->alt_1546)).b_, &F->ent_1554);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1551)), 91), rt_str_of_int(F->i_1548)), rt_str("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P133)rt_nil_check(F->g_1553))), rt_str("), &", 4)), (*(P133)rt_nil_check(F->ent_1554))), rt_str(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_717(F->up, (*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1546)).b_)).a_, &F->ticks_1555);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1551)), 91), rt_str_of_int(F->i_1548)), rt_str("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P133)rt_nil_check(F->g_1553))), rt_str("), NULL, NULL, ", 15)), (*(P133)rt_nil_check(F->ticks_1555))), rt_str("};", 2)));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("open_ |= ", 9), (*(P133)rt_nil_check(F->al_1551))), 91), rt_str_of_int(F->i_1548)), rt_str("].open;", 7)));
F->i_1548 = rt_add(F->i_1548, ((rt_int)1LL));
F->alt_1546 = (*(P159)rt_nil_check(F->alt_1546)).next_;
}
L_end_1559: ;
if (((*(P159)rt_nil_check(F->s_718)).flag_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P133)rt_nil_check(F->al_1551)), 91), rt_str_of_int(F->n_1547)), rt_str("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_1547 = rt_add(F->n_1547, ((rt_int)1LL));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!open_) rt_raise(rt_exc(", 28), f_q_192(F->up)), rt_str("SELECT_ERROR", 12)), f_q_192(F->up)), rt_str("));", 3)));
}
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P133)rt_nil_check(F->w_1552))), rt_str(" = rt_wait(", 11)), rt_str_of_int(F->n_1547)), rt_str(", ", 2)), (*(P133)rt_nil_check(F->al_1551))), rt_str(");", 2)));
F->alt_1546 = (*(P159)rt_nil_check(F->s_718)).a_;
F->i_1548 = ((rt_int)0LL);
while ((F->alt_1546 != NULL)) {
if ((F->i_1548 == ((rt_int)0LL))) {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P133)rt_nil_check(F->w_1552))), rt_str(" == 0) {", 8)));
} else {
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P133)rt_nil_check(F->w_1552))), rt_str(" == ", 4)), rt_str_of_int(F->i_1548)), rt_str(") {", 3)));
}
if (((*(P159)rt_nil_check((*(P159)rt_nil_check(F->alt_1546)).b_)).kind_ == F->up->n_accept_39)) {
f_gen_accept_710(F->up, (*(P159)rt_nil_check(F->alt_1546)).b_);
}
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->alt_1546)).c_);
F->i_1548 = rt_add(F->i_1548, ((rt_int)1LL));
F->alt_1546 = (*(P159)rt_nil_check(F->alt_1546)).next_;
}
L_end_1560: ;
if (((*(P159)rt_nil_check(F->s_718)).flag_ == ((rt_int)1LL))) {
f_emit_201(F->up, rt_str("} else {", 8));
f_gen_statements_426(F->up, (*(P159)rt_nil_check(F->s_718)).b_);
}
f_emit_201(F->up, rt_str("}", 1));
f_emit_201(F->up, rt_str("}", 1));
ret_:

  return;
}

static void f_family_range_724(struct f_greenc_1fr *up_, P110 y_720, P159 ix_721, P133 *lo_722, P133 *hi_723) {
  struct f_family_range_724fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_720 = y_720;
F->ix_721 = ix_721;
F->lo_722 = lo_722;
F->hi_723 = hi_723;
F->vt_1561 = NULL;
if ((F->ix_721 == NULL)) {
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_720)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_720)).cname_)), rt_str("lo", 2)), &(*F->lo_722));
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_720)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_720)).cname_)), rt_str("hi", 2)), &(*F->hi_723));
} else if (((*(P159)rt_nil_check(F->ix_721)).kind_ == F->up->n_range_22)) {
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->ix_721)).a_, F->up->ty_int_145, &F->vt_1561, &(*F->lo_722));
f_gexpr_509(F->up, (*(P159)rt_nil_check(F->ix_721)).b_, F->up->ty_int_145, &F->vt_1561, &(*F->hi_723));
} else {
f_gexpr_509(F->up, F->ix_721, F->up->ty_int_145, &F->vt_1561, &(*F->lo_722));
(*F->hi_723) = (*F->lo_722);
}
ret_:

  return;
}

static void f_task_statement_gen_726(struct f_greenc_1fr *up_, P159 s_725) {
  struct f_task_statement_gen_726fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_725 = s_725;
F->n_1562 = NULL;
F->ix_1563 = NULL;
F->y_1564 = NULL;
F->a_1565 = NULL;
F->d_1566 = NULL;
F->l_1567 = NULL;
F->ticks_1568 = NULL;
F->lo_1569 = NULL;
F->hi_1570 = NULL;
{ rt_int sel1571 = (*(P159)rt_nil_check(F->s_725)).kind_;
if (0 || sel1571 == ((rt_int)32LL)) {
f_gen_delay_ticks_717(F->up, (*(P159)rt_nil_check(F->s_725)).a_, &F->ticks_1568);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), (*(P133)rt_nil_check(F->ticks_1568))), rt_str(");", 2)));
} else if (0 || sel1571 == ((rt_int)33LL)) {
if ((F->up->accept_depth_157 > ((rt_int)0LL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_725)).line_, rt_str("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_1562 = (*(P159)rt_nil_check(F->s_725)).a_;
while ((F->n_1562 != NULL)) {
f_task_of_640(F->up, F->n_1562, &F->y_1564, &F->ix_1563);
f_path_at_634(F->up, (*(P110)rt_nil_check(F->y_1564)).level_, rt_str_cat((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1564)).cname_)), rt_str("decl", 4)), &F->d_1566);
if (((*(P110)rt_nil_check(F->y_1564)).level_ > ((rt_int)0LL))) {
f_link_to_467(F->up, (*(P110)rt_nil_check(F->y_1564)).level_, &F->l_1567);
} else {
F->l_1567 = f_mk_178(F->up, rt_str("NULL", 4));
}
if (((*(P110)rt_nil_check(F->y_1564)).c_ == NULL)) {
f_act_path_650(F->up, F->y_1564, &F->a_1565);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(&", 11), (*(P133)rt_nil_check(F->a_1565))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1566))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1564)).cname_))), rt_str("run, ", 5)), (*(P133)rt_nil_check(F->l_1567))), rt_str(");", 2)));
} else {
f_family_range_724(F->up, F->y_1564, F->ix_1563, &F->lo_1569, &F->hi_1570);
f_act_path_i_654(F->up, F->y_1564, rt_str("k_", 2), &F->a_1565);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1569))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1570))), rt_str("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P133)rt_nil_check(F->l_1567))), rt_str("; g_->i = k_; rt_create(&", 25)), (*(P133)rt_nil_check(F->a_1565))), rt_str(", &", 3)), (*(P133)rt_nil_check(F->d_1566))), rt_str(", ", 2)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1564)).cname_))), rt_str("run, g_); }", 11)));
}
F->n_1562 = (*(P159)rt_nil_check(F->n_1562)).next_;
}
L_end_1572: ;
} else if (0 || sel1571 == ((rt_int)34LL)) {
f_gen_accept_710(F->up, F->s_725);
} else if (0 || sel1571 == ((rt_int)35LL)) {
f_gen_select_719(F->up, F->s_725);
} else if (0 || sel1571 == ((rt_int)36LL)) {
F->n_1562 = (*(P159)rt_nil_check(F->s_725)).a_;
while ((F->n_1562 != NULL)) {
f_task_of_640(F->up, F->n_1562, &F->y_1564, &F->ix_1563);
if (((*(P110)rt_nil_check(F->y_1564)).c_ == NULL)) {
f_act_path_650(F->up, F->y_1564, &F->a_1565);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str("rt_g_abort(&", 12), (*(P133)rt_nil_check(F->a_1565))), rt_str(");", 2)));
} else {
f_family_range_724(F->up, F->y_1564, F->ix_1563, &F->lo_1569, &F->hi_1570);
f_act_path_i_654(F->up, F->y_1564, rt_str("k_", 2), &F->a_1565);
f_emit_201(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int k_ = ", 17), (*(P133)rt_nil_check(F->lo_1569))), rt_str("; k_ <= ", 8)), (*(P133)rt_nil_check(F->hi_1570))), rt_str("; k_++) rt_g_abort(&", 20)), (*(P133)rt_nil_check(F->a_1565))), rt_str(");", 2)));
}
F->n_1562 = (*(P159)rt_nil_check(F->n_1562)).next_;
}
L_end_1573: ;
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->s_725)).line_, rt_str("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P159 f_root_name_728(struct f_greenc_1fr *up_, P159 e_727) {
  struct f_root_name_728fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_727 = e_727;
if (((*(P159)rt_nil_check(F->e_727)).kind_ == F->up->n_name_13)) {
F->result_ = F->e_727;
goto ret_;
} else if (((((*(P159)rt_nil_check(F->e_727)).kind_ == F->up->n_select_17) || ((*(P159)rt_nil_check(F->e_727)).kind_ == F->up->n_apply_16)) || ((*(P159)rt_nil_check(F->e_727)).kind_ == F->up->n_paren_23))) {
F->result_ = f_root_name_728(F->up, (*(P159)rt_nil_check(F->e_727)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_731(struct f_greenc_1fr *up_, P159 target_729, rt_int line_730) {
  struct f_check_pure_target_731fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_729 = target_729;
F->line_730 = line_730;
F->n_1574 = NULL;
F->y_1575 = NULL;
if ((F->up->pure_sym_171 == NULL)) {
goto ret_;
}
if (F->up->last_deref_175) {
f_fail_195(F->up, F->line_730, rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_1574 = f_root_name_728(F->up, F->target_729);
if ((F->n_1574 != NULL)) {
F->y_1575 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1574)).name_)));
if ((((F->y_1575 != NULL) && ((*(P110)rt_nil_check(F->y_1575)).kind_ == F->up->y_var_90)) && ((*(P110)rt_nil_check(F->y_1575)).depth_ < F->up->pure_depth_172))) {
f_fail_195(F->up, F->line_730, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not assign to ", 19)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->n_1574)).name_))), rt_str(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_734(struct f_greenc_1fr *up_, P159 d_732, rstr name_733) {
  struct f_assigns_nonlocal_734fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_732 = d_732;
F->name_733 = rt_str_copy(name_733);
F->result_ = (f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->d_732)).d_, F->d_732, F->name_733) || f_scan_handlers_741(F->up, (*(P159)rt_nil_check(F->d_732)).e_, F->d_732, F->name_733));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_737(struct f_greenc_1fr *up_, P159 d_735, rstr name_736) {
  struct f_declares_737fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_735 = d_735;
F->name_736 = rt_str_copy(name_736);
F->p_1576 = NULL;
F->p_1576 = (*(P159)rt_nil_check(F->d_735)).a_;
F->e_1577 = NULL;
F->e_1577 = (*(P159)rt_nil_check(F->d_735)).c_;
while ((F->p_1576 != NULL)) {
if (rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->p_1576)).name_)), F->name_736)) {
F->result_ = 1;
goto ret_;
}
F->p_1576 = (*(P159)rt_nil_check(F->p_1576)).next_;
}
L_end_1578: ;
while ((F->e_1577 != NULL)) {
if ((((*(P159)rt_nil_check(F->e_1577)).name_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_1577)).name_)), F->name_736))) {
F->result_ = 1;
goto ret_;
}
F->e_1577 = (*(P159)rt_nil_check(F->e_1577)).next_;
}
L_end_1579: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_741(struct f_greenc_1fr *up_, P159 h_738, P159 d_739, rstr name_740) {
  struct f_scan_handlers_741fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_738 = h_738;
F->d_739 = d_739;
F->name_740 = rt_str_copy(name_740);
F->p_1580 = NULL;
F->p_1580 = F->h_738;
while ((F->p_1580 != NULL)) {
if (f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->p_1580)).b_, F->d_739, F->name_740)) {
F->result_ = 1;
goto ret_;
}
F->p_1580 = (*(P159)rt_nil_check(F->p_1580)).next_;
}
L_end_1581: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_745(struct f_greenc_1fr *up_, P159 stmts_742, P159 d_743, rstr name_744) {
  struct f_scan_assigns_745fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_742 = stmts_742;
F->d_743 = d_743;
F->name_744 = rt_str_copy(name_744);
F->s_1582 = NULL;
F->s_1582 = F->stmts_742;
F->a_1583 = NULL;
F->r_1584 = NULL;
while ((F->s_1582 != NULL)) {
if (((*(P159)rt_nil_check(F->s_1582)).kind_ == F->up->n_assign_25)) {
F->r_1584 = f_root_name_728(F->up, (*(P159)rt_nil_check(F->s_1582)).a_);
if ((((F->r_1584 != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->r_1584)).name_)), F->name_744)) && (!f_declares_737(F->up, F->d_743, F->name_744)))) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1582)).kind_ == F->up->n_if_27)) {
F->a_1583 = (*(P159)rt_nil_check(F->s_1582)).a_;
while ((F->a_1583 != NULL)) {
if (f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->a_1583)).b_, F->d_743, F->name_744)) {
F->result_ = 1;
goto ret_;
}
F->a_1583 = (*(P159)rt_nil_check(F->a_1583)).next_;
}
L_end_1586: ;
if (f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->s_1582)).b_, F->d_743, F->name_744)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1582)).kind_ == F->up->n_case_28)) {
F->a_1583 = (*(P159)rt_nil_check(F->s_1582)).b_;
while ((F->a_1583 != NULL)) {
if (f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->a_1583)).b_, F->d_743, F->name_744)) {
F->result_ = 1;
goto ret_;
}
F->a_1583 = (*(P159)rt_nil_check(F->a_1583)).next_;
}
L_end_1587: ;
if (f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->s_1582)).c_, F->d_743, F->name_744)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1582)).kind_ == F->up->n_loop_29)) {
if (f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->s_1582)).b_, F->d_743, F->name_744)) {
F->result_ = 1;
goto ret_;
}
} else if (((*(P159)rt_nil_check(F->s_1582)).kind_ == F->up->n_block_30)) {
if ((f_scan_assigns_745(F->up, (*(P159)rt_nil_check(F->s_1582)).b_, F->d_743, F->name_744) || f_scan_handlers_741(F->up, (*(P159)rt_nil_check(F->s_1582)).c_, F->d_743, F->name_744))) {
F->result_ = 1;
goto ret_;
}
}
F->s_1582 = (*(P159)rt_nil_check(F->s_1582)).next_;
}
L_end_1585: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_748(struct f_greenc_1fr *up_, P159 e_746, P110 y_747) {
  struct f_check_call_rules_748fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_746 = e_746;
F->y_747 = y_747;
F->z_1588 = NULL;
F->s_1589 = NULL;
if ((((F->up->pure_sym_171 != NULL) && (((*(P115)rt_nil_check((*(P110)rt_nil_check(F->y_747)).result_)).kind_ == F->up->t_void_83) || (*(P110)rt_nil_check(F->y_747)).vrp_)) && ((*(P110)rt_nil_check(F->y_747)).depth_ < F->up->pure_depth_172))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_746)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("function ", 9), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->up->pure_sym_171)).name_))), rt_str(" may not call procedure ", 24)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_747)).name_))), rt_str(": it could have side effects (RM79 6.5)", 39)));
}
if (((!(*(P110)rt_nil_check(F->y_747)).vrp_) || (F->up->trial_144 > ((rt_int)0LL)))) {
goto ret_;
}
if ((!F->up->vrp_ok_173)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_746)).line_, rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_747)).name_))), rt_str(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_1589 = F->up->scope_stack_114;
while ((F->s_1589 != NULL)) {
if ((((((*(P110)rt_nil_check(F->s_1589)).kind_ == F->up->y_var_90) && ((*(P110)rt_nil_check(F->s_1589)).depth_ <= (*(P110)rt_nil_check(F->y_747)).depth_)) && (f_lookup_319(F->up, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1589)).name_))) == F->s_1589)) && f_assigns_nonlocal_734(F->up, (*(P110)rt_nil_check(F->y_747)).decl_, (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1589)).name_))))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_746)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("value-returning procedure ", 26), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_747)).name_))), rt_str(" assigns ", 9)), (*(P133)rt_nil_check((*(P110)rt_nil_check(F->s_1589)).name_))), rt_str(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_1589 = (*(P110)rt_nil_check(F->s_1589)).stack_;
}
L_end_1590: ;
ret_:

  return;
}

static void f_generic_p_750(struct f_greenc_1fr *up_, P159 *res_749) {
  struct f_generic_p_750fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_749 = res_749;
F->x_1591 = NULL;
F->p_1592 = NULL;
F->head_1593 = NULL;
F->tail_1594 = NULL;
F->names_1595 = NULL;
F->st_1596 = NULL;
F->def_1597 = NULL;
F->sub_1598 = NULL;
F->def_name_text_1599 = NULL;
F->more_1600 = 1;
f_expect_kw_242(F->up, rt_str("GENERIC", 7));
F->x_1591 = f_nn_220(F->up, F->up->n_generic_56, f_cur_line_227(F->up));
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
while (F->more_1600) {
if (f_at_kw_229(F->up, rt_str("RESTRICTED", 10))) {
f_skip_240(F->up);
}
if (f_at_kw_229(F->up, rt_str("TYPE", 4))) {
f_skip_240(F->up);
F->p_1592 = f_nn_220(F->up, F->up->n_param_49, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->p_1592)).ival_ = ((rt_int)10LL);
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->p_1592)).name_);
f_append_224(F->up, &F->head_1593, &F->tail_1594, F->p_1592);
} else if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
F->p_1592 = f_nn_220(F->up, F->up->n_param_49, f_cur_line_227(F->up));
(*(P159)rt_nil_check(F->p_1592)).ival_ = ((rt_int)11LL);
if (f_at_kw_229(F->up, rt_str("PROCEDURE", 9))) {
F->sub_1598 = f_nn_220(F->up, F->up->n_proc_46, f_cur_line_227(F->up));
} else {
F->sub_1598 = f_nn_220(F->up, F->up->n_func_47, f_cur_line_227(F->up));
}
f_skip_240(F->up);
f_designator_292(F->up, &(*(P159)rt_nil_check(F->sub_1598)).name_);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_formal_part_290(F->up, &(*(P159)rt_nil_check(F->sub_1598)).a_);
}
if (f_at_kw_229(F->up, rt_str("RETURN", 6))) {
f_skip_240(F->up);
f_subtype_ind_275(F->up, &(*(P159)rt_nil_check(F->sub_1598)).b_);
}
(*(P159)rt_nil_check(F->sub_1598)).ival_ = ((rt_int)1LL);
(*(P159)rt_nil_check(F->p_1592)).name_ = (*(P159)rt_nil_check(F->sub_1598)).name_;
(*(P159)rt_nil_check(F->p_1592)).a_ = F->sub_1598;
if (f_at_kw_229(F->up, rt_str("IS", 2))) {
f_skip_240(F->up);
if (f_at_kind_233(F->up, F->up->k_str_8)) {
f_designator_292(F->up, &F->def_name_text_1599);
(*(P159)rt_nil_check(F->p_1592)).b_ = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
(*(P159)rt_nil_check((*(P159)rt_nil_check(F->p_1592)).b_)).name_ = F->def_name_text_1599;
} else {
f_name_p_273(F->up, &(*(P159)rt_nil_check(F->p_1592)).b_);
}
}
f_append_224(F->up, &F->head_1593, &F->tail_1594, F->p_1592);
} else {
f_id_list_250(F->up, &F->names_1595);
f_expect_op_244(F->up, rt_str(":", 1));
if (f_at_kw_229(F->up, rt_str("IN", 2))) {
f_skip_240(F->up);
}
f_subtype_ind_275(F->up, &F->st_1596);
F->def_1597 = NULL;
if (f_at_op_231(F->up, rt_str(":=", 2))) {
f_skip_240(F->up);
f_expr_257(F->up, &F->def_1597);
}
while ((F->names_1595 != NULL)) {
F->p_1592 = f_nn_220(F->up, F->up->n_param_49, (*(P159)rt_nil_check(F->names_1595)).line_);
(*(P159)rt_nil_check(F->p_1592)).ival_ = ((rt_int)1LL);
(*(P159)rt_nil_check(F->p_1592)).name_ = (*(P159)rt_nil_check(F->names_1595)).name_;
(*(P159)rt_nil_check(F->p_1592)).a_ = F->st_1596;
(*(P159)rt_nil_check(F->p_1592)).b_ = F->def_1597;
f_append_224(F->up, &F->head_1593, &F->tail_1594, F->p_1592);
F->names_1595 = (*(P159)rt_nil_check(F->names_1595)).next_;
}
L_end_1602: ;
}
F->more_1600 = f_at_op_231(F->up, rt_str(";", 1));
if (F->more_1600) {
f_skip_240(F->up);
}
}
L_end_1601: ;
f_expect_op_244(F->up, rt_str(")", 1));
}
if ((f_at_kw_229(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_229(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_294(F->up, &(*(P159)rt_nil_check(F->x_1591)).b_);
} else if (f_at_kw_229(F->up, rt_str("PACKAGE", 7))) {
f_package_p_300(F->up, &(*(P159)rt_nil_check(F->x_1591)).b_);
} else if (f_at_kw_229(F->up, rt_str("TASK", 4))) {
f_task_p_620(F->up, &(*(P159)rt_nil_check(F->x_1591)).b_);
} else {
f_perror_239(F->up, rt_str("a generic unit is a subprogram, a package or a task", 51));
}
(*(P159)rt_nil_check(F->x_1591)).a_ = F->head_1593;
(*(P159)rt_nil_check(F->x_1591)).name_ = (*(P159)rt_nil_check((*(P159)rt_nil_check(F->x_1591)).b_)).name_;
(*F->res_749) = F->x_1591;
ret_:

  return;
}

static void f_instantiation_753(struct f_greenc_1fr *up_, P159 x_751, P159 *res_752) {
  struct f_instantiation_753fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_751 = x_751;
F->res_752 = res_752;
F->i_1603 = NULL;
F->head_1604 = NULL;
F->tail_1605 = NULL;
F->a_1606 = NULL;
F->formal_1607 = NULL;
F->more_1609 = 1;
f_expect_kw_242(F->up, rt_str("IS", 2));
f_expect_kw_242(F->up, rt_str("NEW", 3));
F->i_1603 = f_nn_220(F->up, F->up->n_inst_55, (*(P159)rt_nil_check(F->x_751)).line_);
(*(P159)rt_nil_check(F->i_1603)).name_ = (*(P159)rt_nil_check(F->x_751)).name_;
(*(P159)rt_nil_check(F->i_1603)).ival_ = (*(P159)rt_nil_check(F->x_751)).kind_;
f_expect_id_246(F->up, &(*(P159)rt_nil_check(F->i_1603)).tag_);
if (f_at_op_231(F->up, rt_str("(", 1))) {
f_skip_240(F->up);
while (F->more_1609) {
F->formal_1607 = NULL;
F->mark_1608 = ((rt_int)0LL);
if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("IS", 2)))) {
f_expect_id_246(F->up, &F->formal_1607);
f_skip_240(F->up);
F->mark_1608 = ((rt_int)5LL);
} else if (((f_at_kind_233(F->up, F->up->k_id_3) && (f_kind_at_235(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && ((rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_237(F->up, ((rt_int)1LL)), rt_str(":=:", 3))))) {
f_expect_id_246(F->up, &F->formal_1607);
f_skip_240(F->up);
F->mark_1608 = ((rt_int)1LL);
}
if ((f_at_kind_233(F->up, F->up->k_str_8) && (F->mark_1608 == ((rt_int)5LL)))) {
F->a_1606 = f_nn_220(F->up, F->up->n_name_13, f_cur_line_227(F->up));
f_designator_292(F->up, &(*(P159)rt_nil_check(F->a_1606)).name_);
} else {
f_expr_257(F->up, &F->a_1606);
}
(*(P159)rt_nil_check(F->a_1606)).tag_ = F->formal_1607;
(*(P159)rt_nil_check(F->a_1606)).flag_ = F->mark_1608;
f_append_224(F->up, &F->head_1604, &F->tail_1605, F->a_1606);
F->more_1609 = f_at_op_231(F->up, rt_str(",", 1));
if (F->more_1609) {
f_skip_240(F->up);
}
}
L_end_1610: ;
f_expect_op_244(F->up, rt_str(")", 1));
}
f_expect_op_244(F->up, rt_str(";", 1));
(*(P159)rt_nil_check(F->i_1603)).a_ = F->head_1604;
(*F->res_752) = F->i_1603;
ret_:

  return;
}

static void f_generic_decl_755(struct f_greenc_1fr *up_, P159 e_754) {
  struct f_generic_decl_755fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_754 = e_754;
F->y_1611 = NULL;
if (((*(P159)rt_nil_check(F->e_754)).kind_ == F->up->n_generic_56)) {
F->y_1611 = f_new_sym_337(F->up, F->up->y_generic_100, (*(P159)rt_nil_check(F->e_754)).name_);
(*(P110)rt_nil_check(F->y_1611)).decl_ = F->e_754;
f_define_332(F->up, F->y_1611, (*(P159)rt_nil_check(F->e_754)).line_);
} else if (((*(P159)rt_nil_check(F->e_754)).kind_ == F->up->n_inst_55)) {
f_instantiate_769(F->up, F->e_754);
} else {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_754)).line_, rt_str("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_757(struct f_greenc_1fr *up_, rstr n_756) {
  struct f_is_generic_name_757fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_756 = rt_str_copy(n_756);
F->y_1612 = NULL;
F->y_1612 = f_lookup_319(F->up, F->n_756);
F->result_ = ((F->y_1612 != NULL) && ((*(P110)rt_nil_check(F->y_1612)).kind_ == F->up->y_generic_100));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_759(struct f_greenc_1fr *up_, P159 e_758) {
  struct f_attach_generic_body_759fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_758 = e_758;
F->y_1613 = NULL;
F->y_1613 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_758)).name_)));
(*(P159)rt_nil_check((*(P110)rt_nil_check(F->y_1613)).decl_)).c_ = F->e_758;
ret_:

  return;
}

static P159 f_gactual_763(struct f_greenc_1fr *up_, P159 args_760, rt_int nth_761, rstr name_762) {
  struct f_gactual_763fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_760 = args_760;
F->nth_761 = nth_761;
F->name_762 = rt_str_copy(name_762);
F->a_1614 = NULL;
F->a_1614 = F->args_760;
F->i_1615 = ((rt_int)1LL);
while ((F->a_1614 != NULL)) {
if ((((*(P159)rt_nil_check(F->a_1614)).tag_ == NULL) && (F->i_1615 == F->nth_761))) {
F->result_ = F->a_1614;
goto ret_;
}
if ((((*(P159)rt_nil_check(F->a_1614)).tag_ != NULL) && rt_str_eq((*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1614)).tag_)), F->name_762))) {
F->result_ = F->a_1614;
goto ret_;
}
if (((*(P159)rt_nil_check(F->a_1614)).tag_ == NULL)) {
F->i_1615 = rt_add(F->i_1615, ((rt_int)1LL));
}
F->a_1614 = (*(P159)rt_nil_check(F->a_1614)).next_;
}
L_end_1616: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_767(struct f_greenc_1fr *up_, P159 n_764, P133 name_765, P159 *r_766) {
  struct f_copy_node_767fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_764 = n_764;
F->name_765 = name_765;
F->r_766 = r_766;
(*F->r_766) = f_nn_220(F->up, (*(P159)rt_nil_check(F->n_764)).kind_, (*(P159)rt_nil_check(F->n_764)).line_);
as_R160(&(*(P159)rt_nil_check((*F->r_766))), (*(P159)rt_nil_check(F->n_764)));
(*(P159)rt_nil_check((*F->r_766))).name_ = F->name_765;
(*(P159)rt_nil_check((*F->r_766))).next_ = NULL;
ret_:

  return;
}

static void f_instantiate_769(struct f_greenc_1fr *up_, P159 e_768) {
  struct f_instantiate_769fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_768 = e_768;
F->g_1617 = NULL;
F->g_1617 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_768)).tag_)));
F->gd_1618 = NULL;
F->pat_1619 = NULL;
F->f_1620 = NULL;
F->a_1621 = NULL;
F->cn_1622 = NULL;
F->y_1623 = NULL;
F->z_1624 = NULL;
F->fs_1625 = NULL;
F->nth_1626 = ((rt_int)1LL);
F->t_1627 = NULL;
F->vt_1628 = NULL;
F->c_1629 = NULL;
F->v_1630 = NULL;
F->acc_1631 = NULL;
F->x_1632 = NULL;
if (((F->g_1617 == NULL) || ((*(P110)rt_nil_check(F->g_1617)).kind_ != F->up->y_generic_100))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_768)).tag_)), rt_str(" is not a generic unit", 22)));
}
F->gd_1618 = (*(P110)rt_nil_check(F->g_1617)).decl_;
F->pat_1619 = (*(P159)rt_nil_check(F->gd_1618)).b_;
f_open_scope_333(F->up);
F->f_1620 = (*(P159)rt_nil_check(F->gd_1618)).a_;
while ((F->f_1620 != NULL)) {
F->a_1621 = f_gactual_763(F->up, (*(P159)rt_nil_check(F->e_768)).a_, F->nth_1626, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1620)).name_)));
F->nth_1626 = rt_add(F->nth_1626, ((rt_int)1LL));
if (((*(P159)rt_nil_check(F->f_1620)).ival_ == ((rt_int)10LL))) {
if (((F->a_1621 == NULL) || ((*(P159)rt_nil_check(F->a_1621)).kind_ != F->up->n_name_13))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat(rt_str("a type is required for generic parameter ", 41), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1620)).name_))));
}
F->y_1623 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1621)).name_)));
if (((F->y_1623 == NULL) || ((*(P110)rt_nil_check(F->y_1623)).kind_ != F->up->y_type_94))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat((*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1621)).name_)), rt_str(" is not a type", 14)));
}
f_copy_sym_586(F->up, F->y_1623, &F->z_1624);
(*(P110)rt_nil_check(F->z_1624)).name_ = (*(P159)rt_nil_check(F->f_1620)).name_;
f_define_332(F->up, F->z_1624, (*(P159)rt_nil_check(F->e_768)).line_);
} else if (((*(P159)rt_nil_check(F->f_1620)).ival_ == ((rt_int)11LL))) {
if ((F->a_1621 == NULL)) {
F->a_1621 = (*(P159)rt_nil_check(F->f_1620)).b_;
}
if (((F->a_1621 == NULL) || ((*(P159)rt_nil_check(F->a_1621)).kind_ != F->up->n_name_13))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat(rt_str("a subprogram is required for generic parameter ", 47), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1620)).name_))));
}
f_build_subprogram_415(F->up, (*(P159)rt_nil_check(F->f_1620)).a_, &F->fs_1625);
F->y_1623 = F->up->table_112.p[rt_index(f_hash_317(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1621)).name_))), F->up->table_112.lo, F->up->table_112.hi) - F->up->table_112.lo];
while (((F->y_1623 != NULL) && (!(((rt_str_eq((*(P133)rt_nil_check((*(P110)rt_nil_check(F->y_1623)).name_)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1621)).name_))) && (((*(P110)rt_nil_check(F->y_1623)).kind_ == F->up->y_func_92) || ((*(P110)rt_nil_check(F->y_1623)).kind_ == F->up->y_proc_93))) && f_same_signature_329(F->up, (*(P110)rt_nil_check(F->y_1623)).params_, (*(P110)rt_nil_check(F->fs_1625)).params_)) && f_same_326(F->up, (*(P110)rt_nil_check(F->y_1623)).result_, (*(P110)rt_nil_check(F->fs_1625)).result_))))) {
F->y_1623 = (*(P110)rt_nil_check(F->y_1623)).chain_;
}
L_end_1635: ;
if ((F->y_1623 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no subprogram ", 14), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->a_1621)).name_))), rt_str(" matches generic parameter ", 27)), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1620)).name_))));
}
f_copy_sym_586(F->up, F->y_1623, &F->z_1624);
(*(P110)rt_nil_check(F->z_1624)).name_ = (*(P159)rt_nil_check(F->f_1620)).name_;
f_define_332(F->up, F->z_1624, (*(P159)rt_nil_check(F->e_768)).line_);
} else {
if ((F->a_1621 == NULL)) {
F->a_1621 = (*(P159)rt_nil_check(F->f_1620)).b_;
}
if ((F->a_1621 == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat(rt_str("no actual for generic parameter ", 32), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1620)).name_))));
}
f_resolve_367(F->up, (*(P159)rt_nil_check(F->f_1620)).a_, &F->t_1627, &F->c_1629);
f_gexpr_509(F->up, F->a_1621, F->t_1627, &F->vt_1628, &F->v_1630);
f_check_type_346(F->up, F->vt_1628, F->t_1627, (*(P159)rt_nil_check(F->e_768)).line_);
F->z_1624 = f_new_sym_337(F->up, F->up->y_const_91, (*(P159)rt_nil_check(F->f_1620)).name_);
f_storage_405(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->f_1620)).name_)), F->t_1627, &F->acc_1631);
f_copy_code_390(F->up, F->t_1627, (*(P133)rt_nil_check(F->v_1630)), &F->x_1632);
f_emit_201(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P133)rt_nil_check(F->acc_1631)), rt_str(" = ", 3)), (*(P133)rt_nil_check(F->x_1632))), 59));
(*(P110)rt_nil_check(F->z_1624)).t_ = F->t_1627;
(*(P110)rt_nil_check(F->z_1624)).c_ = F->c_1629;
(*(P110)rt_nil_check(F->z_1624)).ro_ = 1;
if (((*(P115)rt_nil_check(F->t_1627)).kind_ == F->up->t_int_75)) {
f_manifest_363(F->up, F->a_1621, &(*(P110)rt_nil_check(F->z_1624)).mvalue_, &F->ok_1633);
(*(P110)rt_nil_check(F->z_1624)).hasmv_ = F->ok_1633;
}
f_bind_408(F->up, F->z_1624, F->acc_1631);
f_define_332(F->up, F->z_1624, (*(P159)rt_nil_check(F->e_768)).line_);
}
F->f_1620 = (*(P159)rt_nil_check(F->f_1620)).next_;
}
L_end_1634: ;
if ((((*(P159)rt_nil_check(F->pat_1619)).kind_ == F->up->n_proc_46) || ((*(P159)rt_nil_check(F->pat_1619)).kind_ == F->up->n_func_47))) {
if (((*(P159)rt_nil_check(F->pat_1619)).ival_ == ((rt_int)1LL))) {
if (((*(P159)rt_nil_check(F->gd_1618)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic ", 20), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_768)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
F->pat_1619 = (*(P159)rt_nil_check(F->gd_1618)).c_;
}
f_copy_node_767(F->up, F->pat_1619, (*(P159)rt_nil_check(F->e_768)).name_, &F->cn_1622);
f_build_subprogram_415(F->up, F->cn_1622, &F->y_1623);
f_define_332(F->up, F->y_1623, (*(P159)rt_nil_check(F->e_768)).line_);
f_subprogram_body_424(F->up, F->cn_1622, F->y_1623);
} else if (((*(P159)rt_nil_check(F->pat_1619)).kind_ == F->up->n_pkgspec_50)) {
f_copy_node_767(F->up, F->pat_1619, (*(P159)rt_nil_check(F->e_768)).name_, &F->cn_1622);
f_package_spec_591(F->up, F->cn_1622);
F->y_1623 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_768)).name_)));
if (((*(P159)rt_nil_check(F->gd_1618)).c_ != NULL)) {
f_copy_node_767(F->up, (*(P159)rt_nil_check(F->gd_1618)).c_, (*(P159)rt_nil_check(F->e_768)).name_, &F->cn_1622);
f_package_body_596(F->up, F->cn_1622);
}
} else {
f_copy_node_767(F->up, F->pat_1619, (*(P159)rt_nil_check(F->e_768)).name_, &F->cn_1622);
f_task_spec_675(F->up, F->cn_1622);
F->y_1623 = f_lookup_319(F->up, (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_768)).name_)));
if (((*(P159)rt_nil_check(F->gd_1618)).c_ == NULL)) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->e_768)).line_, rt_str_cat(rt_str_cat(rt_str("the body of generic task ", 25), (*(P133)rt_nil_check((*(P159)rt_nil_check(F->e_768)).tag_))), rt_str(" is not given before this instantiation", 39)));
}
f_copy_node_767(F->up, (*(P159)rt_nil_check(F->gd_1618)).c_, (*(P159)rt_nil_check(F->e_768)).name_, &F->cn_1622);
f_task_body_679(F->up, F->cn_1622);
}
f_close_scope_334(F->up);
f_define_332(F->up, F->y_1623, (*(P159)rt_nil_check(F->e_768)).line_);
ret_:

  return;
}

static void f_predef_type_774(struct f_greenc_1fr *up_, rstr name_770, P115 t_771, rstr lo_772, rstr hi_773) {
  struct f_predef_type_774fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_770 = rt_str_copy(name_770);
F->t_771 = t_771;
F->lo_772 = rt_str_copy(lo_772);
F->hi_773 = rt_str_copy(hi_773);
F->y_1636 = NULL;
F->y_1636 = f_new_sym_337(F->up, F->up->y_type_94, f_mk_178(F->up, F->name_770));
(*(P110)rt_nil_check(F->y_1636)).t_ = F->t_771;
if (((F->lo_772).len > ((rt_int)0LL))) {
(*(P110)rt_nil_check(F->y_1636)).c_ = f_new_cons_340(F->up);
(*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1636)).c_)).lo_ = f_mk_178(F->up, F->lo_772);
(*(P163)rt_nil_check((*(P110)rt_nil_check(F->y_1636)).c_)).hi_ = f_mk_178(F->up, F->hi_773);
}
f_define_332(F->up, F->y_1636, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_778(struct f_greenc_1fr *up_, rstr name_775, P115 t_776, rstr code_text_777) {
  struct f_predef_const_778fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_775 = rt_str_copy(name_775);
F->t_776 = t_776;
F->code_text_777 = rt_str_copy(code_text_777);
F->y_1637 = NULL;
F->y_1637 = f_new_sym_337(F->up, F->up->y_const_91, f_mk_178(F->up, F->name_775));
(*(P110)rt_nil_check(F->y_1637)).t_ = F->t_776;
(*(P110)rt_nil_check(F->y_1637)).ro_ = 1;
(*(P110)rt_nil_check(F->y_1637)).access_path_ = f_mk_178(F->up, F->code_text_777);
f_define_332(F->up, F->y_1637, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_780(struct f_greenc_1fr *up_, rstr name_779) {
  struct f_predef_exc_780fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_779 = rt_str_copy(name_779);
F->y_1638 = NULL;
F->y_1638 = f_new_sym_337(F->up, F->up->y_exc_95, f_mk_178(F->up, F->name_779));
(*(P110)rt_nil_check(F->y_1638)).cname_ = f_mk_178(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_192(F->up)), F->name_779), f_q_192(F->up)), 41));
f_define_332(F->up, F->y_1638, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_784(struct f_greenc_1fr *up_, rstr name_781, P115 t_782, rt_int v_783) {
  struct f_predef_lit_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_781 = rt_str_copy(name_781);
F->t_782 = t_782;
F->v_783 = v_783;
F->y_1639 = NULL;
F->y_1639 = f_new_sym_337(F->up, F->up->y_enumlit_96, f_mk_178(F->up, F->name_781));
(*(P110)rt_nil_check(F->y_1639)).t_ = F->t_782;
(*(P110)rt_nil_check(F->y_1639)).result_ = F->t_782;
(*(P110)rt_nil_check(F->y_1639)).mvalue_ = F->v_783;
(*(P110)rt_nil_check(F->y_1639)).hasmv_ = 1;
f_define_332(F->up, F->y_1639, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_785(struct f_greenc_1fr *up_) {
  struct f_predefine_785fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_1640 = rt_str_copy(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_str("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_1641 = ((rt_int)1LL);
F->code_no_1642 = ((rt_int)0LL);
f_predef_type_774(F->up, rt_str("INTEGER", 7), F->up->ty_int_145, rt_str("", 0), rt_str("", 0));
f_predef_type_774(F->up, rt_str("SHORT_INTEGER", 13), F->up->ty_int_145, rt_str("", 0), rt_str("", 0));
f_predef_type_774(F->up, rt_str("LONG_INTEGER", 12), F->up->ty_int_145, rt_str("", 0), rt_str("", 0));
f_predef_type_774(F->up, rt_str("NATURAL", 7), F->up->ty_int_145, rt_str("1", 1), rt_str("INT64_MAX", 9));
f_predef_type_774(F->up, rt_str("PRIORITY", 8), F->up->ty_int_145, rt_str("0", 1), rt_str("255", 3));
f_predef_type_774(F->up, rt_str("BOOLEAN", 7), F->up->ty_bool_146, rt_str("0", 1), rt_str("1", 1));
f_predef_type_774(F->up, rt_str("CHARACTER", 9), F->up->ty_char_148, rt_str("0", 1), rt_str("127", 3));
f_predef_type_774(F->up, rt_str("STRING", 6), F->up->ty_string_149, rt_str("", 0), rt_str("", 0));
f_predef_type_774(F->up, rt_str("FLOAT", 5), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_type_774(F->up, rt_str("SHORT_FLOAT", 11), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_type_774(F->up, rt_str("LONG_FLOAT", 10), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_type_774(F->up, rt_str("TIME", 4), F->up->ty_float_147, rt_str("", 0), rt_str("", 0));
f_predef_lit_784(F->up, rt_str("FALSE", 5), F->up->ty_bool_146, ((rt_int)0LL));
f_predef_lit_784(F->up, rt_str("TRUE", 4), F->up->ty_bool_146, ((rt_int)1LL));
{ rt_int lo1645 = ((rt_int)1LL), hi1646 = (F->control_1640).len;
for (rt_int it1647 = lo1645; it1647 <= hi1646; it1647++) {
F->i_1644 = it1647;
if ((rt_str_get(F->control_1640, F->i_1644) == 32)) {
f_predef_const_778(F->up, rt_str_slice(F->control_1640, F->start_1641, rt_sub(F->i_1644, ((rt_int)1LL))), F->up->ty_char_148, rt_str_of_int(F->code_no_1642));
F->code_no_1642 = rt_add(F->code_no_1642, ((rt_int)1LL));
F->start_1641 = rt_add(F->i_1644, ((rt_int)1LL));
}
}
}
L_end_1643: ;
f_predef_const_778(F->up, rt_str("DEL", 3), F->up->ty_char_148, rt_str("127", 3));
f_predef_const_778(F->up, rt_str("EXCLAM", 6), F->up->ty_char_148, rt_str("33", 2));
f_predef_const_778(F->up, rt_str("DOLLAR", 6), F->up->ty_char_148, rt_str("36", 2));
f_predef_const_778(F->up, rt_str("QUESTION", 8), F->up->ty_char_148, rt_str("63", 2));
f_predef_const_778(F->up, rt_str("AT_SIGN", 7), F->up->ty_char_148, rt_str("64", 2));
f_predef_const_778(F->up, rt_str("L_BRACKET", 9), F->up->ty_char_148, rt_str("91", 2));
f_predef_const_778(F->up, rt_str("BACK_SLASH", 10), F->up->ty_char_148, rt_str("92", 2));
f_predef_const_778(F->up, rt_str("R_BRACKET", 9), F->up->ty_char_148, rt_str("93", 2));
f_predef_const_778(F->up, rt_str("CIRCUMFLEX", 10), F->up->ty_char_148, rt_str("94", 2));
f_predef_const_778(F->up, rt_str("GRAVE", 5), F->up->ty_char_148, rt_str("96", 2));
f_predef_const_778(F->up, rt_str("L_BRACE", 7), F->up->ty_char_148, rt_str("123", 3));
f_predef_const_778(F->up, rt_str("R_BRACE", 7), F->up->ty_char_148, rt_str("125", 3));
f_predef_const_778(F->up, rt_str("TILDE", 5), F->up->ty_char_148, rt_str("126", 3));
{ rt_int lo1650 = ((rt_int)0LL), hi1651 = ((rt_int)25LL);
for (rt_int it1652 = lo1650; it1652 <= hi1651; it1652++) {
F->i_1649 = it1652;
f_predef_const_778(F->up, rt_str_catc(rt_str("LC_", 3), rt_range(rt_add(((rt_int)66LL), F->i_1649) - 1, 0, 127)), F->up->ty_char_148, rt_str_of_int(rt_add(((rt_int)97LL), F->i_1649)));
}
}
L_end_1648: ;
f_predef_const_778(F->up, rt_str("NEWLINE", 7), F->up->ty_string_149, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_q_192(F->up)), rt_str("\\n", 2)), f_q_192(F->up)), rt_str(", 1)", 4)));
f_predef_const_778(F->up, rt_str("SECONDS", 7), F->up->ty_float_147, rt_str("((double)RT_SECONDS)", 20));
f_predef_exc_780(F->up, rt_str("ACCESS_ERROR", 12));
f_predef_exc_780(F->up, rt_str("ASSERT_ERROR", 12));
f_predef_exc_780(F->up, rt_str("DISCRIMINANT_ERROR", 18));
f_predef_exc_780(F->up, rt_str("DIVIDE_ERROR", 12));
f_predef_exc_780(F->up, rt_str("FAILURE", 7));
f_predef_exc_780(F->up, rt_str("INDEX_ERROR", 11));
f_predef_exc_780(F->up, rt_str("INITIATE_ERROR", 14));
f_predef_exc_780(F->up, rt_str("NO_VALUE_ERROR", 14));
f_predef_exc_780(F->up, rt_str("OVERFLOW", 8));
f_predef_exc_780(F->up, rt_str("OVERLAP_ERROR", 13));
f_predef_exc_780(F->up, rt_str("RANGE_ERROR", 11));
f_predef_exc_780(F->up, rt_str("SELECT_ERROR", 12));
f_predef_exc_780(F->up, rt_str("STORAGE_OVERFLOW", 16));
f_predef_exc_780(F->up, rt_str("TASKING_ERROR", 13));
f_predef_exc_780(F->up, rt_str("UNDERFLOW", 9));
f_predef_exc_780(F->up, rt_str("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_787(struct f_greenc_1fr *up_, P159 u_786) {
  struct f_translate_787fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_786 = u_786;
F->p_1653 = NULL;
F->p_1653 = F->u_786;
F->y_1654 = NULL;
f_open_scope_333(F->up);
while ((F->p_1653 != NULL)) {
if (((*(P159)rt_nil_check(F->p_1653)).next_ == NULL)) {
if ((((*(P159)rt_nil_check(F->p_1653)).kind_ != F->up->n_proc_46) || ((*(P159)rt_nil_check(F->p_1653)).a_ != NULL))) {
f_fail_195(F->up, (*(P159)rt_nil_check(F->p_1653)).line_, rt_str("the main program is a procedure without parameters", 50));
}
f_build_subprogram_415(F->up, F->p_1653, &F->y_1654);
f_define_332(F->up, F->y_1654, (*(P159)rt_nil_check(F->p_1653)).line_);
f_subprogram_body_424(F->up, F->p_1653, F->y_1654);
F->up->main_name_176 = (*(P110)rt_nil_check(F->y_1654)).cname_;
} else {
f_decl_element_419(F->up, F->p_1653);
}
F->p_1653 = (*(P159)rt_nil_check(F->p_1653)).next_;
}
L_end_1655: ;
ret_:

  return;
}

static void f_print_program_788(struct f_greenc_1fr *up_) {
  struct f_print_program_788fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_399(F->up);
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
F->no_cons_165 = f_new_cons_340(F);
F->ty_int_145 = f_new_typ_339(F, F->t_int_75);
F->ty_bool_146 = f_new_typ_339(F, F->t_bool_76);
F->ty_float_147 = f_new_typ_339(F, F->t_float_77);
F->ty_char_148 = f_new_typ_339(F, F->t_char_85);
F->ty_string_149 = f_new_typ_339(F, F->t_string_79);
F->ty_void_150 = f_new_typ_339(F, F->t_void_83);
F->ty_nil_151 = f_new_typ_339(F, F->t_nil_84);
F->ty_act_153 = f_new_typ_339(F, F->t_act_87);
F->ty_tdecl_154 = f_new_typ_339(F, F->t_tdecl_88);
F->ty_entry_155 = f_new_typ_339(F, F->t_entry_89);
F->out_awaits_162 = f_new_buffer_196(F);
f_predefine_785(F);
f_read_source_217(F);
f_compilation_315(F, &F->units_166);
if ((F->units_166 == NULL)) {
f_fail_195(F, ((rt_int)1LL), rt_str("the compilation is empty", 24));
}
f_translate_787(F, F->units_166);
f_print_program_788(F);
ret_:

  return;
}

static void as_R1027(R1027 *d, R1027 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
}
static R1027 cp_R1027(R1027 s) {
  R1027 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1027(R1027 a, R1027 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_);
}
static void as_R1016(R1016 *d, R1016 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R1016 cp_R1016(R1016 s) {
  R1016 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1016(R1016 a, R1016 b) {
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
