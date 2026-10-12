#include "paleo.h"
#include <math.h>
typedef rstr *P155;
typedef struct R157 R157;
typedef struct R157 *P156;
struct R157 {  rt_int kind; rt_int line; rt_int ival; P155 s;  };
typedef struct A159 A159;
struct A159 { rt_int lo, hi; P156 *p; };
typedef A159 *P158;
typedef struct R161 R161;
typedef struct R161 *P160;
struct R161 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P155 name; P155 tag; P160 a; P160 b; P160 c; P160 d; P160 next;  };
typedef struct R163 R163;
typedef struct R163 *P162;
struct R163 {  P155 lo; P155 hi; P155 slen; rt_int mlo; rt_int mhi; int hasm;  };
typedef struct R165 R165;
typedef struct R165 *P164;
typedef struct R167 R167;
typedef struct R167 *P166;
struct R167 {  P155 name; P164 t; P162 c; P160 st; P166 next;  };
struct R165 {  rt_int kind; P155 name; P160 lits; P164 elem; P164 idx; P162 elemcons; P160 elemst; P166 fields; P164 target; P160 decl; P155 cname; int forward; int defined; int helpers; P164 next;  };
typedef struct R169 R169;
typedef struct R169 *P168;
struct R169 {  P155 name; rt_int mode; P164 t; P162 c; P168 next;  };
typedef struct R171 R171;
typedef struct R171 *P170;
struct R171 {  rt_int kind; P155 name; P164 t; P162 c; P155 access; P155 cname; int ro_flag; rt_int mvalue; int hasmv; P160 st; P160 decl; P168 params; P164 result; rt_int depth; rt_int level; int byref; P170 members; P170 mnext; P170 chain; P170 stack;  };
typedef struct R173 R173;
typedef struct R173 *P172;
struct R173 {  P155 s; P172 next;  };
typedef struct R175 R175;
typedef struct R175 *P174;
struct R175 {  P172 head; P172 tail;  };
typedef struct A177 A177;
struct A177 { rt_int lo, hi; P170 *p; };
typedef A177 *P176;
typedef struct R179 R179;
typedef struct R179 *P178;
struct R179 {  P155 match; P155 label; rt_int depth; P178 next;  };
typedef struct R181 R181;
typedef struct R181 *P180;
struct R181 {  rt_int depth; P160 imps; int all_imp; P180 next;  };
struct f_mk_2fr { int dummy;
 rstr *s_218;
 P155 result_;
 P155 t_219;
};
struct f_chs_3fr { int dummy;
 int c_222;
 rstr result_;
 rstr r_223;
};
struct f_itos_4fr { int dummy;
 rt_int n_224;
 rstr result_;
};
struct f_is_letter_5fr { int dummy;
 int c_225;
 int result_;
};
struct f_is_digit_6fr { int dummy;
 int c_226;
 int result_;
};
struct f_upper_7fr { int dummy;
 int c_227;
 int result_;
 rstr letters_228;
};
struct f_lower_s_8fr { int dummy;
 rstr *s_229;
 rstr result_;
 rstr letters_230;
 rstr r_231;
 rt_int i_232;
};
struct f_q_9fr { int dummy;
 rstr result_;
};
struct f_new_name_10fr { int dummy;
 rstr *base_236;
 rstr result_;
};
struct f_fail_11fr { int dummy;
 rt_int line_237;
 rstr *msg_238;
};
struct f_new_buffer_12fr { int dummy;
 P174 result_;
 P174 b_239;
};
struct f_put_13fr { int dummy;
 P174 b_241;
 rstr *s_242;
 P172 l_243;
};
struct f_emit_14fr { int dummy;
 rstr *s_245;
};
struct f_print_buffer_15fr { int dummy;
 P174 b_246;
 P172 l_247;
};
struct f_splice_16fr { int dummy;
 P174 a_248;
 P174 b_249;
};
struct f_is_reserved_17fr { int dummy;
 rstr *w_250;
 int result_;
};
struct f_is_word_op_18fr { int dummy;
 rstr *w_252;
 int result_;
};
struct f_add_token_19fr { int dummy;
 rt_int kind_253;
 rstr *s_254;
 rt_int ival_255;
 P156 t_256;
};
struct f_lex_line_20fr { int dummy;
 rstr *line_258;
 rt_int i_259;
 rt_int j_260;
 rt_int n_261;
 int c_262;
 rstr w_263;
 rt_int k_264;
 rstr w_268;
 rt_int k_269;
 rstr two_273;
};
struct f_read_source_21fr { int dummy;
 rstr line_274;
};
struct f_nn_22fr { int dummy;
 rt_int kind_275;
 rt_int line_276;
 P160 result_;
 P160 x_277;
};
struct f_append_23fr { int dummy;
 P160 *head_279;
 P160 *tail_280;
 P160 x_281;
};
struct f_list_len_24fr { int dummy;
 P160 l_282;
 rt_int result_;
 rt_int n_283;
 P160 p_284;
};
struct f_cur_line_25fr { int dummy;
 rt_int result_;
};
struct f_at_kw_26fr { int dummy;
 rstr *w_285;
 int result_;
};
struct f_at_op_27fr { int dummy;
 rstr *w_286;
 int result_;
};
struct f_at_kind_28fr { int dummy;
 rt_int k_287;
 int result_;
};
struct f_kind_at_29fr { int dummy;
 rt_int k_288;
 rt_int result_;
};
struct f_text_at_30fr { int dummy;
 rt_int k_289;
 P155 result_;
};
struct f_perror_31fr { int dummy;
 rstr *msg_290;
};
struct f_accept_kw_32fr { int dummy;
 rstr *w_291;
 int result_;
};
struct f_accept_op_33fr { int dummy;
 rstr *w_292;
 int result_;
};
struct f_expect_kw_34fr { int dummy;
 rstr *w_293;
};
struct f_expect_op_35fr { int dummy;
 rstr *w_294;
};
struct f_expect_id_36fr { int dummy;
 P155 result_;
};
struct f_name_node_37fr { int dummy;
 P160 result_;
 P160 x_295;
};
struct f_id_list_38fr { int dummy;
 P160 result_;
 P160 head_296;
 P160 tail_297;
};
struct f_p_subtype_39fr { int dummy;
 P160 result_;
 rt_int line_298;
 P160 x_299;
 rstr w_300;
 P160 head_301;
 P160 tail_302;
 P160 head_303;
 P160 tail_304;
 int more_305;
 P160 names_306;
 P160 st_307;
 P160 cmp_308;
 P160 head_309;
 P160 tail_310;
 int more_311;
 P160 lit_312;
};
struct f_actual_params_40fr { int dummy;
 P160 result_;
 P160 head_313;
 P160 tail_314;
};
struct f_is_type_word_41fr { int dummy;
 rstr *w_315;
 int result_;
};
struct f_actual_tt_42fr { int dummy;
 P160 result_;
 P160 head_316;
 P160 tail_317;
 int more_318;
};
struct f_binop_43fr { int dummy;
 P155 op_319;
 P160 l_320;
 P160 r_321;
 rt_int line_322;
 P160 result_;
 P160 x_323;
};
struct f_expr_44fr { int dummy;
 P160 result_;
 P160 l_324;
 P155 op_325;
 rt_int line_326;
};
struct f_expr_and_45fr { int dummy;
 P160 result_;
 P160 l_327;
 rt_int line_328;
};
struct f_expr_not_46fr { int dummy;
 P160 result_;
 P160 x_329;
};
struct f_is_rel_47fr { int dummy;
 rstr *s_330;
 int result_;
};
struct f_expr_rel_48fr { int dummy;
 P160 result_;
 P160 l_331;
 P155 op_332;
 rt_int line_333;
};
struct f_expr_add_49fr { int dummy;
 P160 result_;
 P160 l_334;
 P155 op_335;
 rt_int line_336;
};
struct f_expr_mul_50fr { int dummy;
 P160 result_;
 P160 l_337;
 P155 op_338;
 rt_int line_339;
};
struct f_expr_pow_51fr { int dummy;
 P160 result_;
 P160 l_340;
 rt_int line_341;
};
struct f_expr_prefix_52fr { int dummy;
 P160 result_;
 P160 x_342;
};
struct f_postfix_53fr { int dummy;
 P160 result_;
 P160 p_343;
 rt_int line_344;
 P160 x_345;
 P160 head_346;
 P160 tail_347;
 int more_348;
 P160 lo_349;
 P160 r_350;
 P160 x_351;
 P160 x_352;
 P160 x_353;
};
struct f_primary_54fr { int dummy;
 P160 result_;
 rt_int line_354;
 P160 x_355;
 rt_int k_356;
 rstr w_357;
 P160 head_358;
 P160 tail_359;
 int more_360;
};
struct f_constructor_item_55fr { int dummy;
 P160 result_;
 rt_int line_361;
 P160 it_362;
 P160 first_363;
 P160 keys_364;
 P160 ktail_365;
 P160 lab_366;
 rt_int save_367;
 P160 more_368;
 P160 tail2_369;
 int ok_370;
 int go_371;
 P160 l2_372;
};
struct f_at_body_end_56fr { int dummy;
 int result_;
};
struct f_body_57fr { int dummy;
 P160 result_;
 P160 head_373;
 P160 tail_374;
};
struct f_body_element_58fr { int dummy;
 P160 result_;
 P160 x_375;
};
struct f_declaration_59fr { int dummy;
 P160 result_;
 rt_int line_376;
 P160 head_377;
 P160 tail_378;
 P160 names_379;
 P160 x_380;
};
struct f_object_decl_60fr { int dummy;
 P160 result_;
 rt_int line_381;
 int is_var_382;
 P160 names_383;
 P160 st_384;
 P160 init_385;
 P160 head_386;
 P160 tail_387;
 P160 x_388;
};
struct f_abbrev_decl_61fr { int dummy;
 P160 result_;
 P160 x_389;
};
struct f_type_decl_62fr { int dummy;
 P160 result_;
 rt_int line_390;
 P155 name_391;
 P160 params_392;
 P160 x_393;
};
struct f_mode_of_63fr { int dummy;
 rstr *w_394;
 rt_int result_;
};
struct f_formal_params_64fr { int dummy;
 P160 result_;
 P160 head_395;
 P160 tail_396;
 int more_397;
 rt_int mode_398;
 P160 names_399;
 P160 ntail_400;
 P160 st_401;
 P160 p_402;
};
struct f_imports_list_65fr { int dummy;
 P160 owner_403;
 int result_;
 P160 head_404;
 P160 tail_405;
 int more_406;
 int ro_407;
 P160 x_408;
};
struct f_is_definable_66fr { int dummy;
 rstr *w_409;
 int result_;
};
struct f_definable_name_67fr { int dummy;
 P155 result_;
};
struct f_subprogram_decl_68fr { int dummy;
 P160 result_;
 rt_int line_410;
 P160 x_411;
 int is_abn_412;
 int is_func_413;
 int dummy_414;
};
struct f_capsule_decl_69fr { int dummy;
 P160 result_;
 P160 x_415;
 int dummy_416;
 P160 head_417;
 P160 tail_418;
 int more_419;
 P160 n_420;
};
struct f_expose_decl_70fr { int dummy;
 P160 result_;
 P160 x_421;
 P160 head_422;
 P160 tail_423;
 int more_424;
 P160 n_425;
};
struct f_is_compound_kw_71fr { int dummy;
 rstr *w_426;
 int result_;
};
struct f_statement_72fr { int dummy;
 P160 result_;
 P160 labels_427;
 P160 ltail_428;
 P155 match_429;
 P160 s_430;
};
struct f_unlabeled_statement_73fr { int dummy;
 P160 result_;
 rt_int line_431;
 P160 x_432;
 P160 target_433;
};
struct f_arm_74fr { int dummy;
 P160 cond_434;
 P160 b_435;
 rt_int line_436;
 P160 result_;
 P160 x_437;
};
struct f_if_stmt_75fr { int dummy;
 P160 result_;
 P160 x_438;
 P160 head_439;
 P160 tail_440;
 P160 cond_441;
 int go_442;
};
struct f_case_stmt_76fr { int dummy;
 P160 result_;
 P160 x_443;
 P160 head_444;
 P160 tail_445;
 P160 labs_446;
 P160 ltail_447;
 int more_448;
 P160 l_449;
};
struct f_repeat_stmt_77fr { int dummy;
 P160 result_;
 P160 x_450;
};
struct f_guard_stmt_78fr { int dummy;
 P160 result_;
 P160 x_451;
 P160 head_452;
 P160 tail_453;
 P160 h_454;
};
struct f_program_79fr { int dummy;
 P160 result_;
 P160 head_455;
 P160 tail_456;
};
struct f_hash_80fr { int dummy;
 rstr *s_457;
 rt_int result_;
 rt_int h_458;
 rt_int i_459;
};
struct f_lookup_81fr { int dummy;
 rstr *name_463;
 P170 result_;
 P170 y_464;
};
struct f_define_82fr { int dummy;
 P170 y_465;
 rt_int line_466;
 rt_int h_467;
 P170 z_468;
};
struct f_open_scope_83fr { int dummy;
};
struct f_close_scope_84fr { int dummy;
};
struct f_new_sym_85fr { int dummy;
 rt_int kind_469;
 P155 name_470;
 P170 result_;
 P170 y_471;
};
struct f_new_typ_86fr { int dummy;
 rt_int kind_473;
 P164 result_;
 P164 t_474;
};
struct f_new_cons_87fr { int dummy;
 P162 result_;
 P162 c_476;
};
struct f_same_lits_88fr { int dummy;
 P160 a_478;
 P160 b_479;
 int result_;
 P160 x_480;
 P160 y_481;
};
struct f_same_89fr { int dummy;
 P164 a_482;
 P164 b_483;
 int result_;
 P166 f_484;
 P166 g_485;
};
struct f_kind_name_90fr { int dummy;
 P164 t_486;
 rstr result_;
};
struct f_check_type_91fr { int dummy;
 P164 got_488;
 P164 want_489;
 rt_int line_490;
};
struct f_ctype_92fr { int dummy;
 P164 t_491;
 rstr result_;
};
struct f_field_decls_93fr { int dummy;
 P164 t_493;
 rstr result_;
 P166 f_494;
 P155 s_495;
};
struct f_declare_ctype_94fr { int dummy;
 P164 t_496;
 P164 u_497;
 P164 target_498;
};
struct f_init_ascii_95fr { int dummy;
 rstr names_499;
 P160 head_500;
 P160 tail_501;
 rt_int start_502;
 rt_int i_503;
 P160 lit_507;
};
struct f_lit_index_96fr { int dummy;
 P160 lits_508;
 rstr *name_509;
 rt_int result_;
 rt_int i_510;
 P160 l_511;
};
struct f_resolve_subtype_97fr { int dummy;
 P160 st_512;
 P162 *c_513;
 P164 result_;
 P164 t_514;
 int ok_515;
 P164 dummy_516;
 P162 ic_518;
 P162 ec_519;
 P164 it_520;
 P164 et_521;
 P160 comp_522;
 P166 tail_523;
 P162 cc_524;
 P166 f_525;
 P170 y_527;
};
struct f_init_storage_98fr { int dummy;
 rstr *lval_528;
 P164 t_529;
 P162 c_530;
 rstr i_531;
 P166 f_532;
};
struct f_manifest_99fr { int dummy;
 P160 e_533;
 int *ok_534;
 rt_int result_;
 rt_int a_535;
 rt_int b_536;
 int ok2_537;
 P170 y_538;
};
struct f_assign_code_100fr { int dummy;
 rstr *lval_539;
 P164 t_540;
 rstr *v_541;
 P162 c_542;
 rstr result_;
};
struct f_copy_code_101fr { int dummy;
 P164 t_543;
 rstr *v_544;
 rstr result_;
};
struct f_eq_code_102fr { int dummy;
 P164 t_545;
 rstr *a_546;
 rstr *b_547;
 rstr result_;
};
struct f_elem_assign_103fr { int dummy;
 rstr *lval_548;
 P164 t_549;
 rstr *v_550;
 rstr result_;
};
struct f_seen_name_104fr { int dummy;
 P172 l_551;
 rstr *s_552;
 int result_;
 P172 p_553;
};
struct f_emit_helpers_105fr { int dummy;
 P164 order_554;
 P164 t_555;
 P172 done_556;
 P172 l_557;
 rstr c_558;
};
struct f_helper_bodies_106fr { int dummy;
 P164 t_560;
 rstr c_561;
 P174 b_562;
 P164 e_563;
 P166 f_564;
 P155 conds_565;
 rstr fn_566;
 rstr fn_567;
};
struct f_declare_body_107fr { int dummy;
 P160 elems_568;
 P160 e_569;
 P170 y_570;
 P170 y_571;
 P170 y_572;
 P164 t_573;
 P170 y_574;
};
struct f_manifest_const_108fr { int dummy;
 P160 d_575;
 int ok_576;
 rt_int v_577;
 P170 y_578;
 P162 c_579;
};
struct f_exported_109fr { int dummy;
 P160 d_580;
 rstr *name_581;
 int *ro_582;
 int result_;
 P160 p_583;
};
struct f_copy_sym_110fr { int dummy;
 P170 y_584;
 P170 result_;
 P170 z_585;
};
struct f_gen_capsule_111fr { int dummy;
 P160 d_587;
 P170 y_588;
 P180 ctx_589;
 P170 m_590;
 P160 p_591;
 int ro_592;
 P170 z_594;
};
struct f_gen_expose_112fr { int dummy;
 P160 d_595;
 P170 y_596;
 P170 m_597;
 P160 p_598;
 int found_599;
 P170 z_600;
};
struct f_finish_ptr_113fr { int dummy;
 P164 t_601;
 P160 d_602;
 P160 p_603;
 P162 c_604;
 rstr dummy_605;
 P170 y_606;
};
struct f_declare_subprogram_114fr { int dummy;
 P160 d_607;
 P170 y_608;
 P160 p_609;
 P168 tail_610;
 P168 pm_611;
 P162 rc_613;
};
struct f_element_115fr { int dummy;
 P160 e_614;
 rt_int k_615;
 P164 t_616;
 rstr c_617;
};
struct f_storage_116fr { int dummy;
 rstr *name_618;
 P164 t_619;
 rstr result_;
 rstr g_620;
 rstr f_621;
};
struct f_bind_117fr { int dummy;
 P170 y_622;
 rstr *access_623;
};
struct f_var_decl_118fr { int dummy;
 P160 d_624;
 P162 c_625;
 P164 t_626;
 P170 y_627;
 rstr access_628;
 P164 vt_629;
 rstr v_630;
};
struct f_const_decl_119fr { int dummy;
 P160 d_631;
 P162 c_632;
 P164 t_633;
 P164 vt_634;
 P170 y_635;
 int ok_636;
 rstr v_637;
 rstr access_638;
};
struct f_subprogram_120fr { int dummy;
 P160 d_639;
 P170 y_640;
 P174 saved_code_641;
 P174 saved_fields_642;
 int saved_in_643;
 P170 saved_sym_644;
 P178 saved_exits_645;
 rt_int saved_frames_646;
 P155 args_647;
 P168 pm_648;
 P172 saved_handlers_649;
 P180 ctx_650;
 P155 head_651;
 P155 frame_652;
 P155 parent_653;
 rstr ct_655;
 rstr f_656;
 P170 p_657;
};
struct f_body_elements_121fr { int dummy;
 P160 elems_658;
 P160 e_659;
};
struct f_gen_body_122fr { int dummy;
 P160 elems_660;
};
struct f_pop_frames_123fr { int dummy;
 rt_int upto_661;
 rt_int i_662;
};
struct f_gen_statement_124fr { int dummy;
 P160 s_663;
 P155 label_664;
 P178 x_665;
};
struct f_st_assign_125fr { int dummy;
 P160 s_668;
 P155 lv_669;
 P164 t_670;
 P164 vt_671;
 P162 c_672;
 int ro_673;
 rstr v_674;
};
struct f_st_call_126fr { int dummy;
 P160 s_675;
 P160 c_676;
 P164 t_677;
 P160 x_678;
};
struct f_st_if_127fr { int dummy;
 P160 s_679;
 P160 a_680;
 int first_681;
 P164 t_682;
 rstr c_683;
};
struct f_st_case_128fr { int dummy;
 P160 s_684;
 P164 st_685;
 P164 vt_686;
 int first_687;
 P160 a_688;
 rstr sel_689;
 rstr tmp_690;
 P160 lab_691;
 P155 conds_692;
 rstr v_693;
 rstr lo_694;
 rstr hi_695;
};
struct f_st_repeat_129fr { int dummy;
 P160 s_696;
 P164 t_697;
 P162 c_698;
 rstr cond_699;
 rstr access_700;
 rstr lov_701;
 rstr hiv_702;
 rstr it_703;
 P170 y_704;
};
struct f_st_exit_130fr { int dummy;
 P160 s_705;
 P178 x_706;
};
struct f_st_return_131fr { int dummy;
 P160 s_707;
 P164 vt_708;
 rstr v_709;
};
struct f_exc_id_132fr { int dummy;
 rstr *name_710;
 rt_int line_711;
 rstr result_;
 P170 y_712;
};
struct f_st_guard_133fr { int dummy;
 P160 s_713;
 P160 h_714;
 int first_715;
 P172 hv_716;
 rstr f_717;
 rstr x_718;
 P160 n_720;
 P155 conds_721;
};
struct f_st_alloc_134fr { int dummy;
 P160 s_722;
 P155 lv_723;
 P164 t_724;
 P164 target_725;
 P164 vt_726;
 P162 c_727;
 P162 tc_728;
 int ro_729;
 P160 d_730;
 P160 p_731;
 P160 a_732;
 rstr tcn_733;
 rstr cell_734;
 rstr v_735;
 rstr pv_736;
 P170 y_737;
 rstr v_738;
};
struct f_access_of_135fr { int dummy;
 P170 y_739;
 rstr result_;
 P155 p_740;
 rt_int i_741;
};
struct f_import_of_136fr { int dummy;
 P160 l_745;
 rstr *name_746;
 P160 result_;
 P160 p_747;
};
struct f_check_import_137fr { int dummy;
 P170 y_748;
 rt_int line_749;
 int result_;
 P180 c_750;
 int ro_751;
 P160 imp_752;
};
struct f_c_ident_138fr { int dummy;
 rstr *s_753;
 rstr result_;
};
struct f_deref_139fr { int dummy;
 rstr *base_754;
 P164 t_755;
 rstr result_;
};
struct f_is_lvalue_140fr { int dummy;
 P160 e_756;
 int result_;
 P170 y_757;
};
struct f_lvalue_141fr { int dummy;
 P160 e_758;
 P155 *code_759;
 P164 *t_760;
 P162 *c_761;
 int *ro_762;
 P155 base_763;
 P164 bt_764;
 P162 bc_765;
 P170 y_766;
};
struct f_select_on_142fr { int dummy;
 rstr *base_767;
 P164 bt_768;
 P160 e_769;
 int *ro_770;
 P155 *code_771;
 P164 *t_772;
 P162 *c_773;
 P166 f_774;
};
struct f_index_on_143fr { int dummy;
 rstr *base_775;
 P164 bt_776;
 P160 e_777;
 int *ro_778;
 int lv_779;
 P155 *code_780;
 P164 *t_781;
 P162 *c_782;
 P160 a_783;
 P164 it_784;
 rstr lo_785;
 rstr hi_786;
 rstr i_787;
 rstr i_788;
};
struct f_gexpr_144fr { int dummy;
 P160 e_789;
 P164 want_790;
 P164 *t_791;
 rstr result_;
 rt_int k_792;
 P155 code_793;
 P162 c_794;
 int ro_795;
 P164 bt_796;
 rt_int i_797;
 P170 y_798;
 int ro_799;
 rstr a_800;
 rstr a_801;
 P160 nm_802;
 P170 y_803;
 rstr base_804;
 rstr base_805;
};
struct f_wrap_apply_145fr { int dummy;
 P160 e_806;
 P160 result_;
 P160 x_807;
};
struct f_c_string_146fr { int dummy;
 rstr *s_808;
 rstr result_;
 rt_int n_809;
 rt_int i_810;
 rstr r_814;
 rt_int j_815;
 rt_int i_816;
};
struct f_enum_type_of_147fr { int dummy;
 rstr *lit_820;
 rt_int line_821;
 P164 result_;
 P170 y_822;
 P162 c_823;
};
struct f_attribute_148fr { int dummy;
 P160 e_824;
 P164 *t_825;
 rstr result_;
 P164 bt_826;
 P162 c_827;
 P155 base_828;
 P170 y_829;
 P160 st_830;
};
struct f_gbinop_149fr { int dummy;
 P160 e_831;
 P164 want_832;
 P164 *t_833;
 rstr result_;
 P155 op_834;
 P164 ta_835;
 P164 tb_836;
 P164 hint_837;
 rstr a_838;
 rstr b_839;
 P164 wa_840;
 P164 wb_841;
 rstr a_842;
 rstr b_843;
 rstr dummy_844;
 rstr a_845;
 rstr b_846;
 P164 ct_847;
 rstr a_848;
 rstr b_849;
};
struct f_constructor_150fr { int dummy;
 P160 e_850;
 P164 want_851;
 P164 *t_852;
 rstr result_;
 P160 it_853;
 P166 f_854;
 P164 vt_855;
 rstr tmp_856;
 P155 parts_857;
 rstr v_858;
};
struct f_gcall_151fr { int dummy;
 P160 e_859;
 int is_stmt_860;
 P164 *t_861;
 rstr result_;
 P160 fn_862;
 P160 tt_863;
 P170 y_864;
 P155 args_865;
 P160 a_866;
 P168 pm_867;
 P164 lt_868;
 P164 vt_869;
 P155 lv_870;
 P162 lc_871;
 int ro_872;
 rt_int i_873;
 rstr v_877;
 rstr ct_878;
 rstr v_879;
};
struct f_builtin_152fr { int dummy;
 rstr *name_880;
 P160 tt_881;
 P160 args_882;
 rt_int line_883;
 int is_stmt_884;
 P164 *t_885;
 rstr result_;
 P164 at_886;
 rt_int n_887;
 rstr a_888;
 rstr a_889;
 rstr a_890;
 P160 last_891;
 rstr a_892;
 rstr a_893;
 P155 lv_894;
 P162 lc_895;
 int ro_896;
 P160 last_897;
 rstr a_898;
};
struct f_translate_153fr { int dummy;
 P160 units_899;
 P160 u_900;
};
struct f_print_program_154fr { int dummy;
};
static void as_R181(R181 *d, R181 s);
static R181 cp_R181(R181 s);
static int eq_R181(R181 a, R181 b);
static void as_R179(R179 *d, R179 s);
static R179 cp_R179(R179 s);
static int eq_R179(R179 a, R179 b);
static void as_A177(A177 *d, A177 s);
static A177 cp_A177(A177 s);
static int eq_A177(A177 a, A177 b);
static void as_R175(R175 *d, R175 s);
static R175 cp_R175(R175 s);
static int eq_R175(R175 a, R175 b);
static void as_R173(R173 *d, R173 s);
static R173 cp_R173(R173 s);
static int eq_R173(R173 a, R173 b);
static void as_R171(R171 *d, R171 s);
static R171 cp_R171(R171 s);
static int eq_R171(R171 a, R171 b);
static void as_R169(R169 *d, R169 s);
static R169 cp_R169(R169 s);
static int eq_R169(R169 a, R169 b);
static void as_R167(R167 *d, R167 s);
static R167 cp_R167(R167 s);
static int eq_R167(R167 a, R167 b);
static void as_R165(R165 *d, R165 s);
static R165 cp_R165(R165 s);
static int eq_R165(R165 a, R165 b);
static void as_R163(R163 *d, R163 s);
static R163 cp_R163(R163 s);
static int eq_R163(R163 a, R163 b);
static void as_R161(R161 *d, R161 s);
static R161 cp_R161(R161 s);
static int eq_R161(R161 a, R161 b);
static void as_A159(A159 *d, A159 s);
static A159 cp_A159(A159 s);
static int eq_A159(A159 a, A159 b);
static void as_R157(R157 *d, R157 s);
static R157 cp_R157(R157 s);
static int eq_R157(R157 a, R157 b);
static P155 f_mk_2(rstr *s_218);
static rstr f_chs_3(int c_222);
static rstr f_itos_4(rt_int n_224);
static int f_is_letter_5(int c_225);
static int f_is_digit_6(int c_226);
static int f_upper_7(int c_227);
static rstr f_lower_s_8(rstr *s_229);
static rstr f_q_9(void);
static rstr f_new_name_10(rstr *base_236);
static void f_fail_11(rt_int line_237, rstr *msg_238);
static P174 f_new_buffer_12(void);
static void f_put_13(P174 b_241, rstr *s_242);
static void f_emit_14(rstr *s_245);
static void f_print_buffer_15(P174 b_246);
static void f_splice_16(P174 a_248, P174 b_249);
static int f_is_reserved_17(rstr *w_250);
static int f_is_word_op_18(rstr *w_252);
static void f_add_token_19(rt_int kind_253, rstr *s_254, rt_int ival_255);
static void f_lex_line_20(rstr *line_258);
static void f_read_source_21(void);
static P160 f_nn_22(rt_int kind_275, rt_int line_276);
static void f_append_23(P160 *head_279, P160 *tail_280, P160 x_281);
static rt_int f_list_len_24(P160 l_282);
static rt_int f_cur_line_25(void);
static int f_at_kw_26(rstr *w_285);
static int f_at_op_27(rstr *w_286);
static int f_at_kind_28(rt_int k_287);
static rt_int f_kind_at_29(rt_int k_288);
static P155 f_text_at_30(rt_int k_289);
static void f_perror_31(rstr *msg_290);
static int f_accept_kw_32(rstr *w_291);
static int f_accept_op_33(rstr *w_292);
static void f_expect_kw_34(rstr *w_293);
static void f_expect_op_35(rstr *w_294);
static P155 f_expect_id_36(void);
static P160 f_name_node_37(void);
static P160 f_id_list_38(void);
static P160 f_p_subtype_39(void);
static P160 f_actual_params_40(void);
static int f_is_type_word_41(rstr *w_315);
static P160 f_actual_tt_42(void);
static P160 f_binop_43(P155 op_319, P160 l_320, P160 r_321, rt_int line_322);
static P160 f_expr_44(void);
static P160 f_expr_and_45(void);
static P160 f_expr_not_46(void);
static int f_is_rel_47(rstr *s_330);
static P160 f_expr_rel_48(void);
static P160 f_expr_add_49(void);
static P160 f_expr_mul_50(void);
static P160 f_expr_pow_51(void);
static P160 f_expr_prefix_52(void);
static P160 f_postfix_53(void);
static P160 f_primary_54(void);
static P160 f_constructor_item_55(void);
static int f_at_body_end_56(void);
static P160 f_body_57(void);
static P160 f_body_element_58(void);
static P160 f_declaration_59(void);
static P160 f_object_decl_60(void);
static P160 f_abbrev_decl_61(void);
static P160 f_type_decl_62(void);
static rt_int f_mode_of_63(rstr *w_394);
static P160 f_formal_params_64(void);
static int f_imports_list_65(P160 owner_403);
static int f_is_definable_66(rstr *w_409);
static P155 f_definable_name_67(void);
static P160 f_subprogram_decl_68(void);
static P160 f_capsule_decl_69(void);
static P160 f_expose_decl_70(void);
static int f_is_compound_kw_71(rstr *w_426);
static P160 f_statement_72(void);
static P160 f_unlabeled_statement_73(void);
static P160 f_arm_74(P160 cond_434, P160 b_435, rt_int line_436);
static P160 f_if_stmt_75(void);
static P160 f_case_stmt_76(void);
static P160 f_repeat_stmt_77(void);
static P160 f_guard_stmt_78(void);
static P160 f_program_79(void);
static rt_int f_hash_80(rstr *s_457);
static P170 f_lookup_81(rstr *name_463);
static void f_define_82(P170 y_465, rt_int line_466);
static void f_open_scope_83(void);
static void f_close_scope_84(void);
static P170 f_new_sym_85(rt_int kind_469, P155 name_470);
static P164 f_new_typ_86(rt_int kind_473);
static P162 f_new_cons_87(void);
static int f_same_lits_88(P160 a_478, P160 b_479);
static int f_same_89(P164 a_482, P164 b_483);
static rstr f_kind_name_90(P164 t_486);
static void f_check_type_91(P164 got_488, P164 want_489, rt_int line_490);
static rstr f_ctype_92(P164 t_491);
static rstr f_field_decls_93(P164 t_493);
static void f_declare_ctype_94(P164 t_496);
static void f_init_ascii_95(void);
static rt_int f_lit_index_96(P160 lits_508, rstr *name_509);
static P164 f_resolve_subtype_97(P160 st_512, P162 *c_513);
static void f_init_storage_98(rstr *lval_528, P164 t_529, P162 c_530);
static rt_int f_manifest_99(P160 e_533, int *ok_534);
static rstr f_assign_code_100(rstr *lval_539, P164 t_540, rstr *v_541, P162 c_542);
static rstr f_copy_code_101(P164 t_543, rstr *v_544);
static rstr f_eq_code_102(P164 t_545, rstr *a_546, rstr *b_547);
static rstr f_elem_assign_103(rstr *lval_548, P164 t_549, rstr *v_550);
static int f_seen_name_104(P172 l_551, rstr *s_552);
static void f_emit_helpers_105(void);
static void f_helper_bodies_106(P164 t_560);
static void f_declare_body_107(P160 elems_568);
static void f_manifest_const_108(P160 d_575);
static int f_exported_109(P160 d_580, rstr *name_581, int *ro_582);
static P170 f_copy_sym_110(P170 y_584);
static void f_gen_capsule_111(P160 d_587);
static void f_gen_expose_112(P160 d_595);
static void f_finish_ptr_113(P164 t_601);
static void f_declare_subprogram_114(P160 d_607);
static void f_element_115(P160 e_614);
static rstr f_storage_116(rstr *name_618, P164 t_619);
static void f_bind_117(P170 y_622, rstr *access_623);
static void f_var_decl_118(P160 d_624);
static void f_const_decl_119(P160 d_631);
static void f_subprogram_120(P160 d_639);
static void f_body_elements_121(P160 elems_658);
static void f_gen_body_122(P160 elems_660);
static void f_pop_frames_123(rt_int upto_661);
static void f_gen_statement_124(P160 s_663);
static void f_st_assign_125(P160 s_668);
static void f_st_call_126(P160 s_675);
static void f_st_if_127(P160 s_679);
static void f_st_case_128(P160 s_684);
static void f_st_repeat_129(P160 s_696);
static void f_st_exit_130(P160 s_705);
static void f_st_return_131(P160 s_707);
static rstr f_exc_id_132(rstr *name_710, rt_int line_711);
static void f_st_guard_133(P160 s_713);
static void f_st_alloc_134(P160 s_722);
static rstr f_access_of_135(P170 y_739);
static P160 f_import_of_136(P160 l_745, rstr *name_746);
static int f_check_import_137(P170 y_748, rt_int line_749);
static rstr f_c_ident_138(rstr *s_753);
static rstr f_deref_139(rstr *base_754, P164 t_755);
static int f_is_lvalue_140(P160 e_756);
static void f_lvalue_141(P160 e_758, P155 *code_759, P164 *t_760, P162 *c_761, int *ro_762);
static void f_select_on_142(rstr *base_767, P164 bt_768, P160 e_769, int *ro_770, P155 *code_771, P164 *t_772, P162 *c_773);
static void f_index_on_143(rstr *base_775, P164 bt_776, P160 e_777, int *ro_778, int lv_779, P155 *code_780, P164 *t_781, P162 *c_782);
static rstr f_gexpr_144(P160 e_789, P164 want_790, P164 *t_791);
static P160 f_wrap_apply_145(P160 e_806);
static rstr f_c_string_146(rstr *s_808);
static P164 f_enum_type_of_147(rstr *lit_820, rt_int line_821);
static rstr f_attribute_148(P160 e_824, P164 *t_825);
static rstr f_gbinop_149(P160 e_831, P164 want_832, P164 *t_833);
static rstr f_constructor_150(P160 e_850, P164 want_851, P164 *t_852);
static rstr f_gcall_151(P160 e_859, int is_stmt_860, P164 *t_861);
static rstr f_builtin_152(rstr *name_880, P160 tt_881, P160 args_882, rt_int line_883, int is_stmt_884, P164 *t_885);
static void f_translate_153(P160 units_899);
static void f_print_program_154(void);
static int ex_compile_error_1;
static P158 g_toks_182;
static rt_int g_ntoks_183;
static rt_int g_tpos_184;
static rt_int g_src_line_185;
static P176 g_table_186;
static rt_int g_depth_187;
static P170 g_scope_stack_188;
static P164 g_all_types_189;
static rt_int g_serial_190;
static P174 g_out_types_191;
static P174 g_out_helpers_192;
static P174 g_out_protos_193;
static P174 g_out_globals_194;
static P174 g_out_funcs_195;
static P174 g_out_init_196;
static P174 g_out_excs_197;
static P174 g_code_198;
static P174 g_fields_buf_199;
static int g_in_func_200;
static rt_int g_cur_level_201;
static P180 g_fctx_202;
static P155 g_st_field_203;
static P174 g_out_frames_204;
static P170 g_func_sym_205;
static P178 g_exits_206;
static rt_int g_frames_207;
static P172 g_handlers_208;
static P164 g_ty_int_209;
static P164 g_ty_bool_210;
static P164 g_ty_float_211;
static P164 g_ty_ascii_212;
static P164 g_ty_string_213;
static P164 g_ty_void_214;
static P164 g_ty_file_215;
static P164 g_ty_nil_216;
static P162 g_no_cons_217;
static P155 f_mk_2(rstr *s_218) {
  struct f_mk_2fr *F = rt_alloc(sizeof *F);
F->s_218 = s_218;
F->t_219 = NULL;
{ rstr *cell220 = rt_alloc(sizeof(rstr));
rt_int pv221 = ((*F->s_218)).len;
(*cell220) = rt_str_new(pv221);
rt_str_assign(&(*cell220), (*F->s_218));
F->t_219 = cell220;
}
F->result_ = F->t_219;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_3(int c_222) {
  struct f_chs_3fr *F = rt_alloc(sizeof *F);
F->c_222 = c_222;
F->r_223 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_223, ((rt_int)1LL))) = F->c_222;
F->result_ = F->r_223;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_itos_4(rt_int n_224) {
  struct f_itos_4fr *F = rt_alloc(sizeof *F);
F->n_224 = n_224;
F->result_ = rt_str_of_int(F->n_224);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_letter_5(int c_225) {
  struct f_is_letter_5fr *F = rt_alloc(sizeof *F);
F->c_225 = c_225;
F->result_ = (((65 <= F->c_225) && (F->c_225 <= 90)) || ((97 <= F->c_225) && (F->c_225 <= 122)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_digit_6(int c_226) {
  struct f_is_digit_6fr *F = rt_alloc(sizeof *F);
F->c_226 = c_226;
F->result_ = ((48 <= F->c_226) && (F->c_226 <= 57));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_upper_7(int c_227) {
  struct f_upper_7fr *F = rt_alloc(sizeof *F);
F->c_227 = c_227;
F->letters_228 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_227) && (F->c_227 <= 122))) {
F->result_ = rt_str_get(F->letters_228, rt_add(rt_sub(((rt_int)(F->c_227) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
goto ret_;
}
F->result_ = F->c_227;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lower_s_8(rstr *s_229) {
  struct f_lower_s_8fr *F = rt_alloc(sizeof *F);
F->s_229 = s_229;
F->letters_230 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_231 = rt_str_new(((*F->s_229)).len);
rt_str_assign(&F->r_231, (*F->s_229));
{ rt_int lo233 = ((rt_int)1LL), hi234 = ((*F->s_229)).len;
for (rt_int it235 = lo233; it235 <= hi234; it235++) {
F->i_232 = it235;
if (((65 <= rt_str_get(F->r_231, F->i_232)) && (rt_str_get(F->r_231, F->i_232) <= 90))) {
(*rt_str_at(&F->r_231, F->i_232)) = rt_str_get(F->letters_230, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_231, F->i_232)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_231;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_q_9(void) {
  struct f_q_9fr *F = rt_alloc(sizeof *F);
F->result_ = f_chs_3(34);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_new_name_10(rstr *base_236) {
  struct f_new_name_10fr *F = rt_alloc(sizeof *F);
F->base_236 = base_236;
g_serial_190 = rt_add(g_serial_190, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_236), f_itos_4(g_serial_190));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_11(rt_int line_237, rstr *msg_238) {
  struct f_fail_11fr *F = rt_alloc(sizeof *F);
F->line_237 = line_237;
F->msg_238 = msg_238;
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_4(F->line_237)), rt_str(": ", 2)), (*F->msg_238)));
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P174 f_new_buffer_12(void) {
  struct f_new_buffer_12fr *F = rt_alloc(sizeof *F);
F->b_239 = NULL;
{ R175 *cell240 = rt_alloc(sizeof(R175));
(*cell240).head = NULL;
(*cell240).tail = NULL;
F->b_239 = cell240;
}
F->result_ = F->b_239;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_13(P174 b_241, rstr *s_242) {
  struct f_put_13fr *F = rt_alloc(sizeof *F);
F->b_241 = b_241;
F->s_242 = s_242;
F->l_243 = NULL;
{ R173 *cell244 = rt_alloc(sizeof(R173));
(*cell244).s = NULL;
(*cell244).next = NULL;
F->l_243 = cell244;
}
(*(P172)rt_nil_check(F->l_243)).s = f_mk_2(&(*F->s_242));
if (((*(P174)rt_nil_check(F->b_241)).tail == NULL)) {
(*(P174)rt_nil_check(F->b_241)).head = F->l_243;
} else {
(*(P172)rt_nil_check((*(P174)rt_nil_check(F->b_241)).tail)).next = F->l_243;
}
(*(P174)rt_nil_check(F->b_241)).tail = F->l_243;
ret_:
  return;
}

static void f_emit_14(rstr *s_245) {
  struct f_emit_14fr *F = rt_alloc(sizeof *F);
F->s_245 = s_245;
f_put_13(g_code_198, &(*F->s_245));
ret_:
  return;
}

static void f_print_buffer_15(P174 b_246) {
  struct f_print_buffer_15fr *F = rt_alloc(sizeof *F);
F->b_246 = b_246;
F->l_247 = NULL;
F->l_247 = (*(P174)rt_nil_check(F->b_246)).head;
while ((F->l_247 != NULL)) {
rt_putln((*(P155)rt_nil_check((*(P172)rt_nil_check(F->l_247)).s)));
F->l_247 = (*(P172)rt_nil_check(F->l_247)).next;
}
ret_:
  return;
}

static void f_splice_16(P174 a_248, P174 b_249) {
  struct f_splice_16fr *F = rt_alloc(sizeof *F);
F->a_248 = a_248;
F->b_249 = b_249;
if (((*(P174)rt_nil_check(F->b_249)).head == NULL)) {
goto ret_;
}
if (((*(P174)rt_nil_check(F->a_248)).tail == NULL)) {
(*(P174)rt_nil_check(F->a_248)).head = (*(P174)rt_nil_check(F->b_249)).head;
} else {
(*(P172)rt_nil_check((*(P174)rt_nil_check(F->a_248)).tail)).next = (*(P174)rt_nil_check(F->b_249)).head;
}
(*(P174)rt_nil_check(F->a_248)).tail = (*(P174)rt_nil_check(F->b_249)).tail;
(*(P174)rt_nil_check(F->b_249)).head = NULL;
(*(P174)rt_nil_check(F->b_249)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_17(rstr *w_250) {
  struct f_is_reserved_17fr *F = rt_alloc(sizeof *F);
F->w_250 = w_250;
{ rstr sel251 = (*F->w_250);
if (0 || rt_str_eq(sel251, rt_str("ABBREV", 6)) || rt_str_eq(sel251, rt_str("ABNORMAL", 8)) || rt_str_eq(sel251, rt_str("ALL", 3)) || rt_str_eq(sel251, rt_str("ALLOC", 5)) || rt_str_eq(sel251, rt_str("ASSERT", 6)) || rt_str_eq(sel251, rt_str("BEGIN", 5)) || rt_str_eq(sel251, rt_str("BY", 2)) || rt_str_eq(sel251, rt_str("CAPSULE", 7)) || rt_str_eq(sel251, rt_str("CASE", 4)) || rt_str_eq(sel251, rt_str("CONST", 5)) || rt_str_eq(sel251, rt_str("CREATE", 6)) || rt_str_eq(sel251, rt_str("DO", 2)) || rt_str_eq(sel251, rt_str("ELSE", 4)) || rt_str_eq(sel251, rt_str("ELSEIF", 6)) || rt_str_eq(sel251, rt_str("END", 3)) || rt_str_eq(sel251, rt_str("EXCEPTION", 9)) || rt_str_eq(sel251, rt_str("EXIT", 4)) || rt_str_eq(sel251, rt_str("EXPORTS", 7)) || rt_str_eq(sel251, rt_str("EXPOSE", 6)) || rt_str_eq(sel251, rt_str("EXTERNAL", 8)) || rt_str_eq(sel251, rt_str("FOR", 3)) || rt_str_eq(sel251, rt_str("FROM", 4)) || rt_str_eq(sel251, rt_str("FUNC", 4)) || rt_str_eq(sel251, rt_str("GENERIC", 7)) || rt_str_eq(sel251, rt_str("GOTO", 4)) || rt_str_eq(sel251, rt_str("GUARD", 5)) || rt_str_eq(sel251, rt_str("IF", 2)) || rt_str_eq(sel251, rt_str("IMPORTS", 7)) || rt_str_eq(sel251, rt_str("LOCATION", 8)) || rt_str_eq(sel251, rt_str("NAMED", 5)) || rt_str_eq(sel251, rt_str("NEEDS", 5)) || rt_str_eq(sel251, rt_str("NEW", 3)) || rt_str_eq(sel251, rt_str("NONE", 4)) || rt_str_eq(sel251, rt_str("OUT", 3)) || rt_str_eq(sel251, rt_str("OF", 2)) || rt_str_eq(sel251, rt_str("PRAG", 4)) || rt_str_eq(sel251, rt_str("PROC", 4)) || rt_str_eq(sel251, rt_str("RAISE", 5)) || rt_str_eq(sel251, rt_str("READONLY", 8)) || rt_str_eq(sel251, rt_str("REVERSE", 7)) || rt_str_eq(sel251, rt_str("REGION", 6)) || rt_str_eq(sel251, rt_str("RENAMING", 8)) || rt_str_eq(sel251, rt_str("REP", 3)) || rt_str_eq(sel251, rt_str("REPEAT", 6)) || rt_str_eq(sel251, rt_str("RERAISE", 7)) || rt_str_eq(sel251, rt_str("RETURN", 6)) || rt_str_eq(sel251, rt_str("SUBTYPE", 7)) || rt_str_eq(sel251, rt_str("TASK", 4)) || rt_str_eq(sel251, rt_str("THEN", 4)) || rt_str_eq(sel251, rt_str("TO", 2)) || rt_str_eq(sel251, rt_str("TYPE", 4)) || rt_str_eq(sel251, rt_str("VAR", 3)) || rt_str_eq(sel251, rt_str("WAIT", 4)) || rt_str_eq(sel251, rt_str("WHEN", 4)) || rt_str_eq(sel251, rt_str("WHILE", 5))) {
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

static int f_is_word_op_18(rstr *w_252) {
  struct f_is_word_op_18fr *F = rt_alloc(sizeof *F);
F->w_252 = w_252;
F->result_ = ((((((rt_str_eq((*F->w_252), rt_str("DIV", 3)) || rt_str_eq((*F->w_252), rt_str("MOD", 3))) || rt_str_eq((*F->w_252), rt_str("IN", 2))) || rt_str_eq((*F->w_252), rt_str("OR", 2))) || rt_str_eq((*F->w_252), rt_str("XOR", 3))) || rt_str_eq((*F->w_252), rt_str("AND", 3))) || rt_str_eq((*F->w_252), rt_str("NOT", 3)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_add_token_19(rt_int kind_253, rstr *s_254, rt_int ival_255) {
  struct f_add_token_19fr *F = rt_alloc(sizeof *F);
F->kind_253 = kind_253;
F->s_254 = s_254;
F->ival_255 = ival_255;
F->t_256 = NULL;
{ R157 *cell257 = rt_alloc(sizeof(R157));
(*cell257).s = NULL;
F->t_256 = cell257;
}
(*(P156)rt_nil_check(F->t_256)).kind = F->kind_253;
(*(P156)rt_nil_check(F->t_256)).line = g_src_line_185;
(*(P156)rt_nil_check(F->t_256)).ival = F->ival_255;
(*(P156)rt_nil_check(F->t_256)).s = f_mk_2(&(*F->s_254));
g_ntoks_183 = rt_add(g_ntoks_183, ((rt_int)1LL));
(*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_ntoks_183, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo] = F->t_256;
ret_:
  return;
}

static void f_lex_line_20(rstr *line_258) {
  struct f_lex_line_20fr *F = rt_alloc(sizeof *F);
F->line_258 = line_258;
F->i_259 = ((rt_int)1LL);
F->j_260 = ((rt_int)0LL);
F->n_261 = ((*F->line_258)).len;
while ((F->i_259 <= F->n_261)) {
F->c_262 = rt_str_get((*F->line_258), F->i_259);
if (((((F->c_262 == 32) || (F->c_262 == 9)) || (F->c_262 == 13)) || (F->c_262 == 12))) {
F->i_259 = rt_add(F->i_259, ((rt_int)1LL));
} else if ((F->c_262 == 37)) {
F->i_259 = rt_add(F->n_261, ((rt_int)1LL));
} else if (f_is_letter_5(F->c_262)) {
F->j_260 = F->i_259;
while (((F->j_260 <= F->n_261) && ((f_is_letter_5(rt_str_get((*F->line_258), F->j_260)) || f_is_digit_6(rt_str_get((*F->line_258), F->j_260))) || (rt_str_get((*F->line_258), F->j_260) == 95)))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
{
F->w_263 = rt_str_new(rt_sub(F->j_260, F->i_259));
rt_str_assign(&F->w_263, rt_str_slice((*F->line_258), F->i_259, rt_sub(F->j_260, ((rt_int)1LL))));
{ rt_int lo265 = ((rt_int)1LL), hi266 = (F->w_263).len;
for (rt_int it267 = lo265; it267 <= hi266; it267++) {
F->k_264 = it267;
(*rt_str_at(&F->w_263, F->k_264)) = f_upper_7(rt_str_get(F->w_263, F->k_264));
}
}
if (rt_str_eq(F->w_263, rt_str("PRAGMAT", 7))) {
while (((F->j_260 <= F->n_261) && (rt_str_get((*F->line_258), F->j_260) != 59))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
} else if (f_is_reserved_17(&F->w_263)) {
f_add_token_19(((rt_int)2LL), &F->w_263, ((rt_int)0LL));
} else if (f_is_word_op_18(&F->w_263)) {
f_add_token_19(((rt_int)3LL), &F->w_263, ((rt_int)0LL));
} else {
f_add_token_19(((rt_int)1LL), &F->w_263, ((rt_int)0LL));
}
}
F->i_259 = F->j_260;
} else if (f_is_digit_6(F->c_262)) {
F->j_260 = F->i_259;
while (((F->j_260 <= F->n_261) && f_is_digit_6(rt_str_get((*F->line_258), F->j_260)))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
if ((((F->j_260 < F->n_261) && (rt_str_get((*F->line_258), F->j_260) == 46)) && f_is_digit_6(rt_str_get((*F->line_258), rt_add(F->j_260, ((rt_int)1LL)))))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
while (((F->j_260 <= F->n_261) && f_is_digit_6(rt_str_get((*F->line_258), F->j_260)))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
if (((F->j_260 <= F->n_261) && ((rt_str_get((*F->line_258), F->j_260) == 69) || (rt_str_get((*F->line_258), F->j_260) == 101)))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
if (((F->j_260 <= F->n_261) && ((rt_str_get((*F->line_258), F->j_260) == 43) || (rt_str_get((*F->line_258), F->j_260) == 45)))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
while (((F->j_260 <= F->n_261) && f_is_digit_6(rt_str_get((*F->line_258), F->j_260)))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
}
f_add_token_19(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_258), F->i_259, rt_sub(F->j_260, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_19(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_258), F->i_259, rt_sub(F->j_260, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_258), F->i_259, rt_sub(F->j_260, ((rt_int)1LL)))));
}
F->i_259 = F->j_260;
} else if ((F->c_262 == 39)) {
F->j_260 = rt_add(F->i_259, ((rt_int)1LL));
if (((F->j_260 > F->n_261) || (!f_is_letter_5(rt_str_get((*F->line_258), F->j_260))))) {
f_fail_11(g_src_line_185, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_260 <= F->n_261) && ((f_is_letter_5(rt_str_get((*F->line_258), F->j_260)) || f_is_digit_6(rt_str_get((*F->line_258), F->j_260))) || (rt_str_get((*F->line_258), F->j_260) == 95)))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
{
F->w_268 = rt_str_new(rt_sub(rt_sub(F->j_260, F->i_259), ((rt_int)1LL)));
rt_str_assign(&F->w_268, rt_str_slice((*F->line_258), rt_add(F->i_259, ((rt_int)1LL)), rt_sub(F->j_260, ((rt_int)1LL))));
{ rt_int lo270 = ((rt_int)1LL), hi271 = (F->w_268).len;
for (rt_int it272 = lo270; it272 <= hi271; it272++) {
F->k_269 = it272;
(*rt_str_at(&F->w_268, F->k_269)) = f_upper_7(rt_str_get(F->w_268, F->k_269));
}
}
f_add_token_19(((rt_int)6LL), &F->w_268, ((rt_int)0LL));
}
F->i_259 = F->j_260;
} else if ((F->c_262 == 34)) {
F->j_260 = rt_add(F->i_259, ((rt_int)1LL));
while (((F->j_260 <= F->n_261) && (rt_str_get((*F->line_258), F->j_260) != 34))) {
F->j_260 = rt_add(F->j_260, ((rt_int)1LL));
}
if ((F->j_260 > F->n_261)) {
f_fail_11(g_src_line_185, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_19(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_258), rt_add(F->i_259, ((rt_int)1LL)), rt_sub(F->j_260, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_259 = rt_add(F->j_260, ((rt_int)1LL));
} else {
{
F->two_273 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_273, rt_str("  ", 2));
(*rt_str_at(&F->two_273, ((rt_int)1LL))) = F->c_262;
if ((F->i_259 < F->n_261)) {
(*rt_str_at(&F->two_273, ((rt_int)2LL))) = rt_str_get((*F->line_258), rt_add(F->i_259, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_273, rt_str(":=", 2)) || rt_str_eq(F->two_273, rt_str("=>", 2))) || rt_str_eq(F->two_273, rt_str("..", 2))) || rt_str_eq(F->two_273, rt_str("**", 2))) || rt_str_eq(F->two_273, rt_str("/=", 2))) || rt_str_eq(F->two_273, rt_str("<=", 2))) || rt_str_eq(F->two_273, rt_str(">=", 2)))) {
f_add_token_19(((rt_int)3LL), &F->two_273, ((rt_int)0LL));
F->i_259 = rt_add(F->i_259, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_262 == 40) || (F->c_262 == 41)) || (F->c_262 == 91)) || (F->c_262 == 93)) || (F->c_262 == 44)) || (F->c_262 == 58)) || (F->c_262 == 59)) || (F->c_262 == 46)) || (F->c_262 == 35)) || (F->c_262 == 43)) || (F->c_262 == 45)) || (F->c_262 == 42)) || (F->c_262 == 47)) || (F->c_262 == 38)) || (F->c_262 == 61)) || (F->c_262 == 60)) || (F->c_262 == 62))) {
f_add_token_19(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_3(F->c_262); b_; }), ((rt_int)0LL));
F->i_259 = rt_add(F->i_259, ((rt_int)1LL));
} else {
f_fail_11(g_src_line_185, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
}
}
}
}
ret_:
  return;
}

static void f_read_source_21(void) {
  struct f_read_source_21fr *F = rt_alloc(sizeof *F);
while ((!rt_eof())) {
F->line_274 = rt_str_new(rt_sizeln());
rt_readln(&F->line_274);
g_src_line_185 = rt_add(g_src_line_185, ((rt_int)1LL));
f_lex_line_20(&F->line_274);
}
f_add_token_19(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P160 f_nn_22(rt_int kind_275, rt_int line_276) {
  struct f_nn_22fr *F = rt_alloc(sizeof *F);
F->kind_275 = kind_275;
F->line_276 = line_276;
F->x_277 = NULL;
{ R161 *cell278 = rt_alloc(sizeof(R161));
(*cell278).name = NULL;
(*cell278).tag = NULL;
(*cell278).a = NULL;
(*cell278).b = NULL;
(*cell278).c = NULL;
(*cell278).d = NULL;
(*cell278).next = NULL;
F->x_277 = cell278;
}
(*(P160)rt_nil_check(F->x_277)).kind = F->kind_275;
(*(P160)rt_nil_check(F->x_277)).line = F->line_276;
F->result_ = F->x_277;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_23(P160 *head_279, P160 *tail_280, P160 x_281) {
  struct f_append_23fr *F = rt_alloc(sizeof *F);
F->head_279 = head_279;
F->tail_280 = tail_280;
F->x_281 = x_281;
if (((*F->head_279) == NULL)) {
(*F->head_279) = F->x_281;
} else {
(*(P160)rt_nil_check((*F->tail_280))).next = F->x_281;
}
(*F->tail_280) = F->x_281;
while (((*(P160)rt_nil_check((*F->tail_280))).next != NULL)) {
(*F->tail_280) = (*(P160)rt_nil_check((*F->tail_280))).next;
}
ret_:
  return;
}

static rt_int f_list_len_24(P160 l_282) {
  struct f_list_len_24fr *F = rt_alloc(sizeof *F);
F->l_282 = l_282;
F->n_283 = ((rt_int)0LL);
F->p_284 = NULL;
F->p_284 = F->l_282;
while ((F->p_284 != NULL)) {
F->n_283 = rt_add(F->n_283, ((rt_int)1LL));
F->p_284 = (*(P160)rt_nil_check(F->p_284)).next;
}
F->result_ = F->n_283;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_25(void) {
  struct f_cur_line_25fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_26(rstr *w_285) {
  struct f_at_kw_26fr *F = rt_alloc(sizeof *F);
F->w_285 = w_285;
F->result_ = (((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)), (*F->w_285)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_27(rstr *w_286) {
  struct f_at_op_27fr *F = rt_alloc(sizeof *F);
F->w_286 = w_286;
F->result_ = (((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)), (*F->w_286)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_28(rt_int k_287) {
  struct f_at_kind_28fr *F = rt_alloc(sizeof *F);
F->k_287 = k_287;
F->result_ = ((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).kind == F->k_287);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_29(rt_int k_288) {
  struct f_kind_at_29fr *F = rt_alloc(sizeof *F);
F->k_288 = k_288;
if ((rt_add(g_tpos_184, F->k_288) > g_ntoks_183)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(rt_add(g_tpos_184, F->k_288), (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P155 f_text_at_30(rt_int k_289) {
  struct f_text_at_30fr *F = rt_alloc(sizeof *F);
F->k_289 = k_289;
if ((rt_add(g_tpos_184, F->k_289) > g_ntoks_183)) {
F->result_ = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_ntoks_183, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
goto ret_;
}
F->result_ = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(rt_add(g_tpos_184, F->k_289), (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_31(rstr *msg_290) {
  struct f_perror_31fr *F = rt_alloc(sizeof *F);
F->msg_290 = msg_290;
f_fail_11((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_290), rt_str(" (at ", 5)), (*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_32(rstr *w_291) {
  struct f_accept_kw_32fr *F = rt_alloc(sizeof *F);
F->w_291 = w_291;
if (f_at_kw_26(&(*F->w_291))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_accept_op_33(rstr *w_292) {
  struct f_accept_op_33fr *F = rt_alloc(sizeof *F);
F->w_292 = w_292;
if (f_at_op_27(&(*F->w_292))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_expect_kw_34(rstr *w_293) {
  struct f_expect_kw_34fr *F = rt_alloc(sizeof *F);
F->w_293 = w_293;
if ((!f_at_kw_26(&(*F->w_293)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_293)); b_; }));
}
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_35(rstr *w_294) {
  struct f_expect_op_35fr *F = rt_alloc(sizeof *F);
F->w_294 = w_294;
if ((!f_at_op_27(&(*F->w_294)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_294)); b_; }));
}
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
ret_:
  return;
}

static P155 f_expect_id_36(void) {
  struct f_expect_id_36fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_28(((rt_int)1LL)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(rt_sub(g_tpos_184, ((rt_int)1LL)), (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_name_node_37(void) {
  struct f_name_node_37fr *F = rt_alloc(sizeof *F);
F->x_295 = NULL;
F->x_295 = f_nn_22(((rt_int)7LL), f_cur_line_25());
(*(P160)rt_nil_check(F->x_295)).name = f_expect_id_36();
F->result_ = F->x_295;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_id_list_38(void) {
  struct f_id_list_38fr *F = rt_alloc(sizeof *F);
F->head_296 = NULL;
F->tail_297 = NULL;
f_append_23(&F->head_296, &F->tail_297, f_name_node_37());
while (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_23(&F->head_296, &F->tail_297, f_name_node_37());
}
F->result_ = F->head_296;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_p_subtype_39(void) {
  struct f_p_subtype_39fr *F = rt_alloc(sizeof *F);
F->line_298 = f_cur_line_25();
F->x_299 = NULL;
if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->x_299 = f_nn_22(((rt_int)81LL), F->line_298);
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P160)rt_nil_check(F->x_299)).a = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_299;
goto ret_;
}
if ((!f_at_kind_28(((rt_int)1LL)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_300 = rt_str_copy((*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)));
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
if (rt_str_eq(F->w_300, rt_str("ARRAY", 5))) {
F->x_299 = f_nn_22(((rt_int)74LL), F->line_298);
{
F->head_301 = NULL;
F->tail_302 = NULL;
f_append_23(&F->head_301, &F->tail_302, f_p_subtype_39());
while (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_23(&F->head_301, &F->tail_302, f_p_subtype_39());
}
(*(P160)rt_nil_check(F->x_299)).a = F->head_301;
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P160)rt_nil_check(F->x_299)).b = f_p_subtype_39();
} else if ((rt_str_eq(F->w_300, rt_str("RECORD", 6)) || rt_str_eq(F->w_300, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_300, rt_str("RECORD", 6))) {
F->x_299 = f_nn_22(((rt_int)75LL), F->line_298);
} else {
F->x_299 = f_nn_22(((rt_int)76LL), F->line_298);
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_303 = NULL;
F->tail_304 = NULL;
F->more_305 = 1;
while (F->more_305) {
F->names_306 = NULL;
F->names_306 = f_id_list_38();
F->st_307 = NULL;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_307 = f_p_subtype_39();
while ((F->names_306 != NULL)) {
F->cmp_308 = NULL;
F->cmp_308 = f_nn_22(((rt_int)63LL), (*(P160)rt_nil_check(F->names_306)).line);
(*(P160)rt_nil_check(F->cmp_308)).name = (*(P160)rt_nil_check(F->names_306)).name;
(*(P160)rt_nil_check(F->cmp_308)).a = F->st_307;
f_append_23(&F->head_303, &F->tail_304, F->cmp_308);
F->names_306 = (*(P160)rt_nil_check(F->names_306)).next;
}
F->more_305 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P160)rt_nil_check(F->x_299)).a = F->head_303;
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_300, rt_str("UNION", 5)) && f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_299)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_300, rt_str("ENUM", 4))) {
F->x_299 = f_nn_22(((rt_int)72LL), F->line_298);
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_309 = NULL;
F->tail_310 = NULL;
F->more_311 = 1;
while (F->more_311) {
F->lit_312 = NULL;
F->lit_312 = f_nn_22(((rt_int)4LL), F->line_298);
if ((!f_at_kind_28(((rt_int)6LL)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P160)rt_nil_check(F->lit_312)).name = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
f_append_23(&F->head_309, &F->tail_310, F->lit_312);
F->more_311 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P160)rt_nil_check(F->x_299)).a = F->head_309;
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_299)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P160)rt_nil_check(F->x_299)).c = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_300, rt_str("STRING", 6)) || rt_str_eq(F->w_300, rt_str("SET", 3))) || rt_str_eq(F->w_300, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_300, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_300, rt_str("STRING", 6))) {
F->x_299 = f_nn_22(((rt_int)73LL), F->line_298);
} else if (rt_str_eq(F->w_300, rt_str("SET", 3))) {
F->x_299 = f_nn_22(((rt_int)77LL), F->line_298);
} else if (rt_str_eq(F->w_300, rt_str("MAILBOX", 7))) {
F->x_299 = f_nn_22(((rt_int)78LL), F->line_298);
} else {
F->x_299 = f_nn_22(((rt_int)79LL), F->line_298);
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P160)rt_nil_check(F->x_299)).a = f_p_subtype_39();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_299)).b = f_actual_params_40();
}
} else if (rt_str_eq(F->w_300, rt_str("INT", 3))) {
F->x_299 = f_nn_22(((rt_int)70LL), F->line_298);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_299)).a = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P160)rt_nil_check(F->x_299)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_300, rt_str("FLOAT", 5))) {
F->x_299 = f_nn_22(((rt_int)71LL), F->line_298);
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_299)).a = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_299)).b = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P160)rt_nil_check(F->x_299)).c = f_expr_44();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_299 = f_nn_22(((rt_int)80LL), F->line_298);
(*(P160)rt_nil_check(F->x_299)).name = f_mk_2(&F->w_300);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_299)).a = f_actual_tt_42();
}
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_299)).b = f_actual_params_40();
(*(P160)rt_nil_check(F->x_299)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_299;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_actual_params_40(void) {
  struct f_actual_params_40fr *F = rt_alloc(sizeof *F);
F->head_313 = NULL;
F->tail_314 = NULL;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_23(&F->head_313, &F->tail_314, f_expr_44());
while (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_23(&F->head_313, &F->tail_314, f_expr_44());
}
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_313;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_type_word_41(rstr *w_315) {
  struct f_is_type_word_41fr *F = rt_alloc(sizeof *F);
F->w_315 = w_315;
F->result_ = ((((((((((((((rt_str_eq((*F->w_315), rt_str("INT", 3)) || rt_str_eq((*F->w_315), rt_str("BOOL", 4))) || rt_str_eq((*F->w_315), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_315), rt_str("ENUM", 4))) || rt_str_eq((*F->w_315), rt_str("RECORD", 6))) || rt_str_eq((*F->w_315), rt_str("UNION", 5))) || rt_str_eq((*F->w_315), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_315), rt_str("STRING", 6))) || rt_str_eq((*F->w_315), rt_str("SET", 3))) || rt_str_eq((*F->w_315), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_315), rt_str("FILE", 4))) || rt_str_eq((*F->w_315), rt_str("ASCII", 5))) || rt_str_eq((*F->w_315), rt_str("ACT", 3))) || rt_str_eq((*F->w_315), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_315), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_actual_tt_42(void) {
  struct f_actual_tt_42fr *F = rt_alloc(sizeof *F);
F->head_316 = NULL;
F->tail_317 = NULL;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_318 = 1;
while (F->more_318) {
if ((f_at_kind_28(((rt_int)1LL)) && f_is_type_word_41(&(*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s))))) {
f_append_23(&F->head_316, &F->tail_317, f_p_subtype_39());
} else {
f_append_23(&F->head_316, &F->tail_317, f_expr_44());
}
F->more_318 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_316;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_binop_43(P155 op_319, P160 l_320, P160 r_321, rt_int line_322) {
  struct f_binop_43fr *F = rt_alloc(sizeof *F);
F->op_319 = op_319;
F->l_320 = l_320;
F->r_321 = r_321;
F->line_322 = line_322;
F->x_323 = NULL;
F->x_323 = f_nn_22(((rt_int)9LL), F->line_322);
(*(P160)rt_nil_check(F->x_323)).name = F->op_319;
(*(P160)rt_nil_check(F->x_323)).a = F->l_320;
(*(P160)rt_nil_check(F->x_323)).b = F->r_321;
F->result_ = F->x_323;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_44(void) {
  struct f_expr_44fr *F = rt_alloc(sizeof *F);
F->l_324 = NULL;
F->l_324 = f_expr_and_45();
while ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_325 = NULL;
F->op_325 = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
F->line_326 = f_cur_line_25();
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->l_324 = f_binop_43(F->op_325, F->l_324, f_expr_and_45(), F->line_326);
}
F->result_ = F->l_324;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_and_45(void) {
  struct f_expr_and_45fr *F = rt_alloc(sizeof *F);
F->l_327 = NULL;
F->l_327 = f_expr_not_46();
while (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_328 = f_cur_line_25();
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->l_327 = f_binop_43(f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_327, f_expr_not_46(), F->line_328);
}
F->result_ = F->l_327;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_not_46(void) {
  struct f_expr_not_46fr *F = rt_alloc(sizeof *F);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_329 = NULL;
F->x_329 = f_nn_22(((rt_int)8LL), f_cur_line_25());
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_329)).name = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P160)rt_nil_check(F->x_329)).a = f_expr_not_46();
F->result_ = F->x_329;
goto ret_;
}
F->result_ = f_expr_rel_48();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_rel_47(rstr *s_330) {
  struct f_is_rel_47fr *F = rt_alloc(sizeof *F);
F->s_330 = s_330;
F->result_ = ((((((rt_str_eq((*F->s_330), rt_str("=", 1)) || rt_str_eq((*F->s_330), rt_str("/=", 2))) || rt_str_eq((*F->s_330), rt_str("<", 1))) || rt_str_eq((*F->s_330), rt_str("<=", 2))) || rt_str_eq((*F->s_330), rt_str(">", 1))) || rt_str_eq((*F->s_330), rt_str(">=", 2))) || rt_str_eq((*F->s_330), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_rel_48(void) {
  struct f_expr_rel_48fr *F = rt_alloc(sizeof *F);
F->l_331 = NULL;
F->l_331 = f_expr_add_49();
if ((f_at_kind_28(((rt_int)3LL)) && f_is_rel_47(&(*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s))))) {
F->op_332 = NULL;
F->op_332 = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
F->line_333 = f_cur_line_25();
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->l_331 = f_binop_43(F->op_332, F->l_331, f_expr_add_49(), F->line_333);
}
F->result_ = F->l_331;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_add_49(void) {
  struct f_expr_add_49fr *F = rt_alloc(sizeof *F);
F->l_334 = NULL;
F->l_334 = f_expr_mul_50();
while ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_335 = NULL;
F->op_335 = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
F->line_336 = f_cur_line_25();
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->l_334 = f_binop_43(F->op_335, F->l_334, f_expr_mul_50(), F->line_336);
}
F->result_ = F->l_334;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_mul_50(void) {
  struct f_expr_mul_50fr *F = rt_alloc(sizeof *F);
F->l_337 = NULL;
F->l_337 = f_expr_pow_51();
while (((((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_338 = NULL;
F->op_338 = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
F->line_339 = f_cur_line_25();
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->l_337 = f_binop_43(F->op_338, F->l_337, f_expr_pow_51(), F->line_339);
}
F->result_ = F->l_337;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_pow_51(void) {
  struct f_expr_pow_51fr *F = rt_alloc(sizeof *F);
F->l_340 = NULL;
F->l_340 = f_expr_prefix_52();
while (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_341 = f_cur_line_25();
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->l_340 = f_binop_43(f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_340, f_expr_prefix_52(), F->line_341);
}
F->result_ = F->l_340;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expr_prefix_52(void) {
  struct f_expr_prefix_52fr *F = rt_alloc(sizeof *F);
if ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_342 = NULL;
F->x_342 = f_nn_22(((rt_int)8LL), f_cur_line_25());
(*(P160)rt_nil_check(F->x_342)).name = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_342)).a = f_expr_prefix_52();
F->result_ = F->x_342;
goto ret_;
}
F->result_ = f_postfix_53();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_postfix_53(void) {
  struct f_postfix_53fr *F = rt_alloc(sizeof *F);
F->p_343 = NULL;
F->p_343 = f_primary_54();
while (1) {
F->line_344 = f_cur_line_25();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_345 = NULL;
F->x_345 = f_nn_22(((rt_int)10LL), F->line_344);
F->head_346 = NULL;
F->tail_347 = NULL;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_348 = 1;
while (F->more_348) {
F->lo_349 = NULL;
F->lo_349 = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_350 = NULL;
F->r_350 = f_nn_22(((rt_int)16LL), F->line_344);
(*(P160)rt_nil_check(F->r_350)).a = F->lo_349;
(*(P160)rt_nil_check(F->r_350)).b = f_expr_44();
f_append_23(&F->head_346, &F->tail_347, F->r_350);
} else {
f_append_23(&F->head_346, &F->tail_347, F->lo_349);
}
F->more_348 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P160)rt_nil_check(F->x_345)).a = F->p_343;
(*(P160)rt_nil_check(F->x_345)).b = F->head_346;
F->p_343 = F->x_345;
} else if ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_29(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_29(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_351 = NULL;
F->x_351 = f_nn_22(((rt_int)11LL), F->line_344);
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_351)).a = F->p_343;
(*(P160)rt_nil_check(F->x_351)).name = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->p_343 = F->x_351;
} else if ((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P160)rt_nil_check(F->p_343)).kind == ((rt_int)7LL)))) {
F->x_352 = NULL;
F->x_352 = f_nn_22(((rt_int)12LL), F->line_344);
(*(P160)rt_nil_check(F->x_352)).a = F->p_343;
(*(P160)rt_nil_check(F->x_352)).b = f_actual_tt_42();
F->p_343 = F->x_352;
} else if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_353 = NULL;
F->x_353 = f_nn_22(((rt_int)13LL), F->line_344);
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_353)).a = F->p_343;
(*(P160)rt_nil_check(F->x_353)).b = f_p_subtype_39();
F->p_343 = F->x_353;
} else {
F->result_ = F->p_343;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_primary_54(void) {
  struct f_primary_54fr *F = rt_alloc(sizeof *F);
F->line_354 = f_cur_line_25();
F->x_355 = NULL;
F->k_356 = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).kind;
if ((F->k_356 == ((rt_int)4LL))) {
F->x_355 = f_nn_22(((rt_int)1LL), F->line_354);
(*(P160)rt_nil_check(F->x_355)).ival = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).ival;
(*(P160)rt_nil_check(F->x_355)).name = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = F->x_355;
goto ret_;
}
if ((((F->k_356 == ((rt_int)5LL)) || (F->k_356 == ((rt_int)7LL))) || (F->k_356 == ((rt_int)6LL)))) {
if ((F->k_356 == ((rt_int)5LL))) {
F->x_355 = f_nn_22(((rt_int)2LL), F->line_354);
} else if ((F->k_356 == ((rt_int)7LL))) {
F->x_355 = f_nn_22(((rt_int)3LL), F->line_354);
} else {
F->x_355 = f_nn_22(((rt_int)4LL), F->line_354);
}
(*(P160)rt_nil_check(F->x_355)).name = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = F->x_355;
goto ret_;
}
if ((F->k_356 == ((rt_int)1LL))) {
F->w_357 = rt_str_copy((*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)));
if ((rt_str_eq(F->w_357, rt_str("TRUE", 4)) || rt_str_eq(F->w_357, rt_str("FALSE", 5)))) {
F->x_355 = f_nn_22(((rt_int)5LL), F->line_354);
if (rt_str_eq(F->w_357, rt_str("TRUE", 4))) {
(*(P160)rt_nil_check(F->x_355)).ival = ((rt_int)1LL);
}
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = F->x_355;
goto ret_;
}
if (rt_str_eq(F->w_357, rt_str("NIL", 3))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = f_nn_22(((rt_int)6LL), F->line_354);
goto ret_;
}
F->result_ = f_name_node_37();
goto ret_;
}
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_355 = f_nn_22(((rt_int)17LL), F->line_354);
(*(P160)rt_nil_check(F->x_355)).a = f_expr_44();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_355;
goto ret_;
}
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_358 = NULL;
F->tail_359 = NULL;
F->x_355 = f_nn_22(((rt_int)14LL), F->line_354);
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_360 = 1;
while (F->more_360) {
f_append_23(&F->head_358, &F->tail_359, f_constructor_item_55());
F->more_360 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P160)rt_nil_check(F->x_355)).a = F->head_358;
F->result_ = F->x_355;
goto ret_;
}
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_constructor_item_55(void) {
  struct f_constructor_item_55fr *F = rt_alloc(sizeof *F);
F->line_361 = f_cur_line_25();
F->it_362 = NULL;
F->it_362 = f_nn_22(((rt_int)15LL), F->line_361);
F->first_363 = NULL;
F->first_363 = f_expr_44();
F->keys_364 = NULL;
F->ktail_365 = NULL;
F->lab_366 = NULL;
F->lab_366 = f_nn_22(((rt_int)61LL), F->line_361);
(*(P160)rt_nil_check(F->lab_366)).a = F->first_363;
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P160)rt_nil_check(F->lab_366)).b = f_expr_44();
f_append_23(&F->keys_364, &F->ktail_365, F->lab_366);
} else if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_23(&F->keys_364, &F->ktail_365, F->lab_366);
} else if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_367 = g_tpos_184;
F->more_368 = NULL;
F->tail2_369 = NULL;
F->ok_370 = 0;
F->go_371 = 1;
while ((F->go_371 && f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_372 = NULL;
F->l2_372 = f_nn_22(((rt_int)61LL), F->line_361);
(*(P160)rt_nil_check(F->l2_372)).a = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P160)rt_nil_check(F->l2_372)).b = f_expr_44();
}
f_append_23(&F->more_368, &F->tail2_369, F->l2_372);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_370 = 1;
F->go_371 = 0;
} else if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_371 = 0;
}
}
if (F->ok_370) {
f_append_23(&F->keys_364, &F->ktail_365, F->lab_366);
f_append_23(&F->keys_364, &F->ktail_365, F->more_368);
} else {
g_tpos_184 = F->save_367;
}
}
if ((F->keys_364 != NULL)) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P160)rt_nil_check(F->it_362)).a = F->keys_364;
(*(P160)rt_nil_check(F->it_362)).b = f_expr_44();
} else {
(*(P160)rt_nil_check(F->it_362)).b = F->first_363;
}
F->result_ = F->it_362;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_body_end_56(void) {
  struct f_at_body_end_56fr *F = rt_alloc(sizeof *F);
F->result_ = (((((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_28(((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_body_57(void) {
  struct f_body_57fr *F = rt_alloc(sizeof *F);
F->head_373 = NULL;
F->tail_374 = NULL;
while ((!f_at_body_end_56())) {
f_append_23(&F->head_373, &F->tail_374, f_body_element_58());
}
F->result_ = F->head_373;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_body_element_58(void) {
  struct f_body_element_58fr *F = rt_alloc(sizeof *F);
F->x_375 = NULL;
if ((((((((((((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_375 = f_declaration_59();
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_375 = f_nn_22(((rt_int)33LL), f_cur_line_25());
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_375)).a = f_expr_44();
} else {
F->x_375 = f_statement_72();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_375;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_declaration_59(void) {
  struct f_declaration_59fr *F = rt_alloc(sizeof *F);
F->line_376 = f_cur_line_25();
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
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_70();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_377 = NULL;
F->tail_378 = NULL;
F->names_379 = NULL;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->names_379 = f_id_list_38();
while ((F->names_379 != NULL)) {
F->x_380 = NULL;
F->x_380 = f_nn_22(((rt_int)49LL), F->line_376);
(*(P160)rt_nil_check(F->x_380)).name = (*(P160)rt_nil_check(F->names_379)).name;
f_append_23(&F->head_377, &F->tail_378, F->x_380);
F->names_379 = (*(P160)rt_nil_check(F->names_379)).next;
}
F->result_ = F->head_377;
goto ret_;
}
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_object_decl_60(void) {
  struct f_object_decl_60fr *F = rt_alloc(sizeof *F);
F->line_381 = f_cur_line_25();
F->is_var_382 = f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_383 = NULL;
F->st_384 = NULL;
F->init_385 = NULL;
F->head_386 = NULL;
F->tail_387 = NULL;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->names_383 = f_id_list_38();
if (F->is_var_382) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_384 = f_p_subtype_39();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_385 = f_expr_44();
}
} else {
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_384 = f_p_subtype_39();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_385 = f_expr_44();
}
while ((F->names_383 != NULL)) {
F->x_388 = NULL;
if (F->is_var_382) {
F->x_388 = f_nn_22(((rt_int)40LL), F->line_381);
} else {
F->x_388 = f_nn_22(((rt_int)41LL), F->line_381);
}
(*(P160)rt_nil_check(F->x_388)).name = (*(P160)rt_nil_check(F->names_383)).name;
(*(P160)rt_nil_check(F->x_388)).a = F->st_384;
(*(P160)rt_nil_check(F->x_388)).b = F->init_385;
f_append_23(&F->head_386, &F->tail_387, F->x_388);
F->names_383 = (*(P160)rt_nil_check(F->names_383)).next;
}
F->result_ = F->head_386;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_abbrev_decl_61(void) {
  struct f_abbrev_decl_61fr *F = rt_alloc(sizeof *F);
F->x_389 = NULL;
F->x_389 = f_nn_22(((rt_int)42LL), f_cur_line_25());
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_389)).name = f_expect_id_36();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_389)).b = f_formal_params_64();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P160)rt_nil_check(F->x_389)).a = f_p_subtype_39();
F->result_ = F->x_389;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_type_decl_62(void) {
  struct f_type_decl_62fr *F = rt_alloc(sizeof *F);
F->line_390 = f_cur_line_25();
F->name_391 = NULL;
F->params_392 = NULL;
F->x_393 = NULL;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->name_391 = f_expect_id_36();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_392 = f_formal_params_64();
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_28(((rt_int)1LL)) && rt_str_eq((*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->x_393 = f_nn_22(((rt_int)44LL), F->line_390);
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_393)).b = f_formal_params_64();
}
} else {
F->x_393 = f_nn_22(((rt_int)43LL), F->line_390);
(*(P160)rt_nil_check(F->x_393)).b = F->params_392;
}
(*(P160)rt_nil_check(F->x_393)).name = F->name_391;
(*(P160)rt_nil_check(F->x_393)).a = f_p_subtype_39();
F->result_ = F->x_393;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_mode_of_63(rstr *w_394) {
  struct f_mode_of_63fr *F = rt_alloc(sizeof *F);
F->w_394 = w_394;
if (rt_str_eq((*F->w_394), rt_str("VAR", 3))) {
F->result_ = ((rt_int)2LL);
goto ret_;
} else if (rt_str_eq((*F->w_394), rt_str("OUT", 3))) {
F->result_ = ((rt_int)3LL);
goto ret_;
} else if (rt_str_eq((*F->w_394), rt_str("READONLY", 8))) {
F->result_ = ((rt_int)4LL);
goto ret_;
}
F->result_ = ((rt_int)1LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_formal_params_64(void) {
  struct f_formal_params_64fr *F = rt_alloc(sizeof *F);
F->head_395 = NULL;
F->tail_396 = NULL;
F->more_397 = 1;
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_397) {
F->mode_398 = ((rt_int)1LL);
F->names_399 = NULL;
F->ntail_400 = NULL;
F->st_401 = NULL;
if ((((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_398 = f_mode_of_63(&(*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)));
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
}
f_append_23(&F->names_399, &F->ntail_400, f_name_node_37());
while ((((f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_29(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_29(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P155)rt_nil_check(f_text_at_30(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P155)rt_nil_check(f_text_at_30(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
f_append_23(&F->names_399, &F->ntail_400, f_name_node_37());
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_401 = f_p_subtype_39();
while ((F->names_399 != NULL)) {
F->p_402 = NULL;
F->p_402 = f_nn_22(((rt_int)52LL), (*(P160)rt_nil_check(F->names_399)).line);
(*(P160)rt_nil_check(F->p_402)).name = (*(P160)rt_nil_check(F->names_399)).name;
(*(P160)rt_nil_check(F->p_402)).ival = F->mode_398;
(*(P160)rt_nil_check(F->p_402)).a = F->st_401;
f_append_23(&F->head_395, &F->tail_396, F->p_402);
F->names_399 = (*(P160)rt_nil_check(F->names_399)).next;
}
F->more_397 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_395;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_65(P160 owner_403) {
  struct f_imports_list_65fr *F = rt_alloc(sizeof *F);
F->owner_403 = owner_403;
F->head_404 = NULL;
F->tail_405 = NULL;
F->more_406 = 1;
if ((!f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P160)rt_nil_check(F->owner_403)).flag = rt_add((*(P160)rt_nil_check(F->owner_403)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_406) {
F->ro_407 = f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_408 = NULL;
F->x_408 = f_name_node_37();
if (F->ro_407) {
(*(P160)rt_nil_check(F->x_408)).ival = ((rt_int)1LL);
}
f_append_23(&F->head_404, &F->tail_405, F->x_408);
F->more_406 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P160)rt_nil_check(F->owner_403)).d = F->head_404;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_definable_66(rstr *w_409) {
  struct f_is_definable_66fr *F = rt_alloc(sizeof *F);
F->w_409 = w_409;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_409), rt_str("+", 1)) || rt_str_eq((*F->w_409), rt_str("-", 1))) || rt_str_eq((*F->w_409), rt_str("*", 1))) || rt_str_eq((*F->w_409), rt_str("/", 1))) || rt_str_eq((*F->w_409), rt_str("**", 2))) || rt_str_eq((*F->w_409), rt_str("&", 1))) || rt_str_eq((*F->w_409), rt_str("=", 1))) || rt_str_eq((*F->w_409), rt_str("<", 1))) || rt_str_eq((*F->w_409), rt_str("<=", 2))) || rt_str_eq((*F->w_409), rt_str(">", 1))) || rt_str_eq((*F->w_409), rt_str(">=", 2))) || rt_str_eq((*F->w_409), rt_str("/=", 2))) || rt_str_eq((*F->w_409), rt_str("DIV", 3))) || rt_str_eq((*F->w_409), rt_str("MOD", 3))) || rt_str_eq((*F->w_409), rt_str("AND", 3))) || rt_str_eq((*F->w_409), rt_str("OR", 2))) || rt_str_eq((*F->w_409), rt_str("XOR", 3))) || rt_str_eq((*F->w_409), rt_str("NOT", 3))) || rt_str_eq((*F->w_409), rt_str("IN", 2))) || rt_str_eq((*F->w_409), rt_str(":=", 2))) || rt_str_eq((*F->w_409), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P155 f_definable_name_67(void) {
  struct f_definable_name_67fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_28(((rt_int)1LL)) || (f_at_kind_28(((rt_int)3LL)) && f_is_definable_66(&(*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)))))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = (*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(rt_sub(g_tpos_184, ((rt_int)1LL)), (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s;
goto ret_;
}
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_subprogram_decl_68(void) {
  struct f_subprogram_decl_68fr *F = rt_alloc(sizeof *F);
F->line_410 = f_cur_line_25();
F->x_411 = NULL;
F->is_abn_412 = f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_413 = f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_413) {
F->x_411 = f_nn_22(((rt_int)46LL), F->line_410);
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_411 = f_nn_22(((rt_int)45LL), F->line_410);
} else {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
if (F->is_abn_412) {
(*(P160)rt_nil_check(F->x_411)).flag = ((rt_int)1LL);
}
(*(P160)rt_nil_check(F->x_411)).name = f_definable_name_67();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_411)).a = f_formal_params_64();
}
if (F->is_func_413) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P160)rt_nil_check(F->x_411)).b = f_p_subtype_39();
}
F->dummy_414 = f_imports_list_65(F->x_411);
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P160)rt_nil_check(F->x_411)).c = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_413) {
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P155)rt_nil_check(f_definable_name_67())), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->x_411)).name))))) {
f_fail_11(f_cur_line_25(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->x_411)).name))); b_; }));
}
F->result_ = F->x_411;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_capsule_decl_69(void) {
  struct f_capsule_decl_69fr *F = rt_alloc(sizeof *F);
F->x_415 = NULL;
F->x_415 = f_nn_22(((rt_int)47LL), f_cur_line_25());
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_415)).name = f_expect_id_36();
F->dummy_416 = f_imports_list_65(F->x_415);
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P160)rt_nil_check(F->x_415)).ival = ((rt_int)1LL);
} else if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P160)rt_nil_check(F->x_415)).ival = ((rt_int)0LL);
} else {
F->head_417 = NULL;
F->tail_418 = NULL;
F->more_419 = 1;
while (F->more_419) {
F->n_420 = NULL;
F->n_420 = f_nn_22(((rt_int)7LL), f_cur_line_25());
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P160)rt_nil_check(F->n_420)).ival = ((rt_int)1LL);
}
(*(P160)rt_nil_check(F->n_420)).name = f_definable_name_67();
f_append_23(&F->head_417, &F->tail_418, F->n_420);
F->more_419 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P160)rt_nil_check(F->x_415)).a = F->head_417;
(*(P160)rt_nil_check(F->x_415)).ival = ((rt_int)2LL);
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P160)rt_nil_check(F->x_415)).c = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P155)rt_nil_check(f_expect_id_36())), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->x_415)).name))))) {
f_fail_11(f_cur_line_25(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_415;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_expose_decl_70(void) {
  struct f_expose_decl_70fr *F = rt_alloc(sizeof *F);
F->x_421 = NULL;
F->x_421 = f_nn_22(((rt_int)48LL), f_cur_line_25());
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P160)rt_nil_check(F->x_421)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_422 = NULL;
F->tail_423 = NULL;
F->more_424 = 1;
while (F->more_424) {
F->n_425 = NULL;
F->n_425 = f_nn_22(((rt_int)7LL), f_cur_line_25());
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P160)rt_nil_check(F->n_425)).ival = ((rt_int)1LL);
}
(*(P160)rt_nil_check(F->n_425)).name = f_definable_name_67();
f_append_23(&F->head_422, &F->tail_423, F->n_425);
F->more_424 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P160)rt_nil_check(F->x_421)).a = F->head_422;
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P160)rt_nil_check(F->x_421)).flag = ((rt_int)1LL);
}
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P160)rt_nil_check(F->x_421)).flag = rt_add((*(P160)rt_nil_check(F->x_421)).flag, ((rt_int)2LL));
}
(*(P160)rt_nil_check(F->x_421)).name = f_expect_id_36();
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_421)).b = f_actual_params_40();
}
if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P160)rt_nil_check(F->x_421)).flag == ((rt_int)1LL)) || ((*(P160)rt_nil_check(F->x_421)).flag == ((rt_int)3LL)))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_421;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_compound_kw_71(rstr *w_426) {
  struct f_is_compound_kw_71fr *F = rt_alloc(sizeof *F);
F->w_426 = w_426;
F->result_ = (((((((rt_str_eq((*F->w_426), rt_str("IF", 2)) || rt_str_eq((*F->w_426), rt_str("CASE", 4))) || rt_str_eq((*F->w_426), rt_str("FOR", 3))) || rt_str_eq((*F->w_426), rt_str("WHILE", 5))) || rt_str_eq((*F->w_426), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_426), rt_str("GUARD", 5))) || rt_str_eq((*F->w_426), rt_str("WAIT", 4))) || rt_str_eq((*F->w_426), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_statement_72(void) {
  struct f_statement_72fr *F = rt_alloc(sizeof *F);
F->labels_427 = NULL;
F->ltail_428 = NULL;
F->match_429 = NULL;
F->s_430 = NULL;
while (((f_at_kind_28(((rt_int)1LL)) && (f_kind_at_29(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P155)rt_nil_check(f_text_at_30(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_23(&F->labels_427, &F->ltail_428, f_name_node_37());
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
}
if (((f_at_kind_28(((rt_int)1LL)) && (f_kind_at_29(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P155)rt_nil_check(f_text_at_30(((rt_int)1LL)))); b_; })))) {
F->match_429 = f_expect_id_36();
}
F->s_430 = f_unlabeled_statement_73();
if ((F->match_429 != NULL)) {
if (((((((((*(P160)rt_nil_check(F->s_430)).kind != ((rt_int)22LL)) && ((*(P160)rt_nil_check(F->s_430)).kind != ((rt_int)23LL))) && ((*(P160)rt_nil_check(F->s_430)).kind != ((rt_int)24LL))) && ((*(P160)rt_nil_check(F->s_430)).kind != ((rt_int)25LL))) && ((*(P160)rt_nil_check(F->s_430)).kind != ((rt_int)26LL))) && ((*(P160)rt_nil_check(F->s_430)).kind != ((rt_int)35LL))) && ((*(P160)rt_nil_check(F->s_430)).kind != ((rt_int)36LL)))) {
f_fail_11((*(P160)rt_nil_check(F->s_430)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P155)rt_nil_check(f_expect_id_36())), (*(P155)rt_nil_check(F->match_429))))) {
f_fail_11((*(P160)rt_nil_check(F->s_430)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P155)rt_nil_check(F->match_429))); b_; }));
}
(*(P160)rt_nil_check(F->s_430)).tag = F->match_429;
}
if ((F->labels_427 != NULL)) {
f_fail_11((*(P160)rt_nil_check(F->s_430)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_430;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_unlabeled_statement_73(void) {
  struct f_unlabeled_statement_73fr *F = rt_alloc(sizeof *F);
F->line_431 = f_cur_line_25();
F->x_432 = NULL;
if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_75();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_76();
goto ret_;
} else if ((f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_77();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_432 = f_nn_22(((rt_int)25LL), F->line_431);
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_432)).a = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_432;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_78();
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_432 = f_nn_22(((rt_int)27LL), F->line_431);
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_432)).name = f_expect_id_36();
F->result_ = F->x_432;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_432 = f_nn_22(((rt_int)28LL), F->line_431);
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
if ((!f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P160)rt_nil_check(F->x_432)).a = f_expr_44();
}
F->result_ = F->x_432;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_432 = f_nn_22(((rt_int)30LL), F->line_431);
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_432)).name = f_expect_id_36();
F->result_ = F->x_432;
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->result_ = f_nn_22(((rt_int)31LL), F->line_431);
goto ret_;
} else if (f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_432 = f_nn_22(((rt_int)32LL), F->line_431);
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_432)).a = f_postfix_53();
if ((!(f_at_kind_28(((rt_int)1LL)) && rt_str_eq((*(P155)rt_nil_check((*(P156)rt_nil_check((*(P158)rt_nil_check(g_toks_182)).p[rt_index(g_tpos_184, (*(P158)rt_nil_check(g_toks_182)).lo, (*(P158)rt_nil_check(g_toks_182)).hi) - (*(P158)rt_nil_check(g_toks_182)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
if (f_at_op_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P160)rt_nil_check(F->x_432)).b = f_actual_params_40();
}
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P160)rt_nil_check(F->x_432)).c = f_expr_44();
}
F->result_ = F->x_432;
goto ret_;
}
{
F->target_433 = NULL;
F->target_433 = f_postfix_53();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_432 = f_nn_22(((rt_int)20LL), F->line_431);
(*(P160)rt_nil_check(F->x_432)).a = F->target_433;
(*(P160)rt_nil_check(F->x_432)).b = f_expr_44();
} else {
F->x_432 = f_nn_22(((rt_int)21LL), F->line_431);
(*(P160)rt_nil_check(F->x_432)).a = F->target_433;
}
}
F->result_ = F->x_432;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_arm_74(P160 cond_434, P160 b_435, rt_int line_436) {
  struct f_arm_74fr *F = rt_alloc(sizeof *F);
F->cond_434 = cond_434;
F->b_435 = b_435;
F->line_436 = line_436;
F->x_437 = NULL;
F->x_437 = f_nn_22(((rt_int)60LL), F->line_436);
(*(P160)rt_nil_check(F->x_437)).a = F->cond_434;
(*(P160)rt_nil_check(F->x_437)).b = F->b_435;
F->result_ = F->x_437;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_if_stmt_75(void) {
  struct f_if_stmt_75fr *F = rt_alloc(sizeof *F);
F->x_438 = NULL;
F->x_438 = f_nn_22(((rt_int)22LL), f_cur_line_25());
F->head_439 = NULL;
F->tail_440 = NULL;
F->cond_441 = NULL;
F->go_442 = 1;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
F->cond_441 = f_expr_44();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_23(&F->head_439, &F->tail_440, f_arm_74(F->cond_441, f_body_57(), (*(P160)rt_nil_check(F->x_438)).line));
while (F->go_442) {
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_441 = f_expr_44();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_23(&F->head_439, &F->tail_440, f_arm_74(F->cond_441, f_body_57(), (*(P160)rt_nil_check(F->x_438)).line));
} else if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P160)rt_nil_check(F->x_438)).flag = ((rt_int)1LL);
(*(P160)rt_nil_check(F->x_438)).b = f_body_57();
} else {
F->go_442 = 0;
}
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P160)rt_nil_check(F->x_438)).a = F->head_439;
F->result_ = F->x_438;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_case_stmt_76(void) {
  struct f_case_stmt_76fr *F = rt_alloc(sizeof *F);
F->x_443 = NULL;
F->x_443 = f_nn_22(((rt_int)23LL), f_cur_line_25());
F->head_444 = NULL;
F->tail_445 = NULL;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_443)).a = f_expr_44();
while (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_446 = NULL;
F->ltail_447 = NULL;
F->more_448 = 1;
while (F->more_448) {
F->l_449 = NULL;
F->l_449 = f_nn_22(((rt_int)61LL), f_cur_line_25());
(*(P160)rt_nil_check(F->l_449)).a = f_expr_44();
if (f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P160)rt_nil_check(F->l_449)).b = f_expr_44();
}
f_append_23(&F->labs_446, &F->ltail_447, F->l_449);
F->more_448 = f_accept_op_33(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_23(&F->head_444, &F->tail_445, f_arm_74(F->labs_446, f_body_57(), (*(P160)rt_nil_check(F->x_443)).line));
}
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P160)rt_nil_check(F->x_443)).flag = ((rt_int)1LL);
(*(P160)rt_nil_check(F->x_443)).c = f_body_57();
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P160)rt_nil_check(F->x_443)).b = F->head_444;
F->result_ = F->x_443;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_repeat_stmt_77(void) {
  struct f_repeat_stmt_77fr *F = rt_alloc(sizeof *F);
F->x_450 = NULL;
F->x_450 = f_nn_22(((rt_int)24LL), f_cur_line_25());
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P160)rt_nil_check(F->x_450)).flag = ((rt_int)1LL);
(*(P160)rt_nil_check(F->x_450)).name = f_expect_id_36();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P160)rt_nil_check(F->x_450)).ival = ((rt_int)1LL);
}
(*(P160)rt_nil_check(F->x_450)).a = f_p_subtype_39();
} else {
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P160)rt_nil_check(F->x_450)).a = f_expr_44();
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P160)rt_nil_check(F->x_450)).b = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_450;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_guard_stmt_78(void) {
  struct f_guard_stmt_78fr *F = rt_alloc(sizeof *F);
F->x_451 = NULL;
F->x_451 = f_nn_22(((rt_int)26LL), f_cur_line_25());
F->head_452 = NULL;
F->tail_453 = NULL;
g_tpos_184 = rt_add(g_tpos_184, ((rt_int)1LL));
(*(P160)rt_nil_check(F->x_451)).a = f_body_57();
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_454 = NULL;
F->h_454 = f_nn_22(((rt_int)62LL), f_cur_line_25());
(*(P160)rt_nil_check(F->h_454)).a = f_id_list_38();
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P160)rt_nil_check(F->h_454)).b = f_body_57();
f_append_23(&F->head_452, &F->tail_453, F->h_454);
}
if (f_accept_kw_32(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P160)rt_nil_check(F->x_451)).flag = ((rt_int)1LL);
(*(P160)rt_nil_check(F->x_451)).c = f_body_57();
}
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_34(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P160)rt_nil_check(F->x_451)).b = F->head_452;
F->result_ = F->x_451;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_program_79(void) {
  struct f_program_79fr *F = rt_alloc(sizeof *F);
F->head_455 = NULL;
F->tail_456 = NULL;
while ((!f_at_kind_28(((rt_int)0LL)))) {
if ((!f_at_kw_26(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_31(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_23(&F->head_455, &F->tail_456, f_capsule_decl_69());
f_expect_op_35(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_455;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_80(rstr *s_457) {
  struct f_hash_80fr *F = rt_alloc(sizeof *F);
F->s_457 = s_457;
F->h_458 = ((rt_int)0LL);
{ rt_int lo460 = ((rt_int)1LL), hi461 = ((*F->s_457)).len;
for (rt_int it462 = lo460; it462 <= hi461; it462++) {
F->i_459 = it462;
F->h_458 = rt_mod(rt_add(rt_mul(F->h_458, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_457), F->i_459)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_458;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P170 f_lookup_81(rstr *name_463) {
  struct f_lookup_81fr *F = rt_alloc(sizeof *F);
F->name_463 = name_463;
F->y_464 = NULL;
F->y_464 = (*(P176)rt_nil_check(g_table_186)).p[rt_index(f_hash_80(&(*F->name_463)), (*(P176)rt_nil_check(g_table_186)).lo, (*(P176)rt_nil_check(g_table_186)).hi) - (*(P176)rt_nil_check(g_table_186)).lo];
while ((F->y_464 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_464)).name)), (*F->name_463))) {
F->result_ = F->y_464;
goto ret_;
}
F->y_464 = (*(P170)rt_nil_check(F->y_464)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_82(P170 y_465, rt_int line_466) {
  struct f_define_82fr *F = rt_alloc(sizeof *F);
F->y_465 = y_465;
F->line_466 = line_466;
F->h_467 = f_hash_80(&(*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_465)).name)));
F->z_468 = NULL;
F->z_468 = (*(P176)rt_nil_check(g_table_186)).p[rt_index(F->h_467, (*(P176)rt_nil_check(g_table_186)).lo, (*(P176)rt_nil_check(g_table_186)).hi) - (*(P176)rt_nil_check(g_table_186)).lo];
while ((F->z_468 != NULL)) {
if ((((*(P170)rt_nil_check(F->z_468)).depth == g_depth_187) && rt_str_eq((*(P155)rt_nil_check((*(P170)rt_nil_check(F->z_468)).name)), (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_465)).name))))) {
f_fail_11(F->line_466, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_465)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_468 = (*(P170)rt_nil_check(F->z_468)).chain;
}
(*(P170)rt_nil_check(F->y_465)).depth = g_depth_187;
(*(P170)rt_nil_check(F->y_465)).chain = (*(P176)rt_nil_check(g_table_186)).p[rt_index(F->h_467, (*(P176)rt_nil_check(g_table_186)).lo, (*(P176)rt_nil_check(g_table_186)).hi) - (*(P176)rt_nil_check(g_table_186)).lo];
(*(P176)rt_nil_check(g_table_186)).p[rt_index(F->h_467, (*(P176)rt_nil_check(g_table_186)).lo, (*(P176)rt_nil_check(g_table_186)).hi) - (*(P176)rt_nil_check(g_table_186)).lo] = F->y_465;
(*(P170)rt_nil_check(F->y_465)).stack = g_scope_stack_188;
g_scope_stack_188 = F->y_465;
ret_:
  return;
}

static void f_open_scope_83(void) {
  struct f_open_scope_83fr *F = rt_alloc(sizeof *F);
g_depth_187 = rt_add(g_depth_187, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_84(void) {
  struct f_close_scope_84fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_188 != NULL) && ((*(P170)rt_nil_check(g_scope_stack_188)).depth == g_depth_187))) {
(*(P176)rt_nil_check(g_table_186)).p[rt_index(f_hash_80(&(*(P155)rt_nil_check((*(P170)rt_nil_check(g_scope_stack_188)).name))), (*(P176)rt_nil_check(g_table_186)).lo, (*(P176)rt_nil_check(g_table_186)).hi) - (*(P176)rt_nil_check(g_table_186)).lo] = (*(P170)rt_nil_check(g_scope_stack_188)).chain;
g_scope_stack_188 = (*(P170)rt_nil_check(g_scope_stack_188)).stack;
}
g_depth_187 = rt_sub(g_depth_187, ((rt_int)1LL));
ret_:
  return;
}

static P170 f_new_sym_85(rt_int kind_469, P155 name_470) {
  struct f_new_sym_85fr *F = rt_alloc(sizeof *F);
F->kind_469 = kind_469;
F->name_470 = name_470;
F->y_471 = NULL;
{ R171 *cell472 = rt_alloc(sizeof(R171));
(*cell472).name = NULL;
(*cell472).t = NULL;
(*cell472).c = NULL;
(*cell472).access = NULL;
(*cell472).cname = NULL;
(*cell472).st = NULL;
(*cell472).decl = NULL;
(*cell472).params = NULL;
(*cell472).result = NULL;
(*cell472).members = NULL;
(*cell472).mnext = NULL;
(*cell472).chain = NULL;
(*cell472).stack = NULL;
F->y_471 = cell472;
}
(*(P170)rt_nil_check(F->y_471)).kind = F->kind_469;
(*(P170)rt_nil_check(F->y_471)).name = F->name_470;
F->result_ = F->y_471;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P164 f_new_typ_86(rt_int kind_473) {
  struct f_new_typ_86fr *F = rt_alloc(sizeof *F);
F->kind_473 = kind_473;
F->t_474 = NULL;
{ R165 *cell475 = rt_alloc(sizeof(R165));
(*cell475).name = NULL;
(*cell475).lits = NULL;
(*cell475).elem = NULL;
(*cell475).idx = NULL;
(*cell475).elemcons = NULL;
(*cell475).elemst = NULL;
(*cell475).fields = NULL;
(*cell475).target = NULL;
(*cell475).decl = NULL;
(*cell475).cname = NULL;
(*cell475).next = NULL;
F->t_474 = cell475;
}
(*(P164)rt_nil_check(F->t_474)).kind = F->kind_473;
F->result_ = F->t_474;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P162 f_new_cons_87(void) {
  struct f_new_cons_87fr *F = rt_alloc(sizeof *F);
F->c_476 = NULL;
{ R163 *cell477 = rt_alloc(sizeof(R163));
(*cell477).lo = NULL;
(*cell477).hi = NULL;
(*cell477).slen = NULL;
F->c_476 = cell477;
}
F->result_ = F->c_476;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_88(P160 a_478, P160 b_479) {
  struct f_same_lits_88fr *F = rt_alloc(sizeof *F);
F->a_478 = a_478;
F->b_479 = b_479;
F->x_480 = NULL;
F->x_480 = F->a_478;
F->y_481 = NULL;
F->y_481 = F->b_479;
while (((F->x_480 != NULL) && (F->y_481 != NULL))) {
if ((!rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->x_480)).name)), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->y_481)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_480 = (*(P160)rt_nil_check(F->x_480)).next;
F->y_481 = (*(P160)rt_nil_check(F->y_481)).next;
}
F->result_ = ((F->x_480 == NULL) && (F->y_481 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_89(P164 a_482, P164 b_483) {
  struct f_same_89fr *F = rt_alloc(sizeof *F);
F->a_482 = a_482;
F->b_483 = b_483;
if ((F->a_482 == F->b_483)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_482 == NULL) || (F->b_483 == NULL)) || ((*(P164)rt_nil_check(F->a_482)).kind != (*(P164)rt_nil_check(F->b_483)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)1LL)) || ((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)2LL))) || ((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)3LL))) || ((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)5LL))) || ((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)9LL))) || ((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_88((*(P164)rt_nil_check(F->a_482)).lits, (*(P164)rt_nil_check(F->b_483)).lits);
goto ret_;
}
if (((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)6LL))) {
F->result_ = (f_same_89((*(P164)rt_nil_check(F->a_482)).elem, (*(P164)rt_nil_check(F->b_483)).elem) && f_same_89((*(P164)rt_nil_check(F->a_482)).idx, (*(P164)rt_nil_check(F->b_483)).idx));
goto ret_;
}
if (((*(P164)rt_nil_check(F->a_482)).kind == ((rt_int)7LL))) {
F->f_484 = NULL;
F->f_484 = (*(P164)rt_nil_check(F->a_482)).fields;
F->g_485 = NULL;
F->g_485 = (*(P164)rt_nil_check(F->b_483)).fields;
while (((F->f_484 != NULL) && (F->g_485 != NULL))) {
if (((!rt_str_eq((*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_484)).name)), (*(P155)rt_nil_check((*(P166)rt_nil_check(F->g_485)).name)))) || (!f_same_89((*(P166)rt_nil_check(F->f_484)).t, (*(P166)rt_nil_check(F->g_485)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_484 = (*(P166)rt_nil_check(F->f_484)).next;
F->g_485 = (*(P166)rt_nil_check(F->g_485)).next;
}
F->result_ = ((F->f_484 == NULL) && (F->g_485 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_90(P164 t_486) {
  struct f_kind_name_90fr *F = rt_alloc(sizeof *F);
F->t_486 = t_486;
{ rt_int sel487 = (*(P164)rt_nil_check(F->t_486)).kind;
if (0 || (sel487 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel487 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel487 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel487 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel487 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel487 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel487 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel487 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_486)).name)));
goto ret_;
} else if (0 || (sel487 == ((rt_int)11LL))) {
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

static void f_check_type_91(P164 got_488, P164 want_489, rt_int line_490) {
  struct f_check_type_91fr *F = rt_alloc(sizeof *F);
F->got_488 = got_488;
F->want_489 = want_489;
F->line_490 = line_490;
if ((F->want_489 == NULL)) {
goto ret_;
}
if ((((*(P164)rt_nil_check(F->got_488)).kind == ((rt_int)11LL)) && ((*(P164)rt_nil_check(F->want_489)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_89(F->got_488, F->want_489))) {
f_fail_11(F->line_490, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_90(F->got_488)), rt_str(" where ", 7)), f_kind_name_90(F->want_489)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_92(P164 t_491) {
  struct f_ctype_92fr *F = rt_alloc(sizeof *F);
F->t_491 = t_491;
{ rt_int sel492 = (*(P164)rt_nil_check(F->t_491)).kind;
if (0 || (sel492 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel492 == ((rt_int)2LL)) || (sel492 == ((rt_int)4LL)) || (sel492 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel492 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel492 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel492 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else {
if (((*(P164)rt_nil_check(F->t_491)).cname == NULL)) {
f_declare_ctype_94(F->t_491);
} else if (((((*(P164)rt_nil_check(F->t_491)).kind == ((rt_int)7LL)) && (*(P164)rt_nil_check(F->t_491)).forward) && (!(*(P164)rt_nil_check(F->t_491)).defined))) {
(*(P164)rt_nil_check(F->t_491)).defined = 1;
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_491)).cname))), rt_str(" { ", 3)), f_field_decls_93(F->t_491)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_491)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_93(P164 t_493) {
  struct f_field_decls_93fr *F = rt_alloc(sizeof *F);
F->t_493 = t_493;
F->f_494 = NULL;
F->f_494 = (*(P164)rt_nil_check(F->t_493)).fields;
F->s_495 = NULL;
F->s_495 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_494 != NULL)) {
F->s_495 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->s_495)), f_ctype_92((*(P166)rt_nil_check(F->f_494)).t)), rt_str(" ", 1)), f_lower_s_8(&(*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_494)).name)))), rt_str("; ", 2)); b_; }));
F->f_494 = (*(P166)rt_nil_check(F->f_494)).next;
}
F->result_ = (*(P155)rt_nil_check(F->s_495));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_94(P164 t_496) {
  struct f_declare_ctype_94fr *F = rt_alloc(sizeof *F);
F->t_496 = t_496;
F->u_497 = NULL;
F->u_497 = g_all_types_189;
if ((((*(P164)rt_nil_check(F->t_496)).kind == ((rt_int)8LL)) && ((*(P164)rt_nil_check(F->t_496)).target == NULL))) {
f_finish_ptr_113(F->t_496);
if (((*(P164)rt_nil_check(F->t_496)).cname != NULL)) {
goto ret_;
}
}
if (((*(P164)rt_nil_check(F->t_496)).kind != ((rt_int)8LL))) {
while ((F->u_497 != NULL)) {
if ((((*(P164)rt_nil_check(F->u_497)).kind == (*(P164)rt_nil_check(F->t_496)).kind) && f_same_89(F->u_497, F->t_496))) {
(*(P164)rt_nil_check(F->t_496)).cname = (*(P164)rt_nil_check(F->u_497)).cname;
goto ret_;
}
F->u_497 = (*(P164)rt_nil_check(F->u_497)).next;
}
}
if (((*(P164)rt_nil_check(F->t_496)).kind == ((rt_int)6LL))) {
(*(P164)rt_nil_check(F->t_496)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P164)rt_nil_check(F->t_496)).kind == ((rt_int)7LL))) {
(*(P164)rt_nil_check(F->t_496)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P164)rt_nil_check(F->t_496)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P164)rt_nil_check(F->t_496)).next = g_all_types_189;
g_all_types_189 = F->t_496;
if (((*(P164)rt_nil_check(F->t_496)).kind == ((rt_int)8LL))) {
F->target_498 = NULL;
F->target_498 = (*(P164)rt_nil_check(F->t_496)).target;
if (((*(P164)rt_nil_check(F->target_498)).kind == ((rt_int)7LL))) {
if (((*(P164)rt_nil_check(F->target_498)).cname == NULL)) {
(*(P164)rt_nil_check(F->target_498)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P164)rt_nil_check(F->target_498)).next = g_all_types_189;
g_all_types_189 = F->target_498;
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->target_498)).cname))), rt_str(" ", 1)), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->target_498)).cname))), rt_str(";", 1)); b_; }));
(*(P164)rt_nil_check(F->target_498)).forward = 1;
}
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->target_498)).cname))), rt_str(" *", 2)), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_92(F->target_498)), rt_str(" *", 2)), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P164)rt_nil_check(F->t_496)).kind == ((rt_int)6LL))) {
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(" ", 1)), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(";", 1)); b_; }));
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(" { rt_int lo, hi; ", 18)), f_ctype_92((*(P164)rt_nil_check(F->t_496)).elem)), rt_str(" *p; };", 7)); b_; }));
} else {
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(" ", 1)), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(";", 1)); b_; }));
(*(P164)rt_nil_check(F->t_496)).defined = 1;
f_put_13(g_out_types_191, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_496)).cname))), rt_str(" { ", 3)), f_field_decls_93(F->t_496)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_95(void) {
  struct f_init_ascii_95fr *F = rt_alloc(sizeof *F);
F->names_499 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_500 = NULL;
F->tail_501 = NULL;
F->start_502 = ((rt_int)1LL);
{ rt_int lo504 = ((rt_int)1LL), hi505 = (F->names_499).len;
for (rt_int it506 = lo504; it506 <= hi505; it506++) {
F->i_503 = it506;
if ((rt_str_get(F->names_499, F->i_503) == 32)) {
F->lit_507 = NULL;
F->lit_507 = f_nn_22(((rt_int)4LL), ((rt_int)0LL));
(*(P160)rt_nil_check(F->lit_507)).name = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_499, F->start_502, rt_sub(F->i_503, ((rt_int)1LL))); b_; }));
f_append_23(&F->head_500, &F->tail_501, F->lit_507);
F->start_502 = rt_add(F->i_503, ((rt_int)1LL));
}
}
}
g_ty_ascii_212 = f_new_typ_86(((rt_int)4LL));
(*(P164)rt_nil_check(g_ty_ascii_212)).lits = F->head_500;
(*(P164)rt_nil_check(g_ty_ascii_212)).name = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_96(P160 lits_508, rstr *name_509) {
  struct f_lit_index_96fr *F = rt_alloc(sizeof *F);
F->lits_508 = lits_508;
F->name_509 = name_509;
F->i_510 = ((rt_int)0LL);
F->l_511 = NULL;
F->l_511 = F->lits_508;
while ((F->l_511 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->l_511)).name)), (*F->name_509))) {
F->result_ = F->i_510;
goto ret_;
}
F->i_510 = rt_add(F->i_510, ((rt_int)1LL));
F->l_511 = (*(P160)rt_nil_check(F->l_511)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P164 f_resolve_subtype_97(P160 st_512, P162 *c_513) {
  struct f_resolve_subtype_97fr *F = rt_alloc(sizeof *F);
F->st_512 = st_512;
F->c_513 = c_513;
F->t_514 = NULL;
F->dummy_516 = NULL;
(*F->c_513) = f_new_cons_87();
{ rt_int sel517 = (*(P160)rt_nil_check(F->st_512)).kind;
if (0 || (sel517 == ((rt_int)70LL))) {
if (((*(P160)rt_nil_check(F->st_512)).a != NULL)) {
(*(P162)rt_nil_check((*F->c_513))).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_144((*(P160)rt_nil_check(F->st_512)).a, g_ty_int_209, &F->dummy_516); b_; }));
(*(P162)rt_nil_check((*F->c_513))).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_144((*(P160)rt_nil_check(F->st_512)).b, g_ty_int_209, &F->dummy_516); b_; }));
(*(P162)rt_nil_check((*F->c_513))).mlo = f_manifest_99((*(P160)rt_nil_check(F->st_512)).a, &F->ok_515);
(*(P162)rt_nil_check((*F->c_513))).hasm = F->ok_515;
(*(P162)rt_nil_check((*F->c_513))).mhi = f_manifest_99((*(P160)rt_nil_check(F->st_512)).b, &F->ok_515);
(*(P162)rt_nil_check((*F->c_513))).hasm = ((*(P162)rt_nil_check((*F->c_513))).hasm && F->ok_515);
}
F->result_ = g_ty_int_209;
goto ret_;
} else if (0 || (sel517 == ((rt_int)71LL))) {
F->result_ = g_ty_float_211;
goto ret_;
} else if (0 || (sel517 == ((rt_int)72LL))) {
F->t_514 = f_new_typ_86(((rt_int)4LL));
(*(P164)rt_nil_check(F->t_514)).lits = (*(P160)rt_nil_check(F->st_512)).a;
if (((*(P160)rt_nil_check(F->st_512)).b != NULL)) {
(*(P162)rt_nil_check((*F->c_513))).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_144((*(P160)rt_nil_check(F->st_512)).b, F->t_514, &F->dummy_516); b_; }));
(*(P162)rt_nil_check((*F->c_513))).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_144((*(P160)rt_nil_check(F->st_512)).c, F->t_514, &F->dummy_516); b_; }));
}
F->result_ = F->t_514;
goto ret_;
} else if (0 || (sel517 == ((rt_int)73LL))) {
F->t_514 = f_resolve_subtype_97((*(P160)rt_nil_check(F->st_512)).a, &(*F->c_513));
if ((!f_same_89(F->t_514, g_ty_ascii_212))) {
f_fail_11((*(P160)rt_nil_check(F->st_512)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_513) = f_new_cons_87();
if (((*(P160)rt_nil_check(F->st_512)).b != NULL)) {
(*(P162)rt_nil_check((*F->c_513))).slen = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_144((*(P160)rt_nil_check(F->st_512)).b, g_ty_int_209, &F->dummy_516); b_; }));
}
F->result_ = g_ty_string_213;
goto ret_;
} else if (0 || (sel517 == ((rt_int)74LL))) {
if ((f_list_len_24((*(P160)rt_nil_check(F->st_512)).a) != ((rt_int)1LL))) {
f_fail_11((*(P160)rt_nil_check(F->st_512)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only one-dimensional arrays are supported", 41); b_; }));
}
{
F->ic_518 = NULL;
F->ec_519 = NULL;
F->it_520 = NULL;
F->it_520 = f_resolve_subtype_97((*(P160)rt_nil_check(F->st_512)).a, &F->ic_518);
F->et_521 = NULL;
F->et_521 = f_resolve_subtype_97((*(P160)rt_nil_check(F->st_512)).b, &F->ec_519);
F->t_514 = f_new_typ_86(((rt_int)6LL));
(*(P164)rt_nil_check(F->t_514)).idx = F->it_520;
(*(P164)rt_nil_check(F->t_514)).elem = F->et_521;
(*(P164)rt_nil_check(F->t_514)).elemcons = F->ec_519;
(*(P164)rt_nil_check(F->t_514)).elemst = (*(P160)rt_nil_check(F->st_512)).b;
if (((*(P162)rt_nil_check(F->ic_518)).lo != NULL)) {
(*(P162)rt_nil_check((*F->c_513))).lo = (*(P162)rt_nil_check(F->ic_518)).lo;
(*(P162)rt_nil_check((*F->c_513))).hi = (*(P162)rt_nil_check(F->ic_518)).hi;
} else if (((*(P164)rt_nil_check(F->it_520)).kind == ((rt_int)4LL))) {
(*(P162)rt_nil_check((*F->c_513))).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P162)rt_nil_check((*F->c_513))).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_4(rt_sub(f_list_len_24((*(P164)rt_nil_check(F->it_520)).lits), ((rt_int)1LL))); b_; }));
}
}
F->result_ = F->t_514;
goto ret_;
} else if (0 || (sel517 == ((rt_int)75LL))) {
F->t_514 = f_new_typ_86(((rt_int)7LL));
{
F->comp_522 = NULL;
F->comp_522 = (*(P160)rt_nil_check(F->st_512)).a;
F->tail_523 = NULL;
while ((F->comp_522 != NULL)) {
F->cc_524 = NULL;
F->f_525 = NULL;
{ R167 *cell526 = rt_alloc(sizeof(R167));
(*cell526).name = NULL;
(*cell526).t = NULL;
(*cell526).c = NULL;
(*cell526).st = NULL;
(*cell526).next = NULL;
F->f_525 = cell526;
}
(*(P166)rt_nil_check(F->f_525)).name = (*(P160)rt_nil_check(F->comp_522)).name;
(*(P166)rt_nil_check(F->f_525)).t = f_resolve_subtype_97((*(P160)rt_nil_check(F->comp_522)).a, &F->cc_524);
(*(P166)rt_nil_check(F->f_525)).c = F->cc_524;
(*(P166)rt_nil_check(F->f_525)).st = (*(P160)rt_nil_check(F->comp_522)).a;
if ((F->tail_523 == NULL)) {
(*(P164)rt_nil_check(F->t_514)).fields = F->f_525;
} else {
(*(P166)rt_nil_check(F->tail_523)).next = F->f_525;
}
F->tail_523 = F->f_525;
F->comp_522 = (*(P160)rt_nil_check(F->comp_522)).next;
}
}
F->result_ = F->t_514;
goto ret_;
} else if (0 || (sel517 == ((rt_int)79LL))) {
F->result_ = g_ty_file_215;
goto ret_;
} else if (0 || (sel517 == ((rt_int)80LL))) {
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->st_512)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_210;
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->st_512)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_212;
goto ret_;
}
{
F->y_527 = NULL;
F->y_527 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->st_512)).name)));
if ((F->y_527 == NULL)) {
f_fail_11((*(P160)rt_nil_check(F->st_512)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->st_512)).name))); b_; }));
}
if (((((*(P170)rt_nil_check(F->y_527)).kind == ((rt_int)6LL)) || ((*(P170)rt_nil_check(F->y_527)).kind == ((rt_int)5LL))) && ((*(P170)rt_nil_check(F->y_527)).t != NULL))) {
if (((*(P170)rt_nil_check(F->y_527)).c != NULL)) {
(*F->c_513) = (*(P170)rt_nil_check(F->y_527)).c;
}
F->result_ = (*(P170)rt_nil_check(F->y_527)).t;
goto ret_;
}
if ((((*(P170)rt_nil_check(F->y_527)).kind == ((rt_int)6LL)) || ((*(P170)rt_nil_check(F->y_527)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_97((*(P170)rt_nil_check(F->y_527)).st, &(*F->c_513));
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->st_512)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->st_512)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_11((*(P160)rt_nil_check(F->st_512)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_98(rstr *lval_528, P164 t_529, P162 c_530) {
  struct f_init_storage_98fr *F = rt_alloc(sizeof *F);
F->lval_528 = lval_528;
F->t_529 = t_529;
F->c_530 = c_530;
if (((*(P164)rt_nil_check(F->t_529)).kind == ((rt_int)8LL))) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_528), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P164)rt_nil_check(F->t_529)).kind == ((rt_int)5LL))) {
if (((*(P162)rt_nil_check(F->c_530)).slen == NULL)) {
f_fail_11(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_528), rt_str(" = rt_str_new(", 14)), (*(P155)rt_nil_check((*(P162)rt_nil_check(F->c_530)).slen))), rt_str(");", 2)); b_; }));
} else if (((*(P164)rt_nil_check(F->t_529)).kind == ((rt_int)6LL))) {
if (((*(P162)rt_nil_check(F->c_530)).lo == NULL)) {
f_fail_11(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_528), rt_str(".lo = ", 6)), (*(P155)rt_nil_check((*(P162)rt_nil_check(F->c_530)).lo))), rt_str("; ", 2)), (*F->lval_528)), rt_str(".hi = ", 6)), (*(P155)rt_nil_check((*(P162)rt_nil_check(F->c_530)).hi))), rt_str(";", 1)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_528), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_92((*(P164)rt_nil_check(F->t_529)).elem)), rt_str(") * (size_t)(", 13)), (*F->lval_528)), rt_str(".hi >= ", 7)), (*F->lval_528)), rt_str(".lo \? ", 6)), (*F->lval_528)), rt_str(".hi - ", 6)), (*F->lval_528)), rt_str(".lo + 1 : 0));", 14)); b_; }));
if (((((*(P164)rt_nil_check((*(P164)rt_nil_check(F->t_529)).elem)).kind == ((rt_int)5LL)) || ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->t_529)).elem)).kind == ((rt_int)6LL))) || ((*(P164)rt_nil_check((*(P164)rt_nil_check(F->t_529)).elem)).kind == ((rt_int)7LL)))) {
F->i_531 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_531), rt_str(" = 0; ", 6)), F->i_531), rt_str(" <= ", 4)), (*F->lval_528)), rt_str(".hi - ", 6)), (*F->lval_528)), rt_str(".lo; ", 5)), F->i_531), rt_str("++) {", 5)); b_; }));
f_init_storage_98(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_528), rt_str(".p[", 3)), F->i_531), rt_str("]", 1)); b_; }), (*(P164)rt_nil_check(F->t_529)).elem, (*(P164)rt_nil_check(F->t_529)).elemcons);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P164)rt_nil_check(F->t_529)).kind == ((rt_int)7LL))) {
F->f_532 = NULL;
F->f_532 = (*(P164)rt_nil_check(F->t_529)).fields;
while ((F->f_532 != NULL)) {
f_init_storage_98(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_528), rt_str(".", 1)), f_lower_s_8(&(*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_532)).name)))); b_; }), (*(P166)rt_nil_check(F->f_532)).t, (*(P166)rt_nil_check(F->f_532)).c);
F->f_532 = (*(P166)rt_nil_check(F->f_532)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_99(P160 e_533, int *ok_534) {
  struct f_manifest_99fr *F = rt_alloc(sizeof *F);
F->e_533 = e_533;
F->ok_534 = ok_534;
(*F->ok_534) = 0;
if (((*(P160)rt_nil_check(F->e_533)).kind == ((rt_int)1LL))) {
(*F->ok_534) = 1;
F->result_ = (*(P160)rt_nil_check(F->e_533)).ival;
goto ret_;
} else if (((*(P160)rt_nil_check(F->e_533)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_99((*(P160)rt_nil_check(F->e_533)).a, &(*F->ok_534));
goto ret_;
} else if ((((*(P160)rt_nil_check(F->e_533)).kind == ((rt_int)8LL)) && rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_533)).name)), rt_str("-", 1)))) {
F->a_535 = f_manifest_99((*(P160)rt_nil_check(F->e_533)).a, &(*F->ok_534));
F->result_ = rt_neg(F->a_535);
goto ret_;
} else if ((((*(P160)rt_nil_check(F->e_533)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_533)).name)), rt_str("+", 1)) || rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_533)).name)), rt_str("-", 1))) || rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_533)).name)), rt_str("*", 1))))) {
F->a_535 = f_manifest_99((*(P160)rt_nil_check(F->e_533)).a, &(*F->ok_534));
F->b_536 = f_manifest_99((*(P160)rt_nil_check(F->e_533)).b, &F->ok2_537);
(*F->ok_534) = ((*F->ok_534) && F->ok2_537);
if ((!(*F->ok_534))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_533)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_535, F->b_536);
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_533)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_535, F->b_536);
goto ret_;
}
F->result_ = rt_mul(F->a_535, F->b_536);
goto ret_;
} else if (((*(P160)rt_nil_check(F->e_533)).kind == ((rt_int)7LL))) {
F->y_538 = NULL;
F->y_538 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_533)).name)));
if ((((F->y_538 != NULL) && ((*(P170)rt_nil_check(F->y_538)).kind == ((rt_int)2LL))) && (*(P170)rt_nil_check(F->y_538)).hasmv)) {
(*F->ok_534) = 1;
F->result_ = (*(P170)rt_nil_check(F->y_538)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_100(rstr *lval_539, P164 t_540, rstr *v_541, P162 c_542) {
  struct f_assign_code_100fr *F = rt_alloc(sizeof *F);
F->lval_539 = lval_539;
F->t_540 = t_540;
F->v_541 = v_541;
F->c_542 = c_542;
if (((*(P164)rt_nil_check(F->t_540)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_539)), rt_str(", ", 2)), (*F->v_541)), rt_str(");", 2));
goto ret_;
} else if ((((*(P164)rt_nil_check(F->t_540)).kind == ((rt_int)6LL)) || ((*(P164)rt_nil_check(F->t_540)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_92(F->t_540)), rt_str("(&", 2)), (*F->lval_539)), rt_str(", ", 2)), (*F->v_541)), rt_str(");", 2));
goto ret_;
} else if (((((*(P164)rt_nil_check(F->t_540)).kind == ((rt_int)1LL)) && (F->c_542 != NULL)) && (*(P162)rt_nil_check(F->c_542)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_539), rt_str(" = rt_range(", 12)), (*F->v_541)), rt_str(", ", 2)), f_itos_4((*(P162)rt_nil_check(F->c_542)).mlo)), rt_str(", ", 2)), f_itos_4((*(P162)rt_nil_check(F->c_542)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_539), rt_str(" = ", 3)), (*F->v_541)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_101(P164 t_543, rstr *v_544) {
  struct f_copy_code_101fr *F = rt_alloc(sizeof *F);
F->t_543 = t_543;
F->v_544 = v_544;
if (((*(P164)rt_nil_check(F->t_543)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_544)), rt_str(")", 1));
goto ret_;
} else if ((((*(P164)rt_nil_check(F->t_543)).kind == ((rt_int)6LL)) || ((*(P164)rt_nil_check(F->t_543)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_92(F->t_543)), rt_str("(", 1)), (*F->v_544)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_544);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_102(P164 t_545, rstr *a_546, rstr *b_547) {
  struct f_eq_code_102fr *F = rt_alloc(sizeof *F);
F->t_545 = t_545;
F->a_546 = a_546;
F->b_547 = b_547;
if (((*(P164)rt_nil_check(F->t_545)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_546)), rt_str(", ", 2)), (*F->b_547)), rt_str(")", 1));
goto ret_;
} else if ((((*(P164)rt_nil_check(F->t_545)).kind == ((rt_int)6LL)) || ((*(P164)rt_nil_check(F->t_545)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_92(F->t_545)), rt_str("(", 1)), (*F->a_546)), rt_str(", ", 2)), (*F->b_547)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_546)), rt_str(" == ", 4)), (*F->b_547)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_103(rstr *lval_548, P164 t_549, rstr *v_550) {
  struct f_elem_assign_103fr *F = rt_alloc(sizeof *F);
F->lval_548 = lval_548;
F->t_549 = t_549;
F->v_550 = v_550;
F->result_ = f_assign_code_100(&(*F->lval_548), F->t_549, &(*F->v_550), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_104(P172 l_551, rstr *s_552) {
  struct f_seen_name_104fr *F = rt_alloc(sizeof *F);
F->l_551 = l_551;
F->s_552 = s_552;
F->p_553 = NULL;
F->p_553 = F->l_551;
while ((F->p_553 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P172)rt_nil_check(F->p_553)).s)), (*F->s_552))) {
F->result_ = 1;
goto ret_;
}
F->p_553 = (*(P172)rt_nil_check(F->p_553)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_105(void) {
  struct f_emit_helpers_105fr *F = rt_alloc(sizeof *F);
F->order_554 = NULL;
F->t_555 = NULL;
F->t_555 = g_all_types_189;
F->done_556 = NULL;
while ((F->t_555 != NULL)) {
if ((((*(P164)rt_nil_check(F->t_555)).kind != ((rt_int)8LL)) && (!f_seen_name_104(F->done_556, &(*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_555)).cname)))))) {
F->l_557 = NULL;
F->c_558 = rt_str_new(((*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_555)).cname))).len);
rt_str_assign(&F->c_558, (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_555)).cname)));
{ R173 *cell559 = rt_alloc(sizeof(R173));
(*cell559).s = NULL;
(*cell559).next = NULL;
F->l_557 = cell559;
}
(*(P172)rt_nil_check(F->l_557)).s = (*(P164)rt_nil_check(F->t_555)).cname;
(*(P172)rt_nil_check(F->l_557)).next = F->done_556;
F->done_556 = F->l_557;
f_put_13(g_out_helpers_192, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_558), rt_str("(", 1)), F->c_558), rt_str(" *d, ", 5)), F->c_558), rt_str(" s);", 4)); b_; }));
f_put_13(g_out_helpers_192, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_558), rt_str(" cp_", 4)), F->c_558), rt_str("(", 1)), F->c_558), rt_str(" s);", 4)); b_; }));
f_put_13(g_out_helpers_192, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_558), rt_str("(", 1)), F->c_558), rt_str(" a, ", 4)), F->c_558), rt_str(" b);", 4)); b_; }));
f_helper_bodies_106(F->t_555);
}
F->t_555 = (*(P164)rt_nil_check(F->t_555)).next;
}
ret_:
  return;
}

static void f_helper_bodies_106(P164 t_560) {
  struct f_helper_bodies_106fr *F = rt_alloc(sizeof *F);
F->t_560 = t_560;
F->c_561 = rt_str_new(((*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_560)).cname))).len);
rt_str_assign(&F->c_561, (*(P155)rt_nil_check((*(P164)rt_nil_check(F->t_560)).cname)));
F->b_562 = NULL;
F->b_562 = g_out_funcs_195;
if (((*(P164)rt_nil_check(F->t_560)).kind == ((rt_int)6LL))) {
F->e_563 = NULL;
F->e_563 = (*(P164)rt_nil_check(F->t_560)).elem;
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_561), rt_str("(", 1)), F->c_561), rt_str(" *d, ", 5)), F->c_561), rt_str(" s) {", 5)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_9()), rt_str("array length", 12)), f_q_9()), rt_str(");", 2)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= s.hi - s.lo; i++) { ", 46), f_elem_assign_103(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_561), rt_str(" cp_", 4)), F->c_561), rt_str("(", 1)), F->c_561), rt_str(" s) {", 5)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_561), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_92(F->e_563)), rt_str(") * (size_t)(s.hi >= s.lo \? s.hi - s.lo + 1 : 0));", 50)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = ", 53), f_copy_code_101(F->e_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_561), rt_str("(", 1)), F->c_561), rt_str(" a, ", 4)), F->c_561), rt_str(" b) {", 5)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!(", 50), f_eq_code_102(F->e_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_564 = NULL;
F->f_564 = (*(P164)rt_nil_check(F->t_560)).fields;
F->conds_565 = NULL;
F->conds_565 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_561), rt_str("(", 1)), F->c_561), rt_str(" *d, ", 5)), F->c_561), rt_str(" s) {", 5)); b_; }));
while ((F->f_564 != NULL)) {
F->fn_566 = rt_str_copy(f_lower_s_8(&(*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_564)).name))));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_103(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_566); b_; }), (*(P166)rt_nil_check(F->f_564)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_566); b_; }))); b_; }));
F->f_564 = (*(P166)rt_nil_check(F->f_564)).next;
}
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_561), rt_str(" cp_", 4)), F->c_561), rt_str("(", 1)), F->c_561), rt_str(" s) {", 5)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_561), rt_str(" d = s;", 7)); b_; }));
F->f_564 = (*(P164)rt_nil_check(F->t_560)).fields;
while ((F->f_564 != NULL)) {
F->fn_567 = rt_str_copy(f_lower_s_8(&(*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_564)).name))));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_567), rt_str(" = ", 3)), f_copy_code_101((*(P166)rt_nil_check(F->f_564)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_567); b_; }))), rt_str(";", 1)); b_; }));
F->conds_565 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->conds_565)), rt_str(" && ", 4)), f_eq_code_102((*(P166)rt_nil_check(F->f_564)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_567); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_567); b_; }))); b_; }));
F->f_564 = (*(P166)rt_nil_check(F->f_564)).next;
}
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_561), rt_str("(", 1)), F->c_561), rt_str(" a, ", 4)), F->c_561), rt_str(" b) {", 5)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P155)rt_nil_check(F->conds_565))), rt_str(";", 1)); b_; }));
f_put_13(F->b_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_107(P160 elems_568) {
  struct f_declare_body_107fr *F = rt_alloc(sizeof *F);
F->elems_568 = elems_568;
F->e_569 = NULL;
F->e_569 = F->elems_568;
while ((F->e_569 != NULL)) {
if ((((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)41LL)) && ((*(P160)rt_nil_check(F->e_569)).flag == ((rt_int)0LL)))) {
f_manifest_const_108(F->e_569);
} else if (((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)47LL))) {
f_gen_capsule_111(F->e_569);
} else if (((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)48LL))) {
f_gen_expose_112(F->e_569);
} else if (((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)49LL))) {
F->y_570 = NULL;
F->y_570 = f_new_sym_85(((rt_int)7LL), (*(P160)rt_nil_check(F->e_569)).name);
(*(P170)rt_nil_check(F->y_570)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_8(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_569)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_82(F->y_570, (*(P160)rt_nil_check(F->e_569)).line);
f_put_13(g_out_globals_194, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_570)).cname))), rt_str(";", 1)); b_; }));
f_put_13(g_out_excs_197, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_570)).cname))), rt_str(" = rt_exc(", 10)), f_q_9()), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_569)).name))), f_q_9()), rt_str(");", 2)); b_; }));
} else if (((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)42LL))) {
F->y_571 = NULL;
F->y_571 = f_new_sym_85(((rt_int)6LL), (*(P160)rt_nil_check(F->e_569)).name);
(*(P170)rt_nil_check(F->y_571)).st = (*(P160)rt_nil_check(F->e_569)).a;
f_define_82(F->y_571, (*(P160)rt_nil_check(F->e_569)).line);
} else if (((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)44LL))) {
F->y_572 = NULL;
F->y_572 = f_new_sym_85(((rt_int)5LL), (*(P160)rt_nil_check(F->e_569)).name);
F->t_573 = NULL;
F->t_573 = f_new_typ_86(((rt_int)8LL));
(*(P164)rt_nil_check(F->t_573)).name = (*(P160)rt_nil_check(F->e_569)).name;
(*(P164)rt_nil_check(F->t_573)).decl = F->e_569;
(*(P170)rt_nil_check(F->y_572)).t = F->t_573;
f_define_82(F->y_572, (*(P160)rt_nil_check(F->e_569)).line);
} else if (((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)43LL))) {
F->y_574 = NULL;
F->y_574 = f_new_sym_85(((rt_int)5LL), (*(P160)rt_nil_check(F->e_569)).name);
(*(P170)rt_nil_check(F->y_574)).st = (*(P160)rt_nil_check(F->e_569)).a;
f_define_82(F->y_574, (*(P160)rt_nil_check(F->e_569)).line);
}
F->e_569 = (*(P160)rt_nil_check(F->e_569)).next;
}
F->e_569 = F->elems_568;
while ((F->e_569 != NULL)) {
if ((((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)45LL)) || ((*(P160)rt_nil_check(F->e_569)).kind == ((rt_int)46LL)))) {
f_declare_subprogram_114(F->e_569);
}
F->e_569 = (*(P160)rt_nil_check(F->e_569)).next;
}
ret_:
  return;
}

static void f_manifest_const_108(P160 d_575) {
  struct f_manifest_const_108fr *F = rt_alloc(sizeof *F);
F->d_575 = d_575;
F->y_578 = NULL;
F->c_579 = NULL;
if (((*(P160)rt_nil_check(F->d_575)).a != NULL)) {
if ((((*(P160)rt_nil_check((*(P160)rt_nil_check(F->d_575)).a)).kind != ((rt_int)70LL)) || ((*(P160)rt_nil_check((*(P160)rt_nil_check(F->d_575)).a)).a != NULL))) {
goto ret_;
}
}
F->v_577 = f_manifest_99((*(P160)rt_nil_check(F->d_575)).b, &F->ok_576);
if ((!F->ok_576)) {
goto ret_;
}
(*(P160)rt_nil_check(F->d_575)).flag = ((rt_int)1LL);
F->y_578 = f_new_sym_85(((rt_int)2LL), (*(P160)rt_nil_check(F->d_575)).name);
(*(P170)rt_nil_check(F->y_578)).t = g_ty_int_209;
(*(P170)rt_nil_check(F->y_578)).c = f_new_cons_87();
(*(P170)rt_nil_check(F->y_578)).mvalue = F->v_577;
(*(P170)rt_nil_check(F->y_578)).hasmv = 1;
(*(P170)rt_nil_check(F->y_578)).ro_flag = 1;
(*(P170)rt_nil_check(F->y_578)).access = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_4(F->v_577)), rt_str("LL)", 3)); b_; }));
f_define_82(F->y_578, (*(P160)rt_nil_check(F->d_575)).line);
ret_:
  return;
}

static int f_exported_109(P160 d_580, rstr *name_581, int *ro_582) {
  struct f_exported_109fr *F = rt_alloc(sizeof *F);
F->d_580 = d_580;
F->name_581 = name_581;
F->ro_582 = ro_582;
F->p_583 = NULL;
F->p_583 = (*(P160)rt_nil_check(F->d_580)).a;
(*F->ro_582) = 0;
if (((*(P160)rt_nil_check(F->d_580)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_583 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->p_583)).name)), (*F->name_581))) {
(*F->ro_582) = ((*(P160)rt_nil_check(F->p_583)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_583 = (*(P160)rt_nil_check(F->p_583)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P170 f_copy_sym_110(P170 y_584) {
  struct f_copy_sym_110fr *F = rt_alloc(sizeof *F);
F->y_584 = y_584;
F->z_585 = NULL;
{ R171 *cell586 = rt_alloc(sizeof(R171));
(*cell586).name = NULL;
(*cell586).t = NULL;
(*cell586).c = NULL;
(*cell586).access = NULL;
(*cell586).cname = NULL;
(*cell586).st = NULL;
(*cell586).decl = NULL;
(*cell586).params = NULL;
(*cell586).result = NULL;
(*cell586).members = NULL;
(*cell586).mnext = NULL;
(*cell586).chain = NULL;
(*cell586).stack = NULL;
F->z_585 = cell586;
}
(*(P170)rt_nil_check(F->z_585)).kind = (*(P170)rt_nil_check(F->y_584)).kind;
(*(P170)rt_nil_check(F->z_585)).name = (*(P170)rt_nil_check(F->y_584)).name;
(*(P170)rt_nil_check(F->z_585)).t = (*(P170)rt_nil_check(F->y_584)).t;
(*(P170)rt_nil_check(F->z_585)).c = (*(P170)rt_nil_check(F->y_584)).c;
(*(P170)rt_nil_check(F->z_585)).access = (*(P170)rt_nil_check(F->y_584)).access;
(*(P170)rt_nil_check(F->z_585)).cname = (*(P170)rt_nil_check(F->y_584)).cname;
(*(P170)rt_nil_check(F->z_585)).ro_flag = (*(P170)rt_nil_check(F->y_584)).ro_flag;
(*(P170)rt_nil_check(F->z_585)).mvalue = (*(P170)rt_nil_check(F->y_584)).mvalue;
(*(P170)rt_nil_check(F->z_585)).hasmv = (*(P170)rt_nil_check(F->y_584)).hasmv;
(*(P170)rt_nil_check(F->z_585)).st = (*(P170)rt_nil_check(F->y_584)).st;
(*(P170)rt_nil_check(F->z_585)).decl = (*(P170)rt_nil_check(F->y_584)).decl;
(*(P170)rt_nil_check(F->z_585)).params = (*(P170)rt_nil_check(F->y_584)).params;
(*(P170)rt_nil_check(F->z_585)).result = (*(P170)rt_nil_check(F->y_584)).result;
(*(P170)rt_nil_check(F->z_585)).level = (*(P170)rt_nil_check(F->y_584)).level;
(*(P170)rt_nil_check(F->z_585)).byref = (*(P170)rt_nil_check(F->y_584)).byref;
(*(P170)rt_nil_check(F->z_585)).members = (*(P170)rt_nil_check(F->y_584)).members;
F->result_ = F->z_585;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_111(P160 d_587) {
  struct f_gen_capsule_111fr *F = rt_alloc(sizeof *F);
F->d_587 = d_587;
F->y_588 = NULL;
F->y_588 = f_new_sym_85(((rt_int)8LL), (*(P160)rt_nil_check(F->d_587)).name);
F->ctx_589 = NULL;
F->m_590 = NULL;
F->p_591 = NULL;
F->p_591 = (*(P160)rt_nil_check(F->d_587)).a;
(*(P170)rt_nil_check(F->y_588)).decl = F->d_587;
f_open_scope_83();
{ R181 *cell593 = rt_alloc(sizeof(R181));
(*cell593).imps = NULL;
(*cell593).next = NULL;
F->ctx_589 = cell593;
}
(*(P180)rt_nil_check(F->ctx_589)).depth = g_depth_187;
(*(P180)rt_nil_check(F->ctx_589)).imps = (*(P160)rt_nil_check(F->d_587)).d;
(*(P180)rt_nil_check(F->ctx_589)).all_imp = ((*(P160)rt_nil_check(F->d_587)).flag >= ((rt_int)2LL));
(*(P180)rt_nil_check(F->ctx_589)).next = g_fctx_202;
g_fctx_202 = F->ctx_589;
f_declare_body_107((*(P160)rt_nil_check(F->d_587)).c);
f_body_elements_121((*(P160)rt_nil_check(F->d_587)).c);
g_fctx_202 = (*(P180)rt_nil_check(g_fctx_202)).next;
F->m_590 = g_scope_stack_188;
while (((F->m_590 != NULL) && ((*(P170)rt_nil_check(F->m_590)).depth == g_depth_187))) {
if (((((*(P170)rt_nil_check(F->m_590)).kind == ((rt_int)5LL)) || ((*(P170)rt_nil_check(F->m_590)).kind == ((rt_int)6LL))) && ((*(P170)rt_nil_check(F->m_590)).t == NULL))) {
(*(P170)rt_nil_check(F->m_590)).t = f_resolve_subtype_97((*(P170)rt_nil_check(F->m_590)).st, &(*(P170)rt_nil_check(F->m_590)).c);
} else if ((((*(P170)rt_nil_check(F->m_590)).kind == ((rt_int)5LL)) && ((*(P164)rt_nil_check((*(P170)rt_nil_check(F->m_590)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_113((*(P170)rt_nil_check(F->m_590)).t);
}
F->m_590 = (*(P170)rt_nil_check(F->m_590)).stack;
}
F->m_590 = g_scope_stack_188;
while (((F->m_590 != NULL) && ((*(P170)rt_nil_check(F->m_590)).depth == g_depth_187))) {
if (f_exported_109(F->d_587, &(*(P155)rt_nil_check((*(P170)rt_nil_check(F->m_590)).name)), &F->ro_592)) {
F->z_594 = NULL;
F->z_594 = f_copy_sym_110(F->m_590);
if (F->ro_592) {
(*(P170)rt_nil_check(F->z_594)).ro_flag = 1;
}
(*(P170)rt_nil_check(F->z_594)).mnext = (*(P170)rt_nil_check(F->y_588)).members;
(*(P170)rt_nil_check(F->y_588)).members = F->z_594;
}
F->m_590 = (*(P170)rt_nil_check(F->m_590)).stack;
}
while ((F->p_591 != NULL)) {
if (((f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->p_591)).name))) == NULL) || ((*(P170)rt_nil_check(f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->p_591)).name))))).depth != g_depth_187))) {
f_fail_11((*(P160)rt_nil_check(F->d_587)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->p_591)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_587)).name))); b_; }));
}
F->p_591 = (*(P160)rt_nil_check(F->p_591)).next;
}
f_close_scope_84();
f_define_82(F->y_588, (*(P160)rt_nil_check(F->d_587)).line);
ret_:
  return;
}

static void f_gen_expose_112(P160 d_595) {
  struct f_gen_expose_112fr *F = rt_alloc(sizeof *F);
F->d_595 = d_595;
F->y_596 = NULL;
F->y_596 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_595)).name)));
F->m_597 = NULL;
F->p_598 = NULL;
F->p_598 = (*(P160)rt_nil_check(F->d_595)).a;
if (((F->y_596 == NULL) || ((*(P170)rt_nil_check(F->y_596)).kind != ((rt_int)8LL)))) {
f_fail_11((*(P160)rt_nil_check(F->d_595)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_595)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P160)rt_nil_check(F->d_595)).ival == ((rt_int)1LL))) {
F->m_597 = (*(P170)rt_nil_check(F->y_596)).members;
while ((F->m_597 != NULL)) {
f_define_82(f_copy_sym_110(F->m_597), (*(P160)rt_nil_check(F->d_595)).line);
F->m_597 = (*(P170)rt_nil_check(F->m_597)).mnext;
}
goto ret_;
}
while ((F->p_598 != NULL)) {
F->found_599 = 0;
F->m_597 = (*(P170)rt_nil_check(F->y_596)).members;
while ((F->m_597 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P170)rt_nil_check(F->m_597)).name)), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->p_598)).name)))) {
F->z_600 = NULL;
F->z_600 = f_copy_sym_110(F->m_597);
if (((*(P160)rt_nil_check(F->p_598)).ival == ((rt_int)1LL))) {
(*(P170)rt_nil_check(F->z_600)).ro_flag = 1;
}
f_define_82(F->z_600, (*(P160)rt_nil_check(F->d_595)).line);
F->found_599 = 1;
}
F->m_597 = (*(P170)rt_nil_check(F->m_597)).mnext;
}
if ((!F->found_599)) {
f_fail_11((*(P160)rt_nil_check(F->d_595)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->p_598)).name)), rt_str(" is not exported by ", 20)), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_595)).name))); b_; }));
}
F->p_598 = (*(P160)rt_nil_check(F->p_598)).next;
}
ret_:
  return;
}

static void f_finish_ptr_113(P164 t_601) {
  struct f_finish_ptr_113fr *F = rt_alloc(sizeof *F);
F->t_601 = t_601;
F->d_602 = NULL;
F->d_602 = (*(P164)rt_nil_check(F->t_601)).decl;
F->p_603 = NULL;
F->c_604 = NULL;
F->dummy_605 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_605, rt_str(" ", 1));
if (((*(P164)rt_nil_check(F->t_601)).target != NULL)) {
goto ret_;
}
f_open_scope_83();
F->p_603 = (*(P160)rt_nil_check(F->d_602)).b;
while ((F->p_603 != NULL)) {
F->y_606 = NULL;
F->y_606 = f_new_sym_85(((rt_int)2LL), (*(P160)rt_nil_check(F->p_603)).name);
(*(P170)rt_nil_check(F->y_606)).t = g_ty_int_209;
(*(P170)rt_nil_check(F->y_606)).access = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_82(F->y_606, (*(P160)rt_nil_check(F->d_602)).line);
F->p_603 = (*(P160)rt_nil_check(F->p_603)).next;
}
(*(P164)rt_nil_check(F->t_601)).target = f_resolve_subtype_97((*(P160)rt_nil_check(F->d_602)).a, &F->c_604);
f_close_scope_84();
(*rt_str_at(&F->dummy_605, ((rt_int)1LL))) = rt_str_get(f_ctype_92(F->t_601), ((rt_int)1LL));
(*rt_str_at(&F->dummy_605, ((rt_int)1LL))) = rt_str_get(f_ctype_92((*(P164)rt_nil_check(F->t_601)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_114(P160 d_607) {
  struct f_declare_subprogram_114fr *F = rt_alloc(sizeof *F);
F->d_607 = d_607;
F->y_608 = NULL;
F->p_609 = NULL;
F->p_609 = (*(P160)rt_nil_check(F->d_607)).a;
F->tail_610 = NULL;
if (((*(P160)rt_nil_check(F->d_607)).kind == ((rt_int)46LL))) {
F->y_608 = f_new_sym_85(((rt_int)3LL), (*(P160)rt_nil_check(F->d_607)).name);
} else {
F->y_608 = f_new_sym_85(((rt_int)4LL), (*(P160)rt_nil_check(F->d_607)).name);
}
while ((F->p_609 != NULL)) {
F->pm_611 = NULL;
{ R169 *cell612 = rt_alloc(sizeof(R169));
(*cell612).name = NULL;
(*cell612).t = NULL;
(*cell612).c = NULL;
(*cell612).next = NULL;
F->pm_611 = cell612;
}
(*(P168)rt_nil_check(F->pm_611)).name = (*(P160)rt_nil_check(F->p_609)).name;
(*(P168)rt_nil_check(F->pm_611)).mode = (*(P160)rt_nil_check(F->p_609)).ival;
(*(P168)rt_nil_check(F->pm_611)).t = f_resolve_subtype_97((*(P160)rt_nil_check(F->p_609)).a, &(*(P168)rt_nil_check(F->pm_611)).c);
if ((F->tail_610 == NULL)) {
(*(P170)rt_nil_check(F->y_608)).params = F->pm_611;
} else {
(*(P168)rt_nil_check(F->tail_610)).next = F->pm_611;
}
F->tail_610 = F->pm_611;
F->p_609 = (*(P160)rt_nil_check(F->p_609)).next;
}
(*(P170)rt_nil_check(F->y_608)).result = g_ty_void_214;
if (((*(P160)rt_nil_check(F->d_607)).b != NULL)) {
F->rc_613 = NULL;
(*(P170)rt_nil_check(F->y_608)).result = f_resolve_subtype_97((*(P160)rt_nil_check(F->d_607)).b, &F->rc_613);
}
(*(P170)rt_nil_check(F->y_608)).cname = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_138(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_607)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P170)rt_nil_check(F->y_608)).decl = F->d_607;
(*(P170)rt_nil_check(F->y_608)).level = g_cur_level_201;
f_define_82(F->y_608, (*(P160)rt_nil_check(F->d_607)).line);
ret_:
  return;
}

static void f_element_115(P160 e_614) {
  struct f_element_115fr *F = rt_alloc(sizeof *F);
F->e_614 = e_614;
F->k_615 = (*(P160)rt_nil_check(F->e_614)).kind;
if (((F->k_615 == ((rt_int)45LL)) || (F->k_615 == ((rt_int)46LL)))) {
f_subprogram_120(F->e_614);
} else if ((((((F->k_615 == ((rt_int)49LL)) || (F->k_615 == ((rt_int)42LL))) || (F->k_615 == ((rt_int)43LL))) || (F->k_615 == ((rt_int)47LL))) || (F->k_615 == ((rt_int)48LL)))) {
goto ret_;
} else if ((F->k_615 == ((rt_int)44LL))) {
f_finish_ptr_113((*(P170)rt_nil_check(f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_614)).name))))).t);
} else if ((F->k_615 == ((rt_int)40LL))) {
f_var_decl_118(F->e_614);
} else if (((F->k_615 == ((rt_int)41LL)) && ((*(P160)rt_nil_check(F->e_614)).flag == ((rt_int)0LL)))) {
f_const_decl_119(F->e_614);
} else if ((F->k_615 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_615 == ((rt_int)33LL))) {
F->t_616 = NULL;
F->c_617 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_614)).a, g_ty_bool_210, &F->t_616));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_617), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_124(F->e_614);
}
ret_:
  return;
}

static rstr f_storage_116(rstr *name_618, P164 t_619) {
  struct f_storage_116fr *F = rt_alloc(sizeof *F);
F->name_618 = name_618;
F->t_619 = t_619;
if ((!g_in_func_200)) {
F->g_620 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_8(&(*F->name_618))), rt_str("_", 1)); b_; })));
f_put_13(g_out_globals_194, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_92(F->t_619)), rt_str(" ", 1)), F->g_620), rt_str(";", 1)); b_; }));
g_st_field_203 = f_mk_2(&F->g_620);
F->result_ = F->g_620;
goto ret_;
}
{
F->f_621 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_8(&(*F->name_618)), rt_str("_", 1)); b_; })));
f_put_13(g_fields_buf_199, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_92(F->t_619)), rt_str(" ", 1)), F->f_621), rt_str(";", 1)); b_; }));
g_st_field_203 = f_mk_2(&F->f_621);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_621);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_117(P170 y_622, rstr *access_623) {
  struct f_bind_117fr *F = rt_alloc(sizeof *F);
F->y_622 = y_622;
F->access_623 = access_623;
if (g_in_func_200) {
(*(P170)rt_nil_check(F->y_622)).level = g_cur_level_201;
(*(P170)rt_nil_check(F->y_622)).access = g_st_field_203;
} else {
(*(P170)rt_nil_check(F->y_622)).level = ((rt_int)0LL);
(*(P170)rt_nil_check(F->y_622)).access = f_mk_2(&(*F->access_623));
}
ret_:
  return;
}

static void f_var_decl_118(P160 d_624) {
  struct f_var_decl_118fr *F = rt_alloc(sizeof *F);
F->d_624 = d_624;
F->c_625 = NULL;
F->t_626 = NULL;
F->t_626 = f_resolve_subtype_97((*(P160)rt_nil_check(F->d_624)).a, &F->c_625);
F->y_627 = NULL;
F->y_627 = f_new_sym_85(((rt_int)1LL), (*(P160)rt_nil_check(F->d_624)).name);
F->access_628 = rt_str_copy(f_storage_116(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_624)).name)), F->t_626));
f_init_storage_98(&F->access_628, F->t_626, F->c_625);
if (((*(P160)rt_nil_check(F->d_624)).b != NULL)) {
F->vt_629 = NULL;
F->v_630 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->d_624)).b, F->t_626, &F->vt_629));
f_check_type_91(F->vt_629, F->t_626, (*(P160)rt_nil_check(F->d_624)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_100(&F->access_628, F->t_626, &F->v_630, F->c_625); b_; }));
}
(*(P170)rt_nil_check(F->y_627)).t = F->t_626;
(*(P170)rt_nil_check(F->y_627)).c = F->c_625;
f_bind_117(F->y_627, &F->access_628);
f_define_82(F->y_627, (*(P160)rt_nil_check(F->d_624)).line);
ret_:
  return;
}

static void f_const_decl_119(P160 d_631) {
  struct f_const_decl_119fr *F = rt_alloc(sizeof *F);
F->d_631 = d_631;
F->c_632 = NULL;
F->c_632 = f_new_cons_87();
F->t_633 = NULL;
F->vt_634 = NULL;
F->y_635 = NULL;
F->y_635 = f_new_sym_85(((rt_int)2LL), (*(P160)rt_nil_check(F->d_631)).name);
if (((*(P160)rt_nil_check(F->d_631)).a != NULL)) {
F->t_633 = f_resolve_subtype_97((*(P160)rt_nil_check(F->d_631)).a, &F->c_632);
}
{
F->v_637 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->d_631)).b, F->t_633, &F->vt_634));
if ((F->t_633 != NULL)) {
f_check_type_91(F->vt_634, F->t_633, (*(P160)rt_nil_check(F->d_631)).line);
} else {
F->t_633 = F->vt_634;
}
if (((*(P164)rt_nil_check(F->t_633)).kind == ((rt_int)1LL))) {
(*(P170)rt_nil_check(F->y_635)).mvalue = f_manifest_99((*(P160)rt_nil_check(F->d_631)).b, &F->ok_636);
(*(P170)rt_nil_check(F->y_635)).hasmv = F->ok_636;
}
{
F->access_638 = rt_str_copy(f_storage_116(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_631)).name)), F->t_633));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_638, rt_str(" = ", 3)), f_copy_code_101(F->t_633, &F->v_637)), rt_str(";", 1)); b_; }));
f_bind_117(F->y_635, &F->access_638);
}
}
(*(P170)rt_nil_check(F->y_635)).t = F->t_633;
(*(P170)rt_nil_check(F->y_635)).c = F->c_632;
(*(P170)rt_nil_check(F->y_635)).ro_flag = 1;
f_define_82(F->y_635, (*(P160)rt_nil_check(F->d_631)).line);
ret_:
  return;
}

static void f_subprogram_120(P160 d_639) {
  struct f_subprogram_120fr *F = rt_alloc(sizeof *F);
F->d_639 = d_639;
F->y_640 = NULL;
F->y_640 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->d_639)).name)));
F->saved_code_641 = NULL;
F->saved_code_641 = g_code_198;
F->saved_fields_642 = NULL;
F->saved_fields_642 = g_fields_buf_199;
F->saved_in_643 = g_in_func_200;
F->saved_sym_644 = NULL;
F->saved_sym_644 = g_func_sym_205;
F->saved_exits_645 = NULL;
F->saved_exits_645 = g_exits_206;
F->saved_frames_646 = g_frames_207;
F->args_647 = NULL;
F->args_647 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_648 = NULL;
F->pm_648 = (*(P170)rt_nil_check(F->y_640)).params;
F->saved_handlers_649 = NULL;
F->saved_handlers_649 = g_handlers_208;
F->ctx_650 = NULL;
F->head_651 = NULL;
F->frame_652 = NULL;
F->frame_652 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_640)).cname)), rt_str("fr", 2)); b_; }));
F->parent_653 = NULL;
if (g_in_func_200) {
F->parent_653 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P170)rt_nil_check(g_func_sym_205)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_198 = f_new_buffer_12();
g_fields_buf_199 = f_new_buffer_12();
g_in_func_200 = 1;
g_func_sym_205 = F->y_640;
g_exits_206 = NULL;
g_frames_207 = ((rt_int)0LL);
g_handlers_208 = NULL;
g_cur_level_201 = rt_add(g_cur_level_201, ((rt_int)1LL));
f_open_scope_83();
{ R181 *cell654 = rt_alloc(sizeof(R181));
(*cell654).imps = NULL;
(*cell654).next = NULL;
F->ctx_650 = cell654;
}
(*(P180)rt_nil_check(F->ctx_650)).depth = g_depth_187;
(*(P180)rt_nil_check(F->ctx_650)).imps = (*(P160)rt_nil_check(F->d_639)).d;
(*(P180)rt_nil_check(F->ctx_650)).all_imp = ((*(P160)rt_nil_check(F->d_639)).flag >= ((rt_int)2LL));
(*(P180)rt_nil_check(F->ctx_650)).next = g_fctx_202;
g_fctx_202 = F->ctx_650;
if ((F->parent_653 != NULL)) {
f_put_13(g_fields_buf_199, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P155)rt_nil_check(F->parent_653))), rt_str(" *up;", 5)); b_; }));
F->args_647 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P155)rt_nil_check(F->parent_653))), rt_str(" *up_", 5)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
while ((F->pm_648 != NULL)) {
F->ct_655 = rt_str_copy(f_ctype_92((*(P168)rt_nil_check(F->pm_648)).t));
F->f_656 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_8(&(*(P155)rt_nil_check((*(P168)rt_nil_check(F->pm_648)).name))), rt_str("_", 1)); b_; })));
F->p_657 = NULL;
if ((((*(P155)rt_nil_check(F->args_647))).len > ((rt_int)0LL))) {
F->args_647 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->args_647)), rt_str(", ", 2)); b_; }));
}
if (((*(P168)rt_nil_check(F->pm_648)).mode == ((rt_int)1LL))) {
F->p_657 = f_new_sym_85(((rt_int)2LL), (*(P168)rt_nil_check(F->pm_648)).name);
f_put_13(g_fields_buf_199, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_655), rt_str(" ", 1)), F->f_656), rt_str(";", 1)); b_; }));
F->args_647 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->args_647)), F->ct_655), rt_str(" ", 1)), F->f_656); b_; }));
(*(P170)rt_nil_check(F->p_657)).access = f_mk_2(&F->f_656);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_656), rt_str(" = ", 3)), f_copy_code_101((*(P168)rt_nil_check(F->pm_648)).t, &F->f_656)), rt_str(";", 1)); b_; }));
} else {
F->p_657 = f_new_sym_85(((rt_int)1LL), (*(P168)rt_nil_check(F->pm_648)).name);
f_put_13(g_fields_buf_199, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_655), rt_str(" *", 2)), F->f_656), rt_str(";", 1)); b_; }));
F->args_647 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->args_647)), F->ct_655), rt_str(" *", 2)), F->f_656); b_; }));
(*(P170)rt_nil_check(F->p_657)).access = f_mk_2(&F->f_656);
(*(P170)rt_nil_check(F->p_657)).byref = 1;
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_656), rt_str(" = ", 3)), F->f_656), rt_str(";", 1)); b_; }));
}
(*(P170)rt_nil_check(F->p_657)).t = (*(P168)rt_nil_check(F->pm_648)).t;
(*(P170)rt_nil_check(F->p_657)).c = (*(P168)rt_nil_check(F->pm_648)).c;
(*(P170)rt_nil_check(F->p_657)).level = g_cur_level_201;
(*(P170)rt_nil_check(F->p_657)).ro_flag = (((*(P168)rt_nil_check(F->pm_648)).mode == ((rt_int)1LL)) || ((*(P168)rt_nil_check(F->pm_648)).mode == ((rt_int)4LL)));
f_define_82(F->p_657, (*(P160)rt_nil_check(F->d_639)).line);
F->pm_648 = (*(P168)rt_nil_check(F->pm_648)).next;
}
if (((*(P164)rt_nil_check((*(P170)rt_nil_check(F->y_640)).result)).kind != ((rt_int)9LL))) {
f_put_13(g_fields_buf_199, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_92((*(P170)rt_nil_check(F->y_640)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_107((*(P160)rt_nil_check(F->d_639)).c);
f_body_elements_121((*(P160)rt_nil_check(F->d_639)).c);
f_close_scope_84();
g_fctx_202 = (*(P180)rt_nil_check(g_fctx_202)).next;
g_cur_level_201 = rt_sub(g_cur_level_201, ((rt_int)1LL));
if ((((*(P155)rt_nil_check(F->args_647))).len == ((rt_int)0LL))) {
F->args_647 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
F->head_651 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_92((*(P170)rt_nil_check(F->y_640)).result)), rt_str(" ", 1)), (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_640)).cname))), rt_str("(", 1)), (*(P155)rt_nil_check(F->args_647))), rt_str(")", 1)); b_; }));
f_put_13(g_out_protos_193, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->head_651)), rt_str(";", 1)); b_; }));
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->head_651)), rt_str(" {", 2)); b_; }));
f_put_13(g_out_frames_204, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P155)rt_nil_check(F->frame_652))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_16(g_out_frames_204, g_fields_buf_199);
f_put_13(g_out_frames_204, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P155)rt_nil_check(F->frame_652))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
f_splice_16(g_out_funcs_195, g_code_198);
if (((*(P164)rt_nil_check((*(P170)rt_nil_check(F->y_640)).result)).kind != ((rt_int)9LL))) {
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_9()), rt_str("function ended without RETURN", 29)), f_q_9()), rt_str(");", 2)); b_; }));
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_13(g_out_funcs_195, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_198 = F->saved_code_641;
g_fields_buf_199 = F->saved_fields_642;
g_in_func_200 = F->saved_in_643;
g_func_sym_205 = F->saved_sym_644;
g_exits_206 = F->saved_exits_645;
g_frames_207 = F->saved_frames_646;
g_handlers_208 = F->saved_handlers_649;
ret_:
  return;
}

static void f_body_elements_121(P160 elems_658) {
  struct f_body_elements_121fr *F = rt_alloc(sizeof *F);
F->elems_658 = elems_658;
F->e_659 = NULL;
F->e_659 = F->elems_658;
while ((F->e_659 != NULL)) {
f_element_115(F->e_659);
F->e_659 = (*(P160)rt_nil_check(F->e_659)).next;
}
ret_:
  return;
}

static void f_gen_body_122(P160 elems_660) {
  struct f_gen_body_122fr *F = rt_alloc(sizeof *F);
F->elems_660 = elems_660;
f_open_scope_83();
f_declare_body_107(F->elems_660);
f_body_elements_121(F->elems_660);
f_close_scope_84();
ret_:
  return;
}

static void f_pop_frames_123(rt_int upto_661) {
  struct f_pop_frames_123fr *F = rt_alloc(sizeof *F);
F->upto_661 = upto_661;
F->i_662 = g_frames_207;
while ((F->i_662 > F->upto_661)) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(xf", 9), f_itos_4(F->i_662)), rt_str(");", 2)); b_; }));
F->i_662 = rt_sub(F->i_662, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_gen_statement_124(P160 s_663) {
  struct f_gen_statement_124fr *F = rt_alloc(sizeof *F);
F->s_663 = s_663;
F->label_664 = NULL;
if (((*(P160)rt_nil_check(F->s_663)).tag != NULL)) {
F->x_665 = NULL;
{ R179 *cell666 = rt_alloc(sizeof(R179));
(*cell666).match = NULL;
(*cell666).label = NULL;
(*cell666).next = NULL;
F->x_665 = cell666;
}
F->label_664 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P178)rt_nil_check(F->x_665)).match = (*(P160)rt_nil_check(F->s_663)).tag;
(*(P178)rt_nil_check(F->x_665)).label = F->label_664;
(*(P178)rt_nil_check(F->x_665)).depth = g_frames_207;
(*(P178)rt_nil_check(F->x_665)).next = g_exits_206;
g_exits_206 = F->x_665;
}
{ rt_int sel667 = (*(P160)rt_nil_check(F->s_663)).kind;
if (0 || (sel667 == ((rt_int)20LL))) {
f_st_assign_125(F->s_663);
} else if (0 || (sel667 == ((rt_int)21LL))) {
f_st_call_126(F->s_663);
} else if (0 || (sel667 == ((rt_int)22LL))) {
f_st_if_127(F->s_663);
} else if (0 || (sel667 == ((rt_int)23LL))) {
f_st_case_128(F->s_663);
} else if (0 || (sel667 == ((rt_int)24LL))) {
f_st_repeat_129(F->s_663);
} else if (0 || (sel667 == ((rt_int)25LL))) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_122((*(P160)rt_nil_check(F->s_663)).a);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel667 == ((rt_int)27LL))) {
f_st_exit_130(F->s_663);
} else if (0 || (sel667 == ((rt_int)28LL))) {
f_st_return_131(F->s_663);
} else if (0 || (sel667 == ((rt_int)30LL))) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_132(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->s_663)).name)), (*(P160)rt_nil_check(F->s_663)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel667 == ((rt_int)31LL))) {
if ((g_handlers_208 == NULL)) {
f_fail_11((*(P160)rt_nil_check(F->s_663)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P155)rt_nil_check((*(P172)rt_nil_check(g_handlers_208)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel667 == ((rt_int)26LL))) {
f_st_guard_133(F->s_663);
} else if (0 || (sel667 == ((rt_int)32LL))) {
f_st_alloc_134(F->s_663);
} else {
f_fail_11((*(P160)rt_nil_check(F->s_663)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P160)rt_nil_check(F->s_663)).tag != NULL)) {
g_exits_206 = (*(P178)rt_nil_check(g_exits_206)).next;
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->label_664)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_125(P160 s_668) {
  struct f_st_assign_125fr *F = rt_alloc(sizeof *F);
F->s_668 = s_668;
F->lv_669 = NULL;
F->t_670 = NULL;
F->vt_671 = NULL;
F->c_672 = NULL;
f_lvalue_141((*(P160)rt_nil_check(F->s_668)).a, &F->lv_669, &F->t_670, &F->c_672, &F->ro_673);
if (F->ro_673) {
f_fail_11((*(P160)rt_nil_check(F->s_668)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
{
F->v_674 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->s_668)).b, F->t_670, &F->vt_671));
f_check_type_91(F->vt_671, F->t_670, (*(P160)rt_nil_check(F->s_668)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_100(&(*(P155)rt_nil_check(F->lv_669)), F->t_670, &F->v_674, F->c_672); b_; }));
}
ret_:
  return;
}

static void f_st_call_126(P160 s_675) {
  struct f_st_call_126fr *F = rt_alloc(sizeof *F);
F->s_675 = s_675;
F->c_676 = NULL;
F->c_676 = (*(P160)rt_nil_check(F->s_675)).a;
F->t_677 = NULL;
if ((((*(P160)rt_nil_check(F->c_676)).kind == ((rt_int)7LL)) || ((*(P160)rt_nil_check(F->c_676)).kind == ((rt_int)12LL)))) {
F->x_678 = NULL;
F->x_678 = f_nn_22(((rt_int)10LL), (*(P160)rt_nil_check(F->c_676)).line);
(*(P160)rt_nil_check(F->x_678)).a = F->c_676;
F->c_676 = F->x_678;
}
if (((*(P160)rt_nil_check(F->c_676)).kind != ((rt_int)10LL))) {
f_fail_11((*(P160)rt_nil_check(F->s_675)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_151(F->c_676, 1, &F->t_677), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_127(P160 s_679) {
  struct f_st_if_127fr *F = rt_alloc(sizeof *F);
F->s_679 = s_679;
F->a_680 = NULL;
F->a_680 = (*(P160)rt_nil_check(F->s_679)).a;
F->first_681 = 1;
F->t_682 = NULL;
while ((F->a_680 != NULL)) {
F->c_683 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->a_680)).a, g_ty_bool_210, &F->t_682));
f_check_type_91(F->t_682, g_ty_bool_210, (*(P160)rt_nil_check(F->s_679)).line);
if (F->first_681) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_683), rt_str(") {", 3)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_683), rt_str(") {", 3)); b_; }));
}
F->first_681 = 0;
f_gen_body_122((*(P160)rt_nil_check(F->a_680)).b);
F->a_680 = (*(P160)rt_nil_check(F->a_680)).next;
}
if (((*(P160)rt_nil_check(F->s_679)).flag == ((rt_int)1LL))) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_122((*(P160)rt_nil_check(F->s_679)).b);
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_128(P160 s_684) {
  struct f_st_case_128fr *F = rt_alloc(sizeof *F);
F->s_684 = s_684;
F->st_685 = NULL;
F->vt_686 = NULL;
F->first_687 = 1;
F->a_688 = NULL;
F->a_688 = (*(P160)rt_nil_check(F->s_684)).b;
F->sel_689 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->s_684)).a, NULL, &F->st_685));
F->tmp_690 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_92(F->st_685)), rt_str(" ", 1)), F->tmp_690), rt_str(" = ", 3)), F->sel_689), rt_str(";", 1)); b_; }));
while ((F->a_688 != NULL)) {
F->lab_691 = NULL;
F->lab_691 = (*(P160)rt_nil_check(F->a_688)).a;
F->conds_692 = NULL;
F->conds_692 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_691 != NULL)) {
if (((*(P160)rt_nil_check(F->lab_691)).b == NULL)) {
F->v_693 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->lab_691)).a, F->st_685, &F->vt_686));
f_check_type_91(F->vt_686, F->st_685, (*(P160)rt_nil_check(F->s_684)).line);
F->conds_692 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->conds_692)), rt_str(" || ", 4)), f_eq_code_102(F->st_685, &F->tmp_690, &F->v_693)); b_; }));
} else {
F->lo_694 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->lab_691)).a, F->st_685, &F->vt_686));
F->hi_695 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->lab_691)).b, F->st_685, &F->vt_686));
F->conds_692 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->conds_692)), rt_str(" || (", 5)), F->tmp_690), rt_str(" >= ", 4)), F->lo_694), rt_str(" && ", 4)), F->tmp_690), rt_str(" <= ", 4)), F->hi_695), rt_str(")", 1)); b_; }));
}
F->lab_691 = (*(P160)rt_nil_check(F->lab_691)).next;
}
if (F->first_687) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P155)rt_nil_check(F->conds_692))), rt_str(") {", 3)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P155)rt_nil_check(F->conds_692))), rt_str(") {", 3)); b_; }));
}
F->first_687 = 0;
f_gen_body_122((*(P160)rt_nil_check(F->a_688)).b);
F->a_688 = (*(P160)rt_nil_check(F->a_688)).next;
}
if (F->first_687) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P160)rt_nil_check(F->s_684)).flag == ((rt_int)1LL))) {
f_gen_body_122((*(P160)rt_nil_check(F->s_684)).c);
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_129(P160 s_696) {
  struct f_st_repeat_129fr *F = rt_alloc(sizeof *F);
F->s_696 = s_696;
F->t_697 = NULL;
F->c_698 = NULL;
if (((*(P160)rt_nil_check(F->s_696)).flag == ((rt_int)0LL))) {
F->cond_699 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->s_696)).a, g_ty_bool_210, &F->t_697));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_699), rt_str(") {", 3)); b_; }));
f_gen_body_122((*(P160)rt_nil_check(F->s_696)).b);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_697 = f_resolve_subtype_97((*(P160)rt_nil_check(F->s_696)).a, &F->c_698);
if ((((*(P164)rt_nil_check(F->t_697)).kind == ((rt_int)4LL)) && ((*(P162)rt_nil_check(F->c_698)).lo == NULL))) {
(*(P162)rt_nil_check(F->c_698)).lo = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P162)rt_nil_check(F->c_698)).hi = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_4(rt_sub(f_list_len_24((*(P164)rt_nil_check(F->t_697)).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P162)rt_nil_check(F->c_698)).lo == NULL)) {
f_fail_11((*(P160)rt_nil_check(F->s_696)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_700 = rt_str_copy(f_storage_116(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->s_696)).name)), F->t_697));
F->lov_701 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_702 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_703 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_704 = NULL;
F->y_704 = f_new_sym_85(((rt_int)2LL), (*(P160)rt_nil_check(F->s_696)).name);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_701), rt_str(" = ", 3)), (*(P155)rt_nil_check((*(P162)rt_nil_check(F->c_698)).lo))), rt_str(", ", 2)), F->hiv_702), rt_str(" = ", 3)), (*(P155)rt_nil_check((*(P162)rt_nil_check(F->c_698)).hi))), rt_str(";", 1)); b_; }));
if (((*(P160)rt_nil_check(F->s_696)).ival == ((rt_int)1LL))) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_703), rt_str(" = ", 3)), F->hiv_702), rt_str("; ", 2)), F->it_703), rt_str(" >= ", 4)), F->lov_701), rt_str("; ", 2)), F->it_703), rt_str("--) {", 5)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_703), rt_str(" = ", 3)), F->lov_701), rt_str("; ", 2)), F->it_703), rt_str(" <= ", 4)), F->hiv_702), rt_str("; ", 2)), F->it_703), rt_str("++) {", 5)); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_700, rt_str(" = ", 3)), F->it_703), rt_str(";", 1)); b_; }));
f_open_scope_83();
(*(P170)rt_nil_check(F->y_704)).t = F->t_697;
(*(P170)rt_nil_check(F->y_704)).c = F->c_698;
f_bind_117(F->y_704, &F->access_700);
(*(P170)rt_nil_check(F->y_704)).ro_flag = 1;
f_define_82(F->y_704, (*(P160)rt_nil_check(F->s_696)).line);
f_gen_body_122((*(P160)rt_nil_check(F->s_696)).b);
f_close_scope_84();
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_130(P160 s_705) {
  struct f_st_exit_130fr *F = rt_alloc(sizeof *F);
F->s_705 = s_705;
F->x_706 = NULL;
F->x_706 = g_exits_206;
while ((F->x_706 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P178)rt_nil_check(F->x_706)).match)), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->s_705)).name)))) {
f_pop_frames_123((*(P178)rt_nil_check(F->x_706)).depth);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P155)rt_nil_check((*(P178)rt_nil_check(F->x_706)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_706 = (*(P178)rt_nil_check(F->x_706)).next;
}
f_fail_11((*(P160)rt_nil_check(F->s_705)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->s_705)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_131(P160 s_707) {
  struct f_st_return_131fr *F = rt_alloc(sizeof *F);
F->s_707 = s_707;
F->vt_708 = NULL;
if ((!g_in_func_200)) {
f_pop_frames_123(((rt_int)0LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P164)rt_nil_check((*(P170)rt_nil_check(g_func_sym_205)).result)).kind == ((rt_int)9LL))) {
if (((*(P160)rt_nil_check(F->s_707)).a != NULL)) {
f_fail_11((*(P160)rt_nil_check(F->s_707)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_123(((rt_int)0LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P160)rt_nil_check(F->s_707)).a == NULL)) {
f_fail_11((*(P160)rt_nil_check(F->s_707)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_709 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->s_707)).a, (*(P170)rt_nil_check(g_func_sym_205)).result, &F->vt_708));
f_check_type_91(F->vt_708, (*(P170)rt_nil_check(g_func_sym_205)).result, (*(P160)rt_nil_check(F->s_707)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_709), rt_str(";", 1)); b_; }));
f_pop_frames_123(((rt_int)0LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_132(rstr *name_710, rt_int line_711) {
  struct f_exc_id_132fr *F = rt_alloc(sizeof *F);
F->name_710 = name_710;
F->line_711 = line_711;
F->y_712 = NULL;
F->y_712 = f_lookup_81(&(*F->name_710));
if (((F->y_712 != NULL) && ((*(P170)rt_nil_check(F->y_712)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_712)).cname));
goto ret_;
}
if (((((*F->name_710)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_710), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_9()), (*F->name_710)), f_q_9()), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_711, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_710), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_133(P160 s_713) {
  struct f_st_guard_133fr *F = rt_alloc(sizeof *F);
F->s_713 = s_713;
F->h_714 = NULL;
F->h_714 = (*(P160)rt_nil_check(F->s_713)).b;
F->first_715 = 1;
F->hv_716 = NULL;
g_frames_207 = rt_add(g_frames_207, ((rt_int)1LL));
{
F->f_717 = rt_str_copy(rt_str_cat(rt_str("xf", 2), f_itos_4(g_frames_207)));
F->x_718 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_717), rt_str(";", 1)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_717), rt_str(")) {", 4)); b_; }));
f_gen_body_122((*(P160)rt_nil_check(F->s_713)).a);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_717), rt_str(");", 2)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
g_frames_207 = rt_sub(g_frames_207, ((rt_int)1LL));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_717), rt_str(");", 2)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_718), rt_str(" = rt_xcur;", 11)); b_; }));
{ R173 *cell719 = rt_alloc(sizeof(R173));
(*cell719).s = NULL;
(*cell719).next = NULL;
F->hv_716 = cell719;
}
(*(P172)rt_nil_check(F->hv_716)).s = f_mk_2(&F->x_718);
(*(P172)rt_nil_check(F->hv_716)).next = g_handlers_208;
g_handlers_208 = F->hv_716;
while ((F->h_714 != NULL)) {
F->n_720 = NULL;
F->n_720 = (*(P160)rt_nil_check(F->h_714)).a;
F->conds_721 = NULL;
F->conds_721 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_720 != NULL)) {
F->conds_721 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->conds_721)), rt_str(" || ", 4)), F->x_718), rt_str(" == ", 4)), f_exc_id_132(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->n_720)).name)), (*(P160)rt_nil_check(F->s_713)).line)); b_; }));
F->n_720 = (*(P160)rt_nil_check(F->n_720)).next;
}
if (F->first_715) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P155)rt_nil_check(F->conds_721))), rt_str(") {", 3)); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P155)rt_nil_check(F->conds_721))), rt_str(") {", 3)); b_; }));
}
F->first_715 = 0;
f_gen_body_122((*(P160)rt_nil_check(F->h_714)).b);
F->h_714 = (*(P160)rt_nil_check(F->h_714)).next;
}
if (F->first_715) {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P160)rt_nil_check(F->s_713)).flag == ((rt_int)1LL))) {
f_gen_body_122((*(P160)rt_nil_check(F->s_713)).c);
} else {
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_718), rt_str(");", 2)); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_208 = (*(P172)rt_nil_check(g_handlers_208)).next;
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_134(P160 s_722) {
  struct f_st_alloc_134fr *F = rt_alloc(sizeof *F);
F->s_722 = s_722;
F->lv_723 = NULL;
F->t_724 = NULL;
F->target_725 = NULL;
F->vt_726 = NULL;
F->c_727 = NULL;
F->tc_728 = NULL;
F->d_730 = NULL;
F->p_731 = NULL;
F->a_732 = NULL;
f_lvalue_141((*(P160)rt_nil_check(F->s_722)).a, &F->lv_723, &F->t_724, &F->c_727, &F->ro_729);
if (((*(P164)rt_nil_check(F->t_724)).kind != ((rt_int)8LL))) {
f_fail_11((*(P160)rt_nil_check(F->s_722)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_113(F->t_724);
F->d_730 = (*(P164)rt_nil_check(F->t_724)).decl;
F->target_725 = (*(P164)rt_nil_check(F->t_724)).target;
if ((f_list_len_24((*(P160)rt_nil_check(F->s_722)).b) != f_list_len_24((*(P160)rt_nil_check(F->d_730)).b))) {
f_fail_11((*(P160)rt_nil_check(F->s_722)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_4(f_list_len_24((*(P160)rt_nil_check(F->d_730)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_733 = rt_str_copy(f_ctype_92(F->target_725));
F->cell_734 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_733), rt_str(" *", 2)), F->cell_734), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_733), rt_str("));", 3)); b_; }));
f_open_scope_83();
F->p_731 = (*(P160)rt_nil_check(F->d_730)).b;
F->a_732 = (*(P160)rt_nil_check(F->s_722)).b;
while ((F->p_731 != NULL)) {
F->v_735 = rt_str_copy(f_gexpr_144(F->a_732, g_ty_int_209, &F->vt_726));
F->pv_736 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_737 = NULL;
F->y_737 = f_new_sym_85(((rt_int)2LL), (*(P160)rt_nil_check(F->p_731)).name);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_736), rt_str(" = ", 3)), F->v_735), rt_str(";", 1)); b_; }));
(*(P170)rt_nil_check(F->y_737)).t = g_ty_int_209;
(*(P170)rt_nil_check(F->y_737)).access = f_mk_2(&F->pv_736);
f_define_82(F->y_737, (*(P160)rt_nil_check(F->s_722)).line);
F->p_731 = (*(P160)rt_nil_check(F->p_731)).next;
F->a_732 = (*(P160)rt_nil_check(F->a_732)).next;
}
F->vt_726 = f_resolve_subtype_97((*(P160)rt_nil_check(F->d_730)).a, &F->tc_728);
f_init_storage_98(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_734), rt_str(")", 1)); b_; }), F->target_725, F->tc_728);
f_close_scope_84();
if (((*(P160)rt_nil_check(F->s_722)).c != NULL)) {
F->v_738 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->s_722)).c, F->target_725, &F->vt_726));
f_check_type_91(F->vt_726, F->target_725, (*(P160)rt_nil_check(F->s_722)).line);
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_100(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_734), rt_str(")", 1)); b_; }), F->target_725, &F->v_738, F->tc_728); b_; }));
}
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->lv_723)), rt_str(" = ", 3)), F->cell_734), rt_str(";", 1)); b_; }));
f_emit_14(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_access_of_135(P170 y_739) {
  struct f_access_of_135fr *F = rt_alloc(sizeof *F);
F->y_739 = y_739;
F->p_740 = NULL;
F->p_740 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P170)rt_nil_check(F->y_739)).level <= ((rt_int)0LL))) {
F->result_ = (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_739)).access));
goto ret_;
}
{ rt_int lo742 = ((rt_int)1LL), hi743 = rt_sub(g_cur_level_201, (*(P170)rt_nil_check(F->y_739)).level);
for (rt_int it744 = lo742; it744 <= hi743; it744++) {
F->i_741 = it744;
F->p_740 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->p_740)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P170)rt_nil_check(F->y_739)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P155)rt_nil_check(F->p_740))), rt_str("->", 2)), (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_739)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->p_740)), rt_str("->", 2)), (*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_739)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_import_of_136(P160 l_745, rstr *name_746) {
  struct f_import_of_136fr *F = rt_alloc(sizeof *F);
F->l_745 = l_745;
F->name_746 = name_746;
F->p_747 = NULL;
F->p_747 = F->l_745;
while ((F->p_747 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->p_747)).name)), (*F->name_746))) {
F->result_ = F->p_747;
goto ret_;
}
F->p_747 = (*(P160)rt_nil_check(F->p_747)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_137(P170 y_748, rt_int line_749) {
  struct f_check_import_137fr *F = rt_alloc(sizeof *F);
F->y_748 = y_748;
F->line_749 = line_749;
F->c_750 = NULL;
F->c_750 = g_fctx_202;
F->ro_751 = 0;
while (((F->c_750 != NULL) && ((*(P170)rt_nil_check(F->y_748)).depth < (*(P180)rt_nil_check(F->c_750)).depth))) {
if ((!(*(P180)rt_nil_check(F->c_750)).all_imp)) {
F->imp_752 = NULL;
F->imp_752 = f_import_of_136((*(P180)rt_nil_check(F->c_750)).imps, &(*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_748)).name)));
if ((F->imp_752 == NULL)) {
f_fail_11(F->line_749, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_748)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P160)rt_nil_check(F->imp_752)).ival == ((rt_int)1LL))) {
F->ro_751 = 1;
}
}
F->c_750 = (*(P180)rt_nil_check(F->c_750)).next;
}
F->result_ = F->ro_751;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_138(rstr *s_753) {
  struct f_c_ident_138fr *F = rt_alloc(sizeof *F);
F->s_753 = s_753;
if (rt_str_eq((*F->s_753), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_753), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_8(&(*F->s_753));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_139(rstr *base_754, P164 t_755) {
  struct f_deref_139fr *F = rt_alloc(sizeof *F);
F->base_754 = base_754;
F->t_755 = t_755;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_92(F->t_755)), rt_str(")rt_nil_check(", 14)), (*F->base_754)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_140(P160 e_756) {
  struct f_is_lvalue_140fr *F = rt_alloc(sizeof *F);
F->e_756 = e_756;
if (((*(P160)rt_nil_check(F->e_756)).kind == ((rt_int)7LL))) {
F->y_757 = NULL;
F->y_757 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_756)).name)));
F->result_ = ((F->y_757 != NULL) && (((*(P170)rt_nil_check(F->y_757)).kind == ((rt_int)1LL)) || ((*(P170)rt_nil_check(F->y_757)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P160)rt_nil_check(F->e_756)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_140((*(P160)rt_nil_check(F->e_756)).a);
goto ret_;
} else if (((*(P160)rt_nil_check(F->e_756)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_756)).name)), rt_str("LEN", 3))) && f_is_lvalue_140((*(P160)rt_nil_check(F->e_756)).a));
goto ret_;
} else if (((*(P160)rt_nil_check(F->e_756)).kind == ((rt_int)10LL))) {
if ((((*(P160)rt_nil_check(F->e_756)).b != NULL) && ((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_756)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_140((*(P160)rt_nil_check(F->e_756)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_141(P160 e_758, P155 *code_759, P164 *t_760, P162 *c_761, int *ro_762) {
  struct f_lvalue_141fr *F = rt_alloc(sizeof *F);
F->e_758 = e_758;
F->code_759 = code_759;
F->t_760 = t_760;
F->c_761 = c_761;
F->ro_762 = ro_762;
F->base_763 = NULL;
F->bt_764 = NULL;
F->bc_765 = NULL;
if (((*(P160)rt_nil_check(F->e_758)).kind == ((rt_int)7LL))) {
F->y_766 = NULL;
F->y_766 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_758)).name)));
if ((F->y_766 == NULL)) {
f_fail_11((*(P160)rt_nil_check(F->e_758)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_758)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P170)rt_nil_check(F->y_766)).kind != ((rt_int)1LL)) && ((*(P170)rt_nil_check(F->y_766)).kind != ((rt_int)2LL)))) {
f_fail_11((*(P160)rt_nil_check(F->e_758)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_758)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_759) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_135(F->y_766); b_; }));
(*F->t_760) = (*(P170)rt_nil_check(F->y_766)).t;
(*F->c_761) = (*(P170)rt_nil_check(F->y_766)).c;
(*F->ro_762) = (*(P170)rt_nil_check(F->y_766)).ro_flag;
if ((((*(P170)rt_nil_check(F->y_766)).kind == ((rt_int)1LL)) && f_check_import_137(F->y_766, (*(P160)rt_nil_check(F->e_758)).line))) {
(*F->ro_762) = 1;
}
} else if (((*(P160)rt_nil_check(F->e_758)).kind == ((rt_int)17LL))) {
f_lvalue_141((*(P160)rt_nil_check(F->e_758)).a, &(*F->code_759), &(*F->t_760), &(*F->c_761), &(*F->ro_762));
} else if (((*(P160)rt_nil_check(F->e_758)).kind == ((rt_int)11LL))) {
f_lvalue_141((*(P160)rt_nil_check(F->e_758)).a, &F->base_763, &F->bt_764, &F->bc_765, &(*F->ro_762));
f_select_on_142(&(*(P155)rt_nil_check(F->base_763)), F->bt_764, F->e_758, &(*F->ro_762), &(*F->code_759), &(*F->t_760), &(*F->c_761));
} else if (((*(P160)rt_nil_check(F->e_758)).kind == ((rt_int)10LL))) {
f_lvalue_141((*(P160)rt_nil_check(F->e_758)).a, &F->base_763, &F->bt_764, &F->bc_765, &(*F->ro_762));
f_index_on_143(&(*(P155)rt_nil_check(F->base_763)), F->bt_764, F->e_758, &(*F->ro_762), 1, &(*F->code_759), &(*F->t_760), &(*F->c_761));
} else {
f_fail_11((*(P160)rt_nil_check(F->e_758)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_142(rstr *base_767, P164 bt_768, P160 e_769, int *ro_770, P155 *code_771, P164 *t_772, P162 *c_773) {
  struct f_select_on_142fr *F = rt_alloc(sizeof *F);
F->base_767 = base_767;
F->bt_768 = bt_768;
F->e_769 = e_769;
F->ro_770 = ro_770;
F->code_771 = code_771;
F->t_772 = t_772;
F->c_773 = c_773;
(*F->c_773) = g_no_cons_217;
if (((*(P164)rt_nil_check(F->bt_768)).kind == ((rt_int)8LL))) {
f_finish_ptr_113(F->bt_768);
(*F->ro_770) = 0;
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_769)).name)), rt_str("ALL", 3))) {
(*F->code_771) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_139(&(*F->base_767), F->bt_768); b_; }));
(*F->t_772) = (*(P164)rt_nil_check(F->bt_768)).target;
goto ret_;
}
f_select_on_142(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_139(&(*F->base_767), F->bt_768); b_; }), (*(P164)rt_nil_check(F->bt_768)).target, F->e_769, &(*F->ro_770), &(*F->code_771), &(*F->t_772), &(*F->c_773));
goto ret_;
}
if (((*(P164)rt_nil_check(F->bt_768)).kind == ((rt_int)7LL))) {
F->f_774 = NULL;
F->f_774 = (*(P164)rt_nil_check(F->bt_768)).fields;
while ((F->f_774 != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_774)).name)), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_769)).name)))) {
(*F->c_773) = (*(P166)rt_nil_check(F->f_774)).c;
(*F->code_771) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_767), rt_str(".", 1)), f_lower_s_8(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_769)).name)))); b_; }));
(*F->t_772) = (*(P166)rt_nil_check(F->f_774)).t;
goto ret_;
}
F->f_774 = (*(P166)rt_nil_check(F->f_774)).next;
}
f_fail_11((*(P160)rt_nil_check(F->e_769)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_769)).name))); b_; }));
}
f_fail_11((*(P160)rt_nil_check(F->e_769)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_769)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_143(rstr *base_775, P164 bt_776, P160 e_777, int *ro_778, int lv_779, P155 *code_780, P164 *t_781, P162 *c_782) {
  struct f_index_on_143fr *F = rt_alloc(sizeof *F);
F->base_775 = base_775;
F->bt_776 = bt_776;
F->e_777 = e_777;
F->ro_778 = ro_778;
F->lv_779 = lv_779;
F->code_780 = code_780;
F->t_781 = t_781;
F->c_782 = c_782;
F->a_783 = NULL;
F->a_783 = (*(P160)rt_nil_check(F->e_777)).b;
F->it_784 = NULL;
(*F->c_782) = g_no_cons_217;
if (((*(P164)rt_nil_check(F->bt_776)).kind == ((rt_int)8LL))) {
f_finish_ptr_113(F->bt_776);
(*F->ro_778) = 0;
f_index_on_143(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_139(&(*F->base_775), F->bt_776); b_; }), (*(P164)rt_nil_check(F->bt_776)).target, F->e_777, &(*F->ro_778), F->lv_779, &(*F->code_780), &(*F->t_781), &(*F->c_782));
goto ret_;
}
if ((f_list_len_24(F->a_783) != ((rt_int)1LL))) {
f_fail_11((*(P160)rt_nil_check(F->e_777)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P164)rt_nil_check(F->bt_776)).kind == ((rt_int)5LL))) {
if (((*(P160)rt_nil_check(F->a_783)).kind == ((rt_int)16LL))) {
F->lo_785 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->a_783)).a, g_ty_int_209, &F->it_784));
F->hi_786 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->a_783)).b, g_ty_int_209, &F->it_784));
(*F->code_780) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_775)), rt_str(", ", 2)), F->lo_785), rt_str(", ", 2)), F->hi_786), rt_str(")", 1)); b_; }));
(*F->t_781) = g_ty_string_213;
(*F->ro_778) = 1;
goto ret_;
}
{
F->i_787 = rt_str_copy(f_gexpr_144(F->a_783, g_ty_int_209, &F->it_784));
(*F->t_781) = g_ty_ascii_212;
if (F->lv_779) {
(*F->code_780) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_775)), rt_str(", ", 2)), F->i_787), rt_str("))", 2)); b_; }));
} else {
(*F->code_780) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_775)), rt_str(", ", 2)), F->i_787), rt_str(")", 1)); b_; }));
(*F->ro_778) = 1;
}
}
goto ret_;
}
if (((*(P164)rt_nil_check(F->bt_776)).kind == ((rt_int)6LL))) {
F->i_788 = rt_str_copy(f_gexpr_144(F->a_783, (*(P164)rt_nil_check(F->bt_776)).idx, &F->it_784));
(*F->code_780) = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_775), rt_str(".p[rt_index(", 12)), F->i_788), rt_str(", ", 2)), (*F->base_775)), rt_str(".lo, ", 5)), (*F->base_775)), rt_str(".hi) - ", 7)), (*F->base_775)), rt_str(".lo]", 4)); b_; }));
(*F->t_781) = (*(P164)rt_nil_check(F->bt_776)).elem;
(*F->c_782) = (*(P164)rt_nil_check(F->bt_776)).elemcons;
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->e_777)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_144(P160 e_789, P164 want_790, P164 *t_791) {
  struct f_gexpr_144fr *F = rt_alloc(sizeof *F);
F->e_789 = e_789;
F->want_790 = want_790;
F->t_791 = t_791;
F->k_792 = (*(P160)rt_nil_check(F->e_789)).kind;
F->code_793 = NULL;
F->c_794 = NULL;
F->bt_796 = NULL;
(*F->t_791) = g_ty_int_209;
if ((F->k_792 == ((rt_int)1LL))) {
if (((F->want_790 != NULL) && ((*(P164)rt_nil_check(F->want_790)).kind == ((rt_int)3LL)))) {
(*F->t_791) = g_ty_float_211;
F->result_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_792 == ((rt_int)2LL))) {
(*F->t_791) = g_ty_float_211;
F->result_ = (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name));
goto ret_;
} else if ((F->k_792 == ((rt_int)5LL))) {
(*F->t_791) = g_ty_bool_210;
F->result_ = f_itos_4((*(P160)rt_nil_check(F->e_789)).ival);
goto ret_;
} else if ((F->k_792 == ((rt_int)3LL))) {
(*F->t_791) = g_ty_string_213;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_146(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)))), rt_str(", ", 2)), f_itos_4(((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_792 == ((rt_int)6LL))) {
(*F->t_791) = g_ty_nil_216;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_792 == ((rt_int)4LL))) {
if (((F->want_790 != NULL) && ((*(P164)rt_nil_check(F->want_790)).kind == ((rt_int)4LL)))) {
(*F->t_791) = F->want_790;
} else {
(*F->t_791) = f_enum_type_of_147(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), (*(P160)rt_nil_check(F->e_789)).line);
}
{
F->i_797 = f_lit_index_96((*(P164)rt_nil_check((*F->t_791))).lits, &(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)));
if ((F->i_797 < ((rt_int)0LL))) {
f_fail_11((*(P160)rt_nil_check(F->e_789)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_4(F->i_797);
goto ret_;
}
} else if ((F->k_792 == ((rt_int)17LL))) {
F->result_ = f_gexpr_144((*(P160)rt_nil_check(F->e_789)).a, F->want_790, &(*F->t_791));
goto ret_;
} else if ((F->k_792 == ((rt_int)7LL))) {
F->y_798 = NULL;
F->y_798 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)));
if ((F->y_798 == NULL)) {
if ((((rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("SYS_OUT", 7)))) {
F->result_ = f_gcall_151(f_wrap_apply_145(F->e_789), 0, &(*F->t_791));
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->e_789)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P170)rt_nil_check(F->y_798)).kind == ((rt_int)1LL)) || ((*(P170)rt_nil_check(F->y_798)).kind == ((rt_int)2LL)))) {
(*F->t_791) = (*(P170)rt_nil_check(F->y_798)).t;
if (((*(P170)rt_nil_check(F->y_798)).kind == ((rt_int)1LL))) {
F->ro_799 = f_check_import_137(F->y_798, (*(P160)rt_nil_check(F->e_789)).line);
}
F->result_ = f_access_of_135(F->y_798);
goto ret_;
}
if (((*(P170)rt_nil_check(F->y_798)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_151(f_wrap_apply_145(F->e_789), 0, &(*F->t_791));
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->e_789)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((F->k_792 == ((rt_int)8LL))) {
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("NOT", 3))) {
F->a_800 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_789)).a, g_ty_bool_210, &(*F->t_791)));
f_check_type_91((*F->t_791), g_ty_bool_210, (*(P160)rt_nil_check(F->e_789)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_800), rt_str(")", 1));
goto ret_;
}
{
F->a_801 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_789)).a, F->want_790, &(*F->t_791)));
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("+", 1))) {
F->result_ = F->a_801;
goto ret_;
} else if (((*(P164)rt_nil_check((*F->t_791))).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_801), rt_str(")", 1));
goto ret_;
}
f_check_type_91((*F->t_791), g_ty_int_209, (*(P160)rt_nil_check(F->e_789)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_801), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_792 == ((rt_int)9LL))) {
F->result_ = f_gbinop_149(F->e_789, F->want_790, &(*F->t_791));
goto ret_;
} else if ((F->k_792 == ((rt_int)10LL))) {
if ((((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_789)).a)).kind == ((rt_int)7LL)) || ((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_789)).a)).kind == ((rt_int)12LL)))) {
F->nm_802 = NULL;
F->nm_802 = (*(P160)rt_nil_check(F->e_789)).a;
F->y_803 = NULL;
if (((*(P160)rt_nil_check(F->nm_802)).kind == ((rt_int)12LL))) {
F->nm_802 = (*(P160)rt_nil_check(F->nm_802)).a;
}
F->y_803 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->nm_802)).name)));
if ((((F->y_803 == NULL) || ((*(P170)rt_nil_check(F->y_803)).kind == ((rt_int)3LL))) || ((*(P170)rt_nil_check(F->y_803)).kind == ((rt_int)4LL)))) {
F->result_ = f_gcall_151(F->e_789, 0, &(*F->t_791));
goto ret_;
}
}
{
F->base_804 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_789)).a, NULL, &F->bt_796));
F->ro_795 = 1;
f_index_on_143(&F->base_804, F->bt_796, F->e_789, &F->ro_795, 0, &F->code_793, &(*F->t_791), &F->c_794);
F->result_ = (*(P155)rt_nil_check(F->code_793));
goto ret_;
}
} else if ((F->k_792 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_789)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_148(F->e_789, &(*F->t_791));
goto ret_;
}
{
F->base_805 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_789)).a, NULL, &F->bt_796));
F->ro_795 = 1;
f_select_on_142(&F->base_805, F->bt_796, F->e_789, &F->ro_795, &F->code_793, &(*F->t_791), &F->c_794);
F->result_ = (*(P155)rt_nil_check(F->code_793));
goto ret_;
}
} else if ((F->k_792 == ((rt_int)12LL))) {
F->result_ = f_gcall_151(f_wrap_apply_145(F->e_789), 0, &(*F->t_791));
goto ret_;
} else if ((F->k_792 == ((rt_int)14LL))) {
F->result_ = f_constructor_150(F->e_789, F->want_790, &(*F->t_791));
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->e_789)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P160 f_wrap_apply_145(P160 e_806) {
  struct f_wrap_apply_145fr *F = rt_alloc(sizeof *F);
F->e_806 = e_806;
F->x_807 = NULL;
F->x_807 = f_nn_22(((rt_int)10LL), (*(P160)rt_nil_check(F->e_806)).line);
(*(P160)rt_nil_check(F->x_807)).a = F->e_806;
F->result_ = F->x_807;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_146(rstr *s_808) {
  struct f_c_string_146fr *F = rt_alloc(sizeof *F);
F->s_808 = s_808;
F->n_809 = ((rt_int)0LL);
{ rt_int lo811 = ((rt_int)1LL), hi812 = ((*F->s_808)).len;
for (rt_int it813 = lo811; it813 <= hi812; it813++) {
F->i_810 = it813;
if (((rt_str_get((*F->s_808), F->i_810) == 92) || (rt_str_get((*F->s_808), F->i_810) == 63))) {
F->n_809 = rt_add(F->n_809, ((rt_int)1LL));
}
}
}
{
F->r_814 = rt_str_new(rt_add(rt_add(((*F->s_808)).len, F->n_809), ((rt_int)2LL)));
F->j_815 = ((rt_int)1LL);
(*rt_str_at(&F->r_814, ((rt_int)1LL))) = 34;
{ rt_int lo817 = ((rt_int)1LL), hi818 = ((*F->s_808)).len;
for (rt_int it819 = lo817; it819 <= hi818; it819++) {
F->i_816 = it819;
F->j_815 = rt_add(F->j_815, ((rt_int)1LL));
if (((rt_str_get((*F->s_808), F->i_816) == 92) || (rt_str_get((*F->s_808), F->i_816) == 63))) {
(*rt_str_at(&F->r_814, F->j_815)) = 92;
F->j_815 = rt_add(F->j_815, ((rt_int)1LL));
}
(*rt_str_at(&F->r_814, F->j_815)) = rt_str_get((*F->s_808), F->i_816);
}
}
(*rt_str_at(&F->r_814, rt_add(F->j_815, ((rt_int)1LL)))) = 34;
F->result_ = F->r_814;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P164 f_enum_type_of_147(rstr *lit_820, rt_int line_821) {
  struct f_enum_type_of_147fr *F = rt_alloc(sizeof *F);
F->lit_820 = lit_820;
F->line_821 = line_821;
F->y_822 = NULL;
F->y_822 = g_scope_stack_188;
F->c_823 = NULL;
if ((f_lit_index_96((*(P164)rt_nil_check(g_ty_ascii_212)).lits, &(*F->lit_820)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_212;
goto ret_;
}
while ((F->y_822 != NULL)) {
if ((((((*(P170)rt_nil_check(F->y_822)).kind == ((rt_int)6LL)) || ((*(P170)rt_nil_check(F->y_822)).kind == ((rt_int)5LL))) && ((*(P170)rt_nil_check(F->y_822)).st != NULL)) && ((*(P160)rt_nil_check((*(P170)rt_nil_check(F->y_822)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_96((*(P160)rt_nil_check((*(P170)rt_nil_check(F->y_822)).st)).a, &(*F->lit_820)) >= ((rt_int)0LL))) {
F->result_ = f_resolve_subtype_97((*(P170)rt_nil_check(F->y_822)).st, &F->c_823);
goto ret_;
}
}
F->y_822 = (*(P170)rt_nil_check(F->y_822)).stack;
}
f_fail_11(F->line_821, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_820)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_148(P160 e_824, P164 *t_825) {
  struct f_attribute_148fr *F = rt_alloc(sizeof *F);
F->e_824 = e_824;
F->t_825 = t_825;
F->bt_826 = NULL;
F->c_827 = NULL;
(*F->t_825) = g_ty_int_209;
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_824)).name)), rt_str("LEN", 3))) {
F->base_828 = NULL;
F->base_828 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_144((*(P160)rt_nil_check(F->e_824)).a, NULL, &F->bt_826); b_; }));
if (((*(P164)rt_nil_check(F->bt_826)).kind == ((rt_int)8LL))) {
f_finish_ptr_113(F->bt_826);
F->base_828 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_139(&(*(P155)rt_nil_check(F->base_828)), F->bt_826); b_; }));
F->bt_826 = (*(P164)rt_nil_check(F->bt_826)).target;
}
if (((*(P164)rt_nil_check(F->bt_826)).kind != ((rt_int)5LL))) {
f_fail_11((*(P160)rt_nil_check(F->e_824)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P155)rt_nil_check(F->base_828))), rt_str(").len", 5));
goto ret_;
}
if (((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_824)).a)).kind == ((rt_int)7LL))) {
F->y_829 = NULL;
F->y_829 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_824)).a)).name)));
if (((F->y_829 != NULL) && (((*(P170)rt_nil_check(F->y_829)).kind == ((rt_int)6LL)) || ((*(P170)rt_nil_check(F->y_829)).kind == ((rt_int)5LL))))) {
F->st_830 = NULL;
F->st_830 = f_nn_22(((rt_int)80LL), (*(P160)rt_nil_check(F->e_824)).line);
(*(P160)rt_nil_check(F->st_830)).name = (*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_824)).a)).name;
(*F->t_825) = f_resolve_subtype_97(F->st_830, &F->c_827);
if (((*(P164)rt_nil_check((*F->t_825))).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_824)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_4(rt_sub(f_list_len_24((*(P164)rt_nil_check((*F->t_825))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P162)rt_nil_check(F->c_827)).lo != NULL)) {
if (rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_824)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P155)rt_nil_check((*(P162)rt_nil_check(F->c_827)).lo));
goto ret_;
}
F->result_ = (*(P155)rt_nil_check((*(P162)rt_nil_check(F->c_827)).hi));
goto ret_;
}
}
}
f_fail_11((*(P160)rt_nil_check(F->e_824)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P155)rt_nil_check((*(P160)rt_nil_check(F->e_824)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_149(P160 e_831, P164 want_832, P164 *t_833) {
  struct f_gbinop_149fr *F = rt_alloc(sizeof *F);
F->e_831 = e_831;
F->want_832 = want_832;
F->t_833 = t_833;
F->op_834 = NULL;
F->op_834 = (*(P160)rt_nil_check(F->e_831)).name;
F->ta_835 = NULL;
F->tb_836 = NULL;
F->hint_837 = NULL;
(*F->t_833) = g_ty_bool_210;
if (((rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("AND", 3)) || rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("OR", 2))) || rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("XOR", 3)))) {
F->a_838 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).a, g_ty_bool_210, &F->ta_835));
F->b_839 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).b, g_ty_bool_210, &F->tb_836));
f_check_type_91(F->ta_835, g_ty_bool_210, (*(P160)rt_nil_check(F->e_831)).line);
f_check_type_91(F->tb_836, g_ty_bool_210, (*(P160)rt_nil_check(F->e_831)).line);
if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_838), rt_str(" && ", 4)), F->b_839), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_838), rt_str(" || ", 4)), F->b_839), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_838), rt_str(" != ", 4)), F->b_839), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("&", 1))) {
F->wa_840 = NULL;
F->wb_841 = NULL;
if (((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_831)).a)).kind == ((rt_int)4LL))) {
F->wa_840 = g_ty_ascii_212;
}
if (((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_831)).b)).kind == ((rt_int)4LL))) {
F->wb_841 = g_ty_ascii_212;
}
{
F->a_842 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).a, F->wa_840, &F->ta_835));
F->b_843 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).b, F->wb_841, &F->tb_836));
(*F->t_833) = g_ty_string_213;
if ((((*(P164)rt_nil_check(F->ta_835)).kind == ((rt_int)5LL)) && ((*(P164)rt_nil_check(F->tb_836)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_842), rt_str(", ", 2)), F->b_843), rt_str(")", 1));
goto ret_;
} else if ((((*(P164)rt_nil_check(F->ta_835)).kind == ((rt_int)5LL)) && ((*(P164)rt_nil_check(F->tb_836)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_842), rt_str(", ", 2)), F->b_843), rt_str(")", 1));
goto ret_;
} else if ((((*(P164)rt_nil_check(F->ta_835)).kind == ((rt_int)4LL)) && ((*(P164)rt_nil_check(F->tb_836)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_842), rt_str(", ", 2)), F->b_843), rt_str(")", 1));
goto ret_;
} else if ((((*(P164)rt_nil_check(F->ta_835)).kind == ((rt_int)4LL)) && ((*(P164)rt_nil_check(F->tb_836)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_842), rt_str(", ", 2)), F->b_843), rt_str(")", 1));
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->e_831)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_47(&(*(P155)rt_nil_check(F->op_834))) && (!rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("IN", 2))))) {
if (((((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_831)).a)).kind == ((rt_int)4LL)) || ((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_831)).a)).kind == ((rt_int)6LL))) || ((*(P160)rt_nil_check((*(P160)rt_nil_check(F->e_831)).a)).kind == ((rt_int)1LL)))) {
F->dummy_844 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).b, NULL, &F->hint_837));
}
{
F->a_845 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).a, F->hint_837, &F->ta_835));
F->b_846 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).b, F->ta_835, &F->tb_836));
F->ct_847 = NULL;
F->ct_847 = F->ta_835;
(*F->t_833) = g_ty_bool_210;
if ((((*(P164)rt_nil_check(F->ta_835)).kind != ((rt_int)11LL)) && ((*(P164)rt_nil_check(F->tb_836)).kind != ((rt_int)11LL)))) {
f_check_type_91(F->tb_836, F->ta_835, (*(P160)rt_nil_check(F->e_831)).line);
}
if (((*(P164)rt_nil_check(F->ta_835)).kind == ((rt_int)11LL))) {
F->ct_847 = F->tb_836;
}
if (((*(P164)rt_nil_check(F->ct_847)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_845), rt_str(", ", 2)), F->b_846), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_845), rt_str(", ", 2)), F->b_846), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_845), rt_str(", ", 2)), F->b_846), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_845), rt_str(", ", 2)), F->b_846), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_846), rt_str(", ", 2)), F->a_845), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_846), rt_str(", ", 2)), F->a_845), rt_str(")", 1));
goto ret_;
}
if ((((*(P164)rt_nil_check(F->ct_847)).kind == ((rt_int)6LL)) || ((*(P164)rt_nil_check(F->ct_847)).kind == ((rt_int)7LL)))) {
if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("=", 1))) {
F->result_ = f_eq_code_102(F->ct_847, &F->a_845, &F->b_846);
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_102(F->ct_847, &F->a_845, &F->b_846)), rt_str(")", 1));
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->e_831)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_845), rt_str(" == ", 4)), F->b_846), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_845), rt_str(" != ", 4)), F->b_846), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_845), rt_str(" ", 1)), (*(P155)rt_nil_check(F->op_834))), rt_str(" ", 1)), F->b_846), rt_str(")", 1));
goto ret_;
}
}
{
F->a_848 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).a, F->want_832, &F->ta_835));
F->b_849 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->e_831)).b, F->ta_835, &F->tb_836));
if ((((*(P164)rt_nil_check(F->ta_835)).kind == ((rt_int)3LL)) || ((*(P164)rt_nil_check(F->tb_836)).kind == ((rt_int)3LL)))) {
(*F->t_833) = g_ty_float_211;
if (((rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("+", 1)) || rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("-", 1))) || rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_848), rt_str(" ", 1)), (*(P155)rt_nil_check(F->op_834))), rt_str(" ", 1)), F->b_849), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
}
}
f_check_type_91(F->ta_835, g_ty_int_209, (*(P160)rt_nil_check(F->e_831)).line);
f_check_type_91(F->tb_836, g_ty_int_209, (*(P160)rt_nil_check(F->e_831)).line);
(*F->t_833) = g_ty_int_209;
if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P155)rt_nil_check(F->op_834)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_848), rt_str(", ", 2)), F->b_849), rt_str(")", 1));
goto ret_;
}
f_fail_11((*(P160)rt_nil_check(F->e_831)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P155)rt_nil_check(F->op_834))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_150(P160 e_850, P164 want_851, P164 *t_852) {
  struct f_constructor_150fr *F = rt_alloc(sizeof *F);
F->e_850 = e_850;
F->want_851 = want_851;
F->t_852 = t_852;
F->it_853 = NULL;
F->it_853 = (*(P160)rt_nil_check(F->e_850)).a;
F->f_854 = NULL;
F->vt_855 = NULL;
if (((F->want_851 == NULL) || ((*(P164)rt_nil_check(F->want_851)).kind != ((rt_int)7LL)))) {
f_fail_11((*(P160)rt_nil_check(F->e_850)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only record constructors are handled yet", 40); b_; }));
}
(*F->t_852) = F->want_851;
F->f_854 = (*(P164)rt_nil_check(F->want_851)).fields;
{
F->tmp_856 = rt_str_copy(f_new_name_10(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_857 = NULL;
F->parts_857 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_92(F->want_851)), rt_str(" ", 1)), F->tmp_856), rt_str(";", 1)); b_; }));
if (((f_list_len_24(F->it_853) != ((rt_int)0LL)) && (f_list_len_24(F->it_853) != ((rt_int)0LL)))) {
while (((F->it_853 != NULL) && (F->f_854 != NULL))) {
if (((((*(P160)rt_nil_check(F->it_853)).a == NULL) || ((*(P160)rt_nil_check((*(P160)rt_nil_check((*(P160)rt_nil_check(F->it_853)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P155)rt_nil_check((*(P160)rt_nil_check((*(P160)rt_nil_check((*(P160)rt_nil_check(F->it_853)).a)).a)).name)), (*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_854)).name)))))) {
f_fail_11((*(P160)rt_nil_check(F->e_850)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_854)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_858 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->it_853)).b, (*(P166)rt_nil_check(F->f_854)).t, &F->vt_855));
f_check_type_91(F->vt_855, (*(P166)rt_nil_check(F->f_854)).t, (*(P160)rt_nil_check(F->e_850)).line);
F->parts_857 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->parts_857)), rt_str(" ", 1)), F->tmp_856), rt_str(".", 1)), f_lower_s_8(&(*(P155)rt_nil_check((*(P166)rt_nil_check(F->f_854)).name)))), rt_str(" = ", 3)), f_copy_code_101((*(P166)rt_nil_check(F->f_854)).t, &F->v_858)), rt_str(";", 1)); b_; }));
}
F->it_853 = (*(P160)rt_nil_check(F->it_853)).next;
F->f_854 = (*(P166)rt_nil_check(F->f_854)).next;
}
}
if (((F->it_853 != NULL) || (F->f_854 != NULL))) {
f_fail_11((*(P160)rt_nil_check(F->e_850)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->parts_857)), rt_str(" ", 1)), F->tmp_856), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_151(P160 e_859, int is_stmt_860, P164 *t_861) {
  struct f_gcall_151fr *F = rt_alloc(sizeof *F);
F->e_859 = e_859;
F->is_stmt_860 = is_stmt_860;
F->t_861 = t_861;
F->fn_862 = NULL;
F->fn_862 = (*(P160)rt_nil_check(F->e_859)).a;
F->tt_863 = NULL;
F->y_864 = NULL;
F->args_865 = NULL;
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_866 = NULL;
F->a_866 = (*(P160)rt_nil_check(F->e_859)).b;
F->pm_867 = NULL;
F->lt_868 = NULL;
F->vt_869 = NULL;
F->lv_870 = NULL;
F->lc_871 = NULL;
if (((*(P160)rt_nil_check(F->fn_862)).kind == ((rt_int)12LL))) {
F->tt_863 = (*(P160)rt_nil_check(F->fn_862)).b;
F->fn_862 = (*(P160)rt_nil_check(F->fn_862)).a;
}
F->y_864 = f_lookup_81(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->fn_862)).name)));
if ((F->y_864 == NULL)) {
F->result_ = f_builtin_152(&(*(P155)rt_nil_check((*(P160)rt_nil_check(F->fn_862)).name)), F->tt_863, (*(P160)rt_nil_check(F->e_859)).b, (*(P160)rt_nil_check(F->e_859)).line, F->is_stmt_860, &(*F->t_861));
goto ret_;
}
if ((((*(P170)rt_nil_check(F->y_864)).kind != ((rt_int)3LL)) && ((*(P170)rt_nil_check(F->y_864)).kind != ((rt_int)4LL)))) {
f_fail_11((*(P160)rt_nil_check(F->e_859)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->fn_862)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_860 && ((*(P170)rt_nil_check(F->y_864)).kind != ((rt_int)4LL)))) {
f_fail_11((*(P160)rt_nil_check(F->e_859)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->fn_862)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_860) && ((*(P170)rt_nil_check(F->y_864)).kind != ((rt_int)3LL)))) {
f_fail_11((*(P160)rt_nil_check(F->e_859)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->fn_862)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_867 = (*(P170)rt_nil_check(F->y_864)).params;
if (((*(P170)rt_nil_check(F->y_864)).level > ((rt_int)0LL))) {
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo874 = ((rt_int)1LL), hi875 = rt_sub(g_cur_level_201, (*(P170)rt_nil_check(F->y_864)).level);
for (rt_int it876 = lo874; it876 <= hi875; it876++) {
F->i_873 = it876;
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->args_865)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_866 != NULL) && (F->pm_867 != NULL))) {
if ((((*(P155)rt_nil_check(F->args_865))).len > ((rt_int)0LL))) {
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->args_865)), rt_str(", ", 2)); b_; }));
}
if ((((*(P168)rt_nil_check(F->pm_867)).mode == ((rt_int)2LL)) || ((*(P168)rt_nil_check(F->pm_867)).mode == ((rt_int)3LL)))) {
f_lvalue_141(F->a_866, &F->lv_870, &F->lt_868, &F->lc_871, &F->ro_872);
if (F->ro_872) {
f_fail_11((*(P160)rt_nil_check(F->e_859)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check((*(P168)rt_nil_check(F->pm_867)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_91(F->lt_868, (*(P168)rt_nil_check(F->pm_867)).t, (*(P160)rt_nil_check(F->e_859)).line);
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->args_865)), rt_str("&", 1)), (*(P155)rt_nil_check(F->lv_870))); b_; }));
} else if ((((*(P168)rt_nil_check(F->pm_867)).mode == ((rt_int)4LL)) && f_is_lvalue_140(F->a_866))) {
f_lvalue_141(F->a_866, &F->lv_870, &F->lt_868, &F->lc_871, &F->ro_872);
f_check_type_91(F->lt_868, (*(P168)rt_nil_check(F->pm_867)).t, (*(P160)rt_nil_check(F->e_859)).line);
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->args_865)), rt_str("&", 1)), (*(P155)rt_nil_check(F->lv_870))); b_; }));
} else if (((*(P168)rt_nil_check(F->pm_867)).mode == ((rt_int)4LL))) {
F->v_877 = rt_str_copy(f_gexpr_144(F->a_866, (*(P168)rt_nil_check(F->pm_867)).t, &F->vt_869));
F->ct_878 = rt_str_copy(f_ctype_92((*(P168)rt_nil_check(F->pm_867)).t));
f_check_type_91(F->vt_869, (*(P168)rt_nil_check(F->pm_867)).t, (*(P160)rt_nil_check(F->e_859)).line);
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->args_865)), rt_str("({ ", 3)), F->ct_878), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_878), rt_str(")); *b_ = ", 10)), F->v_877), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_879 = rt_str_copy(f_gexpr_144(F->a_866, (*(P168)rt_nil_check(F->pm_867)).t, &F->vt_869));
f_check_type_91(F->vt_869, (*(P168)rt_nil_check(F->pm_867)).t, (*(P160)rt_nil_check(F->e_859)).line);
if (((((*(P164)rt_nil_check((*(P168)rt_nil_check(F->pm_867)).t)).kind == ((rt_int)1LL)) && ((*(P168)rt_nil_check(F->pm_867)).c != NULL)) && (*(P162)rt_nil_check((*(P168)rt_nil_check(F->pm_867)).c)).hasm)) {
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check(F->args_865)), rt_str("rt_range(", 9)), F->v_879), rt_str(", ", 2)), f_itos_4((*(P162)rt_nil_check((*(P168)rt_nil_check(F->pm_867)).c)).mlo)), rt_str(", ", 2)), f_itos_4((*(P162)rt_nil_check((*(P168)rt_nil_check(F->pm_867)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_865 = f_mk_2(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P155)rt_nil_check(F->args_865)), F->v_879); b_; }));
}
}
F->a_866 = (*(P160)rt_nil_check(F->a_866)).next;
F->pm_867 = (*(P168)rt_nil_check(F->pm_867)).next;
}
if (((F->a_866 != NULL) || (F->pm_867 != NULL))) {
f_fail_11((*(P160)rt_nil_check(F->e_859)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check((*(P160)rt_nil_check(F->fn_862)).name)), rt_str(" needs ", 7)), f_itos_4(rt_sub(f_list_len_24((*(P160)rt_nil_check(F->e_859)).b), f_list_len_24(F->a_866)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_861) = (*(P170)rt_nil_check(F->y_864)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P155)rt_nil_check((*(P170)rt_nil_check(F->y_864)).cname)), rt_str("(", 1)), (*(P155)rt_nil_check(F->args_865))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_152(rstr *name_880, P160 tt_881, P160 args_882, rt_int line_883, int is_stmt_884, P164 *t_885) {
  struct f_builtin_152fr *F = rt_alloc(sizeof *F);
F->name_880 = name_880;
F->tt_881 = tt_881;
F->args_882 = args_882;
F->line_883 = line_883;
F->is_stmt_884 = is_stmt_884;
F->t_885 = t_885;
F->at_886 = NULL;
F->n_887 = f_list_len_24(F->args_882);
(*F->t_885) = g_ty_void_214;
if (((rt_str_eq((*F->name_880), rt_str("POS", 3)) || rt_str_eq((*F->name_880), rt_str("SUCC", 4))) || rt_str_eq((*F->name_880), rt_str("PRED", 4)))) {
F->a_888 = rt_str_copy(f_gexpr_144(F->args_882, NULL, &F->at_886));
if (rt_str_eq((*F->name_880), rt_str("POS", 3))) {
if (((*(P164)rt_nil_check(F->at_886)).kind != ((rt_int)4LL))) {
f_fail_11(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_885) = g_ty_int_209;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_888), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_885) = F->at_886;
if (((*(P164)rt_nil_check(F->at_886)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_880), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_888), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_888), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_880), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_888), rt_str(" + 1, 0, ", 9)), f_itos_4(rt_sub(f_list_len_24((*(P164)rt_nil_check(F->at_886)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_888), rt_str(" - 1, 0, ", 9)), f_itos_4(rt_sub(f_list_len_24((*(P164)rt_nil_check(F->at_886)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("ABS", 3))) {
F->a_889 = rt_str_copy(f_gexpr_144(F->args_882, NULL, &F->at_886));
(*F->t_885) = F->at_886;
if (((*(P164)rt_nil_check(F->at_886)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_889), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_889), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("CNVT", 4))) {
if ((F->tt_881 == NULL)) {
f_fail_11(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_890 = rt_str_copy(f_gexpr_144(F->args_882, NULL, &F->at_886));
if ((((*(P160)rt_nil_check(F->tt_881)).kind == ((rt_int)73LL)) && ((*(P164)rt_nil_check(F->at_886)).kind == ((rt_int)1LL)))) {
(*F->t_885) = g_ty_string_213;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_890), rt_str(")", 1));
goto ret_;
} else if ((((*(P160)rt_nil_check(F->tt_881)).kind == ((rt_int)70LL)) && ((*(P164)rt_nil_check(F->at_886)).kind == ((rt_int)5LL)))) {
(*F->t_885) = g_ty_int_209;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_890), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_880), rt_str("WRITELN", 7))) {
if ((F->n_887 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_891 = NULL;
F->last_891 = F->args_882;
while (((*(P160)rt_nil_check(F->last_891)).next != NULL)) {
F->last_891 = (*(P160)rt_nil_check(F->last_891)).next;
}
{
F->a_892 = rt_str_copy(f_gexpr_144(F->last_891, g_ty_string_213, &F->at_886));
f_check_type_91(F->at_886, g_ty_string_213, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_892), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_880), rt_str("WRITE", 5))) {
F->a_893 = rt_str_copy(f_gexpr_144((*(P160)rt_nil_check(F->args_882)).next, NULL, &F->at_886));
if (((*(P164)rt_nil_check(F->at_886)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_893), rt_str(")", 1));
goto ret_;
} else if (((*(P164)rt_nil_check(F->at_886)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_893), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_880), rt_str("READLN", 6))) {
F->lv_894 = NULL;
F->lc_895 = NULL;
F->last_897 = NULL;
F->last_897 = F->args_882;
while (((*(P160)rt_nil_check(F->last_897)).next != NULL)) {
F->last_897 = (*(P160)rt_nil_check(F->last_897)).next;
}
f_lvalue_141(F->last_897, &F->lv_894, &F->at_886, &F->lc_895, &F->ro_896);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P155)rt_nil_check(F->lv_894))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("SIZELN", 6))) {
(*F->t_885) = g_ty_int_209;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("EOF", 3))) {
(*F->t_885) = g_ty_bool_210;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_880), rt_str("SYS_OUT", 7)))) {
(*F->t_885) = g_ty_file_215;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_880), rt_str("OPEN", 4)) || rt_str_eq((*F->name_880), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if (rt_str_eq((*F->name_880), rt_str("HALT", 4))) {
F->a_898 = rt_str_copy(f_gexpr_144(F->args_882, g_ty_int_209, &F->at_886));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_898), rt_str(")", 1));
goto ret_;
}
f_fail_11(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_880), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_153(P160 units_899) {
  struct f_translate_153fr *F = rt_alloc(sizeof *F);
F->units_899 = units_899;
F->u_900 = NULL;
F->u_900 = F->units_899;
while ((F->u_900 != NULL)) {
if (((*(P160)rt_nil_check(F->u_900)).next == NULL)) {
f_declare_body_107((*(P160)rt_nil_check(F->u_900)).c);
f_body_elements_121((*(P160)rt_nil_check(F->u_900)).c);
} else {
f_gen_capsule_111(F->u_900);
}
F->u_900 = (*(P160)rt_nil_check(F->u_900)).next;
}
ret_:
  return;
}

static void f_print_program_154(void) {
  struct f_print_program_154fr *F = rt_alloc(sizeof *F);
f_emit_helpers_105();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_9()), rt_str("paleo.h", 7)), f_q_9()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_15(g_out_types_191);
f_print_buffer_15(g_out_frames_204);
f_print_buffer_15(g_out_helpers_192);
f_print_buffer_15(g_out_protos_193);
f_print_buffer_15(g_out_globals_194);
f_print_buffer_15(g_out_funcs_195);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_15(g_out_excs_197);
f_print_buffer_15(g_out_init_196);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R181(R181 *d, R181 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R181 cp_R181(R181 s) {
  R181 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R181(R181 a, R181 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R179(R179 *d, R179 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R179 cp_R179(R179 s) {
  R179 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R179(R179 a, R179 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A177(A177 *d, A177 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i <= s.hi - s.lo; i++) { d->p[i] = s.p[i]; }
}
static A177 cp_A177(A177 s) {
  A177 d = s; d.p = rt_alloc(sizeof(P170) * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));
  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A177(A177 a, A177 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R175(R175 *d, R175 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R175 cp_R175(R175 s) {
  R175 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R175(R175 a, R175 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R173(R173 *d, R173 s) {
  d->s = s.s;
  d->next = s.next;
}
static R173 cp_R173(R173 s) {
  R173 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R173(R173 a, R173 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R171(R171 *d, R171 s) {
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
  d->level = s.level;
  d->byref = s.byref;
  d->members = s.members;
  d->mnext = s.mnext;
  d->chain = s.chain;
  d->stack = s.stack;
}
static R171 cp_R171(R171 s) {
  R171 d = s;
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
  d.level = s.level;
  d.byref = s.byref;
  d.members = s.members;
  d.mnext = s.mnext;
  d.chain = s.chain;
  d.stack = s.stack;
  return d;
}
static int eq_R171(R171 a, R171 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R169(R169 *d, R169 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->next = s.next;
}
static R169 cp_R169(R169 s) {
  R169 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.next = s.next;
  return d;
}
static int eq_R169(R169 a, R169 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.next == b.next);
}
static void as_R167(R167 *d, R167 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R167 cp_R167(R167 s) {
  R167 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R167(R167 a, R167 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R165(R165 *d, R165 s) {
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
static R165 cp_R165(R165 s) {
  R165 d = s;
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
static int eq_R165(R165 a, R165 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R163(R163 *d, R163 s) {
  d->lo = s.lo;
  d->hi = s.hi;
  d->slen = s.slen;
  d->mlo = s.mlo;
  d->mhi = s.mhi;
  d->hasm = s.hasm;
}
static R163 cp_R163(R163 s) {
  R163 d = s;
  d.lo = s.lo;
  d.hi = s.hi;
  d.slen = s.slen;
  d.mlo = s.mlo;
  d.mhi = s.mhi;
  d.hasm = s.hasm;
  return d;
}
static int eq_R163(R163 a, R163 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm);
}
static void as_R161(R161 *d, R161 s) {
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
static R161 cp_R161(R161 s) {
  R161 d = s;
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
static int eq_R161(R161 a, R161 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.next == b.next);
}
static void as_A159(A159 *d, A159 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i <= s.hi - s.lo; i++) { d->p[i] = s.p[i]; }
}
static A159 cp_A159(A159 s) {
  A159 d = s; d.p = rt_alloc(sizeof(P156) * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));
  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A159(A159 a, A159 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R157(R157 *d, R157 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R157 cp_R157(R157 s) {
  R157 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R157(R157 a, R157 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_182 = NULL;
g_ntoks_183 = ((rt_int)0LL);
g_tpos_184 = ((rt_int)1LL);
g_src_line_185 = ((rt_int)0LL);
g_table_186 = NULL;
g_depth_187 = ((rt_int)0LL);
g_scope_stack_188 = NULL;
g_all_types_189 = NULL;
g_serial_190 = ((rt_int)0LL);
g_out_types_191 = NULL;
g_out_helpers_192 = NULL;
g_out_protos_193 = NULL;
g_out_globals_194 = NULL;
g_out_funcs_195 = NULL;
g_out_init_196 = NULL;
g_out_excs_197 = NULL;
g_code_198 = NULL;
g_fields_buf_199 = NULL;
g_in_func_200 = 0;
g_cur_level_201 = ((rt_int)0LL);
g_fctx_202 = NULL;
g_st_field_203 = NULL;
g_out_frames_204 = NULL;
g_func_sym_205 = NULL;
g_exits_206 = NULL;
g_frames_207 = ((rt_int)0LL);
g_handlers_208 = NULL;
g_ty_int_209 = NULL;
g_ty_bool_210 = NULL;
g_ty_float_211 = NULL;
g_ty_ascii_212 = NULL;
g_ty_string_213 = NULL;
g_ty_void_214 = NULL;
g_ty_file_215 = NULL;
g_ty_nil_216 = NULL;
g_no_cons_217 = NULL;
{ A159 *cell901 = rt_alloc(sizeof(A159));
rt_int pv902 = ((rt_int)1000000LL);
(*cell901).lo = ((rt_int)1LL); (*cell901).hi = pv902;
(*cell901).p = rt_alloc(sizeof(P156) * (size_t)((*cell901).hi >= (*cell901).lo ? (*cell901).hi - (*cell901).lo + 1 : 0));
g_toks_182 = cell901;
}
{ A177 *cell903 = rt_alloc(sizeof(A177));
rt_int pv904 = ((rt_int)4093LL);
(*cell903).lo = ((rt_int)0LL); (*cell903).hi = pv904;
(*cell903).p = rt_alloc(sizeof(P170) * (size_t)((*cell903).hi >= (*cell903).lo ? (*cell903).hi - (*cell903).lo + 1 : 0));
g_table_186 = cell903;
}
g_out_types_191 = f_new_buffer_12();
g_out_helpers_192 = f_new_buffer_12();
g_out_protos_193 = f_new_buffer_12();
g_out_globals_194 = f_new_buffer_12();
g_out_funcs_195 = f_new_buffer_12();
g_out_init_196 = f_new_buffer_12();
g_out_excs_197 = f_new_buffer_12();
g_out_frames_204 = f_new_buffer_12();
g_code_198 = g_out_init_196;
g_no_cons_217 = f_new_cons_87();
g_ty_int_209 = f_new_typ_86(((rt_int)1LL));
g_ty_bool_210 = f_new_typ_86(((rt_int)2LL));
g_ty_float_211 = f_new_typ_86(((rt_int)3LL));
g_ty_string_213 = f_new_typ_86(((rt_int)5LL));
g_ty_void_214 = f_new_typ_86(((rt_int)9LL));
g_ty_file_215 = f_new_typ_86(((rt_int)10LL));
g_ty_nil_216 = f_new_typ_86(((rt_int)11LL));
{ rt_frame xf1;
if (RT_TRY(xf1)) {
f_init_ascii_95();
f_read_source_21();
f_translate_153(f_program_79());
f_print_program_154();
RT_POP(xf1);
} else {
RT_POP(xf1);
int x905 = rt_xcur;
if (0 || x905 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x905);
}
}
}
  rt_main_done();
  return 0;
}
