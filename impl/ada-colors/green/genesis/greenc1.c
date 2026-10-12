#include "paleo.h"
#include <math.h>
typedef struct R101 R101;
typedef struct R101 *P100;
typedef struct A99 A99;
struct A99 { rt_int lo, hi, lo2, hi2; P100 *p; };
typedef struct R108 R108;
typedef struct R108 *P107;
typedef struct A106 A106;
struct A106 { rt_int lo, hi, lo2, hi2; P107 *p; };
typedef struct R113 R113;
typedef struct R113 *P112;
typedef struct R117 R117;
typedef struct R117 *P116;
typedef rstr *P130;
typedef struct R134 R134;
typedef struct R134 *P133;
typedef struct R138 R138;
typedef struct R138 *P137;
typedef struct R151 R151;
typedef struct R151 *P150;
typedef struct R154 R154;
typedef struct R154 *P153;
struct R117 { int dummy_; P137 head_; P137 tail_; };
struct R138 { int dummy_; P130 s_; P137 next_; };
struct R101 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P130 s_; };
struct R154 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P130 name_; P130 tag_; P153 a_; P153 b_; P153 c_; P153 d_; P153 e_; P153 next_; };
typedef struct R808 R808;
typedef struct R808 *P807;
struct R108 { int dummy_; rt_int kind_; P130 name_; P112 t_; P150 c_; P130 access_path_; P130 cname_; int ro_; rt_int mvalue_; int hasmv_; P153 decl_; P807 params_; P112 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; P107 members_; P107 mnext_; P107 chain_; P107 stack_; };
typedef struct R819 R819;
typedef struct R819 *P818;
struct R113 { int dummy_; rt_int kind_; P130 name_; P153 lits_; P112 elem_; P112 idx_; P150 elemcons_; P150 tcons_; P818 fields_; P112 target_; P153 decl_; P130 cname_; int forward_; int defined_; int priv_; P112 next_; };
struct R151 { int dummy_; P130 lo_; P130 hi_; P130 slen_; rt_int mlo_; rt_int mhi_; int hasm_; };
struct R819 { int dummy_; P130 name_; P112 t_; P150 c_; P818 next_; };
struct R808 { int dummy_; P130 name_; rt_int mode_; P112 t_; P150 c_; P130 cfield_; P153 dflt_; P807 next_; };
struct R134 { int dummy_; P130 match_; P130 label_; rt_int depth_; int is_loop_; P133 next_; };
struct f_mk_158fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_157;
 P130 result_;
};
struct f_new_name_161fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_159;
 P130 *res_160;
};
struct f_is_letter_163fr { int dummy;
 struct f_greenc_1fr *up;
 int c_162;
 int result_;
};
struct f_is_digit_165fr { int dummy;
 struct f_greenc_1fr *up;
 int c_164;
 int result_;
};
struct f_upper_167fr { int dummy;
 struct f_greenc_1fr *up;
 int c_166;
 int result_;
};
struct f_lower_s_169fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_168;
 rstr result_;
 rstr r_586;
 rt_int i_588;
};
struct f_c_field_171fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_170;
 rstr result_;
};
struct f_q_172fr { int dummy;
 struct f_greenc_1fr *up;
 rstr result_;
};
struct f_fail_175fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_173;
 rstr msg_174;
};
struct f_new_buffer_176fr { int dummy;
 struct f_greenc_1fr *up;
 P116 result_;
};
struct f_put_to_179fr { int dummy;
 struct f_greenc_1fr *up;
 P116 b_177;
 rstr s_178;
 P137 l_594;
};
struct f_emit_181fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_180;
};
struct f_print_buffer_183fr { int dummy;
 struct f_greenc_1fr *up;
 P116 b_182;
 P137 l_597;
};
struct f_splice_186fr { int dummy;
 struct f_greenc_1fr *up;
 P116 a_184;
 P116 b_185;
};
struct f_is_reserved_188fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_187;
 int result_;
};
struct f_add_token_192fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_189;
 rstr s_190;
 rt_int ival_191;
};
struct f_digit_value_194fr { int dummy;
 struct f_greenc_1fr *up;
 int c_193;
 rt_int result_;
};
struct f_lex_line_196fr { int dummy;
 struct f_greenc_1fr *up;
 rstr line_195;
 rt_int i_602;
 rt_int j_603;
 rt_int n_604;
 int c_605;
 rt_int v_606;
 rstr buf_607;
 rt_int bl_608;
 rt_int base_613;
 rstr two_620;
};
struct f_read_source_197fr { int dummy;
 struct f_greenc_1fr *up;
 rstr buf_621;
 rt_int bl_622;
 int c_623;
};
struct f_nn_200fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_198;
 rt_int line_199;
 P153 result_;
};
struct f_append_204fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *head_201;
 P153 *tail_202;
 P153 x_203;
};
struct f_list_len_206fr { int dummy;
 struct f_greenc_1fr *up;
 P153 l_205;
 rt_int result_;
 rt_int n_630;
 P153 p_631;
};
struct f_cur_line_207fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_209fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_208;
 int result_;
};
struct f_at_op_211fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_210;
 int result_;
};
struct f_at_kind_213fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_212;
 int result_;
};
struct f_kind_at_215fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_214;
 rt_int result_;
};
struct f_text_at_217fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_216;
 rstr result_;
};
struct f_perror_219fr { int dummy;
 struct f_greenc_1fr *up;
 rstr msg_218;
};
struct f_skip_220fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_222fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_221;
};
struct f_expect_op_224fr { int dummy;
 struct f_greenc_1fr *up;
 rstr w_223;
};
struct f_expect_id_226fr { int dummy;
 struct f_greenc_1fr *up;
 P130 *res_225;
};
struct f_name_node_228fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_227;
 P153 x_633;
};
struct f_id_list_230fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_229;
 P153 head_634;
 P153 tail_635;
 P153 x_636;
};
struct f_binop_235fr { int dummy;
 struct f_greenc_1fr *up;
 P130 op_231;
 P153 l_232;
 P153 r_233;
 rt_int line_234;
 P153 result_;
 P153 x_638;
};
struct f_expr_237fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_236;
 P153 l_639;
 P153 r_640;
 P130 op_641;
 rt_int line_642;
};
struct f_is_rel_239fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_238;
 int result_;
};
struct f_relation_241fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_240;
 P153 l_644;
 P153 r_645;
 P153 lo_646;
 P153 hi_647;
 P153 t_648;
 P130 op_649;
 rt_int line_650;
 int neg_651;
};
struct f_simple_expr_243fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_242;
 P153 l_652;
 P153 r_653;
 P130 op_654;
 rt_int line_655;
};
struct f_term_245fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_244;
 P153 l_657;
 P153 r_658;
 P130 op_659;
 rt_int line_660;
};
struct f_factor_247fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_246;
 P153 l_662;
 P153 r_663;
 P130 op_664;
 rt_int line_665;
};
struct f_primary_249fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_248;
 P153 x_666;
 rt_int line_667;
};
struct f_agg_or_paren_251fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_250;
 rt_int line_668;
 P153 items_669;
 P153 itail_670;
 P153 it_671;
 P153 first_672;
 P153 keys_673;
 P153 ktail_674;
 P153 lab_675;
 P153 x_676;
 int more_677;
};
struct f_name_p_253fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_252;
 P153 p_680;
 P153 x_681;
 P153 args_682;
 P153 atail_683;
 P153 lo_684;
 P153 r_685;
 rt_int line_686;
 int more_687;
 P130 formal_691;
 rt_int mark_692;
};
struct f_subtype_ind_255fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_254;
 P153 x_693;
 P153 r_694;
 P153 args_695;
 P153 atail_696;
 P153 lo_697;
 rt_int line_698;
 int more_699;
};
struct f_type_spec_257fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_256;
 P153 x_702;
};
struct f_type_def_259fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_258;
 P153 x_703;
 P153 lits_704;
 P153 ltail_705;
 P153 l_706;
 P153 idx_707;
 P153 itail_708;
 P153 r_709;
 P153 comps_710;
 P153 ctail_711;
 P153 names_712;
 P153 st_713;
 P153 def_714;
 P153 cm_715;
 rt_int line_716;
 int more_717;
};
struct f_skip_pragma_260fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_skip_visibility_261fr { int dummy;
 struct f_greenc_1fr *up;
 P153 names_723;
};
struct f_decl_part_263fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_262;
 P153 head_724;
 P153 tail_725;
 P153 x_726;
 P153 names_727;
};
struct f_object_decl_265fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_264;
 P153 head_729;
 P153 tail_730;
 P153 names_731;
 P153 st_732;
 P153 init_733;
 P153 x_734;
 rt_int line_735;
 int is_const_736;
};
struct f_type_decl_267fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_266;
 P153 x_739;
 rt_int line_740;
};
struct f_formal_part_269fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_268;
 P153 head_741;
 P153 tail_742;
 P153 names_743;
 P153 st_744;
 P153 def_745;
 P153 p_746;
 rt_int mode_747;
 int more_748;
};
struct f_designator_271fr { int dummy;
 struct f_greenc_1fr *up;
 P130 *res_270;
};
struct f_subprogram_273fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_272;
 P153 x_751;
 rt_int line_752;
 int is_proc_753;
};
struct f_body_part_275fr { int dummy;
 struct f_greenc_1fr *up;
 P153 x_274;
};
struct f_parse_handlers_277fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_276;
 P153 head_754;
 P153 tail_755;
 P153 h_756;
 P153 names_757;
 P153 ntail_758;
 P153 n_759;
};
struct f_package_p_279fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_278;
 P153 x_763;
 rt_int line_764;
};
struct f_at_statements_end_280fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_282fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_281;
 P153 head_765;
 P153 tail_766;
 P153 x_767;
};
struct f_statement_284fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_283;
 P153 x_769;
 P153 t_770;
 rt_int line_771;
 P130 label_772;
};
struct f_task_statement_286fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_285;
};
struct f_if_stmt_288fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_287;
 P153 x_774;
 P153 arm_775;
 P153 head_776;
 P153 tail_777;
 int go_778;
};
struct f_case_stmt_290fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_289;
 P153 x_780;
 P153 arm_781;
 P153 head_782;
 P153 tail_783;
 P153 labs_784;
 P153 ltail_785;
 P153 l_786;
 int others_arm_787;
};
struct f_loop_stmt_292fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_291;
 P153 x_790;
 P153 r_791;
 rt_int line_792;
};
struct f_compilation_294fr { int dummy;
 struct f_greenc_1fr *up;
 P153 *res_293;
 P153 head_793;
 P153 tail_794;
 P153 x_795;
};
struct f_hash_296fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_295;
 rt_int result_;
 rt_int h_797;
 rt_int i_799;
};
struct f_lookup_298fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_297;
 P107 result_;
 P107 y_803;
};
struct f_lookup_decl_300fr { int dummy;
 struct f_greenc_1fr *up;
 P153 d_299;
 P107 result_;
 P107 y_805;
};
struct f_overloadable_302fr { int dummy;
 struct f_greenc_1fr *up;
 P107 y_301;
 int result_;
};
struct f_same_305fr { int dummy;
 struct f_greenc_1fr *up;
 P112 a_303;
 P112 b_304;
 int result_;
};
struct f_same_signature_308fr { int dummy;
 struct f_greenc_1fr *up;
 P807 a_306;
 P807 b_307;
 int result_;
 P807 x_809;
 P807 y_810;
};
struct f_define_311fr { int dummy;
 struct f_greenc_1fr *up;
 P107 y_309;
 rt_int line_310;
 rt_int h_812;
 P107 z_813;
};
struct f_open_scope_312fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_313fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_316fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_314;
 P130 name_315;
 P107 result_;
};
struct f_new_typ_318fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_317;
 P112 result_;
};
struct f_new_cons_319fr { int dummy;
 struct f_greenc_1fr *up;
 P150 result_;
};
struct f_kind_name_321fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_320;
 rstr result_;
};
struct f_check_type_325fr { int dummy;
 struct f_greenc_1fr *up;
 P112 got_322;
 P112 want_323;
 rt_int line_324;
};
struct f_field_count_327fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_326;
 rt_int result_;
 rt_int n_825;
 P818 f_826;
};
struct f_ctype_330fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_328;
 P130 *r_329;
 P130 s_828;
};
struct f_field_decls_333fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_331;
 P130 *r_332;
 P818 f_830;
 P130 s_831;
 P130 ct_832;
};
struct f_declare_ctype_335fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_334;
 P130 ct_834;
 P130 s_835;
 P112 target_836;
};
struct f_lit_index_338fr { int dummy;
 struct f_greenc_1fr *up;
 P153 lits_336;
 rstr name_337;
 rt_int result_;
 rt_int i_837;
 P153 l_838;
};
struct f_manifest_342fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_339;
 rt_int *v_340;
 int *ok_341;
 rt_int a_840;
 rt_int b_841;
 int ok2_842;
 P107 y_843;
};
struct f_resolve_346fr { int dummy;
 struct f_greenc_1fr *up;
 P153 st_343;
 P112 *t_344;
 P150 *c_345;
 P107 y_844;
 P112 dummy_845;
 P130 code_846;
 int ok_847;
 P153 r_848;
};
struct f_type_definition_351fr { int dummy;
 struct f_greenc_1fr *up;
 P153 d_347;
 P130 name_348;
 P112 *t_349;
 P150 *c_350;
 P112 dummy_849;
 P112 it_850;
 P150 ic_851;
 P153 l_852;
 P153 comp_853;
 P818 f_854;
 P818 tail_855;
 int ok_856;
 rt_int n_857;
 P107 y_858;
};
struct f_finish_ptr_353fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_352;
 P150 c_864;
};
struct f_init_storage_357fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_354;
 P112 t_355;
 P150 c_356;
 P130 ct_865;
 P130 i_866;
 P818 f_867;
};
struct f_composite_359fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_358;
 int result_;
};
struct f_assign_code_365fr { int dummy;
 struct f_greenc_1fr *up;
 rstr lval_360;
 P112 t_361;
 rstr v_362;
 P150 c_363;
 P130 *r_364;
 P130 ct_869;
};
struct f_copy_code_369fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_366;
 rstr v_367;
 P130 *r_368;
 P130 ct_870;
};
struct f_eq_code_374fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_370;
 rstr a_371;
 rstr b_372;
 P130 *r_373;
 P130 ct_871;
};
struct f_seen_name_377fr { int dummy;
 struct f_greenc_1fr *up;
 P137 l_375;
 rstr s_376;
 int result_;
 P137 p_872;
};
struct f_emit_helpers_378fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_874;
 P137 done_875;
 P137 l_876;
};
struct f_helper_bodies_380fr { int dummy;
 struct f_greenc_1fr *up;
 P112 t_379;
 P130 c_880;
 P116 b_881;
 P130 ct_882;
 P130 x_883;
 P130 y_884;
 P130 conds_885;
 P818 f_886;
};
struct f_storage_384fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_381;
 P112 t_382;
 P130 *access_code_383;
 P130 ct_889;
 P130 g_890;
};
struct f_bind_387fr { int dummy;
 struct f_greenc_1fr *up;
 P107 y_385;
 P130 access_code_386;
};
struct f_declare_subprograms_389fr { int dummy;
 struct f_greenc_1fr *up;
 P153 from_388;
 P153 e_891;
 P107 y_892;
};
struct f_build_subprogram_392fr { int dummy;
 struct f_greenc_1fr *up;
 P153 d_390;
 P107 *y_391;
 P153 p_894;
 P807 pm_895;
 P807 tail_896;
 P150 rc_897;
 rt_int k_898;
};
struct f_decl_elements_394fr { int dummy;
 struct f_greenc_1fr *up;
 P153 decls_393;
 P153 e_902;
 int declared_903;
};
struct f_decl_element_396fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_395;
 P107 y_905;
 P112 t_906;
 P112 vt_907;
 P150 c_908;
 P130 acc_909;
 P130 v_910;
 P130 x_911;
 int ok_912;
};
struct f_other_decl_398fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_397;
};
struct f_subprogram_body_401fr { int dummy;
 struct f_greenc_1fr *up;
 P153 d_399;
 P107 y_400;
 P116 saved_code_914;
 P116 saved_fields_915;
 int saved_in_916;
 P107 saved_sym_917;
 P133 saved_exits_918;
 rt_int saved_frames_919;
 P137 saved_handlers_920;
 P137 saved_cleanups_921;
 P130 args_922;
 P130 head_923;
 P130 frame_924;
 P130 parent_925;
 P130 ct_926;
 P130 x_927;
 P807 pm_928;
 P107 p_929;
};
struct f_gen_statements_403fr { int dummy;
 struct f_greenc_1fr *up;
 P153 stmts_402;
 P153 s_931;
};
struct f_pop_frames_405fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_404;
 rt_int i_933;
 P137 c_934;
};
struct f_push_cleanup_407fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_406;
};
struct f_pop_cleanup_408fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_412fr { int dummy;
 struct f_greenc_1fr *up;
 P153 stmts_409;
 P153 hs_410;
 rt_int line_411;
 P130 f_938;
 P130 x_939;
 P153 h_940;
 P153 n_941;
 int first_942;
 int has_others_943;
 P130 conds_944;
};
struct f_exc_id_416fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_413;
 rt_int line_414;
 P130 *r_415;
 P107 y_949;
};
struct f_gen_statement_418fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_417;
 P112 t_950;
 P112 vt_951;
 P150 c_952;
 P130 lv_953;
 P130 v_954;
 P130 x_955;
 int ro_956;
};
struct f_task_statement_gen_420fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_419;
};
struct f_gen_call_422fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_421;
 P153 c_958;
 P112 t_959;
 P130 v_960;
};
struct f_gen_if_424fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_423;
 P153 a_961;
 int first_962;
 P112 t_963;
 P130 v_964;
};
struct f_gen_case_426fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_425;
 P112 st_966;
 P112 vt_967;
 int first_968;
 P153 a_969;
 P153 lab_970;
 P130 sel_971;
 P130 tmp_972;
 P130 ct_973;
 P130 conds_974;
 P130 v_975;
 P130 lo_976;
 P130 hi_977;
};
struct f_push_exit_430fr { int dummy;
 struct f_greenc_1fr *up;
 P130 match_427;
 int is_loop_428;
 P130 *label_429;
};
struct f_gen_loop_432fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_431;
 P112 t_982;
 P112 vt_983;
 P150 c_984;
 P130 label_985;
 P130 cond_986;
 P130 acc_987;
 P130 lov_988;
 P130 hiv_989;
 P130 it_990;
 P107 y_991;
 P153 r_992;
};
struct f_gen_block_434fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_433;
 P130 label_993;
};
struct f_gen_exit_436fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_435;
 P133 x_994;
 P112 t_995;
 P130 v_996;
};
struct f_gen_return_438fr { int dummy;
 struct f_greenc_1fr *up;
 P153 s_437;
 P112 vt_998;
 P130 v_999;
};
struct f_access_of_441fr { int dummy;
 struct f_greenc_1fr *up;
 P107 y_439;
 P130 *r_440;
 P130 p_1000;
 rt_int i_1002;
};
struct f_link_to_444fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_442;
 P130 *r_443;
 rt_int i_1007;
};
struct f_c_ident_446fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_445;
 rstr result_;
};
struct f_deref_450fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_447;
 P112 t_448;
 P130 *r_449;
 P130 ct_1011;
};
struct f_is_object_452fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_451;
 int result_;
 P107 y_1012;
};
struct f_lvalue_458fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_453;
 P130 *code_out_454;
 P112 *t_455;
 P150 *c_456;
 int *ro_457;
 P107 y_1013;
 P130 base_1014;
 P112 bt_1015;
 P150 bc_1016;
};
struct f_select_on_466fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_459;
 P112 bt_460;
 P153 e_461;
 int *ro_462;
 P130 *code_out_463;
 P112 *t_464;
 P150 *c_465;
 P818 f_1017;
 P130 d_1018;
};
struct f_index_on_475fr { int dummy;
 struct f_greenc_1fr *up;
 rstr base_467;
 P112 bt_468;
 P153 e_469;
 int *ro_470;
 int lv_471;
 P130 *code_out_472;
 P112 *t_473;
 P150 *c_474;
 P153 a_1020;
 P112 it_1021;
 P130 i_1022;
 P130 lo_1023;
 P130 hi_1024;
 P130 d_1025;
};
struct f_is_char_lit_477fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_476;
 int result_;
};
struct f_is_enum_lit_479fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_478;
 int result_;
 P107 y_1026;
};
struct f_c_string_481fr { int dummy;
 struct f_greenc_1fr *up;
 rstr s_480;
 rstr result_;
 rt_int n_1027;
 rt_int i_1029;
 rstr r_1034;
 rt_int j_1035;
 rt_int i_1037;
};
struct f_gexpr_486fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_482;
 P112 want_483;
 P112 *t_484;
 P130 *r_485;
 P107 y_1041;
 P112 bt_1042;
 P150 c_1043;
 int ro_1044;
 P130 base_1045;
 P130 a_1046;
 P153 nm_1047;
};
struct f_char_literal_491fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_487;
 P112 want_488;
 P112 *t_489;
 P130 *r_490;
 rt_int i_1049;
};
struct f_gen_name_496fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_492;
 P112 want_493;
 P112 *t_494;
 P130 *r_495;
 P107 y_1050;
 P107 z_1051;
 P153 call_1052;
};
struct f_gen_unop_501fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_497;
 P112 want_498;
 P112 *t_499;
 P130 *r_500;
 P130 a_1054;
};
struct f_gen_binop_506fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_502;
 P112 want_503;
 P112 *t_504;
 P130 *r_505;
 rstr op_1055;
 P112 ta_1056;
 P112 tb_1057;
 P112 hint_1058;
 P112 ct_1059;
 P130 a_1060;
 P130 b_1061;
 P130 x_1062;
 P130 dummy_1063;
};
struct f_conversion_511fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_507;
 P107 y_508;
 P112 *t_509;
 P130 *r_510;
 P112 aty_1064;
 P130 a_1065;
};
struct f_gen_attr_516fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_512;
 P112 want_513;
 P112 *t_514;
 P130 *r_515;
 rstr a_1066;
 P107 y_1067;
 P112 tt_1068;
 P112 aty_1069;
 P130 v_1070;
 P130 d_1071;
 P150 c_1072;
 rt_int n_1073;
};
struct f_other_attr_521fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_517;
 P107 y_518;
 P112 *t_519;
 P130 *r_520;
};
struct f_allocator_526fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_522;
 P112 want_523;
 P112 *t_524;
 P130 *r_525;
 P107 y_1074;
 P112 target_1075;
 P112 vt_1076;
 P130 ct_1077;
 P130 pt_1078;
 P130 cell_1079;
 P130 v_1080;
 P130 x_1081;
};
struct f_aggregate_531fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_527;
 P112 want_528;
 P112 *t_529;
 P130 *r_530;
 P153 it_1082;
 P818 f_1083;
 P112 vt_1084;
 P130 ct_1085;
 P130 tmp_1086;
 P130 v_1087;
 P130 x_1088;
 P130 parts_1089;
 P130 et_1090;
 P130 lo_1091;
 P130 hi_1092;
 P130 key_1093;
 rt_int n_1094;
 P153 lab_1095;
};
struct f_actual_for_535fr { int dummy;
 struct f_greenc_1fr *up;
 P153 args_532;
 P807 pm_533;
 P807 first_534;
 P153 result_;
 P153 a_1101;
 P807 p_1102;
};
struct f_gcall_540fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_536;
 int is_stmt_537;
 P112 *t_538;
 P130 *r_539;
 P153 fn_1105;
 P107 y_1106;
 P130 args_1107;
 P130 lv_1108;
 P130 v_1109;
 P130 ct_1110;
 P130 x_1111;
 P153 a_1112;
 P807 pm_1113;
 P112 lt_1114;
 P112 vt_1115;
 P150 lc_1116;
 int ro_1117;
};
struct f_resolve_overload_546fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_541;
 P153 args_542;
 int is_stmt_543;
 rt_int line_544;
 P107 *y_545;
};
struct f_other_call_551fr { int dummy;
 struct f_greenc_1fr *up;
 P153 e_547;
 int is_stmt_548;
 P112 *t_549;
 P130 *r_550;
};
struct f_builtin_558fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_552;
 P153 args_553;
 rt_int line_554;
 int is_stmt_555;
 P112 *t_556;
 P130 *r_557;
 P112 aty_1119;
 P112 lt_1120;
 P130 a_1121;
 P130 w_1122;
 P130 lv_1123;
 P150 lc_1124;
 int ro_1125;
};
struct f_task_builtin_564fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_559;
 P153 args_560;
 rt_int line_561;
 P112 *t_562;
 P130 *r_563;
};
struct f_predef_type_569fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_565;
 P112 t_566;
 rstr lo_567;
 rstr hi_568;
 P107 y_1126;
};
struct f_predef_const_573fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_570;
 P112 t_571;
 rstr code_text_572;
 P107 y_1127;
};
struct f_predef_exc_575fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_574;
 P107 y_1128;
};
struct f_predef_lit_579fr { int dummy;
 struct f_greenc_1fr *up;
 rstr name_576;
 P112 t_577;
 rt_int v_578;
 P107 y_1129;
};
struct f_predefine_580fr { int dummy;
 struct f_greenc_1fr *up;
 rstr control_1130;
 rt_int start_1131;
 rt_int code_no_1132;
 rt_int i_1134;
 rt_int i_1139;
};
struct f_translate_582fr { int dummy;
 struct f_greenc_1fr *up;
 P153 u_581;
 P153 p_1143;
 P107 y_1144;
};
struct f_print_program_583fr { int dummy;
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
 rt_int y_var_87;
 rt_int y_const_88;
 rt_int y_func_89;
 rt_int y_proc_90;
 rt_int y_type_91;
 rt_int y_exc_92;
 rt_int y_enumlit_93;
 rt_int y_package_94;
 rt_int y_task_95;
 rt_int y_entry_96;
 rt_int y_generic_97;
 A99 toks_102;
 rt_int ntoks_103;
 rt_int tpos_104;
 rt_int src_line_105;
 A106 table_109;
 rt_int depth_110;
 P107 scope_stack_111;
 P112 all_types_114;
 rt_int serial_115;
 P116 out_types_118;
 P116 out_frames_119;
 P116 out_helpers_120;
 P116 out_protos_121;
 P116 out_globals_122;
 P116 out_funcs_123;
 P116 out_init_124;
 P116 out_excs_125;
 P116 code_126;
 P116 fields_buf_127;
 int in_func_128;
 rt_int cur_level_129;
 P130 st_field_131;
 P107 func_sym_132;
 P133 exits_135;
 rt_int frames_136;
 P137 handlers_139;
 P137 cleanups_140;
 rt_int trial_141;
 P112 ty_int_142;
 P112 ty_bool_143;
 P112 ty_float_144;
 P112 ty_char_145;
 P112 ty_string_146;
 P112 ty_void_147;
 P112 ty_nil_148;
 P112 ty_univ_149;
 P150 no_cons_152;
 P153 units_155;
 P130 main_name_156;
};
static void as_R819(R819 *d, R819 s);
static R819 cp_R819(R819 s);
static int eq_R819(R819 a, R819 b);
static void as_R808(R808 *d, R808 s);
static R808 cp_R808(R808 s);
static int eq_R808(R808 a, R808 b);
static void as_R154(R154 *d, R154 s);
static R154 cp_R154(R154 s);
static int eq_R154(R154 a, R154 b);
static void as_R151(R151 *d, R151 s);
static R151 cp_R151(R151 s);
static int eq_R151(R151 a, R151 b);
static void as_R138(R138 *d, R138 s);
static R138 cp_R138(R138 s);
static int eq_R138(R138 a, R138 b);
static void as_R134(R134 *d, R134 s);
static R134 cp_R134(R134 s);
static int eq_R134(R134 a, R134 b);
static void as_R117(R117 *d, R117 s);
static R117 cp_R117(R117 s);
static int eq_R117(R117 a, R117 b);
static void as_R113(R113 *d, R113 s);
static R113 cp_R113(R113 s);
static int eq_R113(R113 a, R113 b);
static void as_R108(R108 *d, R108 s);
static R108 cp_R108(R108 s);
static int eq_R108(R108 a, R108 b);
static void as_A106(A106 *d, A106 s);
static A106 cp_A106(A106 s);
static int eq_A106(A106 a, A106 b);
static void as_R101(R101 *d, R101 s);
static R101 cp_R101(R101 s);
static int eq_R101(R101 a, R101 b);
static void as_A99(A99 *d, A99 s);
static A99 cp_A99(A99 s);
static int eq_A99(A99 a, A99 b);
static P130 f_mk_158(struct f_greenc_1fr *up_, rstr s_157);
static void f_new_name_161(struct f_greenc_1fr *up_, rstr base_159, P130 *res_160);
static int f_is_letter_163(struct f_greenc_1fr *up_, int c_162);
static int f_is_digit_165(struct f_greenc_1fr *up_, int c_164);
static int f_upper_167(struct f_greenc_1fr *up_, int c_166);
static rstr f_lower_s_169(struct f_greenc_1fr *up_, rstr s_168);
static rstr f_c_field_171(struct f_greenc_1fr *up_, rstr s_170);
static rstr f_q_172(struct f_greenc_1fr *up_);
static void f_fail_175(struct f_greenc_1fr *up_, rt_int line_173, rstr msg_174);
static P116 f_new_buffer_176(struct f_greenc_1fr *up_);
static void f_put_to_179(struct f_greenc_1fr *up_, P116 b_177, rstr s_178);
static void f_emit_181(struct f_greenc_1fr *up_, rstr s_180);
static void f_print_buffer_183(struct f_greenc_1fr *up_, P116 b_182);
static void f_splice_186(struct f_greenc_1fr *up_, P116 a_184, P116 b_185);
static int f_is_reserved_188(struct f_greenc_1fr *up_, rstr w_187);
static void f_add_token_192(struct f_greenc_1fr *up_, rt_int kind_189, rstr s_190, rt_int ival_191);
static rt_int f_digit_value_194(struct f_greenc_1fr *up_, int c_193);
static void f_lex_line_196(struct f_greenc_1fr *up_, rstr line_195);
static void f_read_source_197(struct f_greenc_1fr *up_);
static P153 f_nn_200(struct f_greenc_1fr *up_, rt_int kind_198, rt_int line_199);
static void f_append_204(struct f_greenc_1fr *up_, P153 *head_201, P153 *tail_202, P153 x_203);
static rt_int f_list_len_206(struct f_greenc_1fr *up_, P153 l_205);
static rt_int f_cur_line_207(struct f_greenc_1fr *up_);
static int f_at_kw_209(struct f_greenc_1fr *up_, rstr w_208);
static int f_at_op_211(struct f_greenc_1fr *up_, rstr w_210);
static int f_at_kind_213(struct f_greenc_1fr *up_, rt_int k_212);
static rt_int f_kind_at_215(struct f_greenc_1fr *up_, rt_int k_214);
static rstr f_text_at_217(struct f_greenc_1fr *up_, rt_int k_216);
static void f_perror_219(struct f_greenc_1fr *up_, rstr msg_218);
static void f_skip_220(struct f_greenc_1fr *up_);
static void f_expect_kw_222(struct f_greenc_1fr *up_, rstr w_221);
static void f_expect_op_224(struct f_greenc_1fr *up_, rstr w_223);
static void f_expect_id_226(struct f_greenc_1fr *up_, P130 *res_225);
static void f_name_node_228(struct f_greenc_1fr *up_, P153 *res_227);
static void f_id_list_230(struct f_greenc_1fr *up_, P153 *res_229);
static P153 f_binop_235(struct f_greenc_1fr *up_, P130 op_231, P153 l_232, P153 r_233, rt_int line_234);
static void f_expr_237(struct f_greenc_1fr *up_, P153 *res_236);
static int f_is_rel_239(struct f_greenc_1fr *up_, rstr s_238);
static void f_relation_241(struct f_greenc_1fr *up_, P153 *res_240);
static void f_simple_expr_243(struct f_greenc_1fr *up_, P153 *res_242);
static void f_term_245(struct f_greenc_1fr *up_, P153 *res_244);
static void f_factor_247(struct f_greenc_1fr *up_, P153 *res_246);
static void f_primary_249(struct f_greenc_1fr *up_, P153 *res_248);
static void f_agg_or_paren_251(struct f_greenc_1fr *up_, P153 *res_250);
static void f_name_p_253(struct f_greenc_1fr *up_, P153 *res_252);
static void f_subtype_ind_255(struct f_greenc_1fr *up_, P153 *res_254);
static void f_type_spec_257(struct f_greenc_1fr *up_, P153 *res_256);
static void f_type_def_259(struct f_greenc_1fr *up_, P153 *res_258);
static void f_skip_pragma_260(struct f_greenc_1fr *up_);
static void f_skip_visibility_261(struct f_greenc_1fr *up_);
static void f_decl_part_263(struct f_greenc_1fr *up_, P153 *res_262);
static void f_object_decl_265(struct f_greenc_1fr *up_, P153 *res_264);
static void f_type_decl_267(struct f_greenc_1fr *up_, P153 *res_266);
static void f_formal_part_269(struct f_greenc_1fr *up_, P153 *res_268);
static void f_designator_271(struct f_greenc_1fr *up_, P130 *res_270);
static void f_subprogram_273(struct f_greenc_1fr *up_, P153 *res_272);
static void f_body_part_275(struct f_greenc_1fr *up_, P153 x_274);
static void f_parse_handlers_277(struct f_greenc_1fr *up_, P153 *res_276);
static void f_package_p_279(struct f_greenc_1fr *up_, P153 *res_278);
static int f_at_statements_end_280(struct f_greenc_1fr *up_);
static void f_statements_282(struct f_greenc_1fr *up_, P153 *res_281);
static void f_statement_284(struct f_greenc_1fr *up_, P153 *res_283);
static void f_task_statement_286(struct f_greenc_1fr *up_, P153 *res_285);
static void f_if_stmt_288(struct f_greenc_1fr *up_, P153 *res_287);
static void f_case_stmt_290(struct f_greenc_1fr *up_, P153 *res_289);
static void f_loop_stmt_292(struct f_greenc_1fr *up_, P153 *res_291);
static void f_compilation_294(struct f_greenc_1fr *up_, P153 *res_293);
static rt_int f_hash_296(struct f_greenc_1fr *up_, rstr s_295);
static P107 f_lookup_298(struct f_greenc_1fr *up_, rstr name_297);
static P107 f_lookup_decl_300(struct f_greenc_1fr *up_, P153 d_299);
static int f_overloadable_302(struct f_greenc_1fr *up_, P107 y_301);
static int f_same_305(struct f_greenc_1fr *up_, P112 a_303, P112 b_304);
static int f_same_signature_308(struct f_greenc_1fr *up_, P807 a_306, P807 b_307);
static void f_define_311(struct f_greenc_1fr *up_, P107 y_309, rt_int line_310);
static void f_open_scope_312(struct f_greenc_1fr *up_);
static void f_close_scope_313(struct f_greenc_1fr *up_);
static P107 f_new_sym_316(struct f_greenc_1fr *up_, rt_int kind_314, P130 name_315);
static P112 f_new_typ_318(struct f_greenc_1fr *up_, rt_int kind_317);
static P150 f_new_cons_319(struct f_greenc_1fr *up_);
static rstr f_kind_name_321(struct f_greenc_1fr *up_, P112 t_320);
static void f_check_type_325(struct f_greenc_1fr *up_, P112 got_322, P112 want_323, rt_int line_324);
static rt_int f_field_count_327(struct f_greenc_1fr *up_, P112 t_326);
static void f_ctype_330(struct f_greenc_1fr *up_, P112 t_328, P130 *r_329);
static void f_field_decls_333(struct f_greenc_1fr *up_, P112 t_331, P130 *r_332);
static void f_declare_ctype_335(struct f_greenc_1fr *up_, P112 t_334);
static rt_int f_lit_index_338(struct f_greenc_1fr *up_, P153 lits_336, rstr name_337);
static void f_manifest_342(struct f_greenc_1fr *up_, P153 e_339, rt_int *v_340, int *ok_341);
static void f_resolve_346(struct f_greenc_1fr *up_, P153 st_343, P112 *t_344, P150 *c_345);
static void f_type_definition_351(struct f_greenc_1fr *up_, P153 d_347, P130 name_348, P112 *t_349, P150 *c_350);
static void f_finish_ptr_353(struct f_greenc_1fr *up_, P112 t_352);
static void f_init_storage_357(struct f_greenc_1fr *up_, rstr lval_354, P112 t_355, P150 c_356);
static int f_composite_359(struct f_greenc_1fr *up_, P112 t_358);
static void f_assign_code_365(struct f_greenc_1fr *up_, rstr lval_360, P112 t_361, rstr v_362, P150 c_363, P130 *r_364);
static void f_copy_code_369(struct f_greenc_1fr *up_, P112 t_366, rstr v_367, P130 *r_368);
static void f_eq_code_374(struct f_greenc_1fr *up_, P112 t_370, rstr a_371, rstr b_372, P130 *r_373);
static int f_seen_name_377(struct f_greenc_1fr *up_, P137 l_375, rstr s_376);
static void f_emit_helpers_378(struct f_greenc_1fr *up_);
static void f_helper_bodies_380(struct f_greenc_1fr *up_, P112 t_379);
static void f_storage_384(struct f_greenc_1fr *up_, rstr name_381, P112 t_382, P130 *access_code_383);
static void f_bind_387(struct f_greenc_1fr *up_, P107 y_385, P130 access_code_386);
static void f_declare_subprograms_389(struct f_greenc_1fr *up_, P153 from_388);
static void f_build_subprogram_392(struct f_greenc_1fr *up_, P153 d_390, P107 *y_391);
static void f_decl_elements_394(struct f_greenc_1fr *up_, P153 decls_393);
static void f_decl_element_396(struct f_greenc_1fr *up_, P153 e_395);
static void f_other_decl_398(struct f_greenc_1fr *up_, P153 e_397);
static void f_subprogram_body_401(struct f_greenc_1fr *up_, P153 d_399, P107 y_400);
static void f_gen_statements_403(struct f_greenc_1fr *up_, P153 stmts_402);
static void f_pop_frames_405(struct f_greenc_1fr *up_, rt_int upto_404);
static void f_push_cleanup_407(struct f_greenc_1fr *up_, rstr s_406);
static void f_pop_cleanup_408(struct f_greenc_1fr *up_);
static void f_guarded_412(struct f_greenc_1fr *up_, P153 stmts_409, P153 hs_410, rt_int line_411);
static void f_exc_id_416(struct f_greenc_1fr *up_, rstr name_413, rt_int line_414, P130 *r_415);
static void f_gen_statement_418(struct f_greenc_1fr *up_, P153 s_417);
static void f_task_statement_gen_420(struct f_greenc_1fr *up_, P153 s_419);
static void f_gen_call_422(struct f_greenc_1fr *up_, P153 s_421);
static void f_gen_if_424(struct f_greenc_1fr *up_, P153 s_423);
static void f_gen_case_426(struct f_greenc_1fr *up_, P153 s_425);
static void f_push_exit_430(struct f_greenc_1fr *up_, P130 match_427, int is_loop_428, P130 *label_429);
static void f_gen_loop_432(struct f_greenc_1fr *up_, P153 s_431);
static void f_gen_block_434(struct f_greenc_1fr *up_, P153 s_433);
static void f_gen_exit_436(struct f_greenc_1fr *up_, P153 s_435);
static void f_gen_return_438(struct f_greenc_1fr *up_, P153 s_437);
static void f_access_of_441(struct f_greenc_1fr *up_, P107 y_439, P130 *r_440);
static void f_link_to_444(struct f_greenc_1fr *up_, rt_int l_442, P130 *r_443);
static rstr f_c_ident_446(struct f_greenc_1fr *up_, rstr s_445);
static void f_deref_450(struct f_greenc_1fr *up_, rstr base_447, P112 t_448, P130 *r_449);
static int f_is_object_452(struct f_greenc_1fr *up_, P153 e_451);
static void f_lvalue_458(struct f_greenc_1fr *up_, P153 e_453, P130 *code_out_454, P112 *t_455, P150 *c_456, int *ro_457);
static void f_select_on_466(struct f_greenc_1fr *up_, rstr base_459, P112 bt_460, P153 e_461, int *ro_462, P130 *code_out_463, P112 *t_464, P150 *c_465);
static void f_index_on_475(struct f_greenc_1fr *up_, rstr base_467, P112 bt_468, P153 e_469, int *ro_470, int lv_471, P130 *code_out_472, P112 *t_473, P150 *c_474);
static int f_is_char_lit_477(struct f_greenc_1fr *up_, P153 e_476);
static int f_is_enum_lit_479(struct f_greenc_1fr *up_, P153 e_478);
static rstr f_c_string_481(struct f_greenc_1fr *up_, rstr s_480);
static void f_gexpr_486(struct f_greenc_1fr *up_, P153 e_482, P112 want_483, P112 *t_484, P130 *r_485);
static void f_char_literal_491(struct f_greenc_1fr *up_, P153 e_487, P112 want_488, P112 *t_489, P130 *r_490);
static void f_gen_name_496(struct f_greenc_1fr *up_, P153 e_492, P112 want_493, P112 *t_494, P130 *r_495);
static void f_gen_unop_501(struct f_greenc_1fr *up_, P153 e_497, P112 want_498, P112 *t_499, P130 *r_500);
static void f_gen_binop_506(struct f_greenc_1fr *up_, P153 e_502, P112 want_503, P112 *t_504, P130 *r_505);
static void f_conversion_511(struct f_greenc_1fr *up_, P153 e_507, P107 y_508, P112 *t_509, P130 *r_510);
static void f_gen_attr_516(struct f_greenc_1fr *up_, P153 e_512, P112 want_513, P112 *t_514, P130 *r_515);
static void f_other_attr_521(struct f_greenc_1fr *up_, P153 e_517, P107 y_518, P112 *t_519, P130 *r_520);
static void f_allocator_526(struct f_greenc_1fr *up_, P153 e_522, P112 want_523, P112 *t_524, P130 *r_525);
static void f_aggregate_531(struct f_greenc_1fr *up_, P153 e_527, P112 want_528, P112 *t_529, P130 *r_530);
static P153 f_actual_for_535(struct f_greenc_1fr *up_, P153 args_532, P807 pm_533, P807 first_534);
static void f_gcall_540(struct f_greenc_1fr *up_, P153 e_536, int is_stmt_537, P112 *t_538, P130 *r_539);
static void f_resolve_overload_546(struct f_greenc_1fr *up_, rstr name_541, P153 args_542, int is_stmt_543, rt_int line_544, P107 *y_545);
static void f_other_call_551(struct f_greenc_1fr *up_, P153 e_547, int is_stmt_548, P112 *t_549, P130 *r_550);
static void f_builtin_558(struct f_greenc_1fr *up_, rstr name_552, P153 args_553, rt_int line_554, int is_stmt_555, P112 *t_556, P130 *r_557);
static void f_task_builtin_564(struct f_greenc_1fr *up_, rstr name_559, P153 args_560, rt_int line_561, P112 *t_562, P130 *r_563);
static void f_predef_type_569(struct f_greenc_1fr *up_, rstr name_565, P112 t_566, rstr lo_567, rstr hi_568);
static void f_predef_const_573(struct f_greenc_1fr *up_, rstr name_570, P112 t_571, rstr code_text_572);
static void f_predef_exc_575(struct f_greenc_1fr *up_, rstr name_574);
static void f_predef_lit_579(struct f_greenc_1fr *up_, rstr name_576, P112 t_577, rt_int v_578);
static void f_predefine_580(struct f_greenc_1fr *up_);
static void f_translate_582(struct f_greenc_1fr *up_, P153 u_581);
static void f_print_program_583(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_98;
static P130 f_mk_158(struct f_greenc_1fr *up_, rstr s_157) {
  struct f_mk_158fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_157 = rt_str_copy(s_157);
F->result_ = ({ rstr *cell584 = rt_alloc(sizeof(rstr)); *cell584 = rt_str_copy(F->s_157); (P130)cell584; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_new_name_161(struct f_greenc_1fr *up_, rstr base_159, P130 *res_160) {
  struct f_new_name_161fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_159 = rt_str_copy(base_159);
F->res_160 = res_160;
F->up->serial_115 = rt_add(F->up->serial_115, ((rt_int)1LL));
(*F->res_160) = ({ rstr *cell585 = rt_alloc(sizeof(rstr)); *cell585 = rt_str_copy(rt_str_cat(F->base_159, rt_str_of_int(F->up->serial_115))); (P130)cell585; });
goto ret_;
ret_:
  return;
}

static int f_is_letter_163(struct f_greenc_1fr *up_, int c_162) {
  struct f_is_letter_163fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_162 = c_162;
F->result_ = (((F->c_162 >= 65) && (F->c_162 <= 90)) || ((F->c_162 >= 97) && (F->c_162 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_is_digit_165(struct f_greenc_1fr *up_, int c_164) {
  struct f_is_digit_165fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_164 = c_164;
F->result_ = ((F->c_164 >= 48) && (F->c_164 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_upper_167(struct f_greenc_1fr *up_, int c_166) {
  struct f_upper_167fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_166 = c_166;
if (((F->c_166 >= 97) && (F->c_166 <= 122))) {
F->result_ = rt_range(rt_sub(((rt_int)(F->c_166) + 1), ((rt_int)32LL)) - 1, 0, 127);
goto ret_;
}
F->result_ = F->c_166;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rstr f_lower_s_169(struct f_greenc_1fr *up_, rstr s_168) {
  struct f_lower_s_169fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_168 = rt_str_copy(s_168);
F->r_586 = rt_str_copy(F->s_168);
{ rt_int lo589 = ((rt_int)1LL), hi590 = (F->s_168).len;
for (rt_int it591 = lo589; it591 <= hi590; it591++) {
F->i_588 = it591;
if (((rt_str_get(F->r_586, F->i_588) >= 65) && (rt_str_get(F->r_586, F->i_588) <= 90))) {
(*rt_str_at(&F->r_586, F->i_588)) = rt_range(rt_add(((rt_int)(rt_str_get(F->r_586, F->i_588)) + 1), ((rt_int)32LL)) - 1, 0, 127);
}
}
}
L_end_587: ;
F->result_ = F->r_586;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rstr f_c_field_171(struct f_greenc_1fr *up_, rstr s_170) {
  struct f_c_field_171fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_170 = rt_str_copy(s_170);
F->result_ = rt_str_catc(f_lower_s_169(F->up, F->s_170), 95);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rstr f_q_172(struct f_greenc_1fr *up_) {
  struct f_q_172fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_str("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_fail_175(struct f_greenc_1fr *up_, rt_int line_173, rstr msg_174) {
  struct f_fail_175fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_173 = line_173;
F->msg_174 = rt_str_copy(msg_174);
if ((F->up->trial_141 == ((rt_int)0LL))) {
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("greenc: line ", 13), rt_str_of_int(F->line_173)), rt_str(": ", 2)), F->msg_174));
rt_g_put(rt_str("\n", 1));
}
rt_raise(ex_compile_error_98);
ret_:
  return;
}

static P116 f_new_buffer_176(struct f_greenc_1fr *up_) {
  struct f_new_buffer_176fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R117 *cell592 = rt_alloc(sizeof(R117)); *cell592 = cp_R117(({ R117 ag593; ag593.head_ = NULL; ag593.tail_ = NULL; ag593; })); (P116)cell592; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_put_to_179(struct f_greenc_1fr *up_, P116 b_177, rstr s_178) {
  struct f_put_to_179fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_177 = b_177;
F->s_178 = rt_str_copy(s_178);
F->l_594 = NULL;
F->l_594 = ({ R138 *cell595 = rt_alloc(sizeof(R138)); *cell595 = cp_R138(({ R138 ag596; ag596.s_ = NULL; ag596.next_ = NULL; ag596; })); (P137)cell595; });
(*(P137)rt_nil_check(F->l_594)).s_ = f_mk_158(F->up, F->s_178);
if (((*(P116)rt_nil_check(F->b_177)).tail_ == NULL)) {
(*(P116)rt_nil_check(F->b_177)).head_ = F->l_594;
} else {
(*(P137)rt_nil_check((*(P116)rt_nil_check(F->b_177)).tail_)).next_ = F->l_594;
}
(*(P116)rt_nil_check(F->b_177)).tail_ = F->l_594;
ret_:
  return;
}

static void f_emit_181(struct f_greenc_1fr *up_, rstr s_180) {
  struct f_emit_181fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_180 = rt_str_copy(s_180);
f_put_to_179(F->up, F->up->code_126, F->s_180);
ret_:
  return;
}

static void f_print_buffer_183(struct f_greenc_1fr *up_, P116 b_182) {
  struct f_print_buffer_183fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_182 = b_182;
F->l_597 = NULL;
F->l_597 = (*(P116)rt_nil_check(F->b_182)).head_;
while ((F->l_597 != NULL)) {
rt_g_put((*(P130)rt_nil_check((*(P137)rt_nil_check(F->l_597)).s_)));
rt_g_put(rt_str("\n", 1));
F->l_597 = (*(P137)rt_nil_check(F->l_597)).next_;
}
L_end_598: ;
ret_:
  return;
}

static void f_splice_186(struct f_greenc_1fr *up_, P116 a_184, P116 b_185) {
  struct f_splice_186fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_184 = a_184;
F->b_185 = b_185;
if (((*(P116)rt_nil_check(F->b_185)).head_ == NULL)) {
goto ret_;
}
if (((*(P116)rt_nil_check(F->a_184)).tail_ == NULL)) {
(*(P116)rt_nil_check(F->a_184)).head_ = (*(P116)rt_nil_check(F->b_185)).head_;
} else {
(*(P137)rt_nil_check((*(P116)rt_nil_check(F->a_184)).tail_)).next_ = (*(P116)rt_nil_check(F->b_185)).head_;
}
(*(P116)rt_nil_check(F->a_184)).tail_ = (*(P116)rt_nil_check(F->b_185)).tail_;
(*(P116)rt_nil_check(F->b_185)).head_ = NULL;
(*(P116)rt_nil_check(F->b_185)).tail_ = NULL;
ret_:
  return;
}

static int f_is_reserved_188(struct f_greenc_1fr *up_, rstr w_187) {
  struct f_is_reserved_188fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_187 = rt_str_copy(w_187);
{ rt_int sel599 = (F->w_187).len;
if (0 || sel599 == ((rt_int)2LL)) {
F->result_ = ((((((rt_str_eq(F->w_187, rt_str("AT", 2)) || rt_str_eq(F->w_187, rt_str("DO", 2))) || rt_str_eq(F->w_187, rt_str("IF", 2))) || rt_str_eq(F->w_187, rt_str("IN", 2))) || rt_str_eq(F->w_187, rt_str("IS", 2))) || rt_str_eq(F->w_187, rt_str("OF", 2))) || rt_str_eq(F->w_187, rt_str("OR", 2)));
goto ret_;
} else if (0 || sel599 == ((rt_int)3LL)) {
F->result_ = (((((((((rt_str_eq(F->w_187, rt_str("ALL", 3)) || rt_str_eq(F->w_187, rt_str("AND", 3))) || rt_str_eq(F->w_187, rt_str("END", 3))) || rt_str_eq(F->w_187, rt_str("FOR", 3))) || rt_str_eq(F->w_187, rt_str("MOD", 3))) || rt_str_eq(F->w_187, rt_str("NEW", 3))) || rt_str_eq(F->w_187, rt_str("NOT", 3))) || rt_str_eq(F->w_187, rt_str("OUT", 3))) || rt_str_eq(F->w_187, rt_str("USE", 3))) || rt_str_eq(F->w_187, rt_str("XOR", 3)));
goto ret_;
} else if (0 || sel599 == ((rt_int)4LL)) {
F->result_ = ((((((((((rt_str_eq(F->w_187, rt_str("BODY", 4)) || rt_str_eq(F->w_187, rt_str("CASE", 4))) || rt_str_eq(F->w_187, rt_str("ELSE", 4))) || rt_str_eq(F->w_187, rt_str("EXIT", 4))) || rt_str_eq(F->w_187, rt_str("GOTO", 4))) || rt_str_eq(F->w_187, rt_str("LOOP", 4))) || rt_str_eq(F->w_187, rt_str("NULL", 4))) || rt_str_eq(F->w_187, rt_str("TASK", 4))) || rt_str_eq(F->w_187, rt_str("THEN", 4))) || rt_str_eq(F->w_187, rt_str("TYPE", 4))) || rt_str_eq(F->w_187, rt_str("WHEN", 4)));
goto ret_;
} else if (0 || sel599 == ((rt_int)5LL)) {
F->result_ = (((((((((rt_str_eq(F->w_187, rt_str("ABORT", 5)) || rt_str_eq(F->w_187, rt_str("ARRAY", 5))) || rt_str_eq(F->w_187, rt_str("BEGIN", 5))) || rt_str_eq(F->w_187, rt_str("DELAY", 5))) || rt_str_eq(F->w_187, rt_str("DELTA", 5))) || rt_str_eq(F->w_187, rt_str("ELSIF", 5))) || rt_str_eq(F->w_187, rt_str("ENTRY", 5))) || rt_str_eq(F->w_187, rt_str("RAISE", 5))) || rt_str_eq(F->w_187, rt_str("RANGE", 5))) || rt_str_eq(F->w_187, rt_str("WHILE", 5)));
goto ret_;
} else if (0 || sel599 == ((rt_int)6LL)) {
F->result_ = ((((((((rt_str_eq(F->w_187, rt_str("ACCEPT", 6)) || rt_str_eq(F->w_187, rt_str("ACCESS", 6))) || rt_str_eq(F->w_187, rt_str("ASSERT", 6))) || rt_str_eq(F->w_187, rt_str("DIGITS", 6))) || rt_str_eq(F->w_187, rt_str("OTHERS", 6))) || rt_str_eq(F->w_187, rt_str("PRAGMA", 6))) || rt_str_eq(F->w_187, rt_str("RECORD", 6))) || rt_str_eq(F->w_187, rt_str("RETURN", 6))) || rt_str_eq(F->w_187, rt_str("SELECT", 6)));
goto ret_;
} else if (0 || sel599 == ((rt_int)7LL)) {
F->result_ = (((((((rt_str_eq(F->w_187, rt_str("DECLARE", 7)) || rt_str_eq(F->w_187, rt_str("GENERIC", 7))) || rt_str_eq(F->w_187, rt_str("PACKAGE", 7))) || rt_str_eq(F->w_187, rt_str("PACKING", 7))) || rt_str_eq(F->w_187, rt_str("PRIVATE", 7))) || rt_str_eq(F->w_187, rt_str("RENAMES", 7))) || rt_str_eq(F->w_187, rt_str("REVERSE", 7))) || rt_str_eq(F->w_187, rt_str("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel599 == ((rt_int)8LL)) {
F->result_ = (((rt_str_eq(F->w_187, rt_str("CONSTANT", 8)) || rt_str_eq(F->w_187, rt_str("FUNCTION", 8))) || rt_str_eq(F->w_187, rt_str("INITIATE", 8))) || rt_str_eq(F->w_187, rt_str("SEPARATE", 8)));
goto ret_;
} else if (0 || sel599 == ((rt_int)9LL)) {
F->result_ = (rt_str_eq(F->w_187, rt_str("EXCEPTION", 9)) || rt_str_eq(F->w_187, rt_str("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel599 == ((rt_int)10LL)) {
F->result_ = rt_str_eq(F->w_187, rt_str("RESTRICTED", 10));
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

static void f_add_token_192(struct f_greenc_1fr *up_, rt_int kind_189, rstr s_190, rt_int ival_191) {
  struct f_add_token_192fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_189 = kind_189;
F->s_190 = rt_str_copy(s_190);
F->ival_191 = ival_191;
F->up->ntoks_103 = rt_add(F->up->ntoks_103, ((rt_int)1LL));
F->up->toks_102.p[rt_index(F->up->ntoks_103, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo] = ({ R101 *cell600 = rt_alloc(sizeof(R101)); *cell600 = cp_R101(({ R101 ag601; ag601.kind_ = F->kind_189; ag601.line_ = F->up->src_line_105; ag601.ival_ = F->ival_191; ag601.s_ = NULL; ag601; })); (P100)cell600; });
(*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->ntoks_103, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_ = f_mk_158(F->up, F->s_190);
ret_:
  return;
}

static rt_int f_digit_value_194(struct f_greenc_1fr *up_, int c_193) {
  struct f_digit_value_194fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_193 = c_193;
if (f_is_digit_165(F->up, F->c_193)) {
F->result_ = rt_sub(((rt_int)(F->c_193) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_167(F->up, F->c_193)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_lex_line_196(struct f_greenc_1fr *up_, rstr line_195) {
  struct f_lex_line_196fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_195 = rt_str_copy(line_195);
F->i_602 = ((rt_int)1LL);
F->j_603 = ((rt_int)0LL);
F->n_604 = (F->line_195).len;
F->buf_607 = rt_str_new((((rt_int)1000LL) - ((rt_int)1LL) + 1));
while ((F->i_602 <= F->n_604)) {
F->c_605 = rt_range(rt_str_get(F->line_195, F->i_602), 0, 127);
if (((((F->c_605 == 32) || (F->c_605 == 9)) || (F->c_605 == 13)) || (F->c_605 == 12))) {
F->i_602 = rt_add(F->i_602, ((rt_int)1LL));
} else if ((((F->c_605 == 45) && (F->i_602 < F->n_604)) && (rt_str_get(F->line_195, rt_add(F->i_602, ((rt_int)1LL))) == 45))) {
F->i_602 = rt_add(F->n_604, ((rt_int)1LL));
} else if (f_is_letter_163(F->up, F->c_605)) {
F->j_603 = F->i_602;
F->bl_608 = ((rt_int)0LL);
while (((F->j_603 <= F->n_604) && ((f_is_letter_163(F->up, rt_str_get(F->line_195, F->j_603)) || f_is_digit_165(F->up, rt_str_get(F->line_195, F->j_603))) || (rt_str_get(F->line_195, F->j_603) == 95)))) {
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = f_upper_167(F->up, rt_str_get(F->line_195, F->j_603));
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
L_end_610: ;
if (f_is_reserved_188(F->up, rt_str_slice(F->buf_607, ((rt_int)1LL), F->bl_608))) {
f_add_token_192(F->up, F->up->k_kw_4, rt_str_slice(F->buf_607, ((rt_int)1LL), F->bl_608), ((rt_int)0LL));
} else {
f_add_token_192(F->up, F->up->k_id_3, rt_str_slice(F->buf_607, ((rt_int)1LL), F->bl_608), ((rt_int)0LL));
}
F->i_602 = F->j_603;
} else if (f_is_digit_165(F->up, F->c_605)) {
F->j_603 = F->i_602;
F->v_606 = ((rt_int)0LL);
F->bl_608 = ((rt_int)0LL);
while (((F->j_603 <= F->n_604) && (f_is_digit_165(F->up, rt_str_get(F->line_195, F->j_603)) || (rt_str_get(F->line_195, F->j_603) == 95)))) {
if ((rt_str_get(F->line_195, F->j_603) != 95)) {
F->v_606 = rt_add(rt_mul(F->v_606, ((rt_int)10LL)), f_digit_value_194(F->up, rt_str_get(F->line_195, F->j_603)));
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = rt_str_get(F->line_195, F->j_603);
}
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
L_end_611: ;
if (((F->j_603 <= F->n_604) && (rt_str_get(F->line_195, F->j_603) == 35))) {
{
F->base_613 = F->v_606;
F->v_606 = ((rt_int)0LL);
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
while (((F->j_603 <= F->n_604) && ((f_is_letter_163(F->up, rt_str_get(F->line_195, F->j_603)) || f_is_digit_165(F->up, rt_str_get(F->line_195, F->j_603))) || (rt_str_get(F->line_195, F->j_603) == 95)))) {
if ((rt_str_get(F->line_195, F->j_603) != 95)) {
F->v_606 = rt_add(rt_mul(F->v_606, F->base_613), f_digit_value_194(F->up, rt_str_get(F->line_195, F->j_603)));
}
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
L_end_614: ;
}
L_end_612: ;
f_add_token_192(F->up, F->up->k_int_6, rt_str_of_int(F->v_606), F->v_606);
} else if (((F->j_603 < F->n_604) && ((rt_str_get(F->line_195, F->j_603) == 46) && f_is_digit_165(F->up, rt_str_get(F->line_195, rt_add(F->j_603, ((rt_int)1LL))))))) {
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = 46;
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
while (((F->j_603 <= F->n_604) && (f_is_digit_165(F->up, rt_str_get(F->line_195, F->j_603)) || (rt_str_get(F->line_195, F->j_603) == 95)))) {
if ((rt_str_get(F->line_195, F->j_603) != 95)) {
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = rt_str_get(F->line_195, F->j_603);
}
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
L_end_615: ;
if (((F->j_603 <= F->n_604) && ((rt_str_get(F->line_195, F->j_603) == 69) || (rt_str_get(F->line_195, F->j_603) == 101)))) {
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = 69;
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
while (((F->j_603 <= F->n_604) && ((f_is_digit_165(F->up, rt_str_get(F->line_195, F->j_603)) || (rt_str_get(F->line_195, F->j_603) == 43)) || (rt_str_get(F->line_195, F->j_603) == 45)))) {
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = rt_str_get(F->line_195, F->j_603);
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
L_end_616: ;
}
f_add_token_192(F->up, F->up->k_float_7, rt_str_slice(F->buf_607, ((rt_int)1LL), F->bl_608), ((rt_int)0LL));
} else if (((F->j_603 < F->n_604) && (((rt_str_get(F->line_195, F->j_603) == 69) || (rt_str_get(F->line_195, F->j_603) == 101)) && f_is_digit_165(F->up, rt_str_get(F->line_195, rt_add(F->j_603, ((rt_int)1LL))))))) {
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = 69;
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
while (((F->j_603 <= F->n_604) && f_is_digit_165(F->up, rt_str_get(F->line_195, F->j_603)))) {
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = rt_str_get(F->line_195, F->j_603);
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
L_end_617: ;
f_add_token_192(F->up, F->up->k_float_7, rt_str_slice(F->buf_607, ((rt_int)1LL), F->bl_608), ((rt_int)0LL));
} else {
f_add_token_192(F->up, F->up->k_int_6, rt_str_slice(F->buf_607, ((rt_int)1LL), F->bl_608), F->v_606);
}
F->i_602 = F->j_603;
} else if ((F->c_605 == 34)) {
F->j_603 = rt_add(F->i_602, ((rt_int)1LL));
F->bl_608 = ((rt_int)0LL);
for (;;) {
if ((F->j_603 > F->n_604)) {
f_fail_175(F->up, F->up->src_line_105, rt_str("unterminated string", 19));
}
if ((rt_str_get(F->line_195, F->j_603) == 34)) {
if (((F->j_603 == F->n_604) || (rt_str_get(F->line_195, rt_add(F->j_603, ((rt_int)1LL))) != 34))) {
goto L_end_618;
}
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
F->bl_608 = rt_add(F->bl_608, ((rt_int)1LL));
(*rt_str_at(&F->buf_607, F->bl_608)) = rt_str_get(F->line_195, F->j_603);
F->j_603 = rt_add(F->j_603, ((rt_int)1LL));
}
L_end_618: ;
f_add_token_192(F->up, F->up->k_str_8, rt_str_slice(F->buf_607, ((rt_int)1LL), F->bl_608), ((rt_int)0LL));
F->i_602 = rt_add(F->j_603, ((rt_int)1LL));
} else {
{
F->two_620 = rt_str_new((((rt_int)3LL) - ((rt_int)1LL) + 1));
rt_str_assign(&F->two_620, rt_str("   ", 3));
(*rt_str_at(&F->two_620, ((rt_int)1LL))) = F->c_605;
if ((F->i_602 < F->n_604)) {
(*rt_str_at(&F->two_620, ((rt_int)2LL))) = rt_str_get(F->line_195, rt_add(F->i_602, ((rt_int)1LL)));
}
if ((rt_add(F->i_602, ((rt_int)1LL)) < F->n_604)) {
(*rt_str_at(&F->two_620, ((rt_int)3LL))) = rt_str_get(F->line_195, rt_add(F->i_602, ((rt_int)2LL)));
}
if (rt_str_eq(F->two_620, rt_str(":=:", 3))) {
f_add_token_192(F->up, F->up->k_op_5, rt_str(":=:", 3), ((rt_int)0LL));
F->i_602 = rt_add(F->i_602, ((rt_int)3LL));
} else if ((((((((((rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str(":=", 2)) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=:", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str("=>", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str("..", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str("**", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str("/=", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<=", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">=", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str("<<", 2))) || rt_str_eq(rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), rt_str(">>", 2)))) {
f_add_token_192(F->up, F->up->k_op_5, rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)2LL)), ((rt_int)0LL));
F->i_602 = rt_add(F->i_602, ((rt_int)2LL));
} else if (((((((((((((((((F->c_605 == 38) || (F->c_605 == 39)) || (F->c_605 == 40)) || (F->c_605 == 41)) || (F->c_605 == 42)) || (F->c_605 == 43)) || (F->c_605 == 44)) || (F->c_605 == 45)) || (F->c_605 == 46)) || (F->c_605 == 47)) || (F->c_605 == 58)) || (F->c_605 == 59)) || (F->c_605 == 60)) || (F->c_605 == 61)) || (F->c_605 == 62)) || (F->c_605 == 124))) {
f_add_token_192(F->up, F->up->k_op_5, rt_str_slice(F->two_620, ((rt_int)1LL), ((rt_int)1LL)), ((rt_int)0LL));
F->i_602 = rt_add(F->i_602, ((rt_int)1LL));
} else {
f_fail_175(F->up, F->up->src_line_105, rt_str("unexpected character", 20));
}
}
L_end_619: ;
}
}
L_end_609: ;
ret_:
  return;
}

static void f_read_source_197(struct f_greenc_1fr *up_) {
  struct f_read_source_197fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->buf_621 = rt_str_new((((rt_int)10000LL) - ((rt_int)1LL) + 1));
F->bl_622 = ((rt_int)0LL);
{ rt_frame xf624;
if (RT_TRY(xf624)) {
for (;;) {
(F->c_623 = rt_g_getc());
if ((F->c_623 == 10)) {
F->up->src_line_105 = rt_add(F->up->src_line_105, ((rt_int)1LL));
f_lex_line_196(F->up, rt_str_slice(F->buf_621, ((rt_int)1LL), F->bl_622));
F->bl_622 = ((rt_int)0LL);
} else {
F->bl_622 = rt_add(F->bl_622, ((rt_int)1LL));
(*rt_str_at(&F->buf_621, F->bl_622)) = F->c_623;
}
}
L_end_626: ;
RT_POP(xf624);
} else {
RT_POP(xf624);
int x625 = rt_xcur;
if (0 || x625 == rt_exc("END_OF_FILE")) {
if ((F->bl_622 > ((rt_int)0LL))) {
F->up->src_line_105 = rt_add(F->up->src_line_105, ((rt_int)1LL));
f_lex_line_196(F->up, rt_str_slice(F->buf_621, ((rt_int)1LL), F->bl_622));
}
f_add_token_192(F->up, F->up->k_eof_2, rt_str("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x625);
}
}
}
ret_:
  return;
}

static P153 f_nn_200(struct f_greenc_1fr *up_, rt_int kind_198, rt_int line_199) {
  struct f_nn_200fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_198 = kind_198;
F->line_199 = line_199;
F->result_ = ({ R154 *cell627 = rt_alloc(sizeof(R154)); *cell627 = cp_R154(({ R154 ag628; ag628.kind_ = F->kind_198; ag628.line_ = F->line_199; ag628.ival_ = ((rt_int)0LL); ag628.flag_ = ((rt_int)0LL); ag628.name_ = NULL; ag628.tag_ = NULL; ag628.a_ = NULL; ag628.b_ = NULL; ag628.c_ = NULL; ag628.d_ = NULL; ag628.e_ = NULL; ag628.next_ = NULL; ag628; })); (P153)cell627; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_append_204(struct f_greenc_1fr *up_, P153 *head_201, P153 *tail_202, P153 x_203) {
  struct f_append_204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_201 = head_201;
F->tail_202 = tail_202;
F->x_203 = x_203;
if ((F->x_203 == NULL)) {
goto ret_;
}
if (((*F->head_201) == NULL)) {
(*F->head_201) = F->x_203;
} else {
(*(P153)rt_nil_check((*F->tail_202))).next_ = F->x_203;
}
(*F->tail_202) = F->x_203;
while (((*(P153)rt_nil_check((*F->tail_202))).next_ != NULL)) {
(*F->tail_202) = (*(P153)rt_nil_check((*F->tail_202))).next_;
}
L_end_629: ;
ret_:
  return;
}

static rt_int f_list_len_206(struct f_greenc_1fr *up_, P153 l_205) {
  struct f_list_len_206fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_205 = l_205;
F->n_630 = ((rt_int)0LL);
F->p_631 = NULL;
F->p_631 = F->l_205;
while ((F->p_631 != NULL)) {
F->n_630 = rt_add(F->n_630, ((rt_int)1LL));
F->p_631 = (*(P153)rt_nil_check(F->p_631)).next_;
}
L_end_632: ;
F->result_ = F->n_630;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rt_int f_cur_line_207(struct f_greenc_1fr *up_) {
  struct f_cur_line_207fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).line_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_at_kw_209(struct f_greenc_1fr *up_, rstr w_208) {
  struct f_at_kw_209fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_208 = rt_str_copy(w_208);
F->result_ = (((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).kind_ == F->up->k_kw_4) && rt_str_eq((*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_)), F->w_208));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_at_op_211(struct f_greenc_1fr *up_, rstr w_210) {
  struct f_at_op_211fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_210 = rt_str_copy(w_210);
F->result_ = (((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).kind_ == F->up->k_op_5) && rt_str_eq((*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_)), F->w_210));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_at_kind_213(struct f_greenc_1fr *up_, rt_int k_212) {
  struct f_at_kind_213fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_212 = k_212;
F->result_ = ((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).kind_ == F->k_212);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rt_int f_kind_at_215(struct f_greenc_1fr *up_, rt_int k_214) {
  struct f_kind_at_215fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_214 = k_214;
if ((rt_add(F->up->tpos_104, F->k_214) > F->up->ntoks_103)) {
F->result_ = F->up->k_eof_2;
goto ret_;
}
F->result_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(rt_add(F->up->tpos_104, F->k_214), F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).kind_;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rstr f_text_at_217(struct f_greenc_1fr *up_, rt_int k_216) {
  struct f_text_at_217fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_216 = k_216;
if ((rt_add(F->up->tpos_104, F->k_216) > F->up->ntoks_103)) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = (*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(rt_add(F->up->tpos_104, F->k_216), F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_perror_219(struct f_greenc_1fr *up_, rstr msg_218) {
  struct f_perror_219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_218 = rt_str_copy(msg_218);
f_fail_175(F->up, (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).line_, rt_str_catc(rt_str_cat(rt_str_cat(F->msg_218, rt_str(" (at ", 5)), (*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_))), 41));
ret_:
  return;
}

static void f_skip_220(struct f_greenc_1fr *up_) {
  struct f_skip_220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_104 = rt_add(F->up->tpos_104, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_kw_222(struct f_greenc_1fr *up_, rstr w_221) {
  struct f_expect_kw_222fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_221 = rt_str_copy(w_221);
if ((!f_at_kw_209(F->up, F->w_221))) {
f_perror_219(F->up, rt_str_cat(rt_str("expected ", 9), F->w_221));
}
F->up->tpos_104 = rt_add(F->up->tpos_104, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_224(struct f_greenc_1fr *up_, rstr w_223) {
  struct f_expect_op_224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_223 = rt_str_copy(w_223);
if ((!f_at_op_211(F->up, F->w_223))) {
f_perror_219(F->up, rt_str_cat(rt_str("expected ", 9), F->w_223));
}
F->up->tpos_104 = rt_add(F->up->tpos_104, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_id_226(struct f_greenc_1fr *up_, P130 *res_225) {
  struct f_expect_id_226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_225 = res_225;
if ((!f_at_kind_213(F->up, F->up->k_id_3))) {
f_perror_219(F->up, rt_str("expected an identifier", 22));
}
F->up->tpos_104 = rt_add(F->up->tpos_104, ((rt_int)1LL));
(*F->res_225) = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(rt_sub(F->up->tpos_104, ((rt_int)1LL)), F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
goto ret_;
ret_:
  return;
}

static void f_name_node_228(struct f_greenc_1fr *up_, P153 *res_227) {
  struct f_name_node_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_227 = res_227;
F->x_633 = NULL;
F->x_633 = f_nn_200(F->up, F->up->n_name_13, f_cur_line_207(F->up));
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_633)).name_);
(*F->res_227) = F->x_633;
goto ret_;
ret_:
  return;
}

static void f_id_list_230(struct f_greenc_1fr *up_, P153 *res_229) {
  struct f_id_list_230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_229 = res_229;
F->head_634 = NULL;
F->tail_635 = NULL;
F->x_636 = NULL;
f_name_node_228(F->up, &F->x_636);
f_append_204(F->up, &F->head_634, &F->tail_635, F->x_636);
while (f_at_op_211(F->up, rt_str(",", 1))) {
f_skip_220(F->up);
f_name_node_228(F->up, &F->x_636);
f_append_204(F->up, &F->head_634, &F->tail_635, F->x_636);
}
L_end_637: ;
(*F->res_229) = F->head_634;
goto ret_;
ret_:
  return;
}

static P153 f_binop_235(struct f_greenc_1fr *up_, P130 op_231, P153 l_232, P153 r_233, rt_int line_234) {
  struct f_binop_235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_231 = op_231;
F->l_232 = l_232;
F->r_233 = r_233;
F->line_234 = line_234;
F->x_638 = NULL;
F->x_638 = f_nn_200(F->up, F->up->n_binop_15, F->line_234);
(*(P153)rt_nil_check(F->x_638)).name_ = F->op_231;
(*(P153)rt_nil_check(F->x_638)).a_ = F->l_232;
(*(P153)rt_nil_check(F->x_638)).b_ = F->r_233;
F->result_ = F->x_638;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_expr_237(struct f_greenc_1fr *up_, P153 *res_236) {
  struct f_expr_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_236 = res_236;
F->l_639 = NULL;
F->r_640 = NULL;
F->op_641 = NULL;
f_relation_241(F->up, &F->l_639);
while (((f_at_kw_209(F->up, rt_str("AND", 3)) || f_at_kw_209(F->up, rt_str("OR", 2))) || f_at_kw_209(F->up, rt_str("XOR", 3)))) {
F->op_641 = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
F->line_642 = f_cur_line_207(F->up);
f_skip_220(F->up);
if ((rt_str_eq((*(P130)rt_nil_check(F->op_641)), rt_str("AND", 3)) && f_at_kw_209(F->up, rt_str("THEN", 4)))) {
f_skip_220(F->up);
} else if ((rt_str_eq((*(P130)rt_nil_check(F->op_641)), rt_str("OR", 2)) && f_at_kw_209(F->up, rt_str("ELSE", 4)))) {
f_skip_220(F->up);
}
f_relation_241(F->up, &F->r_640);
F->l_639 = f_binop_235(F->up, F->op_641, F->l_639, F->r_640, F->line_642);
}
L_end_643: ;
(*F->res_236) = F->l_639;
goto ret_;
ret_:
  return;
}

static int f_is_rel_239(struct f_greenc_1fr *up_, rstr s_238) {
  struct f_is_rel_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_238 = rt_str_copy(s_238);
F->result_ = (((((rt_str_eq(F->s_238, rt_str("=", 1)) || rt_str_eq(F->s_238, rt_str("/=", 2))) || rt_str_eq(F->s_238, rt_str("<", 1))) || rt_str_eq(F->s_238, rt_str("<=", 2))) || rt_str_eq(F->s_238, rt_str(">", 1))) || rt_str_eq(F->s_238, rt_str(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_relation_241(struct f_greenc_1fr *up_, P153 *res_240) {
  struct f_relation_241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_240 = res_240;
F->l_644 = NULL;
F->r_645 = NULL;
F->lo_646 = NULL;
F->hi_647 = NULL;
F->t_648 = NULL;
F->op_649 = NULL;
F->line_650 = f_cur_line_207(F->up);
F->neg_651 = 0;
f_simple_expr_243(F->up, &F->l_644);
if ((f_at_kind_213(F->up, F->up->k_op_5) && f_is_rel_239(F->up, (*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_))))) {
F->op_649 = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
f_simple_expr_243(F->up, &F->r_645);
F->l_644 = f_binop_235(F->up, F->op_649, F->l_644, F->r_645, F->line_650);
(*F->res_240) = F->l_644;
goto ret_;
}
if (((f_at_kw_209(F->up, rt_str("NOT", 3)) && (f_kind_at_215(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str("IN", 2)))) {
f_skip_220(F->up);
F->neg_651 = 1;
}
if (f_at_kw_209(F->up, rt_str("IN", 2))) {
f_skip_220(F->up);
f_simple_expr_243(F->up, &F->lo_646);
f_expect_op_224(F->up, rt_str("..", 2));
f_simple_expr_243(F->up, &F->hi_647);
F->t_648 = f_nn_200(F->up, F->up->n_range_22, F->line_650);
(*(P153)rt_nil_check(F->t_648)).a_ = F->lo_646;
(*(P153)rt_nil_check(F->t_648)).b_ = F->hi_647;
F->op_649 = f_mk_158(F->up, rt_str("IN", 2));
F->l_644 = f_binop_235(F->up, F->op_649, F->l_644, F->t_648, F->line_650);
if (F->neg_651) {
F->t_648 = f_nn_200(F->up, F->up->n_unop_14, F->line_650);
(*(P153)rt_nil_check(F->t_648)).name_ = f_mk_158(F->up, rt_str("NOT", 3));
(*(P153)rt_nil_check(F->t_648)).a_ = F->l_644;
(*F->res_240) = F->t_648;
goto ret_;
}
}
(*F->res_240) = F->l_644;
goto ret_;
ret_:
  return;
}

static void f_simple_expr_243(struct f_greenc_1fr *up_, P153 *res_242) {
  struct f_simple_expr_243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_242 = res_242;
F->l_652 = NULL;
F->r_653 = NULL;
F->op_654 = NULL;
F->line_655 = f_cur_line_207(F->up);
if (((f_at_op_211(F->up, rt_str("+", 1)) || f_at_op_211(F->up, rt_str("-", 1))) || f_at_kw_209(F->up, rt_str("NOT", 3)))) {
F->op_654 = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
f_term_245(F->up, &F->r_653);
F->l_652 = f_nn_200(F->up, F->up->n_unop_14, F->line_655);
(*(P153)rt_nil_check(F->l_652)).name_ = F->op_654;
(*(P153)rt_nil_check(F->l_652)).a_ = F->r_653;
} else {
f_term_245(F->up, &F->l_652);
}
while (((f_at_op_211(F->up, rt_str("+", 1)) || f_at_op_211(F->up, rt_str("-", 1))) || f_at_op_211(F->up, rt_str("&", 1)))) {
F->op_654 = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
f_term_245(F->up, &F->r_653);
F->l_652 = f_binop_235(F->up, F->op_654, F->l_652, F->r_653, F->line_655);
}
L_end_656: ;
(*F->res_242) = F->l_652;
goto ret_;
ret_:
  return;
}

static void f_term_245(struct f_greenc_1fr *up_, P153 *res_244) {
  struct f_term_245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_244 = res_244;
F->l_657 = NULL;
F->r_658 = NULL;
F->op_659 = NULL;
F->line_660 = f_cur_line_207(F->up);
f_factor_247(F->up, &F->l_657);
while (((f_at_op_211(F->up, rt_str("*", 1)) || f_at_op_211(F->up, rt_str("/", 1))) || f_at_kw_209(F->up, rt_str("MOD", 3)))) {
F->op_659 = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
f_factor_247(F->up, &F->r_658);
F->l_657 = f_binop_235(F->up, F->op_659, F->l_657, F->r_658, F->line_660);
}
L_end_661: ;
(*F->res_244) = F->l_657;
goto ret_;
ret_:
  return;
}

static void f_factor_247(struct f_greenc_1fr *up_, P153 *res_246) {
  struct f_factor_247fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_246 = res_246;
F->l_662 = NULL;
F->r_663 = NULL;
F->op_664 = NULL;
F->line_665 = f_cur_line_207(F->up);
f_primary_249(F->up, &F->l_662);
if (f_at_op_211(F->up, rt_str("**", 2))) {
F->op_664 = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
f_primary_249(F->up, &F->r_663);
F->l_662 = f_binop_235(F->up, F->op_664, F->l_662, F->r_663, F->line_665);
}
(*F->res_246) = F->l_662;
goto ret_;
ret_:
  return;
}

static void f_primary_249(struct f_greenc_1fr *up_, P153 *res_248) {
  struct f_primary_249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_248 = res_248;
F->x_666 = NULL;
F->line_667 = f_cur_line_207(F->up);
if (f_at_kind_213(F->up, F->up->k_int_6)) {
F->x_666 = f_nn_200(F->up, F->up->n_int_9, F->line_667);
(*(P153)rt_nil_check(F->x_666)).ival_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).ival_;
(*(P153)rt_nil_check(F->x_666)).name_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
(*F->res_248) = F->x_666;
goto ret_;
}
if (f_at_kind_213(F->up, F->up->k_float_7)) {
F->x_666 = f_nn_200(F->up, F->up->n_float_10, F->line_667);
(*(P153)rt_nil_check(F->x_666)).name_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
(*F->res_248) = F->x_666;
goto ret_;
}
if (f_at_kind_213(F->up, F->up->k_str_8)) {
F->x_666 = f_nn_200(F->up, F->up->n_str_11, F->line_667);
(*(P153)rt_nil_check(F->x_666)).name_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
(*F->res_248) = F->x_666;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("NULL", 4))) {
f_skip_220(F->up);
F->x_666 = f_nn_200(F->up, F->up->n_nil_12, F->line_667);
(*F->res_248) = F->x_666;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("NEW", 3))) {
f_skip_220(F->up);
F->x_666 = f_nn_200(F->up, F->up->n_new_19, F->line_667);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_666)).name_);
if (f_at_op_211(F->up, rt_str("(", 1))) {
f_agg_or_paren_251(F->up, &(*(P153)rt_nil_check(F->x_666)).a_);
}
(*F->res_248) = F->x_666;
goto ret_;
}
if (f_at_op_211(F->up, rt_str("(", 1))) {
f_agg_or_paren_251(F->up, &F->x_666);
(*F->res_248) = F->x_666;
goto ret_;
}
if (f_at_kind_213(F->up, F->up->k_id_3)) {
f_name_p_253(F->up, &F->x_666);
(*F->res_248) = F->x_666;
goto ret_;
}
f_perror_219(F->up, rt_str("expected an expression", 22));
(*F->res_248) = NULL;
goto ret_;
ret_:
  return;
}

static void f_agg_or_paren_251(struct f_greenc_1fr *up_, P153 *res_250) {
  struct f_agg_or_paren_251fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_250 = res_250;
F->line_668 = f_cur_line_207(F->up);
F->items_669 = NULL;
F->itail_670 = NULL;
F->it_671 = NULL;
F->first_672 = NULL;
F->keys_673 = NULL;
F->ktail_674 = NULL;
F->lab_675 = NULL;
F->x_676 = NULL;
F->more_677 = 1;
f_expect_op_224(F->up, rt_str("(", 1));
while (F->more_677) {
F->it_671 = f_nn_200(F->up, F->up->n_citem_21, F->line_668);
if (f_at_kw_209(F->up, rt_str("OTHERS", 6))) {
f_skip_220(F->up);
f_expect_op_224(F->up, rt_str("=>", 2));
F->lab_675 = f_nn_200(F->up, F->up->n_label_59, F->line_668);
(*(P153)rt_nil_check(F->lab_675)).flag_ = ((rt_int)1LL);
(*(P153)rt_nil_check(F->it_671)).a_ = F->lab_675;
f_expr_237(F->up, &(*(P153)rt_nil_check(F->it_671)).b_);
} else {
f_expr_237(F->up, &F->first_672);
if (((f_at_op_211(F->up, rt_str("..", 2)) || f_at_op_211(F->up, rt_str("|", 1))) || f_at_op_211(F->up, rt_str("=>", 2)))) {
F->keys_673 = NULL;
F->ktail_674 = NULL;
for (;;) {
F->lab_675 = f_nn_200(F->up, F->up->n_label_59, F->line_668);
(*(P153)rt_nil_check(F->lab_675)).a_ = F->first_672;
if (f_at_op_211(F->up, rt_str("..", 2))) {
f_skip_220(F->up);
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->lab_675)).b_);
}
f_append_204(F->up, &F->keys_673, &F->ktail_674, F->lab_675);
if ((!f_at_op_211(F->up, rt_str("|", 1)))) {
goto L_end_679;
}
f_skip_220(F->up);
f_simple_expr_243(F->up, &F->first_672);
}
L_end_679: ;
f_expect_op_224(F->up, rt_str("=>", 2));
(*(P153)rt_nil_check(F->it_671)).a_ = F->keys_673;
f_expr_237(F->up, &(*(P153)rt_nil_check(F->it_671)).b_);
} else {
(*(P153)rt_nil_check(F->it_671)).b_ = F->first_672;
}
}
f_append_204(F->up, &F->items_669, &F->itail_670, F->it_671);
F->more_677 = f_at_op_211(F->up, rt_str(",", 1));
if (F->more_677) {
f_skip_220(F->up);
}
}
L_end_678: ;
f_expect_op_224(F->up, rt_str(")", 1));
if ((((*(P153)rt_nil_check(F->items_669)).next_ == NULL) && ((*(P153)rt_nil_check(F->items_669)).a_ == NULL))) {
F->x_676 = f_nn_200(F->up, F->up->n_paren_23, F->line_668);
(*(P153)rt_nil_check(F->x_676)).a_ = (*(P153)rt_nil_check(F->items_669)).b_;
(*F->res_250) = F->x_676;
goto ret_;
}
F->x_676 = f_nn_200(F->up, F->up->n_agg_20, F->line_668);
(*(P153)rt_nil_check(F->x_676)).a_ = F->items_669;
(*F->res_250) = F->x_676;
goto ret_;
ret_:
  return;
}

static void f_name_p_253(struct f_greenc_1fr *up_, P153 *res_252) {
  struct f_name_p_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_252 = res_252;
F->p_680 = NULL;
F->x_681 = NULL;
F->args_682 = NULL;
F->atail_683 = NULL;
F->lo_684 = NULL;
F->r_685 = NULL;
F->line_686 = f_cur_line_207(F->up);
f_name_node_228(F->up, &F->p_680);
for (;;) {
if (f_at_op_211(F->up, rt_str("(", 1))) {
f_skip_220(F->up);
F->args_682 = NULL;
F->atail_683 = NULL;
if ((!f_at_op_211(F->up, rt_str(")", 1)))) {
F->more_687 = 1;
while (F->more_687) {
{
F->formal_691 = NULL;
F->mark_692 = ((rt_int)0LL);
if (((f_at_kind_213(F->up, F->up->k_id_3) && (f_kind_at_215(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (((rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(":=", 2)) || rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str("=:", 2))) || rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) || rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str("=>", 2))))) {
F->formal_691 = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
if (rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(":=", 2))) {
F->mark_692 = ((rt_int)1LL);
} else if (rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str("=:", 2))) {
F->mark_692 = ((rt_int)2LL);
} else if (rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(":=:", 3))) {
F->mark_692 = ((rt_int)3LL);
} else {
F->mark_692 = ((rt_int)4LL);
}
f_skip_220(F->up);
f_skip_220(F->up);
}
f_expr_237(F->up, &F->lo_684);
if (f_at_op_211(F->up, rt_str("..", 2))) {
f_skip_220(F->up);
F->r_685 = f_nn_200(F->up, F->up->n_range_22, F->line_686);
(*(P153)rt_nil_check(F->r_685)).a_ = F->lo_684;
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->r_685)).b_);
F->lo_684 = F->r_685;
}
(*(P153)rt_nil_check(F->lo_684)).tag_ = F->formal_691;
(*(P153)rt_nil_check(F->lo_684)).flag_ = F->mark_692;
f_append_204(F->up, &F->args_682, &F->atail_683, F->lo_684);
}
L_end_690: ;
F->more_687 = f_at_op_211(F->up, rt_str(",", 1));
if (F->more_687) {
f_skip_220(F->up);
}
}
L_end_689: ;
}
f_expect_op_224(F->up, rt_str(")", 1));
F->x_681 = f_nn_200(F->up, F->up->n_apply_16, F->line_686);
(*(P153)rt_nil_check(F->x_681)).a_ = F->p_680;
(*(P153)rt_nil_check(F->x_681)).b_ = F->args_682;
F->p_680 = F->x_681;
} else if (f_at_op_211(F->up, rt_str(".", 1))) {
f_skip_220(F->up);
F->x_681 = f_nn_200(F->up, F->up->n_select_17, F->line_686);
(*(P153)rt_nil_check(F->x_681)).a_ = F->p_680;
if (f_at_kw_209(F->up, rt_str("ALL", 3))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_681)).name_ = f_mk_158(F->up, rt_str("ALL", 3));
} else {
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_681)).name_);
}
F->p_680 = F->x_681;
} else if (f_at_op_211(F->up, rt_str("'", 1))) {
f_skip_220(F->up);
F->x_681 = f_nn_200(F->up, F->up->n_attr_18, F->line_686);
(*(P153)rt_nil_check(F->x_681)).a_ = F->p_680;
(*(P153)rt_nil_check(F->x_681)).name_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
if (f_at_op_211(F->up, rt_str("(", 1))) {
f_skip_220(F->up);
f_expr_237(F->up, &(*(P153)rt_nil_check(F->x_681)).b_);
f_expect_op_224(F->up, rt_str(")", 1));
}
F->p_680 = F->x_681;
} else {
(*F->res_252) = F->p_680;
goto ret_;
}
}
L_end_688: ;
ret_:
  return;
}

static void f_subtype_ind_255(struct f_greenc_1fr *up_, P153 *res_254) {
  struct f_subtype_ind_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_254 = res_254;
F->x_693 = NULL;
F->r_694 = NULL;
F->args_695 = NULL;
F->atail_696 = NULL;
F->lo_697 = NULL;
F->line_698 = f_cur_line_207(F->up);
F->more_699 = 1;
F->x_693 = f_nn_200(F->up, F->up->s_mark_71, F->line_698);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_693)).name_);
while (f_at_op_211(F->up, rt_str(".", 1))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_693)).tag_ = (*(P153)rt_nil_check(F->x_693)).name_;
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_693)).name_);
}
L_end_700: ;
if (f_at_kw_209(F->up, rt_str("RANGE", 5))) {
f_skip_220(F->up);
F->r_694 = f_nn_200(F->up, F->up->n_range_22, F->line_698);
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->r_694)).a_);
f_expect_op_224(F->up, rt_str("..", 2));
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->r_694)).b_);
(*(P153)rt_nil_check(F->x_693)).a_ = F->r_694;
(*(P153)rt_nil_check(F->x_693)).flag_ = ((rt_int)1LL);
} else if (f_at_op_211(F->up, rt_str("(", 1))) {
f_skip_220(F->up);
while (F->more_699) {
f_expr_237(F->up, &F->lo_697);
if (f_at_op_211(F->up, rt_str("..", 2))) {
f_skip_220(F->up);
F->r_694 = f_nn_200(F->up, F->up->n_range_22, F->line_698);
(*(P153)rt_nil_check(F->r_694)).a_ = F->lo_697;
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->r_694)).b_);
F->lo_697 = F->r_694;
}
f_append_204(F->up, &F->args_695, &F->atail_696, F->lo_697);
F->more_699 = f_at_op_211(F->up, rt_str(",", 1));
if (F->more_699) {
f_skip_220(F->up);
}
}
L_end_701: ;
f_expect_op_224(F->up, rt_str(")", 1));
(*(P153)rt_nil_check(F->x_693)).a_ = F->args_695;
(*(P153)rt_nil_check(F->x_693)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_209(F->up, rt_str("DIGITS", 6)) || f_at_kw_209(F->up, rt_str("DELTA", 5)))) {
f_skip_220(F->up);
f_simple_expr_243(F->up, &F->r_694);
if (f_at_kw_209(F->up, rt_str("RANGE", 5))) {
f_skip_220(F->up);
f_simple_expr_243(F->up, &F->r_694);
f_expect_op_224(F->up, rt_str("..", 2));
f_simple_expr_243(F->up, &F->r_694);
}
}
(*F->res_254) = F->x_693;
goto ret_;
ret_:
  return;
}

static void f_type_spec_257(struct f_greenc_1fr *up_, P153 *res_256) {
  struct f_type_spec_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_256 = res_256;
F->x_702 = NULL;
if (((((f_at_op_211(F->up, rt_str("(", 1)) || f_at_kw_209(F->up, rt_str("ARRAY", 5))) || f_at_kw_209(F->up, rt_str("RECORD", 6))) || f_at_kw_209(F->up, rt_str("ACCESS", 6))) || f_at_kw_209(F->up, rt_str("RANGE", 5)))) {
f_type_def_259(F->up, &F->x_702);
} else {
f_subtype_ind_255(F->up, &F->x_702);
}
(*F->res_256) = F->x_702;
goto ret_;
ret_:
  return;
}

static void f_type_def_259(struct f_greenc_1fr *up_, P153 *res_258) {
  struct f_type_def_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_258 = res_258;
F->x_703 = NULL;
F->lits_704 = NULL;
F->ltail_705 = NULL;
F->l_706 = NULL;
F->idx_707 = NULL;
F->itail_708 = NULL;
F->r_709 = NULL;
F->comps_710 = NULL;
F->ctail_711 = NULL;
F->names_712 = NULL;
F->st_713 = NULL;
F->def_714 = NULL;
F->cm_715 = NULL;
F->line_716 = f_cur_line_207(F->up);
F->more_717 = 1;
if (f_at_op_211(F->up, rt_str("(", 1))) {
f_skip_220(F->up);
F->x_703 = f_nn_200(F->up, F->up->d_enum_63, F->line_716);
while (F->more_717) {
if (f_at_kind_213(F->up, F->up->k_str_8)) {
F->l_706 = f_nn_200(F->up, F->up->n_str_11, F->line_716);
(*(P153)rt_nil_check(F->l_706)).name_ = (*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_;
f_skip_220(F->up);
} else {
f_name_node_228(F->up, &F->l_706);
}
f_append_204(F->up, &F->lits_704, &F->ltail_705, F->l_706);
F->more_717 = f_at_op_211(F->up, rt_str(",", 1));
if (F->more_717) {
f_skip_220(F->up);
}
}
L_end_718: ;
f_expect_op_224(F->up, rt_str(")", 1));
(*(P153)rt_nil_check(F->x_703)).a_ = F->lits_704;
(*F->res_258) = F->x_703;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("RANGE", 5))) {
f_skip_220(F->up);
F->x_703 = f_nn_200(F->up, F->up->d_range_64, F->line_716);
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->x_703)).a_);
f_expect_op_224(F->up, rt_str("..", 2));
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->x_703)).b_);
(*F->res_258) = F->x_703;
goto ret_;
}
if ((f_at_kw_209(F->up, rt_str("DIGITS", 6)) || f_at_kw_209(F->up, rt_str("DELTA", 5)))) {
f_skip_220(F->up);
F->x_703 = f_nn_200(F->up, F->up->d_float_65, F->line_716);
f_simple_expr_243(F->up, &F->r_709);
if (f_at_kw_209(F->up, rt_str("RANGE", 5))) {
f_skip_220(F->up);
f_simple_expr_243(F->up, &F->r_709);
f_expect_op_224(F->up, rt_str("..", 2));
f_simple_expr_243(F->up, &F->r_709);
}
(*F->res_258) = F->x_703;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("ARRAY", 5))) {
f_skip_220(F->up);
F->x_703 = f_nn_200(F->up, F->up->d_array_66, F->line_716);
f_expect_op_224(F->up, rt_str("(", 1));
while (F->more_717) {
if (((f_at_kind_213(F->up, F->up->k_id_3) && (f_kind_at_215(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(",", 1)) || rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(")", 1))))) {
F->l_706 = f_nn_200(F->up, F->up->s_mark_71, F->line_716);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->l_706)).name_);
(*(P153)rt_nil_check(F->x_703)).flag_ = ((rt_int)1LL);
} else {
F->l_706 = f_nn_200(F->up, F->up->n_range_22, F->line_716);
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->l_706)).a_);
f_expect_op_224(F->up, rt_str("..", 2));
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->l_706)).b_);
}
f_append_204(F->up, &F->idx_707, &F->itail_708, F->l_706);
F->more_717 = f_at_op_211(F->up, rt_str(",", 1));
if (F->more_717) {
f_skip_220(F->up);
}
}
L_end_719: ;
f_expect_op_224(F->up, rt_str(")", 1));
f_expect_kw_222(F->up, rt_str("OF", 2));
(*(P153)rt_nil_check(F->x_703)).a_ = F->idx_707;
f_type_spec_257(F->up, &(*(P153)rt_nil_check(F->x_703)).b_);
(*F->res_258) = F->x_703;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("RECORD", 6))) {
f_skip_220(F->up);
F->x_703 = f_nn_200(F->up, F->up->d_record_67, F->line_716);
while ((!f_at_kw_209(F->up, rt_str("END", 3)))) {
if (f_at_kw_209(F->up, rt_str("NULL", 4))) {
f_skip_220(F->up);
f_expect_op_224(F->up, rt_str(";", 1));
} else {
f_id_list_230(F->up, &F->names_712);
f_expect_op_224(F->up, rt_str(":", 1));
if (f_at_kw_209(F->up, rt_str("CONSTANT", 8))) {
f_skip_220(F->up);
}
f_type_spec_257(F->up, &F->st_713);
F->def_714 = NULL;
if (f_at_op_211(F->up, rt_str(":=", 2))) {
f_skip_220(F->up);
f_expr_237(F->up, &F->def_714);
}
f_expect_op_224(F->up, rt_str(";", 1));
while ((F->names_712 != NULL)) {
F->cm_715 = f_nn_200(F->up, F->up->n_comp_61, (*(P153)rt_nil_check(F->names_712)).line_);
(*(P153)rt_nil_check(F->cm_715)).name_ = (*(P153)rt_nil_check(F->names_712)).name_;
(*(P153)rt_nil_check(F->cm_715)).a_ = F->st_713;
(*(P153)rt_nil_check(F->cm_715)).b_ = F->def_714;
f_append_204(F->up, &F->comps_710, &F->ctail_711, F->cm_715);
F->names_712 = (*(P153)rt_nil_check(F->names_712)).next_;
}
L_end_721: ;
}
}
L_end_720: ;
f_expect_kw_222(F->up, rt_str("END", 3));
f_expect_kw_222(F->up, rt_str("RECORD", 6));
(*(P153)rt_nil_check(F->x_703)).a_ = F->comps_710;
(*F->res_258) = F->x_703;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("ACCESS", 6))) {
f_skip_220(F->up);
F->x_703 = f_nn_200(F->up, F->up->d_access_68, F->line_716);
f_type_spec_257(F->up, &(*(P153)rt_nil_check(F->x_703)).a_);
(*F->res_258) = F->x_703;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("NEW", 3))) {
f_skip_220(F->up);
F->x_703 = f_nn_200(F->up, F->up->d_derived_69, F->line_716);
f_subtype_ind_255(F->up, &(*(P153)rt_nil_check(F->x_703)).a_);
(*F->res_258) = F->x_703;
goto ret_;
}
f_perror_219(F->up, rt_str("expected a type definition", 26));
(*F->res_258) = NULL;
goto ret_;
ret_:
  return;
}

static void f_skip_pragma_260(struct f_greenc_1fr *up_) {
  struct f_skip_pragma_260fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_op_211(F->up, rt_str(";", 1)))) {
f_skip_220(F->up);
}
L_end_722: ;
f_skip_220(F->up);
ret_:
  return;
}

static void f_skip_visibility_261(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_723 = NULL;
f_skip_220(F->up);
if (f_at_op_211(F->up, rt_str("(", 1))) {
f_skip_220(F->up);
f_id_list_230(F->up, &F->names_723);
f_expect_op_224(F->up, rt_str(")", 1));
}
ret_:
  return;
}

static void f_decl_part_263(struct f_greenc_1fr *up_, P153 *res_262) {
  struct f_decl_part_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_262 = res_262;
F->head_724 = NULL;
F->tail_725 = NULL;
F->x_726 = NULL;
F->names_727 = NULL;
for (;;) {
if (f_at_kw_209(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_260(F->up);
} else if (f_at_kw_209(F->up, rt_str("USE", 3))) {
f_skip_220(F->up);
F->x_726 = f_nn_200(F->up, F->up->n_use_57, f_cur_line_207(F->up));
f_id_list_230(F->up, &(*(P153)rt_nil_check(F->x_726)).a_);
f_expect_op_224(F->up, rt_str(";", 1));
f_append_204(F->up, &F->head_724, &F->tail_725, F->x_726);
} else if (f_at_kw_209(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_261(F->up);
} else if ((f_at_kw_209(F->up, rt_str("TYPE", 4)) || f_at_kw_209(F->up, rt_str("SUBTYPE", 7)))) {
f_type_decl_267(F->up, &F->x_726);
f_append_204(F->up, &F->head_724, &F->tail_725, F->x_726);
} else if ((f_at_kw_209(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_209(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_273(F->up, &F->x_726);
f_append_204(F->up, &F->head_724, &F->tail_725, F->x_726);
} else if (f_at_kw_209(F->up, rt_str("PACKAGE", 7))) {
f_package_p_279(F->up, &F->x_726);
f_append_204(F->up, &F->head_724, &F->tail_725, F->x_726);
} else if (((f_at_kind_213(F->up, F->up->k_id_3) && (f_kind_at_215(F->up, ((rt_int)1LL)) == F->up->k_op_5)) && (rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(":", 1)) || rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str(",", 1))))) {
f_object_decl_265(F->up, &F->x_726);
f_append_204(F->up, &F->head_724, &F->tail_725, F->x_726);
} else {
(*F->res_262) = F->head_724;
goto ret_;
}
}
L_end_728: ;
ret_:
  return;
}

static void f_object_decl_265(struct f_greenc_1fr *up_, P153 *res_264) {
  struct f_object_decl_265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_264 = res_264;
F->head_729 = NULL;
F->tail_730 = NULL;
F->names_731 = NULL;
F->st_732 = NULL;
F->init_733 = NULL;
F->x_734 = NULL;
F->line_735 = f_cur_line_207(F->up);
F->is_const_736 = 0;
f_id_list_230(F->up, &F->names_731);
f_expect_op_224(F->up, rt_str(":", 1));
if (f_at_kw_209(F->up, rt_str("EXCEPTION", 9))) {
f_skip_220(F->up);
f_expect_op_224(F->up, rt_str(";", 1));
while ((F->names_731 != NULL)) {
F->x_734 = f_nn_200(F->up, F->up->n_exc_48, F->line_735);
(*(P153)rt_nil_check(F->x_734)).name_ = (*(P153)rt_nil_check(F->names_731)).name_;
f_append_204(F->up, &F->head_729, &F->tail_730, F->x_734);
F->names_731 = (*(P153)rt_nil_check(F->names_731)).next_;
}
L_end_737: ;
(*F->res_264) = F->head_729;
goto ret_;
}
if (f_at_kw_209(F->up, rt_str("CONSTANT", 8))) {
f_skip_220(F->up);
F->is_const_736 = 1;
}
f_type_spec_257(F->up, &F->st_732);
if (f_at_op_211(F->up, rt_str(":=", 2))) {
f_skip_220(F->up);
f_expr_237(F->up, &F->init_733);
}
f_expect_op_224(F->up, rt_str(";", 1));
while ((F->names_731 != NULL)) {
if (F->is_const_736) {
F->x_734 = f_nn_200(F->up, F->up->n_const_43, F->line_735);
} else {
F->x_734 = f_nn_200(F->up, F->up->n_var_42, F->line_735);
}
(*(P153)rt_nil_check(F->x_734)).name_ = (*(P153)rt_nil_check(F->names_731)).name_;
(*(P153)rt_nil_check(F->x_734)).a_ = F->st_732;
(*(P153)rt_nil_check(F->x_734)).b_ = F->init_733;
if ((!(F->is_const_736 && (F->init_733 == NULL)))) {
f_append_204(F->up, &F->head_729, &F->tail_730, F->x_734);
}
F->names_731 = (*(P153)rt_nil_check(F->names_731)).next_;
}
L_end_738: ;
(*F->res_264) = F->head_729;
goto ret_;
ret_:
  return;
}

static void f_type_decl_267(struct f_greenc_1fr *up_, P153 *res_266) {
  struct f_type_decl_267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_266 = res_266;
F->x_739 = NULL;
F->line_740 = f_cur_line_207(F->up);
if (f_at_kw_209(F->up, rt_str("SUBTYPE", 7))) {
f_skip_220(F->up);
F->x_739 = f_nn_200(F->up, F->up->n_subtype_45, F->line_740);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_739)).name_);
f_expect_kw_222(F->up, rt_str("IS", 2));
f_subtype_ind_255(F->up, &(*(P153)rt_nil_check(F->x_739)).a_);
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_266) = F->x_739;
goto ret_;
}
f_expect_kw_222(F->up, rt_str("TYPE", 4));
F->x_739 = f_nn_200(F->up, F->up->n_type_44, F->line_740);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_739)).name_);
if (f_at_op_211(F->up, rt_str(";", 1))) {
f_skip_220(F->up);
(*F->res_266) = NULL;
goto ret_;
}
f_expect_kw_222(F->up, rt_str("IS", 2));
if (f_at_kw_209(F->up, rt_str("PRIVATE", 7))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_739)).a_ = f_nn_200(F->up, F->up->d_private_70, F->line_740);
} else {
f_type_def_259(F->up, &(*(P153)rt_nil_check(F->x_739)).a_);
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_266) = F->x_739;
goto ret_;
ret_:
  return;
}

static void f_formal_part_269(struct f_greenc_1fr *up_, P153 *res_268) {
  struct f_formal_part_269fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_268 = res_268;
F->head_741 = NULL;
F->tail_742 = NULL;
F->names_743 = NULL;
F->st_744 = NULL;
F->def_745 = NULL;
F->p_746 = NULL;
F->more_748 = 1;
f_expect_op_224(F->up, rt_str("(", 1));
while (F->more_748) {
f_id_list_230(F->up, &F->names_743);
f_expect_op_224(F->up, rt_str(":", 1));
F->mode_747 = F->up->m_in_72;
if (f_at_kw_209(F->up, rt_str("IN", 2))) {
f_skip_220(F->up);
if (f_at_kw_209(F->up, rt_str("OUT", 3))) {
f_skip_220(F->up);
F->mode_747 = F->up->m_inout_73;
}
} else if (f_at_kw_209(F->up, rt_str("OUT", 3))) {
f_skip_220(F->up);
F->mode_747 = F->up->m_out_74;
}
f_subtype_ind_255(F->up, &F->st_744);
F->def_745 = NULL;
if (f_at_op_211(F->up, rt_str(":=", 2))) {
f_skip_220(F->up);
f_expr_237(F->up, &F->def_745);
}
while ((F->names_743 != NULL)) {
F->p_746 = f_nn_200(F->up, F->up->n_param_49, (*(P153)rt_nil_check(F->names_743)).line_);
(*(P153)rt_nil_check(F->p_746)).name_ = (*(P153)rt_nil_check(F->names_743)).name_;
(*(P153)rt_nil_check(F->p_746)).ival_ = F->mode_747;
(*(P153)rt_nil_check(F->p_746)).a_ = F->st_744;
(*(P153)rt_nil_check(F->p_746)).b_ = F->def_745;
f_append_204(F->up, &F->head_741, &F->tail_742, F->p_746);
F->names_743 = (*(P153)rt_nil_check(F->names_743)).next_;
}
L_end_750: ;
F->more_748 = f_at_op_211(F->up, rt_str(";", 1));
if (F->more_748) {
f_skip_220(F->up);
}
}
L_end_749: ;
f_expect_op_224(F->up, rt_str(")", 1));
(*F->res_268) = F->head_741;
goto ret_;
ret_:
  return;
}

static void f_designator_271(struct f_greenc_1fr *up_, P130 *res_270) {
  struct f_designator_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_270 = res_270;
if (f_at_kind_213(F->up, F->up->k_str_8)) {
f_skip_220(F->up);
(*F->res_270) = f_mk_158(F->up, (*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(rt_sub(F->up->tpos_104, ((rt_int)1LL)), F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_)));
goto ret_;
}
f_expect_id_226(F->up, &(*F->res_270));
goto ret_;
ret_:
  return;
}

static void f_subprogram_273(struct f_greenc_1fr *up_, P153 *res_272) {
  struct f_subprogram_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_272 = res_272;
F->x_751 = NULL;
F->line_752 = f_cur_line_207(F->up);
F->is_proc_753 = f_at_kw_209(F->up, rt_str("PROCEDURE", 9));
f_skip_220(F->up);
if (F->is_proc_753) {
F->x_751 = f_nn_200(F->up, F->up->n_proc_46, F->line_752);
} else {
F->x_751 = f_nn_200(F->up, F->up->n_func_47, F->line_752);
}
f_designator_271(F->up, &(*(P153)rt_nil_check(F->x_751)).name_);
if (f_at_op_211(F->up, rt_str("(", 1))) {
f_formal_part_269(F->up, &(*(P153)rt_nil_check(F->x_751)).a_);
}
if (f_at_kw_209(F->up, rt_str("RETURN", 6))) {
f_skip_220(F->up);
f_subtype_ind_255(F->up, &(*(P153)rt_nil_check(F->x_751)).b_);
if (F->is_proc_753) {
(*(P153)rt_nil_check(F->x_751)).flag_ = ((rt_int)1LL);
}
} else if ((!F->is_proc_753)) {
f_perror_219(F->up, rt_str("a function needs a RETURN clause", 32));
}
if (f_at_op_211(F->up, rt_str(";", 1))) {
f_skip_220(F->up);
(*F->res_272) = NULL;
goto ret_;
}
f_expect_kw_222(F->up, rt_str("IS", 2));
if (f_at_kw_209(F->up, rt_str("SEPARATE", 8))) {
f_perror_219(F->up, rt_str("separate bodies are not handled", 31));
}
f_body_part_275(F->up, F->x_751);
if ((f_at_kind_213(F->up, F->up->k_id_3) || f_at_kind_213(F->up, F->up->k_str_8))) {
if ((!rt_str_eq((*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_)), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->x_751)).name_))))) {
f_perror_219(F->up, rt_str_cat(rt_str("the name after END does not match ", 34), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->x_751)).name_))));
}
f_skip_220(F->up);
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_272) = F->x_751;
goto ret_;
ret_:
  return;
}

static void f_body_part_275(struct f_greenc_1fr *up_, P153 x_274) {
  struct f_body_part_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_274 = x_274;
f_decl_part_263(F->up, &(*(P153)rt_nil_check(F->x_274)).c_);
if (f_at_kw_209(F->up, rt_str("BEGIN", 5))) {
f_skip_220(F->up);
f_statements_282(F->up, &(*(P153)rt_nil_check(F->x_274)).d_);
}
if (f_at_kw_209(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_277(F->up, &(*(P153)rt_nil_check(F->x_274)).e_);
}
f_expect_kw_222(F->up, rt_str("END", 3));
ret_:
  return;
}

static void f_parse_handlers_277(struct f_greenc_1fr *up_, P153 *res_276) {
  struct f_parse_handlers_277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_276 = res_276;
F->head_754 = NULL;
F->tail_755 = NULL;
F->h_756 = NULL;
F->names_757 = NULL;
F->ntail_758 = NULL;
F->n_759 = NULL;
f_expect_kw_222(F->up, rt_str("EXCEPTION", 9));
while (f_at_kw_209(F->up, rt_str("WHEN", 4))) {
f_skip_220(F->up);
F->h_756 = f_nn_200(F->up, F->up->n_handler_60, f_cur_line_207(F->up));
F->names_757 = NULL;
F->ntail_758 = NULL;
for (;;) {
if (f_at_kw_209(F->up, rt_str("OTHERS", 6))) {
f_skip_220(F->up);
F->n_759 = f_nn_200(F->up, F->up->n_name_13, f_cur_line_207(F->up));
(*(P153)rt_nil_check(F->n_759)).name_ = f_mk_158(F->up, rt_str("OTHERS", 6));
} else {
f_name_node_228(F->up, &F->n_759);
while (f_at_op_211(F->up, rt_str(".", 1))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->n_759)).tag_ = (*(P153)rt_nil_check(F->n_759)).name_;
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->n_759)).name_);
}
L_end_762: ;
}
f_append_204(F->up, &F->names_757, &F->ntail_758, F->n_759);
if ((!f_at_op_211(F->up, rt_str("|", 1)))) {
goto L_end_761;
}
f_skip_220(F->up);
}
L_end_761: ;
f_expect_op_224(F->up, rt_str("=>", 2));
(*(P153)rt_nil_check(F->h_756)).a_ = F->names_757;
f_statements_282(F->up, &(*(P153)rt_nil_check(F->h_756)).b_);
f_append_204(F->up, &F->head_754, &F->tail_755, F->h_756);
}
L_end_760: ;
(*F->res_276) = F->head_754;
goto ret_;
ret_:
  return;
}

static void f_package_p_279(struct f_greenc_1fr *up_, P153 *res_278) {
  struct f_package_p_279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_278 = res_278;
F->x_763 = NULL;
F->line_764 = f_cur_line_207(F->up);
f_expect_kw_222(F->up, rt_str("PACKAGE", 7));
if (f_at_kw_209(F->up, rt_str("BODY", 4))) {
f_skip_220(F->up);
F->x_763 = f_nn_200(F->up, F->up->n_pkgbody_51, F->line_764);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_763)).name_);
f_expect_kw_222(F->up, rt_str("IS", 2));
f_body_part_275(F->up, F->x_763);
} else {
F->x_763 = f_nn_200(F->up, F->up->n_pkgspec_50, F->line_764);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_763)).name_);
f_expect_kw_222(F->up, rt_str("IS", 2));
f_decl_part_263(F->up, &(*(P153)rt_nil_check(F->x_763)).c_);
if (f_at_kw_209(F->up, rt_str("PRIVATE", 7))) {
f_skip_220(F->up);
f_decl_part_263(F->up, &(*(P153)rt_nil_check(F->x_763)).d_);
}
f_expect_kw_222(F->up, rt_str("END", 3));
}
if (f_at_kind_213(F->up, F->up->k_id_3)) {
f_skip_220(F->up);
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_278) = F->x_763;
goto ret_;
ret_:
  return;
}

static int f_at_statements_end_280(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_209(F->up, rt_str("END", 3)) || f_at_kw_209(F->up, rt_str("ELSE", 4))) || f_at_kw_209(F->up, rt_str("ELSIF", 5))) || f_at_kw_209(F->up, rt_str("WHEN", 4))) || f_at_kw_209(F->up, rt_str("EXCEPTION", 9))) || f_at_kw_209(F->up, rt_str("OR", 2))) || f_at_kind_213(F->up, F->up->k_eof_2));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_statements_282(struct f_greenc_1fr *up_, P153 *res_281) {
  struct f_statements_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_281 = res_281;
F->head_765 = NULL;
F->tail_766 = NULL;
F->x_767 = NULL;
while ((!f_at_statements_end_280(F->up))) {
if (f_at_kw_209(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_260(F->up);
} else {
f_statement_284(F->up, &F->x_767);
f_append_204(F->up, &F->head_765, &F->tail_766, F->x_767);
}
}
L_end_768: ;
(*F->res_281) = F->head_765;
goto ret_;
ret_:
  return;
}

static void f_statement_284(struct f_greenc_1fr *up_, P153 *res_283) {
  struct f_statement_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_283 = res_283;
F->x_769 = NULL;
F->t_770 = NULL;
F->line_771 = f_cur_line_207(F->up);
F->label_772 = NULL;
if (f_at_op_211(F->up, rt_str("<<", 2))) {
f_skip_220(F->up);
f_expect_id_226(F->up, &F->label_772);
f_expect_op_224(F->up, rt_str(">>", 2));
}
if (f_at_kw_209(F->up, rt_str("NULL", 4))) {
f_skip_220(F->up);
f_expect_op_224(F->up, rt_str(";", 1));
F->x_769 = f_nn_200(F->up, F->up->n_null_36, F->line_771);
(*F->res_283) = F->x_769;
goto ret_;
} else if (f_at_kw_209(F->up, rt_str("IF", 2))) {
f_if_stmt_288(F->up, &F->x_769);
(*F->res_283) = F->x_769;
goto ret_;
} else if (f_at_kw_209(F->up, rt_str("CASE", 4))) {
f_case_stmt_290(F->up, &F->x_769);
(*F->res_283) = F->x_769;
goto ret_;
} else if (((f_at_kw_209(F->up, rt_str("FOR", 3)) || f_at_kw_209(F->up, rt_str("WHILE", 5))) || f_at_kw_209(F->up, rt_str("LOOP", 4)))) {
f_loop_stmt_292(F->up, &F->x_769);
(*(P153)rt_nil_check(F->x_769)).tag_ = F->label_772;
if (f_at_kind_213(F->up, F->up->k_id_3)) {
if (((F->label_772 == NULL) || (!rt_str_eq((*(P130)rt_nil_check((*(P100)rt_nil_check(F->up->toks_102.p[rt_index(F->up->tpos_104, F->up->toks_102.lo, F->up->toks_102.hi) - F->up->toks_102.lo])).s_)), (*(P130)rt_nil_check(F->label_772)))))) {
f_perror_219(F->up, rt_str("the name after END LOOP does not match the label", 48));
}
f_skip_220(F->up);
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_283) = F->x_769;
goto ret_;
} else if ((f_at_kw_209(F->up, rt_str("DECLARE", 7)) || f_at_kw_209(F->up, rt_str("BEGIN", 5)))) {
F->x_769 = f_nn_200(F->up, F->up->n_block_30, F->line_771);
(*(P153)rt_nil_check(F->x_769)).tag_ = F->label_772;
if (f_at_kw_209(F->up, rt_str("DECLARE", 7))) {
f_skip_220(F->up);
f_decl_part_263(F->up, &(*(P153)rt_nil_check(F->x_769)).a_);
}
f_expect_kw_222(F->up, rt_str("BEGIN", 5));
f_statements_282(F->up, &(*(P153)rt_nil_check(F->x_769)).b_);
if (f_at_kw_209(F->up, rt_str("EXCEPTION", 9))) {
f_parse_handlers_277(F->up, &(*(P153)rt_nil_check(F->x_769)).c_);
}
f_expect_kw_222(F->up, rt_str("END", 3));
if (f_at_kind_213(F->up, F->up->k_id_3)) {
f_skip_220(F->up);
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_283) = F->x_769;
goto ret_;
} else if (f_at_kw_209(F->up, rt_str("EXIT", 4))) {
f_skip_220(F->up);
F->x_769 = f_nn_200(F->up, F->up->n_exit_31, F->line_771);
if (f_at_kind_213(F->up, F->up->k_id_3)) {
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_769)).name_);
}
if (f_at_kw_209(F->up, rt_str("WHEN", 4))) {
f_skip_220(F->up);
f_expr_237(F->up, &(*(P153)rt_nil_check(F->x_769)).a_);
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_283) = F->x_769;
goto ret_;
} else if (f_at_kw_209(F->up, rt_str("RETURN", 6))) {
f_skip_220(F->up);
F->x_769 = f_nn_200(F->up, F->up->n_return_32, F->line_771);
if ((!f_at_op_211(F->up, rt_str(";", 1)))) {
f_expr_237(F->up, &(*(P153)rt_nil_check(F->x_769)).a_);
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_283) = F->x_769;
goto ret_;
} else if (f_at_kw_209(F->up, rt_str("RAISE", 5))) {
f_skip_220(F->up);
if (f_at_op_211(F->up, rt_str(";", 1))) {
f_skip_220(F->up);
F->x_769 = f_nn_200(F->up, F->up->n_reraise_34, F->line_771);
(*F->res_283) = F->x_769;
goto ret_;
}
F->x_769 = f_nn_200(F->up, F->up->n_raise_33, F->line_771);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_769)).name_);
while (f_at_op_211(F->up, rt_str(".", 1))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_769)).tag_ = (*(P153)rt_nil_check(F->x_769)).name_;
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_769)).name_);
}
L_end_773: ;
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_283) = F->x_769;
goto ret_;
} else if (f_at_kw_209(F->up, rt_str("ASSERT", 6))) {
f_skip_220(F->up);
F->x_769 = f_nn_200(F->up, F->up->n_assert_35, F->line_771);
f_expr_237(F->up, &(*(P153)rt_nil_check(F->x_769)).a_);
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_283) = F->x_769;
goto ret_;
} else if (f_at_kw_209(F->up, rt_str("GOTO", 4))) {
f_perror_219(F->up, rt_str("goto is not handled", 19));
}
f_task_statement_286(F->up, &F->x_769);
if ((F->x_769 != NULL)) {
(*F->res_283) = F->x_769;
goto ret_;
}
f_name_p_253(F->up, &F->t_770);
if (f_at_op_211(F->up, rt_str(":=", 2))) {
f_skip_220(F->up);
F->x_769 = f_nn_200(F->up, F->up->n_assign_25, F->line_771);
(*(P153)rt_nil_check(F->x_769)).a_ = F->t_770;
f_expr_237(F->up, &(*(P153)rt_nil_check(F->x_769)).b_);
} else {
F->x_769 = f_nn_200(F->up, F->up->n_call_26, F->line_771);
(*(P153)rt_nil_check(F->x_769)).a_ = F->t_770;
}
f_expect_op_224(F->up, rt_str(";", 1));
(*F->res_283) = F->x_769;
goto ret_;
ret_:
  return;
}

static void f_task_statement_286(struct f_greenc_1fr *up_, P153 *res_285) {
  struct f_task_statement_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_285 = res_285;
(*F->res_285) = NULL;
goto ret_;
ret_:
  return;
}

static void f_if_stmt_288(struct f_greenc_1fr *up_, P153 *res_287) {
  struct f_if_stmt_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_287 = res_287;
F->x_774 = NULL;
F->arm_775 = NULL;
F->head_776 = NULL;
F->tail_777 = NULL;
F->go_778 = 1;
F->x_774 = f_nn_200(F->up, F->up->n_if_27, f_cur_line_207(F->up));
f_skip_220(F->up);
F->arm_775 = f_nn_200(F->up, F->up->n_arm_58, f_cur_line_207(F->up));
f_expr_237(F->up, &(*(P153)rt_nil_check(F->arm_775)).a_);
f_expect_kw_222(F->up, rt_str("THEN", 4));
f_statements_282(F->up, &(*(P153)rt_nil_check(F->arm_775)).b_);
f_append_204(F->up, &F->head_776, &F->tail_777, F->arm_775);
while (F->go_778) {
if (f_at_kw_209(F->up, rt_str("ELSIF", 5))) {
f_skip_220(F->up);
F->arm_775 = f_nn_200(F->up, F->up->n_arm_58, f_cur_line_207(F->up));
f_expr_237(F->up, &(*(P153)rt_nil_check(F->arm_775)).a_);
f_expect_kw_222(F->up, rt_str("THEN", 4));
f_statements_282(F->up, &(*(P153)rt_nil_check(F->arm_775)).b_);
f_append_204(F->up, &F->head_776, &F->tail_777, F->arm_775);
} else if (f_at_kw_209(F->up, rt_str("ELSE", 4))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_774)).flag_ = ((rt_int)1LL);
f_statements_282(F->up, &(*(P153)rt_nil_check(F->x_774)).b_);
} else {
F->go_778 = 0;
}
}
L_end_779: ;
f_expect_kw_222(F->up, rt_str("END", 3));
f_expect_kw_222(F->up, rt_str("IF", 2));
f_expect_op_224(F->up, rt_str(";", 1));
(*(P153)rt_nil_check(F->x_774)).a_ = F->head_776;
(*F->res_287) = F->x_774;
goto ret_;
ret_:
  return;
}

static void f_case_stmt_290(struct f_greenc_1fr *up_, P153 *res_289) {
  struct f_case_stmt_290fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_289 = res_289;
F->x_780 = NULL;
F->arm_781 = NULL;
F->head_782 = NULL;
F->tail_783 = NULL;
F->labs_784 = NULL;
F->ltail_785 = NULL;
F->l_786 = NULL;
F->x_780 = f_nn_200(F->up, F->up->n_case_28, f_cur_line_207(F->up));
f_skip_220(F->up);
f_expr_237(F->up, &(*(P153)rt_nil_check(F->x_780)).a_);
f_expect_kw_222(F->up, rt_str("OF", 2));
while (f_at_kw_209(F->up, rt_str("WHEN", 4))) {
f_skip_220(F->up);
F->labs_784 = NULL;
F->ltail_785 = NULL;
F->others_arm_787 = 0;
for (;;) {
if (f_at_kw_209(F->up, rt_str("OTHERS", 6))) {
f_skip_220(F->up);
F->others_arm_787 = 1;
} else {
F->l_786 = f_nn_200(F->up, F->up->n_label_59, f_cur_line_207(F->up));
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->l_786)).a_);
if (f_at_op_211(F->up, rt_str("..", 2))) {
f_skip_220(F->up);
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->l_786)).b_);
}
f_append_204(F->up, &F->labs_784, &F->ltail_785, F->l_786);
}
if ((!f_at_op_211(F->up, rt_str("|", 1)))) {
goto L_end_789;
}
f_skip_220(F->up);
}
L_end_789: ;
f_expect_op_224(F->up, rt_str("=>", 2));
if (F->others_arm_787) {
(*(P153)rt_nil_check(F->x_780)).flag_ = ((rt_int)1LL);
f_statements_282(F->up, &(*(P153)rt_nil_check(F->x_780)).c_);
} else {
F->arm_781 = f_nn_200(F->up, F->up->n_arm_58, f_cur_line_207(F->up));
(*(P153)rt_nil_check(F->arm_781)).a_ = F->labs_784;
f_statements_282(F->up, &(*(P153)rt_nil_check(F->arm_781)).b_);
f_append_204(F->up, &F->head_782, &F->tail_783, F->arm_781);
}
}
L_end_788: ;
f_expect_kw_222(F->up, rt_str("END", 3));
f_expect_kw_222(F->up, rt_str("CASE", 4));
f_expect_op_224(F->up, rt_str(";", 1));
(*(P153)rt_nil_check(F->x_780)).b_ = F->head_782;
(*F->res_289) = F->x_780;
goto ret_;
ret_:
  return;
}

static void f_loop_stmt_292(struct f_greenc_1fr *up_, P153 *res_291) {
  struct f_loop_stmt_292fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_291 = res_291;
F->x_790 = NULL;
F->r_791 = NULL;
F->line_792 = f_cur_line_207(F->up);
F->x_790 = f_nn_200(F->up, F->up->n_loop_29, F->line_792);
if (f_at_kw_209(F->up, rt_str("FOR", 3))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_790)).flag_ = ((rt_int)2LL);
f_expect_id_226(F->up, &(*(P153)rt_nil_check(F->x_790)).name_);
f_expect_kw_222(F->up, rt_str("IN", 2));
if (f_at_kw_209(F->up, rt_str("REVERSE", 7))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_790)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_213(F->up, F->up->k_id_3) && (f_kind_at_215(F->up, ((rt_int)1LL)) == F->up->k_kw_4)) && rt_str_eq(f_text_at_217(F->up, ((rt_int)1LL)), rt_str("LOOP", 4)))) {
f_subtype_ind_255(F->up, &(*(P153)rt_nil_check(F->x_790)).a_);
} else {
F->r_791 = f_nn_200(F->up, F->up->n_range_22, F->line_792);
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->r_791)).a_);
if (f_at_op_211(F->up, rt_str("..", 2))) {
f_skip_220(F->up);
f_simple_expr_243(F->up, &(*(P153)rt_nil_check(F->r_791)).b_);
(*(P153)rt_nil_check(F->x_790)).a_ = F->r_791;
} else {
(*(P153)rt_nil_check(F->x_790)).a_ = (*(P153)rt_nil_check(F->r_791)).a_;
}
}
} else if (f_at_kw_209(F->up, rt_str("WHILE", 5))) {
f_skip_220(F->up);
(*(P153)rt_nil_check(F->x_790)).flag_ = ((rt_int)1LL);
f_expr_237(F->up, &(*(P153)rt_nil_check(F->x_790)).a_);
}
f_expect_kw_222(F->up, rt_str("LOOP", 4));
f_statements_282(F->up, &(*(P153)rt_nil_check(F->x_790)).b_);
f_expect_kw_222(F->up, rt_str("END", 3));
f_expect_kw_222(F->up, rt_str("LOOP", 4));
(*F->res_291) = F->x_790;
goto ret_;
ret_:
  return;
}

static void f_compilation_294(struct f_greenc_1fr *up_, P153 *res_293) {
  struct f_compilation_294fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_293 = res_293;
F->head_793 = NULL;
F->tail_794 = NULL;
F->x_795 = NULL;
while ((!f_at_kind_213(F->up, F->up->k_eof_2))) {
if (f_at_kw_209(F->up, rt_str("PRAGMA", 6))) {
f_skip_pragma_260(F->up);
} else {
if (f_at_kw_209(F->up, rt_str("RESTRICTED", 10))) {
f_skip_visibility_261(F->up);
}
if ((f_at_kw_209(F->up, rt_str("PROCEDURE", 9)) || f_at_kw_209(F->up, rt_str("FUNCTION", 8)))) {
f_subprogram_273(F->up, &F->x_795);
} else if (f_at_kw_209(F->up, rt_str("PACKAGE", 7))) {
f_package_p_279(F->up, &F->x_795);
} else {
f_perror_219(F->up, rt_str("a compilation unit is a subprogram or a package", 47));
}
f_append_204(F->up, &F->head_793, &F->tail_794, F->x_795);
}
}
L_end_796: ;
(*F->res_293) = F->head_793;
goto ret_;
ret_:
  return;
}

static rt_int f_hash_296(struct f_greenc_1fr *up_, rstr s_295) {
  struct f_hash_296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_295 = rt_str_copy(s_295);
F->h_797 = ((rt_int)0LL);
{ rt_int lo800 = ((rt_int)1LL), hi801 = (F->s_295).len;
for (rt_int it802 = lo800; it802 <= hi801; it802++) {
F->i_799 = it802;
F->h_797 = rt_rem(rt_add(rt_mul(F->h_797, ((rt_int)31LL)), ((rt_int)(rt_str_get(F->s_295, F->i_799)) + 1)), ((rt_int)4093LL));
}
}
L_end_798: ;
F->result_ = F->h_797;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static P107 f_lookup_298(struct f_greenc_1fr *up_, rstr name_297) {
  struct f_lookup_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_297 = rt_str_copy(name_297);
F->y_803 = NULL;
F->y_803 = F->up->table_109.p[rt_index(f_hash_296(F->up, F->name_297), F->up->table_109.lo, F->up->table_109.hi) - F->up->table_109.lo];
while ((F->y_803 != NULL)) {
if (rt_str_eq((*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_803)).name_)), F->name_297)) {
F->result_ = F->y_803;
goto ret_;
}
F->y_803 = (*(P107)rt_nil_check(F->y_803)).chain_;
}
L_end_804: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static P107 f_lookup_decl_300(struct f_greenc_1fr *up_, P153 d_299) {
  struct f_lookup_decl_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_299 = d_299;
F->y_805 = NULL;
F->y_805 = F->up->table_109.p[rt_index(f_hash_296(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->d_299)).name_))), F->up->table_109.lo, F->up->table_109.hi) - F->up->table_109.lo];
while ((F->y_805 != NULL)) {
if (((*(P107)rt_nil_check(F->y_805)).decl_ == F->d_299)) {
F->result_ = F->y_805;
goto ret_;
}
F->y_805 = (*(P107)rt_nil_check(F->y_805)).chain_;
}
L_end_806: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_overloadable_302(struct f_greenc_1fr *up_, P107 y_301) {
  struct f_overloadable_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_301 = y_301;
F->result_ = (((((*(P107)rt_nil_check(F->y_301)).kind_ == F->up->y_func_89) || ((*(P107)rt_nil_check(F->y_301)).kind_ == F->up->y_proc_90)) || ((*(P107)rt_nil_check(F->y_301)).kind_ == F->up->y_enumlit_93)) || ((*(P107)rt_nil_check(F->y_301)).kind_ == F->up->y_entry_96));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_same_305(struct f_greenc_1fr *up_, P112 a_303, P112 b_304) {
  struct f_same_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_303 = a_303;
F->b_304 = b_304;
if ((F->a_303 == F->b_304)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_303 == NULL) || (F->b_304 == NULL)) || ((*(P112)rt_nil_check(F->a_303)).kind_ != (*(P112)rt_nil_check(F->b_304)).kind_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((((((*(P112)rt_nil_check(F->a_303)).kind_ == F->up->t_int_75) || ((*(P112)rt_nil_check(F->a_303)).kind_ == F->up->t_bool_76)) || ((*(P112)rt_nil_check(F->a_303)).kind_ == F->up->t_float_77)) || ((*(P112)rt_nil_check(F->a_303)).kind_ == F->up->t_char_85)) || ((*(P112)rt_nil_check(F->a_303)).kind_ == F->up->t_string_79)) || ((*(P112)rt_nil_check(F->a_303)).kind_ == F->up->t_void_83));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_same_signature_308(struct f_greenc_1fr *up_, P807 a_306, P807 b_307) {
  struct f_same_signature_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_306 = a_306;
F->b_307 = b_307;
F->x_809 = NULL;
F->x_809 = F->a_306;
F->y_810 = NULL;
F->y_810 = F->b_307;
while (((F->x_809 != NULL) && (F->y_810 != NULL))) {
if (((!f_same_305(F->up, (*(P807)rt_nil_check(F->x_809)).t_, (*(P807)rt_nil_check(F->y_810)).t_)) || ((*(P807)rt_nil_check(F->x_809)).mode_ != (*(P807)rt_nil_check(F->y_810)).mode_))) {
F->result_ = 0;
goto ret_;
}
F->x_809 = (*(P807)rt_nil_check(F->x_809)).next_;
F->y_810 = (*(P807)rt_nil_check(F->y_810)).next_;
}
L_end_811: ;
F->result_ = ((F->x_809 == NULL) && (F->y_810 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_define_311(struct f_greenc_1fr *up_, P107 y_309, rt_int line_310) {
  struct f_define_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_309 = y_309;
F->line_310 = line_310;
F->h_812 = f_hash_296(F->up, (*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_309)).name_)));
F->z_813 = NULL;
F->z_813 = F->up->table_109.p[rt_index(F->h_812, F->up->table_109.lo, F->up->table_109.hi) - F->up->table_109.lo];
while ((F->z_813 != NULL)) {
if (((((*(P107)rt_nil_check(F->z_813)).depth_ == F->up->depth_110) && rt_str_eq((*(P130)rt_nil_check((*(P107)rt_nil_check(F->z_813)).name_)), (*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_309)).name_)))) && (!((f_overloadable_302(F->up, F->y_309) && f_overloadable_302(F->up, F->z_813)) && ((((*(P107)rt_nil_check(F->y_309)).kind_ != (*(P107)rt_nil_check(F->z_813)).kind_) || (!f_same_signature_308(F->up, (*(P107)rt_nil_check(F->y_309)).params_, (*(P107)rt_nil_check(F->z_813)).params_))) || (!f_same_305(F->up, (*(P107)rt_nil_check(F->y_309)).result_, (*(P107)rt_nil_check(F->z_813)).result_))))))) {
f_fail_175(F->up, F->line_310, rt_str_cat((*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_309)).name_)), rt_str(" is already declared in this declarative part", 45)));
}
F->z_813 = (*(P107)rt_nil_check(F->z_813)).chain_;
}
L_end_814: ;
(*(P107)rt_nil_check(F->y_309)).depth_ = F->up->depth_110;
(*(P107)rt_nil_check(F->y_309)).chain_ = F->up->table_109.p[rt_index(F->h_812, F->up->table_109.lo, F->up->table_109.hi) - F->up->table_109.lo];
F->up->table_109.p[rt_index(F->h_812, F->up->table_109.lo, F->up->table_109.hi) - F->up->table_109.lo] = F->y_309;
(*(P107)rt_nil_check(F->y_309)).stack_ = F->up->scope_stack_111;
F->up->scope_stack_111 = F->y_309;
ret_:
  return;
}

static void f_open_scope_312(struct f_greenc_1fr *up_) {
  struct f_open_scope_312fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_110 = rt_add(F->up->depth_110, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_313(struct f_greenc_1fr *up_) {
  struct f_close_scope_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_111 != NULL) && ((*(P107)rt_nil_check(F->up->scope_stack_111)).depth_ == F->up->depth_110))) {
F->up->table_109.p[rt_index(f_hash_296(F->up, (*(P130)rt_nil_check((*(P107)rt_nil_check(F->up->scope_stack_111)).name_))), F->up->table_109.lo, F->up->table_109.hi) - F->up->table_109.lo] = (*(P107)rt_nil_check(F->up->scope_stack_111)).chain_;
F->up->scope_stack_111 = (*(P107)rt_nil_check(F->up->scope_stack_111)).stack_;
}
L_end_815: ;
F->up->depth_110 = rt_sub(F->up->depth_110, ((rt_int)1LL));
ret_:
  return;
}

static P107 f_new_sym_316(struct f_greenc_1fr *up_, rt_int kind_314, P130 name_315) {
  struct f_new_sym_316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_314 = kind_314;
F->name_315 = name_315;
F->result_ = ({ R108 *cell816 = rt_alloc(sizeof(R108)); *cell816 = cp_R108(({ R108 ag817; ag817.kind_ = F->kind_314; ag817.name_ = F->name_315; ag817.t_ = NULL; ag817.c_ = NULL; ag817.access_path_ = NULL; ag817.cname_ = NULL; ag817.ro_ = 0; ag817.mvalue_ = ((rt_int)0LL); ag817.hasmv_ = 0; ag817.decl_ = NULL; ag817.params_ = NULL; ag817.result_ = NULL; ag817.depth_ = ((rt_int)0LL); ag817.level_ = ((rt_int)0LL); ag817.byref_ = 0; ag817.vrp_ = 0; ag817.members_ = NULL; ag817.mnext_ = NULL; ag817.chain_ = NULL; ag817.stack_ = NULL; ag817; })); (P107)cell816; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static P112 f_new_typ_318(struct f_greenc_1fr *up_, rt_int kind_317) {
  struct f_new_typ_318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_317 = kind_317;
F->result_ = ({ R113 *cell820 = rt_alloc(sizeof(R113)); *cell820 = cp_R113(({ R113 ag821; ag821.kind_ = F->kind_317; ag821.name_ = NULL; ag821.lits_ = NULL; ag821.elem_ = NULL; ag821.idx_ = NULL; ag821.elemcons_ = NULL; ag821.tcons_ = NULL; ag821.fields_ = NULL; ag821.target_ = NULL; ag821.decl_ = NULL; ag821.cname_ = NULL; ag821.forward_ = 0; ag821.defined_ = 0; ag821.priv_ = 0; ag821.next_ = NULL; ag821; })); (P112)cell820; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static P150 f_new_cons_319(struct f_greenc_1fr *up_) {
  struct f_new_cons_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R151 *cell822 = rt_alloc(sizeof(R151)); *cell822 = cp_R151(({ R151 ag823; ag823.lo_ = NULL; ag823.hi_ = NULL; ag823.slen_ = NULL; ag823.mlo_ = ((rt_int)0LL); ag823.mhi_ = ((rt_int)0LL); ag823.hasm_ = 0; ag823; })); (P150)cell822; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rstr f_kind_name_321(struct f_greenc_1fr *up_, P112 t_320) {
  struct f_kind_name_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_320 = t_320;
if (((*(P112)rt_nil_check(F->t_320)).name_ != NULL)) {
F->result_ = (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_320)).name_));
goto ret_;
}
{ rt_int sel824 = (*(P112)rt_nil_check(F->t_320)).kind_;
if (0 || sel824 == ((rt_int)1LL)) {
F->result_ = rt_str("INTEGER", 7);
goto ret_;
} else if (0 || sel824 == ((rt_int)2LL)) {
F->result_ = rt_str("BOOLEAN", 7);
goto ret_;
} else if (0 || sel824 == ((rt_int)3LL)) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || sel824 == ((rt_int)5LL)) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || sel824 == ((rt_int)10LL)) {
F->result_ = rt_str("null", 4);
goto ret_;
} else if (0 || sel824 == ((rt_int)11LL)) {
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

static void f_check_type_325(struct f_greenc_1fr *up_, P112 got_322, P112 want_323, rt_int line_324) {
  struct f_check_type_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_322 = got_322;
F->want_323 = want_323;
F->line_324 = line_324;
if ((F->want_323 == NULL)) {
goto ret_;
}
if ((((*(P112)rt_nil_check(F->got_322)).kind_ == F->up->t_nil_84) && ((*(P112)rt_nil_check(F->want_323)).kind_ == F->up->t_ptr_82))) {
goto ret_;
}
if ((!f_same_305(F->up, F->got_322, F->want_323))) {
f_fail_175(F->up, F->line_324, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_321(F->up, F->got_322)), rt_str(" where ", 7)), f_kind_name_321(F->up, F->want_323)), rt_str(" is required", 12)));
}
ret_:
  return;
}

static rt_int f_field_count_327(struct f_greenc_1fr *up_, P112 t_326) {
  struct f_field_count_327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_326 = t_326;
F->n_825 = ((rt_int)0LL);
F->f_826 = NULL;
F->f_826 = (*(P112)rt_nil_check(F->t_326)).fields_;
while ((F->f_826 != NULL)) {
F->n_825 = rt_add(F->n_825, ((rt_int)1LL));
F->f_826 = (*(P818)rt_nil_check(F->f_826)).next_;
}
L_end_827: ;
F->result_ = F->n_825;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_ctype_330(struct f_greenc_1fr *up_, P112 t_328, P130 *r_329) {
  struct f_ctype_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_328 = t_328;
F->r_329 = r_329;
F->s_828 = NULL;
{ rt_int sel829 = (*(P112)rt_nil_check(F->t_328)).kind_;
if (0 || sel829 == ((rt_int)1LL)) {
(*F->r_329) = f_mk_158(F->up, rt_str("rt_int", 6));
} else if (0 || sel829 == ((rt_int)2LL) || sel829 == ((rt_int)4LL) || sel829 == ((rt_int)11LL)) {
(*F->r_329) = f_mk_158(F->up, rt_str("int", 3));
} else if (0 || sel829 == ((rt_int)3LL)) {
(*F->r_329) = f_mk_158(F->up, rt_str("double", 6));
} else if (0 || sel829 == ((rt_int)5LL)) {
(*F->r_329) = f_mk_158(F->up, rt_str("rstr", 4));
} else if (0 || sel829 == ((rt_int)9LL)) {
(*F->r_329) = f_mk_158(F->up, rt_str("void", 4));
} else {
if (((*(P112)rt_nil_check(F->t_328)).cname_ == NULL)) {
f_declare_ctype_335(F->up, F->t_328);
} else if (((((*(P112)rt_nil_check(F->t_328)).kind_ == F->up->t_record_81) && (*(P112)rt_nil_check(F->t_328)).forward_) && (!(*(P112)rt_nil_check(F->t_328)).defined_))) {
(*(P112)rt_nil_check(F->t_328)).defined_ = 1;
f_field_decls_333(F->up, F->t_328, &F->s_828);
f_put_to_179(F->up, F->up->out_types_118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_328)).cname_))), rt_str(" {", 2)), (*(P130)rt_nil_check(F->s_828))), rt_str(" };", 3)));
}
(*F->r_329) = (*(P112)rt_nil_check(F->t_328)).cname_;
}
}
ret_:
  return;
}

static void f_field_decls_333(struct f_greenc_1fr *up_, P112 t_331, P130 *r_332) {
  struct f_field_decls_333fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_331 = t_331;
F->r_332 = r_332;
F->f_830 = NULL;
F->f_830 = (*(P112)rt_nil_check(F->t_331)).fields_;
F->s_831 = NULL;
F->ct_832 = NULL;
F->s_831 = f_mk_158(F->up, rt_str(" int dummy_;", 12));
while ((F->f_830 != NULL)) {
f_ctype_330(F->up, (*(P818)rt_nil_check(F->f_830)).t_, &F->ct_832);
F->s_831 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->s_831)), 32), (*(P130)rt_nil_check(F->ct_832))), 32), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_830)).name_)))), 59));
F->f_830 = (*(P818)rt_nil_check(F->f_830)).next_;
}
L_end_833: ;
(*F->r_332) = F->s_831;
ret_:
  return;
}

static void f_declare_ctype_335(struct f_greenc_1fr *up_, P112 t_334) {
  struct f_declare_ctype_335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_334 = t_334;
F->ct_834 = NULL;
F->s_835 = NULL;
F->target_836 = NULL;
if (((*(P112)rt_nil_check(F->t_334)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_353(F->up, F->t_334);
}
if (((*(P112)rt_nil_check(F->t_334)).kind_ == F->up->t_array_80)) {
f_new_name_161(F->up, rt_str("A", 1), &(*(P112)rt_nil_check(F->t_334)).cname_);
} else if (((*(P112)rt_nil_check(F->t_334)).kind_ == F->up->t_record_81)) {
f_new_name_161(F->up, rt_str("R", 1), &(*(P112)rt_nil_check(F->t_334)).cname_);
} else {
f_new_name_161(F->up, rt_str("P", 1), &(*(P112)rt_nil_check(F->t_334)).cname_);
}
(*(P112)rt_nil_check(F->t_334)).next_ = F->up->all_types_114;
F->up->all_types_114 = F->t_334;
if (((*(P112)rt_nil_check(F->t_334)).kind_ == F->up->t_ptr_82)) {
F->target_836 = (*(P112)rt_nil_check(F->t_334)).target_;
if ((F->target_836 == NULL)) {
f_fail_175(F->up, ((rt_int)0LL), rt_str_cat(rt_str_cat(rt_str("the designated type of ", 23), f_kind_name_321(F->up, F->t_334)), rt_str(" is never declared", 18)));
}
if (((*(P112)rt_nil_check(F->target_836)).kind_ == F->up->t_record_81)) {
if (((*(P112)rt_nil_check(F->target_836)).cname_ == NULL)) {
f_new_name_161(F->up, rt_str("R", 1), &(*(P112)rt_nil_check(F->target_836)).cname_);
(*(P112)rt_nil_check(F->target_836)).next_ = F->up->all_types_114;
F->up->all_types_114 = F->target_836;
f_put_to_179(F->up, F->up->out_types_118, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->target_836)).cname_))), 32), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->target_836)).cname_))), 59));
(*(P112)rt_nil_check(F->target_836)).forward_ = 1;
}
f_put_to_179(F->up, F->up->out_types_118, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->target_836)).cname_))), rt_str(" *", 2)), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), 59));
} else {
f_ctype_330(F->up, F->target_836, &F->ct_834);
f_put_to_179(F->up, F->up->out_types_118, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), (*(P130)rt_nil_check(F->ct_834))), rt_str(" *", 2)), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), 59));
}
} else if (((*(P112)rt_nil_check(F->t_334)).kind_ == F->up->t_array_80)) {
f_ctype_330(F->up, (*(P112)rt_nil_check(F->t_334)).elem_, &F->ct_834);
f_put_to_179(F->up, F->up->out_types_118, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), 32), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), 59));
f_put_to_179(F->up, F->up->out_types_118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P130)rt_nil_check(F->ct_834))), rt_str(" *p; };", 7)));
} else {
f_put_to_179(F->up, F->up->out_types_118, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("typedef struct ", 15), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), 32), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), 59));
(*(P112)rt_nil_check(F->t_334)).defined_ = 1;
f_field_decls_333(F->up, F->t_334, &F->s_835);
f_put_to_179(F->up, F->up->out_types_118, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_334)).cname_))), rt_str(" {", 2)), (*(P130)rt_nil_check(F->s_835))), rt_str(" };", 3)));
}
ret_:
  return;
}

static rt_int f_lit_index_338(struct f_greenc_1fr *up_, P153 lits_336, rstr name_337) {
  struct f_lit_index_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_336 = lits_336;
F->name_337 = rt_str_copy(name_337);
F->i_837 = ((rt_int)0LL);
F->l_838 = NULL;
F->l_838 = F->lits_336;
while ((F->l_838 != NULL)) {
if (rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->l_838)).name_)), F->name_337)) {
F->result_ = F->i_837;
goto ret_;
}
F->i_837 = rt_add(F->i_837, ((rt_int)1LL));
F->l_838 = (*(P153)rt_nil_check(F->l_838)).next_;
}
L_end_839: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_manifest_342(struct f_greenc_1fr *up_, P153 e_339, rt_int *v_340, int *ok_341) {
  struct f_manifest_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_339 = e_339;
F->v_340 = v_340;
F->ok_341 = ok_341;
F->y_843 = NULL;
(*F->ok_341) = 0;
(*F->v_340) = ((rt_int)0LL);
if (((*(P153)rt_nil_check(F->e_339)).kind_ == F->up->n_int_9)) {
(*F->ok_341) = 1;
(*F->v_340) = (*(P153)rt_nil_check(F->e_339)).ival_;
} else if (((*(P153)rt_nil_check(F->e_339)).kind_ == F->up->n_paren_23)) {
f_manifest_342(F->up, (*(P153)rt_nil_check(F->e_339)).a_, &(*F->v_340), &(*F->ok_341));
} else if ((((*(P153)rt_nil_check(F->e_339)).kind_ == F->up->n_unop_14) && rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_339)).name_)), rt_str("-", 1)))) {
f_manifest_342(F->up, (*(P153)rt_nil_check(F->e_339)).a_, &F->a_840, &(*F->ok_341));
(*F->v_340) = rt_neg(F->a_840);
} else if ((((*(P153)rt_nil_check(F->e_339)).kind_ == F->up->n_binop_15) && ((rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_339)).name_)), rt_str("+", 1)) || rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_339)).name_)), rt_str("-", 1))) || rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_339)).name_)), rt_str("*", 1))))) {
f_manifest_342(F->up, (*(P153)rt_nil_check(F->e_339)).a_, &F->a_840, &(*F->ok_341));
f_manifest_342(F->up, (*(P153)rt_nil_check(F->e_339)).b_, &F->b_841, &F->ok2_842);
(*F->ok_341) = ((*F->ok_341) && F->ok2_842);
if ((*F->ok_341)) {
if (rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_339)).name_)), rt_str("+", 1))) {
(*F->v_340) = rt_add(F->a_840, F->b_841);
} else if (rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_339)).name_)), rt_str("-", 1))) {
(*F->v_340) = rt_sub(F->a_840, F->b_841);
} else {
(*F->v_340) = rt_mul(F->a_840, F->b_841);
}
}
} else if (((*(P153)rt_nil_check(F->e_339)).kind_ == F->up->n_name_13)) {
F->y_843 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_339)).name_)));
if ((((F->y_843 != NULL) && ((*(P107)rt_nil_check(F->y_843)).kind_ == F->up->y_const_88)) && (*(P107)rt_nil_check(F->y_843)).hasmv_)) {
(*F->ok_341) = 1;
(*F->v_340) = (*(P107)rt_nil_check(F->y_843)).mvalue_;
}
}
ret_:
  return;
}

static void f_resolve_346(struct f_greenc_1fr *up_, P153 st_343, P112 *t_344, P150 *c_345) {
  struct f_resolve_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_343 = st_343;
F->t_344 = t_344;
F->c_345 = c_345;
F->y_844 = NULL;
F->dummy_845 = NULL;
F->code_846 = NULL;
F->r_848 = NULL;
(*F->c_345) = f_new_cons_319(F->up);
if (((*(P153)rt_nil_check(F->st_343)).kind_ != F->up->s_mark_71)) {
f_type_definition_351(F->up, F->st_343, NULL, &(*F->t_344), &(*F->c_345));
goto ret_;
}
F->y_844 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->st_343)).name_)));
if (((F->y_844 == NULL) || ((*(P107)rt_nil_check(F->y_844)).kind_ != F->up->y_type_91))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->st_343)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->st_343)).name_)), rt_str(" is not a type", 14)));
}
(*F->t_344) = (*(P107)rt_nil_check(F->y_844)).t_;
if (((*(P107)rt_nil_check(F->y_844)).c_ != NULL)) {
(*(P150)rt_nil_check((*F->c_345))).lo_ = (*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_844)).c_)).lo_;
(*(P150)rt_nil_check((*F->c_345))).hi_ = (*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_844)).c_)).hi_;
(*(P150)rt_nil_check((*F->c_345))).slen_ = (*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_844)).c_)).slen_;
(*(P150)rt_nil_check((*F->c_345))).mlo_ = (*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_844)).c_)).mlo_;
(*(P150)rt_nil_check((*F->c_345))).mhi_ = (*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_844)).c_)).mhi_;
(*(P150)rt_nil_check((*F->c_345))).hasm_ = (*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_844)).c_)).hasm_;
}
if (((*F->t_344) == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->st_343)).line_, rt_str_cat(rt_str_cat(rt_str("the type ", 9), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->st_343)).name_))), rt_str(" is used before its full declaration", 36)));
}
if (((*(P153)rt_nil_check(F->st_343)).flag_ == ((rt_int)1LL))) {
F->r_848 = (*(P153)rt_nil_check(F->st_343)).a_;
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_848)).a_, (*F->t_344), &F->dummy_845, &(*(P150)rt_nil_check((*F->c_345))).lo_);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_848)).b_, (*F->t_344), &F->dummy_845, &(*(P150)rt_nil_check((*F->c_345))).hi_);
f_manifest_342(F->up, (*(P153)rt_nil_check(F->r_848)).a_, &(*(P150)rt_nil_check((*F->c_345))).mlo_, &F->ok_847);
(*(P150)rt_nil_check((*F->c_345))).hasm_ = F->ok_847;
f_manifest_342(F->up, (*(P153)rt_nil_check(F->r_848)).b_, &(*(P150)rt_nil_check((*F->c_345))).mhi_, &F->ok_847);
(*(P150)rt_nil_check((*F->c_345))).hasm_ = ((*(P150)rt_nil_check((*F->c_345))).hasm_ && F->ok_847);
} else if (((*(P153)rt_nil_check(F->st_343)).flag_ == ((rt_int)2LL))) {
F->r_848 = (*(P153)rt_nil_check(F->st_343)).a_;
if (((*(P153)rt_nil_check(F->r_848)).kind_ != F->up->n_range_22)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->st_343)).line_, rt_str("an index constraint is a discrete range", 39));
}
if (((*(P112)rt_nil_check((*F->t_344))).kind_ == F->up->t_string_79)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_848)).a_, F->up->ty_int_142, &F->dummy_845, &F->code_846);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_848)).b_, F->up->ty_int_142, &F->dummy_845, &(*(P150)rt_nil_check((*F->c_345))).slen_);
(*(P150)rt_nil_check((*F->c_345))).slen_ = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check((*(P150)rt_nil_check((*F->c_345))).slen_))), rt_str(" - ", 3)), (*(P130)rt_nil_check(F->code_846))), rt_str(" + 1)", 5)));
} else if (((*(P112)rt_nil_check((*F->t_344))).kind_ == F->up->t_array_80)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_848)).a_, (*(P112)rt_nil_check((*F->t_344))).idx_, &F->dummy_845, &(*(P150)rt_nil_check((*F->c_345))).lo_);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_848)).b_, (*(P112)rt_nil_check((*F->t_344))).idx_, &F->dummy_845, &(*(P150)rt_nil_check((*F->c_345))).hi_);
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->st_343)).line_, rt_str("this type takes no index constraint", 35));
}
}
ret_:
  return;
}

static void f_type_definition_351(struct f_greenc_1fr *up_, P153 d_347, P130 name_348, P112 *t_349, P150 *c_350) {
  struct f_type_definition_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_347 = d_347;
F->name_348 = name_348;
F->t_349 = t_349;
F->c_350 = c_350;
F->dummy_849 = NULL;
F->it_850 = NULL;
F->ic_851 = NULL;
F->l_852 = NULL;
F->comp_853 = NULL;
F->f_854 = NULL;
F->tail_855 = NULL;
F->y_858 = NULL;
(*F->c_350) = f_new_cons_319(F->up);
{ rt_int sel859 = (*(P153)rt_nil_check(F->d_347)).kind_;
if (0 || sel859 == ((rt_int)70LL)) {
(*F->t_349) = f_new_typ_318(F->up, F->up->t_enum_78);
(*(P112)rt_nil_check((*F->t_349))).lits_ = (*(P153)rt_nil_check(F->d_347)).a_;
(*(P112)rt_nil_check((*F->t_349))).name_ = F->name_348;
F->l_852 = (*(P153)rt_nil_check(F->d_347)).a_;
F->n_857 = ((rt_int)0LL);
while ((F->l_852 != NULL)) {
if (((*(P153)rt_nil_check(F->l_852)).kind_ == F->up->n_name_13)) {
F->y_858 = f_new_sym_316(F->up, F->up->y_enumlit_93, (*(P153)rt_nil_check(F->l_852)).name_);
(*(P107)rt_nil_check(F->y_858)).t_ = (*F->t_349);
(*(P107)rt_nil_check(F->y_858)).mvalue_ = F->n_857;
(*(P107)rt_nil_check(F->y_858)).hasmv_ = 1;
f_define_311(F->up, F->y_858, (*(P153)rt_nil_check(F->l_852)).line_);
}
F->n_857 = rt_add(F->n_857, ((rt_int)1LL));
F->l_852 = (*(P153)rt_nil_check(F->l_852)).next_;
}
L_end_860: ;
(*(P150)rt_nil_check((*F->c_350))).lo_ = f_mk_158(F->up, rt_str("0", 1));
(*(P150)rt_nil_check((*F->c_350))).hi_ = f_mk_158(F->up, rt_str_of_int(rt_sub(F->n_857, ((rt_int)1LL))));
} else if (0 || sel859 == ((rt_int)71LL)) {
(*F->t_349) = F->up->ty_int_142;
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->d_347)).a_, F->up->ty_int_142, &F->dummy_849, &(*(P150)rt_nil_check((*F->c_350))).lo_);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->d_347)).b_, F->up->ty_int_142, &F->dummy_849, &(*(P150)rt_nil_check((*F->c_350))).hi_);
f_manifest_342(F->up, (*(P153)rt_nil_check(F->d_347)).a_, &(*(P150)rt_nil_check((*F->c_350))).mlo_, &F->ok_856);
(*(P150)rt_nil_check((*F->c_350))).hasm_ = F->ok_856;
f_manifest_342(F->up, (*(P153)rt_nil_check(F->d_347)).b_, &(*(P150)rt_nil_check((*F->c_350))).mhi_, &F->ok_856);
(*(P150)rt_nil_check((*F->c_350))).hasm_ = ((*(P150)rt_nil_check((*F->c_350))).hasm_ && F->ok_856);
} else if (0 || sel859 == ((rt_int)72LL)) {
(*F->t_349) = F->up->ty_float_144;
} else if (0 || sel859 == ((rt_int)73LL)) {
if (((*(P153)rt_nil_check((*(P153)rt_nil_check(F->d_347)).a_)).next_ != NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->d_347)).line_, rt_str("arrays of more than one dimension are not handled yet", 53));
}
(*F->t_349) = f_new_typ_318(F->up, F->up->t_array_80);
(*(P112)rt_nil_check((*F->t_349))).name_ = F->name_348;
f_resolve_346(F->up, (*(P153)rt_nil_check(F->d_347)).b_, &(*(P112)rt_nil_check((*F->t_349))).elem_, &(*(P112)rt_nil_check((*F->t_349))).elemcons_);
F->l_852 = (*(P153)rt_nil_check(F->d_347)).a_;
if (((*(P153)rt_nil_check(F->l_852)).kind_ == F->up->n_range_22)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->l_852)).a_, NULL, &(*(P112)rt_nil_check((*F->t_349))).idx_, &(*(P150)rt_nil_check((*F->c_350))).lo_);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->l_852)).b_, (*(P112)rt_nil_check((*F->t_349))).idx_, &F->dummy_849, &(*(P150)rt_nil_check((*F->c_350))).hi_);
} else {
f_resolve_346(F->up, F->l_852, &(*(P112)rt_nil_check((*F->t_349))).idx_, &F->ic_851);
if (((((*(P112)rt_nil_check((*(P112)rt_nil_check((*F->t_349))).idx_)).kind_ == F->up->t_enum_78) || ((*(P112)rt_nil_check((*(P112)rt_nil_check((*F->t_349))).idx_)).kind_ == F->up->t_char_85)) || ((*(P112)rt_nil_check((*(P112)rt_nil_check((*F->t_349))).idx_)).kind_ == F->up->t_bool_76))) {
(*(P150)rt_nil_check((*F->c_350))).lo_ = (*(P150)rt_nil_check(F->ic_851)).lo_;
(*(P150)rt_nil_check((*F->c_350))).hi_ = (*(P150)rt_nil_check(F->ic_851)).hi_;
} else if (((*(P150)rt_nil_check(F->ic_851)).lo_ != NULL)) {
(*(P112)rt_nil_check((*F->t_349))).tcons_ = f_new_cons_319(F->up);
(*(P150)rt_nil_check((*(P112)rt_nil_check((*F->t_349))).tcons_)).lo_ = (*(P150)rt_nil_check(F->ic_851)).lo_;
}
}
if (((*(P150)rt_nil_check((*F->c_350))).lo_ != NULL)) {
(*(P112)rt_nil_check((*F->t_349))).tcons_ = (*F->c_350);
}
} else if (0 || sel859 == ((rt_int)74LL)) {
(*F->t_349) = f_new_typ_318(F->up, F->up->t_record_81);
(*(P112)rt_nil_check((*F->t_349))).name_ = F->name_348;
F->comp_853 = (*(P153)rt_nil_check(F->d_347)).a_;
while ((F->comp_853 != NULL)) {
F->f_854 = ({ R819 *cell862 = rt_alloc(sizeof(R819)); *cell862 = cp_R819(({ R819 ag863; ag863.name_ = (*(P153)rt_nil_check(F->comp_853)).name_; ag863.t_ = NULL; ag863.c_ = NULL; ag863.next_ = NULL; ag863; })); (P818)cell862; });
f_resolve_346(F->up, (*(P153)rt_nil_check(F->comp_853)).a_, &(*(P818)rt_nil_check(F->f_854)).t_, &(*(P818)rt_nil_check(F->f_854)).c_);
if ((F->tail_855 == NULL)) {
(*(P112)rt_nil_check((*F->t_349))).fields_ = F->f_854;
} else {
(*(P818)rt_nil_check(F->tail_855)).next_ = F->f_854;
}
F->tail_855 = F->f_854;
F->comp_853 = (*(P153)rt_nil_check(F->comp_853)).next_;
}
L_end_861: ;
} else if (0 || sel859 == ((rt_int)75LL)) {
(*F->t_349) = f_new_typ_318(F->up, F->up->t_ptr_82);
(*(P112)rt_nil_check((*F->t_349))).name_ = F->name_348;
(*(P112)rt_nil_check((*F->t_349))).decl_ = (*(P153)rt_nil_check(F->d_347)).a_;
} else if (0 || sel859 == ((rt_int)76LL)) {
f_resolve_346(F->up, (*(P153)rt_nil_check(F->d_347)).a_, &(*F->t_349), &(*F->c_350));
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->d_347)).line_, rt_str("this type definition is not handled", 35));
}
}
ret_:
  return;
}

static void f_finish_ptr_353(struct f_greenc_1fr *up_, P112 t_352) {
  struct f_finish_ptr_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_352 = t_352;
F->c_864 = NULL;
if ((((*(P112)rt_nil_check(F->t_352)).target_ == NULL) && ((*(P112)rt_nil_check(F->t_352)).decl_ != NULL))) {
f_resolve_346(F->up, (*(P112)rt_nil_check(F->t_352)).decl_, &(*(P112)rt_nil_check(F->t_352)).target_, &F->c_864);
}
ret_:
  return;
}

static void f_init_storage_357(struct f_greenc_1fr *up_, rstr lval_354, P112 t_355, P150 c_356) {
  struct f_init_storage_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_354 = rt_str_copy(lval_354);
F->t_355 = t_355;
F->c_356 = c_356;
F->ct_865 = NULL;
F->i_866 = NULL;
F->f_867 = NULL;
if (((*(P112)rt_nil_check(F->t_355)).kind_ == F->up->t_ptr_82)) {
f_emit_181(F->up, rt_str_cat(F->lval_354, rt_str(" = NULL;", 8)));
} else if (((*(P112)rt_nil_check(F->t_355)).kind_ == F->up->t_string_79)) {
if (((*(P150)rt_nil_check(F->c_356)).slen_ == NULL)) {
f_fail_175(F->up, ((rt_int)0LL), rt_str("a STRING object needs an index constraint or an initial value", 61));
}
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str_cat(F->lval_354, rt_str(" = rt_str_new(", 14)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_356)).slen_))), rt_str(");", 2)));
} else if (((*(P112)rt_nil_check(F->t_355)).kind_ == F->up->t_array_80)) {
if (((*(P150)rt_nil_check(F->c_356)).lo_ == NULL)) {
f_fail_175(F->up, ((rt_int)0LL), rt_str("an array object needs an index constraint", 41));
}
f_ctype_330(F->up, (*(P112)rt_nil_check(F->t_355)).elem_, &F->ct_865);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_354, rt_str(".lo = ", 6)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_356)).lo_))), rt_str("; ", 2)), F->lval_354), rt_str(".hi = ", 6)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_356)).hi_))), rt_str("; ", 2)), F->lval_354), rt_str(".lo2 = 1; ", 10)), F->lval_354), rt_str(".hi2 = 1;", 9)));
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_354, rt_str(".p = rt_alloc(sizeof(", 21)), (*(P130)rt_nil_check(F->ct_865))), rt_str(") * (size_t)RT_CNT(", 19)), F->lval_354), rt_str("));", 3)));
if (((((*(P112)rt_nil_check((*(P112)rt_nil_check(F->t_355)).elem_)).kind_ == F->up->t_string_79) || ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->t_355)).elem_)).kind_ == F->up->t_array_80)) || ((*(P112)rt_nil_check((*(P112)rt_nil_check(F->t_355)).elem_)).kind_ == F->up->t_record_81))) {
f_new_name_161(F->up, rt_str("i", 1), &F->i_866);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P130)rt_nil_check(F->i_866))), rt_str(" = 0; ", 6)), (*(P130)rt_nil_check(F->i_866))), rt_str(" < RT_CNT(", 10)), F->lval_354), rt_str("); ", 3)), (*(P130)rt_nil_check(F->i_866))), rt_str("++) {", 5)));
f_init_storage_357(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_354, rt_str(".p[", 3)), (*(P130)rt_nil_check(F->i_866))), 93), (*(P112)rt_nil_check(F->t_355)).elem_, (*(P112)rt_nil_check(F->t_355)).elemcons_);
f_emit_181(F->up, rt_str("}", 1));
}
} else if (((*(P112)rt_nil_check(F->t_355)).kind_ == F->up->t_record_81)) {
F->f_867 = (*(P112)rt_nil_check(F->t_355)).fields_;
while ((F->f_867 != NULL)) {
f_init_storage_357(F->up, rt_str_cat(rt_str_catc(F->lval_354, 46), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_867)).name_)))), (*(P818)rt_nil_check(F->f_867)).t_, (*(P818)rt_nil_check(F->f_867)).c_);
F->f_867 = (*(P818)rt_nil_check(F->f_867)).next_;
}
L_end_868: ;
}
ret_:
  return;
}

static int f_composite_359(struct f_greenc_1fr *up_, P112 t_358) {
  struct f_composite_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_358 = t_358;
F->result_ = (((*(P112)rt_nil_check(F->t_358)).kind_ == F->up->t_array_80) || ((*(P112)rt_nil_check(F->t_358)).kind_ == F->up->t_record_81));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_assign_code_365(struct f_greenc_1fr *up_, rstr lval_360, P112 t_361, rstr v_362, P150 c_363, P130 *r_364) {
  struct f_assign_code_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_360 = rt_str_copy(lval_360);
F->t_361 = t_361;
F->v_362 = rt_str_copy(v_362);
F->c_363 = c_363;
F->r_364 = r_364;
F->ct_869 = NULL;
if (f_composite_359(F->up, F->t_361)) {
f_ctype_330(F->up, F->t_361, &F->ct_869);
(*F->r_364) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_361)).cname_))), rt_str("(&", 2)), F->lval_360), rt_str(", ", 2)), F->v_362), rt_str(");", 2)));
} else if (((*(P112)rt_nil_check(F->t_361)).kind_ == F->up->t_string_79)) {
(*F->r_364) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), F->lval_360), rt_str(", ", 2)), F->v_362), rt_str(");", 2)));
} else if (((((((*(P112)rt_nil_check(F->t_361)).kind_ == F->up->t_int_75) || ((*(P112)rt_nil_check(F->t_361)).kind_ == F->up->t_enum_78)) || ((*(P112)rt_nil_check(F->t_361)).kind_ == F->up->t_char_85)) && (F->c_363 != NULL)) && ((*(P150)rt_nil_check(F->c_363)).lo_ != NULL))) {
(*F->r_364) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->lval_360, rt_str(" = rt_range(", 12)), F->v_362), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_363)).lo_))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_363)).hi_))), rt_str(");", 2)));
} else {
(*F->r_364) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(F->lval_360, rt_str(" = ", 3)), F->v_362), 59));
}
ret_:
  return;
}

static void f_copy_code_369(struct f_greenc_1fr *up_, P112 t_366, rstr v_367, P130 *r_368) {
  struct f_copy_code_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_366 = t_366;
F->v_367 = rt_str_copy(v_367);
F->r_368 = r_368;
F->ct_870 = NULL;
if (f_composite_359(F->up, F->t_366)) {
f_ctype_330(F->up, F->t_366, &F->ct_870);
(*F->r_368) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("cp_", 3), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_366)).cname_))), 40), F->v_367), 41));
} else if (((*(P112)rt_nil_check(F->t_366)).kind_ == F->up->t_string_79)) {
(*F->r_368) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_copy(", 12), F->v_367), 41));
} else {
(*F->r_368) = f_mk_158(F->up, F->v_367);
}
ret_:
  return;
}

static void f_eq_code_374(struct f_greenc_1fr *up_, P112 t_370, rstr a_371, rstr b_372, P130 *r_373) {
  struct f_eq_code_374fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_370 = t_370;
F->a_371 = rt_str_copy(a_371);
F->b_372 = rt_str_copy(b_372);
F->r_373 = r_373;
F->ct_871 = NULL;
if (f_composite_359(F->up, F->t_370)) {
f_ctype_330(F->up, F->t_370, &F->ct_871);
(*F->r_373) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("eq_", 3), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_370)).cname_))), 40), F->a_371), rt_str(", ", 2)), F->b_372), 41));
} else if (((*(P112)rt_nil_check(F->t_370)).kind_ == F->up->t_string_79)) {
(*F->r_373) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_371), rt_str(", ", 2)), F->b_372), 41));
} else {
(*F->r_373) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, F->a_371), rt_str(" == ", 4)), F->b_372), 41));
}
ret_:
  return;
}

static int f_seen_name_377(struct f_greenc_1fr *up_, P137 l_375, rstr s_376) {
  struct f_seen_name_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_375 = l_375;
F->s_376 = rt_str_copy(s_376);
F->p_872 = NULL;
F->p_872 = F->l_375;
while ((F->p_872 != NULL)) {
if (rt_str_eq((*(P130)rt_nil_check((*(P137)rt_nil_check(F->p_872)).s_)), F->s_376)) {
F->result_ = 1;
goto ret_;
}
F->p_872 = (*(P137)rt_nil_check(F->p_872)).next_;
}
L_end_873: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_emit_helpers_378(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_874 = NULL;
F->t_874 = F->up->all_types_114;
F->done_875 = NULL;
F->l_876 = NULL;
while ((F->t_874 != NULL)) {
if ((f_composite_359(F->up, F->t_874) && (!f_seen_name_377(F->up, F->done_875, (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_)))))) {
F->l_876 = ({ R138 *cell878 = rt_alloc(sizeof(R138)); *cell878 = cp_R138(({ R138 ag879; ag879.s_ = (*(P112)rt_nil_check(F->t_874)).cname_; ag879.next_ = F->done_875; ag879; })); (P137)cell878; });
F->done_875 = F->l_876;
f_put_to_179(F->up, F->up->out_helpers_120, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), 40), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), rt_str(" *d, ", 5)), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), rt_str(" s);", 4)));
f_put_to_179(F->up, F->up->out_helpers_120, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), rt_str(" cp_", 4)), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), 40), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), rt_str(" s);", 4)));
f_put_to_179(F->up, F->up->out_helpers_120, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), 40), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), rt_str(" a, ", 4)), (*(P130)rt_nil_check((*(P112)rt_nil_check(F->t_874)).cname_))), rt_str(" b);", 4)));
f_helper_bodies_380(F->up, F->t_874);
}
F->t_874 = (*(P112)rt_nil_check(F->t_874)).next_;
}
L_end_877: ;
ret_:
  return;
}

static void f_helper_bodies_380(struct f_greenc_1fr *up_, P112 t_379) {
  struct f_helper_bodies_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_379 = t_379;
F->c_880 = NULL;
F->c_880 = (*(P112)rt_nil_check(F->t_379)).cname_;
F->b_881 = NULL;
F->b_881 = F->up->out_funcs_123;
F->ct_882 = NULL;
F->x_883 = NULL;
F->y_884 = NULL;
F->conds_885 = NULL;
F->f_886 = NULL;
if (((*(P112)rt_nil_check(F->t_379)).kind_ == F->up->t_array_80)) {
f_ctype_330(F->up, (*(P112)rt_nil_check(F->t_379)).elem_, &F->ct_882);
f_assign_code_365(F->up, rt_str("d->p[i]", 7), (*(P112)rt_nil_check(F->t_379)).elem_, rt_str("s.p[i]", 6), NULL, &F->x_883);
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P130)rt_nil_check(F->c_880))), 40), (*(P130)rt_nil_check(F->c_880))), rt_str(" *d, ", 5)), (*(P130)rt_nil_check(F->c_880))), rt_str(" s) {", 5)));
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_172(F->up)), rt_str("array length", 12)), f_q_172(F->up)), rt_str(");", 2)));
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), (*(P130)rt_nil_check(F->x_883))), rt_str(" }", 2)));
f_put_to_179(F->up, F->b_881, rt_str("}", 1));
f_copy_code_369(F->up, (*(P112)rt_nil_check(F->t_379)).elem_, rt_str("s.p[i]", 6), &F->x_883);
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P130)rt_nil_check(F->c_880))), rt_str(" cp_", 4)), (*(P130)rt_nil_check(F->c_880))), 40), (*(P130)rt_nil_check(F->c_880))), rt_str(" s) {", 5)));
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P130)rt_nil_check(F->c_880))), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P130)rt_nil_check(F->ct_882))), rt_str(") * (size_t)RT_CNT(s));", 23)));
f_put_to_179(F->up, F->b_881, rt_str_catc(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), (*(P130)rt_nil_check(F->x_883))), 59));
f_put_to_179(F->up, F->b_881, rt_str("  return d;", 11));
f_put_to_179(F->up, F->b_881, rt_str("}", 1));
f_eq_code_374(F->up, (*(P112)rt_nil_check(F->t_379)).elem_, rt_str("a.p[i]", 6), rt_str("b.p[i]", 6), &F->x_883);
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P130)rt_nil_check(F->c_880))), 40), (*(P130)rt_nil_check(F->c_880))), rt_str(" a, ", 4)), (*(P130)rt_nil_check(F->c_880))), rt_str(" b) {", 5)));
f_put_to_179(F->up, F->b_881, rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43));
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), (*(P130)rt_nil_check(F->x_883))), rt_str(")) return 0;", 12)));
f_put_to_179(F->up, F->b_881, rt_str("  return 1;", 11));
f_put_to_179(F->up, F->b_881, rt_str("}", 1));
} else {
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static void as_", 15), (*(P130)rt_nil_check(F->c_880))), 40), (*(P130)rt_nil_check(F->c_880))), rt_str(" *d, ", 5)), (*(P130)rt_nil_check(F->c_880))), rt_str(" s) {", 5)));
F->f_886 = (*(P112)rt_nil_check(F->t_379)).fields_;
while ((F->f_886 != NULL)) {
f_assign_code_365(F->up, rt_str_cat(rt_str("d->", 3), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_886)).name_)))), (*(P818)rt_nil_check(F->f_886)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_886)).name_)))), NULL, &F->x_883);
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str("  ", 2), (*(P130)rt_nil_check(F->x_883))));
F->f_886 = (*(P818)rt_nil_check(F->f_886)).next_;
}
L_end_887: ;
f_put_to_179(F->up, F->b_881, rt_str("}", 1));
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*(P130)rt_nil_check(F->c_880))), rt_str(" cp_", 4)), (*(P130)rt_nil_check(F->c_880))), 40), (*(P130)rt_nil_check(F->c_880))), rt_str(" s) {", 5)));
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P130)rt_nil_check(F->c_880))), rt_str(" d = s;", 7)));
F->conds_885 = f_mk_158(F->up, rt_str("1", 1));
F->f_886 = (*(P112)rt_nil_check(F->t_379)).fields_;
while ((F->f_886 != NULL)) {
f_copy_code_369(F->up, (*(P818)rt_nil_check(F->f_886)).t_, rt_str_cat(rt_str("s.", 2), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_886)).name_)))), &F->x_883);
f_put_to_179(F->up, F->b_881, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_886)).name_)))), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->x_883))), 59));
f_eq_code_374(F->up, (*(P818)rt_nil_check(F->f_886)).t_, rt_str_cat(rt_str("a.", 2), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_886)).name_)))), rt_str_cat(rt_str("b.", 2), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_886)).name_)))), &F->y_884);
F->conds_885 = f_mk_158(F->up, rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->conds_885)), rt_str(" && ", 4)), (*(P130)rt_nil_check(F->y_884))));
F->f_886 = (*(P818)rt_nil_check(F->f_886)).next_;
}
L_end_888: ;
f_put_to_179(F->up, F->b_881, rt_str("  return d;", 11));
f_put_to_179(F->up, F->b_881, rt_str("}", 1));
f_put_to_179(F->up, F->b_881, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static int eq_", 14), (*(P130)rt_nil_check(F->c_880))), 40), (*(P130)rt_nil_check(F->c_880))), rt_str(" a, ", 4)), (*(P130)rt_nil_check(F->c_880))), rt_str(" b) {", 5)));
f_put_to_179(F->up, F->b_881, rt_str_catc(rt_str_cat(rt_str("  return ", 9), (*(P130)rt_nil_check(F->conds_885))), 59));
f_put_to_179(F->up, F->b_881, rt_str("}", 1));
}
ret_:
  return;
}

static void f_storage_384(struct f_greenc_1fr *up_, rstr name_381, P112 t_382, P130 *access_code_383) {
  struct f_storage_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_381 = rt_str_copy(name_381);
F->t_382 = t_382;
F->access_code_383 = access_code_383;
F->ct_889 = NULL;
F->g_890 = NULL;
f_ctype_330(F->up, F->t_382, &F->ct_889);
if ((!F->up->in_func_128)) {
f_new_name_161(F->up, rt_str_catc(rt_str_cat(rt_str("g_", 2), f_lower_s_169(F->up, F->name_381)), 95), &F->g_890);
f_put_to_179(F->up, F->up->out_globals_122, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P130)rt_nil_check(F->ct_889))), 32), (*(P130)rt_nil_check(F->g_890))), 59));
F->up->st_field_131 = F->g_890;
(*F->access_code_383) = F->g_890;
} else {
f_new_name_161(F->up, rt_str_catc(f_lower_s_169(F->up, F->name_381), 95), &F->g_890);
f_put_to_179(F->up, F->up->fields_buf_127, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P130)rt_nil_check(F->ct_889))), 32), (*(P130)rt_nil_check(F->g_890))), 59));
F->up->st_field_131 = F->g_890;
(*F->access_code_383) = f_mk_158(F->up, rt_str_cat(rt_str("F->", 3), (*(P130)rt_nil_check(F->g_890))));
}
ret_:
  return;
}

static void f_bind_387(struct f_greenc_1fr *up_, P107 y_385, P130 access_code_386) {
  struct f_bind_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_385 = y_385;
F->access_code_386 = access_code_386;
if (F->up->in_func_128) {
(*(P107)rt_nil_check(F->y_385)).level_ = F->up->cur_level_129;
(*(P107)rt_nil_check(F->y_385)).access_path_ = F->up->st_field_131;
} else {
(*(P107)rt_nil_check(F->y_385)).level_ = ((rt_int)0LL);
(*(P107)rt_nil_check(F->y_385)).access_path_ = F->access_code_386;
}
ret_:
  return;
}

static void f_declare_subprograms_389(struct f_greenc_1fr *up_, P153 from_388) {
  struct f_declare_subprograms_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_388 = from_388;
F->e_891 = NULL;
F->e_891 = F->from_388;
F->y_892 = NULL;
while ((F->e_891 != NULL)) {
if ((((*(P153)rt_nil_check(F->e_891)).kind_ == F->up->n_proc_46) || ((*(P153)rt_nil_check(F->e_891)).kind_ == F->up->n_func_47))) {
f_build_subprogram_392(F->up, F->e_891, &F->y_892);
f_define_311(F->up, F->y_892, (*(P153)rt_nil_check(F->e_891)).line_);
}
F->e_891 = (*(P153)rt_nil_check(F->e_891)).next_;
}
L_end_893: ;
ret_:
  return;
}

static void f_build_subprogram_392(struct f_greenc_1fr *up_, P153 d_390, P107 *y_391) {
  struct f_build_subprogram_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_390 = d_390;
F->y_391 = y_391;
F->p_894 = NULL;
F->p_894 = (*(P153)rt_nil_check(F->d_390)).a_;
F->pm_895 = NULL;
F->tail_896 = NULL;
F->rc_897 = NULL;
F->k_898 = F->up->y_proc_90;
if (((*(P153)rt_nil_check(F->d_390)).kind_ == F->up->n_func_47)) {
F->k_898 = F->up->y_func_89;
}
(*F->y_391) = f_new_sym_316(F->up, F->k_898, (*(P153)rt_nil_check(F->d_390)).name_);
while ((F->p_894 != NULL)) {
F->pm_895 = ({ R808 *cell900 = rt_alloc(sizeof(R808)); *cell900 = cp_R808(({ R808 ag901; ag901.name_ = (*(P153)rt_nil_check(F->p_894)).name_; ag901.mode_ = (*(P153)rt_nil_check(F->p_894)).ival_; ag901.t_ = NULL; ag901.c_ = NULL; ag901.cfield_ = NULL; ag901.dflt_ = (*(P153)rt_nil_check(F->p_894)).b_; ag901.next_ = NULL; ag901; })); (P807)cell900; });
f_resolve_346(F->up, (*(P153)rt_nil_check(F->p_894)).a_, &(*(P807)rt_nil_check(F->pm_895)).t_, &(*(P807)rt_nil_check(F->pm_895)).c_);
f_new_name_161(F->up, rt_str_catc(f_lower_s_169(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->p_894)).name_))), 95), &(*(P807)rt_nil_check(F->pm_895)).cfield_);
if ((((*(P153)rt_nil_check(F->d_390)).kind_ == F->up->n_func_47) && ((*(P807)rt_nil_check(F->pm_895)).mode_ != F->up->m_in_72))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->p_894)).line_, rt_str("a function can only have in parameters (RM79 6.5)", 49));
}
if ((((*(P153)rt_nil_check(F->d_390)).flag_ == ((rt_int)1LL)) && ((*(P807)rt_nil_check(F->pm_895)).mode_ != F->up->m_in_72))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->p_894)).line_, rt_str("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_896 == NULL)) {
(*(P107)rt_nil_check((*F->y_391))).params_ = F->pm_895;
} else {
(*(P807)rt_nil_check(F->tail_896)).next_ = F->pm_895;
}
F->tail_896 = F->pm_895;
F->p_894 = (*(P153)rt_nil_check(F->p_894)).next_;
}
L_end_899: ;
(*(P107)rt_nil_check((*F->y_391))).result_ = F->up->ty_void_147;
if (((*(P153)rt_nil_check(F->d_390)).b_ != NULL)) {
f_resolve_346(F->up, (*(P153)rt_nil_check(F->d_390)).b_, &(*(P107)rt_nil_check((*F->y_391))).result_, &F->rc_897);
}
(*(P107)rt_nil_check((*F->y_391))).vrp_ = ((*(P153)rt_nil_check(F->d_390)).flag_ == ((rt_int)1LL));
f_new_name_161(F->up, rt_str_catc(rt_str_cat(rt_str("f_", 2), f_c_ident_446(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->d_390)).name_)))), 95), &(*(P107)rt_nil_check((*F->y_391))).cname_);
(*(P107)rt_nil_check((*F->y_391))).decl_ = F->d_390;
(*(P107)rt_nil_check((*F->y_391))).level_ = F->up->cur_level_129;
ret_:
  return;
}

static void f_decl_elements_394(struct f_greenc_1fr *up_, P153 decls_393) {
  struct f_decl_elements_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_393 = decls_393;
F->e_902 = NULL;
F->e_902 = F->decls_393;
F->declared_903 = 0;
while ((F->e_902 != NULL)) {
if (((((*(P153)rt_nil_check(F->e_902)).kind_ == F->up->n_proc_46) || ((*(P153)rt_nil_check(F->e_902)).kind_ == F->up->n_func_47)) && (!F->declared_903))) {
f_declare_subprograms_389(F->up, F->e_902);
F->declared_903 = 1;
}
f_decl_element_396(F->up, F->e_902);
F->e_902 = (*(P153)rt_nil_check(F->e_902)).next_;
}
L_end_904: ;
ret_:
  return;
}

static void f_decl_element_396(struct f_greenc_1fr *up_, P153 e_395) {
  struct f_decl_element_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_395 = e_395;
F->y_905 = NULL;
F->t_906 = NULL;
F->vt_907 = NULL;
F->c_908 = NULL;
F->acc_909 = NULL;
F->v_910 = NULL;
F->x_911 = NULL;
{ rt_int sel913 = (*(P153)rt_nil_check(F->e_395)).kind_;
if (0 || sel913 == ((rt_int)42LL)) {
F->y_905 = f_new_sym_316(F->up, F->up->y_type_91, (*(P153)rt_nil_check(F->e_395)).name_);
(*(P107)rt_nil_check(F->y_905)).decl_ = F->e_395;
f_define_311(F->up, F->y_905, (*(P153)rt_nil_check(F->e_395)).line_);
f_type_definition_351(F->up, (*(P153)rt_nil_check(F->e_395)).a_, (*(P153)rt_nil_check(F->e_395)).name_, &(*(P107)rt_nil_check(F->y_905)).t_, &(*(P107)rt_nil_check(F->y_905)).c_);
} else if (0 || sel913 == ((rt_int)43LL)) {
F->y_905 = f_new_sym_316(F->up, F->up->y_type_91, (*(P153)rt_nil_check(F->e_395)).name_);
f_resolve_346(F->up, (*(P153)rt_nil_check(F->e_395)).a_, &(*(P107)rt_nil_check(F->y_905)).t_, &(*(P107)rt_nil_check(F->y_905)).c_);
f_define_311(F->up, F->y_905, (*(P153)rt_nil_check(F->e_395)).line_);
} else if (0 || sel913 == ((rt_int)40LL)) {
f_resolve_346(F->up, (*(P153)rt_nil_check(F->e_395)).a_, &F->t_906, &F->c_908);
F->y_905 = f_new_sym_316(F->up, F->up->y_var_87, (*(P153)rt_nil_check(F->e_395)).name_);
if (((((*(P112)rt_nil_check(F->t_906)).kind_ == F->up->t_string_79) && ((*(P150)rt_nil_check(F->c_908)).slen_ == NULL)) && ((*(P153)rt_nil_check(F->e_395)).b_ != NULL))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_395)).b_, F->t_906, &F->vt_907, &F->v_910);
f_check_type_325(F->up, F->vt_907, F->t_906, (*(P153)rt_nil_check(F->e_395)).line_);
f_storage_384(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_395)).name_)), F->t_906, &F->acc_909);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->acc_909)), rt_str(" = rt_str_copy(", 15)), (*(P130)rt_nil_check(F->v_910))), rt_str(");", 2)));
} else {
f_storage_384(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_395)).name_)), F->t_906, &F->acc_909);
f_init_storage_357(F->up, (*(P130)rt_nil_check(F->acc_909)), F->t_906, F->c_908);
if (((*(P153)rt_nil_check(F->e_395)).b_ != NULL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_395)).b_, F->t_906, &F->vt_907, &F->v_910);
f_check_type_325(F->up, F->vt_907, F->t_906, (*(P153)rt_nil_check(F->e_395)).line_);
f_assign_code_365(F->up, (*(P130)rt_nil_check(F->acc_909)), F->t_906, (*(P130)rt_nil_check(F->v_910)), F->c_908, &F->x_911);
f_emit_181(F->up, (*(P130)rt_nil_check(F->x_911)));
}
}
(*(P107)rt_nil_check(F->y_905)).t_ = F->t_906;
(*(P107)rt_nil_check(F->y_905)).c_ = F->c_908;
f_bind_387(F->up, F->y_905, F->acc_909);
f_define_311(F->up, F->y_905, (*(P153)rt_nil_check(F->e_395)).line_);
} else if (0 || sel913 == ((rt_int)41LL)) {
f_resolve_346(F->up, (*(P153)rt_nil_check(F->e_395)).a_, &F->t_906, &F->c_908);
F->y_905 = f_new_sym_316(F->up, F->up->y_const_88, (*(P153)rt_nil_check(F->e_395)).name_);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_395)).b_, F->t_906, &F->vt_907, &F->v_910);
f_check_type_325(F->up, F->vt_907, F->t_906, (*(P153)rt_nil_check(F->e_395)).line_);
if (((*(P112)rt_nil_check(F->t_906)).kind_ == F->up->t_int_75)) {
f_manifest_342(F->up, (*(P153)rt_nil_check(F->e_395)).b_, &(*(P107)rt_nil_check(F->y_905)).mvalue_, &F->ok_912);
(*(P107)rt_nil_check(F->y_905)).hasmv_ = F->ok_912;
}
f_storage_384(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_395)).name_)), F->t_906, &F->acc_909);
f_copy_code_369(F->up, F->t_906, (*(P130)rt_nil_check(F->v_910)), &F->x_911);
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->acc_909)), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->x_911))), 59));
(*(P107)rt_nil_check(F->y_905)).t_ = F->t_906;
(*(P107)rt_nil_check(F->y_905)).c_ = F->c_908;
(*(P107)rt_nil_check(F->y_905)).ro_ = 1;
f_bind_387(F->up, F->y_905, F->acc_909);
f_define_311(F->up, F->y_905, (*(P153)rt_nil_check(F->e_395)).line_);
} else if (0 || sel913 == ((rt_int)46LL)) {
F->y_905 = f_new_sym_316(F->up, F->up->y_exc_92, (*(P153)rt_nil_check(F->e_395)).name_);
f_new_name_161(F->up, rt_str_catc(rt_str_cat(rt_str("ex_", 3), f_lower_s_169(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_395)).name_)))), 95), &(*(P107)rt_nil_check(F->y_905)).cname_);
f_put_to_179(F->up, F->up->out_globals_122, rt_str_catc(rt_str_cat(rt_str("static int ", 11), (*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_905)).cname_))), 59));
f_put_to_179(F->up, F->up->out_excs_125, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_905)).cname_))), rt_str(" = rt_exc(", 10)), f_q_172(F->up)), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_395)).name_))), f_q_172(F->up)), rt_str(");", 2)));
f_define_311(F->up, F->y_905, (*(P153)rt_nil_check(F->e_395)).line_);
} else if (0 || sel913 == ((rt_int)44LL) || sel913 == ((rt_int)45LL)) {
f_subprogram_body_401(F->up, F->e_395, f_lookup_decl_300(F->up, F->e_395));
} else if (0 || sel913 == ((rt_int)55LL)) {
} else {
f_other_decl_398(F->up, F->e_395);
}
}
ret_:
  return;
}

static void f_other_decl_398(struct f_greenc_1fr *up_, P153 e_397) {
  struct f_other_decl_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_397 = e_397;
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_397)).line_, rt_str("this declaration is not handled yet", 35));
ret_:
  return;
}

static void f_subprogram_body_401(struct f_greenc_1fr *up_, P153 d_399, P107 y_400) {
  struct f_subprogram_body_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_399 = d_399;
F->y_400 = y_400;
F->saved_code_914 = NULL;
F->saved_code_914 = F->up->code_126;
F->saved_fields_915 = NULL;
F->saved_fields_915 = F->up->fields_buf_127;
F->saved_in_916 = F->up->in_func_128;
F->saved_sym_917 = NULL;
F->saved_sym_917 = F->up->func_sym_132;
F->saved_exits_918 = NULL;
F->saved_exits_918 = F->up->exits_135;
F->saved_frames_919 = F->up->frames_136;
F->saved_handlers_920 = NULL;
F->saved_handlers_920 = F->up->handlers_139;
F->saved_cleanups_921 = NULL;
F->saved_cleanups_921 = F->up->cleanups_140;
F->args_922 = NULL;
F->head_923 = NULL;
F->frame_924 = NULL;
F->parent_925 = NULL;
F->ct_926 = NULL;
F->x_927 = NULL;
F->pm_928 = NULL;
F->pm_928 = (*(P107)rt_nil_check(F->y_400)).params_;
F->p_929 = NULL;
F->frame_924 = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_400)).cname_)), rt_str("fr", 2)));
if (F->up->in_func_128) {
F->parent_925 = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check((*(P107)rt_nil_check(F->up->func_sym_132)).cname_)), rt_str("fr", 2)));
}
F->up->code_126 = f_new_buffer_176(F->up);
F->up->fields_buf_127 = f_new_buffer_176(F->up);
F->up->in_func_128 = 1;
F->up->func_sym_132 = F->y_400;
F->up->exits_135 = NULL;
F->up->frames_136 = ((rt_int)0LL);
F->up->handlers_139 = NULL;
F->up->cleanups_140 = NULL;
F->up->cur_level_129 = rt_add(F->up->cur_level_129, ((rt_int)1LL));
F->args_922 = f_mk_158(F->up, rt_str("", 0));
f_open_scope_312(F->up);
if ((F->parent_925 != NULL)) {
f_put_to_179(F->up, F->up->fields_buf_127, rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P130)rt_nil_check(F->parent_925))), rt_str(" *up;", 5)));
F->args_922 = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P130)rt_nil_check(F->parent_925))), rt_str(" *up_", 5)));
f_emit_181(F->up, rt_str("F->up = up_;", 12));
}
while ((F->pm_928 != NULL)) {
f_ctype_330(F->up, (*(P807)rt_nil_check(F->pm_928)).t_, &F->ct_926);
if ((((*(P130)rt_nil_check(F->args_922))).len > ((rt_int)0LL))) {
F->args_922 = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check(F->args_922)), rt_str(", ", 2)));
}
if (((*(P807)rt_nil_check(F->pm_928)).mode_ == F->up->m_in_72)) {
F->p_929 = f_new_sym_316(F->up, F->up->y_const_88, (*(P807)rt_nil_check(F->pm_928)).name_);
(*(P107)rt_nil_check(F->p_929)).ro_ = 1;
f_put_to_179(F->up, F->up->fields_buf_127, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(32, (*(P130)rt_nil_check(F->ct_926))), 32), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_))), 59));
F->args_922 = f_mk_158(F->up, rt_str_cat(rt_str_catc(rt_str_cat((*(P130)rt_nil_check(F->args_922)), (*(P130)rt_nil_check(F->ct_926))), 32), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_))));
f_copy_code_369(F->up, (*(P807)rt_nil_check(F->pm_928)).t_, (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_)), &F->x_927);
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_))), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->x_927))), 59));
} else {
F->p_929 = f_new_sym_316(F->up, F->up->y_var_87, (*(P807)rt_nil_check(F->pm_928)).name_);
(*(P107)rt_nil_check(F->p_929)).byref_ = 1;
f_put_to_179(F->up, F->up->fields_buf_127, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(32, (*(P130)rt_nil_check(F->ct_926))), rt_str(" *", 2)), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_))), 59));
F->args_922 = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->args_922)), (*(P130)rt_nil_check(F->ct_926))), rt_str(" *", 2)), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_))));
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_))), rt_str(" = ", 3)), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_928)).cfield_))), 59));
}
(*(P107)rt_nil_check(F->p_929)).access_path_ = (*(P807)rt_nil_check(F->pm_928)).cfield_;
(*(P107)rt_nil_check(F->p_929)).t_ = (*(P807)rt_nil_check(F->pm_928)).t_;
(*(P107)rt_nil_check(F->p_929)).c_ = (*(P807)rt_nil_check(F->pm_928)).c_;
(*(P107)rt_nil_check(F->p_929)).level_ = F->up->cur_level_129;
f_define_311(F->up, F->p_929, (*(P153)rt_nil_check(F->d_399)).line_);
F->pm_928 = (*(P807)rt_nil_check(F->pm_928)).next_;
}
L_end_930: ;
if (((*(P112)rt_nil_check((*(P107)rt_nil_check(F->y_400)).result_)).kind_ != F->up->t_void_83)) {
f_ctype_330(F->up, (*(P107)rt_nil_check(F->y_400)).result_, &F->ct_926);
f_put_to_179(F->up, F->up->fields_buf_127, rt_str_cat(rt_str_ccat(32, (*(P130)rt_nil_check(F->ct_926))), rt_str(" result_;", 9)));
}
f_decl_elements_394(F->up, (*(P153)rt_nil_check(F->d_399)).c_);
f_guarded_412(F->up, (*(P153)rt_nil_check(F->d_399)).d_, (*(P153)rt_nil_check(F->d_399)).e_, (*(P153)rt_nil_check(F->d_399)).line_);
f_close_scope_313(F->up);
F->up->cur_level_129 = rt_sub(F->up->cur_level_129, ((rt_int)1LL));
if ((((*(P130)rt_nil_check(F->args_922))).len == ((rt_int)0LL))) {
F->args_922 = f_mk_158(F->up, rt_str("void", 4));
}
f_ctype_330(F->up, (*(P107)rt_nil_check(F->y_400)).result_, &F->ct_926);
F->head_923 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("static ", 7), (*(P130)rt_nil_check(F->ct_926))), 32), (*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_400)).cname_))), 40), (*(P130)rt_nil_check(F->args_922))), 41));
f_put_to_179(F->up, F->up->out_protos_121, rt_str_catc((*(P130)rt_nil_check(F->head_923)), 59));
f_put_to_179(F->up, F->up->out_frames_119, rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P130)rt_nil_check(F->frame_924))), rt_str(" { int dummy;", 13)));
f_splice_186(F->up, F->up->out_frames_119, F->up->fields_buf_127);
f_put_to_179(F->up, F->up->out_frames_119, rt_str("};", 2));
f_put_to_179(F->up, F->up->out_funcs_123, rt_str_cat((*(P130)rt_nil_check(F->head_923)), rt_str(" {", 2)));
f_put_to_179(F->up, F->up->out_funcs_123, rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P130)rt_nil_check(F->frame_924))), rt_str(" *F = rt_alloc(sizeof *F);", 26)));
f_splice_186(F->up, F->up->out_funcs_123, F->up->code_126);
if (((*(P112)rt_nil_check((*(P107)rt_nil_check(F->y_400)).result_)).kind_ != F->up->t_void_83)) {
f_put_to_179(F->up, F->up->out_funcs_123, rt_str("  rt_raise(RT_X_INIT);", 22));
f_put_to_179(F->up, F->up->out_funcs_123, rt_str("ret_:", 5));
f_put_to_179(F->up, F->up->out_funcs_123, rt_str("  return F->result_;", 20));
} else {
f_put_to_179(F->up, F->up->out_funcs_123, rt_str("ret_:", 5));
f_put_to_179(F->up, F->up->out_funcs_123, rt_str("  return;", 9));
}
f_put_to_179(F->up, F->up->out_funcs_123, rt_str("}", 1));
f_put_to_179(F->up, F->up->out_funcs_123, rt_str("", 0));
F->up->code_126 = F->saved_code_914;
F->up->fields_buf_127 = F->saved_fields_915;
F->up->in_func_128 = F->saved_in_916;
F->up->func_sym_132 = F->saved_sym_917;
F->up->exits_135 = F->saved_exits_918;
F->up->frames_136 = F->saved_frames_919;
F->up->handlers_139 = F->saved_handlers_920;
F->up->cleanups_140 = F->saved_cleanups_921;
ret_:
  return;
}

static void f_gen_statements_403(struct f_greenc_1fr *up_, P153 stmts_402) {
  struct f_gen_statements_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_402 = stmts_402;
F->s_931 = NULL;
F->s_931 = F->stmts_402;
while ((F->s_931 != NULL)) {
f_gen_statement_418(F->up, F->s_931);
F->s_931 = (*(P153)rt_nil_check(F->s_931)).next_;
}
L_end_932: ;
ret_:
  return;
}

static void f_pop_frames_405(struct f_greenc_1fr *up_, rt_int upto_404) {
  struct f_pop_frames_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_404 = upto_404;
F->i_933 = F->up->frames_136;
F->c_934 = NULL;
F->c_934 = F->up->cleanups_140;
while ((F->i_933 > F->upto_404)) {
f_emit_181(F->up, (*(P130)rt_nil_check((*(P137)rt_nil_check(F->c_934)).s_)));
F->c_934 = (*(P137)rt_nil_check(F->c_934)).next_;
F->i_933 = rt_sub(F->i_933, ((rt_int)1LL));
}
L_end_935: ;
ret_:
  return;
}

static void f_push_cleanup_407(struct f_greenc_1fr *up_, rstr s_406) {
  struct f_push_cleanup_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_406 = rt_str_copy(s_406);
F->up->cleanups_140 = ({ R138 *cell936 = rt_alloc(sizeof(R138)); *cell936 = cp_R138(({ R138 ag937; ag937.s_ = NULL; ag937.next_ = F->up->cleanups_140; ag937; })); (P137)cell936; });
(*(P137)rt_nil_check(F->up->cleanups_140)).s_ = f_mk_158(F->up, F->s_406);
F->up->frames_136 = rt_add(F->up->frames_136, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_408(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_140 = (*(P137)rt_nil_check(F->up->cleanups_140)).next_;
F->up->frames_136 = rt_sub(F->up->frames_136, ((rt_int)1LL));
ret_:
  return;
}

static void f_guarded_412(struct f_greenc_1fr *up_, P153 stmts_409, P153 hs_410, rt_int line_411) {
  struct f_guarded_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_409 = stmts_409;
F->hs_410 = hs_410;
F->line_411 = line_411;
F->f_938 = NULL;
F->x_939 = NULL;
F->h_940 = NULL;
F->n_941 = NULL;
F->first_942 = 1;
F->has_others_943 = 0;
F->conds_944 = NULL;
if ((F->hs_410 == NULL)) {
f_gen_statements_403(F->up, F->stmts_409);
goto ret_;
}
f_new_name_161(F->up, rt_str("xf", 2), &F->f_938);
f_new_name_161(F->up, rt_str("x", 1), &F->x_939);
f_push_cleanup_407(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P130)rt_nil_check(F->f_938))), rt_str(");", 2)));
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str("{ rt_frame ", 11), (*(P130)rt_nil_check(F->f_938))), 59));
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), (*(P130)rt_nil_check(F->f_938))), rt_str(")) {", 4)));
f_gen_statements_403(F->up, F->stmts_409);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P130)rt_nil_check(F->f_938))), rt_str(");", 2)));
f_emit_181(F->up, rt_str("} else {", 8));
f_pop_cleanup_408(F->up);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), (*(P130)rt_nil_check(F->f_938))), rt_str(");", 2)));
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("int ", 4), (*(P130)rt_nil_check(F->x_939))), rt_str(" = rt_xcur;", 11)));
F->up->handlers_139 = ({ R138 *cell945 = rt_alloc(sizeof(R138)); *cell945 = cp_R138(({ R138 ag946; ag946.s_ = F->x_939; ag946.next_ = F->up->handlers_139; ag946; })); (P137)cell945; });
F->h_940 = F->hs_410;
while ((F->h_940 != NULL)) {
F->n_941 = (*(P153)rt_nil_check(F->h_940)).a_;
F->conds_944 = f_mk_158(F->up, rt_str("0", 1));
while ((F->n_941 != NULL)) {
if (rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->n_941)).name_)), rt_str("OTHERS", 6))) {
F->has_others_943 = 1;
F->conds_944 = f_mk_158(F->up, rt_str("1", 1));
} else {
f_exc_id_416(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->n_941)).name_)), (*(P153)rt_nil_check(F->h_940)).line_, &F->f_938);
F->conds_944 = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->conds_944)), rt_str(" || ", 4)), (*(P130)rt_nil_check(F->x_939))), rt_str(" == ", 4)), (*(P130)rt_nil_check(F->f_938))));
}
F->n_941 = (*(P153)rt_nil_check(F->n_941)).next_;
}
L_end_948: ;
if (F->first_942) {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P130)rt_nil_check(F->conds_944))), rt_str(") {", 3)));
} else {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P130)rt_nil_check(F->conds_944))), rt_str(") {", 3)));
}
F->first_942 = 0;
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->h_940)).b_);
F->h_940 = (*(P153)rt_nil_check(F->h_940)).next_;
}
L_end_947: ;
if ((!F->has_others_943)) {
f_emit_181(F->up, rt_str("} else {", 8));
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P130)rt_nil_check(F->x_939))), rt_str(");", 2)));
}
f_emit_181(F->up, rt_str("}", 1));
F->up->handlers_139 = (*(P137)rt_nil_check(F->up->handlers_139)).next_;
f_emit_181(F->up, rt_str("}", 1));
f_emit_181(F->up, rt_str("}", 1));
ret_:
  return;
}

static void f_exc_id_416(struct f_greenc_1fr *up_, rstr name_413, rt_int line_414, P130 *r_415) {
  struct f_exc_id_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_413 = rt_str_copy(name_413);
F->line_414 = line_414;
F->r_415 = r_415;
F->y_949 = NULL;
F->y_949 = f_lookup_298(F->up, F->name_413);
if (((F->y_949 == NULL) || ((*(P107)rt_nil_check(F->y_949)).kind_ != F->up->y_exc_92))) {
f_fail_175(F->up, F->line_414, rt_str_cat(F->name_413, rt_str(" is not an exception", 20)));
}
(*F->r_415) = (*(P107)rt_nil_check(F->y_949)).cname_;
ret_:
  return;
}

static void f_gen_statement_418(struct f_greenc_1fr *up_, P153 s_417) {
  struct f_gen_statement_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_417 = s_417;
F->t_950 = NULL;
F->vt_951 = NULL;
F->c_952 = NULL;
F->lv_953 = NULL;
F->v_954 = NULL;
F->x_955 = NULL;
{ rt_int sel957 = (*(P153)rt_nil_check(F->s_417)).kind_;
if (0 || sel957 == ((rt_int)20LL)) {
f_lvalue_458(F->up, (*(P153)rt_nil_check(F->s_417)).a_, &F->lv_953, &F->t_950, &F->c_952, &F->ro_956);
if (F->ro_956) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_417)).line_, rt_str("assignment to a constant or an in parameter", 43));
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->s_417)).b_, F->t_950, &F->vt_951, &F->v_954);
f_check_type_325(F->up, F->vt_951, F->t_950, (*(P153)rt_nil_check(F->s_417)).line_);
f_assign_code_365(F->up, (*(P130)rt_nil_check(F->lv_953)), F->t_950, (*(P130)rt_nil_check(F->v_954)), F->c_952, &F->x_955);
f_emit_181(F->up, (*(P130)rt_nil_check(F->x_955)));
} else if (0 || sel957 == ((rt_int)21LL)) {
f_gen_call_422(F->up, F->s_417);
} else if (0 || sel957 == ((rt_int)22LL)) {
f_gen_if_424(F->up, F->s_417);
} else if (0 || sel957 == ((rt_int)23LL)) {
f_gen_case_426(F->up, F->s_417);
} else if (0 || sel957 == ((rt_int)24LL)) {
f_gen_loop_432(F->up, F->s_417);
} else if (0 || sel957 == ((rt_int)25LL)) {
f_gen_block_434(F->up, F->s_417);
} else if (0 || sel957 == ((rt_int)26LL)) {
f_gen_exit_436(F->up, F->s_417);
} else if (0 || sel957 == ((rt_int)27LL)) {
f_gen_return_438(F->up, F->s_417);
} else if (0 || sel957 == ((rt_int)28LL)) {
f_exc_id_416(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->s_417)).name_)), (*(P153)rt_nil_check(F->s_417)).line_, &F->x_955);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P130)rt_nil_check(F->x_955))), rt_str(");", 2)));
} else if (0 || sel957 == ((rt_int)29LL)) {
if ((F->up->handlers_139 == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_417)).line_, rt_str("raise; outside an exception handler", 35));
}
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P130)rt_nil_check((*(P137)rt_nil_check(F->up->handlers_139)).s_))), rt_str(");", 2)));
} else if (0 || sel957 == ((rt_int)30LL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->s_417)).a_, F->up->ty_bool_143, &F->vt_951, &F->v_954);
f_check_type_325(F->up, F->vt_951, F->up->ty_bool_143, (*(P153)rt_nil_check(F->s_417)).line_);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("if (!(", 6), (*(P130)rt_nil_check(F->v_954))), rt_str(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel957 == ((rt_int)31LL)) {
} else {
f_task_statement_gen_420(F->up, F->s_417);
}
}
ret_:
  return;
}

static void f_task_statement_gen_420(struct f_greenc_1fr *up_, P153 s_419) {
  struct f_task_statement_gen_420fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_419 = s_419;
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_419)).line_, rt_str("this statement is not handled yet", 33));
ret_:
  return;
}

static void f_gen_call_422(struct f_greenc_1fr *up_, P153 s_421) {
  struct f_gen_call_422fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_421 = s_421;
F->c_958 = NULL;
F->c_958 = (*(P153)rt_nil_check(F->s_421)).a_;
F->t_959 = NULL;
F->v_960 = NULL;
if ((((*(P153)rt_nil_check(F->c_958)).kind_ == F->up->n_name_13) || ((*(P153)rt_nil_check(F->c_958)).kind_ == F->up->n_select_17))) {
F->c_958 = f_nn_200(F->up, F->up->n_apply_16, (*(P153)rt_nil_check(F->s_421)).line_);
(*(P153)rt_nil_check(F->c_958)).a_ = (*(P153)rt_nil_check(F->s_421)).a_;
}
if (((*(P153)rt_nil_check(F->c_958)).kind_ != F->up->n_apply_16)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_421)).line_, rt_str("not a procedure call", 20));
}
f_gcall_540(F->up, F->c_958, 1, &F->t_959, &F->v_960);
f_emit_181(F->up, rt_str_catc((*(P130)rt_nil_check(F->v_960)), 59));
ret_:
  return;
}

static void f_gen_if_424(struct f_greenc_1fr *up_, P153 s_423) {
  struct f_gen_if_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_423 = s_423;
F->a_961 = NULL;
F->a_961 = (*(P153)rt_nil_check(F->s_423)).a_;
F->first_962 = 1;
F->t_963 = NULL;
F->v_964 = NULL;
while ((F->a_961 != NULL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->a_961)).a_, F->up->ty_bool_143, &F->t_963, &F->v_964);
f_check_type_325(F->up, F->t_963, F->up->ty_bool_143, (*(P153)rt_nil_check(F->s_423)).line_);
if (F->first_962) {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P130)rt_nil_check(F->v_964))), rt_str(") {", 3)));
} else {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P130)rt_nil_check(F->v_964))), rt_str(") {", 3)));
}
F->first_962 = 0;
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->a_961)).b_);
F->a_961 = (*(P153)rt_nil_check(F->a_961)).next_;
}
L_end_965: ;
if (((*(P153)rt_nil_check(F->s_423)).flag_ == ((rt_int)1LL))) {
f_emit_181(F->up, rt_str("} else {", 8));
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->s_423)).b_);
}
f_emit_181(F->up, rt_str("}", 1));
ret_:
  return;
}

static void f_gen_case_426(struct f_greenc_1fr *up_, P153 s_425) {
  struct f_gen_case_426fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_425 = s_425;
F->st_966 = NULL;
F->vt_967 = NULL;
F->first_968 = 1;
F->a_969 = NULL;
F->a_969 = (*(P153)rt_nil_check(F->s_425)).b_;
F->lab_970 = NULL;
F->sel_971 = NULL;
F->tmp_972 = NULL;
F->ct_973 = NULL;
F->conds_974 = NULL;
F->v_975 = NULL;
F->lo_976 = NULL;
F->hi_977 = NULL;
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->s_425)).a_, NULL, &F->st_966, &F->sel_971);
f_new_name_161(F->up, rt_str("sel", 3), &F->tmp_972);
f_ctype_330(F->up, F->st_966, &F->ct_973);
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("{ ", 2), (*(P130)rt_nil_check(F->ct_973))), 32), (*(P130)rt_nil_check(F->tmp_972))), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->sel_971))), 59));
while ((F->a_969 != NULL)) {
F->lab_970 = (*(P153)rt_nil_check(F->a_969)).a_;
F->conds_974 = f_mk_158(F->up, rt_str("0", 1));
while ((F->lab_970 != NULL)) {
if (((*(P153)rt_nil_check(F->lab_970)).b_ == NULL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->lab_970)).a_, F->st_966, &F->vt_967, &F->v_975);
f_check_type_325(F->up, F->vt_967, F->st_966, (*(P153)rt_nil_check(F->s_425)).line_);
F->conds_974 = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->conds_974)), rt_str(" || ", 4)), (*(P130)rt_nil_check(F->tmp_972))), rt_str(" == ", 4)), (*(P130)rt_nil_check(F->v_975))));
} else {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->lab_970)).a_, F->st_966, &F->vt_967, &F->lo_976);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->lab_970)).b_, F->st_966, &F->vt_967, &F->hi_977);
F->conds_974 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->conds_974)), rt_str(" || (", 5)), (*(P130)rt_nil_check(F->tmp_972))), rt_str(" >= ", 4)), (*(P130)rt_nil_check(F->lo_976))), rt_str(" && ", 4)), (*(P130)rt_nil_check(F->tmp_972))), rt_str(" <= ", 4)), (*(P130)rt_nil_check(F->hi_977))), 41));
}
F->lab_970 = (*(P153)rt_nil_check(F->lab_970)).next_;
}
L_end_979: ;
if (F->first_968) {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P130)rt_nil_check(F->conds_974))), rt_str(") {", 3)));
} else {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P130)rt_nil_check(F->conds_974))), rt_str(") {", 3)));
}
F->first_968 = 0;
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->a_969)).b_);
F->a_969 = (*(P153)rt_nil_check(F->a_969)).next_;
}
L_end_978: ;
if (F->first_968) {
f_emit_181(F->up, rt_str("{", 1));
} else {
f_emit_181(F->up, rt_str("} else {", 8));
}
if (((*(P153)rt_nil_check(F->s_425)).flag_ == ((rt_int)1LL))) {
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->s_425)).c_);
} else {
f_emit_181(F->up, rt_str("rt_raise(RT_X_CASE);", 20));
}
f_emit_181(F->up, rt_str("}", 1));
f_emit_181(F->up, rt_str("}", 1));
ret_:
  return;
}

static void f_push_exit_430(struct f_greenc_1fr *up_, P130 match_427, int is_loop_428, P130 *label_429) {
  struct f_push_exit_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_427 = match_427;
F->is_loop_428 = is_loop_428;
F->label_429 = label_429;
f_new_name_161(F->up, rt_str("L_end_", 6), &(*F->label_429));
F->up->exits_135 = ({ R134 *cell980 = rt_alloc(sizeof(R134)); *cell980 = cp_R134(({ R134 ag981; ag981.match_ = F->match_427; ag981.label_ = (*F->label_429); ag981.depth_ = F->up->frames_136; ag981.is_loop_ = F->is_loop_428; ag981.next_ = F->up->exits_135; ag981; })); (P133)cell980; });
ret_:
  return;
}

static void f_gen_loop_432(struct f_greenc_1fr *up_, P153 s_431) {
  struct f_gen_loop_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_431 = s_431;
F->t_982 = NULL;
F->vt_983 = NULL;
F->c_984 = NULL;
F->label_985 = NULL;
F->cond_986 = NULL;
F->acc_987 = NULL;
F->lov_988 = NULL;
F->hiv_989 = NULL;
F->it_990 = NULL;
F->y_991 = NULL;
F->r_992 = NULL;
f_push_exit_430(F->up, (*(P153)rt_nil_check(F->s_431)).tag_, 1, &F->label_985);
if (((*(P153)rt_nil_check(F->s_431)).flag_ == ((rt_int)0LL))) {
f_emit_181(F->up, rt_str("for (;;) {", 10));
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->s_431)).b_);
f_emit_181(F->up, rt_str("}", 1));
} else if (((*(P153)rt_nil_check(F->s_431)).flag_ == ((rt_int)1LL))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->s_431)).a_, F->up->ty_bool_143, &F->vt_983, &F->cond_986);
f_check_type_325(F->up, F->vt_983, F->up->ty_bool_143, (*(P153)rt_nil_check(F->s_431)).line_);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("while (", 7), (*(P130)rt_nil_check(F->cond_986))), rt_str(") {", 3)));
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->s_431)).b_);
f_emit_181(F->up, rt_str("}", 1));
} else {
F->r_992 = (*(P153)rt_nil_check(F->s_431)).a_;
F->c_984 = f_new_cons_319(F->up);
if (((*(P153)rt_nil_check(F->r_992)).kind_ == F->up->n_range_22)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_992)).a_, NULL, &F->t_982, &(*(P150)rt_nil_check(F->c_984)).lo_);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->r_992)).b_, F->t_982, &F->vt_983, &(*(P150)rt_nil_check(F->c_984)).hi_);
f_check_type_325(F->up, F->vt_983, F->t_982, (*(P153)rt_nil_check(F->s_431)).line_);
} else {
f_resolve_346(F->up, F->r_992, &F->t_982, &F->c_984);
if (((*(P150)rt_nil_check(F->c_984)).lo_ == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_431)).line_, rt_str("a FOR loop needs a discrete range", 33));
}
}
f_storage_384(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->s_431)).name_)), F->t_982, &F->acc_987);
f_new_name_161(F->up, rt_str("lo", 2), &F->lov_988);
f_new_name_161(F->up, rt_str("hi", 2), &F->hiv_989);
f_new_name_161(F->up, rt_str("it", 2), &F->it_990);
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), (*(P130)rt_nil_check(F->lov_988))), rt_str(" = ", 3)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_984)).lo_))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->hiv_989))), rt_str(" = ", 3)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_984)).hi_))), 59));
if (((*(P153)rt_nil_check(F->s_431)).ival_ == ((rt_int)1LL))) {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P130)rt_nil_check(F->it_990))), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->hiv_989))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->it_990))), rt_str(" >= ", 4)), (*(P130)rt_nil_check(F->lov_988))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->it_990))), rt_str("--) {", 5)));
} else {
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), (*(P130)rt_nil_check(F->it_990))), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->lov_988))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->it_990))), rt_str(" <= ", 4)), (*(P130)rt_nil_check(F->hiv_989))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->it_990))), rt_str("++) {", 5)));
}
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->acc_987)), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->it_990))), 59));
f_open_scope_312(F->up);
F->y_991 = f_new_sym_316(F->up, F->up->y_const_88, (*(P153)rt_nil_check(F->s_431)).name_);
(*(P107)rt_nil_check(F->y_991)).t_ = F->t_982;
(*(P107)rt_nil_check(F->y_991)).ro_ = 1;
f_bind_387(F->up, F->y_991, F->acc_987);
f_define_311(F->up, F->y_991, (*(P153)rt_nil_check(F->s_431)).line_);
f_gen_statements_403(F->up, (*(P153)rt_nil_check(F->s_431)).b_);
f_close_scope_313(F->up);
f_emit_181(F->up, rt_str("}", 1));
f_emit_181(F->up, rt_str("}", 1));
}
F->up->exits_135 = (*(P133)rt_nil_check(F->up->exits_135)).next_;
f_emit_181(F->up, rt_str_cat((*(P130)rt_nil_check(F->label_985)), rt_str(": ;", 3)));
ret_:
  return;
}

static void f_gen_block_434(struct f_greenc_1fr *up_, P153 s_433) {
  struct f_gen_block_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_433 = s_433;
F->label_993 = NULL;
f_push_exit_430(F->up, (*(P153)rt_nil_check(F->s_433)).tag_, 0, &F->label_993);
f_emit_181(F->up, rt_str("{", 1));
f_open_scope_312(F->up);
f_decl_elements_394(F->up, (*(P153)rt_nil_check(F->s_433)).a_);
f_guarded_412(F->up, (*(P153)rt_nil_check(F->s_433)).b_, (*(P153)rt_nil_check(F->s_433)).c_, (*(P153)rt_nil_check(F->s_433)).line_);
f_close_scope_313(F->up);
f_emit_181(F->up, rt_str("}", 1));
F->up->exits_135 = (*(P133)rt_nil_check(F->up->exits_135)).next_;
f_emit_181(F->up, rt_str_cat((*(P130)rt_nil_check(F->label_993)), rt_str(": ;", 3)));
ret_:
  return;
}

static void f_gen_exit_436(struct f_greenc_1fr *up_, P153 s_435) {
  struct f_gen_exit_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_435 = s_435;
F->x_994 = NULL;
F->x_994 = F->up->exits_135;
F->t_995 = NULL;
F->v_996 = NULL;
while ((F->x_994 != NULL)) {
if (((((*(P153)rt_nil_check(F->s_435)).name_ == NULL) && (*(P133)rt_nil_check(F->x_994)).is_loop_) || ((((*(P153)rt_nil_check(F->s_435)).name_ != NULL) && ((*(P133)rt_nil_check(F->x_994)).match_ != NULL)) && rt_str_eq((*(P130)rt_nil_check((*(P133)rt_nil_check(F->x_994)).match_)), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->s_435)).name_)))))) {
if (((*(P153)rt_nil_check(F->s_435)).a_ != NULL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->s_435)).a_, F->up->ty_bool_143, &F->t_995, &F->v_996);
f_check_type_325(F->up, F->t_995, F->up->ty_bool_143, (*(P153)rt_nil_check(F->s_435)).line_);
f_emit_181(F->up, rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P130)rt_nil_check(F->v_996))), rt_str(") {", 3)));
}
f_pop_frames_405(F->up, (*(P133)rt_nil_check(F->x_994)).depth_);
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str("goto ", 5), (*(P130)rt_nil_check((*(P133)rt_nil_check(F->x_994)).label_))), 59));
if (((*(P153)rt_nil_check(F->s_435)).a_ != NULL)) {
f_emit_181(F->up, rt_str("}", 1));
}
goto ret_;
}
F->x_994 = (*(P133)rt_nil_check(F->x_994)).next_;
}
L_end_997: ;
if (((*(P153)rt_nil_check(F->s_435)).name_ == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_435)).line_, rt_str("exit outside a loop", 19));
}
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_435)).line_, rt_str_cat(rt_str_cat(rt_str("exit ", 5), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->s_435)).name_))), rt_str(" names no enclosing loop", 24)));
ret_:
  return;
}

static void f_gen_return_438(struct f_greenc_1fr *up_, P153 s_437) {
  struct f_gen_return_438fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_437 = s_437;
F->vt_998 = NULL;
F->v_999 = NULL;
if ((!F->up->in_func_128)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_437)).line_, rt_str("return outside a subprogram", 27));
}
if (((*(P112)rt_nil_check((*(P107)rt_nil_check(F->up->func_sym_132)).result_)).kind_ == F->up->t_void_83)) {
if (((*(P153)rt_nil_check(F->s_437)).a_ != NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_437)).line_, rt_str("a procedure returns no value", 28));
}
f_pop_frames_405(F->up, ((rt_int)0LL));
f_emit_181(F->up, rt_str("goto ret_;", 10));
goto ret_;
}
if (((*(P153)rt_nil_check(F->s_437)).a_ == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->s_437)).line_, rt_str("return needs a value here", 25));
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->s_437)).a_, (*(P107)rt_nil_check(F->up->func_sym_132)).result_, &F->vt_998, &F->v_999);
f_check_type_325(F->up, F->vt_998, (*(P107)rt_nil_check(F->up->func_sym_132)).result_, (*(P153)rt_nil_check(F->s_437)).line_);
f_emit_181(F->up, rt_str_catc(rt_str_cat(rt_str("F->result_ = ", 13), (*(P130)rt_nil_check(F->v_999))), 59));
f_pop_frames_405(F->up, ((rt_int)0LL));
f_emit_181(F->up, rt_str("goto ret_;", 10));
ret_:
  return;
}

static void f_access_of_441(struct f_greenc_1fr *up_, P107 y_439, P130 *r_440) {
  struct f_access_of_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_439 = y_439;
F->r_440 = r_440;
F->p_1000 = NULL;
if (((*(P107)rt_nil_check(F->y_439)).level_ <= ((rt_int)0LL))) {
(*F->r_440) = (*(P107)rt_nil_check(F->y_439)).access_path_;
goto ret_;
}
F->p_1000 = f_mk_158(F->up, rt_str("F", 1));
{ rt_int lo1003 = ((rt_int)1LL), hi1004 = rt_sub(F->up->cur_level_129, (*(P107)rt_nil_check(F->y_439)).level_);
for (rt_int it1005 = lo1003; it1005 <= hi1004; it1005++) {
F->i_1002 = it1005;
F->p_1000 = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check(F->p_1000)), rt_str("->up", 4)));
}
}
L_end_1001: ;
if ((*(P107)rt_nil_check(F->y_439)).byref_) {
(*F->r_440) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P130)rt_nil_check(F->p_1000))), rt_str("->", 2)), (*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_439)).access_path_))), 41));
} else {
(*F->r_440) = f_mk_158(F->up, rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->p_1000)), rt_str("->", 2)), (*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_439)).access_path_))));
}
ret_:
  return;
}

static void f_link_to_444(struct f_greenc_1fr *up_, rt_int l_442, P130 *r_443) {
  struct f_link_to_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_442 = l_442;
F->r_443 = r_443;
(*F->r_443) = f_mk_158(F->up, rt_str("F", 1));
{ rt_int lo1008 = ((rt_int)1LL), hi1009 = rt_sub(F->up->cur_level_129, F->l_442);
for (rt_int it1010 = lo1008; it1010 <= hi1009; it1010++) {
F->i_1007 = it1010;
(*F->r_443) = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check((*F->r_443))), rt_str("->up", 4)));
}
}
L_end_1006: ;
ret_:
  return;
}

static rstr f_c_ident_446(struct f_greenc_1fr *up_, rstr s_445) {
  struct f_c_ident_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_445 = rt_str_copy(s_445);
if (rt_str_eq(F->s_445, rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("MOD", 3))) {
F->result_ = rt_str("op_mod", 6);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("AND", 3))) {
F->result_ = rt_str("op_and", 6);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("OR", 2))) {
F->result_ = rt_str("op_or", 5);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("XOR", 3))) {
F->result_ = rt_str("op_xor", 6);
goto ret_;
} else if (rt_str_eq(F->s_445, rt_str("NOT", 3))) {
F->result_ = rt_str("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_169(F->up, F->s_445);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_deref_450(struct f_greenc_1fr *up_, rstr base_447, P112 t_448, P130 *r_449) {
  struct f_deref_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_447 = rt_str_copy(base_447);
F->t_448 = t_448;
F->r_449 = r_449;
F->ct_1011 = NULL;
f_ctype_330(F->up, F->t_448, &F->ct_1011);
(*F->r_449) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), (*(P130)rt_nil_check(F->ct_1011))), rt_str(")rt_nil_check(", 14)), F->base_447), rt_str("))", 2)));
ret_:
  return;
}

static int f_is_object_452(struct f_greenc_1fr *up_, P153 e_451) {
  struct f_is_object_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_451 = e_451;
F->y_1012 = NULL;
if (((*(P153)rt_nil_check(F->e_451)).kind_ == F->up->n_name_13)) {
F->y_1012 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_451)).name_)));
F->result_ = ((F->y_1012 != NULL) && (((*(P107)rt_nil_check(F->y_1012)).kind_ == F->up->y_var_87) || ((*(P107)rt_nil_check(F->y_1012)).kind_ == F->up->y_const_88)));
goto ret_;
} else if (((*(P153)rt_nil_check(F->e_451)).kind_ == F->up->n_select_17)) {
F->result_ = f_is_object_452(F->up, (*(P153)rt_nil_check(F->e_451)).a_);
goto ret_;
} else if (((*(P153)rt_nil_check(F->e_451)).kind_ == F->up->n_apply_16)) {
if ((((*(P153)rt_nil_check(F->e_451)).b_ != NULL) && ((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_451)).b_)).kind_ == F->up->n_range_22))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_452(F->up, (*(P153)rt_nil_check(F->e_451)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_lvalue_458(struct f_greenc_1fr *up_, P153 e_453, P130 *code_out_454, P112 *t_455, P150 *c_456, int *ro_457) {
  struct f_lvalue_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_453 = e_453;
F->code_out_454 = code_out_454;
F->t_455 = t_455;
F->c_456 = c_456;
F->ro_457 = ro_457;
F->y_1013 = NULL;
F->base_1014 = NULL;
F->bt_1015 = NULL;
F->bc_1016 = NULL;
if (((*(P153)rt_nil_check(F->e_453)).kind_ == F->up->n_name_13)) {
F->y_1013 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_453)).name_)));
if ((F->y_1013 == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_453)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_453)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P107)rt_nil_check(F->y_1013)).kind_ != F->up->y_var_87) && ((*(P107)rt_nil_check(F->y_1013)).kind_ != F->up->y_const_88))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_453)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_453)).name_)), rt_str(" is not an object", 17)));
}
f_access_of_441(F->up, F->y_1013, &(*F->code_out_454));
(*F->t_455) = (*(P107)rt_nil_check(F->y_1013)).t_;
(*F->c_456) = (*(P107)rt_nil_check(F->y_1013)).c_;
(*F->ro_457) = (*(P107)rt_nil_check(F->y_1013)).ro_;
} else if (((*(P153)rt_nil_check(F->e_453)).kind_ == F->up->n_paren_23)) {
f_lvalue_458(F->up, (*(P153)rt_nil_check(F->e_453)).a_, &(*F->code_out_454), &(*F->t_455), &(*F->c_456), &(*F->ro_457));
} else if (((*(P153)rt_nil_check(F->e_453)).kind_ == F->up->n_select_17)) {
f_lvalue_458(F->up, (*(P153)rt_nil_check(F->e_453)).a_, &F->base_1014, &F->bt_1015, &F->bc_1016, &(*F->ro_457));
f_select_on_466(F->up, (*(P130)rt_nil_check(F->base_1014)), F->bt_1015, F->e_453, &(*F->ro_457), &(*F->code_out_454), &(*F->t_455), &(*F->c_456));
} else if (((*(P153)rt_nil_check(F->e_453)).kind_ == F->up->n_apply_16)) {
f_lvalue_458(F->up, (*(P153)rt_nil_check(F->e_453)).a_, &F->base_1014, &F->bt_1015, &F->bc_1016, &(*F->ro_457));
f_index_on_475(F->up, (*(P130)rt_nil_check(F->base_1014)), F->bt_1015, F->e_453, &(*F->ro_457), 1, &(*F->code_out_454), &(*F->t_455), &(*F->c_456));
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_453)).line_, rt_str("not an object", 13));
}
ret_:
  return;
}

static void f_select_on_466(struct f_greenc_1fr *up_, rstr base_459, P112 bt_460, P153 e_461, int *ro_462, P130 *code_out_463, P112 *t_464, P150 *c_465) {
  struct f_select_on_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_459 = rt_str_copy(base_459);
F->bt_460 = bt_460;
F->e_461 = e_461;
F->ro_462 = ro_462;
F->code_out_463 = code_out_463;
F->t_464 = t_464;
F->c_465 = c_465;
F->f_1017 = NULL;
F->d_1018 = NULL;
(*F->c_465) = F->up->no_cons_152;
if (((*(P112)rt_nil_check(F->bt_460)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_353(F->up, F->bt_460);
f_deref_450(F->up, F->base_459, F->bt_460, &F->d_1018);
(*F->ro_462) = 0;
if (rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_461)).name_)), rt_str("ALL", 3))) {
(*F->code_out_463) = F->d_1018;
(*F->t_464) = (*(P112)rt_nil_check(F->bt_460)).target_;
goto ret_;
}
f_select_on_466(F->up, (*(P130)rt_nil_check(F->d_1018)), (*(P112)rt_nil_check(F->bt_460)).target_, F->e_461, &(*F->ro_462), &(*F->code_out_463), &(*F->t_464), &(*F->c_465));
goto ret_;
}
if (((*(P112)rt_nil_check(F->bt_460)).kind_ == F->up->t_record_81)) {
F->f_1017 = (*(P112)rt_nil_check(F->bt_460)).fields_;
while ((F->f_1017 != NULL)) {
if (rt_str_eq((*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_1017)).name_)), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_461)).name_)))) {
(*F->c_465) = (*(P818)rt_nil_check(F->f_1017)).c_;
(*F->code_out_463) = f_mk_158(F->up, rt_str_cat(rt_str_catc(F->base_459, 46), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_461)).name_)))));
(*F->t_464) = (*(P818)rt_nil_check(F->f_1017)).t_;
goto ret_;
}
F->f_1017 = (*(P818)rt_nil_check(F->f_1017)).next_;
}
L_end_1019: ;
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_461)).line_, rt_str_cat(rt_str_cat(f_kind_name_321(F->up, F->bt_460), rt_str(" has no component ", 18)), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_461)).name_))));
}
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_461)).line_, rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_461)).name_))), rt_str(" here", 5)));
ret_:
  return;
}

static void f_index_on_475(struct f_greenc_1fr *up_, rstr base_467, P112 bt_468, P153 e_469, int *ro_470, int lv_471, P130 *code_out_472, P112 *t_473, P150 *c_474) {
  struct f_index_on_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_467 = rt_str_copy(base_467);
F->bt_468 = bt_468;
F->e_469 = e_469;
F->ro_470 = ro_470;
F->lv_471 = lv_471;
F->code_out_472 = code_out_472;
F->t_473 = t_473;
F->c_474 = c_474;
F->a_1020 = NULL;
F->a_1020 = (*(P153)rt_nil_check(F->e_469)).b_;
F->it_1021 = NULL;
F->i_1022 = NULL;
F->lo_1023 = NULL;
F->hi_1024 = NULL;
F->d_1025 = NULL;
(*F->c_474) = F->up->no_cons_152;
if (((*(P112)rt_nil_check(F->bt_468)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_353(F->up, F->bt_468);
f_deref_450(F->up, F->base_467, F->bt_468, &F->d_1025);
(*F->ro_470) = 0;
f_index_on_475(F->up, (*(P130)rt_nil_check(F->d_1025)), (*(P112)rt_nil_check(F->bt_468)).target_, F->e_469, &(*F->ro_470), F->lv_471, &(*F->code_out_472), &(*F->t_473), &(*F->c_474));
goto ret_;
}
if ((f_list_len_206(F->up, F->a_1020) != ((rt_int)1LL))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_469)).line_, rt_str("one index expected", 18));
}
if (((*(P112)rt_nil_check(F->bt_468)).kind_ == F->up->t_string_79)) {
if (((*(P153)rt_nil_check(F->a_1020)).kind_ == F->up->n_range_22)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->a_1020)).a_, F->up->ty_int_142, &F->it_1021, &F->lo_1023);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->a_1020)).b_, F->up->ty_int_142, &F->it_1021, &F->hi_1024);
(*F->code_out_472) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), F->base_467), rt_str(", ", 2)), (*(P130)rt_nil_check(F->lo_1023))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->hi_1024))), 41));
(*F->t_473) = F->up->ty_string_146;
(*F->ro_470) = 1;
goto ret_;
}
f_gexpr_486(F->up, F->a_1020, F->up->ty_int_142, &F->it_1021, &F->i_1022);
(*F->t_473) = F->up->ty_char_145;
if (F->lv_471) {
(*F->code_out_472) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), F->base_467), rt_str(", ", 2)), (*(P130)rt_nil_check(F->i_1022))), rt_str("))", 2)));
} else {
(*F->code_out_472) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), F->base_467), rt_str(", ", 2)), (*(P130)rt_nil_check(F->i_1022))), 41));
(*F->ro_470) = 1;
}
goto ret_;
}
if (((*(P112)rt_nil_check(F->bt_468)).kind_ == F->up->t_array_80)) {
f_gexpr_486(F->up, F->a_1020, (*(P112)rt_nil_check(F->bt_468)).idx_, &F->it_1021, &F->i_1022);
f_check_type_325(F->up, F->it_1021, (*(P112)rt_nil_check(F->bt_468)).idx_, (*(P153)rt_nil_check(F->e_469)).line_);
(*F->code_out_472) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->base_467, rt_str(".p[rt_index(", 12)), (*(P130)rt_nil_check(F->i_1022))), rt_str(", ", 2)), F->base_467), rt_str(".lo, ", 5)), F->base_467), rt_str(".hi) - ", 7)), F->base_467), rt_str(".lo]", 4)));
(*F->t_473) = (*(P112)rt_nil_check(F->bt_468)).elem_;
(*F->c_474) = (*(P112)rt_nil_check(F->bt_468)).elemcons_;
goto ret_;
}
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_469)).line_, rt_str("cannot index this", 17));
ret_:
  return;
}

static int f_is_char_lit_477(struct f_greenc_1fr *up_, P153 e_476) {
  struct f_is_char_lit_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_476 = e_476;
F->result_ = (((*(P153)rt_nil_check(F->e_476)).kind_ == F->up->n_str_11) && (((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_476)).name_))).len == ((rt_int)1LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static int f_is_enum_lit_479(struct f_greenc_1fr *up_, P153 e_478) {
  struct f_is_enum_lit_479fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_478 = e_478;
F->y_1026 = NULL;
if (((*(P153)rt_nil_check(F->e_478)).kind_ != F->up->n_name_13)) {
F->result_ = 0;
goto ret_;
}
F->y_1026 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_478)).name_)));
F->result_ = ((F->y_1026 != NULL) && ((*(P107)rt_nil_check(F->y_1026)).kind_ == F->up->y_enumlit_93));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static rstr f_c_string_481(struct f_greenc_1fr *up_, rstr s_480) {
  struct f_c_string_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_480 = rt_str_copy(s_480);
F->n_1027 = ((rt_int)0LL);
{ rt_int lo1030 = ((rt_int)1LL), hi1031 = (F->s_480).len;
for (rt_int it1032 = lo1030; it1032 <= hi1031; it1032++) {
F->i_1029 = it1032;
if ((((rt_str_get(F->s_480, F->i_1029) == 34) || (rt_str_get(F->s_480, F->i_1029) == 92)) || (rt_str_get(F->s_480, F->i_1029) == 63))) {
F->n_1027 = rt_add(F->n_1027, ((rt_int)1LL));
}
}
}
L_end_1028: ;
{
F->r_1034 = rt_str_new((rt_add(rt_add((F->s_480).len, F->n_1027), ((rt_int)2LL)) - ((rt_int)1LL) + 1));
F->j_1035 = ((rt_int)1LL);
(*rt_str_at(&F->r_1034, ((rt_int)1LL))) = 34;
{ rt_int lo1038 = ((rt_int)1LL), hi1039 = (F->s_480).len;
for (rt_int it1040 = lo1038; it1040 <= hi1039; it1040++) {
F->i_1037 = it1040;
F->j_1035 = rt_add(F->j_1035, ((rt_int)1LL));
if ((((rt_str_get(F->s_480, F->i_1037) == 34) || (rt_str_get(F->s_480, F->i_1037) == 92)) || (rt_str_get(F->s_480, F->i_1037) == 63))) {
(*rt_str_at(&F->r_1034, F->j_1035)) = 92;
F->j_1035 = rt_add(F->j_1035, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1034, F->j_1035)) = rt_str_get(F->s_480, F->i_1037);
}
}
L_end_1036: ;
(*rt_str_at(&F->r_1034, rt_add(F->j_1035, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1034;
goto ret_;
}
L_end_1033: ;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_gexpr_486(struct f_greenc_1fr *up_, P153 e_482, P112 want_483, P112 *t_484, P130 *r_485) {
  struct f_gexpr_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_482 = e_482;
F->want_483 = want_483;
F->t_484 = t_484;
F->r_485 = r_485;
F->y_1041 = NULL;
F->bt_1042 = NULL;
F->c_1043 = NULL;
F->base_1045 = NULL;
F->a_1046 = NULL;
F->nm_1047 = NULL;
(*F->t_484) = F->up->ty_int_142;
{ rt_int sel1048 = (*(P153)rt_nil_check(F->e_482)).kind_;
if (0 || sel1048 == ((rt_int)1LL)) {
if (((F->want_483 != NULL) && ((*(P112)rt_nil_check(F->want_483)).kind_ == F->up->t_float_77))) {
(*F->t_484) = F->up->ty_float_144;
(*F->r_485) = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_482)).name_)), rt_str(".0", 2)));
} else {
(*F->r_485) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), rt_str_of_int((*(P153)rt_nil_check(F->e_482)).ival_)), rt_str("LL)", 3)));
}
} else if (0 || sel1048 == ((rt_int)2LL)) {
(*F->t_484) = F->up->ty_float_144;
(*F->r_485) = (*(P153)rt_nil_check(F->e_482)).name_;
} else if (0 || sel1048 == ((rt_int)3LL)) {
if (((f_is_char_lit_477(F->up, F->e_482) && (F->want_483 != NULL)) && (((*(P112)rt_nil_check(F->want_483)).kind_ == F->up->t_char_85) || ((*(P112)rt_nil_check(F->want_483)).kind_ == F->up->t_enum_78)))) {
f_char_literal_491(F->up, F->e_482, F->want_483, &(*F->t_484), &(*F->r_485));
} else {
(*F->t_484) = F->up->ty_string_146;
(*F->r_485) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_481(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_482)).name_)))), rt_str(", ", 2)), rt_str_of_int(((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_482)).name_))).len)), 41));
}
} else if (0 || sel1048 == ((rt_int)4LL)) {
(*F->t_484) = F->up->ty_nil_148;
(*F->r_485) = f_mk_158(F->up, rt_str("NULL", 4));
} else if (0 || sel1048 == ((rt_int)15LL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_482)).a_, F->want_483, &(*F->t_484), &(*F->r_485));
} else if (0 || sel1048 == ((rt_int)5LL)) {
f_gen_name_496(F->up, F->e_482, F->want_483, &(*F->t_484), &(*F->r_485));
} else if (0 || sel1048 == ((rt_int)6LL)) {
f_gen_unop_501(F->up, F->e_482, F->want_483, &(*F->t_484), &(*F->r_485));
} else if (0 || sel1048 == ((rt_int)7LL)) {
f_gen_binop_506(F->up, F->e_482, F->want_483, &(*F->t_484), &(*F->r_485));
} else if (0 || sel1048 == ((rt_int)8LL)) {
if (((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_482)).a_)).kind_ == F->up->n_name_13)) {
F->y_1041 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_482)).a_)).name_)));
if (((F->y_1041 == NULL) || ((((*(P107)rt_nil_check(F->y_1041)).kind_ == F->up->y_func_89) || ((*(P107)rt_nil_check(F->y_1041)).kind_ == F->up->y_proc_90)) || ((*(P107)rt_nil_check(F->y_1041)).kind_ == F->up->y_entry_96)))) {
f_gcall_540(F->up, F->e_482, 0, &(*F->t_484), &(*F->r_485));
goto ret_;
}
if (((*(P107)rt_nil_check(F->y_1041)).kind_ == F->up->y_type_91)) {
f_conversion_511(F->up, F->e_482, F->y_1041, &(*F->t_484), &(*F->r_485));
goto ret_;
}
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_482)).a_, NULL, &F->bt_1042, &F->base_1045);
F->ro_1044 = 1;
f_index_on_475(F->up, (*(P130)rt_nil_check(F->base_1045)), F->bt_1042, F->e_482, &F->ro_1044, 0, &(*F->r_485), &(*F->t_484), &F->c_1043);
} else if (0 || sel1048 == ((rt_int)9LL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_482)).a_, NULL, &F->bt_1042, &F->base_1045);
F->ro_1044 = 1;
f_select_on_466(F->up, (*(P130)rt_nil_check(F->base_1045)), F->bt_1042, F->e_482, &F->ro_1044, &(*F->r_485), &(*F->t_484), &F->c_1043);
} else if (0 || sel1048 == ((rt_int)10LL)) {
f_gen_attr_516(F->up, F->e_482, F->want_483, &(*F->t_484), &(*F->r_485));
} else if (0 || sel1048 == ((rt_int)11LL)) {
f_allocator_526(F->up, F->e_482, F->want_483, &(*F->t_484), &(*F->r_485));
} else if (0 || sel1048 == ((rt_int)12LL)) {
f_aggregate_531(F->up, F->e_482, F->want_483, &(*F->t_484), &(*F->r_485));
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_482)).line_, rt_str("this expression is not handled", 30));
}
}
ret_:
  return;
}

static void f_char_literal_491(struct f_greenc_1fr *up_, P153 e_487, P112 want_488, P112 *t_489, P130 *r_490) {
  struct f_char_literal_491fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_487 = e_487;
F->want_488 = want_488;
F->t_489 = t_489;
F->r_490 = r_490;
if (((*(P112)rt_nil_check(F->want_488)).kind_ == F->up->t_char_85)) {
(*F->t_489) = F->up->ty_char_145;
(*F->r_490) = f_mk_158(F->up, rt_str_of_int(rt_sub(((rt_int)(rt_str_get((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_487)).name_)), ((rt_int)1LL))) + 1), ((rt_int)1LL))));
goto ret_;
}
F->i_1049 = f_lit_index_338(F->up, (*(P112)rt_nil_check(F->want_488)).lits_, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_487)).name_)));
if ((F->i_1049 < ((rt_int)0LL))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_487)).line_, rt_str_cat(rt_str_cat(rt_str_ccat(34, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_487)).name_))), rt_str("\" is not a literal of ", 22)), f_kind_name_321(F->up, F->want_488)));
}
(*F->t_489) = F->want_488;
(*F->r_490) = f_mk_158(F->up, rt_str_of_int(F->i_1049));
ret_:
  return;
}

static void f_gen_name_496(struct f_greenc_1fr *up_, P153 e_492, P112 want_493, P112 *t_494, P130 *r_495) {
  struct f_gen_name_496fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_492 = e_492;
F->want_493 = want_493;
F->t_494 = t_494;
F->r_495 = r_495;
F->y_1050 = NULL;
F->y_1050 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_492)).name_)));
F->z_1051 = NULL;
F->call_1052 = NULL;
if ((F->y_1050 == NULL)) {
if ((rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_492)).name_)), rt_str("PUT", 3)) || rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_492)).name_)), rt_str("GET", 3)))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_492)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_492)).name_)), rt_str(" needs an item", 14)));
}
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_492)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_492)).name_)), rt_str(" is not declared", 16)));
}
if ((((*(P107)rt_nil_check(F->y_1050)).kind_ == F->up->y_var_87) || ((*(P107)rt_nil_check(F->y_1050)).kind_ == F->up->y_const_88))) {
(*F->t_494) = (*(P107)rt_nil_check(F->y_1050)).t_;
f_access_of_441(F->up, F->y_1050, &(*F->r_495));
goto ret_;
}
if (((*(P107)rt_nil_check(F->y_1050)).kind_ == F->up->y_enumlit_93)) {
F->z_1051 = F->y_1050;
if ((F->want_493 != NULL)) {
while ((F->z_1051 != NULL)) {
if (((rt_str_eq((*(P130)rt_nil_check((*(P107)rt_nil_check(F->z_1051)).name_)), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_492)).name_))) && ((*(P107)rt_nil_check(F->z_1051)).kind_ == F->up->y_enumlit_93)) && f_same_305(F->up, (*(P107)rt_nil_check(F->z_1051)).t_, F->want_493))) {
goto L_end_1053;
}
F->z_1051 = (*(P107)rt_nil_check(F->z_1051)).chain_;
}
L_end_1053: ;
if ((F->z_1051 == NULL)) {
F->z_1051 = F->y_1050;
}
}
(*F->t_494) = (*(P107)rt_nil_check(F->z_1051)).t_;
(*F->r_495) = f_mk_158(F->up, rt_str_of_int((*(P107)rt_nil_check(F->z_1051)).mvalue_));
goto ret_;
}
if (((((*(P107)rt_nil_check(F->y_1050)).kind_ == F->up->y_func_89) || ((*(P107)rt_nil_check(F->y_1050)).kind_ == F->up->y_proc_90)) || ((*(P107)rt_nil_check(F->y_1050)).kind_ == F->up->y_entry_96))) {
F->call_1052 = f_nn_200(F->up, F->up->n_apply_16, (*(P153)rt_nil_check(F->e_492)).line_);
(*(P153)rt_nil_check(F->call_1052)).a_ = F->e_492;
f_gcall_540(F->up, F->call_1052, 0, &(*F->t_494), &(*F->r_495));
goto ret_;
}
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_492)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_492)).name_)), rt_str(" cannot be used as a value", 26)));
ret_:
  return;
}

static void f_gen_unop_501(struct f_greenc_1fr *up_, P153 e_497, P112 want_498, P112 *t_499, P130 *r_500) {
  struct f_gen_unop_501fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_497 = e_497;
F->want_498 = want_498;
F->t_499 = t_499;
F->r_500 = r_500;
F->a_1054 = NULL;
if (rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_497)).name_)), rt_str("NOT", 3))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_497)).a_, F->up->ty_bool_143, &(*F->t_499), &F->a_1054);
f_check_type_325(F->up, (*F->t_499), F->up->ty_bool_143, (*(P153)rt_nil_check(F->e_497)).line_);
(*F->r_500) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P130)rt_nil_check(F->a_1054))), 41));
goto ret_;
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_497)).a_, F->want_498, &(*F->t_499), &F->a_1054);
if (rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_497)).name_)), rt_str("+", 1))) {
(*F->r_500) = F->a_1054;
} else if (((*(P112)rt_nil_check((*F->t_499))).kind_ == F->up->t_float_77)) {
(*F->r_500) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("(-", 2), (*(P130)rt_nil_check(F->a_1054))), 41));
} else {
f_check_type_325(F->up, (*F->t_499), F->up->ty_int_142, (*(P153)rt_nil_check(F->e_497)).line_);
(*F->r_500) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_neg(", 7), (*(P130)rt_nil_check(F->a_1054))), 41));
}
ret_:
  return;
}

static void f_gen_binop_506(struct f_greenc_1fr *up_, P153 e_502, P112 want_503, P112 *t_504, P130 *r_505) {
  struct f_gen_binop_506fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_502 = e_502;
F->want_503 = want_503;
F->t_504 = t_504;
F->r_505 = r_505;
F->op_1055 = rt_str_copy((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_502)).name_)));
F->ta_1056 = NULL;
F->tb_1057 = NULL;
F->hint_1058 = NULL;
F->ct_1059 = NULL;
F->a_1060 = NULL;
F->b_1061 = NULL;
F->x_1062 = NULL;
F->dummy_1063 = NULL;
(*F->t_504) = F->up->ty_bool_143;
if (((rt_str_eq(F->op_1055, rt_str("AND", 3)) || rt_str_eq(F->op_1055, rt_str("OR", 2))) || rt_str_eq(F->op_1055, rt_str("XOR", 3)))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).a_, F->up->ty_bool_143, &F->ta_1056, &F->a_1060);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).b_, F->up->ty_bool_143, &F->tb_1057, &F->b_1061);
f_check_type_325(F->up, F->ta_1056, F->up->ty_bool_143, (*(P153)rt_nil_check(F->e_502)).line_);
f_check_type_325(F->up, F->tb_1057, F->up->ty_bool_143, (*(P153)rt_nil_check(F->e_502)).line_);
if (rt_str_eq(F->op_1055, rt_str("AND", 3))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->a_1060))), rt_str(" && ", 4)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("OR", 2))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->a_1060))), rt_str(" || ", 4)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->a_1060))), rt_str(" != ", 4)), (*(P130)rt_nil_check(F->b_1061))), 41));
}
goto ret_;
}
if (rt_str_eq(F->op_1055, rt_str("IN", 2))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).a_, NULL, &F->ta_1056, &F->a_1060);
f_gexpr_486(F->up, (*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_502)).b_)).a_, F->ta_1056, &F->tb_1057, &F->b_1061);
f_gexpr_486(F->up, (*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_502)).b_)).b_, F->ta_1056, &F->tb_1057, &F->x_1062);
(*F->r_505) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int m_ = ", 15), (*(P130)rt_nil_check(F->a_1060))), rt_str("; m_ >= ", 8)), (*(P130)rt_nil_check(F->b_1061))), rt_str(" && m_ <= ", 10)), (*(P130)rt_nil_check(F->x_1062))), rt_str("; })", 4)));
goto ret_;
}
if (rt_str_eq(F->op_1055, rt_str("&", 1))) {
if (f_is_char_lit_477(F->up, (*(P153)rt_nil_check(F->e_502)).a_)) {
F->hint_1058 = F->up->ty_char_145;
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).a_, F->hint_1058, &F->ta_1056, &F->a_1060);
F->hint_1058 = NULL;
if (f_is_char_lit_477(F->up, (*(P153)rt_nil_check(F->e_502)).b_)) {
F->hint_1058 = F->up->ty_char_145;
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).b_, F->hint_1058, &F->tb_1057, &F->b_1061);
(*F->t_504) = F->up->ty_string_146;
if ((((*(P112)rt_nil_check(F->ta_1056)).kind_ == F->up->t_string_79) && ((*(P112)rt_nil_check(F->tb_1057)).kind_ == F->up->t_string_79))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if ((((*(P112)rt_nil_check(F->ta_1056)).kind_ == F->up->t_string_79) && ((*(P112)rt_nil_check(F->tb_1057)).kind_ == F->up->t_char_85))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if ((((*(P112)rt_nil_check(F->ta_1056)).kind_ == F->up->t_char_85) && ((*(P112)rt_nil_check(F->tb_1057)).kind_ == F->up->t_string_79))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if ((((*(P112)rt_nil_check(F->ta_1056)).kind_ == F->up->t_char_85) && ((*(P112)rt_nil_check(F->tb_1057)).kind_ == F->up->t_char_85))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_502)).line_, rt_str("& catenates strings and characters", 34));
}
goto ret_;
}
if (f_is_rel_239(F->up, F->op_1055)) {
if ((((f_is_char_lit_477(F->up, (*(P153)rt_nil_check(F->e_502)).a_) || f_is_enum_lit_479(F->up, (*(P153)rt_nil_check(F->e_502)).a_)) || ((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_502)).a_)).kind_ == F->up->n_nil_12)) || ((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_502)).a_)).kind_ == F->up->n_int_9))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).b_, NULL, &F->hint_1058, &F->dummy_1063);
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).a_, F->hint_1058, &F->ta_1056, &F->a_1060);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).b_, F->ta_1056, &F->tb_1057, &F->b_1061);
F->ct_1059 = F->ta_1056;
if ((((*(P112)rt_nil_check(F->ta_1056)).kind_ != F->up->t_nil_84) && ((*(P112)rt_nil_check(F->tb_1057)).kind_ != F->up->t_nil_84))) {
f_check_type_325(F->up, F->tb_1057, F->ta_1056, (*(P153)rt_nil_check(F->e_502)).line_);
}
if (((*(P112)rt_nil_check(F->ta_1056)).kind_ == F->up->t_nil_84)) {
F->ct_1059 = F->tb_1057;
}
if (((*(P112)rt_nil_check(F->ct_1059)).kind_ == F->up->t_string_79)) {
if (rt_str_eq(F->op_1055, rt_str("=", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("/=", 2))) {
(*F->r_505) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), rt_str("))", 2)));
} else if (rt_str_eq(F->op_1055, rt_str("<", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("<=", 2))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str(">", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), (*(P130)rt_nil_check(F->b_1061))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->a_1060))), 41));
} else {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), (*(P130)rt_nil_check(F->b_1061))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->a_1060))), 41));
}
goto ret_;
}
if (f_composite_359(F->up, F->ct_1059)) {
f_eq_code_374(F->up, F->ct_1059, (*(P130)rt_nil_check(F->a_1060)), (*(P130)rt_nil_check(F->b_1061)), &F->x_1062);
if (rt_str_eq(F->op_1055, rt_str("=", 1))) {
(*F->r_505) = F->x_1062;
} else if (rt_str_eq(F->op_1055, rt_str("/=", 2))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("(!", 2), (*(P130)rt_nil_check(F->x_1062))), 41));
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_502)).line_, rt_str("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (rt_str_eq(F->op_1055, rt_str("=", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->a_1060))), rt_str(" == ", 4)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("/=", 2))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->a_1060))), rt_str(" != ", 4)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P130)rt_nil_check(F->a_1060))), 32), F->op_1055), 32), (*(P130)rt_nil_check(F->b_1061))), 41));
}
goto ret_;
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).a_, F->want_503, &F->ta_1056, &F->a_1060);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_502)).b_, F->ta_1056, &F->tb_1057, &F->b_1061);
if ((((*(P112)rt_nil_check(F->ta_1056)).kind_ == F->up->t_float_77) || ((*(P112)rt_nil_check(F->tb_1057)).kind_ == F->up->t_float_77))) {
(*F->t_504) = F->up->ty_float_144;
if (((rt_str_eq(F->op_1055, rt_str("+", 1)) || rt_str_eq(F->op_1055, rt_str("-", 1))) || rt_str_eq(F->op_1055, rt_str("*", 1)))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc(rt_str_ccat(40, (*(P130)rt_nil_check(F->a_1060))), 32), F->op_1055), 32), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("/", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("**", 2))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_502)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1055), rt_str(" is not defined for FLOAT", 25)));
}
goto ret_;
}
f_check_type_325(F->up, F->ta_1056, F->up->ty_int_142, (*(P153)rt_nil_check(F->e_502)).line_);
f_check_type_325(F->up, F->tb_1057, F->up->ty_int_142, (*(P153)rt_nil_check(F->e_502)).line_);
(*F->t_504) = F->up->ty_int_142;
if (rt_str_eq(F->op_1055, rt_str("+", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("-", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("*", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("/", 1))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_quot(", 8), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("MOD", 3))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_rem(", 7), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else if (rt_str_eq(F->op_1055, rt_str("**", 2))) {
(*F->r_505) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), (*(P130)rt_nil_check(F->a_1060))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->b_1061))), 41));
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_502)).line_, rt_str_cat(rt_str_cat(rt_str("operator ", 9), F->op_1055), rt_str(" is not defined for INTEGER", 27)));
}
ret_:
  return;
}

static void f_conversion_511(struct f_greenc_1fr *up_, P153 e_507, P107 y_508, P112 *t_509, P130 *r_510) {
  struct f_conversion_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_507 = e_507;
F->y_508 = y_508;
F->t_509 = t_509;
F->r_510 = r_510;
F->aty_1064 = NULL;
F->a_1065 = NULL;
if ((f_list_len_206(F->up, (*(P153)rt_nil_check(F->e_507)).b_) != ((rt_int)1LL))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_507)).line_, rt_str("a conversion takes one expression", 33));
}
(*F->t_509) = (*(P107)rt_nil_check(F->y_508)).t_;
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_507)).b_, (*F->t_509), &F->aty_1064, &F->a_1065);
if ((((*(P112)rt_nil_check((*F->t_509))).kind_ == F->up->t_int_75) && ((*(P112)rt_nil_check(F->aty_1064)).kind_ == F->up->t_float_77))) {
(*F->r_510) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)llround(", 17), (*(P130)rt_nil_check(F->a_1065))), rt_str("))", 2)));
} else if ((((*(P112)rt_nil_check((*F->t_509))).kind_ == F->up->t_float_77) && ((*(P112)rt_nil_check(F->aty_1064)).kind_ == F->up->t_int_75))) {
(*F->r_510) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str("((double)(", 10), (*(P130)rt_nil_check(F->a_1065))), rt_str("))", 2)));
} else {
f_check_type_325(F->up, F->aty_1064, (*F->t_509), (*(P153)rt_nil_check(F->e_507)).line_);
if (((((((*(P112)rt_nil_check((*F->t_509))).kind_ == F->up->t_int_75) || ((*(P112)rt_nil_check((*F->t_509))).kind_ == F->up->t_enum_78)) || ((*(P112)rt_nil_check((*F->t_509))).kind_ == F->up->t_char_85)) && ((*(P107)rt_nil_check(F->y_508)).c_ != NULL)) && ((*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_508)).c_)).lo_ != NULL))) {
(*F->r_510) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P130)rt_nil_check(F->a_1065))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_508)).c_)).lo_))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_508)).c_)).hi_))), 41));
} else {
(*F->r_510) = F->a_1065;
}
}
ret_:
  return;
}

static void f_gen_attr_516(struct f_greenc_1fr *up_, P153 e_512, P112 want_513, P112 *t_514, P130 *r_515) {
  struct f_gen_attr_516fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_512 = e_512;
F->want_513 = want_513;
F->t_514 = t_514;
F->r_515 = r_515;
F->a_1066 = rt_str_copy((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_512)).name_)));
F->y_1067 = NULL;
F->tt_1068 = NULL;
F->aty_1069 = NULL;
F->v_1070 = NULL;
F->d_1071 = NULL;
F->c_1072 = NULL;
if (((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_512)).a_)).kind_ == F->up->n_name_13)) {
F->y_1067 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_512)).a_)).name_)));
}
if (((F->y_1067 != NULL) && ((*(P107)rt_nil_check(F->y_1067)).kind_ == F->up->y_type_91))) {
F->tt_1068 = (*(P107)rt_nil_check(F->y_1067)).t_;
F->c_1072 = (*(P107)rt_nil_check(F->y_1067)).c_;
if (rt_str_eq(F->a_1066, rt_str("ORD", 3))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_512)).b_, F->tt_1068, &F->aty_1069, &F->v_1070);
f_check_type_325(F->up, F->aty_1069, F->tt_1068, (*(P153)rt_nil_check(F->e_512)).line_);
(*F->t_514) = F->up->ty_int_142;
(*F->r_515) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (*(P130)rt_nil_check(F->v_1070))), rt_str(") + 1)", 6)));
goto ret_;
} else if ((rt_str_eq(F->a_1066, rt_str("VAL", 3)) && ((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_int_75))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_512)).b_, F->up->ty_string_146, &F->aty_1069, &F->v_1070);
(*F->t_514) = F->up->ty_int_142;
(*F->r_515) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_int_of_str(", 14), (*(P130)rt_nil_check(F->v_1070))), 41));
goto ret_;
} else if (rt_str_eq(F->a_1066, rt_str("VAL", 3))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_512)).b_, F->up->ty_int_142, &F->aty_1069, &F->v_1070);
(*F->t_514) = F->tt_1068;
(*F->r_515) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P130)rt_nil_check(F->v_1070))), rt_str(" - 1, ", 6)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_1072)).lo_))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_1072)).hi_))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1066, rt_str("REP", 3)) && ((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_int_75))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_512)).b_, F->up->ty_int_142, &F->aty_1069, &F->v_1070);
(*F->t_514) = F->up->ty_string_146;
(*F->r_515) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_str_of_int(", 14), (*(P130)rt_nil_check(F->v_1070))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1066, rt_str("REP", 3)) && ((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_float_77))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_512)).b_, F->up->ty_float_144, &F->aty_1069, &F->v_1070);
(*F->t_514) = F->up->ty_string_146;
(*F->r_515) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_image_float(", 17), (*(P130)rt_nil_check(F->v_1070))), 41));
goto ret_;
} else if ((rt_str_eq(F->a_1066, rt_str("SUCC", 4)) || rt_str_eq(F->a_1066, rt_str("PRED", 4)))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_512)).b_, F->tt_1068, &F->aty_1069, &F->v_1070);
(*F->t_514) = F->tt_1068;
if (((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_int_75)) {
if (rt_str_eq(F->a_1066, rt_str("SUCC", 4))) {
(*F->r_515) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), (*(P130)rt_nil_check(F->v_1070))), rt_str(", 1)", 4)));
} else {
(*F->r_515) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), (*(P130)rt_nil_check(F->v_1070))), rt_str(", 1)", 4)));
}
} else if (rt_str_eq(F->a_1066, rt_str("SUCC", 4))) {
(*F->r_515) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P130)rt_nil_check(F->v_1070))), rt_str(" + 1, ", 6)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_1072)).lo_))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_1072)).hi_))), 41));
} else {
(*F->r_515) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P130)rt_nil_check(F->v_1070))), rt_str(" - 1, ", 6)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_1072)).lo_))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check(F->c_1072)).hi_))), 41));
}
goto ret_;
} else if ((rt_str_eq(F->a_1066, rt_str("FIRST", 5)) || rt_str_eq(F->a_1066, rt_str("LAST", 4)))) {
(*F->t_514) = F->tt_1068;
if (((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_array_80)) {
(*F->t_514) = (*(P112)rt_nil_check(F->tt_1068)).idx_;
}
if (((F->c_1072 != NULL) && ((*(P150)rt_nil_check(F->c_1072)).lo_ != NULL))) {
if (rt_str_eq(F->a_1066, rt_str("FIRST", 5))) {
(*F->r_515) = (*(P150)rt_nil_check(F->c_1072)).lo_;
} else {
(*F->r_515) = (*(P150)rt_nil_check(F->c_1072)).hi_;
}
} else if (((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_int_75)) {
if (rt_str_eq(F->a_1066, rt_str("FIRST", 5))) {
(*F->r_515) = f_mk_158(F->up, rt_str("INT64_MIN", 9));
} else {
(*F->r_515) = f_mk_158(F->up, rt_str("INT64_MAX", 9));
}
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_512)).line_, rt_str_cat(rt_str("this type has no ", 17), F->a_1066));
}
goto ret_;
}
f_other_attr_521(F->up, F->e_512, F->y_1067, &(*F->t_514), &(*F->r_515));
goto ret_;
}
if (((F->y_1067 != NULL) && (((*(P107)rt_nil_check(F->y_1067)).kind_ != F->up->y_var_87) && ((*(P107)rt_nil_check(F->y_1067)).kind_ != F->up->y_const_88)))) {
f_other_attr_521(F->up, F->e_512, F->y_1067, &(*F->t_514), &(*F->r_515));
goto ret_;
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_512)).a_, NULL, &F->tt_1068, &F->v_1070);
if (((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_ptr_82)) {
f_finish_ptr_353(F->up, F->tt_1068);
f_deref_450(F->up, (*(P130)rt_nil_check(F->v_1070)), F->tt_1068, &F->d_1071);
F->v_1070 = F->d_1071;
F->tt_1068 = (*(P112)rt_nil_check(F->tt_1068)).target_;
}
(*F->t_514) = F->up->ty_int_142;
if (((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_string_79)) {
if ((rt_str_eq(F->a_1066, rt_str("LENGTH", 6)) || rt_str_eq(F->a_1066, rt_str("LAST", 4)))) {
(*F->r_515) = f_mk_158(F->up, rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->v_1070))), rt_str(").len", 5)));
goto ret_;
} else if (rt_str_eq(F->a_1066, rt_str("FIRST", 5))) {
(*F->r_515) = f_mk_158(F->up, rt_str("((rt_int)1)", 11));
goto ret_;
}
} else if (((*(P112)rt_nil_check(F->tt_1068)).kind_ == F->up->t_array_80)) {
(*F->t_514) = (*(P112)rt_nil_check(F->tt_1068)).idx_;
if (rt_str_eq(F->a_1066, rt_str("FIRST", 5))) {
(*F->r_515) = f_mk_158(F->up, rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->v_1070))), rt_str(").lo", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1066, rt_str("LAST", 4))) {
(*F->r_515) = f_mk_158(F->up, rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->v_1070))), rt_str(").hi", 4)));
goto ret_;
} else if (rt_str_eq(F->a_1066, rt_str("LENGTH", 6))) {
(*F->t_514) = F->up->ty_int_142;
(*F->r_515) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("RT_CNT(", 7), (*(P130)rt_nil_check(F->v_1070))), 41));
goto ret_;
}
}
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_512)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), F->a_1066), rt_str(" is not handled here", 20)));
ret_:
  return;
}

static void f_other_attr_521(struct f_greenc_1fr *up_, P153 e_517, P107 y_518, P112 *t_519, P130 *r_520) {
  struct f_other_attr_521fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_517 = e_517;
F->y_518 = y_518;
F->t_519 = t_519;
F->r_520 = r_520;
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_517)).line_, rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_517)).name_))), rt_str(" is not handled here", 20)));
(*F->t_519) = F->up->ty_int_142;
(*F->r_520) = NULL;
ret_:
  return;
}

static void f_allocator_526(struct f_greenc_1fr *up_, P153 e_522, P112 want_523, P112 *t_524, P130 *r_525) {
  struct f_allocator_526fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_522 = e_522;
F->want_523 = want_523;
F->t_524 = t_524;
F->r_525 = r_525;
F->y_1074 = NULL;
F->y_1074 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_522)).name_)));
F->target_1075 = NULL;
F->vt_1076 = NULL;
F->ct_1077 = NULL;
F->pt_1078 = NULL;
F->cell_1079 = NULL;
F->v_1080 = NULL;
F->x_1081 = NULL;
if (((F->want_523 == NULL) || ((*(P112)rt_nil_check(F->want_523)).kind_ != F->up->t_ptr_82))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_522)).line_, rt_str("the access type of this allocator is not known here", 51));
}
if (((F->y_1074 == NULL) || ((*(P107)rt_nil_check(F->y_1074)).kind_ != F->up->y_type_91))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_522)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->e_522)).name_)), rt_str(" is not a type", 14)));
}
f_finish_ptr_353(F->up, F->want_523);
F->target_1075 = (*(P112)rt_nil_check(F->want_523)).target_;
f_check_type_325(F->up, (*(P107)rt_nil_check(F->y_1074)).t_, F->target_1075, (*(P153)rt_nil_check(F->e_522)).line_);
f_ctype_330(F->up, F->target_1075, &F->ct_1077);
f_ctype_330(F->up, F->want_523, &F->pt_1078);
f_new_name_161(F->up, rt_str("cell", 4), &F->cell_1079);
if (((*(P153)rt_nil_check(F->e_522)).a_ == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_522)).line_, rt_str("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if (((*(P153)rt_nil_check((*(P153)rt_nil_check(F->e_522)).a_)).kind_ == F->up->n_agg_20)) {
f_aggregate_531(F->up, (*(P153)rt_nil_check(F->e_522)).a_, F->target_1075, &F->vt_1076, &F->v_1080);
} else {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->e_522)).a_, F->target_1075, &F->vt_1076, &F->v_1080);
}
f_check_type_325(F->up, F->vt_1076, F->target_1075, (*(P153)rt_nil_check(F->e_522)).line_);
f_copy_code_369(F->up, F->target_1075, (*(P130)rt_nil_check(F->v_1080)), &F->x_1081);
(*F->t_524) = F->want_523;
(*F->r_525) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), (*(P130)rt_nil_check(F->ct_1077))), rt_str(" *", 2)), (*(P130)rt_nil_check(F->cell_1079))), rt_str(" = rt_alloc(sizeof(", 19)), (*(P130)rt_nil_check(F->ct_1077))), rt_str(")); *", 5)), (*(P130)rt_nil_check(F->cell_1079))), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->x_1081))), rt_str("; (", 3)), (*(P130)rt_nil_check(F->pt_1078))), 41), (*(P130)rt_nil_check(F->cell_1079))), rt_str("; })", 4)));
ret_:
  return;
}

static void f_aggregate_531(struct f_greenc_1fr *up_, P153 e_527, P112 want_528, P112 *t_529, P130 *r_530) {
  struct f_aggregate_531fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_527 = e_527;
F->want_528 = want_528;
F->t_529 = t_529;
F->r_530 = r_530;
F->it_1082 = NULL;
F->it_1082 = (*(P153)rt_nil_check(F->e_527)).a_;
F->f_1083 = NULL;
F->vt_1084 = NULL;
F->ct_1085 = NULL;
F->tmp_1086 = NULL;
F->v_1087 = NULL;
F->x_1088 = NULL;
F->parts_1089 = NULL;
F->et_1090 = NULL;
F->lo_1091 = NULL;
F->hi_1092 = NULL;
F->key_1093 = NULL;
F->lab_1095 = NULL;
if ((F->want_528 == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_527)).line_, rt_str("the type of this aggregate is not known here", 44));
}
(*F->t_529) = F->want_528;
f_ctype_330(F->up, F->want_528, &F->ct_1085);
f_new_name_161(F->up, rt_str("ag", 2), &F->tmp_1086);
if (((*(P112)rt_nil_check(F->want_528)).kind_ == F->up->t_record_81)) {
F->parts_1089 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P130)rt_nil_check(F->ct_1085))), 32), (*(P130)rt_nil_check(F->tmp_1086))), 59));
if ((f_list_len_206(F->up, F->it_1082) != f_field_count_327(F->up, F->want_528))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_527)).line_, rt_str_cat(rt_str("an aggregate gives every component of ", 38), f_kind_name_321(F->up, F->want_528)));
}
F->f_1083 = (*(P112)rt_nil_check(F->want_528)).fields_;
while ((F->it_1082 != NULL)) {
if (((*(P153)rt_nil_check(F->it_1082)).a_ != NULL)) {
F->f_1083 = (*(P112)rt_nil_check(F->want_528)).fields_;
while (((F->f_1083 != NULL) && (!(((*(P153)rt_nil_check((*(P153)rt_nil_check((*(P153)rt_nil_check(F->it_1082)).a_)).a_)).kind_ == F->up->n_name_13) && rt_str_eq((*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_1083)).name_)), (*(P130)rt_nil_check((*(P153)rt_nil_check((*(P153)rt_nil_check((*(P153)rt_nil_check(F->it_1082)).a_)).a_)).name_))))))) {
F->f_1083 = (*(P818)rt_nil_check(F->f_1083)).next_;
}
L_end_1097: ;
if ((F->f_1083 == NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_527)).line_, rt_str("no such component in the aggregate", 34));
}
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->it_1082)).b_, (*(P818)rt_nil_check(F->f_1083)).t_, &F->vt_1084, &F->v_1087);
f_check_type_325(F->up, F->vt_1084, (*(P818)rt_nil_check(F->f_1083)).t_, (*(P153)rt_nil_check(F->e_527)).line_);
f_copy_code_369(F->up, (*(P818)rt_nil_check(F->f_1083)).t_, (*(P130)rt_nil_check(F->v_1087)), &F->x_1088);
F->parts_1089 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->parts_1089)), 32), (*(P130)rt_nil_check(F->tmp_1086))), 46), f_c_field_171(F->up, (*(P130)rt_nil_check((*(P818)rt_nil_check(F->f_1083)).name_)))), rt_str(" = ", 3)), (*(P130)rt_nil_check(F->x_1088))), 59));
F->it_1082 = (*(P153)rt_nil_check(F->it_1082)).next_;
if ((F->f_1083 != NULL)) {
F->f_1083 = (*(P818)rt_nil_check(F->f_1083)).next_;
}
}
L_end_1096: ;
(*F->r_530) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->parts_1089)), 32), (*(P130)rt_nil_check(F->tmp_1086))), rt_str("; })", 4)));
goto ret_;
}
if (((*(P112)rt_nil_check(F->want_528)).kind_ != F->up->t_array_80)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_527)).line_, rt_str("an aggregate builds a record or an array", 40));
}
f_ctype_330(F->up, (*(P112)rt_nil_check(F->want_528)).elem_, &F->et_1090);
if (((*(P153)rt_nil_check(F->it_1082)).a_ == NULL)) {
if ((((*(P112)rt_nil_check(F->want_528)).tcons_ != NULL) && ((*(P150)rt_nil_check((*(P112)rt_nil_check(F->want_528)).tcons_)).lo_ != NULL))) {
F->lo_1091 = (*(P150)rt_nil_check((*(P112)rt_nil_check(F->want_528)).tcons_)).lo_;
} else {
F->lo_1091 = f_mk_158(F->up, rt_str("1", 1));
}
F->n_1094 = f_list_len_206(F->up, F->it_1082);
F->parts_1089 = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P130)rt_nil_check(F->ct_1085))), 32), (*(P130)rt_nil_check(F->tmp_1086))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo = ", 6)), (*(P130)rt_nil_check(F->lo_1091))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".hi = ", 6)), (*(P130)rt_nil_check(F->lo_1091))), rt_str(" + ", 3)), rt_str_of_int(rt_sub(F->n_1094, ((rt_int)1LL)))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo2 = ", 7)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".hi2 = 1; ", 10)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P130)rt_nil_check(F->et_1090))), rt_str(") * ", 4)), rt_str_of_int(rt_add(F->n_1094, ((rt_int)1LL)))), rt_str(");", 2)));
F->n_1094 = ((rt_int)0LL);
while ((F->it_1082 != NULL)) {
if (((*(P153)rt_nil_check(F->it_1082)).a_ != NULL)) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_527)).line_, rt_str("named associations follow the positional ones", 45));
}
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->it_1082)).b_, (*(P112)rt_nil_check(F->want_528)).elem_, &F->vt_1084, &F->v_1087);
f_check_type_325(F->up, F->vt_1084, (*(P112)rt_nil_check(F->want_528)).elem_, (*(P153)rt_nil_check(F->e_527)).line_);
f_copy_code_369(F->up, (*(P112)rt_nil_check(F->want_528)).elem_, (*(P130)rt_nil_check(F->v_1087)), &F->x_1088);
F->parts_1089 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->parts_1089)), 32), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".p[", 3)), rt_str_of_int(F->n_1094)), rt_str("] = ", 4)), (*(P130)rt_nil_check(F->x_1088))), 59));
F->n_1094 = rt_add(F->n_1094, ((rt_int)1LL));
F->it_1082 = (*(P153)rt_nil_check(F->it_1082)).next_;
}
L_end_1098: ;
(*F->r_530) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->parts_1089)), 32), (*(P130)rt_nil_check(F->tmp_1086))), rt_str("; })", 4)));
goto ret_;
}
if ((((*(P112)rt_nil_check(F->want_528)).tcons_ != NULL) && ((*(P150)rt_nil_check((*(P112)rt_nil_check(F->want_528)).tcons_)).hi_ != NULL))) {
F->lo_1091 = (*(P150)rt_nil_check((*(P112)rt_nil_check(F->want_528)).tcons_)).lo_;
F->hi_1092 = (*(P150)rt_nil_check((*(P112)rt_nil_check(F->want_528)).tcons_)).hi_;
} else if (((((*(P153)rt_nil_check(F->it_1082)).next_ == NULL) && ((*(P153)rt_nil_check((*(P153)rt_nil_check(F->it_1082)).a_)).flag_ != ((rt_int)1LL))) && ((*(P153)rt_nil_check((*(P153)rt_nil_check(F->it_1082)).a_)).b_ != NULL))) {
f_gexpr_486(F->up, (*(P153)rt_nil_check((*(P153)rt_nil_check(F->it_1082)).a_)).a_, (*(P112)rt_nil_check(F->want_528)).idx_, &F->vt_1084, &F->lo_1091);
f_gexpr_486(F->up, (*(P153)rt_nil_check((*(P153)rt_nil_check(F->it_1082)).a_)).b_, (*(P112)rt_nil_check(F->want_528)).idx_, &F->vt_1084, &F->hi_1092);
} else {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_527)).line_, rt_str("the bounds of this aggregate are not known", 42));
}
F->parts_1089 = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc(rt_str_cat(rt_str("({ ", 3), (*(P130)rt_nil_check(F->ct_1085))), 32), (*(P130)rt_nil_check(F->tmp_1086))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo = ", 6)), (*(P130)rt_nil_check(F->lo_1091))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".hi = ", 6)), (*(P130)rt_nil_check(F->hi_1092))), rt_str("; ", 2)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo2 = ", 7)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".hi2 = 1; ", 10)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".p = rt_alloc(sizeof(", 21)), (*(P130)rt_nil_check(F->et_1090))), rt_str(") * (size_t)(RT_CNT(", 20)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(") + 1));", 8)));
while ((F->it_1082 != NULL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->it_1082)).b_, (*(P112)rt_nil_check(F->want_528)).elem_, &F->vt_1084, &F->v_1087);
f_check_type_325(F->up, F->vt_1084, (*(P112)rt_nil_check(F->want_528)).elem_, (*(P153)rt_nil_check(F->e_527)).line_);
f_copy_code_369(F->up, (*(P112)rt_nil_check(F->want_528)).elem_, (*(P130)rt_nil_check(F->v_1087)), &F->x_1088);
F->lab_1095 = (*(P153)rt_nil_check(F->it_1082)).a_;
while ((F->lab_1095 != NULL)) {
if (((*(P153)rt_nil_check(F->lab_1095)).flag_ == ((rt_int)1LL))) {
F->parts_1089 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->parts_1089)), rt_str(" for (rt_int k_ = 0; k_ < RT_CNT(", 33)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str("); k_++) ", 9)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".p[k_] = ", 9)), (*(P130)rt_nil_check(F->x_1088))), 59));
} else if (((*(P153)rt_nil_check(F->lab_1095)).b_ != NULL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->lab_1095)).a_, (*(P112)rt_nil_check(F->want_528)).idx_, &F->vt_1084, &F->key_1093);
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->lab_1095)).b_, (*(P112)rt_nil_check(F->want_528)).idx_, &F->vt_1084, &F->hi_1092);
F->parts_1089 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P130)rt_nil_check(F->parts_1089)), rt_str(" for (rt_int k_ = ", 18)), (*(P130)rt_nil_check(F->key_1093))), rt_str("; k_ <= ", 8)), (*(P130)rt_nil_check(F->hi_1092))), rt_str("; k_++) ", 8)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".p[rt_index(k_, ", 16)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo, ", 5)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".hi) - ", 7)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo] = ", 7)), (*(P130)rt_nil_check(F->x_1088))), 59));
} else {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->lab_1095)).a_, (*(P112)rt_nil_check(F->want_528)).idx_, &F->vt_1084, &F->key_1093);
F->parts_1089 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->parts_1089)), 32), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".p[rt_index(", 12)), (*(P130)rt_nil_check(F->key_1093))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo, ", 5)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".hi) - ", 7)), (*(P130)rt_nil_check(F->tmp_1086))), rt_str(".lo] = ", 7)), (*(P130)rt_nil_check(F->x_1088))), 59));
}
F->lab_1095 = (*(P153)rt_nil_check(F->lab_1095)).next_;
}
L_end_1100: ;
F->it_1082 = (*(P153)rt_nil_check(F->it_1082)).next_;
}
L_end_1099: ;
(*F->r_530) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->parts_1089)), 32), (*(P130)rt_nil_check(F->tmp_1086))), rt_str("; })", 4)));
ret_:
  return;
}

static P153 f_actual_for_535(struct f_greenc_1fr *up_, P153 args_532, P807 pm_533, P807 first_534) {
  struct f_actual_for_535fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_532 = args_532;
F->pm_533 = pm_533;
F->first_534 = first_534;
F->a_1101 = NULL;
F->a_1101 = F->args_532;
F->p_1102 = NULL;
F->p_1102 = F->first_534;
while (((F->a_1101 != NULL) && ((*(P153)rt_nil_check(F->a_1101)).tag_ == NULL))) {
if ((F->p_1102 == F->pm_533)) {
F->result_ = F->a_1101;
goto ret_;
}
F->p_1102 = (*(P807)rt_nil_check(F->p_1102)).next_;
F->a_1101 = (*(P153)rt_nil_check(F->a_1101)).next_;
}
L_end_1103: ;
while ((F->a_1101 != NULL)) {
if ((((*(P153)rt_nil_check(F->a_1101)).tag_ != NULL) && rt_str_eq((*(P130)rt_nil_check((*(P153)rt_nil_check(F->a_1101)).tag_)), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_533)).name_))))) {
F->result_ = F->a_1101;
goto ret_;
}
F->a_1101 = (*(P153)rt_nil_check(F->a_1101)).next_;
}
L_end_1104: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:
  return F->result_;
}

static void f_gcall_540(struct f_greenc_1fr *up_, P153 e_536, int is_stmt_537, P112 *t_538, P130 *r_539) {
  struct f_gcall_540fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_536 = e_536;
F->is_stmt_537 = is_stmt_537;
F->t_538 = t_538;
F->r_539 = r_539;
F->fn_1105 = NULL;
F->fn_1105 = (*(P153)rt_nil_check(F->e_536)).a_;
F->y_1106 = NULL;
F->args_1107 = NULL;
F->lv_1108 = NULL;
F->v_1109 = NULL;
F->ct_1110 = NULL;
F->x_1111 = NULL;
F->a_1112 = NULL;
F->pm_1113 = NULL;
F->lt_1114 = NULL;
F->vt_1115 = NULL;
F->lc_1116 = NULL;
if (((*(P153)rt_nil_check(F->fn_1105)).kind_ != F->up->n_name_13)) {
f_other_call_551(F->up, F->e_536, F->is_stmt_537, &(*F->t_538), &(*F->r_539));
goto ret_;
}
F->y_1106 = f_lookup_298(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->fn_1105)).name_)));
if ((F->y_1106 == NULL)) {
f_builtin_558(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->fn_1105)).name_)), (*(P153)rt_nil_check(F->e_536)).b_, (*(P153)rt_nil_check(F->e_536)).line_, F->is_stmt_537, &(*F->t_538), &(*F->r_539));
goto ret_;
}
if ((((*(P107)rt_nil_check(F->y_1106)).kind_ == F->up->y_func_89) || ((*(P107)rt_nil_check(F->y_1106)).kind_ == F->up->y_proc_90))) {
f_resolve_overload_546(F->up, (*(P130)rt_nil_check((*(P153)rt_nil_check(F->fn_1105)).name_)), (*(P153)rt_nil_check(F->e_536)).b_, F->is_stmt_537, (*(P153)rt_nil_check(F->e_536)).line_, &F->y_1106);
}
if (((*(P107)rt_nil_check(F->y_1106)).kind_ == F->up->y_entry_96)) {
f_other_call_551(F->up, F->e_536, F->is_stmt_537, &(*F->t_538), &(*F->r_539));
goto ret_;
}
if ((((*(P107)rt_nil_check(F->y_1106)).kind_ != F->up->y_func_89) && ((*(P107)rt_nil_check(F->y_1106)).kind_ != F->up->y_proc_90))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_536)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->fn_1105)).name_)), rt_str(" cannot be called", 17)));
}
if ((F->is_stmt_537 && ((*(P112)rt_nil_check((*(P107)rt_nil_check(F->y_1106)).result_)).kind_ != F->up->t_void_83))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_536)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->fn_1105)).name_)), rt_str(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_537) && ((*(P112)rt_nil_check((*(P107)rt_nil_check(F->y_1106)).result_)).kind_ == F->up->t_void_83))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_536)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->fn_1105)).name_)), rt_str(" is a procedure, not a function", 31)));
}
F->args_1107 = f_mk_158(F->up, rt_str("", 0));
if (((*(P107)rt_nil_check(F->y_1106)).level_ > ((rt_int)0LL))) {
f_link_to_444(F->up, (*(P107)rt_nil_check(F->y_1106)).level_, &F->args_1107);
}
F->pm_1113 = (*(P107)rt_nil_check(F->y_1106)).params_;
while ((F->pm_1113 != NULL)) {
F->a_1112 = f_actual_for_535(F->up, (*(P153)rt_nil_check(F->e_536)).b_, F->pm_1113, (*(P107)rt_nil_check(F->y_1106)).params_);
if ((((*(P130)rt_nil_check(F->args_1107))).len > ((rt_int)0LL))) {
F->args_1107 = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check(F->args_1107)), rt_str(", ", 2)));
}
if ((F->a_1112 == NULL)) {
if ((((*(P807)rt_nil_check(F->pm_1113)).dflt_ == NULL) || ((*(P807)rt_nil_check(F->pm_1113)).mode_ != F->up->m_in_72))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_536)).line_, rt_str_cat(rt_str("no actual parameter for ", 24), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).name_))));
}
f_gexpr_486(F->up, (*(P807)rt_nil_check(F->pm_1113)).dflt_, (*(P807)rt_nil_check(F->pm_1113)).t_, &F->vt_1115, &F->v_1109);
F->args_1107 = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check(F->args_1107)), (*(P130)rt_nil_check(F->v_1109))));
} else {
if (((((*(P153)rt_nil_check(F->a_1112)).flag_ != ((rt_int)0LL)) && ((*(P153)rt_nil_check(F->a_1112)).flag_ != ((rt_int)4LL))) && ((*(P153)rt_nil_check(F->a_1112)).flag_ != (*(P807)rt_nil_check(F->pm_1113)).mode_))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_536)).line_, rt_str_cat(rt_str_cat(rt_str("the association of ", 19), (*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).name_))), rt_str(" does not match its mode", 24)));
}
if (((*(P807)rt_nil_check(F->pm_1113)).mode_ == F->up->m_in_72)) {
f_gexpr_486(F->up, F->a_1112, (*(P807)rt_nil_check(F->pm_1113)).t_, &F->vt_1115, &F->v_1109);
f_check_type_325(F->up, F->vt_1115, (*(P807)rt_nil_check(F->pm_1113)).t_, (*(P153)rt_nil_check(F->e_536)).line_);
if (((((*(P807)rt_nil_check(F->pm_1113)).c_ != NULL) && ((*(P150)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).c_)).lo_ != NULL)) && (((*(P112)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).t_)).kind_ == F->up->t_int_75) || ((*(P112)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).t_)).kind_ == F->up->t_enum_78)))) {
F->v_1109 = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*(P130)rt_nil_check(F->v_1109))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).c_)).lo_))), rt_str(", ", 2)), (*(P130)rt_nil_check((*(P150)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).c_)).hi_))), 41));
}
F->args_1107 = f_mk_158(F->up, rt_str_cat((*(P130)rt_nil_check(F->args_1107)), (*(P130)rt_nil_check(F->v_1109))));
} else {
f_lvalue_458(F->up, F->a_1112, &F->lv_1108, &F->lt_1114, &F->lc_1116, &F->ro_1117);
if (F->ro_1117) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_536)).line_, rt_str_cat((*(P130)rt_nil_check((*(P807)rt_nil_check(F->pm_1113)).name_)), rt_str(" needs a variable", 17)));
}
f_check_type_325(F->up, F->lt_1114, (*(P807)rt_nil_check(F->pm_1113)).t_, (*(P153)rt_nil_check(F->e_536)).line_);
F->args_1107 = f_mk_158(F->up, rt_str_cat(rt_str_catc((*(P130)rt_nil_check(F->args_1107)), 38), (*(P130)rt_nil_check(F->lv_1108))));
}
}
F->pm_1113 = (*(P807)rt_nil_check(F->pm_1113)).next_;
}
L_end_1118: ;
if (((f_list_len_206(F->up, (*(P153)rt_nil_check(F->e_536)).b_) > ((rt_int)0LL)) && ((*(P107)rt_nil_check(F->y_1106)).params_ == NULL))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_536)).line_, rt_str_cat((*(P130)rt_nil_check((*(P153)rt_nil_check(F->fn_1105)).name_)), rt_str(" takes no parameters", 20)));
}
(*F->t_538) = (*(P107)rt_nil_check(F->y_1106)).result_;
(*F->r_539) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_catc((*(P130)rt_nil_check((*(P107)rt_nil_check(F->y_1106)).cname_)), 40), (*(P130)rt_nil_check(F->args_1107))), 41));
ret_:
  return;
}

static void f_resolve_overload_546(struct f_greenc_1fr *up_, rstr name_541, P153 args_542, int is_stmt_543, rt_int line_544, P107 *y_545) {
  struct f_resolve_overload_546fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_541 = rt_str_copy(name_541);
F->args_542 = args_542;
F->is_stmt_543 = is_stmt_543;
F->line_544 = line_544;
F->y_545 = y_545;
ret_:
  return;
}

static void f_other_call_551(struct f_greenc_1fr *up_, P153 e_547, int is_stmt_548, P112 *t_549, P130 *r_550) {
  struct f_other_call_551fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_547 = e_547;
F->is_stmt_548 = is_stmt_548;
F->t_549 = t_549;
F->r_550 = r_550;
f_fail_175(F->up, (*(P153)rt_nil_check(F->e_547)).line_, rt_str("this call is not handled yet", 28));
(*F->t_549) = F->up->ty_void_147;
(*F->r_550) = NULL;
ret_:
  return;
}

static void f_builtin_558(struct f_greenc_1fr *up_, rstr name_552, P153 args_553, rt_int line_554, int is_stmt_555, P112 *t_556, P130 *r_557) {
  struct f_builtin_558fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_552 = rt_str_copy(name_552);
F->args_553 = args_553;
F->line_554 = line_554;
F->is_stmt_555 = is_stmt_555;
F->t_556 = t_556;
F->r_557 = r_557;
F->aty_1119 = NULL;
F->lt_1120 = NULL;
F->a_1121 = NULL;
F->w_1122 = NULL;
F->lv_1123 = NULL;
F->lc_1124 = NULL;
(*F->t_556) = F->up->ty_void_147;
if (rt_str_eq(F->name_552, rt_str("PUT", 3))) {
if ((F->args_553 == NULL)) {
f_fail_175(F->up, F->line_554, rt_str("PUT needs an item", 17));
}
f_gexpr_486(F->up, F->args_553, NULL, &F->aty_1119, &F->a_1121);
F->w_1122 = f_mk_158(F->up, rt_str("0", 1));
if (((*(P153)rt_nil_check(F->args_553)).next_ != NULL)) {
f_gexpr_486(F->up, (*(P153)rt_nil_check(F->args_553)).next_, F->up->ty_int_142, &F->lt_1120, &F->w_1122);
}
if (((*(P112)rt_nil_check(F->aty_1119)).kind_ == F->up->t_string_79)) {
(*F->r_557) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_put(", 9), (*(P130)rt_nil_check(F->a_1121))), 41));
} else if (((*(P112)rt_nil_check(F->aty_1119)).kind_ == F->up->t_char_85)) {
(*F->r_557) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_g_putc(", 10), (*(P130)rt_nil_check(F->a_1121))), 41));
} else if (((*(P112)rt_nil_check(F->aty_1119)).kind_ == F->up->t_int_75)) {
(*F->r_557) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_int(", 13), (*(P130)rt_nil_check(F->a_1121))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->w_1122))), 41));
} else if (((*(P112)rt_nil_check(F->aty_1119)).kind_ == F->up->t_bool_76)) {
(*F->r_557) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_bool(", 14), (*(P130)rt_nil_check(F->a_1121))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->w_1122))), 41));
} else if (((*(P112)rt_nil_check(F->aty_1119)).kind_ == F->up->t_float_77)) {
(*F->r_557) = f_mk_158(F->up, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_g_put_float(", 15), (*(P130)rt_nil_check(F->a_1121))), rt_str(", ", 2)), (*(P130)rt_nil_check(F->w_1122))), rt_str(", 0)", 4)));
} else {
f_fail_175(F->up, F->line_554, rt_str("PUT of this type is not handled", 31));
}
} else if (rt_str_eq(F->name_552, rt_str("GET", 3))) {
f_lvalue_458(F->up, F->args_553, &F->lv_1123, &F->lt_1120, &F->lc_1124, &F->ro_1125);
if (((*(P112)rt_nil_check(F->lt_1120)).kind_ != F->up->t_char_85)) {
f_fail_175(F->up, F->line_554, rt_str("GET reads a CHARACTER here", 26));
}
(*F->r_557) = f_mk_158(F->up, rt_str_cat(rt_str_ccat(40, (*(P130)rt_nil_check(F->lv_1123))), rt_str(" = rt_g_getc())", 15)));
} else if (rt_str_eq(F->name_552, rt_str("ABS", 3))) {
f_gexpr_486(F->up, F->args_553, NULL, &(*F->t_556), &F->a_1121);
if (((*(P112)rt_nil_check((*F->t_556))).kind_ == F->up->t_int_75)) {
(*F->r_557) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("rt_abs(", 7), (*(P130)rt_nil_check(F->a_1121))), 41));
} else {
(*F->r_557) = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str("fabs(", 5), (*(P130)rt_nil_check(F->a_1121))), 41));
}
} else {
f_task_builtin_564(F->up, F->name_552, F->args_553, F->line_554, &(*F->t_556), &(*F->r_557));
}
ret_:
  return;
}

static void f_task_builtin_564(struct f_greenc_1fr *up_, rstr name_559, P153 args_560, rt_int line_561, P112 *t_562, P130 *r_563) {
  struct f_task_builtin_564fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_559 = rt_str_copy(name_559);
F->args_560 = args_560;
F->line_561 = line_561;
F->t_562 = t_562;
F->r_563 = r_563;
f_fail_175(F->up, F->line_561, rt_str_cat(F->name_559, rt_str(" is not declared", 16)));
(*F->t_562) = F->up->ty_void_147;
(*F->r_563) = NULL;
ret_:
  return;
}

static void f_predef_type_569(struct f_greenc_1fr *up_, rstr name_565, P112 t_566, rstr lo_567, rstr hi_568) {
  struct f_predef_type_569fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_565 = rt_str_copy(name_565);
F->t_566 = t_566;
F->lo_567 = rt_str_copy(lo_567);
F->hi_568 = rt_str_copy(hi_568);
F->y_1126 = NULL;
F->y_1126 = f_new_sym_316(F->up, F->up->y_type_91, f_mk_158(F->up, F->name_565));
(*(P107)rt_nil_check(F->y_1126)).t_ = F->t_566;
if (((F->lo_567).len > ((rt_int)0LL))) {
(*(P107)rt_nil_check(F->y_1126)).c_ = f_new_cons_319(F->up);
(*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_1126)).c_)).lo_ = f_mk_158(F->up, F->lo_567);
(*(P150)rt_nil_check((*(P107)rt_nil_check(F->y_1126)).c_)).hi_ = f_mk_158(F->up, F->hi_568);
}
f_define_311(F->up, F->y_1126, ((rt_int)0LL));
ret_:
  return;
}

static void f_predef_const_573(struct f_greenc_1fr *up_, rstr name_570, P112 t_571, rstr code_text_572) {
  struct f_predef_const_573fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_570 = rt_str_copy(name_570);
F->t_571 = t_571;
F->code_text_572 = rt_str_copy(code_text_572);
F->y_1127 = NULL;
F->y_1127 = f_new_sym_316(F->up, F->up->y_const_88, f_mk_158(F->up, F->name_570));
(*(P107)rt_nil_check(F->y_1127)).t_ = F->t_571;
(*(P107)rt_nil_check(F->y_1127)).ro_ = 1;
(*(P107)rt_nil_check(F->y_1127)).access_path_ = f_mk_158(F->up, F->code_text_572);
f_define_311(F->up, F->y_1127, ((rt_int)0LL));
ret_:
  return;
}

static void f_predef_exc_575(struct f_greenc_1fr *up_, rstr name_574) {
  struct f_predef_exc_575fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_574 = rt_str_copy(name_574);
F->y_1128 = NULL;
F->y_1128 = f_new_sym_316(F->up, F->up->y_exc_92, f_mk_158(F->up, F->name_574));
(*(P107)rt_nil_check(F->y_1128)).cname_ = f_mk_158(F->up, rt_str_catc(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_172(F->up)), F->name_574), f_q_172(F->up)), 41));
f_define_311(F->up, F->y_1128, ((rt_int)0LL));
ret_:
  return;
}

static void f_predef_lit_579(struct f_greenc_1fr *up_, rstr name_576, P112 t_577, rt_int v_578) {
  struct f_predef_lit_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_576 = rt_str_copy(name_576);
F->t_577 = t_577;
F->v_578 = v_578;
F->y_1129 = NULL;
F->y_1129 = f_new_sym_316(F->up, F->up->y_enumlit_93, f_mk_158(F->up, F->name_576));
(*(P107)rt_nil_check(F->y_1129)).t_ = F->t_577;
(*(P107)rt_nil_check(F->y_1129)).mvalue_ = F->v_578;
(*(P107)rt_nil_check(F->y_1129)).hasmv_ = 1;
f_define_311(F->up, F->y_1129, ((rt_int)0LL));
ret_:
  return;
}

static void f_predefine_580(struct f_greenc_1fr *up_) {
  struct f_predefine_580fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_1130 = rt_str_copy(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_str("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_1131 = ((rt_int)1LL);
F->code_no_1132 = ((rt_int)0LL);
f_predef_type_569(F->up, rt_str("INTEGER", 7), F->up->ty_int_142, rt_str("", 0), rt_str("", 0));
f_predef_type_569(F->up, rt_str("SHORT_INTEGER", 13), F->up->ty_int_142, rt_str("", 0), rt_str("", 0));
f_predef_type_569(F->up, rt_str("LONG_INTEGER", 12), F->up->ty_int_142, rt_str("", 0), rt_str("", 0));
f_predef_type_569(F->up, rt_str("NATURAL", 7), F->up->ty_int_142, rt_str("1", 1), rt_str("INT64_MAX", 9));
f_predef_type_569(F->up, rt_str("PRIORITY", 8), F->up->ty_int_142, rt_str("0", 1), rt_str("255", 3));
f_predef_type_569(F->up, rt_str("BOOLEAN", 7), F->up->ty_bool_143, rt_str("0", 1), rt_str("1", 1));
f_predef_type_569(F->up, rt_str("CHARACTER", 9), F->up->ty_char_145, rt_str("0", 1), rt_str("127", 3));
f_predef_type_569(F->up, rt_str("STRING", 6), F->up->ty_string_146, rt_str("", 0), rt_str("", 0));
f_predef_type_569(F->up, rt_str("FLOAT", 5), F->up->ty_float_144, rt_str("", 0), rt_str("", 0));
f_predef_type_569(F->up, rt_str("SHORT_FLOAT", 11), F->up->ty_float_144, rt_str("", 0), rt_str("", 0));
f_predef_type_569(F->up, rt_str("LONG_FLOAT", 10), F->up->ty_float_144, rt_str("", 0), rt_str("", 0));
f_predef_type_569(F->up, rt_str("TIME", 4), F->up->ty_float_144, rt_str("", 0), rt_str("", 0));
f_predef_lit_579(F->up, rt_str("FALSE", 5), F->up->ty_bool_143, ((rt_int)0LL));
f_predef_lit_579(F->up, rt_str("TRUE", 4), F->up->ty_bool_143, ((rt_int)1LL));
{ rt_int lo1135 = ((rt_int)1LL), hi1136 = (F->control_1130).len;
for (rt_int it1137 = lo1135; it1137 <= hi1136; it1137++) {
F->i_1134 = it1137;
if ((rt_str_get(F->control_1130, F->i_1134) == 32)) {
f_predef_const_573(F->up, rt_str_slice(F->control_1130, F->start_1131, rt_sub(F->i_1134, ((rt_int)1LL))), F->up->ty_char_145, rt_str_of_int(F->code_no_1132));
F->code_no_1132 = rt_add(F->code_no_1132, ((rt_int)1LL));
F->start_1131 = rt_add(F->i_1134, ((rt_int)1LL));
}
}
}
L_end_1133: ;
f_predef_const_573(F->up, rt_str("DEL", 3), F->up->ty_char_145, rt_str("127", 3));
f_predef_const_573(F->up, rt_str("EXCLAM", 6), F->up->ty_char_145, rt_str("33", 2));
f_predef_const_573(F->up, rt_str("DOLLAR", 6), F->up->ty_char_145, rt_str("36", 2));
f_predef_const_573(F->up, rt_str("QUESTION", 8), F->up->ty_char_145, rt_str("63", 2));
f_predef_const_573(F->up, rt_str("AT_SIGN", 7), F->up->ty_char_145, rt_str("64", 2));
f_predef_const_573(F->up, rt_str("L_BRACKET", 9), F->up->ty_char_145, rt_str("91", 2));
f_predef_const_573(F->up, rt_str("BACK_SLASH", 10), F->up->ty_char_145, rt_str("92", 2));
f_predef_const_573(F->up, rt_str("R_BRACKET", 9), F->up->ty_char_145, rt_str("93", 2));
f_predef_const_573(F->up, rt_str("CIRCUMFLEX", 10), F->up->ty_char_145, rt_str("94", 2));
f_predef_const_573(F->up, rt_str("GRAVE", 5), F->up->ty_char_145, rt_str("96", 2));
f_predef_const_573(F->up, rt_str("L_BRACE", 7), F->up->ty_char_145, rt_str("123", 3));
f_predef_const_573(F->up, rt_str("R_BRACE", 7), F->up->ty_char_145, rt_str("125", 3));
f_predef_const_573(F->up, rt_str("TILDE", 5), F->up->ty_char_145, rt_str("126", 3));
{ rt_int lo1140 = ((rt_int)0LL), hi1141 = ((rt_int)25LL);
for (rt_int it1142 = lo1140; it1142 <= hi1141; it1142++) {
F->i_1139 = it1142;
f_predef_const_573(F->up, rt_str_catc(rt_str("LC_", 3), rt_range(rt_add(((rt_int)66LL), F->i_1139) - 1, 0, 127)), F->up->ty_char_145, rt_str_of_int(rt_add(((rt_int)97LL), F->i_1139)));
}
}
L_end_1138: ;
f_predef_const_573(F->up, rt_str("NEWLINE", 7), F->up->ty_string_146, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_q_172(F->up)), rt_str("\\n", 2)), f_q_172(F->up)), rt_str(", 1)", 4)));
f_predef_const_573(F->up, rt_str("SECONDS", 7), F->up->ty_float_144, rt_str("((double)RT_SECONDS)", 20));
f_predef_exc_575(F->up, rt_str("ACCESS_ERROR", 12));
f_predef_exc_575(F->up, rt_str("ASSERT_ERROR", 12));
f_predef_exc_575(F->up, rt_str("DISCRIMINANT_ERROR", 18));
f_predef_exc_575(F->up, rt_str("DIVIDE_ERROR", 12));
f_predef_exc_575(F->up, rt_str("FAILURE", 7));
f_predef_exc_575(F->up, rt_str("INDEX_ERROR", 11));
f_predef_exc_575(F->up, rt_str("INITIATE_ERROR", 14));
f_predef_exc_575(F->up, rt_str("NO_VALUE_ERROR", 14));
f_predef_exc_575(F->up, rt_str("OVERFLOW", 8));
f_predef_exc_575(F->up, rt_str("OVERLAP_ERROR", 13));
f_predef_exc_575(F->up, rt_str("RANGE_ERROR", 11));
f_predef_exc_575(F->up, rt_str("SELECT_ERROR", 12));
f_predef_exc_575(F->up, rt_str("STORAGE_OVERFLOW", 16));
f_predef_exc_575(F->up, rt_str("TASKING_ERROR", 13));
f_predef_exc_575(F->up, rt_str("UNDERFLOW", 9));
f_predef_exc_575(F->up, rt_str("END_OF_FILE", 11));
ret_:
  return;
}

static void f_translate_582(struct f_greenc_1fr *up_, P153 u_581) {
  struct f_translate_582fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_581 = u_581;
F->p_1143 = NULL;
F->p_1143 = F->u_581;
F->y_1144 = NULL;
f_open_scope_312(F->up);
while ((F->p_1143 != NULL)) {
if (((*(P153)rt_nil_check(F->p_1143)).next_ == NULL)) {
if ((((*(P153)rt_nil_check(F->p_1143)).kind_ != F->up->n_proc_46) || ((*(P153)rt_nil_check(F->p_1143)).a_ != NULL))) {
f_fail_175(F->up, (*(P153)rt_nil_check(F->p_1143)).line_, rt_str("the main program is a procedure without parameters", 50));
}
f_build_subprogram_392(F->up, F->p_1143, &F->y_1144);
f_define_311(F->up, F->y_1144, (*(P153)rt_nil_check(F->p_1143)).line_);
f_subprogram_body_401(F->up, F->p_1143, F->y_1144);
F->up->main_name_156 = (*(P107)rt_nil_check(F->y_1144)).cname_;
} else {
f_decl_element_396(F->up, F->p_1143);
}
F->p_1143 = (*(P153)rt_nil_check(F->p_1143)).next_;
}
L_end_1145: ;
ret_:
  return;
}

static void f_print_program_583(struct f_greenc_1fr *up_) {
  struct f_print_program_583fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_378(F->up);
rt_g_put(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_172(F->up)), rt_str("paleo.h", 7)), f_q_172(F->up)));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("#include <math.h>", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_183(F->up, F->up->out_types_118);
f_print_buffer_183(F->up, F->up->out_frames_119);
f_print_buffer_183(F->up, F->up->out_helpers_120);
f_print_buffer_183(F->up, F->up->out_protos_121);
f_print_buffer_183(F->up, F->up->out_globals_122);
f_print_buffer_183(F->up, F->up->out_funcs_123);
rt_g_put(rt_str("int main(int argc, char **argv) {", 33));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_init(argc, argv);", 22));
rt_g_put(rt_str("\n", 1));
rt_g_put(rt_str("  rt_set_lang(1);", 17));
rt_g_put(rt_str("\n", 1));
f_print_buffer_183(F->up, F->up->out_excs_125);
f_print_buffer_183(F->up, F->up->out_init_124);
rt_g_put(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P130)rt_nil_check(F->up->main_name_156))), rt_str("();", 3)));
rt_g_put(rt_str("\n", 1));
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
F->y_var_87 = ((rt_int)1LL);
F->y_const_88 = ((rt_int)2LL);
F->y_func_89 = ((rt_int)3LL);
F->y_proc_90 = ((rt_int)4LL);
F->y_type_91 = ((rt_int)5LL);
F->y_exc_92 = ((rt_int)6LL);
F->y_enumlit_93 = ((rt_int)7LL);
F->y_package_94 = ((rt_int)8LL);
F->y_task_95 = ((rt_int)9LL);
F->y_entry_96 = ((rt_int)10LL);
F->y_generic_97 = ((rt_int)11LL);
F->toks_102.lo = ((rt_int)1LL); F->toks_102.hi = ((rt_int)1000000LL); F->toks_102.lo2 = 1; F->toks_102.hi2 = 1;
F->toks_102.p = rt_alloc(sizeof(P100) * (size_t)RT_CNT(F->toks_102));
F->ntoks_103 = ((rt_int)0LL);
F->tpos_104 = ((rt_int)1LL);
F->src_line_105 = ((rt_int)0LL);
F->table_109.lo = ((rt_int)0LL); F->table_109.hi = ((rt_int)4092LL); F->table_109.lo2 = 1; F->table_109.hi2 = 1;
F->table_109.p = rt_alloc(sizeof(P107) * (size_t)RT_CNT(F->table_109));
F->depth_110 = ((rt_int)0LL);
F->scope_stack_111 = NULL;
F->all_types_114 = NULL;
F->serial_115 = ((rt_int)0LL);
F->out_types_118 = NULL;
F->out_frames_119 = NULL;
F->out_helpers_120 = NULL;
F->out_protos_121 = NULL;
F->out_globals_122 = NULL;
F->out_funcs_123 = NULL;
F->out_init_124 = NULL;
F->out_excs_125 = NULL;
F->code_126 = NULL;
F->fields_buf_127 = NULL;
F->in_func_128 = 0;
F->cur_level_129 = ((rt_int)0LL);
F->st_field_131 = NULL;
F->func_sym_132 = NULL;
F->exits_135 = NULL;
F->frames_136 = ((rt_int)0LL);
F->handlers_139 = NULL;
F->cleanups_140 = NULL;
F->trial_141 = ((rt_int)0LL);
F->ty_int_142 = NULL;
F->ty_bool_143 = NULL;
F->ty_float_144 = NULL;
F->ty_char_145 = NULL;
F->ty_string_146 = NULL;
F->ty_void_147 = NULL;
F->ty_nil_148 = NULL;
F->ty_univ_149 = NULL;
F->no_cons_152 = NULL;
F->units_155 = NULL;
F->main_name_156 = NULL;
F->out_types_118 = f_new_buffer_176(F);
F->out_frames_119 = f_new_buffer_176(F);
F->out_helpers_120 = f_new_buffer_176(F);
F->out_protos_121 = f_new_buffer_176(F);
F->out_globals_122 = f_new_buffer_176(F);
F->out_funcs_123 = f_new_buffer_176(F);
F->out_init_124 = f_new_buffer_176(F);
F->out_excs_125 = f_new_buffer_176(F);
F->code_126 = F->out_init_124;
F->no_cons_152 = f_new_cons_319(F);
F->ty_int_142 = f_new_typ_318(F, F->t_int_75);
F->ty_bool_143 = f_new_typ_318(F, F->t_bool_76);
F->ty_float_144 = f_new_typ_318(F, F->t_float_77);
F->ty_char_145 = f_new_typ_318(F, F->t_char_85);
F->ty_string_146 = f_new_typ_318(F, F->t_string_79);
F->ty_void_147 = f_new_typ_318(F, F->t_void_83);
F->ty_nil_148 = f_new_typ_318(F, F->t_nil_84);
f_predefine_580(F);
f_read_source_197(F);
f_compilation_294(F, &F->units_155);
f_translate_582(F, F->units_155);
f_print_program_583(F);
ret_:
  return;
}

static void as_R819(R819 *d, R819 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
}
static R819 cp_R819(R819 s) {
  R819 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  return d;
}
static int eq_R819(R819 a, R819 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_);
}
static void as_R808(R808 *d, R808 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
}
static R808 cp_R808(R808 s) {
  R808 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  return d;
}
static int eq_R808(R808 a, R808 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_);
}
static void as_R154(R154 *d, R154 s) {
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
static R154 cp_R154(R154 s) {
  R154 d = s;
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
static int eq_R154(R154 a, R154 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_);
}
static void as_R151(R151 *d, R151 s) {
  d->lo_ = s.lo_;
  d->hi_ = s.hi_;
  d->slen_ = s.slen_;
  d->mlo_ = s.mlo_;
  d->mhi_ = s.mhi_;
  d->hasm_ = s.hasm_;
}
static R151 cp_R151(R151 s) {
  R151 d = s;
  d.lo_ = s.lo_;
  d.hi_ = s.hi_;
  d.slen_ = s.slen_;
  d.mlo_ = s.mlo_;
  d.mhi_ = s.mhi_;
  d.hasm_ = s.hasm_;
  return d;
}
static int eq_R151(R151 a, R151 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_);
}
static void as_R138(R138 *d, R138 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R138 cp_R138(R138 s) {
  R138 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R138(R138 a, R138 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R134(R134 *d, R134 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R134 cp_R134(R134 s) {
  R134 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R134(R134 a, R134 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R117(R117 *d, R117 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R117 cp_R117(R117 s) {
  R117 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R117(R117 a, R117 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R113(R113 *d, R113 s) {
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
static R113 cp_R113(R113 s) {
  R113 d = s;
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
static int eq_R113(R113 a, R113 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_);
}
static void as_R108(R108 *d, R108 s) {
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
  d->members_ = s.members_;
  d->mnext_ = s.mnext_;
  d->chain_ = s.chain_;
  d->stack_ = s.stack_;
}
static R108 cp_R108(R108 s) {
  R108 d = s;
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
  d.members_ = s.members_;
  d.mnext_ = s.mnext_;
  d.chain_ = s.chain_;
  d.stack_ = s.stack_;
  return d;
}
static int eq_R108(R108 a, R108 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_);
}
static void as_A106(A106 *d, A106 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A106 cp_A106(A106 s) {
  A106 d = s; d.p = rt_alloc(sizeof(P107) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A106(A106 a, A106 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R101(R101 *d, R101 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R101 cp_R101(R101 s) {
  R101 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R101(R101 a, R101 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A99(A99 *d, A99 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A99 cp_A99(A99 s) {
  A99 d = s; d.p = rt_alloc(sizeof(P100) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A99(A99 a, A99 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(1);
  ex_compile_error_98 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
