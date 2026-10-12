#include "paleo.h"
#include <math.h>
typedef rstr *P353;
typedef struct R355 R355;
typedef struct R355 *P354;
struct R355 {  rt_int kind; rt_int line; rt_int ival; P353 s;  };
typedef struct A357 A357;
struct A357 { rt_int lo, hi; P354 *p; };
typedef A357 *P356;
typedef struct R359 R359;
typedef struct R359 *P358;
struct R359 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P353 name; P353 tag; P358 a; P358 b; P358 c; P358 d; P358 next;  };
typedef struct R361 R361;
typedef struct R361 *P360;
struct R361 {  P353 lo; P353 hi; P353 slen; rt_int mlo; rt_int mhi; int hasm;  };
typedef struct R363 R363;
typedef struct R363 *P362;
typedef struct R365 R365;
typedef struct R365 *P364;
struct R365 {  P353 name; P362 t; P360 c; P358 st; P364 next;  };
struct R363 {  rt_int kind; P353 name; P358 lits; P362 elem; P362 idx; P360 elemcons; P358 elemst; P364 fields; P362 target; P358 decl; P353 cname; int forward; int defined; int helpers; P362 next;  };
typedef struct R367 R367;
typedef struct R367 *P366;
struct R367 {  P353 name; rt_int mode; P362 t; P360 c; P353 cfield; P366 next;  };
typedef struct R369 R369;
typedef struct R369 *P368;
struct R369 {  rt_int kind; P353 name; P362 t; P360 c; P353 access; P353 cname; int ro_flag; rt_int mvalue; int hasmv; P358 st; P358 decl; P366 params; P362 result; rt_int depth; rt_int level; int byref; P368 members; P368 mnext; P368 chain; P368 stack;  };
typedef struct R371 R371;
typedef struct R371 *P370;
struct R371 {  P353 s; P370 next;  };
typedef struct R373 R373;
typedef struct R373 *P372;
struct R373 {  P370 head; P370 tail;  };
typedef struct A375 A375;
struct A375 { rt_int lo, hi; P368 *p; };
typedef A375 *P374;
typedef struct R377 R377;
typedef struct R377 *P376;
struct R377 {  P353 match; P353 label; rt_int depth; P376 next;  };
typedef struct R379 R379;
typedef struct R379 *P378;
struct R379 {  rt_int depth; P358 imps; int all_imp; P378 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P353 result_;
 P353 t_420;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_423;
};
struct f_itos_7fr { int dummy;
 rt_int n_6;
 rstr result_;
};
struct f_is_letter_9fr { int dummy;
 int c_8;
 int result_;
};
struct f_is_digit_11fr { int dummy;
 int c_10;
 int result_;
};
struct f_upper_13fr { int dummy;
 int c_12;
 int result_;
 rstr letters_424;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_425;
 rstr r_426;
 rt_int i_427;
};
struct f_q_16fr { int dummy;
 rstr result_;
};
struct f_new_name_18fr { int dummy;
 rstr *base_17;
 rstr result_;
};
struct f_fail_21fr { int dummy;
 rt_int line_19;
 rstr *msg_20;
};
struct f_new_buffer_22fr { int dummy;
 P372 result_;
 P372 b_431;
};
struct f_put_25fr { int dummy;
 P372 b_23;
 rstr *s_24;
 P370 l_433;
};
struct f_emit_27fr { int dummy;
 rstr *s_26;
};
struct f_print_buffer_29fr { int dummy;
 P372 b_28;
 P370 l_435;
};
struct f_splice_32fr { int dummy;
 P372 a_30;
 P372 b_31;
};
struct f_is_reserved_34fr { int dummy;
 rstr *w_33;
 int result_;
};
struct f_is_word_op_36fr { int dummy;
 rstr *w_35;
 int result_;
};
struct f_add_token_40fr { int dummy;
 rt_int kind_37;
 rstr *s_38;
 rt_int ival_39;
 P354 t_437;
};
struct f_lex_line_42fr { int dummy;
 rstr *line_41;
 rt_int i_439;
 rt_int j_440;
 rt_int n_441;
 int c_442;
 rstr w_443;
 rt_int k_444;
 rstr w_448;
 rt_int k_449;
 rstr two_453;
};
struct f_read_source_43fr { int dummy;
 rstr line_454;
};
struct f_nn_46fr { int dummy;
 rt_int kind_44;
 rt_int line_45;
 P358 result_;
 P358 x_455;
};
struct f_append_50fr { int dummy;
 P358 *head_47;
 P358 *tail_48;
 P358 x_49;
};
struct f_list_len_52fr { int dummy;
 P358 l_51;
 rt_int result_;
 rt_int n_457;
 P358 p_458;
};
struct f_cur_line_53fr { int dummy;
 rt_int result_;
};
struct f_at_kw_55fr { int dummy;
 rstr *w_54;
 int result_;
};
struct f_at_op_57fr { int dummy;
 rstr *w_56;
 int result_;
};
struct f_at_kind_59fr { int dummy;
 rt_int k_58;
 int result_;
};
struct f_kind_at_61fr { int dummy;
 rt_int k_60;
 rt_int result_;
};
struct f_text_at_63fr { int dummy;
 rt_int k_62;
 P353 result_;
};
struct f_perror_65fr { int dummy;
 rstr *msg_64;
};
struct f_accept_kw_67fr { int dummy;
 rstr *w_66;
 int result_;
};
struct f_accept_op_69fr { int dummy;
 rstr *w_68;
 int result_;
};
struct f_expect_kw_71fr { int dummy;
 rstr *w_70;
};
struct f_expect_op_73fr { int dummy;
 rstr *w_72;
};
struct f_expect_id_74fr { int dummy;
 P353 result_;
};
struct f_name_node_75fr { int dummy;
 P358 result_;
 P358 x_459;
};
struct f_id_list_76fr { int dummy;
 P358 result_;
 P358 head_460;
 P358 tail_461;
};
struct f_p_subtype_77fr { int dummy;
 P358 result_;
 rt_int line_462;
 P358 x_463;
 rstr w_464;
 P358 head_465;
 P358 tail_466;
 P358 head_467;
 P358 tail_468;
 int more_469;
 P358 names_470;
 P358 st_471;
 P358 cmp_472;
 P358 head_473;
 P358 tail_474;
 int more_475;
 P358 lit_476;
};
struct f_actual_params_78fr { int dummy;
 P358 result_;
 P358 head_477;
 P358 tail_478;
};
struct f_is_type_word_80fr { int dummy;
 rstr *w_79;
 int result_;
};
struct f_actual_tt_81fr { int dummy;
 P358 result_;
 P358 head_479;
 P358 tail_480;
 int more_481;
};
struct f_binop_86fr { int dummy;
 P353 op_82;
 P358 l_83;
 P358 r_84;
 rt_int line_85;
 P358 result_;
 P358 x_482;
};
struct f_expr_87fr { int dummy;
 P358 result_;
 P358 l_483;
 P353 op_484;
 rt_int line_485;
};
struct f_expr_and_88fr { int dummy;
 P358 result_;
 P358 l_486;
 rt_int line_487;
};
struct f_expr_not_89fr { int dummy;
 P358 result_;
 P358 x_488;
};
struct f_is_rel_91fr { int dummy;
 rstr *s_90;
 int result_;
};
struct f_expr_rel_92fr { int dummy;
 P358 result_;
 P358 l_489;
 P353 op_490;
 rt_int line_491;
};
struct f_expr_add_93fr { int dummy;
 P358 result_;
 P358 l_492;
 P353 op_493;
 rt_int line_494;
};
struct f_expr_mul_94fr { int dummy;
 P358 result_;
 P358 l_495;
 P353 op_496;
 rt_int line_497;
};
struct f_expr_pow_95fr { int dummy;
 P358 result_;
 P358 l_498;
 rt_int line_499;
};
struct f_expr_prefix_96fr { int dummy;
 P358 result_;
 P358 x_500;
};
struct f_postfix_97fr { int dummy;
 P358 result_;
 P358 p_501;
 rt_int line_502;
 P358 x_503;
 P358 head_504;
 P358 tail_505;
 int more_506;
 P358 lo_507;
 P358 r_508;
 P358 x_509;
 P358 x_510;
 P358 x_511;
};
struct f_primary_98fr { int dummy;
 P358 result_;
 rt_int line_512;
 P358 x_513;
 rt_int k_514;
 rstr w_515;
 P358 head_516;
 P358 tail_517;
 int more_518;
};
struct f_constructor_item_99fr { int dummy;
 P358 result_;
 rt_int line_519;
 P358 it_520;
 P358 first_521;
 P358 keys_522;
 P358 ktail_523;
 P358 lab_524;
 rt_int save_525;
 P358 more_526;
 P358 tail2_527;
 int ok_528;
 int go_529;
 P358 l2_530;
};
struct f_at_body_end_100fr { int dummy;
 int result_;
};
struct f_body_101fr { int dummy;
 P358 result_;
 P358 head_531;
 P358 tail_532;
};
struct f_body_element_102fr { int dummy;
 P358 result_;
 P358 x_533;
};
struct f_declaration_103fr { int dummy;
 P358 result_;
 rt_int line_534;
 P358 head_535;
 P358 tail_536;
 P358 names_537;
 P358 x_538;
};
struct f_object_decl_104fr { int dummy;
 P358 result_;
 rt_int line_539;
 int is_var_540;
 P358 names_541;
 P358 st_542;
 P358 init_543;
 P358 head_544;
 P358 tail_545;
 P358 x_546;
};
struct f_abbrev_decl_105fr { int dummy;
 P358 result_;
 P358 x_547;
};
struct f_type_decl_106fr { int dummy;
 P358 result_;
 rt_int line_548;
 P353 name_549;
 P358 params_550;
 P358 x_551;
};
struct f_mode_of_108fr { int dummy;
 rstr *w_107;
 rt_int result_;
};
struct f_formal_params_109fr { int dummy;
 P358 result_;
 P358 head_552;
 P358 tail_553;
 int more_554;
 rt_int mode_555;
 P358 names_556;
 P358 ntail_557;
 P358 st_558;
 P358 p_559;
};
struct f_imports_list_111fr { int dummy;
 P358 owner_110;
 int result_;
 P358 head_560;
 P358 tail_561;
 int more_562;
 int ro_563;
 P358 x_564;
};
struct f_is_definable_113fr { int dummy;
 rstr *w_112;
 int result_;
};
struct f_definable_name_114fr { int dummy;
 P353 result_;
};
struct f_subprogram_decl_115fr { int dummy;
 P358 result_;
 rt_int line_565;
 P358 x_566;
 int is_abn_567;
 int is_func_568;
 int dummy_569;
};
struct f_capsule_decl_116fr { int dummy;
 P358 result_;
 P358 x_570;
 int dummy_571;
 P358 head_572;
 P358 tail_573;
 int more_574;
 P358 n_575;
};
struct f_task_decl_117fr { int dummy;
 P358 result_;
 P358 x_576;
 int dummy_577;
};
struct f_expose_decl_118fr { int dummy;
 P358 result_;
 P358 x_578;
 P358 head_579;
 P358 tail_580;
 int more_581;
 P358 n_582;
};
struct f_is_compound_kw_120fr { int dummy;
 rstr *w_119;
 int result_;
};
struct f_statement_121fr { int dummy;
 P358 result_;
 P358 labels_583;
 P358 ltail_584;
 P353 match_585;
 P358 s_586;
};
struct f_unlabeled_statement_122fr { int dummy;
 P358 result_;
 rt_int line_587;
 P358 x_588;
 P358 head_589;
 P358 tail_590;
 P358 invs_591;
 P358 itail_592;
 int more_593;
 P358 target_594;
};
struct f_arm_126fr { int dummy;
 P358 cond_123;
 P358 b_124;
 rt_int line_125;
 P358 result_;
 P358 x_595;
};
struct f_if_stmt_127fr { int dummy;
 P358 result_;
 P358 x_596;
 P358 head_597;
 P358 tail_598;
 P358 cond_599;
 int go_600;
};
struct f_case_stmt_128fr { int dummy;
 P358 result_;
 P358 x_601;
 P358 head_602;
 P358 tail_603;
 P358 labs_604;
 P358 ltail_605;
 int more_606;
 P358 l_607;
};
struct f_repeat_stmt_129fr { int dummy;
 P358 result_;
 P358 x_608;
};
struct f_guard_stmt_130fr { int dummy;
 P358 result_;
 P358 x_609;
 P358 head_610;
 P358 tail_611;
 P358 h_612;
};
struct f_program_131fr { int dummy;
 P358 result_;
 P358 head_613;
 P358 tail_614;
};
struct f_hash_133fr { int dummy;
 rstr *s_132;
 rt_int result_;
 rt_int h_615;
 rt_int i_616;
};
struct f_lookup_135fr { int dummy;
 rstr *name_134;
 P368 result_;
 P368 y_620;
};
struct f_define_138fr { int dummy;
 P368 y_136;
 rt_int line_137;
 rt_int h_621;
 P368 z_622;
};
struct f_open_scope_139fr { int dummy;
};
struct f_close_scope_140fr { int dummy;
};
struct f_new_sym_143fr { int dummy;
 rt_int kind_141;
 P353 name_142;
 P368 result_;
 P368 y_623;
};
struct f_new_typ_145fr { int dummy;
 rt_int kind_144;
 P362 result_;
 P362 t_625;
};
struct f_new_cons_146fr { int dummy;
 P360 result_;
 P360 c_627;
};
struct f_same_lits_149fr { int dummy;
 P358 a_147;
 P358 b_148;
 int result_;
 P358 x_629;
 P358 y_630;
};
struct f_same_152fr { int dummy;
 P362 a_150;
 P362 b_151;
 int result_;
 P364 f_631;
 P364 g_632;
};
struct f_kind_name_154fr { int dummy;
 P362 t_153;
 rstr result_;
};
struct f_check_type_158fr { int dummy;
 P362 got_155;
 P362 want_156;
 rt_int line_157;
};
struct f_ctype_160fr { int dummy;
 P362 t_159;
 rstr result_;
};
struct f_field_decls_162fr { int dummy;
 P362 t_161;
 rstr result_;
 P364 f_635;
 P353 s_636;
};
struct f_declare_ctype_164fr { int dummy;
 P362 t_163;
 P362 u_637;
 P362 target_638;
};
struct f_init_ascii_165fr { int dummy;
 rstr names_639;
 P358 head_640;
 P358 tail_641;
 rt_int start_642;
 rt_int i_643;
 P358 lit_647;
};
struct f_lit_index_168fr { int dummy;
 P358 lits_166;
 rstr *name_167;
 rt_int result_;
 rt_int i_648;
 P358 l_649;
};
struct f_resolve_subtype_171fr { int dummy;
 P358 st_169;
 P360 *c_170;
 P362 result_;
 P362 t_650;
 int ok_651;
 P362 dummy_652;
 P360 ic_654;
 P360 ec_655;
 P362 it_656;
 P362 et_657;
 P358 comp_658;
 P364 tail_659;
 P360 cc_660;
 P364 f_661;
 P360 ec_663;
 P368 y_664;
};
struct f_init_storage_175fr { int dummy;
 rstr *lval_172;
 P362 t_173;
 P360 c_174;
 rstr i_665;
 P364 f_666;
};
struct f_manifest_178fr { int dummy;
 P358 e_176;
 int *ok_177;
 rt_int result_;
 rt_int a_667;
 rt_int b_668;
 int ok2_669;
 P368 y_670;
};
struct f_mcopy_180fr { int dummy;
 P362 t_179;
 rstr result_;
 rstr ct_671;
 rstr name_672;
 P370 l_673;
};
struct f_assign_code_185fr { int dummy;
 rstr *lval_181;
 P362 t_182;
 rstr *v_183;
 P360 c_184;
 rstr result_;
};
struct f_copy_code_188fr { int dummy;
 P362 t_186;
 rstr *v_187;
 rstr result_;
};
struct f_eq_code_192fr { int dummy;
 P362 t_189;
 rstr *a_190;
 rstr *b_191;
 rstr result_;
};
struct f_elem_assign_196fr { int dummy;
 rstr *lval_193;
 P362 t_194;
 rstr *v_195;
 rstr result_;
};
struct f_seen_name_199fr { int dummy;
 P370 l_197;
 rstr *s_198;
 int result_;
 P370 p_675;
};
struct f_emit_helpers_200fr { int dummy;
 P362 order_676;
 P362 t_677;
 P370 done_678;
 P370 l_679;
 rstr c_680;
};
struct f_helper_bodies_202fr { int dummy;
 P362 t_201;
 rstr c_682;
 P372 b_683;
 P362 e_684;
 P364 f_685;
 P353 conds_686;
 rstr fn_687;
 rstr fn_688;
};
struct f_declare_body_204fr { int dummy;
 P358 elems_203;
 P358 e_689;
 P368 y_690;
 P368 y_691;
 P368 y_692;
 P362 t_693;
 P368 y_694;
};
struct f_manifest_const_206fr { int dummy;
 P358 d_205;
 int ok_695;
 rt_int v_696;
 P368 y_697;
 P360 c_698;
};
struct f_exported_210fr { int dummy;
 P358 d_207;
 rstr *name_208;
 int *ro_209;
 int result_;
 P358 p_699;
};
struct f_copy_sym_212fr { int dummy;
 P368 y_211;
 P368 result_;
 P368 z_700;
};
struct f_gen_capsule_214fr { int dummy;
 P358 d_213;
 P368 y_702;
 P378 ctx_703;
 P368 m_704;
 P358 p_705;
 int ro_706;
 P368 z_708;
};
struct f_gen_expose_216fr { int dummy;
 P358 d_215;
 P368 y_709;
 P368 m_710;
 P358 p_711;
 int found_712;
 P368 z_713;
};
struct f_finish_ptr_218fr { int dummy;
 P362 t_217;
 P358 d_714;
 P358 p_715;
 P360 c_716;
 rstr dummy_717;
 P368 y_718;
};
struct f_declare_subprogram_220fr { int dummy;
 P358 d_219;
 P368 y_719;
 P358 p_720;
 P366 tail_721;
 P366 pm_722;
 P360 rc_724;
};
struct f_element_222fr { int dummy;
 P358 e_221;
 rt_int k_725;
 P362 t_726;
 rstr c_727;
};
struct f_storage_225fr { int dummy;
 rstr *name_223;
 P362 t_224;
 rstr result_;
 rstr g_728;
 rstr f_729;
};
struct f_bind_228fr { int dummy;
 P368 y_226;
 rstr *access_227;
};
struct f_var_decl_230fr { int dummy;
 P358 d_229;
 P360 c_730;
 P362 t_731;
 P368 y_732;
 rstr access_733;
 P362 vt_734;
 rstr v_735;
};
struct f_const_decl_232fr { int dummy;
 P358 d_231;
 P360 c_736;
 P362 t_737;
 P362 vt_738;
 P368 y_739;
 int ok_740;
 rstr v_741;
 rstr access_742;
};
struct f_subprogram_234fr { int dummy;
 P358 d_233;
 P368 y_743;
 P372 saved_code_744;
 P372 saved_fields_745;
 int saved_in_746;
 P368 saved_sym_747;
 P376 saved_exits_748;
 rt_int saved_frames_749;
 P353 args_750;
 P366 pm_751;
 P370 saved_handlers_752;
 P370 saved_cleanups_753;
 P378 ctx_754;
 P353 head_755;
 P353 frame_756;
 P353 parent_757;
 rstr ct_759;
 rstr f_760;
 P368 p_761;
};
struct f_body_elements_236fr { int dummy;
 P358 elems_235;
 P358 e_762;
};
struct f_gen_body_238fr { int dummy;
 P358 elems_237;
};
struct f_pop_frames_240fr { int dummy;
 rt_int upto_239;
 rt_int i_763;
 P370 c_764;
};
struct f_push_cleanup_242fr { int dummy;
 rstr *s_241;
 P370 c_765;
};
struct f_pop_cleanup_243fr { int dummy;
};
struct f_gen_statement_245fr { int dummy;
 P358 s_244;
 P353 label_767;
 P376 x_768;
};
struct f_st_assign_247fr { int dummy;
 P358 s_246;
 P353 lv_771;
 P362 t_772;
 P362 vt_773;
 P360 c_774;
 int ro_775;
 rstr v_776;
};
struct f_st_call_249fr { int dummy;
 P358 s_248;
 P358 c_777;
 P362 t_778;
 P358 x_779;
};
struct f_st_if_251fr { int dummy;
 P358 s_250;
 P358 a_780;
 int first_781;
 P362 t_782;
 rstr c_783;
};
struct f_st_case_253fr { int dummy;
 P358 s_252;
 P362 st_784;
 P362 vt_785;
 int first_786;
 P358 a_787;
 rstr sel_788;
 rstr tmp_789;
 P358 lab_790;
 P353 conds_791;
 rstr v_792;
 rstr lo_793;
 rstr hi_794;
};
struct f_st_repeat_255fr { int dummy;
 P358 s_254;
 P362 t_795;
 P360 c_796;
 rstr cond_797;
 rstr access_798;
 rstr lov_799;
 rstr hiv_800;
 rstr it_801;
 P368 y_802;
};
struct f_st_exit_257fr { int dummy;
 P358 s_256;
 P376 x_803;
};
struct f_st_return_259fr { int dummy;
 P358 s_258;
 P362 vt_804;
 rstr v_805;
};
struct f_exc_id_262fr { int dummy;
 rstr *name_260;
 rt_int line_261;
 rstr result_;
 P368 y_806;
};
struct f_st_guard_264fr { int dummy;
 P358 s_263;
 P358 h_807;
 int first_808;
 P370 hv_809;
 rstr f_810;
 rstr x_811;
 P358 n_813;
 P353 conds_814;
};
struct f_st_alloc_266fr { int dummy;
 P358 s_265;
 P353 lv_815;
 P362 t_816;
 P362 target_817;
 P362 vt_818;
 P360 c_819;
 P360 tc_820;
 int ro_821;
 P358 d_822;
 P358 p_823;
 P358 a_824;
 rstr tcn_825;
 rstr cell_826;
 rstr v_827;
 rstr pv_828;
 P368 y_829;
 rstr v_830;
};
struct f_act_ref_268fr { int dummy;
 P358 e_267;
 rstr result_;
 P353 lv_831;
 P362 t_832;
 P360 c_833;
 int ro_834;
};
struct f_st_create_270fr { int dummy;
 P358 s_269;
 P368 y_835;
 P366 pm_836;
 P358 a_837;
 P353 lv_838;
 P362 lt_839;
 P362 vt_840;
 P360 lc_841;
 int ro_842;
 rstr nf_843;
 rstr act_844;
 P353 link_845;
 rt_int i_846;
 rstr v_850;
};
struct f_wait_alt_274fr { int dummy;
 P358 inv_271;
 rstr *arr_272;
 rt_int i_273;
 rstr result_;
 P353 lv_851;
 P362 t_852;
 P362 vt_853;
 P360 c_854;
 int ro_855;
 P358 fn_856;
 P358 args_857;
 rstr slot_858;
 P353 dv_859;
 P362 dt_860;
 rstr tmp_861;
 rstr v_862;
 rstr v_863;
};
struct f_st_wait_276fr { int dummy;
 P358 s_275;
 P358 a_864;
 rt_int n_865;
 int first_866;
 P372 inits_867;
 rstr arr_868;
 rstr w_869;
 P358 inv_870;
 P353 conds_871;
 rt_int i_872;
};
struct f_st_region_278fr { int dummy;
 P358 s_277;
 P353 lv_876;
 P362 t_877;
 P360 c_878;
 int ro_879;
 rstr lk_880;
 rstr f_881;
};
struct f_access_of_280fr { int dummy;
 P368 y_279;
 rstr result_;
 P353 p_882;
 rt_int i_883;
};
struct f_import_of_283fr { int dummy;
 P358 l_281;
 rstr *name_282;
 P358 result_;
 P358 p_887;
};
struct f_check_import_286fr { int dummy;
 P368 y_284;
 rt_int line_285;
 int result_;
 P378 c_888;
 int ro_889;
 P358 imp_890;
};
struct f_c_ident_288fr { int dummy;
 rstr *s_287;
 rstr result_;
};
struct f_deref_291fr { int dummy;
 rstr *base_289;
 P362 t_290;
 rstr result_;
};
struct f_is_lvalue_293fr { int dummy;
 P358 e_292;
 int result_;
 P368 y_891;
};
struct f_lvalue_299fr { int dummy;
 P358 e_294;
 P353 *code_295;
 P362 *t_296;
 P360 *c_297;
 int *ro_298;
 P353 base_892;
 P362 bt_893;
 P360 bc_894;
 P368 y_895;
};
struct f_select_on_307fr { int dummy;
 rstr *base_300;
 P362 bt_301;
 P358 e_302;
 int *ro_303;
 P353 *code_304;
 P362 *t_305;
 P360 *c_306;
 P364 f_896;
};
struct f_index_on_316fr { int dummy;
 rstr *base_308;
 P362 bt_309;
 P358 e_310;
 int *ro_311;
 int lv_312;
 P353 *code_313;
 P362 *t_314;
 P360 *c_315;
 P358 a_897;
 P362 it_898;
 rstr lo_899;
 rstr hi_900;
 rstr i_901;
 rstr i_902;
};
struct f_gexpr_320fr { int dummy;
 P358 e_317;
 P362 want_318;
 P362 *t_319;
 rstr result_;
 rt_int k_903;
 P353 code_904;
 P360 c_905;
 int ro_906;
 P362 bt_907;
 rt_int i_908;
 P368 y_909;
 int ro_910;
 rstr a_911;
 rstr a_912;
 P358 nm_913;
 P368 y_914;
 rstr base_915;
 rstr base_916;
};
struct f_wrap_apply_322fr { int dummy;
 P358 e_321;
 P358 result_;
 P358 x_917;
};
struct f_c_string_324fr { int dummy;
 rstr *s_323;
 rstr result_;
 rt_int n_918;
 rt_int i_919;
 rstr r_923;
 rt_int j_924;
 rt_int i_925;
};
struct f_enum_type_of_327fr { int dummy;
 rstr *lit_325;
 rt_int line_326;
 P362 result_;
 P368 y_929;
 P360 c_930;
};
struct f_attribute_330fr { int dummy;
 P358 e_328;
 P362 *t_329;
 rstr result_;
 P362 bt_931;
 P360 c_932;
 P353 base_933;
 P368 y_934;
 P358 st_935;
};
struct f_gbinop_334fr { int dummy;
 P358 e_331;
 P362 want_332;
 P362 *t_333;
 rstr result_;
 P353 op_936;
 P362 ta_937;
 P362 tb_938;
 P362 hint_939;
 rstr a_940;
 rstr b_941;
 P362 wa_942;
 P362 wb_943;
 rstr a_944;
 rstr b_945;
 rstr dummy_946;
 rstr a_947;
 rstr b_948;
 P362 ct_949;
 rstr a_950;
 rstr b_951;
};
struct f_constructor_338fr { int dummy;
 P358 e_335;
 P362 want_336;
 P362 *t_337;
 rstr result_;
 P358 it_952;
 P364 f_953;
 P362 vt_954;
 rstr tmp_955;
 P353 parts_956;
 rstr v_957;
};
struct f_gcall_342fr { int dummy;
 P358 e_339;
 int is_stmt_340;
 P362 *t_341;
 rstr result_;
 P358 fn_958;
 P358 tt_959;
 P368 y_960;
 P353 args_961;
 P358 a_962;
 P366 pm_963;
 P362 lt_964;
 P362 vt_965;
 P353 lv_966;
 P360 lc_967;
 int ro_968;
 rt_int i_969;
 rstr v_973;
 rstr ct_974;
 rstr v_975;
};
struct f_builtin_349fr { int dummy;
 rstr *name_343;
 P358 tt_344;
 P358 args_345;
 rt_int line_346;
 int is_stmt_347;
 P362 *t_348;
 rstr result_;
 P362 at_976;
 rt_int n_977;
 rstr a_978;
 rstr a_979;
 rstr a_980;
 P358 last_981;
 rstr a_982;
 rstr a_983;
 P353 lv_984;
 P360 lc_985;
 int ro_986;
 P358 last_987;
 P353 lv_988;
 P353 dv_989;
 P360 lc_990;
 int ro_991;
 P362 mt_992;
 P362 dt_993;
 rstr v_994;
 rstr v_995;
 rstr v_996;
 rstr v_997;
 rstr a_998;
};
struct f_translate_351fr { int dummy;
 P358 units_350;
 P358 u_999;
};
struct f_print_program_352fr { int dummy;
};
static void as_R379(R379 *d, R379 s);
static R379 cp_R379(R379 s);
static int eq_R379(R379 a, R379 b);
static void as_R377(R377 *d, R377 s);
static R377 cp_R377(R377 s);
static int eq_R377(R377 a, R377 b);
static void as_A375(A375 *d, A375 s);
static A375 cp_A375(A375 s);
static int eq_A375(A375 a, A375 b);
static void as_R373(R373 *d, R373 s);
static R373 cp_R373(R373 s);
static int eq_R373(R373 a, R373 b);
static void as_R371(R371 *d, R371 s);
static R371 cp_R371(R371 s);
static int eq_R371(R371 a, R371 b);
static void as_R369(R369 *d, R369 s);
static R369 cp_R369(R369 s);
static int eq_R369(R369 a, R369 b);
static void as_R367(R367 *d, R367 s);
static R367 cp_R367(R367 s);
static int eq_R367(R367 a, R367 b);
static void as_R365(R365 *d, R365 s);
static R365 cp_R365(R365 s);
static int eq_R365(R365 a, R365 b);
static void as_R363(R363 *d, R363 s);
static R363 cp_R363(R363 s);
static int eq_R363(R363 a, R363 b);
static void as_R361(R361 *d, R361 s);
static R361 cp_R361(R361 s);
static int eq_R361(R361 a, R361 b);
static void as_R359(R359 *d, R359 s);
static R359 cp_R359(R359 s);
static int eq_R359(R359 a, R359 b);
static void as_A357(A357 *d, A357 s);
static A357 cp_A357(A357 s);
static int eq_A357(A357 a, A357 b);
static void as_R355(R355 *d, R355 s);
static R355 cp_R355(R355 s);
static int eq_R355(R355 a, R355 b);
static P353 f_mk_3(rstr *s_2);
static rstr f_chs_5(int c_4);
static rstr f_itos_7(rt_int n_6);
static int f_is_letter_9(int c_8);
static int f_is_digit_11(int c_10);
static int f_upper_13(int c_12);
static rstr f_lower_s_15(rstr *s_14);
static rstr f_q_16(void);
static rstr f_new_name_18(rstr *base_17);
static void f_fail_21(rt_int line_19, rstr *msg_20);
static P372 f_new_buffer_22(void);
static void f_put_25(P372 b_23, rstr *s_24);
static void f_emit_27(rstr *s_26);
static void f_print_buffer_29(P372 b_28);
static void f_splice_32(P372 a_30, P372 b_31);
static int f_is_reserved_34(rstr *w_33);
static int f_is_word_op_36(rstr *w_35);
static void f_add_token_40(rt_int kind_37, rstr *s_38, rt_int ival_39);
static void f_lex_line_42(rstr *line_41);
static void f_read_source_43(void);
static P358 f_nn_46(rt_int kind_44, rt_int line_45);
static void f_append_50(P358 *head_47, P358 *tail_48, P358 x_49);
static rt_int f_list_len_52(P358 l_51);
static rt_int f_cur_line_53(void);
static int f_at_kw_55(rstr *w_54);
static int f_at_op_57(rstr *w_56);
static int f_at_kind_59(rt_int k_58);
static rt_int f_kind_at_61(rt_int k_60);
static P353 f_text_at_63(rt_int k_62);
static void f_perror_65(rstr *msg_64);
static int f_accept_kw_67(rstr *w_66);
static int f_accept_op_69(rstr *w_68);
static void f_expect_kw_71(rstr *w_70);
static void f_expect_op_73(rstr *w_72);
static P353 f_expect_id_74(void);
static P358 f_name_node_75(void);
static P358 f_id_list_76(void);
static P358 f_p_subtype_77(void);
static P358 f_actual_params_78(void);
static int f_is_type_word_80(rstr *w_79);
static P358 f_actual_tt_81(void);
static P358 f_binop_86(P353 op_82, P358 l_83, P358 r_84, rt_int line_85);
static P358 f_expr_87(void);
static P358 f_expr_and_88(void);
static P358 f_expr_not_89(void);
static int f_is_rel_91(rstr *s_90);
static P358 f_expr_rel_92(void);
static P358 f_expr_add_93(void);
static P358 f_expr_mul_94(void);
static P358 f_expr_pow_95(void);
static P358 f_expr_prefix_96(void);
static P358 f_postfix_97(void);
static P358 f_primary_98(void);
static P358 f_constructor_item_99(void);
static int f_at_body_end_100(void);
static P358 f_body_101(void);
static P358 f_body_element_102(void);
static P358 f_declaration_103(void);
static P358 f_object_decl_104(void);
static P358 f_abbrev_decl_105(void);
static P358 f_type_decl_106(void);
static rt_int f_mode_of_108(rstr *w_107);
static P358 f_formal_params_109(void);
static int f_imports_list_111(P358 owner_110);
static int f_is_definable_113(rstr *w_112);
static P353 f_definable_name_114(void);
static P358 f_subprogram_decl_115(void);
static P358 f_capsule_decl_116(void);
static P358 f_task_decl_117(void);
static P358 f_expose_decl_118(void);
static int f_is_compound_kw_120(rstr *w_119);
static P358 f_statement_121(void);
static P358 f_unlabeled_statement_122(void);
static P358 f_arm_126(P358 cond_123, P358 b_124, rt_int line_125);
static P358 f_if_stmt_127(void);
static P358 f_case_stmt_128(void);
static P358 f_repeat_stmt_129(void);
static P358 f_guard_stmt_130(void);
static P358 f_program_131(void);
static rt_int f_hash_133(rstr *s_132);
static P368 f_lookup_135(rstr *name_134);
static void f_define_138(P368 y_136, rt_int line_137);
static void f_open_scope_139(void);
static void f_close_scope_140(void);
static P368 f_new_sym_143(rt_int kind_141, P353 name_142);
static P362 f_new_typ_145(rt_int kind_144);
static P360 f_new_cons_146(void);
static int f_same_lits_149(P358 a_147, P358 b_148);
static int f_same_152(P362 a_150, P362 b_151);
static rstr f_kind_name_154(P362 t_153);
static void f_check_type_158(P362 got_155, P362 want_156, rt_int line_157);
static rstr f_ctype_160(P362 t_159);
static rstr f_field_decls_162(P362 t_161);
static void f_declare_ctype_164(P362 t_163);
static void f_init_ascii_165(void);
static rt_int f_lit_index_168(P358 lits_166, rstr *name_167);
static P362 f_resolve_subtype_171(P358 st_169, P360 *c_170);
static void f_init_storage_175(rstr *lval_172, P362 t_173, P360 c_174);
static rt_int f_manifest_178(P358 e_176, int *ok_177);
static rstr f_mcopy_180(P362 t_179);
static rstr f_assign_code_185(rstr *lval_181, P362 t_182, rstr *v_183, P360 c_184);
static rstr f_copy_code_188(P362 t_186, rstr *v_187);
static rstr f_eq_code_192(P362 t_189, rstr *a_190, rstr *b_191);
static rstr f_elem_assign_196(rstr *lval_193, P362 t_194, rstr *v_195);
static int f_seen_name_199(P370 l_197, rstr *s_198);
static void f_emit_helpers_200(void);
static void f_helper_bodies_202(P362 t_201);
static void f_declare_body_204(P358 elems_203);
static void f_manifest_const_206(P358 d_205);
static int f_exported_210(P358 d_207, rstr *name_208, int *ro_209);
static P368 f_copy_sym_212(P368 y_211);
static void f_gen_capsule_214(P358 d_213);
static void f_gen_expose_216(P358 d_215);
static void f_finish_ptr_218(P362 t_217);
static void f_declare_subprogram_220(P358 d_219);
static void f_element_222(P358 e_221);
static rstr f_storage_225(rstr *name_223, P362 t_224);
static void f_bind_228(P368 y_226, rstr *access_227);
static void f_var_decl_230(P358 d_229);
static void f_const_decl_232(P358 d_231);
static void f_subprogram_234(P358 d_233);
static void f_body_elements_236(P358 elems_235);
static void f_gen_body_238(P358 elems_237);
static void f_pop_frames_240(rt_int upto_239);
static void f_push_cleanup_242(rstr *s_241);
static void f_pop_cleanup_243(void);
static void f_gen_statement_245(P358 s_244);
static void f_st_assign_247(P358 s_246);
static void f_st_call_249(P358 s_248);
static void f_st_if_251(P358 s_250);
static void f_st_case_253(P358 s_252);
static void f_st_repeat_255(P358 s_254);
static void f_st_exit_257(P358 s_256);
static void f_st_return_259(P358 s_258);
static rstr f_exc_id_262(rstr *name_260, rt_int line_261);
static void f_st_guard_264(P358 s_263);
static void f_st_alloc_266(P358 s_265);
static rstr f_act_ref_268(P358 e_267);
static void f_st_create_270(P358 s_269);
static rstr f_wait_alt_274(P358 inv_271, rstr *arr_272, rt_int i_273);
static void f_st_wait_276(P358 s_275);
static void f_st_region_278(P358 s_277);
static rstr f_access_of_280(P368 y_279);
static P358 f_import_of_283(P358 l_281, rstr *name_282);
static int f_check_import_286(P368 y_284, rt_int line_285);
static rstr f_c_ident_288(rstr *s_287);
static rstr f_deref_291(rstr *base_289, P362 t_290);
static int f_is_lvalue_293(P358 e_292);
static void f_lvalue_299(P358 e_294, P353 *code_295, P362 *t_296, P360 *c_297, int *ro_298);
static void f_select_on_307(rstr *base_300, P362 bt_301, P358 e_302, int *ro_303, P353 *code_304, P362 *t_305, P360 *c_306);
static void f_index_on_316(rstr *base_308, P362 bt_309, P358 e_310, int *ro_311, int lv_312, P353 *code_313, P362 *t_314, P360 *c_315);
static rstr f_gexpr_320(P358 e_317, P362 want_318, P362 *t_319);
static P358 f_wrap_apply_322(P358 e_321);
static rstr f_c_string_324(rstr *s_323);
static P362 f_enum_type_of_327(rstr *lit_325, rt_int line_326);
static rstr f_attribute_330(P358 e_328, P362 *t_329);
static rstr f_gbinop_334(P358 e_331, P362 want_332, P362 *t_333);
static rstr f_constructor_338(P358 e_335, P362 want_336, P362 *t_337);
static rstr f_gcall_342(P358 e_339, int is_stmt_340, P362 *t_341);
static rstr f_builtin_349(rstr *name_343, P358 tt_344, P358 args_345, rt_int line_346, int is_stmt_347, P362 *t_348);
static void f_translate_351(P358 units_350);
static void f_print_program_352(void);
static int ex_compile_error_1;
static P356 g_toks_380;
static rt_int g_ntoks_381;
static rt_int g_tpos_382;
static rt_int g_src_line_383;
static P374 g_table_384;
static rt_int g_depth_385;
static P368 g_scope_stack_386;
static P362 g_all_types_387;
static rt_int g_serial_388;
static P372 g_out_types_389;
static P372 g_out_helpers_390;
static P372 g_out_protos_391;
static P372 g_out_globals_392;
static P372 g_out_funcs_393;
static P372 g_out_init_394;
static P372 g_out_excs_395;
static P372 g_code_396;
static P372 g_fields_buf_397;
static int g_in_func_398;
static rt_int g_cur_level_399;
static P378 g_fctx_400;
static P353 g_st_field_401;
static P372 g_out_frames_402;
static P368 g_func_sym_403;
static P376 g_exits_404;
static rt_int g_frames_405;
static P370 g_handlers_406;
static P370 g_cleanups_407;
static P370 g_mcopies_408;
static P362 g_ty_int_409;
static P362 g_ty_bool_410;
static P362 g_ty_float_411;
static P362 g_ty_ascii_412;
static P362 g_ty_string_413;
static P362 g_ty_void_414;
static P362 g_ty_file_415;
static P362 g_ty_nil_416;
static P362 g_ty_lock_417;
static P362 g_ty_act_418;
static P360 g_no_cons_419;
static P353 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_420 = NULL;
{ rstr *cell421 = rt_alloc(sizeof(rstr));
rt_int pv422 = ((*F->s_2)).len;
(*cell421) = rt_str_new(pv422);
rt_str_assign(&(*cell421), (*F->s_2));
F->t_420 = cell421;
}
F->result_ = F->t_420;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_423 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_423, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_423;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_itos_7(rt_int n_6) {
  struct f_itos_7fr *F = rt_alloc(sizeof *F);
F->n_6 = n_6;
F->result_ = rt_str_of_int(F->n_6);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_letter_9(int c_8) {
  struct f_is_letter_9fr *F = rt_alloc(sizeof *F);
F->c_8 = c_8;
F->result_ = (((65 <= F->c_8) && (F->c_8 <= 90)) || ((97 <= F->c_8) && (F->c_8 <= 122)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_digit_11(int c_10) {
  struct f_is_digit_11fr *F = rt_alloc(sizeof *F);
F->c_10 = c_10;
F->result_ = ((48 <= F->c_10) && (F->c_10 <= 57));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_upper_13(int c_12) {
  struct f_upper_13fr *F = rt_alloc(sizeof *F);
F->c_12 = c_12;
F->letters_424 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_424, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
goto ret_;
}
F->result_ = F->c_12;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lower_s_15(rstr *s_14) {
  struct f_lower_s_15fr *F = rt_alloc(sizeof *F);
F->s_14 = s_14;
F->letters_425 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_426 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_426, (*F->s_14));
{ rt_int lo428 = ((rt_int)1LL), hi429 = ((*F->s_14)).len;
for (rt_int it430 = lo428; it430 <= hi429; it430++) {
F->i_427 = it430;
if (((65 <= rt_str_get(F->r_426, F->i_427)) && (rt_str_get(F->r_426, F->i_427) <= 90))) {
(*rt_str_at(&F->r_426, F->i_427)) = rt_str_get(F->letters_425, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_426, F->i_427)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_426;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_q_16(void) {
  struct f_q_16fr *F = rt_alloc(sizeof *F);
F->result_ = f_chs_5(34);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_new_name_18(rstr *base_17) {
  struct f_new_name_18fr *F = rt_alloc(sizeof *F);
F->base_17 = base_17;
g_serial_388 = rt_add(g_serial_388, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_17), f_itos_7(g_serial_388));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_21(rt_int line_19, rstr *msg_20) {
  struct f_fail_21fr *F = rt_alloc(sizeof *F);
F->line_19 = line_19;
F->msg_20 = msg_20;
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_19)), rt_str(": ", 2)), (*F->msg_20)));
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P372 f_new_buffer_22(void) {
  struct f_new_buffer_22fr *F = rt_alloc(sizeof *F);
F->b_431 = NULL;
{ R373 *cell432 = rt_alloc(sizeof(R373));
(*cell432).head = NULL;
(*cell432).tail = NULL;
F->b_431 = cell432;
}
F->result_ = F->b_431;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_25(P372 b_23, rstr *s_24) {
  struct f_put_25fr *F = rt_alloc(sizeof *F);
F->b_23 = b_23;
F->s_24 = s_24;
F->l_433 = NULL;
{ R371 *cell434 = rt_alloc(sizeof(R371));
(*cell434).s = NULL;
(*cell434).next = NULL;
F->l_433 = cell434;
}
(*(P370)rt_nil_check(F->l_433)).s = f_mk_3(&(*F->s_24));
if (((*(P372)rt_nil_check(F->b_23)).tail == NULL)) {
(*(P372)rt_nil_check(F->b_23)).head = F->l_433;
} else {
(*(P370)rt_nil_check((*(P372)rt_nil_check(F->b_23)).tail)).next = F->l_433;
}
(*(P372)rt_nil_check(F->b_23)).tail = F->l_433;
ret_:
  return;
}

static void f_emit_27(rstr *s_26) {
  struct f_emit_27fr *F = rt_alloc(sizeof *F);
F->s_26 = s_26;
f_put_25(g_code_396, &(*F->s_26));
ret_:
  return;
}

static void f_print_buffer_29(P372 b_28) {
  struct f_print_buffer_29fr *F = rt_alloc(sizeof *F);
F->b_28 = b_28;
F->l_435 = NULL;
F->l_435 = (*(P372)rt_nil_check(F->b_28)).head;
while ((F->l_435 != NULL)) {
rt_putln((*(P353)rt_nil_check((*(P370)rt_nil_check(F->l_435)).s)));
F->l_435 = (*(P370)rt_nil_check(F->l_435)).next;
}
ret_:
  return;
}

static void f_splice_32(P372 a_30, P372 b_31) {
  struct f_splice_32fr *F = rt_alloc(sizeof *F);
F->a_30 = a_30;
F->b_31 = b_31;
if (((*(P372)rt_nil_check(F->b_31)).head == NULL)) {
goto ret_;
}
if (((*(P372)rt_nil_check(F->a_30)).tail == NULL)) {
(*(P372)rt_nil_check(F->a_30)).head = (*(P372)rt_nil_check(F->b_31)).head;
} else {
(*(P370)rt_nil_check((*(P372)rt_nil_check(F->a_30)).tail)).next = (*(P372)rt_nil_check(F->b_31)).head;
}
(*(P372)rt_nil_check(F->a_30)).tail = (*(P372)rt_nil_check(F->b_31)).tail;
(*(P372)rt_nil_check(F->b_31)).head = NULL;
(*(P372)rt_nil_check(F->b_31)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_34(rstr *w_33) {
  struct f_is_reserved_34fr *F = rt_alloc(sizeof *F);
F->w_33 = w_33;
{ rstr sel436 = (*F->w_33);
if (0 || rt_str_eq(sel436, rt_str("ABBREV", 6)) || rt_str_eq(sel436, rt_str("ABNORMAL", 8)) || rt_str_eq(sel436, rt_str("ALL", 3)) || rt_str_eq(sel436, rt_str("ALLOC", 5)) || rt_str_eq(sel436, rt_str("ASSERT", 6)) || rt_str_eq(sel436, rt_str("BEGIN", 5)) || rt_str_eq(sel436, rt_str("BY", 2)) || rt_str_eq(sel436, rt_str("CAPSULE", 7)) || rt_str_eq(sel436, rt_str("CASE", 4)) || rt_str_eq(sel436, rt_str("CONST", 5)) || rt_str_eq(sel436, rt_str("CREATE", 6)) || rt_str_eq(sel436, rt_str("DO", 2)) || rt_str_eq(sel436, rt_str("ELSE", 4)) || rt_str_eq(sel436, rt_str("ELSEIF", 6)) || rt_str_eq(sel436, rt_str("END", 3)) || rt_str_eq(sel436, rt_str("EXCEPTION", 9)) || rt_str_eq(sel436, rt_str("EXIT", 4)) || rt_str_eq(sel436, rt_str("EXPORTS", 7)) || rt_str_eq(sel436, rt_str("EXPOSE", 6)) || rt_str_eq(sel436, rt_str("EXTERNAL", 8)) || rt_str_eq(sel436, rt_str("FOR", 3)) || rt_str_eq(sel436, rt_str("FROM", 4)) || rt_str_eq(sel436, rt_str("FUNC", 4)) || rt_str_eq(sel436, rt_str("GENERIC", 7)) || rt_str_eq(sel436, rt_str("GOTO", 4)) || rt_str_eq(sel436, rt_str("GUARD", 5)) || rt_str_eq(sel436, rt_str("IF", 2)) || rt_str_eq(sel436, rt_str("IMPORTS", 7)) || rt_str_eq(sel436, rt_str("LOCATION", 8)) || rt_str_eq(sel436, rt_str("NAMED", 5)) || rt_str_eq(sel436, rt_str("NEEDS", 5)) || rt_str_eq(sel436, rt_str("NEW", 3)) || rt_str_eq(sel436, rt_str("NONE", 4)) || rt_str_eq(sel436, rt_str("OUT", 3)) || rt_str_eq(sel436, rt_str("OF", 2)) || rt_str_eq(sel436, rt_str("PRAG", 4)) || rt_str_eq(sel436, rt_str("PROC", 4)) || rt_str_eq(sel436, rt_str("RAISE", 5)) || rt_str_eq(sel436, rt_str("READONLY", 8)) || rt_str_eq(sel436, rt_str("REVERSE", 7)) || rt_str_eq(sel436, rt_str("REGION", 6)) || rt_str_eq(sel436, rt_str("RENAMING", 8)) || rt_str_eq(sel436, rt_str("REP", 3)) || rt_str_eq(sel436, rt_str("REPEAT", 6)) || rt_str_eq(sel436, rt_str("RERAISE", 7)) || rt_str_eq(sel436, rt_str("RETURN", 6)) || rt_str_eq(sel436, rt_str("SUBTYPE", 7)) || rt_str_eq(sel436, rt_str("TASK", 4)) || rt_str_eq(sel436, rt_str("THEN", 4)) || rt_str_eq(sel436, rt_str("TO", 2)) || rt_str_eq(sel436, rt_str("TYPE", 4)) || rt_str_eq(sel436, rt_str("VAR", 3)) || rt_str_eq(sel436, rt_str("WAIT", 4)) || rt_str_eq(sel436, rt_str("WHEN", 4)) || rt_str_eq(sel436, rt_str("WHILE", 5))) {
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

static int f_is_word_op_36(rstr *w_35) {
  struct f_is_word_op_36fr *F = rt_alloc(sizeof *F);
F->w_35 = w_35;
F->result_ = ((((((rt_str_eq((*F->w_35), rt_str("DIV", 3)) || rt_str_eq((*F->w_35), rt_str("MOD", 3))) || rt_str_eq((*F->w_35), rt_str("IN", 2))) || rt_str_eq((*F->w_35), rt_str("OR", 2))) || rt_str_eq((*F->w_35), rt_str("XOR", 3))) || rt_str_eq((*F->w_35), rt_str("AND", 3))) || rt_str_eq((*F->w_35), rt_str("NOT", 3)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_add_token_40(rt_int kind_37, rstr *s_38, rt_int ival_39) {
  struct f_add_token_40fr *F = rt_alloc(sizeof *F);
F->kind_37 = kind_37;
F->s_38 = s_38;
F->ival_39 = ival_39;
F->t_437 = NULL;
{ R355 *cell438 = rt_alloc(sizeof(R355));
(*cell438).s = NULL;
F->t_437 = cell438;
}
(*(P354)rt_nil_check(F->t_437)).kind = F->kind_37;
(*(P354)rt_nil_check(F->t_437)).line = g_src_line_383;
(*(P354)rt_nil_check(F->t_437)).ival = F->ival_39;
(*(P354)rt_nil_check(F->t_437)).s = f_mk_3(&(*F->s_38));
g_ntoks_381 = rt_add(g_ntoks_381, ((rt_int)1LL));
(*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_ntoks_381, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo] = F->t_437;
ret_:
  return;
}

static void f_lex_line_42(rstr *line_41) {
  struct f_lex_line_42fr *F = rt_alloc(sizeof *F);
F->line_41 = line_41;
F->i_439 = ((rt_int)1LL);
F->j_440 = ((rt_int)0LL);
F->n_441 = ((*F->line_41)).len;
while ((F->i_439 <= F->n_441)) {
F->c_442 = rt_str_get((*F->line_41), F->i_439);
if (((((F->c_442 == 32) || (F->c_442 == 9)) || (F->c_442 == 13)) || (F->c_442 == 12))) {
F->i_439 = rt_add(F->i_439, ((rt_int)1LL));
} else if ((F->c_442 == 37)) {
F->i_439 = rt_add(F->n_441, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_442)) {
F->j_440 = F->i_439;
while (((F->j_440 <= F->n_441) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_440)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_440))) || (rt_str_get((*F->line_41), F->j_440) == 95)))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
{
F->w_443 = rt_str_new(rt_sub(F->j_440, F->i_439));
rt_str_assign(&F->w_443, rt_str_slice((*F->line_41), F->i_439, rt_sub(F->j_440, ((rt_int)1LL))));
{ rt_int lo445 = ((rt_int)1LL), hi446 = (F->w_443).len;
for (rt_int it447 = lo445; it447 <= hi446; it447++) {
F->k_444 = it447;
(*rt_str_at(&F->w_443, F->k_444)) = f_upper_13(rt_str_get(F->w_443, F->k_444));
}
}
if (rt_str_eq(F->w_443, rt_str("PRAGMAT", 7))) {
while (((F->j_440 <= F->n_441) && (rt_str_get((*F->line_41), F->j_440) != 59))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
} else if (f_is_reserved_34(&F->w_443)) {
f_add_token_40(((rt_int)2LL), &F->w_443, ((rt_int)0LL));
} else if (f_is_word_op_36(&F->w_443)) {
f_add_token_40(((rt_int)3LL), &F->w_443, ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)1LL), &F->w_443, ((rt_int)0LL));
}
}
F->i_439 = F->j_440;
} else if (f_is_digit_11(F->c_442)) {
F->j_440 = F->i_439;
while (((F->j_440 <= F->n_441) && f_is_digit_11(rt_str_get((*F->line_41), F->j_440)))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
if ((((F->j_440 < F->n_441) && (rt_str_get((*F->line_41), F->j_440) == 46)) && f_is_digit_11(rt_str_get((*F->line_41), rt_add(F->j_440, ((rt_int)1LL)))))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
while (((F->j_440 <= F->n_441) && f_is_digit_11(rt_str_get((*F->line_41), F->j_440)))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
if (((F->j_440 <= F->n_441) && ((rt_str_get((*F->line_41), F->j_440) == 69) || (rt_str_get((*F->line_41), F->j_440) == 101)))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
if (((F->j_440 <= F->n_441) && ((rt_str_get((*F->line_41), F->j_440) == 43) || (rt_str_get((*F->line_41), F->j_440) == 45)))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
while (((F->j_440 <= F->n_441) && f_is_digit_11(rt_str_get((*F->line_41), F->j_440)))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
}
f_add_token_40(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_439, rt_sub(F->j_440, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_439, rt_sub(F->j_440, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_41), F->i_439, rt_sub(F->j_440, ((rt_int)1LL)))));
}
F->i_439 = F->j_440;
} else if ((F->c_442 == 39)) {
F->j_440 = rt_add(F->i_439, ((rt_int)1LL));
if (((F->j_440 > F->n_441) || (!f_is_letter_9(rt_str_get((*F->line_41), F->j_440))))) {
f_fail_21(g_src_line_383, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_440 <= F->n_441) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_440)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_440))) || (rt_str_get((*F->line_41), F->j_440) == 95)))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
{
F->w_448 = rt_str_new(rt_sub(rt_sub(F->j_440, F->i_439), ((rt_int)1LL)));
rt_str_assign(&F->w_448, rt_str_slice((*F->line_41), rt_add(F->i_439, ((rt_int)1LL)), rt_sub(F->j_440, ((rt_int)1LL))));
{ rt_int lo450 = ((rt_int)1LL), hi451 = (F->w_448).len;
for (rt_int it452 = lo450; it452 <= hi451; it452++) {
F->k_449 = it452;
(*rt_str_at(&F->w_448, F->k_449)) = f_upper_13(rt_str_get(F->w_448, F->k_449));
}
}
f_add_token_40(((rt_int)6LL), &F->w_448, ((rt_int)0LL));
}
F->i_439 = F->j_440;
} else if ((F->c_442 == 34)) {
F->j_440 = rt_add(F->i_439, ((rt_int)1LL));
while (((F->j_440 <= F->n_441) && (rt_str_get((*F->line_41), F->j_440) != 34))) {
F->j_440 = rt_add(F->j_440, ((rt_int)1LL));
}
if ((F->j_440 > F->n_441)) {
f_fail_21(g_src_line_383, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_40(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), rt_add(F->i_439, ((rt_int)1LL)), rt_sub(F->j_440, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_439 = rt_add(F->j_440, ((rt_int)1LL));
} else {
{
F->two_453 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_453, rt_str("  ", 2));
(*rt_str_at(&F->two_453, ((rt_int)1LL))) = F->c_442;
if ((F->i_439 < F->n_441)) {
(*rt_str_at(&F->two_453, ((rt_int)2LL))) = rt_str_get((*F->line_41), rt_add(F->i_439, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_453, rt_str(":=", 2)) || rt_str_eq(F->two_453, rt_str("=>", 2))) || rt_str_eq(F->two_453, rt_str("..", 2))) || rt_str_eq(F->two_453, rt_str("**", 2))) || rt_str_eq(F->two_453, rt_str("/=", 2))) || rt_str_eq(F->two_453, rt_str("<=", 2))) || rt_str_eq(F->two_453, rt_str(">=", 2)))) {
f_add_token_40(((rt_int)3LL), &F->two_453, ((rt_int)0LL));
F->i_439 = rt_add(F->i_439, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_442 == 40) || (F->c_442 == 41)) || (F->c_442 == 91)) || (F->c_442 == 93)) || (F->c_442 == 44)) || (F->c_442 == 58)) || (F->c_442 == 59)) || (F->c_442 == 46)) || (F->c_442 == 35)) || (F->c_442 == 43)) || (F->c_442 == 45)) || (F->c_442 == 42)) || (F->c_442 == 47)) || (F->c_442 == 38)) || (F->c_442 == 61)) || (F->c_442 == 60)) || (F->c_442 == 62))) {
f_add_token_40(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_442); b_; }), ((rt_int)0LL));
F->i_439 = rt_add(F->i_439, ((rt_int)1LL));
} else {
f_fail_21(g_src_line_383, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
}
}
}
}
ret_:
  return;
}

static void f_read_source_43(void) {
  struct f_read_source_43fr *F = rt_alloc(sizeof *F);
while ((!rt_eof())) {
F->line_454 = rt_str_new(rt_sizeln());
rt_readln(&F->line_454);
g_src_line_383 = rt_add(g_src_line_383, ((rt_int)1LL));
f_lex_line_42(&F->line_454);
}
f_add_token_40(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P358 f_nn_46(rt_int kind_44, rt_int line_45) {
  struct f_nn_46fr *F = rt_alloc(sizeof *F);
F->kind_44 = kind_44;
F->line_45 = line_45;
F->x_455 = NULL;
{ R359 *cell456 = rt_alloc(sizeof(R359));
(*cell456).name = NULL;
(*cell456).tag = NULL;
(*cell456).a = NULL;
(*cell456).b = NULL;
(*cell456).c = NULL;
(*cell456).d = NULL;
(*cell456).next = NULL;
F->x_455 = cell456;
}
(*(P358)rt_nil_check(F->x_455)).kind = F->kind_44;
(*(P358)rt_nil_check(F->x_455)).line = F->line_45;
F->result_ = F->x_455;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_50(P358 *head_47, P358 *tail_48, P358 x_49) {
  struct f_append_50fr *F = rt_alloc(sizeof *F);
F->head_47 = head_47;
F->tail_48 = tail_48;
F->x_49 = x_49;
if (((*F->head_47) == NULL)) {
(*F->head_47) = F->x_49;
} else {
(*(P358)rt_nil_check((*F->tail_48))).next = F->x_49;
}
(*F->tail_48) = F->x_49;
while (((*(P358)rt_nil_check((*F->tail_48))).next != NULL)) {
(*F->tail_48) = (*(P358)rt_nil_check((*F->tail_48))).next;
}
ret_:
  return;
}

static rt_int f_list_len_52(P358 l_51) {
  struct f_list_len_52fr *F = rt_alloc(sizeof *F);
F->l_51 = l_51;
F->n_457 = ((rt_int)0LL);
F->p_458 = NULL;
F->p_458 = F->l_51;
while ((F->p_458 != NULL)) {
F->n_457 = rt_add(F->n_457, ((rt_int)1LL));
F->p_458 = (*(P358)rt_nil_check(F->p_458)).next;
}
F->result_ = F->n_457;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_53(void) {
  struct f_cur_line_53fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_55(rstr *w_54) {
  struct f_at_kw_55fr *F = rt_alloc(sizeof *F);
F->w_54 = w_54;
F->result_ = (((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)), (*F->w_54)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_57(rstr *w_56) {
  struct f_at_op_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_59(rt_int k_58) {
  struct f_at_kind_59fr *F = rt_alloc(sizeof *F);
F->k_58 = k_58;
F->result_ = ((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).kind == F->k_58);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_61(rt_int k_60) {
  struct f_kind_at_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
if ((rt_add(g_tpos_382, F->k_60) > g_ntoks_381)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(rt_add(g_tpos_382, F->k_60), (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P353 f_text_at_63(rt_int k_62) {
  struct f_text_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_382, F->k_62) > g_ntoks_381)) {
F->result_ = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_ntoks_381, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
goto ret_;
}
F->result_ = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(rt_add(g_tpos_382, F->k_62), (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_65(rstr *msg_64) {
  struct f_perror_65fr *F = rt_alloc(sizeof *F);
F->msg_64 = msg_64;
f_fail_21((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_64), rt_str(" (at ", 5)), (*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_67(rstr *w_66) {
  struct f_accept_kw_67fr *F = rt_alloc(sizeof *F);
F->w_66 = w_66;
if (f_at_kw_55(&(*F->w_66))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_accept_op_69(rstr *w_68) {
  struct f_accept_op_69fr *F = rt_alloc(sizeof *F);
F->w_68 = w_68;
if (f_at_op_57(&(*F->w_68))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_expect_kw_71(rstr *w_70) {
  struct f_expect_kw_71fr *F = rt_alloc(sizeof *F);
F->w_70 = w_70;
if ((!f_at_kw_55(&(*F->w_70)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_70)); b_; }));
}
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_73(rstr *w_72) {
  struct f_expect_op_73fr *F = rt_alloc(sizeof *F);
F->w_72 = w_72;
if ((!f_at_op_57(&(*F->w_72)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
ret_:
  return;
}

static P353 f_expect_id_74(void) {
  struct f_expect_id_74fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(rt_sub(g_tpos_382, ((rt_int)1LL)), (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_name_node_75(void) {
  struct f_name_node_75fr *F = rt_alloc(sizeof *F);
F->x_459 = NULL;
F->x_459 = f_nn_46(((rt_int)7LL), f_cur_line_53());
(*(P358)rt_nil_check(F->x_459)).name = f_expect_id_74();
F->result_ = F->x_459;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_id_list_76(void) {
  struct f_id_list_76fr *F = rt_alloc(sizeof *F);
F->head_460 = NULL;
F->tail_461 = NULL;
f_append_50(&F->head_460, &F->tail_461, f_name_node_75());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_460, &F->tail_461, f_name_node_75());
}
F->result_ = F->head_460;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_p_subtype_77(void) {
  struct f_p_subtype_77fr *F = rt_alloc(sizeof *F);
F->line_462 = f_cur_line_53();
F->x_463 = NULL;
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->x_463 = f_nn_46(((rt_int)81LL), F->line_462);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P358)rt_nil_check(F->x_463)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_463;
goto ret_;
}
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_464 = rt_str_copy((*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)));
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
if (rt_str_eq(F->w_464, rt_str("ARRAY", 5))) {
F->x_463 = f_nn_46(((rt_int)74LL), F->line_462);
{
F->head_465 = NULL;
F->tail_466 = NULL;
f_append_50(&F->head_465, &F->tail_466, f_p_subtype_77());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_465, &F->tail_466, f_p_subtype_77());
}
(*(P358)rt_nil_check(F->x_463)).a = F->head_465;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P358)rt_nil_check(F->x_463)).b = f_p_subtype_77();
} else if ((rt_str_eq(F->w_464, rt_str("RECORD", 6)) || rt_str_eq(F->w_464, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_464, rt_str("RECORD", 6))) {
F->x_463 = f_nn_46(((rt_int)75LL), F->line_462);
} else {
F->x_463 = f_nn_46(((rt_int)76LL), F->line_462);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_467 = NULL;
F->tail_468 = NULL;
F->more_469 = 1;
while (F->more_469) {
F->names_470 = NULL;
F->names_470 = f_id_list_76();
F->st_471 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_471 = f_p_subtype_77();
while ((F->names_470 != NULL)) {
F->cmp_472 = NULL;
F->cmp_472 = f_nn_46(((rt_int)63LL), (*(P358)rt_nil_check(F->names_470)).line);
(*(P358)rt_nil_check(F->cmp_472)).name = (*(P358)rt_nil_check(F->names_470)).name;
(*(P358)rt_nil_check(F->cmp_472)).a = F->st_471;
f_append_50(&F->head_467, &F->tail_468, F->cmp_472);
F->names_470 = (*(P358)rt_nil_check(F->names_470)).next;
}
F->more_469 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P358)rt_nil_check(F->x_463)).a = F->head_467;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_464, rt_str("UNION", 5)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_463)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_464, rt_str("ENUM", 4))) {
F->x_463 = f_nn_46(((rt_int)72LL), F->line_462);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_473 = NULL;
F->tail_474 = NULL;
F->more_475 = 1;
while (F->more_475) {
F->lit_476 = NULL;
F->lit_476 = f_nn_46(((rt_int)4LL), F->line_462);
if ((!f_at_kind_59(((rt_int)6LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P358)rt_nil_check(F->lit_476)).name = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
f_append_50(&F->head_473, &F->tail_474, F->lit_476);
F->more_475 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P358)rt_nil_check(F->x_463)).a = F->head_473;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_463)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P358)rt_nil_check(F->x_463)).c = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_464, rt_str("STRING", 6)) || rt_str_eq(F->w_464, rt_str("SET", 3))) || rt_str_eq(F->w_464, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_464, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_464, rt_str("STRING", 6))) {
F->x_463 = f_nn_46(((rt_int)73LL), F->line_462);
} else if (rt_str_eq(F->w_464, rt_str("SET", 3))) {
F->x_463 = f_nn_46(((rt_int)77LL), F->line_462);
} else if (rt_str_eq(F->w_464, rt_str("MAILBOX", 7))) {
F->x_463 = f_nn_46(((rt_int)78LL), F->line_462);
} else {
F->x_463 = f_nn_46(((rt_int)79LL), F->line_462);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P358)rt_nil_check(F->x_463)).a = f_p_subtype_77();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_463)).b = f_actual_params_78();
}
} else if (rt_str_eq(F->w_464, rt_str("INT", 3))) {
F->x_463 = f_nn_46(((rt_int)70LL), F->line_462);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_463)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P358)rt_nil_check(F->x_463)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_464, rt_str("FLOAT", 5))) {
F->x_463 = f_nn_46(((rt_int)71LL), F->line_462);
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_463)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_463)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P358)rt_nil_check(F->x_463)).c = f_expr_87();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_463 = f_nn_46(((rt_int)80LL), F->line_462);
(*(P358)rt_nil_check(F->x_463)).name = f_mk_3(&F->w_464);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_463)).a = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_463)).b = f_actual_params_78();
(*(P358)rt_nil_check(F->x_463)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_463;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_actual_params_78(void) {
  struct f_actual_params_78fr *F = rt_alloc(sizeof *F);
F->head_477 = NULL;
F->tail_478 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_50(&F->head_477, &F->tail_478, f_expr_87());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_477, &F->tail_478, f_expr_87());
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_477;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_type_word_80(rstr *w_79) {
  struct f_is_type_word_80fr *F = rt_alloc(sizeof *F);
F->w_79 = w_79;
F->result_ = ((((((((((((((rt_str_eq((*F->w_79), rt_str("INT", 3)) || rt_str_eq((*F->w_79), rt_str("BOOL", 4))) || rt_str_eq((*F->w_79), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_79), rt_str("ENUM", 4))) || rt_str_eq((*F->w_79), rt_str("RECORD", 6))) || rt_str_eq((*F->w_79), rt_str("UNION", 5))) || rt_str_eq((*F->w_79), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_79), rt_str("STRING", 6))) || rt_str_eq((*F->w_79), rt_str("SET", 3))) || rt_str_eq((*F->w_79), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_79), rt_str("FILE", 4))) || rt_str_eq((*F->w_79), rt_str("ASCII", 5))) || rt_str_eq((*F->w_79), rt_str("ACT", 3))) || rt_str_eq((*F->w_79), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_79), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_actual_tt_81(void) {
  struct f_actual_tt_81fr *F = rt_alloc(sizeof *F);
F->head_479 = NULL;
F->tail_480 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_481 = 1;
while (F->more_481) {
if ((f_at_kind_59(((rt_int)1LL)) && f_is_type_word_80(&(*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s))))) {
f_append_50(&F->head_479, &F->tail_480, f_p_subtype_77());
} else {
f_append_50(&F->head_479, &F->tail_480, f_expr_87());
}
F->more_481 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_479;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_binop_86(P353 op_82, P358 l_83, P358 r_84, rt_int line_85) {
  struct f_binop_86fr *F = rt_alloc(sizeof *F);
F->op_82 = op_82;
F->l_83 = l_83;
F->r_84 = r_84;
F->line_85 = line_85;
F->x_482 = NULL;
F->x_482 = f_nn_46(((rt_int)9LL), F->line_85);
(*(P358)rt_nil_check(F->x_482)).name = F->op_82;
(*(P358)rt_nil_check(F->x_482)).a = F->l_83;
(*(P358)rt_nil_check(F->x_482)).b = F->r_84;
F->result_ = F->x_482;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_87(void) {
  struct f_expr_87fr *F = rt_alloc(sizeof *F);
F->l_483 = NULL;
F->l_483 = f_expr_and_88();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_484 = NULL;
F->op_484 = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
F->line_485 = f_cur_line_53();
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->l_483 = f_binop_86(F->op_484, F->l_483, f_expr_and_88(), F->line_485);
}
F->result_ = F->l_483;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_and_88(void) {
  struct f_expr_and_88fr *F = rt_alloc(sizeof *F);
F->l_486 = NULL;
F->l_486 = f_expr_not_89();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_487 = f_cur_line_53();
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->l_486 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_486, f_expr_not_89(), F->line_487);
}
F->result_ = F->l_486;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_not_89(void) {
  struct f_expr_not_89fr *F = rt_alloc(sizeof *F);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_488 = NULL;
F->x_488 = f_nn_46(((rt_int)8LL), f_cur_line_53());
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_488)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P358)rt_nil_check(F->x_488)).a = f_expr_not_89();
F->result_ = F->x_488;
goto ret_;
}
F->result_ = f_expr_rel_92();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_rel_91(rstr *s_90) {
  struct f_is_rel_91fr *F = rt_alloc(sizeof *F);
F->s_90 = s_90;
F->result_ = ((((((rt_str_eq((*F->s_90), rt_str("=", 1)) || rt_str_eq((*F->s_90), rt_str("/=", 2))) || rt_str_eq((*F->s_90), rt_str("<", 1))) || rt_str_eq((*F->s_90), rt_str("<=", 2))) || rt_str_eq((*F->s_90), rt_str(">", 1))) || rt_str_eq((*F->s_90), rt_str(">=", 2))) || rt_str_eq((*F->s_90), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_rel_92(void) {
  struct f_expr_rel_92fr *F = rt_alloc(sizeof *F);
F->l_489 = NULL;
F->l_489 = f_expr_add_93();
if ((f_at_kind_59(((rt_int)3LL)) && f_is_rel_91(&(*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s))))) {
F->op_490 = NULL;
F->op_490 = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
F->line_491 = f_cur_line_53();
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->l_489 = f_binop_86(F->op_490, F->l_489, f_expr_add_93(), F->line_491);
}
F->result_ = F->l_489;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_add_93(void) {
  struct f_expr_add_93fr *F = rt_alloc(sizeof *F);
F->l_492 = NULL;
F->l_492 = f_expr_mul_94();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_493 = NULL;
F->op_493 = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
F->line_494 = f_cur_line_53();
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->l_492 = f_binop_86(F->op_493, F->l_492, f_expr_mul_94(), F->line_494);
}
F->result_ = F->l_492;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_mul_94(void) {
  struct f_expr_mul_94fr *F = rt_alloc(sizeof *F);
F->l_495 = NULL;
F->l_495 = f_expr_pow_95();
while (((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_496 = NULL;
F->op_496 = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
F->line_497 = f_cur_line_53();
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->l_495 = f_binop_86(F->op_496, F->l_495, f_expr_pow_95(), F->line_497);
}
F->result_ = F->l_495;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_pow_95(void) {
  struct f_expr_pow_95fr *F = rt_alloc(sizeof *F);
F->l_498 = NULL;
F->l_498 = f_expr_prefix_96();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_499 = f_cur_line_53();
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->l_498 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_498, f_expr_prefix_96(), F->line_499);
}
F->result_ = F->l_498;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expr_prefix_96(void) {
  struct f_expr_prefix_96fr *F = rt_alloc(sizeof *F);
if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_500 = NULL;
F->x_500 = f_nn_46(((rt_int)8LL), f_cur_line_53());
(*(P358)rt_nil_check(F->x_500)).name = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_500)).a = f_expr_prefix_96();
F->result_ = F->x_500;
goto ret_;
}
F->result_ = f_postfix_97();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_postfix_97(void) {
  struct f_postfix_97fr *F = rt_alloc(sizeof *F);
F->p_501 = NULL;
F->p_501 = f_primary_98();
while (1) {
F->line_502 = f_cur_line_53();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_503 = NULL;
F->x_503 = f_nn_46(((rt_int)10LL), F->line_502);
F->head_504 = NULL;
F->tail_505 = NULL;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_506 = 1;
while (F->more_506) {
F->lo_507 = NULL;
F->lo_507 = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_508 = NULL;
F->r_508 = f_nn_46(((rt_int)16LL), F->line_502);
(*(P358)rt_nil_check(F->r_508)).a = F->lo_507;
(*(P358)rt_nil_check(F->r_508)).b = f_expr_87();
f_append_50(&F->head_504, &F->tail_505, F->r_508);
} else {
f_append_50(&F->head_504, &F->tail_505, F->lo_507);
}
F->more_506 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P358)rt_nil_check(F->x_503)).a = F->p_501;
(*(P358)rt_nil_check(F->x_503)).b = F->head_504;
F->p_501 = F->x_503;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_509 = NULL;
F->x_509 = f_nn_46(((rt_int)11LL), F->line_502);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_509)).a = F->p_501;
(*(P358)rt_nil_check(F->x_509)).name = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->p_501 = F->x_509;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P358)rt_nil_check(F->p_501)).kind == ((rt_int)7LL)))) {
F->x_510 = NULL;
F->x_510 = f_nn_46(((rt_int)12LL), F->line_502);
(*(P358)rt_nil_check(F->x_510)).a = F->p_501;
(*(P358)rt_nil_check(F->x_510)).b = f_actual_tt_81();
F->p_501 = F->x_510;
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_511 = NULL;
F->x_511 = f_nn_46(((rt_int)13LL), F->line_502);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_511)).a = F->p_501;
(*(P358)rt_nil_check(F->x_511)).b = f_p_subtype_77();
F->p_501 = F->x_511;
} else {
F->result_ = F->p_501;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_primary_98(void) {
  struct f_primary_98fr *F = rt_alloc(sizeof *F);
F->line_512 = f_cur_line_53();
F->x_513 = NULL;
F->k_514 = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).kind;
if ((F->k_514 == ((rt_int)4LL))) {
F->x_513 = f_nn_46(((rt_int)1LL), F->line_512);
(*(P358)rt_nil_check(F->x_513)).ival = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).ival;
(*(P358)rt_nil_check(F->x_513)).name = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = F->x_513;
goto ret_;
}
if ((((F->k_514 == ((rt_int)5LL)) || (F->k_514 == ((rt_int)7LL))) || (F->k_514 == ((rt_int)6LL)))) {
if ((F->k_514 == ((rt_int)5LL))) {
F->x_513 = f_nn_46(((rt_int)2LL), F->line_512);
} else if ((F->k_514 == ((rt_int)7LL))) {
F->x_513 = f_nn_46(((rt_int)3LL), F->line_512);
} else {
F->x_513 = f_nn_46(((rt_int)4LL), F->line_512);
}
(*(P358)rt_nil_check(F->x_513)).name = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = F->x_513;
goto ret_;
}
if ((F->k_514 == ((rt_int)1LL))) {
F->w_515 = rt_str_copy((*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)));
if ((rt_str_eq(F->w_515, rt_str("TRUE", 4)) || rt_str_eq(F->w_515, rt_str("FALSE", 5)))) {
F->x_513 = f_nn_46(((rt_int)5LL), F->line_512);
if (rt_str_eq(F->w_515, rt_str("TRUE", 4))) {
(*(P358)rt_nil_check(F->x_513)).ival = ((rt_int)1LL);
}
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = F->x_513;
goto ret_;
}
if (rt_str_eq(F->w_515, rt_str("NIL", 3))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)6LL), F->line_512);
goto ret_;
}
F->result_ = f_name_node_75();
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_513 = f_nn_46(((rt_int)17LL), F->line_512);
(*(P358)rt_nil_check(F->x_513)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_513;
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_516 = NULL;
F->tail_517 = NULL;
F->x_513 = f_nn_46(((rt_int)14LL), F->line_512);
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_518 = 1;
while (F->more_518) {
f_append_50(&F->head_516, &F->tail_517, f_constructor_item_99());
F->more_518 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P358)rt_nil_check(F->x_513)).a = F->head_516;
F->result_ = F->x_513;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_constructor_item_99(void) {
  struct f_constructor_item_99fr *F = rt_alloc(sizeof *F);
F->line_519 = f_cur_line_53();
F->it_520 = NULL;
F->it_520 = f_nn_46(((rt_int)15LL), F->line_519);
F->first_521 = NULL;
F->first_521 = f_expr_87();
F->keys_522 = NULL;
F->ktail_523 = NULL;
F->lab_524 = NULL;
F->lab_524 = f_nn_46(((rt_int)61LL), F->line_519);
(*(P358)rt_nil_check(F->lab_524)).a = F->first_521;
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P358)rt_nil_check(F->lab_524)).b = f_expr_87();
f_append_50(&F->keys_522, &F->ktail_523, F->lab_524);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_50(&F->keys_522, &F->ktail_523, F->lab_524);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_525 = g_tpos_382;
F->more_526 = NULL;
F->tail2_527 = NULL;
F->ok_528 = 0;
F->go_529 = 1;
while ((F->go_529 && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_530 = NULL;
F->l2_530 = f_nn_46(((rt_int)61LL), F->line_519);
(*(P358)rt_nil_check(F->l2_530)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P358)rt_nil_check(F->l2_530)).b = f_expr_87();
}
f_append_50(&F->more_526, &F->tail2_527, F->l2_530);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_528 = 1;
F->go_529 = 0;
} else if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_529 = 0;
}
}
if (F->ok_528) {
f_append_50(&F->keys_522, &F->ktail_523, F->lab_524);
f_append_50(&F->keys_522, &F->ktail_523, F->more_526);
} else {
g_tpos_382 = F->save_525;
}
}
if ((F->keys_522 != NULL)) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P358)rt_nil_check(F->it_520)).a = F->keys_522;
(*(P358)rt_nil_check(F->it_520)).b = f_expr_87();
} else {
(*(P358)rt_nil_check(F->it_520)).b = F->first_521;
}
F->result_ = F->it_520;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_body_end_100(void) {
  struct f_at_body_end_100fr *F = rt_alloc(sizeof *F);
F->result_ = (((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_59(((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_body_101(void) {
  struct f_body_101fr *F = rt_alloc(sizeof *F);
F->head_531 = NULL;
F->tail_532 = NULL;
while ((!f_at_body_end_100())) {
f_append_50(&F->head_531, &F->tail_532, f_body_element_102());
}
F->result_ = F->head_531;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_body_element_102(void) {
  struct f_body_element_102fr *F = rt_alloc(sizeof *F);
F->x_533 = NULL;
if ((((((((((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_533 = f_declaration_103();
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_533 = f_nn_46(((rt_int)33LL), f_cur_line_53());
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_533)).a = f_expr_87();
} else {
F->x_533 = f_statement_121();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_533;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_declaration_103(void) {
  struct f_declaration_103fr *F = rt_alloc(sizeof *F);
F->line_534 = f_cur_line_53();
if ((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_104();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_105();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_106();
goto ret_;
} else if (((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_115();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_116();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_118();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_117();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_535 = NULL;
F->tail_536 = NULL;
F->names_537 = NULL;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->names_537 = f_id_list_76();
while ((F->names_537 != NULL)) {
F->x_538 = NULL;
F->x_538 = f_nn_46(((rt_int)49LL), F->line_534);
(*(P358)rt_nil_check(F->x_538)).name = (*(P358)rt_nil_check(F->names_537)).name;
f_append_50(&F->head_535, &F->tail_536, F->x_538);
F->names_537 = (*(P358)rt_nil_check(F->names_537)).next;
}
F->result_ = F->head_535;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_object_decl_104(void) {
  struct f_object_decl_104fr *F = rt_alloc(sizeof *F);
F->line_539 = f_cur_line_53();
F->is_var_540 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_541 = NULL;
F->st_542 = NULL;
F->init_543 = NULL;
F->head_544 = NULL;
F->tail_545 = NULL;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->names_541 = f_id_list_76();
if (F->is_var_540) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_542 = f_p_subtype_77();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_543 = f_expr_87();
}
} else {
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_542 = f_p_subtype_77();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_543 = f_expr_87();
}
while ((F->names_541 != NULL)) {
F->x_546 = NULL;
if (F->is_var_540) {
F->x_546 = f_nn_46(((rt_int)40LL), F->line_539);
} else {
F->x_546 = f_nn_46(((rt_int)41LL), F->line_539);
}
(*(P358)rt_nil_check(F->x_546)).name = (*(P358)rt_nil_check(F->names_541)).name;
(*(P358)rt_nil_check(F->x_546)).a = F->st_542;
(*(P358)rt_nil_check(F->x_546)).b = F->init_543;
f_append_50(&F->head_544, &F->tail_545, F->x_546);
F->names_541 = (*(P358)rt_nil_check(F->names_541)).next;
}
F->result_ = F->head_544;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_abbrev_decl_105(void) {
  struct f_abbrev_decl_105fr *F = rt_alloc(sizeof *F);
F->x_547 = NULL;
F->x_547 = f_nn_46(((rt_int)42LL), f_cur_line_53());
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_547)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_547)).b = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P358)rt_nil_check(F->x_547)).a = f_p_subtype_77();
F->result_ = F->x_547;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_type_decl_106(void) {
  struct f_type_decl_106fr *F = rt_alloc(sizeof *F);
F->line_548 = f_cur_line_53();
F->name_549 = NULL;
F->params_550 = NULL;
F->x_551 = NULL;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->name_549 = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_550 = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->x_551 = f_nn_46(((rt_int)44LL), F->line_548);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_551)).b = f_formal_params_109();
}
} else {
F->x_551 = f_nn_46(((rt_int)43LL), F->line_548);
(*(P358)rt_nil_check(F->x_551)).b = F->params_550;
}
(*(P358)rt_nil_check(F->x_551)).name = F->name_549;
(*(P358)rt_nil_check(F->x_551)).a = f_p_subtype_77();
F->result_ = F->x_551;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_mode_of_108(rstr *w_107) {
  struct f_mode_of_108fr *F = rt_alloc(sizeof *F);
F->w_107 = w_107;
if (rt_str_eq((*F->w_107), rt_str("VAR", 3))) {
F->result_ = ((rt_int)2LL);
goto ret_;
} else if (rt_str_eq((*F->w_107), rt_str("OUT", 3))) {
F->result_ = ((rt_int)3LL);
goto ret_;
} else if (rt_str_eq((*F->w_107), rt_str("READONLY", 8))) {
F->result_ = ((rt_int)4LL);
goto ret_;
}
F->result_ = ((rt_int)1LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_formal_params_109(void) {
  struct f_formal_params_109fr *F = rt_alloc(sizeof *F);
F->head_552 = NULL;
F->tail_553 = NULL;
F->more_554 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_554) {
F->mode_555 = ((rt_int)1LL);
F->names_556 = NULL;
F->ntail_557 = NULL;
F->st_558 = NULL;
if ((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_555 = f_mode_of_108(&(*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)));
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
}
f_append_50(&F->names_556, &F->ntail_557, f_name_node_75());
while ((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_61(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P353)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P353)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
f_append_50(&F->names_556, &F->ntail_557, f_name_node_75());
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_558 = f_p_subtype_77();
while ((F->names_556 != NULL)) {
F->p_559 = NULL;
F->p_559 = f_nn_46(((rt_int)52LL), (*(P358)rt_nil_check(F->names_556)).line);
(*(P358)rt_nil_check(F->p_559)).name = (*(P358)rt_nil_check(F->names_556)).name;
(*(P358)rt_nil_check(F->p_559)).ival = F->mode_555;
(*(P358)rt_nil_check(F->p_559)).a = F->st_558;
f_append_50(&F->head_552, &F->tail_553, F->p_559);
F->names_556 = (*(P358)rt_nil_check(F->names_556)).next;
}
F->more_554 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_552;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_111(P358 owner_110) {
  struct f_imports_list_111fr *F = rt_alloc(sizeof *F);
F->owner_110 = owner_110;
F->head_560 = NULL;
F->tail_561 = NULL;
F->more_562 = 1;
if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P358)rt_nil_check(F->owner_110)).flag = rt_add((*(P358)rt_nil_check(F->owner_110)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_562) {
F->ro_563 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_564 = NULL;
F->x_564 = f_name_node_75();
if (F->ro_563) {
(*(P358)rt_nil_check(F->x_564)).ival = ((rt_int)1LL);
}
f_append_50(&F->head_560, &F->tail_561, F->x_564);
F->more_562 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P358)rt_nil_check(F->owner_110)).d = F->head_560;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_definable_113(rstr *w_112) {
  struct f_is_definable_113fr *F = rt_alloc(sizeof *F);
F->w_112 = w_112;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_112), rt_str("+", 1)) || rt_str_eq((*F->w_112), rt_str("-", 1))) || rt_str_eq((*F->w_112), rt_str("*", 1))) || rt_str_eq((*F->w_112), rt_str("/", 1))) || rt_str_eq((*F->w_112), rt_str("**", 2))) || rt_str_eq((*F->w_112), rt_str("&", 1))) || rt_str_eq((*F->w_112), rt_str("=", 1))) || rt_str_eq((*F->w_112), rt_str("<", 1))) || rt_str_eq((*F->w_112), rt_str("<=", 2))) || rt_str_eq((*F->w_112), rt_str(">", 1))) || rt_str_eq((*F->w_112), rt_str(">=", 2))) || rt_str_eq((*F->w_112), rt_str("/=", 2))) || rt_str_eq((*F->w_112), rt_str("DIV", 3))) || rt_str_eq((*F->w_112), rt_str("MOD", 3))) || rt_str_eq((*F->w_112), rt_str("AND", 3))) || rt_str_eq((*F->w_112), rt_str("OR", 2))) || rt_str_eq((*F->w_112), rt_str("XOR", 3))) || rt_str_eq((*F->w_112), rt_str("NOT", 3))) || rt_str_eq((*F->w_112), rt_str("IN", 2))) || rt_str_eq((*F->w_112), rt_str(":=", 2))) || rt_str_eq((*F->w_112), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P353 f_definable_name_114(void) {
  struct f_definable_name_114fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_59(((rt_int)1LL)) || (f_at_kind_59(((rt_int)3LL)) && f_is_definable_113(&(*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)))))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = (*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(rt_sub(g_tpos_382, ((rt_int)1LL)), (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_subprogram_decl_115(void) {
  struct f_subprogram_decl_115fr *F = rt_alloc(sizeof *F);
F->line_565 = f_cur_line_53();
F->x_566 = NULL;
F->is_abn_567 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_568 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_568) {
F->x_566 = f_nn_46(((rt_int)46LL), F->line_565);
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_566 = f_nn_46(((rt_int)45LL), F->line_565);
} else {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
if (F->is_abn_567) {
(*(P358)rt_nil_check(F->x_566)).flag = ((rt_int)1LL);
}
(*(P358)rt_nil_check(F->x_566)).name = f_definable_name_114();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_566)).a = f_formal_params_109();
}
if (F->is_func_568) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P358)rt_nil_check(F->x_566)).b = f_p_subtype_77();
}
F->dummy_569 = f_imports_list_111(F->x_566);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P358)rt_nil_check(F->x_566)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_568) {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P353)rt_nil_check(f_definable_name_114())), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->x_566)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->x_566)).name))); b_; }));
}
F->result_ = F->x_566;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_capsule_decl_116(void) {
  struct f_capsule_decl_116fr *F = rt_alloc(sizeof *F);
F->x_570 = NULL;
F->x_570 = f_nn_46(((rt_int)47LL), f_cur_line_53());
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_570)).name = f_expect_id_74();
F->dummy_571 = f_imports_list_111(F->x_570);
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P358)rt_nil_check(F->x_570)).ival = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P358)rt_nil_check(F->x_570)).ival = ((rt_int)0LL);
} else {
F->head_572 = NULL;
F->tail_573 = NULL;
F->more_574 = 1;
while (F->more_574) {
F->n_575 = NULL;
F->n_575 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P358)rt_nil_check(F->n_575)).ival = ((rt_int)1LL);
}
(*(P358)rt_nil_check(F->n_575)).name = f_definable_name_114();
f_append_50(&F->head_572, &F->tail_573, F->n_575);
F->more_574 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P358)rt_nil_check(F->x_570)).a = F->head_572;
(*(P358)rt_nil_check(F->x_570)).ival = ((rt_int)2LL);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P358)rt_nil_check(F->x_570)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P353)rt_nil_check(f_expect_id_74())), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->x_570)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_570;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_task_decl_117(void) {
  struct f_task_decl_117fr *F = rt_alloc(sizeof *F);
F->x_576 = NULL;
F->x_576 = f_nn_46(((rt_int)50LL), f_cur_line_53());
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_576)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_576)).a = f_formal_params_109();
}
F->dummy_577 = f_imports_list_111(F->x_576);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P358)rt_nil_check(F->x_576)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P353)rt_nil_check(f_expect_id_74())), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->x_576)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->x_576)).name))); b_; }));
}
F->result_ = F->x_576;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_expose_decl_118(void) {
  struct f_expose_decl_118fr *F = rt_alloc(sizeof *F);
F->x_578 = NULL;
F->x_578 = f_nn_46(((rt_int)48LL), f_cur_line_53());
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P358)rt_nil_check(F->x_578)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_579 = NULL;
F->tail_580 = NULL;
F->more_581 = 1;
while (F->more_581) {
F->n_582 = NULL;
F->n_582 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P358)rt_nil_check(F->n_582)).ival = ((rt_int)1LL);
}
(*(P358)rt_nil_check(F->n_582)).name = f_definable_name_114();
f_append_50(&F->head_579, &F->tail_580, F->n_582);
F->more_581 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P358)rt_nil_check(F->x_578)).a = F->head_579;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P358)rt_nil_check(F->x_578)).flag = ((rt_int)1LL);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P358)rt_nil_check(F->x_578)).flag = rt_add((*(P358)rt_nil_check(F->x_578)).flag, ((rt_int)2LL));
}
(*(P358)rt_nil_check(F->x_578)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_578)).b = f_actual_params_78();
}
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P358)rt_nil_check(F->x_578)).flag == ((rt_int)1LL)) || ((*(P358)rt_nil_check(F->x_578)).flag == ((rt_int)3LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_578;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_compound_kw_120(rstr *w_119) {
  struct f_is_compound_kw_120fr *F = rt_alloc(sizeof *F);
F->w_119 = w_119;
F->result_ = (((((((rt_str_eq((*F->w_119), rt_str("IF", 2)) || rt_str_eq((*F->w_119), rt_str("CASE", 4))) || rt_str_eq((*F->w_119), rt_str("FOR", 3))) || rt_str_eq((*F->w_119), rt_str("WHILE", 5))) || rt_str_eq((*F->w_119), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_119), rt_str("GUARD", 5))) || rt_str_eq((*F->w_119), rt_str("WAIT", 4))) || rt_str_eq((*F->w_119), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_statement_121(void) {
  struct f_statement_121fr *F = rt_alloc(sizeof *F);
F->labels_583 = NULL;
F->ltail_584 = NULL;
F->match_585 = NULL;
F->s_586 = NULL;
while (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P353)rt_nil_check(f_text_at_63(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_50(&F->labels_583, &F->ltail_584, f_name_node_75());
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
}
if (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_120(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P353)rt_nil_check(f_text_at_63(((rt_int)1LL)))); b_; })))) {
F->match_585 = f_expect_id_74();
}
F->s_586 = f_unlabeled_statement_122();
if ((F->match_585 != NULL)) {
if (((((((((*(P358)rt_nil_check(F->s_586)).kind != ((rt_int)22LL)) && ((*(P358)rt_nil_check(F->s_586)).kind != ((rt_int)23LL))) && ((*(P358)rt_nil_check(F->s_586)).kind != ((rt_int)24LL))) && ((*(P358)rt_nil_check(F->s_586)).kind != ((rt_int)25LL))) && ((*(P358)rt_nil_check(F->s_586)).kind != ((rt_int)26LL))) && ((*(P358)rt_nil_check(F->s_586)).kind != ((rt_int)35LL))) && ((*(P358)rt_nil_check(F->s_586)).kind != ((rt_int)36LL)))) {
f_fail_21((*(P358)rt_nil_check(F->s_586)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P353)rt_nil_check(f_expect_id_74())), (*(P353)rt_nil_check(F->match_585))))) {
f_fail_21((*(P358)rt_nil_check(F->s_586)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P353)rt_nil_check(F->match_585))); b_; }));
}
(*(P358)rt_nil_check(F->s_586)).tag = F->match_585;
}
if ((F->labels_583 != NULL)) {
f_fail_21((*(P358)rt_nil_check(F->s_586)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_586;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_unlabeled_statement_122(void) {
  struct f_unlabeled_statement_122fr *F = rt_alloc(sizeof *F);
F->line_587 = f_cur_line_53();
F->x_588 = NULL;
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_127();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_128();
goto ret_;
} else if ((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_129();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_588 = f_nn_46(((rt_int)25LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_588)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_588;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_130();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_588 = f_nn_46(((rt_int)27LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_588)).name = f_expect_id_74();
F->result_ = F->x_588;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_588 = f_nn_46(((rt_int)28LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P358)rt_nil_check(F->x_588)).a = f_expr_87();
}
F->result_ = F->x_588;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_588 = f_nn_46(((rt_int)30LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_588)).name = f_expect_id_74();
F->result_ = F->x_588;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)31LL), F->line_587);
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_588 = f_nn_46(((rt_int)34LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_588)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_588)).b = f_actual_params_78();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P358)rt_nil_check(F->x_588)).a = f_postfix_97();
F->result_ = F->x_588;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_589 = NULL;
F->tail_590 = NULL;
F->x_588 = f_nn_46(((rt_int)35LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_591 = NULL;
F->itail_592 = NULL;
F->more_593 = 1;
while (F->more_593) {
f_append_50(&F->invs_591, &F->itail_592, f_postfix_97());
F->more_593 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_589, &F->tail_590, f_arm_126(F->invs_591, f_body_101(), F->line_587));
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P358)rt_nil_check(F->x_588)).a = F->head_589;
F->result_ = F->x_588;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_588 = f_nn_46(((rt_int)36LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_588)).a = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P358)rt_nil_check(F->x_588)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_588;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_588 = f_nn_46(((rt_int)32LL), F->line_587);
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_588)).a = f_postfix_97();
if ((!(f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P353)rt_nil_check((*(P354)rt_nil_check((*(P356)rt_nil_check(g_toks_380)).p[rt_index(g_tpos_382, (*(P356)rt_nil_check(g_toks_380)).lo, (*(P356)rt_nil_check(g_toks_380)).hi) - (*(P356)rt_nil_check(g_toks_380)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P358)rt_nil_check(F->x_588)).b = f_actual_params_78();
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P358)rt_nil_check(F->x_588)).c = f_expr_87();
}
F->result_ = F->x_588;
goto ret_;
}
{
F->target_594 = NULL;
F->target_594 = f_postfix_97();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_588 = f_nn_46(((rt_int)20LL), F->line_587);
(*(P358)rt_nil_check(F->x_588)).a = F->target_594;
(*(P358)rt_nil_check(F->x_588)).b = f_expr_87();
} else {
F->x_588 = f_nn_46(((rt_int)21LL), F->line_587);
(*(P358)rt_nil_check(F->x_588)).a = F->target_594;
}
}
F->result_ = F->x_588;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_arm_126(P358 cond_123, P358 b_124, rt_int line_125) {
  struct f_arm_126fr *F = rt_alloc(sizeof *F);
F->cond_123 = cond_123;
F->b_124 = b_124;
F->line_125 = line_125;
F->x_595 = NULL;
F->x_595 = f_nn_46(((rt_int)60LL), F->line_125);
(*(P358)rt_nil_check(F->x_595)).a = F->cond_123;
(*(P358)rt_nil_check(F->x_595)).b = F->b_124;
F->result_ = F->x_595;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_if_stmt_127(void) {
  struct f_if_stmt_127fr *F = rt_alloc(sizeof *F);
F->x_596 = NULL;
F->x_596 = f_nn_46(((rt_int)22LL), f_cur_line_53());
F->head_597 = NULL;
F->tail_598 = NULL;
F->cond_599 = NULL;
F->go_600 = 1;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
F->cond_599 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_597, &F->tail_598, f_arm_126(F->cond_599, f_body_101(), (*(P358)rt_nil_check(F->x_596)).line));
while (F->go_600) {
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_599 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_597, &F->tail_598, f_arm_126(F->cond_599, f_body_101(), (*(P358)rt_nil_check(F->x_596)).line));
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P358)rt_nil_check(F->x_596)).flag = ((rt_int)1LL);
(*(P358)rt_nil_check(F->x_596)).b = f_body_101();
} else {
F->go_600 = 0;
}
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P358)rt_nil_check(F->x_596)).a = F->head_597;
F->result_ = F->x_596;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_case_stmt_128(void) {
  struct f_case_stmt_128fr *F = rt_alloc(sizeof *F);
F->x_601 = NULL;
F->x_601 = f_nn_46(((rt_int)23LL), f_cur_line_53());
F->head_602 = NULL;
F->tail_603 = NULL;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_601)).a = f_expr_87();
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_604 = NULL;
F->ltail_605 = NULL;
F->more_606 = 1;
while (F->more_606) {
F->l_607 = NULL;
F->l_607 = f_nn_46(((rt_int)61LL), f_cur_line_53());
(*(P358)rt_nil_check(F->l_607)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P358)rt_nil_check(F->l_607)).b = f_expr_87();
}
f_append_50(&F->labs_604, &F->ltail_605, F->l_607);
F->more_606 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_602, &F->tail_603, f_arm_126(F->labs_604, f_body_101(), (*(P358)rt_nil_check(F->x_601)).line));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P358)rt_nil_check(F->x_601)).flag = ((rt_int)1LL);
(*(P358)rt_nil_check(F->x_601)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P358)rt_nil_check(F->x_601)).b = F->head_602;
F->result_ = F->x_601;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_repeat_stmt_129(void) {
  struct f_repeat_stmt_129fr *F = rt_alloc(sizeof *F);
F->x_608 = NULL;
F->x_608 = f_nn_46(((rt_int)24LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P358)rt_nil_check(F->x_608)).flag = ((rt_int)1LL);
(*(P358)rt_nil_check(F->x_608)).name = f_expect_id_74();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P358)rt_nil_check(F->x_608)).ival = ((rt_int)1LL);
}
(*(P358)rt_nil_check(F->x_608)).a = f_p_subtype_77();
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P358)rt_nil_check(F->x_608)).a = f_expr_87();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P358)rt_nil_check(F->x_608)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_608;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_guard_stmt_130(void) {
  struct f_guard_stmt_130fr *F = rt_alloc(sizeof *F);
F->x_609 = NULL;
F->x_609 = f_nn_46(((rt_int)26LL), f_cur_line_53());
F->head_610 = NULL;
F->tail_611 = NULL;
g_tpos_382 = rt_add(g_tpos_382, ((rt_int)1LL));
(*(P358)rt_nil_check(F->x_609)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_612 = NULL;
F->h_612 = f_nn_46(((rt_int)62LL), f_cur_line_53());
(*(P358)rt_nil_check(F->h_612)).a = f_id_list_76();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P358)rt_nil_check(F->h_612)).b = f_body_101();
f_append_50(&F->head_610, &F->tail_611, F->h_612);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P358)rt_nil_check(F->x_609)).flag = ((rt_int)1LL);
(*(P358)rt_nil_check(F->x_609)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P358)rt_nil_check(F->x_609)).b = F->head_610;
F->result_ = F->x_609;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_program_131(void) {
  struct f_program_131fr *F = rt_alloc(sizeof *F);
F->head_613 = NULL;
F->tail_614 = NULL;
while ((!f_at_kind_59(((rt_int)0LL)))) {
if ((!f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_50(&F->head_613, &F->tail_614, f_capsule_decl_116());
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_613;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_133(rstr *s_132) {
  struct f_hash_133fr *F = rt_alloc(sizeof *F);
F->s_132 = s_132;
F->h_615 = ((rt_int)0LL);
{ rt_int lo617 = ((rt_int)1LL), hi618 = ((*F->s_132)).len;
for (rt_int it619 = lo617; it619 <= hi618; it619++) {
F->i_616 = it619;
F->h_615 = rt_mod(rt_add(rt_mul(F->h_615, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_132), F->i_616)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_615;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P368 f_lookup_135(rstr *name_134) {
  struct f_lookup_135fr *F = rt_alloc(sizeof *F);
F->name_134 = name_134;
F->y_620 = NULL;
F->y_620 = (*(P374)rt_nil_check(g_table_384)).p[rt_index(f_hash_133(&(*F->name_134)), (*(P374)rt_nil_check(g_table_384)).lo, (*(P374)rt_nil_check(g_table_384)).hi) - (*(P374)rt_nil_check(g_table_384)).lo];
while ((F->y_620 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_620)).name)), (*F->name_134))) {
F->result_ = F->y_620;
goto ret_;
}
F->y_620 = (*(P368)rt_nil_check(F->y_620)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_138(P368 y_136, rt_int line_137) {
  struct f_define_138fr *F = rt_alloc(sizeof *F);
F->y_136 = y_136;
F->line_137 = line_137;
F->h_621 = f_hash_133(&(*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_136)).name)));
F->z_622 = NULL;
F->z_622 = (*(P374)rt_nil_check(g_table_384)).p[rt_index(F->h_621, (*(P374)rt_nil_check(g_table_384)).lo, (*(P374)rt_nil_check(g_table_384)).hi) - (*(P374)rt_nil_check(g_table_384)).lo];
while ((F->z_622 != NULL)) {
if ((((*(P368)rt_nil_check(F->z_622)).depth == g_depth_385) && rt_str_eq((*(P353)rt_nil_check((*(P368)rt_nil_check(F->z_622)).name)), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_136)).name))))) {
f_fail_21(F->line_137, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_136)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_622 = (*(P368)rt_nil_check(F->z_622)).chain;
}
(*(P368)rt_nil_check(F->y_136)).depth = g_depth_385;
(*(P368)rt_nil_check(F->y_136)).chain = (*(P374)rt_nil_check(g_table_384)).p[rt_index(F->h_621, (*(P374)rt_nil_check(g_table_384)).lo, (*(P374)rt_nil_check(g_table_384)).hi) - (*(P374)rt_nil_check(g_table_384)).lo];
(*(P374)rt_nil_check(g_table_384)).p[rt_index(F->h_621, (*(P374)rt_nil_check(g_table_384)).lo, (*(P374)rt_nil_check(g_table_384)).hi) - (*(P374)rt_nil_check(g_table_384)).lo] = F->y_136;
(*(P368)rt_nil_check(F->y_136)).stack = g_scope_stack_386;
g_scope_stack_386 = F->y_136;
ret_:
  return;
}

static void f_open_scope_139(void) {
  struct f_open_scope_139fr *F = rt_alloc(sizeof *F);
g_depth_385 = rt_add(g_depth_385, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_140(void) {
  struct f_close_scope_140fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_386 != NULL) && ((*(P368)rt_nil_check(g_scope_stack_386)).depth == g_depth_385))) {
(*(P374)rt_nil_check(g_table_384)).p[rt_index(f_hash_133(&(*(P353)rt_nil_check((*(P368)rt_nil_check(g_scope_stack_386)).name))), (*(P374)rt_nil_check(g_table_384)).lo, (*(P374)rt_nil_check(g_table_384)).hi) - (*(P374)rt_nil_check(g_table_384)).lo] = (*(P368)rt_nil_check(g_scope_stack_386)).chain;
g_scope_stack_386 = (*(P368)rt_nil_check(g_scope_stack_386)).stack;
}
g_depth_385 = rt_sub(g_depth_385, ((rt_int)1LL));
ret_:
  return;
}

static P368 f_new_sym_143(rt_int kind_141, P353 name_142) {
  struct f_new_sym_143fr *F = rt_alloc(sizeof *F);
F->kind_141 = kind_141;
F->name_142 = name_142;
F->y_623 = NULL;
{ R369 *cell624 = rt_alloc(sizeof(R369));
(*cell624).name = NULL;
(*cell624).t = NULL;
(*cell624).c = NULL;
(*cell624).access = NULL;
(*cell624).cname = NULL;
(*cell624).st = NULL;
(*cell624).decl = NULL;
(*cell624).params = NULL;
(*cell624).result = NULL;
(*cell624).members = NULL;
(*cell624).mnext = NULL;
(*cell624).chain = NULL;
(*cell624).stack = NULL;
F->y_623 = cell624;
}
(*(P368)rt_nil_check(F->y_623)).kind = F->kind_141;
(*(P368)rt_nil_check(F->y_623)).name = F->name_142;
F->result_ = F->y_623;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P362 f_new_typ_145(rt_int kind_144) {
  struct f_new_typ_145fr *F = rt_alloc(sizeof *F);
F->kind_144 = kind_144;
F->t_625 = NULL;
{ R363 *cell626 = rt_alloc(sizeof(R363));
(*cell626).name = NULL;
(*cell626).lits = NULL;
(*cell626).elem = NULL;
(*cell626).idx = NULL;
(*cell626).elemcons = NULL;
(*cell626).elemst = NULL;
(*cell626).fields = NULL;
(*cell626).target = NULL;
(*cell626).decl = NULL;
(*cell626).cname = NULL;
(*cell626).next = NULL;
F->t_625 = cell626;
}
(*(P362)rt_nil_check(F->t_625)).kind = F->kind_144;
F->result_ = F->t_625;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P360 f_new_cons_146(void) {
  struct f_new_cons_146fr *F = rt_alloc(sizeof *F);
F->c_627 = NULL;
{ R361 *cell628 = rt_alloc(sizeof(R361));
(*cell628).lo = NULL;
(*cell628).hi = NULL;
(*cell628).slen = NULL;
F->c_627 = cell628;
}
F->result_ = F->c_627;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_149(P358 a_147, P358 b_148) {
  struct f_same_lits_149fr *F = rt_alloc(sizeof *F);
F->a_147 = a_147;
F->b_148 = b_148;
F->x_629 = NULL;
F->x_629 = F->a_147;
F->y_630 = NULL;
F->y_630 = F->b_148;
while (((F->x_629 != NULL) && (F->y_630 != NULL))) {
if ((!rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->x_629)).name)), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->y_630)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_629 = (*(P358)rt_nil_check(F->x_629)).next;
F->y_630 = (*(P358)rt_nil_check(F->y_630)).next;
}
F->result_ = ((F->x_629 == NULL) && (F->y_630 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_152(P362 a_150, P362 b_151) {
  struct f_same_152fr *F = rt_alloc(sizeof *F);
F->a_150 = a_150;
F->b_151 = b_151;
if ((F->a_150 == F->b_151)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_150 == NULL) || (F->b_151 == NULL)) || ((*(P362)rt_nil_check(F->a_150)).kind != (*(P362)rt_nil_check(F->b_151)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)1LL)) || ((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)2LL))) || ((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)3LL))) || ((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)5LL))) || ((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)9LL))) || ((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_149((*(P362)rt_nil_check(F->a_150)).lits, (*(P362)rt_nil_check(F->b_151)).lits);
goto ret_;
}
if (((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)6LL))) {
F->result_ = (f_same_152((*(P362)rt_nil_check(F->a_150)).elem, (*(P362)rt_nil_check(F->b_151)).elem) && f_same_152((*(P362)rt_nil_check(F->a_150)).idx, (*(P362)rt_nil_check(F->b_151)).idx));
goto ret_;
}
if (((*(P362)rt_nil_check(F->a_150)).kind == ((rt_int)7LL))) {
F->f_631 = NULL;
F->f_631 = (*(P362)rt_nil_check(F->a_150)).fields;
F->g_632 = NULL;
F->g_632 = (*(P362)rt_nil_check(F->b_151)).fields;
while (((F->f_631 != NULL) && (F->g_632 != NULL))) {
if (((!rt_str_eq((*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_631)).name)), (*(P353)rt_nil_check((*(P364)rt_nil_check(F->g_632)).name)))) || (!f_same_152((*(P364)rt_nil_check(F->f_631)).t, (*(P364)rt_nil_check(F->g_632)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_631 = (*(P364)rt_nil_check(F->f_631)).next;
F->g_632 = (*(P364)rt_nil_check(F->g_632)).next;
}
F->result_ = ((F->f_631 == NULL) && (F->g_632 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_154(P362 t_153) {
  struct f_kind_name_154fr *F = rt_alloc(sizeof *F);
F->t_153 = t_153;
{ rt_int sel633 = (*(P362)rt_nil_check(F->t_153)).kind;
if (0 || (sel633 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel633 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel633 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel633 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel633 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel633 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel633 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel633 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_153)).name)));
goto ret_;
} else if (0 || (sel633 == ((rt_int)11LL))) {
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

static void f_check_type_158(P362 got_155, P362 want_156, rt_int line_157) {
  struct f_check_type_158fr *F = rt_alloc(sizeof *F);
F->got_155 = got_155;
F->want_156 = want_156;
F->line_157 = line_157;
if ((F->want_156 == NULL)) {
goto ret_;
}
if ((((*(P362)rt_nil_check(F->got_155)).kind == ((rt_int)11LL)) && ((*(P362)rt_nil_check(F->want_156)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_152(F->got_155, F->want_156))) {
f_fail_21(F->line_157, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_154(F->got_155)), rt_str(" where ", 7)), f_kind_name_154(F->want_156)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_160(P362 t_159) {
  struct f_ctype_160fr *F = rt_alloc(sizeof *F);
F->t_159 = t_159;
{ rt_int sel634 = (*(P362)rt_nil_check(F->t_159)).kind;
if (0 || (sel634 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel634 == ((rt_int)2LL)) || (sel634 == ((rt_int)4LL)) || (sel634 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel634 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel634 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel634 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel634 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox", 7);
goto ret_;
} else if (0 || (sel634 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel634 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act", 6);
goto ret_;
} else {
if (((*(P362)rt_nil_check(F->t_159)).cname == NULL)) {
f_declare_ctype_164(F->t_159);
} else if (((((*(P362)rt_nil_check(F->t_159)).kind == ((rt_int)7LL)) && (*(P362)rt_nil_check(F->t_159)).forward) && (!(*(P362)rt_nil_check(F->t_159)).defined))) {
(*(P362)rt_nil_check(F->t_159)).defined = 1;
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_159)).cname))), rt_str(" { ", 3)), f_field_decls_162(F->t_159)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_159)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_162(P362 t_161) {
  struct f_field_decls_162fr *F = rt_alloc(sizeof *F);
F->t_161 = t_161;
F->f_635 = NULL;
F->f_635 = (*(P362)rt_nil_check(F->t_161)).fields;
F->s_636 = NULL;
F->s_636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_635 != NULL)) {
F->s_636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->s_636)), f_ctype_160((*(P364)rt_nil_check(F->f_635)).t)), rt_str(" ", 1)), f_lower_s_15(&(*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_635)).name)))), rt_str("; ", 2)); b_; }));
F->f_635 = (*(P364)rt_nil_check(F->f_635)).next;
}
F->result_ = (*(P353)rt_nil_check(F->s_636));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_164(P362 t_163) {
  struct f_declare_ctype_164fr *F = rt_alloc(sizeof *F);
F->t_163 = t_163;
F->u_637 = NULL;
F->u_637 = g_all_types_387;
if ((((*(P362)rt_nil_check(F->t_163)).kind == ((rt_int)8LL)) && ((*(P362)rt_nil_check(F->t_163)).target == NULL))) {
f_finish_ptr_218(F->t_163);
if (((*(P362)rt_nil_check(F->t_163)).cname != NULL)) {
goto ret_;
}
}
if (((*(P362)rt_nil_check(F->t_163)).kind != ((rt_int)8LL))) {
while ((F->u_637 != NULL)) {
if ((((*(P362)rt_nil_check(F->u_637)).kind == (*(P362)rt_nil_check(F->t_163)).kind) && f_same_152(F->u_637, F->t_163))) {
(*(P362)rt_nil_check(F->t_163)).cname = (*(P362)rt_nil_check(F->u_637)).cname;
goto ret_;
}
F->u_637 = (*(P362)rt_nil_check(F->u_637)).next;
}
}
if (((*(P362)rt_nil_check(F->t_163)).kind == ((rt_int)6LL))) {
(*(P362)rt_nil_check(F->t_163)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P362)rt_nil_check(F->t_163)).kind == ((rt_int)7LL))) {
(*(P362)rt_nil_check(F->t_163)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P362)rt_nil_check(F->t_163)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P362)rt_nil_check(F->t_163)).next = g_all_types_387;
g_all_types_387 = F->t_163;
if (((*(P362)rt_nil_check(F->t_163)).kind == ((rt_int)8LL))) {
F->target_638 = NULL;
F->target_638 = (*(P362)rt_nil_check(F->t_163)).target;
if (((*(P362)rt_nil_check(F->target_638)).kind == ((rt_int)7LL))) {
if (((*(P362)rt_nil_check(F->target_638)).cname == NULL)) {
(*(P362)rt_nil_check(F->target_638)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P362)rt_nil_check(F->target_638)).next = g_all_types_387;
g_all_types_387 = F->target_638;
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->target_638)).cname))), rt_str(" ", 1)), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->target_638)).cname))), rt_str(";", 1)); b_; }));
(*(P362)rt_nil_check(F->target_638)).forward = 1;
}
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->target_638)).cname))), rt_str(" *", 2)), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_160(F->target_638)), rt_str(" *", 2)), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P362)rt_nil_check(F->t_163)).kind == ((rt_int)6LL))) {
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(" ", 1)), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(" { rt_int lo, hi; ", 18)), f_ctype_160((*(P362)rt_nil_check(F->t_163)).elem)), rt_str(" *p; };", 7)); b_; }));
} else {
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(" ", 1)), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(";", 1)); b_; }));
(*(P362)rt_nil_check(F->t_163)).defined = 1;
f_put_25(g_out_types_389, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_163)).cname))), rt_str(" { ", 3)), f_field_decls_162(F->t_163)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_165(void) {
  struct f_init_ascii_165fr *F = rt_alloc(sizeof *F);
F->names_639 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_640 = NULL;
F->tail_641 = NULL;
F->start_642 = ((rt_int)1LL);
{ rt_int lo644 = ((rt_int)1LL), hi645 = (F->names_639).len;
for (rt_int it646 = lo644; it646 <= hi645; it646++) {
F->i_643 = it646;
if ((rt_str_get(F->names_639, F->i_643) == 32)) {
F->lit_647 = NULL;
F->lit_647 = f_nn_46(((rt_int)4LL), ((rt_int)0LL));
(*(P358)rt_nil_check(F->lit_647)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_639, F->start_642, rt_sub(F->i_643, ((rt_int)1LL))); b_; }));
f_append_50(&F->head_640, &F->tail_641, F->lit_647);
F->start_642 = rt_add(F->i_643, ((rt_int)1LL));
}
}
}
g_ty_ascii_412 = f_new_typ_145(((rt_int)4LL));
(*(P362)rt_nil_check(g_ty_ascii_412)).lits = F->head_640;
(*(P362)rt_nil_check(g_ty_ascii_412)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_168(P358 lits_166, rstr *name_167) {
  struct f_lit_index_168fr *F = rt_alloc(sizeof *F);
F->lits_166 = lits_166;
F->name_167 = name_167;
F->i_648 = ((rt_int)0LL);
F->l_649 = NULL;
F->l_649 = F->lits_166;
while ((F->l_649 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->l_649)).name)), (*F->name_167))) {
F->result_ = F->i_648;
goto ret_;
}
F->i_648 = rt_add(F->i_648, ((rt_int)1LL));
F->l_649 = (*(P358)rt_nil_check(F->l_649)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P362 f_resolve_subtype_171(P358 st_169, P360 *c_170) {
  struct f_resolve_subtype_171fr *F = rt_alloc(sizeof *F);
F->st_169 = st_169;
F->c_170 = c_170;
F->t_650 = NULL;
F->dummy_652 = NULL;
(*F->c_170) = f_new_cons_146();
{ rt_int sel653 = (*(P358)rt_nil_check(F->st_169)).kind;
if (0 || (sel653 == ((rt_int)70LL))) {
if (((*(P358)rt_nil_check(F->st_169)).a != NULL)) {
(*(P360)rt_nil_check((*F->c_170))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_320((*(P358)rt_nil_check(F->st_169)).a, g_ty_int_409, &F->dummy_652); b_; }));
(*(P360)rt_nil_check((*F->c_170))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_320((*(P358)rt_nil_check(F->st_169)).b, g_ty_int_409, &F->dummy_652); b_; }));
(*(P360)rt_nil_check((*F->c_170))).mlo = f_manifest_178((*(P358)rt_nil_check(F->st_169)).a, &F->ok_651);
(*(P360)rt_nil_check((*F->c_170))).hasm = F->ok_651;
(*(P360)rt_nil_check((*F->c_170))).mhi = f_manifest_178((*(P358)rt_nil_check(F->st_169)).b, &F->ok_651);
(*(P360)rt_nil_check((*F->c_170))).hasm = ((*(P360)rt_nil_check((*F->c_170))).hasm && F->ok_651);
}
F->result_ = g_ty_int_409;
goto ret_;
} else if (0 || (sel653 == ((rt_int)71LL))) {
F->result_ = g_ty_float_411;
goto ret_;
} else if (0 || (sel653 == ((rt_int)72LL))) {
F->t_650 = f_new_typ_145(((rt_int)4LL));
(*(P362)rt_nil_check(F->t_650)).lits = (*(P358)rt_nil_check(F->st_169)).a;
if (((*(P358)rt_nil_check(F->st_169)).b != NULL)) {
(*(P360)rt_nil_check((*F->c_170))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_320((*(P358)rt_nil_check(F->st_169)).b, F->t_650, &F->dummy_652); b_; }));
(*(P360)rt_nil_check((*F->c_170))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_320((*(P358)rt_nil_check(F->st_169)).c, F->t_650, &F->dummy_652); b_; }));
}
F->result_ = F->t_650;
goto ret_;
} else if (0 || (sel653 == ((rt_int)73LL))) {
F->t_650 = f_resolve_subtype_171((*(P358)rt_nil_check(F->st_169)).a, &(*F->c_170));
if ((!f_same_152(F->t_650, g_ty_ascii_412))) {
f_fail_21((*(P358)rt_nil_check(F->st_169)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_170) = f_new_cons_146();
if (((*(P358)rt_nil_check(F->st_169)).b != NULL)) {
(*(P360)rt_nil_check((*F->c_170))).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_320((*(P358)rt_nil_check(F->st_169)).b, g_ty_int_409, &F->dummy_652); b_; }));
}
F->result_ = g_ty_string_413;
goto ret_;
} else if (0 || (sel653 == ((rt_int)74LL))) {
if ((f_list_len_52((*(P358)rt_nil_check(F->st_169)).a) != ((rt_int)1LL))) {
f_fail_21((*(P358)rt_nil_check(F->st_169)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only one-dimensional arrays are supported", 41); b_; }));
}
{
F->ic_654 = NULL;
F->ec_655 = NULL;
F->it_656 = NULL;
F->it_656 = f_resolve_subtype_171((*(P358)rt_nil_check(F->st_169)).a, &F->ic_654);
F->et_657 = NULL;
F->et_657 = f_resolve_subtype_171((*(P358)rt_nil_check(F->st_169)).b, &F->ec_655);
F->t_650 = f_new_typ_145(((rt_int)6LL));
(*(P362)rt_nil_check(F->t_650)).idx = F->it_656;
(*(P362)rt_nil_check(F->t_650)).elem = F->et_657;
(*(P362)rt_nil_check(F->t_650)).elemcons = F->ec_655;
(*(P362)rt_nil_check(F->t_650)).elemst = (*(P358)rt_nil_check(F->st_169)).b;
if (((*(P360)rt_nil_check(F->ic_654)).lo != NULL)) {
(*(P360)rt_nil_check((*F->c_170))).lo = (*(P360)rt_nil_check(F->ic_654)).lo;
(*(P360)rt_nil_check((*F->c_170))).hi = (*(P360)rt_nil_check(F->ic_654)).hi;
} else if (((*(P362)rt_nil_check(F->it_656)).kind == ((rt_int)4LL))) {
(*(P360)rt_nil_check((*F->c_170))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P360)rt_nil_check((*F->c_170))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P362)rt_nil_check(F->it_656)).lits), ((rt_int)1LL))); b_; }));
}
}
F->result_ = F->t_650;
goto ret_;
} else if (0 || (sel653 == ((rt_int)75LL))) {
F->t_650 = f_new_typ_145(((rt_int)7LL));
{
F->comp_658 = NULL;
F->comp_658 = (*(P358)rt_nil_check(F->st_169)).a;
F->tail_659 = NULL;
while ((F->comp_658 != NULL)) {
F->cc_660 = NULL;
F->f_661 = NULL;
{ R365 *cell662 = rt_alloc(sizeof(R365));
(*cell662).name = NULL;
(*cell662).t = NULL;
(*cell662).c = NULL;
(*cell662).st = NULL;
(*cell662).next = NULL;
F->f_661 = cell662;
}
(*(P364)rt_nil_check(F->f_661)).name = (*(P358)rt_nil_check(F->comp_658)).name;
(*(P364)rt_nil_check(F->f_661)).t = f_resolve_subtype_171((*(P358)rt_nil_check(F->comp_658)).a, &F->cc_660);
(*(P364)rt_nil_check(F->f_661)).c = F->cc_660;
(*(P364)rt_nil_check(F->f_661)).st = (*(P358)rt_nil_check(F->comp_658)).a;
if ((F->tail_659 == NULL)) {
(*(P362)rt_nil_check(F->t_650)).fields = F->f_661;
} else {
(*(P364)rt_nil_check(F->tail_659)).next = F->f_661;
}
F->tail_659 = F->f_661;
F->comp_658 = (*(P358)rt_nil_check(F->comp_658)).next;
}
}
F->result_ = F->t_650;
goto ret_;
} else if (0 || (sel653 == ((rt_int)79LL))) {
F->result_ = g_ty_file_415;
goto ret_;
} else if (0 || (sel653 == ((rt_int)78LL))) {
{
F->ec_663 = NULL;
F->t_650 = f_new_typ_145(((rt_int)12LL));
(*(P362)rt_nil_check(F->t_650)).elem = f_resolve_subtype_171((*(P358)rt_nil_check(F->st_169)).a, &F->ec_663);
(*(P362)rt_nil_check(F->t_650)).elemcons = F->ec_663;
if (((*(P358)rt_nil_check(F->st_169)).b != NULL)) {
(*(P360)rt_nil_check((*F->c_170))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_320((*(P358)rt_nil_check(F->st_169)).b, g_ty_int_409, &F->dummy_652); b_; }));
}
}
F->result_ = F->t_650;
goto ret_;
} else if (0 || (sel653 == ((rt_int)80LL))) {
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->st_169)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_410;
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->st_169)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_412;
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->st_169)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_417;
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->st_169)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_418;
goto ret_;
}
{
F->y_664 = NULL;
F->y_664 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->st_169)).name)));
if ((F->y_664 == NULL)) {
f_fail_21((*(P358)rt_nil_check(F->st_169)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->st_169)).name))); b_; }));
}
if (((((*(P368)rt_nil_check(F->y_664)).kind == ((rt_int)6LL)) || ((*(P368)rt_nil_check(F->y_664)).kind == ((rt_int)5LL))) && ((*(P368)rt_nil_check(F->y_664)).t != NULL))) {
if (((*(P368)rt_nil_check(F->y_664)).c != NULL)) {
(*F->c_170) = (*(P368)rt_nil_check(F->y_664)).c;
}
F->result_ = (*(P368)rt_nil_check(F->y_664)).t;
goto ret_;
}
if ((((*(P368)rt_nil_check(F->y_664)).kind == ((rt_int)6LL)) || ((*(P368)rt_nil_check(F->y_664)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_171((*(P368)rt_nil_check(F->y_664)).st, &(*F->c_170));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->st_169)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->st_169)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_21((*(P358)rt_nil_check(F->st_169)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_175(rstr *lval_172, P362 t_173, P360 c_174) {
  struct f_init_storage_175fr *F = rt_alloc(sizeof *F);
F->lval_172 = lval_172;
F->t_173 = t_173;
F->c_174 = c_174;
if (((*(P362)rt_nil_check(F->t_173)).kind == ((rt_int)12LL))) {
if (((*(P360)rt_nil_check(F->c_174)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(&", 14), (*F->lval_172)), rt_str(", ", 2)), (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_174)).lo))), rt_str(", sizeof(", 9)), f_ctype_160((*(P362)rt_nil_check(F->t_173)).elem)), rt_str("), ", 3)), f_mcopy_180((*(P362)rt_nil_check(F->t_173)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P362)rt_nil_check(F->t_173)).kind == ((rt_int)13LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_172)), rt_str(");", 2)); b_; }));
} else if (((*(P362)rt_nil_check(F->t_173)).kind == ((rt_int)14LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_172), rt_str(".active = 0; ", 13)), (*F->lval_172)), rt_str(".t = NULL; ", 11)), (*F->lval_172)), rt_str(".waiters = NULL;", 16)); b_; }));
} else if (((*(P362)rt_nil_check(F->t_173)).kind == ((rt_int)8LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_172), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P362)rt_nil_check(F->t_173)).kind == ((rt_int)5LL))) {
if (((*(P360)rt_nil_check(F->c_174)).slen == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_172), rt_str(" = rt_str_new(", 14)), (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_174)).slen))), rt_str(");", 2)); b_; }));
} else if (((*(P362)rt_nil_check(F->t_173)).kind == ((rt_int)6LL))) {
if (((*(P360)rt_nil_check(F->c_174)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_172), rt_str(".lo = ", 6)), (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_174)).lo))), rt_str("; ", 2)), (*F->lval_172)), rt_str(".hi = ", 6)), (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_174)).hi))), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_172), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_160((*(P362)rt_nil_check(F->t_173)).elem)), rt_str(") * (size_t)(", 13)), (*F->lval_172)), rt_str(".hi >= ", 7)), (*F->lval_172)), rt_str(".lo \? ", 6)), (*F->lval_172)), rt_str(".hi - ", 6)), (*F->lval_172)), rt_str(".lo + 1 : 0));", 14)); b_; }));
if (((((*(P362)rt_nil_check((*(P362)rt_nil_check(F->t_173)).elem)).kind == ((rt_int)5LL)) || ((*(P362)rt_nil_check((*(P362)rt_nil_check(F->t_173)).elem)).kind == ((rt_int)6LL))) || ((*(P362)rt_nil_check((*(P362)rt_nil_check(F->t_173)).elem)).kind == ((rt_int)7LL)))) {
F->i_665 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_665), rt_str(" = 0; ", 6)), F->i_665), rt_str(" <= ", 4)), (*F->lval_172)), rt_str(".hi - ", 6)), (*F->lval_172)), rt_str(".lo; ", 5)), F->i_665), rt_str("++) {", 5)); b_; }));
f_init_storage_175(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_172), rt_str(".p[", 3)), F->i_665), rt_str("]", 1)); b_; }), (*(P362)rt_nil_check(F->t_173)).elem, (*(P362)rt_nil_check(F->t_173)).elemcons);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P362)rt_nil_check(F->t_173)).kind == ((rt_int)7LL))) {
F->f_666 = NULL;
F->f_666 = (*(P362)rt_nil_check(F->t_173)).fields;
while ((F->f_666 != NULL)) {
f_init_storage_175(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_172), rt_str(".", 1)), f_lower_s_15(&(*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_666)).name)))); b_; }), (*(P364)rt_nil_check(F->f_666)).t, (*(P364)rt_nil_check(F->f_666)).c);
F->f_666 = (*(P364)rt_nil_check(F->f_666)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_178(P358 e_176, int *ok_177) {
  struct f_manifest_178fr *F = rt_alloc(sizeof *F);
F->e_176 = e_176;
F->ok_177 = ok_177;
(*F->ok_177) = 0;
if (((*(P358)rt_nil_check(F->e_176)).kind == ((rt_int)1LL))) {
(*F->ok_177) = 1;
F->result_ = (*(P358)rt_nil_check(F->e_176)).ival;
goto ret_;
} else if (((*(P358)rt_nil_check(F->e_176)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_178((*(P358)rt_nil_check(F->e_176)).a, &(*F->ok_177));
goto ret_;
} else if ((((*(P358)rt_nil_check(F->e_176)).kind == ((rt_int)8LL)) && rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_176)).name)), rt_str("-", 1)))) {
F->a_667 = f_manifest_178((*(P358)rt_nil_check(F->e_176)).a, &(*F->ok_177));
F->result_ = rt_neg(F->a_667);
goto ret_;
} else if ((((*(P358)rt_nil_check(F->e_176)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_176)).name)), rt_str("+", 1)) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_176)).name)), rt_str("-", 1))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_176)).name)), rt_str("*", 1))))) {
F->a_667 = f_manifest_178((*(P358)rt_nil_check(F->e_176)).a, &(*F->ok_177));
F->b_668 = f_manifest_178((*(P358)rt_nil_check(F->e_176)).b, &F->ok2_669);
(*F->ok_177) = ((*F->ok_177) && F->ok2_669);
if ((!(*F->ok_177))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_176)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_667, F->b_668);
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_176)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_667, F->b_668);
goto ret_;
}
F->result_ = rt_mul(F->a_667, F->b_668);
goto ret_;
} else if (((*(P358)rt_nil_check(F->e_176)).kind == ((rt_int)7LL))) {
F->y_670 = NULL;
F->y_670 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_176)).name)));
if ((((F->y_670 != NULL) && ((*(P368)rt_nil_check(F->y_670)).kind == ((rt_int)2LL))) && (*(P368)rt_nil_check(F->y_670)).hasmv)) {
(*F->ok_177) = 1;
F->result_ = (*(P368)rt_nil_check(F->y_670)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_mcopy_180(P362 t_179) {
  struct f_mcopy_180fr *F = rt_alloc(sizeof *F);
F->t_179 = t_179;
F->ct_671 = rt_str_copy(f_ctype_160(F->t_179));
F->name_672 = rt_str_new(rt_add((F->ct_671).len, ((rt_int)3LL)));
rt_str_assign(&F->name_672, rt_str_cat(rt_str("mc_", 3), F->ct_671));
F->l_673 = NULL;
if ((!f_seen_name_199(g_mcopies_408, &F->name_672))) {
{ R371 *cell674 = rt_alloc(sizeof(R371));
(*cell674).s = NULL;
(*cell674).next = NULL;
F->l_673 = cell674;
}
(*(P370)rt_nil_check(F->l_673)).s = f_mk_3(&F->name_672);
(*(P370)rt_nil_check(F->l_673)).next = g_mcopies_408;
g_mcopies_408 = F->l_673;
f_put_25(g_out_protos_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_672), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_672), rt_str("(void *d, const void *s) { *(", 29)), F->ct_671), rt_str(" *)d = ", 7)), f_copy_code_188(F->t_179, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_671), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_672;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_185(rstr *lval_181, P362 t_182, rstr *v_183, P360 c_184) {
  struct f_assign_code_185fr *F = rt_alloc(sizeof *F);
F->lval_181 = lval_181;
F->t_182 = t_182;
F->v_183 = v_183;
F->c_184 = c_184;
if (((*(P362)rt_nil_check(F->t_182)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_181)), rt_str(", ", 2)), (*F->v_183)), rt_str(");", 2));
goto ret_;
} else if ((((*(P362)rt_nil_check(F->t_182)).kind == ((rt_int)6LL)) || ((*(P362)rt_nil_check(F->t_182)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_160(F->t_182)), rt_str("(&", 2)), (*F->lval_181)), rt_str(", ", 2)), (*F->v_183)), rt_str(");", 2));
goto ret_;
} else if (((((*(P362)rt_nil_check(F->t_182)).kind == ((rt_int)1LL)) && (F->c_184 != NULL)) && (*(P360)rt_nil_check(F->c_184)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_181), rt_str(" = rt_range(", 12)), (*F->v_183)), rt_str(", ", 2)), f_itos_7((*(P360)rt_nil_check(F->c_184)).mlo)), rt_str(", ", 2)), f_itos_7((*(P360)rt_nil_check(F->c_184)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_181), rt_str(" = ", 3)), (*F->v_183)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_188(P362 t_186, rstr *v_187) {
  struct f_copy_code_188fr *F = rt_alloc(sizeof *F);
F->t_186 = t_186;
F->v_187 = v_187;
if (((*(P362)rt_nil_check(F->t_186)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_187)), rt_str(")", 1));
goto ret_;
} else if ((((*(P362)rt_nil_check(F->t_186)).kind == ((rt_int)6LL)) || ((*(P362)rt_nil_check(F->t_186)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_160(F->t_186)), rt_str("(", 1)), (*F->v_187)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_187);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_192(P362 t_189, rstr *a_190, rstr *b_191) {
  struct f_eq_code_192fr *F = rt_alloc(sizeof *F);
F->t_189 = t_189;
F->a_190 = a_190;
F->b_191 = b_191;
if (((*(P362)rt_nil_check(F->t_189)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_190)), rt_str(", ", 2)), (*F->b_191)), rt_str(")", 1));
goto ret_;
} else if ((((*(P362)rt_nil_check(F->t_189)).kind == ((rt_int)6LL)) || ((*(P362)rt_nil_check(F->t_189)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_160(F->t_189)), rt_str("(", 1)), (*F->a_190)), rt_str(", ", 2)), (*F->b_191)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_190)), rt_str(" == ", 4)), (*F->b_191)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_196(rstr *lval_193, P362 t_194, rstr *v_195) {
  struct f_elem_assign_196fr *F = rt_alloc(sizeof *F);
F->lval_193 = lval_193;
F->t_194 = t_194;
F->v_195 = v_195;
F->result_ = f_assign_code_185(&(*F->lval_193), F->t_194, &(*F->v_195), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_199(P370 l_197, rstr *s_198) {
  struct f_seen_name_199fr *F = rt_alloc(sizeof *F);
F->l_197 = l_197;
F->s_198 = s_198;
F->p_675 = NULL;
F->p_675 = F->l_197;
while ((F->p_675 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P370)rt_nil_check(F->p_675)).s)), (*F->s_198))) {
F->result_ = 1;
goto ret_;
}
F->p_675 = (*(P370)rt_nil_check(F->p_675)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_200(void) {
  struct f_emit_helpers_200fr *F = rt_alloc(sizeof *F);
F->order_676 = NULL;
F->t_677 = NULL;
F->t_677 = g_all_types_387;
F->done_678 = NULL;
while ((F->t_677 != NULL)) {
if ((((*(P362)rt_nil_check(F->t_677)).kind != ((rt_int)8LL)) && (!f_seen_name_199(F->done_678, &(*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_677)).cname)))))) {
F->l_679 = NULL;
F->c_680 = rt_str_new(((*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_677)).cname))).len);
rt_str_assign(&F->c_680, (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_677)).cname)));
{ R371 *cell681 = rt_alloc(sizeof(R371));
(*cell681).s = NULL;
(*cell681).next = NULL;
F->l_679 = cell681;
}
(*(P370)rt_nil_check(F->l_679)).s = (*(P362)rt_nil_check(F->t_677)).cname;
(*(P370)rt_nil_check(F->l_679)).next = F->done_678;
F->done_678 = F->l_679;
f_put_25(g_out_helpers_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_680), rt_str("(", 1)), F->c_680), rt_str(" *d, ", 5)), F->c_680), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_680), rt_str(" cp_", 4)), F->c_680), rt_str("(", 1)), F->c_680), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_390, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_680), rt_str("(", 1)), F->c_680), rt_str(" a, ", 4)), F->c_680), rt_str(" b);", 4)); b_; }));
f_helper_bodies_202(F->t_677);
}
F->t_677 = (*(P362)rt_nil_check(F->t_677)).next;
}
ret_:
  return;
}

static void f_helper_bodies_202(P362 t_201) {
  struct f_helper_bodies_202fr *F = rt_alloc(sizeof *F);
F->t_201 = t_201;
F->c_682 = rt_str_new(((*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_201)).cname))).len);
rt_str_assign(&F->c_682, (*(P353)rt_nil_check((*(P362)rt_nil_check(F->t_201)).cname)));
F->b_683 = NULL;
F->b_683 = g_out_funcs_393;
if (((*(P362)rt_nil_check(F->t_201)).kind == ((rt_int)6LL))) {
F->e_684 = NULL;
F->e_684 = (*(P362)rt_nil_check(F->t_201)).elem;
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_682), rt_str("(", 1)), F->c_682), rt_str(" *d, ", 5)), F->c_682), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, ", 63), f_q_16()), rt_str("array length", 12)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= s.hi - s.lo; i++) { ", 46), f_elem_assign_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_684, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_682), rt_str(" cp_", 4)), F->c_682), rt_str("(", 1)), F->c_682), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_682), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_160(F->e_684)), rt_str(") * (size_t)(s.hi >= s.lo \? s.hi - s.lo + 1 : 0));", 50)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = ", 53), f_copy_code_188(F->e_684, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_682), rt_str("(", 1)), F->c_682), rt_str(" a, ", 4)), F->c_682), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo) return 0;", 43); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!(", 50), f_eq_code_192(F->e_684, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_685 = NULL;
F->f_685 = (*(P362)rt_nil_check(F->t_201)).fields;
F->conds_686 = NULL;
F->conds_686 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_682), rt_str("(", 1)), F->c_682), rt_str(" *d, ", 5)), F->c_682), rt_str(" s) {", 5)); b_; }));
while ((F->f_685 != NULL)) {
F->fn_687 = rt_str_copy(f_lower_s_15(&(*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_685)).name))));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_687); b_; }), (*(P364)rt_nil_check(F->f_685)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_687); b_; }))); b_; }));
F->f_685 = (*(P364)rt_nil_check(F->f_685)).next;
}
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_682), rt_str(" cp_", 4)), F->c_682), rt_str("(", 1)), F->c_682), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_682), rt_str(" d = s;", 7)); b_; }));
F->f_685 = (*(P362)rt_nil_check(F->t_201)).fields;
while ((F->f_685 != NULL)) {
F->fn_688 = rt_str_copy(f_lower_s_15(&(*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_685)).name))));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_688), rt_str(" = ", 3)), f_copy_code_188((*(P364)rt_nil_check(F->f_685)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_688); b_; }))), rt_str(";", 1)); b_; }));
F->conds_686 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->conds_686)), rt_str(" && ", 4)), f_eq_code_192((*(P364)rt_nil_check(F->f_685)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_688); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_688); b_; }))); b_; }));
F->f_685 = (*(P364)rt_nil_check(F->f_685)).next;
}
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_682), rt_str("(", 1)), F->c_682), rt_str(" a, ", 4)), F->c_682), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P353)rt_nil_check(F->conds_686))), rt_str(";", 1)); b_; }));
f_put_25(F->b_683, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_204(P358 elems_203) {
  struct f_declare_body_204fr *F = rt_alloc(sizeof *F);
F->elems_203 = elems_203;
F->e_689 = NULL;
F->e_689 = F->elems_203;
while ((F->e_689 != NULL)) {
if ((((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)41LL)) && ((*(P358)rt_nil_check(F->e_689)).flag == ((rt_int)0LL)))) {
f_manifest_const_206(F->e_689);
} else if (((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)47LL))) {
f_gen_capsule_214(F->e_689);
} else if (((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)48LL))) {
f_gen_expose_216(F->e_689);
} else if (((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)49LL))) {
F->y_690 = NULL;
F->y_690 = f_new_sym_143(((rt_int)7LL), (*(P358)rt_nil_check(F->e_689)).name);
(*(P368)rt_nil_check(F->y_690)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_689)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_138(F->y_690, (*(P358)rt_nil_check(F->e_689)).line);
f_put_25(g_out_globals_392, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_690)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_excs_395, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_690)).cname))), rt_str(" = rt_exc(", 10)), f_q_16()), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_689)).name))), f_q_16()), rt_str(");", 2)); b_; }));
} else if (((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)42LL))) {
F->y_691 = NULL;
F->y_691 = f_new_sym_143(((rt_int)6LL), (*(P358)rt_nil_check(F->e_689)).name);
(*(P368)rt_nil_check(F->y_691)).st = (*(P358)rt_nil_check(F->e_689)).a;
f_define_138(F->y_691, (*(P358)rt_nil_check(F->e_689)).line);
} else if (((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)44LL))) {
F->y_692 = NULL;
F->y_692 = f_new_sym_143(((rt_int)5LL), (*(P358)rt_nil_check(F->e_689)).name);
F->t_693 = NULL;
F->t_693 = f_new_typ_145(((rt_int)8LL));
(*(P362)rt_nil_check(F->t_693)).name = (*(P358)rt_nil_check(F->e_689)).name;
(*(P362)rt_nil_check(F->t_693)).decl = F->e_689;
(*(P368)rt_nil_check(F->y_692)).t = F->t_693;
f_define_138(F->y_692, (*(P358)rt_nil_check(F->e_689)).line);
} else if (((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)43LL))) {
F->y_694 = NULL;
F->y_694 = f_new_sym_143(((rt_int)5LL), (*(P358)rt_nil_check(F->e_689)).name);
(*(P368)rt_nil_check(F->y_694)).st = (*(P358)rt_nil_check(F->e_689)).a;
f_define_138(F->y_694, (*(P358)rt_nil_check(F->e_689)).line);
}
F->e_689 = (*(P358)rt_nil_check(F->e_689)).next;
}
F->e_689 = F->elems_203;
while ((F->e_689 != NULL)) {
if (((((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)45LL)) || ((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)46LL))) || ((*(P358)rt_nil_check(F->e_689)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_220(F->e_689);
}
F->e_689 = (*(P358)rt_nil_check(F->e_689)).next;
}
ret_:
  return;
}

static void f_manifest_const_206(P358 d_205) {
  struct f_manifest_const_206fr *F = rt_alloc(sizeof *F);
F->d_205 = d_205;
F->y_697 = NULL;
F->c_698 = NULL;
if (((*(P358)rt_nil_check(F->d_205)).a != NULL)) {
if ((((*(P358)rt_nil_check((*(P358)rt_nil_check(F->d_205)).a)).kind != ((rt_int)70LL)) || ((*(P358)rt_nil_check((*(P358)rt_nil_check(F->d_205)).a)).a != NULL))) {
goto ret_;
}
}
F->v_696 = f_manifest_178((*(P358)rt_nil_check(F->d_205)).b, &F->ok_695);
if ((!F->ok_695)) {
goto ret_;
}
(*(P358)rt_nil_check(F->d_205)).flag = ((rt_int)1LL);
F->y_697 = f_new_sym_143(((rt_int)2LL), (*(P358)rt_nil_check(F->d_205)).name);
(*(P368)rt_nil_check(F->y_697)).t = g_ty_int_409;
(*(P368)rt_nil_check(F->y_697)).c = f_new_cons_146();
(*(P368)rt_nil_check(F->y_697)).mvalue = F->v_696;
(*(P368)rt_nil_check(F->y_697)).hasmv = 1;
(*(P368)rt_nil_check(F->y_697)).ro_flag = 1;
(*(P368)rt_nil_check(F->y_697)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_696)), rt_str("LL)", 3)); b_; }));
f_define_138(F->y_697, (*(P358)rt_nil_check(F->d_205)).line);
ret_:
  return;
}

static int f_exported_210(P358 d_207, rstr *name_208, int *ro_209) {
  struct f_exported_210fr *F = rt_alloc(sizeof *F);
F->d_207 = d_207;
F->name_208 = name_208;
F->ro_209 = ro_209;
F->p_699 = NULL;
F->p_699 = (*(P358)rt_nil_check(F->d_207)).a;
(*F->ro_209) = 0;
if (((*(P358)rt_nil_check(F->d_207)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_699 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_699)).name)), (*F->name_208))) {
(*F->ro_209) = ((*(P358)rt_nil_check(F->p_699)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_699 = (*(P358)rt_nil_check(F->p_699)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P368 f_copy_sym_212(P368 y_211) {
  struct f_copy_sym_212fr *F = rt_alloc(sizeof *F);
F->y_211 = y_211;
F->z_700 = NULL;
{ R369 *cell701 = rt_alloc(sizeof(R369));
(*cell701).name = NULL;
(*cell701).t = NULL;
(*cell701).c = NULL;
(*cell701).access = NULL;
(*cell701).cname = NULL;
(*cell701).st = NULL;
(*cell701).decl = NULL;
(*cell701).params = NULL;
(*cell701).result = NULL;
(*cell701).members = NULL;
(*cell701).mnext = NULL;
(*cell701).chain = NULL;
(*cell701).stack = NULL;
F->z_700 = cell701;
}
(*(P368)rt_nil_check(F->z_700)).kind = (*(P368)rt_nil_check(F->y_211)).kind;
(*(P368)rt_nil_check(F->z_700)).name = (*(P368)rt_nil_check(F->y_211)).name;
(*(P368)rt_nil_check(F->z_700)).t = (*(P368)rt_nil_check(F->y_211)).t;
(*(P368)rt_nil_check(F->z_700)).c = (*(P368)rt_nil_check(F->y_211)).c;
(*(P368)rt_nil_check(F->z_700)).access = (*(P368)rt_nil_check(F->y_211)).access;
(*(P368)rt_nil_check(F->z_700)).cname = (*(P368)rt_nil_check(F->y_211)).cname;
(*(P368)rt_nil_check(F->z_700)).ro_flag = (*(P368)rt_nil_check(F->y_211)).ro_flag;
(*(P368)rt_nil_check(F->z_700)).mvalue = (*(P368)rt_nil_check(F->y_211)).mvalue;
(*(P368)rt_nil_check(F->z_700)).hasmv = (*(P368)rt_nil_check(F->y_211)).hasmv;
(*(P368)rt_nil_check(F->z_700)).st = (*(P368)rt_nil_check(F->y_211)).st;
(*(P368)rt_nil_check(F->z_700)).decl = (*(P368)rt_nil_check(F->y_211)).decl;
(*(P368)rt_nil_check(F->z_700)).params = (*(P368)rt_nil_check(F->y_211)).params;
(*(P368)rt_nil_check(F->z_700)).result = (*(P368)rt_nil_check(F->y_211)).result;
(*(P368)rt_nil_check(F->z_700)).level = (*(P368)rt_nil_check(F->y_211)).level;
(*(P368)rt_nil_check(F->z_700)).byref = (*(P368)rt_nil_check(F->y_211)).byref;
(*(P368)rt_nil_check(F->z_700)).members = (*(P368)rt_nil_check(F->y_211)).members;
F->result_ = F->z_700;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_214(P358 d_213) {
  struct f_gen_capsule_214fr *F = rt_alloc(sizeof *F);
F->d_213 = d_213;
F->y_702 = NULL;
F->y_702 = f_new_sym_143(((rt_int)8LL), (*(P358)rt_nil_check(F->d_213)).name);
F->ctx_703 = NULL;
F->m_704 = NULL;
F->p_705 = NULL;
F->p_705 = (*(P358)rt_nil_check(F->d_213)).a;
(*(P368)rt_nil_check(F->y_702)).decl = F->d_213;
f_open_scope_139();
{ R379 *cell707 = rt_alloc(sizeof(R379));
(*cell707).imps = NULL;
(*cell707).next = NULL;
F->ctx_703 = cell707;
}
(*(P378)rt_nil_check(F->ctx_703)).depth = g_depth_385;
(*(P378)rt_nil_check(F->ctx_703)).imps = (*(P358)rt_nil_check(F->d_213)).d;
(*(P378)rt_nil_check(F->ctx_703)).all_imp = ((*(P358)rt_nil_check(F->d_213)).flag >= ((rt_int)2LL));
(*(P378)rt_nil_check(F->ctx_703)).next = g_fctx_400;
g_fctx_400 = F->ctx_703;
f_declare_body_204((*(P358)rt_nil_check(F->d_213)).c);
f_body_elements_236((*(P358)rt_nil_check(F->d_213)).c);
g_fctx_400 = (*(P378)rt_nil_check(g_fctx_400)).next;
F->m_704 = g_scope_stack_386;
while (((F->m_704 != NULL) && ((*(P368)rt_nil_check(F->m_704)).depth == g_depth_385))) {
if (((((*(P368)rt_nil_check(F->m_704)).kind == ((rt_int)5LL)) || ((*(P368)rt_nil_check(F->m_704)).kind == ((rt_int)6LL))) && ((*(P368)rt_nil_check(F->m_704)).t == NULL))) {
(*(P368)rt_nil_check(F->m_704)).t = f_resolve_subtype_171((*(P368)rt_nil_check(F->m_704)).st, &(*(P368)rt_nil_check(F->m_704)).c);
} else if ((((*(P368)rt_nil_check(F->m_704)).kind == ((rt_int)5LL)) && ((*(P362)rt_nil_check((*(P368)rt_nil_check(F->m_704)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_218((*(P368)rt_nil_check(F->m_704)).t);
}
F->m_704 = (*(P368)rt_nil_check(F->m_704)).stack;
}
F->m_704 = g_scope_stack_386;
while (((F->m_704 != NULL) && ((*(P368)rt_nil_check(F->m_704)).depth == g_depth_385))) {
if (f_exported_210(F->d_213, &(*(P353)rt_nil_check((*(P368)rt_nil_check(F->m_704)).name)), &F->ro_706)) {
F->z_708 = NULL;
F->z_708 = f_copy_sym_212(F->m_704);
if (F->ro_706) {
(*(P368)rt_nil_check(F->z_708)).ro_flag = 1;
}
(*(P368)rt_nil_check(F->z_708)).mnext = (*(P368)rt_nil_check(F->y_702)).members;
(*(P368)rt_nil_check(F->y_702)).members = F->z_708;
}
F->m_704 = (*(P368)rt_nil_check(F->m_704)).stack;
}
while ((F->p_705 != NULL)) {
if (((f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_705)).name))) == NULL) || ((*(P368)rt_nil_check(f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_705)).name))))).depth != g_depth_385))) {
f_fail_21((*(P358)rt_nil_check(F->d_213)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_705)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_213)).name))); b_; }));
}
F->p_705 = (*(P358)rt_nil_check(F->p_705)).next;
}
f_close_scope_140();
f_define_138(F->y_702, (*(P358)rt_nil_check(F->d_213)).line);
ret_:
  return;
}

static void f_gen_expose_216(P358 d_215) {
  struct f_gen_expose_216fr *F = rt_alloc(sizeof *F);
F->d_215 = d_215;
F->y_709 = NULL;
F->y_709 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_215)).name)));
F->m_710 = NULL;
F->p_711 = NULL;
F->p_711 = (*(P358)rt_nil_check(F->d_215)).a;
if (((F->y_709 == NULL) || ((*(P368)rt_nil_check(F->y_709)).kind != ((rt_int)8LL)))) {
f_fail_21((*(P358)rt_nil_check(F->d_215)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_215)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P358)rt_nil_check(F->d_215)).ival == ((rt_int)1LL))) {
F->m_710 = (*(P368)rt_nil_check(F->y_709)).members;
while ((F->m_710 != NULL)) {
f_define_138(f_copy_sym_212(F->m_710), (*(P358)rt_nil_check(F->d_215)).line);
F->m_710 = (*(P368)rt_nil_check(F->m_710)).mnext;
}
goto ret_;
}
while ((F->p_711 != NULL)) {
F->found_712 = 0;
F->m_710 = (*(P368)rt_nil_check(F->y_709)).members;
while ((F->m_710 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P368)rt_nil_check(F->m_710)).name)), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_711)).name)))) {
F->z_713 = NULL;
F->z_713 = f_copy_sym_212(F->m_710);
if (((*(P358)rt_nil_check(F->p_711)).ival == ((rt_int)1LL))) {
(*(P368)rt_nil_check(F->z_713)).ro_flag = 1;
}
f_define_138(F->z_713, (*(P358)rt_nil_check(F->d_215)).line);
F->found_712 = 1;
}
F->m_710 = (*(P368)rt_nil_check(F->m_710)).mnext;
}
if ((!F->found_712)) {
f_fail_21((*(P358)rt_nil_check(F->d_215)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_711)).name)), rt_str(" is not exported by ", 20)), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_215)).name))); b_; }));
}
F->p_711 = (*(P358)rt_nil_check(F->p_711)).next;
}
ret_:
  return;
}

static void f_finish_ptr_218(P362 t_217) {
  struct f_finish_ptr_218fr *F = rt_alloc(sizeof *F);
F->t_217 = t_217;
F->d_714 = NULL;
F->d_714 = (*(P362)rt_nil_check(F->t_217)).decl;
F->p_715 = NULL;
F->c_716 = NULL;
F->dummy_717 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_717, rt_str(" ", 1));
if (((*(P362)rt_nil_check(F->t_217)).target != NULL)) {
goto ret_;
}
f_open_scope_139();
F->p_715 = (*(P358)rt_nil_check(F->d_714)).b;
while ((F->p_715 != NULL)) {
F->y_718 = NULL;
F->y_718 = f_new_sym_143(((rt_int)2LL), (*(P358)rt_nil_check(F->p_715)).name);
(*(P368)rt_nil_check(F->y_718)).t = g_ty_int_409;
(*(P368)rt_nil_check(F->y_718)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_138(F->y_718, (*(P358)rt_nil_check(F->d_714)).line);
F->p_715 = (*(P358)rt_nil_check(F->p_715)).next;
}
(*(P362)rt_nil_check(F->t_217)).target = f_resolve_subtype_171((*(P358)rt_nil_check(F->d_714)).a, &F->c_716);
f_close_scope_140();
(*rt_str_at(&F->dummy_717, ((rt_int)1LL))) = rt_str_get(f_ctype_160(F->t_217), ((rt_int)1LL));
(*rt_str_at(&F->dummy_717, ((rt_int)1LL))) = rt_str_get(f_ctype_160((*(P362)rt_nil_check(F->t_217)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_220(P358 d_219) {
  struct f_declare_subprogram_220fr *F = rt_alloc(sizeof *F);
F->d_219 = d_219;
F->y_719 = NULL;
F->p_720 = NULL;
F->p_720 = (*(P358)rt_nil_check(F->d_219)).a;
F->tail_721 = NULL;
if (((*(P358)rt_nil_check(F->d_219)).kind == ((rt_int)46LL))) {
F->y_719 = f_new_sym_143(((rt_int)3LL), (*(P358)rt_nil_check(F->d_219)).name);
} else if (((*(P358)rt_nil_check(F->d_219)).kind == ((rt_int)50LL))) {
F->y_719 = f_new_sym_143(((rt_int)9LL), (*(P358)rt_nil_check(F->d_219)).name);
} else {
F->y_719 = f_new_sym_143(((rt_int)4LL), (*(P358)rt_nil_check(F->d_219)).name);
}
while ((F->p_720 != NULL)) {
F->pm_722 = NULL;
{ R367 *cell723 = rt_alloc(sizeof(R367));
(*cell723).name = NULL;
(*cell723).t = NULL;
(*cell723).c = NULL;
(*cell723).cfield = NULL;
(*cell723).next = NULL;
F->pm_722 = cell723;
}
(*(P366)rt_nil_check(F->pm_722)).name = (*(P358)rt_nil_check(F->p_720)).name;
(*(P366)rt_nil_check(F->pm_722)).mode = (*(P358)rt_nil_check(F->p_720)).ival;
(*(P366)rt_nil_check(F->pm_722)).t = f_resolve_subtype_171((*(P358)rt_nil_check(F->p_720)).a, &(*(P366)rt_nil_check(F->pm_722)).c);
(*(P366)rt_nil_check(F->pm_722)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_720)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_721 == NULL)) {
(*(P368)rt_nil_check(F->y_719)).params = F->pm_722;
} else {
(*(P366)rt_nil_check(F->tail_721)).next = F->pm_722;
}
F->tail_721 = F->pm_722;
F->p_720 = (*(P358)rt_nil_check(F->p_720)).next;
}
(*(P368)rt_nil_check(F->y_719)).result = g_ty_void_414;
if (((*(P358)rt_nil_check(F->d_219)).b != NULL)) {
F->rc_724 = NULL;
(*(P368)rt_nil_check(F->y_719)).result = f_resolve_subtype_171((*(P358)rt_nil_check(F->d_219)).b, &F->rc_724);
}
(*(P368)rt_nil_check(F->y_719)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_288(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_219)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P368)rt_nil_check(F->y_719)).decl = F->d_219;
(*(P368)rt_nil_check(F->y_719)).level = g_cur_level_399;
if (((*(P358)rt_nil_check(F->d_219)).kind == ((rt_int)50LL))) {
f_put_25(g_out_globals_392, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_719)).cname))), rt_str("decl;", 5)); b_; }));
}
f_define_138(F->y_719, (*(P358)rt_nil_check(F->d_219)).line);
ret_:
  return;
}

static void f_element_222(P358 e_221) {
  struct f_element_222fr *F = rt_alloc(sizeof *F);
F->e_221 = e_221;
F->k_725 = (*(P358)rt_nil_check(F->e_221)).kind;
if ((((F->k_725 == ((rt_int)45LL)) || (F->k_725 == ((rt_int)46LL))) || (F->k_725 == ((rt_int)50LL)))) {
f_subprogram_234(F->e_221);
} else if ((((((F->k_725 == ((rt_int)49LL)) || (F->k_725 == ((rt_int)42LL))) || (F->k_725 == ((rt_int)43LL))) || (F->k_725 == ((rt_int)47LL))) || (F->k_725 == ((rt_int)48LL)))) {
goto ret_;
} else if ((F->k_725 == ((rt_int)44LL))) {
f_finish_ptr_218((*(P368)rt_nil_check(f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_221)).name))))).t);
} else if ((F->k_725 == ((rt_int)40LL))) {
f_var_decl_230(F->e_221);
} else if (((F->k_725 == ((rt_int)41LL)) && ((*(P358)rt_nil_check(F->e_221)).flag == ((rt_int)0LL)))) {
f_const_decl_232(F->e_221);
} else if ((F->k_725 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_725 == ((rt_int)33LL))) {
F->t_726 = NULL;
F->c_727 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_221)).a, g_ty_bool_410, &F->t_726));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_727), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_245(F->e_221);
}
ret_:
  return;
}

static rstr f_storage_225(rstr *name_223, P362 t_224) {
  struct f_storage_225fr *F = rt_alloc(sizeof *F);
F->name_223 = name_223;
F->t_224 = t_224;
if ((!g_in_func_398)) {
F->g_728 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_223))), rt_str("_", 1)); b_; })));
f_put_25(g_out_globals_392, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_160(F->t_224)), rt_str(" ", 1)), F->g_728), rt_str(";", 1)); b_; }));
g_st_field_401 = f_mk_3(&F->g_728);
F->result_ = F->g_728;
goto ret_;
}
{
F->f_729 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_223)), rt_str("_", 1)); b_; })));
f_put_25(g_fields_buf_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_160(F->t_224)), rt_str(" ", 1)), F->f_729), rt_str(";", 1)); b_; }));
g_st_field_401 = f_mk_3(&F->f_729);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_729);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_228(P368 y_226, rstr *access_227) {
  struct f_bind_228fr *F = rt_alloc(sizeof *F);
F->y_226 = y_226;
F->access_227 = access_227;
if (g_in_func_398) {
(*(P368)rt_nil_check(F->y_226)).level = g_cur_level_399;
(*(P368)rt_nil_check(F->y_226)).access = g_st_field_401;
} else {
(*(P368)rt_nil_check(F->y_226)).level = ((rt_int)0LL);
(*(P368)rt_nil_check(F->y_226)).access = f_mk_3(&(*F->access_227));
}
ret_:
  return;
}

static void f_var_decl_230(P358 d_229) {
  struct f_var_decl_230fr *F = rt_alloc(sizeof *F);
F->d_229 = d_229;
F->c_730 = NULL;
F->t_731 = NULL;
F->t_731 = f_resolve_subtype_171((*(P358)rt_nil_check(F->d_229)).a, &F->c_730);
F->y_732 = NULL;
F->y_732 = f_new_sym_143(((rt_int)1LL), (*(P358)rt_nil_check(F->d_229)).name);
F->access_733 = rt_str_copy(f_storage_225(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_229)).name)), F->t_731));
f_init_storage_175(&F->access_733, F->t_731, F->c_730);
if (((*(P358)rt_nil_check(F->d_229)).b != NULL)) {
F->vt_734 = NULL;
F->v_735 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->d_229)).b, F->t_731, &F->vt_734));
f_check_type_158(F->vt_734, F->t_731, (*(P358)rt_nil_check(F->d_229)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_185(&F->access_733, F->t_731, &F->v_735, F->c_730); b_; }));
}
(*(P368)rt_nil_check(F->y_732)).t = F->t_731;
(*(P368)rt_nil_check(F->y_732)).c = F->c_730;
f_bind_228(F->y_732, &F->access_733);
f_define_138(F->y_732, (*(P358)rt_nil_check(F->d_229)).line);
ret_:
  return;
}

static void f_const_decl_232(P358 d_231) {
  struct f_const_decl_232fr *F = rt_alloc(sizeof *F);
F->d_231 = d_231;
F->c_736 = NULL;
F->c_736 = f_new_cons_146();
F->t_737 = NULL;
F->vt_738 = NULL;
F->y_739 = NULL;
F->y_739 = f_new_sym_143(((rt_int)2LL), (*(P358)rt_nil_check(F->d_231)).name);
if (((*(P358)rt_nil_check(F->d_231)).a != NULL)) {
F->t_737 = f_resolve_subtype_171((*(P358)rt_nil_check(F->d_231)).a, &F->c_736);
}
{
F->v_741 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->d_231)).b, F->t_737, &F->vt_738));
if ((F->t_737 != NULL)) {
f_check_type_158(F->vt_738, F->t_737, (*(P358)rt_nil_check(F->d_231)).line);
} else {
F->t_737 = F->vt_738;
}
if (((*(P362)rt_nil_check(F->t_737)).kind == ((rt_int)1LL))) {
(*(P368)rt_nil_check(F->y_739)).mvalue = f_manifest_178((*(P358)rt_nil_check(F->d_231)).b, &F->ok_740);
(*(P368)rt_nil_check(F->y_739)).hasmv = F->ok_740;
}
{
F->access_742 = rt_str_copy(f_storage_225(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_231)).name)), F->t_737));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_742, rt_str(" = ", 3)), f_copy_code_188(F->t_737, &F->v_741)), rt_str(";", 1)); b_; }));
f_bind_228(F->y_739, &F->access_742);
}
}
(*(P368)rt_nil_check(F->y_739)).t = F->t_737;
(*(P368)rt_nil_check(F->y_739)).c = F->c_736;
(*(P368)rt_nil_check(F->y_739)).ro_flag = 1;
f_define_138(F->y_739, (*(P358)rt_nil_check(F->d_231)).line);
ret_:
  return;
}

static void f_subprogram_234(P358 d_233) {
  struct f_subprogram_234fr *F = rt_alloc(sizeof *F);
F->d_233 = d_233;
F->y_743 = NULL;
F->y_743 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->d_233)).name)));
F->saved_code_744 = NULL;
F->saved_code_744 = g_code_396;
F->saved_fields_745 = NULL;
F->saved_fields_745 = g_fields_buf_397;
F->saved_in_746 = g_in_func_398;
F->saved_sym_747 = NULL;
F->saved_sym_747 = g_func_sym_403;
F->saved_exits_748 = NULL;
F->saved_exits_748 = g_exits_404;
F->saved_frames_749 = g_frames_405;
F->args_750 = NULL;
F->args_750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_751 = NULL;
F->pm_751 = (*(P368)rt_nil_check(F->y_743)).params;
F->saved_handlers_752 = NULL;
F->saved_handlers_752 = g_handlers_406;
F->saved_cleanups_753 = NULL;
F->saved_cleanups_753 = g_cleanups_407;
F->ctx_754 = NULL;
F->head_755 = NULL;
F->frame_756 = NULL;
F->frame_756 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_743)).cname)), rt_str("fr", 2)); b_; }));
F->parent_757 = NULL;
if (g_in_func_398) {
F->parent_757 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P368)rt_nil_check(g_func_sym_403)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_396 = f_new_buffer_22();
g_fields_buf_397 = f_new_buffer_22();
g_in_func_398 = 1;
g_func_sym_403 = F->y_743;
g_exits_404 = NULL;
g_frames_405 = ((rt_int)0LL);
g_handlers_406 = NULL;
g_cleanups_407 = NULL;
g_cur_level_399 = rt_add(g_cur_level_399, ((rt_int)1LL));
f_open_scope_139();
{ R379 *cell758 = rt_alloc(sizeof(R379));
(*cell758).imps = NULL;
(*cell758).next = NULL;
F->ctx_754 = cell758;
}
(*(P378)rt_nil_check(F->ctx_754)).depth = g_depth_385;
(*(P378)rt_nil_check(F->ctx_754)).imps = (*(P358)rt_nil_check(F->d_233)).d;
(*(P378)rt_nil_check(F->ctx_754)).all_imp = ((*(P358)rt_nil_check(F->d_233)).flag >= ((rt_int)2LL));
(*(P378)rt_nil_check(F->ctx_754)).next = g_fctx_400;
g_fctx_400 = F->ctx_754;
if ((F->parent_757 != NULL)) {
f_put_25(g_fields_buf_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P353)rt_nil_check(F->parent_757))), rt_str(" *up;", 5)); b_; }));
if (((*(P368)rt_nil_check(F->y_743)).kind != ((rt_int)9LL))) {
F->args_750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P353)rt_nil_check(F->parent_757))), rt_str(" *up_", 5)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_751 != NULL)) {
F->ct_759 = rt_str_copy(f_ctype_160((*(P366)rt_nil_check(F->pm_751)).t));
F->f_760 = rt_str_copy((*(P353)rt_nil_check((*(P366)rt_nil_check(F->pm_751)).cfield)));
F->p_761 = NULL;
if ((((*(P353)rt_nil_check(F->args_750))).len > ((rt_int)0LL))) {
F->args_750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->args_750)), rt_str(", ", 2)); b_; }));
}
if (((*(P366)rt_nil_check(F->pm_751)).mode == ((rt_int)1LL))) {
F->p_761 = f_new_sym_143(((rt_int)2LL), (*(P366)rt_nil_check(F->pm_751)).name);
f_put_25(g_fields_buf_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_759), rt_str(" ", 1)), F->f_760), rt_str(";", 1)); b_; }));
F->args_750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->args_750)), F->ct_759), rt_str(" ", 1)), F->f_760); b_; }));
(*(P368)rt_nil_check(F->p_761)).access = f_mk_3(&F->f_760);
if (((*(P368)rt_nil_check(F->y_743)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_760), rt_str(" = ", 3)), f_copy_code_188((*(P366)rt_nil_check(F->pm_751)).t, &F->f_760)), rt_str(";", 1)); b_; }));
}
} else {
F->p_761 = f_new_sym_143(((rt_int)1LL), (*(P366)rt_nil_check(F->pm_751)).name);
f_put_25(g_fields_buf_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_759), rt_str(" *", 2)), F->f_760), rt_str(";", 1)); b_; }));
F->args_750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->args_750)), F->ct_759), rt_str(" *", 2)), F->f_760); b_; }));
(*(P368)rt_nil_check(F->p_761)).access = f_mk_3(&F->f_760);
(*(P368)rt_nil_check(F->p_761)).byref = 1;
if (((*(P368)rt_nil_check(F->y_743)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_760), rt_str(" = ", 3)), F->f_760), rt_str(";", 1)); b_; }));
}
}
(*(P368)rt_nil_check(F->p_761)).t = (*(P366)rt_nil_check(F->pm_751)).t;
(*(P368)rt_nil_check(F->p_761)).c = (*(P366)rt_nil_check(F->pm_751)).c;
(*(P368)rt_nil_check(F->p_761)).level = g_cur_level_399;
(*(P368)rt_nil_check(F->p_761)).ro_flag = (((*(P366)rt_nil_check(F->pm_751)).mode == ((rt_int)1LL)) || ((*(P366)rt_nil_check(F->pm_751)).mode == ((rt_int)4LL)));
f_define_138(F->p_761, (*(P358)rt_nil_check(F->d_233)).line);
F->pm_751 = (*(P366)rt_nil_check(F->pm_751)).next;
}
if (((*(P362)rt_nil_check((*(P368)rt_nil_check(F->y_743)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_fields_buf_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_160((*(P368)rt_nil_check(F->y_743)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_204((*(P358)rt_nil_check(F->d_233)).c);
f_body_elements_236((*(P358)rt_nil_check(F->d_233)).c);
f_close_scope_140();
g_fctx_400 = (*(P378)rt_nil_check(g_fctx_400)).next;
g_cur_level_399 = rt_sub(g_cur_level_399, ((rt_int)1LL));
if (((((*(P353)rt_nil_check(F->args_750))).len == ((rt_int)0LL)) || ((*(P368)rt_nil_check(F->y_743)).kind == ((rt_int)9LL)))) {
F->args_750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P368)rt_nil_check(F->y_743)).kind == ((rt_int)9LL))) {
F->args_750 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_755 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_160((*(P368)rt_nil_check(F->y_743)).result)), rt_str(" ", 1)), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_743)).cname))), rt_str("(", 1)), (*(P353)rt_nil_check(F->args_750))), rt_str(")", 1)); b_; }));
f_put_25(g_out_protos_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->head_755)), rt_str(";", 1)); b_; }));
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->head_755)), rt_str(" {", 2)); b_; }));
f_put_25(g_out_frames_402, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P353)rt_nil_check(F->frame_756))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_32(g_out_frames_402, g_fields_buf_397);
f_put_25(g_out_frames_402, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P368)rt_nil_check(F->y_743)).kind == ((rt_int)9LL))) {
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P353)rt_nil_check(F->frame_756))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P353)rt_nil_check(F->frame_756))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_32(g_out_funcs_393, g_code_396);
if (((*(P362)rt_nil_check((*(P368)rt_nil_check(F->y_743)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_16()), rt_str("function ended without RETURN", 29)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(g_out_funcs_393, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_396 = F->saved_code_744;
g_fields_buf_397 = F->saved_fields_745;
g_in_func_398 = F->saved_in_746;
g_func_sym_403 = F->saved_sym_747;
g_exits_404 = F->saved_exits_748;
g_frames_405 = F->saved_frames_749;
g_handlers_406 = F->saved_handlers_752;
g_cleanups_407 = F->saved_cleanups_753;
ret_:
  return;
}

static void f_body_elements_236(P358 elems_235) {
  struct f_body_elements_236fr *F = rt_alloc(sizeof *F);
F->elems_235 = elems_235;
F->e_762 = NULL;
F->e_762 = F->elems_235;
while ((F->e_762 != NULL)) {
f_element_222(F->e_762);
F->e_762 = (*(P358)rt_nil_check(F->e_762)).next;
}
F->e_762 = F->elems_235;
while ((F->e_762 != NULL)) {
if (((*(P358)rt_nil_check(F->e_762)).kind == ((rt_int)50LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_await_decl(&", 15), (*(P353)rt_nil_check((*(P368)rt_nil_check(f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_762)).name))))).cname))), rt_str("decl);", 6)); b_; }));
}
F->e_762 = (*(P358)rt_nil_check(F->e_762)).next;
}
ret_:
  return;
}

static void f_gen_body_238(P358 elems_237) {
  struct f_gen_body_238fr *F = rt_alloc(sizeof *F);
F->elems_237 = elems_237;
f_open_scope_139();
f_declare_body_204(F->elems_237);
f_body_elements_236(F->elems_237);
f_close_scope_140();
ret_:
  return;
}

static void f_pop_frames_240(rt_int upto_239) {
  struct f_pop_frames_240fr *F = rt_alloc(sizeof *F);
F->upto_239 = upto_239;
F->i_763 = g_frames_405;
F->c_764 = NULL;
F->c_764 = g_cleanups_407;
while ((F->i_763 > F->upto_239)) {
f_emit_27(&(*(P353)rt_nil_check((*(P370)rt_nil_check(F->c_764)).s)));
F->c_764 = (*(P370)rt_nil_check(F->c_764)).next;
F->i_763 = rt_sub(F->i_763, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_242(rstr *s_241) {
  struct f_push_cleanup_242fr *F = rt_alloc(sizeof *F);
F->s_241 = s_241;
F->c_765 = NULL;
{ R371 *cell766 = rt_alloc(sizeof(R371));
(*cell766).s = NULL;
(*cell766).next = NULL;
F->c_765 = cell766;
}
(*(P370)rt_nil_check(F->c_765)).s = f_mk_3(&(*F->s_241));
(*(P370)rt_nil_check(F->c_765)).next = g_cleanups_407;
g_cleanups_407 = F->c_765;
g_frames_405 = rt_add(g_frames_405, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_243(void) {
  struct f_pop_cleanup_243fr *F = rt_alloc(sizeof *F);
g_cleanups_407 = (*(P370)rt_nil_check(g_cleanups_407)).next;
g_frames_405 = rt_sub(g_frames_405, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_245(P358 s_244) {
  struct f_gen_statement_245fr *F = rt_alloc(sizeof *F);
F->s_244 = s_244;
F->label_767 = NULL;
if (((*(P358)rt_nil_check(F->s_244)).tag != NULL)) {
F->x_768 = NULL;
{ R377 *cell769 = rt_alloc(sizeof(R377));
(*cell769).match = NULL;
(*cell769).label = NULL;
(*cell769).next = NULL;
F->x_768 = cell769;
}
F->label_767 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P376)rt_nil_check(F->x_768)).match = (*(P358)rt_nil_check(F->s_244)).tag;
(*(P376)rt_nil_check(F->x_768)).label = F->label_767;
(*(P376)rt_nil_check(F->x_768)).depth = g_frames_405;
(*(P376)rt_nil_check(F->x_768)).next = g_exits_404;
g_exits_404 = F->x_768;
}
{ rt_int sel770 = (*(P358)rt_nil_check(F->s_244)).kind;
if (0 || (sel770 == ((rt_int)20LL))) {
f_st_assign_247(F->s_244);
} else if (0 || (sel770 == ((rt_int)21LL))) {
f_st_call_249(F->s_244);
} else if (0 || (sel770 == ((rt_int)22LL))) {
f_st_if_251(F->s_244);
} else if (0 || (sel770 == ((rt_int)23LL))) {
f_st_case_253(F->s_244);
} else if (0 || (sel770 == ((rt_int)24LL))) {
f_st_repeat_255(F->s_244);
} else if (0 || (sel770 == ((rt_int)25LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_238((*(P358)rt_nil_check(F->s_244)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel770 == ((rt_int)27LL))) {
f_st_exit_257(F->s_244);
} else if (0 || (sel770 == ((rt_int)28LL))) {
f_st_return_259(F->s_244);
} else if (0 || (sel770 == ((rt_int)30LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_262(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->s_244)).name)), (*(P358)rt_nil_check(F->s_244)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel770 == ((rt_int)31LL))) {
if ((g_handlers_406 == NULL)) {
f_fail_21((*(P358)rt_nil_check(F->s_244)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P353)rt_nil_check((*(P370)rt_nil_check(g_handlers_406)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel770 == ((rt_int)26LL))) {
f_st_guard_264(F->s_244);
} else if (0 || (sel770 == ((rt_int)32LL))) {
f_st_alloc_266(F->s_244);
} else if (0 || (sel770 == ((rt_int)34LL))) {
f_st_create_270(F->s_244);
} else if (0 || (sel770 == ((rt_int)35LL))) {
f_st_wait_276(F->s_244);
} else if (0 || (sel770 == ((rt_int)36LL))) {
f_st_region_278(F->s_244);
} else {
f_fail_21((*(P358)rt_nil_check(F->s_244)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P358)rt_nil_check(F->s_244)).tag != NULL)) {
g_exits_404 = (*(P376)rt_nil_check(g_exits_404)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->label_767)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_247(P358 s_246) {
  struct f_st_assign_247fr *F = rt_alloc(sizeof *F);
F->s_246 = s_246;
F->lv_771 = NULL;
F->t_772 = NULL;
F->vt_773 = NULL;
F->c_774 = NULL;
f_lvalue_299((*(P358)rt_nil_check(F->s_246)).a, &F->lv_771, &F->t_772, &F->c_774, &F->ro_775);
if (F->ro_775) {
f_fail_21((*(P358)rt_nil_check(F->s_246)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
{
F->v_776 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->s_246)).b, F->t_772, &F->vt_773));
f_check_type_158(F->vt_773, F->t_772, (*(P358)rt_nil_check(F->s_246)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_185(&(*(P353)rt_nil_check(F->lv_771)), F->t_772, &F->v_776, F->c_774); b_; }));
}
ret_:
  return;
}

static void f_st_call_249(P358 s_248) {
  struct f_st_call_249fr *F = rt_alloc(sizeof *F);
F->s_248 = s_248;
F->c_777 = NULL;
F->c_777 = (*(P358)rt_nil_check(F->s_248)).a;
F->t_778 = NULL;
if ((((*(P358)rt_nil_check(F->c_777)).kind == ((rt_int)7LL)) || ((*(P358)rt_nil_check(F->c_777)).kind == ((rt_int)12LL)))) {
F->x_779 = NULL;
F->x_779 = f_nn_46(((rt_int)10LL), (*(P358)rt_nil_check(F->c_777)).line);
(*(P358)rt_nil_check(F->x_779)).a = F->c_777;
F->c_777 = F->x_779;
}
if (((*(P358)rt_nil_check(F->c_777)).kind != ((rt_int)10LL))) {
f_fail_21((*(P358)rt_nil_check(F->s_248)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_342(F->c_777, 1, &F->t_778), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_251(P358 s_250) {
  struct f_st_if_251fr *F = rt_alloc(sizeof *F);
F->s_250 = s_250;
F->a_780 = NULL;
F->a_780 = (*(P358)rt_nil_check(F->s_250)).a;
F->first_781 = 1;
F->t_782 = NULL;
while ((F->a_780 != NULL)) {
F->c_783 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->a_780)).a, g_ty_bool_410, &F->t_782));
f_check_type_158(F->t_782, g_ty_bool_410, (*(P358)rt_nil_check(F->s_250)).line);
if (F->first_781) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_783), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_783), rt_str(") {", 3)); b_; }));
}
F->first_781 = 0;
f_gen_body_238((*(P358)rt_nil_check(F->a_780)).b);
F->a_780 = (*(P358)rt_nil_check(F->a_780)).next;
}
if (((*(P358)rt_nil_check(F->s_250)).flag == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_238((*(P358)rt_nil_check(F->s_250)).b);
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_253(P358 s_252) {
  struct f_st_case_253fr *F = rt_alloc(sizeof *F);
F->s_252 = s_252;
F->st_784 = NULL;
F->vt_785 = NULL;
F->first_786 = 1;
F->a_787 = NULL;
F->a_787 = (*(P358)rt_nil_check(F->s_252)).b;
F->sel_788 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->s_252)).a, NULL, &F->st_784));
F->tmp_789 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_160(F->st_784)), rt_str(" ", 1)), F->tmp_789), rt_str(" = ", 3)), F->sel_788), rt_str(";", 1)); b_; }));
while ((F->a_787 != NULL)) {
F->lab_790 = NULL;
F->lab_790 = (*(P358)rt_nil_check(F->a_787)).a;
F->conds_791 = NULL;
F->conds_791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_790 != NULL)) {
if (((*(P358)rt_nil_check(F->lab_790)).b == NULL)) {
F->v_792 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->lab_790)).a, F->st_784, &F->vt_785));
f_check_type_158(F->vt_785, F->st_784, (*(P358)rt_nil_check(F->s_252)).line);
F->conds_791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->conds_791)), rt_str(" || ", 4)), f_eq_code_192(F->st_784, &F->tmp_789, &F->v_792)); b_; }));
} else {
F->lo_793 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->lab_790)).a, F->st_784, &F->vt_785));
F->hi_794 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->lab_790)).b, F->st_784, &F->vt_785));
F->conds_791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->conds_791)), rt_str(" || (", 5)), F->tmp_789), rt_str(" >= ", 4)), F->lo_793), rt_str(" && ", 4)), F->tmp_789), rt_str(" <= ", 4)), F->hi_794), rt_str(")", 1)); b_; }));
}
F->lab_790 = (*(P358)rt_nil_check(F->lab_790)).next;
}
if (F->first_786) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P353)rt_nil_check(F->conds_791))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P353)rt_nil_check(F->conds_791))), rt_str(") {", 3)); b_; }));
}
F->first_786 = 0;
f_gen_body_238((*(P358)rt_nil_check(F->a_787)).b);
F->a_787 = (*(P358)rt_nil_check(F->a_787)).next;
}
if (F->first_786) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P358)rt_nil_check(F->s_252)).flag == ((rt_int)1LL))) {
f_gen_body_238((*(P358)rt_nil_check(F->s_252)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_255(P358 s_254) {
  struct f_st_repeat_255fr *F = rt_alloc(sizeof *F);
F->s_254 = s_254;
F->t_795 = NULL;
F->c_796 = NULL;
if (((*(P358)rt_nil_check(F->s_254)).flag == ((rt_int)0LL))) {
F->cond_797 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->s_254)).a, g_ty_bool_410, &F->t_795));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_797), rt_str(") {", 3)); b_; }));
f_gen_body_238((*(P358)rt_nil_check(F->s_254)).b);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_795 = f_resolve_subtype_171((*(P358)rt_nil_check(F->s_254)).a, &F->c_796);
if ((((*(P362)rt_nil_check(F->t_795)).kind == ((rt_int)4LL)) && ((*(P360)rt_nil_check(F->c_796)).lo == NULL))) {
(*(P360)rt_nil_check(F->c_796)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P360)rt_nil_check(F->c_796)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P362)rt_nil_check(F->t_795)).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P360)rt_nil_check(F->c_796)).lo == NULL)) {
f_fail_21((*(P358)rt_nil_check(F->s_254)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_798 = rt_str_copy(f_storage_225(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->s_254)).name)), F->t_795));
F->lov_799 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_800 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_801 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_802 = NULL;
F->y_802 = f_new_sym_143(((rt_int)2LL), (*(P358)rt_nil_check(F->s_254)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_799), rt_str(" = ", 3)), (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_796)).lo))), rt_str(", ", 2)), F->hiv_800), rt_str(" = ", 3)), (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_796)).hi))), rt_str(";", 1)); b_; }));
if (((*(P358)rt_nil_check(F->s_254)).ival == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_801), rt_str(" = ", 3)), F->hiv_800), rt_str("; ", 2)), F->it_801), rt_str(" >= ", 4)), F->lov_799), rt_str("; ", 2)), F->it_801), rt_str("--) {", 5)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_801), rt_str(" = ", 3)), F->lov_799), rt_str("; ", 2)), F->it_801), rt_str(" <= ", 4)), F->hiv_800), rt_str("; ", 2)), F->it_801), rt_str("++) {", 5)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_798, rt_str(" = ", 3)), F->it_801), rt_str(";", 1)); b_; }));
f_open_scope_139();
(*(P368)rt_nil_check(F->y_802)).t = F->t_795;
(*(P368)rt_nil_check(F->y_802)).c = F->c_796;
f_bind_228(F->y_802, &F->access_798);
(*(P368)rt_nil_check(F->y_802)).ro_flag = 1;
f_define_138(F->y_802, (*(P358)rt_nil_check(F->s_254)).line);
f_gen_body_238((*(P358)rt_nil_check(F->s_254)).b);
f_close_scope_140();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_257(P358 s_256) {
  struct f_st_exit_257fr *F = rt_alloc(sizeof *F);
F->s_256 = s_256;
F->x_803 = NULL;
F->x_803 = g_exits_404;
while ((F->x_803 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P376)rt_nil_check(F->x_803)).match)), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->s_256)).name)))) {
f_pop_frames_240((*(P376)rt_nil_check(F->x_803)).depth);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P353)rt_nil_check((*(P376)rt_nil_check(F->x_803)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_803 = (*(P376)rt_nil_check(F->x_803)).next;
}
f_fail_21((*(P358)rt_nil_check(F->s_256)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->s_256)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_259(P358 s_258) {
  struct f_st_return_259fr *F = rt_alloc(sizeof *F);
F->s_258 = s_258;
F->vt_804 = NULL;
if ((!g_in_func_398)) {
f_pop_frames_240(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P362)rt_nil_check((*(P368)rt_nil_check(g_func_sym_403)).result)).kind == ((rt_int)9LL))) {
if (((*(P358)rt_nil_check(F->s_258)).a != NULL)) {
f_fail_21((*(P358)rt_nil_check(F->s_258)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_240(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P358)rt_nil_check(F->s_258)).a == NULL)) {
f_fail_21((*(P358)rt_nil_check(F->s_258)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_805 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->s_258)).a, (*(P368)rt_nil_check(g_func_sym_403)).result, &F->vt_804));
f_check_type_158(F->vt_804, (*(P368)rt_nil_check(g_func_sym_403)).result, (*(P358)rt_nil_check(F->s_258)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_805), rt_str(";", 1)); b_; }));
f_pop_frames_240(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_262(rstr *name_260, rt_int line_261) {
  struct f_exc_id_262fr *F = rt_alloc(sizeof *F);
F->name_260 = name_260;
F->line_261 = line_261;
F->y_806 = NULL;
F->y_806 = f_lookup_135(&(*F->name_260));
if (((F->y_806 != NULL) && ((*(P368)rt_nil_check(F->y_806)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_806)).cname));
goto ret_;
}
if (((((*F->name_260)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_260), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_16()), (*F->name_260)), f_q_16()), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_261, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_260), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_264(P358 s_263) {
  struct f_st_guard_264fr *F = rt_alloc(sizeof *F);
F->s_263 = s_263;
F->h_807 = NULL;
F->h_807 = (*(P358)rt_nil_check(F->s_263)).b;
F->first_808 = 1;
F->hv_809 = NULL;
{
F->f_810 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_811 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_242(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_810), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_810), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_810), rt_str(")) {", 4)); b_; }));
f_gen_body_238((*(P358)rt_nil_check(F->s_263)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_810), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_243();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_810), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_811), rt_str(" = rt_xcur;", 11)); b_; }));
{ R371 *cell812 = rt_alloc(sizeof(R371));
(*cell812).s = NULL;
(*cell812).next = NULL;
F->hv_809 = cell812;
}
(*(P370)rt_nil_check(F->hv_809)).s = f_mk_3(&F->x_811);
(*(P370)rt_nil_check(F->hv_809)).next = g_handlers_406;
g_handlers_406 = F->hv_809;
while ((F->h_807 != NULL)) {
F->n_813 = NULL;
F->n_813 = (*(P358)rt_nil_check(F->h_807)).a;
F->conds_814 = NULL;
F->conds_814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_813 != NULL)) {
F->conds_814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->conds_814)), rt_str(" || ", 4)), F->x_811), rt_str(" == ", 4)), f_exc_id_262(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->n_813)).name)), (*(P358)rt_nil_check(F->s_263)).line)); b_; }));
F->n_813 = (*(P358)rt_nil_check(F->n_813)).next;
}
if (F->first_808) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P353)rt_nil_check(F->conds_814))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P353)rt_nil_check(F->conds_814))), rt_str(") {", 3)); b_; }));
}
F->first_808 = 0;
f_gen_body_238((*(P358)rt_nil_check(F->h_807)).b);
F->h_807 = (*(P358)rt_nil_check(F->h_807)).next;
}
if (F->first_808) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P358)rt_nil_check(F->s_263)).flag == ((rt_int)1LL))) {
f_gen_body_238((*(P358)rt_nil_check(F->s_263)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_811), rt_str(");", 2)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_406 = (*(P370)rt_nil_check(g_handlers_406)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_266(P358 s_265) {
  struct f_st_alloc_266fr *F = rt_alloc(sizeof *F);
F->s_265 = s_265;
F->lv_815 = NULL;
F->t_816 = NULL;
F->target_817 = NULL;
F->vt_818 = NULL;
F->c_819 = NULL;
F->tc_820 = NULL;
F->d_822 = NULL;
F->p_823 = NULL;
F->a_824 = NULL;
f_lvalue_299((*(P358)rt_nil_check(F->s_265)).a, &F->lv_815, &F->t_816, &F->c_819, &F->ro_821);
if (((*(P362)rt_nil_check(F->t_816)).kind != ((rt_int)8LL))) {
f_fail_21((*(P358)rt_nil_check(F->s_265)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_218(F->t_816);
F->d_822 = (*(P362)rt_nil_check(F->t_816)).decl;
F->target_817 = (*(P362)rt_nil_check(F->t_816)).target;
if ((f_list_len_52((*(P358)rt_nil_check(F->s_265)).b) != f_list_len_52((*(P358)rt_nil_check(F->d_822)).b))) {
f_fail_21((*(P358)rt_nil_check(F->s_265)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_52((*(P358)rt_nil_check(F->d_822)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_825 = rt_str_copy(f_ctype_160(F->target_817));
F->cell_826 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_825), rt_str(" *", 2)), F->cell_826), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_825), rt_str("));", 3)); b_; }));
f_open_scope_139();
F->p_823 = (*(P358)rt_nil_check(F->d_822)).b;
F->a_824 = (*(P358)rt_nil_check(F->s_265)).b;
while ((F->p_823 != NULL)) {
F->v_827 = rt_str_copy(f_gexpr_320(F->a_824, g_ty_int_409, &F->vt_818));
F->pv_828 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_829 = NULL;
F->y_829 = f_new_sym_143(((rt_int)2LL), (*(P358)rt_nil_check(F->p_823)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_828), rt_str(" = ", 3)), F->v_827), rt_str(";", 1)); b_; }));
(*(P368)rt_nil_check(F->y_829)).t = g_ty_int_409;
(*(P368)rt_nil_check(F->y_829)).access = f_mk_3(&F->pv_828);
f_define_138(F->y_829, (*(P358)rt_nil_check(F->s_265)).line);
F->p_823 = (*(P358)rt_nil_check(F->p_823)).next;
F->a_824 = (*(P358)rt_nil_check(F->a_824)).next;
}
F->vt_818 = f_resolve_subtype_171((*(P358)rt_nil_check(F->d_822)).a, &F->tc_820);
f_init_storage_175(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_826), rt_str(")", 1)); b_; }), F->target_817, F->tc_820);
f_close_scope_140();
if (((*(P358)rt_nil_check(F->s_265)).c != NULL)) {
F->v_830 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->s_265)).c, F->target_817, &F->vt_818));
f_check_type_158(F->vt_818, F->target_817, (*(P358)rt_nil_check(F->s_265)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_185(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_826), rt_str(")", 1)); b_; }), F->target_817, &F->v_830, F->tc_820); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->lv_815)), rt_str(" = ", 3)), F->cell_826), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_268(P358 e_267) {
  struct f_act_ref_268fr *F = rt_alloc(sizeof *F);
F->e_267 = e_267;
F->lv_831 = NULL;
F->t_832 = NULL;
F->c_833 = NULL;
if (((((*(P358)rt_nil_check(F->e_267)).kind == ((rt_int)7LL)) && rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_267)).name)), rt_str("ME", 2))) && (f_lookup_135(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_299(F->e_267, &F->lv_831, &F->t_832, &F->c_833, &F->ro_834);
if (((*(P362)rt_nil_check(F->t_832)).kind != ((rt_int)14LL))) {
f_fail_21((*(P358)rt_nil_check(F->e_267)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P353)rt_nil_check(F->lv_831)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_270(P358 s_269) {
  struct f_st_create_270fr *F = rt_alloc(sizeof *F);
F->s_269 = s_269;
F->y_835 = NULL;
F->y_835 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->s_269)).name)));
F->pm_836 = NULL;
F->a_837 = NULL;
F->a_837 = (*(P358)rt_nil_check(F->s_269)).b;
F->lv_838 = NULL;
F->lt_839 = NULL;
F->vt_840 = NULL;
F->lc_841 = NULL;
if (((F->y_835 == NULL) || ((*(P368)rt_nil_check(F->y_835)).kind != ((rt_int)9LL)))) {
f_fail_21((*(P358)rt_nil_check(F->s_269)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->s_269)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_836 = (*(P368)rt_nil_check(F->y_835)).params;
{
F->nf_843 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_844 = rt_str_copy(f_act_ref_268((*(P358)rt_nil_check(F->s_269)).a));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_835)).cname))), rt_str("fr *", 4)), F->nf_843), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_843), rt_str(");", 2)); b_; }));
if (((*(P368)rt_nil_check(F->y_835)).level > ((rt_int)0LL))) {
F->link_845 = NULL;
F->link_845 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo847 = ((rt_int)1LL), hi848 = rt_sub(g_cur_level_399, (*(P368)rt_nil_check(F->y_835)).level);
for (rt_int it849 = lo847; it849 <= hi848; it849++) {
F->i_846 = it849;
F->link_845 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->link_845)), rt_str("->up", 4)); b_; }));
}
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_843, rt_str("->up = ", 7)), (*(P353)rt_nil_check(F->link_845))), rt_str(";", 1)); b_; }));
}
while (((F->a_837 != NULL) && (F->pm_836 != NULL))) {
if (((*(P366)rt_nil_check(F->pm_836)).mode == ((rt_int)1LL))) {
F->v_850 = rt_str_copy(f_gexpr_320(F->a_837, (*(P366)rt_nil_check(F->pm_836)).t, &F->vt_840));
f_check_type_158(F->vt_840, (*(P366)rt_nil_check(F->pm_836)).t, (*(P358)rt_nil_check(F->s_269)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_843, rt_str("->", 2)), (*(P353)rt_nil_check((*(P366)rt_nil_check(F->pm_836)).cfield))), rt_str(" = ", 3)), f_copy_code_188((*(P366)rt_nil_check(F->pm_836)).t, &F->v_850)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_299(F->a_837, &F->lv_838, &F->lt_839, &F->lc_841, &F->ro_842);
f_check_type_158(F->lt_839, (*(P366)rt_nil_check(F->pm_836)).t, (*(P358)rt_nil_check(F->s_269)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_843, rt_str("->", 2)), (*(P353)rt_nil_check((*(P366)rt_nil_check(F->pm_836)).cfield))), rt_str(" = &", 4)), (*(P353)rt_nil_check(F->lv_838))), rt_str(";", 1)); b_; }));
}
F->a_837 = (*(P358)rt_nil_check(F->a_837)).next;
F->pm_836 = (*(P366)rt_nil_check(F->pm_836)).next;
}
if (((F->a_837 != NULL) || (F->pm_836 != NULL))) {
f_fail_21((*(P358)rt_nil_check(F->s_269)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->s_269)).name))); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_844), rt_str(", &", 3)), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_835)).cname))), rt_str("decl, ", 6)), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_835)).cname))), rt_str(", ", 2)), F->nf_843), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_274(P358 inv_271, rstr *arr_272, rt_int i_273) {
  struct f_wait_alt_274fr *F = rt_alloc(sizeof *F);
F->inv_271 = inv_271;
F->arr_272 = arr_272;
F->i_273 = i_273;
F->lv_851 = NULL;
F->t_852 = NULL;
F->vt_853 = NULL;
F->c_854 = NULL;
F->fn_856 = NULL;
F->args_857 = NULL;
F->slot_858 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_272), rt_str("[", 1)), f_itos_7(F->i_273)), rt_str("]", 1)));
if ((((*(P358)rt_nil_check(F->inv_271)).kind != ((rt_int)10LL)) || ((*(P358)rt_nil_check((*(P358)rt_nil_check(F->inv_271)).a)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P358)rt_nil_check(F->inv_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_856 = (*(P358)rt_nil_check(F->inv_271)).a;
F->args_857 = (*(P358)rt_nil_check(F->inv_271)).b;
if ((rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_299(F->args_857, &F->lv_851, &F->t_852, &F->c_854, &F->ro_855);
if (((*(P362)rt_nil_check(F->t_852)).kind != ((rt_int)12LL))) {
f_fail_21((*(P358)rt_nil_check(F->inv_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str("RECEIVE", 7))) {
F->dv_859 = NULL;
F->dt_860 = NULL;
f_lvalue_299((*(P358)rt_nil_check(F->args_857)).next, &F->dv_859, &F->dt_860, &F->c_854, &F->ro_855);
f_check_type_158(F->dt_860, (*(P362)rt_nil_check(F->t_852)).elem, (*(P358)rt_nil_check(F->inv_271)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_858, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, &", 32)), (*(P353)rt_nil_check(F->lv_851))), rt_str(", &", 3)), (*(P353)rt_nil_check(F->dv_859))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_861 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_862 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->args_857)).next, (*(P362)rt_nil_check(F->t_852)).elem, &F->vt_853));
f_check_type_158(F->vt_853, (*(P362)rt_nil_check(F->t_852)).elem, (*(P358)rt_nil_check(F->inv_271)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_160((*(P362)rt_nil_check(F->t_852)).elem), rt_str(" ", 1)), F->tmp_861), rt_str(" = ", 3)), F->v_862), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_858, rt_str(" = (rt_alt){RT_ALT_SEND, 1, &", 29)), (*(P353)rt_nil_check(F->lv_851))), rt_str(", &", 3)), F->tmp_861), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_863 = rt_str_copy(f_gexpr_320(F->args_857, g_ty_int_409, &F->vt_853));
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_858, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_863), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_858, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_863), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_858, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_268(F->args_857)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->inv_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_856)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_wait_276(P358 s_275) {
  struct f_st_wait_276fr *F = rt_alloc(sizeof *F);
F->s_275 = s_275;
F->a_864 = NULL;
F->a_864 = (*(P358)rt_nil_check(F->s_275)).a;
F->n_865 = ((rt_int)0LL);
F->first_866 = 1;
F->inits_867 = NULL;
F->inits_867 = f_new_buffer_22();
F->arr_868 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_869 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_864 != NULL)) {
F->n_865 = rt_add(F->n_865, f_list_len_52((*(P358)rt_nil_check(F->a_864)).a));
F->a_864 = (*(P358)rt_nil_check(F->a_864)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_868), rt_str("[", 1)), f_itos_7(F->n_865)), rt_str("];", 2)); b_; }));
F->a_864 = (*(P358)rt_nil_check(F->s_275)).a;
F->n_865 = ((rt_int)0LL);
while ((F->a_864 != NULL)) {
F->inv_870 = NULL;
F->inv_870 = (*(P358)rt_nil_check(F->a_864)).a;
while ((F->inv_870 != NULL)) {
f_put_25(F->inits_867, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_274(F->inv_870, &F->arr_868, F->n_865); b_; }));
F->n_865 = rt_add(F->n_865, ((rt_int)1LL));
F->inv_870 = (*(P358)rt_nil_check(F->inv_870)).next;
}
F->a_864 = (*(P358)rt_nil_check(F->a_864)).next;
}
f_splice_32(g_code_396, F->inits_867);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_869), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_865)), rt_str(", ", 2)), F->arr_868), rt_str(");", 2)); b_; }));
F->a_864 = (*(P358)rt_nil_check(F->s_275)).a;
F->n_865 = ((rt_int)0LL);
while ((F->a_864 != NULL)) {
F->conds_871 = NULL;
F->conds_871 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo873 = ((rt_int)1LL), hi874 = f_list_len_52((*(P358)rt_nil_check(F->a_864)).a);
for (rt_int it875 = lo873; it875 <= hi874; it875++) {
F->i_872 = it875;
F->conds_871 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->conds_871)), rt_str(" || ", 4)), F->w_869), rt_str(" == ", 4)), f_itos_7(F->n_865)); b_; }));
F->n_865 = rt_add(F->n_865, ((rt_int)1LL));
}
}
if (F->first_866) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P353)rt_nil_check(F->conds_871))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P353)rt_nil_check(F->conds_871))), rt_str(") {", 3)); b_; }));
}
F->first_866 = 0;
f_gen_body_238((*(P358)rt_nil_check(F->a_864)).b);
F->a_864 = (*(P358)rt_nil_check(F->a_864)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_278(P358 s_277) {
  struct f_st_region_278fr *F = rt_alloc(sizeof *F);
F->s_277 = s_277;
F->lv_876 = NULL;
F->t_877 = NULL;
F->c_878 = NULL;
F->lk_880 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_881 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_299((*(P358)rt_nil_check(F->s_277)).a, &F->lv_876, &F->t_877, &F->c_878, &F->ro_879);
if (((*(P362)rt_nil_check(F->t_877)).kind != ((rt_int)13LL))) {
f_fail_21((*(P358)rt_nil_check(F->s_277)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION needs a DATA_LOCK variable", 33); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_880), rt_str(" = &", 4)), (*(P353)rt_nil_check(F->lv_876))), rt_str("; rt_region_enter(", 18)), F->lk_880), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_881), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_881), rt_str(")) {", 4)); b_; }));
f_push_cleanup_242(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_881), rt_str("); rt_region_leave(", 19)), F->lk_880), rt_str(");", 2)); b_; }));
f_gen_body_238((*(P358)rt_nil_check(F->s_277)).b);
f_pop_cleanup_243();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_881), rt_str("); rt_region_leave(", 19)), F->lk_880), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_881), rt_str("); rt_region_leave(", 19)), F->lk_880), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static rstr f_access_of_280(P368 y_279) {
  struct f_access_of_280fr *F = rt_alloc(sizeof *F);
F->y_279 = y_279;
F->p_882 = NULL;
F->p_882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P368)rt_nil_check(F->y_279)).level <= ((rt_int)0LL))) {
F->result_ = (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_279)).access));
goto ret_;
}
{ rt_int lo884 = ((rt_int)1LL), hi885 = rt_sub(g_cur_level_399, (*(P368)rt_nil_check(F->y_279)).level);
for (rt_int it886 = lo884; it886 <= hi885; it886++) {
F->i_883 = it886;
F->p_882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->p_882)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P368)rt_nil_check(F->y_279)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P353)rt_nil_check(F->p_882))), rt_str("->", 2)), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_279)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->p_882)), rt_str("->", 2)), (*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_279)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_import_of_283(P358 l_281, rstr *name_282) {
  struct f_import_of_283fr *F = rt_alloc(sizeof *F);
F->l_281 = l_281;
F->name_282 = name_282;
F->p_887 = NULL;
F->p_887 = F->l_281;
while ((F->p_887 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->p_887)).name)), (*F->name_282))) {
F->result_ = F->p_887;
goto ret_;
}
F->p_887 = (*(P358)rt_nil_check(F->p_887)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_286(P368 y_284, rt_int line_285) {
  struct f_check_import_286fr *F = rt_alloc(sizeof *F);
F->y_284 = y_284;
F->line_285 = line_285;
F->c_888 = NULL;
F->c_888 = g_fctx_400;
F->ro_889 = 0;
while (((F->c_888 != NULL) && ((*(P368)rt_nil_check(F->y_284)).depth < (*(P378)rt_nil_check(F->c_888)).depth))) {
if ((!(*(P378)rt_nil_check(F->c_888)).all_imp)) {
F->imp_890 = NULL;
F->imp_890 = f_import_of_283((*(P378)rt_nil_check(F->c_888)).imps, &(*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_284)).name)));
if ((F->imp_890 == NULL)) {
f_fail_21(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_284)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P358)rt_nil_check(F->imp_890)).ival == ((rt_int)1LL))) {
F->ro_889 = 1;
}
}
F->c_888 = (*(P378)rt_nil_check(F->c_888)).next;
}
F->result_ = F->ro_889;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_288(rstr *s_287) {
  struct f_c_ident_288fr *F = rt_alloc(sizeof *F);
F->s_287 = s_287;
if (rt_str_eq((*F->s_287), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_287), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_287));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_291(rstr *base_289, P362 t_290) {
  struct f_deref_291fr *F = rt_alloc(sizeof *F);
F->base_289 = base_289;
F->t_290 = t_290;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_160(F->t_290)), rt_str(")rt_nil_check(", 14)), (*F->base_289)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_293(P358 e_292) {
  struct f_is_lvalue_293fr *F = rt_alloc(sizeof *F);
F->e_292 = e_292;
if (((*(P358)rt_nil_check(F->e_292)).kind == ((rt_int)7LL))) {
F->y_891 = NULL;
F->y_891 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_292)).name)));
F->result_ = ((F->y_891 != NULL) && (((*(P368)rt_nil_check(F->y_891)).kind == ((rt_int)1LL)) || ((*(P368)rt_nil_check(F->y_891)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P358)rt_nil_check(F->e_292)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_293((*(P358)rt_nil_check(F->e_292)).a);
goto ret_;
} else if (((*(P358)rt_nil_check(F->e_292)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_292)).name)), rt_str("LEN", 3))) && f_is_lvalue_293((*(P358)rt_nil_check(F->e_292)).a));
goto ret_;
} else if (((*(P358)rt_nil_check(F->e_292)).kind == ((rt_int)10LL))) {
if ((((*(P358)rt_nil_check(F->e_292)).b != NULL) && ((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_292)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_293((*(P358)rt_nil_check(F->e_292)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_299(P358 e_294, P353 *code_295, P362 *t_296, P360 *c_297, int *ro_298) {
  struct f_lvalue_299fr *F = rt_alloc(sizeof *F);
F->e_294 = e_294;
F->code_295 = code_295;
F->t_296 = t_296;
F->c_297 = c_297;
F->ro_298 = ro_298;
F->base_892 = NULL;
F->bt_893 = NULL;
F->bc_894 = NULL;
if (((*(P358)rt_nil_check(F->e_294)).kind == ((rt_int)7LL))) {
F->y_895 = NULL;
F->y_895 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_294)).name)));
if ((F->y_895 == NULL)) {
f_fail_21((*(P358)rt_nil_check(F->e_294)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_294)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P368)rt_nil_check(F->y_895)).kind != ((rt_int)1LL)) && ((*(P368)rt_nil_check(F->y_895)).kind != ((rt_int)2LL)))) {
f_fail_21((*(P358)rt_nil_check(F->e_294)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_294)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_295) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_280(F->y_895); b_; }));
(*F->t_296) = (*(P368)rt_nil_check(F->y_895)).t;
(*F->c_297) = (*(P368)rt_nil_check(F->y_895)).c;
(*F->ro_298) = (*(P368)rt_nil_check(F->y_895)).ro_flag;
if ((((*(P368)rt_nil_check(F->y_895)).kind == ((rt_int)1LL)) && f_check_import_286(F->y_895, (*(P358)rt_nil_check(F->e_294)).line))) {
(*F->ro_298) = 1;
}
} else if (((*(P358)rt_nil_check(F->e_294)).kind == ((rt_int)17LL))) {
f_lvalue_299((*(P358)rt_nil_check(F->e_294)).a, &(*F->code_295), &(*F->t_296), &(*F->c_297), &(*F->ro_298));
} else if (((*(P358)rt_nil_check(F->e_294)).kind == ((rt_int)11LL))) {
f_lvalue_299((*(P358)rt_nil_check(F->e_294)).a, &F->base_892, &F->bt_893, &F->bc_894, &(*F->ro_298));
f_select_on_307(&(*(P353)rt_nil_check(F->base_892)), F->bt_893, F->e_294, &(*F->ro_298), &(*F->code_295), &(*F->t_296), &(*F->c_297));
} else if (((*(P358)rt_nil_check(F->e_294)).kind == ((rt_int)10LL))) {
f_lvalue_299((*(P358)rt_nil_check(F->e_294)).a, &F->base_892, &F->bt_893, &F->bc_894, &(*F->ro_298));
f_index_on_316(&(*(P353)rt_nil_check(F->base_892)), F->bt_893, F->e_294, &(*F->ro_298), 1, &(*F->code_295), &(*F->t_296), &(*F->c_297));
} else {
f_fail_21((*(P358)rt_nil_check(F->e_294)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_307(rstr *base_300, P362 bt_301, P358 e_302, int *ro_303, P353 *code_304, P362 *t_305, P360 *c_306) {
  struct f_select_on_307fr *F = rt_alloc(sizeof *F);
F->base_300 = base_300;
F->bt_301 = bt_301;
F->e_302 = e_302;
F->ro_303 = ro_303;
F->code_304 = code_304;
F->t_305 = t_305;
F->c_306 = c_306;
(*F->c_306) = g_no_cons_419;
if (((*(P362)rt_nil_check(F->bt_301)).kind == ((rt_int)8LL))) {
f_finish_ptr_218(F->bt_301);
(*F->ro_303) = 0;
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_302)).name)), rt_str("ALL", 3))) {
(*F->code_304) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_291(&(*F->base_300), F->bt_301); b_; }));
(*F->t_305) = (*(P362)rt_nil_check(F->bt_301)).target;
goto ret_;
}
f_select_on_307(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_291(&(*F->base_300), F->bt_301); b_; }), (*(P362)rt_nil_check(F->bt_301)).target, F->e_302, &(*F->ro_303), &(*F->code_304), &(*F->t_305), &(*F->c_306));
goto ret_;
}
if (((*(P362)rt_nil_check(F->bt_301)).kind == ((rt_int)7LL))) {
F->f_896 = NULL;
F->f_896 = (*(P362)rt_nil_check(F->bt_301)).fields;
while ((F->f_896 != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_896)).name)), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_302)).name)))) {
(*F->c_306) = (*(P364)rt_nil_check(F->f_896)).c;
(*F->code_304) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_300), rt_str(".", 1)), f_lower_s_15(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_302)).name)))); b_; }));
(*F->t_305) = (*(P364)rt_nil_check(F->f_896)).t;
goto ret_;
}
F->f_896 = (*(P364)rt_nil_check(F->f_896)).next;
}
f_fail_21((*(P358)rt_nil_check(F->e_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_302)).name))); b_; }));
}
f_fail_21((*(P358)rt_nil_check(F->e_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_302)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_316(rstr *base_308, P362 bt_309, P358 e_310, int *ro_311, int lv_312, P353 *code_313, P362 *t_314, P360 *c_315) {
  struct f_index_on_316fr *F = rt_alloc(sizeof *F);
F->base_308 = base_308;
F->bt_309 = bt_309;
F->e_310 = e_310;
F->ro_311 = ro_311;
F->lv_312 = lv_312;
F->code_313 = code_313;
F->t_314 = t_314;
F->c_315 = c_315;
F->a_897 = NULL;
F->a_897 = (*(P358)rt_nil_check(F->e_310)).b;
F->it_898 = NULL;
(*F->c_315) = g_no_cons_419;
if (((*(P362)rt_nil_check(F->bt_309)).kind == ((rt_int)8LL))) {
f_finish_ptr_218(F->bt_309);
(*F->ro_311) = 0;
f_index_on_316(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_291(&(*F->base_308), F->bt_309); b_; }), (*(P362)rt_nil_check(F->bt_309)).target, F->e_310, &(*F->ro_311), F->lv_312, &(*F->code_313), &(*F->t_314), &(*F->c_315));
goto ret_;
}
if ((f_list_len_52(F->a_897) != ((rt_int)1LL))) {
f_fail_21((*(P358)rt_nil_check(F->e_310)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P362)rt_nil_check(F->bt_309)).kind == ((rt_int)5LL))) {
if (((*(P358)rt_nil_check(F->a_897)).kind == ((rt_int)16LL))) {
F->lo_899 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->a_897)).a, g_ty_int_409, &F->it_898));
F->hi_900 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->a_897)).b, g_ty_int_409, &F->it_898));
(*F->code_313) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_308)), rt_str(", ", 2)), F->lo_899), rt_str(", ", 2)), F->hi_900), rt_str(")", 1)); b_; }));
(*F->t_314) = g_ty_string_413;
(*F->ro_311) = 1;
goto ret_;
}
{
F->i_901 = rt_str_copy(f_gexpr_320(F->a_897, g_ty_int_409, &F->it_898));
(*F->t_314) = g_ty_ascii_412;
if (F->lv_312) {
(*F->code_313) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_308)), rt_str(", ", 2)), F->i_901), rt_str("))", 2)); b_; }));
} else {
(*F->code_313) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_308)), rt_str(", ", 2)), F->i_901), rt_str(")", 1)); b_; }));
(*F->ro_311) = 1;
}
}
goto ret_;
}
if (((*(P362)rt_nil_check(F->bt_309)).kind == ((rt_int)6LL))) {
F->i_902 = rt_str_copy(f_gexpr_320(F->a_897, (*(P362)rt_nil_check(F->bt_309)).idx, &F->it_898));
(*F->code_313) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_308), rt_str(".p[rt_index(", 12)), F->i_902), rt_str(", ", 2)), (*F->base_308)), rt_str(".lo, ", 5)), (*F->base_308)), rt_str(".hi) - ", 7)), (*F->base_308)), rt_str(".lo]", 4)); b_; }));
(*F->t_314) = (*(P362)rt_nil_check(F->bt_309)).elem;
(*F->c_315) = (*(P362)rt_nil_check(F->bt_309)).elemcons;
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->e_310)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_320(P358 e_317, P362 want_318, P362 *t_319) {
  struct f_gexpr_320fr *F = rt_alloc(sizeof *F);
F->e_317 = e_317;
F->want_318 = want_318;
F->t_319 = t_319;
F->k_903 = (*(P358)rt_nil_check(F->e_317)).kind;
F->code_904 = NULL;
F->c_905 = NULL;
F->bt_907 = NULL;
(*F->t_319) = g_ty_int_409;
if ((F->k_903 == ((rt_int)1LL))) {
if (((F->want_318 != NULL) && ((*(P362)rt_nil_check(F->want_318)).kind == ((rt_int)3LL)))) {
(*F->t_319) = g_ty_float_411;
F->result_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_903 == ((rt_int)2LL))) {
(*F->t_319) = g_ty_float_411;
F->result_ = (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name));
goto ret_;
} else if ((F->k_903 == ((rt_int)5LL))) {
(*F->t_319) = g_ty_bool_410;
F->result_ = f_itos_7((*(P358)rt_nil_check(F->e_317)).ival);
goto ret_;
} else if ((F->k_903 == ((rt_int)3LL))) {
(*F->t_319) = g_ty_string_413;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_324(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)))), rt_str(", ", 2)), f_itos_7(((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_903 == ((rt_int)6LL))) {
(*F->t_319) = g_ty_nil_416;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_903 == ((rt_int)4LL))) {
if (((F->want_318 != NULL) && ((*(P362)rt_nil_check(F->want_318)).kind == ((rt_int)4LL)))) {
(*F->t_319) = F->want_318;
} else {
(*F->t_319) = f_enum_type_of_327(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), (*(P358)rt_nil_check(F->e_317)).line);
}
{
F->i_908 = f_lit_index_168((*(P362)rt_nil_check((*F->t_319))).lits, &(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)));
if ((F->i_908 < ((rt_int)0LL))) {
f_fail_21((*(P358)rt_nil_check(F->e_317)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_908);
goto ret_;
}
} else if ((F->k_903 == ((rt_int)17LL))) {
F->result_ = f_gexpr_320((*(P358)rt_nil_check(F->e_317)).a, F->want_318, &(*F->t_319));
goto ret_;
} else if ((F->k_903 == ((rt_int)7LL))) {
F->y_909 = NULL;
F->y_909 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)));
if ((F->y_909 == NULL)) {
if (((((((((rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_342(f_wrap_apply_322(F->e_317), 0, &(*F->t_319));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->e_317)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P368)rt_nil_check(F->y_909)).kind == ((rt_int)1LL)) || ((*(P368)rt_nil_check(F->y_909)).kind == ((rt_int)2LL)))) {
(*F->t_319) = (*(P368)rt_nil_check(F->y_909)).t;
if (((*(P368)rt_nil_check(F->y_909)).kind == ((rt_int)1LL))) {
F->ro_910 = f_check_import_286(F->y_909, (*(P358)rt_nil_check(F->e_317)).line);
}
F->result_ = f_access_of_280(F->y_909);
goto ret_;
}
if (((*(P368)rt_nil_check(F->y_909)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_342(f_wrap_apply_322(F->e_317), 0, &(*F->t_319));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->e_317)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((F->k_903 == ((rt_int)8LL))) {
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("NOT", 3))) {
F->a_911 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_317)).a, g_ty_bool_410, &(*F->t_319)));
f_check_type_158((*F->t_319), g_ty_bool_410, (*(P358)rt_nil_check(F->e_317)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_911), rt_str(")", 1));
goto ret_;
}
{
F->a_912 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_317)).a, F->want_318, &(*F->t_319)));
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("+", 1))) {
F->result_ = F->a_912;
goto ret_;
} else if (((*(P362)rt_nil_check((*F->t_319))).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_912), rt_str(")", 1));
goto ret_;
}
f_check_type_158((*F->t_319), g_ty_int_409, (*(P358)rt_nil_check(F->e_317)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_912), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_903 == ((rt_int)9LL))) {
F->result_ = f_gbinop_334(F->e_317, F->want_318, &(*F->t_319));
goto ret_;
} else if ((F->k_903 == ((rt_int)10LL))) {
if ((((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_317)).a)).kind == ((rt_int)7LL)) || ((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_317)).a)).kind == ((rt_int)12LL)))) {
F->nm_913 = NULL;
F->nm_913 = (*(P358)rt_nil_check(F->e_317)).a;
F->y_914 = NULL;
if (((*(P358)rt_nil_check(F->nm_913)).kind == ((rt_int)12LL))) {
F->nm_913 = (*(P358)rt_nil_check(F->nm_913)).a;
}
F->y_914 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->nm_913)).name)));
if ((((F->y_914 == NULL) || ((*(P368)rt_nil_check(F->y_914)).kind == ((rt_int)3LL))) || ((*(P368)rt_nil_check(F->y_914)).kind == ((rt_int)4LL)))) {
F->result_ = f_gcall_342(F->e_317, 0, &(*F->t_319));
goto ret_;
}
}
{
F->base_915 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_317)).a, NULL, &F->bt_907));
F->ro_906 = 1;
f_index_on_316(&F->base_915, F->bt_907, F->e_317, &F->ro_906, 0, &F->code_904, &(*F->t_319), &F->c_905);
F->result_ = (*(P353)rt_nil_check(F->code_904));
goto ret_;
}
} else if ((F->k_903 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_317)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_330(F->e_317, &(*F->t_319));
goto ret_;
}
{
F->base_916 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_317)).a, NULL, &F->bt_907));
F->ro_906 = 1;
f_select_on_307(&F->base_916, F->bt_907, F->e_317, &F->ro_906, &F->code_904, &(*F->t_319), &F->c_905);
F->result_ = (*(P353)rt_nil_check(F->code_904));
goto ret_;
}
} else if ((F->k_903 == ((rt_int)12LL))) {
F->result_ = f_gcall_342(f_wrap_apply_322(F->e_317), 0, &(*F->t_319));
goto ret_;
} else if ((F->k_903 == ((rt_int)14LL))) {
F->result_ = f_constructor_338(F->e_317, F->want_318, &(*F->t_319));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->e_317)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P358 f_wrap_apply_322(P358 e_321) {
  struct f_wrap_apply_322fr *F = rt_alloc(sizeof *F);
F->e_321 = e_321;
F->x_917 = NULL;
F->x_917 = f_nn_46(((rt_int)10LL), (*(P358)rt_nil_check(F->e_321)).line);
(*(P358)rt_nil_check(F->x_917)).a = F->e_321;
F->result_ = F->x_917;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_324(rstr *s_323) {
  struct f_c_string_324fr *F = rt_alloc(sizeof *F);
F->s_323 = s_323;
F->n_918 = ((rt_int)0LL);
{ rt_int lo920 = ((rt_int)1LL), hi921 = ((*F->s_323)).len;
for (rt_int it922 = lo920; it922 <= hi921; it922++) {
F->i_919 = it922;
if (((rt_str_get((*F->s_323), F->i_919) == 92) || (rt_str_get((*F->s_323), F->i_919) == 63))) {
F->n_918 = rt_add(F->n_918, ((rt_int)1LL));
}
}
}
{
F->r_923 = rt_str_new(rt_add(rt_add(((*F->s_323)).len, F->n_918), ((rt_int)2LL)));
F->j_924 = ((rt_int)1LL);
(*rt_str_at(&F->r_923, ((rt_int)1LL))) = 34;
{ rt_int lo926 = ((rt_int)1LL), hi927 = ((*F->s_323)).len;
for (rt_int it928 = lo926; it928 <= hi927; it928++) {
F->i_925 = it928;
F->j_924 = rt_add(F->j_924, ((rt_int)1LL));
if (((rt_str_get((*F->s_323), F->i_925) == 92) || (rt_str_get((*F->s_323), F->i_925) == 63))) {
(*rt_str_at(&F->r_923, F->j_924)) = 92;
F->j_924 = rt_add(F->j_924, ((rt_int)1LL));
}
(*rt_str_at(&F->r_923, F->j_924)) = rt_str_get((*F->s_323), F->i_925);
}
}
(*rt_str_at(&F->r_923, rt_add(F->j_924, ((rt_int)1LL)))) = 34;
F->result_ = F->r_923;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P362 f_enum_type_of_327(rstr *lit_325, rt_int line_326) {
  struct f_enum_type_of_327fr *F = rt_alloc(sizeof *F);
F->lit_325 = lit_325;
F->line_326 = line_326;
F->y_929 = NULL;
F->y_929 = g_scope_stack_386;
F->c_930 = NULL;
if ((f_lit_index_168((*(P362)rt_nil_check(g_ty_ascii_412)).lits, &(*F->lit_325)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_412;
goto ret_;
}
while ((F->y_929 != NULL)) {
if ((((((*(P368)rt_nil_check(F->y_929)).kind == ((rt_int)6LL)) || ((*(P368)rt_nil_check(F->y_929)).kind == ((rt_int)5LL))) && ((*(P368)rt_nil_check(F->y_929)).st != NULL)) && ((*(P358)rt_nil_check((*(P368)rt_nil_check(F->y_929)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_168((*(P358)rt_nil_check((*(P368)rt_nil_check(F->y_929)).st)).a, &(*F->lit_325)) >= ((rt_int)0LL))) {
F->result_ = f_resolve_subtype_171((*(P368)rt_nil_check(F->y_929)).st, &F->c_930);
goto ret_;
}
}
F->y_929 = (*(P368)rt_nil_check(F->y_929)).stack;
}
f_fail_21(F->line_326, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_325)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_330(P358 e_328, P362 *t_329) {
  struct f_attribute_330fr *F = rt_alloc(sizeof *F);
F->e_328 = e_328;
F->t_329 = t_329;
F->bt_931 = NULL;
F->c_932 = NULL;
(*F->t_329) = g_ty_int_409;
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_328)).name)), rt_str("LEN", 3))) {
F->base_933 = NULL;
F->base_933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_320((*(P358)rt_nil_check(F->e_328)).a, NULL, &F->bt_931); b_; }));
if (((*(P362)rt_nil_check(F->bt_931)).kind == ((rt_int)8LL))) {
f_finish_ptr_218(F->bt_931);
F->base_933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_291(&(*(P353)rt_nil_check(F->base_933)), F->bt_931); b_; }));
F->bt_931 = (*(P362)rt_nil_check(F->bt_931)).target;
}
if (((*(P362)rt_nil_check(F->bt_931)).kind != ((rt_int)5LL))) {
f_fail_21((*(P358)rt_nil_check(F->e_328)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P353)rt_nil_check(F->base_933))), rt_str(").len", 5));
goto ret_;
}
if (((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_328)).a)).kind == ((rt_int)7LL))) {
F->y_934 = NULL;
F->y_934 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_328)).a)).name)));
if (((F->y_934 != NULL) && (((*(P368)rt_nil_check(F->y_934)).kind == ((rt_int)6LL)) || ((*(P368)rt_nil_check(F->y_934)).kind == ((rt_int)5LL))))) {
F->st_935 = NULL;
F->st_935 = f_nn_46(((rt_int)80LL), (*(P358)rt_nil_check(F->e_328)).line);
(*(P358)rt_nil_check(F->st_935)).name = (*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_328)).a)).name;
(*F->t_329) = f_resolve_subtype_171(F->st_935, &F->c_932);
if (((*(P362)rt_nil_check((*F->t_329))).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_328)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_52((*(P362)rt_nil_check((*F->t_329))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P360)rt_nil_check(F->c_932)).lo != NULL)) {
if (rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_328)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_932)).lo));
goto ret_;
}
F->result_ = (*(P353)rt_nil_check((*(P360)rt_nil_check(F->c_932)).hi));
goto ret_;
}
}
}
f_fail_21((*(P358)rt_nil_check(F->e_328)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P353)rt_nil_check((*(P358)rt_nil_check(F->e_328)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_334(P358 e_331, P362 want_332, P362 *t_333) {
  struct f_gbinop_334fr *F = rt_alloc(sizeof *F);
F->e_331 = e_331;
F->want_332 = want_332;
F->t_333 = t_333;
F->op_936 = NULL;
F->op_936 = (*(P358)rt_nil_check(F->e_331)).name;
F->ta_937 = NULL;
F->tb_938 = NULL;
F->hint_939 = NULL;
(*F->t_333) = g_ty_bool_410;
if (((rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("AND", 3)) || rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("OR", 2))) || rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("XOR", 3)))) {
F->a_940 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).a, g_ty_bool_410, &F->ta_937));
F->b_941 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).b, g_ty_bool_410, &F->tb_938));
f_check_type_158(F->ta_937, g_ty_bool_410, (*(P358)rt_nil_check(F->e_331)).line);
f_check_type_158(F->tb_938, g_ty_bool_410, (*(P358)rt_nil_check(F->e_331)).line);
if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_940), rt_str(" && ", 4)), F->b_941), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_940), rt_str(" || ", 4)), F->b_941), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_940), rt_str(" != ", 4)), F->b_941), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("&", 1))) {
F->wa_942 = NULL;
F->wb_943 = NULL;
if (((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_331)).a)).kind == ((rt_int)4LL))) {
F->wa_942 = g_ty_ascii_412;
}
if (((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_331)).b)).kind == ((rt_int)4LL))) {
F->wb_943 = g_ty_ascii_412;
}
{
F->a_944 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).a, F->wa_942, &F->ta_937));
F->b_945 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).b, F->wb_943, &F->tb_938));
(*F->t_333) = g_ty_string_413;
if ((((*(P362)rt_nil_check(F->ta_937)).kind == ((rt_int)5LL)) && ((*(P362)rt_nil_check(F->tb_938)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_944), rt_str(", ", 2)), F->b_945), rt_str(")", 1));
goto ret_;
} else if ((((*(P362)rt_nil_check(F->ta_937)).kind == ((rt_int)5LL)) && ((*(P362)rt_nil_check(F->tb_938)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_944), rt_str(", ", 2)), F->b_945), rt_str(")", 1));
goto ret_;
} else if ((((*(P362)rt_nil_check(F->ta_937)).kind == ((rt_int)4LL)) && ((*(P362)rt_nil_check(F->tb_938)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_944), rt_str(", ", 2)), F->b_945), rt_str(")", 1));
goto ret_;
} else if ((((*(P362)rt_nil_check(F->ta_937)).kind == ((rt_int)4LL)) && ((*(P362)rt_nil_check(F->tb_938)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_944), rt_str(", ", 2)), F->b_945), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->e_331)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_91(&(*(P353)rt_nil_check(F->op_936))) && (!rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("IN", 2))))) {
if (((((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_331)).a)).kind == ((rt_int)4LL)) || ((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_331)).a)).kind == ((rt_int)6LL))) || ((*(P358)rt_nil_check((*(P358)rt_nil_check(F->e_331)).a)).kind == ((rt_int)1LL)))) {
F->dummy_946 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).b, NULL, &F->hint_939));
}
{
F->a_947 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).a, F->hint_939, &F->ta_937));
F->b_948 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).b, F->ta_937, &F->tb_938));
F->ct_949 = NULL;
F->ct_949 = F->ta_937;
(*F->t_333) = g_ty_bool_410;
if ((((*(P362)rt_nil_check(F->ta_937)).kind != ((rt_int)11LL)) && ((*(P362)rt_nil_check(F->tb_938)).kind != ((rt_int)11LL)))) {
f_check_type_158(F->tb_938, F->ta_937, (*(P358)rt_nil_check(F->e_331)).line);
}
if (((*(P362)rt_nil_check(F->ta_937)).kind == ((rt_int)11LL))) {
F->ct_949 = F->tb_938;
}
if (((*(P362)rt_nil_check(F->ct_949)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_947), rt_str(", ", 2)), F->b_948), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_947), rt_str(", ", 2)), F->b_948), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_947), rt_str(", ", 2)), F->b_948), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_947), rt_str(", ", 2)), F->b_948), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_948), rt_str(", ", 2)), F->a_947), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_948), rt_str(", ", 2)), F->a_947), rt_str(")", 1));
goto ret_;
}
if ((((*(P362)rt_nil_check(F->ct_949)).kind == ((rt_int)6LL)) || ((*(P362)rt_nil_check(F->ct_949)).kind == ((rt_int)7LL)))) {
if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("=", 1))) {
F->result_ = f_eq_code_192(F->ct_949, &F->a_947, &F->b_948);
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_192(F->ct_949, &F->a_947, &F->b_948)), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->e_331)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_947), rt_str(" == ", 4)), F->b_948), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_947), rt_str(" != ", 4)), F->b_948), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_947), rt_str(" ", 1)), (*(P353)rt_nil_check(F->op_936))), rt_str(" ", 1)), F->b_948), rt_str(")", 1));
goto ret_;
}
}
{
F->a_950 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).a, F->want_332, &F->ta_937));
F->b_951 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->e_331)).b, F->ta_937, &F->tb_938));
if ((((*(P362)rt_nil_check(F->ta_937)).kind == ((rt_int)3LL)) || ((*(P362)rt_nil_check(F->tb_938)).kind == ((rt_int)3LL)))) {
(*F->t_333) = g_ty_float_411;
if (((rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("+", 1)) || rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("-", 1))) || rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_950), rt_str(" ", 1)), (*(P353)rt_nil_check(F->op_936))), rt_str(" ", 1)), F->b_951), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
}
}
f_check_type_158(F->ta_937, g_ty_int_409, (*(P358)rt_nil_check(F->e_331)).line);
f_check_type_158(F->tb_938, g_ty_int_409, (*(P358)rt_nil_check(F->e_331)).line);
(*F->t_333) = g_ty_int_409;
if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P353)rt_nil_check(F->op_936)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_950), rt_str(", ", 2)), F->b_951), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P358)rt_nil_check(F->e_331)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P353)rt_nil_check(F->op_936))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_338(P358 e_335, P362 want_336, P362 *t_337) {
  struct f_constructor_338fr *F = rt_alloc(sizeof *F);
F->e_335 = e_335;
F->want_336 = want_336;
F->t_337 = t_337;
F->it_952 = NULL;
F->it_952 = (*(P358)rt_nil_check(F->e_335)).a;
F->f_953 = NULL;
F->vt_954 = NULL;
if (((F->want_336 == NULL) || ((*(P362)rt_nil_check(F->want_336)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P358)rt_nil_check(F->e_335)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only record constructors are handled yet", 40); b_; }));
}
(*F->t_337) = F->want_336;
F->f_953 = (*(P362)rt_nil_check(F->want_336)).fields;
{
F->tmp_955 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_956 = NULL;
F->parts_956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_160(F->want_336)), rt_str(" ", 1)), F->tmp_955), rt_str(";", 1)); b_; }));
if (((f_list_len_52(F->it_952) != ((rt_int)0LL)) && (f_list_len_52(F->it_952) != ((rt_int)0LL)))) {
while (((F->it_952 != NULL) && (F->f_953 != NULL))) {
if (((((*(P358)rt_nil_check(F->it_952)).a == NULL) || ((*(P358)rt_nil_check((*(P358)rt_nil_check((*(P358)rt_nil_check(F->it_952)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P353)rt_nil_check((*(P358)rt_nil_check((*(P358)rt_nil_check((*(P358)rt_nil_check(F->it_952)).a)).a)).name)), (*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_953)).name)))))) {
f_fail_21((*(P358)rt_nil_check(F->e_335)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_953)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_957 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->it_952)).b, (*(P364)rt_nil_check(F->f_953)).t, &F->vt_954));
f_check_type_158(F->vt_954, (*(P364)rt_nil_check(F->f_953)).t, (*(P358)rt_nil_check(F->e_335)).line);
F->parts_956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->parts_956)), rt_str(" ", 1)), F->tmp_955), rt_str(".", 1)), f_lower_s_15(&(*(P353)rt_nil_check((*(P364)rt_nil_check(F->f_953)).name)))), rt_str(" = ", 3)), f_copy_code_188((*(P364)rt_nil_check(F->f_953)).t, &F->v_957)), rt_str(";", 1)); b_; }));
}
F->it_952 = (*(P358)rt_nil_check(F->it_952)).next;
F->f_953 = (*(P364)rt_nil_check(F->f_953)).next;
}
}
if (((F->it_952 != NULL) || (F->f_953 != NULL))) {
f_fail_21((*(P358)rt_nil_check(F->e_335)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->parts_956)), rt_str(" ", 1)), F->tmp_955), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_342(P358 e_339, int is_stmt_340, P362 *t_341) {
  struct f_gcall_342fr *F = rt_alloc(sizeof *F);
F->e_339 = e_339;
F->is_stmt_340 = is_stmt_340;
F->t_341 = t_341;
F->fn_958 = NULL;
F->fn_958 = (*(P358)rt_nil_check(F->e_339)).a;
F->tt_959 = NULL;
F->y_960 = NULL;
F->args_961 = NULL;
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_962 = NULL;
F->a_962 = (*(P358)rt_nil_check(F->e_339)).b;
F->pm_963 = NULL;
F->lt_964 = NULL;
F->vt_965 = NULL;
F->lv_966 = NULL;
F->lc_967 = NULL;
if (((*(P358)rt_nil_check(F->fn_958)).kind == ((rt_int)12LL))) {
F->tt_959 = (*(P358)rt_nil_check(F->fn_958)).b;
F->fn_958 = (*(P358)rt_nil_check(F->fn_958)).a;
}
F->y_960 = f_lookup_135(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_958)).name)));
if ((F->y_960 == NULL)) {
F->result_ = f_builtin_349(&(*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_958)).name)), F->tt_959, (*(P358)rt_nil_check(F->e_339)).b, (*(P358)rt_nil_check(F->e_339)).line, F->is_stmt_340, &(*F->t_341));
goto ret_;
}
if ((((*(P368)rt_nil_check(F->y_960)).kind != ((rt_int)3LL)) && ((*(P368)rt_nil_check(F->y_960)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P358)rt_nil_check(F->e_339)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_958)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_340 && ((*(P368)rt_nil_check(F->y_960)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P358)rt_nil_check(F->e_339)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_958)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_340) && ((*(P368)rt_nil_check(F->y_960)).kind != ((rt_int)3LL)))) {
f_fail_21((*(P358)rt_nil_check(F->e_339)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_958)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_963 = (*(P368)rt_nil_check(F->y_960)).params;
if (((*(P368)rt_nil_check(F->y_960)).level > ((rt_int)0LL))) {
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo970 = ((rt_int)1LL), hi971 = rt_sub(g_cur_level_399, (*(P368)rt_nil_check(F->y_960)).level);
for (rt_int it972 = lo970; it972 <= hi971; it972++) {
F->i_969 = it972;
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->args_961)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_962 != NULL) && (F->pm_963 != NULL))) {
if ((((*(P353)rt_nil_check(F->args_961))).len > ((rt_int)0LL))) {
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->args_961)), rt_str(", ", 2)); b_; }));
}
if ((((*(P366)rt_nil_check(F->pm_963)).mode == ((rt_int)2LL)) || ((*(P366)rt_nil_check(F->pm_963)).mode == ((rt_int)3LL)))) {
f_lvalue_299(F->a_962, &F->lv_966, &F->lt_964, &F->lc_967, &F->ro_968);
if (F->ro_968) {
f_fail_21((*(P358)rt_nil_check(F->e_339)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check((*(P366)rt_nil_check(F->pm_963)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_158(F->lt_964, (*(P366)rt_nil_check(F->pm_963)).t, (*(P358)rt_nil_check(F->e_339)).line);
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->args_961)), rt_str("&", 1)), (*(P353)rt_nil_check(F->lv_966))); b_; }));
} else if ((((*(P366)rt_nil_check(F->pm_963)).mode == ((rt_int)4LL)) && f_is_lvalue_293(F->a_962))) {
f_lvalue_299(F->a_962, &F->lv_966, &F->lt_964, &F->lc_967, &F->ro_968);
f_check_type_158(F->lt_964, (*(P366)rt_nil_check(F->pm_963)).t, (*(P358)rt_nil_check(F->e_339)).line);
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->args_961)), rt_str("&", 1)), (*(P353)rt_nil_check(F->lv_966))); b_; }));
} else if (((*(P366)rt_nil_check(F->pm_963)).mode == ((rt_int)4LL))) {
F->v_973 = rt_str_copy(f_gexpr_320(F->a_962, (*(P366)rt_nil_check(F->pm_963)).t, &F->vt_965));
F->ct_974 = rt_str_copy(f_ctype_160((*(P366)rt_nil_check(F->pm_963)).t));
f_check_type_158(F->vt_965, (*(P366)rt_nil_check(F->pm_963)).t, (*(P358)rt_nil_check(F->e_339)).line);
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->args_961)), rt_str("({ ", 3)), F->ct_974), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_974), rt_str(")); *b_ = ", 10)), F->v_973), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_975 = rt_str_copy(f_gexpr_320(F->a_962, (*(P366)rt_nil_check(F->pm_963)).t, &F->vt_965));
f_check_type_158(F->vt_965, (*(P366)rt_nil_check(F->pm_963)).t, (*(P358)rt_nil_check(F->e_339)).line);
if (((((*(P362)rt_nil_check((*(P366)rt_nil_check(F->pm_963)).t)).kind == ((rt_int)1LL)) && ((*(P366)rt_nil_check(F->pm_963)).c != NULL)) && (*(P360)rt_nil_check((*(P366)rt_nil_check(F->pm_963)).c)).hasm)) {
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check(F->args_961)), rt_str("rt_range(", 9)), F->v_975), rt_str(", ", 2)), f_itos_7((*(P360)rt_nil_check((*(P366)rt_nil_check(F->pm_963)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P360)rt_nil_check((*(P366)rt_nil_check(F->pm_963)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P353)rt_nil_check(F->args_961)), F->v_975); b_; }));
}
}
F->a_962 = (*(P358)rt_nil_check(F->a_962)).next;
F->pm_963 = (*(P366)rt_nil_check(F->pm_963)).next;
}
if (((F->a_962 != NULL) || (F->pm_963 != NULL))) {
f_fail_21((*(P358)rt_nil_check(F->e_339)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check((*(P358)rt_nil_check(F->fn_958)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_52((*(P358)rt_nil_check(F->e_339)).b), f_list_len_52(F->a_962)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_341) = (*(P368)rt_nil_check(F->y_960)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P353)rt_nil_check((*(P368)rt_nil_check(F->y_960)).cname)), rt_str("(", 1)), (*(P353)rt_nil_check(F->args_961))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_349(rstr *name_343, P358 tt_344, P358 args_345, rt_int line_346, int is_stmt_347, P362 *t_348) {
  struct f_builtin_349fr *F = rt_alloc(sizeof *F);
F->name_343 = name_343;
F->tt_344 = tt_344;
F->args_345 = args_345;
F->line_346 = line_346;
F->is_stmt_347 = is_stmt_347;
F->t_348 = t_348;
F->at_976 = NULL;
F->n_977 = f_list_len_52(F->args_345);
(*F->t_348) = g_ty_void_414;
if (((rt_str_eq((*F->name_343), rt_str("POS", 3)) || rt_str_eq((*F->name_343), rt_str("SUCC", 4))) || rt_str_eq((*F->name_343), rt_str("PRED", 4)))) {
F->a_978 = rt_str_copy(f_gexpr_320(F->args_345, NULL, &F->at_976));
if (rt_str_eq((*F->name_343), rt_str("POS", 3))) {
if (((*(P362)rt_nil_check(F->at_976)).kind != ((rt_int)4LL))) {
f_fail_21(F->line_346, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_348) = g_ty_int_409;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_978), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_348) = F->at_976;
if (((*(P362)rt_nil_check(F->at_976)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_343), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_978), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_978), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_343), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_978), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P362)rt_nil_check(F->at_976)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_978), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P362)rt_nil_check(F->at_976)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("ABS", 3))) {
F->a_979 = rt_str_copy(f_gexpr_320(F->args_345, NULL, &F->at_976));
(*F->t_348) = F->at_976;
if (((*(P362)rt_nil_check(F->at_976)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_979), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_979), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("CNVT", 4))) {
if ((F->tt_344 == NULL)) {
f_fail_21(F->line_346, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_980 = rt_str_copy(f_gexpr_320(F->args_345, NULL, &F->at_976));
if ((((*(P358)rt_nil_check(F->tt_344)).kind == ((rt_int)73LL)) && ((*(P362)rt_nil_check(F->at_976)).kind == ((rt_int)1LL)))) {
(*F->t_348) = g_ty_string_413;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_980), rt_str(")", 1));
goto ret_;
} else if ((((*(P358)rt_nil_check(F->tt_344)).kind == ((rt_int)70LL)) && ((*(P362)rt_nil_check(F->at_976)).kind == ((rt_int)5LL)))) {
(*F->t_348) = g_ty_int_409;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_980), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_346, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_343), rt_str("WRITELN", 7))) {
if ((F->n_977 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_981 = NULL;
F->last_981 = F->args_345;
while (((*(P358)rt_nil_check(F->last_981)).next != NULL)) {
F->last_981 = (*(P358)rt_nil_check(F->last_981)).next;
}
{
F->a_982 = rt_str_copy(f_gexpr_320(F->last_981, g_ty_string_413, &F->at_976));
f_check_type_158(F->at_976, g_ty_string_413, F->line_346);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_982), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_343), rt_str("WRITE", 5))) {
F->a_983 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->args_345)).next, NULL, &F->at_976));
if (((*(P362)rt_nil_check(F->at_976)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_983), rt_str(")", 1));
goto ret_;
} else if (((*(P362)rt_nil_check(F->at_976)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_983), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_346, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_343), rt_str("READLN", 6))) {
F->lv_984 = NULL;
F->lc_985 = NULL;
F->last_987 = NULL;
F->last_987 = F->args_345;
while (((*(P358)rt_nil_check(F->last_987)).next != NULL)) {
F->last_987 = (*(P358)rt_nil_check(F->last_987)).next;
}
f_lvalue_299(F->last_987, &F->lv_984, &F->at_976, &F->lc_985, &F->ro_986);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P353)rt_nil_check(F->lv_984))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("SIZELN", 6))) {
(*F->t_348) = g_ty_int_409;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("EOF", 3))) {
(*F->t_348) = g_ty_bool_410;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_343), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_343), rt_str("SYS_OUT", 7)))) {
(*F->t_348) = g_ty_file_415;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_343), rt_str("OPEN", 4)) || rt_str_eq((*F->name_343), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_343), rt_str("SEND", 4)) || rt_str_eq((*F->name_343), rt_str("RECEIVE", 7)))) {
F->lv_988 = NULL;
F->dv_989 = NULL;
F->lc_990 = NULL;
F->mt_992 = NULL;
F->dt_993 = NULL;
f_lvalue_299(F->args_345, &F->lv_988, &F->mt_992, &F->lc_990, &F->ro_991);
if (((*(P362)rt_nil_check(F->mt_992)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_346, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_343), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_343), rt_str("RECEIVE", 7))) {
f_lvalue_299((*(P358)rt_nil_check(F->args_345)).next, &F->dv_989, &F->dt_993, &F->lc_990, &F->ro_991);
f_check_type_158(F->dt_993, (*(P362)rt_nil_check(F->mt_992)).elem, F->line_346);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(&", 12), (*(P353)rt_nil_check(F->lv_988))), rt_str(", &", 3)), (*(P353)rt_nil_check(F->dv_989))), rt_str(")", 1));
goto ret_;
}
{
F->v_994 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->args_345)).next, (*(P362)rt_nil_check(F->mt_992)).elem, &F->at_976));
f_check_type_158(F->at_976, (*(P362)rt_nil_check(F->mt_992)).elem, F->line_346);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_160((*(P362)rt_nil_check(F->mt_992)).elem)), rt_str(" m_ = ", 6)), F->v_994), rt_str("; rt_send(&", 11)), (*(P353)rt_nil_check(F->lv_988))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_343), rt_str("PRIORITY", 8))) {
(*F->t_348) = g_ty_int_409;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_268(F->args_345)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("SET_PRIORITY", 12))) {
F->v_995 = rt_str_copy(f_gexpr_320((*(P358)rt_nil_check(F->args_345)).next, g_ty_int_409, &F->at_976));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_268(F->args_345)), rt_str(", ", 2)), F->v_995), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_268(F->args_345)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("ACTIVE", 6))) {
(*F->t_348) = g_ty_bool_410;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_268(F->args_345)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("DELAY", 5))) {
F->v_996 = rt_str_copy(f_gexpr_320(F->args_345, g_ty_int_409, &F->at_976));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_996), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("DELAY_UNTIL", 11))) {
F->v_997 = rt_str_copy(f_gexpr_320(F->args_345, g_ty_int_409, &F->at_976));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_997), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_268(F->args_345)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("TIME", 4))) {
(*F->t_348) = g_ty_int_409;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_343), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_343), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_343), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_343), rt_str("HOURS", 5)))) {
(*F->t_348) = g_ty_int_409;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_343));
goto ret_;
} else if (rt_str_eq((*F->name_343), rt_str("HALT", 4))) {
F->a_998 = rt_str_copy(f_gexpr_320(F->args_345, g_ty_int_409, &F->at_976));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_998), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_346, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_343), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_351(P358 units_350) {
  struct f_translate_351fr *F = rt_alloc(sizeof *F);
F->units_350 = units_350;
F->u_999 = NULL;
F->u_999 = F->units_350;
while ((F->u_999 != NULL)) {
if (((*(P358)rt_nil_check(F->u_999)).next == NULL)) {
f_declare_body_204((*(P358)rt_nil_check(F->u_999)).c);
f_body_elements_236((*(P358)rt_nil_check(F->u_999)).c);
} else {
f_gen_capsule_214(F->u_999);
}
F->u_999 = (*(P358)rt_nil_check(F->u_999)).next;
}
ret_:
  return;
}

static void f_print_program_352(void) {
  struct f_print_program_352fr *F = rt_alloc(sizeof *F);
f_emit_helpers_200();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_16()), rt_str("paleo.h", 7)), f_q_16()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_29(g_out_types_389);
f_print_buffer_29(g_out_frames_402);
f_print_buffer_29(g_out_helpers_390);
f_print_buffer_29(g_out_protos_391);
f_print_buffer_29(g_out_globals_392);
f_print_buffer_29(g_out_funcs_393);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_29(g_out_excs_395);
f_print_buffer_29(g_out_init_394);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R379(R379 *d, R379 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R379 cp_R379(R379 s) {
  R379 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R379(R379 a, R379 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R377(R377 *d, R377 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R377 cp_R377(R377 s) {
  R377 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R377(R377 a, R377 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A375(A375 *d, A375 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i <= s.hi - s.lo; i++) { d->p[i] = s.p[i]; }
}
static A375 cp_A375(A375 s) {
  A375 d = s; d.p = rt_alloc(sizeof(P368) * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));
  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A375(A375 a, A375 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R373(R373 *d, R373 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R373 cp_R373(R373 s) {
  R373 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R373(R373 a, R373 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R371(R371 *d, R371 s) {
  d->s = s.s;
  d->next = s.next;
}
static R371 cp_R371(R371 s) {
  R371 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R371(R371 a, R371 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R369(R369 *d, R369 s) {
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
static R369 cp_R369(R369 s) {
  R369 d = s;
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
static int eq_R369(R369 a, R369 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R367(R367 *d, R367 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R367 cp_R367(R367 s) {
  R367 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R367(R367 a, R367 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R365(R365 *d, R365 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R365 cp_R365(R365 s) {
  R365 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R365(R365 a, R365 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R363(R363 *d, R363 s) {
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
static R363 cp_R363(R363 s) {
  R363 d = s;
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
static int eq_R363(R363 a, R363 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R361(R361 *d, R361 s) {
  d->lo = s.lo;
  d->hi = s.hi;
  d->slen = s.slen;
  d->mlo = s.mlo;
  d->mhi = s.mhi;
  d->hasm = s.hasm;
}
static R361 cp_R361(R361 s) {
  R361 d = s;
  d.lo = s.lo;
  d.hi = s.hi;
  d.slen = s.slen;
  d.mlo = s.mlo;
  d.mhi = s.mhi;
  d.hasm = s.hasm;
  return d;
}
static int eq_R361(R361 a, R361 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm);
}
static void as_R359(R359 *d, R359 s) {
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
static R359 cp_R359(R359 s) {
  R359 d = s;
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
static int eq_R359(R359 a, R359 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.next == b.next);
}
static void as_A357(A357 *d, A357 s) {
  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i <= s.hi - s.lo; i++) { d->p[i] = s.p[i]; }
}
static A357 cp_A357(A357 s) {
  A357 d = s; d.p = rt_alloc(sizeof(P354) * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));
  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A357(A357 a, A357 b) {
  if (a.hi - a.lo != b.hi - b.lo) return 0;
  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R355(R355 *d, R355 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R355 cp_R355(R355 s) {
  R355 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R355(R355 a, R355 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_380 = NULL;
g_ntoks_381 = ((rt_int)0LL);
g_tpos_382 = ((rt_int)1LL);
g_src_line_383 = ((rt_int)0LL);
g_table_384 = NULL;
g_depth_385 = ((rt_int)0LL);
g_scope_stack_386 = NULL;
g_all_types_387 = NULL;
g_serial_388 = ((rt_int)0LL);
g_out_types_389 = NULL;
g_out_helpers_390 = NULL;
g_out_protos_391 = NULL;
g_out_globals_392 = NULL;
g_out_funcs_393 = NULL;
g_out_init_394 = NULL;
g_out_excs_395 = NULL;
g_code_396 = NULL;
g_fields_buf_397 = NULL;
g_in_func_398 = 0;
g_cur_level_399 = ((rt_int)0LL);
g_fctx_400 = NULL;
g_st_field_401 = NULL;
g_out_frames_402 = NULL;
g_func_sym_403 = NULL;
g_exits_404 = NULL;
g_frames_405 = ((rt_int)0LL);
g_handlers_406 = NULL;
g_cleanups_407 = NULL;
g_mcopies_408 = NULL;
g_ty_int_409 = NULL;
g_ty_bool_410 = NULL;
g_ty_float_411 = NULL;
g_ty_ascii_412 = NULL;
g_ty_string_413 = NULL;
g_ty_void_414 = NULL;
g_ty_file_415 = NULL;
g_ty_nil_416 = NULL;
g_ty_lock_417 = NULL;
g_ty_act_418 = NULL;
g_no_cons_419 = NULL;
{ A357 *cell1000 = rt_alloc(sizeof(A357));
rt_int pv1001 = ((rt_int)1000000LL);
(*cell1000).lo = ((rt_int)1LL); (*cell1000).hi = pv1001;
(*cell1000).p = rt_alloc(sizeof(P354) * (size_t)((*cell1000).hi >= (*cell1000).lo ? (*cell1000).hi - (*cell1000).lo + 1 : 0));
g_toks_380 = cell1000;
}
{ A375 *cell1002 = rt_alloc(sizeof(A375));
rt_int pv1003 = ((rt_int)4093LL);
(*cell1002).lo = ((rt_int)0LL); (*cell1002).hi = pv1003;
(*cell1002).p = rt_alloc(sizeof(P368) * (size_t)((*cell1002).hi >= (*cell1002).lo ? (*cell1002).hi - (*cell1002).lo + 1 : 0));
g_table_384 = cell1002;
}
g_out_types_389 = f_new_buffer_22();
g_out_helpers_390 = f_new_buffer_22();
g_out_protos_391 = f_new_buffer_22();
g_out_globals_392 = f_new_buffer_22();
g_out_funcs_393 = f_new_buffer_22();
g_out_init_394 = f_new_buffer_22();
g_out_excs_395 = f_new_buffer_22();
g_out_frames_402 = f_new_buffer_22();
g_code_396 = g_out_init_394;
g_no_cons_419 = f_new_cons_146();
g_ty_int_409 = f_new_typ_145(((rt_int)1LL));
g_ty_bool_410 = f_new_typ_145(((rt_int)2LL));
g_ty_float_411 = f_new_typ_145(((rt_int)3LL));
g_ty_string_413 = f_new_typ_145(((rt_int)5LL));
g_ty_void_414 = f_new_typ_145(((rt_int)9LL));
g_ty_file_415 = f_new_typ_145(((rt_int)10LL));
g_ty_nil_416 = f_new_typ_145(((rt_int)11LL));
g_ty_lock_417 = f_new_typ_145(((rt_int)13LL));
g_ty_act_418 = f_new_typ_145(((rt_int)14LL));
{ rt_frame xf1004;
if (RT_TRY(xf1004)) {
f_init_ascii_165();
f_read_source_43();
f_translate_351(f_program_131());
f_print_program_352();
RT_POP(xf1004);
} else {
RT_POP(xf1004);
int x1005 = rt_xcur;
if (0 || x1005 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1005);
}
}
}
  rt_main_done();
  return 0;
}
