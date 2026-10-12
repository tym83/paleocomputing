#include "paleo.h"
#include <math.h>
typedef rstr *P404;
typedef struct R406 R406;
typedef struct R406 *P405;
struct R406 {  rt_int kind; rt_int line; rt_int ival; P404 s;  };
typedef struct A408 A408;
struct A408 { rt_int lo, hi, lo2, hi2; P405 *p; };
typedef A408 *P407;
typedef struct R410 R410;
typedef struct R410 *P409;
struct R410 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P404 name; P404 tag; P409 a; P409 b; P409 c; P409 d; P409 e; P409 next;  };
typedef struct R412 R412;
typedef struct R412 *P411;
struct R412 {  P404 lo; P404 hi; P404 lo2; P404 hi2; P404 slen; rt_int mlo; rt_int mhi; int hasm; P409 args;  };
typedef struct R414 R414;
typedef struct R414 *P413;
typedef struct R416 R416;
typedef struct R416 *P415;
struct R416 {  P404 name; P413 t; P411 c; P409 st; P415 next;  };
struct R414 {  rt_int kind; P404 name; P409 lits; P413 elem; P413 idx; P413 idx2; P411 elemcons; P409 elemst; P413 under; P409 tparams; P415 fields; P413 target; P409 decl; P404 cname; int forward; int defined; int helpers; P413 next;  };
typedef struct R418 R418;
typedef struct R418 *P417;
struct R418 {  P404 name; rt_int mode; P413 t; P411 c; P404 cfield; P417 next;  };
typedef struct R420 R420;
typedef struct R420 *P419;
struct R420 {  rt_int kind; P404 name; P413 t; P411 c; P404 access; P404 cname; int ro_flag; rt_int mvalue; int hasmv; P409 st; P409 decl; P417 params; P413 result; rt_int depth; rt_int level; int byref; P419 members; P419 mnext; P409 binds; P419 insts; P419 chain; P419 stack;  };
typedef struct R422 R422;
typedef struct R422 *P421;
struct R422 {  P404 s; P421 next;  };
typedef struct R424 R424;
typedef struct R424 *P423;
struct R424 {  P421 head; P421 tail;  };
typedef struct A426 A426;
struct A426 { rt_int lo, hi, lo2, hi2; P419 *p; };
typedef A426 *P425;
typedef struct R428 R428;
typedef struct R428 *P427;
struct R428 {  P404 match; P404 label; rt_int depth; P427 next;  };
typedef struct R430 R430;
typedef struct R430 *P429;
struct R430 {  rt_int depth; P409 imps; int all_imp; P429 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P404 result_;
 P404 t_472;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_475;
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
 rstr letters_476;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_477;
 rstr r_478;
 rt_int i_479;
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
 P423 result_;
 P423 b_483;
};
struct f_put_25fr { int dummy;
 P423 b_23;
 rstr *s_24;
 P421 l_485;
};
struct f_emit_27fr { int dummy;
 rstr *s_26;
};
struct f_print_buffer_29fr { int dummy;
 P423 b_28;
 P421 l_487;
};
struct f_splice_32fr { int dummy;
 P423 a_30;
 P423 b_31;
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
 P405 t_489;
};
struct f_lex_line_42fr { int dummy;
 rstr *line_41;
 rt_int i_491;
 rt_int j_492;
 rt_int n_493;
 int c_494;
 rstr w_495;
 rt_int k_496;
 rstr w_500;
 rt_int k_501;
 rstr two_505;
};
struct f_read_source_43fr { int dummy;
 rstr line_506;
};
struct f_nn_46fr { int dummy;
 rt_int kind_44;
 rt_int line_45;
 P409 result_;
 P409 x_507;
};
struct f_append_50fr { int dummy;
 P409 *head_47;
 P409 *tail_48;
 P409 x_49;
};
struct f_list_len_52fr { int dummy;
 P409 l_51;
 rt_int result_;
 rt_int n_509;
 P409 p_510;
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
 P404 result_;
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
 P404 result_;
};
struct f_name_node_75fr { int dummy;
 P409 result_;
 P409 x_511;
};
struct f_id_list_76fr { int dummy;
 P409 result_;
 P409 head_512;
 P409 tail_513;
};
struct f_p_subtype_77fr { int dummy;
 P409 result_;
 rt_int line_514;
 P409 x_515;
 rstr w_516;
 P409 head_517;
 P409 tail_518;
 P409 head_519;
 P409 tail_520;
 int more_521;
 P409 names_522;
 P409 st_523;
 P409 cmp_524;
 P409 head_525;
 P409 tail_526;
 int more_527;
 P409 lit_528;
};
struct f_actual_params_78fr { int dummy;
 P409 result_;
 P409 head_529;
 P409 tail_530;
};
struct f_is_type_word_80fr { int dummy;
 rstr *w_79;
 int result_;
};
struct f_actual_tt_81fr { int dummy;
 P409 result_;
 P409 head_531;
 P409 tail_532;
 int more_533;
};
struct f_binop_86fr { int dummy;
 P404 op_82;
 P409 l_83;
 P409 r_84;
 rt_int line_85;
 P409 result_;
 P409 x_534;
};
struct f_expr_87fr { int dummy;
 P409 result_;
 P409 l_535;
 P404 op_536;
 rt_int line_537;
};
struct f_expr_and_88fr { int dummy;
 P409 result_;
 P409 l_538;
 rt_int line_539;
};
struct f_expr_not_89fr { int dummy;
 P409 result_;
 P409 x_540;
};
struct f_is_rel_91fr { int dummy;
 rstr *s_90;
 int result_;
};
struct f_expr_rel_92fr { int dummy;
 P409 result_;
 P409 l_541;
 P404 op_542;
 rt_int line_543;
};
struct f_expr_add_93fr { int dummy;
 P409 result_;
 P409 l_544;
 P404 op_545;
 rt_int line_546;
};
struct f_expr_mul_94fr { int dummy;
 P409 result_;
 P409 l_547;
 P404 op_548;
 rt_int line_549;
};
struct f_expr_pow_95fr { int dummy;
 P409 result_;
 P409 l_550;
 rt_int line_551;
};
struct f_expr_prefix_96fr { int dummy;
 P409 result_;
 P409 x_552;
};
struct f_postfix_97fr { int dummy;
 P409 result_;
 P409 p_553;
 rt_int line_554;
 P409 x_555;
 P409 head_556;
 P409 tail_557;
 int more_558;
 P409 lo_559;
 P409 r_560;
 P409 x_561;
 P409 x_562;
 P409 x_563;
};
struct f_primary_98fr { int dummy;
 P409 result_;
 rt_int line_564;
 P409 x_565;
 rt_int k_566;
 rstr w_567;
 P409 head_568;
 P409 tail_569;
 int more_570;
};
struct f_constructor_item_99fr { int dummy;
 P409 result_;
 rt_int line_571;
 P409 it_572;
 P409 first_573;
 P409 keys_574;
 P409 ktail_575;
 P409 lab_576;
 rt_int save_577;
 P409 more_578;
 P409 tail2_579;
 int ok_580;
 int go_581;
 P409 l2_582;
};
struct f_at_body_end_100fr { int dummy;
 int result_;
};
struct f_body_101fr { int dummy;
 P409 result_;
 P409 head_583;
 P409 tail_584;
};
struct f_body_element_102fr { int dummy;
 P409 result_;
 P409 x_585;
};
struct f_declaration_103fr { int dummy;
 P409 result_;
 rt_int line_586;
 P409 head_587;
 P409 tail_588;
 P409 names_589;
 P409 x_590;
};
struct f_object_decl_104fr { int dummy;
 P409 result_;
 rt_int line_591;
 int is_var_592;
 P409 names_593;
 P409 st_594;
 P409 init_595;
 P409 head_596;
 P409 tail_597;
 P409 x_598;
};
struct f_abbrev_decl_105fr { int dummy;
 P409 result_;
 P409 x_599;
};
struct f_type_decl_106fr { int dummy;
 P409 result_;
 rt_int line_600;
 P404 name_601;
 P409 params_602;
 P409 x_603;
};
struct f_mode_of_108fr { int dummy;
 rstr *w_107;
 rt_int result_;
};
struct f_formal_params_109fr { int dummy;
 P409 result_;
 P409 head_604;
 P409 tail_605;
 int more_606;
 rt_int mode_607;
 P409 names_608;
 P409 ntail_609;
 P409 st_610;
 P409 p_611;
};
struct f_imports_list_111fr { int dummy;
 P409 owner_110;
 int result_;
 P409 head_612;
 P409 tail_613;
 int more_614;
 int ro_615;
 P409 x_616;
};
struct f_is_definable_113fr { int dummy;
 rstr *w_112;
 int result_;
};
struct f_definable_name_114fr { int dummy;
 P404 result_;
};
struct f_subprogram_decl_115fr { int dummy;
 P409 result_;
 rt_int line_617;
 P409 x_618;
 int is_abn_619;
 int is_func_620;
 int dummy_621;
};
struct f_capsule_decl_116fr { int dummy;
 P409 result_;
 P409 x_622;
 int dummy_623;
 P409 head_624;
 P409 tail_625;
 int more_626;
 P409 n_627;
};
struct f_formal_tt_117fr { int dummy;
 P409 result_;
 P409 head_628;
 P409 tail_629;
 int more_630;
};
struct f_generic_decl_118fr { int dummy;
 P409 result_;
 P409 x_631;
 P409 head_632;
 P409 tail_633;
 int more_634;
 P409 names_635;
 rt_int kind_636;
 P409 st_637;
 P409 p_638;
 P404 nm_639;
 P409 st_640;
};
struct f_task_decl_119fr { int dummy;
 P409 result_;
 P409 x_641;
 int dummy_642;
};
struct f_expose_decl_120fr { int dummy;
 P409 result_;
 P409 x_643;
 P409 head_644;
 P409 tail_645;
 int more_646;
 P409 n_647;
};
struct f_is_compound_kw_122fr { int dummy;
 rstr *w_121;
 int result_;
};
struct f_statement_123fr { int dummy;
 P409 result_;
 P409 labels_648;
 P409 ltail_649;
 P404 match_650;
 P409 s_651;
};
struct f_unlabeled_statement_124fr { int dummy;
 P409 result_;
 rt_int line_652;
 P409 x_653;
 P409 head_654;
 P409 tail_655;
 P409 invs_656;
 P409 itail_657;
 int more_658;
 P409 target_659;
};
struct f_arm_128fr { int dummy;
 P409 cond_125;
 P409 b_126;
 rt_int line_127;
 P409 result_;
 P409 x_660;
};
struct f_if_stmt_129fr { int dummy;
 P409 result_;
 P409 x_661;
 P409 head_662;
 P409 tail_663;
 P409 cond_664;
 int go_665;
};
struct f_case_stmt_130fr { int dummy;
 P409 result_;
 P409 x_666;
 P409 head_667;
 P409 tail_668;
 P409 labs_669;
 P409 ltail_670;
 int more_671;
 P409 l_672;
};
struct f_repeat_stmt_131fr { int dummy;
 P409 result_;
 P409 x_673;
};
struct f_guard_stmt_132fr { int dummy;
 P409 result_;
 P409 x_674;
 P409 head_675;
 P409 tail_676;
 P409 h_677;
};
struct f_program_133fr { int dummy;
 P409 result_;
 P409 head_678;
 P409 tail_679;
};
struct f_hash_135fr { int dummy;
 rstr *s_134;
 rt_int result_;
 rt_int h_680;
 rt_int i_681;
};
struct f_lookup_137fr { int dummy;
 rstr *name_136;
 P419 result_;
 P419 y_685;
};
struct f_lookup_decl_139fr { int dummy;
 P409 d_138;
 P419 result_;
 P419 y_686;
};
struct f_define_142fr { int dummy;
 P419 y_140;
 rt_int line_141;
 rt_int h_687;
 P419 z_688;
};
struct f_overloadable_144fr { int dummy;
 P419 y_143;
 int result_;
};
struct f_same_signature_147fr { int dummy;
 P417 a_145;
 P417 b_146;
 int result_;
 P417 x_689;
 P417 y_690;
};
struct f_open_scope_148fr { int dummy;
};
struct f_close_scope_149fr { int dummy;
};
struct f_new_sym_152fr { int dummy;
 rt_int kind_150;
 P404 name_151;
 P419 result_;
 P419 y_691;
};
struct f_new_typ_154fr { int dummy;
 rt_int kind_153;
 P413 result_;
 P413 t_693;
};
struct f_new_cons_155fr { int dummy;
 P411 result_;
 P411 c_695;
};
struct f_same_lits_158fr { int dummy;
 P409 a_156;
 P409 b_157;
 int result_;
 P409 x_697;
 P409 y_698;
};
struct f_same_161fr { int dummy;
 P413 a_159;
 P413 b_160;
 int result_;
 P415 f_699;
 P415 g_700;
};
struct f_kind_name_163fr { int dummy;
 P413 t_162;
 rstr result_;
};
struct f_check_type_167fr { int dummy;
 P413 got_164;
 P413 want_165;
 rt_int line_166;
};
struct f_ctype_169fr { int dummy;
 P413 t_168;
 rstr result_;
};
struct f_field_decls_171fr { int dummy;
 P413 t_170;
 rstr result_;
 P415 f_703;
 P404 s_704;
};
struct f_declare_ctype_173fr { int dummy;
 P413 t_172;
 P413 u_705;
 P413 target_706;
 P409 p_707;
 P404 fs_708;
};
struct f_init_ascii_174fr { int dummy;
 rstr names_709;
 P409 head_710;
 P409 tail_711;
 rt_int start_712;
 rt_int i_713;
 P409 lit_717;
};
struct f_lit_index_177fr { int dummy;
 P409 lits_175;
 rstr *name_176;
 rt_int result_;
 rt_int i_718;
 P409 l_719;
};
struct f_resolve_subtype_180fr { int dummy;
 P409 st_178;
 P411 *c_179;
 P413 result_;
 P413 t_720;
 int ok_721;
 P413 dummy_722;
 P411 ic_724;
 P411 ic2_725;
 P411 ec_726;
 P413 it_727;
 P413 et_728;
 P411 ec_729;
 P409 comp_730;
 P415 tail_731;
 P411 cc_732;
 P415 f_733;
 P411 ec_735;
 P419 y_736;
};
struct f_new_type_184fr { int dummy;
 P419 y_181;
 P409 st_182;
 P411 *c_183;
 P413 result_;
 P409 d_737;
 P409 p_738;
 P411 uc_739;
 P419 z_740;
};
struct f_init_storage_188fr { int dummy;
 rstr *lval_185;
 P413 t_186;
 P411 c_187;
 P409 p_741;
 P409 a_742;
 P411 uc_743;
 P413 ut_744;
 P413 at_745;
 rstr v_746;
 P419 z_747;
 rstr i_748;
 P415 f_749;
};
struct f_manifest_191fr { int dummy;
 P409 e_189;
 int *ok_190;
 rt_int result_;
 rt_int a_750;
 rt_int b_751;
 int ok2_752;
 P419 y_753;
};
struct f_mcopy_193fr { int dummy;
 P413 t_192;
 rstr result_;
 rstr ct_754;
 rstr name_755;
 P421 l_756;
};
struct f_composite_195fr { int dummy;
 P413 t_194;
 int result_;
};
struct f_assign_code_200fr { int dummy;
 rstr *lval_196;
 P413 t_197;
 rstr *v_198;
 P411 c_199;
 rstr result_;
};
struct f_copy_code_203fr { int dummy;
 P413 t_201;
 rstr *v_202;
 rstr result_;
};
struct f_eq_code_207fr { int dummy;
 P413 t_204;
 rstr *a_205;
 rstr *b_206;
 rstr result_;
};
struct f_elem_assign_211fr { int dummy;
 rstr *lval_208;
 P413 t_209;
 rstr *v_210;
 rstr result_;
};
struct f_seen_name_214fr { int dummy;
 P421 l_212;
 rstr *s_213;
 int result_;
 P421 p_758;
};
struct f_emit_helpers_215fr { int dummy;
 P413 order_759;
 P413 t_760;
 P421 done_761;
 P421 l_762;
 rstr c_763;
};
struct f_helper_bodies_217fr { int dummy;
 P413 t_216;
 rstr c_765;
 P423 b_766;
 P413 e_767;
 P409 p_768;
 P404 pc_769;
 P415 f_770;
 P404 conds_771;
 rstr fn_772;
 rstr fn_773;
};
struct f_declare_body_219fr { int dummy;
 P409 elems_218;
 P409 e_774;
 P419 y_775;
 P419 y_776;
 P419 y_777;
 P413 t_778;
 P419 y_779;
 P419 g_780;
};
struct f_manifest_const_221fr { int dummy;
 P409 d_220;
 int ok_781;
 rt_int v_782;
 P419 y_783;
 P411 c_784;
};
struct f_exported_225fr { int dummy;
 P409 d_222;
 rstr *name_223;
 int *ro_224;
 int result_;
 P409 p_785;
};
struct f_copy_sym_227fr { int dummy;
 P419 y_226;
 P419 result_;
 P419 z_786;
};
struct f_gen_capsule_229fr { int dummy;
 P409 d_228;
 P419 y_788;
 P429 ctx_789;
 P419 m_790;
 P409 p_791;
 int ro_792;
 P419 z_794;
};
struct f_gen_expose_231fr { int dummy;
 P409 d_230;
 P419 y_795;
 P419 m_796;
 P409 p_797;
 int found_798;
 P419 z_799;
};
struct f_finish_ptr_233fr { int dummy;
 P413 t_232;
 P409 d_800;
 P409 p_801;
 P411 c_802;
 rstr dummy_803;
 P419 y_804;
};
struct f_declare_subprogram_235fr { int dummy;
 P409 d_234;
};
struct f_build_subprogram_237fr { int dummy;
 P409 d_236;
 P419 result_;
 P419 y_805;
 P409 p_806;
 P417 tail_807;
 P417 pm_808;
 P411 rc_810;
};
struct f_element_239fr { int dummy;
 P409 e_238;
 rt_int k_811;
 P413 t_812;
 rstr c_813;
};
struct f_storage_242fr { int dummy;
 rstr *name_240;
 P413 t_241;
 rstr result_;
 rstr g_814;
 rstr f_815;
};
struct f_bind_245fr { int dummy;
 P419 y_243;
 rstr *access_244;
};
struct f_var_decl_247fr { int dummy;
 P409 d_246;
 P411 c_816;
 P413 t_817;
 P419 y_818;
 rstr access_819;
 P413 vt_820;
 rstr v_821;
};
struct f_const_decl_249fr { int dummy;
 P409 d_248;
 P411 c_822;
 P413 t_823;
 P413 vt_824;
 P419 y_825;
 int ok_826;
 rstr v_827;
 rstr access_828;
};
struct f_subprogram_251fr { int dummy;
 P409 d_250;
};
struct f_gen_subprogram_254fr { int dummy;
 P409 d_252;
 P419 y_253;
 P423 saved_code_829;
 P423 saved_fields_830;
 int saved_in_831;
 P419 saved_sym_832;
 P427 saved_exits_833;
 rt_int saved_frames_834;
 P404 args_835;
 P417 pm_836;
 P421 saved_handlers_837;
 P421 saved_cleanups_838;
 P429 ctx_839;
 P404 head_840;
 P404 frame_841;
 P404 parent_842;
 rstr ct_844;
 rstr f_845;
 P419 p_846;
};
struct f_body_elements_256fr { int dummy;
 P409 elems_255;
 P409 e_847;
};
struct f_gen_body_258fr { int dummy;
 P409 elems_257;
};
struct f_pop_frames_260fr { int dummy;
 rt_int upto_259;
 rt_int i_848;
 P421 c_849;
};
struct f_push_cleanup_262fr { int dummy;
 rstr *s_261;
 P421 c_850;
};
struct f_pop_cleanup_263fr { int dummy;
};
struct f_gen_statement_265fr { int dummy;
 P409 s_264;
 P404 label_852;
 P427 x_853;
};
struct f_st_assign_267fr { int dummy;
 P409 s_266;
 P404 lv_856;
 P413 t_857;
 P413 vt_858;
 P411 c_859;
 int ro_860;
 rstr lo_861;
 rstr hi_862;
 rstr v_863;
 rstr v_864;
};
struct f_st_call_269fr { int dummy;
 P409 s_268;
 P409 c_865;
 P413 t_866;
 P409 x_867;
};
struct f_st_if_271fr { int dummy;
 P409 s_270;
 P409 a_868;
 int first_869;
 P413 t_870;
 rstr c_871;
};
struct f_st_case_273fr { int dummy;
 P409 s_272;
 P413 st_872;
 P413 vt_873;
 int first_874;
 P409 a_875;
 rstr sel_876;
 rstr tmp_877;
 P409 lab_878;
 P404 conds_879;
 rstr v_880;
 rstr lo_881;
 rstr hi_882;
};
struct f_st_repeat_275fr { int dummy;
 P409 s_274;
 P413 t_883;
 P411 c_884;
 rstr cond_885;
 rstr access_886;
 rstr lov_887;
 rstr hiv_888;
 rstr it_889;
 P419 y_890;
};
struct f_st_exit_277fr { int dummy;
 P409 s_276;
 P427 x_891;
};
struct f_st_return_279fr { int dummy;
 P409 s_278;
 P413 vt_892;
 rstr v_893;
};
struct f_exc_id_282fr { int dummy;
 rstr *name_280;
 rt_int line_281;
 rstr result_;
 P419 y_894;
};
struct f_st_guard_284fr { int dummy;
 P409 s_283;
 P409 h_895;
 int first_896;
 P421 hv_897;
 rstr f_898;
 rstr x_899;
 P409 n_901;
 P404 conds_902;
};
struct f_st_alloc_286fr { int dummy;
 P409 s_285;
 P404 lv_903;
 P413 t_904;
 P413 target_905;
 P413 vt_906;
 P411 c_907;
 P411 tc_908;
 int ro_909;
 P409 d_910;
 P409 p_911;
 P409 a_912;
 rstr tcn_913;
 rstr cell_914;
 rstr v_915;
 rstr pv_916;
 P419 y_917;
 rstr v_918;
};
struct f_act_ref_288fr { int dummy;
 P409 e_287;
 rstr result_;
 P404 lv_919;
 P413 t_920;
 P411 c_921;
 int ro_922;
};
struct f_st_create_290fr { int dummy;
 P409 s_289;
 P419 y_923;
 P417 pm_924;
 P409 a_925;
 P404 lv_926;
 P413 lt_927;
 P413 vt_928;
 P411 lc_929;
 int ro_930;
 rstr nf_931;
 rstr act_932;
 P404 link_933;
 rt_int i_934;
 rstr v_938;
};
struct f_wait_alt_294fr { int dummy;
 P409 inv_291;
 rstr *arr_292;
 rt_int i_293;
 rstr result_;
 P404 lv_939;
 P413 t_940;
 P413 vt_941;
 P411 c_942;
 int ro_943;
 P409 fn_944;
 P409 args_945;
 rstr slot_946;
 P404 dv_947;
 P413 dt_948;
 rstr tmp_949;
 rstr v_950;
 rstr v_951;
};
struct f_st_wait_296fr { int dummy;
 P409 s_295;
 P409 a_952;
 rt_int n_953;
 int first_954;
 P423 inits_955;
 rstr arr_956;
 rstr w_957;
 P409 inv_958;
 P404 conds_959;
 rt_int i_960;
};
struct f_st_region_298fr { int dummy;
 P409 s_297;
 P404 lv_964;
 P413 t_965;
 P411 c_966;
 int ro_967;
 rstr lk_968;
 rstr f_969;
};
struct f_gparam_301fr { int dummy;
 P409 g_299;
 rstr *name_300;
 P409 result_;
 P409 p_970;
};
struct f_bind_sym_303fr { int dummy;
 P409 p_302;
 P419 result_;
 P419 y_971;
};
struct f_same_binds_306fr { int dummy;
 P419 a_304;
 P419 b_305;
 int result_;
 P419 x_972;
 P419 y_973;
};
struct f_same_binding_309fr { int dummy;
 P419 a_307;
 P419 b_308;
 int result_;
};
struct f_instantiate_314fr { int dummy;
 P419 g_310;
 P409 tt_311;
 P409 args_312;
 rt_int line_313;
 P419 result_;
 P409 gd_974;
 P409 pat_975;
 P419 binds_976;
 P409 f_977;
 P409 a_978;
 P409 fp_979;
 P419 inst_980;
 P413 at_981;
 P411 c_982;
 P429 saved_fctx_983;
 int saved_in_984;
 rt_int saved_level_985;
 P419 saved_sym_986;
 P423 saved_code_987;
 P409 p_988;
 P419 b_989;
 P409 st_990;
 int ok_991;
 int known_992;
 P419 q_993;
 P419 b_994;
 rstr v_995;
 P419 b_996;
};
struct f_access_of_316fr { int dummy;
 P419 y_315;
 rstr result_;
 P404 p_997;
 rt_int i_998;
};
struct f_import_of_319fr { int dummy;
 P409 l_317;
 rstr *name_318;
 P409 result_;
 P409 p_1002;
};
struct f_check_import_322fr { int dummy;
 P419 y_320;
 rt_int line_321;
 int result_;
 P429 c_1003;
 int ro_1004;
 P409 imp_1005;
};
struct f_c_ident_324fr { int dummy;
 rstr *s_323;
 rstr result_;
};
struct f_deref_327fr { int dummy;
 rstr *base_325;
 P413 t_326;
 rstr result_;
};
struct f_is_lvalue_329fr { int dummy;
 P409 e_328;
 int result_;
 P419 y_1006;
};
struct f_lvalue_335fr { int dummy;
 P409 e_330;
 P404 *code_331;
 P413 *t_332;
 P411 *c_333;
 int *ro_334;
 P404 base_1007;
 P413 bt_1008;
 P411 bc_1009;
 P419 y_1010;
};
struct f_select_on_343fr { int dummy;
 rstr *base_336;
 P413 bt_337;
 P409 e_338;
 int *ro_339;
 P404 *code_340;
 P413 *t_341;
 P411 *c_342;
 P409 p_1011;
 P415 f_1012;
};
struct f_index_on_352fr { int dummy;
 rstr *base_344;
 P413 bt_345;
 P409 e_346;
 int *ro_347;
 int lv_348;
 P404 *code_349;
 P413 *t_350;
 P411 *c_351;
 P409 a_1013;
 P413 it_1014;
 rstr i_1015;
 rstr j_1016;
 rstr lo_1017;
 rstr hi_1018;
 rstr i_1019;
 rstr i_1020;
};
struct f_gexpr_356fr { int dummy;
 P409 e_353;
 P413 want_354;
 P413 *t_355;
 rstr result_;
 rt_int k_1021;
 P404 code_1022;
 P411 c_1023;
 int ro_1024;
 P413 bt_1025;
 rt_int i_1026;
 P419 y_1027;
 int ro_1028;
 P409 call_1029;
 P409 fname_1030;
 rstr a_1031;
 rstr a_1032;
 rstr a_1033;
 P409 nm_1034;
 P419 y_1035;
 rstr base_1036;
 rstr base_1037;
};
struct f_copy_node_358fr { int dummy;
 P409 e_357;
 P409 result_;
 P409 x_1038;
};
struct f_wrap_apply_360fr { int dummy;
 P409 e_359;
 P409 result_;
 P409 x_1040;
};
struct f_c_string_362fr { int dummy;
 rstr *s_361;
 rstr result_;
 rt_int n_1041;
 rt_int i_1042;
 rstr r_1046;
 rt_int j_1047;
 rt_int i_1048;
};
struct f_enum_type_of_365fr { int dummy;
 rstr *lit_363;
 rt_int line_364;
 P413 result_;
 P419 y_1052;
 P411 c_1053;
};
struct f_attribute_368fr { int dummy;
 P409 e_366;
 P413 *t_367;
 rstr result_;
 P413 bt_1054;
 P411 c_1055;
 P404 base_1056;
 P419 y_1057;
 P409 st_1058;
};
struct f_gbinop_372fr { int dummy;
 P409 e_369;
 P413 want_370;
 P413 *t_371;
 rstr result_;
 P404 op_1059;
 P413 ta_1060;
 P413 tb_1061;
 P413 hint_1062;
 P419 uy_1063;
 P409 l_1064;
 P409 r_1065;
 P409 call_1066;
 P409 fname_1067;
 rstr s_1068;
 rstr a_1069;
 rstr a_1070;
 rstr b_1071;
 rstr a_1072;
 rstr b_1073;
 P413 wa_1074;
 P413 wb_1075;
 rstr a_1076;
 rstr b_1077;
 rstr dummy_1078;
 rstr a_1079;
 rstr b_1080;
 P413 ct_1081;
 rstr a_1082;
 rstr b_1083;
};
struct f_constructor_376fr { int dummy;
 P409 e_373;
 P413 want_374;
 P413 *t_375;
 rstr result_;
 P409 it_1084;
 P415 f_1085;
 P413 vt_1086;
 P404 s_1087;
 rstr v_1088;
 rstr tmp_1089;
 rstr ct_1090;
 rstr et_1091;
 P404 parts_1092;
 rstr lo_1093;
 rstr hi_1094;
 rstr v_1095;
 rt_int i_1096;
 rstr v_1100;
 rstr tmp_1101;
 P404 parts_1102;
 rstr v_1103;
};
struct f_fits_379fr { int dummy;
 P419 y_377;
 P409 args_378;
 int result_;
 P409 a_1104;
 P417 pm_1105;
 P413 t_1106;
 P423 saved_1107;
 int ok_1108;
 P404 lv_1109;
 P411 lc_1110;
 int ro_1111;
 rstr v_1114;
};
struct f_resolve_overload_384fr { int dummy;
 rstr *name_380;
 P409 args_381;
 int is_stmt_382;
 rt_int line_383;
 P419 result_;
 P419 y_1115;
 P419 first_1116;
 rt_int n_1117;
};
struct f_is_builtin_386fr { int dummy;
 rstr *n_385;
 int result_;
};
struct f_user_op_389fr { int dummy;
 rstr *op_387;
 P409 args_388;
 P419 result_;
 P419 y_1118;
};
struct f_gcall_393fr { int dummy;
 P409 e_390;
 int is_stmt_391;
 P413 *t_392;
 rstr result_;
 P409 fn_1119;
 P409 tt_1120;
 P419 y_1121;
 P404 args_1122;
 P409 a_1123;
 P417 pm_1124;
 P413 lt_1125;
 P413 vt_1126;
 P404 lv_1127;
 P411 lc_1128;
 int ro_1129;
 rt_int i_1130;
 rstr v_1134;
 rstr ct_1135;
 rstr v_1136;
};
struct f_builtin_400fr { int dummy;
 rstr *name_394;
 P409 tt_395;
 P409 args_396;
 rt_int line_397;
 int is_stmt_398;
 P413 *t_399;
 rstr result_;
 P413 at_1137;
 rt_int n_1138;
 rstr a_1139;
 rstr a_1140;
 rstr a_1141;
 rstr a_1142;
 rstr a_1143;
 rstr n1_1144;
 rstr m1_1145;
 rstr a_1146;
 rstr a_1147;
 P409 last_1148;
 rstr a_1149;
 rstr a_1150;
 P404 lv_1151;
 P411 lc_1152;
 int ro_1153;
 P409 last_1154;
 P404 lv_1155;
 P404 dv_1156;
 P411 lc_1157;
 int ro_1158;
 P413 mt_1159;
 P413 dt_1160;
 rstr v_1161;
 P404 lv_1162;
 P411 lc_1163;
 int ro_1164;
 P413 mt_1165;
 P404 lv_1166;
 P404 dv_1167;
 P404 bv_1168;
 P411 lc_1169;
 int ro_1170;
 P413 mt_1171;
 P413 dt_1172;
 P413 bt_1173;
 rstr v_1174;
 rstr v_1175;
 rstr v_1176;
 rstr v_1177;
 rstr a_1178;
};
struct f_translate_402fr { int dummy;
 P409 units_401;
 P409 u_1179;
};
struct f_print_program_403fr { int dummy;
};
static void as_R430(R430 *d, R430 s);
static R430 cp_R430(R430 s);
static int eq_R430(R430 a, R430 b);
static void as_R428(R428 *d, R428 s);
static R428 cp_R428(R428 s);
static int eq_R428(R428 a, R428 b);
static void as_A426(A426 *d, A426 s);
static A426 cp_A426(A426 s);
static int eq_A426(A426 a, A426 b);
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
static void as_R416(R416 *d, R416 s);
static R416 cp_R416(R416 s);
static int eq_R416(R416 a, R416 b);
static void as_R414(R414 *d, R414 s);
static R414 cp_R414(R414 s);
static int eq_R414(R414 a, R414 b);
static void as_R412(R412 *d, R412 s);
static R412 cp_R412(R412 s);
static int eq_R412(R412 a, R412 b);
static void as_R410(R410 *d, R410 s);
static R410 cp_R410(R410 s);
static int eq_R410(R410 a, R410 b);
static void as_A408(A408 *d, A408 s);
static A408 cp_A408(A408 s);
static int eq_A408(A408 a, A408 b);
static void as_R406(R406 *d, R406 s);
static R406 cp_R406(R406 s);
static int eq_R406(R406 a, R406 b);
static P404 f_mk_3(rstr *s_2);
static rstr f_chs_5(int c_4);
static rstr f_itos_7(rt_int n_6);
static int f_is_letter_9(int c_8);
static int f_is_digit_11(int c_10);
static int f_upper_13(int c_12);
static rstr f_lower_s_15(rstr *s_14);
static rstr f_q_16(void);
static rstr f_new_name_18(rstr *base_17);
static void f_fail_21(rt_int line_19, rstr *msg_20);
static P423 f_new_buffer_22(void);
static void f_put_25(P423 b_23, rstr *s_24);
static void f_emit_27(rstr *s_26);
static void f_print_buffer_29(P423 b_28);
static void f_splice_32(P423 a_30, P423 b_31);
static int f_is_reserved_34(rstr *w_33);
static int f_is_word_op_36(rstr *w_35);
static void f_add_token_40(rt_int kind_37, rstr *s_38, rt_int ival_39);
static void f_lex_line_42(rstr *line_41);
static void f_read_source_43(void);
static P409 f_nn_46(rt_int kind_44, rt_int line_45);
static void f_append_50(P409 *head_47, P409 *tail_48, P409 x_49);
static rt_int f_list_len_52(P409 l_51);
static rt_int f_cur_line_53(void);
static int f_at_kw_55(rstr *w_54);
static int f_at_op_57(rstr *w_56);
static int f_at_kind_59(rt_int k_58);
static rt_int f_kind_at_61(rt_int k_60);
static P404 f_text_at_63(rt_int k_62);
static void f_perror_65(rstr *msg_64);
static int f_accept_kw_67(rstr *w_66);
static int f_accept_op_69(rstr *w_68);
static void f_expect_kw_71(rstr *w_70);
static void f_expect_op_73(rstr *w_72);
static P404 f_expect_id_74(void);
static P409 f_name_node_75(void);
static P409 f_id_list_76(void);
static P409 f_p_subtype_77(void);
static P409 f_actual_params_78(void);
static int f_is_type_word_80(rstr *w_79);
static P409 f_actual_tt_81(void);
static P409 f_binop_86(P404 op_82, P409 l_83, P409 r_84, rt_int line_85);
static P409 f_expr_87(void);
static P409 f_expr_and_88(void);
static P409 f_expr_not_89(void);
static int f_is_rel_91(rstr *s_90);
static P409 f_expr_rel_92(void);
static P409 f_expr_add_93(void);
static P409 f_expr_mul_94(void);
static P409 f_expr_pow_95(void);
static P409 f_expr_prefix_96(void);
static P409 f_postfix_97(void);
static P409 f_primary_98(void);
static P409 f_constructor_item_99(void);
static int f_at_body_end_100(void);
static P409 f_body_101(void);
static P409 f_body_element_102(void);
static P409 f_declaration_103(void);
static P409 f_object_decl_104(void);
static P409 f_abbrev_decl_105(void);
static P409 f_type_decl_106(void);
static rt_int f_mode_of_108(rstr *w_107);
static P409 f_formal_params_109(void);
static int f_imports_list_111(P409 owner_110);
static int f_is_definable_113(rstr *w_112);
static P404 f_definable_name_114(void);
static P409 f_subprogram_decl_115(void);
static P409 f_capsule_decl_116(void);
static P409 f_formal_tt_117(void);
static P409 f_generic_decl_118(void);
static P409 f_task_decl_119(void);
static P409 f_expose_decl_120(void);
static int f_is_compound_kw_122(rstr *w_121);
static P409 f_statement_123(void);
static P409 f_unlabeled_statement_124(void);
static P409 f_arm_128(P409 cond_125, P409 b_126, rt_int line_127);
static P409 f_if_stmt_129(void);
static P409 f_case_stmt_130(void);
static P409 f_repeat_stmt_131(void);
static P409 f_guard_stmt_132(void);
static P409 f_program_133(void);
static rt_int f_hash_135(rstr *s_134);
static P419 f_lookup_137(rstr *name_136);
static P419 f_lookup_decl_139(P409 d_138);
static void f_define_142(P419 y_140, rt_int line_141);
static int f_overloadable_144(P419 y_143);
static int f_same_signature_147(P417 a_145, P417 b_146);
static void f_open_scope_148(void);
static void f_close_scope_149(void);
static P419 f_new_sym_152(rt_int kind_150, P404 name_151);
static P413 f_new_typ_154(rt_int kind_153);
static P411 f_new_cons_155(void);
static int f_same_lits_158(P409 a_156, P409 b_157);
static int f_same_161(P413 a_159, P413 b_160);
static rstr f_kind_name_163(P413 t_162);
static void f_check_type_167(P413 got_164, P413 want_165, rt_int line_166);
static rstr f_ctype_169(P413 t_168);
static rstr f_field_decls_171(P413 t_170);
static void f_declare_ctype_173(P413 t_172);
static void f_init_ascii_174(void);
static rt_int f_lit_index_177(P409 lits_175, rstr *name_176);
static P413 f_resolve_subtype_180(P409 st_178, P411 *c_179);
static P413 f_new_type_184(P419 y_181, P409 st_182, P411 *c_183);
static void f_init_storage_188(rstr *lval_185, P413 t_186, P411 c_187);
static rt_int f_manifest_191(P409 e_189, int *ok_190);
static rstr f_mcopy_193(P413 t_192);
static int f_composite_195(P413 t_194);
static rstr f_assign_code_200(rstr *lval_196, P413 t_197, rstr *v_198, P411 c_199);
static rstr f_copy_code_203(P413 t_201, rstr *v_202);
static rstr f_eq_code_207(P413 t_204, rstr *a_205, rstr *b_206);
static rstr f_elem_assign_211(rstr *lval_208, P413 t_209, rstr *v_210);
static int f_seen_name_214(P421 l_212, rstr *s_213);
static void f_emit_helpers_215(void);
static void f_helper_bodies_217(P413 t_216);
static void f_declare_body_219(P409 elems_218);
static void f_manifest_const_221(P409 d_220);
static int f_exported_225(P409 d_222, rstr *name_223, int *ro_224);
static P419 f_copy_sym_227(P419 y_226);
static void f_gen_capsule_229(P409 d_228);
static void f_gen_expose_231(P409 d_230);
static void f_finish_ptr_233(P413 t_232);
static void f_declare_subprogram_235(P409 d_234);
static P419 f_build_subprogram_237(P409 d_236);
static void f_element_239(P409 e_238);
static rstr f_storage_242(rstr *name_240, P413 t_241);
static void f_bind_245(P419 y_243, rstr *access_244);
static void f_var_decl_247(P409 d_246);
static void f_const_decl_249(P409 d_248);
static void f_subprogram_251(P409 d_250);
static void f_gen_subprogram_254(P409 d_252, P419 y_253);
static void f_body_elements_256(P409 elems_255);
static void f_gen_body_258(P409 elems_257);
static void f_pop_frames_260(rt_int upto_259);
static void f_push_cleanup_262(rstr *s_261);
static void f_pop_cleanup_263(void);
static void f_gen_statement_265(P409 s_264);
static void f_st_assign_267(P409 s_266);
static void f_st_call_269(P409 s_268);
static void f_st_if_271(P409 s_270);
static void f_st_case_273(P409 s_272);
static void f_st_repeat_275(P409 s_274);
static void f_st_exit_277(P409 s_276);
static void f_st_return_279(P409 s_278);
static rstr f_exc_id_282(rstr *name_280, rt_int line_281);
static void f_st_guard_284(P409 s_283);
static void f_st_alloc_286(P409 s_285);
static rstr f_act_ref_288(P409 e_287);
static void f_st_create_290(P409 s_289);
static rstr f_wait_alt_294(P409 inv_291, rstr *arr_292, rt_int i_293);
static void f_st_wait_296(P409 s_295);
static void f_st_region_298(P409 s_297);
static P409 f_gparam_301(P409 g_299, rstr *name_300);
static P419 f_bind_sym_303(P409 p_302);
static int f_same_binds_306(P419 a_304, P419 b_305);
static int f_same_binding_309(P419 a_307, P419 b_308);
static P419 f_instantiate_314(P419 g_310, P409 tt_311, P409 args_312, rt_int line_313);
static rstr f_access_of_316(P419 y_315);
static P409 f_import_of_319(P409 l_317, rstr *name_318);
static int f_check_import_322(P419 y_320, rt_int line_321);
static rstr f_c_ident_324(rstr *s_323);
static rstr f_deref_327(rstr *base_325, P413 t_326);
static int f_is_lvalue_329(P409 e_328);
static void f_lvalue_335(P409 e_330, P404 *code_331, P413 *t_332, P411 *c_333, int *ro_334);
static void f_select_on_343(rstr *base_336, P413 bt_337, P409 e_338, int *ro_339, P404 *code_340, P413 *t_341, P411 *c_342);
static void f_index_on_352(rstr *base_344, P413 bt_345, P409 e_346, int *ro_347, int lv_348, P404 *code_349, P413 *t_350, P411 *c_351);
static rstr f_gexpr_356(P409 e_353, P413 want_354, P413 *t_355);
static P409 f_copy_node_358(P409 e_357);
static P409 f_wrap_apply_360(P409 e_359);
static rstr f_c_string_362(rstr *s_361);
static P413 f_enum_type_of_365(rstr *lit_363, rt_int line_364);
static rstr f_attribute_368(P409 e_366, P413 *t_367);
static rstr f_gbinop_372(P409 e_369, P413 want_370, P413 *t_371);
static rstr f_constructor_376(P409 e_373, P413 want_374, P413 *t_375);
static int f_fits_379(P419 y_377, P409 args_378);
static P419 f_resolve_overload_384(rstr *name_380, P409 args_381, int is_stmt_382, rt_int line_383);
static int f_is_builtin_386(rstr *n_385);
static P419 f_user_op_389(rstr *op_387, P409 args_388);
static rstr f_gcall_393(P409 e_390, int is_stmt_391, P413 *t_392);
static rstr f_builtin_400(rstr *name_394, P409 tt_395, P409 args_396, rt_int line_397, int is_stmt_398, P413 *t_399);
static void f_translate_402(P409 units_401);
static void f_print_program_403(void);
static int ex_compile_error_1;
static P407 g_toks_431;
static rt_int g_ntoks_432;
static rt_int g_tpos_433;
static rt_int g_src_line_434;
static P425 g_table_435;
static rt_int g_depth_436;
static P419 g_scope_stack_437;
static P413 g_all_types_438;
static rt_int g_serial_439;
static P423 g_out_types_440;
static P423 g_out_helpers_441;
static P423 g_out_protos_442;
static P423 g_out_globals_443;
static P423 g_out_funcs_444;
static P423 g_out_init_445;
static P423 g_out_excs_446;
static P423 g_code_447;
static P423 g_fields_buf_448;
static int g_in_func_449;
static rt_int g_cur_level_450;
static P429 g_fctx_451;
static P404 g_st_field_452;
static P423 g_out_frames_453;
static P419 g_func_sym_454;
static P427 g_exits_455;
static rt_int g_frames_456;
static P421 g_handlers_457;
static P421 g_cleanups_458;
static rt_int g_trial_459;
static P421 g_mcopies_460;
static P413 g_ty_int_461;
static P413 g_ty_bool_462;
static P413 g_ty_float_463;
static P413 g_ty_ascii_464;
static P413 g_ty_string_465;
static P413 g_ty_void_466;
static P413 g_ty_file_467;
static P413 g_ty_nil_468;
static P413 g_ty_lock_469;
static P413 g_ty_act_470;
static P411 g_no_cons_471;
static P404 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_472 = NULL;
{ rstr *cell473 = rt_alloc(sizeof(rstr));
rt_int pv474 = ((*F->s_2)).len;
(*cell473) = rt_str_new(pv474);
rt_str_assign(&(*cell473), (*F->s_2));
F->t_472 = cell473;
}
F->result_ = F->t_472;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_475 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_475, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_475;
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
F->letters_476 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_476, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_477 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_478 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_478, (*F->s_14));
{ rt_int lo480 = ((rt_int)1LL), hi481 = ((*F->s_14)).len;
for (rt_int it482 = lo480; it482 <= hi481; it482++) {
F->i_479 = it482;
if (((65 <= rt_str_get(F->r_478, F->i_479)) && (rt_str_get(F->r_478, F->i_479) <= 90))) {
(*rt_str_at(&F->r_478, F->i_479)) = rt_str_get(F->letters_477, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_478, F->i_479)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_478;
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
g_serial_439 = rt_add(g_serial_439, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_17), f_itos_7(g_serial_439));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_21(rt_int line_19, rstr *msg_20) {
  struct f_fail_21fr *F = rt_alloc(sizeof *F);
F->line_19 = line_19;
F->msg_20 = msg_20;
if ((g_trial_459 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_19)), rt_str(": ", 2)), (*F->msg_20)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P423 f_new_buffer_22(void) {
  struct f_new_buffer_22fr *F = rt_alloc(sizeof *F);
F->b_483 = NULL;
{ R424 *cell484 = rt_alloc(sizeof(R424));
(*cell484).head = NULL;
(*cell484).tail = NULL;
F->b_483 = cell484;
}
F->result_ = F->b_483;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_25(P423 b_23, rstr *s_24) {
  struct f_put_25fr *F = rt_alloc(sizeof *F);
F->b_23 = b_23;
F->s_24 = s_24;
F->l_485 = NULL;
{ R422 *cell486 = rt_alloc(sizeof(R422));
(*cell486).s = NULL;
(*cell486).next = NULL;
F->l_485 = cell486;
}
(*(P421)rt_nil_check(F->l_485)).s = f_mk_3(&(*F->s_24));
if (((*(P423)rt_nil_check(F->b_23)).tail == NULL)) {
(*(P423)rt_nil_check(F->b_23)).head = F->l_485;
} else {
(*(P421)rt_nil_check((*(P423)rt_nil_check(F->b_23)).tail)).next = F->l_485;
}
(*(P423)rt_nil_check(F->b_23)).tail = F->l_485;
ret_:
  return;
}

static void f_emit_27(rstr *s_26) {
  struct f_emit_27fr *F = rt_alloc(sizeof *F);
F->s_26 = s_26;
f_put_25(g_code_447, &(*F->s_26));
ret_:
  return;
}

static void f_print_buffer_29(P423 b_28) {
  struct f_print_buffer_29fr *F = rt_alloc(sizeof *F);
F->b_28 = b_28;
F->l_487 = NULL;
F->l_487 = (*(P423)rt_nil_check(F->b_28)).head;
while ((F->l_487 != NULL)) {
rt_putln((*(P404)rt_nil_check((*(P421)rt_nil_check(F->l_487)).s)));
F->l_487 = (*(P421)rt_nil_check(F->l_487)).next;
}
ret_:
  return;
}

static void f_splice_32(P423 a_30, P423 b_31) {
  struct f_splice_32fr *F = rt_alloc(sizeof *F);
F->a_30 = a_30;
F->b_31 = b_31;
if (((*(P423)rt_nil_check(F->b_31)).head == NULL)) {
goto ret_;
}
if (((*(P423)rt_nil_check(F->a_30)).tail == NULL)) {
(*(P423)rt_nil_check(F->a_30)).head = (*(P423)rt_nil_check(F->b_31)).head;
} else {
(*(P421)rt_nil_check((*(P423)rt_nil_check(F->a_30)).tail)).next = (*(P423)rt_nil_check(F->b_31)).head;
}
(*(P423)rt_nil_check(F->a_30)).tail = (*(P423)rt_nil_check(F->b_31)).tail;
(*(P423)rt_nil_check(F->b_31)).head = NULL;
(*(P423)rt_nil_check(F->b_31)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_34(rstr *w_33) {
  struct f_is_reserved_34fr *F = rt_alloc(sizeof *F);
F->w_33 = w_33;
{ rstr sel488 = (*F->w_33);
if (0 || rt_str_eq(sel488, rt_str("ABBREV", 6)) || rt_str_eq(sel488, rt_str("ABNORMAL", 8)) || rt_str_eq(sel488, rt_str("ALL", 3)) || rt_str_eq(sel488, rt_str("ALLOC", 5)) || rt_str_eq(sel488, rt_str("ASSERT", 6)) || rt_str_eq(sel488, rt_str("BEGIN", 5)) || rt_str_eq(sel488, rt_str("BY", 2)) || rt_str_eq(sel488, rt_str("CAPSULE", 7)) || rt_str_eq(sel488, rt_str("CASE", 4)) || rt_str_eq(sel488, rt_str("CONST", 5)) || rt_str_eq(sel488, rt_str("CREATE", 6)) || rt_str_eq(sel488, rt_str("DO", 2)) || rt_str_eq(sel488, rt_str("ELSE", 4)) || rt_str_eq(sel488, rt_str("ELSEIF", 6)) || rt_str_eq(sel488, rt_str("END", 3)) || rt_str_eq(sel488, rt_str("EXCEPTION", 9)) || rt_str_eq(sel488, rt_str("EXIT", 4)) || rt_str_eq(sel488, rt_str("EXPORTS", 7)) || rt_str_eq(sel488, rt_str("EXPOSE", 6)) || rt_str_eq(sel488, rt_str("EXTERNAL", 8)) || rt_str_eq(sel488, rt_str("FOR", 3)) || rt_str_eq(sel488, rt_str("FROM", 4)) || rt_str_eq(sel488, rt_str("FUNC", 4)) || rt_str_eq(sel488, rt_str("GENERIC", 7)) || rt_str_eq(sel488, rt_str("GOTO", 4)) || rt_str_eq(sel488, rt_str("GUARD", 5)) || rt_str_eq(sel488, rt_str("IF", 2)) || rt_str_eq(sel488, rt_str("IMPORTS", 7)) || rt_str_eq(sel488, rt_str("LOCATION", 8)) || rt_str_eq(sel488, rt_str("NAMED", 5)) || rt_str_eq(sel488, rt_str("NEEDS", 5)) || rt_str_eq(sel488, rt_str("NEW", 3)) || rt_str_eq(sel488, rt_str("NONE", 4)) || rt_str_eq(sel488, rt_str("OUT", 3)) || rt_str_eq(sel488, rt_str("OF", 2)) || rt_str_eq(sel488, rt_str("PRAG", 4)) || rt_str_eq(sel488, rt_str("PROC", 4)) || rt_str_eq(sel488, rt_str("RAISE", 5)) || rt_str_eq(sel488, rt_str("READONLY", 8)) || rt_str_eq(sel488, rt_str("REVERSE", 7)) || rt_str_eq(sel488, rt_str("REGION", 6)) || rt_str_eq(sel488, rt_str("RENAMING", 8)) || rt_str_eq(sel488, rt_str("REP", 3)) || rt_str_eq(sel488, rt_str("REPEAT", 6)) || rt_str_eq(sel488, rt_str("RERAISE", 7)) || rt_str_eq(sel488, rt_str("RETURN", 6)) || rt_str_eq(sel488, rt_str("SUBTYPE", 7)) || rt_str_eq(sel488, rt_str("TASK", 4)) || rt_str_eq(sel488, rt_str("THEN", 4)) || rt_str_eq(sel488, rt_str("TO", 2)) || rt_str_eq(sel488, rt_str("TYPE", 4)) || rt_str_eq(sel488, rt_str("VAR", 3)) || rt_str_eq(sel488, rt_str("WAIT", 4)) || rt_str_eq(sel488, rt_str("WHEN", 4)) || rt_str_eq(sel488, rt_str("WHILE", 5))) {
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
F->t_489 = NULL;
{ R406 *cell490 = rt_alloc(sizeof(R406));
(*cell490).s = NULL;
F->t_489 = cell490;
}
(*(P405)rt_nil_check(F->t_489)).kind = F->kind_37;
(*(P405)rt_nil_check(F->t_489)).line = g_src_line_434;
(*(P405)rt_nil_check(F->t_489)).ival = F->ival_39;
(*(P405)rt_nil_check(F->t_489)).s = f_mk_3(&(*F->s_38));
g_ntoks_432 = rt_add(g_ntoks_432, ((rt_int)1LL));
(*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_ntoks_432, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo] = F->t_489;
ret_:
  return;
}

static void f_lex_line_42(rstr *line_41) {
  struct f_lex_line_42fr *F = rt_alloc(sizeof *F);
F->line_41 = line_41;
F->i_491 = ((rt_int)1LL);
F->j_492 = ((rt_int)0LL);
F->n_493 = ((*F->line_41)).len;
while ((F->i_491 <= F->n_493)) {
F->c_494 = rt_str_get((*F->line_41), F->i_491);
if (((((F->c_494 == 32) || (F->c_494 == 9)) || (F->c_494 == 13)) || (F->c_494 == 12))) {
F->i_491 = rt_add(F->i_491, ((rt_int)1LL));
} else if ((F->c_494 == 37)) {
F->i_491 = rt_add(F->n_493, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_494)) {
F->j_492 = F->i_491;
while (((F->j_492 <= F->n_493) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_492)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_492))) || (rt_str_get((*F->line_41), F->j_492) == 95)))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
{
F->w_495 = rt_str_new(rt_sub(F->j_492, F->i_491));
rt_str_assign(&F->w_495, rt_str_slice((*F->line_41), F->i_491, rt_sub(F->j_492, ((rt_int)1LL))));
{ rt_int lo497 = ((rt_int)1LL), hi498 = (F->w_495).len;
for (rt_int it499 = lo497; it499 <= hi498; it499++) {
F->k_496 = it499;
(*rt_str_at(&F->w_495, F->k_496)) = f_upper_13(rt_str_get(F->w_495, F->k_496));
}
}
if (rt_str_eq(F->w_495, rt_str("PRAGMAT", 7))) {
while (((F->j_492 <= F->n_493) && (rt_str_get((*F->line_41), F->j_492) != 59))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
} else if (f_is_reserved_34(&F->w_495)) {
f_add_token_40(((rt_int)2LL), &F->w_495, ((rt_int)0LL));
} else if (f_is_word_op_36(&F->w_495)) {
f_add_token_40(((rt_int)3LL), &F->w_495, ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)1LL), &F->w_495, ((rt_int)0LL));
}
}
F->i_491 = F->j_492;
} else if (f_is_digit_11(F->c_494)) {
F->j_492 = F->i_491;
while (((F->j_492 <= F->n_493) && f_is_digit_11(rt_str_get((*F->line_41), F->j_492)))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
if ((((F->j_492 < F->n_493) && (rt_str_get((*F->line_41), F->j_492) == 46)) && f_is_digit_11(rt_str_get((*F->line_41), rt_add(F->j_492, ((rt_int)1LL)))))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
while (((F->j_492 <= F->n_493) && f_is_digit_11(rt_str_get((*F->line_41), F->j_492)))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
if (((F->j_492 <= F->n_493) && ((rt_str_get((*F->line_41), F->j_492) == 69) || (rt_str_get((*F->line_41), F->j_492) == 101)))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
if (((F->j_492 <= F->n_493) && ((rt_str_get((*F->line_41), F->j_492) == 43) || (rt_str_get((*F->line_41), F->j_492) == 45)))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
while (((F->j_492 <= F->n_493) && f_is_digit_11(rt_str_get((*F->line_41), F->j_492)))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
}
f_add_token_40(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_491, rt_sub(F->j_492, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_40(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), F->i_491, rt_sub(F->j_492, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_41), F->i_491, rt_sub(F->j_492, ((rt_int)1LL)))));
}
F->i_491 = F->j_492;
} else if ((F->c_494 == 39)) {
F->j_492 = rt_add(F->i_491, ((rt_int)1LL));
if (((F->j_492 > F->n_493) || (!f_is_letter_9(rt_str_get((*F->line_41), F->j_492))))) {
f_fail_21(g_src_line_434, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_492 <= F->n_493) && ((f_is_letter_9(rt_str_get((*F->line_41), F->j_492)) || f_is_digit_11(rt_str_get((*F->line_41), F->j_492))) || (rt_str_get((*F->line_41), F->j_492) == 95)))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
{
F->w_500 = rt_str_new(rt_sub(rt_sub(F->j_492, F->i_491), ((rt_int)1LL)));
rt_str_assign(&F->w_500, rt_str_slice((*F->line_41), rt_add(F->i_491, ((rt_int)1LL)), rt_sub(F->j_492, ((rt_int)1LL))));
{ rt_int lo502 = ((rt_int)1LL), hi503 = (F->w_500).len;
for (rt_int it504 = lo502; it504 <= hi503; it504++) {
F->k_501 = it504;
(*rt_str_at(&F->w_500, F->k_501)) = f_upper_13(rt_str_get(F->w_500, F->k_501));
}
}
f_add_token_40(((rt_int)6LL), &F->w_500, ((rt_int)0LL));
}
F->i_491 = F->j_492;
} else if ((F->c_494 == 34)) {
F->j_492 = rt_add(F->i_491, ((rt_int)1LL));
while (((F->j_492 <= F->n_493) && (rt_str_get((*F->line_41), F->j_492) != 34))) {
F->j_492 = rt_add(F->j_492, ((rt_int)1LL));
}
if ((F->j_492 > F->n_493)) {
f_fail_21(g_src_line_434, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_40(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_41), rt_add(F->i_491, ((rt_int)1LL)), rt_sub(F->j_492, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_491 = rt_add(F->j_492, ((rt_int)1LL));
} else {
{
F->two_505 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_505, rt_str("  ", 2));
(*rt_str_at(&F->two_505, ((rt_int)1LL))) = F->c_494;
if ((F->i_491 < F->n_493)) {
(*rt_str_at(&F->two_505, ((rt_int)2LL))) = rt_str_get((*F->line_41), rt_add(F->i_491, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_505, rt_str(":=", 2)) || rt_str_eq(F->two_505, rt_str("=>", 2))) || rt_str_eq(F->two_505, rt_str("..", 2))) || rt_str_eq(F->two_505, rt_str("**", 2))) || rt_str_eq(F->two_505, rt_str("/=", 2))) || rt_str_eq(F->two_505, rt_str("<=", 2))) || rt_str_eq(F->two_505, rt_str(">=", 2)))) {
f_add_token_40(((rt_int)3LL), &F->two_505, ((rt_int)0LL));
F->i_491 = rt_add(F->i_491, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_494 == 40) || (F->c_494 == 41)) || (F->c_494 == 91)) || (F->c_494 == 93)) || (F->c_494 == 44)) || (F->c_494 == 58)) || (F->c_494 == 59)) || (F->c_494 == 46)) || (F->c_494 == 35)) || (F->c_494 == 43)) || (F->c_494 == 45)) || (F->c_494 == 42)) || (F->c_494 == 47)) || (F->c_494 == 38)) || (F->c_494 == 61)) || (F->c_494 == 60)) || (F->c_494 == 62))) {
f_add_token_40(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_494); b_; }), ((rt_int)0LL));
F->i_491 = rt_add(F->i_491, ((rt_int)1LL));
} else {
f_fail_21(g_src_line_434, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_506 = rt_str_new(rt_sizeln());
rt_readln(&F->line_506);
g_src_line_434 = rt_add(g_src_line_434, ((rt_int)1LL));
f_lex_line_42(&F->line_506);
}
f_add_token_40(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P409 f_nn_46(rt_int kind_44, rt_int line_45) {
  struct f_nn_46fr *F = rt_alloc(sizeof *F);
F->kind_44 = kind_44;
F->line_45 = line_45;
F->x_507 = NULL;
{ R410 *cell508 = rt_alloc(sizeof(R410));
(*cell508).name = NULL;
(*cell508).tag = NULL;
(*cell508).a = NULL;
(*cell508).b = NULL;
(*cell508).c = NULL;
(*cell508).d = NULL;
(*cell508).e = NULL;
(*cell508).next = NULL;
F->x_507 = cell508;
}
(*(P409)rt_nil_check(F->x_507)).kind = F->kind_44;
(*(P409)rt_nil_check(F->x_507)).line = F->line_45;
F->result_ = F->x_507;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_50(P409 *head_47, P409 *tail_48, P409 x_49) {
  struct f_append_50fr *F = rt_alloc(sizeof *F);
F->head_47 = head_47;
F->tail_48 = tail_48;
F->x_49 = x_49;
if (((*F->head_47) == NULL)) {
(*F->head_47) = F->x_49;
} else {
(*(P409)rt_nil_check((*F->tail_48))).next = F->x_49;
}
(*F->tail_48) = F->x_49;
while (((*(P409)rt_nil_check((*F->tail_48))).next != NULL)) {
(*F->tail_48) = (*(P409)rt_nil_check((*F->tail_48))).next;
}
ret_:
  return;
}

static rt_int f_list_len_52(P409 l_51) {
  struct f_list_len_52fr *F = rt_alloc(sizeof *F);
F->l_51 = l_51;
F->n_509 = ((rt_int)0LL);
F->p_510 = NULL;
F->p_510 = F->l_51;
while ((F->p_510 != NULL)) {
F->n_509 = rt_add(F->n_509, ((rt_int)1LL));
F->p_510 = (*(P409)rt_nil_check(F->p_510)).next;
}
F->result_ = F->n_509;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_53(void) {
  struct f_cur_line_53fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_55(rstr *w_54) {
  struct f_at_kw_55fr *F = rt_alloc(sizeof *F);
F->w_54 = w_54;
F->result_ = (((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)), (*F->w_54)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_57(rstr *w_56) {
  struct f_at_op_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_59(rt_int k_58) {
  struct f_at_kind_59fr *F = rt_alloc(sizeof *F);
F->k_58 = k_58;
F->result_ = ((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).kind == F->k_58);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_61(rt_int k_60) {
  struct f_kind_at_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
if ((rt_add(g_tpos_433, F->k_60) > g_ntoks_432)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(rt_add(g_tpos_433, F->k_60), (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P404 f_text_at_63(rt_int k_62) {
  struct f_text_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_433, F->k_62) > g_ntoks_432)) {
F->result_ = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_ntoks_432, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
goto ret_;
}
F->result_ = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(rt_add(g_tpos_433, F->k_62), (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_65(rstr *msg_64) {
  struct f_perror_65fr *F = rt_alloc(sizeof *F);
F->msg_64 = msg_64;
f_fail_21((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_64), rt_str(" (at ", 5)), (*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_67(rstr *w_66) {
  struct f_accept_kw_67fr *F = rt_alloc(sizeof *F);
F->w_66 = w_66;
if (f_at_kw_55(&(*F->w_66))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
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
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
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
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_73(rstr *w_72) {
  struct f_expect_op_73fr *F = rt_alloc(sizeof *F);
F->w_72 = w_72;
if ((!f_at_op_57(&(*F->w_72)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
ret_:
  return;
}

static P404 f_expect_id_74(void) {
  struct f_expect_id_74fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->result_ = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(rt_sub(g_tpos_433, ((rt_int)1LL)), (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_name_node_75(void) {
  struct f_name_node_75fr *F = rt_alloc(sizeof *F);
F->x_511 = NULL;
F->x_511 = f_nn_46(((rt_int)7LL), f_cur_line_53());
(*(P409)rt_nil_check(F->x_511)).name = f_expect_id_74();
F->result_ = F->x_511;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_id_list_76(void) {
  struct f_id_list_76fr *F = rt_alloc(sizeof *F);
F->head_512 = NULL;
F->tail_513 = NULL;
f_append_50(&F->head_512, &F->tail_513, f_name_node_75());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_512, &F->tail_513, f_name_node_75());
}
F->result_ = F->head_512;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_p_subtype_77(void) {
  struct f_p_subtype_77fr *F = rt_alloc(sizeof *F);
F->line_514 = f_cur_line_53();
F->x_515 = NULL;
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->x_515 = f_nn_46(((rt_int)81LL), F->line_514);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P409)rt_nil_check(F->x_515)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_515;
goto ret_;
}
if ((!f_at_kind_59(((rt_int)1LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_516 = rt_str_copy((*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)));
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
if (rt_str_eq(F->w_516, rt_str("ARRAY", 5))) {
F->x_515 = f_nn_46(((rt_int)74LL), F->line_514);
{
F->head_517 = NULL;
F->tail_518 = NULL;
f_append_50(&F->head_517, &F->tail_518, f_p_subtype_77());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_517, &F->tail_518, f_p_subtype_77());
}
(*(P409)rt_nil_check(F->x_515)).a = F->head_517;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P409)rt_nil_check(F->x_515)).b = f_p_subtype_77();
} else if ((rt_str_eq(F->w_516, rt_str("RECORD", 6)) || rt_str_eq(F->w_516, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_516, rt_str("RECORD", 6))) {
F->x_515 = f_nn_46(((rt_int)75LL), F->line_514);
} else {
F->x_515 = f_nn_46(((rt_int)76LL), F->line_514);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_519 = NULL;
F->tail_520 = NULL;
F->more_521 = 1;
while (F->more_521) {
F->names_522 = NULL;
F->names_522 = f_id_list_76();
F->st_523 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_523 = f_p_subtype_77();
while ((F->names_522 != NULL)) {
F->cmp_524 = NULL;
F->cmp_524 = f_nn_46(((rt_int)63LL), (*(P409)rt_nil_check(F->names_522)).line);
(*(P409)rt_nil_check(F->cmp_524)).name = (*(P409)rt_nil_check(F->names_522)).name;
(*(P409)rt_nil_check(F->cmp_524)).a = F->st_523;
f_append_50(&F->head_519, &F->tail_520, F->cmp_524);
F->names_522 = (*(P409)rt_nil_check(F->names_522)).next;
}
F->more_521 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P409)rt_nil_check(F->x_515)).a = F->head_519;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_516, rt_str("UNION", 5)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_515)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_516, rt_str("ENUM", 4))) {
F->x_515 = f_nn_46(((rt_int)72LL), F->line_514);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_525 = NULL;
F->tail_526 = NULL;
F->more_527 = 1;
while (F->more_527) {
F->lit_528 = NULL;
F->lit_528 = f_nn_46(((rt_int)4LL), F->line_514);
if ((!f_at_kind_59(((rt_int)6LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P409)rt_nil_check(F->lit_528)).name = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
f_append_50(&F->head_525, &F->tail_526, F->lit_528);
F->more_527 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P409)rt_nil_check(F->x_515)).a = F->head_525;
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_515)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P409)rt_nil_check(F->x_515)).c = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_516, rt_str("STRING", 6)) || rt_str_eq(F->w_516, rt_str("SET", 3))) || rt_str_eq(F->w_516, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_516, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_516, rt_str("STRING", 6))) {
F->x_515 = f_nn_46(((rt_int)73LL), F->line_514);
} else if (rt_str_eq(F->w_516, rt_str("SET", 3))) {
F->x_515 = f_nn_46(((rt_int)77LL), F->line_514);
} else if (rt_str_eq(F->w_516, rt_str("MAILBOX", 7))) {
F->x_515 = f_nn_46(((rt_int)78LL), F->line_514);
} else {
F->x_515 = f_nn_46(((rt_int)79LL), F->line_514);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P409)rt_nil_check(F->x_515)).a = f_p_subtype_77();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_515)).b = f_actual_params_78();
}
} else if (rt_str_eq(F->w_516, rt_str("INT", 3))) {
F->x_515 = f_nn_46(((rt_int)70LL), F->line_514);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_515)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P409)rt_nil_check(F->x_515)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_516, rt_str("FLOAT", 5))) {
F->x_515 = f_nn_46(((rt_int)71LL), F->line_514);
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_515)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_515)).b = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P409)rt_nil_check(F->x_515)).c = f_expr_87();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_515 = f_nn_46(((rt_int)80LL), F->line_514);
(*(P409)rt_nil_check(F->x_515)).name = f_mk_3(&F->w_516);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_515)).a = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_515)).b = f_actual_params_78();
(*(P409)rt_nil_check(F->x_515)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_515;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_actual_params_78(void) {
  struct f_actual_params_78fr *F = rt_alloc(sizeof *F);
F->head_529 = NULL;
F->tail_530 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_50(&F->head_529, &F->tail_530, f_expr_87());
while (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_50(&F->head_529, &F->tail_530, f_expr_87());
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_529;
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

static P409 f_actual_tt_81(void) {
  struct f_actual_tt_81fr *F = rt_alloc(sizeof *F);
F->head_531 = NULL;
F->tail_532 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_533 = 1;
while (F->more_533) {
if ((f_at_kind_59(((rt_int)1LL)) && f_is_type_word_80(&(*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s))))) {
f_append_50(&F->head_531, &F->tail_532, f_p_subtype_77());
} else {
f_append_50(&F->head_531, &F->tail_532, f_expr_87());
}
F->more_533 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_531;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_binop_86(P404 op_82, P409 l_83, P409 r_84, rt_int line_85) {
  struct f_binop_86fr *F = rt_alloc(sizeof *F);
F->op_82 = op_82;
F->l_83 = l_83;
F->r_84 = r_84;
F->line_85 = line_85;
F->x_534 = NULL;
F->x_534 = f_nn_46(((rt_int)9LL), F->line_85);
(*(P409)rt_nil_check(F->x_534)).name = F->op_82;
(*(P409)rt_nil_check(F->x_534)).a = F->l_83;
(*(P409)rt_nil_check(F->x_534)).b = F->r_84;
F->result_ = F->x_534;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expr_87(void) {
  struct f_expr_87fr *F = rt_alloc(sizeof *F);
F->l_535 = NULL;
F->l_535 = f_expr_and_88();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_536 = NULL;
F->op_536 = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
F->line_537 = f_cur_line_53();
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->l_535 = f_binop_86(F->op_536, F->l_535, f_expr_and_88(), F->line_537);
}
F->result_ = F->l_535;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expr_and_88(void) {
  struct f_expr_and_88fr *F = rt_alloc(sizeof *F);
F->l_538 = NULL;
F->l_538 = f_expr_not_89();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_539 = f_cur_line_53();
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->l_538 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_538, f_expr_not_89(), F->line_539);
}
F->result_ = F->l_538;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expr_not_89(void) {
  struct f_expr_not_89fr *F = rt_alloc(sizeof *F);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_540 = NULL;
F->x_540 = f_nn_46(((rt_int)8LL), f_cur_line_53());
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_540)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P409)rt_nil_check(F->x_540)).a = f_expr_not_89();
F->result_ = F->x_540;
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

static P409 f_expr_rel_92(void) {
  struct f_expr_rel_92fr *F = rt_alloc(sizeof *F);
F->l_541 = NULL;
F->l_541 = f_expr_add_93();
if ((f_at_kind_59(((rt_int)3LL)) && f_is_rel_91(&(*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s))))) {
F->op_542 = NULL;
F->op_542 = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
F->line_543 = f_cur_line_53();
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->l_541 = f_binop_86(F->op_542, F->l_541, f_expr_add_93(), F->line_543);
}
F->result_ = F->l_541;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expr_add_93(void) {
  struct f_expr_add_93fr *F = rt_alloc(sizeof *F);
F->l_544 = NULL;
F->l_544 = f_expr_mul_94();
while ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_545 = NULL;
F->op_545 = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
F->line_546 = f_cur_line_53();
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->l_544 = f_binop_86(F->op_545, F->l_544, f_expr_mul_94(), F->line_546);
}
F->result_ = F->l_544;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expr_mul_94(void) {
  struct f_expr_mul_94fr *F = rt_alloc(sizeof *F);
F->l_547 = NULL;
F->l_547 = f_expr_pow_95();
while (((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_548 = NULL;
F->op_548 = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
F->line_549 = f_cur_line_53();
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->l_547 = f_binop_86(F->op_548, F->l_547, f_expr_pow_95(), F->line_549);
}
F->result_ = F->l_547;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expr_pow_95(void) {
  struct f_expr_pow_95fr *F = rt_alloc(sizeof *F);
F->l_550 = NULL;
F->l_550 = f_expr_prefix_96();
while (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_551 = f_cur_line_53();
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->l_550 = f_binop_86(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_550, f_expr_prefix_96(), F->line_551);
}
F->result_ = F->l_550;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expr_prefix_96(void) {
  struct f_expr_prefix_96fr *F = rt_alloc(sizeof *F);
if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_552 = NULL;
F->x_552 = f_nn_46(((rt_int)8LL), f_cur_line_53());
(*(P409)rt_nil_check(F->x_552)).name = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_552)).a = f_expr_prefix_96();
F->result_ = F->x_552;
goto ret_;
}
F->result_ = f_postfix_97();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_postfix_97(void) {
  struct f_postfix_97fr *F = rt_alloc(sizeof *F);
F->p_553 = NULL;
F->p_553 = f_primary_98();
while (1) {
F->line_554 = f_cur_line_53();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_555 = NULL;
F->x_555 = f_nn_46(((rt_int)10LL), F->line_554);
F->head_556 = NULL;
F->tail_557 = NULL;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_558 = 1;
while (F->more_558) {
F->lo_559 = NULL;
F->lo_559 = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_560 = NULL;
F->r_560 = f_nn_46(((rt_int)16LL), F->line_554);
(*(P409)rt_nil_check(F->r_560)).a = F->lo_559;
(*(P409)rt_nil_check(F->r_560)).b = f_expr_87();
f_append_50(&F->head_556, &F->tail_557, F->r_560);
} else {
f_append_50(&F->head_556, &F->tail_557, F->lo_559);
}
F->more_558 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P409)rt_nil_check(F->x_555)).a = F->p_553;
(*(P409)rt_nil_check(F->x_555)).b = F->head_556;
F->p_553 = F->x_555;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_561 = NULL;
F->x_561 = f_nn_46(((rt_int)11LL), F->line_554);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_561)).a = F->p_553;
(*(P409)rt_nil_check(F->x_561)).name = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->p_553 = F->x_561;
} else if ((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P409)rt_nil_check(F->p_553)).kind == ((rt_int)7LL)))) {
F->x_562 = NULL;
F->x_562 = f_nn_46(((rt_int)12LL), F->line_554);
(*(P409)rt_nil_check(F->x_562)).a = F->p_553;
(*(P409)rt_nil_check(F->x_562)).b = f_actual_tt_81();
F->p_553 = F->x_562;
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_563 = NULL;
F->x_563 = f_nn_46(((rt_int)13LL), F->line_554);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_563)).a = F->p_553;
(*(P409)rt_nil_check(F->x_563)).b = f_p_subtype_77();
F->p_553 = F->x_563;
} else {
F->result_ = F->p_553;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_primary_98(void) {
  struct f_primary_98fr *F = rt_alloc(sizeof *F);
F->line_564 = f_cur_line_53();
F->x_565 = NULL;
F->k_566 = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).kind;
if ((F->k_566 == ((rt_int)4LL))) {
F->x_565 = f_nn_46(((rt_int)1LL), F->line_564);
(*(P409)rt_nil_check(F->x_565)).ival = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).ival;
(*(P409)rt_nil_check(F->x_565)).name = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->result_ = F->x_565;
goto ret_;
}
if ((((F->k_566 == ((rt_int)5LL)) || (F->k_566 == ((rt_int)7LL))) || (F->k_566 == ((rt_int)6LL)))) {
if ((F->k_566 == ((rt_int)5LL))) {
F->x_565 = f_nn_46(((rt_int)2LL), F->line_564);
} else if ((F->k_566 == ((rt_int)7LL))) {
F->x_565 = f_nn_46(((rt_int)3LL), F->line_564);
} else {
F->x_565 = f_nn_46(((rt_int)4LL), F->line_564);
}
(*(P409)rt_nil_check(F->x_565)).name = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->result_ = F->x_565;
goto ret_;
}
if ((F->k_566 == ((rt_int)1LL))) {
F->w_567 = rt_str_copy((*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)));
if ((rt_str_eq(F->w_567, rt_str("TRUE", 4)) || rt_str_eq(F->w_567, rt_str("FALSE", 5)))) {
F->x_565 = f_nn_46(((rt_int)5LL), F->line_564);
if (rt_str_eq(F->w_567, rt_str("TRUE", 4))) {
(*(P409)rt_nil_check(F->x_565)).ival = ((rt_int)1LL);
}
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->result_ = F->x_565;
goto ret_;
}
if (rt_str_eq(F->w_567, rt_str("NIL", 3))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)6LL), F->line_564);
goto ret_;
}
F->result_ = f_name_node_75();
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_565 = f_nn_46(((rt_int)17LL), F->line_564);
(*(P409)rt_nil_check(F->x_565)).a = f_expr_87();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_565;
goto ret_;
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_568 = NULL;
F->tail_569 = NULL;
F->x_565 = f_nn_46(((rt_int)14LL), F->line_564);
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_570 = 1;
while (F->more_570) {
f_append_50(&F->head_568, &F->tail_569, f_constructor_item_99());
F->more_570 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P409)rt_nil_check(F->x_565)).a = F->head_568;
F->result_ = F->x_565;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_constructor_item_99(void) {
  struct f_constructor_item_99fr *F = rt_alloc(sizeof *F);
F->line_571 = f_cur_line_53();
F->it_572 = NULL;
F->it_572 = f_nn_46(((rt_int)15LL), F->line_571);
F->first_573 = NULL;
F->first_573 = f_expr_87();
F->keys_574 = NULL;
F->ktail_575 = NULL;
F->lab_576 = NULL;
F->lab_576 = f_nn_46(((rt_int)61LL), F->line_571);
(*(P409)rt_nil_check(F->lab_576)).a = F->first_573;
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P409)rt_nil_check(F->lab_576)).b = f_expr_87();
f_append_50(&F->keys_574, &F->ktail_575, F->lab_576);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_50(&F->keys_574, &F->ktail_575, F->lab_576);
} else if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_577 = g_tpos_433;
F->more_578 = NULL;
F->tail2_579 = NULL;
F->ok_580 = 0;
F->go_581 = 1;
while ((F->go_581 && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_582 = NULL;
F->l2_582 = f_nn_46(((rt_int)61LL), F->line_571);
(*(P409)rt_nil_check(F->l2_582)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P409)rt_nil_check(F->l2_582)).b = f_expr_87();
}
f_append_50(&F->more_578, &F->tail2_579, F->l2_582);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_580 = 1;
F->go_581 = 0;
} else if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_581 = 0;
}
}
if (F->ok_580) {
f_append_50(&F->keys_574, &F->ktail_575, F->lab_576);
f_append_50(&F->keys_574, &F->ktail_575, F->more_578);
} else {
g_tpos_433 = F->save_577;
}
}
if ((F->keys_574 != NULL)) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P409)rt_nil_check(F->it_572)).a = F->keys_574;
(*(P409)rt_nil_check(F->it_572)).b = f_expr_87();
} else {
(*(P409)rt_nil_check(F->it_572)).b = F->first_573;
}
F->result_ = F->it_572;
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

static P409 f_body_101(void) {
  struct f_body_101fr *F = rt_alloc(sizeof *F);
F->head_583 = NULL;
F->tail_584 = NULL;
while ((!f_at_body_end_100())) {
f_append_50(&F->head_583, &F->tail_584, f_body_element_102());
}
F->result_ = F->head_583;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_body_element_102(void) {
  struct f_body_element_102fr *F = rt_alloc(sizeof *F);
F->x_585 = NULL;
if ((((((((((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_585 = f_declaration_103();
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_585 = f_nn_46(((rt_int)33LL), f_cur_line_53());
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_585)).a = f_expr_87();
} else {
F->x_585 = f_statement_123();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_585;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_declaration_103(void) {
  struct f_declaration_103fr *F = rt_alloc(sizeof *F);
F->line_586 = f_cur_line_53();
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
F->head_587 = NULL;
F->tail_588 = NULL;
F->names_589 = NULL;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->names_589 = f_id_list_76();
while ((F->names_589 != NULL)) {
F->x_590 = NULL;
F->x_590 = f_nn_46(((rt_int)49LL), F->line_586);
(*(P409)rt_nil_check(F->x_590)).name = (*(P409)rt_nil_check(F->names_589)).name;
f_append_50(&F->head_587, &F->tail_588, F->x_590);
F->names_589 = (*(P409)rt_nil_check(F->names_589)).next;
}
F->result_ = F->head_587;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_object_decl_104(void) {
  struct f_object_decl_104fr *F = rt_alloc(sizeof *F);
F->line_591 = f_cur_line_53();
F->is_var_592 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_593 = NULL;
F->st_594 = NULL;
F->init_595 = NULL;
F->head_596 = NULL;
F->tail_597 = NULL;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->names_593 = f_id_list_76();
if (F->is_var_592) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_594 = f_p_subtype_77();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_595 = f_expr_87();
}
} else {
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_594 = f_p_subtype_77();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_595 = f_expr_87();
}
while ((F->names_593 != NULL)) {
F->x_598 = NULL;
if (F->is_var_592) {
F->x_598 = f_nn_46(((rt_int)40LL), F->line_591);
} else {
F->x_598 = f_nn_46(((rt_int)41LL), F->line_591);
}
(*(P409)rt_nil_check(F->x_598)).name = (*(P409)rt_nil_check(F->names_593)).name;
(*(P409)rt_nil_check(F->x_598)).a = F->st_594;
(*(P409)rt_nil_check(F->x_598)).b = F->init_595;
f_append_50(&F->head_596, &F->tail_597, F->x_598);
F->names_593 = (*(P409)rt_nil_check(F->names_593)).next;
}
F->result_ = F->head_596;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_abbrev_decl_105(void) {
  struct f_abbrev_decl_105fr *F = rt_alloc(sizeof *F);
F->x_599 = NULL;
F->x_599 = f_nn_46(((rt_int)42LL), f_cur_line_53());
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_599)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_599)).b = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P409)rt_nil_check(F->x_599)).a = f_p_subtype_77();
F->result_ = F->x_599;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_type_decl_106(void) {
  struct f_type_decl_106fr *F = rt_alloc(sizeof *F);
F->line_600 = f_cur_line_53();
F->name_601 = NULL;
F->params_602 = NULL;
F->x_603 = NULL;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->name_601 = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_602 = f_formal_params_109();
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->x_603 = f_nn_46(((rt_int)44LL), F->line_600);
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_603)).b = f_formal_params_109();
}
} else {
F->x_603 = f_nn_46(((rt_int)43LL), F->line_600);
(*(P409)rt_nil_check(F->x_603)).b = F->params_602;
}
(*(P409)rt_nil_check(F->x_603)).name = F->name_601;
(*(P409)rt_nil_check(F->x_603)).a = f_p_subtype_77();
F->result_ = F->x_603;
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

static P409 f_formal_params_109(void) {
  struct f_formal_params_109fr *F = rt_alloc(sizeof *F);
F->head_604 = NULL;
F->tail_605 = NULL;
F->more_606 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_606) {
F->mode_607 = ((rt_int)1LL);
F->names_608 = NULL;
F->ntail_609 = NULL;
F->st_610 = NULL;
if ((((f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_607 = f_mode_of_108(&(*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)));
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
}
f_append_50(&F->names_608, &F->ntail_609, f_name_node_75());
while ((((f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_61(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P404)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P404)rt_nil_check(f_text_at_63(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
f_append_50(&F->names_608, &F->ntail_609, f_name_node_75());
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_610 = f_p_subtype_77();
while ((F->names_608 != NULL)) {
F->p_611 = NULL;
F->p_611 = f_nn_46(((rt_int)52LL), (*(P409)rt_nil_check(F->names_608)).line);
(*(P409)rt_nil_check(F->p_611)).name = (*(P409)rt_nil_check(F->names_608)).name;
(*(P409)rt_nil_check(F->p_611)).ival = F->mode_607;
(*(P409)rt_nil_check(F->p_611)).a = F->st_610;
f_append_50(&F->head_604, &F->tail_605, F->p_611);
F->names_608 = (*(P409)rt_nil_check(F->names_608)).next;
}
F->more_606 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_604;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_111(P409 owner_110) {
  struct f_imports_list_111fr *F = rt_alloc(sizeof *F);
F->owner_110 = owner_110;
F->head_612 = NULL;
F->tail_613 = NULL;
F->more_614 = 1;
if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P409)rt_nil_check(F->owner_110)).flag = rt_add((*(P409)rt_nil_check(F->owner_110)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_614) {
F->ro_615 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_616 = NULL;
F->x_616 = f_name_node_75();
if (F->ro_615) {
(*(P409)rt_nil_check(F->x_616)).ival = ((rt_int)1LL);
}
f_append_50(&F->head_612, &F->tail_613, F->x_616);
F->more_614 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P409)rt_nil_check(F->owner_110)).d = F->head_612;
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

static P404 f_definable_name_114(void) {
  struct f_definable_name_114fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_59(((rt_int)1LL)) || (f_at_kind_59(((rt_int)3LL)) && f_is_definable_113(&(*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)))))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->result_ = (*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(rt_sub(g_tpos_433, ((rt_int)1LL)), (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s;
goto ret_;
}
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_subprogram_decl_115(void) {
  struct f_subprogram_decl_115fr *F = rt_alloc(sizeof *F);
F->line_617 = f_cur_line_53();
F->x_618 = NULL;
F->is_abn_619 = f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_620 = f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_620) {
F->x_618 = f_nn_46(((rt_int)46LL), F->line_617);
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_618 = f_nn_46(((rt_int)45LL), F->line_617);
} else {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
if (F->is_abn_619) {
(*(P409)rt_nil_check(F->x_618)).flag = ((rt_int)1LL);
}
(*(P409)rt_nil_check(F->x_618)).name = f_definable_name_114();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_618)).e = f_formal_tt_117();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_618)).a = f_formal_params_109();
}
if (F->is_func_620) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P409)rt_nil_check(F->x_618)).b = f_p_subtype_77();
}
F->dummy_621 = f_imports_list_111(F->x_618);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P409)rt_nil_check(F->x_618)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_620) {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P404)rt_nil_check(f_definable_name_114())), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->x_618)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->x_618)).name))); b_; }));
}
F->result_ = F->x_618;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_capsule_decl_116(void) {
  struct f_capsule_decl_116fr *F = rt_alloc(sizeof *F);
F->x_622 = NULL;
F->x_622 = f_nn_46(((rt_int)47LL), f_cur_line_53());
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_622)).name = f_expect_id_74();
F->dummy_623 = f_imports_list_111(F->x_622);
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P409)rt_nil_check(F->x_622)).ival = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P409)rt_nil_check(F->x_622)).ival = ((rt_int)0LL);
} else {
F->head_624 = NULL;
F->tail_625 = NULL;
F->more_626 = 1;
while (F->more_626) {
F->n_627 = NULL;
F->n_627 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P409)rt_nil_check(F->n_627)).ival = ((rt_int)1LL);
}
(*(P409)rt_nil_check(F->n_627)).name = f_definable_name_114();
f_append_50(&F->head_624, &F->tail_625, F->n_627);
F->more_626 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P409)rt_nil_check(F->x_622)).a = F->head_624;
(*(P409)rt_nil_check(F->x_622)).ival = ((rt_int)2LL);
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P409)rt_nil_check(F->x_622)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P404)rt_nil_check(f_expect_id_74())), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->x_622)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_622;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_formal_tt_117(void) {
  struct f_formal_tt_117fr *F = rt_alloc(sizeof *F);
F->head_628 = NULL;
F->tail_629 = NULL;
F->more_630 = 1;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_630) {
f_append_50(&F->head_628, &F->tail_629, f_name_node_75());
F->more_630 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_628;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_generic_decl_118(void) {
  struct f_generic_decl_118fr *F = rt_alloc(sizeof *F);
F->x_631 = NULL;
F->x_631 = f_nn_46(((rt_int)51LL), f_cur_line_53());
F->head_632 = NULL;
F->tail_633 = NULL;
F->more_634 = 1;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
while (F->more_634) {
F->names_635 = NULL;
F->names_635 = f_id_list_76();
F->kind_636 = ((rt_int)6LL);
F->st_637 = NULL;
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_636 = ((rt_int)1LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_636 = ((rt_int)2LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_636 = ((rt_int)3LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_636 = ((rt_int)4LL);
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_636 = ((rt_int)5LL);
} else {
F->st_637 = f_p_subtype_77();
}
if (((F->kind_636 <= ((rt_int)2LL)) && f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P409)rt_nil_check(F->x_631)).e = f_actual_params_78();
} else if (((F->kind_636 >= ((rt_int)3LL)) && (F->kind_636 <= ((rt_int)5LL)))) {
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
while ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_637 = f_p_subtype_77();
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
}
if (((F->kind_636 == ((rt_int)4LL)) && f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_637 = f_p_subtype_77();
}
}
while ((F->names_635 != NULL)) {
F->p_638 = NULL;
F->p_638 = f_nn_46(((rt_int)52LL), (*(P409)rt_nil_check(F->names_635)).line);
(*(P409)rt_nil_check(F->p_638)).name = (*(P409)rt_nil_check(F->names_635)).name;
(*(P409)rt_nil_check(F->p_638)).ival = F->kind_636;
(*(P409)rt_nil_check(F->p_638)).a = F->st_637;
f_append_50(&F->head_632, &F->tail_633, F->p_638);
F->names_635 = (*(P409)rt_nil_check(F->names_635)).next;
}
F->more_634 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_634 = 1;
while (F->more_634) {
F->nm_639 = NULL;
F->nm_639 = f_definable_name_114();
F->st_640 = NULL;
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
while ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_640 = f_p_subtype_77();
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_640 = f_p_subtype_77();
}
F->more_634 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P409)rt_nil_check(F->x_631)).a = F->head_632;
(*(P409)rt_nil_check(F->x_631)).b = f_declaration_103();
(*(P409)rt_nil_check(F->x_631)).name = (*(P409)rt_nil_check((*(P409)rt_nil_check(F->x_631)).b)).name;
F->result_ = F->x_631;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_task_decl_119(void) {
  struct f_task_decl_119fr *F = rt_alloc(sizeof *F);
F->x_641 = NULL;
F->x_641 = f_nn_46(((rt_int)50LL), f_cur_line_53());
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_641)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_641)).e = f_formal_tt_117();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_641)).a = f_formal_params_109();
}
F->dummy_642 = f_imports_list_111(F->x_641);
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P409)rt_nil_check(F->x_641)).c = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P404)rt_nil_check(f_expect_id_74())), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->x_641)).name))))) {
f_fail_21(f_cur_line_53(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->x_641)).name))); b_; }));
}
F->result_ = F->x_641;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_expose_decl_120(void) {
  struct f_expose_decl_120fr *F = rt_alloc(sizeof *F);
F->x_643 = NULL;
F->x_643 = f_nn_46(((rt_int)48LL), f_cur_line_53());
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P409)rt_nil_check(F->x_643)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_644 = NULL;
F->tail_645 = NULL;
F->more_646 = 1;
while (F->more_646) {
F->n_647 = NULL;
F->n_647 = f_nn_46(((rt_int)7LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P409)rt_nil_check(F->n_647)).ival = ((rt_int)1LL);
}
(*(P409)rt_nil_check(F->n_647)).name = f_definable_name_114();
f_append_50(&F->head_644, &F->tail_645, F->n_647);
F->more_646 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P409)rt_nil_check(F->x_643)).a = F->head_644;
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P409)rt_nil_check(F->x_643)).flag = ((rt_int)1LL);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P409)rt_nil_check(F->x_643)).flag = rt_add((*(P409)rt_nil_check(F->x_643)).flag, ((rt_int)2LL));
}
(*(P409)rt_nil_check(F->x_643)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_643)).b = f_actual_params_78();
}
if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P409)rt_nil_check(F->x_643)).flag == ((rt_int)1LL)) || ((*(P409)rt_nil_check(F->x_643)).flag == ((rt_int)3LL)))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_643;
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

static P409 f_statement_123(void) {
  struct f_statement_123fr *F = rt_alloc(sizeof *F);
F->labels_648 = NULL;
F->ltail_649 = NULL;
F->match_650 = NULL;
F->s_651 = NULL;
while (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P404)rt_nil_check(f_text_at_63(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_50(&F->labels_648, &F->ltail_649, f_name_node_75());
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
}
if (((f_at_kind_59(((rt_int)1LL)) && (f_kind_at_61(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_122(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P404)rt_nil_check(f_text_at_63(((rt_int)1LL)))); b_; })))) {
F->match_650 = f_expect_id_74();
}
F->s_651 = f_unlabeled_statement_124();
if ((F->match_650 != NULL)) {
if (((((((((*(P409)rt_nil_check(F->s_651)).kind != ((rt_int)22LL)) && ((*(P409)rt_nil_check(F->s_651)).kind != ((rt_int)23LL))) && ((*(P409)rt_nil_check(F->s_651)).kind != ((rt_int)24LL))) && ((*(P409)rt_nil_check(F->s_651)).kind != ((rt_int)25LL))) && ((*(P409)rt_nil_check(F->s_651)).kind != ((rt_int)26LL))) && ((*(P409)rt_nil_check(F->s_651)).kind != ((rt_int)35LL))) && ((*(P409)rt_nil_check(F->s_651)).kind != ((rt_int)36LL)))) {
f_fail_21((*(P409)rt_nil_check(F->s_651)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P404)rt_nil_check(f_expect_id_74())), (*(P404)rt_nil_check(F->match_650))))) {
f_fail_21((*(P409)rt_nil_check(F->s_651)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P404)rt_nil_check(F->match_650))); b_; }));
}
(*(P409)rt_nil_check(F->s_651)).tag = F->match_650;
}
if ((F->labels_648 != NULL)) {
f_fail_21((*(P409)rt_nil_check(F->s_651)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_651;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_unlabeled_statement_124(void) {
  struct f_unlabeled_statement_124fr *F = rt_alloc(sizeof *F);
F->line_652 = f_cur_line_53();
F->x_653 = NULL;
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
F->x_653 = f_nn_46(((rt_int)25LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_653)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_653;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_132();
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_653 = f_nn_46(((rt_int)27LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_653)).name = f_expect_id_74();
F->result_ = F->x_653;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_653 = f_nn_46(((rt_int)28LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
if ((!f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P409)rt_nil_check(F->x_653)).a = f_expr_87();
}
F->result_ = F->x_653;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_653 = f_nn_46(((rt_int)30LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_653)).name = f_expect_id_74();
F->result_ = F->x_653;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->result_ = f_nn_46(((rt_int)31LL), F->line_652);
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_653 = f_nn_46(((rt_int)34LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_653)).name = f_expect_id_74();
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_653)).e = f_actual_tt_81();
}
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_653)).b = f_actual_params_78();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P409)rt_nil_check(F->x_653)).a = f_postfix_97();
F->result_ = F->x_653;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_654 = NULL;
F->tail_655 = NULL;
F->x_653 = f_nn_46(((rt_int)35LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_656 = NULL;
F->itail_657 = NULL;
F->more_658 = 1;
while (F->more_658) {
f_append_50(&F->invs_656, &F->itail_657, f_postfix_97());
F->more_658 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_654, &F->tail_655, f_arm_128(F->invs_656, f_body_101(), F->line_652));
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P409)rt_nil_check(F->x_653)).a = F->head_654;
F->result_ = F->x_653;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_653 = f_nn_46(((rt_int)36LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_653)).a = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P409)rt_nil_check(F->x_653)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_653;
goto ret_;
} else if (f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_653 = f_nn_46(((rt_int)32LL), F->line_652);
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_653)).a = f_postfix_97();
if ((!(f_at_kind_59(((rt_int)1LL)) && rt_str_eq((*(P404)rt_nil_check((*(P405)rt_nil_check((*(P407)rt_nil_check(g_toks_431)).p[rt_index(g_tpos_433, (*(P407)rt_nil_check(g_toks_431)).lo, (*(P407)rt_nil_check(g_toks_431)).hi) - (*(P407)rt_nil_check(g_toks_431)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
if (f_at_op_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P409)rt_nil_check(F->x_653)).b = f_actual_params_78();
}
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P409)rt_nil_check(F->x_653)).c = f_expr_87();
}
F->result_ = F->x_653;
goto ret_;
}
{
F->target_659 = NULL;
F->target_659 = f_postfix_97();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_653 = f_nn_46(((rt_int)20LL), F->line_652);
(*(P409)rt_nil_check(F->x_653)).a = F->target_659;
(*(P409)rt_nil_check(F->x_653)).b = f_expr_87();
} else {
F->x_653 = f_nn_46(((rt_int)21LL), F->line_652);
(*(P409)rt_nil_check(F->x_653)).a = F->target_659;
}
}
F->result_ = F->x_653;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_arm_128(P409 cond_125, P409 b_126, rt_int line_127) {
  struct f_arm_128fr *F = rt_alloc(sizeof *F);
F->cond_125 = cond_125;
F->b_126 = b_126;
F->line_127 = line_127;
F->x_660 = NULL;
F->x_660 = f_nn_46(((rt_int)60LL), F->line_127);
(*(P409)rt_nil_check(F->x_660)).a = F->cond_125;
(*(P409)rt_nil_check(F->x_660)).b = F->b_126;
F->result_ = F->x_660;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_if_stmt_129(void) {
  struct f_if_stmt_129fr *F = rt_alloc(sizeof *F);
F->x_661 = NULL;
F->x_661 = f_nn_46(((rt_int)22LL), f_cur_line_53());
F->head_662 = NULL;
F->tail_663 = NULL;
F->cond_664 = NULL;
F->go_665 = 1;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
F->cond_664 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_662, &F->tail_663, f_arm_128(F->cond_664, f_body_101(), (*(P409)rt_nil_check(F->x_661)).line));
while (F->go_665) {
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_664 = f_expr_87();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_50(&F->head_662, &F->tail_663, f_arm_128(F->cond_664, f_body_101(), (*(P409)rt_nil_check(F->x_661)).line));
} else if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P409)rt_nil_check(F->x_661)).flag = ((rt_int)1LL);
(*(P409)rt_nil_check(F->x_661)).b = f_body_101();
} else {
F->go_665 = 0;
}
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P409)rt_nil_check(F->x_661)).a = F->head_662;
F->result_ = F->x_661;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_case_stmt_130(void) {
  struct f_case_stmt_130fr *F = rt_alloc(sizeof *F);
F->x_666 = NULL;
F->x_666 = f_nn_46(((rt_int)23LL), f_cur_line_53());
F->head_667 = NULL;
F->tail_668 = NULL;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_666)).a = f_expr_87();
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_669 = NULL;
F->ltail_670 = NULL;
F->more_671 = 1;
while (F->more_671) {
F->l_672 = NULL;
F->l_672 = f_nn_46(((rt_int)61LL), f_cur_line_53());
(*(P409)rt_nil_check(F->l_672)).a = f_expr_87();
if (f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P409)rt_nil_check(F->l_672)).b = f_expr_87();
}
f_append_50(&F->labs_669, &F->ltail_670, F->l_672);
F->more_671 = f_accept_op_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_50(&F->head_667, &F->tail_668, f_arm_128(F->labs_669, f_body_101(), (*(P409)rt_nil_check(F->x_666)).line));
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P409)rt_nil_check(F->x_666)).flag = ((rt_int)1LL);
(*(P409)rt_nil_check(F->x_666)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P409)rt_nil_check(F->x_666)).b = F->head_667;
F->result_ = F->x_666;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_repeat_stmt_131(void) {
  struct f_repeat_stmt_131fr *F = rt_alloc(sizeof *F);
F->x_673 = NULL;
F->x_673 = f_nn_46(((rt_int)24LL), f_cur_line_53());
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P409)rt_nil_check(F->x_673)).flag = ((rt_int)1LL);
(*(P409)rt_nil_check(F->x_673)).name = f_expect_id_74();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P409)rt_nil_check(F->x_673)).ival = ((rt_int)1LL);
}
(*(P409)rt_nil_check(F->x_673)).a = f_p_subtype_77();
} else {
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P409)rt_nil_check(F->x_673)).a = f_expr_87();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P409)rt_nil_check(F->x_673)).b = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_673;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_guard_stmt_132(void) {
  struct f_guard_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_674 = NULL;
F->x_674 = f_nn_46(((rt_int)26LL), f_cur_line_53());
F->head_675 = NULL;
F->tail_676 = NULL;
g_tpos_433 = rt_add(g_tpos_433, ((rt_int)1LL));
(*(P409)rt_nil_check(F->x_674)).a = f_body_101();
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_677 = NULL;
F->h_677 = f_nn_46(((rt_int)62LL), f_cur_line_53());
(*(P409)rt_nil_check(F->h_677)).a = f_id_list_76();
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P409)rt_nil_check(F->h_677)).b = f_body_101();
f_append_50(&F->head_675, &F->tail_676, F->h_677);
}
if (f_accept_kw_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P409)rt_nil_check(F->x_674)).flag = ((rt_int)1LL);
(*(P409)rt_nil_check(F->x_674)).c = f_body_101();
}
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P409)rt_nil_check(F->x_674)).b = F->head_675;
F->result_ = F->x_674;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_program_133(void) {
  struct f_program_133fr *F = rt_alloc(sizeof *F);
F->head_678 = NULL;
F->tail_679 = NULL;
while ((!f_at_kind_59(((rt_int)0LL)))) {
if ((!f_at_kw_55(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_65(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_50(&F->head_678, &F->tail_679, f_capsule_decl_116());
f_expect_op_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_678;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_135(rstr *s_134) {
  struct f_hash_135fr *F = rt_alloc(sizeof *F);
F->s_134 = s_134;
F->h_680 = ((rt_int)0LL);
{ rt_int lo682 = ((rt_int)1LL), hi683 = ((*F->s_134)).len;
for (rt_int it684 = lo682; it684 <= hi683; it684++) {
F->i_681 = it684;
F->h_680 = rt_mod(rt_add(rt_mul(F->h_680, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_134), F->i_681)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_680;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_lookup_137(rstr *name_136) {
  struct f_lookup_137fr *F = rt_alloc(sizeof *F);
F->name_136 = name_136;
F->y_685 = NULL;
F->y_685 = (*(P425)rt_nil_check(g_table_435)).p[rt_index(f_hash_135(&(*F->name_136)), (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo];
while ((F->y_685 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_685)).name)), (*F->name_136))) {
F->result_ = F->y_685;
goto ret_;
}
F->y_685 = (*(P419)rt_nil_check(F->y_685)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_lookup_decl_139(P409 d_138) {
  struct f_lookup_decl_139fr *F = rt_alloc(sizeof *F);
F->d_138 = d_138;
F->y_686 = NULL;
F->y_686 = (*(P425)rt_nil_check(g_table_435)).p[rt_index(f_hash_135(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_138)).name))), (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo];
while ((F->y_686 != NULL)) {
if (((*(P419)rt_nil_check(F->y_686)).decl == F->d_138)) {
F->result_ = F->y_686;
goto ret_;
}
F->y_686 = (*(P419)rt_nil_check(F->y_686)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_142(P419 y_140, rt_int line_141) {
  struct f_define_142fr *F = rt_alloc(sizeof *F);
F->y_140 = y_140;
F->line_141 = line_141;
F->h_687 = f_hash_135(&(*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_140)).name)));
F->z_688 = NULL;
F->z_688 = (*(P425)rt_nil_check(g_table_435)).p[rt_index(F->h_687, (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo];
while ((F->z_688 != NULL)) {
if (((((*(P419)rt_nil_check(F->z_688)).depth == g_depth_436) && rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->z_688)).name)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_140)).name)))) && (!(((f_overloadable_144(F->y_140) && f_overloadable_144(F->z_688)) && ((*(P419)rt_nil_check(F->z_688)).kind == (*(P419)rt_nil_check(F->y_140)).kind)) && (!f_same_signature_147((*(P419)rt_nil_check(F->y_140)).params, (*(P419)rt_nil_check(F->z_688)).params)))))) {
f_fail_21(F->line_141, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_140)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_688 = (*(P419)rt_nil_check(F->z_688)).chain;
}
(*(P419)rt_nil_check(F->y_140)).depth = g_depth_436;
(*(P419)rt_nil_check(F->y_140)).chain = (*(P425)rt_nil_check(g_table_435)).p[rt_index(F->h_687, (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo];
(*(P425)rt_nil_check(g_table_435)).p[rt_index(F->h_687, (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo] = F->y_140;
(*(P419)rt_nil_check(F->y_140)).stack = g_scope_stack_437;
g_scope_stack_437 = F->y_140;
ret_:
  return;
}

static int f_overloadable_144(P419 y_143) {
  struct f_overloadable_144fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->result_ = ((((*(P419)rt_nil_check(F->y_143)).kind == ((rt_int)3LL)) || ((*(P419)rt_nil_check(F->y_143)).kind == ((rt_int)4LL))) || ((*(P419)rt_nil_check(F->y_143)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_147(P417 a_145, P417 b_146) {
  struct f_same_signature_147fr *F = rt_alloc(sizeof *F);
F->a_145 = a_145;
F->b_146 = b_146;
F->x_689 = NULL;
F->x_689 = F->a_145;
F->y_690 = NULL;
F->y_690 = F->b_146;
while (((F->x_689 != NULL) && (F->y_690 != NULL))) {
if ((!f_same_161((*(P417)rt_nil_check(F->x_689)).t, (*(P417)rt_nil_check(F->y_690)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_689 = (*(P417)rt_nil_check(F->x_689)).next;
F->y_690 = (*(P417)rt_nil_check(F->y_690)).next;
}
F->result_ = ((F->x_689 == NULL) && (F->y_690 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_148(void) {
  struct f_open_scope_148fr *F = rt_alloc(sizeof *F);
g_depth_436 = rt_add(g_depth_436, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_149(void) {
  struct f_close_scope_149fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_437 != NULL) && ((*(P419)rt_nil_check(g_scope_stack_437)).depth == g_depth_436))) {
(*(P425)rt_nil_check(g_table_435)).p[rt_index(f_hash_135(&(*(P404)rt_nil_check((*(P419)rt_nil_check(g_scope_stack_437)).name))), (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo] = (*(P419)rt_nil_check(g_scope_stack_437)).chain;
g_scope_stack_437 = (*(P419)rt_nil_check(g_scope_stack_437)).stack;
}
g_depth_436 = rt_sub(g_depth_436, ((rt_int)1LL));
ret_:
  return;
}

static P419 f_new_sym_152(rt_int kind_150, P404 name_151) {
  struct f_new_sym_152fr *F = rt_alloc(sizeof *F);
F->kind_150 = kind_150;
F->name_151 = name_151;
F->y_691 = NULL;
{ R420 *cell692 = rt_alloc(sizeof(R420));
(*cell692).name = NULL;
(*cell692).t = NULL;
(*cell692).c = NULL;
(*cell692).access = NULL;
(*cell692).cname = NULL;
(*cell692).st = NULL;
(*cell692).decl = NULL;
(*cell692).params = NULL;
(*cell692).result = NULL;
(*cell692).members = NULL;
(*cell692).mnext = NULL;
(*cell692).binds = NULL;
(*cell692).insts = NULL;
(*cell692).chain = NULL;
(*cell692).stack = NULL;
F->y_691 = cell692;
}
(*(P419)rt_nil_check(F->y_691)).kind = F->kind_150;
(*(P419)rt_nil_check(F->y_691)).name = F->name_151;
F->result_ = F->y_691;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P413 f_new_typ_154(rt_int kind_153) {
  struct f_new_typ_154fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->t_693 = NULL;
{ R414 *cell694 = rt_alloc(sizeof(R414));
(*cell694).name = NULL;
(*cell694).lits = NULL;
(*cell694).elem = NULL;
(*cell694).idx = NULL;
(*cell694).idx2 = NULL;
(*cell694).elemcons = NULL;
(*cell694).elemst = NULL;
(*cell694).under = NULL;
(*cell694).tparams = NULL;
(*cell694).fields = NULL;
(*cell694).target = NULL;
(*cell694).decl = NULL;
(*cell694).cname = NULL;
(*cell694).next = NULL;
F->t_693 = cell694;
}
(*(P413)rt_nil_check(F->t_693)).kind = F->kind_153;
F->result_ = F->t_693;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P411 f_new_cons_155(void) {
  struct f_new_cons_155fr *F = rt_alloc(sizeof *F);
F->c_695 = NULL;
{ R412 *cell696 = rt_alloc(sizeof(R412));
(*cell696).lo = NULL;
(*cell696).hi = NULL;
(*cell696).lo2 = NULL;
(*cell696).hi2 = NULL;
(*cell696).slen = NULL;
(*cell696).args = NULL;
F->c_695 = cell696;
}
F->result_ = F->c_695;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_158(P409 a_156, P409 b_157) {
  struct f_same_lits_158fr *F = rt_alloc(sizeof *F);
F->a_156 = a_156;
F->b_157 = b_157;
F->x_697 = NULL;
F->x_697 = F->a_156;
F->y_698 = NULL;
F->y_698 = F->b_157;
while (((F->x_697 != NULL) && (F->y_698 != NULL))) {
if ((!rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->x_697)).name)), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->y_698)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_697 = (*(P409)rt_nil_check(F->x_697)).next;
F->y_698 = (*(P409)rt_nil_check(F->y_698)).next;
}
F->result_ = ((F->x_697 == NULL) && (F->y_698 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_161(P413 a_159, P413 b_160) {
  struct f_same_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
if ((F->a_159 == F->b_160)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_159 == NULL) || (F->b_160 == NULL)) || ((*(P413)rt_nil_check(F->a_159)).kind != (*(P413)rt_nil_check(F->b_160)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)1LL)) || ((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)2LL))) || ((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)3LL))) || ((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)5LL))) || ((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)9LL))) || ((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_158((*(P413)rt_nil_check(F->a_159)).lits, (*(P413)rt_nil_check(F->b_160)).lits);
goto ret_;
}
if (((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)6LL))) {
if ((((*(P413)rt_nil_check(F->a_159)).idx2 == NULL) != ((*(P413)rt_nil_check(F->b_160)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_161((*(P413)rt_nil_check(F->a_159)).elem, (*(P413)rt_nil_check(F->b_160)).elem) && f_same_161((*(P413)rt_nil_check(F->a_159)).idx, (*(P413)rt_nil_check(F->b_160)).idx));
goto ret_;
}
if (((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)16LL))) {
F->result_ = f_same_161((*(P413)rt_nil_check(F->a_159)).elem, (*(P413)rt_nil_check(F->b_160)).elem);
goto ret_;
}
if (((*(P413)rt_nil_check(F->a_159)).kind == ((rt_int)7LL))) {
F->f_699 = NULL;
F->f_699 = (*(P413)rt_nil_check(F->a_159)).fields;
F->g_700 = NULL;
F->g_700 = (*(P413)rt_nil_check(F->b_160)).fields;
while (((F->f_699 != NULL) && (F->g_700 != NULL))) {
if (((!rt_str_eq((*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_699)).name)), (*(P404)rt_nil_check((*(P415)rt_nil_check(F->g_700)).name)))) || (!f_same_161((*(P415)rt_nil_check(F->f_699)).t, (*(P415)rt_nil_check(F->g_700)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_699 = (*(P415)rt_nil_check(F->f_699)).next;
F->g_700 = (*(P415)rt_nil_check(F->g_700)).next;
}
F->result_ = ((F->f_699 == NULL) && (F->g_700 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_163(P413 t_162) {
  struct f_kind_name_163fr *F = rt_alloc(sizeof *F);
F->t_162 = t_162;
{ rt_int sel701 = (*(P413)rt_nil_check(F->t_162)).kind;
if (0 || (sel701 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel701 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel701 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel701 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel701 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel701 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel701 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel701 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_162)).name)));
goto ret_;
} else if (0 || (sel701 == ((rt_int)11LL))) {
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

static void f_check_type_167(P413 got_164, P413 want_165, rt_int line_166) {
  struct f_check_type_167fr *F = rt_alloc(sizeof *F);
F->got_164 = got_164;
F->want_165 = want_165;
F->line_166 = line_166;
if ((F->want_165 == NULL)) {
goto ret_;
}
if ((((*(P413)rt_nil_check(F->got_164)).kind == ((rt_int)11LL)) && ((*(P413)rt_nil_check(F->want_165)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_161(F->got_164, F->want_165))) {
f_fail_21(F->line_166, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_163(F->got_164)), rt_str(" where ", 7)), f_kind_name_163(F->want_165)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_169(P413 t_168) {
  struct f_ctype_169fr *F = rt_alloc(sizeof *F);
F->t_168 = t_168;
{ rt_int sel702 = (*(P413)rt_nil_check(F->t_168)).kind;
if (0 || (sel702 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel702 == ((rt_int)2LL)) || (sel702 == ((rt_int)4LL)) || (sel702 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel702 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel702 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel702 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel702 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox", 7);
goto ret_;
} else if (0 || (sel702 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel702 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act", 6);
goto ret_;
} else if (0 || (sel702 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P413)rt_nil_check(F->t_168)).cname == NULL)) {
f_declare_ctype_173(F->t_168);
} else if (((((*(P413)rt_nil_check(F->t_168)).kind == ((rt_int)7LL)) && (*(P413)rt_nil_check(F->t_168)).forward) && (!(*(P413)rt_nil_check(F->t_168)).defined))) {
(*(P413)rt_nil_check(F->t_168)).defined = 1;
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_168)).cname))), rt_str(" { ", 3)), f_field_decls_171(F->t_168)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_168)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_171(P413 t_170) {
  struct f_field_decls_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
F->f_703 = NULL;
F->f_703 = (*(P413)rt_nil_check(F->t_170)).fields;
F->s_704 = NULL;
F->s_704 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_703 != NULL)) {
F->s_704 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->s_704)), f_ctype_169((*(P415)rt_nil_check(F->f_703)).t)), rt_str(" ", 1)), f_lower_s_15(&(*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_703)).name)))), rt_str("; ", 2)); b_; }));
F->f_703 = (*(P415)rt_nil_check(F->f_703)).next;
}
F->result_ = (*(P404)rt_nil_check(F->s_704));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_173(P413 t_172) {
  struct f_declare_ctype_173fr *F = rt_alloc(sizeof *F);
F->t_172 = t_172;
F->u_705 = NULL;
F->u_705 = g_all_types_438;
if ((((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)8LL)) && ((*(P413)rt_nil_check(F->t_172)).target == NULL))) {
f_finish_ptr_233(F->t_172);
if (((*(P413)rt_nil_check(F->t_172)).cname != NULL)) {
goto ret_;
}
}
if (((*(P413)rt_nil_check(F->t_172)).kind != ((rt_int)8LL))) {
while ((F->u_705 != NULL)) {
if ((((*(P413)rt_nil_check(F->u_705)).kind == (*(P413)rt_nil_check(F->t_172)).kind) && f_same_161(F->u_705, F->t_172))) {
(*(P413)rt_nil_check(F->t_172)).cname = (*(P413)rt_nil_check(F->u_705)).cname;
goto ret_;
}
F->u_705 = (*(P413)rt_nil_check(F->u_705)).next;
}
}
if ((((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)15LL)) && ((*(P413)rt_nil_check(F->t_172)).tparams == NULL))) {
(*(P413)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_169((*(P413)rt_nil_check(F->t_172)).under); b_; }));
goto ret_;
}
if (((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)6LL))) {
(*(P413)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)15LL))) {
(*(P413)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)7LL))) {
(*(P413)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P413)rt_nil_check(F->t_172)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P413)rt_nil_check(F->t_172)).next = g_all_types_438;
g_all_types_438 = F->t_172;
if (((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)8LL))) {
F->target_706 = NULL;
F->target_706 = (*(P413)rt_nil_check(F->t_172)).target;
if (((*(P413)rt_nil_check(F->target_706)).kind == ((rt_int)7LL))) {
if (((*(P413)rt_nil_check(F->target_706)).cname == NULL)) {
(*(P413)rt_nil_check(F->target_706)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P413)rt_nil_check(F->target_706)).next = g_all_types_438;
g_all_types_438 = F->target_706;
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->target_706)).cname))), rt_str(" ", 1)), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->target_706)).cname))), rt_str(";", 1)); b_; }));
(*(P413)rt_nil_check(F->target_706)).forward = 1;
}
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->target_706)).cname))), rt_str(" *", 2)), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_169(F->target_706)), rt_str(" *", 2)), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)6LL))) {
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(" ", 1)), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_169((*(P413)rt_nil_check(F->t_172)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P413)rt_nil_check(F->t_172)).kind == ((rt_int)15LL))) {
F->p_707 = NULL;
F->p_707 = (*(P413)rt_nil_check(F->t_172)).tparams;
F->fs_708 = NULL;
F->fs_708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_707 != NULL)) {
F->fs_708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->fs_708)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_707)).name)))), rt_str("; ", 2)); b_; }));
F->p_707 = (*(P409)rt_nil_check(F->p_707)).next;
}
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(" ", 1)), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(" {", 2)), (*(P404)rt_nil_check(F->fs_708))), f_ctype_169((*(P413)rt_nil_check(F->t_172)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(" ", 1)), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(";", 1)); b_; }));
(*(P413)rt_nil_check(F->t_172)).defined = 1;
f_put_25(g_out_types_440, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_172)).cname))), rt_str(" { ", 3)), f_field_decls_171(F->t_172)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_174(void) {
  struct f_init_ascii_174fr *F = rt_alloc(sizeof *F);
F->names_709 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_710 = NULL;
F->tail_711 = NULL;
F->start_712 = ((rt_int)1LL);
{ rt_int lo714 = ((rt_int)1LL), hi715 = (F->names_709).len;
for (rt_int it716 = lo714; it716 <= hi715; it716++) {
F->i_713 = it716;
if ((rt_str_get(F->names_709, F->i_713) == 32)) {
F->lit_717 = NULL;
F->lit_717 = f_nn_46(((rt_int)4LL), ((rt_int)0LL));
(*(P409)rt_nil_check(F->lit_717)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_709, F->start_712, rt_sub(F->i_713, ((rt_int)1LL))); b_; }));
f_append_50(&F->head_710, &F->tail_711, F->lit_717);
F->start_712 = rt_add(F->i_713, ((rt_int)1LL));
}
}
}
g_ty_ascii_464 = f_new_typ_154(((rt_int)4LL));
(*(P413)rt_nil_check(g_ty_ascii_464)).lits = F->head_710;
(*(P413)rt_nil_check(g_ty_ascii_464)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_177(P409 lits_175, rstr *name_176) {
  struct f_lit_index_177fr *F = rt_alloc(sizeof *F);
F->lits_175 = lits_175;
F->name_176 = name_176;
F->i_718 = ((rt_int)0LL);
F->l_719 = NULL;
F->l_719 = F->lits_175;
while ((F->l_719 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->l_719)).name)), (*F->name_176))) {
F->result_ = F->i_718;
goto ret_;
}
F->i_718 = rt_add(F->i_718, ((rt_int)1LL));
F->l_719 = (*(P409)rt_nil_check(F->l_719)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P413 f_resolve_subtype_180(P409 st_178, P411 *c_179) {
  struct f_resolve_subtype_180fr *F = rt_alloc(sizeof *F);
F->st_178 = st_178;
F->c_179 = c_179;
F->t_720 = NULL;
F->dummy_722 = NULL;
(*F->c_179) = f_new_cons_155();
{ rt_int sel723 = (*(P409)rt_nil_check(F->st_178)).kind;
if (0 || (sel723 == ((rt_int)70LL))) {
if (((*(P409)rt_nil_check(F->st_178)).a != NULL)) {
(*(P411)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356((*(P409)rt_nil_check(F->st_178)).a, g_ty_int_461, &F->dummy_722); b_; }));
(*(P411)rt_nil_check((*F->c_179))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356((*(P409)rt_nil_check(F->st_178)).b, g_ty_int_461, &F->dummy_722); b_; }));
(*(P411)rt_nil_check((*F->c_179))).mlo = f_manifest_191((*(P409)rt_nil_check(F->st_178)).a, &F->ok_721);
(*(P411)rt_nil_check((*F->c_179))).hasm = F->ok_721;
(*(P411)rt_nil_check((*F->c_179))).mhi = f_manifest_191((*(P409)rt_nil_check(F->st_178)).b, &F->ok_721);
(*(P411)rt_nil_check((*F->c_179))).hasm = ((*(P411)rt_nil_check((*F->c_179))).hasm && F->ok_721);
}
F->result_ = g_ty_int_461;
goto ret_;
} else if (0 || (sel723 == ((rt_int)71LL))) {
F->result_ = g_ty_float_463;
goto ret_;
} else if (0 || (sel723 == ((rt_int)72LL))) {
F->t_720 = f_new_typ_154(((rt_int)4LL));
(*(P413)rt_nil_check(F->t_720)).lits = (*(P409)rt_nil_check(F->st_178)).a;
if (((*(P409)rt_nil_check(F->st_178)).b != NULL)) {
(*(P411)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356((*(P409)rt_nil_check(F->st_178)).b, F->t_720, &F->dummy_722); b_; }));
(*(P411)rt_nil_check((*F->c_179))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356((*(P409)rt_nil_check(F->st_178)).c, F->t_720, &F->dummy_722); b_; }));
}
F->result_ = F->t_720;
goto ret_;
} else if (0 || (sel723 == ((rt_int)73LL))) {
F->t_720 = f_resolve_subtype_180((*(P409)rt_nil_check(F->st_178)).a, &(*F->c_179));
if ((!f_same_161(F->t_720, g_ty_ascii_464))) {
f_fail_21((*(P409)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
(*F->c_179) = f_new_cons_155();
if (((*(P409)rt_nil_check(F->st_178)).b != NULL)) {
(*(P411)rt_nil_check((*F->c_179))).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356((*(P409)rt_nil_check(F->st_178)).b, g_ty_int_461, &F->dummy_722); b_; }));
}
F->result_ = g_ty_string_465;
goto ret_;
} else if (0 || (sel723 == ((rt_int)74LL))) {
if ((f_list_len_52((*(P409)rt_nil_check(F->st_178)).a) > ((rt_int)2LL))) {
f_fail_21((*(P409)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_724 = NULL;
F->ic2_725 = NULL;
F->ec_726 = NULL;
F->it_727 = NULL;
F->it_727 = f_resolve_subtype_180((*(P409)rt_nil_check(F->st_178)).a, &F->ic_724);
F->et_728 = NULL;
F->et_728 = f_resolve_subtype_180((*(P409)rt_nil_check(F->st_178)).b, &F->ec_726);
F->t_720 = f_new_typ_154(((rt_int)6LL));
(*(P413)rt_nil_check(F->t_720)).idx = F->it_727;
(*(P413)rt_nil_check(F->t_720)).elem = F->et_728;
(*(P413)rt_nil_check(F->t_720)).elemcons = F->ec_726;
(*(P413)rt_nil_check(F->t_720)).elemst = (*(P409)rt_nil_check(F->st_178)).b;
if (((*(P411)rt_nil_check(F->ic_724)).lo != NULL)) {
(*(P411)rt_nil_check((*F->c_179))).lo = (*(P411)rt_nil_check(F->ic_724)).lo;
(*(P411)rt_nil_check((*F->c_179))).hi = (*(P411)rt_nil_check(F->ic_724)).hi;
} else if (((*(P413)rt_nil_check(F->it_727)).kind == ((rt_int)4LL))) {
(*(P411)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P411)rt_nil_check((*F->c_179))).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P413)rt_nil_check(F->it_727)).lits), ((rt_int)1LL))); b_; }));
}
(*(P411)rt_nil_check((*F->c_179))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P411)rt_nil_check((*F->c_179))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P409)rt_nil_check((*(P409)rt_nil_check(F->st_178)).a)).next != NULL)) {
(*(P413)rt_nil_check(F->t_720)).idx2 = f_resolve_subtype_180((*(P409)rt_nil_check((*(P409)rt_nil_check(F->st_178)).a)).next, &F->ic2_725);
if (((*(P411)rt_nil_check(F->ic2_725)).lo != NULL)) {
(*(P411)rt_nil_check((*F->c_179))).lo2 = (*(P411)rt_nil_check(F->ic2_725)).lo;
(*(P411)rt_nil_check((*F->c_179))).hi2 = (*(P411)rt_nil_check(F->ic2_725)).hi;
} else if (((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_720)).idx2)).kind == ((rt_int)4LL))) {
(*(P411)rt_nil_check((*F->c_179))).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P411)rt_nil_check((*F->c_179))).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_720)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_720;
goto ret_;
} else if (0 || (sel723 == ((rt_int)77LL))) {
F->t_720 = f_new_typ_154(((rt_int)16LL));
{
F->ec_729 = NULL;
(*(P413)rt_nil_check(F->t_720)).elem = f_resolve_subtype_180((*(P409)rt_nil_check(F->st_178)).a, &F->ec_729);
(*(P413)rt_nil_check(F->t_720)).elemcons = F->ec_729;
}
F->result_ = F->t_720;
goto ret_;
} else if (0 || (sel723 == ((rt_int)75LL))) {
F->t_720 = f_new_typ_154(((rt_int)7LL));
{
F->comp_730 = NULL;
F->comp_730 = (*(P409)rt_nil_check(F->st_178)).a;
F->tail_731 = NULL;
while ((F->comp_730 != NULL)) {
F->cc_732 = NULL;
F->f_733 = NULL;
{ R416 *cell734 = rt_alloc(sizeof(R416));
(*cell734).name = NULL;
(*cell734).t = NULL;
(*cell734).c = NULL;
(*cell734).st = NULL;
(*cell734).next = NULL;
F->f_733 = cell734;
}
(*(P415)rt_nil_check(F->f_733)).name = (*(P409)rt_nil_check(F->comp_730)).name;
(*(P415)rt_nil_check(F->f_733)).t = f_resolve_subtype_180((*(P409)rt_nil_check(F->comp_730)).a, &F->cc_732);
(*(P415)rt_nil_check(F->f_733)).c = F->cc_732;
(*(P415)rt_nil_check(F->f_733)).st = (*(P409)rt_nil_check(F->comp_730)).a;
if ((F->tail_731 == NULL)) {
(*(P413)rt_nil_check(F->t_720)).fields = F->f_733;
} else {
(*(P415)rt_nil_check(F->tail_731)).next = F->f_733;
}
F->tail_731 = F->f_733;
F->comp_730 = (*(P409)rt_nil_check(F->comp_730)).next;
}
}
F->result_ = F->t_720;
goto ret_;
} else if (0 || (sel723 == ((rt_int)79LL))) {
F->result_ = g_ty_file_467;
goto ret_;
} else if (0 || (sel723 == ((rt_int)78LL))) {
{
F->ec_735 = NULL;
F->t_720 = f_new_typ_154(((rt_int)12LL));
(*(P413)rt_nil_check(F->t_720)).elem = f_resolve_subtype_180((*(P409)rt_nil_check(F->st_178)).a, &F->ec_735);
(*(P413)rt_nil_check(F->t_720)).elemcons = F->ec_735;
if (((*(P409)rt_nil_check(F->st_178)).b != NULL)) {
(*(P411)rt_nil_check((*F->c_179))).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356((*(P409)rt_nil_check(F->st_178)).b, g_ty_int_461, &F->dummy_722); b_; }));
}
}
F->result_ = F->t_720;
goto ret_;
} else if (0 || (sel723 == ((rt_int)80LL))) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->st_178)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_462;
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->st_178)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_464;
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->st_178)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_469;
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->st_178)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_470;
goto ret_;
}
{
F->y_736 = NULL;
F->y_736 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->st_178)).name)));
if ((F->y_736 == NULL)) {
f_fail_21((*(P409)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->st_178)).name))); b_; }));
}
if (((((*(P419)rt_nil_check(F->y_736)).kind == ((rt_int)5LL)) && ((*(P419)rt_nil_check(F->y_736)).t != NULL)) && ((*(P413)rt_nil_check((*(P419)rt_nil_check(F->y_736)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_184(F->y_736, F->st_178, &(*F->c_179));
goto ret_;
}
if (((((*(P419)rt_nil_check(F->y_736)).kind == ((rt_int)6LL)) || ((*(P419)rt_nil_check(F->y_736)).kind == ((rt_int)5LL))) && ((*(P419)rt_nil_check(F->y_736)).t != NULL))) {
if (((*(P419)rt_nil_check(F->y_736)).c != NULL)) {
(*F->c_179) = (*(P419)rt_nil_check(F->y_736)).c;
}
F->result_ = (*(P419)rt_nil_check(F->y_736)).t;
goto ret_;
}
if ((((((*(P419)rt_nil_check(F->y_736)).kind == ((rt_int)5LL)) && ((*(P419)rt_nil_check(F->y_736)).decl != NULL)) && ((*(P409)rt_nil_check((*(P419)rt_nil_check(F->y_736)).decl)).kind == ((rt_int)43LL))) && ((*(P409)rt_nil_check((*(P419)rt_nil_check(F->y_736)).decl)).b != NULL))) {
F->result_ = f_new_type_184(F->y_736, F->st_178, &(*F->c_179));
goto ret_;
}
if ((((*(P419)rt_nil_check(F->y_736)).kind == ((rt_int)6LL)) || ((*(P419)rt_nil_check(F->y_736)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_180((*(P419)rt_nil_check(F->y_736)).st, &(*F->c_179));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->st_178)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_21((*(P409)rt_nil_check(F->st_178)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P413 f_new_type_184(P419 y_181, P409 st_182, P411 *c_183) {
  struct f_new_type_184fr *F = rt_alloc(sizeof *F);
F->y_181 = y_181;
F->st_182 = st_182;
F->c_183 = c_183;
F->d_737 = NULL;
F->d_737 = (*(P419)rt_nil_check(F->y_181)).decl;
F->p_738 = NULL;
F->uc_739 = NULL;
(*F->c_183) = f_new_cons_155();
if (((*(P419)rt_nil_check(F->y_181)).t == NULL)) {
(*(P419)rt_nil_check(F->y_181)).t = f_new_typ_154(((rt_int)15LL));
(*(P413)rt_nil_check((*(P419)rt_nil_check(F->y_181)).t)).name = (*(P419)rt_nil_check(F->y_181)).name;
(*(P413)rt_nil_check((*(P419)rt_nil_check(F->y_181)).t)).decl = F->d_737;
(*(P413)rt_nil_check((*(P419)rt_nil_check(F->y_181)).t)).tparams = (*(P409)rt_nil_check(F->d_737)).b;
f_open_scope_148();
F->p_738 = (*(P409)rt_nil_check(F->d_737)).b;
while ((F->p_738 != NULL)) {
F->z_740 = NULL;
F->z_740 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->p_738)).name);
(*(P419)rt_nil_check(F->z_740)).t = g_ty_int_461;
(*(P419)rt_nil_check(F->z_740)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_142(F->z_740, (*(P409)rt_nil_check(F->d_737)).line);
F->p_738 = (*(P409)rt_nil_check(F->p_738)).next;
}
(*(P413)rt_nil_check((*(P419)rt_nil_check(F->y_181)).t)).under = f_resolve_subtype_180((*(P409)rt_nil_check(F->d_737)).a, &F->uc_739);
f_close_scope_149();
}
(*(P411)rt_nil_check((*F->c_183))).args = (*(P409)rt_nil_check(F->st_182)).b;
F->result_ = (*(P419)rt_nil_check(F->y_181)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_init_storage_188(rstr *lval_185, P413 t_186, P411 c_187) {
  struct f_init_storage_188fr *F = rt_alloc(sizeof *F);
F->lval_185 = lval_185;
F->t_186 = t_186;
F->c_187 = c_187;
if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)15LL))) {
F->p_741 = NULL;
F->p_741 = (*(P413)rt_nil_check(F->t_186)).tparams;
F->a_742 = NULL;
F->a_742 = (*(P411)rt_nil_check(F->c_187)).args;
F->uc_743 = NULL;
F->ut_744 = NULL;
F->at_745 = NULL;
if ((f_list_len_52(F->a_742) != f_list_len_52(F->p_741))) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_186)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_52(F->p_741))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_741 != NULL)) {
F->v_746 = rt_str_copy(f_gexpr_356(F->a_742, g_ty_int_461, &F->at_745));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_185), rt_str(".p_", 3)), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_741)).name)))), rt_str(" = ", 3)), F->v_746), rt_str(";", 1)); b_; }));
F->p_741 = (*(P409)rt_nil_check(F->p_741)).next;
F->a_742 = (*(P409)rt_nil_check(F->a_742)).next;
}
f_open_scope_148();
F->p_741 = (*(P413)rt_nil_check(F->t_186)).tparams;
while ((F->p_741 != NULL)) {
F->z_747 = NULL;
F->z_747 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->p_741)).name);
(*(P419)rt_nil_check(F->z_747)).t = g_ty_int_461;
(*(P419)rt_nil_check(F->z_747)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_185), rt_str(".p_", 3)), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_741)).name)))); b_; }));
f_define_142(F->z_747, ((rt_int)0LL));
F->p_741 = (*(P409)rt_nil_check(F->p_741)).next;
}
F->ut_744 = f_resolve_subtype_180((*(P409)rt_nil_check((*(P413)rt_nil_check(F->t_186)).decl)).a, &F->uc_743);
f_close_scope_149();
f_init_storage_188(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_185), rt_str(".all", 4)); b_; }), (*(P413)rt_nil_check(F->t_186)).under, F->uc_743);
} else if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)12LL))) {
if (((*(P411)rt_nil_check(F->c_187)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(&", 14), (*F->lval_185)), rt_str(", ", 2)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_187)).lo))), rt_str(", sizeof(", 9)), f_ctype_169((*(P413)rt_nil_check(F->t_186)).elem)), rt_str("), ", 3)), f_mcopy_193((*(P413)rt_nil_check(F->t_186)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)13LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_185)), rt_str(");", 2)); b_; }));
} else if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)14LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_185), rt_str(".active = 0; ", 13)), (*F->lval_185)), rt_str(".t = NULL; ", 11)), (*F->lval_185)), rt_str(".waiters = NULL;", 16)); b_; }));
} else if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)8LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_185), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)5LL))) {
if (((*(P411)rt_nil_check(F->c_187)).slen == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_185), rt_str(" = rt_str_new(", 14)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_187)).slen))), rt_str(");", 2)); b_; }));
} else if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)6LL))) {
if (((*(P411)rt_nil_check(F->c_187)).lo == NULL)) {
f_fail_21(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_185), rt_str(".lo = ", 6)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_187)).lo))), rt_str("; ", 2)), (*F->lval_185)), rt_str(".hi = ", 6)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_187)).hi))), rt_str("; ", 2)), (*F->lval_185)), rt_str(".lo2 = ", 7)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_187)).lo2))), rt_str("; ", 2)), (*F->lval_185)), rt_str(".hi2 = ", 7)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_187)).hi2))), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_185), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_169((*(P413)rt_nil_check(F->t_186)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_185)), rt_str("));", 3)); b_; }));
if ((((((((((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)5LL)) || ((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)6LL))) || ((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)7LL))) || ((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)15LL))) || ((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)8LL))) || ((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)12LL))) || ((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)13LL))) || ((*(P413)rt_nil_check((*(P413)rt_nil_check(F->t_186)).elem)).kind == ((rt_int)14LL)))) {
F->i_748 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_748), rt_str(" = 0; ", 6)), F->i_748), rt_str(" < RT_CNT(", 10)), (*F->lval_185)), rt_str("); ", 3)), F->i_748), rt_str("++) {", 5)); b_; }));
f_init_storage_188(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_185), rt_str(".p[", 3)), F->i_748), rt_str("]", 1)); b_; }), (*(P413)rt_nil_check(F->t_186)).elem, (*(P413)rt_nil_check(F->t_186)).elemcons);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P413)rt_nil_check(F->t_186)).kind == ((rt_int)7LL))) {
F->f_749 = NULL;
F->f_749 = (*(P413)rt_nil_check(F->t_186)).fields;
while ((F->f_749 != NULL)) {
f_init_storage_188(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_185), rt_str(".", 1)), f_lower_s_15(&(*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_749)).name)))); b_; }), (*(P415)rt_nil_check(F->f_749)).t, (*(P415)rt_nil_check(F->f_749)).c);
F->f_749 = (*(P415)rt_nil_check(F->f_749)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_191(P409 e_189, int *ok_190) {
  struct f_manifest_191fr *F = rt_alloc(sizeof *F);
F->e_189 = e_189;
F->ok_190 = ok_190;
(*F->ok_190) = 0;
if (((*(P409)rt_nil_check(F->e_189)).kind == ((rt_int)1LL))) {
(*F->ok_190) = 1;
F->result_ = (*(P409)rt_nil_check(F->e_189)).ival;
goto ret_;
} else if (((*(P409)rt_nil_check(F->e_189)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_191((*(P409)rt_nil_check(F->e_189)).a, &(*F->ok_190));
goto ret_;
} else if ((((*(P409)rt_nil_check(F->e_189)).kind == ((rt_int)8LL)) && rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_189)).name)), rt_str("-", 1)))) {
F->a_750 = f_manifest_191((*(P409)rt_nil_check(F->e_189)).a, &(*F->ok_190));
F->result_ = rt_neg(F->a_750);
goto ret_;
} else if ((((*(P409)rt_nil_check(F->e_189)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_189)).name)), rt_str("+", 1)) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_189)).name)), rt_str("-", 1))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_189)).name)), rt_str("*", 1))))) {
F->a_750 = f_manifest_191((*(P409)rt_nil_check(F->e_189)).a, &(*F->ok_190));
F->b_751 = f_manifest_191((*(P409)rt_nil_check(F->e_189)).b, &F->ok2_752);
(*F->ok_190) = ((*F->ok_190) && F->ok2_752);
if ((!(*F->ok_190))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_189)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_750, F->b_751);
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_189)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_750, F->b_751);
goto ret_;
}
F->result_ = rt_mul(F->a_750, F->b_751);
goto ret_;
} else if (((*(P409)rt_nil_check(F->e_189)).kind == ((rt_int)7LL))) {
F->y_753 = NULL;
F->y_753 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_189)).name)));
if ((((F->y_753 != NULL) && ((*(P419)rt_nil_check(F->y_753)).kind == ((rt_int)2LL))) && (*(P419)rt_nil_check(F->y_753)).hasmv)) {
(*F->ok_190) = 1;
F->result_ = (*(P419)rt_nil_check(F->y_753)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_mcopy_193(P413 t_192) {
  struct f_mcopy_193fr *F = rt_alloc(sizeof *F);
F->t_192 = t_192;
F->ct_754 = rt_str_copy(f_ctype_169(F->t_192));
F->name_755 = rt_str_new(rt_add((F->ct_754).len, ((rt_int)3LL)));
rt_str_assign(&F->name_755, rt_str_cat(rt_str("mc_", 3), F->ct_754));
F->l_756 = NULL;
if ((!f_seen_name_214(g_mcopies_460, &F->name_755))) {
{ R422 *cell757 = rt_alloc(sizeof(R422));
(*cell757).s = NULL;
(*cell757).next = NULL;
F->l_756 = cell757;
}
(*(P421)rt_nil_check(F->l_756)).s = f_mk_3(&F->name_755);
(*(P421)rt_nil_check(F->l_756)).next = g_mcopies_460;
g_mcopies_460 = F->l_756;
f_put_25(g_out_protos_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_755), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_755), rt_str("(void *d, const void *s) { *(", 29)), F->ct_754), rt_str(" *)d = ", 7)), f_copy_code_203(F->t_192, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_754), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_755;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_195(P413 t_194) {
  struct f_composite_195fr *F = rt_alloc(sizeof *F);
F->t_194 = t_194;
F->result_ = ((((*(P413)rt_nil_check(F->t_194)).kind == ((rt_int)6LL)) || ((*(P413)rt_nil_check(F->t_194)).kind == ((rt_int)7LL))) || (((*(P413)rt_nil_check(F->t_194)).kind == ((rt_int)15LL)) && ((*(P413)rt_nil_check(F->t_194)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_200(rstr *lval_196, P413 t_197, rstr *v_198, P411 c_199) {
  struct f_assign_code_200fr *F = rt_alloc(sizeof *F);
F->lval_196 = lval_196;
F->t_197 = t_197;
F->v_198 = v_198;
F->c_199 = c_199;
if ((((*(P413)rt_nil_check(F->t_197)).kind == ((rt_int)15LL)) && ((*(P413)rt_nil_check(F->t_197)).tparams == NULL))) {
F->result_ = f_assign_code_200(&(*F->lval_196), (*(P413)rt_nil_check(F->t_197)).under, &(*F->v_198), F->c_199);
goto ret_;
}
if (f_composite_195(F->t_197)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_169(F->t_197)), rt_str("(&", 2)), (*F->lval_196)), rt_str(", ", 2)), (*F->v_198)), rt_str(");", 2));
goto ret_;
}
if (((*(P413)rt_nil_check(F->t_197)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_196)), rt_str(", ", 2)), (*F->v_198)), rt_str(");", 2));
goto ret_;
} else if ((((*(P413)rt_nil_check(F->t_197)).kind == ((rt_int)6LL)) || ((*(P413)rt_nil_check(F->t_197)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_169(F->t_197)), rt_str("(&", 2)), (*F->lval_196)), rt_str(", ", 2)), (*F->v_198)), rt_str(");", 2));
goto ret_;
} else if (((((*(P413)rt_nil_check(F->t_197)).kind == ((rt_int)1LL)) && (F->c_199 != NULL)) && (*(P411)rt_nil_check(F->c_199)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_196), rt_str(" = rt_range(", 12)), (*F->v_198)), rt_str(", ", 2)), f_itos_7((*(P411)rt_nil_check(F->c_199)).mlo)), rt_str(", ", 2)), f_itos_7((*(P411)rt_nil_check(F->c_199)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_196), rt_str(" = ", 3)), (*F->v_198)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_203(P413 t_201, rstr *v_202) {
  struct f_copy_code_203fr *F = rt_alloc(sizeof *F);
F->t_201 = t_201;
F->v_202 = v_202;
if ((((*(P413)rt_nil_check(F->t_201)).kind == ((rt_int)15LL)) && ((*(P413)rt_nil_check(F->t_201)).tparams == NULL))) {
F->result_ = f_copy_code_203((*(P413)rt_nil_check(F->t_201)).under, &(*F->v_202));
goto ret_;
}
if (f_composite_195(F->t_201)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_169(F->t_201)), rt_str("(", 1)), (*F->v_202)), rt_str(")", 1));
goto ret_;
}
if (((*(P413)rt_nil_check(F->t_201)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_202)), rt_str(")", 1));
goto ret_;
} else if ((((*(P413)rt_nil_check(F->t_201)).kind == ((rt_int)6LL)) || ((*(P413)rt_nil_check(F->t_201)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_169(F->t_201)), rt_str("(", 1)), (*F->v_202)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_202);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_207(P413 t_204, rstr *a_205, rstr *b_206) {
  struct f_eq_code_207fr *F = rt_alloc(sizeof *F);
F->t_204 = t_204;
F->a_205 = a_205;
F->b_206 = b_206;
if ((((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)15LL)) && ((*(P413)rt_nil_check(F->t_204)).tparams == NULL))) {
F->result_ = f_eq_code_207((*(P413)rt_nil_check(F->t_204)).under, &(*F->a_205), &(*F->b_206));
goto ret_;
}
if (f_composite_195(F->t_204)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_169(F->t_204)), rt_str("(", 1)), (*F->a_205)), rt_str(", ", 2)), (*F->b_206)), rt_str(")", 1));
goto ret_;
}
if (((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_205)), rt_str(", ", 2)), (*F->b_206)), rt_str(")", 1));
goto ret_;
}
if (((((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)12LL)) || ((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)13LL))) || ((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)14LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_205)), rt_str(", ", 2)), (*F->b_206)), rt_str(")", 1));
goto ret_;
} else if ((((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)6LL)) || ((*(P413)rt_nil_check(F->t_204)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_169(F->t_204)), rt_str("(", 1)), (*F->a_205)), rt_str(", ", 2)), (*F->b_206)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_205)), rt_str(" == ", 4)), (*F->b_206)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_211(rstr *lval_208, P413 t_209, rstr *v_210) {
  struct f_elem_assign_211fr *F = rt_alloc(sizeof *F);
F->lval_208 = lval_208;
F->t_209 = t_209;
F->v_210 = v_210;
F->result_ = f_assign_code_200(&(*F->lval_208), F->t_209, &(*F->v_210), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_214(P421 l_212, rstr *s_213) {
  struct f_seen_name_214fr *F = rt_alloc(sizeof *F);
F->l_212 = l_212;
F->s_213 = s_213;
F->p_758 = NULL;
F->p_758 = F->l_212;
while ((F->p_758 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P421)rt_nil_check(F->p_758)).s)), (*F->s_213))) {
F->result_ = 1;
goto ret_;
}
F->p_758 = (*(P421)rt_nil_check(F->p_758)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_215(void) {
  struct f_emit_helpers_215fr *F = rt_alloc(sizeof *F);
F->order_759 = NULL;
F->t_760 = NULL;
F->t_760 = g_all_types_438;
F->done_761 = NULL;
while ((F->t_760 != NULL)) {
if ((f_composite_195(F->t_760) && (!f_seen_name_214(F->done_761, &(*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_760)).cname)))))) {
F->l_762 = NULL;
F->c_763 = rt_str_new(((*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_760)).cname))).len);
rt_str_assign(&F->c_763, (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_760)).cname)));
{ R422 *cell764 = rt_alloc(sizeof(R422));
(*cell764).s = NULL;
(*cell764).next = NULL;
F->l_762 = cell764;
}
(*(P421)rt_nil_check(F->l_762)).s = (*(P413)rt_nil_check(F->t_760)).cname;
(*(P421)rt_nil_check(F->l_762)).next = F->done_761;
F->done_761 = F->l_762;
f_put_25(g_out_helpers_441, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_763), rt_str("(", 1)), F->c_763), rt_str(" *d, ", 5)), F->c_763), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_441, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_763), rt_str(" cp_", 4)), F->c_763), rt_str("(", 1)), F->c_763), rt_str(" s);", 4)); b_; }));
f_put_25(g_out_helpers_441, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_763), rt_str("(", 1)), F->c_763), rt_str(" a, ", 4)), F->c_763), rt_str(" b);", 4)); b_; }));
f_helper_bodies_217(F->t_760);
}
F->t_760 = (*(P413)rt_nil_check(F->t_760)).next;
}
ret_:
  return;
}

static void f_helper_bodies_217(P413 t_216) {
  struct f_helper_bodies_217fr *F = rt_alloc(sizeof *F);
F->t_216 = t_216;
F->c_765 = rt_str_new(((*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_216)).cname))).len);
rt_str_assign(&F->c_765, (*(P404)rt_nil_check((*(P413)rt_nil_check(F->t_216)).cname)));
F->b_766 = NULL;
F->b_766 = g_out_funcs_444;
if (((*(P413)rt_nil_check(F->t_216)).kind == ((rt_int)6LL))) {
F->e_767 = NULL;
F->e_767 = (*(P413)rt_nil_check(F->t_216)).elem;
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" *d, ", 5)), F->c_765), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_16()), rt_str("array length", 12)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_211(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_765), rt_str(" cp_", 4)), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_765), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_169(F->e_767)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_203(F->e_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" a, ", 4)), F->c_765), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_207(F->e_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P413)rt_nil_check(F->t_216)).kind == ((rt_int)15LL))) {
F->p_768 = NULL;
F->p_768 = (*(P413)rt_nil_check(F->t_216)).tparams;
F->pc_769 = NULL;
F->pc_769 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_768 != NULL)) {
F->pc_769 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->pc_769)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_768)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_768)).name)))); b_; }));
F->p_768 = (*(P409)rt_nil_check(F->p_768)).next;
}
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" *d, ", 5)), F->c_765), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P404)rt_nil_check(F->pc_769))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_16()), rt_str("constraint", 10)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_211(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P413)rt_nil_check(F->t_216)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_765), rt_str(" cp_", 4)), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" s) { s.all = ", 14)), f_copy_code_203((*(P413)rt_nil_check(F->t_216)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" a, ", 4)), F->c_765), rt_str(" b) { return ", 13)), f_eq_code_207((*(P413)rt_nil_check(F->t_216)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_770 = NULL;
F->f_770 = (*(P413)rt_nil_check(F->t_216)).fields;
F->conds_771 = NULL;
F->conds_771 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" *d, ", 5)), F->c_765), rt_str(" s) {", 5)); b_; }));
while ((F->f_770 != NULL)) {
F->fn_772 = rt_str_copy(f_lower_s_15(&(*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_770)).name))));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_211(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_772); b_; }), (*(P415)rt_nil_check(F->f_770)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_772); b_; }))); b_; }));
F->f_770 = (*(P415)rt_nil_check(F->f_770)).next;
}
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_765), rt_str(" cp_", 4)), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" s) {", 5)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_765), rt_str(" d = s;", 7)); b_; }));
F->f_770 = (*(P413)rt_nil_check(F->t_216)).fields;
while ((F->f_770 != NULL)) {
F->fn_773 = rt_str_copy(f_lower_s_15(&(*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_770)).name))));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_773), rt_str(" = ", 3)), f_copy_code_203((*(P415)rt_nil_check(F->f_770)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_773); b_; }))), rt_str(";", 1)); b_; }));
F->conds_771 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->conds_771)), rt_str(" && ", 4)), f_eq_code_207((*(P415)rt_nil_check(F->f_770)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_773); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_773); b_; }))); b_; }));
F->f_770 = (*(P415)rt_nil_check(F->f_770)).next;
}
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_765), rt_str("(", 1)), F->c_765), rt_str(" a, ", 4)), F->c_765), rt_str(" b) {", 5)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P404)rt_nil_check(F->conds_771))), rt_str(";", 1)); b_; }));
f_put_25(F->b_766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_219(P409 elems_218) {
  struct f_declare_body_219fr *F = rt_alloc(sizeof *F);
F->elems_218 = elems_218;
F->e_774 = NULL;
F->e_774 = F->elems_218;
while ((F->e_774 != NULL)) {
if ((((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)41LL)) && ((*(P409)rt_nil_check(F->e_774)).flag == ((rt_int)0LL)))) {
f_manifest_const_221(F->e_774);
} else if (((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)47LL))) {
f_gen_capsule_229(F->e_774);
} else if (((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)48LL))) {
f_gen_expose_231(F->e_774);
} else if (((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)49LL))) {
F->y_775 = NULL;
F->y_775 = f_new_sym_152(((rt_int)7LL), (*(P409)rt_nil_check(F->e_774)).name);
(*(P419)rt_nil_check(F->y_775)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_774)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_142(F->y_775, (*(P409)rt_nil_check(F->e_774)).line);
f_put_25(g_out_globals_443, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_775)).cname))), rt_str(";", 1)); b_; }));
f_put_25(g_out_excs_446, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_775)).cname))), rt_str(" = rt_exc(", 10)), f_q_16()), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_774)).name))), f_q_16()), rt_str(");", 2)); b_; }));
} else if (((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)42LL))) {
F->y_776 = NULL;
F->y_776 = f_new_sym_152(((rt_int)6LL), (*(P409)rt_nil_check(F->e_774)).name);
(*(P419)rt_nil_check(F->y_776)).st = (*(P409)rt_nil_check(F->e_774)).a;
f_define_142(F->y_776, (*(P409)rt_nil_check(F->e_774)).line);
} else if (((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)44LL))) {
F->y_777 = NULL;
F->y_777 = f_new_sym_152(((rt_int)5LL), (*(P409)rt_nil_check(F->e_774)).name);
F->t_778 = NULL;
F->t_778 = f_new_typ_154(((rt_int)8LL));
(*(P413)rt_nil_check(F->t_778)).name = (*(P409)rt_nil_check(F->e_774)).name;
(*(P413)rt_nil_check(F->t_778)).decl = F->e_774;
(*(P419)rt_nil_check(F->y_777)).t = F->t_778;
f_define_142(F->y_777, (*(P409)rt_nil_check(F->e_774)).line);
} else if (((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)43LL))) {
F->y_779 = NULL;
F->y_779 = f_new_sym_152(((rt_int)5LL), (*(P409)rt_nil_check(F->e_774)).name);
(*(P419)rt_nil_check(F->y_779)).st = (*(P409)rt_nil_check(F->e_774)).a;
(*(P419)rt_nil_check(F->y_779)).decl = F->e_774;
f_define_142(F->y_779, (*(P409)rt_nil_check(F->e_774)).line);
}
F->e_774 = (*(P409)rt_nil_check(F->e_774)).next;
}
F->e_774 = F->elems_218;
while ((F->e_774 != NULL)) {
if (((((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)45LL)) || ((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)46LL))) || ((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_235(F->e_774);
} else if (((*(P409)rt_nil_check(F->e_774)).kind == ((rt_int)51LL))) {
F->g_780 = NULL;
F->g_780 = f_new_sym_152(((rt_int)10LL), (*(P409)rt_nil_check(F->e_774)).name);
(*(P419)rt_nil_check(F->g_780)).decl = F->e_774;
(*(P419)rt_nil_check(F->g_780)).level = g_cur_level_450;
f_define_142(F->g_780, (*(P409)rt_nil_check(F->e_774)).line);
}
F->e_774 = (*(P409)rt_nil_check(F->e_774)).next;
}
ret_:
  return;
}

static void f_manifest_const_221(P409 d_220) {
  struct f_manifest_const_221fr *F = rt_alloc(sizeof *F);
F->d_220 = d_220;
F->y_783 = NULL;
F->c_784 = NULL;
if (((*(P409)rt_nil_check(F->d_220)).a != NULL)) {
if ((((*(P409)rt_nil_check((*(P409)rt_nil_check(F->d_220)).a)).kind != ((rt_int)70LL)) || ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->d_220)).a)).a != NULL))) {
goto ret_;
}
}
F->v_782 = f_manifest_191((*(P409)rt_nil_check(F->d_220)).b, &F->ok_781);
if ((!F->ok_781)) {
goto ret_;
}
(*(P409)rt_nil_check(F->d_220)).flag = ((rt_int)1LL);
F->y_783 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->d_220)).name);
(*(P419)rt_nil_check(F->y_783)).t = g_ty_int_461;
(*(P419)rt_nil_check(F->y_783)).c = f_new_cons_155();
(*(P419)rt_nil_check(F->y_783)).mvalue = F->v_782;
(*(P419)rt_nil_check(F->y_783)).hasmv = 1;
(*(P419)rt_nil_check(F->y_783)).ro_flag = 1;
(*(P419)rt_nil_check(F->y_783)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_782)), rt_str("LL)", 3)); b_; }));
f_define_142(F->y_783, (*(P409)rt_nil_check(F->d_220)).line);
ret_:
  return;
}

static int f_exported_225(P409 d_222, rstr *name_223, int *ro_224) {
  struct f_exported_225fr *F = rt_alloc(sizeof *F);
F->d_222 = d_222;
F->name_223 = name_223;
F->ro_224 = ro_224;
F->p_785 = NULL;
F->p_785 = (*(P409)rt_nil_check(F->d_222)).a;
(*F->ro_224) = 0;
if (((*(P409)rt_nil_check(F->d_222)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_785 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_785)).name)), (*F->name_223))) {
(*F->ro_224) = ((*(P409)rt_nil_check(F->p_785)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_785 = (*(P409)rt_nil_check(F->p_785)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_copy_sym_227(P419 y_226) {
  struct f_copy_sym_227fr *F = rt_alloc(sizeof *F);
F->y_226 = y_226;
F->z_786 = NULL;
{ R420 *cell787 = rt_alloc(sizeof(R420));
(*cell787).name = NULL;
(*cell787).t = NULL;
(*cell787).c = NULL;
(*cell787).access = NULL;
(*cell787).cname = NULL;
(*cell787).st = NULL;
(*cell787).decl = NULL;
(*cell787).params = NULL;
(*cell787).result = NULL;
(*cell787).members = NULL;
(*cell787).mnext = NULL;
(*cell787).binds = NULL;
(*cell787).insts = NULL;
(*cell787).chain = NULL;
(*cell787).stack = NULL;
F->z_786 = cell787;
}
(*(P419)rt_nil_check(F->z_786)).kind = (*(P419)rt_nil_check(F->y_226)).kind;
(*(P419)rt_nil_check(F->z_786)).name = (*(P419)rt_nil_check(F->y_226)).name;
(*(P419)rt_nil_check(F->z_786)).t = (*(P419)rt_nil_check(F->y_226)).t;
(*(P419)rt_nil_check(F->z_786)).c = (*(P419)rt_nil_check(F->y_226)).c;
(*(P419)rt_nil_check(F->z_786)).access = (*(P419)rt_nil_check(F->y_226)).access;
(*(P419)rt_nil_check(F->z_786)).cname = (*(P419)rt_nil_check(F->y_226)).cname;
(*(P419)rt_nil_check(F->z_786)).ro_flag = (*(P419)rt_nil_check(F->y_226)).ro_flag;
(*(P419)rt_nil_check(F->z_786)).mvalue = (*(P419)rt_nil_check(F->y_226)).mvalue;
(*(P419)rt_nil_check(F->z_786)).hasmv = (*(P419)rt_nil_check(F->y_226)).hasmv;
(*(P419)rt_nil_check(F->z_786)).st = (*(P419)rt_nil_check(F->y_226)).st;
(*(P419)rt_nil_check(F->z_786)).decl = (*(P419)rt_nil_check(F->y_226)).decl;
(*(P419)rt_nil_check(F->z_786)).params = (*(P419)rt_nil_check(F->y_226)).params;
(*(P419)rt_nil_check(F->z_786)).result = (*(P419)rt_nil_check(F->y_226)).result;
(*(P419)rt_nil_check(F->z_786)).level = (*(P419)rt_nil_check(F->y_226)).level;
(*(P419)rt_nil_check(F->z_786)).byref = (*(P419)rt_nil_check(F->y_226)).byref;
(*(P419)rt_nil_check(F->z_786)).members = (*(P419)rt_nil_check(F->y_226)).members;
F->result_ = F->z_786;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_229(P409 d_228) {
  struct f_gen_capsule_229fr *F = rt_alloc(sizeof *F);
F->d_228 = d_228;
F->y_788 = NULL;
F->y_788 = f_new_sym_152(((rt_int)8LL), (*(P409)rt_nil_check(F->d_228)).name);
F->ctx_789 = NULL;
F->m_790 = NULL;
F->p_791 = NULL;
F->p_791 = (*(P409)rt_nil_check(F->d_228)).a;
(*(P419)rt_nil_check(F->y_788)).decl = F->d_228;
f_open_scope_148();
{ R430 *cell793 = rt_alloc(sizeof(R430));
(*cell793).imps = NULL;
(*cell793).next = NULL;
F->ctx_789 = cell793;
}
(*(P429)rt_nil_check(F->ctx_789)).depth = g_depth_436;
(*(P429)rt_nil_check(F->ctx_789)).imps = (*(P409)rt_nil_check(F->d_228)).d;
(*(P429)rt_nil_check(F->ctx_789)).all_imp = ((*(P409)rt_nil_check(F->d_228)).flag >= ((rt_int)2LL));
(*(P429)rt_nil_check(F->ctx_789)).next = g_fctx_451;
g_fctx_451 = F->ctx_789;
f_declare_body_219((*(P409)rt_nil_check(F->d_228)).c);
f_body_elements_256((*(P409)rt_nil_check(F->d_228)).c);
g_fctx_451 = (*(P429)rt_nil_check(g_fctx_451)).next;
F->m_790 = g_scope_stack_437;
while (((F->m_790 != NULL) && ((*(P419)rt_nil_check(F->m_790)).depth == g_depth_436))) {
if (((((((*(P419)rt_nil_check(F->m_790)).kind == ((rt_int)5LL)) && ((*(P419)rt_nil_check(F->m_790)).t == NULL)) && ((*(P419)rt_nil_check(F->m_790)).decl != NULL)) && ((*(P409)rt_nil_check((*(P419)rt_nil_check(F->m_790)).decl)).kind == ((rt_int)43LL))) && ((*(P409)rt_nil_check((*(P419)rt_nil_check(F->m_790)).decl)).b != NULL))) {
(*(P419)rt_nil_check(F->m_790)).t = f_new_type_184(F->m_790, f_nn_46(((rt_int)80LL), (*(P409)rt_nil_check(F->d_228)).line), &(*(P419)rt_nil_check(F->m_790)).c);
} else if (((((*(P419)rt_nil_check(F->m_790)).kind == ((rt_int)5LL)) || ((*(P419)rt_nil_check(F->m_790)).kind == ((rt_int)6LL))) && ((*(P419)rt_nil_check(F->m_790)).t == NULL))) {
(*(P419)rt_nil_check(F->m_790)).t = f_resolve_subtype_180((*(P419)rt_nil_check(F->m_790)).st, &(*(P419)rt_nil_check(F->m_790)).c);
} else if ((((*(P419)rt_nil_check(F->m_790)).kind == ((rt_int)5LL)) && ((*(P413)rt_nil_check((*(P419)rt_nil_check(F->m_790)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_233((*(P419)rt_nil_check(F->m_790)).t);
}
F->m_790 = (*(P419)rt_nil_check(F->m_790)).stack;
}
F->m_790 = g_scope_stack_437;
while (((F->m_790 != NULL) && ((*(P419)rt_nil_check(F->m_790)).depth == g_depth_436))) {
if (f_exported_225(F->d_228, &(*(P404)rt_nil_check((*(P419)rt_nil_check(F->m_790)).name)), &F->ro_792)) {
F->z_794 = NULL;
F->z_794 = f_copy_sym_227(F->m_790);
if (F->ro_792) {
(*(P419)rt_nil_check(F->z_794)).ro_flag = 1;
}
(*(P419)rt_nil_check(F->z_794)).mnext = (*(P419)rt_nil_check(F->y_788)).members;
(*(P419)rt_nil_check(F->y_788)).members = F->z_794;
}
F->m_790 = (*(P419)rt_nil_check(F->m_790)).stack;
}
while ((F->p_791 != NULL)) {
if (((f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_791)).name))) == NULL) || ((*(P419)rt_nil_check(f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_791)).name))))).depth != g_depth_436))) {
f_fail_21((*(P409)rt_nil_check(F->d_228)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_791)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_228)).name))); b_; }));
}
F->p_791 = (*(P409)rt_nil_check(F->p_791)).next;
}
f_close_scope_149();
f_define_142(F->y_788, (*(P409)rt_nil_check(F->d_228)).line);
ret_:
  return;
}

static void f_gen_expose_231(P409 d_230) {
  struct f_gen_expose_231fr *F = rt_alloc(sizeof *F);
F->d_230 = d_230;
F->y_795 = NULL;
F->y_795 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_230)).name)));
F->m_796 = NULL;
F->p_797 = NULL;
F->p_797 = (*(P409)rt_nil_check(F->d_230)).a;
if (((F->y_795 == NULL) || ((*(P419)rt_nil_check(F->y_795)).kind != ((rt_int)8LL)))) {
f_fail_21((*(P409)rt_nil_check(F->d_230)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_230)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P409)rt_nil_check(F->d_230)).ival == ((rt_int)1LL))) {
F->m_796 = (*(P419)rt_nil_check(F->y_795)).members;
while ((F->m_796 != NULL)) {
f_define_142(f_copy_sym_227(F->m_796), (*(P409)rt_nil_check(F->d_230)).line);
F->m_796 = (*(P419)rt_nil_check(F->m_796)).mnext;
}
goto ret_;
}
while ((F->p_797 != NULL)) {
F->found_798 = 0;
F->m_796 = (*(P419)rt_nil_check(F->y_795)).members;
while ((F->m_796 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->m_796)).name)), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_797)).name)))) {
F->z_799 = NULL;
F->z_799 = f_copy_sym_227(F->m_796);
if (((*(P409)rt_nil_check(F->p_797)).ival == ((rt_int)1LL))) {
(*(P419)rt_nil_check(F->z_799)).ro_flag = 1;
}
f_define_142(F->z_799, (*(P409)rt_nil_check(F->d_230)).line);
F->found_798 = 1;
}
F->m_796 = (*(P419)rt_nil_check(F->m_796)).mnext;
}
if ((!F->found_798)) {
f_fail_21((*(P409)rt_nil_check(F->d_230)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_797)).name)), rt_str(" is not exported by ", 20)), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_230)).name))); b_; }));
}
F->p_797 = (*(P409)rt_nil_check(F->p_797)).next;
}
ret_:
  return;
}

static void f_finish_ptr_233(P413 t_232) {
  struct f_finish_ptr_233fr *F = rt_alloc(sizeof *F);
F->t_232 = t_232;
F->d_800 = NULL;
F->d_800 = (*(P413)rt_nil_check(F->t_232)).decl;
F->p_801 = NULL;
F->c_802 = NULL;
F->dummy_803 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_803, rt_str(" ", 1));
if (((*(P413)rt_nil_check(F->t_232)).target != NULL)) {
goto ret_;
}
f_open_scope_148();
F->p_801 = (*(P409)rt_nil_check(F->d_800)).b;
while ((F->p_801 != NULL)) {
F->y_804 = NULL;
F->y_804 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->p_801)).name);
(*(P419)rt_nil_check(F->y_804)).t = g_ty_int_461;
(*(P419)rt_nil_check(F->y_804)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_142(F->y_804, (*(P409)rt_nil_check(F->d_800)).line);
F->p_801 = (*(P409)rt_nil_check(F->p_801)).next;
}
(*(P413)rt_nil_check(F->t_232)).target = f_resolve_subtype_180((*(P409)rt_nil_check(F->d_800)).a, &F->c_802);
f_close_scope_149();
(*rt_str_at(&F->dummy_803, ((rt_int)1LL))) = rt_str_get(f_ctype_169(F->t_232), ((rt_int)1LL));
(*rt_str_at(&F->dummy_803, ((rt_int)1LL))) = rt_str_get(f_ctype_169((*(P413)rt_nil_check(F->t_232)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_235(P409 d_234) {
  struct f_declare_subprogram_235fr *F = rt_alloc(sizeof *F);
F->d_234 = d_234;
f_define_142(f_build_subprogram_237(F->d_234), (*(P409)rt_nil_check(F->d_234)).line);
ret_:
  return;
}

static P419 f_build_subprogram_237(P409 d_236) {
  struct f_build_subprogram_237fr *F = rt_alloc(sizeof *F);
F->d_236 = d_236;
F->y_805 = NULL;
F->p_806 = NULL;
F->p_806 = (*(P409)rt_nil_check(F->d_236)).a;
F->tail_807 = NULL;
if (((*(P409)rt_nil_check(F->d_236)).kind == ((rt_int)46LL))) {
F->y_805 = f_new_sym_152(((rt_int)3LL), (*(P409)rt_nil_check(F->d_236)).name);
} else if (((*(P409)rt_nil_check(F->d_236)).kind == ((rt_int)50LL))) {
F->y_805 = f_new_sym_152(((rt_int)9LL), (*(P409)rt_nil_check(F->d_236)).name);
} else {
F->y_805 = f_new_sym_152(((rt_int)4LL), (*(P409)rt_nil_check(F->d_236)).name);
}
while ((F->p_806 != NULL)) {
F->pm_808 = NULL;
{ R418 *cell809 = rt_alloc(sizeof(R418));
(*cell809).name = NULL;
(*cell809).t = NULL;
(*cell809).c = NULL;
(*cell809).cfield = NULL;
(*cell809).next = NULL;
F->pm_808 = cell809;
}
(*(P417)rt_nil_check(F->pm_808)).name = (*(P409)rt_nil_check(F->p_806)).name;
(*(P417)rt_nil_check(F->pm_808)).mode = (*(P409)rt_nil_check(F->p_806)).ival;
(*(P417)rt_nil_check(F->pm_808)).t = f_resolve_subtype_180((*(P409)rt_nil_check(F->p_806)).a, &(*(P417)rt_nil_check(F->pm_808)).c);
(*(P417)rt_nil_check(F->pm_808)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_806)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_807 == NULL)) {
(*(P419)rt_nil_check(F->y_805)).params = F->pm_808;
} else {
(*(P417)rt_nil_check(F->tail_807)).next = F->pm_808;
}
F->tail_807 = F->pm_808;
F->p_806 = (*(P409)rt_nil_check(F->p_806)).next;
}
(*(P419)rt_nil_check(F->y_805)).result = g_ty_void_466;
if (((*(P409)rt_nil_check(F->d_236)).b != NULL)) {
F->rc_810 = NULL;
(*(P419)rt_nil_check(F->y_805)).result = f_resolve_subtype_180((*(P409)rt_nil_check(F->d_236)).b, &F->rc_810);
}
(*(P419)rt_nil_check(F->y_805)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_324(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_236)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P419)rt_nil_check(F->y_805)).decl = F->d_236;
(*(P419)rt_nil_check(F->y_805)).level = g_cur_level_450;
if (((*(P409)rt_nil_check(F->d_236)).kind == ((rt_int)50LL))) {
f_put_25(g_out_globals_443, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_805)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_805;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_239(P409 e_238) {
  struct f_element_239fr *F = rt_alloc(sizeof *F);
F->e_238 = e_238;
F->k_811 = (*(P409)rt_nil_check(F->e_238)).kind;
if ((((F->k_811 == ((rt_int)45LL)) || (F->k_811 == ((rt_int)46LL))) || (F->k_811 == ((rt_int)50LL)))) {
f_subprogram_251(F->e_238);
} else if (((((((F->k_811 == ((rt_int)49LL)) || (F->k_811 == ((rt_int)42LL))) || (F->k_811 == ((rt_int)43LL))) || (F->k_811 == ((rt_int)47LL))) || (F->k_811 == ((rt_int)48LL))) || (F->k_811 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_811 == ((rt_int)44LL))) {
f_finish_ptr_233((*(P419)rt_nil_check(f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_238)).name))))).t);
} else if ((F->k_811 == ((rt_int)40LL))) {
f_var_decl_247(F->e_238);
} else if (((F->k_811 == ((rt_int)41LL)) && ((*(P409)rt_nil_check(F->e_238)).flag == ((rt_int)0LL)))) {
f_const_decl_249(F->e_238);
} else if ((F->k_811 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_811 == ((rt_int)33LL))) {
F->t_812 = NULL;
F->c_813 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_238)).a, g_ty_bool_462, &F->t_812));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_813), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_265(F->e_238);
}
ret_:
  return;
}

static rstr f_storage_242(rstr *name_240, P413 t_241) {
  struct f_storage_242fr *F = rt_alloc(sizeof *F);
F->name_240 = name_240;
F->t_241 = t_241;
if ((!g_in_func_449)) {
F->g_814 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_240))), rt_str("_", 1)); b_; })));
f_put_25(g_out_globals_443, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_169(F->t_241)), rt_str(" ", 1)), F->g_814), rt_str(";", 1)); b_; }));
g_st_field_452 = f_mk_3(&F->g_814);
F->result_ = F->g_814;
goto ret_;
}
{
F->f_815 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_240)), rt_str("_", 1)); b_; })));
f_put_25(g_fields_buf_448, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_169(F->t_241)), rt_str(" ", 1)), F->f_815), rt_str(";", 1)); b_; }));
g_st_field_452 = f_mk_3(&F->f_815);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_815);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_245(P419 y_243, rstr *access_244) {
  struct f_bind_245fr *F = rt_alloc(sizeof *F);
F->y_243 = y_243;
F->access_244 = access_244;
if (g_in_func_449) {
(*(P419)rt_nil_check(F->y_243)).level = g_cur_level_450;
(*(P419)rt_nil_check(F->y_243)).access = g_st_field_452;
} else {
(*(P419)rt_nil_check(F->y_243)).level = ((rt_int)0LL);
(*(P419)rt_nil_check(F->y_243)).access = f_mk_3(&(*F->access_244));
}
ret_:
  return;
}

static void f_var_decl_247(P409 d_246) {
  struct f_var_decl_247fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->c_816 = NULL;
F->t_817 = NULL;
F->t_817 = f_resolve_subtype_180((*(P409)rt_nil_check(F->d_246)).a, &F->c_816);
F->y_818 = NULL;
F->y_818 = f_new_sym_152(((rt_int)1LL), (*(P409)rt_nil_check(F->d_246)).name);
F->access_819 = rt_str_copy(f_storage_242(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_246)).name)), F->t_817));
f_init_storage_188(&F->access_819, F->t_817, F->c_816);
if (((*(P409)rt_nil_check(F->d_246)).b != NULL)) {
F->vt_820 = NULL;
F->v_821 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->d_246)).b, F->t_817, &F->vt_820));
f_check_type_167(F->vt_820, F->t_817, (*(P409)rt_nil_check(F->d_246)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_200(&F->access_819, F->t_817, &F->v_821, F->c_816); b_; }));
}
(*(P419)rt_nil_check(F->y_818)).t = F->t_817;
(*(P419)rt_nil_check(F->y_818)).c = F->c_816;
f_bind_245(F->y_818, &F->access_819);
f_define_142(F->y_818, (*(P409)rt_nil_check(F->d_246)).line);
ret_:
  return;
}

static void f_const_decl_249(P409 d_248) {
  struct f_const_decl_249fr *F = rt_alloc(sizeof *F);
F->d_248 = d_248;
F->c_822 = NULL;
F->c_822 = f_new_cons_155();
F->t_823 = NULL;
F->vt_824 = NULL;
F->y_825 = NULL;
F->y_825 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->d_248)).name);
if (((*(P409)rt_nil_check(F->d_248)).a != NULL)) {
F->t_823 = f_resolve_subtype_180((*(P409)rt_nil_check(F->d_248)).a, &F->c_822);
}
{
F->v_827 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->d_248)).b, F->t_823, &F->vt_824));
if ((F->t_823 != NULL)) {
f_check_type_167(F->vt_824, F->t_823, (*(P409)rt_nil_check(F->d_248)).line);
} else {
F->t_823 = F->vt_824;
}
if (((*(P413)rt_nil_check(F->t_823)).kind == ((rt_int)1LL))) {
(*(P419)rt_nil_check(F->y_825)).mvalue = f_manifest_191((*(P409)rt_nil_check(F->d_248)).b, &F->ok_826);
(*(P419)rt_nil_check(F->y_825)).hasmv = F->ok_826;
}
{
F->access_828 = rt_str_copy(f_storage_242(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->d_248)).name)), F->t_823));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_828, rt_str(" = ", 3)), f_copy_code_203(F->t_823, &F->v_827)), rt_str(";", 1)); b_; }));
f_bind_245(F->y_825, &F->access_828);
}
}
(*(P419)rt_nil_check(F->y_825)).t = F->t_823;
(*(P419)rt_nil_check(F->y_825)).c = F->c_822;
(*(P419)rt_nil_check(F->y_825)).ro_flag = 1;
f_define_142(F->y_825, (*(P409)rt_nil_check(F->d_248)).line);
ret_:
  return;
}

static void f_subprogram_251(P409 d_250) {
  struct f_subprogram_251fr *F = rt_alloc(sizeof *F);
F->d_250 = d_250;
f_gen_subprogram_254(F->d_250, f_lookup_decl_139(F->d_250));
ret_:
  return;
}

static void f_gen_subprogram_254(P409 d_252, P419 y_253) {
  struct f_gen_subprogram_254fr *F = rt_alloc(sizeof *F);
F->d_252 = d_252;
F->y_253 = y_253;
F->saved_code_829 = NULL;
F->saved_code_829 = g_code_447;
F->saved_fields_830 = NULL;
F->saved_fields_830 = g_fields_buf_448;
F->saved_in_831 = g_in_func_449;
F->saved_sym_832 = NULL;
F->saved_sym_832 = g_func_sym_454;
F->saved_exits_833 = NULL;
F->saved_exits_833 = g_exits_455;
F->saved_frames_834 = g_frames_456;
F->args_835 = NULL;
F->args_835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_836 = NULL;
F->pm_836 = (*(P419)rt_nil_check(F->y_253)).params;
F->saved_handlers_837 = NULL;
F->saved_handlers_837 = g_handlers_457;
F->saved_cleanups_838 = NULL;
F->saved_cleanups_838 = g_cleanups_458;
F->ctx_839 = NULL;
F->head_840 = NULL;
F->frame_841 = NULL;
F->frame_841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_253)).cname)), rt_str("fr", 2)); b_; }));
F->parent_842 = NULL;
if (g_in_func_449) {
F->parent_842 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P419)rt_nil_check(g_func_sym_454)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_447 = f_new_buffer_22();
g_fields_buf_448 = f_new_buffer_22();
g_in_func_449 = 1;
g_func_sym_454 = F->y_253;
g_exits_455 = NULL;
g_frames_456 = ((rt_int)0LL);
g_handlers_457 = NULL;
g_cleanups_458 = NULL;
g_cur_level_450 = rt_add(g_cur_level_450, ((rt_int)1LL));
f_open_scope_148();
{ R430 *cell843 = rt_alloc(sizeof(R430));
(*cell843).imps = NULL;
(*cell843).next = NULL;
F->ctx_839 = cell843;
}
(*(P429)rt_nil_check(F->ctx_839)).depth = g_depth_436;
(*(P429)rt_nil_check(F->ctx_839)).imps = (*(P409)rt_nil_check(F->d_252)).d;
(*(P429)rt_nil_check(F->ctx_839)).all_imp = ((*(P409)rt_nil_check(F->d_252)).flag >= ((rt_int)2LL));
(*(P429)rt_nil_check(F->ctx_839)).next = g_fctx_451;
g_fctx_451 = F->ctx_839;
if ((F->parent_842 != NULL)) {
f_put_25(g_fields_buf_448, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P404)rt_nil_check(F->parent_842))), rt_str(" *up;", 5)); b_; }));
if (((*(P419)rt_nil_check(F->y_253)).kind != ((rt_int)9LL))) {
F->args_835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P404)rt_nil_check(F->parent_842))), rt_str(" *up_", 5)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_836 != NULL)) {
F->ct_844 = rt_str_copy(f_ctype_169((*(P417)rt_nil_check(F->pm_836)).t));
F->f_845 = rt_str_copy((*(P404)rt_nil_check((*(P417)rt_nil_check(F->pm_836)).cfield)));
F->p_846 = NULL;
if ((((*(P404)rt_nil_check(F->args_835))).len > ((rt_int)0LL))) {
F->args_835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->args_835)), rt_str(", ", 2)); b_; }));
}
if (((*(P417)rt_nil_check(F->pm_836)).mode == ((rt_int)1LL))) {
F->p_846 = f_new_sym_152(((rt_int)2LL), (*(P417)rt_nil_check(F->pm_836)).name);
f_put_25(g_fields_buf_448, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_844), rt_str(" ", 1)), F->f_845), rt_str(";", 1)); b_; }));
F->args_835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->args_835)), F->ct_844), rt_str(" ", 1)), F->f_845); b_; }));
(*(P419)rt_nil_check(F->p_846)).access = f_mk_3(&F->f_845);
if (((*(P419)rt_nil_check(F->y_253)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_845), rt_str(" = ", 3)), f_copy_code_203((*(P417)rt_nil_check(F->pm_836)).t, &F->f_845)), rt_str(";", 1)); b_; }));
}
} else {
F->p_846 = f_new_sym_152(((rt_int)1LL), (*(P417)rt_nil_check(F->pm_836)).name);
f_put_25(g_fields_buf_448, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_844), rt_str(" *", 2)), F->f_845), rt_str(";", 1)); b_; }));
F->args_835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->args_835)), F->ct_844), rt_str(" *", 2)), F->f_845); b_; }));
(*(P419)rt_nil_check(F->p_846)).access = f_mk_3(&F->f_845);
(*(P419)rt_nil_check(F->p_846)).byref = 1;
if (((*(P419)rt_nil_check(F->y_253)).kind != ((rt_int)9LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_845), rt_str(" = ", 3)), F->f_845), rt_str(";", 1)); b_; }));
}
}
(*(P419)rt_nil_check(F->p_846)).t = (*(P417)rt_nil_check(F->pm_836)).t;
(*(P419)rt_nil_check(F->p_846)).c = (*(P417)rt_nil_check(F->pm_836)).c;
(*(P419)rt_nil_check(F->p_846)).level = g_cur_level_450;
(*(P419)rt_nil_check(F->p_846)).ro_flag = (((*(P417)rt_nil_check(F->pm_836)).mode == ((rt_int)1LL)) || ((*(P417)rt_nil_check(F->pm_836)).mode == ((rt_int)4LL)));
f_define_142(F->p_846, (*(P409)rt_nil_check(F->d_252)).line);
F->pm_836 = (*(P417)rt_nil_check(F->pm_836)).next;
}
if (((*(P413)rt_nil_check((*(P419)rt_nil_check(F->y_253)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_fields_buf_448, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_169((*(P419)rt_nil_check(F->y_253)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_219((*(P409)rt_nil_check(F->d_252)).c);
f_body_elements_256((*(P409)rt_nil_check(F->d_252)).c);
f_close_scope_149();
g_fctx_451 = (*(P429)rt_nil_check(g_fctx_451)).next;
g_cur_level_450 = rt_sub(g_cur_level_450, ((rt_int)1LL));
if (((((*(P404)rt_nil_check(F->args_835))).len == ((rt_int)0LL)) || ((*(P419)rt_nil_check(F->y_253)).kind == ((rt_int)9LL)))) {
F->args_835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P419)rt_nil_check(F->y_253)).kind == ((rt_int)9LL))) {
F->args_835 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_840 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_169((*(P419)rt_nil_check(F->y_253)).result)), rt_str(" ", 1)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_253)).cname))), rt_str("(", 1)), (*(P404)rt_nil_check(F->args_835))), rt_str(")", 1)); b_; }));
f_put_25(g_out_protos_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->head_840)), rt_str(";", 1)); b_; }));
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->head_840)), rt_str(" {", 2)); b_; }));
f_put_25(g_out_frames_453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P404)rt_nil_check(F->frame_841))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_32(g_out_frames_453, g_fields_buf_448);
f_put_25(g_out_frames_453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P419)rt_nil_check(F->y_253)).kind == ((rt_int)9LL))) {
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P404)rt_nil_check(F->frame_841))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P404)rt_nil_check(F->frame_841))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_32(g_out_funcs_444, g_code_447);
if (((*(P413)rt_nil_check((*(P419)rt_nil_check(F->y_253)).result)).kind != ((rt_int)9LL))) {
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_16()), rt_str("function ended without RETURN", 29)), f_q_16()), rt_str(");", 2)); b_; }));
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_25(g_out_funcs_444, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_447 = F->saved_code_829;
g_fields_buf_448 = F->saved_fields_830;
g_in_func_449 = F->saved_in_831;
g_func_sym_454 = F->saved_sym_832;
g_exits_455 = F->saved_exits_833;
g_frames_456 = F->saved_frames_834;
g_handlers_457 = F->saved_handlers_837;
g_cleanups_458 = F->saved_cleanups_838;
ret_:
  return;
}

static void f_body_elements_256(P409 elems_255) {
  struct f_body_elements_256fr *F = rt_alloc(sizeof *F);
F->elems_255 = elems_255;
F->e_847 = NULL;
F->e_847 = F->elems_255;
while ((F->e_847 != NULL)) {
f_element_239(F->e_847);
F->e_847 = (*(P409)rt_nil_check(F->e_847)).next;
}
F->e_847 = F->elems_255;
while ((F->e_847 != NULL)) {
if (((*(P409)rt_nil_check(F->e_847)).kind == ((rt_int)50LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_await_decl(&", 15), (*(P404)rt_nil_check((*(P419)rt_nil_check(f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_847)).name))))).cname))), rt_str("decl);", 6)); b_; }));
}
F->e_847 = (*(P409)rt_nil_check(F->e_847)).next;
}
ret_:
  return;
}

static void f_gen_body_258(P409 elems_257) {
  struct f_gen_body_258fr *F = rt_alloc(sizeof *F);
F->elems_257 = elems_257;
f_open_scope_148();
f_declare_body_219(F->elems_257);
f_body_elements_256(F->elems_257);
f_close_scope_149();
ret_:
  return;
}

static void f_pop_frames_260(rt_int upto_259) {
  struct f_pop_frames_260fr *F = rt_alloc(sizeof *F);
F->upto_259 = upto_259;
F->i_848 = g_frames_456;
F->c_849 = NULL;
F->c_849 = g_cleanups_458;
while ((F->i_848 > F->upto_259)) {
f_emit_27(&(*(P404)rt_nil_check((*(P421)rt_nil_check(F->c_849)).s)));
F->c_849 = (*(P421)rt_nil_check(F->c_849)).next;
F->i_848 = rt_sub(F->i_848, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_262(rstr *s_261) {
  struct f_push_cleanup_262fr *F = rt_alloc(sizeof *F);
F->s_261 = s_261;
F->c_850 = NULL;
{ R422 *cell851 = rt_alloc(sizeof(R422));
(*cell851).s = NULL;
(*cell851).next = NULL;
F->c_850 = cell851;
}
(*(P421)rt_nil_check(F->c_850)).s = f_mk_3(&(*F->s_261));
(*(P421)rt_nil_check(F->c_850)).next = g_cleanups_458;
g_cleanups_458 = F->c_850;
g_frames_456 = rt_add(g_frames_456, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_263(void) {
  struct f_pop_cleanup_263fr *F = rt_alloc(sizeof *F);
g_cleanups_458 = (*(P421)rt_nil_check(g_cleanups_458)).next;
g_frames_456 = rt_sub(g_frames_456, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_265(P409 s_264) {
  struct f_gen_statement_265fr *F = rt_alloc(sizeof *F);
F->s_264 = s_264;
F->label_852 = NULL;
if (((*(P409)rt_nil_check(F->s_264)).tag != NULL)) {
F->x_853 = NULL;
{ R428 *cell854 = rt_alloc(sizeof(R428));
(*cell854).match = NULL;
(*cell854).label = NULL;
(*cell854).next = NULL;
F->x_853 = cell854;
}
F->label_852 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P427)rt_nil_check(F->x_853)).match = (*(P409)rt_nil_check(F->s_264)).tag;
(*(P427)rt_nil_check(F->x_853)).label = F->label_852;
(*(P427)rt_nil_check(F->x_853)).depth = g_frames_456;
(*(P427)rt_nil_check(F->x_853)).next = g_exits_455;
g_exits_455 = F->x_853;
}
{ rt_int sel855 = (*(P409)rt_nil_check(F->s_264)).kind;
if (0 || (sel855 == ((rt_int)20LL))) {
f_st_assign_267(F->s_264);
} else if (0 || (sel855 == ((rt_int)21LL))) {
f_st_call_269(F->s_264);
} else if (0 || (sel855 == ((rt_int)22LL))) {
f_st_if_271(F->s_264);
} else if (0 || (sel855 == ((rt_int)23LL))) {
f_st_case_273(F->s_264);
} else if (0 || (sel855 == ((rt_int)24LL))) {
f_st_repeat_275(F->s_264);
} else if (0 || (sel855 == ((rt_int)25LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_258((*(P409)rt_nil_check(F->s_264)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel855 == ((rt_int)27LL))) {
f_st_exit_277(F->s_264);
} else if (0 || (sel855 == ((rt_int)28LL))) {
f_st_return_279(F->s_264);
} else if (0 || (sel855 == ((rt_int)30LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_282(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->s_264)).name)), (*(P409)rt_nil_check(F->s_264)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel855 == ((rt_int)31LL))) {
if ((g_handlers_457 == NULL)) {
f_fail_21((*(P409)rt_nil_check(F->s_264)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P404)rt_nil_check((*(P421)rt_nil_check(g_handlers_457)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel855 == ((rt_int)26LL))) {
f_st_guard_284(F->s_264);
} else if (0 || (sel855 == ((rt_int)32LL))) {
f_st_alloc_286(F->s_264);
} else if (0 || (sel855 == ((rt_int)34LL))) {
f_st_create_290(F->s_264);
} else if (0 || (sel855 == ((rt_int)35LL))) {
f_st_wait_296(F->s_264);
} else if (0 || (sel855 == ((rt_int)36LL))) {
f_st_region_298(F->s_264);
} else {
f_fail_21((*(P409)rt_nil_check(F->s_264)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P409)rt_nil_check(F->s_264)).tag != NULL)) {
g_exits_455 = (*(P427)rt_nil_check(g_exits_455)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->label_852)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_267(P409 s_266) {
  struct f_st_assign_267fr *F = rt_alloc(sizeof *F);
F->s_266 = s_266;
F->lv_856 = NULL;
F->t_857 = NULL;
F->vt_858 = NULL;
F->c_859 = NULL;
if (((((*(P409)rt_nil_check((*(P409)rt_nil_check(F->s_266)).a)).kind == ((rt_int)10LL)) && ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->s_266)).a)).b != NULL)) && ((*(P409)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->s_266)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_335((*(P409)rt_nil_check((*(P409)rt_nil_check(F->s_266)).a)).a, &F->lv_856, &F->t_857, &F->c_859, &F->ro_860);
if ((F->ro_860 || ((*(P413)rt_nil_check(F->t_857)).kind != ((rt_int)5LL)))) {
f_fail_21((*(P409)rt_nil_check(F->s_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_861 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->s_266)).a)).b)).a, g_ty_int_461, &F->vt_858));
F->hi_862 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->s_266)).a)).b)).b, g_ty_int_461, &F->vt_858));
F->v_863 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->s_266)).b, g_ty_string_465, &F->vt_858));
f_check_type_167(F->vt_858, g_ty_string_465, (*(P409)rt_nil_check(F->s_266)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P404)rt_nil_check(F->lv_856))), rt_str(", ", 2)), F->lo_861), rt_str(", ", 2)), F->hi_862), rt_str(", ", 2)), F->v_863), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_335((*(P409)rt_nil_check(F->s_266)).a, &F->lv_856, &F->t_857, &F->c_859, &F->ro_860);
if (F->ro_860) {
f_fail_21((*(P409)rt_nil_check(F->s_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
{
F->v_864 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->s_266)).b, F->t_857, &F->vt_858));
f_check_type_167(F->vt_858, F->t_857, (*(P409)rt_nil_check(F->s_266)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_200(&(*(P404)rt_nil_check(F->lv_856)), F->t_857, &F->v_864, F->c_859); b_; }));
}
ret_:
  return;
}

static void f_st_call_269(P409 s_268) {
  struct f_st_call_269fr *F = rt_alloc(sizeof *F);
F->s_268 = s_268;
F->c_865 = NULL;
F->c_865 = (*(P409)rt_nil_check(F->s_268)).a;
F->t_866 = NULL;
if ((((*(P409)rt_nil_check(F->c_865)).kind == ((rt_int)7LL)) || ((*(P409)rt_nil_check(F->c_865)).kind == ((rt_int)12LL)))) {
F->x_867 = NULL;
F->x_867 = f_nn_46(((rt_int)10LL), (*(P409)rt_nil_check(F->c_865)).line);
(*(P409)rt_nil_check(F->x_867)).a = F->c_865;
F->c_865 = F->x_867;
}
if (((*(P409)rt_nil_check(F->c_865)).kind != ((rt_int)10LL))) {
f_fail_21((*(P409)rt_nil_check(F->s_268)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_393(F->c_865, 1, &F->t_866), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_271(P409 s_270) {
  struct f_st_if_271fr *F = rt_alloc(sizeof *F);
F->s_270 = s_270;
F->a_868 = NULL;
F->a_868 = (*(P409)rt_nil_check(F->s_270)).a;
F->first_869 = 1;
F->t_870 = NULL;
while ((F->a_868 != NULL)) {
F->c_871 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->a_868)).a, g_ty_bool_462, &F->t_870));
f_check_type_167(F->t_870, g_ty_bool_462, (*(P409)rt_nil_check(F->s_270)).line);
if (F->first_869) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_871), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_871), rt_str(") {", 3)); b_; }));
}
F->first_869 = 0;
f_gen_body_258((*(P409)rt_nil_check(F->a_868)).b);
F->a_868 = (*(P409)rt_nil_check(F->a_868)).next;
}
if (((*(P409)rt_nil_check(F->s_270)).flag == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_258((*(P409)rt_nil_check(F->s_270)).b);
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_273(P409 s_272) {
  struct f_st_case_273fr *F = rt_alloc(sizeof *F);
F->s_272 = s_272;
F->st_872 = NULL;
F->vt_873 = NULL;
F->first_874 = 1;
F->a_875 = NULL;
F->a_875 = (*(P409)rt_nil_check(F->s_272)).b;
F->sel_876 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->s_272)).a, NULL, &F->st_872));
F->tmp_877 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_169(F->st_872)), rt_str(" ", 1)), F->tmp_877), rt_str(" = ", 3)), F->sel_876), rt_str(";", 1)); b_; }));
while ((F->a_875 != NULL)) {
F->lab_878 = NULL;
F->lab_878 = (*(P409)rt_nil_check(F->a_875)).a;
F->conds_879 = NULL;
F->conds_879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_878 != NULL)) {
if (((*(P409)rt_nil_check(F->lab_878)).b == NULL)) {
F->v_880 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->lab_878)).a, F->st_872, &F->vt_873));
f_check_type_167(F->vt_873, F->st_872, (*(P409)rt_nil_check(F->s_272)).line);
F->conds_879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->conds_879)), rt_str(" || ", 4)), f_eq_code_207(F->st_872, &F->tmp_877, &F->v_880)); b_; }));
} else {
F->lo_881 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->lab_878)).a, F->st_872, &F->vt_873));
F->hi_882 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->lab_878)).b, F->st_872, &F->vt_873));
F->conds_879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->conds_879)), rt_str(" || (", 5)), F->tmp_877), rt_str(" >= ", 4)), F->lo_881), rt_str(" && ", 4)), F->tmp_877), rt_str(" <= ", 4)), F->hi_882), rt_str(")", 1)); b_; }));
}
F->lab_878 = (*(P409)rt_nil_check(F->lab_878)).next;
}
if (F->first_874) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P404)rt_nil_check(F->conds_879))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P404)rt_nil_check(F->conds_879))), rt_str(") {", 3)); b_; }));
}
F->first_874 = 0;
f_gen_body_258((*(P409)rt_nil_check(F->a_875)).b);
F->a_875 = (*(P409)rt_nil_check(F->a_875)).next;
}
if (F->first_874) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P409)rt_nil_check(F->s_272)).flag == ((rt_int)1LL))) {
f_gen_body_258((*(P409)rt_nil_check(F->s_272)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_275(P409 s_274) {
  struct f_st_repeat_275fr *F = rt_alloc(sizeof *F);
F->s_274 = s_274;
F->t_883 = NULL;
F->c_884 = NULL;
if (((*(P409)rt_nil_check(F->s_274)).flag == ((rt_int)0LL))) {
F->cond_885 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->s_274)).a, g_ty_bool_462, &F->t_883));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_885), rt_str(") {", 3)); b_; }));
f_gen_body_258((*(P409)rt_nil_check(F->s_274)).b);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_883 = f_resolve_subtype_180((*(P409)rt_nil_check(F->s_274)).a, &F->c_884);
if ((((*(P413)rt_nil_check(F->t_883)).kind == ((rt_int)4LL)) && ((*(P411)rt_nil_check(F->c_884)).lo == NULL))) {
(*(P411)rt_nil_check(F->c_884)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P411)rt_nil_check(F->c_884)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_52((*(P413)rt_nil_check(F->t_883)).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P411)rt_nil_check(F->c_884)).lo == NULL)) {
f_fail_21((*(P409)rt_nil_check(F->s_274)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_886 = rt_str_copy(f_storage_242(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->s_274)).name)), F->t_883));
F->lov_887 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_888 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_889 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_890 = NULL;
F->y_890 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->s_274)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_887), rt_str(" = ", 3)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_884)).lo))), rt_str(", ", 2)), F->hiv_888), rt_str(" = ", 3)), (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_884)).hi))), rt_str(";", 1)); b_; }));
if (((*(P409)rt_nil_check(F->s_274)).ival == ((rt_int)1LL))) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_889), rt_str(" = ", 3)), F->hiv_888), rt_str("; ", 2)), F->it_889), rt_str(" >= ", 4)), F->lov_887), rt_str("; ", 2)), F->it_889), rt_str("--) {", 5)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_889), rt_str(" = ", 3)), F->lov_887), rt_str("; ", 2)), F->it_889), rt_str(" <= ", 4)), F->hiv_888), rt_str("; ", 2)), F->it_889), rt_str("++) {", 5)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_886, rt_str(" = ", 3)), F->it_889), rt_str(";", 1)); b_; }));
f_open_scope_148();
(*(P419)rt_nil_check(F->y_890)).t = F->t_883;
(*(P419)rt_nil_check(F->y_890)).c = F->c_884;
f_bind_245(F->y_890, &F->access_886);
(*(P419)rt_nil_check(F->y_890)).ro_flag = 1;
f_define_142(F->y_890, (*(P409)rt_nil_check(F->s_274)).line);
f_gen_body_258((*(P409)rt_nil_check(F->s_274)).b);
f_close_scope_149();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_277(P409 s_276) {
  struct f_st_exit_277fr *F = rt_alloc(sizeof *F);
F->s_276 = s_276;
F->x_891 = NULL;
F->x_891 = g_exits_455;
while ((F->x_891 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P427)rt_nil_check(F->x_891)).match)), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->s_276)).name)))) {
f_pop_frames_260((*(P427)rt_nil_check(F->x_891)).depth);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P404)rt_nil_check((*(P427)rt_nil_check(F->x_891)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_891 = (*(P427)rt_nil_check(F->x_891)).next;
}
f_fail_21((*(P409)rt_nil_check(F->s_276)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->s_276)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_279(P409 s_278) {
  struct f_st_return_279fr *F = rt_alloc(sizeof *F);
F->s_278 = s_278;
F->vt_892 = NULL;
if ((!g_in_func_449)) {
f_pop_frames_260(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P413)rt_nil_check((*(P419)rt_nil_check(g_func_sym_454)).result)).kind == ((rt_int)9LL))) {
if (((*(P409)rt_nil_check(F->s_278)).a != NULL)) {
f_fail_21((*(P409)rt_nil_check(F->s_278)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_260(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P409)rt_nil_check(F->s_278)).a == NULL)) {
f_fail_21((*(P409)rt_nil_check(F->s_278)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_893 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->s_278)).a, (*(P419)rt_nil_check(g_func_sym_454)).result, &F->vt_892));
f_check_type_167(F->vt_892, (*(P419)rt_nil_check(g_func_sym_454)).result, (*(P409)rt_nil_check(F->s_278)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_893), rt_str(";", 1)); b_; }));
f_pop_frames_260(((rt_int)0LL));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_282(rstr *name_280, rt_int line_281) {
  struct f_exc_id_282fr *F = rt_alloc(sizeof *F);
F->name_280 = name_280;
F->line_281 = line_281;
F->y_894 = NULL;
F->y_894 = f_lookup_137(&(*F->name_280));
if (((F->y_894 != NULL) && ((*(P419)rt_nil_check(F->y_894)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_894)).cname));
goto ret_;
}
if (((((*F->name_280)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_280), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_16()), (*F->name_280)), f_q_16()), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_281, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_280), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_284(P409 s_283) {
  struct f_st_guard_284fr *F = rt_alloc(sizeof *F);
F->s_283 = s_283;
F->h_895 = NULL;
F->h_895 = (*(P409)rt_nil_check(F->s_283)).b;
F->first_896 = 1;
F->hv_897 = NULL;
{
F->f_898 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_899 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_898), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_898), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_898), rt_str(")) {", 4)); b_; }));
f_gen_body_258((*(P409)rt_nil_check(F->s_283)).a);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_898), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_263();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_898), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_899), rt_str(" = rt_xcur;", 11)); b_; }));
{ R422 *cell900 = rt_alloc(sizeof(R422));
(*cell900).s = NULL;
(*cell900).next = NULL;
F->hv_897 = cell900;
}
(*(P421)rt_nil_check(F->hv_897)).s = f_mk_3(&F->x_899);
(*(P421)rt_nil_check(F->hv_897)).next = g_handlers_457;
g_handlers_457 = F->hv_897;
while ((F->h_895 != NULL)) {
F->n_901 = NULL;
F->n_901 = (*(P409)rt_nil_check(F->h_895)).a;
F->conds_902 = NULL;
F->conds_902 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_901 != NULL)) {
F->conds_902 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->conds_902)), rt_str(" || ", 4)), F->x_899), rt_str(" == ", 4)), f_exc_id_282(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->n_901)).name)), (*(P409)rt_nil_check(F->s_283)).line)); b_; }));
F->n_901 = (*(P409)rt_nil_check(F->n_901)).next;
}
if (F->first_896) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P404)rt_nil_check(F->conds_902))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P404)rt_nil_check(F->conds_902))), rt_str(") {", 3)); b_; }));
}
F->first_896 = 0;
f_gen_body_258((*(P409)rt_nil_check(F->h_895)).b);
F->h_895 = (*(P409)rt_nil_check(F->h_895)).next;
}
if (F->first_896) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P409)rt_nil_check(F->s_283)).flag == ((rt_int)1LL))) {
f_gen_body_258((*(P409)rt_nil_check(F->s_283)).c);
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_899), rt_str(");", 2)); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_457 = (*(P421)rt_nil_check(g_handlers_457)).next;
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_286(P409 s_285) {
  struct f_st_alloc_286fr *F = rt_alloc(sizeof *F);
F->s_285 = s_285;
F->lv_903 = NULL;
F->t_904 = NULL;
F->target_905 = NULL;
F->vt_906 = NULL;
F->c_907 = NULL;
F->tc_908 = NULL;
F->d_910 = NULL;
F->p_911 = NULL;
F->a_912 = NULL;
f_lvalue_335((*(P409)rt_nil_check(F->s_285)).a, &F->lv_903, &F->t_904, &F->c_907, &F->ro_909);
if (((*(P413)rt_nil_check(F->t_904)).kind != ((rt_int)8LL))) {
f_fail_21((*(P409)rt_nil_check(F->s_285)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_233(F->t_904);
F->d_910 = (*(P413)rt_nil_check(F->t_904)).decl;
F->target_905 = (*(P413)rt_nil_check(F->t_904)).target;
if ((f_list_len_52((*(P409)rt_nil_check(F->s_285)).b) != f_list_len_52((*(P409)rt_nil_check(F->d_910)).b))) {
f_fail_21((*(P409)rt_nil_check(F->s_285)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_52((*(P409)rt_nil_check(F->d_910)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_913 = rt_str_copy(f_ctype_169(F->target_905));
F->cell_914 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_913), rt_str(" *", 2)), F->cell_914), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_913), rt_str("));", 3)); b_; }));
f_open_scope_148();
F->p_911 = (*(P409)rt_nil_check(F->d_910)).b;
F->a_912 = (*(P409)rt_nil_check(F->s_285)).b;
while ((F->p_911 != NULL)) {
F->v_915 = rt_str_copy(f_gexpr_356(F->a_912, g_ty_int_461, &F->vt_906));
F->pv_916 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_917 = NULL;
F->y_917 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->p_911)).name);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_916), rt_str(" = ", 3)), F->v_915), rt_str(";", 1)); b_; }));
(*(P419)rt_nil_check(F->y_917)).t = g_ty_int_461;
(*(P419)rt_nil_check(F->y_917)).access = f_mk_3(&F->pv_916);
f_define_142(F->y_917, (*(P409)rt_nil_check(F->s_285)).line);
F->p_911 = (*(P409)rt_nil_check(F->p_911)).next;
F->a_912 = (*(P409)rt_nil_check(F->a_912)).next;
}
F->vt_906 = f_resolve_subtype_180((*(P409)rt_nil_check(F->d_910)).a, &F->tc_908);
f_init_storage_188(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_914), rt_str(")", 1)); b_; }), F->target_905, F->tc_908);
f_close_scope_149();
if (((*(P409)rt_nil_check(F->s_285)).c != NULL)) {
F->v_918 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->s_285)).c, F->target_905, &F->vt_906));
f_check_type_167(F->vt_906, F->target_905, (*(P409)rt_nil_check(F->s_285)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_200(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_914), rt_str(")", 1)); b_; }), F->target_905, &F->v_918, F->tc_908); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->lv_903)), rt_str(" = ", 3)), F->cell_914), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_288(P409 e_287) {
  struct f_act_ref_288fr *F = rt_alloc(sizeof *F);
F->e_287 = e_287;
F->lv_919 = NULL;
F->t_920 = NULL;
F->c_921 = NULL;
if (((((*(P409)rt_nil_check(F->e_287)).kind == ((rt_int)7LL)) && rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_287)).name)), rt_str("ME", 2))) && (f_lookup_137(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_335(F->e_287, &F->lv_919, &F->t_920, &F->c_921, &F->ro_922);
if (((*(P413)rt_nil_check(F->t_920)).kind != ((rt_int)14LL))) {
f_fail_21((*(P409)rt_nil_check(F->e_287)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P404)rt_nil_check(F->lv_919)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_290(P409 s_289) {
  struct f_st_create_290fr *F = rt_alloc(sizeof *F);
F->s_289 = s_289;
F->y_923 = NULL;
F->y_923 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->s_289)).name)));
F->pm_924 = NULL;
F->a_925 = NULL;
F->a_925 = (*(P409)rt_nil_check(F->s_289)).b;
F->lv_926 = NULL;
F->lt_927 = NULL;
F->vt_928 = NULL;
F->lc_929 = NULL;
if (((F->y_923 != NULL) && ((*(P419)rt_nil_check(F->y_923)).kind == ((rt_int)10LL)))) {
F->y_923 = f_instantiate_314(F->y_923, (*(P409)rt_nil_check(F->s_289)).e, (*(P409)rt_nil_check(F->s_289)).b, (*(P409)rt_nil_check(F->s_289)).line);
}
if (((F->y_923 == NULL) || ((*(P419)rt_nil_check(F->y_923)).kind != ((rt_int)9LL)))) {
f_fail_21((*(P409)rt_nil_check(F->s_289)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->s_289)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_924 = (*(P419)rt_nil_check(F->y_923)).params;
{
F->nf_931 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_932 = rt_str_copy(f_act_ref_288((*(P409)rt_nil_check(F->s_289)).a));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_923)).cname))), rt_str("fr *", 4)), F->nf_931), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_931), rt_str(");", 2)); b_; }));
if (((*(P419)rt_nil_check(F->y_923)).level > ((rt_int)0LL))) {
F->link_933 = NULL;
F->link_933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo935 = ((rt_int)1LL), hi936 = rt_sub(g_cur_level_450, (*(P419)rt_nil_check(F->y_923)).level);
for (rt_int it937 = lo935; it937 <= hi936; it937++) {
F->i_934 = it937;
F->link_933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->link_933)), rt_str("->up", 4)); b_; }));
}
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_931, rt_str("->up = ", 7)), (*(P404)rt_nil_check(F->link_933))), rt_str(";", 1)); b_; }));
}
while (((F->a_925 != NULL) && (F->pm_924 != NULL))) {
if (((*(P417)rt_nil_check(F->pm_924)).mode == ((rt_int)1LL))) {
F->v_938 = rt_str_copy(f_gexpr_356(F->a_925, (*(P417)rt_nil_check(F->pm_924)).t, &F->vt_928));
f_check_type_167(F->vt_928, (*(P417)rt_nil_check(F->pm_924)).t, (*(P409)rt_nil_check(F->s_289)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_931, rt_str("->", 2)), (*(P404)rt_nil_check((*(P417)rt_nil_check(F->pm_924)).cfield))), rt_str(" = ", 3)), f_copy_code_203((*(P417)rt_nil_check(F->pm_924)).t, &F->v_938)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_335(F->a_925, &F->lv_926, &F->lt_927, &F->lc_929, &F->ro_930);
f_check_type_167(F->lt_927, (*(P417)rt_nil_check(F->pm_924)).t, (*(P409)rt_nil_check(F->s_289)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_931, rt_str("->", 2)), (*(P404)rt_nil_check((*(P417)rt_nil_check(F->pm_924)).cfield))), rt_str(" = &", 4)), (*(P404)rt_nil_check(F->lv_926))), rt_str(";", 1)); b_; }));
}
F->a_925 = (*(P409)rt_nil_check(F->a_925)).next;
F->pm_924 = (*(P417)rt_nil_check(F->pm_924)).next;
}
if (((F->a_925 != NULL) || (F->pm_924 != NULL))) {
f_fail_21((*(P409)rt_nil_check(F->s_289)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->s_289)).name))); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_932), rt_str(", &", 3)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_923)).cname))), rt_str("decl, ", 6)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_923)).cname))), rt_str(", ", 2)), F->nf_931), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_294(P409 inv_291, rstr *arr_292, rt_int i_293) {
  struct f_wait_alt_294fr *F = rt_alloc(sizeof *F);
F->inv_291 = inv_291;
F->arr_292 = arr_292;
F->i_293 = i_293;
F->lv_939 = NULL;
F->t_940 = NULL;
F->vt_941 = NULL;
F->c_942 = NULL;
F->fn_944 = NULL;
F->args_945 = NULL;
F->slot_946 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_292), rt_str("[", 1)), f_itos_7(F->i_293)), rt_str("]", 1)));
if ((((*(P409)rt_nil_check(F->inv_291)).kind != ((rt_int)10LL)) || ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->inv_291)).a)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P409)rt_nil_check(F->inv_291)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_944 = (*(P409)rt_nil_check(F->inv_291)).a;
F->args_945 = (*(P409)rt_nil_check(F->inv_291)).b;
if ((rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_335(F->args_945, &F->lv_939, &F->t_940, &F->c_942, &F->ro_943);
if (((*(P413)rt_nil_check(F->t_940)).kind != ((rt_int)12LL))) {
f_fail_21((*(P409)rt_nil_check(F->inv_291)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str("RECEIVE", 7))) {
F->dv_947 = NULL;
F->dt_948 = NULL;
f_lvalue_335((*(P409)rt_nil_check(F->args_945)).next, &F->dv_947, &F->dt_948, &F->c_942, &F->ro_943);
f_check_type_167(F->dt_948, (*(P413)rt_nil_check(F->t_940)).elem, (*(P409)rt_nil_check(F->inv_291)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_946, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, &", 32)), (*(P404)rt_nil_check(F->lv_939))), rt_str(", &", 3)), (*(P404)rt_nil_check(F->dv_947))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_949 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_950 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->args_945)).next, (*(P413)rt_nil_check(F->t_940)).elem, &F->vt_941));
f_check_type_167(F->vt_941, (*(P413)rt_nil_check(F->t_940)).elem, (*(P409)rt_nil_check(F->inv_291)).line);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_169((*(P413)rt_nil_check(F->t_940)).elem), rt_str(" ", 1)), F->tmp_949), rt_str(" = ", 3)), F->v_950), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_946, rt_str(" = (rt_alt){RT_ALT_SEND, 1, &", 29)), (*(P404)rt_nil_check(F->lv_939))), rt_str(", &", 3)), F->tmp_949), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_951 = rt_str_copy(f_gexpr_356(F->args_945, g_ty_int_461, &F->vt_941));
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_946, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_951), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_946, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_951), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_946, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_288(F->args_945)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->inv_291)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_944)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_wait_296(P409 s_295) {
  struct f_st_wait_296fr *F = rt_alloc(sizeof *F);
F->s_295 = s_295;
F->a_952 = NULL;
F->a_952 = (*(P409)rt_nil_check(F->s_295)).a;
F->n_953 = ((rt_int)0LL);
F->first_954 = 1;
F->inits_955 = NULL;
F->inits_955 = f_new_buffer_22();
F->arr_956 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_957 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_952 != NULL)) {
F->n_953 = rt_add(F->n_953, f_list_len_52((*(P409)rt_nil_check(F->a_952)).a));
F->a_952 = (*(P409)rt_nil_check(F->a_952)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_956), rt_str("[", 1)), f_itos_7(F->n_953)), rt_str("];", 2)); b_; }));
F->a_952 = (*(P409)rt_nil_check(F->s_295)).a;
F->n_953 = ((rt_int)0LL);
while ((F->a_952 != NULL)) {
F->inv_958 = NULL;
F->inv_958 = (*(P409)rt_nil_check(F->a_952)).a;
while ((F->inv_958 != NULL)) {
f_put_25(F->inits_955, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_294(F->inv_958, &F->arr_956, F->n_953); b_; }));
F->n_953 = rt_add(F->n_953, ((rt_int)1LL));
F->inv_958 = (*(P409)rt_nil_check(F->inv_958)).next;
}
F->a_952 = (*(P409)rt_nil_check(F->a_952)).next;
}
f_splice_32(g_code_447, F->inits_955);
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_957), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_953)), rt_str(", ", 2)), F->arr_956), rt_str(");", 2)); b_; }));
F->a_952 = (*(P409)rt_nil_check(F->s_295)).a;
F->n_953 = ((rt_int)0LL);
while ((F->a_952 != NULL)) {
F->conds_959 = NULL;
F->conds_959 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo961 = ((rt_int)1LL), hi962 = f_list_len_52((*(P409)rt_nil_check(F->a_952)).a);
for (rt_int it963 = lo961; it963 <= hi962; it963++) {
F->i_960 = it963;
F->conds_959 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->conds_959)), rt_str(" || ", 4)), F->w_957), rt_str(" == ", 4)), f_itos_7(F->n_953)); b_; }));
F->n_953 = rt_add(F->n_953, ((rt_int)1LL));
}
}
if (F->first_954) {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P404)rt_nil_check(F->conds_959))), rt_str(") {", 3)); b_; }));
} else {
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P404)rt_nil_check(F->conds_959))), rt_str(") {", 3)); b_; }));
}
F->first_954 = 0;
f_gen_body_258((*(P409)rt_nil_check(F->a_952)).b);
F->a_952 = (*(P409)rt_nil_check(F->a_952)).next;
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_298(P409 s_297) {
  struct f_st_region_298fr *F = rt_alloc(sizeof *F);
F->s_297 = s_297;
F->lv_964 = NULL;
F->t_965 = NULL;
F->c_966 = NULL;
F->lk_968 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_969 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_335((*(P409)rt_nil_check(F->s_297)).a, &F->lv_964, &F->t_965, &F->c_966, &F->ro_967);
if (((*(P413)rt_nil_check(F->t_965)).kind != ((rt_int)13LL))) {
f_fail_21((*(P409)rt_nil_check(F->s_297)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION needs a DATA_LOCK variable", 33); b_; }));
}
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_968), rt_str(" = &", 4)), (*(P404)rt_nil_check(F->lv_964))), rt_str("; rt_region_enter(", 18)), F->lk_968), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_969), rt_str(";", 1)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_969), rt_str(")) {", 4)); b_; }));
f_push_cleanup_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_969), rt_str("); rt_region_leave(", 19)), F->lk_968), rt_str(");", 2)); b_; }));
f_gen_body_258((*(P409)rt_nil_check(F->s_297)).b);
f_pop_cleanup_263();
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_969), rt_str("); rt_region_leave(", 19)), F->lk_968), rt_str(");", 2)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_969), rt_str("); rt_region_leave(", 19)), F->lk_968), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_27(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P409 f_gparam_301(P409 g_299, rstr *name_300) {
  struct f_gparam_301fr *F = rt_alloc(sizeof *F);
F->g_299 = g_299;
F->name_300 = name_300;
F->p_970 = NULL;
F->p_970 = (*(P409)rt_nil_check(F->g_299)).a;
while ((F->p_970 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_970)).name)), (*F->name_300))) {
F->result_ = F->p_970;
goto ret_;
}
F->p_970 = (*(P409)rt_nil_check(F->p_970)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_bind_sym_303(P409 p_302) {
  struct f_bind_sym_303fr *F = rt_alloc(sizeof *F);
F->p_302 = p_302;
F->y_971 = NULL;
if (((*(P409)rt_nil_check(F->p_302)).ival <= ((rt_int)2LL))) {
F->y_971 = f_new_sym_152(((rt_int)5LL), (*(P409)rt_nil_check(F->p_302)).name);
} else {
F->y_971 = f_new_sym_152(((rt_int)2LL), (*(P409)rt_nil_check(F->p_302)).name);
}
F->result_ = F->y_971;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_306(P419 a_304, P419 b_305) {
  struct f_same_binds_306fr *F = rt_alloc(sizeof *F);
F->a_304 = a_304;
F->b_305 = b_305;
F->x_972 = NULL;
F->x_972 = F->a_304;
F->y_973 = NULL;
F->y_973 = F->b_305;
while (((F->x_972 != NULL) && (F->y_973 != NULL))) {
if (((!rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->x_972)).name)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_973)).name)))) || (!f_same_binding_309(F->x_972, F->y_973)))) {
F->result_ = 0;
goto ret_;
}
F->x_972 = (*(P419)rt_nil_check(F->x_972)).mnext;
F->y_973 = (*(P419)rt_nil_check(F->y_973)).mnext;
}
F->result_ = ((F->x_972 == NULL) && (F->y_973 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_309(P419 a_307, P419 b_308) {
  struct f_same_binding_309fr *F = rt_alloc(sizeof *F);
F->a_307 = a_307;
F->b_308 = b_308;
if (((*(P419)rt_nil_check(F->a_307)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P419)rt_nil_check(F->b_308)).kind == ((rt_int)5LL)) && f_same_161((*(P419)rt_nil_check(F->a_307)).t, (*(P419)rt_nil_check(F->b_308)).t));
goto ret_;
}
if ((((*(P419)rt_nil_check(F->a_307)).kind == ((rt_int)2LL)) && (*(P419)rt_nil_check(F->a_307)).hasmv)) {
F->result_ = ((*(P419)rt_nil_check(F->b_308)).hasmv && ((*(P419)rt_nil_check(F->a_307)).mvalue == (*(P419)rt_nil_check(F->b_308)).mvalue));
goto ret_;
}
F->result_ = ((((*(P419)rt_nil_check(F->a_307)).cname != NULL) && ((*(P419)rt_nil_check(F->b_308)).cname != NULL)) && rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->a_307)).cname)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->b_308)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_instantiate_314(P419 g_310, P409 tt_311, P409 args_312, rt_int line_313) {
  struct f_instantiate_314fr *F = rt_alloc(sizeof *F);
F->g_310 = g_310;
F->tt_311 = tt_311;
F->args_312 = args_312;
F->line_313 = line_313;
F->gd_974 = NULL;
F->gd_974 = (*(P419)rt_nil_check(F->g_310)).decl;
F->pat_975 = NULL;
F->pat_975 = (*(P409)rt_nil_check(F->gd_974)).b;
F->binds_976 = NULL;
F->f_977 = NULL;
F->f_977 = (*(P409)rt_nil_check(F->pat_975)).e;
F->a_978 = NULL;
F->a_978 = F->tt_311;
F->fp_979 = NULL;
F->fp_979 = (*(P409)rt_nil_check(F->pat_975)).a;
F->inst_980 = NULL;
F->at_981 = NULL;
F->c_982 = NULL;
F->saved_fctx_983 = NULL;
F->saved_fctx_983 = g_fctx_451;
F->saved_in_984 = g_in_func_449;
F->saved_level_985 = g_cur_level_450;
F->saved_sym_986 = NULL;
F->saved_sym_986 = g_func_sym_454;
F->saved_code_987 = NULL;
F->saved_code_987 = g_code_447;
while (((F->f_977 != NULL) && (F->a_978 != NULL))) {
F->p_988 = NULL;
F->p_988 = f_gparam_301(F->gd_974, &(*(P404)rt_nil_check((*(P409)rt_nil_check(F->f_977)).name)));
F->b_989 = NULL;
if ((F->p_988 == NULL)) {
f_fail_21(F->line_313, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->f_977)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_989 = f_bind_sym_303(F->p_988);
if (((*(P409)rt_nil_check(F->p_988)).ival <= ((rt_int)2LL))) {
if (((*(P409)rt_nil_check(F->a_978)).kind >= ((rt_int)70LL))) {
(*(P419)rt_nil_check(F->b_989)).t = f_resolve_subtype_180(F->a_978, &F->c_982);
} else {
F->st_990 = NULL;
F->st_990 = f_nn_46(((rt_int)80LL), F->line_313);
(*(P409)rt_nil_check(F->st_990)).name = (*(P409)rt_nil_check(F->a_978)).name;
(*(P419)rt_nil_check(F->b_989)).t = f_resolve_subtype_180(F->st_990, &F->c_982);
}
(*(P419)rt_nil_check(F->b_989)).c = F->c_982;
} else if (((*(P409)rt_nil_check(F->p_988)).ival <= ((rt_int)5LL))) {
if ((((*(P409)rt_nil_check(F->a_978)).kind != ((rt_int)7LL)) || (f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->a_978)).name))) == NULL))) {
f_fail_21(F->line_313, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_988)).name))); b_; }));
}
F->b_989 = f_copy_sym_227(f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->a_978)).name))));
(*(P419)rt_nil_check(F->b_989)).name = (*(P409)rt_nil_check(F->p_988)).name;
} else {
(*(P419)rt_nil_check(F->b_989)).t = f_resolve_subtype_180((*(P409)rt_nil_check(F->p_988)).a, &F->c_982);
(*(P419)rt_nil_check(F->b_989)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356(F->a_978, (*(P419)rt_nil_check(F->b_989)).t, &F->at_981); b_; }));
(*(P419)rt_nil_check(F->b_989)).mvalue = f_manifest_191(F->a_978, &F->ok_991);
(*(P419)rt_nil_check(F->b_989)).hasmv = F->ok_991;
}
(*(P419)rt_nil_check(F->b_989)).mnext = F->binds_976;
F->binds_976 = F->b_989;
F->f_977 = (*(P409)rt_nil_check(F->f_977)).next;
F->a_978 = (*(P409)rt_nil_check(F->a_978)).next;
}
F->a_978 = F->args_312;
while (((F->fp_979 != NULL) && (F->a_978 != NULL))) {
if (((((*(P409)rt_nil_check((*(P409)rt_nil_check(F->fp_979)).a)).kind == ((rt_int)80LL)) && (f_gparam_301(F->gd_974, &(*(P404)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->fp_979)).a)).name))) != NULL)) && ((*(P409)rt_nil_check(f_gparam_301(F->gd_974, &(*(P404)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->fp_979)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_992 = 0;
F->q_993 = NULL;
F->q_993 = F->binds_976;
while ((F->q_993 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->q_993)).name)), (*(P404)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->fp_979)).a)).name)))) {
F->known_992 = 1;
}
F->q_993 = (*(P419)rt_nil_check(F->q_993)).mnext;
}
if ((!F->known_992)) {
F->b_994 = NULL;
F->b_994 = f_bind_sym_303(f_gparam_301(F->gd_974, &(*(P404)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->fp_979)).a)).name))));
F->v_995 = rt_str_copy(f_gexpr_356(F->a_978, NULL, &F->at_981));
(*(P419)rt_nil_check(F->b_994)).t = F->at_981;
(*(P419)rt_nil_check(F->b_994)).c = g_no_cons_471;
(*(P419)rt_nil_check(F->b_994)).mnext = F->binds_976;
F->binds_976 = F->b_994;
}
}
F->fp_979 = (*(P409)rt_nil_check(F->fp_979)).next;
F->a_978 = (*(P409)rt_nil_check(F->a_978)).next;
}
F->inst_980 = (*(P419)rt_nil_check(F->g_310)).insts;
while ((F->inst_980 != NULL)) {
if (f_same_binds_306((*(P419)rt_nil_check(F->inst_980)).members, F->binds_976)) {
F->result_ = F->inst_980;
goto ret_;
}
F->inst_980 = (*(P419)rt_nil_check(F->inst_980)).insts;
}
g_fctx_451 = NULL;
g_in_func_449 = 0;
g_cur_level_450 = ((rt_int)0LL);
g_func_sym_454 = NULL;
g_code_447 = f_new_buffer_22();
f_open_scope_148();
{
F->b_996 = NULL;
F->b_996 = F->binds_976;
while ((F->b_996 != NULL)) {
f_define_142(F->b_996, F->line_313);
F->b_996 = (*(P419)rt_nil_check(F->b_996)).mnext;
}
}
F->inst_980 = f_build_subprogram_237(F->pat_975);
(*(P419)rt_nil_check(F->inst_980)).members = F->binds_976;
(*(P419)rt_nil_check(F->inst_980)).insts = (*(P419)rt_nil_check(F->g_310)).insts;
(*(P419)rt_nil_check(F->g_310)).insts = F->inst_980;
f_define_142(F->inst_980, F->line_313);
f_gen_subprogram_254(F->pat_975, F->inst_980);
f_close_scope_149();
g_fctx_451 = F->saved_fctx_983;
g_in_func_449 = F->saved_in_984;
g_cur_level_450 = F->saved_level_985;
g_func_sym_454 = F->saved_sym_986;
g_code_447 = F->saved_code_987;
F->result_ = F->inst_980;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_316(P419 y_315) {
  struct f_access_of_316fr *F = rt_alloc(sizeof *F);
F->y_315 = y_315;
F->p_997 = NULL;
F->p_997 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P419)rt_nil_check(F->y_315)).level <= ((rt_int)0LL))) {
F->result_ = (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_315)).access));
goto ret_;
}
{ rt_int lo999 = ((rt_int)1LL), hi1000 = rt_sub(g_cur_level_450, (*(P419)rt_nil_check(F->y_315)).level);
for (rt_int it1001 = lo999; it1001 <= hi1000; it1001++) {
F->i_998 = it1001;
F->p_997 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->p_997)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P419)rt_nil_check(F->y_315)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P404)rt_nil_check(F->p_997))), rt_str("->", 2)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_315)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->p_997)), rt_str("->", 2)), (*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_315)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_import_of_319(P409 l_317, rstr *name_318) {
  struct f_import_of_319fr *F = rt_alloc(sizeof *F);
F->l_317 = l_317;
F->name_318 = name_318;
F->p_1002 = NULL;
F->p_1002 = F->l_317;
while ((F->p_1002 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_1002)).name)), (*F->name_318))) {
F->result_ = F->p_1002;
goto ret_;
}
F->p_1002 = (*(P409)rt_nil_check(F->p_1002)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_322(P419 y_320, rt_int line_321) {
  struct f_check_import_322fr *F = rt_alloc(sizeof *F);
F->y_320 = y_320;
F->line_321 = line_321;
F->c_1003 = NULL;
F->c_1003 = g_fctx_451;
F->ro_1004 = 0;
while (((F->c_1003 != NULL) && ((*(P419)rt_nil_check(F->y_320)).depth < (*(P429)rt_nil_check(F->c_1003)).depth))) {
if ((!(*(P429)rt_nil_check(F->c_1003)).all_imp)) {
F->imp_1005 = NULL;
F->imp_1005 = f_import_of_319((*(P429)rt_nil_check(F->c_1003)).imps, &(*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_320)).name)));
if ((F->imp_1005 == NULL)) {
f_fail_21(F->line_321, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_320)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P409)rt_nil_check(F->imp_1005)).ival == ((rt_int)1LL))) {
F->ro_1004 = 1;
}
}
F->c_1003 = (*(P429)rt_nil_check(F->c_1003)).next;
}
F->result_ = F->ro_1004;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_324(rstr *s_323) {
  struct f_c_ident_324fr *F = rt_alloc(sizeof *F);
F->s_323 = s_323;
if (rt_str_eq((*F->s_323), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_323), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_323));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_327(rstr *base_325, P413 t_326) {
  struct f_deref_327fr *F = rt_alloc(sizeof *F);
F->base_325 = base_325;
F->t_326 = t_326;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_169(F->t_326)), rt_str(")rt_nil_check(", 14)), (*F->base_325)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_329(P409 e_328) {
  struct f_is_lvalue_329fr *F = rt_alloc(sizeof *F);
F->e_328 = e_328;
if (((*(P409)rt_nil_check(F->e_328)).kind == ((rt_int)7LL))) {
F->y_1006 = NULL;
F->y_1006 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_328)).name)));
F->result_ = ((F->y_1006 != NULL) && (((*(P419)rt_nil_check(F->y_1006)).kind == ((rt_int)1LL)) || ((*(P419)rt_nil_check(F->y_1006)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P409)rt_nil_check(F->e_328)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_329((*(P409)rt_nil_check(F->e_328)).a);
goto ret_;
} else if (((*(P409)rt_nil_check(F->e_328)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_328)).name)), rt_str("LEN", 3))) && f_is_lvalue_329((*(P409)rt_nil_check(F->e_328)).a));
goto ret_;
} else if (((*(P409)rt_nil_check(F->e_328)).kind == ((rt_int)10LL))) {
if ((((*(P409)rt_nil_check(F->e_328)).b != NULL) && ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_328)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_329((*(P409)rt_nil_check(F->e_328)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_335(P409 e_330, P404 *code_331, P413 *t_332, P411 *c_333, int *ro_334) {
  struct f_lvalue_335fr *F = rt_alloc(sizeof *F);
F->e_330 = e_330;
F->code_331 = code_331;
F->t_332 = t_332;
F->c_333 = c_333;
F->ro_334 = ro_334;
F->base_1007 = NULL;
F->bt_1008 = NULL;
F->bc_1009 = NULL;
if (((*(P409)rt_nil_check(F->e_330)).kind == ((rt_int)7LL))) {
F->y_1010 = NULL;
F->y_1010 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_330)).name)));
if ((F->y_1010 == NULL)) {
f_fail_21((*(P409)rt_nil_check(F->e_330)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_330)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P419)rt_nil_check(F->y_1010)).kind != ((rt_int)1LL)) && ((*(P419)rt_nil_check(F->y_1010)).kind != ((rt_int)2LL)))) {
f_fail_21((*(P409)rt_nil_check(F->e_330)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_330)).name)), rt_str(" is not a variable", 18)); b_; }));
}
(*F->code_331) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_316(F->y_1010); b_; }));
(*F->t_332) = (*(P419)rt_nil_check(F->y_1010)).t;
(*F->c_333) = (*(P419)rt_nil_check(F->y_1010)).c;
(*F->ro_334) = (*(P419)rt_nil_check(F->y_1010)).ro_flag;
if ((((*(P419)rt_nil_check(F->y_1010)).kind == ((rt_int)1LL)) && f_check_import_322(F->y_1010, (*(P409)rt_nil_check(F->e_330)).line))) {
(*F->ro_334) = 1;
}
} else if (((*(P409)rt_nil_check(F->e_330)).kind == ((rt_int)17LL))) {
f_lvalue_335((*(P409)rt_nil_check(F->e_330)).a, &(*F->code_331), &(*F->t_332), &(*F->c_333), &(*F->ro_334));
} else if (((*(P409)rt_nil_check(F->e_330)).kind == ((rt_int)11LL))) {
f_lvalue_335((*(P409)rt_nil_check(F->e_330)).a, &F->base_1007, &F->bt_1008, &F->bc_1009, &(*F->ro_334));
f_select_on_343(&(*(P404)rt_nil_check(F->base_1007)), F->bt_1008, F->e_330, &(*F->ro_334), &(*F->code_331), &(*F->t_332), &(*F->c_333));
} else if (((*(P409)rt_nil_check(F->e_330)).kind == ((rt_int)10LL))) {
f_lvalue_335((*(P409)rt_nil_check(F->e_330)).a, &F->base_1007, &F->bt_1008, &F->bc_1009, &(*F->ro_334));
f_index_on_352(&(*(P404)rt_nil_check(F->base_1007)), F->bt_1008, F->e_330, &(*F->ro_334), 1, &(*F->code_331), &(*F->t_332), &(*F->c_333));
} else {
f_fail_21((*(P409)rt_nil_check(F->e_330)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  return;
}

static void f_select_on_343(rstr *base_336, P413 bt_337, P409 e_338, int *ro_339, P404 *code_340, P413 *t_341, P411 *c_342) {
  struct f_select_on_343fr *F = rt_alloc(sizeof *F);
F->base_336 = base_336;
F->bt_337 = bt_337;
F->e_338 = e_338;
F->ro_339 = ro_339;
F->code_340 = code_340;
F->t_341 = t_341;
F->c_342 = c_342;
(*F->c_342) = g_no_cons_471;
if (((*(P413)rt_nil_check(F->bt_337)).kind == ((rt_int)8LL))) {
f_finish_ptr_233(F->bt_337);
(*F->ro_339) = 0;
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_338)).name)), rt_str("ALL", 3))) {
(*F->code_340) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_327(&(*F->base_336), F->bt_337); b_; }));
(*F->t_341) = (*(P413)rt_nil_check(F->bt_337)).target;
goto ret_;
}
f_select_on_343(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_327(&(*F->base_336), F->bt_337); b_; }), (*(P413)rt_nil_check(F->bt_337)).target, F->e_338, &(*F->ro_339), &(*F->code_340), &(*F->t_341), &(*F->c_342));
goto ret_;
}
if (((*(P413)rt_nil_check(F->bt_337)).kind == ((rt_int)15LL))) {
F->p_1011 = NULL;
F->p_1011 = (*(P413)rt_nil_check(F->bt_337)).tparams;
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_338)).name)), rt_str("ALL", 3))) {
(*F->code_340) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_336), rt_str(".all", 4)); b_; }));
(*F->t_341) = (*(P413)rt_nil_check(F->bt_337)).under;
goto ret_;
}
while ((F->p_1011 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_1011)).name)), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_338)).name)))) {
(*F->code_340) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_336), rt_str(".p_", 3)), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->p_1011)).name)))); b_; }));
(*F->t_341) = g_ty_int_461;
(*F->ro_339) = 1;
goto ret_;
}
F->p_1011 = (*(P409)rt_nil_check(F->p_1011)).next;
}
f_select_on_343(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_336), rt_str(".all", 4)); b_; }), (*(P413)rt_nil_check(F->bt_337)).under, F->e_338, &(*F->ro_339), &(*F->code_340), &(*F->t_341), &(*F->c_342));
goto ret_;
}
if (((*(P413)rt_nil_check(F->bt_337)).kind == ((rt_int)7LL))) {
F->f_1012 = NULL;
F->f_1012 = (*(P413)rt_nil_check(F->bt_337)).fields;
while ((F->f_1012 != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_1012)).name)), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_338)).name)))) {
(*F->c_342) = (*(P415)rt_nil_check(F->f_1012)).c;
(*F->code_340) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_336), rt_str(".", 1)), f_lower_s_15(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_338)).name)))); b_; }));
(*F->t_341) = (*(P415)rt_nil_check(F->f_1012)).t;
goto ret_;
}
F->f_1012 = (*(P415)rt_nil_check(F->f_1012)).next;
}
f_fail_21((*(P409)rt_nil_check(F->e_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_338)).name))); b_; }));
}
f_fail_21((*(P409)rt_nil_check(F->e_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_338)).name))), rt_str(" here", 5)); b_; }));
ret_:
  return;
}

static void f_index_on_352(rstr *base_344, P413 bt_345, P409 e_346, int *ro_347, int lv_348, P404 *code_349, P413 *t_350, P411 *c_351) {
  struct f_index_on_352fr *F = rt_alloc(sizeof *F);
F->base_344 = base_344;
F->bt_345 = bt_345;
F->e_346 = e_346;
F->ro_347 = ro_347;
F->lv_348 = lv_348;
F->code_349 = code_349;
F->t_350 = t_350;
F->c_351 = c_351;
F->a_1013 = NULL;
F->a_1013 = (*(P409)rt_nil_check(F->e_346)).b;
F->it_1014 = NULL;
(*F->c_351) = g_no_cons_471;
if (((*(P413)rt_nil_check(F->bt_345)).kind == ((rt_int)8LL))) {
f_finish_ptr_233(F->bt_345);
(*F->ro_347) = 0;
f_index_on_352(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_327(&(*F->base_344), F->bt_345); b_; }), (*(P413)rt_nil_check(F->bt_345)).target, F->e_346, &(*F->ro_347), F->lv_348, &(*F->code_349), &(*F->t_350), &(*F->c_351));
goto ret_;
}
if (((*(P413)rt_nil_check(F->bt_345)).kind == ((rt_int)15LL))) {
f_index_on_352(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_344), rt_str(".all", 4)); b_; }), (*(P413)rt_nil_check(F->bt_345)).under, F->e_346, &(*F->ro_347), F->lv_348, &(*F->code_349), &(*F->t_350), &(*F->c_351));
goto ret_;
}
if ((((*(P413)rt_nil_check(F->bt_345)).kind == ((rt_int)6LL)) && ((*(P413)rt_nil_check(F->bt_345)).idx2 != NULL))) {
if ((f_list_len_52(F->a_1013) != ((rt_int)2LL))) {
f_fail_21((*(P409)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1015 = rt_str_copy(f_gexpr_356(F->a_1013, (*(P413)rt_nil_check(F->bt_345)).idx, &F->it_1014));
F->j_1016 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->a_1013)).next, (*(P413)rt_nil_check(F->bt_345)).idx2, &F->it_1014));
(*F->code_349) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_344), rt_str(".p[(rt_index(", 13)), F->i_1015), rt_str(", ", 2)), (*F->base_344)), rt_str(".lo, ", 5)), (*F->base_344)), rt_str(".hi) - ", 7)), (*F->base_344)), rt_str(".lo) * (", 8)), (*F->base_344)), rt_str(".hi2 - ", 7)), (*F->base_344)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1016), rt_str(", ", 2)), (*F->base_344)), rt_str(".lo2, ", 6)), (*F->base_344)), rt_str(".hi2) - ", 8)), (*F->base_344)), rt_str(".lo2]", 5)); b_; }));
(*F->t_350) = (*(P413)rt_nil_check(F->bt_345)).elem;
(*F->c_351) = (*(P413)rt_nil_check(F->bt_345)).elemcons;
}
goto ret_;
}
if ((f_list_len_52(F->a_1013) != ((rt_int)1LL))) {
f_fail_21((*(P409)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P413)rt_nil_check(F->bt_345)).kind == ((rt_int)5LL))) {
if (((*(P409)rt_nil_check(F->a_1013)).kind == ((rt_int)16LL))) {
F->lo_1017 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->a_1013)).a, g_ty_int_461, &F->it_1014));
F->hi_1018 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->a_1013)).b, g_ty_int_461, &F->it_1014));
(*F->code_349) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_344)), rt_str(", ", 2)), F->lo_1017), rt_str(", ", 2)), F->hi_1018), rt_str(")", 1)); b_; }));
(*F->t_350) = g_ty_string_465;
(*F->ro_347) = 1;
goto ret_;
}
{
F->i_1019 = rt_str_copy(f_gexpr_356(F->a_1013, g_ty_int_461, &F->it_1014));
(*F->t_350) = g_ty_ascii_464;
if (F->lv_348) {
(*F->code_349) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_344)), rt_str(", ", 2)), F->i_1019), rt_str("))", 2)); b_; }));
} else {
(*F->code_349) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_344)), rt_str(", ", 2)), F->i_1019), rt_str(")", 1)); b_; }));
(*F->ro_347) = 1;
}
}
goto ret_;
}
if (((*(P413)rt_nil_check(F->bt_345)).kind == ((rt_int)6LL))) {
F->i_1020 = rt_str_copy(f_gexpr_356(F->a_1013, (*(P413)rt_nil_check(F->bt_345)).idx, &F->it_1014));
(*F->code_349) = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_344), rt_str(".p[rt_index(", 12)), F->i_1020), rt_str(", ", 2)), (*F->base_344)), rt_str(".lo, ", 5)), (*F->base_344)), rt_str(".hi) - ", 7)), (*F->base_344)), rt_str(".lo]", 4)); b_; }));
(*F->t_350) = (*(P413)rt_nil_check(F->bt_345)).elem;
(*F->c_351) = (*(P413)rt_nil_check(F->bt_345)).elemcons;
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_346)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  return;
}

static rstr f_gexpr_356(P409 e_353, P413 want_354, P413 *t_355) {
  struct f_gexpr_356fr *F = rt_alloc(sizeof *F);
F->e_353 = e_353;
F->want_354 = want_354;
F->t_355 = t_355;
F->k_1021 = (*(P409)rt_nil_check(F->e_353)).kind;
F->code_1022 = NULL;
F->c_1023 = NULL;
F->bt_1025 = NULL;
(*F->t_355) = g_ty_int_461;
if ((F->k_1021 == ((rt_int)1LL))) {
if (((F->want_354 != NULL) && ((*(P413)rt_nil_check(F->want_354)).kind == ((rt_int)3LL)))) {
(*F->t_355) = g_ty_float_463;
F->result_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1021 == ((rt_int)2LL))) {
(*F->t_355) = g_ty_float_463;
F->result_ = (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name));
goto ret_;
} else if ((F->k_1021 == ((rt_int)5LL))) {
(*F->t_355) = g_ty_bool_462;
F->result_ = f_itos_7((*(P409)rt_nil_check(F->e_353)).ival);
goto ret_;
} else if ((F->k_1021 == ((rt_int)3LL))) {
(*F->t_355) = g_ty_string_465;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_362(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)))), rt_str(", ", 2)), f_itos_7(((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1021 == ((rt_int)6LL))) {
(*F->t_355) = g_ty_nil_468;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1021 == ((rt_int)4LL))) {
if (((F->want_354 != NULL) && ((*(P413)rt_nil_check(F->want_354)).kind == ((rt_int)4LL)))) {
(*F->t_355) = F->want_354;
} else {
(*F->t_355) = f_enum_type_of_365(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), (*(P409)rt_nil_check(F->e_353)).line);
}
{
F->i_1026 = f_lit_index_177((*(P413)rt_nil_check((*F->t_355))).lits, &(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)));
if ((F->i_1026 < ((rt_int)0LL))) {
f_fail_21((*(P409)rt_nil_check(F->e_353)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1026);
goto ret_;
}
} else if ((F->k_1021 == ((rt_int)17LL))) {
F->result_ = f_gexpr_356((*(P409)rt_nil_check(F->e_353)).a, F->want_354, &(*F->t_355));
goto ret_;
} else if ((F->k_1021 == ((rt_int)7LL))) {
F->y_1027 = NULL;
F->y_1027 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)));
if ((F->y_1027 == NULL)) {
if (((((((((rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_393(f_wrap_apply_360(F->e_353), 0, &(*F->t_355));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_353)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P419)rt_nil_check(F->y_1027)).kind == ((rt_int)1LL)) || ((*(P419)rt_nil_check(F->y_1027)).kind == ((rt_int)2LL)))) {
(*F->t_355) = (*(P419)rt_nil_check(F->y_1027)).t;
if (((*(P419)rt_nil_check(F->y_1027)).kind == ((rt_int)1LL))) {
F->ro_1028 = f_check_import_322(F->y_1027, (*(P409)rt_nil_check(F->e_353)).line);
}
F->result_ = f_access_of_316(F->y_1027);
goto ret_;
}
if (((*(P419)rt_nil_check(F->y_1027)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_393(f_wrap_apply_360(F->e_353), 0, &(*F->t_355));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_353)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1021 == ((rt_int)8LL)) && (f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name))) != NULL)) && (f_user_op_389(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), f_copy_node_358((*(P409)rt_nil_check(F->e_353)).a)) != NULL))) {
F->call_1029 = NULL;
F->call_1029 = f_nn_46(((rt_int)10LL), (*(P409)rt_nil_check(F->e_353)).line);
F->fname_1030 = NULL;
F->fname_1030 = f_nn_46(((rt_int)7LL), (*(P409)rt_nil_check(F->e_353)).line);
(*(P409)rt_nil_check(F->fname_1030)).name = (*(P409)rt_nil_check(F->e_353)).name;
(*(P409)rt_nil_check(F->call_1029)).a = F->fname_1030;
(*(P409)rt_nil_check(F->call_1029)).b = f_copy_node_358((*(P409)rt_nil_check(F->e_353)).a);
F->result_ = f_gcall_393(F->call_1029, 0, &(*F->t_355));
goto ret_;
} else if (((((F->k_1021 == ((rt_int)8LL)) && rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("NOT", 3))) && (F->want_354 != NULL)) && ((*(P413)rt_nil_check(F->want_354)).kind == ((rt_int)16LL)))) {
F->a_1031 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_353)).a, F->want_354, &(*F->t_355)));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1031), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_52((*(P413)rt_nil_check((*(P413)rt_nil_check(F->want_354)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1021 == ((rt_int)8LL))) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("NOT", 3))) {
F->a_1032 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_353)).a, g_ty_bool_462, &(*F->t_355)));
f_check_type_167((*F->t_355), g_ty_bool_462, (*(P409)rt_nil_check(F->e_353)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1032), rt_str(")", 1));
goto ret_;
}
{
F->a_1033 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_353)).a, F->want_354, &(*F->t_355)));
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("+", 1))) {
F->result_ = F->a_1033;
goto ret_;
} else if (((*(P413)rt_nil_check((*F->t_355))).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1033), rt_str(")", 1));
goto ret_;
}
f_check_type_167((*F->t_355), g_ty_int_461, (*(P409)rt_nil_check(F->e_353)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1033), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1021 == ((rt_int)9LL))) {
F->result_ = f_gbinop_372(F->e_353, F->want_354, &(*F->t_355));
goto ret_;
} else if ((F->k_1021 == ((rt_int)10LL))) {
if ((((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_353)).a)).kind == ((rt_int)7LL)) || ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_353)).a)).kind == ((rt_int)12LL)))) {
F->nm_1034 = NULL;
F->nm_1034 = (*(P409)rt_nil_check(F->e_353)).a;
F->y_1035 = NULL;
if (((*(P409)rt_nil_check(F->nm_1034)).kind == ((rt_int)12LL))) {
F->nm_1034 = (*(P409)rt_nil_check(F->nm_1034)).a;
}
F->y_1035 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->nm_1034)).name)));
if (((((F->y_1035 == NULL) || ((*(P419)rt_nil_check(F->y_1035)).kind == ((rt_int)3LL))) || ((*(P419)rt_nil_check(F->y_1035)).kind == ((rt_int)4LL))) || ((*(P419)rt_nil_check(F->y_1035)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_393(F->e_353, 0, &(*F->t_355));
goto ret_;
}
}
{
F->base_1036 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_353)).a, NULL, &F->bt_1025));
F->ro_1024 = 1;
f_index_on_352(&F->base_1036, F->bt_1025, F->e_353, &F->ro_1024, 0, &F->code_1022, &(*F->t_355), &F->c_1023);
F->result_ = (*(P404)rt_nil_check(F->code_1022));
goto ret_;
}
} else if ((F->k_1021 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_353)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_368(F->e_353, &(*F->t_355));
goto ret_;
}
{
F->base_1037 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_353)).a, NULL, &F->bt_1025));
F->ro_1024 = 1;
f_select_on_343(&F->base_1037, F->bt_1025, F->e_353, &F->ro_1024, &F->code_1022, &(*F->t_355), &F->c_1023);
F->result_ = (*(P404)rt_nil_check(F->code_1022));
goto ret_;
}
} else if ((F->k_1021 == ((rt_int)12LL))) {
F->result_ = f_gcall_393(f_wrap_apply_360(F->e_353), 0, &(*F->t_355));
goto ret_;
} else if ((F->k_1021 == ((rt_int)14LL))) {
F->result_ = f_constructor_376(F->e_353, F->want_354, &(*F->t_355));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_353)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_copy_node_358(P409 e_357) {
  struct f_copy_node_358fr *F = rt_alloc(sizeof *F);
F->e_357 = e_357;
F->x_1038 = NULL;
{ R410 *cell1039 = rt_alloc(sizeof(R410));
(*cell1039).name = NULL;
(*cell1039).tag = NULL;
(*cell1039).a = NULL;
(*cell1039).b = NULL;
(*cell1039).c = NULL;
(*cell1039).d = NULL;
(*cell1039).e = NULL;
(*cell1039).next = NULL;
F->x_1038 = cell1039;
}
(*(P409)rt_nil_check(F->x_1038)).kind = (*(P409)rt_nil_check(F->e_357)).kind;
(*(P409)rt_nil_check(F->x_1038)).line = (*(P409)rt_nil_check(F->e_357)).line;
(*(P409)rt_nil_check(F->x_1038)).ival = (*(P409)rt_nil_check(F->e_357)).ival;
(*(P409)rt_nil_check(F->x_1038)).flag = (*(P409)rt_nil_check(F->e_357)).flag;
(*(P409)rt_nil_check(F->x_1038)).name = (*(P409)rt_nil_check(F->e_357)).name;
(*(P409)rt_nil_check(F->x_1038)).tag = (*(P409)rt_nil_check(F->e_357)).tag;
(*(P409)rt_nil_check(F->x_1038)).a = (*(P409)rt_nil_check(F->e_357)).a;
(*(P409)rt_nil_check(F->x_1038)).b = (*(P409)rt_nil_check(F->e_357)).b;
(*(P409)rt_nil_check(F->x_1038)).c = (*(P409)rt_nil_check(F->e_357)).c;
(*(P409)rt_nil_check(F->x_1038)).d = (*(P409)rt_nil_check(F->e_357)).d;
F->result_ = F->x_1038;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P409 f_wrap_apply_360(P409 e_359) {
  struct f_wrap_apply_360fr *F = rt_alloc(sizeof *F);
F->e_359 = e_359;
F->x_1040 = NULL;
F->x_1040 = f_nn_46(((rt_int)10LL), (*(P409)rt_nil_check(F->e_359)).line);
(*(P409)rt_nil_check(F->x_1040)).a = F->e_359;
F->result_ = F->x_1040;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_362(rstr *s_361) {
  struct f_c_string_362fr *F = rt_alloc(sizeof *F);
F->s_361 = s_361;
F->n_1041 = ((rt_int)0LL);
{ rt_int lo1043 = ((rt_int)1LL), hi1044 = ((*F->s_361)).len;
for (rt_int it1045 = lo1043; it1045 <= hi1044; it1045++) {
F->i_1042 = it1045;
if (((rt_str_get((*F->s_361), F->i_1042) == 92) || (rt_str_get((*F->s_361), F->i_1042) == 63))) {
F->n_1041 = rt_add(F->n_1041, ((rt_int)1LL));
}
}
}
{
F->r_1046 = rt_str_new(rt_add(rt_add(((*F->s_361)).len, F->n_1041), ((rt_int)2LL)));
F->j_1047 = ((rt_int)1LL);
(*rt_str_at(&F->r_1046, ((rt_int)1LL))) = 34;
{ rt_int lo1049 = ((rt_int)1LL), hi1050 = ((*F->s_361)).len;
for (rt_int it1051 = lo1049; it1051 <= hi1050; it1051++) {
F->i_1048 = it1051;
F->j_1047 = rt_add(F->j_1047, ((rt_int)1LL));
if (((rt_str_get((*F->s_361), F->i_1048) == 92) || (rt_str_get((*F->s_361), F->i_1048) == 63))) {
(*rt_str_at(&F->r_1046, F->j_1047)) = 92;
F->j_1047 = rt_add(F->j_1047, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1046, F->j_1047)) = rt_str_get((*F->s_361), F->i_1048);
}
}
(*rt_str_at(&F->r_1046, rt_add(F->j_1047, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1046;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P413 f_enum_type_of_365(rstr *lit_363, rt_int line_364) {
  struct f_enum_type_of_365fr *F = rt_alloc(sizeof *F);
F->lit_363 = lit_363;
F->line_364 = line_364;
F->y_1052 = NULL;
F->y_1052 = g_scope_stack_437;
F->c_1053 = NULL;
if ((f_lit_index_177((*(P413)rt_nil_check(g_ty_ascii_464)).lits, &(*F->lit_363)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_464;
goto ret_;
}
while ((F->y_1052 != NULL)) {
if ((((((*(P419)rt_nil_check(F->y_1052)).kind == ((rt_int)6LL)) || ((*(P419)rt_nil_check(F->y_1052)).kind == ((rt_int)5LL))) && ((*(P419)rt_nil_check(F->y_1052)).st != NULL)) && ((*(P409)rt_nil_check((*(P419)rt_nil_check(F->y_1052)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_177((*(P409)rt_nil_check((*(P419)rt_nil_check(F->y_1052)).st)).a, &(*F->lit_363)) >= ((rt_int)0LL))) {
F->result_ = f_resolve_subtype_180((*(P419)rt_nil_check(F->y_1052)).st, &F->c_1053);
goto ret_;
}
}
F->y_1052 = (*(P419)rt_nil_check(F->y_1052)).stack;
}
f_fail_21(F->line_364, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_363)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_368(P409 e_366, P413 *t_367) {
  struct f_attribute_368fr *F = rt_alloc(sizeof *F);
F->e_366 = e_366;
F->t_367 = t_367;
F->bt_1054 = NULL;
F->c_1055 = NULL;
(*F->t_367) = g_ty_int_461;
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_366)).name)), rt_str("LEN", 3))) {
F->base_1056 = NULL;
F->base_1056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_356((*(P409)rt_nil_check(F->e_366)).a, NULL, &F->bt_1054); b_; }));
if (((*(P413)rt_nil_check(F->bt_1054)).kind == ((rt_int)8LL))) {
f_finish_ptr_233(F->bt_1054);
F->base_1056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_327(&(*(P404)rt_nil_check(F->base_1056)), F->bt_1054); b_; }));
F->bt_1054 = (*(P413)rt_nil_check(F->bt_1054)).target;
}
if (((*(P413)rt_nil_check(F->bt_1054)).kind != ((rt_int)5LL))) {
f_fail_21((*(P409)rt_nil_check(F->e_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P404)rt_nil_check(F->base_1056))), rt_str(").len", 5));
goto ret_;
}
if (((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_366)).a)).kind == ((rt_int)7LL))) {
F->y_1057 = NULL;
F->y_1057 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_366)).a)).name)));
if (((F->y_1057 != NULL) && (((*(P419)rt_nil_check(F->y_1057)).kind == ((rt_int)6LL)) || ((*(P419)rt_nil_check(F->y_1057)).kind == ((rt_int)5LL))))) {
F->st_1058 = NULL;
F->st_1058 = f_nn_46(((rt_int)80LL), (*(P409)rt_nil_check(F->e_366)).line);
(*(P409)rt_nil_check(F->st_1058)).name = (*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_366)).a)).name;
(*F->t_367) = f_resolve_subtype_180(F->st_1058, &F->c_1055);
if (((*(P413)rt_nil_check((*F->t_367))).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_366)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_52((*(P413)rt_nil_check((*F->t_367))).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P411)rt_nil_check(F->c_1055)).lo != NULL)) {
if (rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_366)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_1055)).lo));
goto ret_;
}
F->result_ = (*(P404)rt_nil_check((*(P411)rt_nil_check(F->c_1055)).hi));
goto ret_;
}
}
}
f_fail_21((*(P409)rt_nil_check(F->e_366)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P404)rt_nil_check((*(P409)rt_nil_check(F->e_366)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gbinop_372(P409 e_369, P413 want_370, P413 *t_371) {
  struct f_gbinop_372fr *F = rt_alloc(sizeof *F);
F->e_369 = e_369;
F->want_370 = want_370;
F->t_371 = t_371;
F->op_1059 = NULL;
F->op_1059 = (*(P409)rt_nil_check(F->e_369)).name;
F->ta_1060 = NULL;
F->tb_1061 = NULL;
F->hint_1062 = NULL;
F->uy_1063 = NULL;
(*F->t_371) = g_ty_bool_462;
if ((f_lookup_137(&(*(P404)rt_nil_check(F->op_1059))) != NULL)) {
F->l_1064 = NULL;
F->r_1065 = NULL;
F->l_1064 = f_copy_node_358((*(P409)rt_nil_check(F->e_369)).a);
F->r_1065 = f_copy_node_358((*(P409)rt_nil_check(F->e_369)).b);
(*(P409)rt_nil_check(F->l_1064)).next = F->r_1065;
F->uy_1063 = f_user_op_389(&(*(P404)rt_nil_check(F->op_1059)), F->l_1064);
if ((F->uy_1063 != NULL)) {
F->call_1066 = NULL;
F->call_1066 = f_nn_46(((rt_int)10LL), (*(P409)rt_nil_check(F->e_369)).line);
F->fname_1067 = NULL;
F->fname_1067 = f_nn_46(((rt_int)7LL), (*(P409)rt_nil_check(F->e_369)).line);
(*(P409)rt_nil_check(F->fname_1067)).name = F->op_1059;
(*(P409)rt_nil_check(F->call_1066)).a = F->fname_1067;
(*(P409)rt_nil_check(F->call_1066)).b = F->l_1064;
F->result_ = f_gcall_393(F->call_1066, 0, &(*F->t_371));
goto ret_;
}
}
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("IN", 2))) {
F->s_1068 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).b, NULL, &F->tb_1061));
if (((*(P413)rt_nil_check(F->tb_1061)).kind != ((rt_int)16LL))) {
f_fail_21((*(P409)rt_nil_check(F->e_369)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1069 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).a, (*(P413)rt_nil_check(F->tb_1061)).elem, &F->ta_1060));
f_check_type_167(F->ta_1060, (*(P413)rt_nil_check(F->tb_1061)).elem, (*(P409)rt_nil_check(F->e_369)).line);
(*F->t_371) = g_ty_bool_462;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1069), rt_str(", ", 2)), F->s_1068), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("AND", 3)) || rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("OR", 2))) || rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("XOR", 3))) && (F->want_370 != NULL)) && ((*(P413)rt_nil_check(F->want_370)).kind == ((rt_int)16LL)))) {
F->a_1070 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).a, F->want_370, &F->ta_1060));
F->b_1071 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).b, F->want_370, &F->tb_1061));
f_check_type_167(F->tb_1061, F->ta_1060, (*(P409)rt_nil_check(F->e_369)).line);
(*F->t_371) = F->ta_1060;
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1070), rt_str(", ", 2)), F->b_1071), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1070), rt_str(", ", 2)), F->b_1071), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1070), rt_str(", ", 2)), F->b_1071), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("AND", 3)) || rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("OR", 2))) || rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("XOR", 3)))) {
F->a_1072 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).a, g_ty_bool_462, &F->ta_1060));
F->b_1073 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).b, g_ty_bool_462, &F->tb_1061));
f_check_type_167(F->ta_1060, g_ty_bool_462, (*(P409)rt_nil_check(F->e_369)).line);
f_check_type_167(F->tb_1061, g_ty_bool_462, (*(P409)rt_nil_check(F->e_369)).line);
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1072), rt_str(" && ", 4)), F->b_1073), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1072), rt_str(" || ", 4)), F->b_1073), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1072), rt_str(" != ", 4)), F->b_1073), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("&", 1))) {
F->wa_1074 = NULL;
F->wb_1075 = NULL;
if (((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_369)).a)).kind == ((rt_int)4LL))) {
F->wa_1074 = g_ty_ascii_464;
}
if (((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_369)).b)).kind == ((rt_int)4LL))) {
F->wb_1075 = g_ty_ascii_464;
}
{
F->a_1076 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).a, F->wa_1074, &F->ta_1060));
F->b_1077 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).b, F->wb_1075, &F->tb_1061));
(*F->t_371) = g_ty_string_465;
if ((((*(P413)rt_nil_check(F->ta_1060)).kind == ((rt_int)5LL)) && ((*(P413)rt_nil_check(F->tb_1061)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1076), rt_str(", ", 2)), F->b_1077), rt_str(")", 1));
goto ret_;
} else if ((((*(P413)rt_nil_check(F->ta_1060)).kind == ((rt_int)5LL)) && ((*(P413)rt_nil_check(F->tb_1061)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1076), rt_str(", ", 2)), F->b_1077), rt_str(")", 1));
goto ret_;
} else if ((((*(P413)rt_nil_check(F->ta_1060)).kind == ((rt_int)4LL)) && ((*(P413)rt_nil_check(F->tb_1061)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1076), rt_str(", ", 2)), F->b_1077), rt_str(")", 1));
goto ret_;
} else if ((((*(P413)rt_nil_check(F->ta_1060)).kind == ((rt_int)4LL)) && ((*(P413)rt_nil_check(F->tb_1061)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1076), rt_str(", ", 2)), F->b_1077), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_369)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_91(&(*(P404)rt_nil_check(F->op_1059))) && (!rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("IN", 2))))) {
if (((((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_369)).a)).kind == ((rt_int)4LL)) || ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_369)).a)).kind == ((rt_int)6LL))) || ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->e_369)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1078 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).b, NULL, &F->hint_1062));
}
{
F->a_1079 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).a, F->hint_1062, &F->ta_1060));
F->b_1080 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).b, F->ta_1060, &F->tb_1061));
F->ct_1081 = NULL;
F->ct_1081 = F->ta_1060;
(*F->t_371) = g_ty_bool_462;
if ((((*(P413)rt_nil_check(F->ta_1060)).kind != ((rt_int)11LL)) && ((*(P413)rt_nil_check(F->tb_1061)).kind != ((rt_int)11LL)))) {
f_check_type_167(F->tb_1061, F->ta_1060, (*(P409)rt_nil_check(F->e_369)).line);
}
if (((*(P413)rt_nil_check(F->ta_1060)).kind == ((rt_int)11LL))) {
F->ct_1081 = F->tb_1061;
}
if (((*(P413)rt_nil_check(F->ct_1081)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1079), rt_str(", ", 2)), F->b_1080), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1079), rt_str(", ", 2)), F->b_1080), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1079), rt_str(", ", 2)), F->b_1080), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1079), rt_str(", ", 2)), F->b_1080), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1080), rt_str(", ", 2)), F->a_1079), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1080), rt_str(", ", 2)), F->a_1079), rt_str(")", 1));
goto ret_;
}
if (((*(P413)rt_nil_check(F->ct_1081)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1079), rt_str(", ", 2)), F->b_1080), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1079), rt_str(", ", 2)), F->b_1080), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1079), rt_str(", ", 2)), F->b_1080), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1080), rt_str(", ", 2)), F->a_1079), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_369)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_195(F->ct_1081)) {
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("=", 1))) {
F->result_ = f_eq_code_207(F->ct_1081, &F->a_1079, &F->b_1080);
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_207(F->ct_1081, &F->a_1079, &F->b_1080)), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_369)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1079), rt_str(" == ", 4)), F->b_1080), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1079), rt_str(" != ", 4)), F->b_1080), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1079), rt_str(" ", 1)), (*(P404)rt_nil_check(F->op_1059))), rt_str(" ", 1)), F->b_1080), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1082 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).a, F->want_370, &F->ta_1060));
F->b_1083 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->e_369)).b, F->ta_1060, &F->tb_1061));
if ((((*(P413)rt_nil_check(F->ta_1060)).kind == ((rt_int)3LL)) || ((*(P413)rt_nil_check(F->tb_1061)).kind == ((rt_int)3LL)))) {
(*F->t_371) = g_ty_float_463;
if (((rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("+", 1)) || rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("-", 1))) || rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1082), rt_str(" ", 1)), (*(P404)rt_nil_check(F->op_1059))), rt_str(" ", 1)), F->b_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
}
}
f_check_type_167(F->ta_1060, g_ty_int_461, (*(P409)rt_nil_check(F->e_369)).line);
f_check_type_167(F->tb_1061, g_ty_int_461, (*(P409)rt_nil_check(F->e_369)).line);
(*F->t_371) = g_ty_int_461;
if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P404)rt_nil_check(F->op_1059)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1082), rt_str(", ", 2)), F->b_1083), rt_str(")", 1));
goto ret_;
}
f_fail_21((*(P409)rt_nil_check(F->e_369)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P404)rt_nil_check(F->op_1059))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_constructor_376(P409 e_373, P413 want_374, P413 *t_375) {
  struct f_constructor_376fr *F = rt_alloc(sizeof *F);
F->e_373 = e_373;
F->want_374 = want_374;
F->t_375 = t_375;
F->it_1084 = NULL;
F->it_1084 = (*(P409)rt_nil_check(F->e_373)).a;
F->f_1085 = NULL;
F->vt_1086 = NULL;
if (((F->want_374 != NULL) && ((*(P413)rt_nil_check(F->want_374)).kind == ((rt_int)16LL)))) {
F->s_1087 = NULL;
F->s_1087 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
(*F->t_375) = F->want_374;
while ((F->it_1084 != NULL)) {
F->v_1088 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->it_1084)).b, (*(P413)rt_nil_check(F->want_374)).elem, &F->vt_1086));
f_check_type_167(F->vt_1086, (*(P413)rt_nil_check(F->want_374)).elem, (*(P409)rt_nil_check(F->e_373)).line);
F->s_1087 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P404)rt_nil_check(F->s_1087))), rt_str(", ", 2)), F->v_1088), rt_str(")", 1)); b_; }));
F->it_1084 = (*(P409)rt_nil_check(F->it_1084)).next;
}
F->result_ = (*(P404)rt_nil_check(F->s_1087));
goto ret_;
}
if (((F->want_374 != NULL) && ((*(P413)rt_nil_check(F->want_374)).kind == ((rt_int)15LL)))) {
f_fail_21((*(P409)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P404)rt_nil_check((*(P413)rt_nil_check(F->want_374)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_374 != NULL) && ((*(P413)rt_nil_check(F->want_374)).kind == ((rt_int)6LL))) && ((*(P413)rt_nil_check(F->want_374)).idx2 == NULL))) {
F->tmp_1089 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1090 = rt_str_copy(f_ctype_169(F->want_374));
F->et_1091 = rt_str_copy(f_ctype_169((*(P413)rt_nil_check(F->want_374)).elem));
F->parts_1092 = NULL;
(*F->t_375) = F->want_374;
if (((((F->it_1084 != NULL) && ((*(P409)rt_nil_check(F->it_1084)).a != NULL)) && ((*(P409)rt_nil_check((*(P409)rt_nil_check(F->it_1084)).a)).b != NULL)) && ((*(P409)rt_nil_check(F->it_1084)).next == NULL))) {
F->lo_1093 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check((*(P409)rt_nil_check(F->it_1084)).a)).a, (*(P413)rt_nil_check(F->want_374)).idx, &F->vt_1086));
F->hi_1094 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check((*(P409)rt_nil_check(F->it_1084)).a)).b, (*(P413)rt_nil_check(F->want_374)).idx, &F->vt_1086));
F->v_1095 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->it_1084)).b, (*(P413)rt_nil_check(F->want_374)).elem, &F->vt_1086));
f_check_type_167(F->vt_1086, (*(P413)rt_nil_check(F->want_374)).elem, (*(P409)rt_nil_check(F->e_373)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1090), rt_str(" ", 1)), F->tmp_1089), rt_str("; ", 2)), F->tmp_1089), rt_str(".lo = ", 6)), F->lo_1093), rt_str("; ", 2)), F->tmp_1089), rt_str(".hi = ", 6)), F->hi_1094), rt_str("; ", 2)), F->tmp_1089), rt_str(".lo2 = ", 7)), F->tmp_1089), rt_str(".hi2 = 1; ", 10)), F->tmp_1089), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1091), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1089), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1089), rt_str("); i_++) ", 9)), F->tmp_1089), rt_str(".p[i_] = ", 9)), f_copy_code_203((*(P413)rt_nil_check(F->want_374)).elem, &F->v_1095)), rt_str("; ", 2)), F->tmp_1089), rt_str("; })", 4));
goto ret_;
}
F->parts_1092 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1090), rt_str(" ", 1)), F->tmp_1089), rt_str("; ", 2)), F->tmp_1089), rt_str(".lo = 1; ", 9)), F->tmp_1089), rt_str(".hi = ", 6)), f_itos_7(f_list_len_52(F->it_1084))), rt_str("; ", 2)), F->tmp_1089), rt_str(".lo2 = ", 7)), F->tmp_1089), rt_str(".hi2 = 1; ", 10)), F->tmp_1089), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1091), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_52(F->it_1084), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1097 = ((rt_int)0LL), hi1098 = rt_sub(f_list_len_52((*(P409)rt_nil_check(F->e_373)).a), ((rt_int)1LL));
for (rt_int it1099 = lo1097; it1099 <= hi1098; it1099++) {
F->i_1096 = it1099;
if (((*(P409)rt_nil_check(F->it_1084)).a != NULL)) {
f_fail_21((*(P409)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1100 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->it_1084)).b, (*(P413)rt_nil_check(F->want_374)).elem, &F->vt_1086));
f_check_type_167(F->vt_1086, (*(P413)rt_nil_check(F->want_374)).elem, (*(P409)rt_nil_check(F->e_373)).line);
F->parts_1092 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->parts_1092)), rt_str(" ", 1)), F->tmp_1089), rt_str(".p[", 3)), f_itos_7(F->i_1096)), rt_str("] = ", 4)), f_copy_code_203((*(P413)rt_nil_check(F->want_374)).elem, &F->v_1100)), rt_str(";", 1)); b_; }));
}
F->it_1084 = (*(P409)rt_nil_check(F->it_1084)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->parts_1092)), rt_str(" ", 1)), F->tmp_1089), rt_str("; })", 4));
goto ret_;
}
if (((F->want_374 == NULL) || ((*(P413)rt_nil_check(F->want_374)).kind != ((rt_int)7LL)))) {
f_fail_21((*(P409)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
(*F->t_375) = F->want_374;
F->f_1085 = (*(P413)rt_nil_check(F->want_374)).fields;
{
F->tmp_1101 = rt_str_copy(f_new_name_18(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1102 = NULL;
F->parts_1102 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_169(F->want_374)), rt_str(" ", 1)), F->tmp_1101), rt_str(";", 1)); b_; }));
if (((f_list_len_52(F->it_1084) != ((rt_int)0LL)) && (f_list_len_52(F->it_1084) != ((rt_int)0LL)))) {
while (((F->it_1084 != NULL) && (F->f_1085 != NULL))) {
if (((((*(P409)rt_nil_check(F->it_1084)).a == NULL) || ((*(P409)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->it_1084)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P404)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check((*(P409)rt_nil_check(F->it_1084)).a)).a)).name)), (*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_1085)).name)))))) {
f_fail_21((*(P409)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_1085)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1103 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->it_1084)).b, (*(P415)rt_nil_check(F->f_1085)).t, &F->vt_1086));
f_check_type_167(F->vt_1086, (*(P415)rt_nil_check(F->f_1085)).t, (*(P409)rt_nil_check(F->e_373)).line);
F->parts_1102 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->parts_1102)), rt_str(" ", 1)), F->tmp_1101), rt_str(".", 1)), f_lower_s_15(&(*(P404)rt_nil_check((*(P415)rt_nil_check(F->f_1085)).name)))), rt_str(" = ", 3)), f_copy_code_203((*(P415)rt_nil_check(F->f_1085)).t, &F->v_1103)), rt_str(";", 1)); b_; }));
}
F->it_1084 = (*(P409)rt_nil_check(F->it_1084)).next;
F->f_1085 = (*(P415)rt_nil_check(F->f_1085)).next;
}
}
if (((F->it_1084 != NULL) || (F->f_1085 != NULL))) {
f_fail_21((*(P409)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->parts_1102)), rt_str(" ", 1)), F->tmp_1101), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_fits_379(P419 y_377, P409 args_378) {
  struct f_fits_379fr *F = rt_alloc(sizeof *F);
F->y_377 = y_377;
F->args_378 = args_378;
F->a_1104 = NULL;
F->a_1104 = F->args_378;
F->pm_1105 = NULL;
F->pm_1105 = (*(P419)rt_nil_check(F->y_377)).params;
F->t_1106 = NULL;
F->saved_1107 = NULL;
F->saved_1107 = g_code_447;
F->ok_1108 = 1;
F->lv_1109 = NULL;
F->lc_1110 = NULL;
g_trial_459 = rt_add(g_trial_459, ((rt_int)1LL));
g_code_447 = f_new_buffer_22();
{ rt_frame xf1112;
if (RT_TRY(xf1112)) {
while (((F->ok_1108 && (F->a_1104 != NULL)) && (F->pm_1105 != NULL))) {
if ((((*(P417)rt_nil_check(F->pm_1105)).mode == ((rt_int)2LL)) || ((*(P417)rt_nil_check(F->pm_1105)).mode == ((rt_int)3LL)))) {
f_lvalue_335(F->a_1104, &F->lv_1109, &F->t_1106, &F->lc_1110, &F->ro_1111);
} else {
F->v_1114 = rt_str_copy(f_gexpr_356(F->a_1104, (*(P417)rt_nil_check(F->pm_1105)).t, &F->t_1106));
}
if ((!(f_same_161(F->t_1106, (*(P417)rt_nil_check(F->pm_1105)).t) || (((*(P413)rt_nil_check(F->t_1106)).kind == ((rt_int)11LL)) && ((*(P413)rt_nil_check((*(P417)rt_nil_check(F->pm_1105)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1108 = 0;
}
F->a_1104 = (*(P409)rt_nil_check(F->a_1104)).next;
F->pm_1105 = (*(P417)rt_nil_check(F->pm_1105)).next;
}
if (((F->a_1104 != NULL) || (F->pm_1105 != NULL))) {
F->ok_1108 = 0;
}
RT_POP(xf1112);
} else {
RT_POP(xf1112);
int x1113 = rt_xcur;
if (0 || x1113 == ex_compile_error_1) {
F->ok_1108 = 0;
} else {
rt_raise(x1113);
}
}
}
g_trial_459 = rt_sub(g_trial_459, ((rt_int)1LL));
g_code_447 = F->saved_1107;
F->result_ = F->ok_1108;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_resolve_overload_384(rstr *name_380, P409 args_381, int is_stmt_382, rt_int line_383) {
  struct f_resolve_overload_384fr *F = rt_alloc(sizeof *F);
F->name_380 = name_380;
F->args_381 = args_381;
F->is_stmt_382 = is_stmt_382;
F->line_383 = line_383;
F->y_1115 = NULL;
F->y_1115 = (*(P425)rt_nil_check(g_table_435)).p[rt_index(f_hash_135(&(*F->name_380)), (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo];
F->first_1116 = NULL;
F->n_1117 = ((rt_int)0LL);
while ((F->y_1115 != NULL)) {
if ((rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_1115)).name)), (*F->name_380)) && (((*(P419)rt_nil_check(F->y_1115)).kind == ((rt_int)3LL)) || ((*(P419)rt_nil_check(F->y_1115)).kind == ((rt_int)4LL))))) {
F->n_1117 = rt_add(F->n_1117, ((rt_int)1LL));
if ((F->first_1116 == NULL)) {
F->first_1116 = F->y_1115;
}
if (((((*(P419)rt_nil_check(F->y_1115)).kind == ((rt_int)4LL)) == F->is_stmt_382) && f_fits_379(F->y_1115, F->args_381))) {
F->result_ = F->y_1115;
goto ret_;
}
}
F->y_1115 = (*(P419)rt_nil_check(F->y_1115)).chain;
}
if (f_is_builtin_386(&(*F->name_380))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1117 > ((rt_int)1LL))) {
f_fail_21(F->line_383, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_380)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1116;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_386(rstr *n_385) {
  struct f_is_builtin_386fr *F = rt_alloc(sizeof *F);
F->n_385 = n_385;
F->result_ = ((((((((((((((rt_str_eq((*F->n_385), rt_str("ABS", 3)) || rt_str_eq((*F->n_385), rt_str("POS", 3))) || rt_str_eq((*F->n_385), rt_str("SUCC", 4))) || rt_str_eq((*F->n_385), rt_str("PRED", 4))) || rt_str_eq((*F->n_385), rt_str("SQRT", 4))) || rt_str_eq((*F->n_385), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_385), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_385), rt_str("WRITE", 5))) || rt_str_eq((*F->n_385), rt_str("READLN", 6))) || rt_str_eq((*F->n_385), rt_str("SEND", 4))) || rt_str_eq((*F->n_385), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_385), rt_str("DELAY", 5))) || rt_str_eq((*F->n_385), rt_str("TIME", 4))) || rt_str_eq((*F->n_385), rt_str("CNVT", 4))) || rt_str_eq((*F->n_385), rt_str("FORMAT", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P419 f_user_op_389(rstr *op_387, P409 args_388) {
  struct f_user_op_389fr *F = rt_alloc(sizeof *F);
F->op_387 = op_387;
F->args_388 = args_388;
F->y_1118 = NULL;
F->y_1118 = (*(P425)rt_nil_check(g_table_435)).p[rt_index(f_hash_135(&(*F->op_387)), (*(P425)rt_nil_check(g_table_435)).lo, (*(P425)rt_nil_check(g_table_435)).hi) - (*(P425)rt_nil_check(g_table_435)).lo];
while ((F->y_1118 != NULL)) {
if (((rt_str_eq((*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_1118)).name)), (*F->op_387)) && ((*(P419)rt_nil_check(F->y_1118)).kind == ((rt_int)3LL))) && f_fits_379(F->y_1118, F->args_388))) {
F->result_ = F->y_1118;
goto ret_;
}
F->y_1118 = (*(P419)rt_nil_check(F->y_1118)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_393(P409 e_390, int is_stmt_391, P413 *t_392) {
  struct f_gcall_393fr *F = rt_alloc(sizeof *F);
F->e_390 = e_390;
F->is_stmt_391 = is_stmt_391;
F->t_392 = t_392;
F->fn_1119 = NULL;
F->fn_1119 = (*(P409)rt_nil_check(F->e_390)).a;
F->tt_1120 = NULL;
F->y_1121 = NULL;
F->args_1122 = NULL;
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1123 = NULL;
F->a_1123 = (*(P409)rt_nil_check(F->e_390)).b;
F->pm_1124 = NULL;
F->lt_1125 = NULL;
F->vt_1126 = NULL;
F->lv_1127 = NULL;
F->lc_1128 = NULL;
if (((*(P409)rt_nil_check(F->fn_1119)).kind == ((rt_int)12LL))) {
F->tt_1120 = (*(P409)rt_nil_check(F->fn_1119)).b;
F->fn_1119 = (*(P409)rt_nil_check(F->fn_1119)).a;
}
F->y_1121 = f_lookup_137(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)));
if ((F->y_1121 == NULL)) {
F->result_ = f_builtin_400(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)), F->tt_1120, (*(P409)rt_nil_check(F->e_390)).b, (*(P409)rt_nil_check(F->e_390)).line, F->is_stmt_391, &(*F->t_392));
goto ret_;
}
if (((*(P419)rt_nil_check(F->y_1121)).kind == ((rt_int)10LL))) {
F->y_1121 = f_instantiate_314(F->y_1121, F->tt_1120, (*(P409)rt_nil_check(F->e_390)).b, (*(P409)rt_nil_check(F->e_390)).line);
} else if ((((*(P419)rt_nil_check(F->y_1121)).kind == ((rt_int)3LL)) || ((*(P419)rt_nil_check(F->y_1121)).kind == ((rt_int)4LL)))) {
F->y_1121 = f_resolve_overload_384(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)), (*(P409)rt_nil_check(F->e_390)).b, F->is_stmt_391, (*(P409)rt_nil_check(F->e_390)).line);
if ((F->y_1121 == NULL)) {
F->result_ = f_builtin_400(&(*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)), F->tt_1120, (*(P409)rt_nil_check(F->e_390)).b, (*(P409)rt_nil_check(F->e_390)).line, F->is_stmt_391, &(*F->t_392));
goto ret_;
}
}
if ((((*(P419)rt_nil_check(F->y_1121)).kind != ((rt_int)3LL)) && ((*(P419)rt_nil_check(F->y_1121)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P409)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_391 && ((*(P419)rt_nil_check(F->y_1121)).kind != ((rt_int)4LL)))) {
f_fail_21((*(P409)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_391) && ((*(P419)rt_nil_check(F->y_1121)).kind != ((rt_int)3LL)))) {
f_fail_21((*(P409)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1124 = (*(P419)rt_nil_check(F->y_1121)).params;
if (((*(P419)rt_nil_check(F->y_1121)).level > ((rt_int)0LL))) {
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1131 = ((rt_int)1LL), hi1132 = rt_sub(g_cur_level_450, (*(P419)rt_nil_check(F->y_1121)).level);
for (rt_int it1133 = lo1131; it1133 <= hi1132; it1133++) {
F->i_1130 = it1133;
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->args_1122)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1123 != NULL) && (F->pm_1124 != NULL))) {
if ((((*(P404)rt_nil_check(F->args_1122))).len > ((rt_int)0LL))) {
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->args_1122)), rt_str(", ", 2)); b_; }));
}
if ((((*(P417)rt_nil_check(F->pm_1124)).mode == ((rt_int)2LL)) || ((*(P417)rt_nil_check(F->pm_1124)).mode == ((rt_int)3LL)))) {
f_lvalue_335(F->a_1123, &F->lv_1127, &F->lt_1125, &F->lc_1128, &F->ro_1129);
if (F->ro_1129) {
f_fail_21((*(P409)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check((*(P417)rt_nil_check(F->pm_1124)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_167(F->lt_1125, (*(P417)rt_nil_check(F->pm_1124)).t, (*(P409)rt_nil_check(F->e_390)).line);
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->args_1122)), rt_str("&", 1)), (*(P404)rt_nil_check(F->lv_1127))); b_; }));
} else if ((((*(P417)rt_nil_check(F->pm_1124)).mode == ((rt_int)4LL)) && f_is_lvalue_329(F->a_1123))) {
f_lvalue_335(F->a_1123, &F->lv_1127, &F->lt_1125, &F->lc_1128, &F->ro_1129);
f_check_type_167(F->lt_1125, (*(P417)rt_nil_check(F->pm_1124)).t, (*(P409)rt_nil_check(F->e_390)).line);
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->args_1122)), rt_str("&", 1)), (*(P404)rt_nil_check(F->lv_1127))); b_; }));
} else if (((*(P417)rt_nil_check(F->pm_1124)).mode == ((rt_int)4LL))) {
F->v_1134 = rt_str_copy(f_gexpr_356(F->a_1123, (*(P417)rt_nil_check(F->pm_1124)).t, &F->vt_1126));
F->ct_1135 = rt_str_copy(f_ctype_169((*(P417)rt_nil_check(F->pm_1124)).t));
f_check_type_167(F->vt_1126, (*(P417)rt_nil_check(F->pm_1124)).t, (*(P409)rt_nil_check(F->e_390)).line);
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->args_1122)), rt_str("({ ", 3)), F->ct_1135), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1135), rt_str(")); *b_ = ", 10)), F->v_1134), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1136 = rt_str_copy(f_gexpr_356(F->a_1123, (*(P417)rt_nil_check(F->pm_1124)).t, &F->vt_1126));
f_check_type_167(F->vt_1126, (*(P417)rt_nil_check(F->pm_1124)).t, (*(P409)rt_nil_check(F->e_390)).line);
if (((((*(P413)rt_nil_check((*(P417)rt_nil_check(F->pm_1124)).t)).kind == ((rt_int)1LL)) && ((*(P417)rt_nil_check(F->pm_1124)).c != NULL)) && (*(P411)rt_nil_check((*(P417)rt_nil_check(F->pm_1124)).c)).hasm)) {
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->args_1122)), rt_str("rt_range(", 9)), F->v_1136), rt_str(", ", 2)), f_itos_7((*(P411)rt_nil_check((*(P417)rt_nil_check(F->pm_1124)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P411)rt_nil_check((*(P417)rt_nil_check(F->pm_1124)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P404)rt_nil_check(F->args_1122)), F->v_1136); b_; }));
}
}
F->a_1123 = (*(P409)rt_nil_check(F->a_1123)).next;
F->pm_1124 = (*(P417)rt_nil_check(F->pm_1124)).next;
}
if (((F->a_1123 != NULL) || (F->pm_1124 != NULL))) {
f_fail_21((*(P409)rt_nil_check(F->e_390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check((*(P409)rt_nil_check(F->fn_1119)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_52((*(P409)rt_nil_check(F->e_390)).b), f_list_len_52(F->a_1123)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
(*F->t_392) = (*(P419)rt_nil_check(F->y_1121)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check((*(P419)rt_nil_check(F->y_1121)).cname)), rt_str("(", 1)), (*(P404)rt_nil_check(F->args_1122))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_builtin_400(rstr *name_394, P409 tt_395, P409 args_396, rt_int line_397, int is_stmt_398, P413 *t_399) {
  struct f_builtin_400fr *F = rt_alloc(sizeof *F);
F->name_394 = name_394;
F->tt_395 = tt_395;
F->args_396 = args_396;
F->line_397 = line_397;
F->is_stmt_398 = is_stmt_398;
F->t_399 = t_399;
F->at_1137 = NULL;
F->n_1138 = f_list_len_52(F->args_396);
(*F->t_399) = g_ty_void_466;
if (((rt_str_eq((*F->name_394), rt_str("POS", 3)) || rt_str_eq((*F->name_394), rt_str("SUCC", 4))) || rt_str_eq((*F->name_394), rt_str("PRED", 4)))) {
F->a_1139 = rt_str_copy(f_gexpr_356(F->args_396, NULL, &F->at_1137));
if (rt_str_eq((*F->name_394), rt_str("POS", 3))) {
if (((*(P413)rt_nil_check(F->at_1137)).kind != ((rt_int)4LL))) {
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
(*F->t_399) = g_ty_int_461;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1139), rt_str(") + 1)", 6));
goto ret_;
}
(*F->t_399) = F->at_1137;
if (((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_394), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1139), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1139), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_394), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1139), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P413)rt_nil_check(F->at_1137)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1139), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_52((*(P413)rt_nil_check(F->at_1137)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_394), rt_str("SQRT", 4)) || rt_str_eq((*F->name_394), rt_str("SIN", 3))) || rt_str_eq((*F->name_394), rt_str("COS", 3))) || rt_str_eq((*F->name_394), rt_str("EXP", 3))) || rt_str_eq((*F->name_394), rt_str("LN", 2))) || rt_str_eq((*F->name_394), rt_str("FLOOR", 5)))) {
F->a_1140 = rt_str_copy(f_gexpr_356(F->args_396, g_ty_float_463, &F->at_1137));
(*F->t_399) = g_ty_float_463;
if (rt_str_eq((*F->name_394), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1140), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_394)), rt_str("(", 1)), F->a_1140), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("IFLOAT", 6))) {
F->a_1141 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->args_396)).next, g_ty_int_461, &F->at_1137));
(*F->t_399) = g_ty_float_463;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1141), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("IFIX", 4))) {
F->a_1142 = rt_str_copy(f_gexpr_356(F->args_396, g_ty_float_463, &F->at_1137));
(*F->t_399) = g_ty_int_461;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1142), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("FORMAT", 6))) {
F->a_1143 = rt_str_copy(f_gexpr_356(F->args_396, g_ty_float_463, &F->at_1137));
F->n1_1144 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->args_396)).next, g_ty_int_461, &F->at_1137));
F->m1_1145 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check((*(P409)rt_nil_check(F->args_396)).next)).next, g_ty_int_461, &F->at_1137));
(*F->t_399) = g_ty_string_465;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1143), rt_str(", ", 2)), F->n1_1144), rt_str(", ", 2)), F->m1_1145), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("ABS", 3))) {
F->a_1146 = rt_str_copy(f_gexpr_356(F->args_396, NULL, &F->at_1137));
(*F->t_399) = F->at_1137;
if (((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1146), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1146), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("CNVT", 4))) {
if ((F->tt_395 == NULL)) {
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1147 = rt_str_copy(f_gexpr_356(F->args_396, NULL, &F->at_1137));
if ((((*(P409)rt_nil_check(F->tt_395)).kind == ((rt_int)73LL)) && ((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)1LL)))) {
(*F->t_399) = g_ty_string_465;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1147), rt_str(")", 1));
goto ret_;
} else if ((((*(P409)rt_nil_check(F->tt_395)).kind == ((rt_int)73LL)) && ((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)3LL)))) {
(*F->t_399) = g_ty_string_465;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1147), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P409)rt_nil_check(F->tt_395)).kind == ((rt_int)73LL)) && ((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)2LL)))) {
(*F->t_399) = g_ty_string_465;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1147), rt_str(") \? rt_str(", 11)), f_q_16()), rt_str("TRUE", 4)), f_q_16()), rt_str(", 4) : rt_str(", 14)), f_q_16()), rt_str("FALSE", 5)), f_q_16()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P409)rt_nil_check(F->tt_395)).kind == ((rt_int)70LL)) && ((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)5LL)))) {
(*F->t_399) = g_ty_int_461;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1147), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_394), rt_str("WRITELN", 7))) {
if ((F->n_1138 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1148 = NULL;
F->last_1148 = F->args_396;
while (((*(P409)rt_nil_check(F->last_1148)).next != NULL)) {
F->last_1148 = (*(P409)rt_nil_check(F->last_1148)).next;
}
{
F->a_1149 = rt_str_copy(f_gexpr_356(F->last_1148, g_ty_string_465, &F->at_1137));
f_check_type_167(F->at_1137, g_ty_string_465, F->line_397);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1149), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_394), rt_str("WRITE", 5))) {
F->a_1150 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->args_396)).next, NULL, &F->at_1137));
if (((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1150), rt_str(")", 1));
goto ret_;
} else if (((*(P413)rt_nil_check(F->at_1137)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1150), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_394), rt_str("READLN", 6))) {
F->lv_1151 = NULL;
F->lc_1152 = NULL;
F->last_1154 = NULL;
F->last_1154 = F->args_396;
while (((*(P409)rt_nil_check(F->last_1154)).next != NULL)) {
F->last_1154 = (*(P409)rt_nil_check(F->last_1154)).next;
}
f_lvalue_335(F->last_1154, &F->lv_1151, &F->at_1137, &F->lc_1152, &F->ro_1153);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P404)rt_nil_check(F->lv_1151))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("SIZELN", 6))) {
(*F->t_399) = g_ty_int_461;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("EOF", 3))) {
(*F->t_399) = g_ty_bool_462;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_394), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_394), rt_str("SYS_OUT", 7)))) {
(*F->t_399) = g_ty_file_467;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_394), rt_str("OPEN", 4)) || rt_str_eq((*F->name_394), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_394), rt_str("SEND", 4)) || rt_str_eq((*F->name_394), rt_str("RECEIVE", 7)))) {
F->lv_1155 = NULL;
F->dv_1156 = NULL;
F->lc_1157 = NULL;
F->mt_1159 = NULL;
F->dt_1160 = NULL;
f_lvalue_335(F->args_396, &F->lv_1155, &F->mt_1159, &F->lc_1157, &F->ro_1158);
if (((*(P413)rt_nil_check(F->mt_1159)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_394), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_394), rt_str("RECEIVE", 7))) {
f_lvalue_335((*(P409)rt_nil_check(F->args_396)).next, &F->dv_1156, &F->dt_1160, &F->lc_1157, &F->ro_1158);
f_check_type_167(F->dt_1160, (*(P413)rt_nil_check(F->mt_1159)).elem, F->line_397);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(&", 12), (*(P404)rt_nil_check(F->lv_1155))), rt_str(", &", 3)), (*(P404)rt_nil_check(F->dv_1156))), rt_str(")", 1));
goto ret_;
}
{
F->v_1161 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->args_396)).next, (*(P413)rt_nil_check(F->mt_1159)).elem, &F->at_1137));
f_check_type_167(F->at_1137, (*(P413)rt_nil_check(F->mt_1159)).elem, F->line_397);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_169((*(P413)rt_nil_check(F->mt_1159)).elem)), rt_str(" m_ = ", 6)), F->v_1161), rt_str("; rt_send(&", 11)), (*(P404)rt_nil_check(F->lv_1155))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_394), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_394), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1162 = NULL;
F->lc_1163 = NULL;
F->mt_1165 = NULL;
f_lvalue_335(F->args_396, &F->lv_1162, &F->mt_1165, &F->lc_1163, &F->ro_1164);
if (((*(P413)rt_nil_check(F->mt_1165)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_394), rt_str(" needs a mailbox", 16)); b_; }));
}
(*F->t_399) = g_ty_int_461;
if (rt_str_eq((*F->name_394), rt_str("FULL_SLOTS", 10))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_mbox_count(&", 15), (*(P404)rt_nil_check(F->lv_1162))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P404)rt_nil_check(F->lv_1162))), rt_str(".cap - rt_mbox_count(&", 22)), (*(P404)rt_nil_check(F->lv_1162))), rt_str("))", 2));
goto ret_;
} else if ((rt_str_eq((*F->name_394), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_394), rt_str("COND_RECEIVE", 12)))) {
F->lv_1166 = NULL;
F->dv_1167 = NULL;
F->bv_1168 = NULL;
F->lc_1169 = NULL;
F->mt_1171 = NULL;
F->dt_1172 = NULL;
F->bt_1173 = NULL;
f_lvalue_335(F->args_396, &F->lv_1166, &F->mt_1171, &F->lc_1169, &F->ro_1170);
if (((*(P413)rt_nil_check(F->mt_1171)).kind != ((rt_int)12LL))) {
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_394), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_335((*(P409)rt_nil_check((*(P409)rt_nil_check(F->args_396)).next)).next, &F->bv_1168, &F->bt_1173, &F->lc_1169, &F->ro_1170);
f_check_type_167(F->bt_1173, g_ty_bool_462, F->line_397);
if (rt_str_eq((*F->name_394), rt_str("COND_RECEIVE", 12))) {
f_lvalue_335((*(P409)rt_nil_check(F->args_396)).next, &F->dv_1167, &F->dt_1172, &F->lc_1169, &F->ro_1170);
f_check_type_167(F->dt_1172, (*(P413)rt_nil_check(F->mt_1171)).elem, F->line_397);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P404)rt_nil_check(F->bv_1168)), rt_str(" = rt_cond_receive(&", 20)), (*(P404)rt_nil_check(F->lv_1166))), rt_str(", &", 3)), (*(P404)rt_nil_check(F->dv_1167))), rt_str(")", 1));
goto ret_;
}
{
F->v_1174 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->args_396)).next, (*(P413)rt_nil_check(F->mt_1171)).elem, &F->at_1137));
f_check_type_167(F->at_1137, (*(P413)rt_nil_check(F->mt_1171)).elem, F->line_397);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_169((*(P413)rt_nil_check(F->mt_1171)).elem)), rt_str(" m_ = ", 6)), F->v_1174), rt_str("; ", 2)), (*(P404)rt_nil_check(F->bv_1168))), rt_str(" = rt_cond_send(&", 17)), (*(P404)rt_nil_check(F->lv_1166))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_394), rt_str("PRIORITY", 8))) {
(*F->t_399) = g_ty_int_461;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_288(F->args_396)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("SET_PRIORITY", 12))) {
F->v_1175 = rt_str_copy(f_gexpr_356((*(P409)rt_nil_check(F->args_396)).next, g_ty_int_461, &F->at_1137));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_288(F->args_396)), rt_str(", ", 2)), F->v_1175), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_288(F->args_396)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("ACTIVE", 6))) {
(*F->t_399) = g_ty_bool_462;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_288(F->args_396)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("DELAY", 5))) {
F->v_1176 = rt_str_copy(f_gexpr_356(F->args_396, g_ty_int_461, &F->at_1137));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1176), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("DELAY_UNTIL", 11))) {
F->v_1177 = rt_str_copy(f_gexpr_356(F->args_396, g_ty_int_461, &F->at_1137));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1177), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_288(F->args_396)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("TIME", 4))) {
(*F->t_399) = g_ty_int_461;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_394), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_394), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_394), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_394), rt_str("HOURS", 5)))) {
(*F->t_399) = g_ty_int_461;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_394));
goto ret_;
} else if (rt_str_eq((*F->name_394), rt_str("HALT", 4))) {
F->a_1178 = rt_str_copy(f_gexpr_356(F->args_396, g_ty_int_461, &F->at_1137));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1178), rt_str(")", 1));
goto ret_;
}
f_fail_21(F->line_397, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_394), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_translate_402(P409 units_401) {
  struct f_translate_402fr *F = rt_alloc(sizeof *F);
F->units_401 = units_401;
F->u_1179 = NULL;
F->u_1179 = F->units_401;
while ((F->u_1179 != NULL)) {
if (((*(P409)rt_nil_check(F->u_1179)).next == NULL)) {
f_declare_body_219((*(P409)rt_nil_check(F->u_1179)).c);
f_body_elements_256((*(P409)rt_nil_check(F->u_1179)).c);
} else {
f_gen_capsule_229(F->u_1179);
}
F->u_1179 = (*(P409)rt_nil_check(F->u_1179)).next;
}
ret_:
  return;
}

static void f_print_program_403(void) {
  struct f_print_program_403fr *F = rt_alloc(sizeof *F);
f_emit_helpers_215();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_16()), rt_str("paleo.h", 7)), f_q_16()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_29(g_out_types_440);
f_print_buffer_29(g_out_frames_453);
f_print_buffer_29(g_out_helpers_441);
f_print_buffer_29(g_out_protos_442);
f_print_buffer_29(g_out_globals_443);
f_print_buffer_29(g_out_funcs_444);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_29(g_out_excs_446);
f_print_buffer_29(g_out_init_445);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R430(R430 *d, R430 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R430 cp_R430(R430 s) {
  R430 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R430(R430 a, R430 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R428(R428 *d, R428 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R428 cp_R428(R428 s) {
  R428 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R428(R428 a, R428 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A426(A426 *d, A426 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A426 cp_A426(A426 s) {
  A426 d = s; d.p = rt_alloc(sizeof(P419) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A426(A426 a, A426 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R424(R424 *d, R424 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R424 cp_R424(R424 s) {
  R424 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R424(R424 a, R424 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R422(R422 *d, R422 s) {
  d->s = s.s;
  d->next = s.next;
}
static R422 cp_R422(R422 s) {
  R422 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R422(R422 a, R422 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R420(R420 *d, R420 s) {
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
static R420 cp_R420(R420 s) {
  R420 d = s;
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
static int eq_R420(R420 a, R420 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R418(R418 *d, R418 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R418 cp_R418(R418 s) {
  R418 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R418(R418 a, R418 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R416(R416 *d, R416 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R416 cp_R416(R416 s) {
  R416 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R416(R416 a, R416 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R414(R414 *d, R414 s) {
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
static R414 cp_R414(R414 s) {
  R414 d = s;
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
static int eq_R414(R414 a, R414 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R412(R412 *d, R412 s) {
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
static R412 cp_R412(R412 s) {
  R412 d = s;
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
static int eq_R412(R412 a, R412 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R410(R410 *d, R410 s) {
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
static R410 cp_R410(R410 s) {
  R410 d = s;
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
static int eq_R410(R410 a, R410 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A408(A408 *d, A408 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A408 cp_A408(A408 s) {
  A408 d = s; d.p = rt_alloc(sizeof(P405) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A408(A408 a, A408 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R406(R406 *d, R406 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R406 cp_R406(R406 s) {
  R406 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R406(R406 a, R406 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_431 = NULL;
g_ntoks_432 = ((rt_int)0LL);
g_tpos_433 = ((rt_int)1LL);
g_src_line_434 = ((rt_int)0LL);
g_table_435 = NULL;
g_depth_436 = ((rt_int)0LL);
g_scope_stack_437 = NULL;
g_all_types_438 = NULL;
g_serial_439 = ((rt_int)0LL);
g_out_types_440 = NULL;
g_out_helpers_441 = NULL;
g_out_protos_442 = NULL;
g_out_globals_443 = NULL;
g_out_funcs_444 = NULL;
g_out_init_445 = NULL;
g_out_excs_446 = NULL;
g_code_447 = NULL;
g_fields_buf_448 = NULL;
g_in_func_449 = 0;
g_cur_level_450 = ((rt_int)0LL);
g_fctx_451 = NULL;
g_st_field_452 = NULL;
g_out_frames_453 = NULL;
g_func_sym_454 = NULL;
g_exits_455 = NULL;
g_frames_456 = ((rt_int)0LL);
g_handlers_457 = NULL;
g_cleanups_458 = NULL;
g_trial_459 = ((rt_int)0LL);
g_mcopies_460 = NULL;
g_ty_int_461 = NULL;
g_ty_bool_462 = NULL;
g_ty_float_463 = NULL;
g_ty_ascii_464 = NULL;
g_ty_string_465 = NULL;
g_ty_void_466 = NULL;
g_ty_file_467 = NULL;
g_ty_nil_468 = NULL;
g_ty_lock_469 = NULL;
g_ty_act_470 = NULL;
g_no_cons_471 = NULL;
{ A408 *cell1180 = rt_alloc(sizeof(A408));
rt_int pv1181 = ((rt_int)1000000LL);
(*cell1180).lo = ((rt_int)1LL); (*cell1180).hi = pv1181; (*cell1180).lo2 = 1; (*cell1180).hi2 = 1;
(*cell1180).p = rt_alloc(sizeof(P405) * (size_t)RT_CNT((*cell1180)));
for (rt_int i1182 = 0; i1182 < RT_CNT((*cell1180)); i1182++) {
(*cell1180).p[i1182] = NULL;
}
g_toks_431 = cell1180;
}
{ A426 *cell1183 = rt_alloc(sizeof(A426));
rt_int pv1184 = ((rt_int)4093LL);
(*cell1183).lo = ((rt_int)0LL); (*cell1183).hi = pv1184; (*cell1183).lo2 = 1; (*cell1183).hi2 = 1;
(*cell1183).p = rt_alloc(sizeof(P419) * (size_t)RT_CNT((*cell1183)));
for (rt_int i1185 = 0; i1185 < RT_CNT((*cell1183)); i1185++) {
(*cell1183).p[i1185] = NULL;
}
g_table_435 = cell1183;
}
g_out_types_440 = f_new_buffer_22();
g_out_helpers_441 = f_new_buffer_22();
g_out_protos_442 = f_new_buffer_22();
g_out_globals_443 = f_new_buffer_22();
g_out_funcs_444 = f_new_buffer_22();
g_out_init_445 = f_new_buffer_22();
g_out_excs_446 = f_new_buffer_22();
g_out_frames_453 = f_new_buffer_22();
g_code_447 = g_out_init_445;
g_no_cons_471 = f_new_cons_155();
g_ty_int_461 = f_new_typ_154(((rt_int)1LL));
g_ty_bool_462 = f_new_typ_154(((rt_int)2LL));
g_ty_float_463 = f_new_typ_154(((rt_int)3LL));
g_ty_string_465 = f_new_typ_154(((rt_int)5LL));
g_ty_void_466 = f_new_typ_154(((rt_int)9LL));
g_ty_file_467 = f_new_typ_154(((rt_int)10LL));
g_ty_nil_468 = f_new_typ_154(((rt_int)11LL));
g_ty_lock_469 = f_new_typ_154(((rt_int)13LL));
g_ty_act_470 = f_new_typ_154(((rt_int)14LL));
{ rt_frame xf1186;
if (RT_TRY(xf1186)) {
f_init_ascii_174();
f_read_source_43();
f_translate_402(f_program_133());
f_print_program_403();
RT_POP(xf1186);
} else {
RT_POP(xf1186);
int x1187 = rt_xcur;
if (0 || x1187 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1187);
}
}
}
  rt_main_done();
  return 0;
}
