#include "paleo.h"
#include <math.h>
typedef rstr *P381;
typedef struct R383 R383;
typedef struct R383 *P382;
struct R383 {  rt_int kind; rt_int line; rt_int ival; P381 s;  };
typedef struct A385 A385;
struct A385 { rt_int lo, hi, lo2, hi2; P382 *p; };
typedef A385 *P384;
typedef struct R387 R387;
typedef struct R387 *P386;
struct R387 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P381 name; P381 tag; P386 a; P386 b; P386 c; P386 d; P386 next;  };
typedef struct R389 R389;
typedef struct R389 *P388;
struct R389 {  P381 lo; P381 hi; P381 lo2; P381 hi2; P381 slen; rt_int mlo; rt_int mhi; int hasm; P386 args;  };
typedef struct R391 R391;
typedef struct R391 *P390;
typedef struct R393 R393;
typedef struct R393 *P392;
struct R393 {  P381 name; P390 t; P388 c; P386 st; P392 next;  };
struct R391 {  rt_int kind; P381 name; P386 lits; P390 elem; P390 idx; P390 idx2; P388 elemcons; P386 elemst; P390 under; P386 tparams; P392 fields; P390 target; P386 decl; P381 cname; int forward; int defined; int helpers; P390 next;  };
typedef struct R395 R395;
typedef struct R395 *P394;
struct R395 {  P381 name; rt_int mode; P390 t; P388 c; P381 cfield; P394 next;  };
typedef struct R397 R397;
typedef struct R397 *P396;
struct R397 {  rt_int kind; P381 name; P390 t; P388 c; P381 access; P381 cname; int ro_flag; rt_int mvalue; int hasmv; P386 st; P386 decl; P394 params; P390 result; rt_int depth; rt_int level; int byref; P396 members; P396 mnext; P396 chain; P396 stack;  };
typedef struct R399 R399;
typedef struct R399 *P398;
struct R399 {  P381 s; P398 next;  };
typedef struct R401 R401;
typedef struct R401 *P400;
struct R401 {  P398 head; P398 tail;  };
typedef struct A403 A403;
struct A403 { rt_int lo, hi, lo2, hi2; P396 *p; };
typedef A403 *P402;
typedef struct R405 R405;
typedef struct R405 *P404;
struct R405 {  P381 match; P381 label; rt_int depth; P404 next;  };
typedef struct R407 R407;
typedef struct R407 *P406;
struct R407 {  rt_int depth; P386 imps; int all_imp; P406 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P381 result_;
 P381 t_449;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_452;
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
 rstr letters_453;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_454;
 rstr r_455;
 rt_int i_456;
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
 P400 result_;
 P400 b_460;
};
struct f_put_25fr { int dummy;
 P400 b_23;
 rstr *s_24;
 P398 l_462;
};
struct f_emit_27fr { int dummy;
 rstr *s_26;
};
struct f_print_buffer_29fr { int dummy;
 P400 b_28;
 P398 l_464;
};
struct f_splice_32fr { int dummy;
 P400 a_30;
 P400 b_31;
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
 P382 t_466;
};
struct f_lex_line_42fr { int dummy;
 rstr *line_41;
 rt_int i_468;
 rt_int j_469;
 rt_int n_470;
 int c_471;
 rstr w_472;
 rt_int k_473;
 rstr w_477;
 rt_int k_478;
 rstr two_482;
};
struct f_read_source_43fr { int dummy;
 rstr line_483;
};
struct f_nn_46fr { int dummy;
 rt_int kind_44;
 rt_int line_45;
 P386 result_;
 P386 x_484;
};
struct f_append_50fr { int dummy;
 P386 *head_47;
 P386 *tail_48;
 P386 x_49;
};
struct f_list_len_52fr { int dummy;
 P386 l_51;
 rt_int result_;
 rt_int n_486;
 P386 p_487;
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
 P381 result_;
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
 P381 result_;
};
struct f_name_node_75fr { int dummy;
 P386 result_;
 P386 x_488;
};
struct f_id_list_76fr { int dummy;
 P386 result_;
 P386 head_489;
 P386 tail_490;
};
struct f_p_subtype_77fr { int dummy;
 P386 result_;
 rt_int line_491;
 P386 x_492;
 rstr w_493;
 P386 head_494;
 P386 tail_495;
 P386 head_496;
 P386 tail_497;
 int more_498;
 P386 names_499;
 P386 st_500;
 P386 cmp_501;
 P386 head_502;
 P386 tail_503;
 int more_504;
 P386 lit_505;
};
struct f_actual_params_78fr { int dummy;
 P386 result_;
 P386 head_506;
 P386 tail_507;
};
struct f_is_type_word_80fr { int dummy;
 rstr *w_79;
 int result_;
};
struct f_actual_tt_81fr { int dummy;
 P386 result_;
 P386 head_508;
 P386 tail_509;
 int more_510;
};
struct f_binop_86fr { int dummy;
 P381 op_82;
 P386 l_83;
 P386 r_84;
 rt_int line_85;
 P386 result_;
 P386 x_511;
};
struct f_expr_87fr { int dummy;
 P386 result_;
 P386 l_512;
 P381 op_513;
 rt_int line_514;
};
struct f_expr_and_88fr { int dummy;
 P386 result_;
 P386 l_515;
 rt_int line_516;
};
struct f_expr_not_89fr { int dummy;
 P386 result_;
 P386 x_517;
};
struct f_is_rel_91fr { int dummy;
 rstr *s_90;
 int result_;
};
struct f_expr_rel_92fr { int dummy;
 P386 result_;
 P386 l_518;
 P381 op_519;
 rt_int line_520;
};
struct f_expr_add_93fr { int dummy;
 P386 result_;
 P386 l_521;
 P381 op_522;
 rt_int line_523;
};
struct f_expr_mul_94fr { int dummy;
 P386 result_;
 P386 l_524;
 P381 op_525;
 rt_int line_526;
};
struct f_expr_pow_95fr { int dummy;
 P386 result_;
 P386 l_527;
 rt_int line_528;
};
struct f_expr_prefix_96fr { int dummy;
 P386 result_;
 P386 x_529;
};
struct f_postfix_97fr { int dummy;
 P386 result_;
 P386 p_530;
 rt_int line_531;
 P386 x_532;
 P386 head_533;
 P386 tail_534;
 int more_535;
 P386 lo_536;
 P386 r_537;
 P386 x_538;
 P386 x_539;
 P386 x_540;
};
struct f_primary_98fr { int dummy;
 P386 result_;
 rt_int line_541;
 P386 x_542;
 rt_int k_543;
 rstr w_544;
 P386 head_545;
 P386 tail_546;
 int more_547;
};
struct f_constructor_item_99fr { int dummy;
 P386 result_;
 rt_int line_548;
 P386 it_549;
 P386 first_550;
 P386 keys_551;
 P386 ktail_552;
 P386 lab_553;
 rt_int save_554;
 P386 more_555;
 P386 tail2_556;
 int ok_557;
 int go_558;
 P386 l2_559;
};
struct f_at_body_end_100fr { int dummy;
 int result_;
};
struct f_body_101fr { int dummy;
 P386 result_;
 P386 head_560;
 P386 tail_561;
};
struct f_body_element_102fr { int dummy;
 P386 result_;
 P386 x_562;
};
struct f_declaration_103fr { int dummy;
 P386 result_;
 rt_int line_563;
 P386 head_564;
 P386 tail_565;
 P386 names_566;
 P386 x_567;
};
struct f_object_decl_104fr { int dummy;
 P386 result_;
 rt_int line_568;
 int is_var_569;
 P386 names_570;
 P386 st_571;
 P386 init_572;
 P386 head_573;
 P386 tail_574;
 P386 x_575;
};
struct f_abbrev_decl_105fr { int dummy;
 P386 result_;
 P386 x_576;
};
struct f_type_decl_106fr { int dummy;
 P386 result_;
 rt_int line_577;
 P381 name_578;
 P386 params_579;
 P386 x_580;
};
struct f_mode_of_108fr { int dummy;
 rstr *w_107;
 rt_int result_;
};
struct f_formal_params_109fr { int dummy;
 P386 result_;
 P386 head_581;
 P386 tail_582;
 int more_583;
 rt_int mode_584;
 P386 names_585;
 P386 ntail_586;
 P386 st_587;
 P386 p_588;
};
struct f_imports_list_111fr { int dummy;
 P386 owner_110;
 int result_;
 P386 head_589;
 P386 tail_590;
 int more_591;
 int ro_592;
 P386 x_593;
};
struct f_is_definable_113fr { int dummy;
 rstr *w_112;
 int result_;
};
struct f_definable_name_114fr { int dummy;
 P381 result_;
};
struct f_subprogram_decl_115fr { int dummy;
 P386 result_;
 rt_int line_594;
 P386 x_595;
 int is_abn_596;
 int is_func_597;
 int dummy_598;
};
struct f_capsule_decl_116fr { int dummy;
 P386 result_;
 P386 x_599;
 int dummy_600;
 P386 head_601;
 P386 tail_602;
 int more_603;
 P386 n_604;
};
struct f_task_decl_117fr { int dummy;
 P386 result_;
 P386 x_605;
 int dummy_606;
};
struct f_expose_decl_118fr { int dummy;
 P386 result_;
 P386 x_607;
 P386 head_608;
 P386 tail_609;
 int more_610;
 P386 n_611;
};
struct f_is_compound_kw_120fr { int dummy;
 rstr *w_119;
 int result_;
};
struct f_statement_121fr { int dummy;
 P386 result_;
 P386 labels_612;
 P386 ltail_613;
 P381 match_614;
 P386 s_615;
};
struct f_unlabeled_statement_122fr { int dummy;
 P386 result_;
 rt_int line_616;
 P386 x_617;
 P386 head_618;
 P386 tail_619;
 P386 invs_620;
 P386 itail_621;
 int more_622;
 P386 target_623;
};
struct f_arm_126fr { int dummy;
 P386 cond_123;
 P386 b_124;
 rt_int line_125;
 P386 result_;
 P386 x_624;
};
struct f_if_stmt_127fr { int dummy;
 P386 result_;
 P386 x_625;
 P386 head_626;
 P386 tail_627;
 P386 cond_628;
 int go_629;
};
struct f_case_stmt_128fr { int dummy;
 P386 result_;
 P386 x_630;
 P386 head_631;
 P386 tail_632;
 P386 labs_633;
 P386 ltail_634;
 int more_635;
 P386 l_636;
};
struct f_repeat_stmt_129fr { int dummy;
 P386 result_;
 P386 x_637;
};
struct f_guard_stmt_130fr { int dummy;
 P386 result_;
 P386 x_638;
 P386 head_639;
 P386 tail_640;
 P386 h_641;
};
struct f_program_131fr { int dummy;
 P386 result_;
 P386 head_642;
 P386 tail_643;
};
struct f_hash_133fr { int dummy;
 rstr *s_132;
 rt_int result_;
 rt_int h_644;
 rt_int i_645;
};
struct f_lookup_135fr { int dummy;
 rstr *name_134;
 P396 result_;
 P396 y_649;
};
struct f_lookup_decl_137fr { int dummy;
 P386 d_136;
 P396 result_;
 P396 y_650;
};
struct f_define_140fr { int dummy;
 P396 y_138;
 rt_int line_139;
 rt_int h_651;
 P396 z_652;
};
struct f_overloadable_142fr { int dummy;
 P396 y_141;
 int result_;
};
struct f_same_signature_145fr { int dummy;
 P394 a_143;
 P394 b_144;
 int result_;
 P394 x_653;
 P394 y_654;
};
struct f_open_scope_146fr { int dummy;
};
struct f_close_scope_147fr { int dummy;
};
struct f_new_sym_150fr { int dummy;
 rt_int kind_148;
 P381 name_149;
 P396 result_;
 P396 y_655;
};
struct f_new_typ_152fr { int dummy;
 rt_int kind_151;
 P390 result_;
 P390 t_657;
};
struct f_new_cons_153fr { int dummy;
 P388 result_;
 P388 c_659;
};
struct f_same_lits_156fr { int dummy;
 P386 a_154;
 P386 b_155;
 int result_;
 P386 x_661;
 P386 y_662;
};
struct f_same_159fr { int dummy;
 P390 a_157;
 P390 b_158;
 int result_;
 P392 f_663;
 P392 g_664;
};
struct f_kind_name_161fr { int dummy;
 P390 t_160;
 rstr result_;
};
struct f_check_type_165fr { int dummy;
 P390 got_162;
 P390 want_163;
 rt_int line_164;
};
struct f_ctype_167fr { int dummy;
 P390 t_166;
 rstr result_;
};
struct f_field_decls_169fr { int dummy;
 P390 t_168;
 rstr result_;
 P392 f_667;
 P381 s_668;
};
struct f_declare_ctype_171fr { int dummy;
 P390 t_170;
 P390 u_669;
 P390 target_670;
 P386 p_671;
 P381 fs_672;
};
struct f_init_ascii_172fr { int dummy;
 rstr names_673;
 P386 head_674;
 P386 tail_675;
 rt_int start_676;
 rt_int i_677;
 P386 lit_681;
};
struct f_lit_index_175fr { int dummy;
 P386 lits_173;
 rstr *name_174;
 rt_int result_;
 rt_int i_682;
 P386 l_683;
};
struct f_resolve_subtype_178fr { int dummy;
 P386 st_176;
 P388 *c_177;
 P390 result_;
 P390 t_684;
 int ok_685;
 P390 dummy_686;
 P388 ic_688;
 P388 ic2_689;
 P388 ec_690;
 P390 it_691;
 P390 et_692;
 P388 ec_693;
 P386 comp_694;
 P392 tail_695;
 P388 cc_696;
 P392 f_697;
 P388 ec_699;
 P396 y_700;
};
struct f_new_type_182fr { int dummy;
 P396 y_179;
 P386 st_180;
 P388 *c_181;
 P390 result_;
 P386 d_701;
 P386 p_702;
 P388 uc_703;
 P396 z_704;
};
struct f_init_storage_186fr { int dummy;
 rstr *lval_183;
 P390 t_184;
 P388 c_185;
 P386 p_705;
 P386 a_706;
 P388 uc_707;
 P390 ut_708;
 P390 at_709;
 rstr v_710;
 P396 z_711;
 rstr i_712;
 P392 f_713;
};
struct f_manifest_189fr { int dummy;
 P386 e_187;
 int *ok_188;
 rt_int result_;
 rt_int a_714;
 rt_int b_715;
 int ok2_716;
 P396 y_717;
};
struct f_mcopy_191fr { int dummy;
 P390 t_190;
 rstr result_;
 rstr ct_718;
 rstr name_719;
 P398 l_720;
};
struct f_composite_193fr { int dummy;
 P390 t_192;
 int result_;
};
struct f_assign_code_198fr { int dummy;
 rstr *lval_194;
 P390 t_195;
 rstr *v_196;
 P388 c_197;
 rstr result_;
};
struct f_copy_code_201fr { int dummy;
 P390 t_199;
 rstr *v_200;
 rstr result_;
};
struct f_eq_code_205fr { int dummy;
 P390 t_202;
 rstr *a_203;
 rstr *b_204;
 rstr result_;
};
struct f_elem_assign_209fr { int dummy;
 rstr *lval_206;
 P390 t_207;
 rstr *v_208;
 rstr result_;
};
struct f_seen_name_212fr { int dummy;
 P398 l_210;
 rstr *s_211;
 int result_;
 P398 p_722;
};
struct f_emit_helpers_213fr { int dummy;
 P390 order_723;
 P390 t_724;
 P398 done_725;
 P398 l_726;
 rstr c_727;
};
struct f_helper_bodies_215fr { int dummy;
 P390 t_214;
 rstr c_729;
 P400 b_730;
 P390 e_731;
 P386 p_732;
 P381 pc_733;
 P392 f_734;
 P381 conds_735;
 rstr fn_736;
 rstr fn_737;
};
struct f_declare_body_217fr { int dummy;
 P386 elems_216;
 P386 e_738;
 P396 y_739;
 P396 y_740;
 P396 y_741;
 P390 t_742;
 P396 y_743;
};
struct f_manifest_const_219fr { int dummy;
 P386 d_218;
 int ok_744;
 rt_int v_745;
 P396 y_746;
 P388 c_747;
};
struct f_exported_223fr { int dummy;
 P386 d_220;
 rstr *name_221;
 int *ro_222;
 int result_;
 P386 p_748;
};
struct f_copy_sym_225fr { int dummy;
 P396 y_224;
 P396 result_;
 P396 z_749;
};
struct f_gen_capsule_227fr { int dummy;
 P386 d_226;
 P396 y_751;
 P406 ctx_752;
 P396 m_753;
 P386 p_754;
 int ro_755;
 P396 z_757;
};
struct f_gen_expose_229fr { int dummy;
 P386 d_228;
 P396 y_758;
 P396 m_759;
 P386 p_760;
 int found_761;
 P396 z_762;
};
struct f_finish_ptr_231fr { int dummy;
 P390 t_230;
 P386 d_763;
 P386 p_764;
 P388 c_765;
 rstr dummy_766;
 P396 y_767;
};
struct f_declare_subprogram_233fr { int dummy;
 P386 d_232;
 P396 y_768;
 P386 p_769;
 P394 tail_770;
 P394 pm_771;
 P388 rc_773;
};
struct f_element_235fr { int dummy;
 P386 e_234;
 rt_int k_774;
 P390 t_775;
 rstr c_776;
};
struct f_storage_238fr { int dummy;
 rstr *name_236;
 P390 t_237;
 rstr result_;
 rstr g_777;
 rstr f_778;
};
struct f_bind_241fr { int dummy;
 P396 y_239;
 rstr *access_240;
};
struct f_var_decl_243fr { int dummy;
 P386 d_242;
 P388 c_779;
 P390 t_780;
 P396 y_781;
 rstr access_782;
 P390 vt_783;
 rstr v_784;
};
struct f_const_decl_245fr { int dummy;
 P386 d_244;
 P388 c_785;
 P390 t_786;
 P390 vt_787;
 P396 y_788;
 int ok_789;
 rstr v_790;
 rstr access_791;
};
struct f_subprogram_247fr { int dummy;
 P386 d_246;
 P396 y_792;
 P400 saved_code_793;
 P400 saved_fields_794;
 int saved_in_795;
 P396 saved_sym_796;
 P404 saved_exits_797;
 rt_int saved_frames_798;
 P381 args_799;
 P394 pm_800;
 P398 saved_handlers_801;
 P398 saved_cleanups_802;
 P406 ctx_803;
 P381 head_804;
 P381 frame_805;
 P381 parent_806;
 rstr ct_808;
 rstr f_809;
 P396 p_810;
};
struct f_body_elements_249fr { int dummy;
 P386 elems_248;
 P386 e_811;
};
struct f_gen_body_251fr { int dummy;
 P386 elems_250;
};
struct f_pop_frames_253fr { int dummy;
 rt_int upto_252;
 rt_int i_812;
 P398 c_813;
};
struct f_push_cleanup_255fr { int dummy;
 rstr *s_254;
 P398 c_814;
};
struct f_pop_cleanup_256fr { int dummy;
};
struct f_gen_statement_258fr { int dummy;
 P386 s_257;
 P381 label_816;
 P404 x_817;
};
struct f_st_assign_260fr { int dummy;
 P386 s_259;
 P381 lv_820;
 P390 t_821;
 P390 vt_822;
 P388 c_823;
 int ro_824;
 rstr lo_825;
 rstr hi_826;
 rstr v_827;
 rstr v_828;
};
struct f_st_call_262fr { int dummy;
 P386 s_261;
 P386 c_829;
 P390 t_830;
 P386 x_831;
};
struct f_st_if_264fr { int dummy;
 P386 s_263;
 P386 a_832;
 int first_833;
 P390 t_834;
 rstr c_835;
};
struct f_st_case_266fr { int dummy;
 P386 s_265;
 P390 st_836;
 P390 vt_837;
 int first_838;
 P386 a_839;
 rstr sel_840;
 rstr tmp_841;
 P386 lab_842;
 P381 conds_843;
 rstr v_844;
 rstr lo_845;
 rstr hi_846;
};
struct f_st_repeat_268fr { int dummy;
 P386 s_267;
 P390 t_847;
 P388 c_848;
 rstr cond_849;
 rstr access_850;
 rstr lov_851;
 rstr hiv_852;
 rstr it_853;
 P396 y_854;
};
struct f_st_exit_270fr { int dummy;
 P386 s_269;
 P404 x_855;
};
struct f_st_return_272fr { int dummy;
 P386 s_271;
 P390 vt_856;
 rstr v_857;
};
struct f_exc_id_275fr { int dummy;
 rstr *name_273;
 rt_int line_274;
 rstr result_;
 P396 y_858;
};
struct f_st_guard_277fr { int dummy;
 P386 s_276;
 P386 h_859;
 int first_860;
 P398 hv_861;
 rstr f_862;
 rstr x_863;
 P386 n_865;
 P381 conds_866;
};
struct f_st_alloc_279fr { int dummy;
 P386 s_278;
 P381 lv_867;
 P390 t_868;
 P390 target_869;
 P390 vt_870;
 P388 c_871;
 P388 tc_872;
 int ro_873;
 P386 d_874;
 P386 p_875;
 P386 a_876;
 rstr tcn_877;
 rstr cell_878;
 rstr v_879;
 rstr pv_880;
 P396 y_881;
 rstr v_882;
};
struct f_act_ref_281fr { int dummy;
 P386 e_280;
 rstr result_;
 P381 lv_883;
 P390 t_884;
 P388 c_885;
 int ro_886;
};
struct f_st_create_283fr { int dummy;
 P386 s_282;
 P396 y_887;
 P394 pm_888;
 P386 a_889;
 P381 lv_890;
 P390 lt_891;
 P390 vt_892;
 P388 lc_893;
 int ro_894;
 rstr nf_895;
 rstr act_896;
 P381 link_897;
 rt_int i_898;
 rstr v_902;
};
struct f_wait_alt_287fr { int dummy;
 P386 inv_284;
 rstr *arr_285;
 rt_int i_286;
 rstr result_;
 P381 lv_903;
 P390 t_904;
 P390 vt_905;
 P388 c_906;
 int ro_907;
 P386 fn_908;
 P386 args_909;
 rstr slot_910;
 P381 dv_911;
 P390 dt_912;
 rstr tmp_913;
 rstr v_914;
 rstr v_915;
};
struct f_st_wait_289fr { int dummy;
 P386 s_288;
 P386 a_916;
 rt_int n_917;
 int first_918;
 P400 inits_919;
 rstr arr_920;
 rstr w_921;
 P386 inv_922;
 P381 conds_923;
 rt_int i_924;
};
struct f_st_region_291fr { int dummy;
 P386 s_290;
 P381 lv_928;
 P390 t_929;
 P388 c_930;
 int ro_931;
 rstr lk_932;
 rstr f_933;
};
struct f_access_of_293fr { int dummy;
 P396 y_292;
 rstr result_;
 P381 p_934;
 rt_int i_935;
};
struct f_import_of_296fr { int dummy;
 P386 l_294;
 rstr *name_295;
 P386 result_;
 P386 p_939;
};
struct f_check_import_299fr { int dummy;
 P396 y_297;
 rt_int line_298;
 int result_;
 P406 c_940;
 int ro_941;
 P386 imp_942;
};
struct f_c_ident_301fr { int dummy;
 rstr *s_300;
 rstr result_;
};
struct f_deref_304fr { int dummy;
 rstr *base_302;
 P390 t_303;
 rstr result_;
};
struct f_is_lvalue_306fr { int dummy;
 P386 e_305;
 int result_;
 P396 y_943;
};
struct f_lvalue_312fr { int dummy;
 P386 e_307;
 P381 *code_308;
 P390 *t_309;
 P388 *c_310;
 int *ro_311;
 P381 base_944;
 P390 bt_945;
 P388 bc_946;
 P396 y_947;
};
struct f_select_on_320fr { int dummy;
 rstr *base_313;
 P390 bt_314;
 P386 e_315;
 int *ro_316;
 P381 *code_317;
 P390 *t_318;
 P388 *c_319;
 P386 p_948;
 P392 f_949;
};
struct f_index_on_329fr { int dummy;
 rstr *base_321;
 P390 bt_322;
 P386 e_323;
 int *ro_324;
 int lv_325;
 P381 *code_326;
 P390 *t_327;
 P388 *c_328;
 P386 a_950;
 P390 it_951;
 rstr i_952;
 rstr j_953;
 rstr lo_954;
 rstr hi_955;
 rstr i_956;
 rstr i_957;
};
struct f_gexpr_333fr { int dummy;
 P386 e_330;
 P390 want_331;
 P390 *t_332;
 rstr result_;
 rt_int k_958;
 P381 code_959;
 P388 c_960;
 int ro_961;
 P390 bt_962;
 rt_int i_963;
 P396 y_964;
 int ro_965;
 P386 call_966;
 P386 fname_967;
 rstr a_968;
 rstr a_969;
 rstr a_970;
 P386 nm_971;
 P396 y_972;
 rstr base_973;
 rstr base_974;
};
struct f_copy_node_335fr { int dummy;
 P386 e_334;
 P386 result_;
 P386 x_975;
};
struct f_wrap_apply_337fr { int dummy;
 P386 e_336;
 P386 result_;
 P386 x_977;
};
struct f_c_string_339fr { int dummy;
 rstr *s_338;
 rstr result_;
 rt_int n_978;
 rt_int i_979;
 rstr r_983;
 rt_int j_984;
 rt_int i_985;
};
struct f_enum_type_of_342fr { int dummy;
 rstr *lit_340;
 rt_int line_341;
 P390 result_;
 P396 y_989;
 P388 c_990;
};
struct f_attribute_345fr { int dummy;
 P386 e_343;
 P390 *t_344;
 rstr result_;
 P390 bt_991;
 P388 c_992;
 P381 base_993;
 P396 y_994;
 P386 st_995;
};
struct f_gbinop_349fr { int dummy;
 P386 e_346;
 P390 want_347;
 P390 *t_348;
 rstr result_;
 P381 op_996;
 P390 ta_997;
 P390 tb_998;
 P390 hint_999;
 P396 uy_1000;
 P386 l_1001;
 P386 r_1002;
 P386 call_1003;
 P386 fname_1004;
 rstr s_1005;
 rstr a_1006;
 rstr a_1007;
 rstr b_1008;
 rstr a_1009;
 rstr b_1010;
 P390 wa_1011;
 P390 wb_1012;
 rstr a_1013;
 rstr b_1014;
 rstr dummy_1015;
 rstr a_1016;
 rstr b_1017;
 P390 ct_1018;
 rstr a_1019;
 rstr b_1020;
};
struct f_constructor_353fr { int dummy;
 P386 e_350;
 P390 want_351;
 P390 *t_352;
 rstr result_;
 P386 it_1021;
 P392 f_1022;
 P390 vt_1023;
 P381 s_1024;
 rstr v_1025;
 rstr tmp_1026;
 rstr ct_1027;
 rstr et_1028;
 P381 parts_1029;
 rstr lo_1030;
 rstr hi_1031;
 rstr v_1032;
 rt_int i_1033;
 rstr v_1037;
 rstr tmp_1038;
 P381 parts_1039;
 rstr v_1040;
};
struct f_fits_356fr { int dummy;
 P396 y_354;
 P386 args_355;
 int result_;
 P386 a_1041;
 P394 pm_1042;
 P390 t_1043;
 P400 saved_1044;
 int ok_1045;
 P381 lv_1046;
 P388 lc_1047;
 int ro_1048;
 rstr v_1051;
};
struct f_resolve_overload_361fr { int dummy;
 rstr *name_357;
 P386 args_358;
 int is_stmt_359;
 rt_int line_360;
 P396 result_;
 P396 y_1052;
 P396 first_1053;
 rt_int n_1054;
};
struct f_is_builtin_363fr { int dummy;
 rstr *n_362;
 int result_;
};
struct f_user_op_366fr { int dummy;
 rstr *op_364;
 P386 args_365;
 P396 result_;
 P396 y_1055;
};
struct f_gcall_370fr { int dummy;
 P386 e_367;
 int is_stmt_368;
 P390 *t_369;
 rstr result_;
 P386 fn_1056;
 P386 tt_1057;
 P396 y_1058;
 P381 args_1059;
 P386 a_1060;
 P394 pm_1061;
 P390 lt_1062;
 P390 vt_1063;
 P381 lv_1064;
 P388 lc_1065;
 int ro_1066;
 rt_int i_1067;
 rstr v_1071;
 rstr ct_1072;
 rstr v_1073;
};
struct f_builtin_377fr { int dummy;
 rstr *name_371;
 P386 tt_372;
 P386 args_373;
 rt_int line_374;
 int is_stmt_375;
 P390 *t_376;
 rstr result_;
 P390 at_1074;
 rt_int n_1075;
 rstr a_1076;
 rstr a_1077;
 rstr a_1078;
 rstr a_1079;
 rstr a_1080;
 rstr n1_1081;
 rstr m1_1082;
 rstr a_1083;
 rstr a_1084;
 P386 last_1085;
 rstr a_1086;
 rstr a_1087;
 P381 lv_1088;
 P388 lc_1089;
 int ro_1090;
 P386 last_1091;
 P381 lv_1092;
 P381 dv_1093;
 P388 lc_1094;
 int ro_1095;
 P390 mt_1096;
 P390 dt_1097;
 rstr v_1098;
 rstr v_1099;
 rstr v_1100;
 rstr v_1101;
 rstr a_1102;
};
struct f_translate_379fr { int dummy;
 P386 units_378;
 P386 u_1103;
};
struct f_print_program_380fr { int dummy;
};
static void as_R407(R407 *d, R407 s);
static R407 cp_R407(R407 s);
static int eq_R407(R407 a, R407 b);
static void as_R405(R405 *d, R405 s);
static R405 cp_R405(R405 s);
static int eq_R405(R405 a, R405 b);
static void as_A403(A403 *d, A403 s);
static A403 cp_A403(A403 s);
static int eq_A403(A403 a, A403 b);
static void as_R401(R401 *d, R401 s);
static R401 cp_R401(R401 s);
static int eq_R401(R401 a, R401 b);
static void as_R399(R399 *d, R399 s);
static R399 cp_R399(R399 s);
static int eq_R399(R399 a, R399 b);
static void as_R397(R397 *d, R397 s);
static R397 cp_R397(R397 s);
static int eq_R397(R397 a, R397 b);
static void as_R395(R395 *d, R395 s);
static R395 cp_R395(R395 s);
static int eq_R395(R395 a, R395 b);
static void as_R393(R393 *d, R393 s);
static R393 cp_R393(R393 s);
static int eq_R393(R393 a, R393 b);
static void as_R391(R391 *d, R391 s);
static R391 cp_R391(R391 s);
static int eq_R391(R391 a, R391 b);
static void as_R389(R389 *d, R389 s);
static R389 cp_R389(R389 s);
static int eq_R389(R389 a, R389 b);
static void as_R387(R387 *d, R387 s);
static R387 cp_R387(R387 s);
static int eq_R387(R387 a, R387 b);
static void as_A385(A385 *d, A385 s);
static A385 cp_A385(A385 s);
static int eq_A385(A385 a, A385 b);
static void as_R383(R383 *d, R383 s);
static R383 cp_R383(R383 s);
static int eq_R383(R383 a, R383 b);
static P381 f_mk_3(rstr *s_2);
static rstr f_chs_5(int c_4);
static rstr f_itos_7(rt_int n_6);
static int f_is_letter_9(int c_8);
static int f_is_digit_11(int c_10);
static int f_upper_13(int c_12);
static rstr f_lower_s_15(rstr *s_14);
static rstr f_q_16(void);
static rstr f_new_name_18(rstr *base_17);
static void f_fail_21(rt_int line_19, rstr *msg_20);
static P400 f_new_buffer_22(void);
static void f_put_25(P400 b_23, rstr *s_24);
static void f_emit_27(rstr *s_26);
static void f_print_buffer_29(P400 b_28);
static void f_splice_32(P400 a_30, P400 b_31);
static int f_is_reserved_34(rstr *w_33);
static int f_is_word_op_36(rstr *w_35);
static void f_add_token_40(rt_int kind_37, rstr *s_38, rt_int ival_39);
static void f_lex_line_42(rstr *line_41);
static void f_read_source_43(void);
static P386 f_nn_46(rt_int kind_44, rt_int line_45);
static void f_append_50(P386 *head_47, P386 *tail_48, P386 x_49);
static rt_int f_list_len_52(P386 l_51);
static rt_int f_cur_line_53(void);
static int f_at_kw_55(rstr *w_54);
static int f_at_op_57(rstr *w_56);
static int f_at_kind_59(rt_int k_58);
static rt_int f_kind_at_61(rt_int k_60);
static P381 f_text_at_63(rt_int k_62);
static void f_perror_65(rstr *msg_64);
static int f_accept_kw_67(rstr *w_66);
static int f_accept_op_69(rstr *w_68);
static void f_expect_kw_71(rstr *w_70);
static void f_expect_op_73(rstr *w_72);
static P381 f_expect_id_74(void);
static P386 f_name_node_75(void);
static P386 f_id_list_76(void);
static P386 f_p_subtype_77(void);
static P386 f_actual_params_78(void);
static int f_is_type_word_80(rstr *w_79);
static P386 f_actual_tt_81(void);
static P386 f_binop_86(P381 op_82, P386 l_83, P386 r_84, rt_int line_85);
static P386 f_expr_87(void);
static P386 f_expr_and_88(void);
static P386 f_expr_not_89(void);
static int f_is_rel_91(rstr *s_90);
static P386 f_expr_rel_92(void);
static P386 f_expr_add_93(void);
static P386 f_expr_mul_94(void);
static P386 f_expr_pow_95(void);
static P386 f_expr_prefix_96(void);
static P386 f_postfix_97(void);
static P386 f_primary_98(void);
static P386 f_constructor_item_99(void);
static int f_at_body_end_100(void);
static P386 f_body_101(void);
static P386 f_body_element_102(void);
static P386 f_declaration_103(void);
static P386 f_object_decl_104(void);
static P386 f_abbrev_decl_105(void);
static P386 f_type_decl_106(void);
static rt_int f_mode_of_108(rstr *w_107);
static P386 f_formal_params_109(void);
static int f_imports_list_111(P386 owner_110);
static int f_is_definable_113(rstr *w_112);
static P381 f_definable_name_114(void);
static P386 f_subprogram_decl_115(void);
static P386 f_capsule_decl_116(void);
static P386 f_task_decl_117(void);
static P386 f_expose_decl_118(void);
static int f_is_compound_kw_120(rstr *w_119);
static P386 f_statement_121(void);
static P386 f_unlabeled_statement_122(void);
static P386 f_arm_126(P386 cond_123, P386 b_124, rt_int line_125);
static P386 f_if_stmt_127(void);
static P386 f_case_stmt_128(void);
static P386 f_repeat_stmt_129(void);
static P386 f_guard_stmt_130(void);
static P386 f_program_131(void);
static rt_int f_hash_133(rstr *s_132);
static P396 f_lookup_135(rstr *name_134);
static P396 f_lookup_decl_137(P386 d_136);
static void f_define_140(P396 y_138, rt_int line_139);
static int f_overloadable_142(P396 y_141);
static int f_same_signature_145(P394 a_143, P394 b_144);
static void f_open_scope_146(void);
static void f_close_scope_147(void);
static P396 f_new_sym_150(rt_int kind_148, P381 name_149);
static P390 f_new_typ_152(rt_int kind_151);
static P388 f_new_cons_153(void);
static int f_same_lits_156(P386 a_154, P386 b_155);
static int f_same_159(P390 a_157, P390 b_158);
static rstr f_kind_name_161(P390 t_160);
static void f_check_type_165(P390 got_162, P390 want_163, rt_int line_164);
static rstr f_ctype_167(P390 t_166);
static rstr f_field_decls_169(P390 t_168);
static void f_declare_ctype_171(P390 t_170);
static void f_init_ascii_172(void);
static rt_int f_lit_index_175(P386 lits_173, rstr *name_174);
static P390 f_resolve_subtype_178(P386 st_176, P388 *c_177);
static P390 f_new_type_182(P396 y_179, P386 st_180, P388 *c_181);
static void f_init_storage_186(rstr *lval_183, P390 t_184, P388 c_185);
static rt_int f_manifest_189(P386 e_187, int *ok_188);
static rstr f_mcopy_191(P390 t_190);
static int f_composite_193(P390 t_192);
static rstr f_assign_code_198(rstr *lval_194, P390 t_195, rstr *v_196, P388 c_197);
static rstr f_copy_code_201(P390 t_199, rstr *v_200);
static rstr f_eq_code_205(P390 t_202, rstr *a_203, rstr *b_204);
static rstr f_elem_assign_209(rstr *lval_206, P390 t_207, rstr *v_208);
static int f_seen_name_212(P398 l_210, rstr *s_211);
static void f_emit_helpers_213(void);
static void f_helper_bodies_215(P390 t_214);
static void f_declare_body_217(P386 elems_216);
static void f_manifest_const_219(P386 d_218);
static int f_exported_223(P386 d_220, rstr *name_221, int *ro_222);
static P396 f_copy_sym_225(P396 y_224);
static void f_gen_capsule_227(P386 d_226);
static void f_gen_expose_229(P386 d_228);
static void f_finish_ptr_231(P390 t_230);
static void f_declare_subprogram_233(P386 d_232);
static void f_element_235(P386 e_234);
static rstr f_storage_238(rstr *name_236, P390 t_237);
static void f_bind_241(P396 y_239, rstr *access_240);
static void f_var_decl_243(P386 d_242);
static void f_const_decl_245(P386 d_244);
static void f_subprogram_247(P386 d_246);
static void f_body_elements_249(P386 elems_248);
static void f_gen_body_251(P386 elems_250);
static void f_pop_frames_253(rt_int upto_252);
static void f_push_cleanup_255(rstr *s_254);
static void f_pop_cleanup_256(void);
static void f_gen_statement_258(P386 s_257);
static void f_st_assign_260(P386 s_259);
static void f_st_call_262(P386 s_261);
static void f_st_if_264(P386 s_263);
static void f_st_case_266(P386 s_265);
static void f_st_repeat_268(P386 s_267);
static void f_st_exit_270(P386 s_269);
static void f_st_return_272(P386 s_271);
static rstr f_exc_id_275(rstr *name_273, rt_int line_274);
static void f_st_guard_277(P386 s_276);
static void f_st_alloc_279(P386 s_278);
static rstr f_act_ref_281(P386 e_280);
static void f_st_create_283(P386 s_282);
static rstr f_wait_alt_287(P386 inv_284, rstr *arr_285, rt_int i_286);
static void f_st_wait_289(P386 s_288);
static void f_st_region_291(P386 s_290);
static rstr f_access_of_293(P396 y_292);
static P386 f_import_of_296(P386 l_294, rstr *name_295);
static int f_check_import_299(P396 y_297, rt_int line_298);
static rstr f_c_ident_301(rstr *s_300);
static rstr f_deref_304(rstr *base_302, P390 t_303);
static int f_is_lvalue_306(P386 e_305);
static void f_lvalue_312(P386 e_307, P381 *code_308, P390 *t_309, P388 *c_310, int *ro_311);
static void f_select_on_320(rstr *base_313, P390 bt_314, P386 e_315, int *ro_316, P381 *code_317, P390 *t_318, P388 *c_319);
static void f_index_on_329(rstr *base_321, P390 bt_322, P386 e_323, int *ro_324, int lv_325, P381 *code_326, P390 *t_327, P388 *c_328);
static rstr f_gexpr_333(P386 e_330, P390 want_331, P390 *t_332);
static P386 f_copy_node_335(P386 e_334);
static P386 f_wrap_apply_337(P386 e_336);
static rstr f_c_string_339(rstr *s_338);
static P390 f_enum_type_of_342(rstr *lit_340, rt_int line_341);
static rstr f_attribute_345(P386 e_343, P390 *t_344);
static rstr f_gbinop_349(P386 e_346, P390 want_347, P390 *t_348);
static rstr f_constructor_353(P386 e_350, P390 want_351, P390 *t_352);
static int f_fits_356(P396 y_354, P386 args_355);
static P396 f_resolve_overload_361(rstr *name_357, P386 args_358, int is_stmt_359, rt_int line_360);
static int f_is_builtin_363(rstr *n_362);
static P396 f_user_op_366(rstr *op_364, P386 args_365);
static rstr f_gcall_370(P386 e_367, int is_stmt_368, P390 *t_369);
static rstr f_builtin_377(rstr *name_371, P386 tt_372, P386 args_373, rt_int line_374, int is_stmt_375, P390 *t_376);
static void f_translate_379(P386 units_378);
static void f_print_program_380(void);
static int ex_compile_error_1;
static P384 g_toks_408;
static rt_int g_ntoks_409;
static rt_int g_tpos_410;
static rt_int g_src_line_411;
static P402 g_table_412;
static rt_int g_depth_413;
static P396 g_scope_stack_414;
static P390 g_all_types_415;
static rt_int g_serial_416;
static P400 g_out_types_417;
static P400 g_out_helpers_418;
static P400 g_out_protos_419;
static P400 g_out_globals_420;
static P400 g_out_funcs_421;
static P400 g_out_init_422;
static P400 g_out_excs_423;
static P400 g_code_424;
static P400 g_fields_buf_425;
static int g_in_func_426;
static rt_int g_cur_level_427;
static P406 g_fctx_428;
static P381 g_st_field_429;
static P400 g_out_frames_430;
static P396 g_func_sym_431;
static P404 g_exits_432;
static rt_int g_frames_433;
static P398 g_handlers_434;
static P398 g_cleanups_435;
static rt_int g_trial_436;
static P398 g_mcopies_437;
static P390 g_ty_int_438;
static P390 g_ty_bool_439;
static P390 g_ty_float_440;
static P390 g_ty_ascii_441;
static P390 g_ty_string_442;
static P390 g_ty_void_443;
static P390 g_ty_file_444;
static P390 g_ty_nil_445;
static P390 g_ty_lock_446;
static P390 g_ty_act_447;
static P388 g_no_cons_448;
static P381 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_449 = NULL;
{ rstr *cell450 = rt_alloc(sizeof(rstr));
rt_int pv451 = ((*F->s_2)).len;
(*cell450) = rt_str_new(pv451);
rt_str_assign(&(*cell450), (*F->s_2));
F->t_449 = cell450;
}
F->result_ = F->t_449;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_452 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_452, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_452;
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
F->letters_453 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_453, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_454 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_455 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_455, (*F->s_14));
{ rt_int lo457 = ((rt_int)1LL), hi458 = ((*F->s_14)).len;
for (rt_int it459 = lo457; it459 <= hi458; it459++) {
F->i_456 = it459;
if (((65 <= rt_str_get(F->r_455, F->i_456)) && (rt_str_get(F->r_455, F->i_456) <= 90))) {
(*rt_str_at(&F->r_455, F->i_456)) = rt_str_get(F->letters_454, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_455, F->i_456)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_455;
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
g_serial_416 = rt_add(g_serial_416, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_17), f_itos_7(g_serial_416));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_21(rt_int line_19, rstr *msg_20) {
  struct f_fail_21fr *F = rt_alloc(sizeof *F);
F->line_19 = line_19;
F->msg_20 = msg_20;
if ((g_trial_436 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_19)), rt_str(": ", 2)), (*F->msg_20)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P400 f_new_buffer_22(void) {
  struct f_new_buffer_22fr *F = rt_alloc(sizeof *F);
F->b_460 = NULL;
{ R401 *cell461 = rt_alloc(sizeof(R401));
(*cell461).head = NULL;
(*cell461).tail = NULL;
F->b_460 = cell461;
}
F->result_ = F->b_460;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_25(P400 b_23, rstr *s_24) {
  struct f_put_25fr *F = rt_alloc(sizeof *F);
F->b_23 = b_23;
F->s_24 = s_24;
F->l_462 = NULL;
{ R399 *cell463 = rt_alloc(sizeof(R399));
(*cell463).s = NULL;
(*cell463).next = NULL;
F->l_462 = cell463;
}
(*(P398)rt_nil_check(F->l_462)).s = f_mk_3(&(*F->s_24));
if (((*(P400)rt_nil_check(F->b_23)).tail == NULL)) {
(*(P400)rt_nil_check(F->b_23)).head = F->l_462;
} else {
(*(P398)rt_nil_check((*(P400)rt_nil_check(F->b_23)).tail)).next = F->l_462;
}
(*(P400)rt_nil_check(F->b_23)).tail = F->l_462;
ret_:
  return;
}

static void f_emit_27(rstr *s_26) {
  struct f_emit_27fr *F = rt_alloc(sizeof *F);
F->s_26 = s_26;
f_put_25(g_code_424, &(*F->s_26));
ret_:
  return;
}

static void f_print_buffer_29(P400 b_28) {
  struct f_print_buffer_29fr *F = rt_alloc(sizeof *F);
F->b_28 = b_28;
F->l_464 = NULL;
F->l_464 = (*(P400)rt_nil_check(F->b_28)).head;
while ((F->l_464 != NULL)) {
rt_putln((*(P381)rt_nil_check((*(P398)rt_nil_check(F->l_464)).s)));
F->l_464 = (*(P398)rt_nil_check(F->l_464)).next;
}
ret_:
  return;
}

static void f_splice_32(P400 a_30, P400 b_31) {
  struct f_splice_32fr *F = rt_alloc(sizeof *F);
F->a_30 = a_30;
F->b_31 = b_31;
if (((*(P400)rt_nil_check(F->b_31)).head == NULL)) {
goto ret_;
}
if (((*(P400)rt_nil_check(F->a_30)).tail == NULL)) {
(*(P400)rt_nil_check(F->a_30)).head = (*(P400)rt_nil_check(F->b_31)).head;
} else {
(*(P398)rt_nil_check((*(P400)rt_nil_check(F->a_30)).tail)).next = (*(P400)rt_nil_check(F->b_31)).head;
}
(*(P400)rt_nil_check(F->a_30)).tail = (*(P400)rt_nil_check(F->b_31)).tail;
(*(P400)rt_nil_check(F->b_31)).head = NULL;
(*(P400)rt_nil_check(F->b_31)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_34(rstr *w_33) {
  struct f_is_reserved_34fr *F = rt_alloc(sizeof *F);
F->w_33 = w_33;
{ rstr sel465 = (*F->w_33);
if (0 || rt_str_eq(sel465, rt_str("ABBREV", 6)) || rt_str_eq(sel465, rt_str("ABNORMAL", 8)) || rt_str_eq(sel465, rt_str("ALL", 3)) || rt_str_eq(sel465, rt_str("ALLOC", 5)) || rt_str_eq(sel465, rt_str("ASSERT", 6)) || rt_str_eq(sel465, rt_str("BEGIN", 5)) || rt_str_eq(sel465, rt_str("BY", 2)) || rt_str_eq(sel465, rt_str("CAPSULE", 7)) || rt_str_eq(sel465, rt_str("CASE", 4)) || rt_str_eq(sel465, rt_str("CONST", 5)) || rt_str_eq(sel465, rt_str("CREATE", 6)) || rt_str_eq(sel465, rt_str("DO", 2)) || rt_str_eq(sel465, rt_str("ELSE", 4)) || rt_str_eq(sel465, rt_str("ELSEIF", 6)) || rt_str_eq(sel465, rt_str("END", 3)) || rt_str_eq(sel465, rt_str("EXCEPTION", 9)) || rt_str_eq(sel465, rt_str("EXIT", 4)) || rt_str_eq(sel465, rt_str("EXPORTS", 7)) || rt_str_eq(sel465, rt_str("EXPOSE", 6)) || rt_str_eq(sel465, rt_str("EXTERNAL", 8)) || rt_str_eq(sel465, rt_str("FOR", 3)) || rt_str_eq(sel465, rt_str("FROM", 4)) || rt_str_eq(sel465, rt_str("FUNC", 4)) || rt_str_eq(sel465, rt_str("GENERIC", 7)) || rt_str_eq(sel465, rt_str("GOTO", 4)) || rt_str_eq(sel465, rt_str("GUARD", 5)) || rt_str_eq(sel465, rt_str("IF", 2)) || rt_str_eq(sel465, rt_str("IMPORTS", 7)) || rt_str_eq(sel465, rt_str("LOCATION", 8)) || rt_str_eq(sel465, rt_str("NAMED", 5)) || rt_str_eq(sel465, rt_str("NEEDS", 5)) || rt_str_eq(sel465, rt_str("NEW", 3)) || rt_str_eq(sel465, rt_str("NONE", 4)) || rt_str_eq(sel465, rt_str("OUT", 3)) || rt_str_eq(sel465, rt_str("OF", 2)) || rt_str_eq(sel465, rt_str("PRAG", 4)) || rt_str_eq(sel465, rt_str("PROC", 4)) || rt_str_eq(sel465, rt_str("RAISE", 5)) || rt_str_eq(sel465, rt_str("READONLY", 8)) || rt_str_eq(sel465, rt_str("REVERSE", 7)) || rt_str_eq(sel465, rt_str("REGION", 6)) || rt_str_eq(sel465, rt_str("RENAMING", 8)) || rt_str_eq(sel465, rt_str("REP", 3)) || rt_str_eq(sel465, rt_str("REPEAT", 6)) || rt_str_eq(sel465, rt_str("RERAISE", 7)) || rt_str_eq(sel465, rt_str("RETURN", 6)) || rt_str_eq(sel465, rt_str("SUBTYPE", 7)) || rt_str_eq(sel465, rt_str("TASK", 4)) || rt_str_eq(sel465, rt_str("THEN", 4)) || rt_str_eq(sel465, rt_str("TO", 2)) || rt_str_eq(sel465, rt_str("TYPE", 4)) || rt_str_eq(sel465, rt_str("VAR", 3)) || rt_str_eq(sel465, rt_str("WAIT", 4)) || rt_str_eq(sel465, rt_str("WHEN", 4)) || rt_str_eq(sel465, rt_str("WHILE", 5))) {
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
F->t_466 = NULL;
{ R383 *cell467 = rt_alloc(sizeof(R383));
(*cell467).s = NULL;
F->t_466 = cell467;
}
(*(P382)rt_nil_check(F->t_466)).kind = F->kind_37;
(*(P382)rt_nil_check(F->t_466)).line = g_src_line_411;
(*(P382)rt_nil_check(F->t_466)).ival = F->ival_39;
(*(P382)rt_nil_check(F->t_466)).s = f_mk_3(&(*F->s_38));
g_ntoks_409 = rt_add(g_ntoks_409, ((rt_int)1LL));
(*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_ntoks_409, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo] = F->t_466;
ret_:
  return;
}

static void f_lex_line_42(rstr *line_41) {
  struct f_lex_line_42fr *F = rt_alloc(sizeof *F);
F->line_41 = line_41;
F->i_468 = ((rt_int)1LL);
F->j_469 = ((rt_int)0LL);
F->n_470 = ((*F->line_41)).len;
while ((F->i_468 <= F->n_470)) {
F->c_471 = rt_str_get((*F->line_41), F->i_468);
if (((((F->c_471 == 32) || (F->c_471 == 9)) || (F->c_471 == 13)) || (F->c_471 == 12))) {
F->i_468 = rt_add(F->i_468, ((rt_int)1LL));
} else if ((F->c_471 == 37)) {
F->i_468 = rt_add(F->n_470, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_471)) {
F->j_469 = F->i_468;
while (((F->j_469 <= F->n_470) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_469)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_469))) || (rt_str_get((*F->line_41), F->j_469) == 95)))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
{
F->w_472 = rt_str_new(rt_sub(F->j_469, F->i_468));
rt_str_assign(&F->w_472, rt_str_slice((*F->line_41), F->i_468, rt_sub(F->j_469, ((rt_int)1LL))));
{ rt_int lo474 = ((rt_int)1LL), hi475 = (F->w_472).len;
for (rt_int it476 = lo474; it476 <= hi475; it476++) {
F->k_473 = it476;
(*rt_str_at(&F->w_472, F->k_473)) = f_upper_13(rt_str_get(F->w_472, F->k_473));
}
}
if (rt_str_eq(F->w_472, rt_str("PRAGMAT", 7))) {
while (((F->j_469 <= F->n_470) && (rt_str_get((*F->line_41), F->j_469) != 59))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
} else if (f_is_reserved_34(&F->w_472)) {
f_add_token_40(((rt_int)2LL), &F->w_472, ((rt_int)0LL));
} else if (f_is_word_op_36(&F->w_472)) {
f_add_token_40(((rt_int)3LL), &F->w_472, ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)1LL), &F->w_472, ((rt_int)0LL));
}
}
F->i_468 = F->j_469;
} else if (f_is_digit_11(F->c_471)) {
F->j_469 = F->i_468;
while (((F->j_469 <= F->n_470) && f_is_digit_11(rt_str_get((*F->line_41), F->j_469)))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
if ((((F->j_469 < F->n_470) && (rt_str_get((*F->line_41), F->j_469) == 46)) && f_is_digit_11(rt_str_get((*F->line_41), rt_add(F->j_469, ((rt_int)1LL)))))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
while (((F->j_469 <= F->n_470) && f_is_digit_11(rt_str_get((*F->line_41), F->j_469)))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
if (((F->j_469 <= F->n_470) && ((rt_str_get((*F->line_41), F->j_469) == 69) || (rt_str_get((*F->line_41), F->j_469) == 101)))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
if (((F->j_469 <= F->n_470) && ((rt_str_get((*F->line_41), F->j_469) == 43) || (rt_str_get((*F->line_41), F->j_469) == 45)))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
while (((F->j_469 <= F->n_470) && f_is_digit_11(rt_str_get((*F->line_41), F->j_469)))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
}
f_add_token_40(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_468, rt_sub(F->j_469, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_468, rt_sub(F->j_469, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_41), F->i_468, rt_sub(F->j_469, ((rt_int)1LL)))));
}
F->i_468 = F->j_469;
} else if ((F->c_471 == 39)) {
F->j_469 = rt_add(F->i_468, ((rt_int)1LL));
if (((F->j_469 > F->n_470) || (!f_is_letter_9(rt_str_get((*F->line_41), F->j_469))))) {
f_fail_21(g_src_line_411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_469 <= F->n_470) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_469)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_469))) || (rt_str_get((*F->line_41), F->j_469) == 95)))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
{
F->w_477 = rt_str_new(rt_sub(rt_sub(F->j_469, F->i_468), ((rt_int)1LL)));
rt_str_assign(&F->w_477, rt_str_slice((*F->line_41), rt_add(F->i_468, ((rt_int)1LL)), rt_sub(F->j_469, ((rt_int)1LL))));
{ rt_int lo479 = ((rt_int)1LL), hi480 = (F->w_477).len;
for (rt_int it481 = lo479; it481 <= hi480; it481++) {
F->k_478 = it481;
(*rt_str_at(&F->w_477, F->k_478)) = f_upper_13(rt_str_get(F->w_477, F->k_478));
}
}
f_add_token_40(((rt_int)6LL), &F->w_477, ((rt_int)0LL));
}
F->i_468 = F->j_469;
} else if ((F->c_471 == 34)) {
F->j_469 = rt_add(F->i_468, ((rt_int)1LL));
while (((F->j_469 <= F->n_470) && (rt_str_get((*F->line_41), F->j_469) != 34))) {
F->j_469 = rt_add(F->j_469, ((rt_int)1LL));
}
if ((F->j_469 > F->n_470)) {
f_fail_21(g_src_line_411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_40(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), rt_add(F->i_468, ((rt_int)1LL)), rt_sub(F->j_469, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_468 = rt_add(F->j_469, ((rt_int)1LL));
} else {
{
F->two_482 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_482, rt_str("  ", 2));
(*rt_str_at(&F->two_482, ((rt_int)1LL))) = F->c_471;
if ((F->i_468 < F->n_470)) {
(*rt_str_at(&F->two_482, ((rt_int)2LL))) = rt_str_get((*F->line_41), rt_add(F->i_468, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_482, rt_str(":=", 2)) || rt_str_eq(F->two_482, rt_str("=>", 2))) || rt_str_eq(F->two_482, rt_str("..", 2))) || rt_str_eq(F->two_482, rt_str("**", 2))) || rt_str_eq(F->two_482, rt_str("/=", 2))) || rt_str_eq(F->two_482, rt_str("<=", 2))) || rt_str_eq(F->two_482, rt_str(">=", 2)))) {
f_add_token_40(((rt_int)3LL), &F->two_482, ((rt_int)0LL));
F->i_468 = rt_add(F->i_468, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_471 == 40) || (F->c_471 == 41)) || (F->c_471 == 91)) || (F->c_471 == 93)) || (F->c_471 == 44)) || (F->c_471 == 58)) || (F->c_471 == 59)) || (F->c_471 == 46)) || (F->c_471 == 35)) || (F->c_471 == 43)) || (F->c_471 == 45)) || (F->c_471 == 42)) || (F->c_471 == 47)) || (F->c_471 == 38)) || (F->c_471 == 61)) || (F->c_471 == 60)) || (F->c_471 == 62))) {
f_add_token_40(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_471); b_; }), ((rt_int)0LL));
F->i_468 = rt_add(F->i_468, ((rt_int)1LL));
} else {
f_fail_21(g_src_line_411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_483 = rt_str_new(rt_sizeln());
rt_readln(&F->line_483);
g_src_line_411 = rt_add(g_src_line_411, ((rt_int)1LL));
f_lex_line_42(&F->line_483);
}
f_add_token_40(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P386 f_nn_46(rt_int kind_44, rt_int line_45) {
  struct f_nn_46fr *F = rt_alloc(sizeof *F);
F->kind_44 = kind_44;
F->line_45 = line_45;
F->x_484 = NULL;
{ R387 *cell485 = rt_alloc(sizeof(R387));
(*cell485).name = NULL;
(*cell485).tag = NULL;
(*cell485).a = NULL;
(*cell485).b = NULL;
(*cell485).c = NULL;
(*cell485).d = NULL;
(*cell485).next = NULL;
F->x_484 = cell485;
}
(*(P386)rt_nil_check(F->x_484)).kind = F->kind_44;
(*(P386)rt_nil_check(F->x_484)).line = F->line_45;
F->result_ = F->x_484;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_50(P386 *head_47, P386 *tail_48, P386 x_49) {
  struct f_append_50fr *F = rt_alloc(sizeof *F);
F->head_47 = head_47;
F->tail_48 = tail_48;
F->x_49 = x_49;
if (((*F->head_47) == NULL)) {
(*F->head_47) = F->x_49;
} else {
(*(P386)rt_nil_check((*F->tail_48))).next = F->x_49;
}
(*F->tail_48) = F->x_49;
while (((*(P386)rt_nil_check((*F->tail_48))).next != NULL)) {
(*F->tail_48) = (*(P386)rt_nil_check((*F->tail_48))).next;
}
ret_:
  return;
}

static rt_int f_list_len_52(P386 l_51) {
  struct f_list_len_52fr *F = rt_alloc(sizeof *F);
F->l_51 = l_51;
F->n_486 = ((rt_int)0LL);
F->p_487 = NULL;
F->p_487 = F->l_51;
while ((F->p_487 != NULL)) {
F->n_486 = rt_add(F->n_486, ((rt_int)1LL));
F->p_487 = (*(P386)rt_nil_check(F->p_487)).next;
}
F->result_ = F->n_486;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_53(void) {
  struct f_cur_line_53fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_55(rstr *w_54) {
  struct f_at_kw_55fr *F = rt_alloc(sizeof *F);
F->w_54 = w_54;
F->result_ = (((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)), (*F->w_54)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_57(rstr *w_56) {
  struct f_at_op_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_59(rt_int k_58) {
  struct f_at_kind_59fr *F = rt_alloc(sizeof *F);
F->k_58 = k_58;
F->result_ = ((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).kind == F->k_58);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_61(rt_int k_60) {
  struct f_kind_at_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
if ((rt_add(g_tpos_410, F->k_60) > g_ntoks_409)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(rt_add(g_tpos_410, F->k_60), (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P381 f_text_at_63(rt_int k_62) {
  struct f_text_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_410, F->k_62) > g_ntoks_409)) {
F->result_ = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_ntoks_409, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
goto ret_;
}
F->result_ = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(rt_add(g_tpos_410, F->k_62), (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_65(rstr *msg_64) {
  struct f_perror_65fr *F = rt_alloc(sizeof *F);
F->msg_64 = msg_64;
f_fail_21((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_64), rt_str(" (at ", 5)), (*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_67(rstr *w_66) {
  struct f_accept_kw_67fr *F = rt_alloc(sizeof *F);
F->w_66 = w_66;
if (f_at_kw_55(&(*F->w_66))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
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
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
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
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_73(rstr *w_72) {
  struct f_expect_op_73fr *F = rt_alloc(sizeof *F);
F->w_72 = w_72;
if ((!f_at_op_57(&(*F->w_72)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
ret_:
  return;
}

static P381 f_expect_id_74(void) {
  struct f_expect_id_74fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->result_ = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(rt_sub(g_tpos_410, ((rt_int)1LL)), (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_name_node_75(void) {
  struct f_name_node_75fr *F = rt_alloc(sizeof *F);
F->x_488 = NULL;
F->x_488 = f_nn_46(((rt_int)7LL), f_cur_line_53());
(*(P386)rt_nil_check(F->x_488)).name = f_expect_id_74();
F->result_ = F->x_488;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_id_list_76(void) {
  struct f_id_list_76fr *F = rt_alloc(sizeof *F);
F->head_489 = NULL;
F->tail_490 = NULL;
f_append_50(&F->head_489, &F->tail_490, f_name_node_75());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_489, &F->tail_490, f_name_node_75());
}
F->result_ = F->head_489;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_p_subtype_77(void) {
  struct f_p_subtype_77fr *F = rt_alloc(sizeof *F);
F->line_491 = f_cur_line_53();
F->x_492 = NULL;
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->x_492 = f_nn_46(((rt_int)81LL), F->line_491);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P386)rt_nil_check(F->x_492)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_492;
goto ret_;
}
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_493 = rt_str_copy((*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)));
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
if (rt_str_eq(F->w_493, rt_str("ARRAY", 5))) {
F->x_492 = f_nn_46(((rt_int)74LL), F->line_491);
{
F->head_494 = NULL;
F->tail_495 = NULL;
f_append_50(&F->head_494, &F->tail_495, f_p_subtype_77());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_494, &F->tail_495, f_p_subtype_77());
}
(*(P386)rt_nil_check(F->x_492)).a = F->head_494;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P386)rt_nil_check(F->x_492)).b = f_p_subtype_77();
} else if ((rt_str_eq(F->w_493, rt_str("RECORD", 6)) || rt_str_eq(F->w_493, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_493, rt_str("RECORD", 6))) {
F->x_492 = f_nn_46(((rt_int)75LL), F->line_491);
} else {
F->x_492 = f_nn_46(((rt_int)76LL), F->line_491);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_496 = NULL;
F->tail_497 = NULL;
F->more_498 = 1;
while (F->more_498) {
F->names_499 = NULL;
F->names_499 = f_id_list_76();
F->st_500 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_500 = f_p_subtype_77();
while ((F->names_499 != NULL)) {
F->cmp_501 = NULL;
F->cmp_501 = f_nn_46(((rt_int)63LL), (*(P386)rt_nil_check(F->names_499)).line);
(*(P386)rt_nil_check(F->cmp_501)).name = (*(P386)rt_nil_check(F->names_499)).name;
(*(P386)rt_nil_check(F->cmp_501)).a = F->st_500;
f_append_50(&F->head_496, &F->tail_497, F->cmp_501);
F->names_499 = (*(P386)rt_nil_check(F->names_499)).next;
}
F->more_498 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P386)rt_nil_check(F->x_492)).a = F->head_496;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_493, rt_str("UNION", 5)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_492)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_493, rt_str("ENUM", 4))) {
F->x_492 = f_nn_46(((rt_int)72LL), F->line_491);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_502 = NULL;
F->tail_503 = NULL;
F->more_504 = 1;
while (F->more_504) {
F->lit_505 = NULL;
F->lit_505 = f_nn_46(((rt_int)4LL), F->line_491);
if ((!f_at_kind_59(((rt_int)6LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P386)rt_nil_check(F->lit_505)).name = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
f_append_50(&F->head_502, &F->tail_503, F->lit_505);
F->more_504 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P386)rt_nil_check(F->x_492)).a = F->head_502;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_492)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P386)rt_nil_check(F->x_492)).c = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_493, rt_str("STRING", 6)) || rt_str_eq(F->w_493, rt_str("SET", 3))) || rt_str_eq(F->w_493, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_493, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_493, rt_str("STRING", 6))) {
F->x_492 = f_nn_46(((rt_int)73LL), F->line_491);
} else if (rt_str_eq(F->w_493, rt_str("SET", 3))) {
F->x_492 = f_nn_46(((rt_int)77LL), F->line_491);
} else if (rt_str_eq(F->w_493, rt_str("MAILBOX", 7))) {
F->x_492 = f_nn_46(((rt_int)78LL), F->line_491);
} else {
F->x_492 = f_nn_46(((rt_int)79LL), F->line_491);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P386)rt_nil_check(F->x_492)).a = f_p_subtype_77();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_492)).b = f_actual_params_78();
}
} else if (rt_str_eq(F->w_493, rt_str("INT", 3))) {
F->x_492 = f_nn_46(((rt_int)70LL), F->line_491);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_492)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P386)rt_nil_check(F->x_492)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_493, rt_str("FLOAT", 5))) {
F->x_492 = f_nn_46(((rt_int)71LL), F->line_491);
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_492)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_492)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P386)rt_nil_check(F->x_492)).c = f_expr_87();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_492 = f_nn_46(((rt_int)80LL), F->line_491);
(*(P386)rt_nil_check(F->x_492)).name = f_mk_3(&F->w_493);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_492)).a = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_492)).b = f_actual_params_78();
(*(P386)rt_nil_check(F->x_492)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_492;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_actual_params_78(void) {
  struct f_actual_params_78fr *F = rt_alloc(sizeof *F);
F->head_506 = NULL;
F->tail_507 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_50(&F->head_506, &F->tail_507, f_expr_87());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_506, &F->tail_507, f_expr_87());
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_506;
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

static P386 f_actual_tt_81(void) {
  struct f_actual_tt_81fr *F = rt_alloc(sizeof *F);
F->head_508 = NULL;
F->tail_509 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_510 = 1;
while (F->more_510) {
if ((f_at_kind_59(((rt_int)1LL)) && f_is_type_word_80(&(*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s))))) {
f_append_50(&F->head_508, &F->tail_509, f_p_subtype_77());
} else {
f_append_50(&F->head_508, &F->tail_509, f_expr_87());
}
F->more_510 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_508;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_binop_86(P381 op_82, P386 l_83, P386 r_84, rt_int line_85) {
  struct f_binop_86fr *F = rt_alloc(sizeof *F);
F->op_82 = op_82;
F->l_83 = l_83;
F->r_84 = r_84;
F->line_85 = line_85;
F->x_511 = NULL;
F->x_511 = f_nn_46(((rt_int)9LL), F->line_85);
(*(P386)rt_nil_check(F->x_511)).name = F->op_82;
(*(P386)rt_nil_check(F->x_511)).a = F->l_83;
(*(P386)rt_nil_check(F->x_511)).b = F->r_84;
F->result_ = F->x_511;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expr_87(void) {
  struct f_expr_87fr *F = rt_alloc(sizeof *F);
F->l_512 = NULL;
F->l_512 = f_expr_and_88();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_513 = NULL;
F->op_513 = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
F->line_514 = f_cur_line_53();
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->l_512 = f_binop_86(F->op_513, F->l_512, f_expr_and_88(), F->line_514);
}
F->result_ = F->l_512;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expr_and_88(void) {
  struct f_expr_and_88fr *F = rt_alloc(sizeof *F);
F->l_515 = NULL;
F->l_515 = f_expr_not_89();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_516 = f_cur_line_53();
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->l_515 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_515, f_expr_not_89(), F->line_516);
}
F->result_ = F->l_515;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expr_not_89(void) {
  struct f_expr_not_89fr *F = rt_alloc(sizeof *F);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_517 = NULL;
F->x_517 = f_nn_46(((rt_int)8LL), f_cur_line_53());
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_517)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P386)rt_nil_check(F->x_517)).a = f_expr_not_89();
F->result_ = F->x_517;
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

static P386 f_expr_rel_92(void) {
  struct f_expr_rel_92fr *F = rt_alloc(sizeof *F);
F->l_518 = NULL;
F->l_518 = f_expr_add_93();
if ((f_at_kind_59(((rt_int)3LL)) && f_is_rel_91(&(*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s))))) {
F->op_519 = NULL;
F->op_519 = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
F->line_520 = f_cur_line_53();
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->l_518 = f_binop_86(F->op_519, F->l_518, f_expr_add_93(), F->line_520);
}
F->result_ = F->l_518;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expr_add_93(void) {
  struct f_expr_add_93fr *F = rt_alloc(sizeof *F);
F->l_521 = NULL;
F->l_521 = f_expr_mul_94();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_522 = NULL;
F->op_522 = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
F->line_523 = f_cur_line_53();
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->l_521 = f_binop_86(F->op_522, F->l_521, f_expr_mul_94(), F->line_523);
}
F->result_ = F->l_521;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expr_mul_94(void) {
  struct f_expr_mul_94fr *F = rt_alloc(sizeof *F);
F->l_524 = NULL;
F->l_524 = f_expr_pow_95();
while (((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_525 = NULL;
F->op_525 = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
F->line_526 = f_cur_line_53();
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->l_524 = f_binop_86(F->op_525, F->l_524, f_expr_pow_95(), F->line_526);
}
F->result_ = F->l_524;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expr_pow_95(void) {
  struct f_expr_pow_95fr *F = rt_alloc(sizeof *F);
F->l_527 = NULL;
F->l_527 = f_expr_prefix_96();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_528 = f_cur_line_53();
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->l_527 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_527, f_expr_prefix_96(), F->line_528);
}
F->result_ = F->l_527;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expr_prefix_96(void) {
  struct f_expr_prefix_96fr *F = rt_alloc(sizeof *F);
if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_529 = NULL;
F->x_529 = f_nn_46(((rt_int)8LL), f_cur_line_53());
(*(P386)rt_nil_check(F->x_529)).name = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_529)).a = f_expr_prefix_96();
F->result_ = F->x_529;
goto ret_;
}
F->result_ = f_postfix_97();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_postfix_97(void) {
  struct f_postfix_97fr *F = rt_alloc(sizeof *F);
F->p_530 = NULL;
F->p_530 = f_primary_98();
while (1) {
F->line_531 = f_cur_line_53();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_532 = NULL;
F->x_532 = f_nn_46(((rt_int)10LL), F->line_531);
F->head_533 = NULL;
F->tail_534 = NULL;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_535 = 1;
while (F->more_535) {
F->lo_536 = NULL;
F->lo_536 = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_537 = NULL;
F->r_537 = f_nn_46(((rt_int)16LL), F->line_531);
(*(P386)rt_nil_check(F->r_537)).a = F->lo_536;
(*(P386)rt_nil_check(F->r_537)).b = f_expr_87();
f_append_50(&F->head_533, &F->tail_534, F->r_537);
} else {
f_append_50(&F->head_533, &F->tail_534, F->lo_536);
}
F->more_535 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P386)rt_nil_check(F->x_532)).a = F->p_530;
(*(P386)rt_nil_check(F->x_532)).b = F->head_533;
F->p_530 = F->x_532;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_538 = NULL;
F->x_538 = f_nn_46(((rt_int)11LL), F->line_531);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_538)).a = F->p_530;
(*(P386)rt_nil_check(F->x_538)).name = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->p_530 = F->x_538;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P386)rt_nil_check(F->p_530)).kind == ((rt_int)7LL)))) {
F->x_539 = NULL;
F->x_539 = f_nn_46(((rt_int)12LL), F->line_531);
(*(P386)rt_nil_check(F->x_539)).a = F->p_530;
(*(P386)rt_nil_check(F->x_539)).b = f_actual_tt_81();
F->p_530 = F->x_539;
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_540 = NULL;
F->x_540 = f_nn_46(((rt_int)13LL), F->line_531);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_540)).a = F->p_530;
(*(P386)rt_nil_check(F->x_540)).b = f_p_subtype_77();
F->p_530 = F->x_540;
} else {
F->result_ = F->p_530;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_primary_98(void) {
  struct f_primary_98fr *F = rt_alloc(sizeof *F);
F->line_541 = f_cur_line_53();
F->x_542 = NULL;
F->k_543 = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).kind;
if ((F->k_543 == ((rt_int)4LL))) {
F->x_542 = f_nn_46(((rt_int)1LL), F->line_541);
(*(P386)rt_nil_check(F->x_542)).ival = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).ival;
(*(P386)rt_nil_check(F->x_542)).name = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->result_ = F->x_542;
goto ret_;
}
if ((((F->k_543 == ((rt_int)5LL)) || (F->k_543 == ((rt_int)7LL))) || (F->k_543 == ((rt_int)6LL)))) {
if ((F->k_543 == ((rt_int)5LL))) {
F->x_542 = f_nn_46(((rt_int)2LL), F->line_541);
} else if ((F->k_543 == ((rt_int)7LL))) {
F->x_542 = f_nn_46(((rt_int)3LL), F->line_541);
} else {
F->x_542 = f_nn_46(((rt_int)4LL), F->line_541);
}
(*(P386)rt_nil_check(F->x_542)).name = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->result_ = F->x_542;
goto ret_;
}
if ((F->k_543 == ((rt_int)1LL))) {
F->w_544 = rt_str_copy((*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)));
if ((rt_str_eq(F->w_544, rt_str("TRUE", 4)) || rt_str_eq(F->w_544, rt_str("FALSE", 5)))) {
F->x_542 = f_nn_46(((rt_int)5LL), F->line_541);
if (rt_str_eq(F->w_544, rt_str("TRUE", 4))) {
(*(P386)rt_nil_check(F->x_542)).ival = ((rt_int)1LL);
}
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->result_ = F->x_542;
goto ret_;
}
if (rt_str_eq(F->w_544, rt_str("NIL", 3))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)6LL), F->line_541);
goto ret_;
}
F->result_ = f_name_node_75();
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_542 = f_nn_46(((rt_int)17LL), F->line_541);
(*(P386)rt_nil_check(F->x_542)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_542;
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_545 = NULL;
F->tail_546 = NULL;
F->x_542 = f_nn_46(((rt_int)14LL), F->line_541);
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_547 = 1;
while (F->more_547) {
f_append_50(&F->head_545, &F->tail_546, f_constructor_item_99());
F->more_547 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P386)rt_nil_check(F->x_542)).a = F->head_545;
F->result_ = F->x_542;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_constructor_item_99(void) {
  struct f_constructor_item_99fr *F = rt_alloc(sizeof *F);
F->line_548 = f_cur_line_53();
F->it_549 = NULL;
F->it_549 = f_nn_46(((rt_int)15LL), F->line_548);
F->first_550 = NULL;
F->first_550 = f_expr_87();
F->keys_551 = NULL;
F->ktail_552 = NULL;
F->lab_553 = NULL;
F->lab_553 = f_nn_46(((rt_int)61LL), F->line_548);
(*(P386)rt_nil_check(F->lab_553)).a = F->first_550;
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P386)rt_nil_check(F->lab_553)).b = f_expr_87();
f_append_50(&F->keys_551, &F->ktail_552, F->lab_553);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_50(&F->keys_551, &F->ktail_552, F->lab_553);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_554 = g_tpos_410;
F->more_555 = NULL;
F->tail2_556 = NULL;
F->ok_557 = 0;
F->go_558 = 1;
while ((F->go_558 && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_559 = NULL;
F->l2_559 = f_nn_46(((rt_int)61LL), F->line_548);
(*(P386)rt_nil_check(F->l2_559)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P386)rt_nil_check(F->l2_559)).b = f_expr_87();
}
f_append_50(&F->more_555, &F->tail2_556, F->l2_559);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_557 = 1;
F->go_558 = 0;
} else if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_558 = 0;
}
}
if (F->ok_557) {
f_append_50(&F->keys_551, &F->ktail_552, F->lab_553);
f_append_50(&F->keys_551, &F->ktail_552, F->more_555);
} else {
g_tpos_410 = F->save_554;
}
}
if ((F->keys_551 != NULL)) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P386)rt_nil_check(F->it_549)).a = F->keys_551;
(*(P386)rt_nil_check(F->it_549)).b = f_expr_87();
} else {
(*(P386)rt_nil_check(F->it_549)).b = F->first_550;
}
F->result_ = F->it_549;
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

static P386 f_body_101(void) {
  struct f_body_101fr *F = rt_alloc(sizeof *F);
F->head_560 = NULL;
F->tail_561 = NULL;
while ((!f_at_body_end_100())) {
f_append_50(&F->head_560, &F->tail_561, f_body_element_102());
}
F->result_ = F->head_560;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_body_element_102(void) {
  struct f_body_element_102fr *F = rt_alloc(sizeof *F);
F->x_562 = NULL;
if ((((((((((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_562 = f_declaration_103();
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_562 = f_nn_46(((rt_int)33LL), f_cur_line_53());
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_562)).a = f_expr_87();
} else {
F->x_562 = f_statement_121();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_562;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_declaration_103(void) {
  struct f_declaration_103fr *F = rt_alloc(sizeof *F);
F->line_563 = f_cur_line_53();
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
F->head_564 = NULL;
F->tail_565 = NULL;
F->names_566 = NULL;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->names_566 = f_id_list_76();
while ((F->names_566 != NULL)) {
F->x_567 = NULL;
F->x_567 = f_nn_46(((rt_int)49LL), F->line_563);
(*(P386)rt_nil_check(F->x_567)).name = (*(P386)rt_nil_check(F->names_566)).name;
f_append_50(&F->head_564, &F->tail_565, F->x_567);
F->names_566 = (*(P386)rt_nil_check(F->names_566)).next;
}
F->result_ = F->head_564;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_object_decl_104(void) {
  struct f_object_decl_104fr *F = rt_alloc(sizeof *F);
F->line_568 = f_cur_line_53();
F->is_var_569 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_570 = NULL;
F->st_571 = NULL;
F->init_572 = NULL;
F->head_573 = NULL;
F->tail_574 = NULL;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->names_570 = f_id_list_76();
if (F->is_var_569) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_571 = f_p_subtype_77();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_572 = f_expr_87();
}
} else {
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_571 = f_p_subtype_77();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_572 = f_expr_87();
}
while ((F->names_570 != NULL)) {
F->x_575 = NULL;
if (F->is_var_569) {
F->x_575 = f_nn_46(((rt_int)40LL), F->line_568);
} else {
F->x_575 = f_nn_46(((rt_int)41LL), F->line_568);
}
(*(P386)rt_nil_check(F->x_575)).name = (*(P386)rt_nil_check(F->names_570)).name;
(*(P386)rt_nil_check(F->x_575)).a = F->st_571;
(*(P386)rt_nil_check(F->x_575)).b = F->init_572;
f_append_50(&F->head_573, &F->tail_574, F->x_575);
F->names_570 = (*(P386)rt_nil_check(F->names_570)).next;
}
F->result_ = F->head_573;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_abbrev_decl_105(void) {
  struct f_abbrev_decl_105fr *F = rt_alloc(sizeof *F);
F->x_576 = NULL;
F->x_576 = f_nn_46(((rt_int)42LL), f_cur_line_53());
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_576)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_576)).b = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P386)rt_nil_check(F->x_576)).a = f_p_subtype_77();
F->result_ = F->x_576;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_type_decl_106(void) {
  struct f_type_decl_106fr *F = rt_alloc(sizeof *F);
F->line_577 = f_cur_line_53();
F->name_578 = NULL;
F->params_579 = NULL;
F->x_580 = NULL;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->name_578 = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_579 = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->x_580 = f_nn_46(((rt_int)44LL), F->line_577);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_580)).b = f_formal_params_109();
}
} else {
F->x_580 = f_nn_46(((rt_int)43LL), F->line_577);
(*(P386)rt_nil_check(F->x_580)).b = F->params_579;
}
(*(P386)rt_nil_check(F->x_580)).name = F->name_578;
(*(P386)rt_nil_check(F->x_580)).a = f_p_subtype_77();
F->result_ = F->x_580;
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

static P386 f_formal_params_109(void) {
  struct f_formal_params_109fr *F = rt_alloc(sizeof *F);
F->head_581 = NULL;
F->tail_582 = NULL;
F->more_583 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_583) {
F->mode_584 = ((rt_int)1LL);
F->names_585 = NULL;
F->ntail_586 = NULL;
F->st_587 = NULL;
if ((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_584 = f_mode_of_108(&(*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)));
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
}
f_append_50(&F->names_585, &F->ntail_586, f_name_node_75());
while ((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_61(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P381)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P381)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
f_append_50(&F->names_585, &F->ntail_586, f_name_node_75());
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_587 = f_p_subtype_77();
while ((F->names_585 != NULL)) {
F->p_588 = NULL;
F->p_588 = f_nn_46(((rt_int)52LL), (*(P386)rt_nil_check(F->names_585)).line);
(*(P386)rt_nil_check(F->p_588)).name = (*(P386)rt_nil_check(F->names_585)).name;
(*(P386)rt_nil_check(F->p_588)).ival = F->mode_584;
(*(P386)rt_nil_check(F->p_588)).a = F->st_587;
f_append_50(&F->head_581, &F->tail_582, F->p_588);
F->names_585 = (*(P386)rt_nil_check(F->names_585)).next;
}
F->more_583 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_581;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_111(P386 owner_110) {
  struct f_imports_list_111fr *F = rt_alloc(sizeof *F);
F->owner_110 = owner_110;
F->head_589 = NULL;
F->tail_590 = NULL;
F->more_591 = 1;
if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P386)rt_nil_check(F->owner_110)).flag = rt_add((*(P386)rt_nil_check(F->owner_110)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_591) {
F->ro_592 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_593 = NULL;
F->x_593 = f_name_node_75();
if (F->ro_592) {
(*(P386)rt_nil_check(F->x_593)).ival = ((rt_int)1LL);
}
f_append_50(&F->head_589, &F->tail_590, F->x_593);
F->more_591 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P386)rt_nil_check(F->owner_110)).d = F->head_589;
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

static P381 f_definable_name_114(void) {
  struct f_definable_name_114fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_59(((rt_int)1LL)) || (f_at_kind_59(((rt_int)3LL)) && f_is_definable_113(&(*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)))))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->result_ = (*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(rt_sub(g_tpos_410, ((rt_int)1LL)), (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_subprogram_decl_115(void) {
  struct f_subprogram_decl_115fr *F = rt_alloc(sizeof *F);
F->line_594 = f_cur_line_53();
F->x_595 = NULL;
F->is_abn_596 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_597 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_597) {
F->x_595 = f_nn_46(((rt_int)46LL), F->line_594);
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_595 = f_nn_46(((rt_int)45LL), F->line_594);
} else {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
if (F->is_abn_596) {
(*(P386)rt_nil_check(F->x_595)).flag = ((rt_int)1LL);
}
(*(P386)rt_nil_check(F->x_595)).name = f_definable_name_114();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_595)).a = f_formal_params_109();
}
if (F->is_func_597) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P386)rt_nil_check(F->x_595)).b = f_p_subtype_77();
}
F->dummy_598 = f_imports_list_111(F->x_595);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P386)rt_nil_check(F->x_595)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_597) {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P381)rt_nil_check(f_definable_name_114())), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->x_595)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->x_595)).name))); b_; }));
}
F->result_ = F->x_595;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_capsule_decl_116(void) {
  struct f_capsule_decl_116fr *F = rt_alloc(sizeof *F);
F->x_599 = NULL;
F->x_599 = f_nn_46(((rt_int)47LL), f_cur_line_53());
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_599)).name = f_expect_id_74();
F->dummy_600 = f_imports_list_111(F->x_599);
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P386)rt_nil_check(F->x_599)).ival = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P386)rt_nil_check(F->x_599)).ival = ((rt_int)0LL);
} else {
F->head_601 = NULL;
F->tail_602 = NULL;
F->more_603 = 1;
while (F->more_603) {
F->n_604 = NULL;
F->n_604 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P386)rt_nil_check(F->n_604)).ival = ((rt_int)1LL);
}
(*(P386)rt_nil_check(F->n_604)).name = f_definable_name_114();
f_append_50(&F->head_601, &F->tail_602, F->n_604);
F->more_603 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P386)rt_nil_check(F->x_599)).a = F->head_601;
(*(P386)rt_nil_check(F->x_599)).ival = ((rt_int)2LL);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P386)rt_nil_check(F->x_599)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P381)rt_nil_check(f_expect_id_74())), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->x_599)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_599;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_task_decl_117(void) {
  struct f_task_decl_117fr *F = rt_alloc(sizeof *F);
F->x_605 = NULL;
F->x_605 = f_nn_46(((rt_int)50LL), f_cur_line_53());
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_605)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_605)).a = f_formal_params_109();
}
F->dummy_606 = f_imports_list_111(F->x_605);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P386)rt_nil_check(F->x_605)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P381)rt_nil_check(f_expect_id_74())), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->x_605)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->x_605)).name))); b_; }));
}
F->result_ = F->x_605;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_expose_decl_118(void) {
  struct f_expose_decl_118fr *F = rt_alloc(sizeof *F);
F->x_607 = NULL;
F->x_607 = f_nn_46(((rt_int)48LL), f_cur_line_53());
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P386)rt_nil_check(F->x_607)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_608 = NULL;
F->tail_609 = NULL;
F->more_610 = 1;
while (F->more_610) {
F->n_611 = NULL;
F->n_611 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P386)rt_nil_check(F->n_611)).ival = ((rt_int)1LL);
}
(*(P386)rt_nil_check(F->n_611)).name = f_definable_name_114();
f_append_50(&F->head_608, &F->tail_609, F->n_611);
F->more_610 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P386)rt_nil_check(F->x_607)).a = F->head_608;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P386)rt_nil_check(F->x_607)).flag = ((rt_int)1LL);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P386)rt_nil_check(F->x_607)).flag = rt_add((*(P386)rt_nil_check(F->x_607)).flag, ((rt_int)2LL));
}
(*(P386)rt_nil_check(F->x_607)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_607)).b = f_actual_params_78();
}
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P386)rt_nil_check(F->x_607)).flag == ((rt_int)1LL)) || ((*(P386)rt_nil_check(F->x_607)).flag == ((rt_int)3LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_607;
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

static P386 f_statement_121(void) {
  struct f_statement_121fr *F = rt_alloc(sizeof *F);
F->labels_612 = NULL;
F->ltail_613 = NULL;
F->match_614 = NULL;
F->s_615 = NULL;
while (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P381)rt_nil_check(f_text_at_63(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_50(&F->labels_612, &F->ltail_613, f_name_node_75());
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
}
if (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_120(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P381)rt_nil_check(f_text_at_63(((rt_int)1LL)))); b_; })))) {
F->match_614 = f_expect_id_74();
}
F->s_615 = f_unlabeled_statement_122();
if ((F->match_614 != NULL)) {
if (((((((((*(P386)rt_nil_check(F->s_615)).kind != ((rt_int)22LL)) && ((*(P386)rt_nil_check(F->s_615)).kind != ((rt_int)23LL))) && ((*(P386)rt_nil_check(F->s_615)).kind != ((rt_int)24LL))) && ((*(P386)rt_nil_check(F->s_615)).kind != ((rt_int)25LL))) && ((*(P386)rt_nil_check(F->s_615)).kind != ((rt_int)26LL))) && ((*(P386)rt_nil_check(F->s_615)).kind != ((rt_int)35LL))) && ((*(P386)rt_nil_check(F->s_615)).kind != ((rt_int)36LL)))) {
f_fail_21((*(P386)rt_nil_check(F->s_615)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P381)rt_nil_check(f_expect_id_74())), (*(P381)rt_nil_check(F->match_614))))) {
f_fail_21((*(P386)rt_nil_check(F->s_615)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P381)rt_nil_check(F->match_614))); b_; }));
}
(*(P386)rt_nil_check(F->s_615)).tag = F->match_614;
}
if ((F->labels_612 != NULL)) {
f_fail_21((*(P386)rt_nil_check(F->s_615)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_615;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_unlabeled_statement_122(void) {
  struct f_unlabeled_statement_122fr *F = rt_alloc(sizeof *F);
F->line_616 = f_cur_line_53();
F->x_617 = NULL;
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
F->x_617 = f_nn_46(((rt_int)25LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_617)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_617;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_130();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_617 = f_nn_46(((rt_int)27LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_617)).name = f_expect_id_74();
F->result_ = F->x_617;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_617 = f_nn_46(((rt_int)28LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P386)rt_nil_check(F->x_617)).a = f_expr_87();
}
F->result_ = F->x_617;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_617 = f_nn_46(((rt_int)30LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_617)).name = f_expect_id_74();
F->result_ = F->x_617;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)31LL), F->line_616);
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_617 = f_nn_46(((rt_int)34LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_617)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_617)).b = f_actual_params_78();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P386)rt_nil_check(F->x_617)).a = f_postfix_97();
F->result_ = F->x_617;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_618 = NULL;
F->tail_619 = NULL;
F->x_617 = f_nn_46(((rt_int)35LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_620 = NULL;
F->itail_621 = NULL;
F->more_622 = 1;
while (F->more_622) {
f_append_50(&F->invs_620, &F->itail_621, f_postfix_97());
F->more_622 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_618, &F->tail_619, f_arm_126(F->invs_620, f_body_101(), F->line_616));
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P386)rt_nil_check(F->x_617)).a = F->head_618;
F->result_ = F->x_617;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_617 = f_nn_46(((rt_int)36LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_617)).a = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P386)rt_nil_check(F->x_617)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_617;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_617 = f_nn_46(((rt_int)32LL), F->line_616);
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_617)).a = f_postfix_97();
if ((!(f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P381)rt_nil_check((*(P382)rt_nil_check((*(P384)rt_nil_check(g_toks_408)).p[rt_index(g_tpos_410, (*(P384)rt_nil_check(g_toks_408)).lo, (*(P384)rt_nil_check(g_toks_408)).hi) - (*(P384)rt_nil_check(g_toks_408)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P386)rt_nil_check(F->x_617)).b = f_actual_params_78();
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P386)rt_nil_check(F->x_617)).c = f_expr_87();
}
F->result_ = F->x_617;
goto ret_;
}
{
F->target_623 = NULL;
F->target_623 = f_postfix_97();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_617 = f_nn_46(((rt_int)20LL), F->line_616);
(*(P386)rt_nil_check(F->x_617)).a = F->target_623;
(*(P386)rt_nil_check(F->x_617)).b = f_expr_87();
} else {
F->x_617 = f_nn_46(((rt_int)21LL), F->line_616);
(*(P386)rt_nil_check(F->x_617)).a = F->target_623;
}
}
F->result_ = F->x_617;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_arm_126(P386 cond_123, P386 b_124, rt_int line_125) {
  struct f_arm_126fr *F = rt_alloc(sizeof *F);
F->cond_123 = cond_123;
F->b_124 = b_124;
F->line_125 = line_125;
F->x_624 = NULL;
F->x_624 = f_nn_46(((rt_int)60LL), F->line_125);
(*(P386)rt_nil_check(F->x_624)).a = F->cond_123;
(*(P386)rt_nil_check(F->x_624)).b = F->b_124;
F->result_ = F->x_624;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_if_stmt_127(void) {
  struct f_if_stmt_127fr *F = rt_alloc(sizeof *F);
F->x_625 = NULL;
F->x_625 = f_nn_46(((rt_int)22LL), f_cur_line_53());
F->head_626 = NULL;
F->tail_627 = NULL;
F->cond_628 = NULL;
F->go_629 = 1;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
F->cond_628 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_626, &F->tail_627, f_arm_126(F->cond_628, f_body_101(), (*(P386)rt_nil_check(F->x_625)).line));
while (F->go_629) {
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_628 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_626, &F->tail_627, f_arm_126(F->cond_628, f_body_101(), (*(P386)rt_nil_check(F->x_625)).line));
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P386)rt_nil_check(F->x_625)).flag = ((rt_int)1LL);
(*(P386)rt_nil_check(F->x_625)).b = f_body_101();
} else {
F->go_629 = 0;
}
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P386)rt_nil_check(F->x_625)).a = F->head_626;
F->result_ = F->x_625;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_case_stmt_128(void) {
  struct f_case_stmt_128fr *F = rt_alloc(sizeof *F);
F->x_630 = NULL;
F->x_630 = f_nn_46(((rt_int)23LL), f_cur_line_53());
F->head_631 = NULL;
F->tail_632 = NULL;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_630)).a = f_expr_87();
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_633 = NULL;
F->ltail_634 = NULL;
F->more_635 = 1;
while (F->more_635) {
F->l_636 = NULL;
F->l_636 = f_nn_46(((rt_int)61LL), f_cur_line_53());
(*(P386)rt_nil_check(F->l_636)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P386)rt_nil_check(F->l_636)).b = f_expr_87();
}
f_append_50(&F->labs_633, &F->ltail_634, F->l_636);
F->more_635 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_631, &F->tail_632, f_arm_126(F->labs_633, f_body_101(), (*(P386)rt_nil_check(F->x_630)).line));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P386)rt_nil_check(F->x_630)).flag = ((rt_int)1LL);
(*(P386)rt_nil_check(F->x_630)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P386)rt_nil_check(F->x_630)).b = F->head_631;
F->result_ = F->x_630;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_repeat_stmt_129(void) {
  struct f_repeat_stmt_129fr *F = rt_alloc(sizeof *F);
F->x_637 = NULL;
F->x_637 = f_nn_46(((rt_int)24LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P386)rt_nil_check(F->x_637)).flag = ((rt_int)1LL);
(*(P386)rt_nil_check(F->x_637)).name = f_expect_id_74();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P386)rt_nil_check(F->x_637)).ival = ((rt_int)1LL);
}
(*(P386)rt_nil_check(F->x_637)).a = f_p_subtype_77();
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P386)rt_nil_check(F->x_637)).a = f_expr_87();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P386)rt_nil_check(F->x_637)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_637;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_guard_stmt_130(void) {
  struct f_guard_stmt_130fr *F = rt_alloc(sizeof *F);
F->x_638 = NULL;
F->x_638 = f_nn_46(((rt_int)26LL), f_cur_line_53());
F->head_639 = NULL;
F->tail_640 = NULL;
g_tpos_410 = rt_add(g_tpos_410, ((rt_int)1LL));
(*(P386)rt_nil_check(F->x_638)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_641 = NULL;
F->h_641 = f_nn_46(((rt_int)62LL), f_cur_line_53());
(*(P386)rt_nil_check(F->h_641)).a = f_id_list_76();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P386)rt_nil_check(F->h_641)).b = f_body_101();
f_append_50(&F->head_639, &F->tail_640, F->h_641);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P386)rt_nil_check(F->x_638)).flag = ((rt_int)1LL);
(*(P386)rt_nil_check(F->x_638)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P386)rt_nil_check(F->x_638)).b = F->head_639;
F->result_ = F->x_638;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_program_131(void) {
  struct f_program_131fr *F = rt_alloc(sizeof *F);
F->head_642 = NULL;
F->tail_643 = NULL;
while ((!f_at_kind_59(((rt_int)0LL)))) {
if ((!f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_50(&F->head_642, &F->tail_643, f_capsule_decl_116());
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_642;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_133(rstr *s_132) {
  struct f_hash_133fr *F = rt_alloc(sizeof *F);
F->s_132 = s_132;
F->h_644 = ((rt_int)0LL);
{ rt_int lo646 = ((rt_int)1LL), hi647 = ((*F->s_132)).len;
for (rt_int it648 = lo646; it648 <= hi647; it648++) {
F->i_645 = it648;
F->h_644 = rt_mod(rt_add(rt_mul(F->h_644, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_132), F->i_645)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_644;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P396 f_lookup_135(rstr *name_134) {
  struct f_lookup_135fr *F = rt_alloc(sizeof *F);
F->name_134 = name_134;
F->y_649 = NULL;
F->y_649 = (*(P402)rt_nil_check(g_table_412)).p[rt_index(f_hash_133(&(*F->name_134)), (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo];
while ((F->y_649 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_649)).name)), (*F->name_134))) {
F->result_ = F->y_649;
goto ret_;
}
F->y_649 = (*(P396)rt_nil_check(F->y_649)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P396 f_lookup_decl_137(P386 d_136) {
  struct f_lookup_decl_137fr *F = rt_alloc(sizeof *F);
F->d_136 = d_136;
F->y_650 = NULL;
F->y_650 = (*(P402)rt_nil_check(g_table_412)).p[rt_index(f_hash_133(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_136)).name))), (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo];
while ((F->y_650 != NULL)) {
if (((*(P396)rt_nil_check(F->y_650)).decl == F->d_136)) {
F->result_ = F->y_650;
goto ret_;
}
F->y_650 = (*(P396)rt_nil_check(F->y_650)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_140(P396 y_138, rt_int line_139) {
  struct f_define_140fr *F = rt_alloc(sizeof *F);
F->y_138 = y_138;
F->line_139 = line_139;
F->h_651 = f_hash_133(&(*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_138)).name)));
F->z_652 = NULL;
F->z_652 = (*(P402)rt_nil_check(g_table_412)).p[rt_index(F->h_651, (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo];
while ((F->z_652 != NULL)) {
if (((((*(P396)rt_nil_check(F->z_652)).depth == g_depth_413) && rt_str_eq((*(P381)rt_nil_check((*(P396)rt_nil_check(F->z_652)).name)), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_138)).name)))) && (!(((f_overloadable_142(F->y_138) && f_overloadable_142(F->z_652)) && ((*(P396)rt_nil_check(F->z_652)).kind == (*(P396)rt_nil_check(F->y_138)).kind)) && (!f_same_signature_145((*(P396)rt_nil_check(F->y_138)).params, (*(P396)rt_nil_check(F->z_652)).params)))))) {
f_fail_21(F->line_139, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_138)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_652 = (*(P396)rt_nil_check(F->z_652)).chain;
}
(*(P396)rt_nil_check(F->y_138)).depth = g_depth_413;
(*(P396)rt_nil_check(F->y_138)).chain = (*(P402)rt_nil_check(g_table_412)).p[rt_index(F->h_651, (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo];
(*(P402)rt_nil_check(g_table_412)).p[rt_index(F->h_651, (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo] = F->y_138;
(*(P396)rt_nil_check(F->y_138)).stack = g_scope_stack_414;
g_scope_stack_414 = F->y_138;
ret_:
  return;
}

static int f_overloadable_142(P396 y_141) {
  struct f_overloadable_142fr *F = rt_alloc(sizeof *F);
F->y_141 = y_141;
F->result_ = ((((*(P396)rt_nil_check(F->y_141)).kind == ((rt_int)3LL)) || ((*(P396)rt_nil_check(F->y_141)).kind == ((rt_int)4LL))) || ((*(P396)rt_nil_check(F->y_141)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_145(P394 a_143, P394 b_144) {
  struct f_same_signature_145fr *F = rt_alloc(sizeof *F);
F->a_143 = a_143;
F->b_144 = b_144;
F->x_653 = NULL;
F->x_653 = F->a_143;
F->y_654 = NULL;
F->y_654 = F->b_144;
while (((F->x_653 != NULL) && (F->y_654 != NULL))) {
if ((!f_same_159((*(P394)rt_nil_check(F->x_653)).t, (*(P394)rt_nil_check(F->y_654)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_653 = (*(P394)rt_nil_check(F->x_653)).next;
F->y_654 = (*(P394)rt_nil_check(F->y_654)).next;
}
F->result_ = ((F->x_653 == NULL) && (F->y_654 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_146(void) {
  struct f_open_scope_146fr *F = rt_alloc(sizeof *F);
g_depth_413 = rt_add(g_depth_413, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_147(void) {
  struct f_close_scope_147fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_414 != NULL) && ((*(P396)rt_nil_check(g_scope_stack_414)).depth == g_depth_413))) {
(*(P402)rt_nil_check(g_table_412)).p[rt_index(f_hash_133(&(*(P381)rt_nil_check((*(P396)rt_nil_check(g_scope_stack_414)).name))), (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo] = (*(P396)rt_nil_check(g_scope_stack_414)).chain;
g_scope_stack_414 = (*(P396)rt_nil_check(g_scope_stack_414)).stack;
}
g_depth_413 = rt_sub(g_depth_413, ((rt_int)1LL));
ret_:
  return;
}

static P396 f_new_sym_150(rt_int kind_148, P381 name_149) {
  struct f_new_sym_150fr *F = rt_alloc(sizeof *F);
F->kind_148 = kind_148;
F->name_149 = name_149;
F->y_655 = NULL;
{ R397 *cell656 = rt_alloc(sizeof(R397));
(*cell656).name = NULL;
(*cell656).t = NULL;
(*cell656).c = NULL;
(*cell656).access = NULL;
(*cell656).cname = NULL;
(*cell656).st = NULL;
(*cell656).decl = NULL;
(*cell656).params = NULL;
(*cell656).result = NULL;
(*cell656).members = NULL;
(*cell656).mnext = NULL;
(*cell656).chain = NULL;
(*cell656).stack = NULL;
F->y_655 = cell656;
}
(*(P396)rt_nil_check(F->y_655)).kind = F->kind_148;
(*(P396)rt_nil_check(F->y_655)).name = F->name_149;
F->result_ = F->y_655;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P390 f_new_typ_152(rt_int kind_151) {
  struct f_new_typ_152fr *F = rt_alloc(sizeof *F);
F->kind_151 = kind_151;
F->t_657 = NULL;
{ R391 *cell658 = rt_alloc(sizeof(R391));
(*cell658).name = NULL;
(*cell658).lits = NULL;
(*cell658).elem = NULL;
(*cell658).idx = NULL;
(*cell658).idx2 = NULL;
(*cell658).elemcons = NULL;
(*cell658).elemst = NULL;
(*cell658).under = NULL;
(*cell658).tparams = NULL;
(*cell658).fields = NULL;
(*cell658).target = NULL;
(*cell658).decl = NULL;
(*cell658).cname = NULL;
(*cell658).next = NULL;
F->t_657 = cell658;
}
(*(P390)rt_nil_check(F->t_657)).kind = F->kind_151;
F->result_ = F->t_657;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P388 f_new_cons_153(void) {
  struct f_new_cons_153fr *F = rt_alloc(sizeof *F);
F->c_659 = NULL;
{ R389 *cell660 = rt_alloc(sizeof(R389));
(*cell660).lo = NULL;
(*cell660).hi = NULL;
(*cell660).lo2 = NULL;
(*cell660).hi2 = NULL;
(*cell660).slen = NULL;
(*cell660).args = NULL;
F->c_659 = cell660;
}
F->result_ = F->c_659;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_156(P386 a_154, P386 b_155) {
  struct f_same_lits_156fr *F = rt_alloc(sizeof *F);
F->a_154 = a_154;
F->b_155 = b_155;
F->x_661 = NULL;
F->x_661 = F->a_154;
F->y_662 = NULL;
F->y_662 = F->b_155;
while (((F->x_661 != NULL) && (F->y_662 != NULL))) {
if ((!rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->x_661)).name)), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->y_662)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_661 = (*(P386)rt_nil_check(F->x_661)).next;
F->y_662 = (*(P386)rt_nil_check(F->y_662)).next;
}
F->result_ = ((F->x_661 == NULL) && (F->y_662 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_159(P390 a_157, P390 b_158) {
  struct f_same_159fr *F = rt_alloc(sizeof *F);
F->a_157 = a_157;
F->b_158 = b_158;
if ((F->a_157 == F->b_158)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_157 == NULL) || (F->b_158 == NULL)) || ((*(P390)rt_nil_check(F->a_157)).kind != (*(P390)rt_nil_check(F->b_158)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)1LL)) || ((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)2LL))) || ((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)3LL))) || ((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)5LL))) || ((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)9LL))) || ((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_156((*(P390)rt_nil_check(F->a_157)).lits, (*(P390)rt_nil_check(F->b_158)).lits);
goto ret_;
}
if (((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)6LL))) {
if ((((*(P390)rt_nil_check(F->a_157)).idx2 == NULL) != ((*(P390)rt_nil_check(F->b_158)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_159((*(P390)rt_nil_check(F->a_157)).elem, (*(P390)rt_nil_check(F->b_158)).elem) && f_same_159((*(P390)rt_nil_check(F->a_157)).idx, (*(P390)rt_nil_check(F->b_158)).idx));
goto ret_;
}
if (((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)16LL))) {
F->result_ = f_same_159((*(P390)rt_nil_check(F->a_157)).elem, (*(P390)rt_nil_check(F->b_158)).elem);
goto ret_;
}
if (((*(P390)rt_nil_check(F->a_157)).kind == ((rt_int)7LL))) {
F->f_663 = NULL;
F->f_663 = (*(P390)rt_nil_check(F->a_157)).fields;
F->g_664 = NULL;
F->g_664 = (*(P390)rt_nil_check(F->b_158)).fields;
while (((F->f_663 != NULL) && (F->g_664 != NULL))) {
if (((!rt_str_eq((*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_663)).name)), (*(P381)rt_nil_check((*(P392)rt_nil_check(F->g_664)).name)))) || (!f_same_159((*(P392)rt_nil_check(F->f_663)).t, (*(P392)rt_nil_check(F->g_664)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_663 = (*(P392)rt_nil_check(F->f_663)).next;
F->g_664 = (*(P392)rt_nil_check(F->g_664)).next;
}
F->result_ = ((F->f_663 == NULL) && (F->g_664 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_161(P390 t_160) {
  struct f_kind_name_161fr *F = rt_alloc(sizeof *F);
F->t_160 = t_160;
{ rt_int sel665 = (*(P390)rt_nil_check(F->t_160)).kind;
if (0 || (sel665 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel665 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel665 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel665 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel665 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel665 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel665 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel665 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_160)).name)));
goto ret_;
} else if (0 || (sel665 == ((rt_int)11LL))) {
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

static void f_check_type_165(P390 got_162, P390 want_163, rt_int line_164) {
  struct f_check_type_165fr *F = rt_alloc(sizeof *F);
F->got_162 = got_162;
F->want_163 = want_163;
F->line_164 = line_164;
if ((F->want_163 == NULL)) {
goto ret_;
}
if ((((*(P390)rt_nil_check(F->got_162)).kind == ((rt_int)11LL)) && ((*(P390)rt_nil_check(F->want_163)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_159(F->got_162, F->want_163))) {
f_fail_21(F->line_164, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_161(F->got_162)), rt_str(" where ", 7)), f_kind_name_161(F->want_163)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_167(P390 t_166) {
  struct f_ctype_167fr *F = rt_alloc(sizeof *F);
F->t_166 = t_166;
{ rt_int sel666 = (*(P390)rt_nil_check(F->t_166)).kind;
if (0 || (sel666 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel666 == ((rt_int)2LL)) || (sel666 == ((rt_int)4LL)) || (sel666 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel666 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel666 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel666 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel666 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox", 7);
goto ret_;
} else if (0 || (sel666 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel666 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act", 6);
goto ret_;
} else if (0 || (sel666 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P390)rt_nil_check(F->t_166)).cname == NULL)) {
f_declare_ctype_171(F->t_166);
} else if (((((*(P390)rt_nil_check(F->t_166)).kind == ((rt_int)7LL)) && (*(P390)rt_nil_check(F->t_166)).forward) && (!(*(P390)rt_nil_check(F->t_166)).defined))) {
(*(P390)rt_nil_check(F->t_166)).defined = 1;
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_166)).cname))), rt_str(" { ", 3)), f_field_decls_169(F->t_166)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_166)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_169(P390 t_168) {
  struct f_field_decls_169fr *F = rt_alloc(sizeof *F);
F->t_168 = t_168;
F->f_667 = NULL;
F->f_667 = (*(P390)rt_nil_check(F->t_168)).fields;
F->s_668 = NULL;
F->s_668 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_667 != NULL)) {
F->s_668 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->s_668)), f_ctype_167((*(P392)rt_nil_check(F->f_667)).t)), rt_str(" ", 1)), f_lower_s_15(&(*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_667)).name)))), rt_str("; ", 2)); b_; }));
F->f_667 = (*(P392)rt_nil_check(F->f_667)).next;
}
F->result_ = (*(P381)rt_nil_check(F->s_668));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_171(P390 t_170) {
  struct f_declare_ctype_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
F->u_669 = NULL;
F->u_669 = g_all_types_415;
if ((((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)8LL)) && ((*(P390)rt_nil_check(F->t_170)).target == NULL))) {
f_finish_ptr_231(F->t_170);
if (((*(P390)rt_nil_check(F->t_170)).cname != NULL)) {
goto ret_;
}
}
if (((*(P390)rt_nil_check(F->t_170)).kind != ((rt_int)8LL))) {
while ((F->u_669 != NULL)) {
if ((((*(P390)rt_nil_check(F->u_669)).kind == (*(P390)rt_nil_check(F->t_170)).kind) && f_same_159(F->u_669, F->t_170))) {
(*(P390)rt_nil_check(F->t_170)).cname = (*(P390)rt_nil_check(F->u_669)).cname;
goto ret_;
}
F->u_669 = (*(P390)rt_nil_check(F->u_669)).next;
}
}
if ((((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)15LL)) && ((*(P390)rt_nil_check(F->t_170)).tparams == NULL))) {
(*(P390)rt_nil_check(F->t_170)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_167((*(P390)rt_nil_check(F->t_170)).under); b_; }));
goto ret_;
}
if (((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)6LL))) {
(*(P390)rt_nil_check(F->t_170)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)15LL))) {
(*(P390)rt_nil_check(F->t_170)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)7LL))) {
(*(P390)rt_nil_check(F->t_170)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P390)rt_nil_check(F->t_170)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P390)rt_nil_check(F->t_170)).next = g_all_types_415;
g_all_types_415 = F->t_170;
if (((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)8LL))) {
F->target_670 = NULL;
F->target_670 = (*(P390)rt_nil_check(F->t_170)).target;
if (((*(P390)rt_nil_check(F->target_670)).kind == ((rt_int)7LL))) {
if (((*(P390)rt_nil_check(F->target_670)).cname == NULL)) {
(*(P390)rt_nil_check(F->target_670)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P390)rt_nil_check(F->target_670)).next = g_all_types_415;
g_all_types_415 = F->target_670;
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->target_670)).cname))), rt_str(" ", 1)), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->target_670)).cname))), rt_str(";", 1)); b_; }));
(*(P390)rt_nil_check(F->target_670)).forward = 1;
}
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->target_670)).cname))), rt_str(" *", 2)), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_167(F->target_670)), rt_str(" *", 2)), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)6LL))) {
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(" ", 1)), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_167((*(P390)rt_nil_check(F->t_170)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P390)rt_nil_check(F->t_170)).kind == ((rt_int)15LL))) {
F->p_671 = NULL;
F->p_671 = (*(P390)rt_nil_check(F->t_170)).tparams;
F->fs_672 = NULL;
F->fs_672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_671 != NULL)) {
F->fs_672 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->fs_672)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_671)).name)))), rt_str("; ", 2)); b_; }));
F->p_671 = (*(P386)rt_nil_check(F->p_671)).next;
}
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(" ", 1)), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(" {", 2)), (*(P381)rt_nil_check(F->fs_672))), f_ctype_167((*(P390)rt_nil_check(F->t_170)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(" ", 1)), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(";", 1)); b_; }));
(*(P390)rt_nil_check(F->t_170)).defined = 1;
f_put_25(g_out_types_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_170)).cname))), rt_str(" { ", 3)), f_field_decls_169(F->t_170)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_172(void) {
  struct f_init_ascii_172fr *F = rt_alloc(sizeof *F);
F->names_673 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_674 = NULL;
F->tail_675 = NULL;
F->start_676 = ((rt_int)1LL);
{ rt_int lo678 = ((rt_int)1LL), hi679 = (F->names_673).len;
for (rt_int it680 = lo678; it680 <= hi679; it680++) {
F->i_677 = it680;
if ((rt_str_get(F->names_673, F->i_677) == 32)) {
F->lit_681 = NULL;
F->lit_681 = f_nn_46(((rt_int)4LL), ((rt_int)0LL));
(*(P386)rt_nil_check(F->lit_681)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_673, F->start_676, rt_sub(F->i_677, ((rt_int)1LL))); b_; }));
f_append_50(&F->head_674, &F->tail_675, F->lit_681);
F->start_676 = rt_add(F->i_677, ((rt_int)1LL));
}
}
}
g_ty_ascii_441 = f_new_typ_152(((rt_int)4LL));
(*(P390)rt_nil_check(g_ty_ascii_441)).lits = F->head_674;
(*(P390)rt_nil_check(g_ty_ascii_441)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_175(P386 lits_173, rstr *name_174) {
  struct f_lit_index_175fr *F = rt_alloc(sizeof *F);
F->lits_173 = lits_173;
F->name_174 = name_174;
F->i_682 = ((rt_int)0LL);
F->l_683 = NULL;
F->l_683 = F->lits_173;
while ((F->l_683 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->l_683)).name)), (*F->name_174))) {
F->result_ = F->i_682;
goto ret_;
}
F->i_682 = rt_add(F->i_682, ((rt_int)1LL));
F->l_683 = (*(P386)rt_nil_check(F->l_683)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P390 f_resolve_subtype_178(P386 st_176, P388 *c_177) {
  struct f_resolve_subtype_178fr *F = rt_alloc(sizeof *F);
F->st_176 = st_176;
F->c_177 = c_177;
F->t_684 = NULL;
F->dummy_686 = NULL;
(*F->c_177) = f_new_cons_153();
{ rt_int sel687 = (*(P386)rt_nil_check(F->st_176)).kind;
if (0 || (sel687 == ((rt_int)70LL))) {
if (((*(P386)rt_nil_check(F->st_176)).a != NULL)) {
(*(P388)rt_nil_check((*F->c_177))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_333((*(P386)rt_nil_check(F->st_176)).a, g_ty_int_438, &F->dummy_686); b_; }));
(*(P388)rt_nil_check((*F->c_177))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_333((*(P386)rt_nil_check(F->st_176)).b, g_ty_int_438, &F->dummy_686); b_; }));
(*(P388)rt_nil_check((*F->c_177))).mlo = f_manifest_189((*(P386)rt_nil_check(F->st_176)).a, &F->ok_685);
(*(P388)rt_nil_check((*F->c_177))).hasm = F->ok_685;
(*(P388)rt_nil_check((*F->c_177))).mhi = f_manifest_189((*(P386)rt_nil_check(F->st_176)).b, &F->ok_685);
(*(P388)rt_nil_check((*F->c_177))).hasm = ((*(P388)rt_nil_check((*F->c_177))).hasm && F->ok_685);
}
F->result_ = g_ty_int_438;
goto ret_;
} else if (0 || (sel687 == ((rt_int)71LL))) {
F->result_ = g_ty_float_440;
goto ret_;
} else if (0 || (sel687 == ((rt_int)72LL))) {
F->t_684 = f_new_typ_152(((rt_int)4LL));
(*(P390)rt_nil_check(F->t_684)).lits = (*(P386)rt_nil_check(F->st_176)).a;
if (((*(P386)rt_nil_check(F->st_176)).b != NULL)) {
(*(P388)rt_nil_check((*F->c_177))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_333((*(P386)rt_nil_check(F->st_176)).b, F->t_684, &F->dummy_686); b_; }));
(*(P388)rt_nil_check((*F->c_177))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_333((*(P386)rt_nil_check(F->st_176)).c, F->t_684, &F->dummy_686); b_; }));
}
F->result_ = F->t_684;
goto ret_;
} else if (0 || (sel687 == ((rt_int)73LL))) {
F->t_684 = f_resolve_subtype_178((*(P386)rt_nil_check(F->st_176)).a, &(*F->c_177));
if ((!f_same_159(F->t_684, g_ty_ascii_441))) {
f_fail_21((*(P386)rt_nil_check(F->st_176)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_177) = f_new_cons_153();
if (((*(P386)rt_nil_check(F->st_176)).b != NULL)) {
(*(P388)rt_nil_check((*F->c_177))).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_333((*(P386)rt_nil_check(F->st_176)).b, g_ty_int_438, &F->dummy_686); b_; }));
}
F->result_ = g_ty_string_442;
goto ret_;
} else if (0 || (sel687 == ((rt_int)74LL))) {
if ((f_list_len_52((*(P386)rt_nil_check(F->st_176)).a) > ((rt_int)2LL))) {
f_fail_21((*(P386)rt_nil_check(F->st_176)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_688 = NULL;
F->ic2_689 = NULL;
F->ec_690 = NULL;
F->it_691 = NULL;
F->it_691 = f_resolve_subtype_178((*(P386)rt_nil_check(F->st_176)).a, &F->ic_688);
F->et_692 = NULL;
F->et_692 = f_resolve_subtype_178((*(P386)rt_nil_check(F->st_176)).b, &F->ec_690);
F->t_684 = f_new_typ_152(((rt_int)6LL));
(*(P390)rt_nil_check(F->t_684)).idx = F->it_691;
(*(P390)rt_nil_check(F->t_684)).elem = F->et_692;
(*(P390)rt_nil_check(F->t_684)).elemcons = F->ec_690;
(*(P390)rt_nil_check(F->t_684)).elemst = (*(P386)rt_nil_check(F->st_176)).b;
if (((*(P388)rt_nil_check(F->ic_688)).lo != NULL)) {
(*(P388)rt_nil_check((*F->c_177))).lo = (*(P388)rt_nil_check(F->ic_688)).lo;
(*(P388)rt_nil_check((*F->c_177))).hi = (*(P388)rt_nil_check(F->ic_688)).hi;
} else if (((*(P390)rt_nil_check(F->it_691)).kind == ((rt_int)4LL))) {
(*(P388)rt_nil_check((*F->c_177))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P388)rt_nil_check((*F->c_177))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P390)rt_nil_check(F->it_691)).lits), ((rt_int)1LL))); b_; }));
}
(*(P388)rt_nil_check((*F->c_177))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P388)rt_nil_check((*F->c_177))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P386)rt_nil_check((*(P386)rt_nil_check(F->st_176)).a)).next != NULL)) {
(*(P390)rt_nil_check(F->t_684)).idx2 = f_resolve_subtype_178((*(P386)rt_nil_check((*(P386)rt_nil_check(F->st_176)).a)).next, &F->ic2_689);
if (((*(P388)rt_nil_check(F->ic2_689)).lo != NULL)) {
(*(P388)rt_nil_check((*F->c_177))).lo2 = (*(P388)rt_nil_check(F->ic2_689)).lo;
(*(P388)rt_nil_check((*F->c_177))).hi2 = (*(P388)rt_nil_check(F->ic2_689)).hi;
} else if (((*(P390)rt_nil_check((*(P390)rt_nil_check(F->t_684)).idx2)).kind == ((rt_int)4LL))) {
(*(P388)rt_nil_check((*F->c_177))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P388)rt_nil_check((*F->c_177))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P390)rt_nil_check((*(P390)rt_nil_check(F->t_684)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_684;
goto ret_;
} else if (0 || (sel687 == ((rt_int)77LL))) {
F->t_684 = f_new_typ_152(((rt_int)16LL));
{
F->ec_693 = NULL;
(*(P390)rt_nil_check(F->t_684)).elem = f_resolve_subtype_178((*(P386)rt_nil_check(F->st_176)).a, &F->ec_693);
(*(P390)rt_nil_check(F->t_684)).elemcons = F->ec_693;
}
F->result_ = F->t_684;
goto ret_;
} else if (0 || (sel687 == ((rt_int)75LL))) {
F->t_684 = f_new_typ_152(((rt_int)7LL));
{
F->comp_694 = NULL;
F->comp_694 = (*(P386)rt_nil_check(F->st_176)).a;
F->tail_695 = NULL;
while ((F->comp_694 != NULL)) {
F->cc_696 = NULL;
F->f_697 = NULL;
{ R393 *cell698 = rt_alloc(sizeof(R393));
(*cell698).name = NULL;
(*cell698).t = NULL;
(*cell698).c = NULL;
(*cell698).st = NULL;
(*cell698).next = NULL;
F->f_697 = cell698;
}
(*(P392)rt_nil_check(F->f_697)).name = (*(P386)rt_nil_check(F->comp_694)).name;
(*(P392)rt_nil_check(F->f_697)).t = f_resolve_subtype_178((*(P386)rt_nil_check(F->comp_694)).a, &F->cc_696);
(*(P392)rt_nil_check(F->f_697)).c = F->cc_696;
(*(P392)rt_nil_check(F->f_697)).st = (*(P386)rt_nil_check(F->comp_694)).a;
if ((F->tail_695 == NULL)) {
(*(P390)rt_nil_check(F->t_684)).fields = F->f_697;
} else {
(*(P392)rt_nil_check(F->tail_695)).next = F->f_697;
}
F->tail_695 = F->f_697;
F->comp_694 = (*(P386)rt_nil_check(F->comp_694)).next;
}
}
F->result_ = F->t_684;
goto ret_;
} else if (0 || (sel687 == ((rt_int)79LL))) {
F->result_ = g_ty_file_444;
goto ret_;
} else if (0 || (sel687 == ((rt_int)78LL))) {
{
F->ec_699 = NULL;
F->t_684 = f_new_typ_152(((rt_int)12LL));
(*(P390)rt_nil_check(F->t_684)).elem = f_resolve_subtype_178((*(P386)rt_nil_check(F->st_176)).a, &F->ec_699);
(*(P390)rt_nil_check(F->t_684)).elemcons = F->ec_699;
if (((*(P386)rt_nil_check(F->st_176)).b != NULL)) {
(*(P388)rt_nil_check((*F->c_177))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_333((*(P386)rt_nil_check(F->st_176)).b, g_ty_int_438, &F->dummy_686); b_; }));
}
}
F->result_ = F->t_684;
goto ret_;
} else if (0 || (sel687 == ((rt_int)80LL))) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->st_176)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_439;
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->st_176)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_441;
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->st_176)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_446;
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->st_176)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_447;
goto ret_;
}
{
F->y_700 = NULL;
F->y_700 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->st_176)).name)));
if ((F->y_700 == NULL)) {
f_fail_21((*(P386)rt_nil_check(F->st_176)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->st_176)).name))); b_; }));
}
if (((((*(P396)rt_nil_check(F->y_700)).kind == ((rt_int)5LL)) && ((*(P396)rt_nil_check(F->y_700)).t != NULL)) && ((*(P390)rt_nil_check((*(P396)rt_nil_check(F->y_700)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_182(F->y_700, F->st_176, &(*F->c_177));
goto ret_;
}
if (((((*(P396)rt_nil_check(F->y_700)).kind == ((rt_int)6LL)) || ((*(P396)rt_nil_check(F->y_700)).kind == ((rt_int)5LL))) && ((*(P396)rt_nil_check(F->y_700)).t != NULL))) {
if (((*(P396)rt_nil_check(F->y_700)).c != NULL)) {
(*F->c_177) = (*(P396)rt_nil_check(F->y_700)).c;
}
F->result_ = (*(P396)rt_nil_check(F->y_700)).t;
goto ret_;
}
if ((((((*(P396)rt_nil_check(F->y_700)).kind == ((rt_int)5LL)) && ((*(P396)rt_nil_check(F->y_700)).decl != NULL)) && ((*(P386)rt_nil_check((*(P396)rt_nil_check(F->y_700)).decl)).kind == ((rt_int)43LL))) && ((*(P386)rt_nil_check((*(P396)rt_nil_check(F->y_700)).decl)).b != NULL))) {
F->result_ = f_new_type_182(F->y_700, F->st_176, &(*F->c_177));
goto ret_;
}
if ((((*(P396)rt_nil_check(F->y_700)).kind == ((rt_int)6LL)) || ((*(P396)rt_nil_check(F->y_700)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_178((*(P396)rt_nil_check(F->y_700)).st, &(*F->c_177));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->st_176)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->st_176)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_21((*(P386)rt_nil_check(F->st_176)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P390 f_new_type_182(P396 y_179, P386 st_180, P388 *c_181) {
  struct f_new_type_182fr *F = rt_alloc(sizeof *F);
F->y_179 = y_179;
F->st_180 = st_180;
F->c_181 = c_181;
F->d_701 = NULL;
F->d_701 = (*(P396)rt_nil_check(F->y_179)).decl;
F->p_702 = NULL;
F->uc_703 = NULL;
(*F->c_181) = f_new_cons_153();
if (((*(P396)rt_nil_check(F->y_179)).t == NULL)) {
(*(P396)rt_nil_check(F->y_179)).t = f_new_typ_152(((rt_int)15LL));
(*(P390)rt_nil_check((*(P396)rt_nil_check(F->y_179)).t)).name = (*(P396)rt_nil_check(F->y_179)).name;
(*(P390)rt_nil_check((*(P396)rt_nil_check(F->y_179)).t)).decl = F->d_701;
(*(P390)rt_nil_check((*(P396)rt_nil_check(F->y_179)).t)).tparams = (*(P386)rt_nil_check(F->d_701)).b;
f_open_scope_146();
F->p_702 = (*(P386)rt_nil_check(F->d_701)).b;
while ((F->p_702 != NULL)) {
F->z_704 = NULL;
F->z_704 = f_new_sym_150(((rt_int)2LL), (*(P386)rt_nil_check(F->p_702)).name);
(*(P396)rt_nil_check(F->z_704)).t = g_ty_int_438;
(*(P396)rt_nil_check(F->z_704)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_140(F->z_704, (*(P386)rt_nil_check(F->d_701)).line);
F->p_702 = (*(P386)rt_nil_check(F->p_702)).next;
}
(*(P390)rt_nil_check((*(P396)rt_nil_check(F->y_179)).t)).under = f_resolve_subtype_178((*(P386)rt_nil_check(F->d_701)).a, &F->uc_703);
f_close_scope_147();
}
(*(P388)rt_nil_check((*F->c_181))).args = (*(P386)rt_nil_check(F->st_180)).b;
F->result_ = (*(P396)rt_nil_check(F->y_179)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_186(rstr *lval_183, P390 t_184, P388 c_185) {
  struct f_init_storage_186fr *F = rt_alloc(sizeof *F);
F->lval_183 = lval_183;
F->t_184 = t_184;
F->c_185 = c_185;
if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)15LL))) {
F->p_705 = NULL;
F->p_705 = (*(P390)rt_nil_check(F->t_184)).tparams;
F->a_706 = NULL;
F->a_706 = (*(P388)rt_nil_check(F->c_185)).args;
F->uc_707 = NULL;
F->ut_708 = NULL;
F->at_709 = NULL;
if ((f_list_len_52(F->a_706) != f_list_len_52(F->p_705))) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_184)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_52(F->p_705))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_705 != NULL)) {
F->v_710 = rt_str_copy(f_gexpr_333(F->a_706, g_ty_int_438, &F->at_709));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_183), rt_str(".p_", 3)), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_705)).name)))), rt_str(" = ", 3)), F->v_710), rt_str(";", 1)); b_; }));
F->p_705 = (*(P386)rt_nil_check(F->p_705)).next;
F->a_706 = (*(P386)rt_nil_check(F->a_706)).next;
}
f_open_scope_146();
F->p_705 = (*(P390)rt_nil_check(F->t_184)).tparams;
while ((F->p_705 != NULL)) {
F->z_711 = NULL;
F->z_711 = f_new_sym_150(((rt_int)2LL), (*(P386)rt_nil_check(F->p_705)).name);
(*(P396)rt_nil_check(F->z_711)).t = g_ty_int_438;
(*(P396)rt_nil_check(F->z_711)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_183), rt_str(".p_", 3)), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_705)).name)))); b_; }));
f_define_140(F->z_711, ((rt_int)0LL));
F->p_705 = (*(P386)rt_nil_check(F->p_705)).next;
}
F->ut_708 = f_resolve_subtype_178((*(P386)rt_nil_check((*(P390)rt_nil_check(F->t_184)).decl)).a, &F->uc_707);
f_close_scope_147();
f_init_storage_186(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_183), rt_str(".all", 4)); b_; }), (*(P390)rt_nil_check(F->t_184)).under, F->uc_707);
} else if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)12LL))) {
if (((*(P388)rt_nil_check(F->c_185)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(&", 14), (*F->lval_183)), rt_str(", ", 2)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_185)).lo))), rt_str(", sizeof(", 9)), f_ctype_167((*(P390)rt_nil_check(F->t_184)).elem)), rt_str("), ", 3)), f_mcopy_191((*(P390)rt_nil_check(F->t_184)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)13LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_183)), rt_str(");", 2)); b_; }));
} else if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)14LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_183), rt_str(".active = 0; ", 13)), (*F->lval_183)), rt_str(".t = NULL; ", 11)), (*F->lval_183)), rt_str(".waiters = NULL;", 16)); b_; }));
} else if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)8LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_183), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)5LL))) {
if (((*(P388)rt_nil_check(F->c_185)).slen == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_183), rt_str(" = rt_str_new(", 14)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_185)).slen))), rt_str(");", 2)); b_; }));
} else if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)6LL))) {
if (((*(P388)rt_nil_check(F->c_185)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_183), rt_str(".lo = ", 6)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_185)).lo))), rt_str("; ", 2)), (*F->lval_183)), rt_str(".hi = ", 6)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_185)).hi))), rt_str("; ", 2)), (*F->lval_183)), rt_str(".lo2 = ", 7)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_185)).lo2))), rt_str("; ", 2)), (*F->lval_183)), rt_str(".hi2 = ", 7)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_185)).hi2))), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_183), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_167((*(P390)rt_nil_check(F->t_184)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_183)), rt_str("));", 3)); b_; }));
if (((((((*(P390)rt_nil_check((*(P390)rt_nil_check(F->t_184)).elem)).kind == ((rt_int)5LL)) || ((*(P390)rt_nil_check((*(P390)rt_nil_check(F->t_184)).elem)).kind == ((rt_int)6LL))) || ((*(P390)rt_nil_check((*(P390)rt_nil_check(F->t_184)).elem)).kind == ((rt_int)7LL))) || ((*(P390)rt_nil_check((*(P390)rt_nil_check(F->t_184)).elem)).kind == ((rt_int)15LL))) || ((*(P390)rt_nil_check((*(P390)rt_nil_check(F->t_184)).elem)).kind == ((rt_int)8LL)))) {
F->i_712 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_712), rt_str(" = 0; ", 6)), F->i_712), rt_str(" < RT_CNT(", 10)), (*F->lval_183)), rt_str("); ", 3)), F->i_712), rt_str("++) {", 5)); b_; }));
f_init_storage_186(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_183), rt_str(".p[", 3)), F->i_712), rt_str("]", 1)); b_; }), (*(P390)rt_nil_check(F->t_184)).elem, (*(P390)rt_nil_check(F->t_184)).elemcons);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P390)rt_nil_check(F->t_184)).kind == ((rt_int)7LL))) {
F->f_713 = NULL;
F->f_713 = (*(P390)rt_nil_check(F->t_184)).fields;
while ((F->f_713 != NULL)) {
f_init_storage_186(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_183), rt_str(".", 1)), f_lower_s_15(&(*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_713)).name)))); b_; }), (*(P392)rt_nil_check(F->f_713)).t, (*(P392)rt_nil_check(F->f_713)).c);
F->f_713 = (*(P392)rt_nil_check(F->f_713)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_189(P386 e_187, int *ok_188) {
  struct f_manifest_189fr *F = rt_alloc(sizeof *F);
F->e_187 = e_187;
F->ok_188 = ok_188;
(*F->ok_188) = 0;
if (((*(P386)rt_nil_check(F->e_187)).kind == ((rt_int)1LL))) {
(*F->ok_188) = 1;
F->result_ = (*(P386)rt_nil_check(F->e_187)).ival;
goto ret_;
} else if (((*(P386)rt_nil_check(F->e_187)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_189((*(P386)rt_nil_check(F->e_187)).a, &(*F->ok_188));
goto ret_;
} else if ((((*(P386)rt_nil_check(F->e_187)).kind == ((rt_int)8LL)) && rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_187)).name)), rt_str("-", 1)))) {
F->a_714 = f_manifest_189((*(P386)rt_nil_check(F->e_187)).a, &(*F->ok_188));
F->result_ = rt_neg(F->a_714);
goto ret_;
} else if ((((*(P386)rt_nil_check(F->e_187)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_187)).name)), rt_str("+", 1)) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_187)).name)), rt_str("-", 1))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_187)).name)), rt_str("*", 1))))) {
F->a_714 = f_manifest_189((*(P386)rt_nil_check(F->e_187)).a, &(*F->ok_188));
F->b_715 = f_manifest_189((*(P386)rt_nil_check(F->e_187)).b, &F->ok2_716);
(*F->ok_188) = ((*F->ok_188) && F->ok2_716);
if ((!(*F->ok_188))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_187)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_714, F->b_715);
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_187)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_714, F->b_715);
goto ret_;
}
F->result_ = rt_mul(F->a_714, F->b_715);
goto ret_;
} else if (((*(P386)rt_nil_check(F->e_187)).kind == ((rt_int)7LL))) {
F->y_717 = NULL;
F->y_717 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_187)).name)));
if ((((F->y_717 != NULL) && ((*(P396)rt_nil_check(F->y_717)).kind == ((rt_int)2LL))) && (*(P396)rt_nil_check(F->y_717)).hasmv)) {
(*F->ok_188) = 1;
F->result_ = (*(P396)rt_nil_check(F->y_717)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_mcopy_191(P390 t_190) {
  struct f_mcopy_191fr *F = rt_alloc(sizeof *F);
F->t_190 = t_190;
F->ct_718 = rt_str_copy(f_ctype_167(F->t_190));
F->name_719 = rt_str_new(rt_add((F->ct_718).len, ((rt_int)3LL)));
rt_str_assign(&F->name_719, rt_str_cat(rt_str("mc_", 3), F->ct_718));
F->l_720 = NULL;
if ((!f_seen_name_212(g_mcopies_437, &F->name_719))) {
{ R399 *cell721 = rt_alloc(sizeof(R399));
(*cell721).s = NULL;
(*cell721).next = NULL;
F->l_720 = cell721;
}
(*(P398)rt_nil_check(F->l_720)).s = f_mk_3(&F->name_719);
(*(P398)rt_nil_check(F->l_720)).next = g_mcopies_437;
g_mcopies_437 = F->l_720;
f_put_25(g_out_protos_419, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_719), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_719), rt_str("(void *d, const void *s) { *(", 29)), F->ct_718), rt_str(" *)d = ", 7)), f_copy_code_201(F->t_190, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_718), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_719;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_193(P390 t_192) {
  struct f_composite_193fr *F = rt_alloc(sizeof *F);
F->t_192 = t_192;
F->result_ = ((((*(P390)rt_nil_check(F->t_192)).kind == ((rt_int)6LL)) || ((*(P390)rt_nil_check(F->t_192)).kind == ((rt_int)7LL))) || (((*(P390)rt_nil_check(F->t_192)).kind == ((rt_int)15LL)) && ((*(P390)rt_nil_check(F->t_192)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_198(rstr *lval_194, P390 t_195, rstr *v_196, P388 c_197) {
  struct f_assign_code_198fr *F = rt_alloc(sizeof *F);
F->lval_194 = lval_194;
F->t_195 = t_195;
F->v_196 = v_196;
F->c_197 = c_197;
if ((((*(P390)rt_nil_check(F->t_195)).kind == ((rt_int)15LL)) && ((*(P390)rt_nil_check(F->t_195)).tparams == NULL))) {
F->result_ = f_assign_code_198(&(*F->lval_194), (*(P390)rt_nil_check(F->t_195)).under, &(*F->v_196), F->c_197);
goto ret_;
}
if (f_composite_193(F->t_195)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_167(F->t_195)), rt_str("(&", 2)), (*F->lval_194)), rt_str(", ", 2)), (*F->v_196)), rt_str(");", 2));
goto ret_;
}
if (((*(P390)rt_nil_check(F->t_195)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_194)), rt_str(", ", 2)), (*F->v_196)), rt_str(");", 2));
goto ret_;
} else if ((((*(P390)rt_nil_check(F->t_195)).kind == ((rt_int)6LL)) || ((*(P390)rt_nil_check(F->t_195)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_167(F->t_195)), rt_str("(&", 2)), (*F->lval_194)), rt_str(", ", 2)), (*F->v_196)), rt_str(");", 2));
goto ret_;
} else if (((((*(P390)rt_nil_check(F->t_195)).kind == ((rt_int)1LL)) && (F->c_197 != NULL)) && (*(P388)rt_nil_check(F->c_197)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_194), rt_str(" = rt_range(", 12)), (*F->v_196)), rt_str(", ", 2)), f_itos_7((*(P388)rt_nil_check(F->c_197)).mlo)), rt_str(", ", 2)), f_itos_7((*(P388)rt_nil_check(F->c_197)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_194), rt_str(" = ", 3)), (*F->v_196)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_201(P390 t_199, rstr *v_200) {
  struct f_copy_code_201fr *F = rt_alloc(sizeof *F);
F->t_199 = t_199;
F->v_200 = v_200;
if ((((*(P390)rt_nil_check(F->t_199)).kind == ((rt_int)15LL)) && ((*(P390)rt_nil_check(F->t_199)).tparams == NULL))) {
F->result_ = f_copy_code_201((*(P390)rt_nil_check(F->t_199)).under, &(*F->v_200));
goto ret_;
}
if (f_composite_193(F->t_199)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_167(F->t_199)), rt_str("(", 1)), (*F->v_200)), rt_str(")", 1));
goto ret_;
}
if (((*(P390)rt_nil_check(F->t_199)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_200)), rt_str(")", 1));
goto ret_;
} else if ((((*(P390)rt_nil_check(F->t_199)).kind == ((rt_int)6LL)) || ((*(P390)rt_nil_check(F->t_199)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_167(F->t_199)), rt_str("(", 1)), (*F->v_200)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_200);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_205(P390 t_202, rstr *a_203, rstr *b_204) {
  struct f_eq_code_205fr *F = rt_alloc(sizeof *F);
F->t_202 = t_202;
F->a_203 = a_203;
F->b_204 = b_204;
if ((((*(P390)rt_nil_check(F->t_202)).kind == ((rt_int)15LL)) && ((*(P390)rt_nil_check(F->t_202)).tparams == NULL))) {
F->result_ = f_eq_code_205((*(P390)rt_nil_check(F->t_202)).under, &(*F->a_203), &(*F->b_204));
goto ret_;
}
if (f_composite_193(F->t_202)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_167(F->t_202)), rt_str("(", 1)), (*F->a_203)), rt_str(", ", 2)), (*F->b_204)), rt_str(")", 1));
goto ret_;
}
if (((*(P390)rt_nil_check(F->t_202)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_203)), rt_str(", ", 2)), (*F->b_204)), rt_str(")", 1));
goto ret_;
}
if (((*(P390)rt_nil_check(F->t_202)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_203)), rt_str(", ", 2)), (*F->b_204)), rt_str(")", 1));
goto ret_;
} else if ((((*(P390)rt_nil_check(F->t_202)).kind == ((rt_int)6LL)) || ((*(P390)rt_nil_check(F->t_202)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_167(F->t_202)), rt_str("(", 1)), (*F->a_203)), rt_str(", ", 2)), (*F->b_204)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_203)), rt_str(" == ", 4)), (*F->b_204)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_209(rstr *lval_206, P390 t_207, rstr *v_208) {
  struct f_elem_assign_209fr *F = rt_alloc(sizeof *F);
F->lval_206 = lval_206;
F->t_207 = t_207;
F->v_208 = v_208;
F->result_ = f_assign_code_198(&(*F->lval_206), F->t_207, &(*F->v_208), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_212(P398 l_210, rstr *s_211) {
  struct f_seen_name_212fr *F = rt_alloc(sizeof *F);
F->l_210 = l_210;
F->s_211 = s_211;
F->p_722 = NULL;
F->p_722 = F->l_210;
while ((F->p_722 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P398)rt_nil_check(F->p_722)).s)), (*F->s_211))) {
F->result_ = 1;
goto ret_;
}
F->p_722 = (*(P398)rt_nil_check(F->p_722)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_213(void) {
  struct f_emit_helpers_213fr *F = rt_alloc(sizeof *F);
F->order_723 = NULL;
F->t_724 = NULL;
F->t_724 = g_all_types_415;
F->done_725 = NULL;
while ((F->t_724 != NULL)) {
if ((f_composite_193(F->t_724) && (!f_seen_name_212(F->done_725, &(*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_724)).cname)))))) {
F->l_726 = NULL;
F->c_727 = rt_str_new(((*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_724)).cname))).len);
rt_str_assign(&F->c_727, (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_724)).cname)));
{ R399 *cell728 = rt_alloc(sizeof(R399));
(*cell728).s = NULL;
(*cell728).next = NULL;
F->l_726 = cell728;
}
(*(P398)rt_nil_check(F->l_726)).s = (*(P390)rt_nil_check(F->t_724)).cname;
(*(P398)rt_nil_check(F->l_726)).next = F->done_725;
F->done_725 = F->l_726;
f_put_25(g_out_helpers_418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_727), rt_str("(", 1)), F->c_727), rt_str(" *d, ", 5)), F->c_727), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_727), rt_str(" cp_", 4)), F->c_727), rt_str("(", 1)), F->c_727), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_727), rt_str("(", 1)), F->c_727), rt_str(" a, ", 4)), F->c_727), rt_str(" b);", 4)); b_; }));
f_helper_bodies_215(F->t_724);
}
F->t_724 = (*(P390)rt_nil_check(F->t_724)).next;
}
ret_:
  return;
}

static void f_helper_bodies_215(P390 t_214) {
  struct f_helper_bodies_215fr *F = rt_alloc(sizeof *F);
F->t_214 = t_214;
F->c_729 = rt_str_new(((*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_214)).cname))).len);
rt_str_assign(&F->c_729, (*(P381)rt_nil_check((*(P390)rt_nil_check(F->t_214)).cname)));
F->b_730 = NULL;
F->b_730 = g_out_funcs_421;
if (((*(P390)rt_nil_check(F->t_214)).kind == ((rt_int)6LL))) {
F->e_731 = NULL;
F->e_731 = (*(P390)rt_nil_check(F->t_214)).elem;
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" *d, ", 5)), F->c_729), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_16()), rt_str("array length", 12)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_209(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_731, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_729), rt_str(" cp_", 4)), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_729), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_167(F->e_731)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_201(F->e_731, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" a, ", 4)), F->c_729), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_205(F->e_731, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P390)rt_nil_check(F->t_214)).kind == ((rt_int)15LL))) {
F->p_732 = NULL;
F->p_732 = (*(P390)rt_nil_check(F->t_214)).tparams;
F->pc_733 = NULL;
F->pc_733 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_732 != NULL)) {
F->pc_733 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->pc_733)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_732)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_732)).name)))); b_; }));
F->p_732 = (*(P386)rt_nil_check(F->p_732)).next;
}
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" *d, ", 5)), F->c_729), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P381)rt_nil_check(F->pc_733))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_16()), rt_str("constraint", 10)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_209(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P390)rt_nil_check(F->t_214)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_729), rt_str(" cp_", 4)), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" s) { s.all = ", 14)), f_copy_code_201((*(P390)rt_nil_check(F->t_214)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" a, ", 4)), F->c_729), rt_str(" b) { return ", 13)), f_eq_code_205((*(P390)rt_nil_check(F->t_214)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_734 = NULL;
F->f_734 = (*(P390)rt_nil_check(F->t_214)).fields;
F->conds_735 = NULL;
F->conds_735 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" *d, ", 5)), F->c_729), rt_str(" s) {", 5)); b_; }));
while ((F->f_734 != NULL)) {
F->fn_736 = rt_str_copy(f_lower_s_15(&(*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_734)).name))));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_209(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_736); b_; }), (*(P392)rt_nil_check(F->f_734)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_736); b_; }))); b_; }));
F->f_734 = (*(P392)rt_nil_check(F->f_734)).next;
}
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_729), rt_str(" cp_", 4)), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_729), rt_str(" d = s;", 7)); b_; }));
F->f_734 = (*(P390)rt_nil_check(F->t_214)).fields;
while ((F->f_734 != NULL)) {
F->fn_737 = rt_str_copy(f_lower_s_15(&(*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_734)).name))));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_737), rt_str(" = ", 3)), f_copy_code_201((*(P392)rt_nil_check(F->f_734)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_737); b_; }))), rt_str(";", 1)); b_; }));
F->conds_735 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->conds_735)), rt_str(" && ", 4)), f_eq_code_205((*(P392)rt_nil_check(F->f_734)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_737); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_737); b_; }))); b_; }));
F->f_734 = (*(P392)rt_nil_check(F->f_734)).next;
}
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_729), rt_str("(", 1)), F->c_729), rt_str(" a, ", 4)), F->c_729), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P381)rt_nil_check(F->conds_735))), rt_str(";", 1)); b_; }));
f_put_25(F->b_730, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_217(P386 elems_216) {
  struct f_declare_body_217fr *F = rt_alloc(sizeof *F);
F->elems_216 = elems_216;
F->e_738 = NULL;
F->e_738 = F->elems_216;
while ((F->e_738 != NULL)) {
if ((((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)41LL)) && ((*(P386)rt_nil_check(F->e_738)).flag == ((rt_int)0LL)))) {
f_manifest_const_219(F->e_738);
} else if (((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)47LL))) {
f_gen_capsule_227(F->e_738);
} else if (((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)48LL))) {
f_gen_expose_229(F->e_738);
} else if (((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)49LL))) {
F->y_739 = NULL;
F->y_739 = f_new_sym_150(((rt_int)7LL), (*(P386)rt_nil_check(F->e_738)).name);
(*(P396)rt_nil_check(F->y_739)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_738)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_140(F->y_739, (*(P386)rt_nil_check(F->e_738)).line);
f_put_25(g_out_globals_420, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_739)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_excs_423, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_739)).cname))), rt_str(" = rt_exc(", 10)), f_q_16()), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_738)).name))), f_q_16()), rt_str(");", 2)); b_; }));
} else if (((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)42LL))) {
F->y_740 = NULL;
F->y_740 = f_new_sym_150(((rt_int)6LL), (*(P386)rt_nil_check(F->e_738)).name);
(*(P396)rt_nil_check(F->y_740)).st = (*(P386)rt_nil_check(F->e_738)).a;
f_define_140(F->y_740, (*(P386)rt_nil_check(F->e_738)).line);
} else if (((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)44LL))) {
F->y_741 = NULL;
F->y_741 = f_new_sym_150(((rt_int)5LL), (*(P386)rt_nil_check(F->e_738)).name);
F->t_742 = NULL;
F->t_742 = f_new_typ_152(((rt_int)8LL));
(*(P390)rt_nil_check(F->t_742)).name = (*(P386)rt_nil_check(F->e_738)).name;
(*(P390)rt_nil_check(F->t_742)).decl = F->e_738;
(*(P396)rt_nil_check(F->y_741)).t = F->t_742;
f_define_140(F->y_741, (*(P386)rt_nil_check(F->e_738)).line);
} else if (((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)43LL))) {
F->y_743 = NULL;
F->y_743 = f_new_sym_150(((rt_int)5LL), (*(P386)rt_nil_check(F->e_738)).name);
(*(P396)rt_nil_check(F->y_743)).st = (*(P386)rt_nil_check(F->e_738)).a;
(*(P396)rt_nil_check(F->y_743)).decl = F->e_738;
f_define_140(F->y_743, (*(P386)rt_nil_check(F->e_738)).line);
}
F->e_738 = (*(P386)rt_nil_check(F->e_738)).next;
}
F->e_738 = F->elems_216;
while ((F->e_738 != NULL)) {
if (((((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)45LL)) || ((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)46LL))) || ((*(P386)rt_nil_check(F->e_738)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_233(F->e_738);
}
F->e_738 = (*(P386)rt_nil_check(F->e_738)).next;
}
ret_:
  return;
}

static void f_manifest_const_219(P386 d_218) {
  struct f_manifest_const_219fr *F = rt_alloc(sizeof *F);
F->d_218 = d_218;
F->y_746 = NULL;
F->c_747 = NULL;
if (((*(P386)rt_nil_check(F->d_218)).a != NULL)) {
if ((((*(P386)rt_nil_check((*(P386)rt_nil_check(F->d_218)).a)).kind != ((rt_int)70LL)) || ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->d_218)).a)).a != NULL))) {
goto ret_;
}
}
F->v_745 = f_manifest_189((*(P386)rt_nil_check(F->d_218)).b, &F->ok_744);
if ((!F->ok_744)) {
goto ret_;
}
(*(P386)rt_nil_check(F->d_218)).flag = ((rt_int)1LL);
F->y_746 = f_new_sym_150(((rt_int)2LL), (*(P386)rt_nil_check(F->d_218)).name);
(*(P396)rt_nil_check(F->y_746)).t = g_ty_int_438;
(*(P396)rt_nil_check(F->y_746)).c = f_new_cons_153();
(*(P396)rt_nil_check(F->y_746)).mvalue = F->v_745;
(*(P396)rt_nil_check(F->y_746)).hasmv = 1;
(*(P396)rt_nil_check(F->y_746)).ro_flag = 1;
(*(P396)rt_nil_check(F->y_746)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_745)), rt_str("LL)", 3)); b_; }));
f_define_140(F->y_746, (*(P386)rt_nil_check(F->d_218)).line);
ret_:
  return;
}

static int f_exported_223(P386 d_220, rstr *name_221, int *ro_222) {
  struct f_exported_223fr *F = rt_alloc(sizeof *F);
F->d_220 = d_220;
F->name_221 = name_221;
F->ro_222 = ro_222;
F->p_748 = NULL;
F->p_748 = (*(P386)rt_nil_check(F->d_220)).a;
(*F->ro_222) = 0;
if (((*(P386)rt_nil_check(F->d_220)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_748 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_748)).name)), (*F->name_221))) {
(*F->ro_222) = ((*(P386)rt_nil_check(F->p_748)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_748 = (*(P386)rt_nil_check(F->p_748)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P396 f_copy_sym_225(P396 y_224) {
  struct f_copy_sym_225fr *F = rt_alloc(sizeof *F);
F->y_224 = y_224;
F->z_749 = NULL;
{ R397 *cell750 = rt_alloc(sizeof(R397));
(*cell750).name = NULL;
(*cell750).t = NULL;
(*cell750).c = NULL;
(*cell750).access = NULL;
(*cell750).cname = NULL;
(*cell750).st = NULL;
(*cell750).decl = NULL;
(*cell750).params = NULL;
(*cell750).result = NULL;
(*cell750).members = NULL;
(*cell750).mnext = NULL;
(*cell750).chain = NULL;
(*cell750).stack = NULL;
F->z_749 = cell750;
}
(*(P396)rt_nil_check(F->z_749)).kind = (*(P396)rt_nil_check(F->y_224)).kind;
(*(P396)rt_nil_check(F->z_749)).name = (*(P396)rt_nil_check(F->y_224)).name;
(*(P396)rt_nil_check(F->z_749)).t = (*(P396)rt_nil_check(F->y_224)).t;
(*(P396)rt_nil_check(F->z_749)).c = (*(P396)rt_nil_check(F->y_224)).c;
(*(P396)rt_nil_check(F->z_749)).access = (*(P396)rt_nil_check(F->y_224)).access;
(*(P396)rt_nil_check(F->z_749)).cname = (*(P396)rt_nil_check(F->y_224)).cname;
(*(P396)rt_nil_check(F->z_749)).ro_flag = (*(P396)rt_nil_check(F->y_224)).ro_flag;
(*(P396)rt_nil_check(F->z_749)).mvalue = (*(P396)rt_nil_check(F->y_224)).mvalue;
(*(P396)rt_nil_check(F->z_749)).hasmv = (*(P396)rt_nil_check(F->y_224)).hasmv;
(*(P396)rt_nil_check(F->z_749)).st = (*(P396)rt_nil_check(F->y_224)).st;
(*(P396)rt_nil_check(F->z_749)).decl = (*(P396)rt_nil_check(F->y_224)).decl;
(*(P396)rt_nil_check(F->z_749)).params = (*(P396)rt_nil_check(F->y_224)).params;
(*(P396)rt_nil_check(F->z_749)).result = (*(P396)rt_nil_check(F->y_224)).result;
(*(P396)rt_nil_check(F->z_749)).level = (*(P396)rt_nil_check(F->y_224)).level;
(*(P396)rt_nil_check(F->z_749)).byref = (*(P396)rt_nil_check(F->y_224)).byref;
(*(P396)rt_nil_check(F->z_749)).members = (*(P396)rt_nil_check(F->y_224)).members;
F->result_ = F->z_749;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_227(P386 d_226) {
  struct f_gen_capsule_227fr *F = rt_alloc(sizeof *F);
F->d_226 = d_226;
F->y_751 = NULL;
F->y_751 = f_new_sym_150(((rt_int)8LL), (*(P386)rt_nil_check(F->d_226)).name);
F->ctx_752 = NULL;
F->m_753 = NULL;
F->p_754 = NULL;
F->p_754 = (*(P386)rt_nil_check(F->d_226)).a;
(*(P396)rt_nil_check(F->y_751)).decl = F->d_226;
f_open_scope_146();
{ R407 *cell756 = rt_alloc(sizeof(R407));
(*cell756).imps = NULL;
(*cell756).next = NULL;
F->ctx_752 = cell756;
}
(*(P406)rt_nil_check(F->ctx_752)).depth = g_depth_413;
(*(P406)rt_nil_check(F->ctx_752)).imps = (*(P386)rt_nil_check(F->d_226)).d;
(*(P406)rt_nil_check(F->ctx_752)).all_imp = ((*(P386)rt_nil_check(F->d_226)).flag >= ((rt_int)2LL));
(*(P406)rt_nil_check(F->ctx_752)).next = g_fctx_428;
g_fctx_428 = F->ctx_752;
f_declare_body_217((*(P386)rt_nil_check(F->d_226)).c);
f_body_elements_249((*(P386)rt_nil_check(F->d_226)).c);
g_fctx_428 = (*(P406)rt_nil_check(g_fctx_428)).next;
F->m_753 = g_scope_stack_414;
while (((F->m_753 != NULL) && ((*(P396)rt_nil_check(F->m_753)).depth == g_depth_413))) {
if (((((((*(P396)rt_nil_check(F->m_753)).kind == ((rt_int)5LL)) && ((*(P396)rt_nil_check(F->m_753)).t == NULL)) && ((*(P396)rt_nil_check(F->m_753)).decl != NULL)) && ((*(P386)rt_nil_check((*(P396)rt_nil_check(F->m_753)).decl)).kind == ((rt_int)43LL))) && ((*(P386)rt_nil_check((*(P396)rt_nil_check(F->m_753)).decl)).b != NULL))) {
(*(P396)rt_nil_check(F->m_753)).t = f_new_type_182(F->m_753, f_nn_46(((rt_int)80LL), (*(P386)rt_nil_check(F->d_226)).line), &(*(P396)rt_nil_check(F->m_753)).c);
} else if (((((*(P396)rt_nil_check(F->m_753)).kind == ((rt_int)5LL)) || ((*(P396)rt_nil_check(F->m_753)).kind == ((rt_int)6LL))) && ((*(P396)rt_nil_check(F->m_753)).t == NULL))) {
(*(P396)rt_nil_check(F->m_753)).t = f_resolve_subtype_178((*(P396)rt_nil_check(F->m_753)).st, &(*(P396)rt_nil_check(F->m_753)).c);
} else if ((((*(P396)rt_nil_check(F->m_753)).kind == ((rt_int)5LL)) && ((*(P390)rt_nil_check((*(P396)rt_nil_check(F->m_753)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_231((*(P396)rt_nil_check(F->m_753)).t);
}
F->m_753 = (*(P396)rt_nil_check(F->m_753)).stack;
}
F->m_753 = g_scope_stack_414;
while (((F->m_753 != NULL) && ((*(P396)rt_nil_check(F->m_753)).depth == g_depth_413))) {
if (f_exported_223(F->d_226, &(*(P381)rt_nil_check((*(P396)rt_nil_check(F->m_753)).name)), &F->ro_755)) {
F->z_757 = NULL;
F->z_757 = f_copy_sym_225(F->m_753);
if (F->ro_755) {
(*(P396)rt_nil_check(F->z_757)).ro_flag = 1;
}
(*(P396)rt_nil_check(F->z_757)).mnext = (*(P396)rt_nil_check(F->y_751)).members;
(*(P396)rt_nil_check(F->y_751)).members = F->z_757;
}
F->m_753 = (*(P396)rt_nil_check(F->m_753)).stack;
}
while ((F->p_754 != NULL)) {
if (((f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_754)).name))) == NULL) || ((*(P396)rt_nil_check(f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_754)).name))))).depth != g_depth_413))) {
f_fail_21((*(P386)rt_nil_check(F->d_226)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_754)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_226)).name))); b_; }));
}
F->p_754 = (*(P386)rt_nil_check(F->p_754)).next;
}
f_close_scope_147();
f_define_140(F->y_751, (*(P386)rt_nil_check(F->d_226)).line);
ret_:
  return;
}

static void f_gen_expose_229(P386 d_228) {
  struct f_gen_expose_229fr *F = rt_alloc(sizeof *F);
F->d_228 = d_228;
F->y_758 = NULL;
F->y_758 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_228)).name)));
F->m_759 = NULL;
F->p_760 = NULL;
F->p_760 = (*(P386)rt_nil_check(F->d_228)).a;
if (((F->y_758 == NULL) || ((*(P396)rt_nil_check(F->y_758)).kind != ((rt_int)8LL)))) {
f_fail_21((*(P386)rt_nil_check(F->d_228)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_228)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P386)rt_nil_check(F->d_228)).ival == ((rt_int)1LL))) {
F->m_759 = (*(P396)rt_nil_check(F->y_758)).members;
while ((F->m_759 != NULL)) {
f_define_140(f_copy_sym_225(F->m_759), (*(P386)rt_nil_check(F->d_228)).line);
F->m_759 = (*(P396)rt_nil_check(F->m_759)).mnext;
}
goto ret_;
}
while ((F->p_760 != NULL)) {
F->found_761 = 0;
F->m_759 = (*(P396)rt_nil_check(F->y_758)).members;
while ((F->m_759 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P396)rt_nil_check(F->m_759)).name)), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_760)).name)))) {
F->z_762 = NULL;
F->z_762 = f_copy_sym_225(F->m_759);
if (((*(P386)rt_nil_check(F->p_760)).ival == ((rt_int)1LL))) {
(*(P396)rt_nil_check(F->z_762)).ro_flag = 1;
}
f_define_140(F->z_762, (*(P386)rt_nil_check(F->d_228)).line);
F->found_761 = 1;
}
F->m_759 = (*(P396)rt_nil_check(F->m_759)).mnext;
}
if ((!F->found_761)) {
f_fail_21((*(P386)rt_nil_check(F->d_228)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_760)).name)), rt_str(" is not exported by ", 20)), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_228)).name))); b_; }));
}
F->p_760 = (*(P386)rt_nil_check(F->p_760)).next;
}
ret_:
  return;
}

static void f_finish_ptr_231(P390 t_230) {
  struct f_finish_ptr_231fr *F = rt_alloc(sizeof *F);
F->t_230 = t_230;
F->d_763 = NULL;
F->d_763 = (*(P390)rt_nil_check(F->t_230)).decl;
F->p_764 = NULL;
F->c_765 = NULL;
F->dummy_766 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_766, rt_str(" ", 1));
if (((*(P390)rt_nil_check(F->t_230)).target != NULL)) {
goto ret_;
}
f_open_scope_146();
F->p_764 = (*(P386)rt_nil_check(F->d_763)).b;
while ((F->p_764 != NULL)) {
F->y_767 = NULL;
F->y_767 = f_new_sym_150(((rt_int)2LL), (*(P386)rt_nil_check(F->p_764)).name);
(*(P396)rt_nil_check(F->y_767)).t = g_ty_int_438;
(*(P396)rt_nil_check(F->y_767)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_140(F->y_767, (*(P386)rt_nil_check(F->d_763)).line);
F->p_764 = (*(P386)rt_nil_check(F->p_764)).next;
}
(*(P390)rt_nil_check(F->t_230)).target = f_resolve_subtype_178((*(P386)rt_nil_check(F->d_763)).a, &F->c_765);
f_close_scope_147();
(*rt_str_at(&F->dummy_766, ((rt_int)1LL))) = rt_str_get(f_ctype_167(F->t_230), ((rt_int)1LL));
(*rt_str_at(&F->dummy_766, ((rt_int)1LL))) = rt_str_get(f_ctype_167((*(P390)rt_nil_check(F->t_230)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_233(P386 d_232) {
  struct f_declare_subprogram_233fr *F = rt_alloc(sizeof *F);
F->d_232 = d_232;
F->y_768 = NULL;
F->p_769 = NULL;
F->p_769 = (*(P386)rt_nil_check(F->d_232)).a;
F->tail_770 = NULL;
if (((*(P386)rt_nil_check(F->d_232)).kind == ((rt_int)46LL))) {
F->y_768 = f_new_sym_150(((rt_int)3LL), (*(P386)rt_nil_check(F->d_232)).name);
} else if (((*(P386)rt_nil_check(F->d_232)).kind == ((rt_int)50LL))) {
F->y_768 = f_new_sym_150(((rt_int)9LL), (*(P386)rt_nil_check(F->d_232)).name);
} else {
F->y_768 = f_new_sym_150(((rt_int)4LL), (*(P386)rt_nil_check(F->d_232)).name);
}
while ((F->p_769 != NULL)) {
F->pm_771 = NULL;
{ R395 *cell772 = rt_alloc(sizeof(R395));
(*cell772).name = NULL;
(*cell772).t = NULL;
(*cell772).c = NULL;
(*cell772).cfield = NULL;
(*cell772).next = NULL;
F->pm_771 = cell772;
}
(*(P394)rt_nil_check(F->pm_771)).name = (*(P386)rt_nil_check(F->p_769)).name;
(*(P394)rt_nil_check(F->pm_771)).mode = (*(P386)rt_nil_check(F->p_769)).ival;
(*(P394)rt_nil_check(F->pm_771)).t = f_resolve_subtype_178((*(P386)rt_nil_check(F->p_769)).a, &(*(P394)rt_nil_check(F->pm_771)).c);
(*(P394)rt_nil_check(F->pm_771)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_769)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_770 == NULL)) {
(*(P396)rt_nil_check(F->y_768)).params = F->pm_771;
} else {
(*(P394)rt_nil_check(F->tail_770)).next = F->pm_771;
}
F->tail_770 = F->pm_771;
F->p_769 = (*(P386)rt_nil_check(F->p_769)).next;
}
(*(P396)rt_nil_check(F->y_768)).result = g_ty_void_443;
if (((*(P386)rt_nil_check(F->d_232)).b != NULL)) {
F->rc_773 = NULL;
(*(P396)rt_nil_check(F->y_768)).result = f_resolve_subtype_178((*(P386)rt_nil_check(F->d_232)).b, &F->rc_773);
}
(*(P396)rt_nil_check(F->y_768)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_301(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_232)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P396)rt_nil_check(F->y_768)).decl = F->d_232;
(*(P396)rt_nil_check(F->y_768)).level = g_cur_level_427;
if (((*(P386)rt_nil_check(F->d_232)).kind == ((rt_int)50LL))) {
f_put_25(g_out_globals_420, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_768)).cname))), rt_str("decl;", 5)); b_; }));
}
f_define_140(F->y_768, (*(P386)rt_nil_check(F->d_232)).line);
ret_:
  return;
}

static void f_element_235(P386 e_234) {
  struct f_element_235fr *F = rt_alloc(sizeof *F);
F->e_234 = e_234;
F->k_774 = (*(P386)rt_nil_check(F->e_234)).kind;
if ((((F->k_774 == ((rt_int)45LL)) || (F->k_774 == ((rt_int)46LL))) || (F->k_774 == ((rt_int)50LL)))) {
f_subprogram_247(F->e_234);
} else if ((((((F->k_774 == ((rt_int)49LL)) || (F->k_774 == ((rt_int)42LL))) || (F->k_774 == ((rt_int)43LL))) || (F->k_774 == ((rt_int)47LL))) || (F->k_774 == ((rt_int)48LL)))) {
goto ret_;
} else if ((F->k_774 == ((rt_int)44LL))) {
f_finish_ptr_231((*(P396)rt_nil_check(f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_234)).name))))).t);
} else if ((F->k_774 == ((rt_int)40LL))) {
f_var_decl_243(F->e_234);
} else if (((F->k_774 == ((rt_int)41LL)) && ((*(P386)rt_nil_check(F->e_234)).flag == ((rt_int)0LL)))) {
f_const_decl_245(F->e_234);
} else if ((F->k_774 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_774 == ((rt_int)33LL))) {
F->t_775 = NULL;
F->c_776 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_234)).a, g_ty_bool_439, &F->t_775));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_776), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_258(F->e_234);
}
ret_:
  return;
}

static rstr f_storage_238(rstr *name_236, P390 t_237) {
  struct f_storage_238fr *F = rt_alloc(sizeof *F);
F->name_236 = name_236;
F->t_237 = t_237;
if ((!g_in_func_426)) {
F->g_777 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_236))), rt_str("_", 1)); b_; })));
f_put_25(g_out_globals_420, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_167(F->t_237)), rt_str(" ", 1)), F->g_777), rt_str(";", 1)); b_; }));
g_st_field_429 = f_mk_3(&F->g_777);
F->result_ = F->g_777;
goto ret_;
}
{
F->f_778 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_236)), rt_str("_", 1)); b_; })));
f_put_25(g_fields_buf_425, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_167(F->t_237)), rt_str(" ", 1)), F->f_778), rt_str(";", 1)); b_; }));
g_st_field_429 = f_mk_3(&F->f_778);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_778);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_241(P396 y_239, rstr *access_240) {
  struct f_bind_241fr *F = rt_alloc(sizeof *F);
F->y_239 = y_239;
F->access_240 = access_240;
if (g_in_func_426) {
(*(P396)rt_nil_check(F->y_239)).level = g_cur_level_427;
(*(P396)rt_nil_check(F->y_239)).access = g_st_field_429;
} else {
(*(P396)rt_nil_check(F->y_239)).level = ((rt_int)0LL);
(*(P396)rt_nil_check(F->y_239)).access = f_mk_3(&(*F->access_240));
}
ret_:
  return;
}

static void f_var_decl_243(P386 d_242) {
  struct f_var_decl_243fr *F = rt_alloc(sizeof *F);
F->d_242 = d_242;
F->c_779 = NULL;
F->t_780 = NULL;
F->t_780 = f_resolve_subtype_178((*(P386)rt_nil_check(F->d_242)).a, &F->c_779);
F->y_781 = NULL;
F->y_781 = f_new_sym_150(((rt_int)1LL), (*(P386)rt_nil_check(F->d_242)).name);
F->access_782 = rt_str_copy(f_storage_238(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_242)).name)), F->t_780));
f_init_storage_186(&F->access_782, F->t_780, F->c_779);
if (((*(P386)rt_nil_check(F->d_242)).b != NULL)) {
F->vt_783 = NULL;
F->v_784 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->d_242)).b, F->t_780, &F->vt_783));
f_check_type_165(F->vt_783, F->t_780, (*(P386)rt_nil_check(F->d_242)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_198(&F->access_782, F->t_780, &F->v_784, F->c_779); b_; }));
}
(*(P396)rt_nil_check(F->y_781)).t = F->t_780;
(*(P396)rt_nil_check(F->y_781)).c = F->c_779;
f_bind_241(F->y_781, &F->access_782);
f_define_140(F->y_781, (*(P386)rt_nil_check(F->d_242)).line);
ret_:
  return;
}

static void f_const_decl_245(P386 d_244) {
  struct f_const_decl_245fr *F = rt_alloc(sizeof *F);
F->d_244 = d_244;
F->c_785 = NULL;
F->c_785 = f_new_cons_153();
F->t_786 = NULL;
F->vt_787 = NULL;
F->y_788 = NULL;
F->y_788 = f_new_sym_150(((rt_int)2LL), (*(P386)rt_nil_check(F->d_244)).name);
if (((*(P386)rt_nil_check(F->d_244)).a != NULL)) {
F->t_786 = f_resolve_subtype_178((*(P386)rt_nil_check(F->d_244)).a, &F->c_785);
}
{
F->v_790 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->d_244)).b, F->t_786, &F->vt_787));
if ((F->t_786 != NULL)) {
f_check_type_165(F->vt_787, F->t_786, (*(P386)rt_nil_check(F->d_244)).line);
} else {
F->t_786 = F->vt_787;
}
if (((*(P390)rt_nil_check(F->t_786)).kind == ((rt_int)1LL))) {
(*(P396)rt_nil_check(F->y_788)).mvalue = f_manifest_189((*(P386)rt_nil_check(F->d_244)).b, &F->ok_789);
(*(P396)rt_nil_check(F->y_788)).hasmv = F->ok_789;
}
{
F->access_791 = rt_str_copy(f_storage_238(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->d_244)).name)), F->t_786));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_791, rt_str(" = ", 3)), f_copy_code_201(F->t_786, &F->v_790)), rt_str(";", 1)); b_; }));
f_bind_241(F->y_788, &F->access_791);
}
}
(*(P396)rt_nil_check(F->y_788)).t = F->t_786;
(*(P396)rt_nil_check(F->y_788)).c = F->c_785;
(*(P396)rt_nil_check(F->y_788)).ro_flag = 1;
f_define_140(F->y_788, (*(P386)rt_nil_check(F->d_244)).line);
ret_:
  return;
}

static void f_subprogram_247(P386 d_246) {
  struct f_subprogram_247fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->y_792 = NULL;
F->y_792 = f_lookup_decl_137(F->d_246);
F->saved_code_793 = NULL;
F->saved_code_793 = g_code_424;
F->saved_fields_794 = NULL;
F->saved_fields_794 = g_fields_buf_425;
F->saved_in_795 = g_in_func_426;
F->saved_sym_796 = NULL;
F->saved_sym_796 = g_func_sym_431;
F->saved_exits_797 = NULL;
F->saved_exits_797 = g_exits_432;
F->saved_frames_798 = g_frames_433;
F->args_799 = NULL;
F->args_799 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_800 = NULL;
F->pm_800 = (*(P396)rt_nil_check(F->y_792)).params;
F->saved_handlers_801 = NULL;
F->saved_handlers_801 = g_handlers_434;
F->saved_cleanups_802 = NULL;
F->saved_cleanups_802 = g_cleanups_435;
F->ctx_803 = NULL;
F->head_804 = NULL;
F->frame_805 = NULL;
F->frame_805 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_792)).cname)), rt_str("fr", 2)); b_; }));
F->parent_806 = NULL;
if (g_in_func_426) {
F->parent_806 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P396)rt_nil_check(g_func_sym_431)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_424 = f_new_buffer_22();
g_fields_buf_425 = f_new_buffer_22();
g_in_func_426 = 1;
g_func_sym_431 = F->y_792;
g_exits_432 = NULL;
g_frames_433 = ((rt_int)0LL);
g_handlers_434 = NULL;
g_cleanups_435 = NULL;
g_cur_level_427 = rt_add(g_cur_level_427, ((rt_int)1LL));
f_open_scope_146();
{ R407 *cell807 = rt_alloc(sizeof(R407));
(*cell807).imps = NULL;
(*cell807).next = NULL;
F->ctx_803 = cell807;
}
(*(P406)rt_nil_check(F->ctx_803)).depth = g_depth_413;
(*(P406)rt_nil_check(F->ctx_803)).imps = (*(P386)rt_nil_check(F->d_246)).d;
(*(P406)rt_nil_check(F->ctx_803)).all_imp = ((*(P386)rt_nil_check(F->d_246)).flag >= ((rt_int)2LL));
(*(P406)rt_nil_check(F->ctx_803)).next = g_fctx_428;
g_fctx_428 = F->ctx_803;
if ((F->parent_806 != NULL)) {
f_put_25(g_fields_buf_425, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P381)rt_nil_check(F->parent_806))), rt_str(" *up;", 5)); b_; }));
if (((*(P396)rt_nil_check(F->y_792)).kind != ((rt_int)9LL))) {
F->args_799 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P381)rt_nil_check(F->parent_806))), rt_str(" *up_", 5)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_800 != NULL)) {
F->ct_808 = rt_str_copy(f_ctype_167((*(P394)rt_nil_check(F->pm_800)).t));
F->f_809 = rt_str_copy((*(P381)rt_nil_check((*(P394)rt_nil_check(F->pm_800)).cfield)));
F->p_810 = NULL;
if ((((*(P381)rt_nil_check(F->args_799))).len > ((rt_int)0LL))) {
F->args_799 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->args_799)), rt_str(", ", 2)); b_; }));
}
if (((*(P394)rt_nil_check(F->pm_800)).mode == ((rt_int)1LL))) {
F->p_810 = f_new_sym_150(((rt_int)2LL), (*(P394)rt_nil_check(F->pm_800)).name);
f_put_25(g_fields_buf_425, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_808), rt_str(" ", 1)), F->f_809), rt_str(";", 1)); b_; }));
F->args_799 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->args_799)), F->ct_808), rt_str(" ", 1)), F->f_809); b_; }));
(*(P396)rt_nil_check(F->p_810)).access = f_mk_3(&F->f_809);
if (((*(P396)rt_nil_check(F->y_792)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_809), rt_str(" = ", 3)), f_copy_code_201((*(P394)rt_nil_check(F->pm_800)).t, &F->f_809)), rt_str(";", 1)); b_; }));
}
} else {
F->p_810 = f_new_sym_150(((rt_int)1LL), (*(P394)rt_nil_check(F->pm_800)).name);
f_put_25(g_fields_buf_425, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_808), rt_str(" *", 2)), F->f_809), rt_str(";", 1)); b_; }));
F->args_799 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->args_799)), F->ct_808), rt_str(" *", 2)), F->f_809); b_; }));
(*(P396)rt_nil_check(F->p_810)).access = f_mk_3(&F->f_809);
(*(P396)rt_nil_check(F->p_810)).byref = 1;
if (((*(P396)rt_nil_check(F->y_792)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_809), rt_str(" = ", 3)), F->f_809), rt_str(";", 1)); b_; }));
}
}
(*(P396)rt_nil_check(F->p_810)).t = (*(P394)rt_nil_check(F->pm_800)).t;
(*(P396)rt_nil_check(F->p_810)).c = (*(P394)rt_nil_check(F->pm_800)).c;
(*(P396)rt_nil_check(F->p_810)).level = g_cur_level_427;
(*(P396)rt_nil_check(F->p_810)).ro_flag = (((*(P394)rt_nil_check(F->pm_800)).mode == ((rt_int)1LL)) || ((*(P394)rt_nil_check(F->pm_800)).mode == ((rt_int)4LL)));
f_define_140(F->p_810, (*(P386)rt_nil_check(F->d_246)).line);
F->pm_800 = (*(P394)rt_nil_check(F->pm_800)).next;
}
if (((*(P390)rt_nil_check((*(P396)rt_nil_check(F->y_792)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_fields_buf_425, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_167((*(P396)rt_nil_check(F->y_792)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_217((*(P386)rt_nil_check(F->d_246)).c);
f_body_elements_249((*(P386)rt_nil_check(F->d_246)).c);
f_close_scope_147();
g_fctx_428 = (*(P406)rt_nil_check(g_fctx_428)).next;
g_cur_level_427 = rt_sub(g_cur_level_427, ((rt_int)1LL));
if (((((*(P381)rt_nil_check(F->args_799))).len == ((rt_int)0LL)) || ((*(P396)rt_nil_check(F->y_792)).kind == ((rt_int)9LL)))) {
F->args_799 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P396)rt_nil_check(F->y_792)).kind == ((rt_int)9LL))) {
F->args_799 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_804 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_167((*(P396)rt_nil_check(F->y_792)).result)), rt_str(" ", 1)), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_792)).cname))), rt_str("(", 1)), (*(P381)rt_nil_check(F->args_799))), rt_str(")", 1)); b_; }));
f_put_25(g_out_protos_419, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->head_804)), rt_str(";", 1)); b_; }));
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->head_804)), rt_str(" {", 2)); b_; }));
f_put_25(g_out_frames_430, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P381)rt_nil_check(F->frame_805))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_32(g_out_frames_430, g_fields_buf_425);
f_put_25(g_out_frames_430, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P396)rt_nil_check(F->y_792)).kind == ((rt_int)9LL))) {
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P381)rt_nil_check(F->frame_805))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P381)rt_nil_check(F->frame_805))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_32(g_out_funcs_421, g_code_424);
if (((*(P390)rt_nil_check((*(P396)rt_nil_check(F->y_792)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_16()), rt_str("function ended without RETURN", 29)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(g_out_funcs_421, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_424 = F->saved_code_793;
g_fields_buf_425 = F->saved_fields_794;
g_in_func_426 = F->saved_in_795;
g_func_sym_431 = F->saved_sym_796;
g_exits_432 = F->saved_exits_797;
g_frames_433 = F->saved_frames_798;
g_handlers_434 = F->saved_handlers_801;
g_cleanups_435 = F->saved_cleanups_802;
ret_:
  return;
}

static void f_body_elements_249(P386 elems_248) {
  struct f_body_elements_249fr *F = rt_alloc(sizeof *F);
F->elems_248 = elems_248;
F->e_811 = NULL;
F->e_811 = F->elems_248;
while ((F->e_811 != NULL)) {
f_element_235(F->e_811);
F->e_811 = (*(P386)rt_nil_check(F->e_811)).next;
}
F->e_811 = F->elems_248;
while ((F->e_811 != NULL)) {
if (((*(P386)rt_nil_check(F->e_811)).kind == ((rt_int)50LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_await_decl(&", 15), (*(P381)rt_nil_check((*(P396)rt_nil_check(f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_811)).name))))).cname))), rt_str("decl);", 6)); b_; }));
}
F->e_811 = (*(P386)rt_nil_check(F->e_811)).next;
}
ret_:
  return;
}

static void f_gen_body_251(P386 elems_250) {
  struct f_gen_body_251fr *F = rt_alloc(sizeof *F);
F->elems_250 = elems_250;
f_open_scope_146();
f_declare_body_217(F->elems_250);
f_body_elements_249(F->elems_250);
f_close_scope_147();
ret_:
  return;
}

static void f_pop_frames_253(rt_int upto_252) {
  struct f_pop_frames_253fr *F = rt_alloc(sizeof *F);
F->upto_252 = upto_252;
F->i_812 = g_frames_433;
F->c_813 = NULL;
F->c_813 = g_cleanups_435;
while ((F->i_812 > F->upto_252)) {
f_emit_27(&(*(P381)rt_nil_check((*(P398)rt_nil_check(F->c_813)).s)));
F->c_813 = (*(P398)rt_nil_check(F->c_813)).next;
F->i_812 = rt_sub(F->i_812, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_255(rstr *s_254) {
  struct f_push_cleanup_255fr *F = rt_alloc(sizeof *F);
F->s_254 = s_254;
F->c_814 = NULL;
{ R399 *cell815 = rt_alloc(sizeof(R399));
(*cell815).s = NULL;
(*cell815).next = NULL;
F->c_814 = cell815;
}
(*(P398)rt_nil_check(F->c_814)).s = f_mk_3(&(*F->s_254));
(*(P398)rt_nil_check(F->c_814)).next = g_cleanups_435;
g_cleanups_435 = F->c_814;
g_frames_433 = rt_add(g_frames_433, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_256(void) {
  struct f_pop_cleanup_256fr *F = rt_alloc(sizeof *F);
g_cleanups_435 = (*(P398)rt_nil_check(g_cleanups_435)).next;
g_frames_433 = rt_sub(g_frames_433, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_258(P386 s_257) {
  struct f_gen_statement_258fr *F = rt_alloc(sizeof *F);
F->s_257 = s_257;
F->label_816 = NULL;
if (((*(P386)rt_nil_check(F->s_257)).tag != NULL)) {
F->x_817 = NULL;
{ R405 *cell818 = rt_alloc(sizeof(R405));
(*cell818).match = NULL;
(*cell818).label = NULL;
(*cell818).next = NULL;
F->x_817 = cell818;
}
F->label_816 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P404)rt_nil_check(F->x_817)).match = (*(P386)rt_nil_check(F->s_257)).tag;
(*(P404)rt_nil_check(F->x_817)).label = F->label_816;
(*(P404)rt_nil_check(F->x_817)).depth = g_frames_433;
(*(P404)rt_nil_check(F->x_817)).next = g_exits_432;
g_exits_432 = F->x_817;
}
{ rt_int sel819 = (*(P386)rt_nil_check(F->s_257)).kind;
if (0 || (sel819 == ((rt_int)20LL))) {
f_st_assign_260(F->s_257);
} else if (0 || (sel819 == ((rt_int)21LL))) {
f_st_call_262(F->s_257);
} else if (0 || (sel819 == ((rt_int)22LL))) {
f_st_if_264(F->s_257);
} else if (0 || (sel819 == ((rt_int)23LL))) {
f_st_case_266(F->s_257);
} else if (0 || (sel819 == ((rt_int)24LL))) {
f_st_repeat_268(F->s_257);
} else if (0 || (sel819 == ((rt_int)25LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_251((*(P386)rt_nil_check(F->s_257)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel819 == ((rt_int)27LL))) {
f_st_exit_270(F->s_257);
} else if (0 || (sel819 == ((rt_int)28LL))) {
f_st_return_272(F->s_257);
} else if (0 || (sel819 == ((rt_int)30LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_275(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->s_257)).name)), (*(P386)rt_nil_check(F->s_257)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel819 == ((rt_int)31LL))) {
if ((g_handlers_434 == NULL)) {
f_fail_21((*(P386)rt_nil_check(F->s_257)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P381)rt_nil_check((*(P398)rt_nil_check(g_handlers_434)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel819 == ((rt_int)26LL))) {
f_st_guard_277(F->s_257);
} else if (0 || (sel819 == ((rt_int)32LL))) {
f_st_alloc_279(F->s_257);
} else if (0 || (sel819 == ((rt_int)34LL))) {
f_st_create_283(F->s_257);
} else if (0 || (sel819 == ((rt_int)35LL))) {
f_st_wait_289(F->s_257);
} else if (0 || (sel819 == ((rt_int)36LL))) {
f_st_region_291(F->s_257);
} else {
f_fail_21((*(P386)rt_nil_check(F->s_257)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P386)rt_nil_check(F->s_257)).tag != NULL)) {
g_exits_432 = (*(P404)rt_nil_check(g_exits_432)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->label_816)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_260(P386 s_259) {
  struct f_st_assign_260fr *F = rt_alloc(sizeof *F);
F->s_259 = s_259;
F->lv_820 = NULL;
F->t_821 = NULL;
F->vt_822 = NULL;
F->c_823 = NULL;
if (((((*(P386)rt_nil_check((*(P386)rt_nil_check(F->s_259)).a)).kind == ((rt_int)10LL)) && ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->s_259)).a)).b != NULL)) && ((*(P386)rt_nil_check((*(P386)rt_nil_check((*(P386)rt_nil_check(F->s_259)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_312((*(P386)rt_nil_check((*(P386)rt_nil_check(F->s_259)).a)).a, &F->lv_820, &F->t_821, &F->c_823, &F->ro_824);
if ((F->ro_824 || ((*(P390)rt_nil_check(F->t_821)).kind != ((rt_int)5LL)))) {
f_fail_21((*(P386)rt_nil_check(F->s_259)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_825 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check((*(P386)rt_nil_check((*(P386)rt_nil_check(F->s_259)).a)).b)).a, g_ty_int_438, &F->vt_822));
F->hi_826 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check((*(P386)rt_nil_check((*(P386)rt_nil_check(F->s_259)).a)).b)).b, g_ty_int_438, &F->vt_822));
F->v_827 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->s_259)).b, g_ty_string_442, &F->vt_822));
f_check_type_165(F->vt_822, g_ty_string_442, (*(P386)rt_nil_check(F->s_259)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P381)rt_nil_check(F->lv_820))), rt_str(", ", 2)), F->lo_825), rt_str(", ", 2)), F->hi_826), rt_str(", ", 2)), F->v_827), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_312((*(P386)rt_nil_check(F->s_259)).a, &F->lv_820, &F->t_821, &F->c_823, &F->ro_824);
if (F->ro_824) {
f_fail_21((*(P386)rt_nil_check(F->s_259)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
{
F->v_828 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->s_259)).b, F->t_821, &F->vt_822));
f_check_type_165(F->vt_822, F->t_821, (*(P386)rt_nil_check(F->s_259)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_198(&(*(P381)rt_nil_check(F->lv_820)), F->t_821, &F->v_828, F->c_823); b_; }));
}
ret_:
  return;
}

static void f_st_call_262(P386 s_261) {
  struct f_st_call_262fr *F = rt_alloc(sizeof *F);
F->s_261 = s_261;
F->c_829 = NULL;
F->c_829 = (*(P386)rt_nil_check(F->s_261)).a;
F->t_830 = NULL;
if ((((*(P386)rt_nil_check(F->c_829)).kind == ((rt_int)7LL)) || ((*(P386)rt_nil_check(F->c_829)).kind == ((rt_int)12LL)))) {
F->x_831 = NULL;
F->x_831 = f_nn_46(((rt_int)10LL), (*(P386)rt_nil_check(F->c_829)).line);
(*(P386)rt_nil_check(F->x_831)).a = F->c_829;
F->c_829 = F->x_831;
}
if (((*(P386)rt_nil_check(F->c_829)).kind != ((rt_int)10LL))) {
f_fail_21((*(P386)rt_nil_check(F->s_261)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_370(F->c_829, 1, &F->t_830), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_264(P386 s_263) {
  struct f_st_if_264fr *F = rt_alloc(sizeof *F);
F->s_263 = s_263;
F->a_832 = NULL;
F->a_832 = (*(P386)rt_nil_check(F->s_263)).a;
F->first_833 = 1;
F->t_834 = NULL;
while ((F->a_832 != NULL)) {
F->c_835 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->a_832)).a, g_ty_bool_439, &F->t_834));
f_check_type_165(F->t_834, g_ty_bool_439, (*(P386)rt_nil_check(F->s_263)).line);
if (F->first_833) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_835), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_835), rt_str(") {", 3)); b_; }));
}
F->first_833 = 0;
f_gen_body_251((*(P386)rt_nil_check(F->a_832)).b);
F->a_832 = (*(P386)rt_nil_check(F->a_832)).next;
}
if (((*(P386)rt_nil_check(F->s_263)).flag == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_251((*(P386)rt_nil_check(F->s_263)).b);
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_266(P386 s_265) {
  struct f_st_case_266fr *F = rt_alloc(sizeof *F);
F->s_265 = s_265;
F->st_836 = NULL;
F->vt_837 = NULL;
F->first_838 = 1;
F->a_839 = NULL;
F->a_839 = (*(P386)rt_nil_check(F->s_265)).b;
F->sel_840 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->s_265)).a, NULL, &F->st_836));
F->tmp_841 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_167(F->st_836)), rt_str(" ", 1)), F->tmp_841), rt_str(" = ", 3)), F->sel_840), rt_str(";", 1)); b_; }));
while ((F->a_839 != NULL)) {
F->lab_842 = NULL;
F->lab_842 = (*(P386)rt_nil_check(F->a_839)).a;
F->conds_843 = NULL;
F->conds_843 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_842 != NULL)) {
if (((*(P386)rt_nil_check(F->lab_842)).b == NULL)) {
F->v_844 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->lab_842)).a, F->st_836, &F->vt_837));
f_check_type_165(F->vt_837, F->st_836, (*(P386)rt_nil_check(F->s_265)).line);
F->conds_843 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->conds_843)), rt_str(" || ", 4)), f_eq_code_205(F->st_836, &F->tmp_841, &F->v_844)); b_; }));
} else {
F->lo_845 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->lab_842)).a, F->st_836, &F->vt_837));
F->hi_846 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->lab_842)).b, F->st_836, &F->vt_837));
F->conds_843 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->conds_843)), rt_str(" || (", 5)), F->tmp_841), rt_str(" >= ", 4)), F->lo_845), rt_str(" && ", 4)), F->tmp_841), rt_str(" <= ", 4)), F->hi_846), rt_str(")", 1)); b_; }));
}
F->lab_842 = (*(P386)rt_nil_check(F->lab_842)).next;
}
if (F->first_838) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P381)rt_nil_check(F->conds_843))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P381)rt_nil_check(F->conds_843))), rt_str(") {", 3)); b_; }));
}
F->first_838 = 0;
f_gen_body_251((*(P386)rt_nil_check(F->a_839)).b);
F->a_839 = (*(P386)rt_nil_check(F->a_839)).next;
}
if (F->first_838) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P386)rt_nil_check(F->s_265)).flag == ((rt_int)1LL))) {
f_gen_body_251((*(P386)rt_nil_check(F->s_265)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_268(P386 s_267) {
  struct f_st_repeat_268fr *F = rt_alloc(sizeof *F);
F->s_267 = s_267;
F->t_847 = NULL;
F->c_848 = NULL;
if (((*(P386)rt_nil_check(F->s_267)).flag == ((rt_int)0LL))) {
F->cond_849 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->s_267)).a, g_ty_bool_439, &F->t_847));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_849), rt_str(") {", 3)); b_; }));
f_gen_body_251((*(P386)rt_nil_check(F->s_267)).b);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_847 = f_resolve_subtype_178((*(P386)rt_nil_check(F->s_267)).a, &F->c_848);
if ((((*(P390)rt_nil_check(F->t_847)).kind == ((rt_int)4LL)) && ((*(P388)rt_nil_check(F->c_848)).lo == NULL))) {
(*(P388)rt_nil_check(F->c_848)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P388)rt_nil_check(F->c_848)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P390)rt_nil_check(F->t_847)).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P388)rt_nil_check(F->c_848)).lo == NULL)) {
f_fail_21((*(P386)rt_nil_check(F->s_267)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_850 = rt_str_copy(f_storage_238(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->s_267)).name)), F->t_847));
F->lov_851 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_852 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_853 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_854 = NULL;
F->y_854 = f_new_sym_150(((rt_int)2LL), (*(P386)rt_nil_check(F->s_267)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_851), rt_str(" = ", 3)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_848)).lo))), rt_str(", ", 2)), F->hiv_852), rt_str(" = ", 3)), (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_848)).hi))), rt_str(";", 1)); b_; }));
if (((*(P386)rt_nil_check(F->s_267)).ival == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_853), rt_str(" = ", 3)), F->hiv_852), rt_str("; ", 2)), F->it_853), rt_str(" >= ", 4)), F->lov_851), rt_str("; ", 2)), F->it_853), rt_str("--) {", 5)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_853), rt_str(" = ", 3)), F->lov_851), rt_str("; ", 2)), F->it_853), rt_str(" <= ", 4)), F->hiv_852), rt_str("; ", 2)), F->it_853), rt_str("++) {", 5)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_850, rt_str(" = ", 3)), F->it_853), rt_str(";", 1)); b_; }));
f_open_scope_146();
(*(P396)rt_nil_check(F->y_854)).t = F->t_847;
(*(P396)rt_nil_check(F->y_854)).c = F->c_848;
f_bind_241(F->y_854, &F->access_850);
(*(P396)rt_nil_check(F->y_854)).ro_flag = 1;
f_define_140(F->y_854, (*(P386)rt_nil_check(F->s_267)).line);
f_gen_body_251((*(P386)rt_nil_check(F->s_267)).b);
f_close_scope_147();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_270(P386 s_269) {
  struct f_st_exit_270fr *F = rt_alloc(sizeof *F);
F->s_269 = s_269;
F->x_855 = NULL;
F->x_855 = g_exits_432;
while ((F->x_855 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P404)rt_nil_check(F->x_855)).match)), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->s_269)).name)))) {
f_pop_frames_253((*(P404)rt_nil_check(F->x_855)).depth);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P381)rt_nil_check((*(P404)rt_nil_check(F->x_855)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_855 = (*(P404)rt_nil_check(F->x_855)).next;
}
f_fail_21((*(P386)rt_nil_check(F->s_269)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->s_269)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_272(P386 s_271) {
  struct f_st_return_272fr *F = rt_alloc(sizeof *F);
F->s_271 = s_271;
F->vt_856 = NULL;
if ((!g_in_func_426)) {
f_pop_frames_253(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P390)rt_nil_check((*(P396)rt_nil_check(g_func_sym_431)).result)).kind == ((rt_int)9LL))) {
if (((*(P386)rt_nil_check(F->s_271)).a != NULL)) {
f_fail_21((*(P386)rt_nil_check(F->s_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_253(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P386)rt_nil_check(F->s_271)).a == NULL)) {
f_fail_21((*(P386)rt_nil_check(F->s_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_857 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->s_271)).a, (*(P396)rt_nil_check(g_func_sym_431)).result, &F->vt_856));
f_check_type_165(F->vt_856, (*(P396)rt_nil_check(g_func_sym_431)).result, (*(P386)rt_nil_check(F->s_271)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_857), rt_str(";", 1)); b_; }));
f_pop_frames_253(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_275(rstr *name_273, rt_int line_274) {
  struct f_exc_id_275fr *F = rt_alloc(sizeof *F);
F->name_273 = name_273;
F->line_274 = line_274;
F->y_858 = NULL;
F->y_858 = f_lookup_135(&(*F->name_273));
if (((F->y_858 != NULL) && ((*(P396)rt_nil_check(F->y_858)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_858)).cname));
goto ret_;
}
if (((((*F->name_273)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_273), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_16()), (*F->name_273)), f_q_16()), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_274, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_273), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_277(P386 s_276) {
  struct f_st_guard_277fr *F = rt_alloc(sizeof *F);
F->s_276 = s_276;
F->h_859 = NULL;
F->h_859 = (*(P386)rt_nil_check(F->s_276)).b;
F->first_860 = 1;
F->hv_861 = NULL;
{
F->f_862 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_863 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_255(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_862), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_862), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_862), rt_str(")) {", 4)); b_; }));
f_gen_body_251((*(P386)rt_nil_check(F->s_276)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_862), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_256();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_862), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_863), rt_str(" = rt_xcur;", 11)); b_; }));
{ R399 *cell864 = rt_alloc(sizeof(R399));
(*cell864).s = NULL;
(*cell864).next = NULL;
F->hv_861 = cell864;
}
(*(P398)rt_nil_check(F->hv_861)).s = f_mk_3(&F->x_863);
(*(P398)rt_nil_check(F->hv_861)).next = g_handlers_434;
g_handlers_434 = F->hv_861;
while ((F->h_859 != NULL)) {
F->n_865 = NULL;
F->n_865 = (*(P386)rt_nil_check(F->h_859)).a;
F->conds_866 = NULL;
F->conds_866 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_865 != NULL)) {
F->conds_866 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->conds_866)), rt_str(" || ", 4)), F->x_863), rt_str(" == ", 4)), f_exc_id_275(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->n_865)).name)), (*(P386)rt_nil_check(F->s_276)).line)); b_; }));
F->n_865 = (*(P386)rt_nil_check(F->n_865)).next;
}
if (F->first_860) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P381)rt_nil_check(F->conds_866))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P381)rt_nil_check(F->conds_866))), rt_str(") {", 3)); b_; }));
}
F->first_860 = 0;
f_gen_body_251((*(P386)rt_nil_check(F->h_859)).b);
F->h_859 = (*(P386)rt_nil_check(F->h_859)).next;
}
if (F->first_860) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P386)rt_nil_check(F->s_276)).flag == ((rt_int)1LL))) {
f_gen_body_251((*(P386)rt_nil_check(F->s_276)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_863), rt_str(");", 2)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_434 = (*(P398)rt_nil_check(g_handlers_434)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_279(P386 s_278) {
  struct f_st_alloc_279fr *F = rt_alloc(sizeof *F);
F->s_278 = s_278;
F->lv_867 = NULL;
F->t_868 = NULL;
F->target_869 = NULL;
F->vt_870 = NULL;
F->c_871 = NULL;
F->tc_872 = NULL;
F->d_874 = NULL;
F->p_875 = NULL;
F->a_876 = NULL;
f_lvalue_312((*(P386)rt_nil_check(F->s_278)).a, &F->lv_867, &F->t_868, &F->c_871, &F->ro_873);
if (((*(P390)rt_nil_check(F->t_868)).kind != ((rt_int)8LL))) {
f_fail_21((*(P386)rt_nil_check(F->s_278)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_231(F->t_868);
F->d_874 = (*(P390)rt_nil_check(F->t_868)).decl;
F->target_869 = (*(P390)rt_nil_check(F->t_868)).target;
if ((f_list_len_52((*(P386)rt_nil_check(F->s_278)).b) != f_list_len_52((*(P386)rt_nil_check(F->d_874)).b))) {
f_fail_21((*(P386)rt_nil_check(F->s_278)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_52((*(P386)rt_nil_check(F->d_874)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_877 = rt_str_copy(f_ctype_167(F->target_869));
F->cell_878 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_877), rt_str(" *", 2)), F->cell_878), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_877), rt_str("));", 3)); b_; }));
f_open_scope_146();
F->p_875 = (*(P386)rt_nil_check(F->d_874)).b;
F->a_876 = (*(P386)rt_nil_check(F->s_278)).b;
while ((F->p_875 != NULL)) {
F->v_879 = rt_str_copy(f_gexpr_333(F->a_876, g_ty_int_438, &F->vt_870));
F->pv_880 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_881 = NULL;
F->y_881 = f_new_sym_150(((rt_int)2LL), (*(P386)rt_nil_check(F->p_875)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_880), rt_str(" = ", 3)), F->v_879), rt_str(";", 1)); b_; }));
(*(P396)rt_nil_check(F->y_881)).t = g_ty_int_438;
(*(P396)rt_nil_check(F->y_881)).access = f_mk_3(&F->pv_880);
f_define_140(F->y_881, (*(P386)rt_nil_check(F->s_278)).line);
F->p_875 = (*(P386)rt_nil_check(F->p_875)).next;
F->a_876 = (*(P386)rt_nil_check(F->a_876)).next;
}
F->vt_870 = f_resolve_subtype_178((*(P386)rt_nil_check(F->d_874)).a, &F->tc_872);
f_init_storage_186(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_878), rt_str(")", 1)); b_; }), F->target_869, F->tc_872);
f_close_scope_147();
if (((*(P386)rt_nil_check(F->s_278)).c != NULL)) {
F->v_882 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->s_278)).c, F->target_869, &F->vt_870));
f_check_type_165(F->vt_870, F->target_869, (*(P386)rt_nil_check(F->s_278)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_198(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_878), rt_str(")", 1)); b_; }), F->target_869, &F->v_882, F->tc_872); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->lv_867)), rt_str(" = ", 3)), F->cell_878), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_281(P386 e_280) {
  struct f_act_ref_281fr *F = rt_alloc(sizeof *F);
F->e_280 = e_280;
F->lv_883 = NULL;
F->t_884 = NULL;
F->c_885 = NULL;
if (((((*(P386)rt_nil_check(F->e_280)).kind == ((rt_int)7LL)) && rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_280)).name)), rt_str("ME", 2))) && (f_lookup_135(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_312(F->e_280, &F->lv_883, &F->t_884, &F->c_885, &F->ro_886);
if (((*(P390)rt_nil_check(F->t_884)).kind != ((rt_int)14LL))) {
f_fail_21((*(P386)rt_nil_check(F->e_280)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P381)rt_nil_check(F->lv_883)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_283(P386 s_282) {
  struct f_st_create_283fr *F = rt_alloc(sizeof *F);
F->s_282 = s_282;
F->y_887 = NULL;
F->y_887 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->s_282)).name)));
F->pm_888 = NULL;
F->a_889 = NULL;
F->a_889 = (*(P386)rt_nil_check(F->s_282)).b;
F->lv_890 = NULL;
F->lt_891 = NULL;
F->vt_892 = NULL;
F->lc_893 = NULL;
if (((F->y_887 == NULL) || ((*(P396)rt_nil_check(F->y_887)).kind != ((rt_int)9LL)))) {
f_fail_21((*(P386)rt_nil_check(F->s_282)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->s_282)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_888 = (*(P396)rt_nil_check(F->y_887)).params;
{
F->nf_895 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_896 = rt_str_copy(f_act_ref_281((*(P386)rt_nil_check(F->s_282)).a));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_887)).cname))), rt_str("fr *", 4)), F->nf_895), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_895), rt_str(");", 2)); b_; }));
if (((*(P396)rt_nil_check(F->y_887)).level > ((rt_int)0LL))) {
F->link_897 = NULL;
F->link_897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo899 = ((rt_int)1LL), hi900 = rt_sub(g_cur_level_427, (*(P396)rt_nil_check(F->y_887)).level);
for (rt_int it901 = lo899; it901 <= hi900; it901++) {
F->i_898 = it901;
F->link_897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->link_897)), rt_str("->up", 4)); b_; }));
}
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_895, rt_str("->up = ", 7)), (*(P381)rt_nil_check(F->link_897))), rt_str(";", 1)); b_; }));
}
while (((F->a_889 != NULL) && (F->pm_888 != NULL))) {
if (((*(P394)rt_nil_check(F->pm_888)).mode == ((rt_int)1LL))) {
F->v_902 = rt_str_copy(f_gexpr_333(F->a_889, (*(P394)rt_nil_check(F->pm_888)).t, &F->vt_892));
f_check_type_165(F->vt_892, (*(P394)rt_nil_check(F->pm_888)).t, (*(P386)rt_nil_check(F->s_282)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_895, rt_str("->", 2)), (*(P381)rt_nil_check((*(P394)rt_nil_check(F->pm_888)).cfield))), rt_str(" = ", 3)), f_copy_code_201((*(P394)rt_nil_check(F->pm_888)).t, &F->v_902)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_312(F->a_889, &F->lv_890, &F->lt_891, &F->lc_893, &F->ro_894);
f_check_type_165(F->lt_891, (*(P394)rt_nil_check(F->pm_888)).t, (*(P386)rt_nil_check(F->s_282)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_895, rt_str("->", 2)), (*(P381)rt_nil_check((*(P394)rt_nil_check(F->pm_888)).cfield))), rt_str(" = &", 4)), (*(P381)rt_nil_check(F->lv_890))), rt_str(";", 1)); b_; }));
}
F->a_889 = (*(P386)rt_nil_check(F->a_889)).next;
F->pm_888 = (*(P394)rt_nil_check(F->pm_888)).next;
}
if (((F->a_889 != NULL) || (F->pm_888 != NULL))) {
f_fail_21((*(P386)rt_nil_check(F->s_282)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->s_282)).name))); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_896), rt_str(", &", 3)), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_887)).cname))), rt_str("decl, ", 6)), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_887)).cname))), rt_str(", ", 2)), F->nf_895), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_287(P386 inv_284, rstr *arr_285, rt_int i_286) {
  struct f_wait_alt_287fr *F = rt_alloc(sizeof *F);
F->inv_284 = inv_284;
F->arr_285 = arr_285;
F->i_286 = i_286;
F->lv_903 = NULL;
F->t_904 = NULL;
F->vt_905 = NULL;
F->c_906 = NULL;
F->fn_908 = NULL;
F->args_909 = NULL;
F->slot_910 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_285), rt_str("[", 1)), f_itos_7(F->i_286)), rt_str("]", 1)));
if ((((*(P386)rt_nil_check(F->inv_284)).kind != ((rt_int)10LL)) || ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->inv_284)).a)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P386)rt_nil_check(F->inv_284)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_908 = (*(P386)rt_nil_check(F->inv_284)).a;
F->args_909 = (*(P386)rt_nil_check(F->inv_284)).b;
if ((rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_312(F->args_909, &F->lv_903, &F->t_904, &F->c_906, &F->ro_907);
if (((*(P390)rt_nil_check(F->t_904)).kind != ((rt_int)12LL))) {
f_fail_21((*(P386)rt_nil_check(F->inv_284)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str("RECEIVE", 7))) {
F->dv_911 = NULL;
F->dt_912 = NULL;
f_lvalue_312((*(P386)rt_nil_check(F->args_909)).next, &F->dv_911, &F->dt_912, &F->c_906, &F->ro_907);
f_check_type_165(F->dt_912, (*(P390)rt_nil_check(F->t_904)).elem, (*(P386)rt_nil_check(F->inv_284)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_910, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, &", 32)), (*(P381)rt_nil_check(F->lv_903))), rt_str(", &", 3)), (*(P381)rt_nil_check(F->dv_911))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_913 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_914 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->args_909)).next, (*(P390)rt_nil_check(F->t_904)).elem, &F->vt_905));
f_check_type_165(F->vt_905, (*(P390)rt_nil_check(F->t_904)).elem, (*(P386)rt_nil_check(F->inv_284)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_167((*(P390)rt_nil_check(F->t_904)).elem), rt_str(" ", 1)), F->tmp_913), rt_str(" = ", 3)), F->v_914), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_910, rt_str(" = (rt_alt){RT_ALT_SEND, 1, &", 29)), (*(P381)rt_nil_check(F->lv_903))), rt_str(", &", 3)), F->tmp_913), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_915 = rt_str_copy(f_gexpr_333(F->args_909, g_ty_int_438, &F->vt_905));
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_910, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_915), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_910, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_915), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_910, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_281(F->args_909)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->inv_284)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_908)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_wait_289(P386 s_288) {
  struct f_st_wait_289fr *F = rt_alloc(sizeof *F);
F->s_288 = s_288;
F->a_916 = NULL;
F->a_916 = (*(P386)rt_nil_check(F->s_288)).a;
F->n_917 = ((rt_int)0LL);
F->first_918 = 1;
F->inits_919 = NULL;
F->inits_919 = f_new_buffer_22();
F->arr_920 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_921 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_916 != NULL)) {
F->n_917 = rt_add(F->n_917, f_list_len_52((*(P386)rt_nil_check(F->a_916)).a));
F->a_916 = (*(P386)rt_nil_check(F->a_916)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_920), rt_str("[", 1)), f_itos_7(F->n_917)), rt_str("];", 2)); b_; }));
F->a_916 = (*(P386)rt_nil_check(F->s_288)).a;
F->n_917 = ((rt_int)0LL);
while ((F->a_916 != NULL)) {
F->inv_922 = NULL;
F->inv_922 = (*(P386)rt_nil_check(F->a_916)).a;
while ((F->inv_922 != NULL)) {
f_put_25(F->inits_919, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_287(F->inv_922, &F->arr_920, F->n_917); b_; }));
F->n_917 = rt_add(F->n_917, ((rt_int)1LL));
F->inv_922 = (*(P386)rt_nil_check(F->inv_922)).next;
}
F->a_916 = (*(P386)rt_nil_check(F->a_916)).next;
}
f_splice_32(g_code_424, F->inits_919);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_921), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_917)), rt_str(", ", 2)), F->arr_920), rt_str(");", 2)); b_; }));
F->a_916 = (*(P386)rt_nil_check(F->s_288)).a;
F->n_917 = ((rt_int)0LL);
while ((F->a_916 != NULL)) {
F->conds_923 = NULL;
F->conds_923 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo925 = ((rt_int)1LL), hi926 = f_list_len_52((*(P386)rt_nil_check(F->a_916)).a);
for (rt_int it927 = lo925; it927 <= hi926; it927++) {
F->i_924 = it927;
F->conds_923 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->conds_923)), rt_str(" || ", 4)), F->w_921), rt_str(" == ", 4)), f_itos_7(F->n_917)); b_; }));
F->n_917 = rt_add(F->n_917, ((rt_int)1LL));
}
}
if (F->first_918) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P381)rt_nil_check(F->conds_923))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P381)rt_nil_check(F->conds_923))), rt_str(") {", 3)); b_; }));
}
F->first_918 = 0;
f_gen_body_251((*(P386)rt_nil_check(F->a_916)).b);
F->a_916 = (*(P386)rt_nil_check(F->a_916)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_291(P386 s_290) {
  struct f_st_region_291fr *F = rt_alloc(sizeof *F);
F->s_290 = s_290;
F->lv_928 = NULL;
F->t_929 = NULL;
F->c_930 = NULL;
F->lk_932 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_933 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_312((*(P386)rt_nil_check(F->s_290)).a, &F->lv_928, &F->t_929, &F->c_930, &F->ro_931);
if (((*(P390)rt_nil_check(F->t_929)).kind != ((rt_int)13LL))) {
f_fail_21((*(P386)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION needs a DATA_LOCK variable", 33); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_932), rt_str(" = &", 4)), (*(P381)rt_nil_check(F->lv_928))), rt_str("; rt_region_enter(", 18)), F->lk_932), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_933), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_933), rt_str(")) {", 4)); b_; }));
f_push_cleanup_255(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_933), rt_str("); rt_region_leave(", 19)), F->lk_932), rt_str(");", 2)); b_; }));
f_gen_body_251((*(P386)rt_nil_check(F->s_290)).b);
f_pop_cleanup_256();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_933), rt_str("); rt_region_leave(", 19)), F->lk_932), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_933), rt_str("); rt_region_leave(", 19)), F->lk_932), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static rstr f_access_of_293(P396 y_292) {
  struct f_access_of_293fr *F = rt_alloc(sizeof *F);
F->y_292 = y_292;
F->p_934 = NULL;
F->p_934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P396)rt_nil_check(F->y_292)).level <= ((rt_int)0LL))) {
F->result_ = (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_292)).access));
goto ret_;
}
{ rt_int lo936 = ((rt_int)1LL), hi937 = rt_sub(g_cur_level_427, (*(P396)rt_nil_check(F->y_292)).level);
for (rt_int it938 = lo936; it938 <= hi937; it938++) {
F->i_935 = it938;
F->p_934 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->p_934)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P396)rt_nil_check(F->y_292)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P381)rt_nil_check(F->p_934))), rt_str("->", 2)), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_292)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->p_934)), rt_str("->", 2)), (*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_292)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_import_of_296(P386 l_294, rstr *name_295) {
  struct f_import_of_296fr *F = rt_alloc(sizeof *F);
F->l_294 = l_294;
F->name_295 = name_295;
F->p_939 = NULL;
F->p_939 = F->l_294;
while ((F->p_939 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_939)).name)), (*F->name_295))) {
F->result_ = F->p_939;
goto ret_;
}
F->p_939 = (*(P386)rt_nil_check(F->p_939)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_299(P396 y_297, rt_int line_298) {
  struct f_check_import_299fr *F = rt_alloc(sizeof *F);
F->y_297 = y_297;
F->line_298 = line_298;
F->c_940 = NULL;
F->c_940 = g_fctx_428;
F->ro_941 = 0;
while (((F->c_940 != NULL) && ((*(P396)rt_nil_check(F->y_297)).depth < (*(P406)rt_nil_check(F->c_940)).depth))) {
if ((!(*(P406)rt_nil_check(F->c_940)).all_imp)) {
F->imp_942 = NULL;
F->imp_942 = f_import_of_296((*(P406)rt_nil_check(F->c_940)).imps, &(*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_297)).name)));
if ((F->imp_942 == NULL)) {
f_fail_21(F->line_298, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_297)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P386)rt_nil_check(F->imp_942)).ival == ((rt_int)1LL))) {
F->ro_941 = 1;
}
}
F->c_940 = (*(P406)rt_nil_check(F->c_940)).next;
}
F->result_ = F->ro_941;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_301(rstr *s_300) {
  struct f_c_ident_301fr *F = rt_alloc(sizeof *F);
F->s_300 = s_300;
if (rt_str_eq((*F->s_300), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_300), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_300));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_304(rstr *base_302, P390 t_303) {
  struct f_deref_304fr *F = rt_alloc(sizeof *F);
F->base_302 = base_302;
F->t_303 = t_303;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_167(F->t_303)), rt_str(")rt_nil_check(", 14)), (*F->base_302)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_306(P386 e_305) {
  struct f_is_lvalue_306fr *F = rt_alloc(sizeof *F);
F->e_305 = e_305;
if (((*(P386)rt_nil_check(F->e_305)).kind == ((rt_int)7LL))) {
F->y_943 = NULL;
F->y_943 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_305)).name)));
F->result_ = ((F->y_943 != NULL) && (((*(P396)rt_nil_check(F->y_943)).kind == ((rt_int)1LL)) || ((*(P396)rt_nil_check(F->y_943)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P386)rt_nil_check(F->e_305)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_306((*(P386)rt_nil_check(F->e_305)).a);
goto ret_;
} else if (((*(P386)rt_nil_check(F->e_305)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_305)).name)), rt_str("LEN", 3))) && f_is_lvalue_306((*(P386)rt_nil_check(F->e_305)).a));
goto ret_;
} else if (((*(P386)rt_nil_check(F->e_305)).kind == ((rt_int)10LL))) {
if ((((*(P386)rt_nil_check(F->e_305)).b != NULL) && ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_305)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_306((*(P386)rt_nil_check(F->e_305)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_312(P386 e_307, P381 *code_308, P390 *t_309, P388 *c_310, int *ro_311) {
  struct f_lvalue_312fr *F = rt_alloc(sizeof *F);
F->e_307 = e_307;
F->code_308 = code_308;
F->t_309 = t_309;
F->c_310 = c_310;
F->ro_311 = ro_311;
F->base_944 = NULL;
F->bt_945 = NULL;
F->bc_946 = NULL;
if (((*(P386)rt_nil_check(F->e_307)).kind == ((rt_int)7LL))) {
F->y_947 = NULL;
F->y_947 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_307)).name)));
if ((F->y_947 == NULL)) {
f_fail_21((*(P386)rt_nil_check(F->e_307)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_307)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P396)rt_nil_check(F->y_947)).kind != ((rt_int)1LL)) && ((*(P396)rt_nil_check(F->y_947)).kind != ((rt_int)2LL)))) {
f_fail_21((*(P386)rt_nil_check(F->e_307)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_307)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_308) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_293(F->y_947); b_; }));
(*F->t_309) = (*(P396)rt_nil_check(F->y_947)).t;
(*F->c_310) = (*(P396)rt_nil_check(F->y_947)).c;
(*F->ro_311) = (*(P396)rt_nil_check(F->y_947)).ro_flag;
if ((((*(P396)rt_nil_check(F->y_947)).kind == ((rt_int)1LL)) && f_check_import_299(F->y_947, (*(P386)rt_nil_check(F->e_307)).line))) {
(*F->ro_311) = 1;
}
} else if (((*(P386)rt_nil_check(F->e_307)).kind == ((rt_int)17LL))) {
f_lvalue_312((*(P386)rt_nil_check(F->e_307)).a, &(*F->code_308), &(*F->t_309), &(*F->c_310), &(*F->ro_311));
} else if (((*(P386)rt_nil_check(F->e_307)).kind == ((rt_int)11LL))) {
f_lvalue_312((*(P386)rt_nil_check(F->e_307)).a, &F->base_944, &F->bt_945, &F->bc_946, &(*F->ro_311));
f_select_on_320(&(*(P381)rt_nil_check(F->base_944)), F->bt_945, F->e_307, &(*F->ro_311), &(*F->code_308), &(*F->t_309), &(*F->c_310));
} else if (((*(P386)rt_nil_check(F->e_307)).kind == ((rt_int)10LL))) {
f_lvalue_312((*(P386)rt_nil_check(F->e_307)).a, &F->base_944, &F->bt_945, &F->bc_946, &(*F->ro_311));
f_index_on_329(&(*(P381)rt_nil_check(F->base_944)), F->bt_945, F->e_307, &(*F->ro_311), 1, &(*F->code_308), &(*F->t_309), &(*F->c_310));
} else {
f_fail_21((*(P386)rt_nil_check(F->e_307)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_320(rstr *base_313, P390 bt_314, P386 e_315, int *ro_316, P381 *code_317, P390 *t_318, P388 *c_319) {
  struct f_select_on_320fr *F = rt_alloc(sizeof *F);
F->base_313 = base_313;
F->bt_314 = bt_314;
F->e_315 = e_315;
F->ro_316 = ro_316;
F->code_317 = code_317;
F->t_318 = t_318;
F->c_319 = c_319;
(*F->c_319) = g_no_cons_448;
if (((*(P390)rt_nil_check(F->bt_314)).kind == ((rt_int)8LL))) {
f_finish_ptr_231(F->bt_314);
(*F->ro_316) = 0;
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_315)).name)), rt_str("ALL", 3))) {
(*F->code_317) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_304(&(*F->base_313), F->bt_314); b_; }));
(*F->t_318) = (*(P390)rt_nil_check(F->bt_314)).target;
goto ret_;
}
f_select_on_320(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_304(&(*F->base_313), F->bt_314); b_; }), (*(P390)rt_nil_check(F->bt_314)).target, F->e_315, &(*F->ro_316), &(*F->code_317), &(*F->t_318), &(*F->c_319));
goto ret_;
}
if (((*(P390)rt_nil_check(F->bt_314)).kind == ((rt_int)15LL))) {
F->p_948 = NULL;
F->p_948 = (*(P390)rt_nil_check(F->bt_314)).tparams;
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_315)).name)), rt_str("ALL", 3))) {
(*F->code_317) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_313), rt_str(".all", 4)); b_; }));
(*F->t_318) = (*(P390)rt_nil_check(F->bt_314)).under;
goto ret_;
}
while ((F->p_948 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_948)).name)), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_315)).name)))) {
(*F->code_317) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_313), rt_str(".p_", 3)), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->p_948)).name)))); b_; }));
(*F->t_318) = g_ty_int_438;
(*F->ro_316) = 1;
goto ret_;
}
F->p_948 = (*(P386)rt_nil_check(F->p_948)).next;
}
f_select_on_320(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_313), rt_str(".all", 4)); b_; }), (*(P390)rt_nil_check(F->bt_314)).under, F->e_315, &(*F->ro_316), &(*F->code_317), &(*F->t_318), &(*F->c_319));
goto ret_;
}
if (((*(P390)rt_nil_check(F->bt_314)).kind == ((rt_int)7LL))) {
F->f_949 = NULL;
F->f_949 = (*(P390)rt_nil_check(F->bt_314)).fields;
while ((F->f_949 != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_949)).name)), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_315)).name)))) {
(*F->c_319) = (*(P392)rt_nil_check(F->f_949)).c;
(*F->code_317) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_313), rt_str(".", 1)), f_lower_s_15(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_315)).name)))); b_; }));
(*F->t_318) = (*(P392)rt_nil_check(F->f_949)).t;
goto ret_;
}
F->f_949 = (*(P392)rt_nil_check(F->f_949)).next;
}
f_fail_21((*(P386)rt_nil_check(F->e_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_315)).name))); b_; }));
}
f_fail_21((*(P386)rt_nil_check(F->e_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_315)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_329(rstr *base_321, P390 bt_322, P386 e_323, int *ro_324, int lv_325, P381 *code_326, P390 *t_327, P388 *c_328) {
  struct f_index_on_329fr *F = rt_alloc(sizeof *F);
F->base_321 = base_321;
F->bt_322 = bt_322;
F->e_323 = e_323;
F->ro_324 = ro_324;
F->lv_325 = lv_325;
F->code_326 = code_326;
F->t_327 = t_327;
F->c_328 = c_328;
F->a_950 = NULL;
F->a_950 = (*(P386)rt_nil_check(F->e_323)).b;
F->it_951 = NULL;
(*F->c_328) = g_no_cons_448;
if (((*(P390)rt_nil_check(F->bt_322)).kind == ((rt_int)8LL))) {
f_finish_ptr_231(F->bt_322);
(*F->ro_324) = 0;
f_index_on_329(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_304(&(*F->base_321), F->bt_322); b_; }), (*(P390)rt_nil_check(F->bt_322)).target, F->e_323, &(*F->ro_324), F->lv_325, &(*F->code_326), &(*F->t_327), &(*F->c_328));
goto ret_;
}
if (((*(P390)rt_nil_check(F->bt_322)).kind == ((rt_int)15LL))) {
f_index_on_329(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_321), rt_str(".all", 4)); b_; }), (*(P390)rt_nil_check(F->bt_322)).under, F->e_323, &(*F->ro_324), F->lv_325, &(*F->code_326), &(*F->t_327), &(*F->c_328));
goto ret_;
}
if ((((*(P390)rt_nil_check(F->bt_322)).kind == ((rt_int)6LL)) && ((*(P390)rt_nil_check(F->bt_322)).idx2 != NULL))) {
if ((f_list_len_52(F->a_950) != ((rt_int)2LL))) {
f_fail_21((*(P386)rt_nil_check(F->e_323)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_952 = rt_str_copy(f_gexpr_333(F->a_950, (*(P390)rt_nil_check(F->bt_322)).idx, &F->it_951));
F->j_953 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->a_950)).next, (*(P390)rt_nil_check(F->bt_322)).idx2, &F->it_951));
(*F->code_326) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_321), rt_str(".p[(rt_index(", 13)), F->i_952), rt_str(", ", 2)), (*F->base_321)), rt_str(".lo, ", 5)), (*F->base_321)), rt_str(".hi) - ", 7)), (*F->base_321)), rt_str(".lo) * (", 8)), (*F->base_321)), rt_str(".hi2 - ", 7)), (*F->base_321)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_953), rt_str(", ", 2)), (*F->base_321)), rt_str(".lo2, ", 6)), (*F->base_321)), rt_str(".hi2) - ", 8)), (*F->base_321)), rt_str(".lo2]", 5)); b_; }));
(*F->t_327) = (*(P390)rt_nil_check(F->bt_322)).elem;
(*F->c_328) = (*(P390)rt_nil_check(F->bt_322)).elemcons;
}
goto ret_;
}
if ((f_list_len_52(F->a_950) != ((rt_int)1LL))) {
f_fail_21((*(P386)rt_nil_check(F->e_323)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P390)rt_nil_check(F->bt_322)).kind == ((rt_int)5LL))) {
if (((*(P386)rt_nil_check(F->a_950)).kind == ((rt_int)16LL))) {
F->lo_954 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->a_950)).a, g_ty_int_438, &F->it_951));
F->hi_955 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->a_950)).b, g_ty_int_438, &F->it_951));
(*F->code_326) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_321)), rt_str(", ", 2)), F->lo_954), rt_str(", ", 2)), F->hi_955), rt_str(")", 1)); b_; }));
(*F->t_327) = g_ty_string_442;
(*F->ro_324) = 1;
goto ret_;
}
{
F->i_956 = rt_str_copy(f_gexpr_333(F->a_950, g_ty_int_438, &F->it_951));
(*F->t_327) = g_ty_ascii_441;
if (F->lv_325) {
(*F->code_326) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_321)), rt_str(", ", 2)), F->i_956), rt_str("))", 2)); b_; }));
} else {
(*F->code_326) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_321)), rt_str(", ", 2)), F->i_956), rt_str(")", 1)); b_; }));
(*F->ro_324) = 1;
}
}
goto ret_;
}
if (((*(P390)rt_nil_check(F->bt_322)).kind == ((rt_int)6LL))) {
F->i_957 = rt_str_copy(f_gexpr_333(F->a_950, (*(P390)rt_nil_check(F->bt_322)).idx, &F->it_951));
(*F->code_326) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_321), rt_str(".p[rt_index(", 12)), F->i_957), rt_str(", ", 2)), (*F->base_321)), rt_str(".lo, ", 5)), (*F->base_321)), rt_str(".hi) - ", 7)), (*F->base_321)), rt_str(".lo]", 4)); b_; }));
(*F->t_327) = (*(P390)rt_nil_check(F->bt_322)).elem;
(*F->c_328) = (*(P390)rt_nil_check(F->bt_322)).elemcons;
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_323)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_333(P386 e_330, P390 want_331, P390 *t_332) {
  struct f_gexpr_333fr *F = rt_alloc(sizeof *F);
F->e_330 = e_330;
F->want_331 = want_331;
F->t_332 = t_332;
F->k_958 = (*(P386)rt_nil_check(F->e_330)).kind;
F->code_959 = NULL;
F->c_960 = NULL;
F->bt_962 = NULL;
(*F->t_332) = g_ty_int_438;
if ((F->k_958 == ((rt_int)1LL))) {
if (((F->want_331 != NULL) && ((*(P390)rt_nil_check(F->want_331)).kind == ((rt_int)3LL)))) {
(*F->t_332) = g_ty_float_440;
F->result_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_958 == ((rt_int)2LL))) {
(*F->t_332) = g_ty_float_440;
F->result_ = (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name));
goto ret_;
} else if ((F->k_958 == ((rt_int)5LL))) {
(*F->t_332) = g_ty_bool_439;
F->result_ = f_itos_7((*(P386)rt_nil_check(F->e_330)).ival);
goto ret_;
} else if ((F->k_958 == ((rt_int)3LL))) {
(*F->t_332) = g_ty_string_442;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_339(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)))), rt_str(", ", 2)), f_itos_7(((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_958 == ((rt_int)6LL))) {
(*F->t_332) = g_ty_nil_445;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_958 == ((rt_int)4LL))) {
if (((F->want_331 != NULL) && ((*(P390)rt_nil_check(F->want_331)).kind == ((rt_int)4LL)))) {
(*F->t_332) = F->want_331;
} else {
(*F->t_332) = f_enum_type_of_342(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), (*(P386)rt_nil_check(F->e_330)).line);
}
{
F->i_963 = f_lit_index_175((*(P390)rt_nil_check((*F->t_332))).lits, &(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)));
if ((F->i_963 < ((rt_int)0LL))) {
f_fail_21((*(P386)rt_nil_check(F->e_330)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_963);
goto ret_;
}
} else if ((F->k_958 == ((rt_int)17LL))) {
F->result_ = f_gexpr_333((*(P386)rt_nil_check(F->e_330)).a, F->want_331, &(*F->t_332));
goto ret_;
} else if ((F->k_958 == ((rt_int)7LL))) {
F->y_964 = NULL;
F->y_964 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)));
if ((F->y_964 == NULL)) {
if (((((((((rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_370(f_wrap_apply_337(F->e_330), 0, &(*F->t_332));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_330)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P396)rt_nil_check(F->y_964)).kind == ((rt_int)1LL)) || ((*(P396)rt_nil_check(F->y_964)).kind == ((rt_int)2LL)))) {
(*F->t_332) = (*(P396)rt_nil_check(F->y_964)).t;
if (((*(P396)rt_nil_check(F->y_964)).kind == ((rt_int)1LL))) {
F->ro_965 = f_check_import_299(F->y_964, (*(P386)rt_nil_check(F->e_330)).line);
}
F->result_ = f_access_of_293(F->y_964);
goto ret_;
}
if (((*(P396)rt_nil_check(F->y_964)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_370(f_wrap_apply_337(F->e_330), 0, &(*F->t_332));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_330)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_958 == ((rt_int)8LL)) && (f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name))) != NULL)) && (f_user_op_366(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), f_copy_node_335((*(P386)rt_nil_check(F->e_330)).a)) != NULL))) {
F->call_966 = NULL;
F->call_966 = f_nn_46(((rt_int)10LL), (*(P386)rt_nil_check(F->e_330)).line);
F->fname_967 = NULL;
F->fname_967 = f_nn_46(((rt_int)7LL), (*(P386)rt_nil_check(F->e_330)).line);
(*(P386)rt_nil_check(F->fname_967)).name = (*(P386)rt_nil_check(F->e_330)).name;
(*(P386)rt_nil_check(F->call_966)).a = F->fname_967;
(*(P386)rt_nil_check(F->call_966)).b = f_copy_node_335((*(P386)rt_nil_check(F->e_330)).a);
F->result_ = f_gcall_370(F->call_966, 0, &(*F->t_332));
goto ret_;
} else if (((((F->k_958 == ((rt_int)8LL)) && rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("NOT", 3))) && (F->want_331 != NULL)) && ((*(P390)rt_nil_check(F->want_331)).kind == ((rt_int)16LL)))) {
F->a_968 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_330)).a, F->want_331, &(*F->t_332)));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_968), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_52((*(P390)rt_nil_check((*(P390)rt_nil_check(F->want_331)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_958 == ((rt_int)8LL))) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("NOT", 3))) {
F->a_969 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_330)).a, g_ty_bool_439, &(*F->t_332)));
f_check_type_165((*F->t_332), g_ty_bool_439, (*(P386)rt_nil_check(F->e_330)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_969), rt_str(")", 1));
goto ret_;
}
{
F->a_970 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_330)).a, F->want_331, &(*F->t_332)));
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("+", 1))) {
F->result_ = F->a_970;
goto ret_;
} else if (((*(P390)rt_nil_check((*F->t_332))).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_970), rt_str(")", 1));
goto ret_;
}
f_check_type_165((*F->t_332), g_ty_int_438, (*(P386)rt_nil_check(F->e_330)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_970), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_958 == ((rt_int)9LL))) {
F->result_ = f_gbinop_349(F->e_330, F->want_331, &(*F->t_332));
goto ret_;
} else if ((F->k_958 == ((rt_int)10LL))) {
if ((((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_330)).a)).kind == ((rt_int)7LL)) || ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_330)).a)).kind == ((rt_int)12LL)))) {
F->nm_971 = NULL;
F->nm_971 = (*(P386)rt_nil_check(F->e_330)).a;
F->y_972 = NULL;
if (((*(P386)rt_nil_check(F->nm_971)).kind == ((rt_int)12LL))) {
F->nm_971 = (*(P386)rt_nil_check(F->nm_971)).a;
}
F->y_972 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->nm_971)).name)));
if ((((F->y_972 == NULL) || ((*(P396)rt_nil_check(F->y_972)).kind == ((rt_int)3LL))) || ((*(P396)rt_nil_check(F->y_972)).kind == ((rt_int)4LL)))) {
F->result_ = f_gcall_370(F->e_330, 0, &(*F->t_332));
goto ret_;
}
}
{
F->base_973 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_330)).a, NULL, &F->bt_962));
F->ro_961 = 1;
f_index_on_329(&F->base_973, F->bt_962, F->e_330, &F->ro_961, 0, &F->code_959, &(*F->t_332), &F->c_960);
F->result_ = (*(P381)rt_nil_check(F->code_959));
goto ret_;
}
} else if ((F->k_958 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_330)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_345(F->e_330, &(*F->t_332));
goto ret_;
}
{
F->base_974 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_330)).a, NULL, &F->bt_962));
F->ro_961 = 1;
f_select_on_320(&F->base_974, F->bt_962, F->e_330, &F->ro_961, &F->code_959, &(*F->t_332), &F->c_960);
F->result_ = (*(P381)rt_nil_check(F->code_959));
goto ret_;
}
} else if ((F->k_958 == ((rt_int)12LL))) {
F->result_ = f_gcall_370(f_wrap_apply_337(F->e_330), 0, &(*F->t_332));
goto ret_;
} else if ((F->k_958 == ((rt_int)14LL))) {
F->result_ = f_constructor_353(F->e_330, F->want_331, &(*F->t_332));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_330)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_copy_node_335(P386 e_334) {
  struct f_copy_node_335fr *F = rt_alloc(sizeof *F);
F->e_334 = e_334;
F->x_975 = NULL;
{ R387 *cell976 = rt_alloc(sizeof(R387));
(*cell976).name = NULL;
(*cell976).tag = NULL;
(*cell976).a = NULL;
(*cell976).b = NULL;
(*cell976).c = NULL;
(*cell976).d = NULL;
(*cell976).next = NULL;
F->x_975 = cell976;
}
(*(P386)rt_nil_check(F->x_975)).kind = (*(P386)rt_nil_check(F->e_334)).kind;
(*(P386)rt_nil_check(F->x_975)).line = (*(P386)rt_nil_check(F->e_334)).line;
(*(P386)rt_nil_check(F->x_975)).ival = (*(P386)rt_nil_check(F->e_334)).ival;
(*(P386)rt_nil_check(F->x_975)).flag = (*(P386)rt_nil_check(F->e_334)).flag;
(*(P386)rt_nil_check(F->x_975)).name = (*(P386)rt_nil_check(F->e_334)).name;
(*(P386)rt_nil_check(F->x_975)).tag = (*(P386)rt_nil_check(F->e_334)).tag;
(*(P386)rt_nil_check(F->x_975)).a = (*(P386)rt_nil_check(F->e_334)).a;
(*(P386)rt_nil_check(F->x_975)).b = (*(P386)rt_nil_check(F->e_334)).b;
(*(P386)rt_nil_check(F->x_975)).c = (*(P386)rt_nil_check(F->e_334)).c;
(*(P386)rt_nil_check(F->x_975)).d = (*(P386)rt_nil_check(F->e_334)).d;
F->result_ = F->x_975;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P386 f_wrap_apply_337(P386 e_336) {
  struct f_wrap_apply_337fr *F = rt_alloc(sizeof *F);
F->e_336 = e_336;
F->x_977 = NULL;
F->x_977 = f_nn_46(((rt_int)10LL), (*(P386)rt_nil_check(F->e_336)).line);
(*(P386)rt_nil_check(F->x_977)).a = F->e_336;
F->result_ = F->x_977;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_339(rstr *s_338) {
  struct f_c_string_339fr *F = rt_alloc(sizeof *F);
F->s_338 = s_338;
F->n_978 = ((rt_int)0LL);
{ rt_int lo980 = ((rt_int)1LL), hi981 = ((*F->s_338)).len;
for (rt_int it982 = lo980; it982 <= hi981; it982++) {
F->i_979 = it982;
if (((rt_str_get((*F->s_338), F->i_979) == 92) || (rt_str_get((*F->s_338), F->i_979) == 63))) {
F->n_978 = rt_add(F->n_978, ((rt_int)1LL));
}
}
}
{
F->r_983 = rt_str_new(rt_add(rt_add(((*F->s_338)).len, F->n_978), ((rt_int)2LL)));
F->j_984 = ((rt_int)1LL);
(*rt_str_at(&F->r_983, ((rt_int)1LL))) = 34;
{ rt_int lo986 = ((rt_int)1LL), hi987 = ((*F->s_338)).len;
for (rt_int it988 = lo986; it988 <= hi987; it988++) {
F->i_985 = it988;
F->j_984 = rt_add(F->j_984, ((rt_int)1LL));
if (((rt_str_get((*F->s_338), F->i_985) == 92) || (rt_str_get((*F->s_338), F->i_985) == 63))) {
(*rt_str_at(&F->r_983, F->j_984)) = 92;
F->j_984 = rt_add(F->j_984, ((rt_int)1LL));
}
(*rt_str_at(&F->r_983, F->j_984)) = rt_str_get((*F->s_338), F->i_985);
}
}
(*rt_str_at(&F->r_983, rt_add(F->j_984, ((rt_int)1LL)))) = 34;
F->result_ = F->r_983;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P390 f_enum_type_of_342(rstr *lit_340, rt_int line_341) {
  struct f_enum_type_of_342fr *F = rt_alloc(sizeof *F);
F->lit_340 = lit_340;
F->line_341 = line_341;
F->y_989 = NULL;
F->y_989 = g_scope_stack_414;
F->c_990 = NULL;
if ((f_lit_index_175((*(P390)rt_nil_check(g_ty_ascii_441)).lits, &(*F->lit_340)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_441;
goto ret_;
}
while ((F->y_989 != NULL)) {
if ((((((*(P396)rt_nil_check(F->y_989)).kind == ((rt_int)6LL)) || ((*(P396)rt_nil_check(F->y_989)).kind == ((rt_int)5LL))) && ((*(P396)rt_nil_check(F->y_989)).st != NULL)) && ((*(P386)rt_nil_check((*(P396)rt_nil_check(F->y_989)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_175((*(P386)rt_nil_check((*(P396)rt_nil_check(F->y_989)).st)).a, &(*F->lit_340)) >= ((rt_int)0LL))) {
F->result_ = f_resolve_subtype_178((*(P396)rt_nil_check(F->y_989)).st, &F->c_990);
goto ret_;
}
}
F->y_989 = (*(P396)rt_nil_check(F->y_989)).stack;
}
f_fail_21(F->line_341, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_340)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_345(P386 e_343, P390 *t_344) {
  struct f_attribute_345fr *F = rt_alloc(sizeof *F);
F->e_343 = e_343;
F->t_344 = t_344;
F->bt_991 = NULL;
F->c_992 = NULL;
(*F->t_344) = g_ty_int_438;
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_343)).name)), rt_str("LEN", 3))) {
F->base_993 = NULL;
F->base_993 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_333((*(P386)rt_nil_check(F->e_343)).a, NULL, &F->bt_991); b_; }));
if (((*(P390)rt_nil_check(F->bt_991)).kind == ((rt_int)8LL))) {
f_finish_ptr_231(F->bt_991);
F->base_993 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_304(&(*(P381)rt_nil_check(F->base_993)), F->bt_991); b_; }));
F->bt_991 = (*(P390)rt_nil_check(F->bt_991)).target;
}
if (((*(P390)rt_nil_check(F->bt_991)).kind != ((rt_int)5LL))) {
f_fail_21((*(P386)rt_nil_check(F->e_343)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P381)rt_nil_check(F->base_993))), rt_str(").len", 5));
goto ret_;
}
if (((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_343)).a)).kind == ((rt_int)7LL))) {
F->y_994 = NULL;
F->y_994 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_343)).a)).name)));
if (((F->y_994 != NULL) && (((*(P396)rt_nil_check(F->y_994)).kind == ((rt_int)6LL)) || ((*(P396)rt_nil_check(F->y_994)).kind == ((rt_int)5LL))))) {
F->st_995 = NULL;
F->st_995 = f_nn_46(((rt_int)80LL), (*(P386)rt_nil_check(F->e_343)).line);
(*(P386)rt_nil_check(F->st_995)).name = (*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_343)).a)).name;
(*F->t_344) = f_resolve_subtype_178(F->st_995, &F->c_992);
if (((*(P390)rt_nil_check((*F->t_344))).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_343)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_52((*(P390)rt_nil_check((*F->t_344))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P388)rt_nil_check(F->c_992)).lo != NULL)) {
if (rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_343)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_992)).lo));
goto ret_;
}
F->result_ = (*(P381)rt_nil_check((*(P388)rt_nil_check(F->c_992)).hi));
goto ret_;
}
}
}
f_fail_21((*(P386)rt_nil_check(F->e_343)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P381)rt_nil_check((*(P386)rt_nil_check(F->e_343)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_349(P386 e_346, P390 want_347, P390 *t_348) {
  struct f_gbinop_349fr *F = rt_alloc(sizeof *F);
F->e_346 = e_346;
F->want_347 = want_347;
F->t_348 = t_348;
F->op_996 = NULL;
F->op_996 = (*(P386)rt_nil_check(F->e_346)).name;
F->ta_997 = NULL;
F->tb_998 = NULL;
F->hint_999 = NULL;
F->uy_1000 = NULL;
(*F->t_348) = g_ty_bool_439;
if ((f_lookup_135(&(*(P381)rt_nil_check(F->op_996))) != NULL)) {
F->l_1001 = NULL;
F->r_1002 = NULL;
F->l_1001 = f_copy_node_335((*(P386)rt_nil_check(F->e_346)).a);
F->r_1002 = f_copy_node_335((*(P386)rt_nil_check(F->e_346)).b);
(*(P386)rt_nil_check(F->l_1001)).next = F->r_1002;
F->uy_1000 = f_user_op_366(&(*(P381)rt_nil_check(F->op_996)), F->l_1001);
if ((F->uy_1000 != NULL)) {
F->call_1003 = NULL;
F->call_1003 = f_nn_46(((rt_int)10LL), (*(P386)rt_nil_check(F->e_346)).line);
F->fname_1004 = NULL;
F->fname_1004 = f_nn_46(((rt_int)7LL), (*(P386)rt_nil_check(F->e_346)).line);
(*(P386)rt_nil_check(F->fname_1004)).name = F->op_996;
(*(P386)rt_nil_check(F->call_1003)).a = F->fname_1004;
(*(P386)rt_nil_check(F->call_1003)).b = F->l_1001;
F->result_ = f_gcall_370(F->call_1003, 0, &(*F->t_348));
goto ret_;
}
}
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("IN", 2))) {
F->s_1005 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).b, NULL, &F->tb_998));
if (((*(P390)rt_nil_check(F->tb_998)).kind != ((rt_int)16LL))) {
f_fail_21((*(P386)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1006 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).a, (*(P390)rt_nil_check(F->tb_998)).elem, &F->ta_997));
f_check_type_165(F->ta_997, (*(P390)rt_nil_check(F->tb_998)).elem, (*(P386)rt_nil_check(F->e_346)).line);
(*F->t_348) = g_ty_bool_439;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1006), rt_str(", ", 2)), F->s_1005), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("AND", 3)) || rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("OR", 2))) || rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("XOR", 3))) && (F->want_347 != NULL)) && ((*(P390)rt_nil_check(F->want_347)).kind == ((rt_int)16LL)))) {
F->a_1007 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).a, F->want_347, &F->ta_997));
F->b_1008 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).b, F->want_347, &F->tb_998));
f_check_type_165(F->tb_998, F->ta_997, (*(P386)rt_nil_check(F->e_346)).line);
(*F->t_348) = F->ta_997;
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1007), rt_str(", ", 2)), F->b_1008), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1007), rt_str(", ", 2)), F->b_1008), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1007), rt_str(", ", 2)), F->b_1008), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("AND", 3)) || rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("OR", 2))) || rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("XOR", 3)))) {
F->a_1009 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).a, g_ty_bool_439, &F->ta_997));
F->b_1010 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).b, g_ty_bool_439, &F->tb_998));
f_check_type_165(F->ta_997, g_ty_bool_439, (*(P386)rt_nil_check(F->e_346)).line);
f_check_type_165(F->tb_998, g_ty_bool_439, (*(P386)rt_nil_check(F->e_346)).line);
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1009), rt_str(" && ", 4)), F->b_1010), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1009), rt_str(" || ", 4)), F->b_1010), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1009), rt_str(" != ", 4)), F->b_1010), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("&", 1))) {
F->wa_1011 = NULL;
F->wb_1012 = NULL;
if (((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_346)).a)).kind == ((rt_int)4LL))) {
F->wa_1011 = g_ty_ascii_441;
}
if (((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_346)).b)).kind == ((rt_int)4LL))) {
F->wb_1012 = g_ty_ascii_441;
}
{
F->a_1013 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).a, F->wa_1011, &F->ta_997));
F->b_1014 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).b, F->wb_1012, &F->tb_998));
(*F->t_348) = g_ty_string_442;
if ((((*(P390)rt_nil_check(F->ta_997)).kind == ((rt_int)5LL)) && ((*(P390)rt_nil_check(F->tb_998)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1013), rt_str(", ", 2)), F->b_1014), rt_str(")", 1));
goto ret_;
} else if ((((*(P390)rt_nil_check(F->ta_997)).kind == ((rt_int)5LL)) && ((*(P390)rt_nil_check(F->tb_998)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1013), rt_str(", ", 2)), F->b_1014), rt_str(")", 1));
goto ret_;
} else if ((((*(P390)rt_nil_check(F->ta_997)).kind == ((rt_int)4LL)) && ((*(P390)rt_nil_check(F->tb_998)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1013), rt_str(", ", 2)), F->b_1014), rt_str(")", 1));
goto ret_;
} else if ((((*(P390)rt_nil_check(F->ta_997)).kind == ((rt_int)4LL)) && ((*(P390)rt_nil_check(F->tb_998)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1013), rt_str(", ", 2)), F->b_1014), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_91(&(*(P381)rt_nil_check(F->op_996))) && (!rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("IN", 2))))) {
if (((((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_346)).a)).kind == ((rt_int)4LL)) || ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_346)).a)).kind == ((rt_int)6LL))) || ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->e_346)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1015 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).b, NULL, &F->hint_999));
}
{
F->a_1016 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).a, F->hint_999, &F->ta_997));
F->b_1017 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).b, F->ta_997, &F->tb_998));
F->ct_1018 = NULL;
F->ct_1018 = F->ta_997;
(*F->t_348) = g_ty_bool_439;
if ((((*(P390)rt_nil_check(F->ta_997)).kind != ((rt_int)11LL)) && ((*(P390)rt_nil_check(F->tb_998)).kind != ((rt_int)11LL)))) {
f_check_type_165(F->tb_998, F->ta_997, (*(P386)rt_nil_check(F->e_346)).line);
}
if (((*(P390)rt_nil_check(F->ta_997)).kind == ((rt_int)11LL))) {
F->ct_1018 = F->tb_998;
}
if (((*(P390)rt_nil_check(F->ct_1018)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1016), rt_str(", ", 2)), F->b_1017), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1016), rt_str(", ", 2)), F->b_1017), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1016), rt_str(", ", 2)), F->b_1017), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1016), rt_str(", ", 2)), F->b_1017), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1017), rt_str(", ", 2)), F->a_1016), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1017), rt_str(", ", 2)), F->a_1016), rt_str(")", 1));
goto ret_;
}
if (((*(P390)rt_nil_check(F->ct_1018)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1016), rt_str(", ", 2)), F->b_1017), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1016), rt_str(", ", 2)), F->b_1017), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1016), rt_str(", ", 2)), F->b_1017), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1017), rt_str(", ", 2)), F->a_1016), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_193(F->ct_1018)) {
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("=", 1))) {
F->result_ = f_eq_code_205(F->ct_1018, &F->a_1016, &F->b_1017);
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_205(F->ct_1018, &F->a_1016, &F->b_1017)), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1016), rt_str(" == ", 4)), F->b_1017), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1016), rt_str(" != ", 4)), F->b_1017), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1016), rt_str(" ", 1)), (*(P381)rt_nil_check(F->op_996))), rt_str(" ", 1)), F->b_1017), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1019 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).a, F->want_347, &F->ta_997));
F->b_1020 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->e_346)).b, F->ta_997, &F->tb_998));
if ((((*(P390)rt_nil_check(F->ta_997)).kind == ((rt_int)3LL)) || ((*(P390)rt_nil_check(F->tb_998)).kind == ((rt_int)3LL)))) {
(*F->t_348) = g_ty_float_440;
if (((rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("+", 1)) || rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("-", 1))) || rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1019), rt_str(" ", 1)), (*(P381)rt_nil_check(F->op_996))), rt_str(" ", 1)), F->b_1020), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
}
}
f_check_type_165(F->ta_997, g_ty_int_438, (*(P386)rt_nil_check(F->e_346)).line);
f_check_type_165(F->tb_998, g_ty_int_438, (*(P386)rt_nil_check(F->e_346)).line);
(*F->t_348) = g_ty_int_438;
if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P381)rt_nil_check(F->op_996)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1019), rt_str(", ", 2)), F->b_1020), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P386)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P381)rt_nil_check(F->op_996))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_353(P386 e_350, P390 want_351, P390 *t_352) {
  struct f_constructor_353fr *F = rt_alloc(sizeof *F);
F->e_350 = e_350;
F->want_351 = want_351;
F->t_352 = t_352;
F->it_1021 = NULL;
F->it_1021 = (*(P386)rt_nil_check(F->e_350)).a;
F->f_1022 = NULL;
F->vt_1023 = NULL;
if (((F->want_351 != NULL) && ((*(P390)rt_nil_check(F->want_351)).kind == ((rt_int)16LL)))) {
F->s_1024 = NULL;
F->s_1024 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
(*F->t_352) = F->want_351;
while ((F->it_1021 != NULL)) {
F->v_1025 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->it_1021)).b, (*(P390)rt_nil_check(F->want_351)).elem, &F->vt_1023));
f_check_type_165(F->vt_1023, (*(P390)rt_nil_check(F->want_351)).elem, (*(P386)rt_nil_check(F->e_350)).line);
F->s_1024 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P381)rt_nil_check(F->s_1024))), rt_str(", ", 2)), F->v_1025), rt_str(")", 1)); b_; }));
F->it_1021 = (*(P386)rt_nil_check(F->it_1021)).next;
}
F->result_ = (*(P381)rt_nil_check(F->s_1024));
goto ret_;
}
if (((F->want_351 != NULL) && ((*(P390)rt_nil_check(F->want_351)).kind == ((rt_int)15LL)))) {
f_fail_21((*(P386)rt_nil_check(F->e_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P381)rt_nil_check((*(P390)rt_nil_check(F->want_351)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_351 != NULL) && ((*(P390)rt_nil_check(F->want_351)).kind == ((rt_int)6LL))) && ((*(P390)rt_nil_check(F->want_351)).idx2 == NULL))) {
F->tmp_1026 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1027 = rt_str_copy(f_ctype_167(F->want_351));
F->et_1028 = rt_str_copy(f_ctype_167((*(P390)rt_nil_check(F->want_351)).elem));
F->parts_1029 = NULL;
(*F->t_352) = F->want_351;
if (((((F->it_1021 != NULL) && ((*(P386)rt_nil_check(F->it_1021)).a != NULL)) && ((*(P386)rt_nil_check((*(P386)rt_nil_check(F->it_1021)).a)).b != NULL)) && ((*(P386)rt_nil_check(F->it_1021)).next == NULL))) {
F->lo_1030 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check((*(P386)rt_nil_check(F->it_1021)).a)).a, (*(P390)rt_nil_check(F->want_351)).idx, &F->vt_1023));
F->hi_1031 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check((*(P386)rt_nil_check(F->it_1021)).a)).b, (*(P390)rt_nil_check(F->want_351)).idx, &F->vt_1023));
F->v_1032 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->it_1021)).b, (*(P390)rt_nil_check(F->want_351)).elem, &F->vt_1023));
f_check_type_165(F->vt_1023, (*(P390)rt_nil_check(F->want_351)).elem, (*(P386)rt_nil_check(F->e_350)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1027), rt_str(" ", 1)), F->tmp_1026), rt_str("; ", 2)), F->tmp_1026), rt_str(".lo = ", 6)), F->lo_1030), rt_str("; ", 2)), F->tmp_1026), rt_str(".hi = ", 6)), F->hi_1031), rt_str("; ", 2)), F->tmp_1026), rt_str(".lo2 = ", 7)), F->tmp_1026), rt_str(".hi2 = 1; ", 10)), F->tmp_1026), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1028), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1026), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1026), rt_str("); i_++) ", 9)), F->tmp_1026), rt_str(".p[i_] = ", 9)), f_copy_code_201((*(P390)rt_nil_check(F->want_351)).elem, &F->v_1032)), rt_str("; ", 2)), F->tmp_1026), rt_str("; })", 4));
goto ret_;
}
F->parts_1029 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1027), rt_str(" ", 1)), F->tmp_1026), rt_str("; ", 2)), F->tmp_1026), rt_str(".lo = 1; ", 9)), F->tmp_1026), rt_str(".hi = ", 6)), f_itos_7(f_list_len_52(F->it_1021))), rt_str("; ", 2)), F->tmp_1026), rt_str(".lo2 = ", 7)), F->tmp_1026), rt_str(".hi2 = 1; ", 10)), F->tmp_1026), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1028), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_52(F->it_1021), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1034 = ((rt_int)0LL), hi1035 = rt_sub(f_list_len_52((*(P386)rt_nil_check(F->e_350)).a), ((rt_int)1LL));
for (rt_int it1036 = lo1034; it1036 <= hi1035; it1036++) {
F->i_1033 = it1036;
if (((*(P386)rt_nil_check(F->it_1021)).a != NULL)) {
f_fail_21((*(P386)rt_nil_check(F->e_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1037 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->it_1021)).b, (*(P390)rt_nil_check(F->want_351)).elem, &F->vt_1023));
f_check_type_165(F->vt_1023, (*(P390)rt_nil_check(F->want_351)).elem, (*(P386)rt_nil_check(F->e_350)).line);
F->parts_1029 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->parts_1029)), rt_str(" ", 1)), F->tmp_1026), rt_str(".p[", 3)), f_itos_7(F->i_1033)), rt_str("] = ", 4)), f_copy_code_201((*(P390)rt_nil_check(F->want_351)).elem, &F->v_1037)), rt_str(";", 1)); b_; }));
}
F->it_1021 = (*(P386)rt_nil_check(F->it_1021)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->parts_1029)), rt_str(" ", 1)), F->tmp_1026), rt_str("; })", 4));
goto ret_;
}
if (((F->want_351 == NULL) || ((*(P390)rt_nil_check(F->want_351)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P386)rt_nil_check(F->e_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
(*F->t_352) = F->want_351;
F->f_1022 = (*(P390)rt_nil_check(F->want_351)).fields;
{
F->tmp_1038 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1039 = NULL;
F->parts_1039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_167(F->want_351)), rt_str(" ", 1)), F->tmp_1038), rt_str(";", 1)); b_; }));
if (((f_list_len_52(F->it_1021) != ((rt_int)0LL)) && (f_list_len_52(F->it_1021) != ((rt_int)0LL)))) {
while (((F->it_1021 != NULL) && (F->f_1022 != NULL))) {
if (((((*(P386)rt_nil_check(F->it_1021)).a == NULL) || ((*(P386)rt_nil_check((*(P386)rt_nil_check((*(P386)rt_nil_check(F->it_1021)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P381)rt_nil_check((*(P386)rt_nil_check((*(P386)rt_nil_check((*(P386)rt_nil_check(F->it_1021)).a)).a)).name)), (*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_1022)).name)))))) {
f_fail_21((*(P386)rt_nil_check(F->e_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_1022)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1040 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->it_1021)).b, (*(P392)rt_nil_check(F->f_1022)).t, &F->vt_1023));
f_check_type_165(F->vt_1023, (*(P392)rt_nil_check(F->f_1022)).t, (*(P386)rt_nil_check(F->e_350)).line);
F->parts_1039 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->parts_1039)), rt_str(" ", 1)), F->tmp_1038), rt_str(".", 1)), f_lower_s_15(&(*(P381)rt_nil_check((*(P392)rt_nil_check(F->f_1022)).name)))), rt_str(" = ", 3)), f_copy_code_201((*(P392)rt_nil_check(F->f_1022)).t, &F->v_1040)), rt_str(";", 1)); b_; }));
}
F->it_1021 = (*(P386)rt_nil_check(F->it_1021)).next;
F->f_1022 = (*(P392)rt_nil_check(F->f_1022)).next;
}
}
if (((F->it_1021 != NULL) || (F->f_1022 != NULL))) {
f_fail_21((*(P386)rt_nil_check(F->e_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->parts_1039)), rt_str(" ", 1)), F->tmp_1038), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_fits_356(P396 y_354, P386 args_355) {
  struct f_fits_356fr *F = rt_alloc(sizeof *F);
F->y_354 = y_354;
F->args_355 = args_355;
F->a_1041 = NULL;
F->a_1041 = F->args_355;
F->pm_1042 = NULL;
F->pm_1042 = (*(P396)rt_nil_check(F->y_354)).params;
F->t_1043 = NULL;
F->saved_1044 = NULL;
F->saved_1044 = g_code_424;
F->ok_1045 = 1;
F->lv_1046 = NULL;
F->lc_1047 = NULL;
g_trial_436 = rt_add(g_trial_436, ((rt_int)1LL));
g_code_424 = f_new_buffer_22();
{ rt_frame xf1049;
if (RT_TRY(xf1049)) {
while (((F->ok_1045 && (F->a_1041 != NULL)) && (F->pm_1042 != NULL))) {
if ((((*(P394)rt_nil_check(F->pm_1042)).mode == ((rt_int)2LL)) || ((*(P394)rt_nil_check(F->pm_1042)).mode == ((rt_int)3LL)))) {
f_lvalue_312(F->a_1041, &F->lv_1046, &F->t_1043, &F->lc_1047, &F->ro_1048);
} else {
F->v_1051 = rt_str_copy(f_gexpr_333(F->a_1041, (*(P394)rt_nil_check(F->pm_1042)).t, &F->t_1043));
}
if ((!(f_same_159(F->t_1043, (*(P394)rt_nil_check(F->pm_1042)).t) || (((*(P390)rt_nil_check(F->t_1043)).kind == ((rt_int)11LL)) && ((*(P390)rt_nil_check((*(P394)rt_nil_check(F->pm_1042)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1045 = 0;
}
F->a_1041 = (*(P386)rt_nil_check(F->a_1041)).next;
F->pm_1042 = (*(P394)rt_nil_check(F->pm_1042)).next;
}
if (((F->a_1041 != NULL) || (F->pm_1042 != NULL))) {
F->ok_1045 = 0;
}
RT_POP(xf1049);
} else {
RT_POP(xf1049);
int x1050 = rt_xcur;
if (0 || x1050 == ex_compile_error_1) {
F->ok_1045 = 0;
} else {
rt_raise(x1050);
}
}
}
g_trial_436 = rt_sub(g_trial_436, ((rt_int)1LL));
g_code_424 = F->saved_1044;
F->result_ = F->ok_1045;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P396 f_resolve_overload_361(rstr *name_357, P386 args_358, int is_stmt_359, rt_int line_360) {
  struct f_resolve_overload_361fr *F = rt_alloc(sizeof *F);
F->name_357 = name_357;
F->args_358 = args_358;
F->is_stmt_359 = is_stmt_359;
F->line_360 = line_360;
F->y_1052 = NULL;
F->y_1052 = (*(P402)rt_nil_check(g_table_412)).p[rt_index(f_hash_133(&(*F->name_357)), (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo];
F->first_1053 = NULL;
F->n_1054 = ((rt_int)0LL);
while ((F->y_1052 != NULL)) {
if ((rt_str_eq((*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_1052)).name)), (*F->name_357)) && (((*(P396)rt_nil_check(F->y_1052)).kind == ((rt_int)3LL)) || ((*(P396)rt_nil_check(F->y_1052)).kind == ((rt_int)4LL))))) {
F->n_1054 = rt_add(F->n_1054, ((rt_int)1LL));
if ((F->first_1053 == NULL)) {
F->first_1053 = F->y_1052;
}
if (((((*(P396)rt_nil_check(F->y_1052)).kind == ((rt_int)4LL)) == F->is_stmt_359) && f_fits_356(F->y_1052, F->args_358))) {
F->result_ = F->y_1052;
goto ret_;
}
}
F->y_1052 = (*(P396)rt_nil_check(F->y_1052)).chain;
}
if (f_is_builtin_363(&(*F->name_357))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1054 > ((rt_int)1LL))) {
f_fail_21(F->line_360, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_357)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1053;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_363(rstr *n_362) {
  struct f_is_builtin_363fr *F = rt_alloc(sizeof *F);
F->n_362 = n_362;
F->result_ = ((((((((((((((rt_str_eq((*F->n_362), rt_str("ABS", 3)) || rt_str_eq((*F->n_362), rt_str("POS", 3))) || rt_str_eq((*F->n_362), rt_str("SUCC", 4))) || rt_str_eq((*F->n_362), rt_str("PRED", 4))) || rt_str_eq((*F->n_362), rt_str("SQRT", 4))) || rt_str_eq((*F->n_362), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_362), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_362), rt_str("WRITE", 5))) || rt_str_eq((*F->n_362), rt_str("READLN", 6))) || rt_str_eq((*F->n_362), rt_str("SEND", 4))) || rt_str_eq((*F->n_362), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_362), rt_str("DELAY", 5))) || rt_str_eq((*F->n_362), rt_str("TIME", 4))) || rt_str_eq((*F->n_362), rt_str("CNVT", 4))) || rt_str_eq((*F->n_362), rt_str("FORMAT", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P396 f_user_op_366(rstr *op_364, P386 args_365) {
  struct f_user_op_366fr *F = rt_alloc(sizeof *F);
F->op_364 = op_364;
F->args_365 = args_365;
F->y_1055 = NULL;
F->y_1055 = (*(P402)rt_nil_check(g_table_412)).p[rt_index(f_hash_133(&(*F->op_364)), (*(P402)rt_nil_check(g_table_412)).lo, (*(P402)rt_nil_check(g_table_412)).hi) - (*(P402)rt_nil_check(g_table_412)).lo];
while ((F->y_1055 != NULL)) {
if (((rt_str_eq((*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_1055)).name)), (*F->op_364)) && ((*(P396)rt_nil_check(F->y_1055)).kind == ((rt_int)3LL))) && f_fits_356(F->y_1055, F->args_365))) {
F->result_ = F->y_1055;
goto ret_;
}
F->y_1055 = (*(P396)rt_nil_check(F->y_1055)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_370(P386 e_367, int is_stmt_368, P390 *t_369) {
  struct f_gcall_370fr *F = rt_alloc(sizeof *F);
F->e_367 = e_367;
F->is_stmt_368 = is_stmt_368;
F->t_369 = t_369;
F->fn_1056 = NULL;
F->fn_1056 = (*(P386)rt_nil_check(F->e_367)).a;
F->tt_1057 = NULL;
F->y_1058 = NULL;
F->args_1059 = NULL;
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1060 = NULL;
F->a_1060 = (*(P386)rt_nil_check(F->e_367)).b;
F->pm_1061 = NULL;
F->lt_1062 = NULL;
F->vt_1063 = NULL;
F->lv_1064 = NULL;
F->lc_1065 = NULL;
if (((*(P386)rt_nil_check(F->fn_1056)).kind == ((rt_int)12LL))) {
F->tt_1057 = (*(P386)rt_nil_check(F->fn_1056)).b;
F->fn_1056 = (*(P386)rt_nil_check(F->fn_1056)).a;
}
F->y_1058 = f_lookup_135(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)));
if ((F->y_1058 == NULL)) {
F->result_ = f_builtin_377(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)), F->tt_1057, (*(P386)rt_nil_check(F->e_367)).b, (*(P386)rt_nil_check(F->e_367)).line, F->is_stmt_368, &(*F->t_369));
goto ret_;
}
if ((((*(P396)rt_nil_check(F->y_1058)).kind == ((rt_int)3LL)) || ((*(P396)rt_nil_check(F->y_1058)).kind == ((rt_int)4LL)))) {
F->y_1058 = f_resolve_overload_361(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)), (*(P386)rt_nil_check(F->e_367)).b, F->is_stmt_368, (*(P386)rt_nil_check(F->e_367)).line);
if ((F->y_1058 == NULL)) {
F->result_ = f_builtin_377(&(*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)), F->tt_1057, (*(P386)rt_nil_check(F->e_367)).b, (*(P386)rt_nil_check(F->e_367)).line, F->is_stmt_368, &(*F->t_369));
goto ret_;
}
}
if ((((*(P396)rt_nil_check(F->y_1058)).kind != ((rt_int)3LL)) && ((*(P396)rt_nil_check(F->y_1058)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P386)rt_nil_check(F->e_367)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_368 && ((*(P396)rt_nil_check(F->y_1058)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P386)rt_nil_check(F->e_367)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_368) && ((*(P396)rt_nil_check(F->y_1058)).kind != ((rt_int)3LL)))) {
f_fail_21((*(P386)rt_nil_check(F->e_367)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1061 = (*(P396)rt_nil_check(F->y_1058)).params;
if (((*(P396)rt_nil_check(F->y_1058)).level > ((rt_int)0LL))) {
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1068 = ((rt_int)1LL), hi1069 = rt_sub(g_cur_level_427, (*(P396)rt_nil_check(F->y_1058)).level);
for (rt_int it1070 = lo1068; it1070 <= hi1069; it1070++) {
F->i_1067 = it1070;
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->args_1059)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1060 != NULL) && (F->pm_1061 != NULL))) {
if ((((*(P381)rt_nil_check(F->args_1059))).len > ((rt_int)0LL))) {
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->args_1059)), rt_str(", ", 2)); b_; }));
}
if ((((*(P394)rt_nil_check(F->pm_1061)).mode == ((rt_int)2LL)) || ((*(P394)rt_nil_check(F->pm_1061)).mode == ((rt_int)3LL)))) {
f_lvalue_312(F->a_1060, &F->lv_1064, &F->lt_1062, &F->lc_1065, &F->ro_1066);
if (F->ro_1066) {
f_fail_21((*(P386)rt_nil_check(F->e_367)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check((*(P394)rt_nil_check(F->pm_1061)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_165(F->lt_1062, (*(P394)rt_nil_check(F->pm_1061)).t, (*(P386)rt_nil_check(F->e_367)).line);
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->args_1059)), rt_str("&", 1)), (*(P381)rt_nil_check(F->lv_1064))); b_; }));
} else if ((((*(P394)rt_nil_check(F->pm_1061)).mode == ((rt_int)4LL)) && f_is_lvalue_306(F->a_1060))) {
f_lvalue_312(F->a_1060, &F->lv_1064, &F->lt_1062, &F->lc_1065, &F->ro_1066);
f_check_type_165(F->lt_1062, (*(P394)rt_nil_check(F->pm_1061)).t, (*(P386)rt_nil_check(F->e_367)).line);
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->args_1059)), rt_str("&", 1)), (*(P381)rt_nil_check(F->lv_1064))); b_; }));
} else if (((*(P394)rt_nil_check(F->pm_1061)).mode == ((rt_int)4LL))) {
F->v_1071 = rt_str_copy(f_gexpr_333(F->a_1060, (*(P394)rt_nil_check(F->pm_1061)).t, &F->vt_1063));
F->ct_1072 = rt_str_copy(f_ctype_167((*(P394)rt_nil_check(F->pm_1061)).t));
f_check_type_165(F->vt_1063, (*(P394)rt_nil_check(F->pm_1061)).t, (*(P386)rt_nil_check(F->e_367)).line);
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->args_1059)), rt_str("({ ", 3)), F->ct_1072), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1072), rt_str(")); *b_ = ", 10)), F->v_1071), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1073 = rt_str_copy(f_gexpr_333(F->a_1060, (*(P394)rt_nil_check(F->pm_1061)).t, &F->vt_1063));
f_check_type_165(F->vt_1063, (*(P394)rt_nil_check(F->pm_1061)).t, (*(P386)rt_nil_check(F->e_367)).line);
if (((((*(P390)rt_nil_check((*(P394)rt_nil_check(F->pm_1061)).t)).kind == ((rt_int)1LL)) && ((*(P394)rt_nil_check(F->pm_1061)).c != NULL)) && (*(P388)rt_nil_check((*(P394)rt_nil_check(F->pm_1061)).c)).hasm)) {
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check(F->args_1059)), rt_str("rt_range(", 9)), F->v_1073), rt_str(", ", 2)), f_itos_7((*(P388)rt_nil_check((*(P394)rt_nil_check(F->pm_1061)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P388)rt_nil_check((*(P394)rt_nil_check(F->pm_1061)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1059 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P381)rt_nil_check(F->args_1059)), F->v_1073); b_; }));
}
}
F->a_1060 = (*(P386)rt_nil_check(F->a_1060)).next;
F->pm_1061 = (*(P394)rt_nil_check(F->pm_1061)).next;
}
if (((F->a_1060 != NULL) || (F->pm_1061 != NULL))) {
f_fail_21((*(P386)rt_nil_check(F->e_367)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check((*(P386)rt_nil_check(F->fn_1056)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_52((*(P386)rt_nil_check(F->e_367)).b), f_list_len_52(F->a_1060)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_369) = (*(P396)rt_nil_check(F->y_1058)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P381)rt_nil_check((*(P396)rt_nil_check(F->y_1058)).cname)), rt_str("(", 1)), (*(P381)rt_nil_check(F->args_1059))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_377(rstr *name_371, P386 tt_372, P386 args_373, rt_int line_374, int is_stmt_375, P390 *t_376) {
  struct f_builtin_377fr *F = rt_alloc(sizeof *F);
F->name_371 = name_371;
F->tt_372 = tt_372;
F->args_373 = args_373;
F->line_374 = line_374;
F->is_stmt_375 = is_stmt_375;
F->t_376 = t_376;
F->at_1074 = NULL;
F->n_1075 = f_list_len_52(F->args_373);
(*F->t_376) = g_ty_void_443;
if (((rt_str_eq((*F->name_371), rt_str("POS", 3)) || rt_str_eq((*F->name_371), rt_str("SUCC", 4))) || rt_str_eq((*F->name_371), rt_str("PRED", 4)))) {
F->a_1076 = rt_str_copy(f_gexpr_333(F->args_373, NULL, &F->at_1074));
if (rt_str_eq((*F->name_371), rt_str("POS", 3))) {
if (((*(P390)rt_nil_check(F->at_1074)).kind != ((rt_int)4LL))) {
f_fail_21(F->line_374, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_376) = g_ty_int_438;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1076), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_376) = F->at_1074;
if (((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_371), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1076), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1076), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_371), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1076), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P390)rt_nil_check(F->at_1074)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1076), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P390)rt_nil_check(F->at_1074)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_371), rt_str("SQRT", 4)) || rt_str_eq((*F->name_371), rt_str("SIN", 3))) || rt_str_eq((*F->name_371), rt_str("COS", 3))) || rt_str_eq((*F->name_371), rt_str("EXP", 3))) || rt_str_eq((*F->name_371), rt_str("LN", 2))) || rt_str_eq((*F->name_371), rt_str("FLOOR", 5)))) {
F->a_1077 = rt_str_copy(f_gexpr_333(F->args_373, g_ty_float_440, &F->at_1074));
(*F->t_376) = g_ty_float_440;
if (rt_str_eq((*F->name_371), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1077), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_371)), rt_str("(", 1)), F->a_1077), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("IFLOAT", 6))) {
F->a_1078 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->args_373)).next, g_ty_int_438, &F->at_1074));
(*F->t_376) = g_ty_float_440;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1078), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("IFIX", 4))) {
F->a_1079 = rt_str_copy(f_gexpr_333(F->args_373, g_ty_float_440, &F->at_1074));
(*F->t_376) = g_ty_int_438;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1079), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("FORMAT", 6))) {
F->a_1080 = rt_str_copy(f_gexpr_333(F->args_373, g_ty_float_440, &F->at_1074));
F->n1_1081 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->args_373)).next, g_ty_int_438, &F->at_1074));
F->m1_1082 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check((*(P386)rt_nil_check(F->args_373)).next)).next, g_ty_int_438, &F->at_1074));
(*F->t_376) = g_ty_string_442;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1080), rt_str(", ", 2)), F->n1_1081), rt_str(", ", 2)), F->m1_1082), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("ABS", 3))) {
F->a_1083 = rt_str_copy(f_gexpr_333(F->args_373, NULL, &F->at_1074));
(*F->t_376) = F->at_1074;
if (((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1083), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("CNVT", 4))) {
if ((F->tt_372 == NULL)) {
f_fail_21(F->line_374, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1084 = rt_str_copy(f_gexpr_333(F->args_373, NULL, &F->at_1074));
if ((((*(P386)rt_nil_check(F->tt_372)).kind == ((rt_int)73LL)) && ((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)1LL)))) {
(*F->t_376) = g_ty_string_442;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1084), rt_str(")", 1));
goto ret_;
} else if ((((*(P386)rt_nil_check(F->tt_372)).kind == ((rt_int)73LL)) && ((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)3LL)))) {
(*F->t_376) = g_ty_string_442;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1084), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P386)rt_nil_check(F->tt_372)).kind == ((rt_int)73LL)) && ((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)2LL)))) {
(*F->t_376) = g_ty_string_442;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1084), rt_str(") \? rt_str(", 11)), f_q_16()), rt_str("TRUE", 4)), f_q_16()), rt_str(", 4) : rt_str(", 14)), f_q_16()), rt_str("FALSE", 5)), f_q_16()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P386)rt_nil_check(F->tt_372)).kind == ((rt_int)70LL)) && ((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)5LL)))) {
(*F->t_376) = g_ty_int_438;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1084), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_374, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_371), rt_str("WRITELN", 7))) {
if ((F->n_1075 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1085 = NULL;
F->last_1085 = F->args_373;
while (((*(P386)rt_nil_check(F->last_1085)).next != NULL)) {
F->last_1085 = (*(P386)rt_nil_check(F->last_1085)).next;
}
{
F->a_1086 = rt_str_copy(f_gexpr_333(F->last_1085, g_ty_string_442, &F->at_1074));
f_check_type_165(F->at_1074, g_ty_string_442, F->line_374);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1086), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_371), rt_str("WRITE", 5))) {
F->a_1087 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->args_373)).next, NULL, &F->at_1074));
if (((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1087), rt_str(")", 1));
goto ret_;
} else if (((*(P390)rt_nil_check(F->at_1074)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1087), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_374, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_371), rt_str("READLN", 6))) {
F->lv_1088 = NULL;
F->lc_1089 = NULL;
F->last_1091 = NULL;
F->last_1091 = F->args_373;
while (((*(P386)rt_nil_check(F->last_1091)).next != NULL)) {
F->last_1091 = (*(P386)rt_nil_check(F->last_1091)).next;
}
f_lvalue_312(F->last_1091, &F->lv_1088, &F->at_1074, &F->lc_1089, &F->ro_1090);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P381)rt_nil_check(F->lv_1088))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("SIZELN", 6))) {
(*F->t_376) = g_ty_int_438;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("EOF", 3))) {
(*F->t_376) = g_ty_bool_439;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_371), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_371), rt_str("SYS_OUT", 7)))) {
(*F->t_376) = g_ty_file_444;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_371), rt_str("OPEN", 4)) || rt_str_eq((*F->name_371), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_371), rt_str("SEND", 4)) || rt_str_eq((*F->name_371), rt_str("RECEIVE", 7)))) {
F->lv_1092 = NULL;
F->dv_1093 = NULL;
F->lc_1094 = NULL;
F->mt_1096 = NULL;
F->dt_1097 = NULL;
f_lvalue_312(F->args_373, &F->lv_1092, &F->mt_1096, &F->lc_1094, &F->ro_1095);
if (((*(P390)rt_nil_check(F->mt_1096)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_374, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_371), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_371), rt_str("RECEIVE", 7))) {
f_lvalue_312((*(P386)rt_nil_check(F->args_373)).next, &F->dv_1093, &F->dt_1097, &F->lc_1094, &F->ro_1095);
f_check_type_165(F->dt_1097, (*(P390)rt_nil_check(F->mt_1096)).elem, F->line_374);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(&", 12), (*(P381)rt_nil_check(F->lv_1092))), rt_str(", &", 3)), (*(P381)rt_nil_check(F->dv_1093))), rt_str(")", 1));
goto ret_;
}
{
F->v_1098 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->args_373)).next, (*(P390)rt_nil_check(F->mt_1096)).elem, &F->at_1074));
f_check_type_165(F->at_1074, (*(P390)rt_nil_check(F->mt_1096)).elem, F->line_374);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_167((*(P390)rt_nil_check(F->mt_1096)).elem)), rt_str(" m_ = ", 6)), F->v_1098), rt_str("; rt_send(&", 11)), (*(P381)rt_nil_check(F->lv_1092))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_371), rt_str("PRIORITY", 8))) {
(*F->t_376) = g_ty_int_438;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_281(F->args_373)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("SET_PRIORITY", 12))) {
F->v_1099 = rt_str_copy(f_gexpr_333((*(P386)rt_nil_check(F->args_373)).next, g_ty_int_438, &F->at_1074));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_281(F->args_373)), rt_str(", ", 2)), F->v_1099), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_281(F->args_373)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("ACTIVE", 6))) {
(*F->t_376) = g_ty_bool_439;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_281(F->args_373)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("DELAY", 5))) {
F->v_1100 = rt_str_copy(f_gexpr_333(F->args_373, g_ty_int_438, &F->at_1074));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1100), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("DELAY_UNTIL", 11))) {
F->v_1101 = rt_str_copy(f_gexpr_333(F->args_373, g_ty_int_438, &F->at_1074));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1101), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_281(F->args_373)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("TIME", 4))) {
(*F->t_376) = g_ty_int_438;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_371), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_371), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_371), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_371), rt_str("HOURS", 5)))) {
(*F->t_376) = g_ty_int_438;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_371));
goto ret_;
} else if (rt_str_eq((*F->name_371), rt_str("HALT", 4))) {
F->a_1102 = rt_str_copy(f_gexpr_333(F->args_373, g_ty_int_438, &F->at_1074));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1102), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_374, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_371), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_379(P386 units_378) {
  struct f_translate_379fr *F = rt_alloc(sizeof *F);
F->units_378 = units_378;
F->u_1103 = NULL;
F->u_1103 = F->units_378;
while ((F->u_1103 != NULL)) {
if (((*(P386)rt_nil_check(F->u_1103)).next == NULL)) {
f_declare_body_217((*(P386)rt_nil_check(F->u_1103)).c);
f_body_elements_249((*(P386)rt_nil_check(F->u_1103)).c);
} else {
f_gen_capsule_227(F->u_1103);
}
F->u_1103 = (*(P386)rt_nil_check(F->u_1103)).next;
}
ret_:
  return;
}

static void f_print_program_380(void) {
  struct f_print_program_380fr *F = rt_alloc(sizeof *F);
f_emit_helpers_213();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_16()), rt_str("paleo.h", 7)), f_q_16()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_29(g_out_types_417);
f_print_buffer_29(g_out_frames_430);
f_print_buffer_29(g_out_helpers_418);
f_print_buffer_29(g_out_protos_419);
f_print_buffer_29(g_out_globals_420);
f_print_buffer_29(g_out_funcs_421);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_29(g_out_excs_423);
f_print_buffer_29(g_out_init_422);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R407(R407 *d, R407 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R407 cp_R407(R407 s) {
  R407 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R407(R407 a, R407 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R405(R405 *d, R405 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R405 cp_R405(R405 s) {
  R405 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R405(R405 a, R405 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A403(A403 *d, A403 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A403 cp_A403(A403 s) {
  A403 d = s; d.p = rt_alloc(sizeof(P396) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A403(A403 a, A403 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R401(R401 *d, R401 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R401 cp_R401(R401 s) {
  R401 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R401(R401 a, R401 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R399(R399 *d, R399 s) {
  d->s = s.s;
  d->next = s.next;
}
static R399 cp_R399(R399 s) {
  R399 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R399(R399 a, R399 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R397(R397 *d, R397 s) {
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
static R397 cp_R397(R397 s) {
  R397 d = s;
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
static int eq_R397(R397 a, R397 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R395(R395 *d, R395 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R395 cp_R395(R395 s) {
  R395 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R395(R395 a, R395 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R393(R393 *d, R393 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R393 cp_R393(R393 s) {
  R393 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R393(R393 a, R393 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R391(R391 *d, R391 s) {
  d->kind = s.kind;
  d->name = s.name;
  d->lits = s.lits;
  d->elem = s.elem;
  d->idx = s.idx;
  d->idx2 = s.idx2;
  d->elemcons = s.elemcons;
  d->elemst = s.elemst;
  d->under = s.under;
  d->tparams = s.tparams;
  d->fields = s.fields;
  d->target = s.target;
  d->decl = s.decl;
  d->cname = s.cname;
  d->forward = s.forward;
  d->defined = s.defined;
  d->helpers = s.helpers;
  d->next = s.next;
}
static R391 cp_R391(R391 s) {
  R391 d = s;
  d.kind = s.kind;
  d.name = s.name;
  d.lits = s.lits;
  d.elem = s.elem;
  d.idx = s.idx;
  d.idx2 = s.idx2;
  d.elemcons = s.elemcons;
  d.elemst = s.elemst;
  d.under = s.under;
  d.tparams = s.tparams;
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
static int eq_R391(R391 a, R391 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R389(R389 *d, R389 s) {
  d->lo = s.lo;
  d->hi = s.hi;
  d->lo2 = s.lo2;
  d->hi2 = s.hi2;
  d->slen = s.slen;
  d->mlo = s.mlo;
  d->mhi = s.mhi;
  d->hasm = s.hasm;
  d->args = s.args;
}
static R389 cp_R389(R389 s) {
  R389 d = s;
  d.lo = s.lo;
  d.hi = s.hi;
  d.lo2 = s.lo2;
  d.hi2 = s.hi2;
  d.slen = s.slen;
  d.mlo = s.mlo;
  d.mhi = s.mhi;
  d.hasm = s.hasm;
  d.args = s.args;
  return d;
}
static int eq_R389(R389 a, R389 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R387(R387 *d, R387 s) {
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
static R387 cp_R387(R387 s) {
  R387 d = s;
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
static int eq_R387(R387 a, R387 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.next == b.next);
}
static void as_A385(A385 *d, A385 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A385 cp_A385(A385 s) {
  A385 d = s; d.p = rt_alloc(sizeof(P382) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A385(A385 a, A385 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R383(R383 *d, R383 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R383 cp_R383(R383 s) {
  R383 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R383(R383 a, R383 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_408 = NULL;
g_ntoks_409 = ((rt_int)0LL);
g_tpos_410 = ((rt_int)1LL);
g_src_line_411 = ((rt_int)0LL);
g_table_412 = NULL;
g_depth_413 = ((rt_int)0LL);
g_scope_stack_414 = NULL;
g_all_types_415 = NULL;
g_serial_416 = ((rt_int)0LL);
g_out_types_417 = NULL;
g_out_helpers_418 = NULL;
g_out_protos_419 = NULL;
g_out_globals_420 = NULL;
g_out_funcs_421 = NULL;
g_out_init_422 = NULL;
g_out_excs_423 = NULL;
g_code_424 = NULL;
g_fields_buf_425 = NULL;
g_in_func_426 = 0;
g_cur_level_427 = ((rt_int)0LL);
g_fctx_428 = NULL;
g_st_field_429 = NULL;
g_out_frames_430 = NULL;
g_func_sym_431 = NULL;
g_exits_432 = NULL;
g_frames_433 = ((rt_int)0LL);
g_handlers_434 = NULL;
g_cleanups_435 = NULL;
g_trial_436 = ((rt_int)0LL);
g_mcopies_437 = NULL;
g_ty_int_438 = NULL;
g_ty_bool_439 = NULL;
g_ty_float_440 = NULL;
g_ty_ascii_441 = NULL;
g_ty_string_442 = NULL;
g_ty_void_443 = NULL;
g_ty_file_444 = NULL;
g_ty_nil_445 = NULL;
g_ty_lock_446 = NULL;
g_ty_act_447 = NULL;
g_no_cons_448 = NULL;
{ A385 *cell1104 = rt_alloc(sizeof(A385));
rt_int pv1105 = ((rt_int)1000000LL);
(*cell1104).lo = ((rt_int)1LL); (*cell1104).hi = pv1105; (*cell1104).lo2 = 1; (*cell1104).hi2 = 1;
(*cell1104).p = rt_alloc(sizeof(P382) * (size_t)RT_CNT((*cell1104)));
for (rt_int i1106 = 0; i1106 < RT_CNT((*cell1104)); i1106++) {
(*cell1104).p[i1106] = NULL;
}
g_toks_408 = cell1104;
}
{ A403 *cell1107 = rt_alloc(sizeof(A403));
rt_int pv1108 = ((rt_int)4093LL);
(*cell1107).lo = ((rt_int)0LL); (*cell1107).hi = pv1108; (*cell1107).lo2 = 1; (*cell1107).hi2 = 1;
(*cell1107).p = rt_alloc(sizeof(P396) * (size_t)RT_CNT((*cell1107)));
for (rt_int i1109 = 0; i1109 < RT_CNT((*cell1107)); i1109++) {
(*cell1107).p[i1109] = NULL;
}
g_table_412 = cell1107;
}
g_out_types_417 = f_new_buffer_22();
g_out_helpers_418 = f_new_buffer_22();
g_out_protos_419 = f_new_buffer_22();
g_out_globals_420 = f_new_buffer_22();
g_out_funcs_421 = f_new_buffer_22();
g_out_init_422 = f_new_buffer_22();
g_out_excs_423 = f_new_buffer_22();
g_out_frames_430 = f_new_buffer_22();
g_code_424 = g_out_init_422;
g_no_cons_448 = f_new_cons_153();
g_ty_int_438 = f_new_typ_152(((rt_int)1LL));
g_ty_bool_439 = f_new_typ_152(((rt_int)2LL));
g_ty_float_440 = f_new_typ_152(((rt_int)3LL));
g_ty_string_442 = f_new_typ_152(((rt_int)5LL));
g_ty_void_443 = f_new_typ_152(((rt_int)9LL));
g_ty_file_444 = f_new_typ_152(((rt_int)10LL));
g_ty_nil_445 = f_new_typ_152(((rt_int)11LL));
g_ty_lock_446 = f_new_typ_152(((rt_int)13LL));
g_ty_act_447 = f_new_typ_152(((rt_int)14LL));
{ rt_frame xf1110;
if (RT_TRY(xf1110)) {
f_init_ascii_172();
f_read_source_43();
f_translate_379(f_program_131());
f_print_program_380();
RT_POP(xf1110);
} else {
RT_POP(xf1110);
int x1111 = rt_xcur;
if (0 || x1111 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1111);
}
}
}
  rt_main_done();
  return 0;
}
