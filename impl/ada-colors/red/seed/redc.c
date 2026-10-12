#include "paleo.h"
#include <math.h>
typedef rstr *P412;
typedef struct R414 R414;
typedef struct R414 *P413;
struct R414 {  rt_int kind; rt_int line; rt_int ival; P412 s;  };
typedef struct A416 A416;
struct A416 { rt_int lo, hi, lo2, hi2; P413 *p; };
typedef A416 *P415;
typedef struct R418 R418;
typedef struct R418 *P417;
struct R418 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P412 name; P412 tag; P417 a; P417 b; P417 c; P417 d; P417 e; P417 next;  };
typedef struct R420 R420;
typedef struct R420 *P419;
struct R420 {  P412 lo; P412 hi; P412 lo2; P412 hi2; P412 slen; rt_int mlo; rt_int mhi; int hasm; P417 args;  };
typedef struct R422 R422;
typedef struct R422 *P421;
typedef struct R424 R424;
typedef struct R424 *P423;
struct R424 {  P412 name; P421 t; P419 c; P417 st; P423 next;  };
struct R422 {  rt_int kind; P412 name; P417 lits; P421 elem; P421 idx; P421 idx2; P419 elemcons; P417 elemst; P421 under; P417 tparams; P417 ocap; P423 fields; P421 target; P417 decl; P412 cname; int forward; int defined; int helpers; P421 next;  };
typedef struct R426 R426;
typedef struct R426 *P425;
struct R426 {  P412 name; rt_int mode; P421 t; P419 c; P412 cfield; P425 next;  };
typedef struct R428 R428;
typedef struct R428 *P427;
struct R428 {  rt_int kind; P412 name; P421 t; P419 c; P412 access; P412 cname; int ro_flag; rt_int mvalue; int hasmv; P417 st; P417 decl; P425 params; P421 result; rt_int depth; rt_int level; int byref; P427 members; P427 mnext; P417 binds; P427 insts; P427 chain; P427 stack;  };
typedef struct R430 R430;
typedef struct R430 *P429;
struct R430 {  P412 s; P429 next;  };
typedef struct R432 R432;
typedef struct R432 *P431;
struct R432 {  P429 head; P429 tail;  };
typedef struct A434 A434;
struct A434 { rt_int lo, hi, lo2, hi2; P427 *p; };
typedef A434 *P433;
typedef struct R436 R436;
typedef struct R436 *P435;
struct R436 {  P412 match; P412 label; rt_int depth; P435 next;  };
typedef struct R438 R438;
typedef struct R438 *P437;
struct R438 {  P417 d; P437 next;  };
typedef struct R440 R440;
typedef struct R440 *P439;
struct R440 {  rt_int depth; P417 imps; int all_imp; P439 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P412 result_;
 P412 t_484;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_487;
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
 rstr letters_488;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_489;
 rstr r_490;
 rt_int i_491;
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
 P431 result_;
 P431 b_495;
};
struct f_put_25fr { int dummy;
 P431 b_23;
 rstr *s_24;
 P429 l_497;
};
struct f_emit_27fr { int dummy;
 rstr *s_26;
};
struct f_print_buffer_29fr { int dummy;
 P431 b_28;
 P429 l_499;
};
struct f_splice_32fr { int dummy;
 P431 a_30;
 P431 b_31;
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
 P413 t_501;
};
struct f_lex_line_42fr { int dummy;
 rstr *line_41;
 rt_int i_503;
 rt_int j_504;
 rt_int n_505;
 int c_506;
 rstr w_507;
 rt_int k_508;
 rstr w_512;
 rt_int k_513;
 rstr two_517;
};
struct f_read_source_43fr { int dummy;
 rstr line_518;
};
struct f_nn_46fr { int dummy;
 rt_int kind_44;
 rt_int line_45;
 P417 result_;
 P417 x_519;
};
struct f_append_50fr { int dummy;
 P417 *head_47;
 P417 *tail_48;
 P417 x_49;
};
struct f_list_len_52fr { int dummy;
 P417 l_51;
 rt_int result_;
 rt_int n_521;
 P417 p_522;
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
 P412 result_;
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
 P412 result_;
};
struct f_name_node_75fr { int dummy;
 P417 result_;
 P417 x_523;
};
struct f_id_list_76fr { int dummy;
 P417 result_;
 P417 head_524;
 P417 tail_525;
};
struct f_p_subtype_77fr { int dummy;
 P417 result_;
 rt_int line_526;
 P417 x_527;
 rstr w_528;
 P417 head_529;
 P417 tail_530;
 P417 head_531;
 P417 tail_532;
 int more_533;
 P417 names_534;
 P417 st_535;
 P417 cmp_536;
 P417 head_537;
 P417 tail_538;
 int more_539;
 P417 lit_540;
};
struct f_actual_params_78fr { int dummy;
 P417 result_;
 P417 head_541;
 P417 tail_542;
};
struct f_is_type_word_80fr { int dummy;
 rstr *w_79;
 int result_;
};
struct f_actual_tt_81fr { int dummy;
 P417 result_;
 P417 head_543;
 P417 tail_544;
 int more_545;
};
struct f_binop_86fr { int dummy;
 P412 op_82;
 P417 l_83;
 P417 r_84;
 rt_int line_85;
 P417 result_;
 P417 x_546;
};
struct f_expr_87fr { int dummy;
 P417 result_;
 P417 l_547;
 P412 op_548;
 rt_int line_549;
};
struct f_expr_and_88fr { int dummy;
 P417 result_;
 P417 l_550;
 rt_int line_551;
};
struct f_expr_not_89fr { int dummy;
 P417 result_;
 P417 x_552;
};
struct f_is_rel_91fr { int dummy;
 rstr *s_90;
 int result_;
};
struct f_expr_rel_92fr { int dummy;
 P417 result_;
 P417 l_553;
 P412 op_554;
 rt_int line_555;
};
struct f_expr_add_93fr { int dummy;
 P417 result_;
 P417 l_556;
 P412 op_557;
 rt_int line_558;
};
struct f_expr_mul_94fr { int dummy;
 P417 result_;
 P417 l_559;
 P412 op_560;
 rt_int line_561;
};
struct f_expr_pow_95fr { int dummy;
 P417 result_;
 P417 l_562;
 rt_int line_563;
};
struct f_expr_prefix_96fr { int dummy;
 P417 result_;
 P417 x_564;
};
struct f_postfix_97fr { int dummy;
 P417 result_;
 P417 p_565;
 rt_int line_566;
 P417 x_567;
 P417 head_568;
 P417 tail_569;
 int more_570;
 P417 lo_571;
 P417 r_572;
 P417 x_573;
 P417 x_574;
 P417 x_575;
};
struct f_primary_98fr { int dummy;
 P417 result_;
 rt_int line_576;
 P417 x_577;
 rt_int k_578;
 rstr w_579;
 P417 head_580;
 P417 tail_581;
 int more_582;
};
struct f_constructor_item_99fr { int dummy;
 P417 result_;
 rt_int line_583;
 P417 it_584;
 P417 first_585;
 P417 keys_586;
 P417 ktail_587;
 P417 lab_588;
 rt_int save_589;
 P417 more_590;
 P417 tail2_591;
 int ok_592;
 int go_593;
 P417 l2_594;
};
struct f_at_body_end_100fr { int dummy;
 int result_;
};
struct f_body_101fr { int dummy;
 P417 result_;
 P417 head_595;
 P417 tail_596;
};
struct f_body_element_102fr { int dummy;
 P417 result_;
 P417 x_597;
};
struct f_declaration_103fr { int dummy;
 P417 result_;
 rt_int line_598;
 P417 head_599;
 P417 tail_600;
 P417 names_601;
 P417 x_602;
};
struct f_object_decl_104fr { int dummy;
 P417 result_;
 rt_int line_603;
 int is_var_604;
 P417 names_605;
 P417 st_606;
 P417 init_607;
 P417 head_608;
 P417 tail_609;
 P417 x_610;
};
struct f_abbrev_decl_105fr { int dummy;
 P417 result_;
 P417 x_611;
};
struct f_type_decl_106fr { int dummy;
 P417 result_;
 rt_int line_612;
 P412 name_613;
 P417 params_614;
 P417 x_615;
};
struct f_mode_of_108fr { int dummy;
 rstr *w_107;
 rt_int result_;
};
struct f_formal_params_109fr { int dummy;
 P417 result_;
 P417 head_616;
 P417 tail_617;
 int more_618;
 rt_int mode_619;
 P417 names_620;
 P417 ntail_621;
 P417 st_622;
 P417 p_623;
};
struct f_imports_list_111fr { int dummy;
 P417 owner_110;
 int result_;
 P417 head_624;
 P417 tail_625;
 int more_626;
 int ro_627;
 P417 x_628;
};
struct f_is_definable_113fr { int dummy;
 rstr *w_112;
 int result_;
};
struct f_definable_name_114fr { int dummy;
 P412 result_;
};
struct f_subprogram_decl_115fr { int dummy;
 P417 result_;
 rt_int line_629;
 P417 x_630;
 int is_abn_631;
 int is_func_632;
 int dummy_633;
};
struct f_capsule_decl_116fr { int dummy;
 P417 result_;
 P417 x_634;
 int dummy_635;
 P417 head_636;
 P417 tail_637;
 int more_638;
 P417 n_639;
};
struct f_formal_tt_117fr { int dummy;
 P417 result_;
 P417 head_640;
 P417 tail_641;
 int more_642;
};
struct f_generic_decl_118fr { int dummy;
 P417 result_;
 P417 x_643;
 P417 head_644;
 P417 tail_645;
 int more_646;
 P417 names_647;
 rt_int kind_648;
 P417 st_649;
 P417 p_650;
 P412 nm_651;
 P417 st_652;
};
struct f_task_decl_119fr { int dummy;
 P417 result_;
 P417 x_653;
 int dummy_654;
};
struct f_expose_decl_120fr { int dummy;
 P417 result_;
 P417 x_655;
 P417 head_656;
 P417 tail_657;
 int more_658;
 P417 n_659;
};
struct f_is_compound_kw_122fr { int dummy;
 rstr *w_121;
 int result_;
};
struct f_statement_123fr { int dummy;
 P417 result_;
 P417 labels_660;
 P417 ltail_661;
 P412 match_662;
 P417 s_663;
};
struct f_unlabeled_statement_124fr { int dummy;
 P417 result_;
 rt_int line_664;
 P417 x_665;
 P417 head_666;
 P417 tail_667;
 P417 invs_668;
 P417 itail_669;
 int more_670;
 P417 target_671;
};
struct f_arm_128fr { int dummy;
 P417 cond_125;
 P417 b_126;
 rt_int line_127;
 P417 result_;
 P417 x_672;
};
struct f_if_stmt_129fr { int dummy;
 P417 result_;
 P417 x_673;
 P417 head_674;
 P417 tail_675;
 P417 cond_676;
 int go_677;
};
struct f_case_stmt_130fr { int dummy;
 P417 result_;
 P417 x_678;
 P417 head_679;
 P417 tail_680;
 P417 labs_681;
 P417 ltail_682;
 int more_683;
 P417 l_684;
};
struct f_repeat_stmt_131fr { int dummy;
 P417 result_;
 P417 x_685;
};
struct f_guard_stmt_132fr { int dummy;
 P417 result_;
 P417 x_686;
 P417 head_687;
 P417 tail_688;
 P417 h_689;
};
struct f_program_133fr { int dummy;
 P417 result_;
 P417 head_690;
 P417 tail_691;
};
struct f_hash_135fr { int dummy;
 rstr *s_134;
 rt_int result_;
 rt_int h_692;
 rt_int i_693;
};
struct f_lookup_137fr { int dummy;
 rstr *name_136;
 P427 result_;
 P427 y_697;
};
struct f_lookup_decl_139fr { int dummy;
 P417 d_138;
 P427 result_;
 P427 y_698;
};
struct f_define_142fr { int dummy;
 P427 y_140;
 rt_int line_141;
 rt_int h_699;
 P427 z_700;
};
struct f_overloadable_144fr { int dummy;
 P427 y_143;
 int result_;
};
struct f_same_signature_147fr { int dummy;
 P425 a_145;
 P425 b_146;
 int result_;
 P425 x_701;
 P425 y_702;
};
struct f_open_scope_148fr { int dummy;
};
struct f_close_scope_149fr { int dummy;
};
struct f_new_sym_152fr { int dummy;
 rt_int kind_150;
 P412 name_151;
 P427 result_;
 P427 y_703;
};
struct f_new_typ_154fr { int dummy;
 rt_int kind_153;
 P421 result_;
 P421 t_705;
};
struct f_new_cons_155fr { int dummy;
 P419 result_;
 P419 c_707;
};
struct f_same_lits_158fr { int dummy;
 P417 a_156;
 P417 b_157;
 int result_;
 P417 x_709;
 P417 y_710;
};
struct f_same_161fr { int dummy;
 P421 a_159;
 P421 b_160;
 int result_;
 P423 f_711;
 P423 g_712;
};
struct f_kind_name_163fr { int dummy;
 P421 t_162;
 rstr result_;
};
struct f_check_type_167fr { int dummy;
 P421 got_164;
 P421 want_165;
 rt_int line_166;
};
struct f_ctype_169fr { int dummy;
 P421 t_168;
 rstr result_;
};
struct f_field_decls_171fr { int dummy;
 P421 t_170;
 rstr result_;
 P423 f_715;
 P412 s_716;
};
struct f_declare_ctype_173fr { int dummy;
 P421 t_172;
 P421 u_717;
 P421 target_718;
 P417 p_719;
 P412 fs_720;
};
struct f_init_ascii_174fr { int dummy;
 rstr names_721;
 P417 head_722;
 P417 tail_723;
 rt_int start_724;
 rt_int i_725;
 P417 lit_729;
};
struct f_lit_index_177fr { int dummy;
 P417 lits_175;
 rstr *name_176;
 rt_int result_;
 rt_int i_730;
 P417 l_731;
};
struct f_resolve_subtype_180fr { int dummy;
 P417 st_178;
 P419 *c_179;
 P421 result_;
 P421 t_732;
 int ok_733;
 P421 dummy_734;
 P419 ic_736;
 P419 ic2_737;
 P419 ec_738;
 P421 it_739;
 P421 et_740;
 P419 ec_741;
 P417 comp_742;
 P423 tail_743;
 P419 cc_744;
 P423 f_745;
 P419 ec_747;
 P427 y_748;
};
struct f_opened_182fr { int dummy;
 P421 t_181;
 int result_;
 P437 c_749;
};
struct f_replace_all_186fr { int dummy;
 rstr *s_183;
 rstr *pat_184;
 rstr *r_185;
 rstr result_;
 rt_int i_750;
};
struct f_subst_188fr { int dummy;
 rstr *s_187;
 rstr result_;
 P429 l_751;
 P412 r_752;
};
struct f_new_type_192fr { int dummy;
 P427 y_189;
 P417 st_190;
 P419 *c_191;
 P421 result_;
 P417 d_753;
 P417 p_754;
 P419 uc_755;
 P427 z_756;
};
struct f_init_storage_196fr { int dummy;
 rstr *lval_193;
 P421 t_194;
 P419 c_195;
 P417 p_757;
 P417 a_758;
 P419 uc_759;
 P421 ut_760;
 P421 at_761;
 rstr v_762;
 P429 saved_763;
 P429 l1_764;
 P429 l2_765;
 rstr i_768;
 P423 f_769;
};
struct f_manifest_199fr { int dummy;
 P417 e_197;
 int *ok_198;
 rt_int result_;
 rt_int a_770;
 rt_int b_771;
 int ok2_772;
 P427 y_773;
};
struct f_mcopy_201fr { int dummy;
 P421 t_200;
 rstr result_;
 rstr ct_774;
 rstr name_775;
 P429 l_776;
};
struct f_composite_203fr { int dummy;
 P421 t_202;
 int result_;
};
struct f_assign_code_208fr { int dummy;
 rstr *lval_204;
 P421 t_205;
 rstr *v_206;
 P419 c_207;
 rstr result_;
};
struct f_copy_code_211fr { int dummy;
 P421 t_209;
 rstr *v_210;
 rstr result_;
};
struct f_eq_code_215fr { int dummy;
 P421 t_212;
 rstr *a_213;
 rstr *b_214;
 rstr result_;
};
struct f_elem_assign_219fr { int dummy;
 rstr *lval_216;
 P421 t_217;
 rstr *v_218;
 rstr result_;
};
struct f_seen_name_222fr { int dummy;
 P429 l_220;
 rstr *s_221;
 int result_;
 P429 p_778;
};
struct f_emit_helpers_223fr { int dummy;
 P421 order_779;
 P421 t_780;
 P429 done_781;
 P429 l_782;
 rstr c_783;
};
struct f_helper_bodies_225fr { int dummy;
 P421 t_224;
 rstr c_785;
 P431 b_786;
 P421 e_787;
 P417 p_788;
 P412 pc_789;
 P423 f_790;
 P412 conds_791;
 rstr fn_792;
 rstr fn_793;
};
struct f_declare_body_227fr { int dummy;
 P417 elems_226;
 P417 e_794;
 P427 y_795;
 P427 y_796;
 P427 y_797;
 P421 t_798;
 P427 y_799;
 P427 g_800;
};
struct f_manifest_const_229fr { int dummy;
 P417 d_228;
 int ok_801;
 rt_int v_802;
 P427 y_803;
 P419 c_804;
};
struct f_exported_233fr { int dummy;
 P417 d_230;
 rstr *name_231;
 int *ro_232;
 int result_;
 P417 p_805;
};
struct f_copy_sym_235fr { int dummy;
 P427 y_234;
 P427 result_;
 P427 z_806;
};
struct f_gen_capsule_237fr { int dummy;
 P417 d_236;
 P427 y_808;
 P437 cr_809;
 P439 ctx_810;
 P427 m_811;
 P417 p_812;
 int ro_813;
 P427 z_816;
};
struct f_gen_expose_239fr { int dummy;
 P417 d_238;
 P427 y_817;
 P427 m_818;
 P417 p_819;
 int found_820;
 P427 z_821;
};
struct f_finish_ptr_241fr { int dummy;
 P421 t_240;
 P417 d_822;
 P417 p_823;
 P419 c_824;
 rstr dummy_825;
 P427 y_826;
};
struct f_declare_subprogram_243fr { int dummy;
 P417 d_242;
};
struct f_build_subprogram_245fr { int dummy;
 P417 d_244;
 P427 result_;
 P427 y_827;
 P417 p_828;
 P425 tail_829;
 P425 pm_830;
 P419 rc_832;
};
struct f_element_247fr { int dummy;
 P417 e_246;
 rt_int k_833;
 P421 t_834;
 rstr c_835;
};
struct f_storage_250fr { int dummy;
 rstr *name_248;
 P421 t_249;
 rstr result_;
 rstr g_836;
 rstr f_837;
};
struct f_bind_253fr { int dummy;
 P427 y_251;
 rstr *access_252;
};
struct f_var_decl_255fr { int dummy;
 P417 d_254;
 P419 c_838;
 P421 t_839;
 P427 y_840;
 rstr access_841;
 P421 vt_842;
 rstr v_843;
};
struct f_const_decl_257fr { int dummy;
 P417 d_256;
 P419 c_844;
 P421 t_845;
 P421 vt_846;
 P427 y_847;
 int ok_848;
 rstr v_849;
 rstr access_850;
};
struct f_subprogram_259fr { int dummy;
 P417 d_258;
};
struct f_gen_subprogram_262fr { int dummy;
 P417 d_260;
 P427 y_261;
 P431 saved_code_851;
 P431 saved_fields_852;
 int saved_in_853;
 P427 saved_sym_854;
 P435 saved_exits_855;
 rt_int saved_frames_856;
 P412 args_857;
 P425 pm_858;
 P429 saved_handlers_859;
 P429 saved_cleanups_860;
 P439 ctx_861;
 P412 head_862;
 P412 frame_863;
 P412 parent_864;
 rstr ct_866;
 rstr f_867;
 P427 p_868;
};
struct f_body_elements_264fr { int dummy;
 P417 elems_263;
 P417 e_869;
};
struct f_gen_body_266fr { int dummy;
 P417 elems_265;
};
struct f_pop_frames_268fr { int dummy;
 rt_int upto_267;
 rt_int i_870;
 P429 c_871;
};
struct f_push_cleanup_270fr { int dummy;
 rstr *s_269;
 P429 c_872;
};
struct f_pop_cleanup_271fr { int dummy;
};
struct f_gen_statement_273fr { int dummy;
 P417 s_272;
 P412 label_874;
 P435 x_875;
};
struct f_st_assign_275fr { int dummy;
 P417 s_274;
 P412 lv_878;
 P421 t_879;
 P421 vt_880;
 P419 c_881;
 int ro_882;
 rstr lo_883;
 rstr hi_884;
 rstr v_885;
 rstr v_886;
};
struct f_st_call_277fr { int dummy;
 P417 s_276;
 P417 c_887;
 P421 t_888;
 P417 x_889;
};
struct f_st_if_279fr { int dummy;
 P417 s_278;
 P417 a_890;
 int first_891;
 P421 t_892;
 rstr c_893;
};
struct f_st_case_281fr { int dummy;
 P417 s_280;
 P421 st_894;
 P421 vt_895;
 int first_896;
 P417 a_897;
 rstr sel_898;
 rstr tmp_899;
 P417 lab_900;
 P412 conds_901;
 rstr v_902;
 rstr lo_903;
 rstr hi_904;
};
struct f_st_repeat_283fr { int dummy;
 P417 s_282;
 P421 t_905;
 P419 c_906;
 rstr cond_907;
 rstr access_908;
 rstr lov_909;
 rstr hiv_910;
 rstr it_911;
 P427 y_912;
};
struct f_st_exit_285fr { int dummy;
 P417 s_284;
 P435 x_913;
};
struct f_st_return_287fr { int dummy;
 P417 s_286;
 P421 vt_914;
 rstr v_915;
};
struct f_exc_id_290fr { int dummy;
 rstr *name_288;
 rt_int line_289;
 rstr result_;
 P427 y_916;
};
struct f_st_guard_292fr { int dummy;
 P417 s_291;
 P417 h_917;
 int first_918;
 P429 hv_919;
 rstr f_920;
 rstr x_921;
 P417 n_923;
 P412 conds_924;
};
struct f_st_alloc_294fr { int dummy;
 P417 s_293;
 P412 lv_925;
 P421 t_926;
 P421 target_927;
 P421 vt_928;
 P419 c_929;
 P419 tc_930;
 int ro_931;
 P417 d_932;
 P417 p_933;
 P417 a_934;
 rstr tcn_935;
 rstr cell_936;
 rstr v_937;
 rstr pv_938;
 P427 y_939;
 rstr v_940;
};
struct f_act_ref_296fr { int dummy;
 P417 e_295;
 rstr result_;
 P412 lv_941;
 P421 t_942;
 P419 c_943;
 int ro_944;
};
struct f_st_create_298fr { int dummy;
 P417 s_297;
 P427 y_945;
 P425 pm_946;
 P417 a_947;
 P412 lv_948;
 P421 lt_949;
 P421 vt_950;
 P419 lc_951;
 int ro_952;
 rstr nf_953;
 rstr act_954;
 P412 link_955;
 rt_int i_956;
 rstr v_960;
};
struct f_wait_alt_302fr { int dummy;
 P417 inv_299;
 rstr *arr_300;
 rt_int i_301;
 rstr result_;
 P412 lv_961;
 P421 t_962;
 P421 vt_963;
 P419 c_964;
 int ro_965;
 P417 fn_966;
 P417 args_967;
 rstr slot_968;
 P412 dv_969;
 P421 dt_970;
 rstr tmp_971;
 rstr v_972;
 rstr v_973;
};
struct f_st_wait_304fr { int dummy;
 P417 s_303;
 P417 a_974;
 rt_int n_975;
 int first_976;
 P431 inits_977;
 rstr arr_978;
 rstr w_979;
 P417 inv_980;
 P412 conds_981;
 rt_int i_982;
};
struct f_st_region_306fr { int dummy;
 P417 s_305;
 P412 lv_986;
 P421 t_987;
 P419 c_988;
 int ro_989;
 rstr lk_990;
 rstr f_991;
};
struct f_gparam_309fr { int dummy;
 P417 g_307;
 rstr *name_308;
 P417 result_;
 P417 p_992;
};
struct f_bind_sym_311fr { int dummy;
 P417 p_310;
 P427 result_;
 P427 y_993;
};
struct f_same_binds_314fr { int dummy;
 P427 a_312;
 P427 b_313;
 int result_;
 P427 x_994;
 P427 y_995;
};
struct f_same_binding_317fr { int dummy;
 P427 a_315;
 P427 b_316;
 int result_;
};
struct f_instantiate_322fr { int dummy;
 P427 g_318;
 P417 tt_319;
 P417 args_320;
 rt_int line_321;
 P427 result_;
 P417 gd_996;
 P417 pat_997;
 P427 binds_998;
 P417 f_999;
 P417 a_1000;
 P417 fp_1001;
 P427 inst_1002;
 P421 at_1003;
 P419 c_1004;
 P439 saved_fctx_1005;
 int saved_in_1006;
 rt_int saved_level_1007;
 P427 saved_sym_1008;
 P431 saved_code_1009;
 P417 p_1010;
 P427 b_1011;
 P417 st_1012;
 int ok_1013;
 int known_1014;
 P427 q_1015;
 P427 b_1016;
 rstr v_1017;
 P427 b_1018;
};
struct f_access_of_324fr { int dummy;
 P427 y_323;
 rstr result_;
 P412 p_1019;
 rt_int i_1020;
};
struct f_import_of_327fr { int dummy;
 P417 l_325;
 rstr *name_326;
 P417 result_;
 P417 p_1024;
};
struct f_check_import_330fr { int dummy;
 P427 y_328;
 rt_int line_329;
 int result_;
 P439 c_1025;
 int ro_1026;
 P417 imp_1027;
};
struct f_c_ident_332fr { int dummy;
 rstr *s_331;
 rstr result_;
};
struct f_deref_335fr { int dummy;
 rstr *base_333;
 P421 t_334;
 rstr result_;
};
struct f_is_lvalue_337fr { int dummy;
 P417 e_336;
 int result_;
 P427 y_1028;
};
struct f_lvalue_343fr { int dummy;
 P417 e_338;
 P412 *code_339;
 P421 *t_340;
 P419 *c_341;
 int *ro_342;
 P412 base_1029;
 P421 bt_1030;
 P419 bc_1031;
 P427 y_1032;
};
struct f_select_on_351fr { int dummy;
 rstr *base_344;
 P421 bt_345;
 P417 e_346;
 int *ro_347;
 P412 *code_348;
 P421 *t_349;
 P419 *c_350;
 P417 p_1033;
 P423 f_1034;
};
struct f_index_on_360fr { int dummy;
 rstr *base_352;
 P421 bt_353;
 P417 e_354;
 int *ro_355;
 int lv_356;
 P412 *code_357;
 P421 *t_358;
 P419 *c_359;
 P417 a_1035;
 P421 it_1036;
 rstr i_1037;
 rstr j_1038;
 rstr lo_1039;
 rstr hi_1040;
 rstr i_1041;
 rstr i_1042;
};
struct f_gexpr_364fr { int dummy;
 P417 e_361;
 P421 want_362;
 P421 *t_363;
 rstr result_;
 rt_int k_1043;
 P412 code_1044;
 P419 c_1045;
 int ro_1046;
 P421 bt_1047;
 rt_int i_1048;
 P427 y_1049;
 int ro_1050;
 P417 call_1051;
 P417 fname_1052;
 rstr a_1053;
 rstr a_1054;
 rstr a_1055;
 P417 nm_1056;
 P427 y_1057;
 rstr base_1058;
 rstr base_1059;
};
struct f_copy_node_366fr { int dummy;
 P417 e_365;
 P417 result_;
 P417 x_1060;
};
struct f_wrap_apply_368fr { int dummy;
 P417 e_367;
 P417 result_;
 P417 x_1062;
};
struct f_c_string_370fr { int dummy;
 rstr *s_369;
 rstr result_;
 rt_int n_1063;
 rt_int i_1064;
 rstr r_1068;
 rt_int j_1069;
 rt_int i_1070;
};
struct f_enum_type_of_373fr { int dummy;
 rstr *lit_371;
 rt_int line_372;
 P421 result_;
 P427 y_1074;
 P419 c_1075;
};
struct f_attribute_376fr { int dummy;
 P417 e_374;
 P421 *t_375;
 rstr result_;
 P421 bt_1076;
 P419 c_1077;
 P412 base_1078;
 P427 y_1079;
 P417 st_1080;
};
struct f_gbinop_380fr { int dummy;
 P417 e_377;
 P421 want_378;
 P421 *t_379;
 rstr result_;
 P412 op_1081;
 P421 ta_1082;
 P421 tb_1083;
 P421 hint_1084;
 P427 uy_1085;
 P417 l_1086;
 P417 r_1087;
 P417 call_1088;
 P417 fname_1089;
 rstr s_1090;
 rstr a_1091;
 rstr a_1092;
 rstr b_1093;
 rstr a_1094;
 rstr b_1095;
 P421 wa_1096;
 P421 wb_1097;
 rstr a_1098;
 rstr b_1099;
 rstr dummy_1100;
 rstr a_1101;
 rstr b_1102;
 P421 ct_1103;
 rstr a_1104;
 rstr b_1105;
};
struct f_constructor_384fr { int dummy;
 P417 e_381;
 P421 want_382;
 P421 *t_383;
 rstr result_;
 P417 it_1106;
 P423 f_1107;
 P421 vt_1108;
 P412 s_1109;
 rstr v_1110;
 rstr tmp_1111;
 rstr ct_1112;
 rstr et_1113;
 P412 parts_1114;
 rstr lo_1115;
 rstr hi_1116;
 rstr v_1117;
 rt_int i_1118;
 rstr v_1122;
 rstr tmp_1123;
 P412 parts_1124;
 rstr v_1125;
};
struct f_fits_387fr { int dummy;
 P427 y_385;
 P417 args_386;
 int result_;
 P417 a_1126;
 P425 pm_1127;
 P421 t_1128;
 P431 saved_1129;
 int ok_1130;
 P412 lv_1131;
 P419 lc_1132;
 int ro_1133;
 rstr v_1136;
};
struct f_resolve_overload_392fr { int dummy;
 rstr *name_388;
 P417 args_389;
 int is_stmt_390;
 rt_int line_391;
 P427 result_;
 P427 y_1137;
 P427 first_1138;
 rt_int n_1139;
};
struct f_is_builtin_394fr { int dummy;
 rstr *n_393;
 int result_;
};
struct f_user_op_397fr { int dummy;
 rstr *op_395;
 P417 args_396;
 P427 result_;
 P427 y_1140;
};
struct f_gcall_401fr { int dummy;
 P417 e_398;
 int is_stmt_399;
 P421 *t_400;
 rstr result_;
 P417 fn_1141;
 P417 tt_1142;
 P427 y_1143;
 P412 args_1144;
 P417 a_1145;
 P425 pm_1146;
 P421 lt_1147;
 P421 vt_1148;
 P412 lv_1149;
 P419 lc_1150;
 int ro_1151;
 rt_int i_1152;
 rstr v_1156;
 rstr ct_1157;
 rstr v_1158;
};
struct f_builtin_408fr { int dummy;
 rstr *name_402;
 P417 tt_403;
 P417 args_404;
 rt_int line_405;
 int is_stmt_406;
 P421 *t_407;
 rstr result_;
 P421 at_1159;
 rt_int n_1160;
 rstr a_1161;
 rstr a_1162;
 rstr a_1163;
 rstr a_1164;
 rstr a_1165;
 rstr n1_1166;
 rstr m1_1167;
 rstr a_1168;
 rstr a_1169;
 P417 last_1170;
 rstr a_1171;
 rstr a_1172;
 P412 lv_1173;
 P419 lc_1174;
 int ro_1175;
 P417 last_1176;
 P412 lv_1177;
 P412 dv_1178;
 P419 lc_1179;
 int ro_1180;
 P421 mt_1181;
 P421 dt_1182;
 rstr v_1183;
 P412 lv_1184;
 P419 lc_1185;
 int ro_1186;
 P421 mt_1187;
 P412 lv_1188;
 P412 dv_1189;
 P412 bv_1190;
 P419 lc_1191;
 int ro_1192;
 P421 mt_1193;
 P421 dt_1194;
 P421 bt_1195;
 rstr v_1196;
 rstr v_1197;
 rstr v_1198;
 rstr v_1199;
 rstr a_1200;
};
struct f_translate_410fr { int dummy;
 P417 units_409;
 P417 u_1201;
};
struct f_print_program_411fr { int dummy;
};
static void as_R440(R440 *d, R440 s);
static R440 cp_R440(R440 s);
static int eq_R440(R440 a, R440 b);
static void as_R438(R438 *d, R438 s);
static R438 cp_R438(R438 s);
static int eq_R438(R438 a, R438 b);
static void as_R436(R436 *d, R436 s);
static R436 cp_R436(R436 s);
static int eq_R436(R436 a, R436 b);
static void as_A434(A434 *d, A434 s);
static A434 cp_A434(A434 s);
static int eq_A434(A434 a, A434 b);
static void as_R432(R432 *d, R432 s);
static R432 cp_R432(R432 s);
static int eq_R432(R432 a, R432 b);
static void as_R430(R430 *d, R430 s);
static R430 cp_R430(R430 s);
static int eq_R430(R430 a, R430 b);
static void as_R428(R428 *d, R428 s);
static R428 cp_R428(R428 s);
static int eq_R428(R428 a, R428 b);
static void as_R426(R426 *d, R426 s);
static R426 cp_R426(R426 s);
static int eq_R426(R426 a, R426 b);
static void as_R424(R424 *d, R424 s);
static R424 cp_R424(R424 s);
static int eq_R424(R424 a, R424 b);
static void as_R422(R422 *d, R422 s);
static R422 cp_R422(R422 s);
static int eq_R422(R422 a, R422 b);
static void as_R420(R420 *d, R420 s);
static R420 cp_R420(R420 s);
static int eq_R420(R420 a, R420 b);
static void as_R418(R418 *d, R418 s);
static R418 cp_R418(R418 s);
static int eq_R418(R418 a, R418 b);
static void as_A416(A416 *d, A416 s);
static A416 cp_A416(A416 s);
static int eq_A416(A416 a, A416 b);
static void as_R414(R414 *d, R414 s);
static R414 cp_R414(R414 s);
static int eq_R414(R414 a, R414 b);
static P412 f_mk_3(rstr *s_2);
static rstr f_chs_5(int c_4);
static rstr f_itos_7(rt_int n_6);
static int f_is_letter_9(int c_8);
static int f_is_digit_11(int c_10);
static int f_upper_13(int c_12);
static rstr f_lower_s_15(rstr *s_14);
static rstr f_q_16(void);
static rstr f_new_name_18(rstr *base_17);
static void f_fail_21(rt_int line_19, rstr *msg_20);
static P431 f_new_buffer_22(void);
static void f_put_25(P431 b_23, rstr *s_24);
static void f_emit_27(rstr *s_26);
static void f_print_buffer_29(P431 b_28);
static void f_splice_32(P431 a_30, P431 b_31);
static int f_is_reserved_34(rstr *w_33);
static int f_is_word_op_36(rstr *w_35);
static void f_add_token_40(rt_int kind_37, rstr *s_38, rt_int ival_39);
static void f_lex_line_42(rstr *line_41);
static void f_read_source_43(void);
static P417 f_nn_46(rt_int kind_44, rt_int line_45);
static void f_append_50(P417 *head_47, P417 *tail_48, P417 x_49);
static rt_int f_list_len_52(P417 l_51);
static rt_int f_cur_line_53(void);
static int f_at_kw_55(rstr *w_54);
static int f_at_op_57(rstr *w_56);
static int f_at_kind_59(rt_int k_58);
static rt_int f_kind_at_61(rt_int k_60);
static P412 f_text_at_63(rt_int k_62);
static void f_perror_65(rstr *msg_64);
static int f_accept_kw_67(rstr *w_66);
static int f_accept_op_69(rstr *w_68);
static void f_expect_kw_71(rstr *w_70);
static void f_expect_op_73(rstr *w_72);
static P412 f_expect_id_74(void);
static P417 f_name_node_75(void);
static P417 f_id_list_76(void);
static P417 f_p_subtype_77(void);
static P417 f_actual_params_78(void);
static int f_is_type_word_80(rstr *w_79);
static P417 f_actual_tt_81(void);
static P417 f_binop_86(P412 op_82, P417 l_83, P417 r_84, rt_int line_85);
static P417 f_expr_87(void);
static P417 f_expr_and_88(void);
static P417 f_expr_not_89(void);
static int f_is_rel_91(rstr *s_90);
static P417 f_expr_rel_92(void);
static P417 f_expr_add_93(void);
static P417 f_expr_mul_94(void);
static P417 f_expr_pow_95(void);
static P417 f_expr_prefix_96(void);
static P417 f_postfix_97(void);
static P417 f_primary_98(void);
static P417 f_constructor_item_99(void);
static int f_at_body_end_100(void);
static P417 f_body_101(void);
static P417 f_body_element_102(void);
static P417 f_declaration_103(void);
static P417 f_object_decl_104(void);
static P417 f_abbrev_decl_105(void);
static P417 f_type_decl_106(void);
static rt_int f_mode_of_108(rstr *w_107);
static P417 f_formal_params_109(void);
static int f_imports_list_111(P417 owner_110);
static int f_is_definable_113(rstr *w_112);
static P412 f_definable_name_114(void);
static P417 f_subprogram_decl_115(void);
static P417 f_capsule_decl_116(void);
static P417 f_formal_tt_117(void);
static P417 f_generic_decl_118(void);
static P417 f_task_decl_119(void);
static P417 f_expose_decl_120(void);
static int f_is_compound_kw_122(rstr *w_121);
static P417 f_statement_123(void);
static P417 f_unlabeled_statement_124(void);
static P417 f_arm_128(P417 cond_125, P417 b_126, rt_int line_127);
static P417 f_if_stmt_129(void);
static P417 f_case_stmt_130(void);
static P417 f_repeat_stmt_131(void);
static P417 f_guard_stmt_132(void);
static P417 f_program_133(void);
static rt_int f_hash_135(rstr *s_134);
static P427 f_lookup_137(rstr *name_136);
static P427 f_lookup_decl_139(P417 d_138);
static void f_define_142(P427 y_140, rt_int line_141);
static int f_overloadable_144(P427 y_143);
static int f_same_signature_147(P425 a_145, P425 b_146);
static void f_open_scope_148(void);
static void f_close_scope_149(void);
static P427 f_new_sym_152(rt_int kind_150, P412 name_151);
static P421 f_new_typ_154(rt_int kind_153);
static P419 f_new_cons_155(void);
static int f_same_lits_158(P417 a_156, P417 b_157);
static int f_same_161(P421 a_159, P421 b_160);
static rstr f_kind_name_163(P421 t_162);
static void f_check_type_167(P421 got_164, P421 want_165, rt_int line_166);
static rstr f_ctype_169(P421 t_168);
static rstr f_field_decls_171(P421 t_170);
static void f_declare_ctype_173(P421 t_172);
static void f_init_ascii_174(void);
static rt_int f_lit_index_177(P417 lits_175, rstr *name_176);
static P421 f_resolve_subtype_180(P417 st_178, P419 *c_179);
static int f_opened_182(P421 t_181);
static rstr f_replace_all_186(rstr *s_183, rstr *pat_184, rstr *r_185);
static rstr f_subst_188(rstr *s_187);
static P421 f_new_type_192(P427 y_189, P417 st_190, P419 *c_191);
static void f_init_storage_196(rstr *lval_193, P421 t_194, P419 c_195);
static rt_int f_manifest_199(P417 e_197, int *ok_198);
static rstr f_mcopy_201(P421 t_200);
static int f_composite_203(P421 t_202);
static rstr f_assign_code_208(rstr *lval_204, P421 t_205, rstr *v_206, P419 c_207);
static rstr f_copy_code_211(P421 t_209, rstr *v_210);
static rstr f_eq_code_215(P421 t_212, rstr *a_213, rstr *b_214);
static rstr f_elem_assign_219(rstr *lval_216, P421 t_217, rstr *v_218);
static int f_seen_name_222(P429 l_220, rstr *s_221);
static void f_emit_helpers_223(void);
static void f_helper_bodies_225(P421 t_224);
static void f_declare_body_227(P417 elems_226);
static void f_manifest_const_229(P417 d_228);
static int f_exported_233(P417 d_230, rstr *name_231, int *ro_232);
static P427 f_copy_sym_235(P427 y_234);
static void f_gen_capsule_237(P417 d_236);
static void f_gen_expose_239(P417 d_238);
static void f_finish_ptr_241(P421 t_240);
static void f_declare_subprogram_243(P417 d_242);
static P427 f_build_subprogram_245(P417 d_244);
static void f_element_247(P417 e_246);
static rstr f_storage_250(rstr *name_248, P421 t_249);
static void f_bind_253(P427 y_251, rstr *access_252);
static void f_var_decl_255(P417 d_254);
static void f_const_decl_257(P417 d_256);
static void f_subprogram_259(P417 d_258);
static void f_gen_subprogram_262(P417 d_260, P427 y_261);
static void f_body_elements_264(P417 elems_263);
static void f_gen_body_266(P417 elems_265);
static void f_pop_frames_268(rt_int upto_267);
static void f_push_cleanup_270(rstr *s_269);
static void f_pop_cleanup_271(void);
static void f_gen_statement_273(P417 s_272);
static void f_st_assign_275(P417 s_274);
static void f_st_call_277(P417 s_276);
static void f_st_if_279(P417 s_278);
static void f_st_case_281(P417 s_280);
static void f_st_repeat_283(P417 s_282);
static void f_st_exit_285(P417 s_284);
static void f_st_return_287(P417 s_286);
static rstr f_exc_id_290(rstr *name_288, rt_int line_289);
static void f_st_guard_292(P417 s_291);
static void f_st_alloc_294(P417 s_293);
static rstr f_act_ref_296(P417 e_295);
static void f_st_create_298(P417 s_297);
static rstr f_wait_alt_302(P417 inv_299, rstr *arr_300, rt_int i_301);
static void f_st_wait_304(P417 s_303);
static void f_st_region_306(P417 s_305);
static P417 f_gparam_309(P417 g_307, rstr *name_308);
static P427 f_bind_sym_311(P417 p_310);
static int f_same_binds_314(P427 a_312, P427 b_313);
static int f_same_binding_317(P427 a_315, P427 b_316);
static P427 f_instantiate_322(P427 g_318, P417 tt_319, P417 args_320, rt_int line_321);
static rstr f_access_of_324(P427 y_323);
static P417 f_import_of_327(P417 l_325, rstr *name_326);
static int f_check_import_330(P427 y_328, rt_int line_329);
static rstr f_c_ident_332(rstr *s_331);
static rstr f_deref_335(rstr *base_333, P421 t_334);
static int f_is_lvalue_337(P417 e_336);
static void f_lvalue_343(P417 e_338, P412 *code_339, P421 *t_340, P419 *c_341, int *ro_342);
static void f_select_on_351(rstr *base_344, P421 bt_345, P417 e_346, int *ro_347, P412 *code_348, P421 *t_349, P419 *c_350);
static void f_index_on_360(rstr *base_352, P421 bt_353, P417 e_354, int *ro_355, int lv_356, P412 *code_357, P421 *t_358, P419 *c_359);
static rstr f_gexpr_364(P417 e_361, P421 want_362, P421 *t_363);
static P417 f_copy_node_366(P417 e_365);
static P417 f_wrap_apply_368(P417 e_367);
static rstr f_c_string_370(rstr *s_369);
static P421 f_enum_type_of_373(rstr *lit_371, rt_int line_372);
static rstr f_attribute_376(P417 e_374, P421 *t_375);
static rstr f_gbinop_380(P417 e_377, P421 want_378, P421 *t_379);
static rstr f_constructor_384(P417 e_381, P421 want_382, P421 *t_383);
static int f_fits_387(P427 y_385, P417 args_386);
static P427 f_resolve_overload_392(rstr *name_388, P417 args_389, int is_stmt_390, rt_int line_391);
static int f_is_builtin_394(rstr *n_393);
static P427 f_user_op_397(rstr *op_395, P417 args_396);
static rstr f_gcall_401(P417 e_398, int is_stmt_399, P421 *t_400);
static rstr f_builtin_408(rstr *name_402, P417 tt_403, P417 args_404, rt_int line_405, int is_stmt_406, P421 *t_407);
static void f_translate_410(P417 units_409);
static void f_print_program_411(void);
static int ex_compile_error_1;
static P415 g_toks_441;
static rt_int g_ntoks_442;
static rt_int g_tpos_443;
static rt_int g_src_line_444;
static P433 g_table_445;
static rt_int g_depth_446;
static P427 g_scope_stack_447;
static P421 g_all_types_448;
static rt_int g_serial_449;
static P431 g_out_types_450;
static P431 g_out_helpers_451;
static P431 g_out_protos_452;
static P431 g_out_globals_453;
static P431 g_out_funcs_454;
static P431 g_out_init_455;
static P431 g_out_excs_456;
static P431 g_code_457;
static P431 g_fields_buf_458;
static int g_in_func_459;
static rt_int g_cur_level_460;
static P439 g_fctx_461;
static P437 g_caps_462;
static P429 g_psub_463;
static P412 g_st_field_464;
static P431 g_out_frames_465;
static P427 g_func_sym_466;
static P435 g_exits_467;
static rt_int g_frames_468;
static P429 g_handlers_469;
static P429 g_cleanups_470;
static rt_int g_trial_471;
static P429 g_mcopies_472;
static P421 g_ty_int_473;
static P421 g_ty_bool_474;
static P421 g_ty_float_475;
static P421 g_ty_ascii_476;
static P421 g_ty_string_477;
static P421 g_ty_void_478;
static P421 g_ty_file_479;
static P421 g_ty_nil_480;
static P421 g_ty_lock_481;
static P421 g_ty_act_482;
static P419 g_no_cons_483;
static P412 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_484 = NULL;
{ rstr *cell485 = rt_alloc(sizeof(rstr));
rt_int pv486 = ((*F->s_2)).len;
(*cell485) = rt_str_new(pv486);
rt_str_assign(&(*cell485), (*F->s_2));
F->t_484 = cell485;
}
F->result_ = F->t_484;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_487 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_487, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_487;
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
F->letters_488 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_488, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_489 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_490 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_490, (*F->s_14));
{ rt_int lo492 = ((rt_int)1LL), hi493 = ((*F->s_14)).len;
for (rt_int it494 = lo492; it494 <= hi493; it494++) {
F->i_491 = it494;
if (((65 <= rt_str_get(F->r_490, F->i_491)) && (rt_str_get(F->r_490, F->i_491) <= 90))) {
(*rt_str_at(&F->r_490, F->i_491)) = rt_str_get(F->letters_489, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_490, F->i_491)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_490;
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
g_serial_449 = rt_add(g_serial_449, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_17), f_itos_7(g_serial_449));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_21(rt_int line_19, rstr *msg_20) {
  struct f_fail_21fr *F = rt_alloc(sizeof *F);
F->line_19 = line_19;
F->msg_20 = msg_20;
if ((g_trial_471 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_19)), rt_str(": ", 2)), (*F->msg_20)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P431 f_new_buffer_22(void) {
  struct f_new_buffer_22fr *F = rt_alloc(sizeof *F);
F->b_495 = NULL;
{ R432 *cell496 = rt_alloc(sizeof(R432));
(*cell496).head = NULL;
(*cell496).tail = NULL;
F->b_495 = cell496;
}
F->result_ = F->b_495;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_25(P431 b_23, rstr *s_24) {
  struct f_put_25fr *F = rt_alloc(sizeof *F);
F->b_23 = b_23;
F->s_24 = s_24;
F->l_497 = NULL;
{ R430 *cell498 = rt_alloc(sizeof(R430));
(*cell498).s = NULL;
(*cell498).next = NULL;
F->l_497 = cell498;
}
(*(P429)rt_nil_check(F->l_497)).s = f_mk_3(&(*F->s_24));
if (((*(P431)rt_nil_check(F->b_23)).tail == NULL)) {
(*(P431)rt_nil_check(F->b_23)).head = F->l_497;
} else {
(*(P429)rt_nil_check((*(P431)rt_nil_check(F->b_23)).tail)).next = F->l_497;
}
(*(P431)rt_nil_check(F->b_23)).tail = F->l_497;
ret_:
  return;
}

static void f_emit_27(rstr *s_26) {
  struct f_emit_27fr *F = rt_alloc(sizeof *F);
F->s_26 = s_26;
f_put_25(g_code_457, &(*F->s_26));
ret_:
  return;
}

static void f_print_buffer_29(P431 b_28) {
  struct f_print_buffer_29fr *F = rt_alloc(sizeof *F);
F->b_28 = b_28;
F->l_499 = NULL;
F->l_499 = (*(P431)rt_nil_check(F->b_28)).head;
while ((F->l_499 != NULL)) {
rt_putln((*(P412)rt_nil_check((*(P429)rt_nil_check(F->l_499)).s)));
F->l_499 = (*(P429)rt_nil_check(F->l_499)).next;
}
ret_:
  return;
}

static void f_splice_32(P431 a_30, P431 b_31) {
  struct f_splice_32fr *F = rt_alloc(sizeof *F);
F->a_30 = a_30;
F->b_31 = b_31;
if (((*(P431)rt_nil_check(F->b_31)).head == NULL)) {
goto ret_;
}
if (((*(P431)rt_nil_check(F->a_30)).tail == NULL)) {
(*(P431)rt_nil_check(F->a_30)).head = (*(P431)rt_nil_check(F->b_31)).head;
} else {
(*(P429)rt_nil_check((*(P431)rt_nil_check(F->a_30)).tail)).next = (*(P431)rt_nil_check(F->b_31)).head;
}
(*(P431)rt_nil_check(F->a_30)).tail = (*(P431)rt_nil_check(F->b_31)).tail;
(*(P431)rt_nil_check(F->b_31)).head = NULL;
(*(P431)rt_nil_check(F->b_31)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_34(rstr *w_33) {
  struct f_is_reserved_34fr *F = rt_alloc(sizeof *F);
F->w_33 = w_33;
{ rstr sel500 = (*F->w_33);
if (0 || rt_str_eq(sel500, rt_str("ABBREV", 6)) || rt_str_eq(sel500, rt_str("ABNORMAL", 8)) || rt_str_eq(sel500, rt_str("ALL", 3)) || rt_str_eq(sel500, rt_str("ALLOC", 5)) || rt_str_eq(sel500, rt_str("ASSERT", 6)) || rt_str_eq(sel500, rt_str("BEGIN", 5)) || rt_str_eq(sel500, rt_str("BY", 2)) || rt_str_eq(sel500, rt_str("CAPSULE", 7)) || rt_str_eq(sel500, rt_str("CASE", 4)) || rt_str_eq(sel500, rt_str("CONST", 5)) || rt_str_eq(sel500, rt_str("CREATE", 6)) || rt_str_eq(sel500, rt_str("DO", 2)) || rt_str_eq(sel500, rt_str("ELSE", 4)) || rt_str_eq(sel500, rt_str("ELSEIF", 6)) || rt_str_eq(sel500, rt_str("END", 3)) || rt_str_eq(sel500, rt_str("EXCEPTION", 9)) || rt_str_eq(sel500, rt_str("EXIT", 4)) || rt_str_eq(sel500, rt_str("EXPORTS", 7)) || rt_str_eq(sel500, rt_str("EXPOSE", 6)) || rt_str_eq(sel500, rt_str("EXTERNAL", 8)) || rt_str_eq(sel500, rt_str("FOR", 3)) || rt_str_eq(sel500, rt_str("FROM", 4)) || rt_str_eq(sel500, rt_str("FUNC", 4)) || rt_str_eq(sel500, rt_str("GENERIC", 7)) || rt_str_eq(sel500, rt_str("GOTO", 4)) || rt_str_eq(sel500, rt_str("GUARD", 5)) || rt_str_eq(sel500, rt_str("IF", 2)) || rt_str_eq(sel500, rt_str("IMPORTS", 7)) || rt_str_eq(sel500, rt_str("LOCATION", 8)) || rt_str_eq(sel500, rt_str("NAMED", 5)) || rt_str_eq(sel500, rt_str("NEEDS", 5)) || rt_str_eq(sel500, rt_str("NEW", 3)) || rt_str_eq(sel500, rt_str("NONE", 4)) || rt_str_eq(sel500, rt_str("OUT", 3)) || rt_str_eq(sel500, rt_str("OF", 2)) || rt_str_eq(sel500, rt_str("PRAG", 4)) || rt_str_eq(sel500, rt_str("PROC", 4)) || rt_str_eq(sel500, rt_str("RAISE", 5)) || rt_str_eq(sel500, rt_str("READONLY", 8)) || rt_str_eq(sel500, rt_str("REVERSE", 7)) || rt_str_eq(sel500, rt_str("REGION", 6)) || rt_str_eq(sel500, rt_str("RENAMING", 8)) || rt_str_eq(sel500, rt_str("REP", 3)) || rt_str_eq(sel500, rt_str("REPEAT", 6)) || rt_str_eq(sel500, rt_str("RERAISE", 7)) || rt_str_eq(sel500, rt_str("RETURN", 6)) || rt_str_eq(sel500, rt_str("SUBTYPE", 7)) || rt_str_eq(sel500, rt_str("TASK", 4)) || rt_str_eq(sel500, rt_str("THEN", 4)) || rt_str_eq(sel500, rt_str("TO", 2)) || rt_str_eq(sel500, rt_str("TYPE", 4)) || rt_str_eq(sel500, rt_str("VAR", 3)) || rt_str_eq(sel500, rt_str("WAIT", 4)) || rt_str_eq(sel500, rt_str("WHEN", 4)) || rt_str_eq(sel500, rt_str("WHILE", 5))) {
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
F->t_501 = NULL;
{ R414 *cell502 = rt_alloc(sizeof(R414));
(*cell502).s = NULL;
F->t_501 = cell502;
}
(*(P413)rt_nil_check(F->t_501)).kind = F->kind_37;
(*(P413)rt_nil_check(F->t_501)).line = g_src_line_444;
(*(P413)rt_nil_check(F->t_501)).ival = F->ival_39;
(*(P413)rt_nil_check(F->t_501)).s = f_mk_3(&(*F->s_38));
g_ntoks_442 = rt_add(g_ntoks_442, ((rt_int)1LL));
(*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_ntoks_442, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo] = F->t_501;
ret_:
  return;
}

static void f_lex_line_42(rstr *line_41) {
  struct f_lex_line_42fr *F = rt_alloc(sizeof *F);
F->line_41 = line_41;
F->i_503 = ((rt_int)1LL);
F->j_504 = ((rt_int)0LL);
F->n_505 = ((*F->line_41)).len;
while ((F->i_503 <= F->n_505)) {
F->c_506 = rt_str_get((*F->line_41), F->i_503);
if (((((F->c_506 == 32) || (F->c_506 == 9)) || (F->c_506 == 13)) || (F->c_506 == 12))) {
F->i_503 = rt_add(F->i_503, ((rt_int)1LL));
} else if ((F->c_506 == 37)) {
F->i_503 = rt_add(F->n_505, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_506)) {
F->j_504 = F->i_503;
while (((F->j_504 <= F->n_505) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_504)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_504))) || (rt_str_get((*F->line_41), F->j_504) == 95)))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
{
F->w_507 = rt_str_new(rt_sub(F->j_504, F->i_503));
rt_str_assign(&F->w_507, rt_str_slice((*F->line_41), F->i_503, rt_sub(F->j_504, ((rt_int)1LL))));
{ rt_int lo509 = ((rt_int)1LL), hi510 = (F->w_507).len;
for (rt_int it511 = lo509; it511 <= hi510; it511++) {
F->k_508 = it511;
(*rt_str_at(&F->w_507, F->k_508)) = f_upper_13(rt_str_get(F->w_507, F->k_508));
}
}
if (rt_str_eq(F->w_507, rt_str("PRAGMAT", 7))) {
while (((F->j_504 <= F->n_505) && (rt_str_get((*F->line_41), F->j_504) != 59))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
} else if (f_is_reserved_34(&F->w_507)) {
f_add_token_40(((rt_int)2LL), &F->w_507, ((rt_int)0LL));
} else if (f_is_word_op_36(&F->w_507)) {
f_add_token_40(((rt_int)3LL), &F->w_507, ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)1LL), &F->w_507, ((rt_int)0LL));
}
}
F->i_503 = F->j_504;
} else if (f_is_digit_11(F->c_506)) {
F->j_504 = F->i_503;
while (((F->j_504 <= F->n_505) && f_is_digit_11(rt_str_get((*F->line_41), F->j_504)))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
if ((((F->j_504 < F->n_505) && (rt_str_get((*F->line_41), F->j_504) == 46)) && f_is_digit_11(rt_str_get((*F->line_41), rt_add(F->j_504, ((rt_int)1LL)))))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
while (((F->j_504 <= F->n_505) && f_is_digit_11(rt_str_get((*F->line_41), F->j_504)))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
if (((F->j_504 <= F->n_505) && ((rt_str_get((*F->line_41), F->j_504) == 69) || (rt_str_get((*F->line_41), F->j_504) == 101)))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
if (((F->j_504 <= F->n_505) && ((rt_str_get((*F->line_41), F->j_504) == 43) || (rt_str_get((*F->line_41), F->j_504) == 45)))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
while (((F->j_504 <= F->n_505) && f_is_digit_11(rt_str_get((*F->line_41), F->j_504)))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
}
f_add_token_40(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_503, rt_sub(F->j_504, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_503, rt_sub(F->j_504, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_41), F->i_503, rt_sub(F->j_504, ((rt_int)1LL)))));
}
F->i_503 = F->j_504;
} else if ((F->c_506 == 39)) {
F->j_504 = rt_add(F->i_503, ((rt_int)1LL));
if (((F->j_504 > F->n_505) || (!f_is_letter_9(rt_str_get((*F->line_41), F->j_504))))) {
f_fail_21(g_src_line_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_504 <= F->n_505) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_504)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_504))) || (rt_str_get((*F->line_41), F->j_504) == 95)))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
{
F->w_512 = rt_str_new(rt_sub(rt_sub(F->j_504, F->i_503), ((rt_int)1LL)));
rt_str_assign(&F->w_512, rt_str_slice((*F->line_41), rt_add(F->i_503, ((rt_int)1LL)), rt_sub(F->j_504, ((rt_int)1LL))));
{ rt_int lo514 = ((rt_int)1LL), hi515 = (F->w_512).len;
for (rt_int it516 = lo514; it516 <= hi515; it516++) {
F->k_513 = it516;
(*rt_str_at(&F->w_512, F->k_513)) = f_upper_13(rt_str_get(F->w_512, F->k_513));
}
}
f_add_token_40(((rt_int)6LL), &F->w_512, ((rt_int)0LL));
}
F->i_503 = F->j_504;
} else if ((F->c_506 == 34)) {
F->j_504 = rt_add(F->i_503, ((rt_int)1LL));
while (((F->j_504 <= F->n_505) && (rt_str_get((*F->line_41), F->j_504) != 34))) {
F->j_504 = rt_add(F->j_504, ((rt_int)1LL));
}
if ((F->j_504 > F->n_505)) {
f_fail_21(g_src_line_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_40(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), rt_add(F->i_503, ((rt_int)1LL)), rt_sub(F->j_504, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_503 = rt_add(F->j_504, ((rt_int)1LL));
} else {
{
F->two_517 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_517, rt_str("  ", 2));
(*rt_str_at(&F->two_517, ((rt_int)1LL))) = F->c_506;
if ((F->i_503 < F->n_505)) {
(*rt_str_at(&F->two_517, ((rt_int)2LL))) = rt_str_get((*F->line_41), rt_add(F->i_503, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_517, rt_str(":=", 2)) || rt_str_eq(F->two_517, rt_str("=>", 2))) || rt_str_eq(F->two_517, rt_str("..", 2))) || rt_str_eq(F->two_517, rt_str("**", 2))) || rt_str_eq(F->two_517, rt_str("/=", 2))) || rt_str_eq(F->two_517, rt_str("<=", 2))) || rt_str_eq(F->two_517, rt_str(">=", 2)))) {
f_add_token_40(((rt_int)3LL), &F->two_517, ((rt_int)0LL));
F->i_503 = rt_add(F->i_503, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_506 == 40) || (F->c_506 == 41)) || (F->c_506 == 91)) || (F->c_506 == 93)) || (F->c_506 == 44)) || (F->c_506 == 58)) || (F->c_506 == 59)) || (F->c_506 == 46)) || (F->c_506 == 35)) || (F->c_506 == 43)) || (F->c_506 == 45)) || (F->c_506 == 42)) || (F->c_506 == 47)) || (F->c_506 == 38)) || (F->c_506 == 61)) || (F->c_506 == 60)) || (F->c_506 == 62))) {
f_add_token_40(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_506); b_; }), ((rt_int)0LL));
F->i_503 = rt_add(F->i_503, ((rt_int)1LL));
} else {
f_fail_21(g_src_line_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_518 = rt_str_new(rt_sizeln());
rt_readln(&F->line_518);
g_src_line_444 = rt_add(g_src_line_444, ((rt_int)1LL));
f_lex_line_42(&F->line_518);
}
f_add_token_40(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P417 f_nn_46(rt_int kind_44, rt_int line_45) {
  struct f_nn_46fr *F = rt_alloc(sizeof *F);
F->kind_44 = kind_44;
F->line_45 = line_45;
F->x_519 = NULL;
{ R418 *cell520 = rt_alloc(sizeof(R418));
(*cell520).name = NULL;
(*cell520).tag = NULL;
(*cell520).a = NULL;
(*cell520).b = NULL;
(*cell520).c = NULL;
(*cell520).d = NULL;
(*cell520).e = NULL;
(*cell520).next = NULL;
F->x_519 = cell520;
}
(*(P417)rt_nil_check(F->x_519)).kind = F->kind_44;
(*(P417)rt_nil_check(F->x_519)).line = F->line_45;
F->result_ = F->x_519;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_50(P417 *head_47, P417 *tail_48, P417 x_49) {
  struct f_append_50fr *F = rt_alloc(sizeof *F);
F->head_47 = head_47;
F->tail_48 = tail_48;
F->x_49 = x_49;
if (((*F->head_47) == NULL)) {
(*F->head_47) = F->x_49;
} else {
(*(P417)rt_nil_check((*F->tail_48))).next = F->x_49;
}
(*F->tail_48) = F->x_49;
while (((*(P417)rt_nil_check((*F->tail_48))).next != NULL)) {
(*F->tail_48) = (*(P417)rt_nil_check((*F->tail_48))).next;
}
ret_:
  return;
}

static rt_int f_list_len_52(P417 l_51) {
  struct f_list_len_52fr *F = rt_alloc(sizeof *F);
F->l_51 = l_51;
F->n_521 = ((rt_int)0LL);
F->p_522 = NULL;
F->p_522 = F->l_51;
while ((F->p_522 != NULL)) {
F->n_521 = rt_add(F->n_521, ((rt_int)1LL));
F->p_522 = (*(P417)rt_nil_check(F->p_522)).next;
}
F->result_ = F->n_521;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_53(void) {
  struct f_cur_line_53fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_55(rstr *w_54) {
  struct f_at_kw_55fr *F = rt_alloc(sizeof *F);
F->w_54 = w_54;
F->result_ = (((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)), (*F->w_54)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_57(rstr *w_56) {
  struct f_at_op_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_59(rt_int k_58) {
  struct f_at_kind_59fr *F = rt_alloc(sizeof *F);
F->k_58 = k_58;
F->result_ = ((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).kind == F->k_58);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_61(rt_int k_60) {
  struct f_kind_at_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
if ((rt_add(g_tpos_443, F->k_60) > g_ntoks_442)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(rt_add(g_tpos_443, F->k_60), (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P412 f_text_at_63(rt_int k_62) {
  struct f_text_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_443, F->k_62) > g_ntoks_442)) {
F->result_ = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_ntoks_442, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
goto ret_;
}
F->result_ = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(rt_add(g_tpos_443, F->k_62), (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_65(rstr *msg_64) {
  struct f_perror_65fr *F = rt_alloc(sizeof *F);
F->msg_64 = msg_64;
f_fail_21((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_64), rt_str(" (at ", 5)), (*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_67(rstr *w_66) {
  struct f_accept_kw_67fr *F = rt_alloc(sizeof *F);
F->w_66 = w_66;
if (f_at_kw_55(&(*F->w_66))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
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
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
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
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_73(rstr *w_72) {
  struct f_expect_op_73fr *F = rt_alloc(sizeof *F);
F->w_72 = w_72;
if ((!f_at_op_57(&(*F->w_72)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
ret_:
  return;
}

static P412 f_expect_id_74(void) {
  struct f_expect_id_74fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->result_ = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(rt_sub(g_tpos_443, ((rt_int)1LL)), (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_name_node_75(void) {
  struct f_name_node_75fr *F = rt_alloc(sizeof *F);
F->x_523 = NULL;
F->x_523 = f_nn_46(((rt_int)7LL), f_cur_line_53());
(*(P417)rt_nil_check(F->x_523)).name = f_expect_id_74();
F->result_ = F->x_523;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_id_list_76(void) {
  struct f_id_list_76fr *F = rt_alloc(sizeof *F);
F->head_524 = NULL;
F->tail_525 = NULL;
f_append_50(&F->head_524, &F->tail_525, f_name_node_75());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_524, &F->tail_525, f_name_node_75());
}
F->result_ = F->head_524;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_p_subtype_77(void) {
  struct f_p_subtype_77fr *F = rt_alloc(sizeof *F);
F->line_526 = f_cur_line_53();
F->x_527 = NULL;
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->x_527 = f_nn_46(((rt_int)81LL), F->line_526);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P417)rt_nil_check(F->x_527)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_527;
goto ret_;
}
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_528 = rt_str_copy((*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)));
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
if (rt_str_eq(F->w_528, rt_str("ARRAY", 5))) {
F->x_527 = f_nn_46(((rt_int)74LL), F->line_526);
{
F->head_529 = NULL;
F->tail_530 = NULL;
f_append_50(&F->head_529, &F->tail_530, f_p_subtype_77());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_529, &F->tail_530, f_p_subtype_77());
}
(*(P417)rt_nil_check(F->x_527)).a = F->head_529;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P417)rt_nil_check(F->x_527)).b = f_p_subtype_77();
} else if ((rt_str_eq(F->w_528, rt_str("RECORD", 6)) || rt_str_eq(F->w_528, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_528, rt_str("RECORD", 6))) {
F->x_527 = f_nn_46(((rt_int)75LL), F->line_526);
} else {
F->x_527 = f_nn_46(((rt_int)76LL), F->line_526);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_531 = NULL;
F->tail_532 = NULL;
F->more_533 = 1;
while (F->more_533) {
F->names_534 = NULL;
F->names_534 = f_id_list_76();
F->st_535 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_535 = f_p_subtype_77();
while ((F->names_534 != NULL)) {
F->cmp_536 = NULL;
F->cmp_536 = f_nn_46(((rt_int)63LL), (*(P417)rt_nil_check(F->names_534)).line);
(*(P417)rt_nil_check(F->cmp_536)).name = (*(P417)rt_nil_check(F->names_534)).name;
(*(P417)rt_nil_check(F->cmp_536)).a = F->st_535;
f_append_50(&F->head_531, &F->tail_532, F->cmp_536);
F->names_534 = (*(P417)rt_nil_check(F->names_534)).next;
}
F->more_533 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P417)rt_nil_check(F->x_527)).a = F->head_531;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_528, rt_str("UNION", 5)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_527)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_528, rt_str("ENUM", 4))) {
F->x_527 = f_nn_46(((rt_int)72LL), F->line_526);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_537 = NULL;
F->tail_538 = NULL;
F->more_539 = 1;
while (F->more_539) {
F->lit_540 = NULL;
F->lit_540 = f_nn_46(((rt_int)4LL), F->line_526);
if ((!f_at_kind_59(((rt_int)6LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P417)rt_nil_check(F->lit_540)).name = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
f_append_50(&F->head_537, &F->tail_538, F->lit_540);
F->more_539 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P417)rt_nil_check(F->x_527)).a = F->head_537;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_527)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P417)rt_nil_check(F->x_527)).c = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_528, rt_str("STRING", 6)) || rt_str_eq(F->w_528, rt_str("SET", 3))) || rt_str_eq(F->w_528, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_528, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_528, rt_str("STRING", 6))) {
F->x_527 = f_nn_46(((rt_int)73LL), F->line_526);
} else if (rt_str_eq(F->w_528, rt_str("SET", 3))) {
F->x_527 = f_nn_46(((rt_int)77LL), F->line_526);
} else if (rt_str_eq(F->w_528, rt_str("MAILBOX", 7))) {
F->x_527 = f_nn_46(((rt_int)78LL), F->line_526);
} else {
F->x_527 = f_nn_46(((rt_int)79LL), F->line_526);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P417)rt_nil_check(F->x_527)).a = f_p_subtype_77();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_527)).b = f_actual_params_78();
}
} else if (rt_str_eq(F->w_528, rt_str("INT", 3))) {
F->x_527 = f_nn_46(((rt_int)70LL), F->line_526);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_527)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P417)rt_nil_check(F->x_527)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_528, rt_str("FLOAT", 5))) {
F->x_527 = f_nn_46(((rt_int)71LL), F->line_526);
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_527)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_527)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P417)rt_nil_check(F->x_527)).c = f_expr_87();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_527 = f_nn_46(((rt_int)80LL), F->line_526);
(*(P417)rt_nil_check(F->x_527)).name = f_mk_3(&F->w_528);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_527)).a = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_527)).b = f_actual_params_78();
(*(P417)rt_nil_check(F->x_527)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_527;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_actual_params_78(void) {
  struct f_actual_params_78fr *F = rt_alloc(sizeof *F);
F->head_541 = NULL;
F->tail_542 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_50(&F->head_541, &F->tail_542, f_expr_87());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_541, &F->tail_542, f_expr_87());
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_541;
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

static P417 f_actual_tt_81(void) {
  struct f_actual_tt_81fr *F = rt_alloc(sizeof *F);
F->head_543 = NULL;
F->tail_544 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_545 = 1;
while (F->more_545) {
if ((f_at_kind_59(((rt_int)1LL)) && f_is_type_word_80(&(*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s))))) {
f_append_50(&F->head_543, &F->tail_544, f_p_subtype_77());
} else {
f_append_50(&F->head_543, &F->tail_544, f_expr_87());
}
F->more_545 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_543;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_binop_86(P412 op_82, P417 l_83, P417 r_84, rt_int line_85) {
  struct f_binop_86fr *F = rt_alloc(sizeof *F);
F->op_82 = op_82;
F->l_83 = l_83;
F->r_84 = r_84;
F->line_85 = line_85;
F->x_546 = NULL;
F->x_546 = f_nn_46(((rt_int)9LL), F->line_85);
(*(P417)rt_nil_check(F->x_546)).name = F->op_82;
(*(P417)rt_nil_check(F->x_546)).a = F->l_83;
(*(P417)rt_nil_check(F->x_546)).b = F->r_84;
F->result_ = F->x_546;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expr_87(void) {
  struct f_expr_87fr *F = rt_alloc(sizeof *F);
F->l_547 = NULL;
F->l_547 = f_expr_and_88();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_548 = NULL;
F->op_548 = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
F->line_549 = f_cur_line_53();
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->l_547 = f_binop_86(F->op_548, F->l_547, f_expr_and_88(), F->line_549);
}
F->result_ = F->l_547;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expr_and_88(void) {
  struct f_expr_and_88fr *F = rt_alloc(sizeof *F);
F->l_550 = NULL;
F->l_550 = f_expr_not_89();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_551 = f_cur_line_53();
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->l_550 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_550, f_expr_not_89(), F->line_551);
}
F->result_ = F->l_550;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expr_not_89(void) {
  struct f_expr_not_89fr *F = rt_alloc(sizeof *F);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_552 = NULL;
F->x_552 = f_nn_46(((rt_int)8LL), f_cur_line_53());
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_552)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P417)rt_nil_check(F->x_552)).a = f_expr_not_89();
F->result_ = F->x_552;
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

static P417 f_expr_rel_92(void) {
  struct f_expr_rel_92fr *F = rt_alloc(sizeof *F);
F->l_553 = NULL;
F->l_553 = f_expr_add_93();
if ((f_at_kind_59(((rt_int)3LL)) && f_is_rel_91(&(*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s))))) {
F->op_554 = NULL;
F->op_554 = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
F->line_555 = f_cur_line_53();
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->l_553 = f_binop_86(F->op_554, F->l_553, f_expr_add_93(), F->line_555);
}
F->result_ = F->l_553;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expr_add_93(void) {
  struct f_expr_add_93fr *F = rt_alloc(sizeof *F);
F->l_556 = NULL;
F->l_556 = f_expr_mul_94();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_557 = NULL;
F->op_557 = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
F->line_558 = f_cur_line_53();
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->l_556 = f_binop_86(F->op_557, F->l_556, f_expr_mul_94(), F->line_558);
}
F->result_ = F->l_556;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expr_mul_94(void) {
  struct f_expr_mul_94fr *F = rt_alloc(sizeof *F);
F->l_559 = NULL;
F->l_559 = f_expr_pow_95();
while (((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_560 = NULL;
F->op_560 = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
F->line_561 = f_cur_line_53();
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->l_559 = f_binop_86(F->op_560, F->l_559, f_expr_pow_95(), F->line_561);
}
F->result_ = F->l_559;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expr_pow_95(void) {
  struct f_expr_pow_95fr *F = rt_alloc(sizeof *F);
F->l_562 = NULL;
F->l_562 = f_expr_prefix_96();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_563 = f_cur_line_53();
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->l_562 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_562, f_expr_prefix_96(), F->line_563);
}
F->result_ = F->l_562;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expr_prefix_96(void) {
  struct f_expr_prefix_96fr *F = rt_alloc(sizeof *F);
if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_564 = NULL;
F->x_564 = f_nn_46(((rt_int)8LL), f_cur_line_53());
(*(P417)rt_nil_check(F->x_564)).name = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_564)).a = f_expr_prefix_96();
F->result_ = F->x_564;
goto ret_;
}
F->result_ = f_postfix_97();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_postfix_97(void) {
  struct f_postfix_97fr *F = rt_alloc(sizeof *F);
F->p_565 = NULL;
F->p_565 = f_primary_98();
while (1) {
F->line_566 = f_cur_line_53();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_567 = NULL;
F->x_567 = f_nn_46(((rt_int)10LL), F->line_566);
F->head_568 = NULL;
F->tail_569 = NULL;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_570 = 1;
while (F->more_570) {
F->lo_571 = NULL;
F->lo_571 = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_572 = NULL;
F->r_572 = f_nn_46(((rt_int)16LL), F->line_566);
(*(P417)rt_nil_check(F->r_572)).a = F->lo_571;
(*(P417)rt_nil_check(F->r_572)).b = f_expr_87();
f_append_50(&F->head_568, &F->tail_569, F->r_572);
} else {
f_append_50(&F->head_568, &F->tail_569, F->lo_571);
}
F->more_570 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P417)rt_nil_check(F->x_567)).a = F->p_565;
(*(P417)rt_nil_check(F->x_567)).b = F->head_568;
F->p_565 = F->x_567;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_573 = NULL;
F->x_573 = f_nn_46(((rt_int)11LL), F->line_566);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_573)).a = F->p_565;
(*(P417)rt_nil_check(F->x_573)).name = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->p_565 = F->x_573;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P417)rt_nil_check(F->p_565)).kind == ((rt_int)7LL)))) {
F->x_574 = NULL;
F->x_574 = f_nn_46(((rt_int)12LL), F->line_566);
(*(P417)rt_nil_check(F->x_574)).a = F->p_565;
(*(P417)rt_nil_check(F->x_574)).b = f_actual_tt_81();
F->p_565 = F->x_574;
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_575 = NULL;
F->x_575 = f_nn_46(((rt_int)13LL), F->line_566);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_575)).a = F->p_565;
(*(P417)rt_nil_check(F->x_575)).b = f_p_subtype_77();
F->p_565 = F->x_575;
} else {
F->result_ = F->p_565;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_primary_98(void) {
  struct f_primary_98fr *F = rt_alloc(sizeof *F);
F->line_576 = f_cur_line_53();
F->x_577 = NULL;
F->k_578 = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).kind;
if ((F->k_578 == ((rt_int)4LL))) {
F->x_577 = f_nn_46(((rt_int)1LL), F->line_576);
(*(P417)rt_nil_check(F->x_577)).ival = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).ival;
(*(P417)rt_nil_check(F->x_577)).name = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->result_ = F->x_577;
goto ret_;
}
if ((((F->k_578 == ((rt_int)5LL)) || (F->k_578 == ((rt_int)7LL))) || (F->k_578 == ((rt_int)6LL)))) {
if ((F->k_578 == ((rt_int)5LL))) {
F->x_577 = f_nn_46(((rt_int)2LL), F->line_576);
} else if ((F->k_578 == ((rt_int)7LL))) {
F->x_577 = f_nn_46(((rt_int)3LL), F->line_576);
} else {
F->x_577 = f_nn_46(((rt_int)4LL), F->line_576);
}
(*(P417)rt_nil_check(F->x_577)).name = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->result_ = F->x_577;
goto ret_;
}
if ((F->k_578 == ((rt_int)1LL))) {
F->w_579 = rt_str_copy((*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)));
if ((rt_str_eq(F->w_579, rt_str("TRUE", 4)) || rt_str_eq(F->w_579, rt_str("FALSE", 5)))) {
F->x_577 = f_nn_46(((rt_int)5LL), F->line_576);
if (rt_str_eq(F->w_579, rt_str("TRUE", 4))) {
(*(P417)rt_nil_check(F->x_577)).ival = ((rt_int)1LL);
}
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->result_ = F->x_577;
goto ret_;
}
if (rt_str_eq(F->w_579, rt_str("NIL", 3))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)6LL), F->line_576);
goto ret_;
}
F->result_ = f_name_node_75();
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_577 = f_nn_46(((rt_int)17LL), F->line_576);
(*(P417)rt_nil_check(F->x_577)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_577;
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_580 = NULL;
F->tail_581 = NULL;
F->x_577 = f_nn_46(((rt_int)14LL), F->line_576);
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_582 = 1;
while (F->more_582) {
f_append_50(&F->head_580, &F->tail_581, f_constructor_item_99());
F->more_582 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P417)rt_nil_check(F->x_577)).a = F->head_580;
F->result_ = F->x_577;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_constructor_item_99(void) {
  struct f_constructor_item_99fr *F = rt_alloc(sizeof *F);
F->line_583 = f_cur_line_53();
F->it_584 = NULL;
F->it_584 = f_nn_46(((rt_int)15LL), F->line_583);
F->first_585 = NULL;
F->first_585 = f_expr_87();
F->keys_586 = NULL;
F->ktail_587 = NULL;
F->lab_588 = NULL;
F->lab_588 = f_nn_46(((rt_int)61LL), F->line_583);
(*(P417)rt_nil_check(F->lab_588)).a = F->first_585;
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P417)rt_nil_check(F->lab_588)).b = f_expr_87();
f_append_50(&F->keys_586, &F->ktail_587, F->lab_588);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_50(&F->keys_586, &F->ktail_587, F->lab_588);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_589 = g_tpos_443;
F->more_590 = NULL;
F->tail2_591 = NULL;
F->ok_592 = 0;
F->go_593 = 1;
while ((F->go_593 && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_594 = NULL;
F->l2_594 = f_nn_46(((rt_int)61LL), F->line_583);
(*(P417)rt_nil_check(F->l2_594)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P417)rt_nil_check(F->l2_594)).b = f_expr_87();
}
f_append_50(&F->more_590, &F->tail2_591, F->l2_594);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_592 = 1;
F->go_593 = 0;
} else if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_593 = 0;
}
}
if (F->ok_592) {
f_append_50(&F->keys_586, &F->ktail_587, F->lab_588);
f_append_50(&F->keys_586, &F->ktail_587, F->more_590);
} else {
g_tpos_443 = F->save_589;
}
}
if ((F->keys_586 != NULL)) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P417)rt_nil_check(F->it_584)).a = F->keys_586;
(*(P417)rt_nil_check(F->it_584)).b = f_expr_87();
} else {
(*(P417)rt_nil_check(F->it_584)).b = F->first_585;
}
F->result_ = F->it_584;
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

static P417 f_body_101(void) {
  struct f_body_101fr *F = rt_alloc(sizeof *F);
F->head_595 = NULL;
F->tail_596 = NULL;
while ((!f_at_body_end_100())) {
f_append_50(&F->head_595, &F->tail_596, f_body_element_102());
}
F->result_ = F->head_595;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_body_element_102(void) {
  struct f_body_element_102fr *F = rt_alloc(sizeof *F);
F->x_597 = NULL;
if ((((((((((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_597 = f_declaration_103();
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_597 = f_nn_46(((rt_int)33LL), f_cur_line_53());
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_597)).a = f_expr_87();
} else {
F->x_597 = f_statement_123();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_597;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_declaration_103(void) {
  struct f_declaration_103fr *F = rt_alloc(sizeof *F);
F->line_598 = f_cur_line_53();
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
F->result_ = f_expose_decl_120();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_119();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_118();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_599 = NULL;
F->tail_600 = NULL;
F->names_601 = NULL;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->names_601 = f_id_list_76();
while ((F->names_601 != NULL)) {
F->x_602 = NULL;
F->x_602 = f_nn_46(((rt_int)49LL), F->line_598);
(*(P417)rt_nil_check(F->x_602)).name = (*(P417)rt_nil_check(F->names_601)).name;
f_append_50(&F->head_599, &F->tail_600, F->x_602);
F->names_601 = (*(P417)rt_nil_check(F->names_601)).next;
}
F->result_ = F->head_599;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_object_decl_104(void) {
  struct f_object_decl_104fr *F = rt_alloc(sizeof *F);
F->line_603 = f_cur_line_53();
F->is_var_604 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_605 = NULL;
F->st_606 = NULL;
F->init_607 = NULL;
F->head_608 = NULL;
F->tail_609 = NULL;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->names_605 = f_id_list_76();
if (F->is_var_604) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_606 = f_p_subtype_77();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_607 = f_expr_87();
}
} else {
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_606 = f_p_subtype_77();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_607 = f_expr_87();
}
while ((F->names_605 != NULL)) {
F->x_610 = NULL;
if (F->is_var_604) {
F->x_610 = f_nn_46(((rt_int)40LL), F->line_603);
} else {
F->x_610 = f_nn_46(((rt_int)41LL), F->line_603);
}
(*(P417)rt_nil_check(F->x_610)).name = (*(P417)rt_nil_check(F->names_605)).name;
(*(P417)rt_nil_check(F->x_610)).a = F->st_606;
(*(P417)rt_nil_check(F->x_610)).b = F->init_607;
f_append_50(&F->head_608, &F->tail_609, F->x_610);
F->names_605 = (*(P417)rt_nil_check(F->names_605)).next;
}
F->result_ = F->head_608;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_abbrev_decl_105(void) {
  struct f_abbrev_decl_105fr *F = rt_alloc(sizeof *F);
F->x_611 = NULL;
F->x_611 = f_nn_46(((rt_int)42LL), f_cur_line_53());
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_611)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_611)).b = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P417)rt_nil_check(F->x_611)).a = f_p_subtype_77();
F->result_ = F->x_611;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_type_decl_106(void) {
  struct f_type_decl_106fr *F = rt_alloc(sizeof *F);
F->line_612 = f_cur_line_53();
F->name_613 = NULL;
F->params_614 = NULL;
F->x_615 = NULL;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->name_613 = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_614 = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->x_615 = f_nn_46(((rt_int)44LL), F->line_612);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_615)).b = f_formal_params_109();
}
} else {
F->x_615 = f_nn_46(((rt_int)43LL), F->line_612);
(*(P417)rt_nil_check(F->x_615)).b = F->params_614;
}
(*(P417)rt_nil_check(F->x_615)).name = F->name_613;
(*(P417)rt_nil_check(F->x_615)).a = f_p_subtype_77();
F->result_ = F->x_615;
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

static P417 f_formal_params_109(void) {
  struct f_formal_params_109fr *F = rt_alloc(sizeof *F);
F->head_616 = NULL;
F->tail_617 = NULL;
F->more_618 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_618) {
F->mode_619 = ((rt_int)1LL);
F->names_620 = NULL;
F->ntail_621 = NULL;
F->st_622 = NULL;
if ((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_619 = f_mode_of_108(&(*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)));
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
}
f_append_50(&F->names_620, &F->ntail_621, f_name_node_75());
while ((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_61(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P412)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P412)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
f_append_50(&F->names_620, &F->ntail_621, f_name_node_75());
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_622 = f_p_subtype_77();
while ((F->names_620 != NULL)) {
F->p_623 = NULL;
F->p_623 = f_nn_46(((rt_int)52LL), (*(P417)rt_nil_check(F->names_620)).line);
(*(P417)rt_nil_check(F->p_623)).name = (*(P417)rt_nil_check(F->names_620)).name;
(*(P417)rt_nil_check(F->p_623)).ival = F->mode_619;
(*(P417)rt_nil_check(F->p_623)).a = F->st_622;
f_append_50(&F->head_616, &F->tail_617, F->p_623);
F->names_620 = (*(P417)rt_nil_check(F->names_620)).next;
}
F->more_618 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_616;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_111(P417 owner_110) {
  struct f_imports_list_111fr *F = rt_alloc(sizeof *F);
F->owner_110 = owner_110;
F->head_624 = NULL;
F->tail_625 = NULL;
F->more_626 = 1;
if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P417)rt_nil_check(F->owner_110)).flag = rt_add((*(P417)rt_nil_check(F->owner_110)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_626) {
F->ro_627 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_628 = NULL;
F->x_628 = f_name_node_75();
if (F->ro_627) {
(*(P417)rt_nil_check(F->x_628)).ival = ((rt_int)1LL);
}
f_append_50(&F->head_624, &F->tail_625, F->x_628);
F->more_626 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P417)rt_nil_check(F->owner_110)).d = F->head_624;
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

static P412 f_definable_name_114(void) {
  struct f_definable_name_114fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_59(((rt_int)1LL)) || (f_at_kind_59(((rt_int)3LL)) && f_is_definable_113(&(*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)))))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->result_ = (*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(rt_sub(g_tpos_443, ((rt_int)1LL)), (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_subprogram_decl_115(void) {
  struct f_subprogram_decl_115fr *F = rt_alloc(sizeof *F);
F->line_629 = f_cur_line_53();
F->x_630 = NULL;
F->is_abn_631 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_632 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_632) {
F->x_630 = f_nn_46(((rt_int)46LL), F->line_629);
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_630 = f_nn_46(((rt_int)45LL), F->line_629);
} else {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
if (F->is_abn_631) {
(*(P417)rt_nil_check(F->x_630)).flag = ((rt_int)1LL);
}
(*(P417)rt_nil_check(F->x_630)).name = f_definable_name_114();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_630)).e = f_formal_tt_117();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_630)).a = f_formal_params_109();
}
if (F->is_func_632) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P417)rt_nil_check(F->x_630)).b = f_p_subtype_77();
}
F->dummy_633 = f_imports_list_111(F->x_630);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P417)rt_nil_check(F->x_630)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_632) {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P412)rt_nil_check(f_definable_name_114())), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->x_630)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->x_630)).name))); b_; }));
}
F->result_ = F->x_630;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_capsule_decl_116(void) {
  struct f_capsule_decl_116fr *F = rt_alloc(sizeof *F);
F->x_634 = NULL;
F->x_634 = f_nn_46(((rt_int)47LL), f_cur_line_53());
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_634)).name = f_expect_id_74();
F->dummy_635 = f_imports_list_111(F->x_634);
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P417)rt_nil_check(F->x_634)).ival = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P417)rt_nil_check(F->x_634)).ival = ((rt_int)0LL);
} else {
F->head_636 = NULL;
F->tail_637 = NULL;
F->more_638 = 1;
while (F->more_638) {
F->n_639 = NULL;
F->n_639 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P417)rt_nil_check(F->n_639)).ival = ((rt_int)1LL);
}
(*(P417)rt_nil_check(F->n_639)).name = f_definable_name_114();
f_append_50(&F->head_636, &F->tail_637, F->n_639);
F->more_638 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P417)rt_nil_check(F->x_634)).a = F->head_636;
(*(P417)rt_nil_check(F->x_634)).ival = ((rt_int)2LL);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P417)rt_nil_check(F->x_634)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P412)rt_nil_check(f_expect_id_74())), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->x_634)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_634;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_formal_tt_117(void) {
  struct f_formal_tt_117fr *F = rt_alloc(sizeof *F);
F->head_640 = NULL;
F->tail_641 = NULL;
F->more_642 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_642) {
f_append_50(&F->head_640, &F->tail_641, f_name_node_75());
F->more_642 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_640;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_generic_decl_118(void) {
  struct f_generic_decl_118fr *F = rt_alloc(sizeof *F);
F->x_643 = NULL;
F->x_643 = f_nn_46(((rt_int)51LL), f_cur_line_53());
F->head_644 = NULL;
F->tail_645 = NULL;
F->more_646 = 1;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
while (F->more_646) {
F->names_647 = NULL;
F->names_647 = f_id_list_76();
F->kind_648 = ((rt_int)6LL);
F->st_649 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_648 = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_648 = ((rt_int)2LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_648 = ((rt_int)3LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_648 = ((rt_int)4LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_648 = ((rt_int)5LL);
} else {
F->st_649 = f_p_subtype_77();
}
if (((F->kind_648 <= ((rt_int)2LL)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P417)rt_nil_check(F->x_643)).e = f_actual_params_78();
} else if (((F->kind_648 >= ((rt_int)3LL)) && (F->kind_648 <= ((rt_int)5LL)))) {
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
while ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_649 = f_p_subtype_77();
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
}
if (((F->kind_648 == ((rt_int)4LL)) && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_649 = f_p_subtype_77();
}
}
while ((F->names_647 != NULL)) {
F->p_650 = NULL;
F->p_650 = f_nn_46(((rt_int)52LL), (*(P417)rt_nil_check(F->names_647)).line);
(*(P417)rt_nil_check(F->p_650)).name = (*(P417)rt_nil_check(F->names_647)).name;
(*(P417)rt_nil_check(F->p_650)).ival = F->kind_648;
(*(P417)rt_nil_check(F->p_650)).a = F->st_649;
f_append_50(&F->head_644, &F->tail_645, F->p_650);
F->names_647 = (*(P417)rt_nil_check(F->names_647)).next;
}
F->more_646 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_646 = 1;
while (F->more_646) {
F->nm_651 = NULL;
F->nm_651 = f_definable_name_114();
F->st_652 = NULL;
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
while ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_652 = f_p_subtype_77();
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_652 = f_p_subtype_77();
}
F->more_646 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P417)rt_nil_check(F->x_643)).a = F->head_644;
(*(P417)rt_nil_check(F->x_643)).b = f_declaration_103();
(*(P417)rt_nil_check(F->x_643)).name = (*(P417)rt_nil_check((*(P417)rt_nil_check(F->x_643)).b)).name;
F->result_ = F->x_643;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_task_decl_119(void) {
  struct f_task_decl_119fr *F = rt_alloc(sizeof *F);
F->x_653 = NULL;
F->x_653 = f_nn_46(((rt_int)50LL), f_cur_line_53());
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_653)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_653)).e = f_formal_tt_117();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_653)).a = f_formal_params_109();
}
F->dummy_654 = f_imports_list_111(F->x_653);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P417)rt_nil_check(F->x_653)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P412)rt_nil_check(f_expect_id_74())), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->x_653)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->x_653)).name))); b_; }));
}
F->result_ = F->x_653;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_expose_decl_120(void) {
  struct f_expose_decl_120fr *F = rt_alloc(sizeof *F);
F->x_655 = NULL;
F->x_655 = f_nn_46(((rt_int)48LL), f_cur_line_53());
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P417)rt_nil_check(F->x_655)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_656 = NULL;
F->tail_657 = NULL;
F->more_658 = 1;
while (F->more_658) {
F->n_659 = NULL;
F->n_659 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P417)rt_nil_check(F->n_659)).ival = ((rt_int)1LL);
}
(*(P417)rt_nil_check(F->n_659)).name = f_definable_name_114();
f_append_50(&F->head_656, &F->tail_657, F->n_659);
F->more_658 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P417)rt_nil_check(F->x_655)).a = F->head_656;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P417)rt_nil_check(F->x_655)).flag = ((rt_int)1LL);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P417)rt_nil_check(F->x_655)).flag = rt_add((*(P417)rt_nil_check(F->x_655)).flag, ((rt_int)2LL));
}
(*(P417)rt_nil_check(F->x_655)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_655)).b = f_actual_params_78();
}
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P417)rt_nil_check(F->x_655)).flag == ((rt_int)1LL)) || ((*(P417)rt_nil_check(F->x_655)).flag == ((rt_int)3LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_655;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_compound_kw_122(rstr *w_121) {
  struct f_is_compound_kw_122fr *F = rt_alloc(sizeof *F);
F->w_121 = w_121;
F->result_ = (((((((rt_str_eq((*F->w_121), rt_str("IF", 2)) || rt_str_eq((*F->w_121), rt_str("CASE", 4))) || rt_str_eq((*F->w_121), rt_str("FOR", 3))) || rt_str_eq((*F->w_121), rt_str("WHILE", 5))) || rt_str_eq((*F->w_121), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_121), rt_str("GUARD", 5))) || rt_str_eq((*F->w_121), rt_str("WAIT", 4))) || rt_str_eq((*F->w_121), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_statement_123(void) {
  struct f_statement_123fr *F = rt_alloc(sizeof *F);
F->labels_660 = NULL;
F->ltail_661 = NULL;
F->match_662 = NULL;
F->s_663 = NULL;
while (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P412)rt_nil_check(f_text_at_63(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_50(&F->labels_660, &F->ltail_661, f_name_node_75());
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
}
if (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_122(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P412)rt_nil_check(f_text_at_63(((rt_int)1LL)))); b_; })))) {
F->match_662 = f_expect_id_74();
}
F->s_663 = f_unlabeled_statement_124();
if ((F->match_662 != NULL)) {
if (((((((((*(P417)rt_nil_check(F->s_663)).kind != ((rt_int)22LL)) && ((*(P417)rt_nil_check(F->s_663)).kind != ((rt_int)23LL))) && ((*(P417)rt_nil_check(F->s_663)).kind != ((rt_int)24LL))) && ((*(P417)rt_nil_check(F->s_663)).kind != ((rt_int)25LL))) && ((*(P417)rt_nil_check(F->s_663)).kind != ((rt_int)26LL))) && ((*(P417)rt_nil_check(F->s_663)).kind != ((rt_int)35LL))) && ((*(P417)rt_nil_check(F->s_663)).kind != ((rt_int)36LL)))) {
f_fail_21((*(P417)rt_nil_check(F->s_663)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P412)rt_nil_check(f_expect_id_74())), (*(P412)rt_nil_check(F->match_662))))) {
f_fail_21((*(P417)rt_nil_check(F->s_663)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P412)rt_nil_check(F->match_662))); b_; }));
}
(*(P417)rt_nil_check(F->s_663)).tag = F->match_662;
}
if ((F->labels_660 != NULL)) {
f_fail_21((*(P417)rt_nil_check(F->s_663)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_663;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_unlabeled_statement_124(void) {
  struct f_unlabeled_statement_124fr *F = rt_alloc(sizeof *F);
F->line_664 = f_cur_line_53();
F->x_665 = NULL;
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_129();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_130();
goto ret_;
} else if ((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_131();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_665 = f_nn_46(((rt_int)25LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_665)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_665;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_132();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_665 = f_nn_46(((rt_int)27LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_665)).name = f_expect_id_74();
F->result_ = F->x_665;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_665 = f_nn_46(((rt_int)28LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P417)rt_nil_check(F->x_665)).a = f_expr_87();
}
F->result_ = F->x_665;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_665 = f_nn_46(((rt_int)30LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_665)).name = f_expect_id_74();
F->result_ = F->x_665;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)31LL), F->line_664);
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_665 = f_nn_46(((rt_int)34LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_665)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_665)).e = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_665)).b = f_actual_params_78();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P417)rt_nil_check(F->x_665)).a = f_postfix_97();
F->result_ = F->x_665;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_666 = NULL;
F->tail_667 = NULL;
F->x_665 = f_nn_46(((rt_int)35LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_668 = NULL;
F->itail_669 = NULL;
F->more_670 = 1;
while (F->more_670) {
f_append_50(&F->invs_668, &F->itail_669, f_postfix_97());
F->more_670 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_666, &F->tail_667, f_arm_128(F->invs_668, f_body_101(), F->line_664));
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P417)rt_nil_check(F->x_665)).a = F->head_666;
F->result_ = F->x_665;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_665 = f_nn_46(((rt_int)36LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_665)).a = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P417)rt_nil_check(F->x_665)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_665;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_665 = f_nn_46(((rt_int)32LL), F->line_664);
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_665)).a = f_postfix_97();
if ((!(f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P412)rt_nil_check((*(P413)rt_nil_check((*(P415)rt_nil_check(g_toks_441)).p[rt_index(g_tpos_443, (*(P415)rt_nil_check(g_toks_441)).lo, (*(P415)rt_nil_check(g_toks_441)).hi) - (*(P415)rt_nil_check(g_toks_441)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P417)rt_nil_check(F->x_665)).b = f_actual_params_78();
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P417)rt_nil_check(F->x_665)).c = f_expr_87();
}
F->result_ = F->x_665;
goto ret_;
}
{
F->target_671 = NULL;
F->target_671 = f_postfix_97();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_665 = f_nn_46(((rt_int)20LL), F->line_664);
(*(P417)rt_nil_check(F->x_665)).a = F->target_671;
(*(P417)rt_nil_check(F->x_665)).b = f_expr_87();
} else {
F->x_665 = f_nn_46(((rt_int)21LL), F->line_664);
(*(P417)rt_nil_check(F->x_665)).a = F->target_671;
}
}
F->result_ = F->x_665;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_arm_128(P417 cond_125, P417 b_126, rt_int line_127) {
  struct f_arm_128fr *F = rt_alloc(sizeof *F);
F->cond_125 = cond_125;
F->b_126 = b_126;
F->line_127 = line_127;
F->x_672 = NULL;
F->x_672 = f_nn_46(((rt_int)60LL), F->line_127);
(*(P417)rt_nil_check(F->x_672)).a = F->cond_125;
(*(P417)rt_nil_check(F->x_672)).b = F->b_126;
F->result_ = F->x_672;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_if_stmt_129(void) {
  struct f_if_stmt_129fr *F = rt_alloc(sizeof *F);
F->x_673 = NULL;
F->x_673 = f_nn_46(((rt_int)22LL), f_cur_line_53());
F->head_674 = NULL;
F->tail_675 = NULL;
F->cond_676 = NULL;
F->go_677 = 1;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
F->cond_676 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_674, &F->tail_675, f_arm_128(F->cond_676, f_body_101(), (*(P417)rt_nil_check(F->x_673)).line));
while (F->go_677) {
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_676 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_674, &F->tail_675, f_arm_128(F->cond_676, f_body_101(), (*(P417)rt_nil_check(F->x_673)).line));
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P417)rt_nil_check(F->x_673)).flag = ((rt_int)1LL);
(*(P417)rt_nil_check(F->x_673)).b = f_body_101();
} else {
F->go_677 = 0;
}
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P417)rt_nil_check(F->x_673)).a = F->head_674;
F->result_ = F->x_673;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_case_stmt_130(void) {
  struct f_case_stmt_130fr *F = rt_alloc(sizeof *F);
F->x_678 = NULL;
F->x_678 = f_nn_46(((rt_int)23LL), f_cur_line_53());
F->head_679 = NULL;
F->tail_680 = NULL;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_678)).a = f_expr_87();
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_681 = NULL;
F->ltail_682 = NULL;
F->more_683 = 1;
while (F->more_683) {
F->l_684 = NULL;
F->l_684 = f_nn_46(((rt_int)61LL), f_cur_line_53());
(*(P417)rt_nil_check(F->l_684)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P417)rt_nil_check(F->l_684)).b = f_expr_87();
}
f_append_50(&F->labs_681, &F->ltail_682, F->l_684);
F->more_683 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_679, &F->tail_680, f_arm_128(F->labs_681, f_body_101(), (*(P417)rt_nil_check(F->x_678)).line));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P417)rt_nil_check(F->x_678)).flag = ((rt_int)1LL);
(*(P417)rt_nil_check(F->x_678)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P417)rt_nil_check(F->x_678)).b = F->head_679;
F->result_ = F->x_678;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_repeat_stmt_131(void) {
  struct f_repeat_stmt_131fr *F = rt_alloc(sizeof *F);
F->x_685 = NULL;
F->x_685 = f_nn_46(((rt_int)24LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P417)rt_nil_check(F->x_685)).flag = ((rt_int)1LL);
(*(P417)rt_nil_check(F->x_685)).name = f_expect_id_74();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P417)rt_nil_check(F->x_685)).ival = ((rt_int)1LL);
}
(*(P417)rt_nil_check(F->x_685)).a = f_p_subtype_77();
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P417)rt_nil_check(F->x_685)).a = f_expr_87();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P417)rt_nil_check(F->x_685)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_685;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_guard_stmt_132(void) {
  struct f_guard_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_686 = NULL;
F->x_686 = f_nn_46(((rt_int)26LL), f_cur_line_53());
F->head_687 = NULL;
F->tail_688 = NULL;
g_tpos_443 = rt_add(g_tpos_443, ((rt_int)1LL));
(*(P417)rt_nil_check(F->x_686)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_689 = NULL;
F->h_689 = f_nn_46(((rt_int)62LL), f_cur_line_53());
(*(P417)rt_nil_check(F->h_689)).a = f_id_list_76();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P417)rt_nil_check(F->h_689)).b = f_body_101();
f_append_50(&F->head_687, &F->tail_688, F->h_689);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P417)rt_nil_check(F->x_686)).flag = ((rt_int)1LL);
(*(P417)rt_nil_check(F->x_686)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P417)rt_nil_check(F->x_686)).b = F->head_687;
F->result_ = F->x_686;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_program_133(void) {
  struct f_program_133fr *F = rt_alloc(sizeof *F);
F->head_690 = NULL;
F->tail_691 = NULL;
while ((!f_at_kind_59(((rt_int)0LL)))) {
if ((!f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_50(&F->head_690, &F->tail_691, f_capsule_decl_116());
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_690;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_135(rstr *s_134) {
  struct f_hash_135fr *F = rt_alloc(sizeof *F);
F->s_134 = s_134;
F->h_692 = ((rt_int)0LL);
{ rt_int lo694 = ((rt_int)1LL), hi695 = ((*F->s_134)).len;
for (rt_int it696 = lo694; it696 <= hi695; it696++) {
F->i_693 = it696;
F->h_692 = rt_mod(rt_add(rt_mul(F->h_692, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_134), F->i_693)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_692;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P427 f_lookup_137(rstr *name_136) {
  struct f_lookup_137fr *F = rt_alloc(sizeof *F);
F->name_136 = name_136;
F->y_697 = NULL;
F->y_697 = (*(P433)rt_nil_check(g_table_445)).p[rt_index(f_hash_135(&(*F->name_136)), (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo];
while ((F->y_697 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_697)).name)), (*F->name_136))) {
F->result_ = F->y_697;
goto ret_;
}
F->y_697 = (*(P427)rt_nil_check(F->y_697)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P427 f_lookup_decl_139(P417 d_138) {
  struct f_lookup_decl_139fr *F = rt_alloc(sizeof *F);
F->d_138 = d_138;
F->y_698 = NULL;
F->y_698 = (*(P433)rt_nil_check(g_table_445)).p[rt_index(f_hash_135(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_138)).name))), (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo];
while ((F->y_698 != NULL)) {
if (((*(P427)rt_nil_check(F->y_698)).decl == F->d_138)) {
F->result_ = F->y_698;
goto ret_;
}
F->y_698 = (*(P427)rt_nil_check(F->y_698)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_142(P427 y_140, rt_int line_141) {
  struct f_define_142fr *F = rt_alloc(sizeof *F);
F->y_140 = y_140;
F->line_141 = line_141;
F->h_699 = f_hash_135(&(*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_140)).name)));
F->z_700 = NULL;
F->z_700 = (*(P433)rt_nil_check(g_table_445)).p[rt_index(F->h_699, (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo];
while ((F->z_700 != NULL)) {
if (((((*(P427)rt_nil_check(F->z_700)).depth == g_depth_446) && rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->z_700)).name)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_140)).name)))) && (!(((f_overloadable_144(F->y_140) && f_overloadable_144(F->z_700)) && ((*(P427)rt_nil_check(F->z_700)).kind == (*(P427)rt_nil_check(F->y_140)).kind)) && (!f_same_signature_147((*(P427)rt_nil_check(F->y_140)).params, (*(P427)rt_nil_check(F->z_700)).params)))))) {
f_fail_21(F->line_141, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_140)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_700 = (*(P427)rt_nil_check(F->z_700)).chain;
}
(*(P427)rt_nil_check(F->y_140)).depth = g_depth_446;
(*(P427)rt_nil_check(F->y_140)).chain = (*(P433)rt_nil_check(g_table_445)).p[rt_index(F->h_699, (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo];
(*(P433)rt_nil_check(g_table_445)).p[rt_index(F->h_699, (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo] = F->y_140;
(*(P427)rt_nil_check(F->y_140)).stack = g_scope_stack_447;
g_scope_stack_447 = F->y_140;
ret_:
  return;
}

static int f_overloadable_144(P427 y_143) {
  struct f_overloadable_144fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->result_ = ((((*(P427)rt_nil_check(F->y_143)).kind == ((rt_int)3LL)) || ((*(P427)rt_nil_check(F->y_143)).kind == ((rt_int)4LL))) || ((*(P427)rt_nil_check(F->y_143)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_147(P425 a_145, P425 b_146) {
  struct f_same_signature_147fr *F = rt_alloc(sizeof *F);
F->a_145 = a_145;
F->b_146 = b_146;
F->x_701 = NULL;
F->x_701 = F->a_145;
F->y_702 = NULL;
F->y_702 = F->b_146;
while (((F->x_701 != NULL) && (F->y_702 != NULL))) {
if ((!f_same_161((*(P425)rt_nil_check(F->x_701)).t, (*(P425)rt_nil_check(F->y_702)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_701 = (*(P425)rt_nil_check(F->x_701)).next;
F->y_702 = (*(P425)rt_nil_check(F->y_702)).next;
}
F->result_ = ((F->x_701 == NULL) && (F->y_702 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_148(void) {
  struct f_open_scope_148fr *F = rt_alloc(sizeof *F);
g_depth_446 = rt_add(g_depth_446, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_149(void) {
  struct f_close_scope_149fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_447 != NULL) && ((*(P427)rt_nil_check(g_scope_stack_447)).depth == g_depth_446))) {
(*(P433)rt_nil_check(g_table_445)).p[rt_index(f_hash_135(&(*(P412)rt_nil_check((*(P427)rt_nil_check(g_scope_stack_447)).name))), (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo] = (*(P427)rt_nil_check(g_scope_stack_447)).chain;
g_scope_stack_447 = (*(P427)rt_nil_check(g_scope_stack_447)).stack;
}
g_depth_446 = rt_sub(g_depth_446, ((rt_int)1LL));
ret_:
  return;
}

static P427 f_new_sym_152(rt_int kind_150, P412 name_151) {
  struct f_new_sym_152fr *F = rt_alloc(sizeof *F);
F->kind_150 = kind_150;
F->name_151 = name_151;
F->y_703 = NULL;
{ R428 *cell704 = rt_alloc(sizeof(R428));
(*cell704).name = NULL;
(*cell704).t = NULL;
(*cell704).c = NULL;
(*cell704).access = NULL;
(*cell704).cname = NULL;
(*cell704).st = NULL;
(*cell704).decl = NULL;
(*cell704).params = NULL;
(*cell704).result = NULL;
(*cell704).members = NULL;
(*cell704).mnext = NULL;
(*cell704).binds = NULL;
(*cell704).insts = NULL;
(*cell704).chain = NULL;
(*cell704).stack = NULL;
F->y_703 = cell704;
}
(*(P427)rt_nil_check(F->y_703)).kind = F->kind_150;
(*(P427)rt_nil_check(F->y_703)).name = F->name_151;
F->result_ = F->y_703;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P421 f_new_typ_154(rt_int kind_153) {
  struct f_new_typ_154fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->t_705 = NULL;
{ R422 *cell706 = rt_alloc(sizeof(R422));
(*cell706).name = NULL;
(*cell706).lits = NULL;
(*cell706).elem = NULL;
(*cell706).idx = NULL;
(*cell706).idx2 = NULL;
(*cell706).elemcons = NULL;
(*cell706).elemst = NULL;
(*cell706).under = NULL;
(*cell706).tparams = NULL;
(*cell706).ocap = NULL;
(*cell706).fields = NULL;
(*cell706).target = NULL;
(*cell706).decl = NULL;
(*cell706).cname = NULL;
(*cell706).next = NULL;
F->t_705 = cell706;
}
(*(P421)rt_nil_check(F->t_705)).kind = F->kind_153;
F->result_ = F->t_705;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_new_cons_155(void) {
  struct f_new_cons_155fr *F = rt_alloc(sizeof *F);
F->c_707 = NULL;
{ R420 *cell708 = rt_alloc(sizeof(R420));
(*cell708).lo = NULL;
(*cell708).hi = NULL;
(*cell708).lo2 = NULL;
(*cell708).hi2 = NULL;
(*cell708).slen = NULL;
(*cell708).args = NULL;
F->c_707 = cell708;
}
F->result_ = F->c_707;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_158(P417 a_156, P417 b_157) {
  struct f_same_lits_158fr *F = rt_alloc(sizeof *F);
F->a_156 = a_156;
F->b_157 = b_157;
F->x_709 = NULL;
F->x_709 = F->a_156;
F->y_710 = NULL;
F->y_710 = F->b_157;
while (((F->x_709 != NULL) && (F->y_710 != NULL))) {
if ((!rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->x_709)).name)), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->y_710)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_709 = (*(P417)rt_nil_check(F->x_709)).next;
F->y_710 = (*(P417)rt_nil_check(F->y_710)).next;
}
F->result_ = ((F->x_709 == NULL) && (F->y_710 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_161(P421 a_159, P421 b_160) {
  struct f_same_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
if ((F->a_159 == F->b_160)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_159 == NULL) || (F->b_160 == NULL)) || ((*(P421)rt_nil_check(F->a_159)).kind != (*(P421)rt_nil_check(F->b_160)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)1LL)) || ((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)2LL))) || ((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)3LL))) || ((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)5LL))) || ((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)9LL))) || ((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_158((*(P421)rt_nil_check(F->a_159)).lits, (*(P421)rt_nil_check(F->b_160)).lits);
goto ret_;
}
if (((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)6LL))) {
if ((((*(P421)rt_nil_check(F->a_159)).idx2 == NULL) != ((*(P421)rt_nil_check(F->b_160)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_161((*(P421)rt_nil_check(F->a_159)).elem, (*(P421)rt_nil_check(F->b_160)).elem) && f_same_161((*(P421)rt_nil_check(F->a_159)).idx, (*(P421)rt_nil_check(F->b_160)).idx));
goto ret_;
}
if (((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)16LL))) {
F->result_ = f_same_161((*(P421)rt_nil_check(F->a_159)).elem, (*(P421)rt_nil_check(F->b_160)).elem);
goto ret_;
}
if (((*(P421)rt_nil_check(F->a_159)).kind == ((rt_int)7LL))) {
F->f_711 = NULL;
F->f_711 = (*(P421)rt_nil_check(F->a_159)).fields;
F->g_712 = NULL;
F->g_712 = (*(P421)rt_nil_check(F->b_160)).fields;
while (((F->f_711 != NULL) && (F->g_712 != NULL))) {
if (((!rt_str_eq((*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_711)).name)), (*(P412)rt_nil_check((*(P423)rt_nil_check(F->g_712)).name)))) || (!f_same_161((*(P423)rt_nil_check(F->f_711)).t, (*(P423)rt_nil_check(F->g_712)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_711 = (*(P423)rt_nil_check(F->f_711)).next;
F->g_712 = (*(P423)rt_nil_check(F->g_712)).next;
}
F->result_ = ((F->f_711 == NULL) && (F->g_712 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_163(P421 t_162) {
  struct f_kind_name_163fr *F = rt_alloc(sizeof *F);
F->t_162 = t_162;
{ rt_int sel713 = (*(P421)rt_nil_check(F->t_162)).kind;
if (0 || (sel713 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel713 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel713 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel713 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel713 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel713 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel713 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel713 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_162)).name)));
goto ret_;
} else if (0 || (sel713 == ((rt_int)11LL))) {
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

static void f_check_type_167(P421 got_164, P421 want_165, rt_int line_166) {
  struct f_check_type_167fr *F = rt_alloc(sizeof *F);
F->got_164 = got_164;
F->want_165 = want_165;
F->line_166 = line_166;
if ((F->want_165 == NULL)) {
goto ret_;
}
if ((((*(P421)rt_nil_check(F->got_164)).kind == ((rt_int)11LL)) && ((*(P421)rt_nil_check(F->want_165)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_161(F->got_164, F->want_165))) {
f_fail_21(F->line_166, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_163(F->got_164)), rt_str(" where ", 7)), f_kind_name_163(F->want_165)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_169(P421 t_168) {
  struct f_ctype_169fr *F = rt_alloc(sizeof *F);
F->t_168 = t_168;
{ rt_int sel714 = (*(P421)rt_nil_check(F->t_168)).kind;
if (0 || (sel714 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel714 == ((rt_int)2LL)) || (sel714 == ((rt_int)4LL)) || (sel714 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel714 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel714 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel714 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel714 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox", 7);
goto ret_;
} else if (0 || (sel714 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel714 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act", 6);
goto ret_;
} else if (0 || (sel714 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P421)rt_nil_check(F->t_168)).cname == NULL)) {
f_declare_ctype_173(F->t_168);
} else if (((((*(P421)rt_nil_check(F->t_168)).kind == ((rt_int)7LL)) && (*(P421)rt_nil_check(F->t_168)).forward) && (!(*(P421)rt_nil_check(F->t_168)).defined))) {
(*(P421)rt_nil_check(F->t_168)).defined = 1;
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_168)).cname))), rt_str(" { ", 3)), f_field_decls_171(F->t_168)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_168)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_171(P421 t_170) {
  struct f_field_decls_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
F->f_715 = NULL;
F->f_715 = (*(P421)rt_nil_check(F->t_170)).fields;
F->s_716 = NULL;
F->s_716 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_715 != NULL)) {
F->s_716 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->s_716)), f_ctype_169((*(P423)rt_nil_check(F->f_715)).t)), rt_str(" ", 1)), f_lower_s_15(&(*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_715)).name)))), rt_str("; ", 2)); b_; }));
F->f_715 = (*(P423)rt_nil_check(F->f_715)).next;
}
F->result_ = (*(P412)rt_nil_check(F->s_716));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_173(P421 t_172) {
  struct f_declare_ctype_173fr *F = rt_alloc(sizeof *F);
F->t_172 = t_172;
F->u_717 = NULL;
F->u_717 = g_all_types_448;
if ((((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)8LL)) && ((*(P421)rt_nil_check(F->t_172)).target == NULL))) {
f_finish_ptr_241(F->t_172);
if (((*(P421)rt_nil_check(F->t_172)).cname != NULL)) {
goto ret_;
}
}
if (((*(P421)rt_nil_check(F->t_172)).kind != ((rt_int)8LL))) {
while ((F->u_717 != NULL)) {
if ((((*(P421)rt_nil_check(F->u_717)).kind == (*(P421)rt_nil_check(F->t_172)).kind) && f_same_161(F->u_717, F->t_172))) {
(*(P421)rt_nil_check(F->t_172)).cname = (*(P421)rt_nil_check(F->u_717)).cname;
goto ret_;
}
F->u_717 = (*(P421)rt_nil_check(F->u_717)).next;
}
}
if ((((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)15LL)) && ((*(P421)rt_nil_check(F->t_172)).tparams == NULL))) {
(*(P421)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_169((*(P421)rt_nil_check(F->t_172)).under); b_; }));
goto ret_;
}
if (((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)6LL))) {
(*(P421)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)15LL))) {
(*(P421)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)7LL))) {
(*(P421)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P421)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P421)rt_nil_check(F->t_172)).next = g_all_types_448;
g_all_types_448 = F->t_172;
if (((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)8LL))) {
F->target_718 = NULL;
F->target_718 = (*(P421)rt_nil_check(F->t_172)).target;
if (((*(P421)rt_nil_check(F->target_718)).kind == ((rt_int)7LL))) {
if (((*(P421)rt_nil_check(F->target_718)).cname == NULL)) {
(*(P421)rt_nil_check(F->target_718)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P421)rt_nil_check(F->target_718)).next = g_all_types_448;
g_all_types_448 = F->target_718;
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->target_718)).cname))), rt_str(" ", 1)), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->target_718)).cname))), rt_str(";", 1)); b_; }));
(*(P421)rt_nil_check(F->target_718)).forward = 1;
}
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->target_718)).cname))), rt_str(" *", 2)), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_169(F->target_718)), rt_str(" *", 2)), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)6LL))) {
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(" ", 1)), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_169((*(P421)rt_nil_check(F->t_172)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P421)rt_nil_check(F->t_172)).kind == ((rt_int)15LL))) {
F->p_719 = NULL;
F->p_719 = (*(P421)rt_nil_check(F->t_172)).tparams;
F->fs_720 = NULL;
F->fs_720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_719 != NULL)) {
F->fs_720 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->fs_720)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_719)).name)))), rt_str("; ", 2)); b_; }));
F->p_719 = (*(P417)rt_nil_check(F->p_719)).next;
}
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(" ", 1)), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(" {", 2)), (*(P412)rt_nil_check(F->fs_720))), f_ctype_169((*(P421)rt_nil_check(F->t_172)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(" ", 1)), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
(*(P421)rt_nil_check(F->t_172)).defined = 1;
f_put_25(g_out_types_450, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_172)).cname))), rt_str(" { ", 3)), f_field_decls_171(F->t_172)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_174(void) {
  struct f_init_ascii_174fr *F = rt_alloc(sizeof *F);
F->names_721 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_722 = NULL;
F->tail_723 = NULL;
F->start_724 = ((rt_int)1LL);
{ rt_int lo726 = ((rt_int)1LL), hi727 = (F->names_721).len;
for (rt_int it728 = lo726; it728 <= hi727; it728++) {
F->i_725 = it728;
if ((rt_str_get(F->names_721, F->i_725) == 32)) {
F->lit_729 = NULL;
F->lit_729 = f_nn_46(((rt_int)4LL), ((rt_int)0LL));
(*(P417)rt_nil_check(F->lit_729)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_721, F->start_724, rt_sub(F->i_725, ((rt_int)1LL))); b_; }));
f_append_50(&F->head_722, &F->tail_723, F->lit_729);
F->start_724 = rt_add(F->i_725, ((rt_int)1LL));
}
}
}
g_ty_ascii_476 = f_new_typ_154(((rt_int)4LL));
(*(P421)rt_nil_check(g_ty_ascii_476)).lits = F->head_722;
(*(P421)rt_nil_check(g_ty_ascii_476)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_177(P417 lits_175, rstr *name_176) {
  struct f_lit_index_177fr *F = rt_alloc(sizeof *F);
F->lits_175 = lits_175;
F->name_176 = name_176;
F->i_730 = ((rt_int)0LL);
F->l_731 = NULL;
F->l_731 = F->lits_175;
while ((F->l_731 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->l_731)).name)), (*F->name_176))) {
F->result_ = F->i_730;
goto ret_;
}
F->i_730 = rt_add(F->i_730, ((rt_int)1LL));
F->l_731 = (*(P417)rt_nil_check(F->l_731)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P421 f_resolve_subtype_180(P417 st_178, P419 *c_179) {
  struct f_resolve_subtype_180fr *F = rt_alloc(sizeof *F);
F->st_178 = st_178;
F->c_179 = c_179;
F->t_732 = NULL;
F->dummy_734 = NULL;
(*F->c_179) = f_new_cons_155();
{ rt_int sel735 = (*(P417)rt_nil_check(F->st_178)).kind;
if (0 || (sel735 == ((rt_int)70LL))) {
if (((*(P417)rt_nil_check(F->st_178)).a != NULL)) {
(*(P419)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364((*(P417)rt_nil_check(F->st_178)).a, g_ty_int_473, &F->dummy_734); b_; }));
(*(P419)rt_nil_check((*F->c_179))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364((*(P417)rt_nil_check(F->st_178)).b, g_ty_int_473, &F->dummy_734); b_; }));
(*(P419)rt_nil_check((*F->c_179))).mlo = f_manifest_199((*(P417)rt_nil_check(F->st_178)).a, &F->ok_733);
(*(P419)rt_nil_check((*F->c_179))).hasm = F->ok_733;
(*(P419)rt_nil_check((*F->c_179))).mhi = f_manifest_199((*(P417)rt_nil_check(F->st_178)).b, &F->ok_733);
(*(P419)rt_nil_check((*F->c_179))).hasm = ((*(P419)rt_nil_check((*F->c_179))).hasm && F->ok_733);
}
F->result_ = g_ty_int_473;
goto ret_;
} else if (0 || (sel735 == ((rt_int)71LL))) {
F->result_ = g_ty_float_475;
goto ret_;
} else if (0 || (sel735 == ((rt_int)72LL))) {
F->t_732 = f_new_typ_154(((rt_int)4LL));
(*(P421)rt_nil_check(F->t_732)).lits = (*(P417)rt_nil_check(F->st_178)).a;
if (((*(P417)rt_nil_check(F->st_178)).b != NULL)) {
(*(P419)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364((*(P417)rt_nil_check(F->st_178)).b, F->t_732, &F->dummy_734); b_; }));
(*(P419)rt_nil_check((*F->c_179))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364((*(P417)rt_nil_check(F->st_178)).c, F->t_732, &F->dummy_734); b_; }));
}
F->result_ = F->t_732;
goto ret_;
} else if (0 || (sel735 == ((rt_int)73LL))) {
F->t_732 = f_resolve_subtype_180((*(P417)rt_nil_check(F->st_178)).a, &(*F->c_179));
if ((!f_same_161(F->t_732, g_ty_ascii_476))) {
f_fail_21((*(P417)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_179) = f_new_cons_155();
if (((*(P417)rt_nil_check(F->st_178)).b != NULL)) {
(*(P419)rt_nil_check((*F->c_179))).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364((*(P417)rt_nil_check(F->st_178)).b, g_ty_int_473, &F->dummy_734); b_; }));
}
F->result_ = g_ty_string_477;
goto ret_;
} else if (0 || (sel735 == ((rt_int)74LL))) {
if ((f_list_len_52((*(P417)rt_nil_check(F->st_178)).a) > ((rt_int)2LL))) {
f_fail_21((*(P417)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_736 = NULL;
F->ic2_737 = NULL;
F->ec_738 = NULL;
F->it_739 = NULL;
F->it_739 = f_resolve_subtype_180((*(P417)rt_nil_check(F->st_178)).a, &F->ic_736);
F->et_740 = NULL;
F->et_740 = f_resolve_subtype_180((*(P417)rt_nil_check(F->st_178)).b, &F->ec_738);
F->t_732 = f_new_typ_154(((rt_int)6LL));
(*(P421)rt_nil_check(F->t_732)).idx = F->it_739;
(*(P421)rt_nil_check(F->t_732)).elem = F->et_740;
(*(P421)rt_nil_check(F->t_732)).elemcons = F->ec_738;
(*(P421)rt_nil_check(F->t_732)).elemst = (*(P417)rt_nil_check(F->st_178)).b;
if (((*(P419)rt_nil_check(F->ic_736)).lo != NULL)) {
(*(P419)rt_nil_check((*F->c_179))).lo = (*(P419)rt_nil_check(F->ic_736)).lo;
(*(P419)rt_nil_check((*F->c_179))).hi = (*(P419)rt_nil_check(F->ic_736)).hi;
} else if (((*(P421)rt_nil_check(F->it_739)).kind == ((rt_int)4LL))) {
(*(P419)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P419)rt_nil_check((*F->c_179))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P421)rt_nil_check(F->it_739)).lits), ((rt_int)1LL))); b_; }));
}
(*(P419)rt_nil_check((*F->c_179))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P419)rt_nil_check((*F->c_179))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P417)rt_nil_check((*(P417)rt_nil_check(F->st_178)).a)).next != NULL)) {
(*(P421)rt_nil_check(F->t_732)).idx2 = f_resolve_subtype_180((*(P417)rt_nil_check((*(P417)rt_nil_check(F->st_178)).a)).next, &F->ic2_737);
if (((*(P419)rt_nil_check(F->ic2_737)).lo != NULL)) {
(*(P419)rt_nil_check((*F->c_179))).lo2 = (*(P419)rt_nil_check(F->ic2_737)).lo;
(*(P419)rt_nil_check((*F->c_179))).hi2 = (*(P419)rt_nil_check(F->ic2_737)).hi;
} else if (((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_732)).idx2)).kind == ((rt_int)4LL))) {
(*(P419)rt_nil_check((*F->c_179))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P419)rt_nil_check((*F->c_179))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_732)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_732;
goto ret_;
} else if (0 || (sel735 == ((rt_int)77LL))) {
F->t_732 = f_new_typ_154(((rt_int)16LL));
{
F->ec_741 = NULL;
(*(P421)rt_nil_check(F->t_732)).elem = f_resolve_subtype_180((*(P417)rt_nil_check(F->st_178)).a, &F->ec_741);
(*(P421)rt_nil_check(F->t_732)).elemcons = F->ec_741;
}
F->result_ = F->t_732;
goto ret_;
} else if (0 || (sel735 == ((rt_int)75LL))) {
F->t_732 = f_new_typ_154(((rt_int)7LL));
{
F->comp_742 = NULL;
F->comp_742 = (*(P417)rt_nil_check(F->st_178)).a;
F->tail_743 = NULL;
while ((F->comp_742 != NULL)) {
F->cc_744 = NULL;
F->f_745 = NULL;
{ R424 *cell746 = rt_alloc(sizeof(R424));
(*cell746).name = NULL;
(*cell746).t = NULL;
(*cell746).c = NULL;
(*cell746).st = NULL;
(*cell746).next = NULL;
F->f_745 = cell746;
}
(*(P423)rt_nil_check(F->f_745)).name = (*(P417)rt_nil_check(F->comp_742)).name;
(*(P423)rt_nil_check(F->f_745)).t = f_resolve_subtype_180((*(P417)rt_nil_check(F->comp_742)).a, &F->cc_744);
(*(P423)rt_nil_check(F->f_745)).c = F->cc_744;
(*(P423)rt_nil_check(F->f_745)).st = (*(P417)rt_nil_check(F->comp_742)).a;
if ((F->tail_743 == NULL)) {
(*(P421)rt_nil_check(F->t_732)).fields = F->f_745;
} else {
(*(P423)rt_nil_check(F->tail_743)).next = F->f_745;
}
F->tail_743 = F->f_745;
F->comp_742 = (*(P417)rt_nil_check(F->comp_742)).next;
}
}
F->result_ = F->t_732;
goto ret_;
} else if (0 || (sel735 == ((rt_int)79LL))) {
F->result_ = g_ty_file_479;
goto ret_;
} else if (0 || (sel735 == ((rt_int)78LL))) {
{
F->ec_747 = NULL;
F->t_732 = f_new_typ_154(((rt_int)12LL));
(*(P421)rt_nil_check(F->t_732)).elem = f_resolve_subtype_180((*(P417)rt_nil_check(F->st_178)).a, &F->ec_747);
(*(P421)rt_nil_check(F->t_732)).elemcons = F->ec_747;
if (((*(P417)rt_nil_check(F->st_178)).b != NULL)) {
(*(P419)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364((*(P417)rt_nil_check(F->st_178)).b, g_ty_int_473, &F->dummy_734); b_; }));
}
}
F->result_ = F->t_732;
goto ret_;
} else if (0 || (sel735 == ((rt_int)80LL))) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->st_178)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_474;
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->st_178)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_476;
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->st_178)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_481;
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->st_178)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_482;
goto ret_;
}
{
F->y_748 = NULL;
F->y_748 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->st_178)).name)));
if ((F->y_748 == NULL)) {
f_fail_21((*(P417)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->st_178)).name))); b_; }));
}
if (((((*(P427)rt_nil_check(F->y_748)).kind == ((rt_int)5LL)) && ((*(P427)rt_nil_check(F->y_748)).t != NULL)) && ((*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_748)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_192(F->y_748, F->st_178, &(*F->c_179));
goto ret_;
}
if (((((*(P427)rt_nil_check(F->y_748)).kind == ((rt_int)6LL)) || ((*(P427)rt_nil_check(F->y_748)).kind == ((rt_int)5LL))) && ((*(P427)rt_nil_check(F->y_748)).t != NULL))) {
if (((*(P427)rt_nil_check(F->y_748)).c != NULL)) {
(*F->c_179) = (*(P427)rt_nil_check(F->y_748)).c;
}
F->result_ = (*(P427)rt_nil_check(F->y_748)).t;
goto ret_;
}
if (((((*(P427)rt_nil_check(F->y_748)).kind == ((rt_int)5LL)) && ((*(P427)rt_nil_check(F->y_748)).decl != NULL)) && ((*(P417)rt_nil_check((*(P427)rt_nil_check(F->y_748)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_192(F->y_748, F->st_178, &(*F->c_179));
goto ret_;
}
if ((((*(P427)rt_nil_check(F->y_748)).kind == ((rt_int)6LL)) || ((*(P427)rt_nil_check(F->y_748)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_180((*(P427)rt_nil_check(F->y_748)).st, &(*F->c_179));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->st_178)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_21((*(P417)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_opened_182(P421 t_181) {
  struct f_opened_182fr *F = rt_alloc(sizeof *F);
F->t_181 = t_181;
F->c_749 = NULL;
F->c_749 = g_caps_462;
if (((((*(P421)rt_nil_check(F->t_181)).kind != ((rt_int)15LL)) || ((*(P421)rt_nil_check(F->t_181)).ocap == NULL)) || ((*(P417)rt_nil_check((*(P421)rt_nil_check(F->t_181)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_749 != NULL)) {
if (((*(P437)rt_nil_check(F->c_749)).d == (*(P421)rt_nil_check(F->t_181)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_749 = (*(P437)rt_nil_check(F->c_749)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_replace_all_186(rstr *s_183, rstr *pat_184, rstr *r_185) {
  struct f_replace_all_186fr *F = rt_alloc(sizeof *F);
F->s_183 = s_183;
F->pat_184 = pat_184;
F->r_185 = r_185;
F->i_750 = ((rt_int)1LL);
if (((((*F->pat_184)).len == ((rt_int)0LL)) || (((*F->s_183)).len < ((*F->pat_184)).len))) {
F->result_ = (*F->s_183);
goto ret_;
}
while ((rt_sub(rt_add(F->i_750, ((*F->pat_184)).len), ((rt_int)1LL)) <= ((*F->s_183)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_183), F->i_750, rt_sub(rt_add(F->i_750, ((*F->pat_184)).len), ((rt_int)1LL))), (*F->pat_184))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_183), ((rt_int)1LL), rt_sub(F->i_750, ((rt_int)1LL))), (*F->r_185)), f_replace_all_186(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_183), rt_add(F->i_750, ((*F->pat_184)).len), ((*F->s_183)).len); b_; }), &(*F->pat_184), &(*F->r_185)));
goto ret_;
}
F->i_750 = rt_add(F->i_750, ((rt_int)1LL));
}
F->result_ = (*F->s_183);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_subst_188(rstr *s_187) {
  struct f_subst_188fr *F = rt_alloc(sizeof *F);
F->s_187 = s_187;
F->l_751 = NULL;
F->l_751 = g_psub_463;
F->r_752 = NULL;
F->r_752 = f_mk_3(&(*F->s_187));
while ((F->l_751 != NULL)) {
F->r_752 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_186(&(*(P412)rt_nil_check(F->r_752)), &(*(P412)rt_nil_check((*(P429)rt_nil_check(F->l_751)).s)), &(*(P412)rt_nil_check((*(P429)rt_nil_check((*(P429)rt_nil_check(F->l_751)).next)).s))); b_; }));
F->l_751 = (*(P429)rt_nil_check((*(P429)rt_nil_check(F->l_751)).next)).next;
}
F->result_ = (*(P412)rt_nil_check(F->r_752));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P421 f_new_type_192(P427 y_189, P417 st_190, P419 *c_191) {
  struct f_new_type_192fr *F = rt_alloc(sizeof *F);
F->y_189 = y_189;
F->st_190 = st_190;
F->c_191 = c_191;
F->d_753 = NULL;
F->d_753 = (*(P427)rt_nil_check(F->y_189)).decl;
F->p_754 = NULL;
F->uc_755 = NULL;
(*F->c_191) = f_new_cons_155();
if (((*(P427)rt_nil_check(F->y_189)).t == NULL)) {
(*(P427)rt_nil_check(F->y_189)).t = f_new_typ_154(((rt_int)15LL));
(*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_189)).t)).name = (*(P427)rt_nil_check(F->y_189)).name;
(*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_189)).t)).decl = F->d_753;
(*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_189)).t)).tparams = (*(P417)rt_nil_check(F->d_753)).b;
if ((g_caps_462 != NULL)) {
(*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_189)).t)).ocap = (*(P437)rt_nil_check(g_caps_462)).d;
}
f_open_scope_148();
F->p_754 = (*(P417)rt_nil_check(F->d_753)).b;
while ((F->p_754 != NULL)) {
F->z_756 = NULL;
F->z_756 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->p_754)).name);
(*(P427)rt_nil_check(F->z_756)).t = g_ty_int_473;
(*(P427)rt_nil_check(F->z_756)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_754)).name)))), rt_str("@", 1)); b_; }));
f_define_142(F->z_756, (*(P417)rt_nil_check(F->d_753)).line);
F->p_754 = (*(P417)rt_nil_check(F->p_754)).next;
}
(*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_189)).t)).under = f_resolve_subtype_180((*(P417)rt_nil_check(F->d_753)).a, &F->uc_755);
(*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_189)).t)).elemcons = F->uc_755;
f_close_scope_149();
}
(*(P419)rt_nil_check((*F->c_191))).args = (*(P417)rt_nil_check(F->st_190)).b;
F->result_ = (*(P427)rt_nil_check(F->y_189)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_196(rstr *lval_193, P421 t_194, P419 c_195) {
  struct f_init_storage_196fr *F = rt_alloc(sizeof *F);
F->lval_193 = lval_193;
F->t_194 = t_194;
F->c_195 = c_195;
if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)15LL))) {
F->p_757 = NULL;
F->p_757 = (*(P421)rt_nil_check(F->t_194)).tparams;
F->a_758 = NULL;
F->a_758 = (*(P419)rt_nil_check(F->c_195)).args;
F->uc_759 = NULL;
F->ut_760 = NULL;
F->at_761 = NULL;
if ((f_list_len_52(F->a_758) != f_list_len_52(F->p_757))) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_194)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_52(F->p_757))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_757 != NULL)) {
F->v_762 = rt_str_copy(f_gexpr_364(F->a_758, g_ty_int_473, &F->at_761));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_193), rt_str(".p_", 3)), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_757)).name)))), rt_str(" = ", 3)), F->v_762), rt_str(";", 1)); b_; }));
F->p_757 = (*(P417)rt_nil_check(F->p_757)).next;
F->a_758 = (*(P417)rt_nil_check(F->a_758)).next;
}
{
F->saved_763 = NULL;
F->saved_763 = g_psub_463;
F->p_757 = (*(P421)rt_nil_check(F->t_194)).tparams;
while ((F->p_757 != NULL)) {
F->l1_764 = NULL;
F->l2_765 = NULL;
{ R430 *cell766 = rt_alloc(sizeof(R430));
(*cell766).s = NULL;
(*cell766).next = NULL;
F->l1_764 = cell766;
}
{ R430 *cell767 = rt_alloc(sizeof(R430));
(*cell767).s = NULL;
(*cell767).next = NULL;
F->l2_765 = cell767;
}
(*(P429)rt_nil_check(F->l1_764)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_757)).name)))), rt_str("@", 1)); b_; }));
(*(P429)rt_nil_check(F->l2_765)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_193), rt_str(".p_", 3)), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_757)).name)))); b_; }));
(*(P429)rt_nil_check(F->l1_764)).next = F->l2_765;
(*(P429)rt_nil_check(F->l2_765)).next = g_psub_463;
g_psub_463 = F->l1_764;
F->p_757 = (*(P417)rt_nil_check(F->p_757)).next;
}
if (((*(P421)rt_nil_check(F->t_194)).tparams == NULL)) {
f_init_storage_196(&(*F->lval_193), (*(P421)rt_nil_check(F->t_194)).under, (*(P421)rt_nil_check(F->t_194)).elemcons);
} else {
f_init_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_193), rt_str(".all", 4)); b_; }), (*(P421)rt_nil_check(F->t_194)).under, (*(P421)rt_nil_check(F->t_194)).elemcons);
}
g_psub_463 = F->saved_763;
}
} else if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)12LL))) {
if (((*(P419)rt_nil_check(F->c_195)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(&", 14), (*F->lval_193)), rt_str(", ", 2)), f_subst_188(&(*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_195)).lo)))), rt_str(", sizeof(", 9)), f_ctype_169((*(P421)rt_nil_check(F->t_194)).elem)), rt_str("), ", 3)), f_mcopy_201((*(P421)rt_nil_check(F->t_194)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)13LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_193)), rt_str(");", 2)); b_; }));
} else if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)14LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_193), rt_str(".active = 0; ", 13)), (*F->lval_193)), rt_str(".t = NULL; ", 11)), (*F->lval_193)), rt_str(".waiters = NULL;", 16)); b_; }));
} else if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)8LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_193), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)5LL))) {
if (((*(P419)rt_nil_check(F->c_195)).slen == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_193), rt_str(" = rt_str_new(", 14)), f_subst_188(&(*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_195)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)6LL))) {
if (((*(P419)rt_nil_check(F->c_195)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_193), rt_str(".lo = ", 6)), f_subst_188(&(*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_195)).lo)))), rt_str("; ", 2)), (*F->lval_193)), rt_str(".hi = ", 6)), f_subst_188(&(*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_195)).hi)))), rt_str("; ", 2)), (*F->lval_193)), rt_str(".lo2 = ", 7)), f_subst_188(&(*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_195)).lo2)))), rt_str("; ", 2)), (*F->lval_193)), rt_str(".hi2 = ", 7)), f_subst_188(&(*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_195)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_193), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_169((*(P421)rt_nil_check(F->t_194)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_193)), rt_str("));", 3)); b_; }));
if ((((((((((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)5LL)) || ((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)6LL))) || ((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)7LL))) || ((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)15LL))) || ((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)8LL))) || ((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)12LL))) || ((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)13LL))) || ((*(P421)rt_nil_check((*(P421)rt_nil_check(F->t_194)).elem)).kind == ((rt_int)14LL)))) {
F->i_768 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_768), rt_str(" = 0; ", 6)), F->i_768), rt_str(" < RT_CNT(", 10)), (*F->lval_193)), rt_str("); ", 3)), F->i_768), rt_str("++) {", 5)); b_; }));
f_init_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_193), rt_str(".p[", 3)), F->i_768), rt_str("]", 1)); b_; }), (*(P421)rt_nil_check(F->t_194)).elem, (*(P421)rt_nil_check(F->t_194)).elemcons);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P421)rt_nil_check(F->t_194)).kind == ((rt_int)7LL))) {
F->f_769 = NULL;
F->f_769 = (*(P421)rt_nil_check(F->t_194)).fields;
while ((F->f_769 != NULL)) {
f_init_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_193), rt_str(".", 1)), f_lower_s_15(&(*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_769)).name)))); b_; }), (*(P423)rt_nil_check(F->f_769)).t, (*(P423)rt_nil_check(F->f_769)).c);
F->f_769 = (*(P423)rt_nil_check(F->f_769)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_199(P417 e_197, int *ok_198) {
  struct f_manifest_199fr *F = rt_alloc(sizeof *F);
F->e_197 = e_197;
F->ok_198 = ok_198;
(*F->ok_198) = 0;
if (((*(P417)rt_nil_check(F->e_197)).kind == ((rt_int)1LL))) {
(*F->ok_198) = 1;
F->result_ = (*(P417)rt_nil_check(F->e_197)).ival;
goto ret_;
} else if (((*(P417)rt_nil_check(F->e_197)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_199((*(P417)rt_nil_check(F->e_197)).a, &(*F->ok_198));
goto ret_;
} else if ((((*(P417)rt_nil_check(F->e_197)).kind == ((rt_int)8LL)) && rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_197)).name)), rt_str("-", 1)))) {
F->a_770 = f_manifest_199((*(P417)rt_nil_check(F->e_197)).a, &(*F->ok_198));
F->result_ = rt_neg(F->a_770);
goto ret_;
} else if ((((*(P417)rt_nil_check(F->e_197)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_197)).name)), rt_str("+", 1)) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_197)).name)), rt_str("-", 1))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_197)).name)), rt_str("*", 1))))) {
F->a_770 = f_manifest_199((*(P417)rt_nil_check(F->e_197)).a, &(*F->ok_198));
F->b_771 = f_manifest_199((*(P417)rt_nil_check(F->e_197)).b, &F->ok2_772);
(*F->ok_198) = ((*F->ok_198) && F->ok2_772);
if ((!(*F->ok_198))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_197)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_770, F->b_771);
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_197)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_770, F->b_771);
goto ret_;
}
F->result_ = rt_mul(F->a_770, F->b_771);
goto ret_;
} else if (((*(P417)rt_nil_check(F->e_197)).kind == ((rt_int)7LL))) {
F->y_773 = NULL;
F->y_773 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_197)).name)));
if ((((F->y_773 != NULL) && ((*(P427)rt_nil_check(F->y_773)).kind == ((rt_int)2LL))) && (*(P427)rt_nil_check(F->y_773)).hasmv)) {
(*F->ok_198) = 1;
F->result_ = (*(P427)rt_nil_check(F->y_773)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_mcopy_201(P421 t_200) {
  struct f_mcopy_201fr *F = rt_alloc(sizeof *F);
F->t_200 = t_200;
F->ct_774 = rt_str_copy(f_ctype_169(F->t_200));
F->name_775 = rt_str_new(rt_add((F->ct_774).len, ((rt_int)3LL)));
rt_str_assign(&F->name_775, rt_str_cat(rt_str("mc_", 3), F->ct_774));
F->l_776 = NULL;
if ((!f_seen_name_222(g_mcopies_472, &F->name_775))) {
{ R430 *cell777 = rt_alloc(sizeof(R430));
(*cell777).s = NULL;
(*cell777).next = NULL;
F->l_776 = cell777;
}
(*(P429)rt_nil_check(F->l_776)).s = f_mk_3(&F->name_775);
(*(P429)rt_nil_check(F->l_776)).next = g_mcopies_472;
g_mcopies_472 = F->l_776;
f_put_25(g_out_protos_452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_775), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_775), rt_str("(void *d, const void *s) { *(", 29)), F->ct_774), rt_str(" *)d = ", 7)), f_copy_code_211(F->t_200, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_774), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_775;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_203(P421 t_202) {
  struct f_composite_203fr *F = rt_alloc(sizeof *F);
F->t_202 = t_202;
F->result_ = ((((*(P421)rt_nil_check(F->t_202)).kind == ((rt_int)6LL)) || ((*(P421)rt_nil_check(F->t_202)).kind == ((rt_int)7LL))) || (((*(P421)rt_nil_check(F->t_202)).kind == ((rt_int)15LL)) && ((*(P421)rt_nil_check(F->t_202)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_208(rstr *lval_204, P421 t_205, rstr *v_206, P419 c_207) {
  struct f_assign_code_208fr *F = rt_alloc(sizeof *F);
F->lval_204 = lval_204;
F->t_205 = t_205;
F->v_206 = v_206;
F->c_207 = c_207;
if ((((*(P421)rt_nil_check(F->t_205)).kind == ((rt_int)15LL)) && ((*(P421)rt_nil_check(F->t_205)).tparams == NULL))) {
F->result_ = f_assign_code_208(&(*F->lval_204), (*(P421)rt_nil_check(F->t_205)).under, &(*F->v_206), F->c_207);
goto ret_;
}
if (f_composite_203(F->t_205)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_169(F->t_205)), rt_str("(&", 2)), (*F->lval_204)), rt_str(", ", 2)), (*F->v_206)), rt_str(");", 2));
goto ret_;
}
if (((*(P421)rt_nil_check(F->t_205)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_204)), rt_str(", ", 2)), (*F->v_206)), rt_str(");", 2));
goto ret_;
} else if ((((*(P421)rt_nil_check(F->t_205)).kind == ((rt_int)6LL)) || ((*(P421)rt_nil_check(F->t_205)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_169(F->t_205)), rt_str("(&", 2)), (*F->lval_204)), rt_str(", ", 2)), (*F->v_206)), rt_str(");", 2));
goto ret_;
} else if (((((*(P421)rt_nil_check(F->t_205)).kind == ((rt_int)1LL)) && (F->c_207 != NULL)) && (*(P419)rt_nil_check(F->c_207)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_204), rt_str(" = rt_range(", 12)), (*F->v_206)), rt_str(", ", 2)), f_itos_7((*(P419)rt_nil_check(F->c_207)).mlo)), rt_str(", ", 2)), f_itos_7((*(P419)rt_nil_check(F->c_207)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_204), rt_str(" = ", 3)), (*F->v_206)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_211(P421 t_209, rstr *v_210) {
  struct f_copy_code_211fr *F = rt_alloc(sizeof *F);
F->t_209 = t_209;
F->v_210 = v_210;
if ((((*(P421)rt_nil_check(F->t_209)).kind == ((rt_int)15LL)) && ((*(P421)rt_nil_check(F->t_209)).tparams == NULL))) {
F->result_ = f_copy_code_211((*(P421)rt_nil_check(F->t_209)).under, &(*F->v_210));
goto ret_;
}
if (f_composite_203(F->t_209)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_169(F->t_209)), rt_str("(", 1)), (*F->v_210)), rt_str(")", 1));
goto ret_;
}
if (((*(P421)rt_nil_check(F->t_209)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_210)), rt_str(")", 1));
goto ret_;
} else if ((((*(P421)rt_nil_check(F->t_209)).kind == ((rt_int)6LL)) || ((*(P421)rt_nil_check(F->t_209)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_169(F->t_209)), rt_str("(", 1)), (*F->v_210)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_210);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_215(P421 t_212, rstr *a_213, rstr *b_214) {
  struct f_eq_code_215fr *F = rt_alloc(sizeof *F);
F->t_212 = t_212;
F->a_213 = a_213;
F->b_214 = b_214;
if ((((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)15LL)) && ((*(P421)rt_nil_check(F->t_212)).tparams == NULL))) {
F->result_ = f_eq_code_215((*(P421)rt_nil_check(F->t_212)).under, &(*F->a_213), &(*F->b_214));
goto ret_;
}
if (f_composite_203(F->t_212)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_169(F->t_212)), rt_str("(", 1)), (*F->a_213)), rt_str(", ", 2)), (*F->b_214)), rt_str(")", 1));
goto ret_;
}
if (((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_213)), rt_str(", ", 2)), (*F->b_214)), rt_str(")", 1));
goto ret_;
}
if (((((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)12LL)) || ((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)13LL))) || ((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)14LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_213)), rt_str(", ", 2)), (*F->b_214)), rt_str(")", 1));
goto ret_;
} else if ((((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)6LL)) || ((*(P421)rt_nil_check(F->t_212)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_169(F->t_212)), rt_str("(", 1)), (*F->a_213)), rt_str(", ", 2)), (*F->b_214)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_213)), rt_str(" == ", 4)), (*F->b_214)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_219(rstr *lval_216, P421 t_217, rstr *v_218) {
  struct f_elem_assign_219fr *F = rt_alloc(sizeof *F);
F->lval_216 = lval_216;
F->t_217 = t_217;
F->v_218 = v_218;
F->result_ = f_assign_code_208(&(*F->lval_216), F->t_217, &(*F->v_218), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_222(P429 l_220, rstr *s_221) {
  struct f_seen_name_222fr *F = rt_alloc(sizeof *F);
F->l_220 = l_220;
F->s_221 = s_221;
F->p_778 = NULL;
F->p_778 = F->l_220;
while ((F->p_778 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P429)rt_nil_check(F->p_778)).s)), (*F->s_221))) {
F->result_ = 1;
goto ret_;
}
F->p_778 = (*(P429)rt_nil_check(F->p_778)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_223(void) {
  struct f_emit_helpers_223fr *F = rt_alloc(sizeof *F);
F->order_779 = NULL;
F->t_780 = NULL;
F->t_780 = g_all_types_448;
F->done_781 = NULL;
while ((F->t_780 != NULL)) {
if ((f_composite_203(F->t_780) && (!f_seen_name_222(F->done_781, &(*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_780)).cname)))))) {
F->l_782 = NULL;
F->c_783 = rt_str_new(((*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_780)).cname))).len);
rt_str_assign(&F->c_783, (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_780)).cname)));
{ R430 *cell784 = rt_alloc(sizeof(R430));
(*cell784).s = NULL;
(*cell784).next = NULL;
F->l_782 = cell784;
}
(*(P429)rt_nil_check(F->l_782)).s = (*(P421)rt_nil_check(F->t_780)).cname;
(*(P429)rt_nil_check(F->l_782)).next = F->done_781;
F->done_781 = F->l_782;
f_put_25(g_out_helpers_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_783), rt_str("(", 1)), F->c_783), rt_str(" *d, ", 5)), F->c_783), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_783), rt_str(" cp_", 4)), F->c_783), rt_str("(", 1)), F->c_783), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_783), rt_str("(", 1)), F->c_783), rt_str(" a, ", 4)), F->c_783), rt_str(" b);", 4)); b_; }));
f_helper_bodies_225(F->t_780);
}
F->t_780 = (*(P421)rt_nil_check(F->t_780)).next;
}
ret_:
  return;
}

static void f_helper_bodies_225(P421 t_224) {
  struct f_helper_bodies_225fr *F = rt_alloc(sizeof *F);
F->t_224 = t_224;
F->c_785 = rt_str_new(((*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_224)).cname))).len);
rt_str_assign(&F->c_785, (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_224)).cname)));
F->b_786 = NULL;
F->b_786 = g_out_funcs_454;
if (((*(P421)rt_nil_check(F->t_224)).kind == ((rt_int)6LL))) {
F->e_787 = NULL;
F->e_787 = (*(P421)rt_nil_check(F->t_224)).elem;
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" *d, ", 5)), F->c_785), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_16()), rt_str("array length", 12)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_219(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_787, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_785), rt_str(" cp_", 4)), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_785), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_169(F->e_787)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_211(F->e_787, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" a, ", 4)), F->c_785), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_215(F->e_787, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P421)rt_nil_check(F->t_224)).kind == ((rt_int)15LL))) {
F->p_788 = NULL;
F->p_788 = (*(P421)rt_nil_check(F->t_224)).tparams;
F->pc_789 = NULL;
F->pc_789 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_788 != NULL)) {
F->pc_789 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->pc_789)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_788)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_788)).name)))); b_; }));
F->p_788 = (*(P417)rt_nil_check(F->p_788)).next;
}
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" *d, ", 5)), F->c_785), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P412)rt_nil_check(F->pc_789))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_16()), rt_str("constraint", 10)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_219(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P421)rt_nil_check(F->t_224)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_785), rt_str(" cp_", 4)), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" s) { s.all = ", 14)), f_copy_code_211((*(P421)rt_nil_check(F->t_224)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" a, ", 4)), F->c_785), rt_str(" b) { return ", 13)), f_eq_code_215((*(P421)rt_nil_check(F->t_224)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_790 = NULL;
F->f_790 = (*(P421)rt_nil_check(F->t_224)).fields;
F->conds_791 = NULL;
F->conds_791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" *d, ", 5)), F->c_785), rt_str(" s) {", 5)); b_; }));
while ((F->f_790 != NULL)) {
F->fn_792 = rt_str_copy(f_lower_s_15(&(*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_790)).name))));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_219(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_792); b_; }), (*(P423)rt_nil_check(F->f_790)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_792); b_; }))); b_; }));
F->f_790 = (*(P423)rt_nil_check(F->f_790)).next;
}
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_785), rt_str(" cp_", 4)), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_785), rt_str(" d = s;", 7)); b_; }));
F->f_790 = (*(P421)rt_nil_check(F->t_224)).fields;
while ((F->f_790 != NULL)) {
F->fn_793 = rt_str_copy(f_lower_s_15(&(*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_790)).name))));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_793), rt_str(" = ", 3)), f_copy_code_211((*(P423)rt_nil_check(F->f_790)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_793); b_; }))), rt_str(";", 1)); b_; }));
F->conds_791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->conds_791)), rt_str(" && ", 4)), f_eq_code_215((*(P423)rt_nil_check(F->f_790)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_793); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_793); b_; }))); b_; }));
F->f_790 = (*(P423)rt_nil_check(F->f_790)).next;
}
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_785), rt_str("(", 1)), F->c_785), rt_str(" a, ", 4)), F->c_785), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P412)rt_nil_check(F->conds_791))), rt_str(";", 1)); b_; }));
f_put_25(F->b_786, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_227(P417 elems_226) {
  struct f_declare_body_227fr *F = rt_alloc(sizeof *F);
F->elems_226 = elems_226;
F->e_794 = NULL;
F->e_794 = F->elems_226;
while ((F->e_794 != NULL)) {
if ((((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)41LL)) && ((*(P417)rt_nil_check(F->e_794)).flag == ((rt_int)0LL)))) {
f_manifest_const_229(F->e_794);
} else if (((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)47LL))) {
f_gen_capsule_237(F->e_794);
} else if (((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)48LL))) {
f_gen_expose_239(F->e_794);
} else if (((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)49LL))) {
F->y_795 = NULL;
F->y_795 = f_new_sym_152(((rt_int)7LL), (*(P417)rt_nil_check(F->e_794)).name);
(*(P427)rt_nil_check(F->y_795)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_794)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_142(F->y_795, (*(P417)rt_nil_check(F->e_794)).line);
f_put_25(g_out_globals_453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_795)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_excs_456, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_795)).cname))), rt_str(" = rt_exc(", 10)), f_q_16()), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_794)).name))), f_q_16()), rt_str(");", 2)); b_; }));
} else if (((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)42LL))) {
F->y_796 = NULL;
F->y_796 = f_new_sym_152(((rt_int)6LL), (*(P417)rt_nil_check(F->e_794)).name);
(*(P427)rt_nil_check(F->y_796)).st = (*(P417)rt_nil_check(F->e_794)).a;
f_define_142(F->y_796, (*(P417)rt_nil_check(F->e_794)).line);
} else if (((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)44LL))) {
F->y_797 = NULL;
F->y_797 = f_new_sym_152(((rt_int)5LL), (*(P417)rt_nil_check(F->e_794)).name);
F->t_798 = NULL;
F->t_798 = f_new_typ_154(((rt_int)8LL));
(*(P421)rt_nil_check(F->t_798)).name = (*(P417)rt_nil_check(F->e_794)).name;
(*(P421)rt_nil_check(F->t_798)).decl = F->e_794;
(*(P427)rt_nil_check(F->y_797)).t = F->t_798;
f_define_142(F->y_797, (*(P417)rt_nil_check(F->e_794)).line);
} else if (((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)43LL))) {
F->y_799 = NULL;
F->y_799 = f_new_sym_152(((rt_int)5LL), (*(P417)rt_nil_check(F->e_794)).name);
(*(P427)rt_nil_check(F->y_799)).st = (*(P417)rt_nil_check(F->e_794)).a;
(*(P427)rt_nil_check(F->y_799)).decl = F->e_794;
f_define_142(F->y_799, (*(P417)rt_nil_check(F->e_794)).line);
}
F->e_794 = (*(P417)rt_nil_check(F->e_794)).next;
}
F->e_794 = F->elems_226;
while ((F->e_794 != NULL)) {
if (((((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)45LL)) || ((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)46LL))) || ((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_243(F->e_794);
} else if (((*(P417)rt_nil_check(F->e_794)).kind == ((rt_int)51LL))) {
F->g_800 = NULL;
F->g_800 = f_new_sym_152(((rt_int)10LL), (*(P417)rt_nil_check(F->e_794)).name);
(*(P427)rt_nil_check(F->g_800)).decl = F->e_794;
(*(P427)rt_nil_check(F->g_800)).level = g_cur_level_460;
f_define_142(F->g_800, (*(P417)rt_nil_check(F->e_794)).line);
}
F->e_794 = (*(P417)rt_nil_check(F->e_794)).next;
}
ret_:
  return;
}

static void f_manifest_const_229(P417 d_228) {
  struct f_manifest_const_229fr *F = rt_alloc(sizeof *F);
F->d_228 = d_228;
F->y_803 = NULL;
F->c_804 = NULL;
if (((*(P417)rt_nil_check(F->d_228)).a != NULL)) {
if ((((*(P417)rt_nil_check((*(P417)rt_nil_check(F->d_228)).a)).kind != ((rt_int)70LL)) || ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->d_228)).a)).a != NULL))) {
goto ret_;
}
}
F->v_802 = f_manifest_199((*(P417)rt_nil_check(F->d_228)).b, &F->ok_801);
if ((!F->ok_801)) {
goto ret_;
}
(*(P417)rt_nil_check(F->d_228)).flag = ((rt_int)1LL);
F->y_803 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->d_228)).name);
(*(P427)rt_nil_check(F->y_803)).t = g_ty_int_473;
(*(P427)rt_nil_check(F->y_803)).c = f_new_cons_155();
(*(P427)rt_nil_check(F->y_803)).mvalue = F->v_802;
(*(P427)rt_nil_check(F->y_803)).hasmv = 1;
(*(P427)rt_nil_check(F->y_803)).ro_flag = 1;
(*(P427)rt_nil_check(F->y_803)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_802)), rt_str("LL)", 3)); b_; }));
f_define_142(F->y_803, (*(P417)rt_nil_check(F->d_228)).line);
ret_:
  return;
}

static int f_exported_233(P417 d_230, rstr *name_231, int *ro_232) {
  struct f_exported_233fr *F = rt_alloc(sizeof *F);
F->d_230 = d_230;
F->name_231 = name_231;
F->ro_232 = ro_232;
F->p_805 = NULL;
F->p_805 = (*(P417)rt_nil_check(F->d_230)).a;
(*F->ro_232) = 0;
if (((*(P417)rt_nil_check(F->d_230)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_805 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_805)).name)), (*F->name_231))) {
(*F->ro_232) = ((*(P417)rt_nil_check(F->p_805)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_805 = (*(P417)rt_nil_check(F->p_805)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P427 f_copy_sym_235(P427 y_234) {
  struct f_copy_sym_235fr *F = rt_alloc(sizeof *F);
F->y_234 = y_234;
F->z_806 = NULL;
{ R428 *cell807 = rt_alloc(sizeof(R428));
(*cell807).name = NULL;
(*cell807).t = NULL;
(*cell807).c = NULL;
(*cell807).access = NULL;
(*cell807).cname = NULL;
(*cell807).st = NULL;
(*cell807).decl = NULL;
(*cell807).params = NULL;
(*cell807).result = NULL;
(*cell807).members = NULL;
(*cell807).mnext = NULL;
(*cell807).binds = NULL;
(*cell807).insts = NULL;
(*cell807).chain = NULL;
(*cell807).stack = NULL;
F->z_806 = cell807;
}
(*(P427)rt_nil_check(F->z_806)).kind = (*(P427)rt_nil_check(F->y_234)).kind;
(*(P427)rt_nil_check(F->z_806)).name = (*(P427)rt_nil_check(F->y_234)).name;
(*(P427)rt_nil_check(F->z_806)).t = (*(P427)rt_nil_check(F->y_234)).t;
(*(P427)rt_nil_check(F->z_806)).c = (*(P427)rt_nil_check(F->y_234)).c;
(*(P427)rt_nil_check(F->z_806)).access = (*(P427)rt_nil_check(F->y_234)).access;
(*(P427)rt_nil_check(F->z_806)).cname = (*(P427)rt_nil_check(F->y_234)).cname;
(*(P427)rt_nil_check(F->z_806)).ro_flag = (*(P427)rt_nil_check(F->y_234)).ro_flag;
(*(P427)rt_nil_check(F->z_806)).mvalue = (*(P427)rt_nil_check(F->y_234)).mvalue;
(*(P427)rt_nil_check(F->z_806)).hasmv = (*(P427)rt_nil_check(F->y_234)).hasmv;
(*(P427)rt_nil_check(F->z_806)).st = (*(P427)rt_nil_check(F->y_234)).st;
(*(P427)rt_nil_check(F->z_806)).decl = (*(P427)rt_nil_check(F->y_234)).decl;
(*(P427)rt_nil_check(F->z_806)).params = (*(P427)rt_nil_check(F->y_234)).params;
(*(P427)rt_nil_check(F->z_806)).result = (*(P427)rt_nil_check(F->y_234)).result;
(*(P427)rt_nil_check(F->z_806)).level = (*(P427)rt_nil_check(F->y_234)).level;
(*(P427)rt_nil_check(F->z_806)).byref = (*(P427)rt_nil_check(F->y_234)).byref;
(*(P427)rt_nil_check(F->z_806)).members = (*(P427)rt_nil_check(F->y_234)).members;
F->result_ = F->z_806;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_237(P417 d_236) {
  struct f_gen_capsule_237fr *F = rt_alloc(sizeof *F);
F->d_236 = d_236;
F->y_808 = NULL;
F->y_808 = f_new_sym_152(((rt_int)8LL), (*(P417)rt_nil_check(F->d_236)).name);
F->cr_809 = NULL;
F->ctx_810 = NULL;
F->m_811 = NULL;
F->p_812 = NULL;
F->p_812 = (*(P417)rt_nil_check(F->d_236)).a;
(*(P427)rt_nil_check(F->y_808)).decl = F->d_236;
{ R438 *cell814 = rt_alloc(sizeof(R438));
(*cell814).d = NULL;
(*cell814).next = NULL;
F->cr_809 = cell814;
}
(*(P437)rt_nil_check(F->cr_809)).d = F->d_236;
(*(P437)rt_nil_check(F->cr_809)).next = g_caps_462;
g_caps_462 = F->cr_809;
f_open_scope_148();
{ R440 *cell815 = rt_alloc(sizeof(R440));
(*cell815).imps = NULL;
(*cell815).next = NULL;
F->ctx_810 = cell815;
}
(*(P439)rt_nil_check(F->ctx_810)).depth = g_depth_446;
(*(P439)rt_nil_check(F->ctx_810)).imps = (*(P417)rt_nil_check(F->d_236)).d;
(*(P439)rt_nil_check(F->ctx_810)).all_imp = ((*(P417)rt_nil_check(F->d_236)).flag >= ((rt_int)2LL));
(*(P439)rt_nil_check(F->ctx_810)).next = g_fctx_461;
g_fctx_461 = F->ctx_810;
f_declare_body_227((*(P417)rt_nil_check(F->d_236)).c);
f_body_elements_264((*(P417)rt_nil_check(F->d_236)).c);
g_fctx_461 = (*(P439)rt_nil_check(g_fctx_461)).next;
F->m_811 = g_scope_stack_447;
while (((F->m_811 != NULL) && ((*(P427)rt_nil_check(F->m_811)).depth == g_depth_446))) {
if ((((((*(P427)rt_nil_check(F->m_811)).kind == ((rt_int)5LL)) && ((*(P427)rt_nil_check(F->m_811)).t == NULL)) && ((*(P427)rt_nil_check(F->m_811)).decl != NULL)) && ((*(P417)rt_nil_check((*(P427)rt_nil_check(F->m_811)).decl)).kind == ((rt_int)43LL)))) {
(*(P427)rt_nil_check(F->m_811)).t = f_new_type_192(F->m_811, f_nn_46(((rt_int)80LL), (*(P417)rt_nil_check(F->d_236)).line), &(*(P427)rt_nil_check(F->m_811)).c);
} else if (((((*(P427)rt_nil_check(F->m_811)).kind == ((rt_int)5LL)) || ((*(P427)rt_nil_check(F->m_811)).kind == ((rt_int)6LL))) && ((*(P427)rt_nil_check(F->m_811)).t == NULL))) {
(*(P427)rt_nil_check(F->m_811)).t = f_resolve_subtype_180((*(P427)rt_nil_check(F->m_811)).st, &(*(P427)rt_nil_check(F->m_811)).c);
} else if ((((*(P427)rt_nil_check(F->m_811)).kind == ((rt_int)5LL)) && ((*(P421)rt_nil_check((*(P427)rt_nil_check(F->m_811)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_241((*(P427)rt_nil_check(F->m_811)).t);
}
F->m_811 = (*(P427)rt_nil_check(F->m_811)).stack;
}
F->m_811 = g_scope_stack_447;
while (((F->m_811 != NULL) && ((*(P427)rt_nil_check(F->m_811)).depth == g_depth_446))) {
if (f_exported_233(F->d_236, &(*(P412)rt_nil_check((*(P427)rt_nil_check(F->m_811)).name)), &F->ro_813)) {
F->z_816 = NULL;
F->z_816 = f_copy_sym_235(F->m_811);
if (F->ro_813) {
(*(P427)rt_nil_check(F->z_816)).ro_flag = 1;
}
(*(P427)rt_nil_check(F->z_816)).mnext = (*(P427)rt_nil_check(F->y_808)).members;
(*(P427)rt_nil_check(F->y_808)).members = F->z_816;
}
F->m_811 = (*(P427)rt_nil_check(F->m_811)).stack;
}
while ((F->p_812 != NULL)) {
if (((f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_812)).name))) == NULL) || ((*(P427)rt_nil_check(f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_812)).name))))).depth != g_depth_446))) {
f_fail_21((*(P417)rt_nil_check(F->d_236)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_812)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_236)).name))); b_; }));
}
F->p_812 = (*(P417)rt_nil_check(F->p_812)).next;
}
f_close_scope_149();
g_caps_462 = (*(P437)rt_nil_check(g_caps_462)).next;
f_define_142(F->y_808, (*(P417)rt_nil_check(F->d_236)).line);
ret_:
  return;
}

static void f_gen_expose_239(P417 d_238) {
  struct f_gen_expose_239fr *F = rt_alloc(sizeof *F);
F->d_238 = d_238;
F->y_817 = NULL;
F->y_817 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_238)).name)));
F->m_818 = NULL;
F->p_819 = NULL;
F->p_819 = (*(P417)rt_nil_check(F->d_238)).a;
if (((F->y_817 == NULL) || ((*(P427)rt_nil_check(F->y_817)).kind != ((rt_int)8LL)))) {
f_fail_21((*(P417)rt_nil_check(F->d_238)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_238)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P417)rt_nil_check(F->d_238)).ival == ((rt_int)1LL))) {
F->m_818 = (*(P427)rt_nil_check(F->y_817)).members;
while ((F->m_818 != NULL)) {
f_define_142(f_copy_sym_235(F->m_818), (*(P417)rt_nil_check(F->d_238)).line);
F->m_818 = (*(P427)rt_nil_check(F->m_818)).mnext;
}
goto ret_;
}
while ((F->p_819 != NULL)) {
F->found_820 = 0;
F->m_818 = (*(P427)rt_nil_check(F->y_817)).members;
while ((F->m_818 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->m_818)).name)), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_819)).name)))) {
F->z_821 = NULL;
F->z_821 = f_copy_sym_235(F->m_818);
if (((*(P417)rt_nil_check(F->p_819)).ival == ((rt_int)1LL))) {
(*(P427)rt_nil_check(F->z_821)).ro_flag = 1;
}
f_define_142(F->z_821, (*(P417)rt_nil_check(F->d_238)).line);
F->found_820 = 1;
}
F->m_818 = (*(P427)rt_nil_check(F->m_818)).mnext;
}
if ((!F->found_820)) {
f_fail_21((*(P417)rt_nil_check(F->d_238)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_819)).name)), rt_str(" is not exported by ", 20)), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_238)).name))); b_; }));
}
F->p_819 = (*(P417)rt_nil_check(F->p_819)).next;
}
ret_:
  return;
}

static void f_finish_ptr_241(P421 t_240) {
  struct f_finish_ptr_241fr *F = rt_alloc(sizeof *F);
F->t_240 = t_240;
F->d_822 = NULL;
F->d_822 = (*(P421)rt_nil_check(F->t_240)).decl;
F->p_823 = NULL;
F->c_824 = NULL;
F->dummy_825 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_825, rt_str(" ", 1));
if (((*(P421)rt_nil_check(F->t_240)).target != NULL)) {
goto ret_;
}
f_open_scope_148();
F->p_823 = (*(P417)rt_nil_check(F->d_822)).b;
while ((F->p_823 != NULL)) {
F->y_826 = NULL;
F->y_826 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->p_823)).name);
(*(P427)rt_nil_check(F->y_826)).t = g_ty_int_473;
(*(P427)rt_nil_check(F->y_826)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_142(F->y_826, (*(P417)rt_nil_check(F->d_822)).line);
F->p_823 = (*(P417)rt_nil_check(F->p_823)).next;
}
(*(P421)rt_nil_check(F->t_240)).target = f_resolve_subtype_180((*(P417)rt_nil_check(F->d_822)).a, &F->c_824);
f_close_scope_149();
(*rt_str_at(&F->dummy_825, ((rt_int)1LL))) = rt_str_get(f_ctype_169(F->t_240), ((rt_int)1LL));
(*rt_str_at(&F->dummy_825, ((rt_int)1LL))) = rt_str_get(f_ctype_169((*(P421)rt_nil_check(F->t_240)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_243(P417 d_242) {
  struct f_declare_subprogram_243fr *F = rt_alloc(sizeof *F);
F->d_242 = d_242;
f_define_142(f_build_subprogram_245(F->d_242), (*(P417)rt_nil_check(F->d_242)).line);
ret_:
  return;
}

static P427 f_build_subprogram_245(P417 d_244) {
  struct f_build_subprogram_245fr *F = rt_alloc(sizeof *F);
F->d_244 = d_244;
F->y_827 = NULL;
F->p_828 = NULL;
F->p_828 = (*(P417)rt_nil_check(F->d_244)).a;
F->tail_829 = NULL;
if (((*(P417)rt_nil_check(F->d_244)).kind == ((rt_int)46LL))) {
F->y_827 = f_new_sym_152(((rt_int)3LL), (*(P417)rt_nil_check(F->d_244)).name);
} else if (((*(P417)rt_nil_check(F->d_244)).kind == ((rt_int)50LL))) {
F->y_827 = f_new_sym_152(((rt_int)9LL), (*(P417)rt_nil_check(F->d_244)).name);
} else {
F->y_827 = f_new_sym_152(((rt_int)4LL), (*(P417)rt_nil_check(F->d_244)).name);
}
while ((F->p_828 != NULL)) {
F->pm_830 = NULL;
{ R426 *cell831 = rt_alloc(sizeof(R426));
(*cell831).name = NULL;
(*cell831).t = NULL;
(*cell831).c = NULL;
(*cell831).cfield = NULL;
(*cell831).next = NULL;
F->pm_830 = cell831;
}
(*(P425)rt_nil_check(F->pm_830)).name = (*(P417)rt_nil_check(F->p_828)).name;
(*(P425)rt_nil_check(F->pm_830)).mode = (*(P417)rt_nil_check(F->p_828)).ival;
(*(P425)rt_nil_check(F->pm_830)).t = f_resolve_subtype_180((*(P417)rt_nil_check(F->p_828)).a, &(*(P425)rt_nil_check(F->pm_830)).c);
(*(P425)rt_nil_check(F->pm_830)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_828)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_829 == NULL)) {
(*(P427)rt_nil_check(F->y_827)).params = F->pm_830;
} else {
(*(P425)rt_nil_check(F->tail_829)).next = F->pm_830;
}
F->tail_829 = F->pm_830;
F->p_828 = (*(P417)rt_nil_check(F->p_828)).next;
}
(*(P427)rt_nil_check(F->y_827)).result = g_ty_void_478;
if (((*(P417)rt_nil_check(F->d_244)).b != NULL)) {
F->rc_832 = NULL;
(*(P427)rt_nil_check(F->y_827)).result = f_resolve_subtype_180((*(P417)rt_nil_check(F->d_244)).b, &F->rc_832);
}
(*(P427)rt_nil_check(F->y_827)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_332(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_244)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P427)rt_nil_check(F->y_827)).decl = F->d_244;
(*(P427)rt_nil_check(F->y_827)).level = g_cur_level_460;
if (((*(P417)rt_nil_check(F->d_244)).kind == ((rt_int)50LL))) {
f_put_25(g_out_globals_453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_827)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_827;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_247(P417 e_246) {
  struct f_element_247fr *F = rt_alloc(sizeof *F);
F->e_246 = e_246;
F->k_833 = (*(P417)rt_nil_check(F->e_246)).kind;
if ((((F->k_833 == ((rt_int)45LL)) || (F->k_833 == ((rt_int)46LL))) || (F->k_833 == ((rt_int)50LL)))) {
f_subprogram_259(F->e_246);
} else if (((((((F->k_833 == ((rt_int)49LL)) || (F->k_833 == ((rt_int)42LL))) || (F->k_833 == ((rt_int)43LL))) || (F->k_833 == ((rt_int)47LL))) || (F->k_833 == ((rt_int)48LL))) || (F->k_833 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_833 == ((rt_int)44LL))) {
f_finish_ptr_241((*(P427)rt_nil_check(f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_246)).name))))).t);
} else if ((F->k_833 == ((rt_int)40LL))) {
f_var_decl_255(F->e_246);
} else if (((F->k_833 == ((rt_int)41LL)) && ((*(P417)rt_nil_check(F->e_246)).flag == ((rt_int)0LL)))) {
f_const_decl_257(F->e_246);
} else if ((F->k_833 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_833 == ((rt_int)33LL))) {
F->t_834 = NULL;
F->c_835 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_246)).a, g_ty_bool_474, &F->t_834));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_835), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_273(F->e_246);
}
ret_:
  return;
}

static rstr f_storage_250(rstr *name_248, P421 t_249) {
  struct f_storage_250fr *F = rt_alloc(sizeof *F);
F->name_248 = name_248;
F->t_249 = t_249;
if ((!g_in_func_459)) {
F->g_836 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_248))), rt_str("_", 1)); b_; })));
f_put_25(g_out_globals_453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_169(F->t_249)), rt_str(" ", 1)), F->g_836), rt_str(";", 1)); b_; }));
g_st_field_464 = f_mk_3(&F->g_836);
F->result_ = F->g_836;
goto ret_;
}
{
F->f_837 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_248)), rt_str("_", 1)); b_; })));
f_put_25(g_fields_buf_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_169(F->t_249)), rt_str(" ", 1)), F->f_837), rt_str(";", 1)); b_; }));
g_st_field_464 = f_mk_3(&F->f_837);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_837);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_253(P427 y_251, rstr *access_252) {
  struct f_bind_253fr *F = rt_alloc(sizeof *F);
F->y_251 = y_251;
F->access_252 = access_252;
if (g_in_func_459) {
(*(P427)rt_nil_check(F->y_251)).level = g_cur_level_460;
(*(P427)rt_nil_check(F->y_251)).access = g_st_field_464;
} else {
(*(P427)rt_nil_check(F->y_251)).level = ((rt_int)0LL);
(*(P427)rt_nil_check(F->y_251)).access = f_mk_3(&(*F->access_252));
}
ret_:
  return;
}

static void f_var_decl_255(P417 d_254) {
  struct f_var_decl_255fr *F = rt_alloc(sizeof *F);
F->d_254 = d_254;
F->c_838 = NULL;
F->t_839 = NULL;
F->t_839 = f_resolve_subtype_180((*(P417)rt_nil_check(F->d_254)).a, &F->c_838);
F->y_840 = NULL;
F->y_840 = f_new_sym_152(((rt_int)1LL), (*(P417)rt_nil_check(F->d_254)).name);
F->access_841 = rt_str_copy(f_storage_250(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_254)).name)), F->t_839));
f_init_storage_196(&F->access_841, F->t_839, F->c_838);
if (((*(P417)rt_nil_check(F->d_254)).b != NULL)) {
F->vt_842 = NULL;
F->v_843 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->d_254)).b, F->t_839, &F->vt_842));
f_check_type_167(F->vt_842, F->t_839, (*(P417)rt_nil_check(F->d_254)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_208(&F->access_841, F->t_839, &F->v_843, F->c_838); b_; }));
}
(*(P427)rt_nil_check(F->y_840)).t = F->t_839;
(*(P427)rt_nil_check(F->y_840)).c = F->c_838;
f_bind_253(F->y_840, &F->access_841);
f_define_142(F->y_840, (*(P417)rt_nil_check(F->d_254)).line);
ret_:
  return;
}

static void f_const_decl_257(P417 d_256) {
  struct f_const_decl_257fr *F = rt_alloc(sizeof *F);
F->d_256 = d_256;
F->c_844 = NULL;
F->c_844 = f_new_cons_155();
F->t_845 = NULL;
F->vt_846 = NULL;
F->y_847 = NULL;
F->y_847 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->d_256)).name);
if (((*(P417)rt_nil_check(F->d_256)).a != NULL)) {
F->t_845 = f_resolve_subtype_180((*(P417)rt_nil_check(F->d_256)).a, &F->c_844);
}
{
F->v_849 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->d_256)).b, F->t_845, &F->vt_846));
if ((F->t_845 != NULL)) {
f_check_type_167(F->vt_846, F->t_845, (*(P417)rt_nil_check(F->d_256)).line);
} else {
F->t_845 = F->vt_846;
}
if (((*(P421)rt_nil_check(F->t_845)).kind == ((rt_int)1LL))) {
(*(P427)rt_nil_check(F->y_847)).mvalue = f_manifest_199((*(P417)rt_nil_check(F->d_256)).b, &F->ok_848);
(*(P427)rt_nil_check(F->y_847)).hasmv = F->ok_848;
}
{
F->access_850 = rt_str_copy(f_storage_250(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->d_256)).name)), F->t_845));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_850, rt_str(" = ", 3)), f_copy_code_211(F->t_845, &F->v_849)), rt_str(";", 1)); b_; }));
f_bind_253(F->y_847, &F->access_850);
}
}
(*(P427)rt_nil_check(F->y_847)).t = F->t_845;
(*(P427)rt_nil_check(F->y_847)).c = F->c_844;
(*(P427)rt_nil_check(F->y_847)).ro_flag = 1;
f_define_142(F->y_847, (*(P417)rt_nil_check(F->d_256)).line);
ret_:
  return;
}

static void f_subprogram_259(P417 d_258) {
  struct f_subprogram_259fr *F = rt_alloc(sizeof *F);
F->d_258 = d_258;
f_gen_subprogram_262(F->d_258, f_lookup_decl_139(F->d_258));
ret_:
  return;
}

static void f_gen_subprogram_262(P417 d_260, P427 y_261) {
  struct f_gen_subprogram_262fr *F = rt_alloc(sizeof *F);
F->d_260 = d_260;
F->y_261 = y_261;
F->saved_code_851 = NULL;
F->saved_code_851 = g_code_457;
F->saved_fields_852 = NULL;
F->saved_fields_852 = g_fields_buf_458;
F->saved_in_853 = g_in_func_459;
F->saved_sym_854 = NULL;
F->saved_sym_854 = g_func_sym_466;
F->saved_exits_855 = NULL;
F->saved_exits_855 = g_exits_467;
F->saved_frames_856 = g_frames_468;
F->args_857 = NULL;
F->args_857 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_858 = NULL;
F->pm_858 = (*(P427)rt_nil_check(F->y_261)).params;
F->saved_handlers_859 = NULL;
F->saved_handlers_859 = g_handlers_469;
F->saved_cleanups_860 = NULL;
F->saved_cleanups_860 = g_cleanups_470;
F->ctx_861 = NULL;
F->head_862 = NULL;
F->frame_863 = NULL;
F->frame_863 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_261)).cname)), rt_str("fr", 2)); b_; }));
F->parent_864 = NULL;
if (g_in_func_459) {
F->parent_864 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P427)rt_nil_check(g_func_sym_466)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_457 = f_new_buffer_22();
g_fields_buf_458 = f_new_buffer_22();
g_in_func_459 = 1;
g_func_sym_466 = F->y_261;
g_exits_467 = NULL;
g_frames_468 = ((rt_int)0LL);
g_handlers_469 = NULL;
g_cleanups_470 = NULL;
g_cur_level_460 = rt_add(g_cur_level_460, ((rt_int)1LL));
f_open_scope_148();
{ R440 *cell865 = rt_alloc(sizeof(R440));
(*cell865).imps = NULL;
(*cell865).next = NULL;
F->ctx_861 = cell865;
}
(*(P439)rt_nil_check(F->ctx_861)).depth = g_depth_446;
(*(P439)rt_nil_check(F->ctx_861)).imps = (*(P417)rt_nil_check(F->d_260)).d;
(*(P439)rt_nil_check(F->ctx_861)).all_imp = ((*(P417)rt_nil_check(F->d_260)).flag >= ((rt_int)2LL));
(*(P439)rt_nil_check(F->ctx_861)).next = g_fctx_461;
g_fctx_461 = F->ctx_861;
if ((F->parent_864 != NULL)) {
f_put_25(g_fields_buf_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P412)rt_nil_check(F->parent_864))), rt_str(" *up;", 5)); b_; }));
if (((*(P427)rt_nil_check(F->y_261)).kind != ((rt_int)9LL))) {
F->args_857 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P412)rt_nil_check(F->parent_864))), rt_str(" *up_", 5)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_858 != NULL)) {
F->ct_866 = rt_str_copy(f_ctype_169((*(P425)rt_nil_check(F->pm_858)).t));
F->f_867 = rt_str_copy((*(P412)rt_nil_check((*(P425)rt_nil_check(F->pm_858)).cfield)));
F->p_868 = NULL;
if ((((*(P412)rt_nil_check(F->args_857))).len > ((rt_int)0LL))) {
F->args_857 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->args_857)), rt_str(", ", 2)); b_; }));
}
if (((*(P425)rt_nil_check(F->pm_858)).mode == ((rt_int)1LL))) {
F->p_868 = f_new_sym_152(((rt_int)2LL), (*(P425)rt_nil_check(F->pm_858)).name);
f_put_25(g_fields_buf_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_866), rt_str(" ", 1)), F->f_867), rt_str(";", 1)); b_; }));
F->args_857 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->args_857)), F->ct_866), rt_str(" ", 1)), F->f_867); b_; }));
(*(P427)rt_nil_check(F->p_868)).access = f_mk_3(&F->f_867);
if (((*(P427)rt_nil_check(F->y_261)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_867), rt_str(" = ", 3)), f_copy_code_211((*(P425)rt_nil_check(F->pm_858)).t, &F->f_867)), rt_str(";", 1)); b_; }));
}
} else {
F->p_868 = f_new_sym_152(((rt_int)1LL), (*(P425)rt_nil_check(F->pm_858)).name);
f_put_25(g_fields_buf_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_866), rt_str(" *", 2)), F->f_867), rt_str(";", 1)); b_; }));
F->args_857 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->args_857)), F->ct_866), rt_str(" *", 2)), F->f_867); b_; }));
(*(P427)rt_nil_check(F->p_868)).access = f_mk_3(&F->f_867);
(*(P427)rt_nil_check(F->p_868)).byref = 1;
if (((*(P427)rt_nil_check(F->y_261)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_867), rt_str(" = ", 3)), F->f_867), rt_str(";", 1)); b_; }));
}
}
(*(P427)rt_nil_check(F->p_868)).t = (*(P425)rt_nil_check(F->pm_858)).t;
(*(P427)rt_nil_check(F->p_868)).c = (*(P425)rt_nil_check(F->pm_858)).c;
(*(P427)rt_nil_check(F->p_868)).level = g_cur_level_460;
(*(P427)rt_nil_check(F->p_868)).ro_flag = (((*(P425)rt_nil_check(F->pm_858)).mode == ((rt_int)1LL)) || ((*(P425)rt_nil_check(F->pm_858)).mode == ((rt_int)4LL)));
f_define_142(F->p_868, (*(P417)rt_nil_check(F->d_260)).line);
F->pm_858 = (*(P425)rt_nil_check(F->pm_858)).next;
}
if (((*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_261)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_fields_buf_458, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_169((*(P427)rt_nil_check(F->y_261)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_227((*(P417)rt_nil_check(F->d_260)).c);
f_body_elements_264((*(P417)rt_nil_check(F->d_260)).c);
f_close_scope_149();
g_fctx_461 = (*(P439)rt_nil_check(g_fctx_461)).next;
g_cur_level_460 = rt_sub(g_cur_level_460, ((rt_int)1LL));
if (((((*(P412)rt_nil_check(F->args_857))).len == ((rt_int)0LL)) || ((*(P427)rt_nil_check(F->y_261)).kind == ((rt_int)9LL)))) {
F->args_857 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P427)rt_nil_check(F->y_261)).kind == ((rt_int)9LL))) {
F->args_857 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_862 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_169((*(P427)rt_nil_check(F->y_261)).result)), rt_str(" ", 1)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_261)).cname))), rt_str("(", 1)), (*(P412)rt_nil_check(F->args_857))), rt_str(")", 1)); b_; }));
f_put_25(g_out_protos_452, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->head_862)), rt_str(";", 1)); b_; }));
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->head_862)), rt_str(" {", 2)); b_; }));
f_put_25(g_out_frames_465, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P412)rt_nil_check(F->frame_863))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_32(g_out_frames_465, g_fields_buf_458);
f_put_25(g_out_frames_465, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P427)rt_nil_check(F->y_261)).kind == ((rt_int)9LL))) {
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P412)rt_nil_check(F->frame_863))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P412)rt_nil_check(F->frame_863))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_32(g_out_funcs_454, g_code_457);
if (((*(P421)rt_nil_check((*(P427)rt_nil_check(F->y_261)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_16()), rt_str("function ended without RETURN", 29)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(g_out_funcs_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_457 = F->saved_code_851;
g_fields_buf_458 = F->saved_fields_852;
g_in_func_459 = F->saved_in_853;
g_func_sym_466 = F->saved_sym_854;
g_exits_467 = F->saved_exits_855;
g_frames_468 = F->saved_frames_856;
g_handlers_469 = F->saved_handlers_859;
g_cleanups_470 = F->saved_cleanups_860;
ret_:
  return;
}

static void f_body_elements_264(P417 elems_263) {
  struct f_body_elements_264fr *F = rt_alloc(sizeof *F);
F->elems_263 = elems_263;
F->e_869 = NULL;
F->e_869 = F->elems_263;
while ((F->e_869 != NULL)) {
f_element_247(F->e_869);
F->e_869 = (*(P417)rt_nil_check(F->e_869)).next;
}
F->e_869 = F->elems_263;
while ((F->e_869 != NULL)) {
if (((*(P417)rt_nil_check(F->e_869)).kind == ((rt_int)50LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_await_decl(&", 15), (*(P412)rt_nil_check((*(P427)rt_nil_check(f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_869)).name))))).cname))), rt_str("decl);", 6)); b_; }));
}
F->e_869 = (*(P417)rt_nil_check(F->e_869)).next;
}
ret_:
  return;
}

static void f_gen_body_266(P417 elems_265) {
  struct f_gen_body_266fr *F = rt_alloc(sizeof *F);
F->elems_265 = elems_265;
f_open_scope_148();
f_declare_body_227(F->elems_265);
f_body_elements_264(F->elems_265);
f_close_scope_149();
ret_:
  return;
}

static void f_pop_frames_268(rt_int upto_267) {
  struct f_pop_frames_268fr *F = rt_alloc(sizeof *F);
F->upto_267 = upto_267;
F->i_870 = g_frames_468;
F->c_871 = NULL;
F->c_871 = g_cleanups_470;
while ((F->i_870 > F->upto_267)) {
f_emit_27(&(*(P412)rt_nil_check((*(P429)rt_nil_check(F->c_871)).s)));
F->c_871 = (*(P429)rt_nil_check(F->c_871)).next;
F->i_870 = rt_sub(F->i_870, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_270(rstr *s_269) {
  struct f_push_cleanup_270fr *F = rt_alloc(sizeof *F);
F->s_269 = s_269;
F->c_872 = NULL;
{ R430 *cell873 = rt_alloc(sizeof(R430));
(*cell873).s = NULL;
(*cell873).next = NULL;
F->c_872 = cell873;
}
(*(P429)rt_nil_check(F->c_872)).s = f_mk_3(&(*F->s_269));
(*(P429)rt_nil_check(F->c_872)).next = g_cleanups_470;
g_cleanups_470 = F->c_872;
g_frames_468 = rt_add(g_frames_468, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_271(void) {
  struct f_pop_cleanup_271fr *F = rt_alloc(sizeof *F);
g_cleanups_470 = (*(P429)rt_nil_check(g_cleanups_470)).next;
g_frames_468 = rt_sub(g_frames_468, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_273(P417 s_272) {
  struct f_gen_statement_273fr *F = rt_alloc(sizeof *F);
F->s_272 = s_272;
F->label_874 = NULL;
if (((*(P417)rt_nil_check(F->s_272)).tag != NULL)) {
F->x_875 = NULL;
{ R436 *cell876 = rt_alloc(sizeof(R436));
(*cell876).match = NULL;
(*cell876).label = NULL;
(*cell876).next = NULL;
F->x_875 = cell876;
}
F->label_874 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P435)rt_nil_check(F->x_875)).match = (*(P417)rt_nil_check(F->s_272)).tag;
(*(P435)rt_nil_check(F->x_875)).label = F->label_874;
(*(P435)rt_nil_check(F->x_875)).depth = g_frames_468;
(*(P435)rt_nil_check(F->x_875)).next = g_exits_467;
g_exits_467 = F->x_875;
}
{ rt_int sel877 = (*(P417)rt_nil_check(F->s_272)).kind;
if (0 || (sel877 == ((rt_int)20LL))) {
f_st_assign_275(F->s_272);
} else if (0 || (sel877 == ((rt_int)21LL))) {
f_st_call_277(F->s_272);
} else if (0 || (sel877 == ((rt_int)22LL))) {
f_st_if_279(F->s_272);
} else if (0 || (sel877 == ((rt_int)23LL))) {
f_st_case_281(F->s_272);
} else if (0 || (sel877 == ((rt_int)24LL))) {
f_st_repeat_283(F->s_272);
} else if (0 || (sel877 == ((rt_int)25LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_266((*(P417)rt_nil_check(F->s_272)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel877 == ((rt_int)27LL))) {
f_st_exit_285(F->s_272);
} else if (0 || (sel877 == ((rt_int)28LL))) {
f_st_return_287(F->s_272);
} else if (0 || (sel877 == ((rt_int)30LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_290(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->s_272)).name)), (*(P417)rt_nil_check(F->s_272)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel877 == ((rt_int)31LL))) {
if ((g_handlers_469 == NULL)) {
f_fail_21((*(P417)rt_nil_check(F->s_272)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P412)rt_nil_check((*(P429)rt_nil_check(g_handlers_469)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel877 == ((rt_int)26LL))) {
f_st_guard_292(F->s_272);
} else if (0 || (sel877 == ((rt_int)32LL))) {
f_st_alloc_294(F->s_272);
} else if (0 || (sel877 == ((rt_int)34LL))) {
f_st_create_298(F->s_272);
} else if (0 || (sel877 == ((rt_int)35LL))) {
f_st_wait_304(F->s_272);
} else if (0 || (sel877 == ((rt_int)36LL))) {
f_st_region_306(F->s_272);
} else {
f_fail_21((*(P417)rt_nil_check(F->s_272)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P417)rt_nil_check(F->s_272)).tag != NULL)) {
g_exits_467 = (*(P435)rt_nil_check(g_exits_467)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->label_874)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_275(P417 s_274) {
  struct f_st_assign_275fr *F = rt_alloc(sizeof *F);
F->s_274 = s_274;
F->lv_878 = NULL;
F->t_879 = NULL;
F->vt_880 = NULL;
F->c_881 = NULL;
if (((((*(P417)rt_nil_check((*(P417)rt_nil_check(F->s_274)).a)).kind == ((rt_int)10LL)) && ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->s_274)).a)).b != NULL)) && ((*(P417)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->s_274)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_343((*(P417)rt_nil_check((*(P417)rt_nil_check(F->s_274)).a)).a, &F->lv_878, &F->t_879, &F->c_881, &F->ro_882);
if ((F->ro_882 || ((*(P421)rt_nil_check(F->t_879)).kind != ((rt_int)5LL)))) {
f_fail_21((*(P417)rt_nil_check(F->s_274)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_883 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->s_274)).a)).b)).a, g_ty_int_473, &F->vt_880));
F->hi_884 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->s_274)).a)).b)).b, g_ty_int_473, &F->vt_880));
F->v_885 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->s_274)).b, g_ty_string_477, &F->vt_880));
f_check_type_167(F->vt_880, g_ty_string_477, (*(P417)rt_nil_check(F->s_274)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P412)rt_nil_check(F->lv_878))), rt_str(", ", 2)), F->lo_883), rt_str(", ", 2)), F->hi_884), rt_str(", ", 2)), F->v_885), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_343((*(P417)rt_nil_check(F->s_274)).a, &F->lv_878, &F->t_879, &F->c_881, &F->ro_882);
if (F->ro_882) {
f_fail_21((*(P417)rt_nil_check(F->s_274)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if ((!f_opened_182(F->t_879))) {
f_fail_21((*(P417)rt_nil_check(F->s_274)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->t_879)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_886 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->s_274)).b, F->t_879, &F->vt_880));
f_check_type_167(F->vt_880, F->t_879, (*(P417)rt_nil_check(F->s_274)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_208(&(*(P412)rt_nil_check(F->lv_878)), F->t_879, &F->v_886, F->c_881); b_; }));
}
ret_:
  return;
}

static void f_st_call_277(P417 s_276) {
  struct f_st_call_277fr *F = rt_alloc(sizeof *F);
F->s_276 = s_276;
F->c_887 = NULL;
F->c_887 = (*(P417)rt_nil_check(F->s_276)).a;
F->t_888 = NULL;
if ((((*(P417)rt_nil_check(F->c_887)).kind == ((rt_int)7LL)) || ((*(P417)rt_nil_check(F->c_887)).kind == ((rt_int)12LL)))) {
F->x_889 = NULL;
F->x_889 = f_nn_46(((rt_int)10LL), (*(P417)rt_nil_check(F->c_887)).line);
(*(P417)rt_nil_check(F->x_889)).a = F->c_887;
F->c_887 = F->x_889;
}
if (((*(P417)rt_nil_check(F->c_887)).kind != ((rt_int)10LL))) {
f_fail_21((*(P417)rt_nil_check(F->s_276)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_401(F->c_887, 1, &F->t_888), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_279(P417 s_278) {
  struct f_st_if_279fr *F = rt_alloc(sizeof *F);
F->s_278 = s_278;
F->a_890 = NULL;
F->a_890 = (*(P417)rt_nil_check(F->s_278)).a;
F->first_891 = 1;
F->t_892 = NULL;
while ((F->a_890 != NULL)) {
F->c_893 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->a_890)).a, g_ty_bool_474, &F->t_892));
f_check_type_167(F->t_892, g_ty_bool_474, (*(P417)rt_nil_check(F->s_278)).line);
if (F->first_891) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_893), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_893), rt_str(") {", 3)); b_; }));
}
F->first_891 = 0;
f_gen_body_266((*(P417)rt_nil_check(F->a_890)).b);
F->a_890 = (*(P417)rt_nil_check(F->a_890)).next;
}
if (((*(P417)rt_nil_check(F->s_278)).flag == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_266((*(P417)rt_nil_check(F->s_278)).b);
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_281(P417 s_280) {
  struct f_st_case_281fr *F = rt_alloc(sizeof *F);
F->s_280 = s_280;
F->st_894 = NULL;
F->vt_895 = NULL;
F->first_896 = 1;
F->a_897 = NULL;
F->a_897 = (*(P417)rt_nil_check(F->s_280)).b;
F->sel_898 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->s_280)).a, NULL, &F->st_894));
F->tmp_899 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_169(F->st_894)), rt_str(" ", 1)), F->tmp_899), rt_str(" = ", 3)), F->sel_898), rt_str(";", 1)); b_; }));
while ((F->a_897 != NULL)) {
F->lab_900 = NULL;
F->lab_900 = (*(P417)rt_nil_check(F->a_897)).a;
F->conds_901 = NULL;
F->conds_901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_900 != NULL)) {
if (((*(P417)rt_nil_check(F->lab_900)).b == NULL)) {
F->v_902 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->lab_900)).a, F->st_894, &F->vt_895));
f_check_type_167(F->vt_895, F->st_894, (*(P417)rt_nil_check(F->s_280)).line);
F->conds_901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->conds_901)), rt_str(" || ", 4)), f_eq_code_215(F->st_894, &F->tmp_899, &F->v_902)); b_; }));
} else {
F->lo_903 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->lab_900)).a, F->st_894, &F->vt_895));
F->hi_904 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->lab_900)).b, F->st_894, &F->vt_895));
F->conds_901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->conds_901)), rt_str(" || (", 5)), F->tmp_899), rt_str(" >= ", 4)), F->lo_903), rt_str(" && ", 4)), F->tmp_899), rt_str(" <= ", 4)), F->hi_904), rt_str(")", 1)); b_; }));
}
F->lab_900 = (*(P417)rt_nil_check(F->lab_900)).next;
}
if (F->first_896) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P412)rt_nil_check(F->conds_901))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P412)rt_nil_check(F->conds_901))), rt_str(") {", 3)); b_; }));
}
F->first_896 = 0;
f_gen_body_266((*(P417)rt_nil_check(F->a_897)).b);
F->a_897 = (*(P417)rt_nil_check(F->a_897)).next;
}
if (F->first_896) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P417)rt_nil_check(F->s_280)).flag == ((rt_int)1LL))) {
f_gen_body_266((*(P417)rt_nil_check(F->s_280)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_283(P417 s_282) {
  struct f_st_repeat_283fr *F = rt_alloc(sizeof *F);
F->s_282 = s_282;
F->t_905 = NULL;
F->c_906 = NULL;
if (((*(P417)rt_nil_check(F->s_282)).flag == ((rt_int)0LL))) {
F->cond_907 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->s_282)).a, g_ty_bool_474, &F->t_905));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_907), rt_str(") {", 3)); b_; }));
f_gen_body_266((*(P417)rt_nil_check(F->s_282)).b);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_905 = f_resolve_subtype_180((*(P417)rt_nil_check(F->s_282)).a, &F->c_906);
if ((((*(P421)rt_nil_check(F->t_905)).kind == ((rt_int)4LL)) && ((*(P419)rt_nil_check(F->c_906)).lo == NULL))) {
(*(P419)rt_nil_check(F->c_906)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P419)rt_nil_check(F->c_906)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P421)rt_nil_check(F->t_905)).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P419)rt_nil_check(F->c_906)).lo == NULL)) {
f_fail_21((*(P417)rt_nil_check(F->s_282)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_908 = rt_str_copy(f_storage_250(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->s_282)).name)), F->t_905));
F->lov_909 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_910 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_911 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_912 = NULL;
F->y_912 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->s_282)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_909), rt_str(" = ", 3)), (*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_906)).lo))), rt_str(", ", 2)), F->hiv_910), rt_str(" = ", 3)), (*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_906)).hi))), rt_str(";", 1)); b_; }));
if (((*(P417)rt_nil_check(F->s_282)).ival == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_911), rt_str(" = ", 3)), F->hiv_910), rt_str("; ", 2)), F->it_911), rt_str(" >= ", 4)), F->lov_909), rt_str("; ", 2)), F->it_911), rt_str("--) {", 5)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_911), rt_str(" = ", 3)), F->lov_909), rt_str("; ", 2)), F->it_911), rt_str(" <= ", 4)), F->hiv_910), rt_str("; ", 2)), F->it_911), rt_str("++) {", 5)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_908, rt_str(" = ", 3)), F->it_911), rt_str(";", 1)); b_; }));
f_open_scope_148();
(*(P427)rt_nil_check(F->y_912)).t = F->t_905;
(*(P427)rt_nil_check(F->y_912)).c = F->c_906;
f_bind_253(F->y_912, &F->access_908);
(*(P427)rt_nil_check(F->y_912)).ro_flag = 1;
f_define_142(F->y_912, (*(P417)rt_nil_check(F->s_282)).line);
f_gen_body_266((*(P417)rt_nil_check(F->s_282)).b);
f_close_scope_149();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_285(P417 s_284) {
  struct f_st_exit_285fr *F = rt_alloc(sizeof *F);
F->s_284 = s_284;
F->x_913 = NULL;
F->x_913 = g_exits_467;
while ((F->x_913 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P435)rt_nil_check(F->x_913)).match)), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->s_284)).name)))) {
f_pop_frames_268((*(P435)rt_nil_check(F->x_913)).depth);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P412)rt_nil_check((*(P435)rt_nil_check(F->x_913)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_913 = (*(P435)rt_nil_check(F->x_913)).next;
}
f_fail_21((*(P417)rt_nil_check(F->s_284)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->s_284)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_287(P417 s_286) {
  struct f_st_return_287fr *F = rt_alloc(sizeof *F);
F->s_286 = s_286;
F->vt_914 = NULL;
if ((!g_in_func_459)) {
f_pop_frames_268(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P421)rt_nil_check((*(P427)rt_nil_check(g_func_sym_466)).result)).kind == ((rt_int)9LL))) {
if (((*(P417)rt_nil_check(F->s_286)).a != NULL)) {
f_fail_21((*(P417)rt_nil_check(F->s_286)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_268(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P417)rt_nil_check(F->s_286)).a == NULL)) {
f_fail_21((*(P417)rt_nil_check(F->s_286)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_915 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->s_286)).a, (*(P427)rt_nil_check(g_func_sym_466)).result, &F->vt_914));
f_check_type_167(F->vt_914, (*(P427)rt_nil_check(g_func_sym_466)).result, (*(P417)rt_nil_check(F->s_286)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_915), rt_str(";", 1)); b_; }));
f_pop_frames_268(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_290(rstr *name_288, rt_int line_289) {
  struct f_exc_id_290fr *F = rt_alloc(sizeof *F);
F->name_288 = name_288;
F->line_289 = line_289;
F->y_916 = NULL;
F->y_916 = f_lookup_137(&(*F->name_288));
if (((F->y_916 != NULL) && ((*(P427)rt_nil_check(F->y_916)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_916)).cname));
goto ret_;
}
if (((((*F->name_288)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_288), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_16()), (*F->name_288)), f_q_16()), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_289, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_288), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_292(P417 s_291) {
  struct f_st_guard_292fr *F = rt_alloc(sizeof *F);
F->s_291 = s_291;
F->h_917 = NULL;
F->h_917 = (*(P417)rt_nil_check(F->s_291)).b;
F->first_918 = 1;
F->hv_919 = NULL;
{
F->f_920 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_921 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_270(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_920), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_920), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_920), rt_str(")) {", 4)); b_; }));
f_gen_body_266((*(P417)rt_nil_check(F->s_291)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_920), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_271();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_920), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_921), rt_str(" = rt_xcur;", 11)); b_; }));
{ R430 *cell922 = rt_alloc(sizeof(R430));
(*cell922).s = NULL;
(*cell922).next = NULL;
F->hv_919 = cell922;
}
(*(P429)rt_nil_check(F->hv_919)).s = f_mk_3(&F->x_921);
(*(P429)rt_nil_check(F->hv_919)).next = g_handlers_469;
g_handlers_469 = F->hv_919;
while ((F->h_917 != NULL)) {
F->n_923 = NULL;
F->n_923 = (*(P417)rt_nil_check(F->h_917)).a;
F->conds_924 = NULL;
F->conds_924 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_923 != NULL)) {
F->conds_924 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->conds_924)), rt_str(" || ", 4)), F->x_921), rt_str(" == ", 4)), f_exc_id_290(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->n_923)).name)), (*(P417)rt_nil_check(F->s_291)).line)); b_; }));
F->n_923 = (*(P417)rt_nil_check(F->n_923)).next;
}
if (F->first_918) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P412)rt_nil_check(F->conds_924))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P412)rt_nil_check(F->conds_924))), rt_str(") {", 3)); b_; }));
}
F->first_918 = 0;
f_gen_body_266((*(P417)rt_nil_check(F->h_917)).b);
F->h_917 = (*(P417)rt_nil_check(F->h_917)).next;
}
if (F->first_918) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P417)rt_nil_check(F->s_291)).flag == ((rt_int)1LL))) {
f_gen_body_266((*(P417)rt_nil_check(F->s_291)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_921), rt_str(");", 2)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_469 = (*(P429)rt_nil_check(g_handlers_469)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_294(P417 s_293) {
  struct f_st_alloc_294fr *F = rt_alloc(sizeof *F);
F->s_293 = s_293;
F->lv_925 = NULL;
F->t_926 = NULL;
F->target_927 = NULL;
F->vt_928 = NULL;
F->c_929 = NULL;
F->tc_930 = NULL;
F->d_932 = NULL;
F->p_933 = NULL;
F->a_934 = NULL;
f_lvalue_343((*(P417)rt_nil_check(F->s_293)).a, &F->lv_925, &F->t_926, &F->c_929, &F->ro_931);
if (((*(P421)rt_nil_check(F->t_926)).kind != ((rt_int)8LL))) {
f_fail_21((*(P417)rt_nil_check(F->s_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_241(F->t_926);
F->d_932 = (*(P421)rt_nil_check(F->t_926)).decl;
F->target_927 = (*(P421)rt_nil_check(F->t_926)).target;
if ((f_list_len_52((*(P417)rt_nil_check(F->s_293)).b) != f_list_len_52((*(P417)rt_nil_check(F->d_932)).b))) {
f_fail_21((*(P417)rt_nil_check(F->s_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_52((*(P417)rt_nil_check(F->d_932)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_935 = rt_str_copy(f_ctype_169(F->target_927));
F->cell_936 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_935), rt_str(" *", 2)), F->cell_936), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_935), rt_str("));", 3)); b_; }));
f_open_scope_148();
F->p_933 = (*(P417)rt_nil_check(F->d_932)).b;
F->a_934 = (*(P417)rt_nil_check(F->s_293)).b;
while ((F->p_933 != NULL)) {
F->v_937 = rt_str_copy(f_gexpr_364(F->a_934, g_ty_int_473, &F->vt_928));
F->pv_938 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_939 = NULL;
F->y_939 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->p_933)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_938), rt_str(" = ", 3)), F->v_937), rt_str(";", 1)); b_; }));
(*(P427)rt_nil_check(F->y_939)).t = g_ty_int_473;
(*(P427)rt_nil_check(F->y_939)).access = f_mk_3(&F->pv_938);
f_define_142(F->y_939, (*(P417)rt_nil_check(F->s_293)).line);
F->p_933 = (*(P417)rt_nil_check(F->p_933)).next;
F->a_934 = (*(P417)rt_nil_check(F->a_934)).next;
}
F->vt_928 = f_resolve_subtype_180((*(P417)rt_nil_check(F->d_932)).a, &F->tc_930);
f_init_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_936), rt_str(")", 1)); b_; }), F->target_927, F->tc_930);
f_close_scope_149();
if (((*(P417)rt_nil_check(F->s_293)).c != NULL)) {
F->v_940 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->s_293)).c, F->target_927, &F->vt_928));
f_check_type_167(F->vt_928, F->target_927, (*(P417)rt_nil_check(F->s_293)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_208(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_936), rt_str(")", 1)); b_; }), F->target_927, &F->v_940, F->tc_930); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->lv_925)), rt_str(" = ", 3)), F->cell_936), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_296(P417 e_295) {
  struct f_act_ref_296fr *F = rt_alloc(sizeof *F);
F->e_295 = e_295;
F->lv_941 = NULL;
F->t_942 = NULL;
F->c_943 = NULL;
if (((((*(P417)rt_nil_check(F->e_295)).kind == ((rt_int)7LL)) && rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_295)).name)), rt_str("ME", 2))) && (f_lookup_137(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_343(F->e_295, &F->lv_941, &F->t_942, &F->c_943, &F->ro_944);
if (((*(P421)rt_nil_check(F->t_942)).kind != ((rt_int)14LL))) {
f_fail_21((*(P417)rt_nil_check(F->e_295)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P412)rt_nil_check(F->lv_941)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_298(P417 s_297) {
  struct f_st_create_298fr *F = rt_alloc(sizeof *F);
F->s_297 = s_297;
F->y_945 = NULL;
F->y_945 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->s_297)).name)));
F->pm_946 = NULL;
F->a_947 = NULL;
F->a_947 = (*(P417)rt_nil_check(F->s_297)).b;
F->lv_948 = NULL;
F->lt_949 = NULL;
F->vt_950 = NULL;
F->lc_951 = NULL;
if (((F->y_945 != NULL) && ((*(P427)rt_nil_check(F->y_945)).kind == ((rt_int)10LL)))) {
F->y_945 = f_instantiate_322(F->y_945, (*(P417)rt_nil_check(F->s_297)).e, (*(P417)rt_nil_check(F->s_297)).b, (*(P417)rt_nil_check(F->s_297)).line);
}
if (((F->y_945 == NULL) || ((*(P427)rt_nil_check(F->y_945)).kind != ((rt_int)9LL)))) {
f_fail_21((*(P417)rt_nil_check(F->s_297)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->s_297)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_946 = (*(P427)rt_nil_check(F->y_945)).params;
{
F->nf_953 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_954 = rt_str_copy(f_act_ref_296((*(P417)rt_nil_check(F->s_297)).a));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_945)).cname))), rt_str("fr *", 4)), F->nf_953), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_953), rt_str(");", 2)); b_; }));
if (((*(P427)rt_nil_check(F->y_945)).level > ((rt_int)0LL))) {
F->link_955 = NULL;
F->link_955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo957 = ((rt_int)1LL), hi958 = rt_sub(g_cur_level_460, (*(P427)rt_nil_check(F->y_945)).level);
for (rt_int it959 = lo957; it959 <= hi958; it959++) {
F->i_956 = it959;
F->link_955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->link_955)), rt_str("->up", 4)); b_; }));
}
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_953, rt_str("->up = ", 7)), (*(P412)rt_nil_check(F->link_955))), rt_str(";", 1)); b_; }));
}
while (((F->a_947 != NULL) && (F->pm_946 != NULL))) {
if (((*(P425)rt_nil_check(F->pm_946)).mode == ((rt_int)1LL))) {
F->v_960 = rt_str_copy(f_gexpr_364(F->a_947, (*(P425)rt_nil_check(F->pm_946)).t, &F->vt_950));
f_check_type_167(F->vt_950, (*(P425)rt_nil_check(F->pm_946)).t, (*(P417)rt_nil_check(F->s_297)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_953, rt_str("->", 2)), (*(P412)rt_nil_check((*(P425)rt_nil_check(F->pm_946)).cfield))), rt_str(" = ", 3)), f_copy_code_211((*(P425)rt_nil_check(F->pm_946)).t, &F->v_960)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_343(F->a_947, &F->lv_948, &F->lt_949, &F->lc_951, &F->ro_952);
f_check_type_167(F->lt_949, (*(P425)rt_nil_check(F->pm_946)).t, (*(P417)rt_nil_check(F->s_297)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_953, rt_str("->", 2)), (*(P412)rt_nil_check((*(P425)rt_nil_check(F->pm_946)).cfield))), rt_str(" = &", 4)), (*(P412)rt_nil_check(F->lv_948))), rt_str(";", 1)); b_; }));
}
F->a_947 = (*(P417)rt_nil_check(F->a_947)).next;
F->pm_946 = (*(P425)rt_nil_check(F->pm_946)).next;
}
if (((F->a_947 != NULL) || (F->pm_946 != NULL))) {
f_fail_21((*(P417)rt_nil_check(F->s_297)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->s_297)).name))); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_954), rt_str(", &", 3)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_945)).cname))), rt_str("decl, ", 6)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_945)).cname))), rt_str(", ", 2)), F->nf_953), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_302(P417 inv_299, rstr *arr_300, rt_int i_301) {
  struct f_wait_alt_302fr *F = rt_alloc(sizeof *F);
F->inv_299 = inv_299;
F->arr_300 = arr_300;
F->i_301 = i_301;
F->lv_961 = NULL;
F->t_962 = NULL;
F->vt_963 = NULL;
F->c_964 = NULL;
F->fn_966 = NULL;
F->args_967 = NULL;
F->slot_968 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_300), rt_str("[", 1)), f_itos_7(F->i_301)), rt_str("]", 1)));
if ((((*(P417)rt_nil_check(F->inv_299)).kind != ((rt_int)10LL)) || ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->inv_299)).a)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P417)rt_nil_check(F->inv_299)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_966 = (*(P417)rt_nil_check(F->inv_299)).a;
F->args_967 = (*(P417)rt_nil_check(F->inv_299)).b;
if ((rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_343(F->args_967, &F->lv_961, &F->t_962, &F->c_964, &F->ro_965);
if (((*(P421)rt_nil_check(F->t_962)).kind != ((rt_int)12LL))) {
f_fail_21((*(P417)rt_nil_check(F->inv_299)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str("RECEIVE", 7))) {
F->dv_969 = NULL;
F->dt_970 = NULL;
f_lvalue_343((*(P417)rt_nil_check(F->args_967)).next, &F->dv_969, &F->dt_970, &F->c_964, &F->ro_965);
f_check_type_167(F->dt_970, (*(P421)rt_nil_check(F->t_962)).elem, (*(P417)rt_nil_check(F->inv_299)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_968, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, &", 32)), (*(P412)rt_nil_check(F->lv_961))), rt_str(", &", 3)), (*(P412)rt_nil_check(F->dv_969))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_971 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_972 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->args_967)).next, (*(P421)rt_nil_check(F->t_962)).elem, &F->vt_963));
f_check_type_167(F->vt_963, (*(P421)rt_nil_check(F->t_962)).elem, (*(P417)rt_nil_check(F->inv_299)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_169((*(P421)rt_nil_check(F->t_962)).elem), rt_str(" ", 1)), F->tmp_971), rt_str(" = ", 3)), F->v_972), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_968, rt_str(" = (rt_alt){RT_ALT_SEND, 1, &", 29)), (*(P412)rt_nil_check(F->lv_961))), rt_str(", &", 3)), F->tmp_971), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_973 = rt_str_copy(f_gexpr_364(F->args_967, g_ty_int_473, &F->vt_963));
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_968, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_973), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_968, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_973), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_968, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_296(F->args_967)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->inv_299)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_966)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_wait_304(P417 s_303) {
  struct f_st_wait_304fr *F = rt_alloc(sizeof *F);
F->s_303 = s_303;
F->a_974 = NULL;
F->a_974 = (*(P417)rt_nil_check(F->s_303)).a;
F->n_975 = ((rt_int)0LL);
F->first_976 = 1;
F->inits_977 = NULL;
F->inits_977 = f_new_buffer_22();
F->arr_978 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_979 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_974 != NULL)) {
F->n_975 = rt_add(F->n_975, f_list_len_52((*(P417)rt_nil_check(F->a_974)).a));
F->a_974 = (*(P417)rt_nil_check(F->a_974)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_978), rt_str("[", 1)), f_itos_7(F->n_975)), rt_str("];", 2)); b_; }));
F->a_974 = (*(P417)rt_nil_check(F->s_303)).a;
F->n_975 = ((rt_int)0LL);
while ((F->a_974 != NULL)) {
F->inv_980 = NULL;
F->inv_980 = (*(P417)rt_nil_check(F->a_974)).a;
while ((F->inv_980 != NULL)) {
f_put_25(F->inits_977, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_302(F->inv_980, &F->arr_978, F->n_975); b_; }));
F->n_975 = rt_add(F->n_975, ((rt_int)1LL));
F->inv_980 = (*(P417)rt_nil_check(F->inv_980)).next;
}
F->a_974 = (*(P417)rt_nil_check(F->a_974)).next;
}
f_splice_32(g_code_457, F->inits_977);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_979), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_975)), rt_str(", ", 2)), F->arr_978), rt_str(");", 2)); b_; }));
F->a_974 = (*(P417)rt_nil_check(F->s_303)).a;
F->n_975 = ((rt_int)0LL);
while ((F->a_974 != NULL)) {
F->conds_981 = NULL;
F->conds_981 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo983 = ((rt_int)1LL), hi984 = f_list_len_52((*(P417)rt_nil_check(F->a_974)).a);
for (rt_int it985 = lo983; it985 <= hi984; it985++) {
F->i_982 = it985;
F->conds_981 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->conds_981)), rt_str(" || ", 4)), F->w_979), rt_str(" == ", 4)), f_itos_7(F->n_975)); b_; }));
F->n_975 = rt_add(F->n_975, ((rt_int)1LL));
}
}
if (F->first_976) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P412)rt_nil_check(F->conds_981))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P412)rt_nil_check(F->conds_981))), rt_str(") {", 3)); b_; }));
}
F->first_976 = 0;
f_gen_body_266((*(P417)rt_nil_check(F->a_974)).b);
F->a_974 = (*(P417)rt_nil_check(F->a_974)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_306(P417 s_305) {
  struct f_st_region_306fr *F = rt_alloc(sizeof *F);
F->s_305 = s_305;
F->lv_986 = NULL;
F->t_987 = NULL;
F->c_988 = NULL;
F->lk_990 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_991 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_343((*(P417)rt_nil_check(F->s_305)).a, &F->lv_986, &F->t_987, &F->c_988, &F->ro_989);
if (((*(P421)rt_nil_check(F->t_987)).kind != ((rt_int)13LL))) {
f_fail_21((*(P417)rt_nil_check(F->s_305)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION needs a DATA_LOCK variable", 33); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_990), rt_str(" = &", 4)), (*(P412)rt_nil_check(F->lv_986))), rt_str("; rt_region_enter(", 18)), F->lk_990), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_991), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_991), rt_str(")) {", 4)); b_; }));
f_push_cleanup_270(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_991), rt_str("); rt_region_leave(", 19)), F->lk_990), rt_str(");", 2)); b_; }));
f_gen_body_266((*(P417)rt_nil_check(F->s_305)).b);
f_pop_cleanup_271();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_991), rt_str("); rt_region_leave(", 19)), F->lk_990), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_991), rt_str("); rt_region_leave(", 19)), F->lk_990), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P417 f_gparam_309(P417 g_307, rstr *name_308) {
  struct f_gparam_309fr *F = rt_alloc(sizeof *F);
F->g_307 = g_307;
F->name_308 = name_308;
F->p_992 = NULL;
F->p_992 = (*(P417)rt_nil_check(F->g_307)).a;
while ((F->p_992 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_992)).name)), (*F->name_308))) {
F->result_ = F->p_992;
goto ret_;
}
F->p_992 = (*(P417)rt_nil_check(F->p_992)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P427 f_bind_sym_311(P417 p_310) {
  struct f_bind_sym_311fr *F = rt_alloc(sizeof *F);
F->p_310 = p_310;
F->y_993 = NULL;
if (((*(P417)rt_nil_check(F->p_310)).ival <= ((rt_int)2LL))) {
F->y_993 = f_new_sym_152(((rt_int)5LL), (*(P417)rt_nil_check(F->p_310)).name);
} else {
F->y_993 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->p_310)).name);
}
F->result_ = F->y_993;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_314(P427 a_312, P427 b_313) {
  struct f_same_binds_314fr *F = rt_alloc(sizeof *F);
F->a_312 = a_312;
F->b_313 = b_313;
F->x_994 = NULL;
F->x_994 = F->a_312;
F->y_995 = NULL;
F->y_995 = F->b_313;
while (((F->x_994 != NULL) && (F->y_995 != NULL))) {
if (((!rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->x_994)).name)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_995)).name)))) || (!f_same_binding_317(F->x_994, F->y_995)))) {
F->result_ = 0;
goto ret_;
}
F->x_994 = (*(P427)rt_nil_check(F->x_994)).mnext;
F->y_995 = (*(P427)rt_nil_check(F->y_995)).mnext;
}
F->result_ = ((F->x_994 == NULL) && (F->y_995 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_317(P427 a_315, P427 b_316) {
  struct f_same_binding_317fr *F = rt_alloc(sizeof *F);
F->a_315 = a_315;
F->b_316 = b_316;
if (((*(P427)rt_nil_check(F->a_315)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P427)rt_nil_check(F->b_316)).kind == ((rt_int)5LL)) && f_same_161((*(P427)rt_nil_check(F->a_315)).t, (*(P427)rt_nil_check(F->b_316)).t));
goto ret_;
}
if ((((*(P427)rt_nil_check(F->a_315)).kind == ((rt_int)2LL)) && (*(P427)rt_nil_check(F->a_315)).hasmv)) {
F->result_ = ((*(P427)rt_nil_check(F->b_316)).hasmv && ((*(P427)rt_nil_check(F->a_315)).mvalue == (*(P427)rt_nil_check(F->b_316)).mvalue));
goto ret_;
}
F->result_ = ((((*(P427)rt_nil_check(F->a_315)).cname != NULL) && ((*(P427)rt_nil_check(F->b_316)).cname != NULL)) && rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->a_315)).cname)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->b_316)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P427 f_instantiate_322(P427 g_318, P417 tt_319, P417 args_320, rt_int line_321) {
  struct f_instantiate_322fr *F = rt_alloc(sizeof *F);
F->g_318 = g_318;
F->tt_319 = tt_319;
F->args_320 = args_320;
F->line_321 = line_321;
F->gd_996 = NULL;
F->gd_996 = (*(P427)rt_nil_check(F->g_318)).decl;
F->pat_997 = NULL;
F->pat_997 = (*(P417)rt_nil_check(F->gd_996)).b;
F->binds_998 = NULL;
F->f_999 = NULL;
F->f_999 = (*(P417)rt_nil_check(F->pat_997)).e;
F->a_1000 = NULL;
F->a_1000 = F->tt_319;
F->fp_1001 = NULL;
F->fp_1001 = (*(P417)rt_nil_check(F->pat_997)).a;
F->inst_1002 = NULL;
F->at_1003 = NULL;
F->c_1004 = NULL;
F->saved_fctx_1005 = NULL;
F->saved_fctx_1005 = g_fctx_461;
F->saved_in_1006 = g_in_func_459;
F->saved_level_1007 = g_cur_level_460;
F->saved_sym_1008 = NULL;
F->saved_sym_1008 = g_func_sym_466;
F->saved_code_1009 = NULL;
F->saved_code_1009 = g_code_457;
while (((F->f_999 != NULL) && (F->a_1000 != NULL))) {
F->p_1010 = NULL;
F->p_1010 = f_gparam_309(F->gd_996, &(*(P412)rt_nil_check((*(P417)rt_nil_check(F->f_999)).name)));
F->b_1011 = NULL;
if ((F->p_1010 == NULL)) {
f_fail_21(F->line_321, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->f_999)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1011 = f_bind_sym_311(F->p_1010);
if (((*(P417)rt_nil_check(F->p_1010)).ival <= ((rt_int)2LL))) {
if (((*(P417)rt_nil_check(F->a_1000)).kind >= ((rt_int)70LL))) {
(*(P427)rt_nil_check(F->b_1011)).t = f_resolve_subtype_180(F->a_1000, &F->c_1004);
} else {
F->st_1012 = NULL;
F->st_1012 = f_nn_46(((rt_int)80LL), F->line_321);
(*(P417)rt_nil_check(F->st_1012)).name = (*(P417)rt_nil_check(F->a_1000)).name;
(*(P427)rt_nil_check(F->b_1011)).t = f_resolve_subtype_180(F->st_1012, &F->c_1004);
}
(*(P427)rt_nil_check(F->b_1011)).c = F->c_1004;
} else if (((*(P417)rt_nil_check(F->p_1010)).ival <= ((rt_int)5LL))) {
if ((((*(P417)rt_nil_check(F->a_1000)).kind != ((rt_int)7LL)) || (f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->a_1000)).name))) == NULL))) {
f_fail_21(F->line_321, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_1010)).name))); b_; }));
}
F->b_1011 = f_copy_sym_235(f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->a_1000)).name))));
(*(P427)rt_nil_check(F->b_1011)).name = (*(P417)rt_nil_check(F->p_1010)).name;
} else {
(*(P427)rt_nil_check(F->b_1011)).t = f_resolve_subtype_180((*(P417)rt_nil_check(F->p_1010)).a, &F->c_1004);
(*(P427)rt_nil_check(F->b_1011)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364(F->a_1000, (*(P427)rt_nil_check(F->b_1011)).t, &F->at_1003); b_; }));
(*(P427)rt_nil_check(F->b_1011)).mvalue = f_manifest_199(F->a_1000, &F->ok_1013);
(*(P427)rt_nil_check(F->b_1011)).hasmv = F->ok_1013;
}
(*(P427)rt_nil_check(F->b_1011)).mnext = F->binds_998;
F->binds_998 = F->b_1011;
F->f_999 = (*(P417)rt_nil_check(F->f_999)).next;
F->a_1000 = (*(P417)rt_nil_check(F->a_1000)).next;
}
F->a_1000 = F->args_320;
while (((F->fp_1001 != NULL) && (F->a_1000 != NULL))) {
if (((((*(P417)rt_nil_check((*(P417)rt_nil_check(F->fp_1001)).a)).kind == ((rt_int)80LL)) && (f_gparam_309(F->gd_996, &(*(P412)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->fp_1001)).a)).name))) != NULL)) && ((*(P417)rt_nil_check(f_gparam_309(F->gd_996, &(*(P412)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->fp_1001)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1014 = 0;
F->q_1015 = NULL;
F->q_1015 = F->binds_998;
while ((F->q_1015 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->q_1015)).name)), (*(P412)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->fp_1001)).a)).name)))) {
F->known_1014 = 1;
}
F->q_1015 = (*(P427)rt_nil_check(F->q_1015)).mnext;
}
if ((!F->known_1014)) {
F->b_1016 = NULL;
F->b_1016 = f_bind_sym_311(f_gparam_309(F->gd_996, &(*(P412)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->fp_1001)).a)).name))));
F->v_1017 = rt_str_copy(f_gexpr_364(F->a_1000, NULL, &F->at_1003));
(*(P427)rt_nil_check(F->b_1016)).t = F->at_1003;
(*(P427)rt_nil_check(F->b_1016)).c = g_no_cons_483;
(*(P427)rt_nil_check(F->b_1016)).mnext = F->binds_998;
F->binds_998 = F->b_1016;
}
}
F->fp_1001 = (*(P417)rt_nil_check(F->fp_1001)).next;
F->a_1000 = (*(P417)rt_nil_check(F->a_1000)).next;
}
F->inst_1002 = (*(P427)rt_nil_check(F->g_318)).insts;
while ((F->inst_1002 != NULL)) {
if (f_same_binds_314((*(P427)rt_nil_check(F->inst_1002)).members, F->binds_998)) {
F->result_ = F->inst_1002;
goto ret_;
}
F->inst_1002 = (*(P427)rt_nil_check(F->inst_1002)).insts;
}
g_fctx_461 = NULL;
g_in_func_459 = 0;
g_cur_level_460 = ((rt_int)0LL);
g_func_sym_466 = NULL;
g_code_457 = f_new_buffer_22();
f_open_scope_148();
{
F->b_1018 = NULL;
F->b_1018 = F->binds_998;
while ((F->b_1018 != NULL)) {
f_define_142(F->b_1018, F->line_321);
F->b_1018 = (*(P427)rt_nil_check(F->b_1018)).mnext;
}
}
F->inst_1002 = f_build_subprogram_245(F->pat_997);
(*(P427)rt_nil_check(F->inst_1002)).members = F->binds_998;
(*(P427)rt_nil_check(F->inst_1002)).insts = (*(P427)rt_nil_check(F->g_318)).insts;
(*(P427)rt_nil_check(F->g_318)).insts = F->inst_1002;
f_define_142(F->inst_1002, F->line_321);
f_gen_subprogram_262(F->pat_997, F->inst_1002);
f_close_scope_149();
g_fctx_461 = F->saved_fctx_1005;
g_in_func_459 = F->saved_in_1006;
g_cur_level_460 = F->saved_level_1007;
g_func_sym_466 = F->saved_sym_1008;
g_code_457 = F->saved_code_1009;
F->result_ = F->inst_1002;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_324(P427 y_323) {
  struct f_access_of_324fr *F = rt_alloc(sizeof *F);
F->y_323 = y_323;
F->p_1019 = NULL;
F->p_1019 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P427)rt_nil_check(F->y_323)).level <= ((rt_int)0LL))) {
F->result_ = (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_323)).access));
goto ret_;
}
{ rt_int lo1021 = ((rt_int)1LL), hi1022 = rt_sub(g_cur_level_460, (*(P427)rt_nil_check(F->y_323)).level);
for (rt_int it1023 = lo1021; it1023 <= hi1022; it1023++) {
F->i_1020 = it1023;
F->p_1019 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->p_1019)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P427)rt_nil_check(F->y_323)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P412)rt_nil_check(F->p_1019))), rt_str("->", 2)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_323)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->p_1019)), rt_str("->", 2)), (*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_323)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_import_of_327(P417 l_325, rstr *name_326) {
  struct f_import_of_327fr *F = rt_alloc(sizeof *F);
F->l_325 = l_325;
F->name_326 = name_326;
F->p_1024 = NULL;
F->p_1024 = F->l_325;
while ((F->p_1024 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_1024)).name)), (*F->name_326))) {
F->result_ = F->p_1024;
goto ret_;
}
F->p_1024 = (*(P417)rt_nil_check(F->p_1024)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_330(P427 y_328, rt_int line_329) {
  struct f_check_import_330fr *F = rt_alloc(sizeof *F);
F->y_328 = y_328;
F->line_329 = line_329;
F->c_1025 = NULL;
F->c_1025 = g_fctx_461;
F->ro_1026 = 0;
while (((F->c_1025 != NULL) && ((*(P427)rt_nil_check(F->y_328)).depth < (*(P439)rt_nil_check(F->c_1025)).depth))) {
if ((!(*(P439)rt_nil_check(F->c_1025)).all_imp)) {
F->imp_1027 = NULL;
F->imp_1027 = f_import_of_327((*(P439)rt_nil_check(F->c_1025)).imps, &(*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_328)).name)));
if ((F->imp_1027 == NULL)) {
f_fail_21(F->line_329, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_328)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P417)rt_nil_check(F->imp_1027)).ival == ((rt_int)1LL))) {
F->ro_1026 = 1;
}
}
F->c_1025 = (*(P439)rt_nil_check(F->c_1025)).next;
}
F->result_ = F->ro_1026;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_332(rstr *s_331) {
  struct f_c_ident_332fr *F = rt_alloc(sizeof *F);
F->s_331 = s_331;
if (rt_str_eq((*F->s_331), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_331), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_331));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_335(rstr *base_333, P421 t_334) {
  struct f_deref_335fr *F = rt_alloc(sizeof *F);
F->base_333 = base_333;
F->t_334 = t_334;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_169(F->t_334)), rt_str(")rt_nil_check(", 14)), (*F->base_333)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_337(P417 e_336) {
  struct f_is_lvalue_337fr *F = rt_alloc(sizeof *F);
F->e_336 = e_336;
if (((*(P417)rt_nil_check(F->e_336)).kind == ((rt_int)7LL))) {
F->y_1028 = NULL;
F->y_1028 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_336)).name)));
F->result_ = ((F->y_1028 != NULL) && (((*(P427)rt_nil_check(F->y_1028)).kind == ((rt_int)1LL)) || ((*(P427)rt_nil_check(F->y_1028)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P417)rt_nil_check(F->e_336)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_337((*(P417)rt_nil_check(F->e_336)).a);
goto ret_;
} else if (((*(P417)rt_nil_check(F->e_336)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_336)).name)), rt_str("LEN", 3))) && f_is_lvalue_337((*(P417)rt_nil_check(F->e_336)).a));
goto ret_;
} else if (((*(P417)rt_nil_check(F->e_336)).kind == ((rt_int)10LL))) {
if ((((*(P417)rt_nil_check(F->e_336)).b != NULL) && ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_336)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_337((*(P417)rt_nil_check(F->e_336)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_343(P417 e_338, P412 *code_339, P421 *t_340, P419 *c_341, int *ro_342) {
  struct f_lvalue_343fr *F = rt_alloc(sizeof *F);
F->e_338 = e_338;
F->code_339 = code_339;
F->t_340 = t_340;
F->c_341 = c_341;
F->ro_342 = ro_342;
F->base_1029 = NULL;
F->bt_1030 = NULL;
F->bc_1031 = NULL;
if (((*(P417)rt_nil_check(F->e_338)).kind == ((rt_int)7LL))) {
F->y_1032 = NULL;
F->y_1032 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_338)).name)));
if ((F->y_1032 == NULL)) {
f_fail_21((*(P417)rt_nil_check(F->e_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_338)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P427)rt_nil_check(F->y_1032)).kind != ((rt_int)1LL)) && ((*(P427)rt_nil_check(F->y_1032)).kind != ((rt_int)2LL)))) {
f_fail_21((*(P417)rt_nil_check(F->e_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_338)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_339) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_324(F->y_1032); b_; }));
(*F->t_340) = (*(P427)rt_nil_check(F->y_1032)).t;
(*F->c_341) = (*(P427)rt_nil_check(F->y_1032)).c;
(*F->ro_342) = (*(P427)rt_nil_check(F->y_1032)).ro_flag;
if ((((*(P427)rt_nil_check(F->y_1032)).kind == ((rt_int)1LL)) && f_check_import_330(F->y_1032, (*(P417)rt_nil_check(F->e_338)).line))) {
(*F->ro_342) = 1;
}
} else if (((*(P417)rt_nil_check(F->e_338)).kind == ((rt_int)17LL))) {
f_lvalue_343((*(P417)rt_nil_check(F->e_338)).a, &(*F->code_339), &(*F->t_340), &(*F->c_341), &(*F->ro_342));
} else if (((*(P417)rt_nil_check(F->e_338)).kind == ((rt_int)11LL))) {
f_lvalue_343((*(P417)rt_nil_check(F->e_338)).a, &F->base_1029, &F->bt_1030, &F->bc_1031, &(*F->ro_342));
f_select_on_351(&(*(P412)rt_nil_check(F->base_1029)), F->bt_1030, F->e_338, &(*F->ro_342), &(*F->code_339), &(*F->t_340), &(*F->c_341));
} else if (((*(P417)rt_nil_check(F->e_338)).kind == ((rt_int)10LL))) {
f_lvalue_343((*(P417)rt_nil_check(F->e_338)).a, &F->base_1029, &F->bt_1030, &F->bc_1031, &(*F->ro_342));
f_index_on_360(&(*(P412)rt_nil_check(F->base_1029)), F->bt_1030, F->e_338, &(*F->ro_342), 1, &(*F->code_339), &(*F->t_340), &(*F->c_341));
} else {
f_fail_21((*(P417)rt_nil_check(F->e_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_351(rstr *base_344, P421 bt_345, P417 e_346, int *ro_347, P412 *code_348, P421 *t_349, P419 *c_350) {
  struct f_select_on_351fr *F = rt_alloc(sizeof *F);
F->base_344 = base_344;
F->bt_345 = bt_345;
F->e_346 = e_346;
F->ro_347 = ro_347;
F->code_348 = code_348;
F->t_349 = t_349;
F->c_350 = c_350;
(*F->c_350) = g_no_cons_483;
if (((*(P421)rt_nil_check(F->bt_345)).kind == ((rt_int)8LL))) {
f_finish_ptr_241(F->bt_345);
(*F->ro_347) = 0;
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name)), rt_str("ALL", 3))) {
(*F->code_348) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_335(&(*F->base_344), F->bt_345); b_; }));
(*F->t_349) = (*(P421)rt_nil_check(F->bt_345)).target;
goto ret_;
}
f_select_on_351(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_335(&(*F->base_344), F->bt_345); b_; }), (*(P421)rt_nil_check(F->bt_345)).target, F->e_346, &(*F->ro_347), &(*F->code_348), &(*F->t_349), &(*F->c_350));
goto ret_;
}
if (((*(P421)rt_nil_check(F->bt_345)).kind == ((rt_int)15LL))) {
F->p_1033 = NULL;
F->p_1033 = (*(P421)rt_nil_check(F->bt_345)).tparams;
if ((!f_opened_182(F->bt_345))) {
f_fail_21((*(P417)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->bt_345)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P421)rt_nil_check(F->bt_345)).tparams == NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name)), rt_str("ALL", 3))) {
(*F->code_348) = f_mk_3(&(*F->base_344));
(*F->t_349) = (*(P421)rt_nil_check(F->bt_345)).under;
goto ret_;
}
f_select_on_351(&(*F->base_344), (*(P421)rt_nil_check(F->bt_345)).under, F->e_346, &(*F->ro_347), &(*F->code_348), &(*F->t_349), &(*F->c_350));
goto ret_;
}
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name)), rt_str("ALL", 3))) {
(*F->code_348) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_344), rt_str(".all", 4)); b_; }));
(*F->t_349) = (*(P421)rt_nil_check(F->bt_345)).under;
goto ret_;
}
while ((F->p_1033 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_1033)).name)), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name)))) {
(*F->code_348) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_344), rt_str(".p_", 3)), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->p_1033)).name)))); b_; }));
(*F->t_349) = g_ty_int_473;
(*F->ro_347) = 1;
goto ret_;
}
F->p_1033 = (*(P417)rt_nil_check(F->p_1033)).next;
}
f_select_on_351(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_344), rt_str(".all", 4)); b_; }), (*(P421)rt_nil_check(F->bt_345)).under, F->e_346, &(*F->ro_347), &(*F->code_348), &(*F->t_349), &(*F->c_350));
goto ret_;
}
if (((*(P421)rt_nil_check(F->bt_345)).kind == ((rt_int)7LL))) {
F->f_1034 = NULL;
F->f_1034 = (*(P421)rt_nil_check(F->bt_345)).fields;
while ((F->f_1034 != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_1034)).name)), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name)))) {
(*F->c_350) = (*(P423)rt_nil_check(F->f_1034)).c;
(*F->code_348) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_344), rt_str(".", 1)), f_lower_s_15(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name)))); b_; }));
(*F->t_349) = (*(P423)rt_nil_check(F->f_1034)).t;
goto ret_;
}
F->f_1034 = (*(P423)rt_nil_check(F->f_1034)).next;
}
f_fail_21((*(P417)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name))); b_; }));
}
f_fail_21((*(P417)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_346)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_360(rstr *base_352, P421 bt_353, P417 e_354, int *ro_355, int lv_356, P412 *code_357, P421 *t_358, P419 *c_359) {
  struct f_index_on_360fr *F = rt_alloc(sizeof *F);
F->base_352 = base_352;
F->bt_353 = bt_353;
F->e_354 = e_354;
F->ro_355 = ro_355;
F->lv_356 = lv_356;
F->code_357 = code_357;
F->t_358 = t_358;
F->c_359 = c_359;
F->a_1035 = NULL;
F->a_1035 = (*(P417)rt_nil_check(F->e_354)).b;
F->it_1036 = NULL;
(*F->c_359) = g_no_cons_483;
if (((*(P421)rt_nil_check(F->bt_353)).kind == ((rt_int)8LL))) {
f_finish_ptr_241(F->bt_353);
(*F->ro_355) = 0;
f_index_on_360(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_335(&(*F->base_352), F->bt_353); b_; }), (*(P421)rt_nil_check(F->bt_353)).target, F->e_354, &(*F->ro_355), F->lv_356, &(*F->code_357), &(*F->t_358), &(*F->c_359));
goto ret_;
}
if (((*(P421)rt_nil_check(F->bt_353)).kind == ((rt_int)15LL))) {
if ((!f_opened_182(F->bt_353))) {
f_fail_21((*(P417)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->bt_353)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P421)rt_nil_check(F->bt_353)).tparams == NULL)) {
f_index_on_360(&(*F->base_352), (*(P421)rt_nil_check(F->bt_353)).under, F->e_354, &(*F->ro_355), F->lv_356, &(*F->code_357), &(*F->t_358), &(*F->c_359));
} else {
f_index_on_360(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_352), rt_str(".all", 4)); b_; }), (*(P421)rt_nil_check(F->bt_353)).under, F->e_354, &(*F->ro_355), F->lv_356, &(*F->code_357), &(*F->t_358), &(*F->c_359));
}
goto ret_;
}
if ((((*(P421)rt_nil_check(F->bt_353)).kind == ((rt_int)6LL)) && ((*(P421)rt_nil_check(F->bt_353)).idx2 != NULL))) {
if ((f_list_len_52(F->a_1035) != ((rt_int)2LL))) {
f_fail_21((*(P417)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1037 = rt_str_copy(f_gexpr_364(F->a_1035, (*(P421)rt_nil_check(F->bt_353)).idx, &F->it_1036));
F->j_1038 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->a_1035)).next, (*(P421)rt_nil_check(F->bt_353)).idx2, &F->it_1036));
(*F->code_357) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_352), rt_str(".p[(rt_index(", 13)), F->i_1037), rt_str(", ", 2)), (*F->base_352)), rt_str(".lo, ", 5)), (*F->base_352)), rt_str(".hi) - ", 7)), (*F->base_352)), rt_str(".lo) * (", 8)), (*F->base_352)), rt_str(".hi2 - ", 7)), (*F->base_352)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1038), rt_str(", ", 2)), (*F->base_352)), rt_str(".lo2, ", 6)), (*F->base_352)), rt_str(".hi2) - ", 8)), (*F->base_352)), rt_str(".lo2]", 5)); b_; }));
(*F->t_358) = (*(P421)rt_nil_check(F->bt_353)).elem;
(*F->c_359) = (*(P421)rt_nil_check(F->bt_353)).elemcons;
}
goto ret_;
}
if ((f_list_len_52(F->a_1035) != ((rt_int)1LL))) {
f_fail_21((*(P417)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P421)rt_nil_check(F->bt_353)).kind == ((rt_int)5LL))) {
if (((*(P417)rt_nil_check(F->a_1035)).kind == ((rt_int)16LL))) {
F->lo_1039 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->a_1035)).a, g_ty_int_473, &F->it_1036));
F->hi_1040 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->a_1035)).b, g_ty_int_473, &F->it_1036));
(*F->code_357) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_352)), rt_str(", ", 2)), F->lo_1039), rt_str(", ", 2)), F->hi_1040), rt_str(")", 1)); b_; }));
(*F->t_358) = g_ty_string_477;
(*F->ro_355) = 1;
goto ret_;
}
{
F->i_1041 = rt_str_copy(f_gexpr_364(F->a_1035, g_ty_int_473, &F->it_1036));
(*F->t_358) = g_ty_ascii_476;
if (F->lv_356) {
(*F->code_357) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_352)), rt_str(", ", 2)), F->i_1041), rt_str("))", 2)); b_; }));
} else {
(*F->code_357) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_352)), rt_str(", ", 2)), F->i_1041), rt_str(")", 1)); b_; }));
(*F->ro_355) = 1;
}
}
goto ret_;
}
if (((*(P421)rt_nil_check(F->bt_353)).kind == ((rt_int)6LL))) {
F->i_1042 = rt_str_copy(f_gexpr_364(F->a_1035, (*(P421)rt_nil_check(F->bt_353)).idx, &F->it_1036));
(*F->code_357) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_352), rt_str(".p[rt_index(", 12)), F->i_1042), rt_str(", ", 2)), (*F->base_352)), rt_str(".lo, ", 5)), (*F->base_352)), rt_str(".hi) - ", 7)), (*F->base_352)), rt_str(".lo]", 4)); b_; }));
(*F->t_358) = (*(P421)rt_nil_check(F->bt_353)).elem;
(*F->c_359) = (*(P421)rt_nil_check(F->bt_353)).elemcons;
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_354)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_364(P417 e_361, P421 want_362, P421 *t_363) {
  struct f_gexpr_364fr *F = rt_alloc(sizeof *F);
F->e_361 = e_361;
F->want_362 = want_362;
F->t_363 = t_363;
F->k_1043 = (*(P417)rt_nil_check(F->e_361)).kind;
F->code_1044 = NULL;
F->c_1045 = NULL;
F->bt_1047 = NULL;
(*F->t_363) = g_ty_int_473;
if ((F->k_1043 == ((rt_int)1LL))) {
if (((F->want_362 != NULL) && ((*(P421)rt_nil_check(F->want_362)).kind == ((rt_int)3LL)))) {
(*F->t_363) = g_ty_float_475;
F->result_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1043 == ((rt_int)2LL))) {
(*F->t_363) = g_ty_float_475;
F->result_ = (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name));
goto ret_;
} else if ((F->k_1043 == ((rt_int)5LL))) {
(*F->t_363) = g_ty_bool_474;
F->result_ = f_itos_7((*(P417)rt_nil_check(F->e_361)).ival);
goto ret_;
} else if ((F->k_1043 == ((rt_int)3LL))) {
(*F->t_363) = g_ty_string_477;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_370(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)))), rt_str(", ", 2)), f_itos_7(((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1043 == ((rt_int)6LL))) {
(*F->t_363) = g_ty_nil_480;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1043 == ((rt_int)4LL))) {
if (((F->want_362 != NULL) && ((*(P421)rt_nil_check(F->want_362)).kind == ((rt_int)4LL)))) {
(*F->t_363) = F->want_362;
} else {
(*F->t_363) = f_enum_type_of_373(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), (*(P417)rt_nil_check(F->e_361)).line);
}
{
F->i_1048 = f_lit_index_177((*(P421)rt_nil_check((*F->t_363))).lits, &(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)));
if ((F->i_1048 < ((rt_int)0LL))) {
f_fail_21((*(P417)rt_nil_check(F->e_361)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1048);
goto ret_;
}
} else if ((F->k_1043 == ((rt_int)17LL))) {
F->result_ = f_gexpr_364((*(P417)rt_nil_check(F->e_361)).a, F->want_362, &(*F->t_363));
goto ret_;
} else if ((F->k_1043 == ((rt_int)7LL))) {
F->y_1049 = NULL;
F->y_1049 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)));
if ((F->y_1049 == NULL)) {
if (((((((((rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_401(f_wrap_apply_368(F->e_361), 0, &(*F->t_363));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_361)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P427)rt_nil_check(F->y_1049)).kind == ((rt_int)1LL)) || ((*(P427)rt_nil_check(F->y_1049)).kind == ((rt_int)2LL)))) {
(*F->t_363) = (*(P427)rt_nil_check(F->y_1049)).t;
if (((*(P427)rt_nil_check(F->y_1049)).kind == ((rt_int)1LL))) {
F->ro_1050 = f_check_import_330(F->y_1049, (*(P417)rt_nil_check(F->e_361)).line);
}
F->result_ = f_access_of_324(F->y_1049);
goto ret_;
}
if (((*(P427)rt_nil_check(F->y_1049)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_401(f_wrap_apply_368(F->e_361), 0, &(*F->t_363));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_361)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1043 == ((rt_int)8LL)) && (f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name))) != NULL)) && (f_user_op_397(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), f_copy_node_366((*(P417)rt_nil_check(F->e_361)).a)) != NULL))) {
F->call_1051 = NULL;
F->call_1051 = f_nn_46(((rt_int)10LL), (*(P417)rt_nil_check(F->e_361)).line);
F->fname_1052 = NULL;
F->fname_1052 = f_nn_46(((rt_int)7LL), (*(P417)rt_nil_check(F->e_361)).line);
(*(P417)rt_nil_check(F->fname_1052)).name = (*(P417)rt_nil_check(F->e_361)).name;
(*(P417)rt_nil_check(F->call_1051)).a = F->fname_1052;
(*(P417)rt_nil_check(F->call_1051)).b = f_copy_node_366((*(P417)rt_nil_check(F->e_361)).a);
F->result_ = f_gcall_401(F->call_1051, 0, &(*F->t_363));
goto ret_;
} else if (((((F->k_1043 == ((rt_int)8LL)) && rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("NOT", 3))) && (F->want_362 != NULL)) && ((*(P421)rt_nil_check(F->want_362)).kind == ((rt_int)16LL)))) {
F->a_1053 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_361)).a, F->want_362, &(*F->t_363)));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1053), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_52((*(P421)rt_nil_check((*(P421)rt_nil_check(F->want_362)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1043 == ((rt_int)8LL))) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("NOT", 3))) {
F->a_1054 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_361)).a, g_ty_bool_474, &(*F->t_363)));
f_check_type_167((*F->t_363), g_ty_bool_474, (*(P417)rt_nil_check(F->e_361)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1054), rt_str(")", 1));
goto ret_;
}
{
F->a_1055 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_361)).a, F->want_362, &(*F->t_363)));
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("+", 1))) {
F->result_ = F->a_1055;
goto ret_;
} else if (((*(P421)rt_nil_check((*F->t_363))).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1055), rt_str(")", 1));
goto ret_;
}
f_check_type_167((*F->t_363), g_ty_int_473, (*(P417)rt_nil_check(F->e_361)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1055), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1043 == ((rt_int)9LL))) {
F->result_ = f_gbinop_380(F->e_361, F->want_362, &(*F->t_363));
goto ret_;
} else if ((F->k_1043 == ((rt_int)10LL))) {
if ((((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_361)).a)).kind == ((rt_int)7LL)) || ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_361)).a)).kind == ((rt_int)12LL)))) {
F->nm_1056 = NULL;
F->nm_1056 = (*(P417)rt_nil_check(F->e_361)).a;
F->y_1057 = NULL;
if (((*(P417)rt_nil_check(F->nm_1056)).kind == ((rt_int)12LL))) {
F->nm_1056 = (*(P417)rt_nil_check(F->nm_1056)).a;
}
F->y_1057 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->nm_1056)).name)));
if (((((F->y_1057 == NULL) || ((*(P427)rt_nil_check(F->y_1057)).kind == ((rt_int)3LL))) || ((*(P427)rt_nil_check(F->y_1057)).kind == ((rt_int)4LL))) || ((*(P427)rt_nil_check(F->y_1057)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_401(F->e_361, 0, &(*F->t_363));
goto ret_;
}
}
{
F->base_1058 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_361)).a, NULL, &F->bt_1047));
F->ro_1046 = 1;
f_index_on_360(&F->base_1058, F->bt_1047, F->e_361, &F->ro_1046, 0, &F->code_1044, &(*F->t_363), &F->c_1045);
F->result_ = (*(P412)rt_nil_check(F->code_1044));
goto ret_;
}
} else if ((F->k_1043 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_361)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_376(F->e_361, &(*F->t_363));
goto ret_;
}
{
F->base_1059 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_361)).a, NULL, &F->bt_1047));
F->ro_1046 = 1;
f_select_on_351(&F->base_1059, F->bt_1047, F->e_361, &F->ro_1046, &F->code_1044, &(*F->t_363), &F->c_1045);
F->result_ = (*(P412)rt_nil_check(F->code_1044));
goto ret_;
}
} else if ((F->k_1043 == ((rt_int)12LL))) {
F->result_ = f_gcall_401(f_wrap_apply_368(F->e_361), 0, &(*F->t_363));
goto ret_;
} else if ((F->k_1043 == ((rt_int)14LL))) {
F->result_ = f_constructor_384(F->e_361, F->want_362, &(*F->t_363));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_361)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_copy_node_366(P417 e_365) {
  struct f_copy_node_366fr *F = rt_alloc(sizeof *F);
F->e_365 = e_365;
F->x_1060 = NULL;
{ R418 *cell1061 = rt_alloc(sizeof(R418));
(*cell1061).name = NULL;
(*cell1061).tag = NULL;
(*cell1061).a = NULL;
(*cell1061).b = NULL;
(*cell1061).c = NULL;
(*cell1061).d = NULL;
(*cell1061).e = NULL;
(*cell1061).next = NULL;
F->x_1060 = cell1061;
}
(*(P417)rt_nil_check(F->x_1060)).kind = (*(P417)rt_nil_check(F->e_365)).kind;
(*(P417)rt_nil_check(F->x_1060)).line = (*(P417)rt_nil_check(F->e_365)).line;
(*(P417)rt_nil_check(F->x_1060)).ival = (*(P417)rt_nil_check(F->e_365)).ival;
(*(P417)rt_nil_check(F->x_1060)).flag = (*(P417)rt_nil_check(F->e_365)).flag;
(*(P417)rt_nil_check(F->x_1060)).name = (*(P417)rt_nil_check(F->e_365)).name;
(*(P417)rt_nil_check(F->x_1060)).tag = (*(P417)rt_nil_check(F->e_365)).tag;
(*(P417)rt_nil_check(F->x_1060)).a = (*(P417)rt_nil_check(F->e_365)).a;
(*(P417)rt_nil_check(F->x_1060)).b = (*(P417)rt_nil_check(F->e_365)).b;
(*(P417)rt_nil_check(F->x_1060)).c = (*(P417)rt_nil_check(F->e_365)).c;
(*(P417)rt_nil_check(F->x_1060)).d = (*(P417)rt_nil_check(F->e_365)).d;
F->result_ = F->x_1060;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P417 f_wrap_apply_368(P417 e_367) {
  struct f_wrap_apply_368fr *F = rt_alloc(sizeof *F);
F->e_367 = e_367;
F->x_1062 = NULL;
F->x_1062 = f_nn_46(((rt_int)10LL), (*(P417)rt_nil_check(F->e_367)).line);
(*(P417)rt_nil_check(F->x_1062)).a = F->e_367;
F->result_ = F->x_1062;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_370(rstr *s_369) {
  struct f_c_string_370fr *F = rt_alloc(sizeof *F);
F->s_369 = s_369;
F->n_1063 = ((rt_int)0LL);
{ rt_int lo1065 = ((rt_int)1LL), hi1066 = ((*F->s_369)).len;
for (rt_int it1067 = lo1065; it1067 <= hi1066; it1067++) {
F->i_1064 = it1067;
if (((rt_str_get((*F->s_369), F->i_1064) == 92) || (rt_str_get((*F->s_369), F->i_1064) == 63))) {
F->n_1063 = rt_add(F->n_1063, ((rt_int)1LL));
}
}
}
{
F->r_1068 = rt_str_new(rt_add(rt_add(((*F->s_369)).len, F->n_1063), ((rt_int)2LL)));
F->j_1069 = ((rt_int)1LL);
(*rt_str_at(&F->r_1068, ((rt_int)1LL))) = 34;
{ rt_int lo1071 = ((rt_int)1LL), hi1072 = ((*F->s_369)).len;
for (rt_int it1073 = lo1071; it1073 <= hi1072; it1073++) {
F->i_1070 = it1073;
F->j_1069 = rt_add(F->j_1069, ((rt_int)1LL));
if (((rt_str_get((*F->s_369), F->i_1070) == 92) || (rt_str_get((*F->s_369), F->i_1070) == 63))) {
(*rt_str_at(&F->r_1068, F->j_1069)) = 92;
F->j_1069 = rt_add(F->j_1069, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1068, F->j_1069)) = rt_str_get((*F->s_369), F->i_1070);
}
}
(*rt_str_at(&F->r_1068, rt_add(F->j_1069, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1068;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P421 f_enum_type_of_373(rstr *lit_371, rt_int line_372) {
  struct f_enum_type_of_373fr *F = rt_alloc(sizeof *F);
F->lit_371 = lit_371;
F->line_372 = line_372;
F->y_1074 = NULL;
F->y_1074 = g_scope_stack_447;
F->c_1075 = NULL;
if ((f_lit_index_177((*(P421)rt_nil_check(g_ty_ascii_476)).lits, &(*F->lit_371)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_476;
goto ret_;
}
while ((F->y_1074 != NULL)) {
if ((((((*(P427)rt_nil_check(F->y_1074)).kind == ((rt_int)6LL)) || ((*(P427)rt_nil_check(F->y_1074)).kind == ((rt_int)5LL))) && ((*(P427)rt_nil_check(F->y_1074)).st != NULL)) && ((*(P417)rt_nil_check((*(P427)rt_nil_check(F->y_1074)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_177((*(P417)rt_nil_check((*(P427)rt_nil_check(F->y_1074)).st)).a, &(*F->lit_371)) >= ((rt_int)0LL))) {
F->result_ = f_resolve_subtype_180((*(P427)rt_nil_check(F->y_1074)).st, &F->c_1075);
goto ret_;
}
}
F->y_1074 = (*(P427)rt_nil_check(F->y_1074)).stack;
}
f_fail_21(F->line_372, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_371)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_376(P417 e_374, P421 *t_375) {
  struct f_attribute_376fr *F = rt_alloc(sizeof *F);
F->e_374 = e_374;
F->t_375 = t_375;
F->bt_1076 = NULL;
F->c_1077 = NULL;
(*F->t_375) = g_ty_int_473;
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_374)).name)), rt_str("LEN", 3))) {
F->base_1078 = NULL;
F->base_1078 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_364((*(P417)rt_nil_check(F->e_374)).a, NULL, &F->bt_1076); b_; }));
if (((*(P421)rt_nil_check(F->bt_1076)).kind == ((rt_int)8LL))) {
f_finish_ptr_241(F->bt_1076);
F->base_1078 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_335(&(*(P412)rt_nil_check(F->base_1078)), F->bt_1076); b_; }));
F->bt_1076 = (*(P421)rt_nil_check(F->bt_1076)).target;
}
if (((*(P421)rt_nil_check(F->bt_1076)).kind != ((rt_int)5LL))) {
f_fail_21((*(P417)rt_nil_check(F->e_374)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P412)rt_nil_check(F->base_1078))), rt_str(").len", 5));
goto ret_;
}
if (((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_374)).a)).kind == ((rt_int)7LL))) {
F->y_1079 = NULL;
F->y_1079 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_374)).a)).name)));
if (((F->y_1079 != NULL) && (((*(P427)rt_nil_check(F->y_1079)).kind == ((rt_int)6LL)) || ((*(P427)rt_nil_check(F->y_1079)).kind == ((rt_int)5LL))))) {
F->st_1080 = NULL;
F->st_1080 = f_nn_46(((rt_int)80LL), (*(P417)rt_nil_check(F->e_374)).line);
(*(P417)rt_nil_check(F->st_1080)).name = (*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_374)).a)).name;
(*F->t_375) = f_resolve_subtype_180(F->st_1080, &F->c_1077);
if (((*(P421)rt_nil_check((*F->t_375))).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_374)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_52((*(P421)rt_nil_check((*F->t_375))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P419)rt_nil_check(F->c_1077)).lo != NULL)) {
if (rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_374)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_1077)).lo));
goto ret_;
}
F->result_ = (*(P412)rt_nil_check((*(P419)rt_nil_check(F->c_1077)).hi));
goto ret_;
}
}
}
f_fail_21((*(P417)rt_nil_check(F->e_374)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P412)rt_nil_check((*(P417)rt_nil_check(F->e_374)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_380(P417 e_377, P421 want_378, P421 *t_379) {
  struct f_gbinop_380fr *F = rt_alloc(sizeof *F);
F->e_377 = e_377;
F->want_378 = want_378;
F->t_379 = t_379;
F->op_1081 = NULL;
F->op_1081 = (*(P417)rt_nil_check(F->e_377)).name;
F->ta_1082 = NULL;
F->tb_1083 = NULL;
F->hint_1084 = NULL;
F->uy_1085 = NULL;
(*F->t_379) = g_ty_bool_474;
if ((f_lookup_137(&(*(P412)rt_nil_check(F->op_1081))) != NULL)) {
F->l_1086 = NULL;
F->r_1087 = NULL;
F->l_1086 = f_copy_node_366((*(P417)rt_nil_check(F->e_377)).a);
F->r_1087 = f_copy_node_366((*(P417)rt_nil_check(F->e_377)).b);
(*(P417)rt_nil_check(F->l_1086)).next = F->r_1087;
F->uy_1085 = f_user_op_397(&(*(P412)rt_nil_check(F->op_1081)), F->l_1086);
if ((F->uy_1085 != NULL)) {
F->call_1088 = NULL;
F->call_1088 = f_nn_46(((rt_int)10LL), (*(P417)rt_nil_check(F->e_377)).line);
F->fname_1089 = NULL;
F->fname_1089 = f_nn_46(((rt_int)7LL), (*(P417)rt_nil_check(F->e_377)).line);
(*(P417)rt_nil_check(F->fname_1089)).name = F->op_1081;
(*(P417)rt_nil_check(F->call_1088)).a = F->fname_1089;
(*(P417)rt_nil_check(F->call_1088)).b = F->l_1086;
F->result_ = f_gcall_401(F->call_1088, 0, &(*F->t_379));
goto ret_;
}
}
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("IN", 2))) {
F->s_1090 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).b, NULL, &F->tb_1083));
if (((*(P421)rt_nil_check(F->tb_1083)).kind != ((rt_int)16LL))) {
f_fail_21((*(P417)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1091 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).a, (*(P421)rt_nil_check(F->tb_1083)).elem, &F->ta_1082));
f_check_type_167(F->ta_1082, (*(P421)rt_nil_check(F->tb_1083)).elem, (*(P417)rt_nil_check(F->e_377)).line);
(*F->t_379) = g_ty_bool_474;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1091), rt_str(", ", 2)), F->s_1090), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("AND", 3)) || rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("OR", 2))) || rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("XOR", 3))) && (F->want_378 != NULL)) && ((*(P421)rt_nil_check(F->want_378)).kind == ((rt_int)16LL)))) {
F->a_1092 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).a, F->want_378, &F->ta_1082));
F->b_1093 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).b, F->want_378, &F->tb_1083));
f_check_type_167(F->tb_1083, F->ta_1082, (*(P417)rt_nil_check(F->e_377)).line);
(*F->t_379) = F->ta_1082;
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1092), rt_str(", ", 2)), F->b_1093), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1092), rt_str(", ", 2)), F->b_1093), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1092), rt_str(", ", 2)), F->b_1093), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("AND", 3)) || rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("OR", 2))) || rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("XOR", 3)))) {
F->a_1094 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).a, g_ty_bool_474, &F->ta_1082));
F->b_1095 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).b, g_ty_bool_474, &F->tb_1083));
f_check_type_167(F->ta_1082, g_ty_bool_474, (*(P417)rt_nil_check(F->e_377)).line);
f_check_type_167(F->tb_1083, g_ty_bool_474, (*(P417)rt_nil_check(F->e_377)).line);
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1094), rt_str(" && ", 4)), F->b_1095), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1094), rt_str(" || ", 4)), F->b_1095), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1094), rt_str(" != ", 4)), F->b_1095), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("&", 1))) {
F->wa_1096 = NULL;
F->wb_1097 = NULL;
if (((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_377)).a)).kind == ((rt_int)4LL))) {
F->wa_1096 = g_ty_ascii_476;
}
if (((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_377)).b)).kind == ((rt_int)4LL))) {
F->wb_1097 = g_ty_ascii_476;
}
{
F->a_1098 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).a, F->wa_1096, &F->ta_1082));
F->b_1099 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).b, F->wb_1097, &F->tb_1083));
(*F->t_379) = g_ty_string_477;
if ((((*(P421)rt_nil_check(F->ta_1082)).kind == ((rt_int)5LL)) && ((*(P421)rt_nil_check(F->tb_1083)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1098), rt_str(", ", 2)), F->b_1099), rt_str(")", 1));
goto ret_;
} else if ((((*(P421)rt_nil_check(F->ta_1082)).kind == ((rt_int)5LL)) && ((*(P421)rt_nil_check(F->tb_1083)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1098), rt_str(", ", 2)), F->b_1099), rt_str(")", 1));
goto ret_;
} else if ((((*(P421)rt_nil_check(F->ta_1082)).kind == ((rt_int)4LL)) && ((*(P421)rt_nil_check(F->tb_1083)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1098), rt_str(", ", 2)), F->b_1099), rt_str(")", 1));
goto ret_;
} else if ((((*(P421)rt_nil_check(F->ta_1082)).kind == ((rt_int)4LL)) && ((*(P421)rt_nil_check(F->tb_1083)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1098), rt_str(", ", 2)), F->b_1099), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_91(&(*(P412)rt_nil_check(F->op_1081))) && (!rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("IN", 2))))) {
if (((((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_377)).a)).kind == ((rt_int)4LL)) || ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_377)).a)).kind == ((rt_int)6LL))) || ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->e_377)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1100 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).b, NULL, &F->hint_1084));
}
{
F->a_1101 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).a, F->hint_1084, &F->ta_1082));
F->b_1102 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).b, F->ta_1082, &F->tb_1083));
F->ct_1103 = NULL;
F->ct_1103 = F->ta_1082;
(*F->t_379) = g_ty_bool_474;
if ((((*(P421)rt_nil_check(F->ta_1082)).kind != ((rt_int)11LL)) && ((*(P421)rt_nil_check(F->tb_1083)).kind != ((rt_int)11LL)))) {
f_check_type_167(F->tb_1083, F->ta_1082, (*(P417)rt_nil_check(F->e_377)).line);
}
if (((*(P421)rt_nil_check(F->ta_1082)).kind == ((rt_int)11LL))) {
F->ct_1103 = F->tb_1083;
}
if (((*(P421)rt_nil_check(F->ct_1103)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1101), rt_str(", ", 2)), F->b_1102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1101), rt_str(", ", 2)), F->b_1102), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1101), rt_str(", ", 2)), F->b_1102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1101), rt_str(", ", 2)), F->b_1102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1102), rt_str(", ", 2)), F->a_1101), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1102), rt_str(", ", 2)), F->a_1101), rt_str(")", 1));
goto ret_;
}
if (((*(P421)rt_nil_check(F->ct_1103)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1101), rt_str(", ", 2)), F->b_1102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1101), rt_str(", ", 2)), F->b_1102), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1101), rt_str(", ", 2)), F->b_1102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1102), rt_str(", ", 2)), F->a_1101), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_203(F->ct_1103)) {
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("=", 1))) {
F->result_ = f_eq_code_215(F->ct_1103, &F->a_1101, &F->b_1102);
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_215(F->ct_1103, &F->a_1101, &F->b_1102)), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1101), rt_str(" == ", 4)), F->b_1102), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1101), rt_str(" != ", 4)), F->b_1102), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1101), rt_str(" ", 1)), (*(P412)rt_nil_check(F->op_1081))), rt_str(" ", 1)), F->b_1102), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1104 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).a, F->want_378, &F->ta_1082));
F->b_1105 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->e_377)).b, F->ta_1082, &F->tb_1083));
if ((((*(P421)rt_nil_check(F->ta_1082)).kind == ((rt_int)3LL)) || ((*(P421)rt_nil_check(F->tb_1083)).kind == ((rt_int)3LL)))) {
(*F->t_379) = g_ty_float_475;
if (((rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("+", 1)) || rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("-", 1))) || rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1104), rt_str(" ", 1)), (*(P412)rt_nil_check(F->op_1081))), rt_str(" ", 1)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
}
}
f_check_type_167(F->ta_1082, g_ty_int_473, (*(P417)rt_nil_check(F->e_377)).line);
f_check_type_167(F->tb_1083, g_ty_int_473, (*(P417)rt_nil_check(F->e_377)).line);
(*F->t_379) = g_ty_int_473;
if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P412)rt_nil_check(F->op_1081)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1104), rt_str(", ", 2)), F->b_1105), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P417)rt_nil_check(F->e_377)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P412)rt_nil_check(F->op_1081))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_384(P417 e_381, P421 want_382, P421 *t_383) {
  struct f_constructor_384fr *F = rt_alloc(sizeof *F);
F->e_381 = e_381;
F->want_382 = want_382;
F->t_383 = t_383;
F->it_1106 = NULL;
F->it_1106 = (*(P417)rt_nil_check(F->e_381)).a;
F->f_1107 = NULL;
F->vt_1108 = NULL;
if (((F->want_382 != NULL) && ((*(P421)rt_nil_check(F->want_382)).kind == ((rt_int)16LL)))) {
F->s_1109 = NULL;
F->s_1109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
(*F->t_383) = F->want_382;
while ((F->it_1106 != NULL)) {
F->v_1110 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->it_1106)).b, (*(P421)rt_nil_check(F->want_382)).elem, &F->vt_1108));
f_check_type_167(F->vt_1108, (*(P421)rt_nil_check(F->want_382)).elem, (*(P417)rt_nil_check(F->e_381)).line);
F->s_1109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P412)rt_nil_check(F->s_1109))), rt_str(", ", 2)), F->v_1110), rt_str(")", 1)); b_; }));
F->it_1106 = (*(P417)rt_nil_check(F->it_1106)).next;
}
F->result_ = (*(P412)rt_nil_check(F->s_1109));
goto ret_;
}
if (((F->want_382 != NULL) && ((*(P421)rt_nil_check(F->want_382)).kind == ((rt_int)15LL)))) {
f_fail_21((*(P417)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P412)rt_nil_check((*(P421)rt_nil_check(F->want_382)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_382 != NULL) && ((*(P421)rt_nil_check(F->want_382)).kind == ((rt_int)6LL))) && ((*(P421)rt_nil_check(F->want_382)).idx2 == NULL))) {
F->tmp_1111 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1112 = rt_str_copy(f_ctype_169(F->want_382));
F->et_1113 = rt_str_copy(f_ctype_169((*(P421)rt_nil_check(F->want_382)).elem));
F->parts_1114 = NULL;
(*F->t_383) = F->want_382;
if (((((F->it_1106 != NULL) && ((*(P417)rt_nil_check(F->it_1106)).a != NULL)) && ((*(P417)rt_nil_check((*(P417)rt_nil_check(F->it_1106)).a)).b != NULL)) && ((*(P417)rt_nil_check(F->it_1106)).next == NULL))) {
F->lo_1115 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check((*(P417)rt_nil_check(F->it_1106)).a)).a, (*(P421)rt_nil_check(F->want_382)).idx, &F->vt_1108));
F->hi_1116 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check((*(P417)rt_nil_check(F->it_1106)).a)).b, (*(P421)rt_nil_check(F->want_382)).idx, &F->vt_1108));
F->v_1117 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->it_1106)).b, (*(P421)rt_nil_check(F->want_382)).elem, &F->vt_1108));
f_check_type_167(F->vt_1108, (*(P421)rt_nil_check(F->want_382)).elem, (*(P417)rt_nil_check(F->e_381)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1112), rt_str(" ", 1)), F->tmp_1111), rt_str("; ", 2)), F->tmp_1111), rt_str(".lo = ", 6)), F->lo_1115), rt_str("; ", 2)), F->tmp_1111), rt_str(".hi = ", 6)), F->hi_1116), rt_str("; ", 2)), F->tmp_1111), rt_str(".lo2 = ", 7)), F->tmp_1111), rt_str(".hi2 = 1; ", 10)), F->tmp_1111), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1113), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1111), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1111), rt_str("); i_++) ", 9)), F->tmp_1111), rt_str(".p[i_] = ", 9)), f_copy_code_211((*(P421)rt_nil_check(F->want_382)).elem, &F->v_1117)), rt_str("; ", 2)), F->tmp_1111), rt_str("; })", 4));
goto ret_;
}
F->parts_1114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1112), rt_str(" ", 1)), F->tmp_1111), rt_str("; ", 2)), F->tmp_1111), rt_str(".lo = 1; ", 9)), F->tmp_1111), rt_str(".hi = ", 6)), f_itos_7(f_list_len_52(F->it_1106))), rt_str("; ", 2)), F->tmp_1111), rt_str(".lo2 = ", 7)), F->tmp_1111), rt_str(".hi2 = 1; ", 10)), F->tmp_1111), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1113), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_52(F->it_1106), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1119 = ((rt_int)0LL), hi1120 = rt_sub(f_list_len_52((*(P417)rt_nil_check(F->e_381)).a), ((rt_int)1LL));
for (rt_int it1121 = lo1119; it1121 <= hi1120; it1121++) {
F->i_1118 = it1121;
if (((*(P417)rt_nil_check(F->it_1106)).a != NULL)) {
f_fail_21((*(P417)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1122 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->it_1106)).b, (*(P421)rt_nil_check(F->want_382)).elem, &F->vt_1108));
f_check_type_167(F->vt_1108, (*(P421)rt_nil_check(F->want_382)).elem, (*(P417)rt_nil_check(F->e_381)).line);
F->parts_1114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->parts_1114)), rt_str(" ", 1)), F->tmp_1111), rt_str(".p[", 3)), f_itos_7(F->i_1118)), rt_str("] = ", 4)), f_copy_code_211((*(P421)rt_nil_check(F->want_382)).elem, &F->v_1122)), rt_str(";", 1)); b_; }));
}
F->it_1106 = (*(P417)rt_nil_check(F->it_1106)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->parts_1114)), rt_str(" ", 1)), F->tmp_1111), rt_str("; })", 4));
goto ret_;
}
if (((F->want_382 == NULL) || ((*(P421)rt_nil_check(F->want_382)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P417)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
(*F->t_383) = F->want_382;
F->f_1107 = (*(P421)rt_nil_check(F->want_382)).fields;
{
F->tmp_1123 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1124 = NULL;
F->parts_1124 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_169(F->want_382)), rt_str(" ", 1)), F->tmp_1123), rt_str(";", 1)); b_; }));
if (((f_list_len_52(F->it_1106) != ((rt_int)0LL)) && (f_list_len_52(F->it_1106) != ((rt_int)0LL)))) {
while (((F->it_1106 != NULL) && (F->f_1107 != NULL))) {
if (((((*(P417)rt_nil_check(F->it_1106)).a == NULL) || ((*(P417)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->it_1106)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P412)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check((*(P417)rt_nil_check(F->it_1106)).a)).a)).name)), (*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_1107)).name)))))) {
f_fail_21((*(P417)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_1107)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1125 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->it_1106)).b, (*(P423)rt_nil_check(F->f_1107)).t, &F->vt_1108));
f_check_type_167(F->vt_1108, (*(P423)rt_nil_check(F->f_1107)).t, (*(P417)rt_nil_check(F->e_381)).line);
F->parts_1124 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->parts_1124)), rt_str(" ", 1)), F->tmp_1123), rt_str(".", 1)), f_lower_s_15(&(*(P412)rt_nil_check((*(P423)rt_nil_check(F->f_1107)).name)))), rt_str(" = ", 3)), f_copy_code_211((*(P423)rt_nil_check(F->f_1107)).t, &F->v_1125)), rt_str(";", 1)); b_; }));
}
F->it_1106 = (*(P417)rt_nil_check(F->it_1106)).next;
F->f_1107 = (*(P423)rt_nil_check(F->f_1107)).next;
}
}
if (((F->it_1106 != NULL) || (F->f_1107 != NULL))) {
f_fail_21((*(P417)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->parts_1124)), rt_str(" ", 1)), F->tmp_1123), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_fits_387(P427 y_385, P417 args_386) {
  struct f_fits_387fr *F = rt_alloc(sizeof *F);
F->y_385 = y_385;
F->args_386 = args_386;
F->a_1126 = NULL;
F->a_1126 = F->args_386;
F->pm_1127 = NULL;
F->pm_1127 = (*(P427)rt_nil_check(F->y_385)).params;
F->t_1128 = NULL;
F->saved_1129 = NULL;
F->saved_1129 = g_code_457;
F->ok_1130 = 1;
F->lv_1131 = NULL;
F->lc_1132 = NULL;
g_trial_471 = rt_add(g_trial_471, ((rt_int)1LL));
g_code_457 = f_new_buffer_22();
{ rt_frame xf1134;
if (RT_TRY(xf1134)) {
while (((F->ok_1130 && (F->a_1126 != NULL)) && (F->pm_1127 != NULL))) {
if ((((*(P425)rt_nil_check(F->pm_1127)).mode == ((rt_int)2LL)) || ((*(P425)rt_nil_check(F->pm_1127)).mode == ((rt_int)3LL)))) {
f_lvalue_343(F->a_1126, &F->lv_1131, &F->t_1128, &F->lc_1132, &F->ro_1133);
} else {
F->v_1136 = rt_str_copy(f_gexpr_364(F->a_1126, (*(P425)rt_nil_check(F->pm_1127)).t, &F->t_1128));
}
if ((!(f_same_161(F->t_1128, (*(P425)rt_nil_check(F->pm_1127)).t) || (((*(P421)rt_nil_check(F->t_1128)).kind == ((rt_int)11LL)) && ((*(P421)rt_nil_check((*(P425)rt_nil_check(F->pm_1127)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1130 = 0;
}
F->a_1126 = (*(P417)rt_nil_check(F->a_1126)).next;
F->pm_1127 = (*(P425)rt_nil_check(F->pm_1127)).next;
}
if (((F->a_1126 != NULL) || (F->pm_1127 != NULL))) {
F->ok_1130 = 0;
}
RT_POP(xf1134);
} else {
RT_POP(xf1134);
int x1135 = rt_xcur;
if (0 || x1135 == ex_compile_error_1) {
F->ok_1130 = 0;
} else {
rt_raise(x1135);
}
}
}
g_trial_471 = rt_sub(g_trial_471, ((rt_int)1LL));
g_code_457 = F->saved_1129;
F->result_ = F->ok_1130;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P427 f_resolve_overload_392(rstr *name_388, P417 args_389, int is_stmt_390, rt_int line_391) {
  struct f_resolve_overload_392fr *F = rt_alloc(sizeof *F);
F->name_388 = name_388;
F->args_389 = args_389;
F->is_stmt_390 = is_stmt_390;
F->line_391 = line_391;
F->y_1137 = NULL;
F->y_1137 = (*(P433)rt_nil_check(g_table_445)).p[rt_index(f_hash_135(&(*F->name_388)), (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo];
F->first_1138 = NULL;
F->n_1139 = ((rt_int)0LL);
while ((F->y_1137 != NULL)) {
if ((rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_1137)).name)), (*F->name_388)) && (((*(P427)rt_nil_check(F->y_1137)).kind == ((rt_int)3LL)) || ((*(P427)rt_nil_check(F->y_1137)).kind == ((rt_int)4LL))))) {
F->n_1139 = rt_add(F->n_1139, ((rt_int)1LL));
if ((F->first_1138 == NULL)) {
F->first_1138 = F->y_1137;
}
if (((((*(P427)rt_nil_check(F->y_1137)).kind == ((rt_int)4LL)) == F->is_stmt_390) && f_fits_387(F->y_1137, F->args_389))) {
F->result_ = F->y_1137;
goto ret_;
}
}
F->y_1137 = (*(P427)rt_nil_check(F->y_1137)).chain;
}
if (f_is_builtin_394(&(*F->name_388))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1139 > ((rt_int)1LL))) {
f_fail_21(F->line_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_388)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1138;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_394(rstr *n_393) {
  struct f_is_builtin_394fr *F = rt_alloc(sizeof *F);
F->n_393 = n_393;
F->result_ = ((((((((((((((rt_str_eq((*F->n_393), rt_str("ABS", 3)) || rt_str_eq((*F->n_393), rt_str("POS", 3))) || rt_str_eq((*F->n_393), rt_str("SUCC", 4))) || rt_str_eq((*F->n_393), rt_str("PRED", 4))) || rt_str_eq((*F->n_393), rt_str("SQRT", 4))) || rt_str_eq((*F->n_393), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_393), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_393), rt_str("WRITE", 5))) || rt_str_eq((*F->n_393), rt_str("READLN", 6))) || rt_str_eq((*F->n_393), rt_str("SEND", 4))) || rt_str_eq((*F->n_393), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_393), rt_str("DELAY", 5))) || rt_str_eq((*F->n_393), rt_str("TIME", 4))) || rt_str_eq((*F->n_393), rt_str("CNVT", 4))) || rt_str_eq((*F->n_393), rt_str("FORMAT", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P427 f_user_op_397(rstr *op_395, P417 args_396) {
  struct f_user_op_397fr *F = rt_alloc(sizeof *F);
F->op_395 = op_395;
F->args_396 = args_396;
F->y_1140 = NULL;
F->y_1140 = (*(P433)rt_nil_check(g_table_445)).p[rt_index(f_hash_135(&(*F->op_395)), (*(P433)rt_nil_check(g_table_445)).lo, (*(P433)rt_nil_check(g_table_445)).hi) - (*(P433)rt_nil_check(g_table_445)).lo];
while ((F->y_1140 != NULL)) {
if (((rt_str_eq((*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_1140)).name)), (*F->op_395)) && ((*(P427)rt_nil_check(F->y_1140)).kind == ((rt_int)3LL))) && f_fits_387(F->y_1140, F->args_396))) {
F->result_ = F->y_1140;
goto ret_;
}
F->y_1140 = (*(P427)rt_nil_check(F->y_1140)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_401(P417 e_398, int is_stmt_399, P421 *t_400) {
  struct f_gcall_401fr *F = rt_alloc(sizeof *F);
F->e_398 = e_398;
F->is_stmt_399 = is_stmt_399;
F->t_400 = t_400;
F->fn_1141 = NULL;
F->fn_1141 = (*(P417)rt_nil_check(F->e_398)).a;
F->tt_1142 = NULL;
F->y_1143 = NULL;
F->args_1144 = NULL;
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1145 = NULL;
F->a_1145 = (*(P417)rt_nil_check(F->e_398)).b;
F->pm_1146 = NULL;
F->lt_1147 = NULL;
F->vt_1148 = NULL;
F->lv_1149 = NULL;
F->lc_1150 = NULL;
if (((*(P417)rt_nil_check(F->fn_1141)).kind == ((rt_int)12LL))) {
F->tt_1142 = (*(P417)rt_nil_check(F->fn_1141)).b;
F->fn_1141 = (*(P417)rt_nil_check(F->fn_1141)).a;
}
F->y_1143 = f_lookup_137(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)));
if ((F->y_1143 == NULL)) {
F->result_ = f_builtin_408(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)), F->tt_1142, (*(P417)rt_nil_check(F->e_398)).b, (*(P417)rt_nil_check(F->e_398)).line, F->is_stmt_399, &(*F->t_400));
goto ret_;
}
if (((*(P427)rt_nil_check(F->y_1143)).kind == ((rt_int)10LL))) {
F->y_1143 = f_instantiate_322(F->y_1143, F->tt_1142, (*(P417)rt_nil_check(F->e_398)).b, (*(P417)rt_nil_check(F->e_398)).line);
} else if ((((*(P427)rt_nil_check(F->y_1143)).kind == ((rt_int)3LL)) || ((*(P427)rt_nil_check(F->y_1143)).kind == ((rt_int)4LL)))) {
F->y_1143 = f_resolve_overload_392(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)), (*(P417)rt_nil_check(F->e_398)).b, F->is_stmt_399, (*(P417)rt_nil_check(F->e_398)).line);
if ((F->y_1143 == NULL)) {
F->result_ = f_builtin_408(&(*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)), F->tt_1142, (*(P417)rt_nil_check(F->e_398)).b, (*(P417)rt_nil_check(F->e_398)).line, F->is_stmt_399, &(*F->t_400));
goto ret_;
}
}
if ((((*(P427)rt_nil_check(F->y_1143)).kind != ((rt_int)3LL)) && ((*(P427)rt_nil_check(F->y_1143)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P417)rt_nil_check(F->e_398)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_399 && ((*(P427)rt_nil_check(F->y_1143)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P417)rt_nil_check(F->e_398)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_399) && ((*(P427)rt_nil_check(F->y_1143)).kind != ((rt_int)3LL)))) {
f_fail_21((*(P417)rt_nil_check(F->e_398)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1146 = (*(P427)rt_nil_check(F->y_1143)).params;
if (((*(P427)rt_nil_check(F->y_1143)).level > ((rt_int)0LL))) {
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1153 = ((rt_int)1LL), hi1154 = rt_sub(g_cur_level_460, (*(P427)rt_nil_check(F->y_1143)).level);
for (rt_int it1155 = lo1153; it1155 <= hi1154; it1155++) {
F->i_1152 = it1155;
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->args_1144)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1145 != NULL) && (F->pm_1146 != NULL))) {
if ((((*(P412)rt_nil_check(F->args_1144))).len > ((rt_int)0LL))) {
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->args_1144)), rt_str(", ", 2)); b_; }));
}
if ((((*(P425)rt_nil_check(F->pm_1146)).mode == ((rt_int)2LL)) || ((*(P425)rt_nil_check(F->pm_1146)).mode == ((rt_int)3LL)))) {
f_lvalue_343(F->a_1145, &F->lv_1149, &F->lt_1147, &F->lc_1150, &F->ro_1151);
if (F->ro_1151) {
f_fail_21((*(P417)rt_nil_check(F->e_398)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check((*(P425)rt_nil_check(F->pm_1146)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_167(F->lt_1147, (*(P425)rt_nil_check(F->pm_1146)).t, (*(P417)rt_nil_check(F->e_398)).line);
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->args_1144)), rt_str("&", 1)), (*(P412)rt_nil_check(F->lv_1149))); b_; }));
} else if ((((*(P425)rt_nil_check(F->pm_1146)).mode == ((rt_int)4LL)) && f_is_lvalue_337(F->a_1145))) {
f_lvalue_343(F->a_1145, &F->lv_1149, &F->lt_1147, &F->lc_1150, &F->ro_1151);
f_check_type_167(F->lt_1147, (*(P425)rt_nil_check(F->pm_1146)).t, (*(P417)rt_nil_check(F->e_398)).line);
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->args_1144)), rt_str("&", 1)), (*(P412)rt_nil_check(F->lv_1149))); b_; }));
} else if (((*(P425)rt_nil_check(F->pm_1146)).mode == ((rt_int)4LL))) {
F->v_1156 = rt_str_copy(f_gexpr_364(F->a_1145, (*(P425)rt_nil_check(F->pm_1146)).t, &F->vt_1148));
F->ct_1157 = rt_str_copy(f_ctype_169((*(P425)rt_nil_check(F->pm_1146)).t));
f_check_type_167(F->vt_1148, (*(P425)rt_nil_check(F->pm_1146)).t, (*(P417)rt_nil_check(F->e_398)).line);
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->args_1144)), rt_str("({ ", 3)), F->ct_1157), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1157), rt_str(")); *b_ = ", 10)), F->v_1156), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1158 = rt_str_copy(f_gexpr_364(F->a_1145, (*(P425)rt_nil_check(F->pm_1146)).t, &F->vt_1148));
f_check_type_167(F->vt_1148, (*(P425)rt_nil_check(F->pm_1146)).t, (*(P417)rt_nil_check(F->e_398)).line);
if (((((*(P421)rt_nil_check((*(P425)rt_nil_check(F->pm_1146)).t)).kind == ((rt_int)1LL)) && ((*(P425)rt_nil_check(F->pm_1146)).c != NULL)) && (*(P419)rt_nil_check((*(P425)rt_nil_check(F->pm_1146)).c)).hasm)) {
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->args_1144)), rt_str("rt_range(", 9)), F->v_1158), rt_str(", ", 2)), f_itos_7((*(P419)rt_nil_check((*(P425)rt_nil_check(F->pm_1146)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P419)rt_nil_check((*(P425)rt_nil_check(F->pm_1146)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1144 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P412)rt_nil_check(F->args_1144)), F->v_1158); b_; }));
}
}
F->a_1145 = (*(P417)rt_nil_check(F->a_1145)).next;
F->pm_1146 = (*(P425)rt_nil_check(F->pm_1146)).next;
}
if (((F->a_1145 != NULL) || (F->pm_1146 != NULL))) {
f_fail_21((*(P417)rt_nil_check(F->e_398)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check((*(P417)rt_nil_check(F->fn_1141)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_52((*(P417)rt_nil_check(F->e_398)).b), f_list_len_52(F->a_1145)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_400) = (*(P427)rt_nil_check(F->y_1143)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check((*(P427)rt_nil_check(F->y_1143)).cname)), rt_str("(", 1)), (*(P412)rt_nil_check(F->args_1144))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_408(rstr *name_402, P417 tt_403, P417 args_404, rt_int line_405, int is_stmt_406, P421 *t_407) {
  struct f_builtin_408fr *F = rt_alloc(sizeof *F);
F->name_402 = name_402;
F->tt_403 = tt_403;
F->args_404 = args_404;
F->line_405 = line_405;
F->is_stmt_406 = is_stmt_406;
F->t_407 = t_407;
F->at_1159 = NULL;
F->n_1160 = f_list_len_52(F->args_404);
(*F->t_407) = g_ty_void_478;
if (((rt_str_eq((*F->name_402), rt_str("POS", 3)) || rt_str_eq((*F->name_402), rt_str("SUCC", 4))) || rt_str_eq((*F->name_402), rt_str("PRED", 4)))) {
F->a_1161 = rt_str_copy(f_gexpr_364(F->args_404, NULL, &F->at_1159));
if (rt_str_eq((*F->name_402), rt_str("POS", 3))) {
if (((*(P421)rt_nil_check(F->at_1159)).kind != ((rt_int)4LL))) {
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_407) = g_ty_int_473;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1161), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_407) = F->at_1159;
if (((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_402), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1161), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1161), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_402), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1161), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P421)rt_nil_check(F->at_1159)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1161), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P421)rt_nil_check(F->at_1159)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_402), rt_str("SQRT", 4)) || rt_str_eq((*F->name_402), rt_str("SIN", 3))) || rt_str_eq((*F->name_402), rt_str("COS", 3))) || rt_str_eq((*F->name_402), rt_str("EXP", 3))) || rt_str_eq((*F->name_402), rt_str("LN", 2))) || rt_str_eq((*F->name_402), rt_str("FLOOR", 5)))) {
F->a_1162 = rt_str_copy(f_gexpr_364(F->args_404, g_ty_float_475, &F->at_1159));
(*F->t_407) = g_ty_float_475;
if (rt_str_eq((*F->name_402), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1162), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_402)), rt_str("(", 1)), F->a_1162), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("IFLOAT", 6))) {
F->a_1163 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->args_404)).next, g_ty_int_473, &F->at_1159));
(*F->t_407) = g_ty_float_475;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1163), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("IFIX", 4))) {
F->a_1164 = rt_str_copy(f_gexpr_364(F->args_404, g_ty_float_475, &F->at_1159));
(*F->t_407) = g_ty_int_473;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1164), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("FORMAT", 6))) {
F->a_1165 = rt_str_copy(f_gexpr_364(F->args_404, g_ty_float_475, &F->at_1159));
F->n1_1166 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->args_404)).next, g_ty_int_473, &F->at_1159));
F->m1_1167 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check((*(P417)rt_nil_check(F->args_404)).next)).next, g_ty_int_473, &F->at_1159));
(*F->t_407) = g_ty_string_477;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1165), rt_str(", ", 2)), F->n1_1166), rt_str(", ", 2)), F->m1_1167), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("ABS", 3))) {
F->a_1168 = rt_str_copy(f_gexpr_364(F->args_404, NULL, &F->at_1159));
(*F->t_407) = F->at_1159;
if (((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1168), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1168), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("CNVT", 4))) {
if ((F->tt_403 == NULL)) {
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1169 = rt_str_copy(f_gexpr_364(F->args_404, NULL, &F->at_1159));
if ((((*(P417)rt_nil_check(F->tt_403)).kind == ((rt_int)73LL)) && ((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)1LL)))) {
(*F->t_407) = g_ty_string_477;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1169), rt_str(")", 1));
goto ret_;
} else if ((((*(P417)rt_nil_check(F->tt_403)).kind == ((rt_int)73LL)) && ((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)3LL)))) {
(*F->t_407) = g_ty_string_477;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1169), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P417)rt_nil_check(F->tt_403)).kind == ((rt_int)73LL)) && ((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)2LL)))) {
(*F->t_407) = g_ty_string_477;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1169), rt_str(") \? rt_str(", 11)), f_q_16()), rt_str("TRUE", 4)), f_q_16()), rt_str(", 4) : rt_str(", 14)), f_q_16()), rt_str("FALSE", 5)), f_q_16()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P417)rt_nil_check(F->tt_403)).kind == ((rt_int)70LL)) && ((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)5LL)))) {
(*F->t_407) = g_ty_int_473;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1169), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_402), rt_str("WRITELN", 7))) {
if ((F->n_1160 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1170 = NULL;
F->last_1170 = F->args_404;
while (((*(P417)rt_nil_check(F->last_1170)).next != NULL)) {
F->last_1170 = (*(P417)rt_nil_check(F->last_1170)).next;
}
{
F->a_1171 = rt_str_copy(f_gexpr_364(F->last_1170, g_ty_string_477, &F->at_1159));
f_check_type_167(F->at_1159, g_ty_string_477, F->line_405);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1171), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_402), rt_str("WRITE", 5))) {
F->a_1172 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->args_404)).next, NULL, &F->at_1159));
if (((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1172), rt_str(")", 1));
goto ret_;
} else if (((*(P421)rt_nil_check(F->at_1159)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1172), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_402), rt_str("READLN", 6))) {
F->lv_1173 = NULL;
F->lc_1174 = NULL;
F->last_1176 = NULL;
F->last_1176 = F->args_404;
while (((*(P417)rt_nil_check(F->last_1176)).next != NULL)) {
F->last_1176 = (*(P417)rt_nil_check(F->last_1176)).next;
}
f_lvalue_343(F->last_1176, &F->lv_1173, &F->at_1159, &F->lc_1174, &F->ro_1175);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P412)rt_nil_check(F->lv_1173))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("SIZELN", 6))) {
(*F->t_407) = g_ty_int_473;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("EOF", 3))) {
(*F->t_407) = g_ty_bool_474;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_402), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_402), rt_str("SYS_OUT", 7)))) {
(*F->t_407) = g_ty_file_479;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_402), rt_str("OPEN", 4)) || rt_str_eq((*F->name_402), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_402), rt_str("SEND", 4)) || rt_str_eq((*F->name_402), rt_str("RECEIVE", 7)))) {
F->lv_1177 = NULL;
F->dv_1178 = NULL;
F->lc_1179 = NULL;
F->mt_1181 = NULL;
F->dt_1182 = NULL;
f_lvalue_343(F->args_404, &F->lv_1177, &F->mt_1181, &F->lc_1179, &F->ro_1180);
if (((*(P421)rt_nil_check(F->mt_1181)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_402), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_402), rt_str("RECEIVE", 7))) {
f_lvalue_343((*(P417)rt_nil_check(F->args_404)).next, &F->dv_1178, &F->dt_1182, &F->lc_1179, &F->ro_1180);
f_check_type_167(F->dt_1182, (*(P421)rt_nil_check(F->mt_1181)).elem, F->line_405);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(&", 12), (*(P412)rt_nil_check(F->lv_1177))), rt_str(", &", 3)), (*(P412)rt_nil_check(F->dv_1178))), rt_str(")", 1));
goto ret_;
}
{
F->v_1183 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->args_404)).next, (*(P421)rt_nil_check(F->mt_1181)).elem, &F->at_1159));
f_check_type_167(F->at_1159, (*(P421)rt_nil_check(F->mt_1181)).elem, F->line_405);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_169((*(P421)rt_nil_check(F->mt_1181)).elem)), rt_str(" m_ = ", 6)), F->v_1183), rt_str("; rt_send(&", 11)), (*(P412)rt_nil_check(F->lv_1177))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_402), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_402), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1184 = NULL;
F->lc_1185 = NULL;
F->mt_1187 = NULL;
f_lvalue_343(F->args_404, &F->lv_1184, &F->mt_1187, &F->lc_1185, &F->ro_1186);
if (((*(P421)rt_nil_check(F->mt_1187)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_402), rt_str(" needs a mailbox", 16)); b_; }));
}
(*F->t_407) = g_ty_int_473;
if (rt_str_eq((*F->name_402), rt_str("FULL_SLOTS", 10))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_mbox_count(&", 15), (*(P412)rt_nil_check(F->lv_1184))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P412)rt_nil_check(F->lv_1184))), rt_str(".cap - rt_mbox_count(&", 22)), (*(P412)rt_nil_check(F->lv_1184))), rt_str("))", 2));
goto ret_;
} else if ((rt_str_eq((*F->name_402), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_402), rt_str("COND_RECEIVE", 12)))) {
F->lv_1188 = NULL;
F->dv_1189 = NULL;
F->bv_1190 = NULL;
F->lc_1191 = NULL;
F->mt_1193 = NULL;
F->dt_1194 = NULL;
F->bt_1195 = NULL;
f_lvalue_343(F->args_404, &F->lv_1188, &F->mt_1193, &F->lc_1191, &F->ro_1192);
if (((*(P421)rt_nil_check(F->mt_1193)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_402), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_343((*(P417)rt_nil_check((*(P417)rt_nil_check(F->args_404)).next)).next, &F->bv_1190, &F->bt_1195, &F->lc_1191, &F->ro_1192);
f_check_type_167(F->bt_1195, g_ty_bool_474, F->line_405);
if (rt_str_eq((*F->name_402), rt_str("COND_RECEIVE", 12))) {
f_lvalue_343((*(P417)rt_nil_check(F->args_404)).next, &F->dv_1189, &F->dt_1194, &F->lc_1191, &F->ro_1192);
f_check_type_167(F->dt_1194, (*(P421)rt_nil_check(F->mt_1193)).elem, F->line_405);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P412)rt_nil_check(F->bv_1190)), rt_str(" = rt_cond_receive(&", 20)), (*(P412)rt_nil_check(F->lv_1188))), rt_str(", &", 3)), (*(P412)rt_nil_check(F->dv_1189))), rt_str(")", 1));
goto ret_;
}
{
F->v_1196 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->args_404)).next, (*(P421)rt_nil_check(F->mt_1193)).elem, &F->at_1159));
f_check_type_167(F->at_1159, (*(P421)rt_nil_check(F->mt_1193)).elem, F->line_405);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_169((*(P421)rt_nil_check(F->mt_1193)).elem)), rt_str(" m_ = ", 6)), F->v_1196), rt_str("; ", 2)), (*(P412)rt_nil_check(F->bv_1190))), rt_str(" = rt_cond_send(&", 17)), (*(P412)rt_nil_check(F->lv_1188))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_402), rt_str("PRIORITY", 8))) {
(*F->t_407) = g_ty_int_473;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_296(F->args_404)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("SET_PRIORITY", 12))) {
F->v_1197 = rt_str_copy(f_gexpr_364((*(P417)rt_nil_check(F->args_404)).next, g_ty_int_473, &F->at_1159));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_296(F->args_404)), rt_str(", ", 2)), F->v_1197), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_296(F->args_404)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("ACTIVE", 6))) {
(*F->t_407) = g_ty_bool_474;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_296(F->args_404)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("DELAY", 5))) {
F->v_1198 = rt_str_copy(f_gexpr_364(F->args_404, g_ty_int_473, &F->at_1159));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1198), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("DELAY_UNTIL", 11))) {
F->v_1199 = rt_str_copy(f_gexpr_364(F->args_404, g_ty_int_473, &F->at_1159));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1199), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_296(F->args_404)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("TIME", 4))) {
(*F->t_407) = g_ty_int_473;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_402), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_402), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_402), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_402), rt_str("HOURS", 5)))) {
(*F->t_407) = g_ty_int_473;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_402));
goto ret_;
} else if (rt_str_eq((*F->name_402), rt_str("HALT", 4))) {
F->a_1200 = rt_str_copy(f_gexpr_364(F->args_404, g_ty_int_473, &F->at_1159));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1200), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_405, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_402), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_410(P417 units_409) {
  struct f_translate_410fr *F = rt_alloc(sizeof *F);
F->units_409 = units_409;
F->u_1201 = NULL;
F->u_1201 = F->units_409;
while ((F->u_1201 != NULL)) {
if (((*(P417)rt_nil_check(F->u_1201)).next == NULL)) {
{ R438 *cell1202 = rt_alloc(sizeof(R438));
(*cell1202).d = NULL;
(*cell1202).next = NULL;
g_caps_462 = cell1202;
}
(*(P437)rt_nil_check(g_caps_462)).d = F->u_1201;
f_declare_body_227((*(P417)rt_nil_check(F->u_1201)).c);
f_body_elements_264((*(P417)rt_nil_check(F->u_1201)).c);
} else {
f_gen_capsule_237(F->u_1201);
}
F->u_1201 = (*(P417)rt_nil_check(F->u_1201)).next;
}
ret_:
  return;
}

static void f_print_program_411(void) {
  struct f_print_program_411fr *F = rt_alloc(sizeof *F);
f_emit_helpers_223();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_16()), rt_str("paleo.h", 7)), f_q_16()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_29(g_out_types_450);
f_print_buffer_29(g_out_frames_465);
f_print_buffer_29(g_out_helpers_451);
f_print_buffer_29(g_out_protos_452);
f_print_buffer_29(g_out_globals_453);
f_print_buffer_29(g_out_funcs_454);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_29(g_out_excs_456);
f_print_buffer_29(g_out_init_455);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R440(R440 *d, R440 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R440 cp_R440(R440 s) {
  R440 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R440(R440 a, R440 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R438(R438 *d, R438 s) {
  d->d = s.d;
  d->next = s.next;
}
static R438 cp_R438(R438 s) {
  R438 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R438(R438 a, R438 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R436(R436 *d, R436 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R436 cp_R436(R436 s) {
  R436 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R436(R436 a, R436 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A434(A434 *d, A434 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A434 cp_A434(A434 s) {
  A434 d = s; d.p = rt_alloc(sizeof(P427) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A434(A434 a, A434 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R432(R432 *d, R432 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R432 cp_R432(R432 s) {
  R432 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R432(R432 a, R432 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R430(R430 *d, R430 s) {
  d->s = s.s;
  d->next = s.next;
}
static R430 cp_R430(R430 s) {
  R430 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R430(R430 a, R430 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R428(R428 *d, R428 s) {
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
  d->binds = s.binds;
  d->insts = s.insts;
  d->chain = s.chain;
  d->stack = s.stack;
}
static R428 cp_R428(R428 s) {
  R428 d = s;
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
  d.binds = s.binds;
  d.insts = s.insts;
  d.chain = s.chain;
  d.stack = s.stack;
  return d;
}
static int eq_R428(R428 a, R428 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R426(R426 *d, R426 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R426 cp_R426(R426 s) {
  R426 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R426(R426 a, R426 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R424(R424 *d, R424 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R424 cp_R424(R424 s) {
  R424 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R424(R424 a, R424 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R422(R422 *d, R422 s) {
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
  d->ocap = s.ocap;
  d->fields = s.fields;
  d->target = s.target;
  d->decl = s.decl;
  d->cname = s.cname;
  d->forward = s.forward;
  d->defined = s.defined;
  d->helpers = s.helpers;
  d->next = s.next;
}
static R422 cp_R422(R422 s) {
  R422 d = s;
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
  d.ocap = s.ocap;
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
static int eq_R422(R422 a, R422 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R420(R420 *d, R420 s) {
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
static R420 cp_R420(R420 s) {
  R420 d = s;
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
static int eq_R420(R420 a, R420 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R418(R418 *d, R418 s) {
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
  d->e = s.e;
  d->next = s.next;
}
static R418 cp_R418(R418 s) {
  R418 d = s;
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
  d.e = s.e;
  d.next = s.next;
  return d;
}
static int eq_R418(R418 a, R418 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A416(A416 *d, A416 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A416 cp_A416(A416 s) {
  A416 d = s; d.p = rt_alloc(sizeof(P413) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A416(A416 a, A416 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R414(R414 *d, R414 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R414 cp_R414(R414 s) {
  R414 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R414(R414 a, R414 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_441 = NULL;
g_ntoks_442 = ((rt_int)0LL);
g_tpos_443 = ((rt_int)1LL);
g_src_line_444 = ((rt_int)0LL);
g_table_445 = NULL;
g_depth_446 = ((rt_int)0LL);
g_scope_stack_447 = NULL;
g_all_types_448 = NULL;
g_serial_449 = ((rt_int)0LL);
g_out_types_450 = NULL;
g_out_helpers_451 = NULL;
g_out_protos_452 = NULL;
g_out_globals_453 = NULL;
g_out_funcs_454 = NULL;
g_out_init_455 = NULL;
g_out_excs_456 = NULL;
g_code_457 = NULL;
g_fields_buf_458 = NULL;
g_in_func_459 = 0;
g_cur_level_460 = ((rt_int)0LL);
g_fctx_461 = NULL;
g_caps_462 = NULL;
g_psub_463 = NULL;
g_st_field_464 = NULL;
g_out_frames_465 = NULL;
g_func_sym_466 = NULL;
g_exits_467 = NULL;
g_frames_468 = ((rt_int)0LL);
g_handlers_469 = NULL;
g_cleanups_470 = NULL;
g_trial_471 = ((rt_int)0LL);
g_mcopies_472 = NULL;
g_ty_int_473 = NULL;
g_ty_bool_474 = NULL;
g_ty_float_475 = NULL;
g_ty_ascii_476 = NULL;
g_ty_string_477 = NULL;
g_ty_void_478 = NULL;
g_ty_file_479 = NULL;
g_ty_nil_480 = NULL;
g_ty_lock_481 = NULL;
g_ty_act_482 = NULL;
g_no_cons_483 = NULL;
{ A416 *cell1203 = rt_alloc(sizeof(A416));
rt_int pv1204 = ((rt_int)1000000LL);
(*cell1203).lo = ((rt_int)1LL); (*cell1203).hi = pv1204; (*cell1203).lo2 = 1; (*cell1203).hi2 = 1;
(*cell1203).p = rt_alloc(sizeof(P413) * (size_t)RT_CNT((*cell1203)));
for (rt_int i1205 = 0; i1205 < RT_CNT((*cell1203)); i1205++) {
(*cell1203).p[i1205] = NULL;
}
g_toks_441 = cell1203;
}
{ A434 *cell1206 = rt_alloc(sizeof(A434));
rt_int pv1207 = ((rt_int)4093LL);
(*cell1206).lo = ((rt_int)0LL); (*cell1206).hi = pv1207; (*cell1206).lo2 = 1; (*cell1206).hi2 = 1;
(*cell1206).p = rt_alloc(sizeof(P427) * (size_t)RT_CNT((*cell1206)));
for (rt_int i1208 = 0; i1208 < RT_CNT((*cell1206)); i1208++) {
(*cell1206).p[i1208] = NULL;
}
g_table_445 = cell1206;
}
g_out_types_450 = f_new_buffer_22();
g_out_helpers_451 = f_new_buffer_22();
g_out_protos_452 = f_new_buffer_22();
g_out_globals_453 = f_new_buffer_22();
g_out_funcs_454 = f_new_buffer_22();
g_out_init_455 = f_new_buffer_22();
g_out_excs_456 = f_new_buffer_22();
g_out_frames_465 = f_new_buffer_22();
g_code_457 = g_out_init_455;
g_no_cons_483 = f_new_cons_155();
g_ty_int_473 = f_new_typ_154(((rt_int)1LL));
g_ty_bool_474 = f_new_typ_154(((rt_int)2LL));
g_ty_float_475 = f_new_typ_154(((rt_int)3LL));
g_ty_string_477 = f_new_typ_154(((rt_int)5LL));
g_ty_void_478 = f_new_typ_154(((rt_int)9LL));
g_ty_file_479 = f_new_typ_154(((rt_int)10LL));
g_ty_nil_480 = f_new_typ_154(((rt_int)11LL));
g_ty_lock_481 = f_new_typ_154(((rt_int)13LL));
g_ty_act_482 = f_new_typ_154(((rt_int)14LL));
{ rt_frame xf1209;
if (RT_TRY(xf1209)) {
f_init_ascii_174();
f_read_source_43();
f_translate_410(f_program_133());
f_print_program_411();
RT_POP(xf1209);
} else {
RT_POP(xf1209);
int x1210 = rt_xcur;
if (0 || x1210 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1210);
}
}
}
  rt_main_done();
  return 0;
}
